/* ---------- headers */

#include "omaha\hs\hs_function.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

extern long * __cdecl hs_macro_function_evaluate(short, long, bool);
extern void __cdecl hs_evaluate(short);
extern void __cdecl hs_return(long, long);

void __cdecl evaluate_hs_evaluate_1_evaluate(short function_index, long thread_index, bool initialize)
{
	if (long* actual_parameters = hs_macro_function_evaluate(function_index, thread_index, initialize))
	{
        hs_evaluate(*reinterpret_cast<short*>(&actual_parameters[0]));
		hs_return(thread_index, 0);
	}
}

// long const hs_function_table_count; // "?hs_function_table_count@@3JB"
// public: static enum e_cui_property_binding_flags const c_flags_no_init<enum e_cui_property_binding_flags, unsigned short, 3, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_cui_property_binding_flags@@G$02Us_default_enum_string_resolver@@@@2W4e_cui_property_binding_flags@@B"
// public: static unsigned int const c_online_marketplace_purchase_task::k_max_offer_count; // "?k_max_offer_count@c_online_marketplace_purchase_task@@2IB"
// public: static int const c_enum_no_init<enum e_event_type, char, 0, 17, struct s_default_enum_string_resolver>::k_minimum_value; // "?k_minimum_value@?$c_enum_no_init@W4e_event_type@@D$0A@$0BB@Us_default_enum_string_resolver@@@@2HB"
// public: static enum e_event_type const c_enum_no_init<enum e_event_type, char, 0, 17, struct s_default_enum_string_resolver>::k_maximum_value_plus_one; // "?k_maximum_value_plus_one@?$c_enum_no_init@W4e_event_type@@D$0A@$0BB@Us_default_enum_string_resolver@@@@2W4e_event_type@@B"
// public: static int const c_enum_no_init<enum e_controller_component, char, 0, 30, struct s_default_enum_string_resolver>::k_minimum_value; // "?k_minimum_value@?$c_enum_no_init@W4e_controller_component@@D$0A@$0BO@Us_default_enum_string_resolver@@@@2HB"
// public: static enum e_controller_component const c_enum_no_init<enum e_controller_component, char, 0, 30, struct s_default_enum_string_resolver>::k_maximum_value_plus_one; // "?k_maximum_value_plus_one@?$c_enum_no_init@W4e_controller_component@@D$0A@$0BO@Us_default_enum_string_resolver@@@@2W4e_controller_component@@B"
// public: static int const c_enum_no_init<enum c_exit_experience_pipe::e_state, unsigned char, 0, 16, struct s_default_enum_string_resolver>::k_minimum_value; // "?k_minimum_value@?$c_enum_no_init@W4e_state@c_exit_experience_pipe@@E$0A@$0BA@Us_default_enum_string_resolver@@@@2HB"
// public: static enum c_exit_experience_pipe::e_state const c_enum_no_init<enum c_exit_experience_pipe::e_state, unsigned char, 0, 16, struct s_default_enum_string_resolver>::k_maximum_value_plus_one; // "?k_maximum_value_plus_one@?$c_enum_no_init@W4e_state@c_exit_experience_pipe@@E$0A@$0BA@Us_default_enum_string_resolver@@@@2W4e_state@c_exit_experience_pipe@@B"
// struct hs_function_definition const **hs_function_table; // "?hs_function_table@@3PAPBUhs_function_definition@@A"

// void evaluate_hs_evaluate_1_evaluate(short, long, bool);
// void not_hs_not_1_evaluate(short, long, bool);
// void pin_hs_pin_3_evaluate(short, long, bool);
// void dummy_function_hs_dummy_function_0_evaluate(short, long, bool);
// void print_hs_print_1_evaluate(short, long, bool);
// void log_print_hs_log_print_1_evaluate(short, long, bool);
// void debug_scripting_show_thread_hs_scripting_show_thread_2_evaluate(short, long, bool);
// void debug_script_thread_hs_scripting_debug_thread_2_evaluate(short, long, bool);
// void debug_scripting_hs_enable_debug_scripting_1_evaluate(short, long, bool);
// void debug_scripting_globals_hs_enable_debug_globals_1_evaluate(short, long, bool);
// void debug_scripting_variable_hs_debug_variable_2_evaluate(short, long, bool);
// void debug_scripting_variable_all_hs_debug_variable_all_1_evaluate(short, long, bool);
// void breakpoint_hs_breakpoint_1_evaluate(short, long, bool);
// void kill_active_scripts_hs_scripting_kill_all_threads_0_evaluate(short, long, bool);
// void get_executing_running_thread_hs_scripting_get_executing_thread_index_0_evaluate(short, long, bool);
// void kill_thread_hs_scripting_kill_running_thread_1_evaluate(short, long, bool);
// void script_started_hs_script_started_1_evaluate(short, long, bool);
// void script_finished_hs_script_finished_1_evaluate(short, long, bool);
// void local_players_hs_local_players_0_evaluate(short, long, bool);
// void players_hs_players_0_evaluate(short, long, bool);
// void players_human_hs_players_human_0_evaluate(short, long, bool);
// void players_elite_hs_players_elite_0_evaluate(short, long, bool);
// void player_get_hs_player_get_1_evaluate(short, long, bool);
// void player_in_game_get_hs_player_in_game_get_1_evaluate(short, long, bool);
// void human_player_in_game_get_hs_human_player_in_game_get_1_evaluate(short, long, bool);
// void elite_player_in_game_get_hs_elite_player_in_game_get_1_evaluate(short, long, bool);
// void player_is_in_game_player_is_active_and_in_game_hs_1_evaluate(short, long, bool);
// void editor_mode_game_in_editor_0_evaluate(short, long, bool);
// void kill_volume_enable_scenario_kill_trigger_volume_enable_1_evaluate(short, long, bool);
// void kill_volume_disable_scenario_kill_trigger_volume_disable_1_evaluate(short, long, bool);
// void volume_teleport_players_not_inside_hs_teleport_players_not_in_trigger_volume_2_evaluate(short, long, bool);
// void volume_test_object_scenario_trigger_volume_test_object_2_evaluate(short, long, bool);
// void volume_test_objects_hs_trigger_volume_test_objects_any_2_evaluate(short, long, bool);
// void volume_test_objects_all_hs_trigger_volume_test_objects_all_2_evaluate(short, long, bool);
// void volume_test_players_scenario_trigger_volume_test_players_1_evaluate(short, long, bool);
// void volume_test_players_all_scenario_trigger_volume_test_players_all_1_evaluate(short, long, bool);
// void volume_return_objects_scenario_trigger_volume_return_objects_1_evaluate(short, long, bool);
// void volume_return_objects_by_type_scenario_trigger_volume_return_objects_by_type_2_evaluate(short, long, bool);
// void volume_return_objects_by_campaign_type_scenario_trigger_volume_return_objects_by_campaign_metagame_type_2_evaluate(short, long, bool);
// void zone_set_trigger_volume_enable_zone_set_switch_trigger_volume_enable_2_evaluate(short, long, bool);
// void list_get_hs_object_list_get_element_2_evaluate(short, long, bool);
// void list_count_object_list_count_1_evaluate(short, long, bool);
// void list_count_not_dead_object_list_count_not_dead_1_evaluate(short, long, bool);
// void effect_new_hs_effect_new_2_evaluate(short, long, bool);
// void effect_new_random_hs_effect_new_random_2_evaluate(short, long, bool);
// void effect_new_random_hs_effect_new_random2_4_evaluate(short, long, bool);
// void effect_new_at_ai_point_hs_effect_new_at_ai_point_2_evaluate(short, long, bool);
// void effect_new_at_point_set_point_hs_effect_new_at_point_set_point_3_evaluate(short, long, bool);
// void effect_new_on_object_marker_hs_effect_new_from_object_marker_3_evaluate(short, long, bool);
// void effect_new_on_object_marker_loop_hs_effect_new_from_object_marker_loop_3_evaluate(short, long, bool);
// void effect_stop_object_marker_hs_effect_stop_from_object_marker_3_evaluate(short, long, bool);
// void effect_new_on_ground_hs_effect_new_on_ground_2_evaluate(short, long, bool);
// void damage_new_hs_damage_new_2_evaluate(short, long, bool);
// void damage_object_effect_hs_damage_object_effect_2_evaluate(short, long, bool);
// void damage_objects_effect_hs_damage_object_effect_list_2_evaluate(short, long, bool);
// void damage_object_hs_damage_object_3_evaluate(short, long, bool);
// void damage_objects_hs_damage_object_list_3_evaluate(short, long, bool);
// void damage_players_hs_damage_players_1_evaluate(short, long, bool);
// void soft_ceiling_enable_scenario_soft_ceiling_enable_2_evaluate(short, long, bool);
// void object_create_hs_object_create_1_evaluate(short, long, bool);
// void object_create_variant_hs_object_create_variant_2_evaluate(short, long, bool);
// void object_create_clone_hs_object_create_clone_1_evaluate(short, long, bool);
// void object_create_anew_hs_object_create_anew_1_evaluate(short, long, bool);
// void object_create_if_necessary_hs_object_create_if_necessary_1_evaluate(short, long, bool);
// void object_create_folder_hs_object_create_folder_1_evaluate(short, long, bool);
// void object_create_folder_anew_hs_object_create_folder_anew_1_evaluate(short, long, bool);
// void object_destroy_hs_object_destroy_1_evaluate(short, long, bool);
// void object_destroy_all_hs_object_destroy_all_0_evaluate(short, long, bool);
// void object_destroy_type_mask_hs_object_destroy_all_type_mask_1_evaluate(short, long, bool);
// void objects_delete_by_definition_hs_objects_delete_by_definition_1_evaluate(short, long, bool);
// void object_destroy_folder_hs_object_destroy_folder_1_evaluate(short, long, bool);
// void object_hide_hs_object_hide_2_evaluate(short, long, bool);
// void object_set_shadowless_hs_object_set_shadowless_2_evaluate(short, long, bool);
// void object_set_allegiance_game_allegiance_set_object_team_2_evaluate(short, long, bool);
// void object_buckling_magnitude_get_hs_object_buckling_magnitude_get_1_evaluate(short, long, bool);
// void object_function_set_scripted_object_function_set_2_evaluate(short, long, bool);
// void object_set_function_variable_object_scripting_set_function_variable_4_evaluate(short, long, bool);
// void object_set_cinematic_function_variable_object_scripting_set_cinematic_function_variable_4_evaluate(short, long, bool);
// void object_clear_cinematic_function_variable_object_scripting_clear_cinematic_function_variable_2_evaluate(short, long, bool);
// void object_clear_all_cinematic_function_variables_object_scripting_clear_all_cinematic_function_variables_1_evaluate(short, long, bool);
// void object_dynamic_simulation_disable_object_scripting_dynamic_simulation_disable_2_evaluate(short, long, bool);
// void object_set_phantom_power_object_scripting_set_phantom_power_2_evaluate(short, long, bool);
// void object_wake_physics_object_scripting_wake_physics_1_evaluate(short, long, bool);
// void object_get_at_rest_object_scripting_get_at_rest_1_evaluate(short, long, bool);
// void object_set_ranged_attack_inhibited_object_set_ranged_attack_inhibited_2_evaluate(short, long, bool);
// void object_set_melee_attack_inhibited_object_set_melee_attack_inhibited_2_evaluate(short, long, bool);
// void objects_dump_memory_objects_dump_memory_0_evaluate(short, long, bool);
// void object_get_health_object_scripting_get_health_1_evaluate(short, long, bool);
// void object_get_shield_object_scripting_get_shield_1_evaluate(short, long, bool);
// void object_set_shield_effect_object_scripting_set_shield_effect_3_evaluate(short, long, bool);
// void object_set_physics_object_scripting_set_physics_2_evaluate(short, long, bool);
// void object_get_parent_object_scripting_get_parent_1_evaluate(short, long, bool);
// void objects_attach_objects_scripting_attach_4_evaluate(short, long, bool);
// void object_at_marker_object_at_marker_2_evaluate(short, long, bool);
// void objects_detach_objects_scripting_detach_2_evaluate(short, long, bool);
// void object_set_scale_objects_scripting_set_scale_3_evaluate(short, long, bool);
// void object_set_velocity_object_scripting_set_velocity_2_evaluate(short, long, bool);
// void object_get_bsp_object_scripting_get_bsp_index_1_evaluate(short, long, bool);
// void object_set_as_fireteam_target_object_scripting_mark_object_2_evaluate(short, long, bool);
// void object_is_reserved_object_scripting_is_object_reserved_1_evaluate(short, long, bool);
// void object_set_velocity_object_scripting_set_velocity2_4_evaluate(short, long, bool);
// void object_set_deleted_when_deactivated_object_scripting_set_deleted_when_deactivated_1_evaluate(short, long, bool);
// void object_copy_player_appearance_object_scripting_copy_player_appearance_2_evaluate(short, long, bool);
// void object_model_target_destroyed_object_model_target_destroyed_2_evaluate(short, long, bool);
// void object_model_targets_destroyed_object_model_targets_destroyed_2_evaluate(short, long, bool);
// void object_enable_damage_section_object_enable_damage_section_by_name_3_evaluate(short, long, bool);
// void object_disable_damage_section_object_disable_damage_section_by_name_2_evaluate(short, long, bool);
// void object_damage_damage_section_object_damage_damage_section_hs_3_evaluate(short, long, bool);
// void object_cannot_die_object_scripting_cannot_die_2_evaluate(short, long, bool);
// void object_cannot_die_except_kill_volumes_object_scripting_cannot_die_except_for_kill_volumes_2_evaluate(short, long, bool);
// void object_ignores_emp_object_scripting_ignores_emp_2_evaluate(short, long, bool);
// void object_vitality_pinned_object_scripting_vitality_pinned_1_evaluate(short, long, bool);
// void garbage_collect_now_garbage_collect_now_0_evaluate(short, long, bool);
// void garbage_collect_unsafe_garbage_collect_unsafe_0_evaluate(short, long, bool);
// void garbage_collect_multiplayer_game_engine_garbage_collect_0_evaluate(short, long, bool);
// void object_cannot_take_damage_object_cannot_take_damage_1_evaluate(short, long, bool);
// void object_get_recent_body_damage_object_get_recent_body_damage_1_evaluate(short, long, bool);
// void object_get_recent_shield_damage_object_get_recent_shield_damage_1_evaluate(short, long, bool);
// void object_can_take_damage_object_can_take_damage_1_evaluate(short, long, bool);
// void object_immune_to_friendly_damage_object_set_friendly_damage_immunity_2_evaluate(short, long, bool);
// void object_cinematic_lod_object_cinematic_lod_2_evaluate(short, long, bool);
// void object_cinematic_collision_object_cinematic_collision_2_evaluate(short, long, bool);
// void object_cinematic_visibility_object_cinematic_visibility_2_evaluate(short, long, bool);
// void objects_predict_hs_objects_predict_old_1_evaluate(short, long, bool);
// void objects_predict_high_hs_objects_predict_high_1_evaluate(short, long, bool);
// void objects_predict_low_hs_objects_predict_low_1_evaluate(short, long, bool);
// void object_type_predict_high_hs_object_definition_predict_all_1_evaluate(short, long, bool);
// void object_type_predict_low_hs_object_definition_predict_low_1_evaluate(short, long, bool);
// void object_type_predict_hs_object_definition_predict_old_1_evaluate(short, long, bool);
// void hs_object_definition_predict_old(long);
// void object_teleport_hs_object_teleport_2_evaluate(short, long, bool);
// void object_teleport_to_ai_point_hs_object_teleport_ai_2_evaluate(short, long, bool);
// void object_set_facing_hs_object_set_facing_2_evaluate(short, long, bool);
// void object_set_shield_hs_object_set_shield_normalized_2_evaluate(short, long, bool);
// void object_set_shield_stun_hs_object_set_shield_stun_2_evaluate(short, long, bool);
// void object_set_shield_stun_infinite_hs_object_set_shield_stun_infinite_1_evaluate(short, long, bool);
// void object_set_permutation_hs_object_set_permutation_3_evaluate(short, long, bool);
// void object_set_variant_hs_object_set_variant_2_evaluate(short, long, bool);
// void object_set_region_state_hs_object_set_region_state_3_evaluate(short, long, bool);
// void object_set_model_state_property_hs_object_set_model_state_property_3_evaluate(short, long, bool);
// void objects_can_see_object_hs_objects_can_see_object_3_evaluate(short, long, bool);
// void objects_can_see_flag_hs_objects_can_see_flag_3_evaluate(short, long, bool);
// void objects_distance_to_object_hs_objects_distance_to_object_2_evaluate(short, long, bool);
// void objects_distance_to_flag_hs_objects_distance_to_flag_2_evaluate(short, long, bool);
// void objects_distance_to_point_hs_objects_distance_to_point_2_evaluate(short, long, bool);
// void map_info_hs_map_info_0_evaluate(short, long, bool);
// void position_predict_hs_position_predict_3_evaluate(short, long, bool);
// void shader_predict_hs_shader_predict_1_evaluate(short, long, bool);
// void bitmap_predict_hs_bitmap_predict_1_evaluate(short, long, bool);
// void script_recompile_hs_recompile_0_evaluate(short, long, bool);
// void script_doc_hs_doc_0_evaluate(short, long, bool);
// void help_hs_help_1_evaluate(short, long, bool);
// void game_engine_objects_game_engine_get_game_object_list_0_evaluate(short, long, bool);
// void random_range_hs_random_range_2_evaluate(short, long, bool);
// void real_random_range_hs_real_random_range_2_evaluate(short, long, bool);
// void physics_constants_reset_physics_constants_reset_0_evaluate(short, long, bool);
// void physics_set_gravity_physics_constants_set_gravity_halo_relative_1_evaluate(short, long, bool);
// void physics_set_velocity_frame_global_physics_velocity_frame_set_3_evaluate(short, long, bool);
// void physics_disable_character_ground_adhesion_forces_disable_character_ground_adhesion_forces_1_evaluate(short, long, bool);
// void havok_debug_start_havok_debug_start_0_evaluate(short, long, bool);
// void havok_debug_stop_havok_debug_stop_0_evaluate(short, long, bool);
// void havok_dump_world_havok_dump_world_2_evaluate(short, long, bool);
// void havok_dump_world_close_movie_havok_dump_world_close_movie_0_evaluate(short, long, bool);
// void havok_profile_start_havok_profile_start_0_evaluate(short, long, bool);
// void havok_profile_stop_havok_profile_stop_0_evaluate(short, long, bool);
// void havok_profile_range_havok_profile_range_2_evaluate(short, long, bool);
// void havok_reset_allocated_state_havok_reset_allocated_state_0_evaluate(short, long, bool);
// void breakable_surfaces_enable_breakable_surfaces_enable_1_evaluate(short, long, bool);
// void breakable_surfaces_reset_breakable_surfaces_reset_0_evaluate(short, long, bool);
// void recording_play_recorded_animation_play_2_evaluate(short, long, bool);
// void recording_play_and_delete_recorded_animation_play_and_delete_2_evaluate(short, long, bool);
// void recording_play_and_hover_recorded_animation_play_and_hover_2_evaluate(short, long, bool);
// void recording_kill_recorded_animation_kill_1_evaluate(short, long, bool);
// void recording_time_recorded_animation_get_time_left_for_scripting_1_evaluate(short, long, bool);
// void render_lights_lights_enable_1_evaluate(short, long, bool);
// void print_light_state_dump_light_state_0_evaluate(short, long, bool);
// void render_lights_enable_cinematic_shadow_render_light_set_cinematic_shadow_4_evaluate(short, long, bool);
// void texture_camera_set_object_marker_render_texture_camera_set_object_marker_3_evaluate(short, long, bool);
// void texture_camera_set_position_render_texture_camera_set_position_3_evaluate(short, long, bool);
// void texture_camera_set_target_render_texture_camera_set_target_3_evaluate(short, long, bool);
// void texture_camera_attach_to_object_render_texture_camera_attach_to_object_2_evaluate(short, long, bool);
// void texture_camera_target_object_render_texture_camera_target_object_2_evaluate(short, long, bool);
// void texture_camera_position_world_offset_render_texture_camera_position_world_offset_3_evaluate(short, long, bool);
// void texture_camera_on_render_texture_camera_on_0_evaluate(short, long, bool);
// void texture_camera_bink_render_texture_camera_bink_0_evaluate(short, long, bool);
// void texture_camera_off_render_texture_camera_off_0_evaluate(short, long, bool);
// void texture_camera_set_aspect_ratio_render_texture_camera_set_aspect_ratio_1_evaluate(short, long, bool);
// void texture_camera_set_resolution_render_texture_camera_set_resolution_2_evaluate(short, long, bool);
// void texture_camera_render_mode_render_texture_camera_render_mode_1_evaluate(short, long, bool);
// void texture_camera_set_fov_render_texture_camera_set_fov_1_evaluate(short, long, bool);
// void texture_camera_set_fov_frame_target_render_texture_camera_set_fov_frame_target_1_evaluate(short, long, bool);
// void texture_camera_enable_dynamic_lights_render_texture_camera_enable_dynamic_lights_1_evaluate(short, long, bool);
// void hud_camera_on_render_hud_camera_on_hs_1_evaluate(short, long, bool);
// void hud_camera_off_render_hud_camera_off_hs_1_evaluate(short, long, bool);
// void hud_camera_set_position_render_hud_camera_set_position_hs_4_evaluate(short, long, bool);
// void hud_camera_set_target_render_hud_camera_set_target_hs_4_evaluate(short, long, bool);
// void hud_camera_attach_to_object_render_hud_camera_attach_to_object_hs_3_evaluate(short, long, bool);
// void hud_camera_target_object_render_hud_camera_target_object_hs_3_evaluate(short, long, bool);
// void hud_camera_structure_render_hud_camera_structure_hs_2_evaluate(short, long, bool);
// void hud_camera_highlight_object_render_hud_camera_highlight_object_hs_6_evaluate(short, long, bool);
// void hud_camera_clear_objects_render_hud_camera_clear_objects_hs_1_evaluate(short, long, bool);
// void hud_camera_spin_around_render_hud_camera_spin_around_hs_2_evaluate(short, long, bool);
// void hud_camera_from_player_view_render_hud_camera_from_player_view_hs_1_evaluate(short, long, bool);
// void hud_camera_window_render_hud_camera_window_hs_5_evaluate(short, long, bool);
// void render_debug_texture_camera_render_debug_texture_camera_1_evaluate(short, long, bool);
// void render_debug_cheap_particles_render_debug_cheap_particles_1_evaluate(short, long, bool);
// void render_debug_rain_occlusion_render_debug_rain_occlusion_1_evaluate(short, long, bool);
// void render_debug_rain_fog_render_debug_rain_fog_1_evaluate(short, long, bool);
// void debug_rain_toggle_debug_rain_toggle_0_evaluate(short, long, bool);
// void weather_animate_weather_animate_3_evaluate(short, long, bool);
// void weather_animate_force_weather_animate_force_3_evaluate(short, long, bool);
// void debug_structure_cluster_debug_structure_cluster_2_evaluate(short, long, bool);
// void render_debug_structure_cluster_fog_render_debug_structure_cluster_fog_1_evaluate(short, long, bool);
// void render_debug_structure_fog_plane_render_debug_structure_fog_plane_1_evaluate(short, long, bool);
// void render_debug_structure_fog_plane_infinite_extent_render_debug_structure_fog_plane_infinite_extent_1_evaluate(short, long, bool);
// void render_debug_structure_fog_zone_render_debug_structure_fog_zone_1_evaluate(short, long, bool);
// void render_debug_structure_fog_zone_floodfill_render_debug_structure_fog_zone_floodfill_1_evaluate(short, long, bool);
// void render_debug_structure_all_fog_planes_render_debug_structure_all_fog_planes_1_evaluate(short, long, bool);
// void render_debug_structure_all_cluster_errors_render_debug_structure_all_cluster_errors_1_evaluate(short, long, bool);
// void render_debug_structure_line_opacity_render_debug_structure_line_opacity_4_evaluate(short, long, bool);
// void render_debug_structure_text_opacity_render_debug_structure_text_opacity_4_evaluate(short, long, bool);
// void render_debug_structure_opacity_render_debug_structure_opacity_4_evaluate(short, long, bool);
// void render_debug_structure_non_occluded_fog_planes_render_debug_structure_non_occluded_fog_planes_1_evaluate(short, long, bool);
// void render_debug_structure_lightmaps_use_pervertex_render_debug_structure_lightmaps_prefer_pervertex_0_evaluate(short, long, bool);
// void render_debug_structure_lightmaps_use_reset_render_debug_structure_lightmaps_preference_reset_0_evaluate(short, long, bool);
// void render_debug_structure_lightmaps_sample_enable_render_debug_structure_lightmaps_sample_visualization_enable_0_evaluate(short, long, bool);
// void render_debug_structure_lightmaps_sample_disable_render_debug_structure_lightmaps_sample_visualization_disable_0_evaluate(short, long, bool);
// void render_debug_query_object_bitmaps_render_debug_query_object_bitmap_usage_1_evaluate(short, long, bool);
// void render_debug_query_bsp_resources_render_debug_query_bsp_resource_usage_2_evaluate(short, long, bool);
// void render_debug_query_all_object_resources_render_debug_calculate_object_resource_usage_0_evaluate(short, long, bool);
// void render_debug_query_d3d_resources_d3d_resource_tracker_output_allocated_resource_counts_0_evaluate(short, long, bool);
// void render_debug_text_using_simple_font_render_debug_text_using_simple_font_1_evaluate(short, long, bool);
// void render_postprocess_color_tweaking_reset_render_postprocess_reset_color_tweaking_0_evaluate(short, long, bool);
// void render_debug_wrinkle_weights_a_render_debug_wrinkle_weights_a_4_evaluate(short, long, bool);
// void render_debug_wrinkle_weights_b_render_debug_wrinkle_weights_b_4_evaluate(short, long, bool);
// void render_debug_wrinkle_weights_from_console_render_debug_wrinkle_weights_from_console_1_evaluate(short, long, bool);
// void scenery_animation_start_scenery_animation_start_3_evaluate(short, long, bool);
// void scenery_animation_start_loop_scenery_animation_start_loop_3_evaluate(short, long, bool);
// void scenery_animation_start_relative_scenery_animation_start_relative_4_evaluate(short, long, bool);
// void scenery_animation_start_relative_loop_scenery_animation_start_relative_loop_4_evaluate(short, long, bool);
// void scenery_animation_start_at_frame_scenery_animation_start_at_frame_4_evaluate(short, long, bool);
// void scenery_animation_start_relative_at_frame_scenery_animation_start_relative_at_frame_5_evaluate(short, long, bool);
// void scenery_animation_idle_scenery_animation_start_idle_1_evaluate(short, long, bool);
// void scenery_get_animation_time_scenery_animation_get_ticks_remaining_for_scripting_1_evaluate(short, long, bool);
// void unit_can_blink_unit_scripting_can_blink_2_evaluate(short, long, bool);
// void unit_set_active_camo_unit_scripting_set_active_camo_3_evaluate(short, long, bool);
// void unit_open_unit_scripting_open_1_evaluate(short, long, bool);
// void unit_close_unit_scripting_close_1_evaluate(short, long, bool);
// void unit_kill_unit_scripting_kill_1_evaluate(short, long, bool);
// void unit_kill_silent_unit_scripting_kill_silent_1_evaluate(short, long, bool);
// void unit_is_emitting_unit_scripting_is_emitting_1_evaluate(short, long, bool);
// void unit_is_emp_stunned_unit_scripting_is_emp_stunned_1_evaluate(short, long, bool);
// void unit_get_custom_animation_time_unit_get_custom_animation_scripting_ticks_remaining_1_evaluate(short, long, bool);
// void unit_stop_custom_animation_unit_scripting_stop_custom_animation_1_evaluate(short, long, bool);
// void custom_animation_unit_start_user_animation_4_evaluate(short, long, bool);
// void custom_animation_loop_unit_start_user_animation_loop_4_evaluate(short, long, bool);
// void custom_animation_relative_unit_start_user_animation_relative_5_evaluate(short, long, bool);
// void custom_animation_relative_loop_unit_start_user_animation_relative_loop_5_evaluate(short, long, bool);
// void custom_animation_list_unit_scripting_start_user_animation_list_4_evaluate(short, long, bool);
// void unit_custom_animation_at_frame_unit_custom_animation_at_frame_5_evaluate(short, long, bool);
// void unit_custom_animation_relative_at_frame_unit_custom_animation_relative_at_frame_6_evaluate(short, long, bool);
// void unit_is_playing_custom_animation_unit_is_playing_custom_animation_1_evaluate(short, long, bool);
// void unit_has_mandibles_hidden_unit_has_mandibles_hidden_1_evaluate(short, long, bool);
// void animation_capture_set_file_name_object_animation_capture_set_file_name_1_evaluate(short, long, bool);
// void animation_capture_set_origin_object_name_object_animation_capture_set_origin_name_1_evaluate(short, long, bool);
// void animation_capture_start_recording_object_animation_capture_start_recording_0_evaluate(short, long, bool);
// void animation_capture_stop_recording_object_animation_capture_stop_recording_0_evaluate(short, long, bool);
// void sync_action_create_unit_scripting_create_sync_action_2_evaluate(short, long, bool);
// void object_running_sync_action_object_scripting_running_sync_action_2_evaluate(short, long, bool);
// void object_set_custom_animations_hold_on_last_frame_object_set_custom_animations_hold_on_last_frame_1_evaluate(short, long, bool);
// void object_set_custom_animations_prevent_lipsync_head_movement_object_set_custom_animations_prevent_lipsync_head_movement_1_evaluate(short, long, bool);
// void preferred_animation_list_add_animation_manager_add_preferred_animation_2_evaluate(short, long, bool);
// void preferred_animation_list_clear_animation_manager_clear_preferred_animations_0_evaluate(short, long, bool);
// void unit_get_team_index_unit_get_campaign_team_1_evaluate(short, long, bool);
// void unit_aim_without_turning_unit_scripting_aim_without_turning_2_evaluate(short, long, bool);
// void unit_set_enterable_by_player_unit_scripting_set_enterable_by_player_2_evaluate(short, long, bool);
// void unit_get_enterable_by_player_unit_scripting_get_enterable_by_player_1_evaluate(short, long, bool);
// void unit_only_takes_damage_from_players_team_unit_scripting_set_only_takes_damage_from_players_team_bit_2_evaluate(short, long, bool);
// void unit_enter_vehicle_unit_scripting_enter_vehicle_3_evaluate(short, long, bool);
// void unit_enter_vehicle_immediate_unit_scripting_enter_vehicle_immediate_3_evaluate(short, long, bool);
// void unit_falling_damage_disable_unit_falling_damage_disable_2_evaluate(short, long, bool);
// void unit_in_vehicle_type_unit_scripting_unit_in_vehicle_type_2_evaluate(short, long, bool);
// void object_get_turret_count_unit_scripting_object_get_turret_count_1_evaluate(short, long, bool);
// void object_get_turret_unit_scripting_object_get_turret_2_evaluate(short, long, bool);
// void unit_board_vehicle_unit_scripting_board_vehicle_2_evaluate(short, long, bool);
// void unit_set_emotion_unit_scripting_set_emotion_4_evaluate(short, long, bool);
// void unit_set_emotion_by_name_unit_scripting_set_emotion_by_name_4_evaluate(short, long, bool);
// void unit_enable_eye_tracking_unit_enable_eye_tracking_2_evaluate(short, long, bool);
// void unit_set_integrated_flashlight_unit_scripting_set_integrated_flashlight_2_evaluate(short, long, bool);
// void unit_in_vehicle_unit_scripting_in_vehicle_1_evaluate(short, long, bool);
// void unit_get_vehicle_unit_scripting_get_vehicle_1_evaluate(short, long, bool);
// void vehicle_set_player_interaction_unit_scripting_vehicle_set_unit_seat_interaction_4_evaluate(short, long, bool);
// void vehicle_set_unit_interaction_unit_scripting_vehicle_set_unit_seat_interaction_4_evaluate(short, long, bool);
// void vehicle_test_seat_unit_list_unit_scripting_vehicle_test_seat_unit_list_3_evaluate(short, long, bool);
// void vehicle_test_seat_unit_unit_scripting_vehicle_test_seat_unit_3_evaluate(short, long, bool);
// void vehicle_test_seat_unit_scripting_vehicle_test_seat_2_evaluate(short, long, bool);
// void unit_set_prefer_tight_camera_track_unit_set_prefer_tight_camera_track_2_evaluate(short, long, bool);
// void unit_test_seat_unit_scripting_vehicle_test_seat_2_evaluate(short, long, bool);
// void unit_exit_vehicle_unit_scripting_exit_vehicle_1_evaluate(short, long, bool);
// void unit_exit_vehicle_unit_scripting_exit_vehicle2_2_evaluate(short, long, bool);
// void unit_set_maximum_vitality_unit_scripting_set_maximum_vitality_3_evaluate(short, long, bool);
// void units_set_maximum_vitality_units_scripting_set_maximum_vitality_3_evaluate(short, long, bool);
// void unit_set_current_vitality_unit_scripting_set_current_vitality_3_evaluate(short, long, bool);
// void units_set_current_vitality_units_scripting_set_current_vitality_3_evaluate(short, long, bool);
// void vehicle_load_magic_vehicle_scripting_load_magic_3_evaluate(short, long, bool);
// void vehicle_unload_vehicle_scripting_unload_2_evaluate(short, long, bool);
// void unit_set_animation_mode_unit_scripting_set_animation_mode_2_evaluate(short, long, bool);
// void magic_melee_attack_unit_scripting_magic_melee_attack_0_evaluate(short, long, bool);
// void vehicle_riders_unit_scripting_unit_riders_1_evaluate(short, long, bool);
// void vehicle_driver_unit_scripting_unit_driver_1_evaluate(short, long, bool);
// void vehicle_gunner_unit_scripting_unit_gunner_1_evaluate(short, long, bool);
// void unit_get_health_unit_scripting_get_health_1_evaluate(short, long, bool);
// void unit_get_shield_unit_scripting_get_shield_1_evaluate(short, long, bool);
// void unit_get_total_grenade_count_unit_scripting_get_grenade_count_1_evaluate(short, long, bool);
// void unit_has_weapon_unit_scripting_has_weapon_2_evaluate(short, long, bool);
// void unit_has_weapon_readied_unit_scripting_has_weapon_readied_2_evaluate(short, long, bool);
// void unit_has_any_equipment_unit_scripting_has_any_equipment_1_evaluate(short, long, bool);
// void unit_has_equipment_unit_scripting_has_equipment_2_evaluate(short, long, bool);
// void unit_lower_weapon_unit_scripting_lower_weapon_2_evaluate(short, long, bool);
// void unit_raise_weapon_unit_scripting_raise_weapon_2_evaluate(short, long, bool);
// void unit_drop_support_weapon_unit_scripting_drop_support_weapon_1_evaluate(short, long, bool);
// void unit_spew_action_unit_scripting_spew_action_1_evaluate(short, long, bool);
// void unit_force_reload_unit_scripting_force_reload_1_evaluate(short, long, bool);
// void animation_stats_dump_animation_statistics_dump_0_evaluate(short, long, bool);
// void unit_animation_forced_seat_unit_animation_set_forced_seat_1_evaluate(short, long, bool);
// void unit_doesnt_drop_items_unit_scripting_doesnt_drop_items_1_evaluate(short, long, bool);
// void unit_impervious_unit_scripting_impervious_2_evaluate(short, long, bool);
// void unit_suspended_unit_scripting_suspended_2_evaluate(short, long, bool);
// void unit_add_equipment_unit_add_starting_profile_loadout_4_evaluate(short, long, bool);
// void weapon_set_primary_barrel_firing_weapon_set_primary_barrel_firing_2_evaluate(short, long, bool);
// void weapon_hold_trigger_weapon_hold_trigger_hs_3_evaluate(short, long, bool);
// void weapon_enable_warthog_chaingun_light_objects_enable_warthog_chaingun_light_1_evaluate(short, long, bool);
// void device_set_never_appears_locked_device_set_never_appears_locked_2_evaluate(short, long, bool);
// void device_set_power_device_set_power_2_evaluate(short, long, bool);
// void device_set_position_transition_time_device_set_position_transition_time_2_evaluate(short, long, bool);
// void device_get_power_device_get_power_1_evaluate(short, long, bool);
// void device_set_position_device_set_desired_position_2_evaluate(short, long, bool);
// void device_get_position_device_get_position_1_evaluate(short, long, bool);
// void device_set_position_immediate_device_set_actual_position_2_evaluate(short, long, bool);
// void device_group_get_device_group_get_value_1_evaluate(short, long, bool);
// void device_group_set_device_group_set_desired_value_3_evaluate(short, long, bool);
// void device_group_set_immediate_device_group_set_actual_value_2_evaluate(short, long, bool);
// void device_one_sided_set_device_one_sided_set_2_evaluate(short, long, bool);
// void device_ignore_player_set_device_ignore_player_set_2_evaluate(short, long, bool);
// void device_operates_automatically_set_device_operates_automatically_set_2_evaluate(short, long, bool);
// void device_closes_automatically_set_device_closes_automatically_set_2_evaluate(short, long, bool);
// void device_group_change_only_once_more_set_device_group_change_only_once_more_set_2_evaluate(short, long, bool);
// void device_set_position_track_device_set_position_track_3_evaluate(short, long, bool);
// void device_set_overlay_track_device_set_overlay_track_2_evaluate(short, long, bool);
// void device_animate_position_device_animate_position_6_evaluate(short, long, bool);
// void device_animate_overlay_device_animate_overlay_5_evaluate(short, long, bool);
// void cheat_all_powerups_cheat_all_powerups_0_evaluate(short, long, bool);
// void cheat_all_weapons_cheat_all_weapons_0_evaluate(short, long, bool);
// void cheat_all_vehicles_cheat_all_vehicles_0_evaluate(short, long, bool);
// void cheat_teleport_to_camera_cheat_teleport_to_camera_0_evaluate(short, long, bool);
// void cheat_active_camouflage_cheat_active_camouflage_1_evaluate(short, long, bool);
// void cheat_active_camouflage_by_player_cheat_active_camouflage_by_player_2_evaluate(short, long, bool);
// void cheats_load_cheats_load_0_evaluate(short, long, bool);
// void drop_safe_cheat_drop_tag_safe_hs_1_evaluate(short, long, bool);
// void drop_cheat_drop_tag_name_1_evaluate(short, long, bool);
// void drop_variant_cheat_drop_tag_name_with_variant_hs_2_evaluate(short, long, bool);
// void drop_permutation_cheat_drop_tag_name_with_permutation_hs_2_evaluate(short, long, bool);
// void update_dropped_tag_permutation_cheat_update_dropped_tag_permutation_hs_2_evaluate(short, long, bool);
// void ai_enable_ai_globals_set_ai_active_1_evaluate(short, long, bool);
// void ai_enabled_ai_globals_get_ai_active_0_evaluate(short, long, bool);
// void ai_grenades_ai_globals_grenades_enabled_1_evaluate(short, long, bool);
// void ai_dialogue_enable_ai_globals_dialogue_enable_1_evaluate(short, long, bool);
// void ai_dialogue_updating_enable_ai_globals_dialogue_updating_enable_1_evaluate(short, long, bool);
// void ai_player_dialogue_enable_ai_globals_player_dialogue_enable_1_evaluate(short, long, bool);
// void ai_actor_dialogue_enable_ai_globals_actor_dialogue_enable_2_evaluate(short, long, bool);
// void ai_actor_dialogue_effect_enable_ai_globals_actor_dialogue_effect_enable_2_evaluate(short, long, bool);
// void ai_infection_suppress_ai_globals_infection_suppress_1_evaluate(short, long, bool);
// void ai_fast_and_dumb_ai_globals_set_fast_and_dumb_1_evaluate(short, long, bool);
// void ai_lod_full_detail_actors_ai_globals_set_full_detail_actors_1_evaluate(short, long, bool);
// void ai_lod_full_detail_actors_ai_globals_num_full_detail_actors_0_evaluate(short, long, bool);
// void ai_force_full_lod_ai_force_full_lod_1_evaluate(short, long, bool);
// void ai_force_low_lod_ai_force_low_lod_1_evaluate(short, long, bool);
// void ai_clear_lod_ai_clear_lod_1_evaluate(short, long, bool);
// void ai_dialogue_log_reset_ai_dialogue_log_reset_0_evaluate(short, long, bool);
// void ai_dialogue_log_dump_ai_dialogue_log_dump_1_evaluate(short, long, bool);
// void ai_get_object_ai_scripting_get_object_1_evaluate(short, long, bool);
// void ai_get_unit_ai_scripting_get_unit_1_evaluate(short, long, bool);
// void ai_get_squad_ai_scripting_get_squad_1_evaluate(short, long, bool);
// void ai_get_turret_ai_ai_scripting_get_turret_ai_2_evaluate(short, long, bool);
// void ai_random_smart_point_ai_scripting_random_point_4_evaluate(short, long, bool);
// void ai_nearest_point_ai_scripting_nearest_point_2_evaluate(short, long, bool);
// void ai_get_point_count_ai_scripting_point_count_1_evaluate(short, long, bool);
// void ai_point_set_get_point_ai_scripting_point_set_get_point_2_evaluate(short, long, bool);
// void ai_debug_dump_behavior_tree_ai_scripting_dump_behavior_tree_1_evaluate(short, long, bool);
// void ai_place_ai_scripting_place_1_evaluate(short, long, bool);
// void ai_place_ai_scripting_place2_2_evaluate(short, long, bool);
// void ai_place_in_limbo_ai_scripting_place_in_limbo_1_evaluate(short, long, bool);
// void ai_place_in_limbo_ai_scripting_place_in_limbo2_2_evaluate(short, long, bool);
// void ai_place_in_vehicle_ai_scripting_place_in_vehicle_2_evaluate(short, long, bool);
// void ai_cannot_die_ai_scripting_cannot_die_2_evaluate(short, long, bool);
// void ai_vitality_pinned_ai_scripting_vitality_pinned_1_evaluate(short, long, bool);
// void ai_place_wave_ai_place_wave_2_evaluate(short, long, bool);
// void ai_place_wave_ai_place_wave2_3_evaluate(short, long, bool);
// void ai_place_wave_in_limbo_ai_place_wave_in_limbo_2_evaluate(short, long, bool);
// void ai_place_wave_in_limbo_ai_place_wave_in_limbo2_3_evaluate(short, long, bool);
// void ai_set_clump_ai_scripting_set_clump_index_2_evaluate(short, long, bool);
// void ai_designer_clump_perception_range_ai_scripting_set_clump_perception_range_1_evaluate(short, long, bool);
// void ai_designer_clump_targeting_group_ai_scripting_set_clump_targeting_group_1_evaluate(short, long, bool);
// void ai_index_from_spawn_formation_ai_scripting_ai_index_from_spawn_formation_2_evaluate(short, long, bool);
// void ai_resurrect_ai_scripting_resurrect_1_evaluate(short, long, bool);
// void ai_kill_ai_scripting_kill_1_evaluate(short, long, bool);
// void ai_kill_silent_ai_scripting_kill_silent_1_evaluate(short, long, bool);
// void ai_kill_no_statistics_ai_scripting_kill_no_statistics_1_evaluate(short, long, bool);
// void ai_erase_ai_scripting_erase_1_evaluate(short, long, bool);
// void ai_erase_all_ai_scripting_erase_all_0_evaluate(short, long, bool);
// void ai_disposable_ai_scripting_disposable_2_evaluate(short, long, bool);
// void ai_select_ai_scripting_select_squad_1_evaluate(short, long, bool);
// void ai_deselect_ai_scripting_deselect_0_evaluate(short, long, bool);
// void ai_set_deaf_ai_scripting_set_deaf_2_evaluate(short, long, bool);
// void ai_set_blind_ai_scripting_set_blind_2_evaluate(short, long, bool);
// void ai_set_weapon_up_ai_scripting_set_weapon_up_2_evaluate(short, long, bool);
// void ai_flood_disperse_ai_scripting_flood_disperse_2_evaluate(short, long, bool);
// void ai_add_navpoint_ai_scripting_set_highlight_2_evaluate(short, long, bool);
// void ai_magically_see_ai_magically_see_2_evaluate(short, long, bool);
// void ai_magically_see_object_ai_magically_see_object_2_evaluate(short, long, bool);
// void ai_set_active_camo_ai_scripting_set_active_camo_2_evaluate(short, long, bool);
// void ai_suppress_combat_ai_scripting_suppress_combat_2_evaluate(short, long, bool);
// void ai_engineer_explode_ai_scripting_engineer_explode_1_evaluate(short, long, bool);
// void ai_grunt_kamikaze_ai_scripting_grunt_kamikaze_1_evaluate(short, long, bool);
// void ai_squad_enumerate_immigrants_ai_scripting_squad_enumerate_immigrants_2_evaluate(short, long, bool);
// void ai_migrate_ai_scripting_migrate_2_evaluate(short, long, bool);
// void ai_migrate_persistent_ai_scripting_migrate_forever_2_evaluate(short, long, bool);
// void ai_allegiance_ai_scripting_allegiance_2_evaluate(short, long, bool);
// void ai_allegiance_remove_ai_scripting_allegiance_remove_2_evaluate(short, long, bool);
// void ai_allegiance_break_ai_scripting_allegiance_break_2_evaluate(short, long, bool);
// void ai_braindead_ai_scripting_braindead_2_evaluate(short, long, bool);
// void ai_braindead_by_unit_ai_scripting_braindead_by_unit_2_evaluate(short, long, bool);
// void ai_disregard_ai_scripting_ignore_2_evaluate(short, long, bool);
// void ai_disregard_orphans_ai_scripting_disregard_orphans_1_evaluate(short, long, bool);
// void ai_prefer_target_ai_scripting_prefer_target_2_evaluate(short, long, bool);
// void ai_prefer_target_team_ai_scripting_prefer_target_team_2_evaluate(short, long, bool);
// void ai_prefer_target_ai_ai_scripting_prefer_target_ai_3_evaluate(short, long, bool);
// void ai_set_targeting_group_ai_scripting_set_targeting_group_2_evaluate(short, long, bool);
// void ai_set_targeting_group_ai_scripting_set_targeting_group2_3_evaluate(short, long, bool);
// void ai_teleport_to_starting_location_if_outside_bsp_ai_scripting_teleport_to_spawn_point_if_outside_bsp_1_evaluate(short, long, bool);
// void ai_teleport_to_spawn_point_if_outside_bsp_ai_scripting_teleport_to_spawn_point_if_outside_bsp_1_evaluate(short, long, bool);
// void ai_teleport_ai_scripting_teleport_2_evaluate(short, long, bool);
// void ai_bring_forward_ai_scripting_bring_forward_2_evaluate(short, long, bool);
// void ai_renew_ai_scripting_renew_1_evaluate(short, long, bool);
// void ai_force_active_ai_scripting_force_active_2_evaluate(short, long, bool);
// void ai_force_active_by_unit_ai_scripting_force_active_by_unit_2_evaluate(short, long, bool);
// void ai_exit_limbo_ai_scripting_exit_limbo_1_evaluate(short, long, bool);
// void ai_playfight_ai_scripting_playfight_2_evaluate(short, long, bool);
// void ai_reconnect_ai_scripting_reconnect_0_evaluate(short, long, bool);
// void ai_berserk_ai_scripting_berserk_2_evaluate(short, long, bool);
// void ai_set_team_ai_scripting_set_team_2_evaluate(short, long, bool);
// void ai_allow_dormant_ai_scripting_allow_dormant_2_evaluate(short, long, bool);
// void ai_is_attacking_ai_scripting_is_attacking_1_evaluate(short, long, bool);
// void ai_fighting_count_ai_fighting_count_1_evaluate(short, long, bool);
// void ai_living_count_ai_scripting_living_count_1_evaluate(short, long, bool);
// void ai_living_fraction_ai_scripting_living_fraction_1_evaluate(short, long, bool);
// void ai_in_vehicle_count_ai_scripting_in_vehicle_count_1_evaluate(short, long, bool);
// void ai_body_count_ai_scripting_body_count_1_evaluate(short, long, bool);
// void ai_strength_ai_scripting_strength_1_evaluate(short, long, bool);
// void ai_swarm_count_ai_scripting_swarm_count_1_evaluate(short, long, bool);
// void ai_nonswarm_count_ai_scripting_nonswarm_count_1_evaluate(short, long, bool);
// void ai_actors_object_list_from_ai_reference_1_evaluate(short, long, bool);
// void ai_allegiance_broken_ai_scripting_allegiance_broken_2_evaluate(short, long, bool);
// void ai_spawn_count_ai_spawn_count_1_evaluate(short, long, bool);
// void object_get_ai_object_get_ai_1_evaluate(short, long, bool);
// void ai_set_task_ai_scripting_set_task_3_evaluate(short, long, bool);
// void ai_set_objective_ai_scripting_set_task2_2_evaluate(short, long, bool);
// void ai_task_status_ai_scripting_task_status_1_evaluate(short, long, bool);
// void ai_set_task_condition_ai_scripting_set_task_condition_2_evaluate(short, long, bool);
// void ai_leadership_ai_scripting_leadership_1_evaluate(short, long, bool);
// void ai_leadership_all_ai_scripting_leadership_all_1_evaluate(short, long, bool);
// void ai_task_count_ai_task_count_1_evaluate(short, long, bool);
// void ai_reset_objective_ai_scripting_reset_objective_1_evaluate(short, long, bool);
// void ai_squad_patrol_objective_disallow_ai_scripting_objective_patrol_disallow_2_evaluate(short, long, bool);
// void ai_place_cue_ai_cue_place_by_name_1_evaluate(short, long, bool);
// void ai_remove_cue_ai_cue_remove_by_name_1_evaluate(short, long, bool);
// void generate_pathfinding_ai_scripting_pathfinding_generate_all_0_evaluate(short, long, bool);
// void ai_render_paths_all_ai_scripting_render_paths_all_0_evaluate(short, long, bool);
// void ai_render_evaluations_shading_none_ai_render_evaluations_shading_none_0_evaluate(short, long, bool);
// void ai_render_evaluations_shading_all_ai_render_evaluations_shading_all_0_evaluate(short, long, bool);
// void ai_render_evaluations_shading_ai_render_evaluations_shading_1_evaluate(short, long, bool);
// void ai_activity_set_ai_scripting_set_activity_2_evaluate(short, long, bool);
// void ai_activity_abort_ai_scripting_abort_activity_1_evaluate(short, long, bool);
// void ai_object_set_team_ai_scripting_set_object_ownership_2_evaluate(short, long, bool);
// void ai_object_set_targeting_bias_ai_scripting_set_object_targeting_bias_2_evaluate(short, long, bool);
// void ai_object_set_targeting_ranges_ai_scripting_set_object_targeting_ranges_3_evaluate(short, long, bool);
// void ai_object_enable_targeting_from_vehicle_ai_scripting_enable_object_vehicle_targeting_2_evaluate(short, long, bool);
// void ai_object_enable_grenade_attack_ai_scripting_enable_object_grenade_attack_2_evaluate(short, long, bool);
// void ai_vehicle_get_ai_vehicle_get_1_evaluate(short, long, bool);
// void ai_vehicle_get_from_starting_location_ai_vehicle_get_from_spawn_point_1_evaluate(short, long, bool);
// void ai_vehicle_get_from_spawn_point_ai_vehicle_get_from_spawn_point_1_evaluate(short, long, bool);
// void ai_vehicle_get_squad_count_ai_vehicle_get_squad_count_1_evaluate(short, long, bool);
// void ai_vehicle_get_from_squad_ai_vehicle_get_from_squad_2_evaluate(short, long, bool);
// void ai_vehicle_reserve_seat_ai_vehicle_reserve_seat_3_evaluate(short, long, bool);
// void ai_vehicle_reserve_ai_vehicle_reserve_2_evaluate(short, long, bool);
// void ai_player_get_vehicle_squad_ai_player_get_vehicle_squad_1_evaluate(short, long, bool);
// void ai_vehicle_count_ai_scripting_vehicle_count_1_evaluate(short, long, bool);
// void ai_carrying_player_ai_scripting_carrying_player_1_evaluate(short, long, bool);
// void player_in_vehicle_ai_scripting_player_in_vehicle_1_evaluate(short, long, bool);
// void ai_player_needs_vehicle_ai_scripting_player_needs_vehicle_1_evaluate(short, long, bool);
// void ai_player_any_needs_vehicle_ai_scripting_player_any_needs_vehicle_0_evaluate(short, long, bool);
// void ai_vehicle_enter_ai_vehicle_enter_3_evaluate(short, long, bool);
// void ai_vehicle_enter_ai_vehicle_enter2_2_evaluate(short, long, bool);
// void ai_vehicle_enter_immediate_ai_vehicle_enter_immediate_3_evaluate(short, long, bool);
// void ai_vehicle_enter_immediate_ai_vehicle_enter_immediate2_2_evaluate(short, long, bool);
// void ai_enter_squad_vehicles_ai_enter_squad_vehicles_1_evaluate(short, long, bool);
// void ai_vehicle_exit_ai_scripting_exit_vehicle_2_evaluate(short, long, bool);
// void ai_vehicle_exit_ai_scripting_exit_vehicle2_1_evaluate(short, long, bool);
// void vehicle_overturned_ai_vehicle_overturned_1_evaluate(short, long, bool);
// void vehicle_flip_ai_vehicle_flip_1_evaluate(short, long, bool);
// void ai_squad_group_get_squad_ai_scripting_squad_group_get_squad_2_evaluate(short, long, bool);
// void ai_squad_group_get_squad_count_ai_scripting_squad_group_get_squad_count_1_evaluate(short, long, bool);
// void ai_squad_patrol_enable_squad_patrol_enable_by_name_2_evaluate(short, long, bool);
// void ai_combat_status_ai_scripting_combat_status_1_evaluate(short, long, bool);
// void ai_set_combat_status_ai_scripting_set_combat_status_2_evaluate(short, long, bool);
// void flock_start_flock_start_1_evaluate(short, long, bool);
// void flock_stop_flock_stop_1_evaluate(short, long, bool);
// void flock_create_ai_scripting_flock_create_1_evaluate(short, long, bool);
// void flock_delete_ai_scripting_flock_delete_1_evaluate(short, long, bool);
// void flock_destroy_ai_scripting_flock_destroy_1_evaluate(short, long, bool);
// void flock_definition_set_ai_scripting_flock_definition_set_2_evaluate(short, long, bool);
// void flock_unperch_ai_scripting_flock_unperch_1_evaluate(short, long, bool);
// void flock_set_targeting_group_ai_scripting_flock_set_targeting_group_2_evaluate(short, long, bool);
// void flock_destination_set_enabled_ai_scripting_flock_destination_set_enabled_3_evaluate(short, long, bool);
// void flock_destination_set_position_ai_scripting_flock_destination_set_position_3_evaluate(short, long, bool);
// void flock_destination_copy_position_ai_scripting_flock_destination_copy_position_3_evaluate(short, long, bool);
// void drop_ai_ai_scripting_drop_ai_2_evaluate(short, long, bool);
// void mantini_create_runtime_squad_ai_scripting_create_runtime_squad_1_evaluate(short, long, bool);
// void mantini_create_runtime_point_set_create_runtime_point_set_1_evaluate(short, long, bool);
// void mantini_add_runtime_point_to_set_add_runtime_point_to_set_6_evaluate(short, long, bool);
// void mantini_add_runtime_point_to_set_from_camera_add_runtime_point_to_set_from_camera_4_evaluate(short, long, bool);
// void mantini_add_starting_location_to_squad_add_spawn_point_to_squad_from_pointref_4_evaluate(short, long, bool);
// void mantini_add_starting_location_to_squad_from_camera_add_spawn_point_to_squad_from_camera_4_evaluate(short, long, bool);
// void mantini_add_cell_to_runtime_squad_ai_scripting_add_cell_to_runtime_squad_2_evaluate(short, long, bool);
// void mantini_get_runtime_squad_cell_count_ai_scripting_get_runtime_squad_cell_count_1_evaluate(short, long, bool);
// void mantini_set_squad_team_set_squad_team_index_2_evaluate(short, long, bool);
// void mantini_set_spawn_point_weapons_ai_scripting_set_spawn_point_weapons_3_evaluate(short, long, bool);
// void mantini_set_spawn_point_vehicle_ai_scripting_set_spawn_point_vehicle_2_evaluate(short, long, bool);
// void mantini_set_spawn_point_variants_set_spawn_point_variants_3_evaluate(short, long, bool);
// void mantini_set_squad_cell_spawn_count_set_cell_spawn_count_3_evaluate(short, long, bool);
// void mantini_clear_runtime_squads_ai_scripting_clear_runtime_squads_0_evaluate(short, long, bool);
// void mantini_remove_pointset_ai_scripting_clear_runtime_pointsets_1_evaluate(short, long, bool);
// void mantini_get_loaded_map_name_ai_scripting_get_current_map_name_0_evaluate(short, long, bool);
// void ai_verify_tags_ai_scripting_verify_tags_0_evaluate(short, long, bool);
// void ai_wall_lean_ai_scripting_wall_lean_1_evaluate(short, long, bool);
// void ai_fire_dialogue_event_ai_scripting_fire_dialogue_event_3_evaluate(short, long, bool);
// void ai_play_vocalization_ai_scripting_play_vocalization_1_evaluate(short, long, bool);
// void ai_play_vocalization_on_team_ai_scripting_play_vocalization_on_team_2_evaluate(short, long, bool);
// void ai_play_line_ai_play_line_2_evaluate(short, long, bool);
// void ai_play_line_at_player_ai_play_line_at_player_2_evaluate(short, long, bool);
// void ai_play_line_on_object_ai_play_line_on_object_2_evaluate(short, long, bool);
// void ai_play_line_on_object_for_team_ai_play_line_on_object_for_team_3_evaluate(short, long, bool);
// void ai_play_line_on_point_set_ai_play_line_on_point_set_3_evaluate(short, long, bool);
// void ai_play_line_on_point_set_ai_play_line_on_point_set2_4_evaluate(short, long, bool);
// void campaign_metagame_time_pause_campaign_metagame_time_pause_1_evaluate(short, long, bool);
// void campaign_metagame_award_points_campaign_metagame_award_points_2_evaluate(short, long, bool);
// void campaign_metagame_award_skull_campaign_metagame_award_skull_2_evaluate(short, long, bool);
// void campaign_metagame_enabled_campaign_metagame_enabled_0_evaluate(short, long, bool);
// void campaign_survival_enabled_game_is_survival_0_evaluate(short, long, bool);
// void thespian_performance_test_performance_scripting_test_by_name_1_evaluate(short, long, bool);
// void thespian_folder_activate_performance_scripting_folder_activate_1_evaluate(short, long, bool);
// void thespian_folder_deactivate_performance_scripting_folder_deactivate_1_evaluate(short, long, bool);
// void thespian_performance_activate_performance_scripting_activate_1_evaluate(short, long, bool);
// void thespian_performance_setup_and_begin_performance_scripting_setup_and_begin_3_evaluate(short, long, bool);
// void performance_new_performance_scripting_new_2_evaluate(short, long, bool);
// void cast_squad_in_performance_performance_scripting_cast_2_evaluate(short, long, bool);
// void performance_begin_performance_scripting_begin_1_evaluate(short, long, bool);
// void thespian_performance_kill_by_name_performance_scripting_kill_by_name_1_evaluate(short, long, bool);
// void thespian_performance_kill_by_ai_performance_scripting_kill_by_ai_1_evaluate(short, long, bool);
// void thespian_fake_task_transition_performance_scripting_fake_task_transition_event_2_evaluate(short, long, bool);
// void performance_play_line_by_id_thread_1_evaluate(short, long, bool);
// void performance_play_line_thread_1_evaluate(short, long, bool);
// void performance_get_actor_by_index_thread_1_evaluate(short, long, bool);
// void performance_get_actor_thread_1_evaluate(short, long, bool);
// void performance_get_actor_count_thread_0_evaluate(short, long, bool);
// void performance_get_role_count_thread_0_evaluate(short, long, bool);
// void performance_get_line_count_thread_0_evaluate(short, long, bool);
// void performance_get_last_played_line_index_thread_0_evaluate(short, long, bool);
// void thespian_performance_is_blocked_thread_0_evaluate(short, long, bool);
// void actor_from_performance_performance_scripting_get_actor_by_role_name_from_performance_2_evaluate(short, long, bool);
// void ai_player_add_fireteam_squad_fire_team_scripting_add_player_squad_2_evaluate(short, long, bool);
// void ai_player_remove_fireteam_squad_fire_team_scripting_remove_player_squad_2_evaluate(short, long, bool);
// void ai_player_set_fireteam_max_fire_team_scripting_set_max_2_evaluate(short, long, bool);
// void ai_player_set_fireteam_no_max_fire_team_scripting_set_no_max_1_evaluate(short, long, bool);
// void ai_player_set_fireteam_max_squad_absorb_distance_fire_team_scripting_set_max_squad_absorb_distance_2_evaluate(short, long, bool);
// void ai_set_fireteam_absorber_ai_scripting_set_fireteam_absorber_2_evaluate(short, long, bool);
// void ai_set_fireteam_fallback_squad_fire_team_scripting_set_fallback_squad_2_evaluate(short, long, bool);
// void ai_is_in_fireteam_fire_team_scripting_is_ai_in_fireteam_1_evaluate(short, long, bool);
// void cs_run_command_script_ai_attach_cs_2_evaluate(short, long, bool);
// void cs_queue_command_script_ai_queue_cs_2_evaluate(short, long, bool);
// void cs_stack_command_script_ai_stack_cs_2_evaluate(short, long, bool);
// void vs_cast_1_evaluate(short, long, bool);
// void vs_cast_2_evaluate(short, long, bool);
// void vs_cast_3_evaluate(short, long, bool);
// void vs_cast_4_evaluate(short, long, bool);
// void vs_cast_5_evaluate(short, long, bool);
// void vs_cast_6_evaluate(short, long, bool);
// void vs_cast_7_evaluate(short, long, bool);
// void vs_role_thread_1_evaluate(short, long, bool);
// void cs_abort_on_alert_thread_1_evaluate(short, long, bool);
// void cs_abort_on_damage_thread_1_evaluate(short, long, bool);
// void cs_abort_on_combat_status_thread_1_evaluate(short, long, bool);
// void cs_abort_on_vehicle_exit_thread_1_evaluate(short, long, bool);
// void cs_cs_abort_on_alert2_evaluate(short, long, bool);
// void cs_cs_abort_on_damage2_evaluate(short, long, bool);
// void cs_cs_abort_on_combat_status2_evaluate(short, long, bool);
// void cs_cs_abort_on_vehicle_exit2_evaluate(short, long, bool);
// void cs_command_script_running_cs_command_script_running_2_evaluate(short, long, bool);
// void cs_command_script_attached_cs_command_script_attached_2_evaluate(short, long, bool);
// void cs_number_queued_cs_number_queued_1_evaluate(short, long, bool);
// void cs_cs_moving_evaluate(short, long, bool);
// void cs_cs_fly_to_evaluate(short, long, bool);
// void cs_cs_fly_to2_evaluate(short, long, bool);
// void cs_cs_fly_to_and_face_evaluate(short, long, bool);
// void cs_cs_fly_to_and_face2_evaluate(short, long, bool);
// void cs_cs_fly_by_evaluate(short, long, bool);
// void cs_cs_fly_by2_evaluate(short, long, bool);
// void cs_cs_go_to_evaluate(short, long, bool);
// void cs_cs_go_to2_evaluate(short, long, bool);
// void cs_cs_go_by_evaluate(short, long, bool);
// void cs_cs_go_by2_evaluate(short, long, bool);
// void cs_cs_go_to_and_face_evaluate(short, long, bool);
// void cs_cs_go_to_and_posture_evaluate(short, long, bool);
// void cs_cs_flying_attach_to_spline_evaluate(short, long, bool);
// void cs_cs_go_to_nearest_evaluate(short, long, bool);
// void cs_cs_move_in_direction_evaluate(short, long, bool);
// void cs_cs_move_towards_evaluate(short, long, bool);
// void cs_cs_move_towards2_evaluate(short, long, bool);
// void cs_cs_move_towards_point_evaluate(short, long, bool);
// void cs_cs_swarm_to_evaluate(short, long, bool);
// void cs_cs_swarm_from_evaluate(short, long, bool);
// void cs_cs_pause_evaluate(short, long, bool);
// void cs_cs_grenade_evaluate(short, long, bool);
// void cs_cs_use_equipment_evaluate(short, long, bool);
// void cs_cs_jump_evaluate(short, long, bool);
// void cs_cs_jump_to_point_evaluate(short, long, bool);
// void cs_cs_vocalize_evaluate(short, long, bool);
// void cs_cs_play_sound_evaluate(short, long, bool);
// void cs_cs_play_sound2_evaluate(short, long, bool);
// void cs_cs_play_sound3_evaluate(short, long, bool);
// void cs_cs_action_evaluate(short, long, bool);
// void cs_cs_action_at_object_evaluate(short, long, bool);
// void cs_cs_action_at_player_evaluate(short, long, bool);
// void cs_cs_start_custom_animation_evaluate(short, long, bool);
// void cs_cs_start_custom_animation2_evaluate(short, long, bool);
// void cs_cs_start_custom_animation_death_evaluate(short, long, bool);
// void cs_cs_start_custom_animation_death2_evaluate(short, long, bool);
// void cs_cs_start_looping_custom_animation_evaluate(short, long, bool);
// void cs_cs_start_looping_custom_animation2_evaluate(short, long, bool);
// void cs_cs_play_line_evaluate(short, long, bool);
// void cs_cs_die_evaluate(short, long, bool);
// void cs_cs_deploy_turret_evaluate(short, long, bool);
// void cs_cs_approach_evaluate(short, long, bool);
// void cs_cs_approach_player_evaluate(short, long, bool);
// void cs_cs_go_to_vehicle_evaluate(short, long, bool);
// void cs_cs_go_to_vehicle2_evaluate(short, long, bool);
// void cs_cs_set_style_evaluate(short, long, bool);
// void cs_cs_force_combat_status_evaluate(short, long, bool);
// void cs_cs_enable_targeting_evaluate(short, long, bool);
// void cs_cs_enable_looking_evaluate(short, long, bool);
// void cs_cs_enable_moving_evaluate(short, long, bool);
// void cs_cs_enable_dialogue_evaluate(short, long, bool);
// void cs_cs_suppress_activity_termination_evaluate(short, long, bool);
// void cs_cs_suppress_dialogue_global_evaluate(short, long, bool);
// void cs_cs_look_evaluate(short, long, bool);
// void cs_cs_look_player_evaluate(short, long, bool);
// void cs_cs_look_object_evaluate(short, long, bool);
// void cs_cs_aim_evaluate(short, long, bool);
// void cs_cs_aim_player_evaluate(short, long, bool);
// void cs_cs_aim_object_evaluate(short, long, bool);
// void cs_cs_face_evaluate(short, long, bool);
// void cs_cs_face_player_evaluate(short, long, bool);
// void cs_cs_face_object_evaluate(short, long, bool);
// void cs_cs_shoot_at_target_evaluate(short, long, bool);
// void cs_cs_shoot_at_target2_evaluate(short, long, bool);
// void cs_cs_shoot_at_point_evaluate(short, long, bool);
// void cs_cs_shoot_secondary_trigger_evaluate(short, long, bool);
// void cs_cs_lower_weapon_evaluate(short, long, bool);
// void cs_cs_vehicle_speed_evaluate(short, long, bool);
// void cs_cs_vehicle_speed_instantaneous_evaluate(short, long, bool);
// void cs_cs_boost_evaluate(short, long, bool);
// void cs_cs_turn_sharpness_evaluate(short, long, bool);
// void cs_cs_enable_pathfinding_failsafe_evaluate(short, long, bool);
// void cs_cs_set_pathfinding_radius_evaluate(short, long, bool);
// void cs_cs_ignore_obstacles_evaluate(short, long, bool);
// void cs_cs_approach_stop_evaluate(short, long, bool);
// void cs_cs_push_stance_evaluate(short, long, bool);
// void cs_cs_crouch_evaluate(short, long, bool);
// void cs_cs_crouch2_evaluate(short, long, bool);
// void cs_cs_walk_evaluate(short, long, bool);
// void cs_cs_posture_set_evaluate(short, long, bool);
// void cs_cs_posture_exit_evaluate(short, long, bool);
// void cs_cs_stow_evaluate(short, long, bool);
// void cs_cs_teleport_evaluate(short, long, bool);
// void cs_cs_stop_custom_animation_evaluate(short, long, bool);
// void cs_cs_stop_sound_evaluate(short, long, bool);
// void cs_cs_player_melee_evaluate(short, long, bool);
// void cs_cs_melee_direction_evaluate(short, long, bool);
// void cs_cs_smash_direction_evaluate(short, long, bool);
// void camera_control_director_script_camera_1_evaluate(short, long, bool);
// void camera_set_scripted_camera_set_absolute_2_evaluate(short, long, bool);
// void camera_set_relative_scripted_camera_set_3_evaluate(short, long, bool);
// void camera_set_animation_scripted_camera_set_animation_2_evaluate(short, long, bool);
// void camera_set_animation_relative_scripted_camera_set_animation_relative_4_evaluate(short, long, bool);
// void camera_set_animation_with_speed_scripted_camera_set_animation_with_speed_3_evaluate(short, long, bool);
// void camera_set_animation_relative_with_speed_scripted_camera_set_animation_relative_with_speed_5_evaluate(short, long, bool);
// void camera_set_animation_relative_with_speed_loop_scripted_camera_set_animation_relative_with_speed_loop_6_evaluate(short, long, bool);
// void camera_set_animation_relative_with_speed_loop_offset_scripted_camera_set_animation_relative_with_speed_loop_offset_7_evaluate(short, long, bool);
// void camera_predict_resources_at_frame_scripted_camera_predict_resources_at_frame_5_evaluate(short, long, bool);
// void camera_predict_resources_at_point_scripted_camera_predict_resources_at_point_1_evaluate(short, long, bool);
// void camera_set_first_person_scripted_camera_set_first_person_1_evaluate(short, long, bool);
// void camera_set_cinematic_scripted_camera_set_cinematic_0_evaluate(short, long, bool);
// void camera_set_cinematic_scene_scripted_camera_set_cinematic_scene_3_evaluate(short, long, bool);
// void camera_place_relative_scripted_camera_set_placement_relative_1_evaluate(short, long, bool);
// void camera_place_worldspace_scripted_camera_set_placement_absolute_0_evaluate(short, long, bool);
// void camera_time_scripted_camera_time_in_hs_ticks_0_evaluate(short, long, bool);
// void camera_set_field_of_view_scripted_camera_set_field_of_view_2_evaluate(short, long, bool);
// void cinematic_camera_set_easing_in_cinematic_camera_set_easing_in_6_evaluate(short, long, bool);
// void cinematic_camera_set_easing_out_cinematic_camera_set_easing_out_1_evaluate(short, long, bool);
// void cinematic_print_cinematic_print_1_evaluate(short, long, bool);
// void camera_set_pan_scripted_camera_set_pan_2_evaluate(short, long, bool);
// void camera_pan_scripted_camera_pan_7_evaluate(short, long, bool);
// void debug_camera_save_director_save_camera_0_evaluate(short, long, bool);
// void debug_camera_load_director_load_camera_0_evaluate(short, long, bool);
// void debug_camera_save_name_director_save_camera_named_1_evaluate(short, long, bool);
// void debug_camera_load_name_director_load_camera_named_1_evaluate(short, long, bool);
// void debug_camera_save_simple_name_director_save_camera_simple_name_1_evaluate(short, long, bool);
// void debug_camera_load_simple_name_director_load_camera_simple_name_1_evaluate(short, long, bool);
// void debug_camera_load_text_director_load_camera_text_1_evaluate(short, long, bool);
// void director_debug_camera_director_debug_camera_1_evaluate(short, long, bool);
// void director_print_camera_transform_director_print_camera_transform_1_evaluate(short, long, bool);
// void director_print_deterministic_camera_transform_director_print_deterministic_camera_transform_1_evaluate(short, long, bool);
// void game_difficulty_get_game_difficulty_level_get_ignore_easy_0_evaluate(short, long, bool);
// void game_difficulty_get_real_game_difficulty_level_get_0_evaluate(short, long, bool);
// void game_insertion_point_get_game_insertion_point_get_0_evaluate(short, long, bool);
// void pvs_set_object_game_pvs_scripted_set_object_1_evaluate(short, long, bool);
// void pvs_set_camera_game_pvs_scripted_set_camera_point_1_evaluate(short, long, bool);
// void pvs_clear_game_pvs_scripted_clear_0_evaluate(short, long, bool);
// void pvs_reset_game_pvs_reset_0_evaluate(short, long, bool);
// void players_unzoom_all_player_control_unzoom_all_0_evaluate(short, long, bool);
// void player_enable_input_player_input_enable_1_evaluate(short, long, bool);
// void player_disable_movement_player_input_mostly_inhibit_1_evaluate(short, long, bool);
// void player_disable_weapon_pickup_player_weapon_pickup_inhibit_1_evaluate(short, long, bool);
// void player_night_vision_on_player_night_vision_on_0_evaluate(short, long, bool);
// void unit_night_vision_on_unit_night_vision_on_1_evaluate(short, long, bool);
// void player_active_camouflage_on_player_active_camouflage_on_0_evaluate(short, long, bool);
// void player_camera_control_scripted_player_control_set_camera_control_1_evaluate(short, long, bool);
// void player_action_test_reset_player_control_action_test_reset_0_evaluate(short, long, bool);
// void player_action_test_primary_trigger_player_control_action_test_primary_trigger_0_evaluate(short, long, bool);
// void player_action_test_grenade_trigger_player_control_action_test_grenade_trigger_0_evaluate(short, long, bool);
// void player_action_test_vision_trigger_player_control_action_test_vision_trigger_0_evaluate(short, long, bool);
// void player_action_test_rotate_weapons_player_control_action_test_rotate_weapons_0_evaluate(short, long, bool);
// void player_action_test_rotate_grenades_player_control_action_test_rotate_grenades_0_evaluate(short, long, bool);
// void player_action_test_jump_player_control_action_test_jump_0_evaluate(short, long, bool);
// void player_action_test_equipment_player_control_action_test_equipment_0_evaluate(short, long, bool);
// void player_action_test_context_primary_player_control_action_test_context_primary_0_evaluate(short, long, bool);
// void player_action_test_vehicle_trick_primary_player_control_action_test_vehicle_trick_primary_0_evaluate(short, long, bool);
// void player_action_test_vehicle_trick_secondary_player_control_action_test_vehicle_trick_secondary_0_evaluate(short, long, bool);
// void player_action_test_melee_player_control_action_test_melee_0_evaluate(short, long, bool);
// void player_action_test_action_player_control_action_test_action_0_evaluate(short, long, bool);
// void player_action_test_accept_player_control_action_test_accept_0_evaluate(short, long, bool);
// void player_action_test_cancel_player_control_action_test_cancel_0_evaluate(short, long, bool);
// void player_action_test_look_relative_up_player_control_action_test_look_relative_up_0_evaluate(short, long, bool);
// void player_action_test_look_relative_down_player_control_action_test_look_relative_down_0_evaluate(short, long, bool);
// void player_action_test_look_relative_left_player_control_action_test_look_relative_left_0_evaluate(short, long, bool);
// void player_action_test_look_relative_right_player_control_action_test_look_relative_right_0_evaluate(short, long, bool);
// void player_action_test_look_relative_all_directions_player_control_action_test_look_relative_all_directions_0_evaluate(short, long, bool);
// void player_action_test_move_relative_all_directions_player_control_action_test_move_relative_all_directions_0_evaluate(short, long, bool);
// void player_action_test_cinematic_skip_player_control_action_test_cinematic_skip_0_evaluate(short, long, bool);
// void player_action_test_start_player_control_action_test_start_0_evaluate(short, long, bool);
// void player_action_test_back_player_control_action_test_back_0_evaluate(short, long, bool);
// void player_action_test_dpad_up_player_control_action_test_dpad_up_0_evaluate(short, long, bool);
// void player_action_test_dpad_down_player_control_action_test_dpad_down_0_evaluate(short, long, bool);
// void player_action_test_dpad_left_player_control_action_test_dpad_left_0_evaluate(short, long, bool);
// void player_action_test_dpad_right_player_control_action_test_dpad_right_0_evaluate(short, long, bool);
// void unit_action_test_reset_player_control_action_test_reset_1_evaluate(short, long, bool);
// void unit_action_test_primary_trigger_player_control_action_test_primary_trigger_1_evaluate(short, long, bool);
// void unit_action_test_grenade_trigger_player_control_action_test_grenade_trigger_1_evaluate(short, long, bool);
// void unit_action_test_vision_trigger_player_control_action_test_vision_trigger_1_evaluate(short, long, bool);
// void unit_action_test_rotate_weapons_player_control_action_test_rotate_weapons_1_evaluate(short, long, bool);
// void unit_action_test_rotate_grenades_player_control_action_test_rotate_grenades_1_evaluate(short, long, bool);
// void unit_action_test_jump_player_control_action_test_jump_1_evaluate(short, long, bool);
// void unit_action_test_equipment_player_control_action_test_equipment_1_evaluate(short, long, bool);
// void unit_action_test_context_primary_player_control_action_test_context_primary_1_evaluate(short, long, bool);
// void unit_action_test_vehicle_trick_primary_player_control_action_test_vehicle_trick_primary_1_evaluate(short, long, bool);
// void unit_action_test_vehicle_trick_secondary_player_control_action_test_vehicle_trick_secondary_1_evaluate(short, long, bool);
// void unit_action_test_melee_player_control_action_test_melee_1_evaluate(short, long, bool);
// void unit_action_test_action_player_control_action_test_action_1_evaluate(short, long, bool);
// void unit_action_test_accept_player_control_action_test_accept_1_evaluate(short, long, bool);
// void unit_action_test_cancel_player_control_action_test_cancel_1_evaluate(short, long, bool);
// void unit_action_test_look_relative_up_player_control_action_test_look_relative_up_1_evaluate(short, long, bool);
// void unit_action_test_look_relative_down_player_control_action_test_look_relative_down_1_evaluate(short, long, bool);
// void unit_action_test_look_relative_left_player_control_action_test_look_relative_left_1_evaluate(short, long, bool);
// void unit_action_test_look_relative_right_player_control_action_test_look_relative_right_1_evaluate(short, long, bool);
// void unit_action_test_look_relative_all_directions_player_control_action_test_look_relative_all_directions_1_evaluate(short, long, bool);
// void unit_action_test_move_relative_all_directions_player_control_action_test_move_relative_all_directions_1_evaluate(short, long, bool);
// void unit_action_test_cinematic_skip_player_control_action_test_cinematic_skip_1_evaluate(short, long, bool);
// void unit_action_test_start_player_control_action_test_start_1_evaluate(short, long, bool);
// void unit_action_test_back_player_control_action_test_back_1_evaluate(short, long, bool);
// void unit_action_test_dpad_up_player_control_action_test_dpad_up_1_evaluate(short, long, bool);
// void unit_action_test_dpad_down_player_control_action_test_dpad_down_1_evaluate(short, long, bool);
// void unit_action_test_dpad_left_player_control_action_test_dpad_left_1_evaluate(short, long, bool);
// void unit_action_test_dpad_right_player_control_action_test_dpad_right_1_evaluate(short, long, bool);
// void unit_confirm_message_player_control_lock_accept_button_until_pressed_1_evaluate(short, long, bool);
// void unit_confirm_cancel_message_player_control_lock_cancel_button_until_pressed_1_evaluate(short, long, bool);
// void unit_enable_soft_ping_region_unit_enable_soft_ping_region_3_evaluate(short, long, bool);
// void unit_print_soft_ping_regions_unit_print_soft_ping_regions_1_evaluate(short, long, bool);
// void player0_looking_up_player0_looking_up_0_evaluate(short, long, bool);
// void player0_looking_down_player0_looking_down_0_evaluate(short, long, bool);
// void player_set_pitch_player_set_pitch_3_evaluate(short, long, bool);
// void player_has_female_voice_player_get_female_voice_1_evaluate(short, long, bool);
// void player_action_test_lookstick_forward_player_control_action_test_lookstick_forward_0_evaluate(short, long, bool);
// void player_action_test_lookstick_backward_player_control_action_test_lookstick_backward_0_evaluate(short, long, bool);
// void debug_teleport_player_test_player_teleport_2_evaluate(short, long, bool);
// void scenario_content_status_reload_scenario_content_status_reload_0_evaluate(short, long, bool);
// void scenario_content_status_force_local_scenario_content_status_force_local_0_evaluate(short, long, bool);
// void scenario_content_status_force_content_scenario_content_status_force_content_0_evaluate(short, long, bool);
// void scenario_content_status_force_clear_scenario_content_status_force_clear_0_evaluate(short, long, bool);
// void map_reset_main_reset_map_debug_0_evaluate(short, long, bool);
// void map_reset_random_main_reset_map_random_debug_0_evaluate(short, long, bool);
// void switch_zone_set_main_switch_zone_set_1_evaluate(short, long, bool);
// void scenario_print_zone_sets_scenario_print_zone_sets_0_evaluate(short, long, bool);
// void scenario_print_current_zone_set_scenario_print_current_zone_set_0_evaluate(short, long, bool);
// void current_zone_set_scenario_zone_set_index_get_0_evaluate(short, long, bool);
// void current_zone_set_fully_active_scenario_zone_set_index_get_if_fully_activated_0_evaluate(short, long, bool);
// void switch_map_and_zone_set_main_switch_scenario_and_zone_set_2_evaluate(short, long, bool);
// void crash_main_crash_1_evaluate(short, long, bool);
// void version_main_print_version_0_evaluate(short, long, bool);
// void status_main_status_print_0_evaluate(short, long, bool);
// void record_movie_movie_record_4_evaluate(short, long, bool);
// void record_movie_distributed_movie_record_distributed_5_evaluate(short, long, bool);
// void screenshot_screenshot_single_1_evaluate(short, long, bool);
// void screenshot_debug_screenshot_debug_0_evaluate(short, long, bool);
// void screenshot_big_screenshot_multiple_2_evaluate(short, long, bool);
// void screenshot_big_raw_screenshot_multiple_raw_2_evaluate(short, long, bool);
// void screenshot_size_screenshot_size_3_evaluate(short, long, bool);
// void screenshot_simple_screenshot_simple_1_evaluate(short, long, bool);
// void screenshot_cubemap_screenshot_cubemap_1_evaluate(short, long, bool);
// void screenshot_webmap_screenshot_single_webmap_1_evaluate(short, long, bool);
// void cubemap_dynamic_generate_cubemap_dynamic_generate_0_evaluate(short, long, bool);
// void object_snapshot_object_snapshot_2_evaluate(short, long, bool);
// void structure_instance_snapshot_structure_instance_snapshot_1_evaluate(short, long, bool);
// void object_thumbnail_object_thumbnail_3_evaluate(short, long, bool);
// void main_menu_main_menu_launch_force_0_evaluate(short, long, bool);
// void main_halt_main_halt_and_display_errors_1_evaluate(short, long, bool);
// void map_name_main_game_launch_legacy_1_evaluate(short, long, bool);
// void game_multiplayer_main_game_launch_set_multiplayer_engine_1_evaluate(short, long, bool);
// void game_campaign_main_game_launch_set_campaign_0_evaluate(short, long, bool);
// void game_survival_main_game_launch_set_survival_0_evaluate(short, long, bool);
// void game_player_count_main_game_launch_set_player_count_1_evaluate(short, long, bool);
// void game_set_variant_game_load_variant_and_reset_map_1_evaluate(short, long, bool);
// void game_splitscreen_main_game_launch_set_multiplayer_splitscreen_count_1_evaluate(short, long, bool);
// void game_difficulty_main_game_launch_set_difficulty_1_evaluate(short, long, bool);
// void game_active_skulls_main_game_launch_set_active_skulls_1_evaluate(short, long, bool);
// void game_coop_players_main_game_launch_set_coop_player_count_1_evaluate(short, long, bool);
// void game_initial_zone_set_main_game_launch_set_initial_zone_set_1_evaluate(short, long, bool);
// void game_tick_rate_main_game_launch_set_tick_rate_1_evaluate(short, long, bool);
// void game_start_main_game_launch_legacy_1_evaluate(short, long, bool);
// void game_start_when_ready_user_interface_networking_game_start_when_ready_0_evaluate(short, long, bool);
// void game_start_when_joined_user_interface_networking_game_start_when_joined_1_evaluate(short, long, bool);
// void game_rate_game_time_set_rate_scale_3_evaluate(short, long, bool);
// void texture_cache_flush_texture_cache_flush_0_evaluate(short, long, bool);
// void geometry_cache_flush_geometry_cache_flush_0_evaluate(short, long, bool);
// void sound_cache_flush_sound_cache_flush_0_evaluate(short, long, bool);
// void animation_cache_flush_animation_cache_flush_0_evaluate(short, long, bool);
// void font_cache_flush_font_cache_flush_0_evaluate(short, long, bool);
// void language_set_set_current_language_from_display_name_slow_1_evaluate(short, long, bool);
// void texture_cache_test_malloc_texture_cache_test_malloc_0_evaluate(short, long, bool);
// void debug_memory_debug_dump_memory_0_evaluate(short, long, bool);
// void debug_memory_by_file_debug_dump_memory_by_file_0_evaluate(short, long, bool);
// void debug_memory_for_file_debug_dump_memory_for_file_1_evaluate(short, long, bool);
// void debug_tags_tag_groups_dump_memory_0_evaluate(short, long, bool);
// void debug_single_tag_tag_group_memory_inspect_single_tag_0_evaluate(short, long, bool);
// void tags_verify_all_tags_verify_all_0_evaluate(short, long, bool);
// void trace_next_frame_trace_next_frame_1_evaluate(short, long, bool);
// void trace_next_frame_to_file_trace_next_frame_to_file_2_evaluate(short, long, bool);
// void trace_tick_trace_tick_1_evaluate(short, long, bool);
// void collision_log_enable_collision_log_enable_1_evaluate(short, long, bool);
// void damage_control_get_damage_control_get_1_evaluate(short, long, bool);
// void damage_control_set_damage_control_set_2_evaluate(short, long, bool);
// void ai_lines_ai_profile_change_render_spray_0_evaluate(short, long, bool);
// void ai_dialogue_break_on_vocalization_ai_scripting_break_on_vocalization_1_evaluate(short, long, bool);
// void fade_in_cinematic_fade_in_4_evaluate(short, long, bool);
// void fade_out_cinematic_fade_out_4_evaluate(short, long, bool);
// void fade_in_for_player_game_engine_fade_in_for_player_1_evaluate(short, long, bool);
// void fade_out_for_player_game_engine_fade_out_for_player_1_evaluate(short, long, bool);
// void cinematic_tag_fade_out_from_game_cinematic_fade_out_from_game_1_evaluate(short, long, bool);
// void cinematic_tag_fade_in_to_cinematic_cinematic_fade_in_to_cinematic_1_evaluate(short, long, bool);
// void cinematic_tag_fade_out_from_cinematic_cinematic_fade_out_from_cinematic_1_evaluate(short, long, bool);
// void cinematic_tag_fade_in_to_game_cinematic_fade_in_to_game_1_evaluate(short, long, bool);
// void cinematic_transition_fade_out_from_game_cinematic_transition_fade_out_from_game_1_evaluate(short, long, bool);
// void cinematic_transition_fade_in_to_cinematic_cinematic_transition_fade_in_to_cinematic_1_evaluate(short, long, bool);
// void cinematic_transition_fade_out_from_cinematic_cinematic_transition_fade_out_from_cinematic_1_evaluate(short, long, bool);
// void cinematic_transition_fade_in_to_game_cinematic_transition_fade_in_to_game_1_evaluate(short, long, bool);
// void cinematic_run_script_by_name_cinematic_run_hs_script_by_name_1_evaluate(short, long, bool);
// void cinematic_start_cinematic_start_0_evaluate(short, long, bool);
// void cinematic_stop_cinematic_stop_0_evaluate(short, long, bool);
// void cinematic_skip_start_internal_cinematic_skip_start_0_evaluate(short, long, bool);
// void cinematic_skip_stop_internal_cinematic_skip_stop_0_evaluate(short, long, bool);
// void cinematic_show_letterbox_cinematic_show_letterbox_1_evaluate(short, long, bool);
// void cinematic_show_letterbox_immediate_cinematic_show_letterbox_immediate_1_evaluate(short, long, bool);
// void cinematic_set_title_cinematic_set_title_1_evaluate(short, long, bool);
// void cinematic_set_title_delayed_cinematic_set_title_delayed_2_evaluate(short, long, bool);
// void cinematic_suppress_bsp_object_creation_cinematic_scripting_suppress_bsp_object_creation_1_evaluate(short, long, bool);
// void cinematic_subtitle_hs_subtitle_2_evaluate(short, long, bool);
// void cinematic_set_cinematic_set_1_evaluate(short, long, bool);
// void cinematic_set_shot_cinematic_set_shot_2_evaluate(short, long, bool);
// void cinematic_get_shot_cinematic_get_shot_0_evaluate(short, long, bool);
// void cinematic_set_early_exit_cinematic_set_early_exit_1_evaluate(short, long, bool);
// void cinematic_get_early_exit_cinematic_get_early_exit_0_evaluate(short, long, bool);
// void cinematic_set_active_camera_cinematic_set_active_camera_1_evaluate(short, long, bool);
// void cinematic_object_create_cinematic_object_create_from_cinematic_scene_1_evaluate(short, long, bool);
// void cinematic_object_create_cinematic_anchor_cinematic_object_create_cinematic_anchor_1_evaluate(short, long, bool);
// void cinematic_object_destroy_cinematic_object_destroy_1_evaluate(short, long, bool);
// void cinematic_objects_destroy_all_cinematic_objects_destroy_all_0_evaluate(short, long, bool);
// void cinematic_destroy_cinematic_destroy_0_evaluate(short, long, bool);
// void cinematic_in_progress_cinematic_in_progress_0_evaluate(short, long, bool);
// void cinematic_can_be_skipped_cinematic_can_be_skipped_0_evaluate(short, long, bool);
// void cinematic_clips_initialize_for_shot_cinematic_clips_initialize_for_shot_1_evaluate(short, long, bool);
// void cinematic_clips_destroy_cinematic_clips_destroy_0_evaluate(short, long, bool);
// void cinematic_lights_initialize_for_shot_cinematic_lights_initialize_for_shot_1_evaluate(short, long, bool);
// void cinematic_lights_destroy_cinematic_lights_destroy_0_evaluate(short, long, bool);
// void cinematic_lights_destroy_shot_cinematic_lights_destroy_shot_0_evaluate(short, long, bool);
// void cinematic_light_object_cinematic_light_object_4_evaluate(short, long, bool);
// void cinematic_light_object_off_cinematic_light_object_off_1_evaluate(short, long, bool);
// void cinematic_lighting_rebuild_all_cinematic_lighting_rebuild_all_0_evaluate(short, long, bool);
// void cinematic_lighting_update_dynamic_light_direction_cinematic_lighting_update_dynamic_light_direction_5_evaluate(short, long, bool);
// void cinematic_lighting_update_vmf_light_cinematic_lighting_update_vmf_light_8_evaluate(short, long, bool);
// void cinematic_lighting_update_analytical_light_cinematic_lighting_update_analytical_light_7_evaluate(short, long, bool);
// void cinematic_lighting_update_ambient_light_cinematic_lighting_update_ambient_light_5_evaluate(short, long, bool);
// void cinematic_lighting_update_scales_cinematic_lighting_update_scales_5_evaluate(short, long, bool);
// void cinematic_object_get_cinematic_scripting_get_object_by_name_1_evaluate(short, long, bool);
// void cinematic_unit_get_cinematic_scripting_get_unit_by_name_1_evaluate(short, long, bool);
// void cinematic_weapon_get_cinematic_scripting_get_weapon_by_name_1_evaluate(short, long, bool);
// void cinematic_reset_cinematic_reset_0_evaluate(short, long, bool);
// void camera_set_briefing_camera_render_main_camera_to_texture_camera_1_evaluate(short, long, bool);
// void cinematic_tag_reference_get_cinematic_cinematic_tag_reference_get_cinematic_1_evaluate(short, long, bool);
// void cinematic_tag_reference_get_scene_cinematic_tag_reference_get_scene_1_evaluate(short, long, bool);
// void cinematic_tag_reference_get_effect_cinematic_tag_reference_get_effect_4_evaluate(short, long, bool);
// void cinematic_tag_reference_get_dialogue_cinematic_tag_reference_get_dialogue_4_evaluate(short, long, bool);
// void cinematic_tag_reference_get_music_cinematic_tag_reference_get_music_4_evaluate(short, long, bool);
// void cinematic_tag_reference_get_music_looping_cinematic_tag_reference_get_music_looping_4_evaluate(short, long, bool);
// void cinematic_tag_reference_get_animation_cinematic_tag_reference_get_animation_3_evaluate(short, long, bool);
// void cinematic_scripting_object_coop_flags_valid_cinematic_scripting_object_coop_flags_valid_2_evaluate(short, long, bool);
// void cinematic_scripting_fade_out_cinematic_scripting_fade_out_4_evaluate(short, long, bool);
// void cinematic_scripting_create_object_cinematic_scripting_create_object_2_evaluate(short, long, bool);
// void cinematic_scripting_create_cinematic_object_cinematic_scripting_create_cinematic_object_2_evaluate(short, long, bool);
// void cinematic_scripting_start_animation_cinematic_scripting_start_animation_3_evaluate(short, long, bool);
// void cinematic_scripting_destroy_object_cinematic_scripting_destroy_object_2_evaluate(short, long, bool);
// void cinematic_scripting_destroy_objects_cinematic_scripting_destroy_objects_1_evaluate(short, long, bool);
// void cinematic_scripting_create_scene_cinematic_scripting_create_scene_1_evaluate(short, long, bool);
// void cinematic_scripting_destroy_scene_cinematic_scripting_destroy_scene_1_evaluate(short, long, bool);
// void cinematic_scripting_start_effect_cinematic_scripting_start_effect_4_evaluate(short, long, bool);
// void cinematic_scripting_start_music_cinematic_scripting_start_music_3_evaluate(short, long, bool);
// void cinematic_scripting_start_dialogue_cinematic_scripting_start_dialogue_4_evaluate(short, long, bool);
// void cinematic_scripting_stop_music_cinematic_scripting_stop_music_3_evaluate(short, long, bool);
// void cinematic_scripting_start_screen_effect_cinematic_scripting_start_screen_effect_3_evaluate(short, long, bool);
// void cinematic_scripting_stop_screen_effect_cinematic_scripting_stop_screen_effect_3_evaluate(short, long, bool);
// void cinematic_scripting_create_and_animate_object_cinematic_scripting_create_and_animate_object_5_evaluate(short, long, bool);
// void cinematic_scripting_create_and_animate_cinematic_object_cinematic_scripting_create_and_animate_cinematic_object_5_evaluate(short, long, bool);
// void cinematic_scripting_create_and_animate_object_no_animation_cinematic_scripting_create_and_animate_object_no_animation_4_evaluate(short, long, bool);
// void cinematic_scripting_create_and_animate_cinematic_object_no_animation_cinematic_scripting_create_and_animate_cinematic_object_no_animation_4_evaluate(short, long, bool);
// void cinematic_scripting_set_user_input_constraints_cinematic_scripting_set_user_input_constraints_3_evaluate(short, long, bool);
// void attract_mode_start_attract_mode_start_0_evaluate(short, long, bool);
// void attract_mode_set_seconds_attract_mode_set_countdown_length_1_evaluate(short, long, bool);
// void game_won_game_won_0_evaluate(short, long, bool);
// void game_lost_game_lost_1_evaluate(short, long, bool);
// void game_revert_main_revert_map_scripting_0_evaluate(short, long, bool);
// void game_award_level_complete_achievements_game_react_to_level_completion_0_evaluate(short, long, bool);
// void game_is_cooperative_game_is_cooperative_0_evaluate(short, long, bool);
// void game_is_playtest_game_is_playtest_0_evaluate(short, long, bool);
// void game_can_use_flashlights_game_can_use_flashlights_set_1_evaluate(short, long, bool);
// void game_save_and_quit_main_save_and_exit_campaign_0_evaluate(short, long, bool);
// void game_save_unsafe_main_save_map_0_evaluate(short, long, bool);
// void game_insertion_point_unlock_game_insertion_point_unlock_1_evaluate(short, long, bool);
// void game_insertion_point_lock_game_insertion_point_lock_1_evaluate(short, long, bool);
// void game_insertion_point_set_game_insertion_point_set_1_evaluate(short, long, bool);
// void saved_games_delete_campaign_save_hs_saved_game_files_delete_saved_game_state_test_1_evaluate(short, long, bool);
// void saved_games_autosave_free_up_space_autosave_queue_free_up_space_0_evaluate(short, long, bool);
// void achievement_grant_to_player_player_grant_achievement_by_name_2_evaluate(short, long, bool);
// void achievement_grant_to_controller_controller_grant_achievement_by_name_2_evaluate(short, long, bool);
// void achievement_grant_to_all_players_scripting_grant_achievement_to_all_players_by_name_1_evaluate(short, long, bool);
// void achievements_enable_game_achievements_enable_1_evaluate(short, long, bool);
// void achievements_skip_validation_checks_game_achievements_validation_disable_1_evaluate(short, long, bool);
// void debug_spawning_influencers_game_engine_debug_spawn_influencers_1_evaluate(short, long, bool);
// void debug_spawning_respawn_zones_game_engine_debug_respawn_zone_influencers_1_evaluate(short, long, bool);
// void debug_spawning_proximity_forbid_game_engine_debug_spawn_influencers_proximity_forbid_1_evaluate(short, long, bool);
// void debug_spawning_moving_vehicle_game_engine_debug_spawn_influencers_vehicles_1_evaluate(short, long, bool);
// void debug_spawning_weapon_influences_game_engine_debug_spawn_influencers_weapons_1_evaluate(short, long, bool);
// void debug_spawning_dangerous_projectiles_game_engine_debug_spawn_influencers_projectiles_1_evaluate(short, long, bool);
// void debug_spawning_deployed_equipment_game_engine_debug_spawn_influencers_equipment_1_evaluate(short, long, bool);
// void debug_spawning_proximity_enemy_game_engine_debug_spawn_influencers_enemies_1_evaluate(short, long, bool);
// void debug_spawning_teammates_game_engine_debug_spawn_influencers_teammates_1_evaluate(short, long, bool);
// void debug_spawning_dead_teammates_game_engine_debug_spawn_influencers_dead_teammates_1_evaluate(short, long, bool);
// void debug_spawning_random_influence_game_engine_debug_spawn_influencers_random_weight_component_1_evaluate(short, long, bool);
// void debug_spawning_nominal_weight_game_engine_debug_spawn_influencers_nominal_weight_1_evaluate(short, long, bool);
// void debug_spawning_natural_weight_game_engine_debug_spawn_influencers_natural_weight_1_evaluate(short, long, bool);
// void debug_spawning_target_game_engine_debug_spawn_influencers_set_target_player_1_evaluate(short, long, bool);
// void debug_spawning_use_history_game_engine_debug_spawn_influencers_use_historic_spawn_state_1_evaluate(short, long, bool);
// void debug_initial_spawn_point_objects_game_engine_toggle_initial_spawn_point_cycling_1_evaluate(short, long, bool);
// void debug_respawn_point_objects_game_engine_toggle_respawn_point_cycling_1_evaluate(short, long, bool);
// void game_export_variant_settings_game_engine_dump_variant_settings_1_evaluate(short, long, bool);
// void game_engine_event_test_general_game_engine_test_general_event_1_evaluate(short, long, bool);
// void game_engine_event_test_flavor_game_engine_test_flavor_event_1_evaluate(short, long, bool);
// void core_load_main_load_core_0_evaluate(short, long, bool);
// void core_load_name_main_load_core_name_1_evaluate(short, long, bool);
// void core_save_main_save_core_0_evaluate(short, long, bool);
// void core_save_name_main_save_core_name_1_evaluate(short, long, bool);
// void core_load_game_main_game_load_from_core_0_evaluate(short, long, bool);
// void core_load_game_name_main_game_load_from_core_name_1_evaluate(short, long, bool);
// void core_regular_upload_to_debug_server_game_state_toggle_periodic_uploading_to_debug_server_1_evaluate(short, long, bool);
// void core_set_upload_option_game_state_set_test_options_1_evaluate(short, long, bool);
// void core_force_immediate_save_on_core_load_game_state_force_immediate_save_on_core_load_1_evaluate(short, long, bool);
// void force_debugger_not_present_assert_handler_force_debugger_not_present_1_evaluate(short, long, bool);
// void force_debugger_always_present_assert_handler_force_debugger_always_present_1_evaluate(short, long, bool);
// void game_safe_to_save_game_safe_to_save_0_evaluate(short, long, bool);
// void game_safe_to_speak_game_safe_to_speak_0_evaluate(short, long, bool);
// void game_all_quiet_game_all_quiet_0_evaluate(short, long, bool);
// void game_save_game_save_safe_0_evaluate(short, long, bool);
// void game_save_cancel_game_save_cancel_0_evaluate(short, long, bool);
// void game_save_no_timeout_game_save_no_timeout_0_evaluate(short, long, bool);
// void game_save_immediate_game_save_immediate_0_evaluate(short, long, bool);
// void game_saving_game_saving_0_evaluate(short, long, bool);
// void game_reverted_game_state_reverted_0_evaluate(short, long, bool);
// void survival_mode_respawn_dead_players_survival_mode_respawn_dead_players_0_evaluate(short, long, bool);
// void survival_mode_lives_get_survival_mode_get_lives_1_evaluate(short, long, bool);
// void survival_mode_lives_set_survival_mode_set_lives_2_evaluate(short, long, bool);
// void survival_mode_get_mp_round_count_game_engine_get_number_of_rounds_0_evaluate(short, long, bool);
// void survival_mode_get_mp_round_current_game_engine_get_round_0_evaluate(short, long, bool);
// void survival_mode_set_get_survival_mode_get_set_index_0_evaluate(short, long, bool);
// void survival_mode_round_get_survival_mode_get_round_index_0_evaluate(short, long, bool);
// void survival_mode_waves_per_round_survival_mode_get_waves_per_round_0_evaluate(short, long, bool);
// void survival_mode_rounds_per_set_survival_mode_get_rounds_per_set_0_evaluate(short, long, bool);
// void survival_mode_wave_get_survival_mode_get_wave_index_0_evaluate(short, long, bool);
// void survival_mode_set_multiplier_get_survival_mode_get_set_multiplier_0_evaluate(short, long, bool);
// void survival_mode_set_multiplier_set_survival_mode_set_set_multiplier_1_evaluate(short, long, bool);
// void survival_mode_bonus_multiplier_get_survival_mode_get_bonus_multiplier_0_evaluate(short, long, bool);
// void survival_mode_bonus_multiplier_set_survival_mode_set_bonus_multiplier_1_evaluate(short, long, bool);
// void survival_mode_get_wave_squad_survival_mode_get_wave_squad_type_0_evaluate(short, long, bool);
// void survival_mode_current_wave_is_initial_survival_current_wave_is_initial_0_evaluate(short, long, bool);
// void survival_mode_current_wave_is_boss_survival_current_wave_is_boss_0_evaluate(short, long, bool);
// void survival_mode_current_wave_is_bonus_survival_current_wave_is_bonus_0_evaluate(short, long, bool);
// void survival_mode_current_wave_is_last_in_set_survival_current_wave_is_last_in_set_0_evaluate(short, long, bool);
// void survival_mode_begin_new_set_survival_mode_begin_new_set_0_evaluate(short, long, bool);
// void survival_mode_begin_new_wave_survival_mode_begin_new_wave_0_evaluate(short, long, bool);
// void survival_mode_end_set_survival_mode_end_set_0_evaluate(short, long, bool);
// void survival_mode_end_wave_survival_mode_end_wave_0_evaluate(short, long, bool);
// void survival_mode_award_hero_medal_survival_mode_award_hero_medal_0_evaluate(short, long, bool);
// void survival_mode_incident_new_survival_mode_incident_new_1_evaluate(short, long, bool);
// void chud_bonus_round_show_timer_chud_scripting_bonus_round_show_timer_1_evaluate(short, long, bool);
// void chud_bonus_round_start_timer_chud_scripting_bonus_round_start_timer_1_evaluate(short, long, bool);
// void chud_bonus_round_set_timer_chud_scripting_bonus_round_set_timer_1_evaluate(short, long, bool);
// void survival_mode_get_time_limit_hs_survival_get_time_limit_0_evaluate(short, long, bool);
// void survival_mode_get_set_count_hs_survival_get_set_count_0_evaluate(short, long, bool);
// void survival_mode_get_bonus_lives_awarded_hs_survival_get_bonus_lives_awarded_0_evaluate(short, long, bool);
// void survival_mode_get_bonus_target_hs_survival_get_bonus_target_0_evaluate(short, long, bool);
// void survival_mode_get_shared_team_life_count_hs_survival_get_shared_team_life_count_0_evaluate(short, long, bool);
// void survival_mode_get_elite_life_count_hs_survival_get_elite_life_count_0_evaluate(short, long, bool);
// void survival_mode_max_lives_hs_survival_get_max_lives_0_evaluate(short, long, bool);
// void survival_mode_generator_count_hs_survival_get_generator_count_0_evaluate(short, long, bool);
// void survival_mode_bonus_lives_elite_death_hs_survival_get_bonus_lives_on_elite_player_death_0_evaluate(short, long, bool);
// void survival_mode_scenario_extras_enable_hs_survival_get_enable_scenario_hazards_0_evaluate(short, long, bool);
// void survival_mode_weapon_drops_enable_hs_survival_get_enable_weapon_drops_0_evaluate(short, long, bool);
// void survival_mode_ammo_crates_enable_hs_survival_get_enable_ammo_crates_0_evaluate(short, long, bool);
// void survival_mode_generator_defend_all_hs_survival_get_generator_defend_all_0_evaluate(short, long, bool);
// void survival_mode_generator_random_spawn_hs_survival_get_generator_random_spawn_0_evaluate(short, long, bool);
// void survival_mode_current_wave_uses_dropship_survival_mode_current_wave_uses_dropship_0_evaluate(short, long, bool);
// void survival_mode_get_current_wave_time_limit_survival_mode_get_current_wave_time_limit_0_evaluate(short, long, bool);
// void survival_mode_get_respawn_time_seconds_hs_survival_get_respawn_time_seconds_1_evaluate(short, long, bool);
// void survival_mode_team_respawns_on_wave_hs_survival_get_team_respawns_on_wave_1_evaluate(short, long, bool);
// void survival_mode_sudden_death_survival_mode_sudden_death_1_evaluate(short, long, bool);
// void survival_increment_human_score_survival_mode_increment_human_score_1_evaluate(short, long, bool);
// void survival_increment_elite_score_survival_mode_increment_elite_score_1_evaluate(short, long, bool);
// void survival_mode_set_spartan_license_plate_survival_mode_set_spartan_license_plate_5_evaluate(short, long, bool);
// void survival_mode_set_elite_license_plate_survival_mode_set_elite_license_plate_5_evaluate(short, long, bool);
// void survival_mode_player_count_by_team_survival_mode_player_count_by_team_1_evaluate(short, long, bool);
// void survival_mode_players_by_team_survival_players_by_team_1_evaluate(short, long, bool);
// void sound_impulse_predict_scripted_sound_predict_1_evaluate(short, long, bool);
// void sound_impulse_trigger_scripted_sound_trigger_4_evaluate(short, long, bool);
// void sound_impulse_start_scripted_sound_new_3_evaluate(short, long, bool);
// void sound_impulse_start_cinematic_scripted_sound_new_cutscene_5_evaluate(short, long, bool);
// void sound_impulse_start_effect_scripted_sound_new_with_effect_4_evaluate(short, long, bool);
// void sound_impulse_start_with_subtitle_scripted_sound_new_with_subtitle_5_evaluate(short, long, bool);
// void sound_impulse_time_scripted_sound_time_legacy_do_not_use_1_evaluate(short, long, bool);
// void sound_impulse_time_scripted_sound_time_explicit_hs_ticks_2_evaluate(short, long, bool);
// void sound_impulse_language_time_scripted_sound_language_time_explicit_hs_ticks_1_evaluate(short, long, bool);
// void sound_impulse_stop_scripted_sound_stop_1_evaluate(short, long, bool);
// void sound_impulse_start_3d_scripted_sound_new_3d_3_evaluate(short, long, bool);
// void sound_impulse_mark_as_outro_scripted_sound_mark_as_outro_1_evaluate(short, long, bool);
// void sound_impulse_start_naked_scripted_sound_new_naked_3_evaluate(short, long, bool);
// void sound_preload_dialogue_sounds_scripted_sound_preload_dialogue_sounds_1_evaluate(short, long, bool);
// void sound_looping_predict_scripted_foley_predict_1_evaluate(short, long, bool);
// void sound_looping_start_with_effect_scripted_looping_sound_start_with_effect_4_evaluate(short, long, bool);
// void sound_looping_start_scripted_looping_sound_start_3_evaluate(short, long, bool);
// void sound_looping_resume_scripted_looping_sound_resume_3_evaluate(short, long, bool);
// void sound_looping_stop_scripted_looping_sound_stop_1_evaluate(short, long, bool);
// void sound_looping_stop_immediately_scripted_looping_sound_stop_immediately_1_evaluate(short, long, bool);
// void sound_looping_set_scale_scripted_looping_sound_set_scale_2_evaluate(short, long, bool);
// void sound_looping_set_alternate_scripted_looping_sound_set_alternate_2_evaluate(short, long, bool);
// void sound_looping_activate_layer_scripted_looping_sound_activate_layer_2_evaluate(short, long, bool);
// void sound_looping_deactivate_layer_scripted_looping_sound_deactivate_layer_2_evaluate(short, long, bool);
// void sound_loop_spam_scripting_looping_sound_spam_0_evaluate(short, long, bool);
// void sound_class_show_channel_sound_classes_show_in_channel_debug_2_evaluate(short, long, bool);
// void sound_class_debug_sound_start_sound_classes_debug_sound_start_2_evaluate(short, long, bool);
// void debug_sounds_enable_debug_sound_classes_enable_2_evaluate(short, long, bool);
// void sound_class_set_gain_scripting_sound_class_set_gain_3_evaluate(short, long, bool);
// void sound_class_set_gain_db_scripting_sound_class_set_gain_db_3_evaluate(short, long, bool);
// void sound_class_enable_ducker_scripting_sound_class_enable_ducker_2_evaluate(short, long, bool);
// void debug_sound_environment_parameter_platform_sound_set_debug_sound_environment_parameter_2_evaluate(short, long, bool);
// void sound_start_global_effect_scripted_game_sound_start_global_effect_2_evaluate(short, long, bool);
// void sound_start_timed_global_effect_scripted_game_sound_start_timed_global_effect_3_evaluate(short, long, bool);
// void sound_stop_global_effect_scripted_game_sound_stop_global_effect_1_evaluate(short, long, bool);
// void sound_enable_acoustic_palette_game_sound_enable_acoustic_palette_1_evaluate(short, long, bool);
// void sound_disable_acoustic_palette_game_sound_disable_acoustic_palette_1_evaluate(short, long, bool);
// void vehicle_force_alternate_state_vehicle_scripting_set_alternate_state_2_evaluate(short, long, bool);
// void vehicle_auto_turret_vehicle_set_auto_turret_5_evaluate(short, long, bool);
// void vehicle_hover_vehicle_hover_2_evaluate(short, long, bool);
// void vehicle_count_bipeds_killed_vehicle_count_bipeds_killed_1_evaluate(short, long, bool);
// void biped_ragdoll_biped_scripting_ragdoll_1_evaluate(short, long, bool);
// void water_float_reset_water_physics_object_float_reset_1_evaluate(short, long, bool);
// void hud_show_training_text_player_training_show_scripted_training_text_1_evaluate(short, long, bool);
// void hud_set_training_text_player_training_set_scripted_training_text_1_evaluate(short, long, bool);
// void hud_enable_training_player_training_enable_scripted_1_evaluate(short, long, bool);
// void player_training_activate_night_vision_player_training_activate_night_vision_0_evaluate(short, long, bool);
// void player_training_activate_crouch_player_training_activate_crouch_0_evaluate(short, long, bool);
// void player_training_activate_stealth_player_training_activate_stealth_0_evaluate(short, long, bool);
// void player_training_activate_equipment_player_training_activate_equipment_0_evaluate(short, long, bool);
// void player_training_activate_jump_player_training_activate_jump_0_evaluate(short, long, bool);
// void player_training_reset_player_training_reset_1_evaluate(short, long, bool);
// void chud_texture_cam_chud_texture_cam_set_1_evaluate(short, long, bool);
// void chud_show_chud_scripting_show_1_evaluate(short, long, bool);
// void chud_show_weapon_stats_chud_scripting_show_weapon_stats_1_evaluate(short, long, bool);
// void chud_show_crosshair_chud_scripting_show_crosshair_1_evaluate(short, long, bool);
// void chud_show_shield_chud_scripting_show_shield_1_evaluate(short, long, bool);
// void chud_show_grenades_chud_scripting_show_grenades_1_evaluate(short, long, bool);
// void chud_show_messages_chud_scripting_show_messages_1_evaluate(short, long, bool);
// void chud_show_motion_sensor_chud_scripting_show_motion_sensor_1_evaluate(short, long, bool);
// void chud_show_cinematics_chud_scripting_show_cinematics_1_evaluate(short, long, bool);
// void chud_fade_weapon_stats_for_player_chud_scripting_class_fade_weapon_stats_3_evaluate(short, long, bool);
// void chud_fade_crosshair_for_player_chud_scripting_class_fade_crosshair_3_evaluate(short, long, bool);
// void chud_fade_shield_for_player_chud_scripting_class_fade_shield_3_evaluate(short, long, bool);
// void chud_fade_grenades_for_player_chud_scripting_class_fade_grenades_3_evaluate(short, long, bool);
// void chud_fade_messages_for_player_chud_scripting_class_fade_messages_3_evaluate(short, long, bool);
// void chud_fade_motion_sensor_for_player_chud_scripting_class_fade_motion_sensor_3_evaluate(short, long, bool);
// void chud_fade_chapter_title_for_player_chud_scripting_class_fade_chapter_title_3_evaluate(short, long, bool);
// void chud_fade_cinematics_for_player_chud_scripting_class_fade_cinematics_3_evaluate(short, long, bool);
// void chud_cinematic_fade_chud_scripting_set_fade_2_evaluate(short, long, bool);
// void chud_track_object_chud_scripting_track_object_2_evaluate(short, long, bool);
// void chud_track_object_with_priority_chud_scripting_track_object_with_priority_2_evaluate(short, long, bool);
// void chud_track_object_with_priority_chud_scripting_track_object_with_priority_3_evaluate(short, long, bool);
// void chud_track_flag_chud_scripting_track_cutscene_flag_2_evaluate(short, long, bool);
// void chud_track_flag_with_priority_chud_scripting_track_cutscene_flag_with_priority_2_evaluate(short, long, bool);
// void chud_track_flag_with_priority_chud_scripting_track_cutscene_flag_with_priority_3_evaluate(short, long, bool);
// void chud_track_object_for_player_chud_scripting_track_object_for_player_3_evaluate(short, long, bool);
// void chud_track_object_for_player_with_priority_chud_scripting_track_object_for_player_with_priority_3_evaluate(short, long, bool);
// void chud_track_object_for_player_with_priority_chud_scripting_track_object_for_player_with_priority_4_evaluate(short, long, bool);
// void chud_track_flag_for_player_chud_scripting_track_cutscene_flag_for_player_3_evaluate(short, long, bool);
// void chud_track_flag_for_player_with_priority_chud_scripting_track_cutscene_flag_for_player_with_priority_3_evaluate(short, long, bool);
// void chud_track_flag_for_player_with_priority_chud_scripting_track_cutscene_flag_for_player_with_priority_4_evaluate(short, long, bool);
// void chud_track_object_set_vertical_offset_chud_scripting_object_set_vertical_offset_2_evaluate(short, long, bool);
// void chud_track_cutscene_flag_set_vertical_offset_chud_scripting_cutscene_flag_set_vertical_offset_2_evaluate(short, long, bool);
// void chud_post_message_HACK_chud_scripting_post_message_1_evaluate(short, long, bool);
// void chud_post_message_chud_scripting_post_message_2_evaluate(short, long, bool);
// void chud_post_medal_chud_messaging_post_medal_2_evaluate(short, long, bool);
// void chud_set_static_hs_variable_chud_scripting_set_static_hs_variable_3_evaluate(short, long, bool);
// void chud_set_countdown_hs_variable_chud_scripting_set_countdown_hs_variable_3_evaluate(short, long, bool);
// void chud_set_countup_hs_variable_chud_scripting_set_countup_hs_variable_3_evaluate(short, long, bool);
// void chud_clear_hs_variable_chud_scripting_clear_hs_variable_2_evaluate(short, long, bool);
// void chud_get_hs_variable_chud_scripting_get_hs_variable_2_evaluate(short, long, bool);
// void chud_show_arbiter_ai_navpoint_chud_show_arbiter_ai_navpoint_1_evaluate(short, long, bool);
// void chud_show_screen_objective_chud_scripting_show_screen_objective_1_evaluate(short, long, bool);
// void chud_show_screen_chapter_title_chud_scripting_show_screen_chapter_title_1_evaluate(short, long, bool);
// void chud_show_screen_training_chud_scripting_show_screen_training_2_evaluate(short, long, bool);
// void cls_terminal_clear_0_evaluate(short, long, bool);
// void events_spam_suppression_enable_events_spam_suppression_enable_1_evaluate(short, long, bool);
// void error_geometry_show_error_report_show_substring_1_evaluate(short, long, bool);
// void error_geometry_hide_error_report_hide_substring_1_evaluate(short, long, bool);
// void error_geometry_show_all_error_report_show_all_0_evaluate(short, long, bool);
// void error_geometry_hide_all_error_report_hide_all_0_evaluate(short, long, bool);
// void error_geometry_list_error_report_list_0_evaluate(short, long, bool);
// void player_effect_set_max_translation_scripted_player_effect_set_translation_3_evaluate(short, long, bool);
// void player_effect_set_max_rotation_scripted_player_effect_set_rotation_3_evaluate(short, long, bool);
// void player_effect_set_max_rumble_scripted_player_effect_set_rumble_2_evaluate(short, long, bool);
// void player_effect_start_scripted_player_effect_start_2_evaluate(short, long, bool);
// void player_effect_stop_scripted_player_effect_stop_1_evaluate(short, long, bool);
// void player_effect_set_max_translation_for_player_scripted_player_effect_set_translation_for_player_4_evaluate(short, long, bool);
// void player_effect_set_max_rotation_for_player_scripted_player_effect_set_rotation_for_player_4_evaluate(short, long, bool);
// void player_effect_set_max_rumble_for_player_scripted_player_effect_set_rumble_for_player_3_evaluate(short, long, bool);
// void player_effect_start_for_player_scripted_player_effect_start_for_player_3_evaluate(short, long, bool);
// void player_effect_stop_for_player_scripted_player_effect_stop_for_player_2_evaluate(short, long, bool);
// void time_code_show_scripted_time_code_show_1_evaluate(short, long, bool);
// void time_code_start_scripted_time_code_start_1_evaluate(short, long, bool);
// void time_code_reset_scripted_time_code_reset_0_evaluate(short, long, bool);
// void script_screen_effect_set_value_rasterizer_script_screen_effect_set_value_2_evaluate(short, long, bool);
// void cinematic_screen_effect_start_rasterizer_screen_effect_start_1_evaluate(short, long, bool);
// void cinematic_screen_effect_set_crossfade_rasterizer_screen_effect_set_crossfade_1_evaluate(short, long, bool);
// void cinematic_screen_effect_set_crossfade2_rasterizer_screen_effect_set_crossfade2_2_evaluate(short, long, bool);
// void cinematic_screen_effect_stop_rasterizer_screen_effect_stop_0_evaluate(short, long, bool);
// void cinematic_set_near_clip_distance_rasterizer_set_near_clip_distance_1_evaluate(short, long, bool);
// void cinematic_set_far_clip_distance_rasterizer_set_far_clip_distance_1_evaluate(short, long, bool);
// void render_atmosphere_fog_rasterizer_game_state_set_atmosphere_fog_enable_1_evaluate(short, long, bool);
// void motion_blur_rasterizer_game_state_set_motion_blur_enable_1_evaluate(short, long, bool);
// void antialias_blur_rasterizer_game_state_set_antialias_blur_enable_1_evaluate(short, long, bool);
// void render_weather_rasterizer_game_state_set_weather_enable_1_evaluate(short, long, bool);
// void render_patchy_fog_rasterizer_game_state_set_patchy_fog_enable_1_evaluate(short, long, bool);
// void render_ssao_rasterizer_game_state_set_ssao_enable_1_evaluate(short, long, bool);
// void render_planar_fog_rasterizer_game_state_set_planar_fog_enable_1_evaluate(short, long, bool);
// void motion_blur_enabled_rasterizer_game_state_get_motion_blur_enabled_0_evaluate(short, long, bool);
// void cinematic_set_environment_map_attenuation_rasterizer_set_cinematic_environment_map_attenuation_3_evaluate(short, long, bool);
// void cinematic_set_environment_map_bitmap_rasterizer_set_cinematic_environment_map_bitmap_1_evaluate(short, long, bool);
// void cinematic_reset_environment_map_bitmap_rasterizer_reset_cinematic_environment_map_bitmap_0_evaluate(short, long, bool);
// void cinematic_set_environment_map_tint_rasterizer_set_cinematic_environment_map_tint_8_evaluate(short, long, bool);
// void cinematic_reset_environment_map_tint_rasterizer_reset_cinematic_environment_map_tint_0_evaluate(short, long, bool);
// void cinematic_layer_rasterizer_set_cinematic_layer_3_evaluate(short, long, bool);
// void player_has_skills_game_arcani_get_unlockability_0_evaluate(short, long, bool);
// void player_has_mad_secret_skills_game_arcani_unlock_stylus_1_evaluate(short, long, bool);
// void controller_invert_look_user_interface_controller_hack_invert_look_all_controllers_0_evaluate(short, long, bool);
// void controller_look_speed_user_interface_controller_hack_look_speed_all_controllers_1_evaluate(short, long, bool);
// void player_invert_look_player_invert_look_1_evaluate(short, long, bool);
// void user_interface_controller_get_last_level_played_hs_user_interface_controller_get_last_level_played_1_evaluate(short, long, bool);
// void controller_set_look_inverted_debug_set_controller_look_inverted_2_evaluate(short, long, bool);
// void controller_set_vibration_enabled_debug_set_controller_vibration_enabled_2_evaluate(short, long, bool);
// void controller_set_flight_stick_aircraft_controls_debug_set_controller_flight_stick_aircraft_controls_2_evaluate(short, long, bool);
// void controller_set_auto_center_look_debug_set_controller_auto_center_look_2_evaluate(short, long, bool);
// void controller_set_crouch_lock_debug_set_controller_crouch_lock_2_evaluate(short, long, bool);
// void controller_set_southpaw_debug_set_controller_southpaw_2_evaluate(short, long, bool);
// void controller_set_clench_protection_debug_set_controller_clench_protection_2_evaluate(short, long, bool);
// void controller_set_button_preset_debug_set_button_preset_2_evaluate(short, long, bool);
// void controller_set_custom_button_debug_set_custom_button_3_evaluate(short, long, bool);
// void controller_set_joystick_preset_debug_set_joystick_preset_2_evaluate(short, long, bool);
// void controller_set_look_sensitivity_debug_set_look_sensitivity_2_evaluate(short, long, bool);
// void controller_unlock_single_player_levels_debug_unlock_all_single_player_levels_1_evaluate(short, long, bool);
// void controller_lock_single_player_levels_debug_lock_all_single_player_levels_1_evaluate(short, long, bool);
// void controller_unlock_skulls_debug_unlock_all_skulls_1_evaluate(short, long, bool);
// void controller_lock_skulls_debug_lock_all_skulls_1_evaluate(short, long, bool);
// void controller_unlock_models_debug_unlock_all_models_1_evaluate(short, long, bool);
// void controller_lock_models_debug_lock_all_models_1_evaluate(short, long, bool);
// void controller_set_single_player_level_completed_debug_set_single_player_level_completed_5_evaluate(short, long, bool);
// void controller_set_primary_change_color_debug_set_primary_change_color_2_evaluate(short, long, bool);
// void controller_set_secondary_change_color_debug_set_secondary_change_color_2_evaluate(short, long, bool);
// void controller_set_tertiary_change_color_debug_set_tertiary_change_color_2_evaluate(short, long, bool);
// void controller_set_primary_emblem_color_debug_set_primary_emblem_color_2_evaluate(short, long, bool);
// void controller_set_secondary_emblem_color_debug_set_secondary_emblem_color_2_evaluate(short, long, bool);
// void controller_set_background_emblem_color_debug_set_background_emblem_color_2_evaluate(short, long, bool);
// void controller_set_player_character_type_debug_set_player_model_choice_2_evaluate(short, long, bool);
// void controller_set_emblem_info_debug_set_emblem_info_3_evaluate(short, long, bool);
// void controller_set_voice_output_setting_debug_set_voice_output_setting_2_evaluate(short, long, bool);
// void controller_set_subtitle_setting_debug_set_subtitle_setting_2_evaluate(short, long, bool);
// void controller_set_nag_message_data_debug_set_nag_message_data_5_evaluate(short, long, bool);
// void controller_temporary_users_always_attached_set_debug_temporary_user_controllers_always_attached_1_evaluate(short, long, bool);
// void controller_set_new_user_experience_debug_set_new_user_experience_2_evaluate(short, long, bool);
// void controller_set_initial_bonus_toast_debug_set_initial_bonus_2_evaluate(short, long, bool);
// void controller_set_loyalty_bonus_toast_debug_set_loyalty_bonus_2_evaluate(short, long, bool);
// void controller_set_generic_bonus_toast_debug_set_generic_bonus_2_evaluate(short, long, bool);
// void controller_set_unsignedin_user_controller_activate_as_unsigned_in_user_2_evaluate(short, long, bool);
// void controller_display_storage_device_selection_controller_display_storage_device_selection_1_evaluate(short, long, bool);
// void font_cache_bitmap_save_font_cache_bitmap_save_to_targa_1_evaluate(short, long, bool);
// void ui_debug_load_main_menu_user_interface_enter_game_shell_0_evaluate(short, long, bool);
// void ui_debug_text_bounds_debug_enable_text_bounds_1_evaluate(short, long, bool);
// void ui_debug_text_font_user_interface_text_debug_display_font_index_1_evaluate(short, long, bool);
// void ui_debug_show_title_safe_bounds_debug_render_title_safe_bounds_1_evaluate(short, long, bool);
// void ui_debug_element_bounds_set_debug_frame_element_bounds_1_evaluate(short, long, bool);
// void ui_memory_dump_user_interface_memory_dump_1_evaluate(short, long, bool);
// void ui_time_scale_step_user_interface_time_step_1_evaluate(short, long, bool);
// void xoverlapped_debug_render_overlapped_task_toggle_debug_rendering_1_evaluate(short, long, bool);
// void shader_compile_target_platform_shader_compile_target_platform_1_evaluate(short, long, bool);
// void shader_compile_shader_pipeline_shader_compile_shader_pipeline_1_evaluate(short, long, bool);
// void shader_compile_filter_shader_type_shader_compile_filter_shader_type_1_evaluate(short, long, bool);
// void shader_compile_filter_category_option_shader_compile_filter_category_option_2_evaluate(short, long, bool);
// void gui_load_screen_window_manager_load_screen_hs_1_evaluate(short, long, bool);
// void gui_reset_window_manager_reset_screens_0_evaluate(short, long, bool);
// void gui_start_location_manager_start_0_evaluate(short, long, bool);
// void gui_stop_location_manager_stop_0_evaluate(short, long, bool);
// void gui_error_post_user_interface_errors_post_hs_3_evaluate(short, long, bool);
// void user_interface_errors_post_hs(long, long, bool);
// void gui_error_post_toast_user_interface_errors_post_toast_hs_3_evaluate(short, long, bool);
// void user_interface_errors_post_toast_hs(long, long, bool);
// void gui_error_resolve_user_interface_errors_resolve_hs_2_evaluate(short, long, bool);
// void user_interface_errors_resolve_hs(long, long);
// void gui_error_clear_user_interface_errors_clear_hs_2_evaluate(short, long, bool);
// void user_interface_errors_clear_hs(long, long);
// void gui_dialog_show_cui_load_dialog_hs_1_evaluate(short, long, bool);
// void gui_debug_music_state_user_interface_music_manager_toggle_debug_render_music_state_1_evaluate(short, long, bool);
// void cc_enable_closed_caption_enable_1_evaluate(short, long, bool);
// void cc_test_closed_caption_test_add_line_1_evaluate(short, long, bool);
// void objectives_clear_user_interface_objectives_clear_0_evaluate(short, long, bool);
// void objectives_show_up_to_user_interface_primary_objectives_show_up_to_1_evaluate(short, long, bool);
// void objectives_finish_up_to_user_interface_primary_objectives_finish_up_to_1_evaluate(short, long, bool);
// void objectives_show_user_interface_primary_objective_show_1_evaluate(short, long, bool);
// void objectives_finish_user_interface_primary_objective_finish_1_evaluate(short, long, bool);
// void objectives_unavailable_user_interface_primary_objective_make_unavailable_1_evaluate(short, long, bool);
// void objectives_secondary_show_user_interface_secondary_objective_show_1_evaluate(short, long, bool);
// void objectives_secondary_finish_user_interface_secondary_objective_finish_1_evaluate(short, long, bool);
// void objectives_secondary_unavailable_user_interface_secondary_objective_make_unavailable_1_evaluate(short, long, bool);
// void objectives_set_string_user_interface_primary_objective_set_string_2_evaluate(short, long, bool);
// void objectives_secondary_set_string_user_interface_secondary_objective_set_string_2_evaluate(short, long, bool);
// void objectives_show_string_user_interface_primary_objective_show_string_1_evaluate(short, long, bool);
// void objectives_finish_string_user_interface_primary_objective_finish_string_1_evaluate(short, long, bool);
// void objectives_unavailable_string_user_interface_primary_objective_make_unavailable_string_1_evaluate(short, long, bool);
// void objectives_secondary_show_string_user_interface_secondary_objective_show_string_1_evaluate(short, long, bool);
// void objectives_secondary_finish_string_user_interface_secondary_objective_finish_string_1_evaluate(short, long, bool);
// void objectives_secondary_unavailable_string_user_interface_secondary_objective_make_unavailable_string_1_evaluate(short, long, bool);
// void input_suppress_rumble_input_feedback_suppress_1_evaluate(short, long, bool);
// void input_disable_claw_button_combos_input_disable_claw_button_combos_1_evaluate(short, long, bool);
// void update_remote_camera_remote_camera_force_update_0_evaluate(short, long, bool);
// void net_build_network_config_network_build_network_configuration_0_evaluate(short, long, bool);
// void net_build_game_variant_network_build_game_variant_2_evaluate(short, long, bool);
// void net_verify_game_variant_network_verify_packed_game_variant_file_1_evaluate(short, long, bool);
// void net_load_and_use_game_variant_network_load_and_use_packed_game_variant_file_1_evaluate(short, long, bool);
// void net_use_hopper_directory_online_url_use_hopper_directory_1_evaluate(short, long, bool);
// void net_lsp_dump_services_and_servers_online_lsp_display_services_and_servers_0_evaluate(short, long, bool);
// void net_lsp_force_server_online_lsp_force_server_3_evaluate(short, long, bool);
// void net_lsp_disable_server_online_lsp_disable_server_2_evaluate(short, long, bool);
// void net_lsp_disable_service_online_lsp_disable_service_2_evaluate(short, long, bool);
// void net_quality_dump_network_bandwidth_quality_statistics_dump_0_evaluate(short, long, bool);
// void net_quality_clear_network_bandwidth_quality_statistics_clear_0_evaluate(short, long, bool);
// void net_quality_set_connection_badness_history_network_bandwidth_quality_set_connection_badness_history_2_evaluate(short, long, bool);
// void net_quality_set_squad_host_badness_history_network_bandwidth_quality_set_squad_host_badness_history_2_evaluate(short, long, bool);
// void net_quality_set_squad_client_badness_history_network_bandwidth_quality_set_squad_client_badness_history_2_evaluate(short, long, bool);
// void net_quality_set_squad_speculative_migration_badness_history_network_bandwidth_quality_set_squad_speculative_migration_badness_history_2_evaluate(short, long, bool);
// void net_quality_set_squad_bridging_badness_history_network_bandwidth_quality_set_squad_bridging_badness_history_2_evaluate(short, long, bool);
// void net_quality_set_group_host_badness_history_network_bandwidth_quality_set_group_host_badness_history_2_evaluate(short, long, bool);
// void net_quality_set_group_client_badness_history_network_bandwidth_quality_set_group_client_badness_history_2_evaluate(short, long, bool);
// void net_quality_set_group_speculative_migration_badness_history_network_bandwidth_quality_set_group_speculative_migration_badness_history_2_evaluate(short, long, bool);
// void net_quality_set_group_bridging_badness_history_network_bandwidth_quality_set_group_bridging_badness_history_2_evaluate(short, long, bool);
// void net_join_friend_network_session_interface_join_friend_1_evaluate(short, long, bool);
// void net_join_squad_to_friend_network_session_interface_join_squad_to_friend_1_evaluate(short, long, bool);
// void net_join_sessionid_network_session_interface_join_sessionid_1_evaluate(short, long, bool);
// void net_join_squad_to_sessionid_network_session_interface_join_squad_to_sessionid_1_evaluate(short, long, bool);
// void net_enable_join_friend_loop_network_session_interface_enable_join_friend_loop_1_evaluate(short, long, bool);
// void net_set_maximum_player_count_network_squad_session_set_maximum_player_count_1_evaluate(short, long, bool);
// void net_status_filter_network_status_filter_1_evaluate(short, long, bool);
// void net_test_ping_network_test_ping_0_evaluate(short, long, bool);
// void net_test_channel_delete_network_test_channels_delete_0_evaluate(short, long, bool);
// void net_test_delegate_host_network_test_delegate_host_1_evaluate(short, long, bool);
// void net_test_delegate_leader_network_test_delegate_leadership_1_evaluate(short, long, bool);
// void net_test_map_name_network_test_set_map_name_1_evaluate(short, long, bool);
// void net_test_variant_network_test_set_game_variant_1_evaluate(short, long, bool);
// void net_test_campaign_difficulty_network_test_set_campaign_difficulty_1_evaluate(short, long, bool);
// void net_test_player_color_network_test_set_player_color_1_evaluate(short, long, bool);
// void net_test_reset_objects_network_test_reset_objects_0_evaluate(short, long, bool);
// void net_test_fatal_error_simulation_fatal_error_0_evaluate(short, long, bool);
// void net_set_machine_name_network_set_machine_name_ascii_1_evaluate(short, long, bool);
// void events_enabled_events_enable_1_evaluate(short, long, bool);
// void events_suppression_events_suppression_enable_1_evaluate(short, long, bool);
// void events_suppress_display_events_suppress_output_1_evaluate(short, long, bool);
// void events_global_display_events_set_output_level_global_1_evaluate(short, long, bool);
// void events_global_log_events_set_log_level_global_1_evaluate(short, long, bool);
// void events_global_debugger_events_set_debug_level_global_1_evaluate(short, long, bool);
// void events_global_datamine_events_set_datamine_level_global_1_evaluate(short, long, bool);
// void events_category_display_events_set_output_level_by_name_2_evaluate(short, long, bool);
// void events_category_force_display_events_set_force_output_level_by_name_2_evaluate(short, long, bool);
// void events_category_log_events_set_log_level_by_name_2_evaluate(short, long, bool);
// void events_category_debugger_events_set_debug_level_by_name_2_evaluate(short, long, bool);
// void events_category_debugger_break_events_set_debugger_break_level_by_name_2_evaluate(short, long, bool);
// void events_category_halt_events_set_halt_level_by_name_2_evaluate(short, long, bool);
// void events_category_datamine_events_set_datamine_level_by_name_2_evaluate(short, long, bool);
// void events_list_categories_events_dump_categories_1_evaluate(short, long, bool);
// void event_logs_snapshot_events_snapshot_0_evaluate(short, long, bool);
// void events_disable_suppression_events_disable_suppression_1_evaluate(short, long, bool);
// void event_global_display_category_events_set_output_level_global_1_evaluate(short, long, bool);
// void event_global_log_category_events_set_log_level_global_1_evaluate(short, long, bool);
// void event_global_remote_log_category_events_set_datamine_level_global_1_evaluate(short, long, bool);
// void event_display_category_events_set_output_level_by_name_2_evaluate(short, long, bool);
// void event_force_display_category_events_set_force_output_level_by_name_2_evaluate(short, long, bool);
// void event_debugger_break_category_events_set_debugger_break_level_by_name_2_evaluate(short, long, bool);
// void event_halt_category_events_set_halt_level_by_name_2_evaluate(short, long, bool);
// void event_list_categories_events_dump_categories_1_evaluate(short, long, bool);
// void events_suppress_console_display_events_suppress_output_1_evaluate(short, long, bool);
// void play_bink_movie_play_bink_movie_1_evaluate(short, long, bool);
// void play_bink_movie_from_tag_play_bink_movie_from_tag_1_evaluate(short, long, bool);
// void play_credits_skip_to_menu_play_credits_movie_skippable_to_main_menu_0_evaluate(short, long, bool);
// void bink_time_bink_playback_time_left_hs_ticks_0_evaluate(short, long, bool);
// void set_global_doppler_factor_platform_sound_set_global_doppler_factor_1_evaluate(short, long, bool);
// void set_global_mixbin_headroom_platform_sound_set_global_mixbin_headroom_2_evaluate(short, long, bool);
// void debug_sound_environment_source_parameter_platform_sound_set_sound_environment_source_parameter_2_evaluate(short, long, bool);
// void data_mine_set_mission_segment_data_mine_usability_set_mission_segment_1_evaluate(short, long, bool);
// void data_mine_insert_data_mine_insert_text_and_camera_position_1_evaluate(short, long, bool);
// void data_mine_upload_data_mine_upload_0_evaluate(short, long, bool);
// void data_mine_enable_data_mine_enable_1_evaluate(short, long, bool);
// void data_mine_flush_data_mine_flush_0_evaluate(short, long, bool);
// void data_mine_debug_menu_setting_data_mine_usability_set_user_experience_setting_and_close_debug_menu_1_evaluate(short, long, bool);
// void data_mine_open_debug_menu_data_mine_usability_open_debug_menu_0_evaluate(short, long, bool);
// void data_mine_set_display_mission_segment_data_mine_set_display_mission_segment_1_evaluate(short, long, bool);
// void data_mine_set_header_flag_data_mine_set_header_flag_2_evaluate(short, long, bool);
// void test_memory_allocators_test_memory_allocators_5_evaluate(short, long, bool);
// void test_memory_allocators_test_memory_allocators_dump_to_file_6_evaluate(short, long, bool);
// void display_video_standard_test_display_video_standard_0_evaluate(short, long, bool);
// void test_display_video_standard(void);
// void test_xcr_monkey_enable_test_xcr_monkey_enable_1_evaluate(short, long, bool);
// void test_show_guide_status_test_show_guide_status_0_evaluate(short, long, bool);
// void test_show_users_xuids_test_show_users_xuids_0_evaluate(short, long, bool);
// void test_show_are_users_friends_test_show_are_users_friends_2_evaluate(short, long, bool);
// void test_invite_friend_test_invite_friend_2_evaluate(short, long, bool);
// void test_get_squad_session_id_test_get_squad_session_id_0_evaluate(short, long, bool);
// void cui_get_active_screens_test_auto_cui_get_active_screens_1_evaluate(short, long, bool);
// void cui_get_screen_components_test_auto_cui_get_screen_components_2_evaluate(short, long, bool);
// void cui_get_component_properties_test_auto_cui_get_component_properties_3_evaluate(short, long, bool);
// void cui_send_button_press_test_auto_cui_send_button_press_4_evaluate(short, long, bool);
// void cui_invoke_list_item_by_string_id_test_auto_cui_invoke_list_item_by_string_id_6_evaluate(short, long, bool);
// void cui_invoke_list_item_by_long_test_auto_cui_invoke_list_item_by_long_6_evaluate(short, long, bool);
// void cui_invoke_list_item_by_boolean_test_auto_cui_invoke_list_item_by_boolean_6_evaluate(short, long, bool);
// void cui_invoke_list_item_by_text_test_auto_cui_invoke_list_item_by_text_6_evaluate(short, long, bool);
// void test_download_storage_file_test_download_storage_file_2_evaluate(short, long, bool);
// void test_game_results_save_to_file_test_game_results_save_to_file_1_evaluate(short, long, bool);
// void test_game_results_load_from_file_test_game_results_load_from_file_1_evaluate(short, long, bool);
// void test_game_results_make_random_test_game_results_make_random_0_evaluate(short, long, bool);
// void test_fragment_utility_drive_test_fragment_utility_drive_3_evaluate(short, long, bool);
// void clear_webcache_network_storage_cache_clear_0_evaluate(short, long, bool);
// void online_files_upload_online_files_test_upload_1_evaluate(short, long, bool);
// void online_files_throttle_bandwidth_online_files_test_throttle_bandwidth_1_evaluate(short, long, bool);
// void online_marketplace_refresh_online_marketplace_refresh_0_evaluate(short, long, bool);
// void webstats_disable_network_webstats_disable_1_evaluate(short, long, bool);
// void webstats_test_submit_network_webstats_test_submit_1_evaluate(short, long, bool);
// void webstats_test_submit_random_realistic_network_webstats_test_submit_random_realistic_0_evaluate(short, long, bool);
// void webstats_throttle_bandwidth_network_webstats_set_upstream_quota_1_evaluate(short, long, bool);
// void webstats_log_uploads_network_webstats_log_uploads_1_evaluate(short, long, bool);
// void flag_new_editor_scripted_flag_new_at_camera_2_evaluate(short, long, bool);
// void flag_new_at_look_editor_scripted_flag_new_at_look_at_point_2_evaluate(short, long, bool);
// void flags_clear_editor_flags_clear_0_evaluate(short, long, bool);
// void flags_default_name_editor_set_default_flag_name_1_evaluate(short, long, bool);
// void flags_default_comment_editor_set_default_flag_description_1_evaluate(short, long, bool);
// void flags_set_filter_editor_set_flag_filter_string_1_evaluate(short, long, bool);
// void bug_now_create_and_upload_bug_files_1_evaluate(short, long, bool);
// void bug_now_lite_create_and_upload_bug_files_no_minidump_1_evaluate(short, long, bool);
// void bug_now_auto_create_and_upload_bug_files_auto_name_1_evaluate(short, long, bool);
// void bug_now_on_next_kill_bug_now_on_next_kill_1_evaluate(short, long, bool);
// void object_list_children_object_list_children_by_definition_2_evaluate(short, long, bool);
// void voice_set_outgoing_channel_count_voice_set_outgoing_channel_count_2_evaluate(short, long, bool);
// void voice_set_voice_repeater_peer_index_voice_set_voice_repeater_peer_index_1_evaluate(short, long, bool);
// void voice_set_voice_repeater_peer_index(long);
// void voice_set_mute_voice_set_mute_3_evaluate(short, long, bool);
// void voice_set_mute(long, long, bool);
// void net_leaderboard_clear_hopper_network_test_leaderboard_clear_hopper_1_evaluate(short, long, bool);
// void net_leaderboard_clear_global_unarbitrated_network_test_leaderboard_clear_global_unarbitrated_1_evaluate(short, long, bool);
// void net_leaderboard_refresh_network_test_leaderboard_refresh_0_evaluate(short, long, bool);
// void ai_selected_actor_jump_ai_scripting_selected_actor_jump_2_evaluate(short, long, bool);
// void dump_loaded_tags_dump_loaded_tags_0_evaluate(short, long, bool);
// void interpolator_start_hs_interpolator_start_1_evaluate(short, long, bool);
// void interpolator_stop_hs_interpolator_stop_1_evaluate(short, long, bool);
// void interpolator_stop_all_hs_interpolator_stop_all_0_evaluate(short, long, bool);
// void interpolator_dump_hs_interpolator_dump_1_evaluate(short, long, bool);
// void interpolator_dump_all_hs_interpolator_dump_all_0_evaluate(short, long, bool);
// void set_pc_runtime_language_scripting_set_runtime_platform_language_from_string_1_evaluate(short, long, bool);
// void animation_cache_stats_reset_animation_cache_stats_reset_0_evaluate(short, long, bool);
// void cinematic_clone_players_weapon_cinematic_create_and_attach_players_weapon_3_evaluate(short, long, bool);
// void cinematic_move_attached_objects_cinematic_move_attached_objects_4_evaluate(short, long, bool);
// void vehicle_enable_ghost_effects_vehicle_enable_ghost_effects_1_evaluate(short, long, bool);
// void set_global_sound_environment_scripting_game_sound_set_global_environment_6_evaluate(short, long, bool);
// void reset_dsp_image_platform_sound_reset_dsp_image_0_evaluate(short, long, bool);
// void game_save_cinematic_skip_game_save_cinematic_skip_0_evaluate(short, long, bool);
// void cinematic_outro_start_cinematic_outro_start_0_evaluate(short, long, bool);
// void cinematic_enable_ambience_details_scripting_game_sound_enable_ambience_details_1_evaluate(short, long, bool);
// void rasterizer_bloom_override_rasterizer_bloom_override_enabled_1_evaluate(short, long, bool);
// void rasterizer_bloom_override_reset_rasterizer_bloom_override_reset_1_evaluate(short, long, bool);
// void rasterizer_bloom_override_blur_amount_rasterizer_bloom_override_blur_amount_1_evaluate(short, long, bool);
// void rasterizer_bloom_override_threshold_rasterizer_bloom_override_threshold_1_evaluate(short, long, bool);
// void rasterizer_bloom_override_brightness_rasterizer_bloom_override_brightness_1_evaluate(short, long, bool);
// void rasterizer_bloom_override_box_factor_rasterizer_bloom_override_box_factor_1_evaluate(short, long, bool);
// void rasterizer_bloom_override_max_factor_rasterizer_bloom_override_max_factor_1_evaluate(short, long, bool);
// void rasterizer_bloom_override_silver_bullet_rasterizer_bloom_override_silver_bullet_1_evaluate(short, long, bool);
// void rasterizer_bloom_override_only_rasterizer_bloom_override_only_1_evaluate(short, long, bool);
// void rasterizer_bloom_override_high_res_rasterizer_bloom_override_high_res_1_evaluate(short, long, bool);
// void rasterizer_bloom_override_brightness_alpha_rasterizer_bloom_override_brightness_alpha_1_evaluate(short, long, bool);
// void rasterizer_bloom_override_max_factor_alpha_rasterizer_bloom_override_max_factor_alpha_1_evaluate(short, long, bool);
// void cache_block_for_one_frame_observer_block_for_one_frame_0_evaluate(short, long, bool);
// void sound_suppress_ambience_update_on_revert_scripting_game_sound_suppress_ambience_update_on_revert_0_evaluate(short, long, bool);
// void render_autoexposure_enable_render_enable_autoexposure_1_evaluate(short, long, bool);
// void render_exposure_full_render_animate_exposure_full_5_evaluate(short, long, bool);
// void render_exposure_fade_in_render_animate_exposure_fade_in_2_evaluate(short, long, bool);
// void render_exposure_fade_out_render_animate_exposure_fade_out_1_evaluate(short, long, bool);
// void render_exposure_render_animate_exposure_2_evaluate(short, long, bool);
// void render_autoexposure_instant_render_autoexposure_instant_1_evaluate(short, long, bool);
// void render_exposure_set_environment_darken_render_exposure_set_environment_darken_1_evaluate(short, long, bool);
// void render_depth_of_field_enable_render_enable_depth_of_field_1_evaluate(short, long, bool);
// void render_depth_of_field_render_animate_depth_of_field_4_evaluate(short, long, bool);
// void render_dof_focus_depth_render_set_depth_of_field_1_evaluate(short, long, bool);
// void render_dof_blur_animate_render_animate_depth_of_field_blur_2_evaluate(short, long, bool);
// void render_debug_video_mode_render_debug_video_mode_0_evaluate(short, long, bool);
// void cinematic_lightmap_shadow_disable_hs_disable_cinematic_lightmap_shadow_0_evaluate(short, long, bool);
// void cinematic_lightmap_shadow_enable_hs_enable_cinematic_lightmap_shadow_0_evaluate(short, long, bool);
// void predict_animation_precache_animation_by_name_2_evaluate(short, long, bool);
// void mp_player_count_by_team_game_engine_player_count_by_team_1_evaluate(short, long, bool);
// void mp_players_by_team_game_engine_players_by_team_1_evaluate(short, long, bool);
// void mp_active_player_count_by_team_game_engine_active_player_count_by_team_1_evaluate(short, long, bool);
// void deterministic_end_game_game_engine_finish_game_0_evaluate(short, long, bool);
// void mp_game_won_game_engine_game_won_1_evaluate(short, long, bool);
// void mp_respawn_override_timers_game_engine_respawn_override_timers_1_evaluate(short, long, bool);
// void mp_ai_allegiance_game_engine_ai_scripting_allegiance_2_evaluate(short, long, bool);
// void mp_allegiance_game_engine_mp_team_allegiance_2_evaluate(short, long, bool);
// void mp_round_started_game_engine_in_round_0_evaluate(short, long, bool);
// void mp_round_end_with_winning_player_game_engine_end_round_hs_1_evaluate(short, long, bool);
// void mp_round_end_with_winning_team_game_engine_end_round_hs_1_evaluate(short, long, bool);
// void mp_round_end_game_engine_end_round_hs_0_evaluate(short, long, bool);
// void mp_scripts_reset_hs_reset_scripts_0_evaluate(short, long, bool);
// void tag_file_set_backend_tag_file_set_backend_by_name_1_evaluate(short, long, bool);
// void mp_debug_goal_object_boundary_geometry_debug_multiplayer_object_boundary_geometry_1_evaluate(short, long, bool);
// void mp_dump_candy_monitor_state_game_engine_candy_monitor_debug_dump_state_to_disk_0_evaluate(short, long, bool);
// void determinism_debug_manager_enable_logging_determinism_debug_manager_enable_logging_1_evaluate(short, long, bool);
// void determinism_debug_manager_set_trace_flags_determinism_debug_manager_set_trace_flags_1_evaluate(short, long, bool);
// void determinism_debug_manager_enable_game_state_checksum_determinism_debug_manager_enable_game_state_checksum_1_evaluate(short, long, bool);
// void determinism_debug_manager_enable_trace_determinism_debug_manager_enable_trace_1_evaluate(short, long, bool);
// void determinism_debug_manager_set_consumer_sample_level_determinism_debug_manager_set_consumer_sample_level_2_evaluate(short, long, bool);
// void determinism_log_compare_log_files_determinism_log_compare_log_files_2_evaluate(short, long, bool);
// void determinism_debug_manager_enable_log_file_comparision_on_oos_determinism_debug_manager_enable_log_file_comparision_on_oos_1_evaluate(short, long, bool);
// void saved_film_play_saved_film_manager_play_hs_2_evaluate(short, long, bool);
// void saved_film_manager_play_hs(enum e_controller_index, char const *);
// void saved_film_play_last_saved_film_manager_play_last_hs_0_evaluate(short, long, bool);
// void saved_film_manager_play_last_hs(void);
// void saved_film_disable_version_checking_saved_film_manager_disable_version_checking_1_evaluate(short, long, bool);
// void saved_film_manager_disable_version_checking(bool);
// void saved_film_toggle_debug_saving_saved_film_manager_toggle_automatic_debug_saving_1_evaluate(short, long, bool);
// void saved_film_manager_toggle_automatic_debug_saving(bool);
// void saved_films_show_timestamp_saved_film_manager_show_timestamp_1_evaluate(short, long, bool);
// void saved_film_manager_show_timestamp(bool);
// void mover_set_program_mover_scripting_set_program_2_evaluate(short, long, bool);
// void floating_point_exceptions_enable_real_math_enable_floating_point_exceptions_1_evaluate(short, long, bool);
// void tag_reload_force_tag_groups_sync_reload_fake_1_evaluate(short, long, bool);
// void tag_unload_force_hs_tag_unload_force_programmer_only_1_evaluate(short, long, bool);
// void tag_load_force_hs_tag_load_force_programmer_only_1_evaluate(short, long, bool);
// void predict_bink_movie_predict_bink_movie_1_evaluate(short, long, bool);
// void predict_bink_movie_from_tag_predict_bink_movie_from_tag_1_evaluate(short, long, bool);
// void profiler_dump_history_profiler_dump_recent_history_0_evaluate(short, long, bool);
// void camera_set_mode_hs_director_set_camera_mode_2_evaluate(short, long, bool);
// void camera_set_flying_cam_at_point_hs_director_setup_flying_camera_at_scenario_point_2_evaluate(short, long, bool);
// void camera_set_target_hs_director_set_camera_target_2_evaluate(short, long, bool);
// void camera_set_orbiting_cam_at_target_relative_point_hs_director_setup_orbiting_camera_at_target_relative_point_5_evaluate(short, long, bool);
// void director_cycle_debug_camera_hs_director_cycle_debug_camera_1_evaluate(short, long, bool);
// void game_coop_player_count_game_coop_player_count_0_evaluate(short, long, bool);
// void player_force_mode_player_override_desired_mode_1_evaluate(short, long, bool);
// void profiler_output_pulse_profiler_export_telnet_pulse_stats_0_evaluate(short, long, bool);
// void string_id_name_string_id_print_name_1_evaluate(short, long, bool);
// void find_hs_find_matching_commands_1_evaluate(short, long, bool);
// void add_recycling_volume_object_recycling_system_add_volume_3_evaluate(short, long, bool);
// void add_recycling_volume_by_type_object_recycling_system_add_volume_by_type_4_evaluate(short, long, bool);
// void tag_resources_set_per_frame_publish_tag_resources_set_per_frame_publish_1_evaluate(short, long, bool);
// void object_recycling_clear_history_object_recycling_clear_history_0_evaluate(short, long, bool);
// void dump_cinematics_script_dump_cinematics_script_0_evaluate(short, long, bool);
// void dump_tag_stats_dump_tag_memory_usage_stats_0_evaluate(short, long, bool);
// void global_preferences_clear_global_preferences_clear_0_evaluate(short, long, bool);
// void network_storage_set_storage_subdirectory_network_storage_set_storage_subdirectory_1_evaluate(short, long, bool);
// void network_storage_set_storage_user_network_storage_set_storage_user_1_evaluate(short, long, bool);
// void network_storage_run_locally_network_storage_run_locally_1_evaluate(short, long, bool);
// void status_line_dump_status_line_dump_0_evaluate(short, long, bool);
// void game_tick_get_game_time_get_0_evaluate(short, long, bool);
// void loop_it_hs_looper_setup_1_evaluate(short, long, bool);
// void loop_clear_hs_looper_clear_0_evaluate(short, long, bool);
// void status_lines_enable_status_lines_enable_1_evaluate(short, long, bool);
// void status_lines_disable_status_lines_disable_1_evaluate(short, long, bool);
// void on_target_platform_runtime_platform_on_target_platform_0_evaluate(short, long, bool);
// void f7_profiler_enable_profiler_enable_1_evaluate(short, long, bool);
// void f7_profiler_substring_activate_profiler_sections_activate_1_evaluate(short, long, bool);
// void f7_profiler_substring_deactivate_profiler_sections_deactivate_1_evaluate(short, long, bool);
// void net_game_set_player_standing_game_results_set_automation_player_standing_2_evaluate(short, long, bool);
// void net_get_game_id_game_options_print_game_id_0_evaluate(short, long, bool);
// void generate_rsa_2048_key_pair_generate_rsa_2048_key_pair_0_evaluate(short, long, bool);
// void create_secure_test_file_create_secure_test_file_0_evaluate(short, long, bool);
// void net_test_matchmaking_hopper_list_multiplayer_game_hopper_display_hoppers_0_evaluate(short, long, bool);
// void net_test_matchmaking_hopper_game_list_multiplayer_game_hopper_display_games_for_current_hopper_0_evaluate(short, long, bool);
// void net_test_matchmaking_hopper_set_game_multiplayer_game_hopper_set_game_for_current_hopper_1_evaluate(short, long, bool);
// void net_test_matchmaking_set_voting_system_multiplayer_game_hopper_set_voting_system_1_evaluate(short, long, bool);
// void net_test_matchmaking_set_arena_season_network_lsp_leaderboard_force_set_season_1_evaluate(short, long, bool);
// void net_test_matchmaking_suppress_arena_popup_network_lsp_leaderboard_suppress_popup_1_evaluate(short, long, bool);
// void net_test_matchmaking_test_arena_screen_network_lsp_leaderboard_test_screen_4_evaluate(short, long, bool);
// void net_test_matchmaking_set_arena_stats_network_lsp_leaderboard_set_stats_3_evaluate(short, long, bool);
// void saved_film_set_playback_game_speed_saved_film_manager_set_playback_game_speed_1_evaluate(short, long, bool);
// void noguchis_mystery_tour_cache_file_builder_set_additional_music_path_1_evaluate(short, long, bool);
// void designer_zone_sync_scenario_zone_debugger_synchronize_0_evaluate(short, long, bool);
// void dump_designer_zone_scenario_dump_designer_zone_resources_1_evaluate(short, long, bool);
// void designer_zone_activate_main_activate_designer_zone_1_evaluate(short, long, bool);
// void designer_zone_deactivate_main_deactivate_designer_zone_1_evaluate(short, long, bool);
// void object_set_always_active_object_set_always_active_2_evaluate(short, long, bool);
// void saved_film_seek_to_film_tick_saved_film_manager_seek_to_film_tick_hs_1_evaluate(short, long, bool);
// void saved_film_manager_seek_to_film_tick_hs(long);
// void saved_film_seek_to_film_timestamp_saved_film_manager_seek_to_film_timestamp_hs_1_evaluate(short, long, bool);
// void saved_film_manager_seek_to_film_timestamp_hs(float);
// void tag_is_active_scenario_active_zone_is_tag_available_1_evaluate(short, long, bool);
// void tag_resources_set_incremental_publish_tag_resources_set_incremental_publish_1_evaluate(short, long, bool);
// void tag_resources_enable_optional_caching_tag_resources_enable_optional_caching_1_evaluate(short, long, bool);
// void dump_active_resources_scenario_zone_resource_dump_active_zone_set_0_evaluate(short, long, bool);
// void object_set_persistent_object_set_invalid_for_recycling_2_evaluate(short, long, bool);
// void display_zone_size_estimates_scenario_display_zone_size_estimates_1_evaluate(short, long, bool);
// void report_zone_size_estimates_scenario_dump_zone_size_estimates_0_evaluate(short, long, bool);
// void net_test_disconnect_squad_networking_session_disconnect_squad_0_evaluate(short, long, bool);
// void net_test_disconnect_group_networking_session_disconnect_group_0_evaluate(short, long, bool);
// void net_test_clear_squad_session_parameter_networking_session_clear_squad_session_parameter_1_evaluate(short, long, bool);
// void net_test_clear_group_session_parameter_networking_session_clear_group_session_parameter_1_evaluate(short, long, bool);
// void net_test_life_cycle_pause_network_life_cycle_pause_2_evaluate(short, long, bool);
// void net_test_life_cycle_display_states_network_life_cycle_display_state_strings_0_evaluate(short, long, bool);
// void net_test_life_cycle_abort_matchmaking_network_life_cycle_abort_matchmaking_0_evaluate(short, long, bool);
// void overlapped_display_task_descriptions_overlapped_task_display_task_descriptions_0_evaluate(short, long, bool);
// void overlapped_task_inject_error_overlapped_task_inject_error_2_evaluate(short, long, bool);
// void net_leaderboard_clear_hopper_all_users_network_test_leaderboard_clear_hopper_all_users_1_evaluate(short, long, bool);
// void net_leaderboard_clear_global_unarbitrated_all_users_network_test_leaderboard_clear_global_unarbitrated_all_users_1_evaluate(short, long, bool);
// void test_sapien_crash_editor_save_progress_0_evaluate(short, long, bool);
// void output_window_add_category_editor_add_output_window_category_1_evaluate(short, long, bool);
// void output_window_remove_category_editor_remove_output_window_category_1_evaluate(short, long, bool);
// void output_window_list_categories_editor_list_output_window_categories_0_evaluate(short, long, bool);
// void decorators_split_decorators_split_2_evaluate(short, long, bool);
// void bandwidth_profiler_enable_bandwidth_profiler_enable_1_evaluate(short, long, bool);
// void bandwidth_profiler_set_context_bandwidth_profiler_set_context_1_evaluate(short, long, bool);
// void simulation_priority_display_set_enabled_simulation_priority_display_set_enabled_1_evaluate(short, long, bool);
// void simulation_priority_display_set_object_names_simulation_priority_display_set_object_names_1_evaluate(short, long, bool);
// void simulation_priority_display_set_machine_filter_simulation_priority_display_set_machine_filter_0_evaluate(short, long, bool);
// void simulation_priority_display_set_priority_scope_tick_simulation_priority_display_set_priority_scope_tick_0_evaluate(short, long, bool);
// void simulation_priority_display_set_priority_scope_second_worst_simulation_priority_display_set_priority_scope_second_worst_0_evaluate(short, long, bool);
// void simulation_priority_display_set_priority_scope_second_best_simulation_priority_display_set_priority_scope_second_best_0_evaluate(short, long, bool);
// void simulation_priority_display_set_color_by_relevance_simulation_priority_display_set_color_by_relevance_0_evaluate(short, long, bool);
// void simulation_priority_display_set_color_by_update_period_simulation_priority_display_set_color_by_update_period_0_evaluate(short, long, bool);
// void simulation_priority_display_set_color_by_final_priority_simulation_priority_display_set_color_by_final_priority_0_evaluate(short, long, bool);
// void overlapped_task_pause_overlapped_task_pause_2_evaluate(short, long, bool);
// void net_banhammer_set_controller_cheat_flags_network_banhammer_set_controller_cheat_flags_3_evaluate(short, long, bool);
// void net_banhammer_set_controller_ban_flags_network_banhammer_set_controller_ban_flags_4_evaluate(short, long, bool);
// void net_banhammer_dump_strings_network_banhammer_display_strings_0_evaluate(short, long, bool);
// void net_banhammer_dump_repeated_play_list_network_banhammer_display_repeated_play_list_0_evaluate(short, long, bool);
// void net_banhammer_set_locality_override_network_banhammer_set_machine_locality_override_4_evaluate(short, long, bool);
// void net_leaderboard_set_user_stats_network_leaderboard_set_user_stats_6_evaluate(short, long, bool);
// void net_leaderboard_set_user_game_stats_network_leaderboard_set_user_game_stats_5_evaluate(short, long, bool);
// void net_build_map_variant_network_build_map_variant_2_evaluate(short, long, bool);
// void net_verify_map_variant_network_verify_packed_map_variant_file_1_evaluate(short, long, bool);
// void net_load_and_use_map_variant_network_load_and_use_packed_map_variant_file_1_evaluate(short, long, bool);
// void write_current_map_variant_write_current_map_variant_to_file_2_evaluate(short, long, bool);
// void read_map_variant_and_make_current_read_map_variant_from_file_and_make_current_1_evaluate(short, long, bool);
// void async_set_thread_work_delay_milliseconds_async_setup_set_thread_work_delay_2_evaluate(short, long, bool);
// void tag_resources_set_demand_throttle_to_io_tag_resources_set_demand_throttle_to_io_1_evaluate(short, long, bool);
// void tag_resources_flush_optional_tag_resources_flush_optional_resources_0_evaluate(short, long, bool);
// void set_performance_throttle_set_performance_throttle_3_evaluate(short, long, bool);
// void get_performance_throttle_get_performance_throttle_2_evaluate(short, long, bool);
// void voice_set_headset_boost_sound_xaudio_xenon_voice_set_headset_boost_1_evaluate(short, long, bool);
// void cinematic_zone_activate_main_activate_cinematic_zone_1_evaluate(short, long, bool);
// void cinematic_zone_deactivate_main_deactivate_cinematic_zone_1_evaluate(short, long, bool);
// void cinematic_zone_activate_from_editor_main_activate_cinematic_zone_from_tag_1_evaluate(short, long, bool);
// void cinematic_zone_deactivate_from_editor_main_deactivate_cinematic_zone_from_tag_1_evaluate(short, long, bool);
// void tiling_current_rasterizer_get_current_tiling_configuration_0_evaluate(short, long, bool);
// long rasterizer_get_current_tiling_configuration(void);
// public: static enum c_surface_tiling::e_configuration c_surface_tiling::get_current_configuration(void);
// void unit_limit_lipsync_to_mouth_only_unit_scripting_limit_lipsync_to_mouth_only_2_evaluate(short, long, bool);
// void dump_active_zone_tags_scenario_zone_resource_dump_active_zone_set_attachment_0_evaluate(short, long, bool);
// void calculate_tag_prediction_scenario_visit_tag_prediction_scripting_1_evaluate(short, long, bool);
// void tag_resources_enable_fast_prediction_tag_resources_enable_fast_prediction_1_evaluate(short, long, bool);
// void unit_start_first_person_custom_animation_first_person_setup_custom_animation_on_unit_4_evaluate(short, long, bool);
// void unit_is_playing_custom_first_person_animation_first_person_custom_animation_running_on_unit_1_evaluate(short, long, bool);
// void unit_stop_first_person_custom_animation_first_person_end_custom_animation_on_unit_1_evaluate(short, long, bool);
// void prepare_to_switch_to_zone_set_main_prepare_for_switch_zone_set_1_evaluate(short, long, bool);
// void cinematic_zone_activate_for_debugging_main_activate_cinematic_zone_for_debugging_1_evaluate(short, long, bool);
// void unit_play_random_ping_unit_play_random_ping_1_evaluate(short, long, bool);
// void player_control_fade_out_all_input_player_control_fade_out_all_input_1_evaluate(short, long, bool);
// void player_control_fade_in_all_input_player_control_fade_in_all_input_1_evaluate(short, long, bool);
// void player_control_lock_gaze_unit_scripting_player_lock_gaze_3_evaluate(short, long, bool);
// void player_control_unlock_gaze_unit_scripting_player_unlock_gaze_1_evaluate(short, long, bool);
// void player_control_scale_all_input_player_control_scale_all_input_2_evaluate(short, long, bool);
// void run_like_dvd_asdf_0_evaluate(short, long, bool);
// void profiler_auto_core_save_profiler_auto_core_save_1_evaluate(short, long, bool);
// void run_no_hdd_asdf2_0_evaluate(short, long, bool);
// void cinematic_tag_reference_get_bink_cinematic_tag_reference_get_bink_1_evaluate(short, long, bool);
// void voice_set_force_match_configurations_voice_set_force_match_configurations_4_evaluate(short, long, bool);
// void voice_set_force_match_configurations(long, long, long, bool);
// void voice_set_force_hud_voice_set_force_hud_2_evaluate(short, long, bool);
// void voice_set_force_hud(long, long);
// void object_set_custom_animation_speed_object_set_custom_animation_speed_2_evaluate(short, long, bool);
// void scenery_animation_start_at_frame_loop_scenery_animation_start_at_frame_loop_4_evaluate(short, long, bool);
// void saved_film_set_repro_mode_saved_film_manager_set_reproduction_enabled_1_evaluate(short, long, bool);
// void saved_film_manager_set_reproduction_enabled(bool);
// void font_set_emergency_font_initialize_emergency_0_evaluate(short, long, bool);
// void biped_force_ground_fitting_on_biped_force_ground_fitting_on_2_evaluate(short, long, bool);
// void cinematic_set_chud_objective_cinematic_set_chud_objective_1_evaluate(short, long, bool);
// void chud_show_cinematic_title_cinematic_set_chud_objective_2_evaluate(short, long, bool);
// void unit_get_primary_weapon_unit_get_current_primary_weapon_1_evaluate(short, long, bool);
// void budget_resource_get_animation_graph_scenario_budget_resource_get_model_animation_graph_reference_1_evaluate(short, long, bool);
// void budget_resource_get_looping_sound_scenario_budget_resource_get_looping_sound_reference_1_evaluate(short, long, bool);
// void game_safe_to_respawn_players_set_safe_to_respawn_1_evaluate(short, long, bool);
// void game_safe_to_respawn_players_set_safe_to_respawn_for_player_2_evaluate(short, long, bool);
// void test_create_content_item_slayer_test_create_content_item_slayer_0_evaluate(short, long, bool);
// void test_create_content_item_screenshot_test_create_content_item_screenshot_0_evaluate(short, long, bool);
// void test_create_content_blf_screenshot_test_create_content_blf_screenshot_2_evaluate(short, long, bool);
// void test_create_content_blf_film_test_create_content_blf_film_2_evaluate(short, long, bool);
// void test_create_content_blf_film_clip_test_create_content_blf_film_clip_2_evaluate(short, long, bool);
// void test_create_content_blf_game_variant_test_create_content_blf_game_variant_2_evaluate(short, long, bool);
// void test_create_content_blf_map_variant_test_create_content_blf_map_variant_2_evaluate(short, long, bool);
// void ai_migrate_infanty_ai_scripting_migrate_infantry_2_evaluate(short, long, bool);
// void render_cinematic_motion_blur_rasterizer_game_state_set_cinematic_motion_blur_enable_1_evaluate(short, long, bool);
// void ai_dont_do_avoidance_ai_scripting_dont_do_avoidance_2_evaluate(short, long, bool);
// void cinematic_scripting_clean_up_cinematic_scripting_clean_up_1_evaluate(short, long, bool);
// void ai_erase_inactive_ai_scripting_erase_inactive_2_evaluate(short, long, bool);
// void ai_survival_cleanup_ai_scripting_survival_cleanup_3_evaluate(short, long, bool);
// void ai_enable_stuck_flying_kill_ai_scripting_stuck_flying_enable_kill_2_evaluate(short, long, bool);
// void ai_set_stuck_velocity_threshold_ai_scripting_set_stuck_velocity_threshold_2_evaluate(short, long, bool);
// void stop_bink_movie_bink_playback_stop_0_evaluate(short, long, bool);
// void play_credits_unskippable_play_credits_movie_unskippable_0_evaluate(short, long, bool);
// void budget_resource_get_sound_scenario_budget_resource_get_sound_reference_1_evaluate(short, long, bool);
// void controller_set_single_player_level_unlocked_debug_set_single_player_level_unlocked_3_evaluate(short, long, bool);
// void physical_memory_dump_physical_memory_dump_0_evaluate(short, long, bool);
// void tag_resources_validate_all_pages_tag_resources_validate_all_pages_1_evaluate(short, long, bool);
// void cinematic_set_debug_mode_cinematic_set_debug_mode_1_evaluate(short, long, bool);
// void cinematic_scripting_get_object_cinematic_scripting_get_object_2_evaluate(short, long, bool);
// void player_override_team_player_override_team_2_evaluate(short, long, bool);
// void unit_set_stance_unit_scripting_set_stance_2_evaluate(short, long, bool);
// void player_set_stance_player_scripting_set_stance_1_evaluate(short, long, bool);
// void sound_impulse_start_editor_scripted_sound_new_editor_3_evaluate(short, long, bool);
// void sound_impulse_start_effect_editor_scripted_sound_new_with_effect_editor_4_evaluate(short, long, bool);
// void sound_impulse_start_3d_editor_scripted_sound_new_3d_editor_3_evaluate(short, long, bool);
// void sound_looping_start_editor_scripted_looping_sound_start_editor_3_evaluate(short, long, bool);
// void debug_sound_channels_log_start_sound_manager_debug_sound_channel_log_start_0_evaluate(short, long, bool);
// void debug_sound_channels_log_start_named_sound_manager_debug_sound_channel_log_start_named_1_evaluate(short, long, bool);
// void debug_sound_channels_log_stop_sound_manager_debug_sound_channel_log_stop_0_evaluate(short, long, bool);
// void simulation_profiler_enable_simulation_profiler_graph_display_enable_for_high_level_use_0_evaluate(short, long, bool);
// void saved_film_insert_marker_saved_film_manager_insert_marker_hs_1_evaluate(short, long, bool);
// void saved_film_manager_insert_marker_hs(char const *);
// void saved_film_seek_to_marker_saved_film_manager_seek_to_marker_hs_1_evaluate(short, long, bool);
// bool saved_film_manager_seek_to_marker_hs(long);
// void game_currency_issue_award_to_team_game_currency_issue_award_to_team_hs_2_evaluate(short, long, bool);
// void xsync_pony_tag_not_actually_implemented_1_evaluate(short, long, bool);
// void xsync_pony_map_not_actually_implemented_1_evaluate(short, long, bool);
// void net_simulation_set_stream_bandwidth_net_simulation_set_stream_bandwidth_hs_1_evaluate(short, long, bool);
// void debug_sound_fadeout_time_sound_manager_debug_sound_channel_set_fadeout_time_1_evaluate(short, long, bool);
// void render_model_marker_name_filter_render_model_marker_name_filter_1_evaluate(short, long, bool);
// void skull_enable_game_skull_enable_2_evaluate(short, long, bool);
// void allow_object_to_be_lased_hs_laser_designation_allow_object_to_be_lased_2_evaluate(short, long, bool);
// void is_object_being_lased_hs_laser_designation_is_object_being_lased_1_evaluate(short, long, bool);
// void simulation_profiler_detail_level_hs_simulation_profiler_recorder_set_host_detail_level_1_evaluate(short, long, bool);
// long hs_simulation_profiler_recorder_set_host_detail_level(long);
// void simulation_profiler_enable_downstream_processing_hs_simulation_profiler_database_enable_downstream_processing_1_evaluate(short, long, bool);
// void campaign_metagame_get_player_score_campaign_metagame_get_player_score_1_evaluate(short, long, bool);
// void collision_debug_lightmaps_print_collision_debug_console_print_lightmap_debug_0_evaluate(short, long, bool);
// void load_binary_game_engine_megalogamengine_load_binary_game_engine_from_file_1_evaluate(short, long, bool);
// void network_storage_files_display_file_names_network_storage_files_display_file_names_0_evaluate(short, long, bool);
// void network_storage_files_force_download_network_storage_files_force_download_1_evaluate(short, long, bool);
// void debug_lightmap_inspect_inspect_lightmap_status_0_evaluate(short, long, bool);
// void render_debug_colorbars_render_debug_colorbars_1_evaluate(short, long, bool);
// void voice_force_global_repeater_use_voice_force_global_repeater_use_1_evaluate(short, long, bool);
// void voice_force_global_repeater_use(bool);
// void levels_add_campaign_map_with_id_levels_add_campaign_map_from_scripting_2_evaluate(short, long, bool);
// void levels_add_campaign_map_levels_add_fake_campaign_map_from_scripting_1_evaluate(short, long, bool);
// void levels_add_multiplayer_map_levels_add_fake_multiplayer_map_from_scripting_1_evaluate(short, long, bool);
// void run_like_package_asdf_0_evaluate(short, long, bool);
// void clear_map_slot_cache_files_clear_map_single_1_evaluate(short, long, bool);
// void cache_files_clear_map_single(long);
// void clear_map_type_cache_files_clear_map_of_type_1_evaluate(short, long, bool);
// void cache_files_clear_map_of_type(long);
// void network_team_picker_unit_test_network_team_picker_unit_test_0_evaluate(short, long, bool);
// void debug_objects_unit_seats_filter_debug_objects_set_unit_seat_filter_1_evaluate(short, long, bool);
// void debug_lock_enforcement_synchronization_enable_lock_enforcement_1_evaluate(short, long, bool);
// void lsp_presence_dump_blfs_network_lsp_presence_write_blfs_to_file_1_evaluate(short, long, bool);
// void lsp_leaderboard_dump_blfs_network_lsp_leaderboard_write_blfs_to_file_1_evaluate(short, long, bool);
// void rewards_flush_player_rewards_flush_0_evaluate(short, long, bool);
// void rewards_profile_write_player_rewards_write_to_profile_hs_0_evaluate(short, long, bool);
// void rewards_lsp_sync_player_rewards_sync_with_lsp_hs_0_evaluate(short, long, bool);
// void rewards_force_unlock_all_purchasable_items_player_rewards_force_unlock_all_purchasable_items_hs_0_evaluate(short, long, bool);
// void rewards_cookies_grant_to_controller_player_rewards_add_cookies_to_controller_hs_2_evaluate(short, long, bool);
// void rewards_cookies_grant_to_player_player_rewards_add_cookies_to_player_hs_2_evaluate(short, long, bool);
// void rewards_commendation_increment_for_controller_player_rewards_commendation_progress_increment_for_controller_2_evaluate(short, long, bool);
// void rewards_commendation_increment_for_player_player_rewards_commendation_progress_increment_for_player_2_evaluate(short, long, bool);
// void rewards_commendation_set_for_controller_player_rewards_commendation_set_progress_for_controller_hs_3_evaluate(short, long, bool);
// void rewards_purchase_cookie_purchase_item_buy_hs_4_evaluate(short, long, bool);
// void rewards_set_player_appearance_from_purchase_cookie_purchase_item_set_player_appearance_hs_4_evaluate(short, long, bool);
// void rewards_dump_player_rewards_dump_current_reward_state_hs_0_evaluate(short, long, bool);
// void rewards_reinitialize_from_storage_player_rewards_reinitialize_reward_state_from_storage_hs_1_evaluate(short, long, bool);
// void rewards_reset_to_default_state_player_rewards_reset_reward_state_hs_1_evaluate(short, long, bool);
// void rewards_get_cookie_total_player_rewards_get_cookie_total_1_evaluate(short, long, bool);
// void rewards_set_purchase_state_player_rewards_set_purchase_state_hs_3_evaluate(short, long, bool);
// void challenges_enable_lsp_synchronization_challenges_enable_lsp_synchronization_hs_1_evaluate(short, long, bool);
// void challenges_clear_challenges_clear_hs_0_evaluate(short, long, bool);
// void challenges_activate_challenge_challenges_activate_challenge_hs_3_evaluate(short, long, bool);
// void challenges_list_active_challenges_for_controller_challenges_list_active_challenges_for_controller_hs_1_evaluate(short, long, bool);
// void challenge_advance_for_controller_challenge_advance_for_controller_hs_3_evaluate(short, long, bool);
// void challenge_complete_for_controller_challenge_complete_for_controller_hs_3_evaluate(short, long, bool);
// void challenge_advance_for_controller_by_indices_challenge_advance_for_controller_by_indices_hs_4_evaluate(short, long, bool);
// void challenge_complete_for_controller_by_indices_challenge_complete_for_controller_by_indices_hs_4_evaluate(short, long, bool);
// void cui_set_screen_name_override_prefix_cui_load_set_screen_name_override_prefix_1_evaluate(short, long, bool);
// void cui_load_screen_cui_load_screen_hs_1_evaluate(short, long, bool);
// void cui_load_themed_screen_cui_load_themed_screen_hs_2_evaluate(short, long, bool);
// void rewards_get_grade_player_rewards_get_controller_grade_hs_1_evaluate(short, long, bool);
// void rewards_get_sub_grade_player_rewards_get_controller_sub_grade_hs_1_evaluate(short, long, bool);
// void exit_experience_set_params_exit_experience_set_test_parameters_hs_7_evaluate(short, long, bool);
// void player_profile_clear_to_default_values_player_profile_clear_to_default_values_hs_1_evaluate(short, long, bool);
// void submit_incident_submit_incident_1_evaluate(short, long, bool);
// void submit_incident_with_cause_player_submit_incident_with_cause_player_2_evaluate(short, long, bool);
// void submit_incident_with_cause_team_submit_incident_with_cause_team_2_evaluate(short, long, bool);
// void submit_incident_with_cause_player_and_effect_player_submit_incident_with_cause_player_and_effect_player_3_evaluate(short, long, bool);
// void submit_incident_with_cause_player_and_effect_team_submit_incident_with_cause_player_and_effect_team_3_evaluate(short, long, bool);
// void submit_incident_with_cause_team_and_effect_player_submit_incident_with_cause_team_and_effect_player_3_evaluate(short, long, bool);
// void submit_incident_with_cause_team_and_effect_team_submit_incident_with_cause_team_and_effect_team_3_evaluate(short, long, bool);
// void submit_incident_with_cause_campaign_team_submit_incident_for_campaign_team_2_evaluate(short, long, bool);
// void net_set_campaign_insertion_point_network_squad_session_set_campaign_insertion_point_1_evaluate(short, long, bool);
// void hs_make_interactive_scripts_deterministic_hs_make_interactive_scripts_deterministic_1_evaluate(short, long, bool);
// void threadlib_runtests_threadlib_run_unit_tests_0_evaluate(short, long, bool);
// void player_set_respawn_vehicle_player_set_respawn_vehicle_2_evaluate(short, long, bool);
// void teleport_players_into_vehicle_teleport_players_into_vehicle_1_evaluate(short, long, bool);
// void content_test_set_active_content_test_set_active_1_evaluate(short, long, bool);
// void content_test_set_active_test_pass_content_test_set_active_test_pass_2_evaluate(short, long, bool);
// void command_buffer_cache_playback_enable_command_buffer_cache_playback_enable_1_evaluate(short, long, bool);
// void command_buffer_cache_playback_enable(bool);
// void player_set_spartan_loadout_player_set_loadout_palette_to_default_1_evaluate(short, long, bool);
// void player_set_elite_loadout_player_set_loadout_palette_to_elite_default_1_evaluate(short, long, bool);
// void auto_graph_render_debug_auto_graph_toggle_activation_1_evaluate(short, long, bool);
// void auto_graph_reset_render_debug_auto_graph_deactivate_all_0_evaluate(short, long, bool);
// void auto_graph_enable_list_render_debug_auto_graph_track_available_series_1_evaluate(short, long, bool);
// void auto_graph_filter_list_render_debug_auto_graph_filter_tracked_available_series_1_evaluate(short, long, bool);
// void auto_graph_list_render_debug_auto_graph_display_tracked_available_series_0_evaluate(short, long, bool);
// void auto_graph_hide_render_debug_auto_graph_toggle_hidden_0_evaluate(short, long, bool);
// void location_names_print_location_names_print_hs_0_evaluate(short, long, bool);
// void net_force_host_network_force_host_by_machine_name_1_evaluate(short, long, bool);
// void net_force_host_squad_network_force_squad_host_by_machine_name_1_evaluate(short, long, bool);
// void net_force_host_posse_network_force_posse_host_by_machine_name_1_evaluate(short, long, bool);
// void net_force_host_group_network_force_group_host_by_machine_name_1_evaluate(short, long, bool);
// void sandbox_load_label_strings_sandbox_load_label_strings_from_megalo_engine_1_evaluate(short, long, bool);
// void net_dump_network_statistics_network_banhammer_dump_network_statistics_0_evaluate(short, long, bool);
// void net_enable_block_detection_network_set_block_detection_threshold_1_evaluate(short, long, bool);
// void main_enable_block_detection_main_set_block_detection_threshold_1_evaluate(short, long, bool);
// void main_synchronous_networking_request_vblank_slip_main_synchronous_networking_request_vblank_slip_0_evaluate(short, long, bool);
// void debug_button_action_mapping_set_debug_button_action_mapping_set_hs_2_evaluate(short, long, bool);
// void player_appearance_force_model_area_player_appearance_force_model_area_2_evaluate(short, long, bool);
// void player_appearance_force_model_area_disable_player_appearance_force_model_area_disable_1_evaluate(short, long, bool);
// void debug_instanced_geometry_names_filter_set_debug_instanced_geometry_names_filter_1_evaluate(short, long, bool);
// void stream_manager_load_core_stream_manager_load_core_1_evaluate(short, long, bool);
// void stream_manager_save_cores_stream_manager_save_cores_1_evaluate(short, long, bool);
// void controller_set_waypoint_flags_controller_set_waypoint_flags_3_evaluate(short, long, bool);
// void waypoint_set_unlock_flag_waypoint_profile_manager_set_unlock_flag_3_evaluate(short, long, bool);
// void async_test_hang_async_test_hang_3_evaluate(short, long, bool);
// void incidents_force_campaign_debug_game_mode_flags_force_campaign_0_evaluate(short, long, bool);
// void incidents_force_firefight_debug_game_mode_flags_force_survival_0_evaluate(short, long, bool);
// void incidents_force_multiplayer_debug_game_mode_flags_force_multiplayer_0_evaluate(short, long, bool);
// void incidents_force_matchmaking_debug_game_mode_flags_force_matchmaking_0_evaluate(short, long, bool);
// void incidents_force_custom_games_debug_game_mode_flags_force_custom_games_0_evaluate(short, long, bool);
// void incidents_force_solo_debug_game_mode_flags_force_solo_0_evaluate(short, long, bool);
// void incidents_force_coop_debug_game_mode_flags_force_coop_0_evaluate(short, long, bool);
// void incidents_force_four_player_coop_debug_game_mode_flags_force_four_player_coop_0_evaluate(short, long, bool);
// void game_sound_stress_test_message_queue_game_sound_stress_test_message_queue_0_evaluate(short, long, bool);
// void net_log_channel_message_queue_state_net_log_channel_message_queue_state_2_evaluate(short, long, bool);
// void global_preferences_set_campaign_state_test_global_preferences_set_campaign_state_1_evaluate(short, long, bool);
// void net_load_machine_file_network_banhammer_load_machine_file_from_file_1_evaluate(short, long, bool);
// void lightmap_memory_inspect_inspect_lightmap_memories_0_evaluate(short, long, bool);
// void game_set_random_holiday_game_set_random_holiday_0_evaluate(short, long, bool);
// void airstrike_enable_airstrike_enable_1_evaluate(short, long, bool);
// void airstrike_weapons_exist_airstrike_weapons_exist_0_evaluate(short, long, bool);
// void airstrike_set_launches_airstrike_set_launches_remaining_1_evaluate(short, long, bool);
// void cui_debug_add_global_property_watch_cui_debug_add_global_property_watch_1_evaluate(short, long, bool);
// void cui_debug_add_property_watch_cui_debug_add_property_watch_1_evaluate(short, long, bool);
// void cui_debug_remove_global_property_watch_cui_debug_remove_global_property_watch_1_evaluate(short, long, bool);
// void cui_debug_remove_property_watch_cui_debug_remove_property_watch_1_evaluate(short, long, bool);
// void cui_debug_clear_global_property_watches_cui_debug_clear_global_property_watches_0_evaluate(short, long, bool);
// void cui_debug_clear_property_watches_cui_debug_clear_property_watches_0_evaluate(short, long, bool);
// void cui_debug_add_global_binding_watch_cui_debug_add_global_binding_watch_1_evaluate(short, long, bool);
// void cui_debug_add_binding_watch_cui_debug_add_binding_watch_1_evaluate(short, long, bool);
// void cui_debug_remove_global_binding_watch_cui_debug_remove_global_binding_watch_1_evaluate(short, long, bool);
// void cui_debug_remove_binding_watch_cui_debug_remove_binding_watch_1_evaluate(short, long, bool);
// void cui_debug_clear_global_binding_watches_cui_debug_clear_global_binding_watches_0_evaluate(short, long, bool);
// void cui_debug_clear_binding_watches_cui_debug_clear_binding_watches_0_evaluate(short, long, bool);
// void cui_debug_clear_global_cui_debug_clear_global_0_evaluate(short, long, bool);
// void cui_debug_clear_cui_debug_clear_0_evaluate(short, long, bool);
// void game_grief_record_custom_penalty_game_grief_record_custom_penalty_2_evaluate(short, long, bool);
// void game_grief_reset_game_grief_reset_0_evaluate(short, long, bool);
// void game_grief_force_social_matchmaking_game_grief_force_social_matchmaking_0_evaluate(short, long, bool);
// void game_grief_force_ranked_matchmaking_game_grief_force_ranked_matchmaking_0_evaluate(short, long, bool);
// void game_grief_set_ranked_matchmaking_multiplier_game_grief_set_ranked_matchmaking_multiplier_1_evaluate(short, long, bool);
// void game_grief_set_social_matchmaking_multiplier_game_grief_set_social_matchmaking_multiplier_1_evaluate(short, long, bool);
// void game_grief_set_custom_game_multiplier_game_grief_set_custom_game_multiplier_1_evaluate(short, long, bool);
// void game_grief_set_objects_in_sphere_radius_game_grief_set_objects_in_sphere_radius_1_evaluate(short, long, bool);
// void game_grief_set_ai_multiplier_game_grief_set_ai_multiplier_1_evaluate(short, long, bool);
// void game_grief_set_enemy_ai_nearby_multiplier_game_grief_set_enemy_ai_nearby_multiplier_1_evaluate(short, long, bool);
// void game_grief_set_enemy_player_nearby_multiplier_game_grief_set_enemy_player_nearby_multiplier_1_evaluate(short, long, bool);
// void game_grief_set_same_squad_multiplier_game_grief_set_same_squad_multiplier_1_evaluate(short, long, bool);
// void game_grief_set_shield_damage_base_penalty_game_grief_set_shield_damage_base_penalty_1_evaluate(short, long, bool);
// void game_grief_set_body_damage_base_penalty_game_grief_set_body_damage_base_penalty_1_evaluate(short, long, bool);
// void game_grief_set_betrayal_base_penalty_game_grief_set_betrayal_base_penalty_1_evaluate(short, long, bool);
// void game_grief_set_betrayal_boot_cutoff_game_grief_set_betrayal_boot_cutoff_1_evaluate(short, long, bool);
// void game_grief_set_ejection_cutoff_game_grief_set_ejection_cutoff_1_evaluate(short, long, bool);
// void game_grief_set_betrayal_decay_seconds_game_grief_set_betrayal_decay_seconds_1_evaluate(short, long, bool);
// void game_grief_set_eject_decay_seconds_game_grief_set_eject_decay_seconds_1_evaluate(short, long, bool);
// void net_disconnect_and_reconnect_all_channels_net_disconnect_and_reconnect_all_channels_0_evaluate(short, long, bool);
// void player_set_profile_player_set_global_campaign_profile_1_evaluate(short, long, bool);
// void player_set_profile_player_set_campaign_profile_2_evaluate(short, long, bool);
// void security_run_unit_tests_security_run_unit_tests_0_evaluate(short, long, bool);
// void network_session_security_set_challenge_response_network_session_security_set_challenge_response_3_evaluate(short, long, bool);
// void network_session_security_set_challenge_failure_on_timeout_network_session_security_set_challenge_failure_on_timeout_1_evaluate(short, long, bool);
// void network_session_security_set_challenge_force_fail_network_session_security_set_challenge_force_fail_1_evaluate(short, long, bool);
// void network_session_security_disable_challenges_network_session_security_disable_challenges_1_evaluate(short, long, bool);
// void test_player_appearance_encode_for_sneakernet_test_player_appearance_encode_for_sneakernet_0_evaluate(short, long, bool);
// void test_player_appearance_decode_from_sneakernet_test_player_appearance_decode_from_sneakernet_1_evaluate(short, long, bool);
// void ui_content_resize_cache_test_user_interface_content_resize_cache_1_evaluate(short, long, bool);
// void motl_dump_bitvector_for_scenario_multiplayer_object_type_list_dump_bitvector_for_scenario_0_evaluate(short, long, bool);
// void motl_verify_mapinfo_for_scenario_multiplayer_object_type_list_verify_mapinfo_for_scenario_0_evaluate(short, long, bool);

//void evaluate_hs_evaluate_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?evaluate_hs_evaluate_1_evaluate@@YAXFJ_N@Z");
//};

//void not_hs_not_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?not_hs_not_1_evaluate@@YAXFJ_N@Z");
//};

//void pin_hs_pin_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?pin_hs_pin_3_evaluate@@YAXFJ_N@Z");
//};

//void dummy_function_hs_dummy_function_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?dummy_function_hs_dummy_function_0_evaluate@@YAXFJ_N@Z");
//};

//void print_hs_print_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?print_hs_print_1_evaluate@@YAXFJ_N@Z");
//};

//void log_print_hs_log_print_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?log_print_hs_log_print_1_evaluate@@YAXFJ_N@Z");
//};

//void debug_scripting_show_thread_hs_scripting_show_thread_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?debug_scripting_show_thread_hs_scripting_show_thread_2_evaluate@@YAXFJ_N@Z");
//};

//void debug_script_thread_hs_scripting_debug_thread_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?debug_script_thread_hs_scripting_debug_thread_2_evaluate@@YAXFJ_N@Z");
//};

//void debug_scripting_hs_enable_debug_scripting_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?debug_scripting_hs_enable_debug_scripting_1_evaluate@@YAXFJ_N@Z");
//};

//void debug_scripting_globals_hs_enable_debug_globals_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?debug_scripting_globals_hs_enable_debug_globals_1_evaluate@@YAXFJ_N@Z");
//};

//void debug_scripting_variable_hs_debug_variable_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?debug_scripting_variable_hs_debug_variable_2_evaluate@@YAXFJ_N@Z");
//};

//void debug_scripting_variable_all_hs_debug_variable_all_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?debug_scripting_variable_all_hs_debug_variable_all_1_evaluate@@YAXFJ_N@Z");
//};

//void breakpoint_hs_breakpoint_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?breakpoint_hs_breakpoint_1_evaluate@@YAXFJ_N@Z");
//};

//void kill_active_scripts_hs_scripting_kill_all_threads_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?kill_active_scripts_hs_scripting_kill_all_threads_0_evaluate@@YAXFJ_N@Z");
//};

//void get_executing_running_thread_hs_scripting_get_executing_thread_index_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?get_executing_running_thread_hs_scripting_get_executing_thread_index_0_evaluate@@YAXFJ_N@Z");
//};

//void kill_thread_hs_scripting_kill_running_thread_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?kill_thread_hs_scripting_kill_running_thread_1_evaluate@@YAXFJ_N@Z");
//};

//void script_started_hs_script_started_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?script_started_hs_script_started_1_evaluate@@YAXFJ_N@Z");
//};

//void script_finished_hs_script_finished_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?script_finished_hs_script_finished_1_evaluate@@YAXFJ_N@Z");
//};

//void local_players_hs_local_players_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?local_players_hs_local_players_0_evaluate@@YAXFJ_N@Z");
//};

//void players_hs_players_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?players_hs_players_0_evaluate@@YAXFJ_N@Z");
//};

//void players_human_hs_players_human_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?players_human_hs_players_human_0_evaluate@@YAXFJ_N@Z");
//};

//void players_elite_hs_players_elite_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?players_elite_hs_players_elite_0_evaluate@@YAXFJ_N@Z");
//};

//void player_get_hs_player_get_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?player_get_hs_player_get_1_evaluate@@YAXFJ_N@Z");
//};

//void player_in_game_get_hs_player_in_game_get_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?player_in_game_get_hs_player_in_game_get_1_evaluate@@YAXFJ_N@Z");
//};

//void human_player_in_game_get_hs_human_player_in_game_get_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?human_player_in_game_get_hs_human_player_in_game_get_1_evaluate@@YAXFJ_N@Z");
//};

//void elite_player_in_game_get_hs_elite_player_in_game_get_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?elite_player_in_game_get_hs_elite_player_in_game_get_1_evaluate@@YAXFJ_N@Z");
//};

//void player_is_in_game_player_is_active_and_in_game_hs_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?player_is_in_game_player_is_active_and_in_game_hs_1_evaluate@@YAXFJ_N@Z");
//};

//void editor_mode_game_in_editor_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?editor_mode_game_in_editor_0_evaluate@@YAXFJ_N@Z");
//};

//void kill_volume_enable_scenario_kill_trigger_volume_enable_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?kill_volume_enable_scenario_kill_trigger_volume_enable_1_evaluate@@YAXFJ_N@Z");
//};

//void kill_volume_disable_scenario_kill_trigger_volume_disable_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?kill_volume_disable_scenario_kill_trigger_volume_disable_1_evaluate@@YAXFJ_N@Z");
//};

//void volume_teleport_players_not_inside_hs_teleport_players_not_in_trigger_volume_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?volume_teleport_players_not_inside_hs_teleport_players_not_in_trigger_volume_2_evaluate@@YAXFJ_N@Z");
//};

//void volume_test_object_scenario_trigger_volume_test_object_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?volume_test_object_scenario_trigger_volume_test_object_2_evaluate@@YAXFJ_N@Z");
//};

//void volume_test_objects_hs_trigger_volume_test_objects_any_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?volume_test_objects_hs_trigger_volume_test_objects_any_2_evaluate@@YAXFJ_N@Z");
//};

//void volume_test_objects_all_hs_trigger_volume_test_objects_all_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?volume_test_objects_all_hs_trigger_volume_test_objects_all_2_evaluate@@YAXFJ_N@Z");
//};

//void volume_test_players_scenario_trigger_volume_test_players_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?volume_test_players_scenario_trigger_volume_test_players_1_evaluate@@YAXFJ_N@Z");
//};

//void volume_test_players_all_scenario_trigger_volume_test_players_all_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?volume_test_players_all_scenario_trigger_volume_test_players_all_1_evaluate@@YAXFJ_N@Z");
//};

//void volume_return_objects_scenario_trigger_volume_return_objects_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?volume_return_objects_scenario_trigger_volume_return_objects_1_evaluate@@YAXFJ_N@Z");
//};

//void volume_return_objects_by_type_scenario_trigger_volume_return_objects_by_type_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?volume_return_objects_by_type_scenario_trigger_volume_return_objects_by_type_2_evaluate@@YAXFJ_N@Z");
//};

//void volume_return_objects_by_campaign_type_scenario_trigger_volume_return_objects_by_campaign_metagame_type_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?volume_return_objects_by_campaign_type_scenario_trigger_volume_return_objects_by_campaign_metagame_type_2_evaluate@@YAXFJ_N@Z");
//};

//void zone_set_trigger_volume_enable_zone_set_switch_trigger_volume_enable_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?zone_set_trigger_volume_enable_zone_set_switch_trigger_volume_enable_2_evaluate@@YAXFJ_N@Z");
//};

//void list_get_hs_object_list_get_element_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?list_get_hs_object_list_get_element_2_evaluate@@YAXFJ_N@Z");
//};

//void list_count_object_list_count_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?list_count_object_list_count_1_evaluate@@YAXFJ_N@Z");
//};

//void list_count_not_dead_object_list_count_not_dead_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?list_count_not_dead_object_list_count_not_dead_1_evaluate@@YAXFJ_N@Z");
//};

//void effect_new_hs_effect_new_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?effect_new_hs_effect_new_2_evaluate@@YAXFJ_N@Z");
//};

//void effect_new_random_hs_effect_new_random_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?effect_new_random_hs_effect_new_random_2_evaluate@@YAXFJ_N@Z");
//};

//void effect_new_random_hs_effect_new_random2_4_evaluate(short, long, bool)
//{
//    mangled_ppc("?effect_new_random_hs_effect_new_random2_4_evaluate@@YAXFJ_N@Z");
//};

//void effect_new_at_ai_point_hs_effect_new_at_ai_point_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?effect_new_at_ai_point_hs_effect_new_at_ai_point_2_evaluate@@YAXFJ_N@Z");
//};

//void effect_new_at_point_set_point_hs_effect_new_at_point_set_point_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?effect_new_at_point_set_point_hs_effect_new_at_point_set_point_3_evaluate@@YAXFJ_N@Z");
//};

//void effect_new_on_object_marker_hs_effect_new_from_object_marker_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?effect_new_on_object_marker_hs_effect_new_from_object_marker_3_evaluate@@YAXFJ_N@Z");
//};

//void effect_new_on_object_marker_loop_hs_effect_new_from_object_marker_loop_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?effect_new_on_object_marker_loop_hs_effect_new_from_object_marker_loop_3_evaluate@@YAXFJ_N@Z");
//};

//void effect_stop_object_marker_hs_effect_stop_from_object_marker_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?effect_stop_object_marker_hs_effect_stop_from_object_marker_3_evaluate@@YAXFJ_N@Z");
//};

//void effect_new_on_ground_hs_effect_new_on_ground_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?effect_new_on_ground_hs_effect_new_on_ground_2_evaluate@@YAXFJ_N@Z");
//};

//void damage_new_hs_damage_new_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?damage_new_hs_damage_new_2_evaluate@@YAXFJ_N@Z");
//};

//void damage_object_effect_hs_damage_object_effect_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?damage_object_effect_hs_damage_object_effect_2_evaluate@@YAXFJ_N@Z");
//};

//void damage_objects_effect_hs_damage_object_effect_list_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?damage_objects_effect_hs_damage_object_effect_list_2_evaluate@@YAXFJ_N@Z");
//};

//void damage_object_hs_damage_object_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?damage_object_hs_damage_object_3_evaluate@@YAXFJ_N@Z");
//};

//void damage_objects_hs_damage_object_list_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?damage_objects_hs_damage_object_list_3_evaluate@@YAXFJ_N@Z");
//};

//void damage_players_hs_damage_players_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?damage_players_hs_damage_players_1_evaluate@@YAXFJ_N@Z");
//};

//void soft_ceiling_enable_scenario_soft_ceiling_enable_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?soft_ceiling_enable_scenario_soft_ceiling_enable_2_evaluate@@YAXFJ_N@Z");
//};

//void object_create_hs_object_create_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?object_create_hs_object_create_1_evaluate@@YAXFJ_N@Z");
//};

//void object_create_variant_hs_object_create_variant_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?object_create_variant_hs_object_create_variant_2_evaluate@@YAXFJ_N@Z");
//};

//void object_create_clone_hs_object_create_clone_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?object_create_clone_hs_object_create_clone_1_evaluate@@YAXFJ_N@Z");
//};

//void object_create_anew_hs_object_create_anew_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?object_create_anew_hs_object_create_anew_1_evaluate@@YAXFJ_N@Z");
//};

//void object_create_if_necessary_hs_object_create_if_necessary_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?object_create_if_necessary_hs_object_create_if_necessary_1_evaluate@@YAXFJ_N@Z");
//};

//void object_create_folder_hs_object_create_folder_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?object_create_folder_hs_object_create_folder_1_evaluate@@YAXFJ_N@Z");
//};

//void object_create_folder_anew_hs_object_create_folder_anew_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?object_create_folder_anew_hs_object_create_folder_anew_1_evaluate@@YAXFJ_N@Z");
//};

//void object_destroy_hs_object_destroy_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?object_destroy_hs_object_destroy_1_evaluate@@YAXFJ_N@Z");
//};

//void object_destroy_all_hs_object_destroy_all_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?object_destroy_all_hs_object_destroy_all_0_evaluate@@YAXFJ_N@Z");
//};

//void object_destroy_type_mask_hs_object_destroy_all_type_mask_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?object_destroy_type_mask_hs_object_destroy_all_type_mask_1_evaluate@@YAXFJ_N@Z");
//};

//void objects_delete_by_definition_hs_objects_delete_by_definition_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?objects_delete_by_definition_hs_objects_delete_by_definition_1_evaluate@@YAXFJ_N@Z");
//};

//void object_destroy_folder_hs_object_destroy_folder_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?object_destroy_folder_hs_object_destroy_folder_1_evaluate@@YAXFJ_N@Z");
//};

//void object_hide_hs_object_hide_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?object_hide_hs_object_hide_2_evaluate@@YAXFJ_N@Z");
//};

//void object_set_shadowless_hs_object_set_shadowless_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?object_set_shadowless_hs_object_set_shadowless_2_evaluate@@YAXFJ_N@Z");
//};

//void object_set_allegiance_game_allegiance_set_object_team_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?object_set_allegiance_game_allegiance_set_object_team_2_evaluate@@YAXFJ_N@Z");
//};

//void object_buckling_magnitude_get_hs_object_buckling_magnitude_get_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?object_buckling_magnitude_get_hs_object_buckling_magnitude_get_1_evaluate@@YAXFJ_N@Z");
//};

//void object_function_set_scripted_object_function_set_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?object_function_set_scripted_object_function_set_2_evaluate@@YAXFJ_N@Z");
//};

//void object_set_function_variable_object_scripting_set_function_variable_4_evaluate(short, long, bool)
//{
//    mangled_ppc("?object_set_function_variable_object_scripting_set_function_variable_4_evaluate@@YAXFJ_N@Z");
//};

//void object_set_cinematic_function_variable_object_scripting_set_cinematic_function_variable_4_evaluate(short, long, bool)
//{
//    mangled_ppc("?object_set_cinematic_function_variable_object_scripting_set_cinematic_function_variable_4_evaluate@@YAXFJ_N@Z");
//};

//void object_clear_cinematic_function_variable_object_scripting_clear_cinematic_function_variable_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?object_clear_cinematic_function_variable_object_scripting_clear_cinematic_function_variable_2_evaluate@@YAXFJ_N@Z");
//};

//void object_clear_all_cinematic_function_variables_object_scripting_clear_all_cinematic_function_variables_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?object_clear_all_cinematic_function_variables_object_scripting_clear_all_cinematic_function_variables_1_evaluate@@YAXFJ_N@Z");
//};

//void object_dynamic_simulation_disable_object_scripting_dynamic_simulation_disable_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?object_dynamic_simulation_disable_object_scripting_dynamic_simulation_disable_2_evaluate@@YAXFJ_N@Z");
//};

//void object_set_phantom_power_object_scripting_set_phantom_power_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?object_set_phantom_power_object_scripting_set_phantom_power_2_evaluate@@YAXFJ_N@Z");
//};

//void object_wake_physics_object_scripting_wake_physics_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?object_wake_physics_object_scripting_wake_physics_1_evaluate@@YAXFJ_N@Z");
//};

//void object_get_at_rest_object_scripting_get_at_rest_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?object_get_at_rest_object_scripting_get_at_rest_1_evaluate@@YAXFJ_N@Z");
//};

//void object_set_ranged_attack_inhibited_object_set_ranged_attack_inhibited_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?object_set_ranged_attack_inhibited_object_set_ranged_attack_inhibited_2_evaluate@@YAXFJ_N@Z");
//};

//void object_set_melee_attack_inhibited_object_set_melee_attack_inhibited_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?object_set_melee_attack_inhibited_object_set_melee_attack_inhibited_2_evaluate@@YAXFJ_N@Z");
//};

//void objects_dump_memory_objects_dump_memory_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?objects_dump_memory_objects_dump_memory_0_evaluate@@YAXFJ_N@Z");
//};

//void object_get_health_object_scripting_get_health_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?object_get_health_object_scripting_get_health_1_evaluate@@YAXFJ_N@Z");
//};

//void object_get_shield_object_scripting_get_shield_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?object_get_shield_object_scripting_get_shield_1_evaluate@@YAXFJ_N@Z");
//};

//void object_set_shield_effect_object_scripting_set_shield_effect_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?object_set_shield_effect_object_scripting_set_shield_effect_3_evaluate@@YAXFJ_N@Z");
//};

//void object_set_physics_object_scripting_set_physics_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?object_set_physics_object_scripting_set_physics_2_evaluate@@YAXFJ_N@Z");
//};

//void object_get_parent_object_scripting_get_parent_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?object_get_parent_object_scripting_get_parent_1_evaluate@@YAXFJ_N@Z");
//};

//void objects_attach_objects_scripting_attach_4_evaluate(short, long, bool)
//{
//    mangled_ppc("?objects_attach_objects_scripting_attach_4_evaluate@@YAXFJ_N@Z");
//};

//void object_at_marker_object_at_marker_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?object_at_marker_object_at_marker_2_evaluate@@YAXFJ_N@Z");
//};

//void objects_detach_objects_scripting_detach_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?objects_detach_objects_scripting_detach_2_evaluate@@YAXFJ_N@Z");
//};

//void object_set_scale_objects_scripting_set_scale_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?object_set_scale_objects_scripting_set_scale_3_evaluate@@YAXFJ_N@Z");
//};

//void object_set_velocity_object_scripting_set_velocity_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?object_set_velocity_object_scripting_set_velocity_2_evaluate@@YAXFJ_N@Z");
//};

//void object_get_bsp_object_scripting_get_bsp_index_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?object_get_bsp_object_scripting_get_bsp_index_1_evaluate@@YAXFJ_N@Z");
//};

//void object_set_as_fireteam_target_object_scripting_mark_object_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?object_set_as_fireteam_target_object_scripting_mark_object_2_evaluate@@YAXFJ_N@Z");
//};

//void object_is_reserved_object_scripting_is_object_reserved_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?object_is_reserved_object_scripting_is_object_reserved_1_evaluate@@YAXFJ_N@Z");
//};

//void object_set_velocity_object_scripting_set_velocity2_4_evaluate(short, long, bool)
//{
//    mangled_ppc("?object_set_velocity_object_scripting_set_velocity2_4_evaluate@@YAXFJ_N@Z");
//};

//void object_set_deleted_when_deactivated_object_scripting_set_deleted_when_deactivated_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?object_set_deleted_when_deactivated_object_scripting_set_deleted_when_deactivated_1_evaluate@@YAXFJ_N@Z");
//};

//void object_copy_player_appearance_object_scripting_copy_player_appearance_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?object_copy_player_appearance_object_scripting_copy_player_appearance_2_evaluate@@YAXFJ_N@Z");
//};

//void object_model_target_destroyed_object_model_target_destroyed_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?object_model_target_destroyed_object_model_target_destroyed_2_evaluate@@YAXFJ_N@Z");
//};

//void object_model_targets_destroyed_object_model_targets_destroyed_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?object_model_targets_destroyed_object_model_targets_destroyed_2_evaluate@@YAXFJ_N@Z");
//};

//void object_enable_damage_section_object_enable_damage_section_by_name_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?object_enable_damage_section_object_enable_damage_section_by_name_3_evaluate@@YAXFJ_N@Z");
//};

//void object_disable_damage_section_object_disable_damage_section_by_name_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?object_disable_damage_section_object_disable_damage_section_by_name_2_evaluate@@YAXFJ_N@Z");
//};

//void object_damage_damage_section_object_damage_damage_section_hs_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?object_damage_damage_section_object_damage_damage_section_hs_3_evaluate@@YAXFJ_N@Z");
//};

//void object_cannot_die_object_scripting_cannot_die_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?object_cannot_die_object_scripting_cannot_die_2_evaluate@@YAXFJ_N@Z");
//};

//void object_cannot_die_except_kill_volumes_object_scripting_cannot_die_except_for_kill_volumes_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?object_cannot_die_except_kill_volumes_object_scripting_cannot_die_except_for_kill_volumes_2_evaluate@@YAXFJ_N@Z");
//};

//void object_ignores_emp_object_scripting_ignores_emp_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?object_ignores_emp_object_scripting_ignores_emp_2_evaluate@@YAXFJ_N@Z");
//};

//void object_vitality_pinned_object_scripting_vitality_pinned_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?object_vitality_pinned_object_scripting_vitality_pinned_1_evaluate@@YAXFJ_N@Z");
//};

//void garbage_collect_now_garbage_collect_now_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?garbage_collect_now_garbage_collect_now_0_evaluate@@YAXFJ_N@Z");
//};

//void garbage_collect_unsafe_garbage_collect_unsafe_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?garbage_collect_unsafe_garbage_collect_unsafe_0_evaluate@@YAXFJ_N@Z");
//};

//void garbage_collect_multiplayer_game_engine_garbage_collect_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?garbage_collect_multiplayer_game_engine_garbage_collect_0_evaluate@@YAXFJ_N@Z");
//};

//void object_cannot_take_damage_object_cannot_take_damage_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?object_cannot_take_damage_object_cannot_take_damage_1_evaluate@@YAXFJ_N@Z");
//};

//void object_get_recent_body_damage_object_get_recent_body_damage_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?object_get_recent_body_damage_object_get_recent_body_damage_1_evaluate@@YAXFJ_N@Z");
//};

//void object_get_recent_shield_damage_object_get_recent_shield_damage_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?object_get_recent_shield_damage_object_get_recent_shield_damage_1_evaluate@@YAXFJ_N@Z");
//};

//void object_can_take_damage_object_can_take_damage_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?object_can_take_damage_object_can_take_damage_1_evaluate@@YAXFJ_N@Z");
//};

//void object_immune_to_friendly_damage_object_set_friendly_damage_immunity_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?object_immune_to_friendly_damage_object_set_friendly_damage_immunity_2_evaluate@@YAXFJ_N@Z");
//};

//void object_cinematic_lod_object_cinematic_lod_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?object_cinematic_lod_object_cinematic_lod_2_evaluate@@YAXFJ_N@Z");
//};

//void object_cinematic_collision_object_cinematic_collision_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?object_cinematic_collision_object_cinematic_collision_2_evaluate@@YAXFJ_N@Z");
//};

//void object_cinematic_visibility_object_cinematic_visibility_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?object_cinematic_visibility_object_cinematic_visibility_2_evaluate@@YAXFJ_N@Z");
//};

//void objects_predict_hs_objects_predict_old_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?objects_predict_hs_objects_predict_old_1_evaluate@@YAXFJ_N@Z");
//};

//void objects_predict_high_hs_objects_predict_high_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?objects_predict_high_hs_objects_predict_high_1_evaluate@@YAXFJ_N@Z");
//};

//void objects_predict_low_hs_objects_predict_low_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?objects_predict_low_hs_objects_predict_low_1_evaluate@@YAXFJ_N@Z");
//};

//void object_type_predict_high_hs_object_definition_predict_all_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?object_type_predict_high_hs_object_definition_predict_all_1_evaluate@@YAXFJ_N@Z");
//};

//void object_type_predict_low_hs_object_definition_predict_low_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?object_type_predict_low_hs_object_definition_predict_low_1_evaluate@@YAXFJ_N@Z");
//};

//void object_type_predict_hs_object_definition_predict_old_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?object_type_predict_hs_object_definition_predict_old_1_evaluate@@YAXFJ_N@Z");
//};

//void hs_object_definition_predict_old(long)
//{
//    mangled_ppc("?hs_object_definition_predict_old@@YAXJ@Z");
//};

//void object_teleport_hs_object_teleport_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?object_teleport_hs_object_teleport_2_evaluate@@YAXFJ_N@Z");
//};

//void object_teleport_to_ai_point_hs_object_teleport_ai_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?object_teleport_to_ai_point_hs_object_teleport_ai_2_evaluate@@YAXFJ_N@Z");
//};

//void object_set_facing_hs_object_set_facing_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?object_set_facing_hs_object_set_facing_2_evaluate@@YAXFJ_N@Z");
//};

//void object_set_shield_hs_object_set_shield_normalized_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?object_set_shield_hs_object_set_shield_normalized_2_evaluate@@YAXFJ_N@Z");
//};

//void object_set_shield_stun_hs_object_set_shield_stun_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?object_set_shield_stun_hs_object_set_shield_stun_2_evaluate@@YAXFJ_N@Z");
//};

//void object_set_shield_stun_infinite_hs_object_set_shield_stun_infinite_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?object_set_shield_stun_infinite_hs_object_set_shield_stun_infinite_1_evaluate@@YAXFJ_N@Z");
//};

//void object_set_permutation_hs_object_set_permutation_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?object_set_permutation_hs_object_set_permutation_3_evaluate@@YAXFJ_N@Z");
//};

//void object_set_variant_hs_object_set_variant_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?object_set_variant_hs_object_set_variant_2_evaluate@@YAXFJ_N@Z");
//};

//void object_set_region_state_hs_object_set_region_state_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?object_set_region_state_hs_object_set_region_state_3_evaluate@@YAXFJ_N@Z");
//};

//void object_set_model_state_property_hs_object_set_model_state_property_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?object_set_model_state_property_hs_object_set_model_state_property_3_evaluate@@YAXFJ_N@Z");
//};

//void objects_can_see_object_hs_objects_can_see_object_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?objects_can_see_object_hs_objects_can_see_object_3_evaluate@@YAXFJ_N@Z");
//};

//void objects_can_see_flag_hs_objects_can_see_flag_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?objects_can_see_flag_hs_objects_can_see_flag_3_evaluate@@YAXFJ_N@Z");
//};

//void objects_distance_to_object_hs_objects_distance_to_object_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?objects_distance_to_object_hs_objects_distance_to_object_2_evaluate@@YAXFJ_N@Z");
//};

//void objects_distance_to_flag_hs_objects_distance_to_flag_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?objects_distance_to_flag_hs_objects_distance_to_flag_2_evaluate@@YAXFJ_N@Z");
//};

//void objects_distance_to_point_hs_objects_distance_to_point_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?objects_distance_to_point_hs_objects_distance_to_point_2_evaluate@@YAXFJ_N@Z");
//};

//void map_info_hs_map_info_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?map_info_hs_map_info_0_evaluate@@YAXFJ_N@Z");
//};

//void position_predict_hs_position_predict_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?position_predict_hs_position_predict_3_evaluate@@YAXFJ_N@Z");
//};

//void shader_predict_hs_shader_predict_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?shader_predict_hs_shader_predict_1_evaluate@@YAXFJ_N@Z");
//};

//void bitmap_predict_hs_bitmap_predict_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?bitmap_predict_hs_bitmap_predict_1_evaluate@@YAXFJ_N@Z");
//};

//void script_recompile_hs_recompile_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?script_recompile_hs_recompile_0_evaluate@@YAXFJ_N@Z");
//};

//void script_doc_hs_doc_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?script_doc_hs_doc_0_evaluate@@YAXFJ_N@Z");
//};

//void help_hs_help_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?help_hs_help_1_evaluate@@YAXFJ_N@Z");
//};

//void game_engine_objects_game_engine_get_game_object_list_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?game_engine_objects_game_engine_get_game_object_list_0_evaluate@@YAXFJ_N@Z");
//};

//void random_range_hs_random_range_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?random_range_hs_random_range_2_evaluate@@YAXFJ_N@Z");
//};

//void real_random_range_hs_real_random_range_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?real_random_range_hs_real_random_range_2_evaluate@@YAXFJ_N@Z");
//};

//void physics_constants_reset_physics_constants_reset_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?physics_constants_reset_physics_constants_reset_0_evaluate@@YAXFJ_N@Z");
//};

//void physics_set_gravity_physics_constants_set_gravity_halo_relative_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?physics_set_gravity_physics_constants_set_gravity_halo_relative_1_evaluate@@YAXFJ_N@Z");
//};

//void physics_set_velocity_frame_global_physics_velocity_frame_set_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?physics_set_velocity_frame_global_physics_velocity_frame_set_3_evaluate@@YAXFJ_N@Z");
//};

//void physics_disable_character_ground_adhesion_forces_disable_character_ground_adhesion_forces_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?physics_disable_character_ground_adhesion_forces_disable_character_ground_adhesion_forces_1_evaluate@@YAXFJ_N@Z");
//};

//void havok_debug_start_havok_debug_start_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?havok_debug_start_havok_debug_start_0_evaluate@@YAXFJ_N@Z");
//};

//void havok_debug_stop_havok_debug_stop_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?havok_debug_stop_havok_debug_stop_0_evaluate@@YAXFJ_N@Z");
//};

//void havok_dump_world_havok_dump_world_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?havok_dump_world_havok_dump_world_2_evaluate@@YAXFJ_N@Z");
//};

//void havok_dump_world_close_movie_havok_dump_world_close_movie_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?havok_dump_world_close_movie_havok_dump_world_close_movie_0_evaluate@@YAXFJ_N@Z");
//};

//void havok_profile_start_havok_profile_start_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?havok_profile_start_havok_profile_start_0_evaluate@@YAXFJ_N@Z");
//};

//void havok_profile_stop_havok_profile_stop_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?havok_profile_stop_havok_profile_stop_0_evaluate@@YAXFJ_N@Z");
//};

//void havok_profile_range_havok_profile_range_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?havok_profile_range_havok_profile_range_2_evaluate@@YAXFJ_N@Z");
//};

//void havok_reset_allocated_state_havok_reset_allocated_state_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?havok_reset_allocated_state_havok_reset_allocated_state_0_evaluate@@YAXFJ_N@Z");
//};

//void breakable_surfaces_enable_breakable_surfaces_enable_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?breakable_surfaces_enable_breakable_surfaces_enable_1_evaluate@@YAXFJ_N@Z");
//};

//void breakable_surfaces_reset_breakable_surfaces_reset_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?breakable_surfaces_reset_breakable_surfaces_reset_0_evaluate@@YAXFJ_N@Z");
//};

//void recording_play_recorded_animation_play_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?recording_play_recorded_animation_play_2_evaluate@@YAXFJ_N@Z");
//};

//void recording_play_and_delete_recorded_animation_play_and_delete_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?recording_play_and_delete_recorded_animation_play_and_delete_2_evaluate@@YAXFJ_N@Z");
//};

//void recording_play_and_hover_recorded_animation_play_and_hover_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?recording_play_and_hover_recorded_animation_play_and_hover_2_evaluate@@YAXFJ_N@Z");
//};

//void recording_kill_recorded_animation_kill_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?recording_kill_recorded_animation_kill_1_evaluate@@YAXFJ_N@Z");
//};

//void recording_time_recorded_animation_get_time_left_for_scripting_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?recording_time_recorded_animation_get_time_left_for_scripting_1_evaluate@@YAXFJ_N@Z");
//};

//void render_lights_lights_enable_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?render_lights_lights_enable_1_evaluate@@YAXFJ_N@Z");
//};

//void print_light_state_dump_light_state_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?print_light_state_dump_light_state_0_evaluate@@YAXFJ_N@Z");
//};

//void render_lights_enable_cinematic_shadow_render_light_set_cinematic_shadow_4_evaluate(short, long, bool)
//{
//    mangled_ppc("?render_lights_enable_cinematic_shadow_render_light_set_cinematic_shadow_4_evaluate@@YAXFJ_N@Z");
//};

//void texture_camera_set_object_marker_render_texture_camera_set_object_marker_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?texture_camera_set_object_marker_render_texture_camera_set_object_marker_3_evaluate@@YAXFJ_N@Z");
//};

//void texture_camera_set_position_render_texture_camera_set_position_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?texture_camera_set_position_render_texture_camera_set_position_3_evaluate@@YAXFJ_N@Z");
//};

//void texture_camera_set_target_render_texture_camera_set_target_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?texture_camera_set_target_render_texture_camera_set_target_3_evaluate@@YAXFJ_N@Z");
//};

//void texture_camera_attach_to_object_render_texture_camera_attach_to_object_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?texture_camera_attach_to_object_render_texture_camera_attach_to_object_2_evaluate@@YAXFJ_N@Z");
//};

//void texture_camera_target_object_render_texture_camera_target_object_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?texture_camera_target_object_render_texture_camera_target_object_2_evaluate@@YAXFJ_N@Z");
//};

//void texture_camera_position_world_offset_render_texture_camera_position_world_offset_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?texture_camera_position_world_offset_render_texture_camera_position_world_offset_3_evaluate@@YAXFJ_N@Z");
//};

//void texture_camera_on_render_texture_camera_on_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?texture_camera_on_render_texture_camera_on_0_evaluate@@YAXFJ_N@Z");
//};

//void texture_camera_bink_render_texture_camera_bink_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?texture_camera_bink_render_texture_camera_bink_0_evaluate@@YAXFJ_N@Z");
//};

//void texture_camera_off_render_texture_camera_off_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?texture_camera_off_render_texture_camera_off_0_evaluate@@YAXFJ_N@Z");
//};

//void texture_camera_set_aspect_ratio_render_texture_camera_set_aspect_ratio_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?texture_camera_set_aspect_ratio_render_texture_camera_set_aspect_ratio_1_evaluate@@YAXFJ_N@Z");
//};

//void texture_camera_set_resolution_render_texture_camera_set_resolution_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?texture_camera_set_resolution_render_texture_camera_set_resolution_2_evaluate@@YAXFJ_N@Z");
//};

//void texture_camera_render_mode_render_texture_camera_render_mode_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?texture_camera_render_mode_render_texture_camera_render_mode_1_evaluate@@YAXFJ_N@Z");
//};

//void texture_camera_set_fov_render_texture_camera_set_fov_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?texture_camera_set_fov_render_texture_camera_set_fov_1_evaluate@@YAXFJ_N@Z");
//};

//void texture_camera_set_fov_frame_target_render_texture_camera_set_fov_frame_target_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?texture_camera_set_fov_frame_target_render_texture_camera_set_fov_frame_target_1_evaluate@@YAXFJ_N@Z");
//};

//void texture_camera_enable_dynamic_lights_render_texture_camera_enable_dynamic_lights_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?texture_camera_enable_dynamic_lights_render_texture_camera_enable_dynamic_lights_1_evaluate@@YAXFJ_N@Z");
//};

//void hud_camera_on_render_hud_camera_on_hs_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?hud_camera_on_render_hud_camera_on_hs_1_evaluate@@YAXFJ_N@Z");
//};

//void hud_camera_off_render_hud_camera_off_hs_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?hud_camera_off_render_hud_camera_off_hs_1_evaluate@@YAXFJ_N@Z");
//};

//void hud_camera_set_position_render_hud_camera_set_position_hs_4_evaluate(short, long, bool)
//{
//    mangled_ppc("?hud_camera_set_position_render_hud_camera_set_position_hs_4_evaluate@@YAXFJ_N@Z");
//};

//void hud_camera_set_target_render_hud_camera_set_target_hs_4_evaluate(short, long, bool)
//{
//    mangled_ppc("?hud_camera_set_target_render_hud_camera_set_target_hs_4_evaluate@@YAXFJ_N@Z");
//};

//void hud_camera_attach_to_object_render_hud_camera_attach_to_object_hs_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?hud_camera_attach_to_object_render_hud_camera_attach_to_object_hs_3_evaluate@@YAXFJ_N@Z");
//};

//void hud_camera_target_object_render_hud_camera_target_object_hs_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?hud_camera_target_object_render_hud_camera_target_object_hs_3_evaluate@@YAXFJ_N@Z");
//};

//void hud_camera_structure_render_hud_camera_structure_hs_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?hud_camera_structure_render_hud_camera_structure_hs_2_evaluate@@YAXFJ_N@Z");
//};

//void hud_camera_highlight_object_render_hud_camera_highlight_object_hs_6_evaluate(short, long, bool)
//{
//    mangled_ppc("?hud_camera_highlight_object_render_hud_camera_highlight_object_hs_6_evaluate@@YAXFJ_N@Z");
//};

//void hud_camera_clear_objects_render_hud_camera_clear_objects_hs_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?hud_camera_clear_objects_render_hud_camera_clear_objects_hs_1_evaluate@@YAXFJ_N@Z");
//};

//void hud_camera_spin_around_render_hud_camera_spin_around_hs_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?hud_camera_spin_around_render_hud_camera_spin_around_hs_2_evaluate@@YAXFJ_N@Z");
//};

//void hud_camera_from_player_view_render_hud_camera_from_player_view_hs_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?hud_camera_from_player_view_render_hud_camera_from_player_view_hs_1_evaluate@@YAXFJ_N@Z");
//};

//void hud_camera_window_render_hud_camera_window_hs_5_evaluate(short, long, bool)
//{
//    mangled_ppc("?hud_camera_window_render_hud_camera_window_hs_5_evaluate@@YAXFJ_N@Z");
//};

//void render_debug_texture_camera_render_debug_texture_camera_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?render_debug_texture_camera_render_debug_texture_camera_1_evaluate@@YAXFJ_N@Z");
//};

//void render_debug_cheap_particles_render_debug_cheap_particles_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?render_debug_cheap_particles_render_debug_cheap_particles_1_evaluate@@YAXFJ_N@Z");
//};

//void render_debug_rain_occlusion_render_debug_rain_occlusion_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?render_debug_rain_occlusion_render_debug_rain_occlusion_1_evaluate@@YAXFJ_N@Z");
//};

//void render_debug_rain_fog_render_debug_rain_fog_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?render_debug_rain_fog_render_debug_rain_fog_1_evaluate@@YAXFJ_N@Z");
//};

//void debug_rain_toggle_debug_rain_toggle_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?debug_rain_toggle_debug_rain_toggle_0_evaluate@@YAXFJ_N@Z");
//};

//void weather_animate_weather_animate_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?weather_animate_weather_animate_3_evaluate@@YAXFJ_N@Z");
//};

//void weather_animate_force_weather_animate_force_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?weather_animate_force_weather_animate_force_3_evaluate@@YAXFJ_N@Z");
//};

//void debug_structure_cluster_debug_structure_cluster_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?debug_structure_cluster_debug_structure_cluster_2_evaluate@@YAXFJ_N@Z");
//};

//void render_debug_structure_cluster_fog_render_debug_structure_cluster_fog_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?render_debug_structure_cluster_fog_render_debug_structure_cluster_fog_1_evaluate@@YAXFJ_N@Z");
//};

//void render_debug_structure_fog_plane_render_debug_structure_fog_plane_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?render_debug_structure_fog_plane_render_debug_structure_fog_plane_1_evaluate@@YAXFJ_N@Z");
//};

//void render_debug_structure_fog_plane_infinite_extent_render_debug_structure_fog_plane_infinite_extent_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?render_debug_structure_fog_plane_infinite_extent_render_debug_structure_fog_plane_infinite_extent_1_evaluate@@YAXFJ_N@Z");
//};

//void render_debug_structure_fog_zone_render_debug_structure_fog_zone_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?render_debug_structure_fog_zone_render_debug_structure_fog_zone_1_evaluate@@YAXFJ_N@Z");
//};

//void render_debug_structure_fog_zone_floodfill_render_debug_structure_fog_zone_floodfill_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?render_debug_structure_fog_zone_floodfill_render_debug_structure_fog_zone_floodfill_1_evaluate@@YAXFJ_N@Z");
//};

//void render_debug_structure_all_fog_planes_render_debug_structure_all_fog_planes_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?render_debug_structure_all_fog_planes_render_debug_structure_all_fog_planes_1_evaluate@@YAXFJ_N@Z");
//};

//void render_debug_structure_all_cluster_errors_render_debug_structure_all_cluster_errors_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?render_debug_structure_all_cluster_errors_render_debug_structure_all_cluster_errors_1_evaluate@@YAXFJ_N@Z");
//};

//void render_debug_structure_line_opacity_render_debug_structure_line_opacity_4_evaluate(short, long, bool)
//{
//    mangled_ppc("?render_debug_structure_line_opacity_render_debug_structure_line_opacity_4_evaluate@@YAXFJ_N@Z");
//};

//void render_debug_structure_text_opacity_render_debug_structure_text_opacity_4_evaluate(short, long, bool)
//{
//    mangled_ppc("?render_debug_structure_text_opacity_render_debug_structure_text_opacity_4_evaluate@@YAXFJ_N@Z");
//};

//void render_debug_structure_opacity_render_debug_structure_opacity_4_evaluate(short, long, bool)
//{
//    mangled_ppc("?render_debug_structure_opacity_render_debug_structure_opacity_4_evaluate@@YAXFJ_N@Z");
//};

//void render_debug_structure_non_occluded_fog_planes_render_debug_structure_non_occluded_fog_planes_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?render_debug_structure_non_occluded_fog_planes_render_debug_structure_non_occluded_fog_planes_1_evaluate@@YAXFJ_N@Z");
//};

//void render_debug_structure_lightmaps_use_pervertex_render_debug_structure_lightmaps_prefer_pervertex_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?render_debug_structure_lightmaps_use_pervertex_render_debug_structure_lightmaps_prefer_pervertex_0_evaluate@@YAXFJ_N@Z");
//};

//void render_debug_structure_lightmaps_use_reset_render_debug_structure_lightmaps_preference_reset_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?render_debug_structure_lightmaps_use_reset_render_debug_structure_lightmaps_preference_reset_0_evaluate@@YAXFJ_N@Z");
//};

//void render_debug_structure_lightmaps_sample_enable_render_debug_structure_lightmaps_sample_visualization_enable_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?render_debug_structure_lightmaps_sample_enable_render_debug_structure_lightmaps_sample_visualization_enable_0_evaluate@@YAXFJ_N@Z");
//};

//void render_debug_structure_lightmaps_sample_disable_render_debug_structure_lightmaps_sample_visualization_disable_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?render_debug_structure_lightmaps_sample_disable_render_debug_structure_lightmaps_sample_visualization_disable_0_evaluate@@YAXFJ_N@Z");
//};

//void render_debug_query_object_bitmaps_render_debug_query_object_bitmap_usage_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?render_debug_query_object_bitmaps_render_debug_query_object_bitmap_usage_1_evaluate@@YAXFJ_N@Z");
//};

//void render_debug_query_bsp_resources_render_debug_query_bsp_resource_usage_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?render_debug_query_bsp_resources_render_debug_query_bsp_resource_usage_2_evaluate@@YAXFJ_N@Z");
//};

//void render_debug_query_all_object_resources_render_debug_calculate_object_resource_usage_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?render_debug_query_all_object_resources_render_debug_calculate_object_resource_usage_0_evaluate@@YAXFJ_N@Z");
//};

//void render_debug_query_d3d_resources_d3d_resource_tracker_output_allocated_resource_counts_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?render_debug_query_d3d_resources_d3d_resource_tracker_output_allocated_resource_counts_0_evaluate@@YAXFJ_N@Z");
//};

//void render_debug_text_using_simple_font_render_debug_text_using_simple_font_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?render_debug_text_using_simple_font_render_debug_text_using_simple_font_1_evaluate@@YAXFJ_N@Z");
//};

//void render_postprocess_color_tweaking_reset_render_postprocess_reset_color_tweaking_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?render_postprocess_color_tweaking_reset_render_postprocess_reset_color_tweaking_0_evaluate@@YAXFJ_N@Z");
//};

//void render_debug_wrinkle_weights_a_render_debug_wrinkle_weights_a_4_evaluate(short, long, bool)
//{
//    mangled_ppc("?render_debug_wrinkle_weights_a_render_debug_wrinkle_weights_a_4_evaluate@@YAXFJ_N@Z");
//};

//void render_debug_wrinkle_weights_b_render_debug_wrinkle_weights_b_4_evaluate(short, long, bool)
//{
//    mangled_ppc("?render_debug_wrinkle_weights_b_render_debug_wrinkle_weights_b_4_evaluate@@YAXFJ_N@Z");
//};

//void render_debug_wrinkle_weights_from_console_render_debug_wrinkle_weights_from_console_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?render_debug_wrinkle_weights_from_console_render_debug_wrinkle_weights_from_console_1_evaluate@@YAXFJ_N@Z");
//};

//void scenery_animation_start_scenery_animation_start_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?scenery_animation_start_scenery_animation_start_3_evaluate@@YAXFJ_N@Z");
//};

//void scenery_animation_start_loop_scenery_animation_start_loop_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?scenery_animation_start_loop_scenery_animation_start_loop_3_evaluate@@YAXFJ_N@Z");
//};

//void scenery_animation_start_relative_scenery_animation_start_relative_4_evaluate(short, long, bool)
//{
//    mangled_ppc("?scenery_animation_start_relative_scenery_animation_start_relative_4_evaluate@@YAXFJ_N@Z");
//};

//void scenery_animation_start_relative_loop_scenery_animation_start_relative_loop_4_evaluate(short, long, bool)
//{
//    mangled_ppc("?scenery_animation_start_relative_loop_scenery_animation_start_relative_loop_4_evaluate@@YAXFJ_N@Z");
//};

//void scenery_animation_start_at_frame_scenery_animation_start_at_frame_4_evaluate(short, long, bool)
//{
//    mangled_ppc("?scenery_animation_start_at_frame_scenery_animation_start_at_frame_4_evaluate@@YAXFJ_N@Z");
//};

//void scenery_animation_start_relative_at_frame_scenery_animation_start_relative_at_frame_5_evaluate(short, long, bool)
//{
//    mangled_ppc("?scenery_animation_start_relative_at_frame_scenery_animation_start_relative_at_frame_5_evaluate@@YAXFJ_N@Z");
//};

//void scenery_animation_idle_scenery_animation_start_idle_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?scenery_animation_idle_scenery_animation_start_idle_1_evaluate@@YAXFJ_N@Z");
//};

//void scenery_get_animation_time_scenery_animation_get_ticks_remaining_for_scripting_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?scenery_get_animation_time_scenery_animation_get_ticks_remaining_for_scripting_1_evaluate@@YAXFJ_N@Z");
//};

//void unit_can_blink_unit_scripting_can_blink_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_can_blink_unit_scripting_can_blink_2_evaluate@@YAXFJ_N@Z");
//};

//void unit_set_active_camo_unit_scripting_set_active_camo_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_set_active_camo_unit_scripting_set_active_camo_3_evaluate@@YAXFJ_N@Z");
//};

//void unit_open_unit_scripting_open_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_open_unit_scripting_open_1_evaluate@@YAXFJ_N@Z");
//};

//void unit_close_unit_scripting_close_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_close_unit_scripting_close_1_evaluate@@YAXFJ_N@Z");
//};

//void unit_kill_unit_scripting_kill_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_kill_unit_scripting_kill_1_evaluate@@YAXFJ_N@Z");
//};

//void unit_kill_silent_unit_scripting_kill_silent_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_kill_silent_unit_scripting_kill_silent_1_evaluate@@YAXFJ_N@Z");
//};

//void unit_is_emitting_unit_scripting_is_emitting_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_is_emitting_unit_scripting_is_emitting_1_evaluate@@YAXFJ_N@Z");
//};

//void unit_is_emp_stunned_unit_scripting_is_emp_stunned_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_is_emp_stunned_unit_scripting_is_emp_stunned_1_evaluate@@YAXFJ_N@Z");
//};

//void unit_get_custom_animation_time_unit_get_custom_animation_scripting_ticks_remaining_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_get_custom_animation_time_unit_get_custom_animation_scripting_ticks_remaining_1_evaluate@@YAXFJ_N@Z");
//};

//void unit_stop_custom_animation_unit_scripting_stop_custom_animation_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_stop_custom_animation_unit_scripting_stop_custom_animation_1_evaluate@@YAXFJ_N@Z");
//};

//void custom_animation_unit_start_user_animation_4_evaluate(short, long, bool)
//{
//    mangled_ppc("?custom_animation_unit_start_user_animation_4_evaluate@@YAXFJ_N@Z");
//};

//void custom_animation_loop_unit_start_user_animation_loop_4_evaluate(short, long, bool)
//{
//    mangled_ppc("?custom_animation_loop_unit_start_user_animation_loop_4_evaluate@@YAXFJ_N@Z");
//};

//void custom_animation_relative_unit_start_user_animation_relative_5_evaluate(short, long, bool)
//{
//    mangled_ppc("?custom_animation_relative_unit_start_user_animation_relative_5_evaluate@@YAXFJ_N@Z");
//};

//void custom_animation_relative_loop_unit_start_user_animation_relative_loop_5_evaluate(short, long, bool)
//{
//    mangled_ppc("?custom_animation_relative_loop_unit_start_user_animation_relative_loop_5_evaluate@@YAXFJ_N@Z");
//};

//void custom_animation_list_unit_scripting_start_user_animation_list_4_evaluate(short, long, bool)
//{
//    mangled_ppc("?custom_animation_list_unit_scripting_start_user_animation_list_4_evaluate@@YAXFJ_N@Z");
//};

//void unit_custom_animation_at_frame_unit_custom_animation_at_frame_5_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_custom_animation_at_frame_unit_custom_animation_at_frame_5_evaluate@@YAXFJ_N@Z");
//};

//void unit_custom_animation_relative_at_frame_unit_custom_animation_relative_at_frame_6_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_custom_animation_relative_at_frame_unit_custom_animation_relative_at_frame_6_evaluate@@YAXFJ_N@Z");
//};

//void unit_is_playing_custom_animation_unit_is_playing_custom_animation_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_is_playing_custom_animation_unit_is_playing_custom_animation_1_evaluate@@YAXFJ_N@Z");
//};

//void unit_has_mandibles_hidden_unit_has_mandibles_hidden_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_has_mandibles_hidden_unit_has_mandibles_hidden_1_evaluate@@YAXFJ_N@Z");
//};

//void animation_capture_set_file_name_object_animation_capture_set_file_name_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?animation_capture_set_file_name_object_animation_capture_set_file_name_1_evaluate@@YAXFJ_N@Z");
//};

//void animation_capture_set_origin_object_name_object_animation_capture_set_origin_name_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?animation_capture_set_origin_object_name_object_animation_capture_set_origin_name_1_evaluate@@YAXFJ_N@Z");
//};

//void animation_capture_start_recording_object_animation_capture_start_recording_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?animation_capture_start_recording_object_animation_capture_start_recording_0_evaluate@@YAXFJ_N@Z");
//};

//void animation_capture_stop_recording_object_animation_capture_stop_recording_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?animation_capture_stop_recording_object_animation_capture_stop_recording_0_evaluate@@YAXFJ_N@Z");
//};

//void sync_action_create_unit_scripting_create_sync_action_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?sync_action_create_unit_scripting_create_sync_action_2_evaluate@@YAXFJ_N@Z");
//};

//void object_running_sync_action_object_scripting_running_sync_action_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?object_running_sync_action_object_scripting_running_sync_action_2_evaluate@@YAXFJ_N@Z");
//};

//void object_set_custom_animations_hold_on_last_frame_object_set_custom_animations_hold_on_last_frame_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?object_set_custom_animations_hold_on_last_frame_object_set_custom_animations_hold_on_last_frame_1_evaluate@@YAXFJ_N@Z");
//};

//void object_set_custom_animations_prevent_lipsync_head_movement_object_set_custom_animations_prevent_lipsync_head_movement_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?object_set_custom_animations_prevent_lipsync_head_movement_object_set_custom_animations_prevent_lipsync_head_movement_1_evaluate@@YAXFJ_N@Z");
//};

//void preferred_animation_list_add_animation_manager_add_preferred_animation_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?preferred_animation_list_add_animation_manager_add_preferred_animation_2_evaluate@@YAXFJ_N@Z");
//};

//void preferred_animation_list_clear_animation_manager_clear_preferred_animations_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?preferred_animation_list_clear_animation_manager_clear_preferred_animations_0_evaluate@@YAXFJ_N@Z");
//};

//void unit_get_team_index_unit_get_campaign_team_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_get_team_index_unit_get_campaign_team_1_evaluate@@YAXFJ_N@Z");
//};

//void unit_aim_without_turning_unit_scripting_aim_without_turning_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_aim_without_turning_unit_scripting_aim_without_turning_2_evaluate@@YAXFJ_N@Z");
//};

//void unit_set_enterable_by_player_unit_scripting_set_enterable_by_player_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_set_enterable_by_player_unit_scripting_set_enterable_by_player_2_evaluate@@YAXFJ_N@Z");
//};

//void unit_get_enterable_by_player_unit_scripting_get_enterable_by_player_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_get_enterable_by_player_unit_scripting_get_enterable_by_player_1_evaluate@@YAXFJ_N@Z");
//};

//void unit_only_takes_damage_from_players_team_unit_scripting_set_only_takes_damage_from_players_team_bit_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_only_takes_damage_from_players_team_unit_scripting_set_only_takes_damage_from_players_team_bit_2_evaluate@@YAXFJ_N@Z");
//};

//void unit_enter_vehicle_unit_scripting_enter_vehicle_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_enter_vehicle_unit_scripting_enter_vehicle_3_evaluate@@YAXFJ_N@Z");
//};

//void unit_enter_vehicle_immediate_unit_scripting_enter_vehicle_immediate_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_enter_vehicle_immediate_unit_scripting_enter_vehicle_immediate_3_evaluate@@YAXFJ_N@Z");
//};

//void unit_falling_damage_disable_unit_falling_damage_disable_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_falling_damage_disable_unit_falling_damage_disable_2_evaluate@@YAXFJ_N@Z");
//};

//void unit_in_vehicle_type_unit_scripting_unit_in_vehicle_type_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_in_vehicle_type_unit_scripting_unit_in_vehicle_type_2_evaluate@@YAXFJ_N@Z");
//};

//void object_get_turret_count_unit_scripting_object_get_turret_count_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?object_get_turret_count_unit_scripting_object_get_turret_count_1_evaluate@@YAXFJ_N@Z");
//};

//void object_get_turret_unit_scripting_object_get_turret_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?object_get_turret_unit_scripting_object_get_turret_2_evaluate@@YAXFJ_N@Z");
//};

//void unit_board_vehicle_unit_scripting_board_vehicle_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_board_vehicle_unit_scripting_board_vehicle_2_evaluate@@YAXFJ_N@Z");
//};

//void unit_set_emotion_unit_scripting_set_emotion_4_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_set_emotion_unit_scripting_set_emotion_4_evaluate@@YAXFJ_N@Z");
//};

//void unit_set_emotion_by_name_unit_scripting_set_emotion_by_name_4_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_set_emotion_by_name_unit_scripting_set_emotion_by_name_4_evaluate@@YAXFJ_N@Z");
//};

//void unit_enable_eye_tracking_unit_enable_eye_tracking_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_enable_eye_tracking_unit_enable_eye_tracking_2_evaluate@@YAXFJ_N@Z");
//};

//void unit_set_integrated_flashlight_unit_scripting_set_integrated_flashlight_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_set_integrated_flashlight_unit_scripting_set_integrated_flashlight_2_evaluate@@YAXFJ_N@Z");
//};

//void unit_in_vehicle_unit_scripting_in_vehicle_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_in_vehicle_unit_scripting_in_vehicle_1_evaluate@@YAXFJ_N@Z");
//};

//void unit_get_vehicle_unit_scripting_get_vehicle_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_get_vehicle_unit_scripting_get_vehicle_1_evaluate@@YAXFJ_N@Z");
//};

//void vehicle_set_player_interaction_unit_scripting_vehicle_set_unit_seat_interaction_4_evaluate(short, long, bool)
//{
//    mangled_ppc("?vehicle_set_player_interaction_unit_scripting_vehicle_set_unit_seat_interaction_4_evaluate@@YAXFJ_N@Z");
//};

//void vehicle_set_unit_interaction_unit_scripting_vehicle_set_unit_seat_interaction_4_evaluate(short, long, bool)
//{
//    mangled_ppc("?vehicle_set_unit_interaction_unit_scripting_vehicle_set_unit_seat_interaction_4_evaluate@@YAXFJ_N@Z");
//};

//void vehicle_test_seat_unit_list_unit_scripting_vehicle_test_seat_unit_list_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?vehicle_test_seat_unit_list_unit_scripting_vehicle_test_seat_unit_list_3_evaluate@@YAXFJ_N@Z");
//};

//void vehicle_test_seat_unit_unit_scripting_vehicle_test_seat_unit_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?vehicle_test_seat_unit_unit_scripting_vehicle_test_seat_unit_3_evaluate@@YAXFJ_N@Z");
//};

//void vehicle_test_seat_unit_scripting_vehicle_test_seat_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?vehicle_test_seat_unit_scripting_vehicle_test_seat_2_evaluate@@YAXFJ_N@Z");
//};

//void unit_set_prefer_tight_camera_track_unit_set_prefer_tight_camera_track_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_set_prefer_tight_camera_track_unit_set_prefer_tight_camera_track_2_evaluate@@YAXFJ_N@Z");
//};

//void unit_test_seat_unit_scripting_vehicle_test_seat_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_test_seat_unit_scripting_vehicle_test_seat_2_evaluate@@YAXFJ_N@Z");
//};

//void unit_exit_vehicle_unit_scripting_exit_vehicle_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_exit_vehicle_unit_scripting_exit_vehicle_1_evaluate@@YAXFJ_N@Z");
//};

//void unit_exit_vehicle_unit_scripting_exit_vehicle2_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_exit_vehicle_unit_scripting_exit_vehicle2_2_evaluate@@YAXFJ_N@Z");
//};

//void unit_set_maximum_vitality_unit_scripting_set_maximum_vitality_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_set_maximum_vitality_unit_scripting_set_maximum_vitality_3_evaluate@@YAXFJ_N@Z");
//};

//void units_set_maximum_vitality_units_scripting_set_maximum_vitality_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?units_set_maximum_vitality_units_scripting_set_maximum_vitality_3_evaluate@@YAXFJ_N@Z");
//};

//void unit_set_current_vitality_unit_scripting_set_current_vitality_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_set_current_vitality_unit_scripting_set_current_vitality_3_evaluate@@YAXFJ_N@Z");
//};

//void units_set_current_vitality_units_scripting_set_current_vitality_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?units_set_current_vitality_units_scripting_set_current_vitality_3_evaluate@@YAXFJ_N@Z");
//};

//void vehicle_load_magic_vehicle_scripting_load_magic_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?vehicle_load_magic_vehicle_scripting_load_magic_3_evaluate@@YAXFJ_N@Z");
//};

//void vehicle_unload_vehicle_scripting_unload_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?vehicle_unload_vehicle_scripting_unload_2_evaluate@@YAXFJ_N@Z");
//};

//void unit_set_animation_mode_unit_scripting_set_animation_mode_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_set_animation_mode_unit_scripting_set_animation_mode_2_evaluate@@YAXFJ_N@Z");
//};

//void magic_melee_attack_unit_scripting_magic_melee_attack_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?magic_melee_attack_unit_scripting_magic_melee_attack_0_evaluate@@YAXFJ_N@Z");
//};

//void vehicle_riders_unit_scripting_unit_riders_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?vehicle_riders_unit_scripting_unit_riders_1_evaluate@@YAXFJ_N@Z");
//};

//void vehicle_driver_unit_scripting_unit_driver_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?vehicle_driver_unit_scripting_unit_driver_1_evaluate@@YAXFJ_N@Z");
//};

//void vehicle_gunner_unit_scripting_unit_gunner_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?vehicle_gunner_unit_scripting_unit_gunner_1_evaluate@@YAXFJ_N@Z");
//};

//void unit_get_health_unit_scripting_get_health_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_get_health_unit_scripting_get_health_1_evaluate@@YAXFJ_N@Z");
//};

//void unit_get_shield_unit_scripting_get_shield_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_get_shield_unit_scripting_get_shield_1_evaluate@@YAXFJ_N@Z");
//};

//void unit_get_total_grenade_count_unit_scripting_get_grenade_count_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_get_total_grenade_count_unit_scripting_get_grenade_count_1_evaluate@@YAXFJ_N@Z");
//};

//void unit_has_weapon_unit_scripting_has_weapon_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_has_weapon_unit_scripting_has_weapon_2_evaluate@@YAXFJ_N@Z");
//};

//void unit_has_weapon_readied_unit_scripting_has_weapon_readied_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_has_weapon_readied_unit_scripting_has_weapon_readied_2_evaluate@@YAXFJ_N@Z");
//};

//void unit_has_any_equipment_unit_scripting_has_any_equipment_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_has_any_equipment_unit_scripting_has_any_equipment_1_evaluate@@YAXFJ_N@Z");
//};

//void unit_has_equipment_unit_scripting_has_equipment_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_has_equipment_unit_scripting_has_equipment_2_evaluate@@YAXFJ_N@Z");
//};

//void unit_lower_weapon_unit_scripting_lower_weapon_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_lower_weapon_unit_scripting_lower_weapon_2_evaluate@@YAXFJ_N@Z");
//};

//void unit_raise_weapon_unit_scripting_raise_weapon_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_raise_weapon_unit_scripting_raise_weapon_2_evaluate@@YAXFJ_N@Z");
//};

//void unit_drop_support_weapon_unit_scripting_drop_support_weapon_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_drop_support_weapon_unit_scripting_drop_support_weapon_1_evaluate@@YAXFJ_N@Z");
//};

//void unit_spew_action_unit_scripting_spew_action_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_spew_action_unit_scripting_spew_action_1_evaluate@@YAXFJ_N@Z");
//};

//void unit_force_reload_unit_scripting_force_reload_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_force_reload_unit_scripting_force_reload_1_evaluate@@YAXFJ_N@Z");
//};

//void animation_stats_dump_animation_statistics_dump_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?animation_stats_dump_animation_statistics_dump_0_evaluate@@YAXFJ_N@Z");
//};

//void unit_animation_forced_seat_unit_animation_set_forced_seat_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_animation_forced_seat_unit_animation_set_forced_seat_1_evaluate@@YAXFJ_N@Z");
//};

//void unit_doesnt_drop_items_unit_scripting_doesnt_drop_items_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_doesnt_drop_items_unit_scripting_doesnt_drop_items_1_evaluate@@YAXFJ_N@Z");
//};

//void unit_impervious_unit_scripting_impervious_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_impervious_unit_scripting_impervious_2_evaluate@@YAXFJ_N@Z");
//};

//void unit_suspended_unit_scripting_suspended_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_suspended_unit_scripting_suspended_2_evaluate@@YAXFJ_N@Z");
//};

//void unit_add_equipment_unit_add_starting_profile_loadout_4_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_add_equipment_unit_add_starting_profile_loadout_4_evaluate@@YAXFJ_N@Z");
//};

//void weapon_set_primary_barrel_firing_weapon_set_primary_barrel_firing_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?weapon_set_primary_barrel_firing_weapon_set_primary_barrel_firing_2_evaluate@@YAXFJ_N@Z");
//};

//void weapon_hold_trigger_weapon_hold_trigger_hs_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?weapon_hold_trigger_weapon_hold_trigger_hs_3_evaluate@@YAXFJ_N@Z");
//};

//void weapon_enable_warthog_chaingun_light_objects_enable_warthog_chaingun_light_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?weapon_enable_warthog_chaingun_light_objects_enable_warthog_chaingun_light_1_evaluate@@YAXFJ_N@Z");
//};

//void device_set_never_appears_locked_device_set_never_appears_locked_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?device_set_never_appears_locked_device_set_never_appears_locked_2_evaluate@@YAXFJ_N@Z");
//};

//void device_set_power_device_set_power_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?device_set_power_device_set_power_2_evaluate@@YAXFJ_N@Z");
//};

//void device_set_position_transition_time_device_set_position_transition_time_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?device_set_position_transition_time_device_set_position_transition_time_2_evaluate@@YAXFJ_N@Z");
//};

//void device_get_power_device_get_power_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?device_get_power_device_get_power_1_evaluate@@YAXFJ_N@Z");
//};

//void device_set_position_device_set_desired_position_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?device_set_position_device_set_desired_position_2_evaluate@@YAXFJ_N@Z");
//};

//void device_get_position_device_get_position_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?device_get_position_device_get_position_1_evaluate@@YAXFJ_N@Z");
//};

//void device_set_position_immediate_device_set_actual_position_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?device_set_position_immediate_device_set_actual_position_2_evaluate@@YAXFJ_N@Z");
//};

//void device_group_get_device_group_get_value_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?device_group_get_device_group_get_value_1_evaluate@@YAXFJ_N@Z");
//};

//void device_group_set_device_group_set_desired_value_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?device_group_set_device_group_set_desired_value_3_evaluate@@YAXFJ_N@Z");
//};

//void device_group_set_immediate_device_group_set_actual_value_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?device_group_set_immediate_device_group_set_actual_value_2_evaluate@@YAXFJ_N@Z");
//};

//void device_one_sided_set_device_one_sided_set_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?device_one_sided_set_device_one_sided_set_2_evaluate@@YAXFJ_N@Z");
//};

//void device_ignore_player_set_device_ignore_player_set_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?device_ignore_player_set_device_ignore_player_set_2_evaluate@@YAXFJ_N@Z");
//};

//void device_operates_automatically_set_device_operates_automatically_set_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?device_operates_automatically_set_device_operates_automatically_set_2_evaluate@@YAXFJ_N@Z");
//};

//void device_closes_automatically_set_device_closes_automatically_set_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?device_closes_automatically_set_device_closes_automatically_set_2_evaluate@@YAXFJ_N@Z");
//};

//void device_group_change_only_once_more_set_device_group_change_only_once_more_set_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?device_group_change_only_once_more_set_device_group_change_only_once_more_set_2_evaluate@@YAXFJ_N@Z");
//};

//void device_set_position_track_device_set_position_track_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?device_set_position_track_device_set_position_track_3_evaluate@@YAXFJ_N@Z");
//};

//void device_set_overlay_track_device_set_overlay_track_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?device_set_overlay_track_device_set_overlay_track_2_evaluate@@YAXFJ_N@Z");
//};

//void device_animate_position_device_animate_position_6_evaluate(short, long, bool)
//{
//    mangled_ppc("?device_animate_position_device_animate_position_6_evaluate@@YAXFJ_N@Z");
//};

//void device_animate_overlay_device_animate_overlay_5_evaluate(short, long, bool)
//{
//    mangled_ppc("?device_animate_overlay_device_animate_overlay_5_evaluate@@YAXFJ_N@Z");
//};

//void cheat_all_powerups_cheat_all_powerups_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?cheat_all_powerups_cheat_all_powerups_0_evaluate@@YAXFJ_N@Z");
//};

//void cheat_all_weapons_cheat_all_weapons_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?cheat_all_weapons_cheat_all_weapons_0_evaluate@@YAXFJ_N@Z");
//};

//void cheat_all_vehicles_cheat_all_vehicles_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?cheat_all_vehicles_cheat_all_vehicles_0_evaluate@@YAXFJ_N@Z");
//};

//void cheat_teleport_to_camera_cheat_teleport_to_camera_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?cheat_teleport_to_camera_cheat_teleport_to_camera_0_evaluate@@YAXFJ_N@Z");
//};

//void cheat_active_camouflage_cheat_active_camouflage_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?cheat_active_camouflage_cheat_active_camouflage_1_evaluate@@YAXFJ_N@Z");
//};

//void cheat_active_camouflage_by_player_cheat_active_camouflage_by_player_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?cheat_active_camouflage_by_player_cheat_active_camouflage_by_player_2_evaluate@@YAXFJ_N@Z");
//};

//void cheats_load_cheats_load_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?cheats_load_cheats_load_0_evaluate@@YAXFJ_N@Z");
//};

//void drop_safe_cheat_drop_tag_safe_hs_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?drop_safe_cheat_drop_tag_safe_hs_1_evaluate@@YAXFJ_N@Z");
//};

//void drop_cheat_drop_tag_name_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?drop_cheat_drop_tag_name_1_evaluate@@YAXFJ_N@Z");
//};

//void drop_variant_cheat_drop_tag_name_with_variant_hs_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?drop_variant_cheat_drop_tag_name_with_variant_hs_2_evaluate@@YAXFJ_N@Z");
//};

//void drop_permutation_cheat_drop_tag_name_with_permutation_hs_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?drop_permutation_cheat_drop_tag_name_with_permutation_hs_2_evaluate@@YAXFJ_N@Z");
//};

//void update_dropped_tag_permutation_cheat_update_dropped_tag_permutation_hs_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?update_dropped_tag_permutation_cheat_update_dropped_tag_permutation_hs_2_evaluate@@YAXFJ_N@Z");
//};

//void ai_enable_ai_globals_set_ai_active_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_enable_ai_globals_set_ai_active_1_evaluate@@YAXFJ_N@Z");
//};

//void ai_enabled_ai_globals_get_ai_active_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_enabled_ai_globals_get_ai_active_0_evaluate@@YAXFJ_N@Z");
//};

//void ai_grenades_ai_globals_grenades_enabled_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_grenades_ai_globals_grenades_enabled_1_evaluate@@YAXFJ_N@Z");
//};

//void ai_dialogue_enable_ai_globals_dialogue_enable_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_dialogue_enable_ai_globals_dialogue_enable_1_evaluate@@YAXFJ_N@Z");
//};

//void ai_dialogue_updating_enable_ai_globals_dialogue_updating_enable_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_dialogue_updating_enable_ai_globals_dialogue_updating_enable_1_evaluate@@YAXFJ_N@Z");
//};

//void ai_player_dialogue_enable_ai_globals_player_dialogue_enable_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_player_dialogue_enable_ai_globals_player_dialogue_enable_1_evaluate@@YAXFJ_N@Z");
//};

//void ai_actor_dialogue_enable_ai_globals_actor_dialogue_enable_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_actor_dialogue_enable_ai_globals_actor_dialogue_enable_2_evaluate@@YAXFJ_N@Z");
//};

//void ai_actor_dialogue_effect_enable_ai_globals_actor_dialogue_effect_enable_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_actor_dialogue_effect_enable_ai_globals_actor_dialogue_effect_enable_2_evaluate@@YAXFJ_N@Z");
//};

//void ai_infection_suppress_ai_globals_infection_suppress_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_infection_suppress_ai_globals_infection_suppress_1_evaluate@@YAXFJ_N@Z");
//};

//void ai_fast_and_dumb_ai_globals_set_fast_and_dumb_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_fast_and_dumb_ai_globals_set_fast_and_dumb_1_evaluate@@YAXFJ_N@Z");
//};

//void ai_lod_full_detail_actors_ai_globals_set_full_detail_actors_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_lod_full_detail_actors_ai_globals_set_full_detail_actors_1_evaluate@@YAXFJ_N@Z");
//};

//void ai_lod_full_detail_actors_ai_globals_num_full_detail_actors_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_lod_full_detail_actors_ai_globals_num_full_detail_actors_0_evaluate@@YAXFJ_N@Z");
//};

//void ai_force_full_lod_ai_force_full_lod_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_force_full_lod_ai_force_full_lod_1_evaluate@@YAXFJ_N@Z");
//};

//void ai_force_low_lod_ai_force_low_lod_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_force_low_lod_ai_force_low_lod_1_evaluate@@YAXFJ_N@Z");
//};

//void ai_clear_lod_ai_clear_lod_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_clear_lod_ai_clear_lod_1_evaluate@@YAXFJ_N@Z");
//};

//void ai_dialogue_log_reset_ai_dialogue_log_reset_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_dialogue_log_reset_ai_dialogue_log_reset_0_evaluate@@YAXFJ_N@Z");
//};

//void ai_dialogue_log_dump_ai_dialogue_log_dump_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_dialogue_log_dump_ai_dialogue_log_dump_1_evaluate@@YAXFJ_N@Z");
//};

//void ai_get_object_ai_scripting_get_object_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_get_object_ai_scripting_get_object_1_evaluate@@YAXFJ_N@Z");
//};

//void ai_get_unit_ai_scripting_get_unit_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_get_unit_ai_scripting_get_unit_1_evaluate@@YAXFJ_N@Z");
//};

//void ai_get_squad_ai_scripting_get_squad_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_get_squad_ai_scripting_get_squad_1_evaluate@@YAXFJ_N@Z");
//};

//void ai_get_turret_ai_ai_scripting_get_turret_ai_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_get_turret_ai_ai_scripting_get_turret_ai_2_evaluate@@YAXFJ_N@Z");
//};

//void ai_random_smart_point_ai_scripting_random_point_4_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_random_smart_point_ai_scripting_random_point_4_evaluate@@YAXFJ_N@Z");
//};

//void ai_nearest_point_ai_scripting_nearest_point_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_nearest_point_ai_scripting_nearest_point_2_evaluate@@YAXFJ_N@Z");
//};

//void ai_get_point_count_ai_scripting_point_count_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_get_point_count_ai_scripting_point_count_1_evaluate@@YAXFJ_N@Z");
//};

//void ai_point_set_get_point_ai_scripting_point_set_get_point_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_point_set_get_point_ai_scripting_point_set_get_point_2_evaluate@@YAXFJ_N@Z");
//};

//void ai_debug_dump_behavior_tree_ai_scripting_dump_behavior_tree_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_debug_dump_behavior_tree_ai_scripting_dump_behavior_tree_1_evaluate@@YAXFJ_N@Z");
//};

//void ai_place_ai_scripting_place_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_place_ai_scripting_place_1_evaluate@@YAXFJ_N@Z");
//};

//void ai_place_ai_scripting_place2_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_place_ai_scripting_place2_2_evaluate@@YAXFJ_N@Z");
//};

//void ai_place_in_limbo_ai_scripting_place_in_limbo_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_place_in_limbo_ai_scripting_place_in_limbo_1_evaluate@@YAXFJ_N@Z");
//};

//void ai_place_in_limbo_ai_scripting_place_in_limbo2_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_place_in_limbo_ai_scripting_place_in_limbo2_2_evaluate@@YAXFJ_N@Z");
//};

//void ai_place_in_vehicle_ai_scripting_place_in_vehicle_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_place_in_vehicle_ai_scripting_place_in_vehicle_2_evaluate@@YAXFJ_N@Z");
//};

//void ai_cannot_die_ai_scripting_cannot_die_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_cannot_die_ai_scripting_cannot_die_2_evaluate@@YAXFJ_N@Z");
//};

//void ai_vitality_pinned_ai_scripting_vitality_pinned_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_vitality_pinned_ai_scripting_vitality_pinned_1_evaluate@@YAXFJ_N@Z");
//};

//void ai_place_wave_ai_place_wave_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_place_wave_ai_place_wave_2_evaluate@@YAXFJ_N@Z");
//};

//void ai_place_wave_ai_place_wave2_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_place_wave_ai_place_wave2_3_evaluate@@YAXFJ_N@Z");
//};

//void ai_place_wave_in_limbo_ai_place_wave_in_limbo_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_place_wave_in_limbo_ai_place_wave_in_limbo_2_evaluate@@YAXFJ_N@Z");
//};

//void ai_place_wave_in_limbo_ai_place_wave_in_limbo2_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_place_wave_in_limbo_ai_place_wave_in_limbo2_3_evaluate@@YAXFJ_N@Z");
//};

//void ai_set_clump_ai_scripting_set_clump_index_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_set_clump_ai_scripting_set_clump_index_2_evaluate@@YAXFJ_N@Z");
//};

//void ai_designer_clump_perception_range_ai_scripting_set_clump_perception_range_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_designer_clump_perception_range_ai_scripting_set_clump_perception_range_1_evaluate@@YAXFJ_N@Z");
//};

//void ai_designer_clump_targeting_group_ai_scripting_set_clump_targeting_group_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_designer_clump_targeting_group_ai_scripting_set_clump_targeting_group_1_evaluate@@YAXFJ_N@Z");
//};

//void ai_index_from_spawn_formation_ai_scripting_ai_index_from_spawn_formation_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_index_from_spawn_formation_ai_scripting_ai_index_from_spawn_formation_2_evaluate@@YAXFJ_N@Z");
//};

//void ai_resurrect_ai_scripting_resurrect_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_resurrect_ai_scripting_resurrect_1_evaluate@@YAXFJ_N@Z");
//};

//void ai_kill_ai_scripting_kill_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_kill_ai_scripting_kill_1_evaluate@@YAXFJ_N@Z");
//};

//void ai_kill_silent_ai_scripting_kill_silent_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_kill_silent_ai_scripting_kill_silent_1_evaluate@@YAXFJ_N@Z");
//};

//void ai_kill_no_statistics_ai_scripting_kill_no_statistics_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_kill_no_statistics_ai_scripting_kill_no_statistics_1_evaluate@@YAXFJ_N@Z");
//};

//void ai_erase_ai_scripting_erase_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_erase_ai_scripting_erase_1_evaluate@@YAXFJ_N@Z");
//};

//void ai_erase_all_ai_scripting_erase_all_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_erase_all_ai_scripting_erase_all_0_evaluate@@YAXFJ_N@Z");
//};

//void ai_disposable_ai_scripting_disposable_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_disposable_ai_scripting_disposable_2_evaluate@@YAXFJ_N@Z");
//};

//void ai_select_ai_scripting_select_squad_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_select_ai_scripting_select_squad_1_evaluate@@YAXFJ_N@Z");
//};

//void ai_deselect_ai_scripting_deselect_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_deselect_ai_scripting_deselect_0_evaluate@@YAXFJ_N@Z");
//};

//void ai_set_deaf_ai_scripting_set_deaf_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_set_deaf_ai_scripting_set_deaf_2_evaluate@@YAXFJ_N@Z");
//};

//void ai_set_blind_ai_scripting_set_blind_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_set_blind_ai_scripting_set_blind_2_evaluate@@YAXFJ_N@Z");
//};

//void ai_set_weapon_up_ai_scripting_set_weapon_up_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_set_weapon_up_ai_scripting_set_weapon_up_2_evaluate@@YAXFJ_N@Z");
//};

//void ai_flood_disperse_ai_scripting_flood_disperse_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_flood_disperse_ai_scripting_flood_disperse_2_evaluate@@YAXFJ_N@Z");
//};

//void ai_add_navpoint_ai_scripting_set_highlight_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_add_navpoint_ai_scripting_set_highlight_2_evaluate@@YAXFJ_N@Z");
//};

//void ai_magically_see_ai_magically_see_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_magically_see_ai_magically_see_2_evaluate@@YAXFJ_N@Z");
//};

//void ai_magically_see_object_ai_magically_see_object_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_magically_see_object_ai_magically_see_object_2_evaluate@@YAXFJ_N@Z");
//};

//void ai_set_active_camo_ai_scripting_set_active_camo_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_set_active_camo_ai_scripting_set_active_camo_2_evaluate@@YAXFJ_N@Z");
//};

//void ai_suppress_combat_ai_scripting_suppress_combat_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_suppress_combat_ai_scripting_suppress_combat_2_evaluate@@YAXFJ_N@Z");
//};

//void ai_engineer_explode_ai_scripting_engineer_explode_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_engineer_explode_ai_scripting_engineer_explode_1_evaluate@@YAXFJ_N@Z");
//};

//void ai_grunt_kamikaze_ai_scripting_grunt_kamikaze_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_grunt_kamikaze_ai_scripting_grunt_kamikaze_1_evaluate@@YAXFJ_N@Z");
//};

//void ai_squad_enumerate_immigrants_ai_scripting_squad_enumerate_immigrants_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_squad_enumerate_immigrants_ai_scripting_squad_enumerate_immigrants_2_evaluate@@YAXFJ_N@Z");
//};

//void ai_migrate_ai_scripting_migrate_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_migrate_ai_scripting_migrate_2_evaluate@@YAXFJ_N@Z");
//};

//void ai_migrate_persistent_ai_scripting_migrate_forever_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_migrate_persistent_ai_scripting_migrate_forever_2_evaluate@@YAXFJ_N@Z");
//};

//void ai_allegiance_ai_scripting_allegiance_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_allegiance_ai_scripting_allegiance_2_evaluate@@YAXFJ_N@Z");
//};

//void ai_allegiance_remove_ai_scripting_allegiance_remove_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_allegiance_remove_ai_scripting_allegiance_remove_2_evaluate@@YAXFJ_N@Z");
//};

//void ai_allegiance_break_ai_scripting_allegiance_break_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_allegiance_break_ai_scripting_allegiance_break_2_evaluate@@YAXFJ_N@Z");
//};

//void ai_braindead_ai_scripting_braindead_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_braindead_ai_scripting_braindead_2_evaluate@@YAXFJ_N@Z");
//};

//void ai_braindead_by_unit_ai_scripting_braindead_by_unit_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_braindead_by_unit_ai_scripting_braindead_by_unit_2_evaluate@@YAXFJ_N@Z");
//};

//void ai_disregard_ai_scripting_ignore_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_disregard_ai_scripting_ignore_2_evaluate@@YAXFJ_N@Z");
//};

//void ai_disregard_orphans_ai_scripting_disregard_orphans_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_disregard_orphans_ai_scripting_disregard_orphans_1_evaluate@@YAXFJ_N@Z");
//};

//void ai_prefer_target_ai_scripting_prefer_target_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_prefer_target_ai_scripting_prefer_target_2_evaluate@@YAXFJ_N@Z");
//};

//void ai_prefer_target_team_ai_scripting_prefer_target_team_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_prefer_target_team_ai_scripting_prefer_target_team_2_evaluate@@YAXFJ_N@Z");
//};

//void ai_prefer_target_ai_ai_scripting_prefer_target_ai_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_prefer_target_ai_ai_scripting_prefer_target_ai_3_evaluate@@YAXFJ_N@Z");
//};

//void ai_set_targeting_group_ai_scripting_set_targeting_group_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_set_targeting_group_ai_scripting_set_targeting_group_2_evaluate@@YAXFJ_N@Z");
//};

//void ai_set_targeting_group_ai_scripting_set_targeting_group2_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_set_targeting_group_ai_scripting_set_targeting_group2_3_evaluate@@YAXFJ_N@Z");
//};

//void ai_teleport_to_starting_location_if_outside_bsp_ai_scripting_teleport_to_spawn_point_if_outside_bsp_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_teleport_to_starting_location_if_outside_bsp_ai_scripting_teleport_to_spawn_point_if_outside_bsp_1_evaluate@@YAXFJ_N@Z");
//};

//void ai_teleport_to_spawn_point_if_outside_bsp_ai_scripting_teleport_to_spawn_point_if_outside_bsp_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_teleport_to_spawn_point_if_outside_bsp_ai_scripting_teleport_to_spawn_point_if_outside_bsp_1_evaluate@@YAXFJ_N@Z");
//};

//void ai_teleport_ai_scripting_teleport_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_teleport_ai_scripting_teleport_2_evaluate@@YAXFJ_N@Z");
//};

//void ai_bring_forward_ai_scripting_bring_forward_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_bring_forward_ai_scripting_bring_forward_2_evaluate@@YAXFJ_N@Z");
//};

//void ai_renew_ai_scripting_renew_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_renew_ai_scripting_renew_1_evaluate@@YAXFJ_N@Z");
//};

//void ai_force_active_ai_scripting_force_active_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_force_active_ai_scripting_force_active_2_evaluate@@YAXFJ_N@Z");
//};

//void ai_force_active_by_unit_ai_scripting_force_active_by_unit_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_force_active_by_unit_ai_scripting_force_active_by_unit_2_evaluate@@YAXFJ_N@Z");
//};

//void ai_exit_limbo_ai_scripting_exit_limbo_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_exit_limbo_ai_scripting_exit_limbo_1_evaluate@@YAXFJ_N@Z");
//};

//void ai_playfight_ai_scripting_playfight_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_playfight_ai_scripting_playfight_2_evaluate@@YAXFJ_N@Z");
//};

//void ai_reconnect_ai_scripting_reconnect_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_reconnect_ai_scripting_reconnect_0_evaluate@@YAXFJ_N@Z");
//};

//void ai_berserk_ai_scripting_berserk_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_berserk_ai_scripting_berserk_2_evaluate@@YAXFJ_N@Z");
//};

//void ai_set_team_ai_scripting_set_team_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_set_team_ai_scripting_set_team_2_evaluate@@YAXFJ_N@Z");
//};

//void ai_allow_dormant_ai_scripting_allow_dormant_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_allow_dormant_ai_scripting_allow_dormant_2_evaluate@@YAXFJ_N@Z");
//};

//void ai_is_attacking_ai_scripting_is_attacking_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_is_attacking_ai_scripting_is_attacking_1_evaluate@@YAXFJ_N@Z");
//};

//void ai_fighting_count_ai_fighting_count_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_fighting_count_ai_fighting_count_1_evaluate@@YAXFJ_N@Z");
//};

//void ai_living_count_ai_scripting_living_count_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_living_count_ai_scripting_living_count_1_evaluate@@YAXFJ_N@Z");
//};

//void ai_living_fraction_ai_scripting_living_fraction_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_living_fraction_ai_scripting_living_fraction_1_evaluate@@YAXFJ_N@Z");
//};

//void ai_in_vehicle_count_ai_scripting_in_vehicle_count_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_in_vehicle_count_ai_scripting_in_vehicle_count_1_evaluate@@YAXFJ_N@Z");
//};

//void ai_body_count_ai_scripting_body_count_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_body_count_ai_scripting_body_count_1_evaluate@@YAXFJ_N@Z");
//};

//void ai_strength_ai_scripting_strength_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_strength_ai_scripting_strength_1_evaluate@@YAXFJ_N@Z");
//};

//void ai_swarm_count_ai_scripting_swarm_count_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_swarm_count_ai_scripting_swarm_count_1_evaluate@@YAXFJ_N@Z");
//};

//void ai_nonswarm_count_ai_scripting_nonswarm_count_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_nonswarm_count_ai_scripting_nonswarm_count_1_evaluate@@YAXFJ_N@Z");
//};

//void ai_actors_object_list_from_ai_reference_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_actors_object_list_from_ai_reference_1_evaluate@@YAXFJ_N@Z");
//};

//void ai_allegiance_broken_ai_scripting_allegiance_broken_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_allegiance_broken_ai_scripting_allegiance_broken_2_evaluate@@YAXFJ_N@Z");
//};

//void ai_spawn_count_ai_spawn_count_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_spawn_count_ai_spawn_count_1_evaluate@@YAXFJ_N@Z");
//};

//void object_get_ai_object_get_ai_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?object_get_ai_object_get_ai_1_evaluate@@YAXFJ_N@Z");
//};

//void ai_set_task_ai_scripting_set_task_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_set_task_ai_scripting_set_task_3_evaluate@@YAXFJ_N@Z");
//};

//void ai_set_objective_ai_scripting_set_task2_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_set_objective_ai_scripting_set_task2_2_evaluate@@YAXFJ_N@Z");
//};

//void ai_task_status_ai_scripting_task_status_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_task_status_ai_scripting_task_status_1_evaluate@@YAXFJ_N@Z");
//};

//void ai_set_task_condition_ai_scripting_set_task_condition_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_set_task_condition_ai_scripting_set_task_condition_2_evaluate@@YAXFJ_N@Z");
//};

//void ai_leadership_ai_scripting_leadership_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_leadership_ai_scripting_leadership_1_evaluate@@YAXFJ_N@Z");
//};

//void ai_leadership_all_ai_scripting_leadership_all_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_leadership_all_ai_scripting_leadership_all_1_evaluate@@YAXFJ_N@Z");
//};

//void ai_task_count_ai_task_count_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_task_count_ai_task_count_1_evaluate@@YAXFJ_N@Z");
//};

//void ai_reset_objective_ai_scripting_reset_objective_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_reset_objective_ai_scripting_reset_objective_1_evaluate@@YAXFJ_N@Z");
//};

//void ai_squad_patrol_objective_disallow_ai_scripting_objective_patrol_disallow_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_squad_patrol_objective_disallow_ai_scripting_objective_patrol_disallow_2_evaluate@@YAXFJ_N@Z");
//};

//void ai_place_cue_ai_cue_place_by_name_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_place_cue_ai_cue_place_by_name_1_evaluate@@YAXFJ_N@Z");
//};

//void ai_remove_cue_ai_cue_remove_by_name_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_remove_cue_ai_cue_remove_by_name_1_evaluate@@YAXFJ_N@Z");
//};

//void generate_pathfinding_ai_scripting_pathfinding_generate_all_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?generate_pathfinding_ai_scripting_pathfinding_generate_all_0_evaluate@@YAXFJ_N@Z");
//};

//void ai_render_paths_all_ai_scripting_render_paths_all_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_render_paths_all_ai_scripting_render_paths_all_0_evaluate@@YAXFJ_N@Z");
//};

//void ai_render_evaluations_shading_none_ai_render_evaluations_shading_none_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_render_evaluations_shading_none_ai_render_evaluations_shading_none_0_evaluate@@YAXFJ_N@Z");
//};

//void ai_render_evaluations_shading_all_ai_render_evaluations_shading_all_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_render_evaluations_shading_all_ai_render_evaluations_shading_all_0_evaluate@@YAXFJ_N@Z");
//};

//void ai_render_evaluations_shading_ai_render_evaluations_shading_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_render_evaluations_shading_ai_render_evaluations_shading_1_evaluate@@YAXFJ_N@Z");
//};

//void ai_activity_set_ai_scripting_set_activity_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_activity_set_ai_scripting_set_activity_2_evaluate@@YAXFJ_N@Z");
//};

//void ai_activity_abort_ai_scripting_abort_activity_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_activity_abort_ai_scripting_abort_activity_1_evaluate@@YAXFJ_N@Z");
//};

//void ai_object_set_team_ai_scripting_set_object_ownership_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_object_set_team_ai_scripting_set_object_ownership_2_evaluate@@YAXFJ_N@Z");
//};

//void ai_object_set_targeting_bias_ai_scripting_set_object_targeting_bias_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_object_set_targeting_bias_ai_scripting_set_object_targeting_bias_2_evaluate@@YAXFJ_N@Z");
//};

//void ai_object_set_targeting_ranges_ai_scripting_set_object_targeting_ranges_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_object_set_targeting_ranges_ai_scripting_set_object_targeting_ranges_3_evaluate@@YAXFJ_N@Z");
//};

//void ai_object_enable_targeting_from_vehicle_ai_scripting_enable_object_vehicle_targeting_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_object_enable_targeting_from_vehicle_ai_scripting_enable_object_vehicle_targeting_2_evaluate@@YAXFJ_N@Z");
//};

//void ai_object_enable_grenade_attack_ai_scripting_enable_object_grenade_attack_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_object_enable_grenade_attack_ai_scripting_enable_object_grenade_attack_2_evaluate@@YAXFJ_N@Z");
//};

//void ai_vehicle_get_ai_vehicle_get_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_vehicle_get_ai_vehicle_get_1_evaluate@@YAXFJ_N@Z");
//};

//void ai_vehicle_get_from_starting_location_ai_vehicle_get_from_spawn_point_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_vehicle_get_from_starting_location_ai_vehicle_get_from_spawn_point_1_evaluate@@YAXFJ_N@Z");
//};

//void ai_vehicle_get_from_spawn_point_ai_vehicle_get_from_spawn_point_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_vehicle_get_from_spawn_point_ai_vehicle_get_from_spawn_point_1_evaluate@@YAXFJ_N@Z");
//};

//void ai_vehicle_get_squad_count_ai_vehicle_get_squad_count_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_vehicle_get_squad_count_ai_vehicle_get_squad_count_1_evaluate@@YAXFJ_N@Z");
//};

//void ai_vehicle_get_from_squad_ai_vehicle_get_from_squad_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_vehicle_get_from_squad_ai_vehicle_get_from_squad_2_evaluate@@YAXFJ_N@Z");
//};

//void ai_vehicle_reserve_seat_ai_vehicle_reserve_seat_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_vehicle_reserve_seat_ai_vehicle_reserve_seat_3_evaluate@@YAXFJ_N@Z");
//};

//void ai_vehicle_reserve_ai_vehicle_reserve_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_vehicle_reserve_ai_vehicle_reserve_2_evaluate@@YAXFJ_N@Z");
//};

//void ai_player_get_vehicle_squad_ai_player_get_vehicle_squad_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_player_get_vehicle_squad_ai_player_get_vehicle_squad_1_evaluate@@YAXFJ_N@Z");
//};

//void ai_vehicle_count_ai_scripting_vehicle_count_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_vehicle_count_ai_scripting_vehicle_count_1_evaluate@@YAXFJ_N@Z");
//};

//void ai_carrying_player_ai_scripting_carrying_player_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_carrying_player_ai_scripting_carrying_player_1_evaluate@@YAXFJ_N@Z");
//};

//void player_in_vehicle_ai_scripting_player_in_vehicle_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?player_in_vehicle_ai_scripting_player_in_vehicle_1_evaluate@@YAXFJ_N@Z");
//};

//void ai_player_needs_vehicle_ai_scripting_player_needs_vehicle_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_player_needs_vehicle_ai_scripting_player_needs_vehicle_1_evaluate@@YAXFJ_N@Z");
//};

//void ai_player_any_needs_vehicle_ai_scripting_player_any_needs_vehicle_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_player_any_needs_vehicle_ai_scripting_player_any_needs_vehicle_0_evaluate@@YAXFJ_N@Z");
//};

//void ai_vehicle_enter_ai_vehicle_enter_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_vehicle_enter_ai_vehicle_enter_3_evaluate@@YAXFJ_N@Z");
//};

//void ai_vehicle_enter_ai_vehicle_enter2_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_vehicle_enter_ai_vehicle_enter2_2_evaluate@@YAXFJ_N@Z");
//};

//void ai_vehicle_enter_immediate_ai_vehicle_enter_immediate_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_vehicle_enter_immediate_ai_vehicle_enter_immediate_3_evaluate@@YAXFJ_N@Z");
//};

//void ai_vehicle_enter_immediate_ai_vehicle_enter_immediate2_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_vehicle_enter_immediate_ai_vehicle_enter_immediate2_2_evaluate@@YAXFJ_N@Z");
//};

//void ai_enter_squad_vehicles_ai_enter_squad_vehicles_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_enter_squad_vehicles_ai_enter_squad_vehicles_1_evaluate@@YAXFJ_N@Z");
//};

//void ai_vehicle_exit_ai_scripting_exit_vehicle_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_vehicle_exit_ai_scripting_exit_vehicle_2_evaluate@@YAXFJ_N@Z");
//};

//void ai_vehicle_exit_ai_scripting_exit_vehicle2_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_vehicle_exit_ai_scripting_exit_vehicle2_1_evaluate@@YAXFJ_N@Z");
//};

//void vehicle_overturned_ai_vehicle_overturned_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?vehicle_overturned_ai_vehicle_overturned_1_evaluate@@YAXFJ_N@Z");
//};

//void vehicle_flip_ai_vehicle_flip_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?vehicle_flip_ai_vehicle_flip_1_evaluate@@YAXFJ_N@Z");
//};

//void ai_squad_group_get_squad_ai_scripting_squad_group_get_squad_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_squad_group_get_squad_ai_scripting_squad_group_get_squad_2_evaluate@@YAXFJ_N@Z");
//};

//void ai_squad_group_get_squad_count_ai_scripting_squad_group_get_squad_count_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_squad_group_get_squad_count_ai_scripting_squad_group_get_squad_count_1_evaluate@@YAXFJ_N@Z");
//};

//void ai_squad_patrol_enable_squad_patrol_enable_by_name_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_squad_patrol_enable_squad_patrol_enable_by_name_2_evaluate@@YAXFJ_N@Z");
//};

//void ai_combat_status_ai_scripting_combat_status_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_combat_status_ai_scripting_combat_status_1_evaluate@@YAXFJ_N@Z");
//};

//void ai_set_combat_status_ai_scripting_set_combat_status_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_set_combat_status_ai_scripting_set_combat_status_2_evaluate@@YAXFJ_N@Z");
//};

//void flock_start_flock_start_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?flock_start_flock_start_1_evaluate@@YAXFJ_N@Z");
//};

//void flock_stop_flock_stop_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?flock_stop_flock_stop_1_evaluate@@YAXFJ_N@Z");
//};

//void flock_create_ai_scripting_flock_create_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?flock_create_ai_scripting_flock_create_1_evaluate@@YAXFJ_N@Z");
//};

//void flock_delete_ai_scripting_flock_delete_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?flock_delete_ai_scripting_flock_delete_1_evaluate@@YAXFJ_N@Z");
//};

//void flock_destroy_ai_scripting_flock_destroy_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?flock_destroy_ai_scripting_flock_destroy_1_evaluate@@YAXFJ_N@Z");
//};

//void flock_definition_set_ai_scripting_flock_definition_set_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?flock_definition_set_ai_scripting_flock_definition_set_2_evaluate@@YAXFJ_N@Z");
//};

//void flock_unperch_ai_scripting_flock_unperch_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?flock_unperch_ai_scripting_flock_unperch_1_evaluate@@YAXFJ_N@Z");
//};

//void flock_set_targeting_group_ai_scripting_flock_set_targeting_group_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?flock_set_targeting_group_ai_scripting_flock_set_targeting_group_2_evaluate@@YAXFJ_N@Z");
//};

//void flock_destination_set_enabled_ai_scripting_flock_destination_set_enabled_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?flock_destination_set_enabled_ai_scripting_flock_destination_set_enabled_3_evaluate@@YAXFJ_N@Z");
//};

//void flock_destination_set_position_ai_scripting_flock_destination_set_position_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?flock_destination_set_position_ai_scripting_flock_destination_set_position_3_evaluate@@YAXFJ_N@Z");
//};

//void flock_destination_copy_position_ai_scripting_flock_destination_copy_position_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?flock_destination_copy_position_ai_scripting_flock_destination_copy_position_3_evaluate@@YAXFJ_N@Z");
//};

//void drop_ai_ai_scripting_drop_ai_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?drop_ai_ai_scripting_drop_ai_2_evaluate@@YAXFJ_N@Z");
//};

//void mantini_create_runtime_squad_ai_scripting_create_runtime_squad_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?mantini_create_runtime_squad_ai_scripting_create_runtime_squad_1_evaluate@@YAXFJ_N@Z");
//};

//void mantini_create_runtime_point_set_create_runtime_point_set_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?mantini_create_runtime_point_set_create_runtime_point_set_1_evaluate@@YAXFJ_N@Z");
//};

//void mantini_add_runtime_point_to_set_add_runtime_point_to_set_6_evaluate(short, long, bool)
//{
//    mangled_ppc("?mantini_add_runtime_point_to_set_add_runtime_point_to_set_6_evaluate@@YAXFJ_N@Z");
//};

//void mantini_add_runtime_point_to_set_from_camera_add_runtime_point_to_set_from_camera_4_evaluate(short, long, bool)
//{
//    mangled_ppc("?mantini_add_runtime_point_to_set_from_camera_add_runtime_point_to_set_from_camera_4_evaluate@@YAXFJ_N@Z");
//};

//void mantini_add_starting_location_to_squad_add_spawn_point_to_squad_from_pointref_4_evaluate(short, long, bool)
//{
//    mangled_ppc("?mantini_add_starting_location_to_squad_add_spawn_point_to_squad_from_pointref_4_evaluate@@YAXFJ_N@Z");
//};

//void mantini_add_starting_location_to_squad_from_camera_add_spawn_point_to_squad_from_camera_4_evaluate(short, long, bool)
//{
//    mangled_ppc("?mantini_add_starting_location_to_squad_from_camera_add_spawn_point_to_squad_from_camera_4_evaluate@@YAXFJ_N@Z");
//};

//void mantini_add_cell_to_runtime_squad_ai_scripting_add_cell_to_runtime_squad_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?mantini_add_cell_to_runtime_squad_ai_scripting_add_cell_to_runtime_squad_2_evaluate@@YAXFJ_N@Z");
//};

//void mantini_get_runtime_squad_cell_count_ai_scripting_get_runtime_squad_cell_count_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?mantini_get_runtime_squad_cell_count_ai_scripting_get_runtime_squad_cell_count_1_evaluate@@YAXFJ_N@Z");
//};

//void mantini_set_squad_team_set_squad_team_index_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?mantini_set_squad_team_set_squad_team_index_2_evaluate@@YAXFJ_N@Z");
//};

//void mantini_set_spawn_point_weapons_ai_scripting_set_spawn_point_weapons_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?mantini_set_spawn_point_weapons_ai_scripting_set_spawn_point_weapons_3_evaluate@@YAXFJ_N@Z");
//};

//void mantini_set_spawn_point_vehicle_ai_scripting_set_spawn_point_vehicle_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?mantini_set_spawn_point_vehicle_ai_scripting_set_spawn_point_vehicle_2_evaluate@@YAXFJ_N@Z");
//};

//void mantini_set_spawn_point_variants_set_spawn_point_variants_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?mantini_set_spawn_point_variants_set_spawn_point_variants_3_evaluate@@YAXFJ_N@Z");
//};

//void mantini_set_squad_cell_spawn_count_set_cell_spawn_count_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?mantini_set_squad_cell_spawn_count_set_cell_spawn_count_3_evaluate@@YAXFJ_N@Z");
//};

//void mantini_clear_runtime_squads_ai_scripting_clear_runtime_squads_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?mantini_clear_runtime_squads_ai_scripting_clear_runtime_squads_0_evaluate@@YAXFJ_N@Z");
//};

//void mantini_remove_pointset_ai_scripting_clear_runtime_pointsets_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?mantini_remove_pointset_ai_scripting_clear_runtime_pointsets_1_evaluate@@YAXFJ_N@Z");
//};

//void mantini_get_loaded_map_name_ai_scripting_get_current_map_name_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?mantini_get_loaded_map_name_ai_scripting_get_current_map_name_0_evaluate@@YAXFJ_N@Z");
//};

//void ai_verify_tags_ai_scripting_verify_tags_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_verify_tags_ai_scripting_verify_tags_0_evaluate@@YAXFJ_N@Z");
//};

//void ai_wall_lean_ai_scripting_wall_lean_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_wall_lean_ai_scripting_wall_lean_1_evaluate@@YAXFJ_N@Z");
//};

//void ai_fire_dialogue_event_ai_scripting_fire_dialogue_event_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_fire_dialogue_event_ai_scripting_fire_dialogue_event_3_evaluate@@YAXFJ_N@Z");
//};

//void ai_play_vocalization_ai_scripting_play_vocalization_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_play_vocalization_ai_scripting_play_vocalization_1_evaluate@@YAXFJ_N@Z");
//};

//void ai_play_vocalization_on_team_ai_scripting_play_vocalization_on_team_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_play_vocalization_on_team_ai_scripting_play_vocalization_on_team_2_evaluate@@YAXFJ_N@Z");
//};

//void ai_play_line_ai_play_line_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_play_line_ai_play_line_2_evaluate@@YAXFJ_N@Z");
//};

//void ai_play_line_at_player_ai_play_line_at_player_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_play_line_at_player_ai_play_line_at_player_2_evaluate@@YAXFJ_N@Z");
//};

//void ai_play_line_on_object_ai_play_line_on_object_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_play_line_on_object_ai_play_line_on_object_2_evaluate@@YAXFJ_N@Z");
//};

//void ai_play_line_on_object_for_team_ai_play_line_on_object_for_team_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_play_line_on_object_for_team_ai_play_line_on_object_for_team_3_evaluate@@YAXFJ_N@Z");
//};

//void ai_play_line_on_point_set_ai_play_line_on_point_set_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_play_line_on_point_set_ai_play_line_on_point_set_3_evaluate@@YAXFJ_N@Z");
//};

//void ai_play_line_on_point_set_ai_play_line_on_point_set2_4_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_play_line_on_point_set_ai_play_line_on_point_set2_4_evaluate@@YAXFJ_N@Z");
//};

//void campaign_metagame_time_pause_campaign_metagame_time_pause_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?campaign_metagame_time_pause_campaign_metagame_time_pause_1_evaluate@@YAXFJ_N@Z");
//};

//void campaign_metagame_award_points_campaign_metagame_award_points_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?campaign_metagame_award_points_campaign_metagame_award_points_2_evaluate@@YAXFJ_N@Z");
//};

//void campaign_metagame_award_skull_campaign_metagame_award_skull_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?campaign_metagame_award_skull_campaign_metagame_award_skull_2_evaluate@@YAXFJ_N@Z");
//};

//void campaign_metagame_enabled_campaign_metagame_enabled_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?campaign_metagame_enabled_campaign_metagame_enabled_0_evaluate@@YAXFJ_N@Z");
//};

//void campaign_survival_enabled_game_is_survival_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?campaign_survival_enabled_game_is_survival_0_evaluate@@YAXFJ_N@Z");
//};

//void thespian_performance_test_performance_scripting_test_by_name_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?thespian_performance_test_performance_scripting_test_by_name_1_evaluate@@YAXFJ_N@Z");
//};

//void thespian_folder_activate_performance_scripting_folder_activate_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?thespian_folder_activate_performance_scripting_folder_activate_1_evaluate@@YAXFJ_N@Z");
//};

//void thespian_folder_deactivate_performance_scripting_folder_deactivate_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?thespian_folder_deactivate_performance_scripting_folder_deactivate_1_evaluate@@YAXFJ_N@Z");
//};

//void thespian_performance_activate_performance_scripting_activate_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?thespian_performance_activate_performance_scripting_activate_1_evaluate@@YAXFJ_N@Z");
//};

//void thespian_performance_setup_and_begin_performance_scripting_setup_and_begin_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?thespian_performance_setup_and_begin_performance_scripting_setup_and_begin_3_evaluate@@YAXFJ_N@Z");
//};

//void performance_new_performance_scripting_new_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?performance_new_performance_scripting_new_2_evaluate@@YAXFJ_N@Z");
//};

//void cast_squad_in_performance_performance_scripting_cast_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?cast_squad_in_performance_performance_scripting_cast_2_evaluate@@YAXFJ_N@Z");
//};

//void performance_begin_performance_scripting_begin_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?performance_begin_performance_scripting_begin_1_evaluate@@YAXFJ_N@Z");
//};

//void thespian_performance_kill_by_name_performance_scripting_kill_by_name_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?thespian_performance_kill_by_name_performance_scripting_kill_by_name_1_evaluate@@YAXFJ_N@Z");
//};

//void thespian_performance_kill_by_ai_performance_scripting_kill_by_ai_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?thespian_performance_kill_by_ai_performance_scripting_kill_by_ai_1_evaluate@@YAXFJ_N@Z");
//};

//void thespian_fake_task_transition_performance_scripting_fake_task_transition_event_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?thespian_fake_task_transition_performance_scripting_fake_task_transition_event_2_evaluate@@YAXFJ_N@Z");
//};

//void performance_play_line_by_id_thread_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?performance_play_line_by_id_thread_1_evaluate@@YAXFJ_N@Z");
//};

//void performance_play_line_thread_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?performance_play_line_thread_1_evaluate@@YAXFJ_N@Z");
//};

//void performance_get_actor_by_index_thread_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?performance_get_actor_by_index_thread_1_evaluate@@YAXFJ_N@Z");
//};

//void performance_get_actor_thread_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?performance_get_actor_thread_1_evaluate@@YAXFJ_N@Z");
//};

//void performance_get_actor_count_thread_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?performance_get_actor_count_thread_0_evaluate@@YAXFJ_N@Z");
//};

//void performance_get_role_count_thread_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?performance_get_role_count_thread_0_evaluate@@YAXFJ_N@Z");
//};

//void performance_get_line_count_thread_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?performance_get_line_count_thread_0_evaluate@@YAXFJ_N@Z");
//};

//void performance_get_last_played_line_index_thread_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?performance_get_last_played_line_index_thread_0_evaluate@@YAXFJ_N@Z");
//};

//void thespian_performance_is_blocked_thread_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?thespian_performance_is_blocked_thread_0_evaluate@@YAXFJ_N@Z");
//};

//void actor_from_performance_performance_scripting_get_actor_by_role_name_from_performance_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?actor_from_performance_performance_scripting_get_actor_by_role_name_from_performance_2_evaluate@@YAXFJ_N@Z");
//};

//void ai_player_add_fireteam_squad_fire_team_scripting_add_player_squad_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_player_add_fireteam_squad_fire_team_scripting_add_player_squad_2_evaluate@@YAXFJ_N@Z");
//};

//void ai_player_remove_fireteam_squad_fire_team_scripting_remove_player_squad_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_player_remove_fireteam_squad_fire_team_scripting_remove_player_squad_2_evaluate@@YAXFJ_N@Z");
//};

//void ai_player_set_fireteam_max_fire_team_scripting_set_max_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_player_set_fireteam_max_fire_team_scripting_set_max_2_evaluate@@YAXFJ_N@Z");
//};

//void ai_player_set_fireteam_no_max_fire_team_scripting_set_no_max_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_player_set_fireteam_no_max_fire_team_scripting_set_no_max_1_evaluate@@YAXFJ_N@Z");
//};

//void ai_player_set_fireteam_max_squad_absorb_distance_fire_team_scripting_set_max_squad_absorb_distance_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_player_set_fireteam_max_squad_absorb_distance_fire_team_scripting_set_max_squad_absorb_distance_2_evaluate@@YAXFJ_N@Z");
//};

//void ai_set_fireteam_absorber_ai_scripting_set_fireteam_absorber_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_set_fireteam_absorber_ai_scripting_set_fireteam_absorber_2_evaluate@@YAXFJ_N@Z");
//};

//void ai_set_fireteam_fallback_squad_fire_team_scripting_set_fallback_squad_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_set_fireteam_fallback_squad_fire_team_scripting_set_fallback_squad_2_evaluate@@YAXFJ_N@Z");
//};

//void ai_is_in_fireteam_fire_team_scripting_is_ai_in_fireteam_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_is_in_fireteam_fire_team_scripting_is_ai_in_fireteam_1_evaluate@@YAXFJ_N@Z");
//};

//void cs_run_command_script_ai_attach_cs_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_run_command_script_ai_attach_cs_2_evaluate@@YAXFJ_N@Z");
//};

//void cs_queue_command_script_ai_queue_cs_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_queue_command_script_ai_queue_cs_2_evaluate@@YAXFJ_N@Z");
//};

//void cs_stack_command_script_ai_stack_cs_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_stack_command_script_ai_stack_cs_2_evaluate@@YAXFJ_N@Z");
//};

//void vs_cast_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?vs_cast_1_evaluate@@YAXFJ_N@Z");
//};

//void vs_cast_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?vs_cast_2_evaluate@@YAXFJ_N@Z");
//};

//void vs_cast_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?vs_cast_3_evaluate@@YAXFJ_N@Z");
//};

//void vs_cast_4_evaluate(short, long, bool)
//{
//    mangled_ppc("?vs_cast_4_evaluate@@YAXFJ_N@Z");
//};

//void vs_cast_5_evaluate(short, long, bool)
//{
//    mangled_ppc("?vs_cast_5_evaluate@@YAXFJ_N@Z");
//};

//void vs_cast_6_evaluate(short, long, bool)
//{
//    mangled_ppc("?vs_cast_6_evaluate@@YAXFJ_N@Z");
//};

//void vs_cast_7_evaluate(short, long, bool)
//{
//    mangled_ppc("?vs_cast_7_evaluate@@YAXFJ_N@Z");
//};

//void vs_role_thread_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?vs_role_thread_1_evaluate@@YAXFJ_N@Z");
//};

//void cs_abort_on_alert_thread_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_abort_on_alert_thread_1_evaluate@@YAXFJ_N@Z");
//};

//void cs_abort_on_damage_thread_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_abort_on_damage_thread_1_evaluate@@YAXFJ_N@Z");
//};

//void cs_abort_on_combat_status_thread_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_abort_on_combat_status_thread_1_evaluate@@YAXFJ_N@Z");
//};

//void cs_abort_on_vehicle_exit_thread_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_abort_on_vehicle_exit_thread_1_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_abort_on_alert2_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_abort_on_alert2_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_abort_on_damage2_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_abort_on_damage2_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_abort_on_combat_status2_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_abort_on_combat_status2_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_abort_on_vehicle_exit2_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_abort_on_vehicle_exit2_evaluate@@YAXFJ_N@Z");
//};

//void cs_command_script_running_cs_command_script_running_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_command_script_running_cs_command_script_running_2_evaluate@@YAXFJ_N@Z");
//};

//void cs_command_script_attached_cs_command_script_attached_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_command_script_attached_cs_command_script_attached_2_evaluate@@YAXFJ_N@Z");
//};

//void cs_number_queued_cs_number_queued_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_number_queued_cs_number_queued_1_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_moving_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_moving_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_fly_to_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_fly_to_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_fly_to2_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_fly_to2_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_fly_to_and_face_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_fly_to_and_face_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_fly_to_and_face2_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_fly_to_and_face2_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_fly_by_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_fly_by_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_fly_by2_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_fly_by2_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_go_to_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_go_to_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_go_to2_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_go_to2_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_go_by_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_go_by_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_go_by2_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_go_by2_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_go_to_and_face_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_go_to_and_face_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_go_to_and_posture_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_go_to_and_posture_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_flying_attach_to_spline_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_flying_attach_to_spline_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_go_to_nearest_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_go_to_nearest_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_move_in_direction_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_move_in_direction_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_move_towards_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_move_towards_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_move_towards2_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_move_towards2_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_move_towards_point_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_move_towards_point_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_swarm_to_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_swarm_to_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_swarm_from_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_swarm_from_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_pause_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_pause_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_grenade_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_grenade_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_use_equipment_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_use_equipment_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_jump_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_jump_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_jump_to_point_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_jump_to_point_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_vocalize_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_vocalize_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_play_sound_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_play_sound_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_play_sound2_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_play_sound2_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_play_sound3_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_play_sound3_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_action_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_action_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_action_at_object_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_action_at_object_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_action_at_player_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_action_at_player_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_start_custom_animation_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_start_custom_animation_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_start_custom_animation2_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_start_custom_animation2_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_start_custom_animation_death_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_start_custom_animation_death_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_start_custom_animation_death2_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_start_custom_animation_death2_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_start_looping_custom_animation_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_start_looping_custom_animation_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_start_looping_custom_animation2_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_start_looping_custom_animation2_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_play_line_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_play_line_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_die_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_die_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_deploy_turret_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_deploy_turret_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_approach_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_approach_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_approach_player_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_approach_player_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_go_to_vehicle_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_go_to_vehicle_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_go_to_vehicle2_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_go_to_vehicle2_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_set_style_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_set_style_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_force_combat_status_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_force_combat_status_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_enable_targeting_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_enable_targeting_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_enable_looking_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_enable_looking_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_enable_moving_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_enable_moving_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_enable_dialogue_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_enable_dialogue_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_suppress_activity_termination_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_suppress_activity_termination_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_suppress_dialogue_global_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_suppress_dialogue_global_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_look_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_look_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_look_player_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_look_player_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_look_object_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_look_object_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_aim_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_aim_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_aim_player_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_aim_player_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_aim_object_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_aim_object_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_face_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_face_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_face_player_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_face_player_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_face_object_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_face_object_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_shoot_at_target_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_shoot_at_target_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_shoot_at_target2_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_shoot_at_target2_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_shoot_at_point_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_shoot_at_point_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_shoot_secondary_trigger_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_shoot_secondary_trigger_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_lower_weapon_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_lower_weapon_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_vehicle_speed_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_vehicle_speed_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_vehicle_speed_instantaneous_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_vehicle_speed_instantaneous_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_boost_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_boost_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_turn_sharpness_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_turn_sharpness_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_enable_pathfinding_failsafe_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_enable_pathfinding_failsafe_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_set_pathfinding_radius_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_set_pathfinding_radius_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_ignore_obstacles_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_ignore_obstacles_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_approach_stop_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_approach_stop_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_push_stance_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_push_stance_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_crouch_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_crouch_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_crouch2_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_crouch2_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_walk_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_walk_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_posture_set_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_posture_set_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_posture_exit_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_posture_exit_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_stow_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_stow_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_teleport_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_teleport_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_stop_custom_animation_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_stop_custom_animation_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_stop_sound_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_stop_sound_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_player_melee_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_player_melee_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_melee_direction_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_melee_direction_evaluate@@YAXFJ_N@Z");
//};

//void cs_cs_smash_direction_evaluate(short, long, bool)
//{
//    mangled_ppc("?cs_cs_smash_direction_evaluate@@YAXFJ_N@Z");
//};

//void camera_control_director_script_camera_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?camera_control_director_script_camera_1_evaluate@@YAXFJ_N@Z");
//};

//void camera_set_scripted_camera_set_absolute_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?camera_set_scripted_camera_set_absolute_2_evaluate@@YAXFJ_N@Z");
//};

//void camera_set_relative_scripted_camera_set_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?camera_set_relative_scripted_camera_set_3_evaluate@@YAXFJ_N@Z");
//};

//void camera_set_animation_scripted_camera_set_animation_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?camera_set_animation_scripted_camera_set_animation_2_evaluate@@YAXFJ_N@Z");
//};

//void camera_set_animation_relative_scripted_camera_set_animation_relative_4_evaluate(short, long, bool)
//{
//    mangled_ppc("?camera_set_animation_relative_scripted_camera_set_animation_relative_4_evaluate@@YAXFJ_N@Z");
//};

//void camera_set_animation_with_speed_scripted_camera_set_animation_with_speed_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?camera_set_animation_with_speed_scripted_camera_set_animation_with_speed_3_evaluate@@YAXFJ_N@Z");
//};

//void camera_set_animation_relative_with_speed_scripted_camera_set_animation_relative_with_speed_5_evaluate(short, long, bool)
//{
//    mangled_ppc("?camera_set_animation_relative_with_speed_scripted_camera_set_animation_relative_with_speed_5_evaluate@@YAXFJ_N@Z");
//};

//void camera_set_animation_relative_with_speed_loop_scripted_camera_set_animation_relative_with_speed_loop_6_evaluate(short, long, bool)
//{
//    mangled_ppc("?camera_set_animation_relative_with_speed_loop_scripted_camera_set_animation_relative_with_speed_loop_6_evaluate@@YAXFJ_N@Z");
//};

//void camera_set_animation_relative_with_speed_loop_offset_scripted_camera_set_animation_relative_with_speed_loop_offset_7_evaluate(short, long, bool)
//{
//    mangled_ppc("?camera_set_animation_relative_with_speed_loop_offset_scripted_camera_set_animation_relative_with_speed_loop_offset_7_evaluate@@YAXFJ_N@Z");
//};

//void camera_predict_resources_at_frame_scripted_camera_predict_resources_at_frame_5_evaluate(short, long, bool)
//{
//    mangled_ppc("?camera_predict_resources_at_frame_scripted_camera_predict_resources_at_frame_5_evaluate@@YAXFJ_N@Z");
//};

//void camera_predict_resources_at_point_scripted_camera_predict_resources_at_point_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?camera_predict_resources_at_point_scripted_camera_predict_resources_at_point_1_evaluate@@YAXFJ_N@Z");
//};

//void camera_set_first_person_scripted_camera_set_first_person_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?camera_set_first_person_scripted_camera_set_first_person_1_evaluate@@YAXFJ_N@Z");
//};

//void camera_set_cinematic_scripted_camera_set_cinematic_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?camera_set_cinematic_scripted_camera_set_cinematic_0_evaluate@@YAXFJ_N@Z");
//};

//void camera_set_cinematic_scene_scripted_camera_set_cinematic_scene_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?camera_set_cinematic_scene_scripted_camera_set_cinematic_scene_3_evaluate@@YAXFJ_N@Z");
//};

//void camera_place_relative_scripted_camera_set_placement_relative_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?camera_place_relative_scripted_camera_set_placement_relative_1_evaluate@@YAXFJ_N@Z");
//};

//void camera_place_worldspace_scripted_camera_set_placement_absolute_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?camera_place_worldspace_scripted_camera_set_placement_absolute_0_evaluate@@YAXFJ_N@Z");
//};

//void camera_time_scripted_camera_time_in_hs_ticks_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?camera_time_scripted_camera_time_in_hs_ticks_0_evaluate@@YAXFJ_N@Z");
//};

//void camera_set_field_of_view_scripted_camera_set_field_of_view_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?camera_set_field_of_view_scripted_camera_set_field_of_view_2_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_camera_set_easing_in_cinematic_camera_set_easing_in_6_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_camera_set_easing_in_cinematic_camera_set_easing_in_6_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_camera_set_easing_out_cinematic_camera_set_easing_out_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_camera_set_easing_out_cinematic_camera_set_easing_out_1_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_print_cinematic_print_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_print_cinematic_print_1_evaluate@@YAXFJ_N@Z");
//};

//void camera_set_pan_scripted_camera_set_pan_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?camera_set_pan_scripted_camera_set_pan_2_evaluate@@YAXFJ_N@Z");
//};

//void camera_pan_scripted_camera_pan_7_evaluate(short, long, bool)
//{
//    mangled_ppc("?camera_pan_scripted_camera_pan_7_evaluate@@YAXFJ_N@Z");
//};

//void debug_camera_save_director_save_camera_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?debug_camera_save_director_save_camera_0_evaluate@@YAXFJ_N@Z");
//};

//void debug_camera_load_director_load_camera_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?debug_camera_load_director_load_camera_0_evaluate@@YAXFJ_N@Z");
//};

//void debug_camera_save_name_director_save_camera_named_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?debug_camera_save_name_director_save_camera_named_1_evaluate@@YAXFJ_N@Z");
//};

//void debug_camera_load_name_director_load_camera_named_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?debug_camera_load_name_director_load_camera_named_1_evaluate@@YAXFJ_N@Z");
//};

//void debug_camera_save_simple_name_director_save_camera_simple_name_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?debug_camera_save_simple_name_director_save_camera_simple_name_1_evaluate@@YAXFJ_N@Z");
//};

//void debug_camera_load_simple_name_director_load_camera_simple_name_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?debug_camera_load_simple_name_director_load_camera_simple_name_1_evaluate@@YAXFJ_N@Z");
//};

//void debug_camera_load_text_director_load_camera_text_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?debug_camera_load_text_director_load_camera_text_1_evaluate@@YAXFJ_N@Z");
//};

//void director_debug_camera_director_debug_camera_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?director_debug_camera_director_debug_camera_1_evaluate@@YAXFJ_N@Z");
//};

//void director_print_camera_transform_director_print_camera_transform_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?director_print_camera_transform_director_print_camera_transform_1_evaluate@@YAXFJ_N@Z");
//};

//void director_print_deterministic_camera_transform_director_print_deterministic_camera_transform_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?director_print_deterministic_camera_transform_director_print_deterministic_camera_transform_1_evaluate@@YAXFJ_N@Z");
//};

//void game_difficulty_get_game_difficulty_level_get_ignore_easy_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?game_difficulty_get_game_difficulty_level_get_ignore_easy_0_evaluate@@YAXFJ_N@Z");
//};

//void game_difficulty_get_real_game_difficulty_level_get_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?game_difficulty_get_real_game_difficulty_level_get_0_evaluate@@YAXFJ_N@Z");
//};

//void game_insertion_point_get_game_insertion_point_get_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?game_insertion_point_get_game_insertion_point_get_0_evaluate@@YAXFJ_N@Z");
//};

//void pvs_set_object_game_pvs_scripted_set_object_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?pvs_set_object_game_pvs_scripted_set_object_1_evaluate@@YAXFJ_N@Z");
//};

//void pvs_set_camera_game_pvs_scripted_set_camera_point_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?pvs_set_camera_game_pvs_scripted_set_camera_point_1_evaluate@@YAXFJ_N@Z");
//};

//void pvs_clear_game_pvs_scripted_clear_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?pvs_clear_game_pvs_scripted_clear_0_evaluate@@YAXFJ_N@Z");
//};

//void pvs_reset_game_pvs_reset_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?pvs_reset_game_pvs_reset_0_evaluate@@YAXFJ_N@Z");
//};

//void players_unzoom_all_player_control_unzoom_all_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?players_unzoom_all_player_control_unzoom_all_0_evaluate@@YAXFJ_N@Z");
//};

//void player_enable_input_player_input_enable_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?player_enable_input_player_input_enable_1_evaluate@@YAXFJ_N@Z");
//};

//void player_disable_movement_player_input_mostly_inhibit_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?player_disable_movement_player_input_mostly_inhibit_1_evaluate@@YAXFJ_N@Z");
//};

//void player_disable_weapon_pickup_player_weapon_pickup_inhibit_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?player_disable_weapon_pickup_player_weapon_pickup_inhibit_1_evaluate@@YAXFJ_N@Z");
//};

//void player_night_vision_on_player_night_vision_on_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?player_night_vision_on_player_night_vision_on_0_evaluate@@YAXFJ_N@Z");
//};

//void unit_night_vision_on_unit_night_vision_on_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_night_vision_on_unit_night_vision_on_1_evaluate@@YAXFJ_N@Z");
//};

//void player_active_camouflage_on_player_active_camouflage_on_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?player_active_camouflage_on_player_active_camouflage_on_0_evaluate@@YAXFJ_N@Z");
//};

//void player_camera_control_scripted_player_control_set_camera_control_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?player_camera_control_scripted_player_control_set_camera_control_1_evaluate@@YAXFJ_N@Z");
//};

//void player_action_test_reset_player_control_action_test_reset_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?player_action_test_reset_player_control_action_test_reset_0_evaluate@@YAXFJ_N@Z");
//};

//void player_action_test_primary_trigger_player_control_action_test_primary_trigger_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?player_action_test_primary_trigger_player_control_action_test_primary_trigger_0_evaluate@@YAXFJ_N@Z");
//};

//void player_action_test_grenade_trigger_player_control_action_test_grenade_trigger_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?player_action_test_grenade_trigger_player_control_action_test_grenade_trigger_0_evaluate@@YAXFJ_N@Z");
//};

//void player_action_test_vision_trigger_player_control_action_test_vision_trigger_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?player_action_test_vision_trigger_player_control_action_test_vision_trigger_0_evaluate@@YAXFJ_N@Z");
//};

//void player_action_test_rotate_weapons_player_control_action_test_rotate_weapons_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?player_action_test_rotate_weapons_player_control_action_test_rotate_weapons_0_evaluate@@YAXFJ_N@Z");
//};

//void player_action_test_rotate_grenades_player_control_action_test_rotate_grenades_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?player_action_test_rotate_grenades_player_control_action_test_rotate_grenades_0_evaluate@@YAXFJ_N@Z");
//};

//void player_action_test_jump_player_control_action_test_jump_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?player_action_test_jump_player_control_action_test_jump_0_evaluate@@YAXFJ_N@Z");
//};

//void player_action_test_equipment_player_control_action_test_equipment_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?player_action_test_equipment_player_control_action_test_equipment_0_evaluate@@YAXFJ_N@Z");
//};

//void player_action_test_context_primary_player_control_action_test_context_primary_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?player_action_test_context_primary_player_control_action_test_context_primary_0_evaluate@@YAXFJ_N@Z");
//};

//void player_action_test_vehicle_trick_primary_player_control_action_test_vehicle_trick_primary_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?player_action_test_vehicle_trick_primary_player_control_action_test_vehicle_trick_primary_0_evaluate@@YAXFJ_N@Z");
//};

//void player_action_test_vehicle_trick_secondary_player_control_action_test_vehicle_trick_secondary_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?player_action_test_vehicle_trick_secondary_player_control_action_test_vehicle_trick_secondary_0_evaluate@@YAXFJ_N@Z");
//};

//void player_action_test_melee_player_control_action_test_melee_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?player_action_test_melee_player_control_action_test_melee_0_evaluate@@YAXFJ_N@Z");
//};

//void player_action_test_action_player_control_action_test_action_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?player_action_test_action_player_control_action_test_action_0_evaluate@@YAXFJ_N@Z");
//};

//void player_action_test_accept_player_control_action_test_accept_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?player_action_test_accept_player_control_action_test_accept_0_evaluate@@YAXFJ_N@Z");
//};

//void player_action_test_cancel_player_control_action_test_cancel_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?player_action_test_cancel_player_control_action_test_cancel_0_evaluate@@YAXFJ_N@Z");
//};

//void player_action_test_look_relative_up_player_control_action_test_look_relative_up_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?player_action_test_look_relative_up_player_control_action_test_look_relative_up_0_evaluate@@YAXFJ_N@Z");
//};

//void player_action_test_look_relative_down_player_control_action_test_look_relative_down_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?player_action_test_look_relative_down_player_control_action_test_look_relative_down_0_evaluate@@YAXFJ_N@Z");
//};

//void player_action_test_look_relative_left_player_control_action_test_look_relative_left_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?player_action_test_look_relative_left_player_control_action_test_look_relative_left_0_evaluate@@YAXFJ_N@Z");
//};

//void player_action_test_look_relative_right_player_control_action_test_look_relative_right_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?player_action_test_look_relative_right_player_control_action_test_look_relative_right_0_evaluate@@YAXFJ_N@Z");
//};

//void player_action_test_look_relative_all_directions_player_control_action_test_look_relative_all_directions_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?player_action_test_look_relative_all_directions_player_control_action_test_look_relative_all_directions_0_evaluate@@YAXFJ_N@Z");
//};

//void player_action_test_move_relative_all_directions_player_control_action_test_move_relative_all_directions_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?player_action_test_move_relative_all_directions_player_control_action_test_move_relative_all_directions_0_evaluate@@YAXFJ_N@Z");
//};

//void player_action_test_cinematic_skip_player_control_action_test_cinematic_skip_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?player_action_test_cinematic_skip_player_control_action_test_cinematic_skip_0_evaluate@@YAXFJ_N@Z");
//};

//void player_action_test_start_player_control_action_test_start_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?player_action_test_start_player_control_action_test_start_0_evaluate@@YAXFJ_N@Z");
//};

//void player_action_test_back_player_control_action_test_back_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?player_action_test_back_player_control_action_test_back_0_evaluate@@YAXFJ_N@Z");
//};

//void player_action_test_dpad_up_player_control_action_test_dpad_up_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?player_action_test_dpad_up_player_control_action_test_dpad_up_0_evaluate@@YAXFJ_N@Z");
//};

//void player_action_test_dpad_down_player_control_action_test_dpad_down_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?player_action_test_dpad_down_player_control_action_test_dpad_down_0_evaluate@@YAXFJ_N@Z");
//};

//void player_action_test_dpad_left_player_control_action_test_dpad_left_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?player_action_test_dpad_left_player_control_action_test_dpad_left_0_evaluate@@YAXFJ_N@Z");
//};

//void player_action_test_dpad_right_player_control_action_test_dpad_right_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?player_action_test_dpad_right_player_control_action_test_dpad_right_0_evaluate@@YAXFJ_N@Z");
//};

//void unit_action_test_reset_player_control_action_test_reset_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_action_test_reset_player_control_action_test_reset_1_evaluate@@YAXFJ_N@Z");
//};

//void unit_action_test_primary_trigger_player_control_action_test_primary_trigger_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_action_test_primary_trigger_player_control_action_test_primary_trigger_1_evaluate@@YAXFJ_N@Z");
//};

//void unit_action_test_grenade_trigger_player_control_action_test_grenade_trigger_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_action_test_grenade_trigger_player_control_action_test_grenade_trigger_1_evaluate@@YAXFJ_N@Z");
//};

//void unit_action_test_vision_trigger_player_control_action_test_vision_trigger_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_action_test_vision_trigger_player_control_action_test_vision_trigger_1_evaluate@@YAXFJ_N@Z");
//};

//void unit_action_test_rotate_weapons_player_control_action_test_rotate_weapons_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_action_test_rotate_weapons_player_control_action_test_rotate_weapons_1_evaluate@@YAXFJ_N@Z");
//};

//void unit_action_test_rotate_grenades_player_control_action_test_rotate_grenades_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_action_test_rotate_grenades_player_control_action_test_rotate_grenades_1_evaluate@@YAXFJ_N@Z");
//};

//void unit_action_test_jump_player_control_action_test_jump_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_action_test_jump_player_control_action_test_jump_1_evaluate@@YAXFJ_N@Z");
//};

//void unit_action_test_equipment_player_control_action_test_equipment_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_action_test_equipment_player_control_action_test_equipment_1_evaluate@@YAXFJ_N@Z");
//};

//void unit_action_test_context_primary_player_control_action_test_context_primary_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_action_test_context_primary_player_control_action_test_context_primary_1_evaluate@@YAXFJ_N@Z");
//};

//void unit_action_test_vehicle_trick_primary_player_control_action_test_vehicle_trick_primary_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_action_test_vehicle_trick_primary_player_control_action_test_vehicle_trick_primary_1_evaluate@@YAXFJ_N@Z");
//};

//void unit_action_test_vehicle_trick_secondary_player_control_action_test_vehicle_trick_secondary_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_action_test_vehicle_trick_secondary_player_control_action_test_vehicle_trick_secondary_1_evaluate@@YAXFJ_N@Z");
//};

//void unit_action_test_melee_player_control_action_test_melee_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_action_test_melee_player_control_action_test_melee_1_evaluate@@YAXFJ_N@Z");
//};

//void unit_action_test_action_player_control_action_test_action_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_action_test_action_player_control_action_test_action_1_evaluate@@YAXFJ_N@Z");
//};

//void unit_action_test_accept_player_control_action_test_accept_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_action_test_accept_player_control_action_test_accept_1_evaluate@@YAXFJ_N@Z");
//};

//void unit_action_test_cancel_player_control_action_test_cancel_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_action_test_cancel_player_control_action_test_cancel_1_evaluate@@YAXFJ_N@Z");
//};

//void unit_action_test_look_relative_up_player_control_action_test_look_relative_up_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_action_test_look_relative_up_player_control_action_test_look_relative_up_1_evaluate@@YAXFJ_N@Z");
//};

//void unit_action_test_look_relative_down_player_control_action_test_look_relative_down_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_action_test_look_relative_down_player_control_action_test_look_relative_down_1_evaluate@@YAXFJ_N@Z");
//};

//void unit_action_test_look_relative_left_player_control_action_test_look_relative_left_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_action_test_look_relative_left_player_control_action_test_look_relative_left_1_evaluate@@YAXFJ_N@Z");
//};

//void unit_action_test_look_relative_right_player_control_action_test_look_relative_right_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_action_test_look_relative_right_player_control_action_test_look_relative_right_1_evaluate@@YAXFJ_N@Z");
//};

//void unit_action_test_look_relative_all_directions_player_control_action_test_look_relative_all_directions_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_action_test_look_relative_all_directions_player_control_action_test_look_relative_all_directions_1_evaluate@@YAXFJ_N@Z");
//};

//void unit_action_test_move_relative_all_directions_player_control_action_test_move_relative_all_directions_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_action_test_move_relative_all_directions_player_control_action_test_move_relative_all_directions_1_evaluate@@YAXFJ_N@Z");
//};

//void unit_action_test_cinematic_skip_player_control_action_test_cinematic_skip_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_action_test_cinematic_skip_player_control_action_test_cinematic_skip_1_evaluate@@YAXFJ_N@Z");
//};

//void unit_action_test_start_player_control_action_test_start_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_action_test_start_player_control_action_test_start_1_evaluate@@YAXFJ_N@Z");
//};

//void unit_action_test_back_player_control_action_test_back_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_action_test_back_player_control_action_test_back_1_evaluate@@YAXFJ_N@Z");
//};

//void unit_action_test_dpad_up_player_control_action_test_dpad_up_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_action_test_dpad_up_player_control_action_test_dpad_up_1_evaluate@@YAXFJ_N@Z");
//};

//void unit_action_test_dpad_down_player_control_action_test_dpad_down_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_action_test_dpad_down_player_control_action_test_dpad_down_1_evaluate@@YAXFJ_N@Z");
//};

//void unit_action_test_dpad_left_player_control_action_test_dpad_left_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_action_test_dpad_left_player_control_action_test_dpad_left_1_evaluate@@YAXFJ_N@Z");
//};

//void unit_action_test_dpad_right_player_control_action_test_dpad_right_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_action_test_dpad_right_player_control_action_test_dpad_right_1_evaluate@@YAXFJ_N@Z");
//};

//void unit_confirm_message_player_control_lock_accept_button_until_pressed_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_confirm_message_player_control_lock_accept_button_until_pressed_1_evaluate@@YAXFJ_N@Z");
//};

//void unit_confirm_cancel_message_player_control_lock_cancel_button_until_pressed_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_confirm_cancel_message_player_control_lock_cancel_button_until_pressed_1_evaluate@@YAXFJ_N@Z");
//};

//void unit_enable_soft_ping_region_unit_enable_soft_ping_region_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_enable_soft_ping_region_unit_enable_soft_ping_region_3_evaluate@@YAXFJ_N@Z");
//};

//void unit_print_soft_ping_regions_unit_print_soft_ping_regions_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_print_soft_ping_regions_unit_print_soft_ping_regions_1_evaluate@@YAXFJ_N@Z");
//};

//void player0_looking_up_player0_looking_up_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?player0_looking_up_player0_looking_up_0_evaluate@@YAXFJ_N@Z");
//};

//void player0_looking_down_player0_looking_down_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?player0_looking_down_player0_looking_down_0_evaluate@@YAXFJ_N@Z");
//};

//void player_set_pitch_player_set_pitch_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?player_set_pitch_player_set_pitch_3_evaluate@@YAXFJ_N@Z");
//};

//void player_has_female_voice_player_get_female_voice_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?player_has_female_voice_player_get_female_voice_1_evaluate@@YAXFJ_N@Z");
//};

//void player_action_test_lookstick_forward_player_control_action_test_lookstick_forward_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?player_action_test_lookstick_forward_player_control_action_test_lookstick_forward_0_evaluate@@YAXFJ_N@Z");
//};

//void player_action_test_lookstick_backward_player_control_action_test_lookstick_backward_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?player_action_test_lookstick_backward_player_control_action_test_lookstick_backward_0_evaluate@@YAXFJ_N@Z");
//};

//void debug_teleport_player_test_player_teleport_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?debug_teleport_player_test_player_teleport_2_evaluate@@YAXFJ_N@Z");
//};

//void scenario_content_status_reload_scenario_content_status_reload_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?scenario_content_status_reload_scenario_content_status_reload_0_evaluate@@YAXFJ_N@Z");
//};

//void scenario_content_status_force_local_scenario_content_status_force_local_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?scenario_content_status_force_local_scenario_content_status_force_local_0_evaluate@@YAXFJ_N@Z");
//};

//void scenario_content_status_force_content_scenario_content_status_force_content_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?scenario_content_status_force_content_scenario_content_status_force_content_0_evaluate@@YAXFJ_N@Z");
//};

//void scenario_content_status_force_clear_scenario_content_status_force_clear_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?scenario_content_status_force_clear_scenario_content_status_force_clear_0_evaluate@@YAXFJ_N@Z");
//};

//void map_reset_main_reset_map_debug_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?map_reset_main_reset_map_debug_0_evaluate@@YAXFJ_N@Z");
//};

//void map_reset_random_main_reset_map_random_debug_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?map_reset_random_main_reset_map_random_debug_0_evaluate@@YAXFJ_N@Z");
//};

//void switch_zone_set_main_switch_zone_set_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?switch_zone_set_main_switch_zone_set_1_evaluate@@YAXFJ_N@Z");
//};

//void scenario_print_zone_sets_scenario_print_zone_sets_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?scenario_print_zone_sets_scenario_print_zone_sets_0_evaluate@@YAXFJ_N@Z");
//};

//void scenario_print_current_zone_set_scenario_print_current_zone_set_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?scenario_print_current_zone_set_scenario_print_current_zone_set_0_evaluate@@YAXFJ_N@Z");
//};

//void current_zone_set_scenario_zone_set_index_get_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?current_zone_set_scenario_zone_set_index_get_0_evaluate@@YAXFJ_N@Z");
//};

//void current_zone_set_fully_active_scenario_zone_set_index_get_if_fully_activated_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?current_zone_set_fully_active_scenario_zone_set_index_get_if_fully_activated_0_evaluate@@YAXFJ_N@Z");
//};

//void switch_map_and_zone_set_main_switch_scenario_and_zone_set_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?switch_map_and_zone_set_main_switch_scenario_and_zone_set_2_evaluate@@YAXFJ_N@Z");
//};

//void crash_main_crash_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?crash_main_crash_1_evaluate@@YAXFJ_N@Z");
//};

//void version_main_print_version_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?version_main_print_version_0_evaluate@@YAXFJ_N@Z");
//};

//void status_main_status_print_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?status_main_status_print_0_evaluate@@YAXFJ_N@Z");
//};

//void record_movie_movie_record_4_evaluate(short, long, bool)
//{
//    mangled_ppc("?record_movie_movie_record_4_evaluate@@YAXFJ_N@Z");
//};

//void record_movie_distributed_movie_record_distributed_5_evaluate(short, long, bool)
//{
//    mangled_ppc("?record_movie_distributed_movie_record_distributed_5_evaluate@@YAXFJ_N@Z");
//};

//void screenshot_screenshot_single_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?screenshot_screenshot_single_1_evaluate@@YAXFJ_N@Z");
//};

//void screenshot_debug_screenshot_debug_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?screenshot_debug_screenshot_debug_0_evaluate@@YAXFJ_N@Z");
//};

//void screenshot_big_screenshot_multiple_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?screenshot_big_screenshot_multiple_2_evaluate@@YAXFJ_N@Z");
//};

//void screenshot_big_raw_screenshot_multiple_raw_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?screenshot_big_raw_screenshot_multiple_raw_2_evaluate@@YAXFJ_N@Z");
//};

//void screenshot_size_screenshot_size_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?screenshot_size_screenshot_size_3_evaluate@@YAXFJ_N@Z");
//};

//void screenshot_simple_screenshot_simple_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?screenshot_simple_screenshot_simple_1_evaluate@@YAXFJ_N@Z");
//};

//void screenshot_cubemap_screenshot_cubemap_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?screenshot_cubemap_screenshot_cubemap_1_evaluate@@YAXFJ_N@Z");
//};

//void screenshot_webmap_screenshot_single_webmap_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?screenshot_webmap_screenshot_single_webmap_1_evaluate@@YAXFJ_N@Z");
//};

//void cubemap_dynamic_generate_cubemap_dynamic_generate_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?cubemap_dynamic_generate_cubemap_dynamic_generate_0_evaluate@@YAXFJ_N@Z");
//};

//void object_snapshot_object_snapshot_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?object_snapshot_object_snapshot_2_evaluate@@YAXFJ_N@Z");
//};

//void structure_instance_snapshot_structure_instance_snapshot_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?structure_instance_snapshot_structure_instance_snapshot_1_evaluate@@YAXFJ_N@Z");
//};

//void object_thumbnail_object_thumbnail_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?object_thumbnail_object_thumbnail_3_evaluate@@YAXFJ_N@Z");
//};

//void main_menu_main_menu_launch_force_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?main_menu_main_menu_launch_force_0_evaluate@@YAXFJ_N@Z");
//};

//void main_halt_main_halt_and_display_errors_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?main_halt_main_halt_and_display_errors_1_evaluate@@YAXFJ_N@Z");
//};

//void map_name_main_game_launch_legacy_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?map_name_main_game_launch_legacy_1_evaluate@@YAXFJ_N@Z");
//};

//void game_multiplayer_main_game_launch_set_multiplayer_engine_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?game_multiplayer_main_game_launch_set_multiplayer_engine_1_evaluate@@YAXFJ_N@Z");
//};

//void game_campaign_main_game_launch_set_campaign_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?game_campaign_main_game_launch_set_campaign_0_evaluate@@YAXFJ_N@Z");
//};

//void game_survival_main_game_launch_set_survival_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?game_survival_main_game_launch_set_survival_0_evaluate@@YAXFJ_N@Z");
//};

//void game_player_count_main_game_launch_set_player_count_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?game_player_count_main_game_launch_set_player_count_1_evaluate@@YAXFJ_N@Z");
//};

//void game_set_variant_game_load_variant_and_reset_map_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?game_set_variant_game_load_variant_and_reset_map_1_evaluate@@YAXFJ_N@Z");
//};

//void game_splitscreen_main_game_launch_set_multiplayer_splitscreen_count_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?game_splitscreen_main_game_launch_set_multiplayer_splitscreen_count_1_evaluate@@YAXFJ_N@Z");
//};

//void game_difficulty_main_game_launch_set_difficulty_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?game_difficulty_main_game_launch_set_difficulty_1_evaluate@@YAXFJ_N@Z");
//};

//void game_active_skulls_main_game_launch_set_active_skulls_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?game_active_skulls_main_game_launch_set_active_skulls_1_evaluate@@YAXFJ_N@Z");
//};

//void game_coop_players_main_game_launch_set_coop_player_count_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?game_coop_players_main_game_launch_set_coop_player_count_1_evaluate@@YAXFJ_N@Z");
//};

//void game_initial_zone_set_main_game_launch_set_initial_zone_set_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?game_initial_zone_set_main_game_launch_set_initial_zone_set_1_evaluate@@YAXFJ_N@Z");
//};

//void game_tick_rate_main_game_launch_set_tick_rate_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?game_tick_rate_main_game_launch_set_tick_rate_1_evaluate@@YAXFJ_N@Z");
//};

//void game_start_main_game_launch_legacy_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?game_start_main_game_launch_legacy_1_evaluate@@YAXFJ_N@Z");
//};

//void game_start_when_ready_user_interface_networking_game_start_when_ready_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?game_start_when_ready_user_interface_networking_game_start_when_ready_0_evaluate@@YAXFJ_N@Z");
//};

//void game_start_when_joined_user_interface_networking_game_start_when_joined_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?game_start_when_joined_user_interface_networking_game_start_when_joined_1_evaluate@@YAXFJ_N@Z");
//};

//void game_rate_game_time_set_rate_scale_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?game_rate_game_time_set_rate_scale_3_evaluate@@YAXFJ_N@Z");
//};

//void texture_cache_flush_texture_cache_flush_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?texture_cache_flush_texture_cache_flush_0_evaluate@@YAXFJ_N@Z");
//};

//void geometry_cache_flush_geometry_cache_flush_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?geometry_cache_flush_geometry_cache_flush_0_evaluate@@YAXFJ_N@Z");
//};

//void sound_cache_flush_sound_cache_flush_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?sound_cache_flush_sound_cache_flush_0_evaluate@@YAXFJ_N@Z");
//};

//void animation_cache_flush_animation_cache_flush_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?animation_cache_flush_animation_cache_flush_0_evaluate@@YAXFJ_N@Z");
//};

//void font_cache_flush_font_cache_flush_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?font_cache_flush_font_cache_flush_0_evaluate@@YAXFJ_N@Z");
//};

//void language_set_set_current_language_from_display_name_slow_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?language_set_set_current_language_from_display_name_slow_1_evaluate@@YAXFJ_N@Z");
//};

//void texture_cache_test_malloc_texture_cache_test_malloc_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?texture_cache_test_malloc_texture_cache_test_malloc_0_evaluate@@YAXFJ_N@Z");
//};

//void debug_memory_debug_dump_memory_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?debug_memory_debug_dump_memory_0_evaluate@@YAXFJ_N@Z");
//};

//void debug_memory_by_file_debug_dump_memory_by_file_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?debug_memory_by_file_debug_dump_memory_by_file_0_evaluate@@YAXFJ_N@Z");
//};

//void debug_memory_for_file_debug_dump_memory_for_file_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?debug_memory_for_file_debug_dump_memory_for_file_1_evaluate@@YAXFJ_N@Z");
//};

//void debug_tags_tag_groups_dump_memory_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?debug_tags_tag_groups_dump_memory_0_evaluate@@YAXFJ_N@Z");
//};

//void debug_single_tag_tag_group_memory_inspect_single_tag_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?debug_single_tag_tag_group_memory_inspect_single_tag_0_evaluate@@YAXFJ_N@Z");
//};

//void tags_verify_all_tags_verify_all_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?tags_verify_all_tags_verify_all_0_evaluate@@YAXFJ_N@Z");
//};

//void trace_next_frame_trace_next_frame_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?trace_next_frame_trace_next_frame_1_evaluate@@YAXFJ_N@Z");
//};

//void trace_next_frame_to_file_trace_next_frame_to_file_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?trace_next_frame_to_file_trace_next_frame_to_file_2_evaluate@@YAXFJ_N@Z");
//};

//void trace_tick_trace_tick_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?trace_tick_trace_tick_1_evaluate@@YAXFJ_N@Z");
//};

//void collision_log_enable_collision_log_enable_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?collision_log_enable_collision_log_enable_1_evaluate@@YAXFJ_N@Z");
//};

//void damage_control_get_damage_control_get_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?damage_control_get_damage_control_get_1_evaluate@@YAXFJ_N@Z");
//};

//void damage_control_set_damage_control_set_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?damage_control_set_damage_control_set_2_evaluate@@YAXFJ_N@Z");
//};

//void ai_lines_ai_profile_change_render_spray_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_lines_ai_profile_change_render_spray_0_evaluate@@YAXFJ_N@Z");
//};

//void ai_dialogue_break_on_vocalization_ai_scripting_break_on_vocalization_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_dialogue_break_on_vocalization_ai_scripting_break_on_vocalization_1_evaluate@@YAXFJ_N@Z");
//};

//void fade_in_cinematic_fade_in_4_evaluate(short, long, bool)
//{
//    mangled_ppc("?fade_in_cinematic_fade_in_4_evaluate@@YAXFJ_N@Z");
//};

//void fade_out_cinematic_fade_out_4_evaluate(short, long, bool)
//{
//    mangled_ppc("?fade_out_cinematic_fade_out_4_evaluate@@YAXFJ_N@Z");
//};

//void fade_in_for_player_game_engine_fade_in_for_player_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?fade_in_for_player_game_engine_fade_in_for_player_1_evaluate@@YAXFJ_N@Z");
//};

//void fade_out_for_player_game_engine_fade_out_for_player_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?fade_out_for_player_game_engine_fade_out_for_player_1_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_tag_fade_out_from_game_cinematic_fade_out_from_game_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_tag_fade_out_from_game_cinematic_fade_out_from_game_1_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_tag_fade_in_to_cinematic_cinematic_fade_in_to_cinematic_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_tag_fade_in_to_cinematic_cinematic_fade_in_to_cinematic_1_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_tag_fade_out_from_cinematic_cinematic_fade_out_from_cinematic_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_tag_fade_out_from_cinematic_cinematic_fade_out_from_cinematic_1_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_tag_fade_in_to_game_cinematic_fade_in_to_game_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_tag_fade_in_to_game_cinematic_fade_in_to_game_1_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_transition_fade_out_from_game_cinematic_transition_fade_out_from_game_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_transition_fade_out_from_game_cinematic_transition_fade_out_from_game_1_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_transition_fade_in_to_cinematic_cinematic_transition_fade_in_to_cinematic_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_transition_fade_in_to_cinematic_cinematic_transition_fade_in_to_cinematic_1_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_transition_fade_out_from_cinematic_cinematic_transition_fade_out_from_cinematic_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_transition_fade_out_from_cinematic_cinematic_transition_fade_out_from_cinematic_1_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_transition_fade_in_to_game_cinematic_transition_fade_in_to_game_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_transition_fade_in_to_game_cinematic_transition_fade_in_to_game_1_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_run_script_by_name_cinematic_run_hs_script_by_name_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_run_script_by_name_cinematic_run_hs_script_by_name_1_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_start_cinematic_start_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_start_cinematic_start_0_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_stop_cinematic_stop_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_stop_cinematic_stop_0_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_skip_start_internal_cinematic_skip_start_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_skip_start_internal_cinematic_skip_start_0_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_skip_stop_internal_cinematic_skip_stop_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_skip_stop_internal_cinematic_skip_stop_0_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_show_letterbox_cinematic_show_letterbox_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_show_letterbox_cinematic_show_letterbox_1_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_show_letterbox_immediate_cinematic_show_letterbox_immediate_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_show_letterbox_immediate_cinematic_show_letterbox_immediate_1_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_set_title_cinematic_set_title_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_set_title_cinematic_set_title_1_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_set_title_delayed_cinematic_set_title_delayed_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_set_title_delayed_cinematic_set_title_delayed_2_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_suppress_bsp_object_creation_cinematic_scripting_suppress_bsp_object_creation_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_suppress_bsp_object_creation_cinematic_scripting_suppress_bsp_object_creation_1_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_subtitle_hs_subtitle_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_subtitle_hs_subtitle_2_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_set_cinematic_set_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_set_cinematic_set_1_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_set_shot_cinematic_set_shot_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_set_shot_cinematic_set_shot_2_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_get_shot_cinematic_get_shot_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_get_shot_cinematic_get_shot_0_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_set_early_exit_cinematic_set_early_exit_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_set_early_exit_cinematic_set_early_exit_1_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_get_early_exit_cinematic_get_early_exit_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_get_early_exit_cinematic_get_early_exit_0_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_set_active_camera_cinematic_set_active_camera_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_set_active_camera_cinematic_set_active_camera_1_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_object_create_cinematic_object_create_from_cinematic_scene_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_object_create_cinematic_object_create_from_cinematic_scene_1_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_object_create_cinematic_anchor_cinematic_object_create_cinematic_anchor_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_object_create_cinematic_anchor_cinematic_object_create_cinematic_anchor_1_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_object_destroy_cinematic_object_destroy_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_object_destroy_cinematic_object_destroy_1_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_objects_destroy_all_cinematic_objects_destroy_all_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_objects_destroy_all_cinematic_objects_destroy_all_0_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_destroy_cinematic_destroy_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_destroy_cinematic_destroy_0_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_in_progress_cinematic_in_progress_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_in_progress_cinematic_in_progress_0_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_can_be_skipped_cinematic_can_be_skipped_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_can_be_skipped_cinematic_can_be_skipped_0_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_clips_initialize_for_shot_cinematic_clips_initialize_for_shot_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_clips_initialize_for_shot_cinematic_clips_initialize_for_shot_1_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_clips_destroy_cinematic_clips_destroy_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_clips_destroy_cinematic_clips_destroy_0_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_lights_initialize_for_shot_cinematic_lights_initialize_for_shot_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_lights_initialize_for_shot_cinematic_lights_initialize_for_shot_1_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_lights_destroy_cinematic_lights_destroy_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_lights_destroy_cinematic_lights_destroy_0_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_lights_destroy_shot_cinematic_lights_destroy_shot_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_lights_destroy_shot_cinematic_lights_destroy_shot_0_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_light_object_cinematic_light_object_4_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_light_object_cinematic_light_object_4_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_light_object_off_cinematic_light_object_off_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_light_object_off_cinematic_light_object_off_1_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_lighting_rebuild_all_cinematic_lighting_rebuild_all_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_lighting_rebuild_all_cinematic_lighting_rebuild_all_0_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_lighting_update_dynamic_light_direction_cinematic_lighting_update_dynamic_light_direction_5_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_lighting_update_dynamic_light_direction_cinematic_lighting_update_dynamic_light_direction_5_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_lighting_update_vmf_light_cinematic_lighting_update_vmf_light_8_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_lighting_update_vmf_light_cinematic_lighting_update_vmf_light_8_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_lighting_update_analytical_light_cinematic_lighting_update_analytical_light_7_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_lighting_update_analytical_light_cinematic_lighting_update_analytical_light_7_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_lighting_update_ambient_light_cinematic_lighting_update_ambient_light_5_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_lighting_update_ambient_light_cinematic_lighting_update_ambient_light_5_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_lighting_update_scales_cinematic_lighting_update_scales_5_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_lighting_update_scales_cinematic_lighting_update_scales_5_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_object_get_cinematic_scripting_get_object_by_name_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_object_get_cinematic_scripting_get_object_by_name_1_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_unit_get_cinematic_scripting_get_unit_by_name_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_unit_get_cinematic_scripting_get_unit_by_name_1_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_weapon_get_cinematic_scripting_get_weapon_by_name_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_weapon_get_cinematic_scripting_get_weapon_by_name_1_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_reset_cinematic_reset_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_reset_cinematic_reset_0_evaluate@@YAXFJ_N@Z");
//};

//void camera_set_briefing_camera_render_main_camera_to_texture_camera_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?camera_set_briefing_camera_render_main_camera_to_texture_camera_1_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_tag_reference_get_cinematic_cinematic_tag_reference_get_cinematic_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_tag_reference_get_cinematic_cinematic_tag_reference_get_cinematic_1_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_tag_reference_get_scene_cinematic_tag_reference_get_scene_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_tag_reference_get_scene_cinematic_tag_reference_get_scene_1_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_tag_reference_get_effect_cinematic_tag_reference_get_effect_4_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_tag_reference_get_effect_cinematic_tag_reference_get_effect_4_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_tag_reference_get_dialogue_cinematic_tag_reference_get_dialogue_4_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_tag_reference_get_dialogue_cinematic_tag_reference_get_dialogue_4_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_tag_reference_get_music_cinematic_tag_reference_get_music_4_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_tag_reference_get_music_cinematic_tag_reference_get_music_4_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_tag_reference_get_music_looping_cinematic_tag_reference_get_music_looping_4_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_tag_reference_get_music_looping_cinematic_tag_reference_get_music_looping_4_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_tag_reference_get_animation_cinematic_tag_reference_get_animation_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_tag_reference_get_animation_cinematic_tag_reference_get_animation_3_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_scripting_object_coop_flags_valid_cinematic_scripting_object_coop_flags_valid_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_scripting_object_coop_flags_valid_cinematic_scripting_object_coop_flags_valid_2_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_scripting_fade_out_cinematic_scripting_fade_out_4_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_scripting_fade_out_cinematic_scripting_fade_out_4_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_scripting_create_object_cinematic_scripting_create_object_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_scripting_create_object_cinematic_scripting_create_object_2_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_scripting_create_cinematic_object_cinematic_scripting_create_cinematic_object_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_scripting_create_cinematic_object_cinematic_scripting_create_cinematic_object_2_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_scripting_start_animation_cinematic_scripting_start_animation_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_scripting_start_animation_cinematic_scripting_start_animation_3_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_scripting_destroy_object_cinematic_scripting_destroy_object_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_scripting_destroy_object_cinematic_scripting_destroy_object_2_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_scripting_destroy_objects_cinematic_scripting_destroy_objects_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_scripting_destroy_objects_cinematic_scripting_destroy_objects_1_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_scripting_create_scene_cinematic_scripting_create_scene_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_scripting_create_scene_cinematic_scripting_create_scene_1_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_scripting_destroy_scene_cinematic_scripting_destroy_scene_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_scripting_destroy_scene_cinematic_scripting_destroy_scene_1_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_scripting_start_effect_cinematic_scripting_start_effect_4_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_scripting_start_effect_cinematic_scripting_start_effect_4_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_scripting_start_music_cinematic_scripting_start_music_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_scripting_start_music_cinematic_scripting_start_music_3_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_scripting_start_dialogue_cinematic_scripting_start_dialogue_4_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_scripting_start_dialogue_cinematic_scripting_start_dialogue_4_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_scripting_stop_music_cinematic_scripting_stop_music_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_scripting_stop_music_cinematic_scripting_stop_music_3_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_scripting_start_screen_effect_cinematic_scripting_start_screen_effect_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_scripting_start_screen_effect_cinematic_scripting_start_screen_effect_3_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_scripting_stop_screen_effect_cinematic_scripting_stop_screen_effect_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_scripting_stop_screen_effect_cinematic_scripting_stop_screen_effect_3_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_scripting_create_and_animate_object_cinematic_scripting_create_and_animate_object_5_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_scripting_create_and_animate_object_cinematic_scripting_create_and_animate_object_5_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_scripting_create_and_animate_cinematic_object_cinematic_scripting_create_and_animate_cinematic_object_5_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_scripting_create_and_animate_cinematic_object_cinematic_scripting_create_and_animate_cinematic_object_5_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_scripting_create_and_animate_object_no_animation_cinematic_scripting_create_and_animate_object_no_animation_4_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_scripting_create_and_animate_object_no_animation_cinematic_scripting_create_and_animate_object_no_animation_4_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_scripting_create_and_animate_cinematic_object_no_animation_cinematic_scripting_create_and_animate_cinematic_object_no_animation_4_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_scripting_create_and_animate_cinematic_object_no_animation_cinematic_scripting_create_and_animate_cinematic_object_no_animation_4_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_scripting_set_user_input_constraints_cinematic_scripting_set_user_input_constraints_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_scripting_set_user_input_constraints_cinematic_scripting_set_user_input_constraints_3_evaluate@@YAXFJ_N@Z");
//};

//void attract_mode_start_attract_mode_start_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?attract_mode_start_attract_mode_start_0_evaluate@@YAXFJ_N@Z");
//};

//void attract_mode_set_seconds_attract_mode_set_countdown_length_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?attract_mode_set_seconds_attract_mode_set_countdown_length_1_evaluate@@YAXFJ_N@Z");
//};

//void game_won_game_won_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?game_won_game_won_0_evaluate@@YAXFJ_N@Z");
//};

//void game_lost_game_lost_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?game_lost_game_lost_1_evaluate@@YAXFJ_N@Z");
//};

//void game_revert_main_revert_map_scripting_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?game_revert_main_revert_map_scripting_0_evaluate@@YAXFJ_N@Z");
//};

//void game_award_level_complete_achievements_game_react_to_level_completion_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?game_award_level_complete_achievements_game_react_to_level_completion_0_evaluate@@YAXFJ_N@Z");
//};

//void game_is_cooperative_game_is_cooperative_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?game_is_cooperative_game_is_cooperative_0_evaluate@@YAXFJ_N@Z");
//};

//void game_is_playtest_game_is_playtest_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?game_is_playtest_game_is_playtest_0_evaluate@@YAXFJ_N@Z");
//};

//void game_can_use_flashlights_game_can_use_flashlights_set_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?game_can_use_flashlights_game_can_use_flashlights_set_1_evaluate@@YAXFJ_N@Z");
//};

//void game_save_and_quit_main_save_and_exit_campaign_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?game_save_and_quit_main_save_and_exit_campaign_0_evaluate@@YAXFJ_N@Z");
//};

//void game_save_unsafe_main_save_map_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?game_save_unsafe_main_save_map_0_evaluate@@YAXFJ_N@Z");
//};

//void game_insertion_point_unlock_game_insertion_point_unlock_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?game_insertion_point_unlock_game_insertion_point_unlock_1_evaluate@@YAXFJ_N@Z");
//};

//void game_insertion_point_lock_game_insertion_point_lock_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?game_insertion_point_lock_game_insertion_point_lock_1_evaluate@@YAXFJ_N@Z");
//};

//void game_insertion_point_set_game_insertion_point_set_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?game_insertion_point_set_game_insertion_point_set_1_evaluate@@YAXFJ_N@Z");
//};

//void saved_games_delete_campaign_save_hs_saved_game_files_delete_saved_game_state_test_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?saved_games_delete_campaign_save_hs_saved_game_files_delete_saved_game_state_test_1_evaluate@@YAXFJ_N@Z");
//};

//void saved_games_autosave_free_up_space_autosave_queue_free_up_space_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?saved_games_autosave_free_up_space_autosave_queue_free_up_space_0_evaluate@@YAXFJ_N@Z");
//};

//void achievement_grant_to_player_player_grant_achievement_by_name_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?achievement_grant_to_player_player_grant_achievement_by_name_2_evaluate@@YAXFJ_N@Z");
//};

//void achievement_grant_to_controller_controller_grant_achievement_by_name_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?achievement_grant_to_controller_controller_grant_achievement_by_name_2_evaluate@@YAXFJ_N@Z");
//};

//void achievement_grant_to_all_players_scripting_grant_achievement_to_all_players_by_name_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?achievement_grant_to_all_players_scripting_grant_achievement_to_all_players_by_name_1_evaluate@@YAXFJ_N@Z");
//};

//void achievements_enable_game_achievements_enable_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?achievements_enable_game_achievements_enable_1_evaluate@@YAXFJ_N@Z");
//};

//void achievements_skip_validation_checks_game_achievements_validation_disable_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?achievements_skip_validation_checks_game_achievements_validation_disable_1_evaluate@@YAXFJ_N@Z");
//};

//void debug_spawning_influencers_game_engine_debug_spawn_influencers_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?debug_spawning_influencers_game_engine_debug_spawn_influencers_1_evaluate@@YAXFJ_N@Z");
//};

//void debug_spawning_respawn_zones_game_engine_debug_respawn_zone_influencers_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?debug_spawning_respawn_zones_game_engine_debug_respawn_zone_influencers_1_evaluate@@YAXFJ_N@Z");
//};

//void debug_spawning_proximity_forbid_game_engine_debug_spawn_influencers_proximity_forbid_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?debug_spawning_proximity_forbid_game_engine_debug_spawn_influencers_proximity_forbid_1_evaluate@@YAXFJ_N@Z");
//};

//void debug_spawning_moving_vehicle_game_engine_debug_spawn_influencers_vehicles_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?debug_spawning_moving_vehicle_game_engine_debug_spawn_influencers_vehicles_1_evaluate@@YAXFJ_N@Z");
//};

//void debug_spawning_weapon_influences_game_engine_debug_spawn_influencers_weapons_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?debug_spawning_weapon_influences_game_engine_debug_spawn_influencers_weapons_1_evaluate@@YAXFJ_N@Z");
//};

//void debug_spawning_dangerous_projectiles_game_engine_debug_spawn_influencers_projectiles_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?debug_spawning_dangerous_projectiles_game_engine_debug_spawn_influencers_projectiles_1_evaluate@@YAXFJ_N@Z");
//};

//void debug_spawning_deployed_equipment_game_engine_debug_spawn_influencers_equipment_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?debug_spawning_deployed_equipment_game_engine_debug_spawn_influencers_equipment_1_evaluate@@YAXFJ_N@Z");
//};

//void debug_spawning_proximity_enemy_game_engine_debug_spawn_influencers_enemies_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?debug_spawning_proximity_enemy_game_engine_debug_spawn_influencers_enemies_1_evaluate@@YAXFJ_N@Z");
//};

//void debug_spawning_teammates_game_engine_debug_spawn_influencers_teammates_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?debug_spawning_teammates_game_engine_debug_spawn_influencers_teammates_1_evaluate@@YAXFJ_N@Z");
//};

//void debug_spawning_dead_teammates_game_engine_debug_spawn_influencers_dead_teammates_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?debug_spawning_dead_teammates_game_engine_debug_spawn_influencers_dead_teammates_1_evaluate@@YAXFJ_N@Z");
//};

//void debug_spawning_random_influence_game_engine_debug_spawn_influencers_random_weight_component_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?debug_spawning_random_influence_game_engine_debug_spawn_influencers_random_weight_component_1_evaluate@@YAXFJ_N@Z");
//};

//void debug_spawning_nominal_weight_game_engine_debug_spawn_influencers_nominal_weight_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?debug_spawning_nominal_weight_game_engine_debug_spawn_influencers_nominal_weight_1_evaluate@@YAXFJ_N@Z");
//};

//void debug_spawning_natural_weight_game_engine_debug_spawn_influencers_natural_weight_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?debug_spawning_natural_weight_game_engine_debug_spawn_influencers_natural_weight_1_evaluate@@YAXFJ_N@Z");
//};

//void debug_spawning_target_game_engine_debug_spawn_influencers_set_target_player_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?debug_spawning_target_game_engine_debug_spawn_influencers_set_target_player_1_evaluate@@YAXFJ_N@Z");
//};

//void debug_spawning_use_history_game_engine_debug_spawn_influencers_use_historic_spawn_state_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?debug_spawning_use_history_game_engine_debug_spawn_influencers_use_historic_spawn_state_1_evaluate@@YAXFJ_N@Z");
//};

//void debug_initial_spawn_point_objects_game_engine_toggle_initial_spawn_point_cycling_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?debug_initial_spawn_point_objects_game_engine_toggle_initial_spawn_point_cycling_1_evaluate@@YAXFJ_N@Z");
//};

//void debug_respawn_point_objects_game_engine_toggle_respawn_point_cycling_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?debug_respawn_point_objects_game_engine_toggle_respawn_point_cycling_1_evaluate@@YAXFJ_N@Z");
//};

//void game_export_variant_settings_game_engine_dump_variant_settings_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?game_export_variant_settings_game_engine_dump_variant_settings_1_evaluate@@YAXFJ_N@Z");
//};

//void game_engine_event_test_general_game_engine_test_general_event_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?game_engine_event_test_general_game_engine_test_general_event_1_evaluate@@YAXFJ_N@Z");
//};

//void game_engine_event_test_flavor_game_engine_test_flavor_event_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?game_engine_event_test_flavor_game_engine_test_flavor_event_1_evaluate@@YAXFJ_N@Z");
//};

//void core_load_main_load_core_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?core_load_main_load_core_0_evaluate@@YAXFJ_N@Z");
//};

//void core_load_name_main_load_core_name_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?core_load_name_main_load_core_name_1_evaluate@@YAXFJ_N@Z");
//};

//void core_save_main_save_core_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?core_save_main_save_core_0_evaluate@@YAXFJ_N@Z");
//};

//void core_save_name_main_save_core_name_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?core_save_name_main_save_core_name_1_evaluate@@YAXFJ_N@Z");
//};

//void core_load_game_main_game_load_from_core_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?core_load_game_main_game_load_from_core_0_evaluate@@YAXFJ_N@Z");
//};

//void core_load_game_name_main_game_load_from_core_name_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?core_load_game_name_main_game_load_from_core_name_1_evaluate@@YAXFJ_N@Z");
//};

//void core_regular_upload_to_debug_server_game_state_toggle_periodic_uploading_to_debug_server_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?core_regular_upload_to_debug_server_game_state_toggle_periodic_uploading_to_debug_server_1_evaluate@@YAXFJ_N@Z");
//};

//void core_set_upload_option_game_state_set_test_options_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?core_set_upload_option_game_state_set_test_options_1_evaluate@@YAXFJ_N@Z");
//};

//void core_force_immediate_save_on_core_load_game_state_force_immediate_save_on_core_load_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?core_force_immediate_save_on_core_load_game_state_force_immediate_save_on_core_load_1_evaluate@@YAXFJ_N@Z");
//};

//void force_debugger_not_present_assert_handler_force_debugger_not_present_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?force_debugger_not_present_assert_handler_force_debugger_not_present_1_evaluate@@YAXFJ_N@Z");
//};

//void force_debugger_always_present_assert_handler_force_debugger_always_present_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?force_debugger_always_present_assert_handler_force_debugger_always_present_1_evaluate@@YAXFJ_N@Z");
//};

//void game_safe_to_save_game_safe_to_save_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?game_safe_to_save_game_safe_to_save_0_evaluate@@YAXFJ_N@Z");
//};

//void game_safe_to_speak_game_safe_to_speak_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?game_safe_to_speak_game_safe_to_speak_0_evaluate@@YAXFJ_N@Z");
//};

//void game_all_quiet_game_all_quiet_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?game_all_quiet_game_all_quiet_0_evaluate@@YAXFJ_N@Z");
//};

//void game_save_game_save_safe_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?game_save_game_save_safe_0_evaluate@@YAXFJ_N@Z");
//};

//void game_save_cancel_game_save_cancel_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?game_save_cancel_game_save_cancel_0_evaluate@@YAXFJ_N@Z");
//};

//void game_save_no_timeout_game_save_no_timeout_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?game_save_no_timeout_game_save_no_timeout_0_evaluate@@YAXFJ_N@Z");
//};

//void game_save_immediate_game_save_immediate_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?game_save_immediate_game_save_immediate_0_evaluate@@YAXFJ_N@Z");
//};

//void game_saving_game_saving_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?game_saving_game_saving_0_evaluate@@YAXFJ_N@Z");
//};

//void game_reverted_game_state_reverted_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?game_reverted_game_state_reverted_0_evaluate@@YAXFJ_N@Z");
//};

//void survival_mode_respawn_dead_players_survival_mode_respawn_dead_players_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?survival_mode_respawn_dead_players_survival_mode_respawn_dead_players_0_evaluate@@YAXFJ_N@Z");
//};

//void survival_mode_lives_get_survival_mode_get_lives_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?survival_mode_lives_get_survival_mode_get_lives_1_evaluate@@YAXFJ_N@Z");
//};

//void survival_mode_lives_set_survival_mode_set_lives_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?survival_mode_lives_set_survival_mode_set_lives_2_evaluate@@YAXFJ_N@Z");
//};

//void survival_mode_get_mp_round_count_game_engine_get_number_of_rounds_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?survival_mode_get_mp_round_count_game_engine_get_number_of_rounds_0_evaluate@@YAXFJ_N@Z");
//};

//void survival_mode_get_mp_round_current_game_engine_get_round_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?survival_mode_get_mp_round_current_game_engine_get_round_0_evaluate@@YAXFJ_N@Z");
//};

//void survival_mode_set_get_survival_mode_get_set_index_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?survival_mode_set_get_survival_mode_get_set_index_0_evaluate@@YAXFJ_N@Z");
//};

//void survival_mode_round_get_survival_mode_get_round_index_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?survival_mode_round_get_survival_mode_get_round_index_0_evaluate@@YAXFJ_N@Z");
//};

//void survival_mode_waves_per_round_survival_mode_get_waves_per_round_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?survival_mode_waves_per_round_survival_mode_get_waves_per_round_0_evaluate@@YAXFJ_N@Z");
//};

//void survival_mode_rounds_per_set_survival_mode_get_rounds_per_set_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?survival_mode_rounds_per_set_survival_mode_get_rounds_per_set_0_evaluate@@YAXFJ_N@Z");
//};

//void survival_mode_wave_get_survival_mode_get_wave_index_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?survival_mode_wave_get_survival_mode_get_wave_index_0_evaluate@@YAXFJ_N@Z");
//};

//void survival_mode_set_multiplier_get_survival_mode_get_set_multiplier_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?survival_mode_set_multiplier_get_survival_mode_get_set_multiplier_0_evaluate@@YAXFJ_N@Z");
//};

//void survival_mode_set_multiplier_set_survival_mode_set_set_multiplier_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?survival_mode_set_multiplier_set_survival_mode_set_set_multiplier_1_evaluate@@YAXFJ_N@Z");
//};

//void survival_mode_bonus_multiplier_get_survival_mode_get_bonus_multiplier_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?survival_mode_bonus_multiplier_get_survival_mode_get_bonus_multiplier_0_evaluate@@YAXFJ_N@Z");
//};

//void survival_mode_bonus_multiplier_set_survival_mode_set_bonus_multiplier_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?survival_mode_bonus_multiplier_set_survival_mode_set_bonus_multiplier_1_evaluate@@YAXFJ_N@Z");
//};

//void survival_mode_get_wave_squad_survival_mode_get_wave_squad_type_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?survival_mode_get_wave_squad_survival_mode_get_wave_squad_type_0_evaluate@@YAXFJ_N@Z");
//};

//void survival_mode_current_wave_is_initial_survival_current_wave_is_initial_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?survival_mode_current_wave_is_initial_survival_current_wave_is_initial_0_evaluate@@YAXFJ_N@Z");
//};

//void survival_mode_current_wave_is_boss_survival_current_wave_is_boss_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?survival_mode_current_wave_is_boss_survival_current_wave_is_boss_0_evaluate@@YAXFJ_N@Z");
//};

//void survival_mode_current_wave_is_bonus_survival_current_wave_is_bonus_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?survival_mode_current_wave_is_bonus_survival_current_wave_is_bonus_0_evaluate@@YAXFJ_N@Z");
//};

//void survival_mode_current_wave_is_last_in_set_survival_current_wave_is_last_in_set_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?survival_mode_current_wave_is_last_in_set_survival_current_wave_is_last_in_set_0_evaluate@@YAXFJ_N@Z");
//};

//void survival_mode_begin_new_set_survival_mode_begin_new_set_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?survival_mode_begin_new_set_survival_mode_begin_new_set_0_evaluate@@YAXFJ_N@Z");
//};

//void survival_mode_begin_new_wave_survival_mode_begin_new_wave_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?survival_mode_begin_new_wave_survival_mode_begin_new_wave_0_evaluate@@YAXFJ_N@Z");
//};

//void survival_mode_end_set_survival_mode_end_set_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?survival_mode_end_set_survival_mode_end_set_0_evaluate@@YAXFJ_N@Z");
//};

//void survival_mode_end_wave_survival_mode_end_wave_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?survival_mode_end_wave_survival_mode_end_wave_0_evaluate@@YAXFJ_N@Z");
//};

//void survival_mode_award_hero_medal_survival_mode_award_hero_medal_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?survival_mode_award_hero_medal_survival_mode_award_hero_medal_0_evaluate@@YAXFJ_N@Z");
//};

//void survival_mode_incident_new_survival_mode_incident_new_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?survival_mode_incident_new_survival_mode_incident_new_1_evaluate@@YAXFJ_N@Z");
//};

//void chud_bonus_round_show_timer_chud_scripting_bonus_round_show_timer_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?chud_bonus_round_show_timer_chud_scripting_bonus_round_show_timer_1_evaluate@@YAXFJ_N@Z");
//};

//void chud_bonus_round_start_timer_chud_scripting_bonus_round_start_timer_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?chud_bonus_round_start_timer_chud_scripting_bonus_round_start_timer_1_evaluate@@YAXFJ_N@Z");
//};

//void chud_bonus_round_set_timer_chud_scripting_bonus_round_set_timer_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?chud_bonus_round_set_timer_chud_scripting_bonus_round_set_timer_1_evaluate@@YAXFJ_N@Z");
//};

//void survival_mode_get_time_limit_hs_survival_get_time_limit_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?survival_mode_get_time_limit_hs_survival_get_time_limit_0_evaluate@@YAXFJ_N@Z");
//};

//void survival_mode_get_set_count_hs_survival_get_set_count_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?survival_mode_get_set_count_hs_survival_get_set_count_0_evaluate@@YAXFJ_N@Z");
//};

//void survival_mode_get_bonus_lives_awarded_hs_survival_get_bonus_lives_awarded_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?survival_mode_get_bonus_lives_awarded_hs_survival_get_bonus_lives_awarded_0_evaluate@@YAXFJ_N@Z");
//};

//void survival_mode_get_bonus_target_hs_survival_get_bonus_target_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?survival_mode_get_bonus_target_hs_survival_get_bonus_target_0_evaluate@@YAXFJ_N@Z");
//};

//void survival_mode_get_shared_team_life_count_hs_survival_get_shared_team_life_count_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?survival_mode_get_shared_team_life_count_hs_survival_get_shared_team_life_count_0_evaluate@@YAXFJ_N@Z");
//};

//void survival_mode_get_elite_life_count_hs_survival_get_elite_life_count_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?survival_mode_get_elite_life_count_hs_survival_get_elite_life_count_0_evaluate@@YAXFJ_N@Z");
//};

//void survival_mode_max_lives_hs_survival_get_max_lives_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?survival_mode_max_lives_hs_survival_get_max_lives_0_evaluate@@YAXFJ_N@Z");
//};

//void survival_mode_generator_count_hs_survival_get_generator_count_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?survival_mode_generator_count_hs_survival_get_generator_count_0_evaluate@@YAXFJ_N@Z");
//};

//void survival_mode_bonus_lives_elite_death_hs_survival_get_bonus_lives_on_elite_player_death_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?survival_mode_bonus_lives_elite_death_hs_survival_get_bonus_lives_on_elite_player_death_0_evaluate@@YAXFJ_N@Z");
//};

//void survival_mode_scenario_extras_enable_hs_survival_get_enable_scenario_hazards_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?survival_mode_scenario_extras_enable_hs_survival_get_enable_scenario_hazards_0_evaluate@@YAXFJ_N@Z");
//};

//void survival_mode_weapon_drops_enable_hs_survival_get_enable_weapon_drops_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?survival_mode_weapon_drops_enable_hs_survival_get_enable_weapon_drops_0_evaluate@@YAXFJ_N@Z");
//};

//void survival_mode_ammo_crates_enable_hs_survival_get_enable_ammo_crates_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?survival_mode_ammo_crates_enable_hs_survival_get_enable_ammo_crates_0_evaluate@@YAXFJ_N@Z");
//};

//void survival_mode_generator_defend_all_hs_survival_get_generator_defend_all_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?survival_mode_generator_defend_all_hs_survival_get_generator_defend_all_0_evaluate@@YAXFJ_N@Z");
//};

//void survival_mode_generator_random_spawn_hs_survival_get_generator_random_spawn_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?survival_mode_generator_random_spawn_hs_survival_get_generator_random_spawn_0_evaluate@@YAXFJ_N@Z");
//};

//void survival_mode_current_wave_uses_dropship_survival_mode_current_wave_uses_dropship_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?survival_mode_current_wave_uses_dropship_survival_mode_current_wave_uses_dropship_0_evaluate@@YAXFJ_N@Z");
//};

//void survival_mode_get_current_wave_time_limit_survival_mode_get_current_wave_time_limit_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?survival_mode_get_current_wave_time_limit_survival_mode_get_current_wave_time_limit_0_evaluate@@YAXFJ_N@Z");
//};

//void survival_mode_get_respawn_time_seconds_hs_survival_get_respawn_time_seconds_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?survival_mode_get_respawn_time_seconds_hs_survival_get_respawn_time_seconds_1_evaluate@@YAXFJ_N@Z");
//};

//void survival_mode_team_respawns_on_wave_hs_survival_get_team_respawns_on_wave_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?survival_mode_team_respawns_on_wave_hs_survival_get_team_respawns_on_wave_1_evaluate@@YAXFJ_N@Z");
//};

//void survival_mode_sudden_death_survival_mode_sudden_death_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?survival_mode_sudden_death_survival_mode_sudden_death_1_evaluate@@YAXFJ_N@Z");
//};

//void survival_increment_human_score_survival_mode_increment_human_score_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?survival_increment_human_score_survival_mode_increment_human_score_1_evaluate@@YAXFJ_N@Z");
//};

//void survival_increment_elite_score_survival_mode_increment_elite_score_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?survival_increment_elite_score_survival_mode_increment_elite_score_1_evaluate@@YAXFJ_N@Z");
//};

//void survival_mode_set_spartan_license_plate_survival_mode_set_spartan_license_plate_5_evaluate(short, long, bool)
//{
//    mangled_ppc("?survival_mode_set_spartan_license_plate_survival_mode_set_spartan_license_plate_5_evaluate@@YAXFJ_N@Z");
//};

//void survival_mode_set_elite_license_plate_survival_mode_set_elite_license_plate_5_evaluate(short, long, bool)
//{
//    mangled_ppc("?survival_mode_set_elite_license_plate_survival_mode_set_elite_license_plate_5_evaluate@@YAXFJ_N@Z");
//};

//void survival_mode_player_count_by_team_survival_mode_player_count_by_team_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?survival_mode_player_count_by_team_survival_mode_player_count_by_team_1_evaluate@@YAXFJ_N@Z");
//};

//void survival_mode_players_by_team_survival_players_by_team_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?survival_mode_players_by_team_survival_players_by_team_1_evaluate@@YAXFJ_N@Z");
//};

//void sound_impulse_predict_scripted_sound_predict_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?sound_impulse_predict_scripted_sound_predict_1_evaluate@@YAXFJ_N@Z");
//};

//void sound_impulse_trigger_scripted_sound_trigger_4_evaluate(short, long, bool)
//{
//    mangled_ppc("?sound_impulse_trigger_scripted_sound_trigger_4_evaluate@@YAXFJ_N@Z");
//};

//void sound_impulse_start_scripted_sound_new_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?sound_impulse_start_scripted_sound_new_3_evaluate@@YAXFJ_N@Z");
//};

//void sound_impulse_start_cinematic_scripted_sound_new_cutscene_5_evaluate(short, long, bool)
//{
//    mangled_ppc("?sound_impulse_start_cinematic_scripted_sound_new_cutscene_5_evaluate@@YAXFJ_N@Z");
//};

//void sound_impulse_start_effect_scripted_sound_new_with_effect_4_evaluate(short, long, bool)
//{
//    mangled_ppc("?sound_impulse_start_effect_scripted_sound_new_with_effect_4_evaluate@@YAXFJ_N@Z");
//};

//void sound_impulse_start_with_subtitle_scripted_sound_new_with_subtitle_5_evaluate(short, long, bool)
//{
//    mangled_ppc("?sound_impulse_start_with_subtitle_scripted_sound_new_with_subtitle_5_evaluate@@YAXFJ_N@Z");
//};

//void sound_impulse_time_scripted_sound_time_legacy_do_not_use_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?sound_impulse_time_scripted_sound_time_legacy_do_not_use_1_evaluate@@YAXFJ_N@Z");
//};

//void sound_impulse_time_scripted_sound_time_explicit_hs_ticks_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?sound_impulse_time_scripted_sound_time_explicit_hs_ticks_2_evaluate@@YAXFJ_N@Z");
//};

//void sound_impulse_language_time_scripted_sound_language_time_explicit_hs_ticks_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?sound_impulse_language_time_scripted_sound_language_time_explicit_hs_ticks_1_evaluate@@YAXFJ_N@Z");
//};

//void sound_impulse_stop_scripted_sound_stop_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?sound_impulse_stop_scripted_sound_stop_1_evaluate@@YAXFJ_N@Z");
//};

//void sound_impulse_start_3d_scripted_sound_new_3d_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?sound_impulse_start_3d_scripted_sound_new_3d_3_evaluate@@YAXFJ_N@Z");
//};

//void sound_impulse_mark_as_outro_scripted_sound_mark_as_outro_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?sound_impulse_mark_as_outro_scripted_sound_mark_as_outro_1_evaluate@@YAXFJ_N@Z");
//};

//void sound_impulse_start_naked_scripted_sound_new_naked_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?sound_impulse_start_naked_scripted_sound_new_naked_3_evaluate@@YAXFJ_N@Z");
//};

//void sound_preload_dialogue_sounds_scripted_sound_preload_dialogue_sounds_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?sound_preload_dialogue_sounds_scripted_sound_preload_dialogue_sounds_1_evaluate@@YAXFJ_N@Z");
//};

//void sound_looping_predict_scripted_foley_predict_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?sound_looping_predict_scripted_foley_predict_1_evaluate@@YAXFJ_N@Z");
//};

//void sound_looping_start_with_effect_scripted_looping_sound_start_with_effect_4_evaluate(short, long, bool)
//{
//    mangled_ppc("?sound_looping_start_with_effect_scripted_looping_sound_start_with_effect_4_evaluate@@YAXFJ_N@Z");
//};

//void sound_looping_start_scripted_looping_sound_start_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?sound_looping_start_scripted_looping_sound_start_3_evaluate@@YAXFJ_N@Z");
//};

//void sound_looping_resume_scripted_looping_sound_resume_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?sound_looping_resume_scripted_looping_sound_resume_3_evaluate@@YAXFJ_N@Z");
//};

//void sound_looping_stop_scripted_looping_sound_stop_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?sound_looping_stop_scripted_looping_sound_stop_1_evaluate@@YAXFJ_N@Z");
//};

//void sound_looping_stop_immediately_scripted_looping_sound_stop_immediately_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?sound_looping_stop_immediately_scripted_looping_sound_stop_immediately_1_evaluate@@YAXFJ_N@Z");
//};

//void sound_looping_set_scale_scripted_looping_sound_set_scale_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?sound_looping_set_scale_scripted_looping_sound_set_scale_2_evaluate@@YAXFJ_N@Z");
//};

//void sound_looping_set_alternate_scripted_looping_sound_set_alternate_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?sound_looping_set_alternate_scripted_looping_sound_set_alternate_2_evaluate@@YAXFJ_N@Z");
//};

//void sound_looping_activate_layer_scripted_looping_sound_activate_layer_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?sound_looping_activate_layer_scripted_looping_sound_activate_layer_2_evaluate@@YAXFJ_N@Z");
//};

//void sound_looping_deactivate_layer_scripted_looping_sound_deactivate_layer_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?sound_looping_deactivate_layer_scripted_looping_sound_deactivate_layer_2_evaluate@@YAXFJ_N@Z");
//};

//void sound_loop_spam_scripting_looping_sound_spam_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?sound_loop_spam_scripting_looping_sound_spam_0_evaluate@@YAXFJ_N@Z");
//};

//void sound_class_show_channel_sound_classes_show_in_channel_debug_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?sound_class_show_channel_sound_classes_show_in_channel_debug_2_evaluate@@YAXFJ_N@Z");
//};

//void sound_class_debug_sound_start_sound_classes_debug_sound_start_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?sound_class_debug_sound_start_sound_classes_debug_sound_start_2_evaluate@@YAXFJ_N@Z");
//};

//void debug_sounds_enable_debug_sound_classes_enable_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?debug_sounds_enable_debug_sound_classes_enable_2_evaluate@@YAXFJ_N@Z");
//};

//void sound_class_set_gain_scripting_sound_class_set_gain_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?sound_class_set_gain_scripting_sound_class_set_gain_3_evaluate@@YAXFJ_N@Z");
//};

//void sound_class_set_gain_db_scripting_sound_class_set_gain_db_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?sound_class_set_gain_db_scripting_sound_class_set_gain_db_3_evaluate@@YAXFJ_N@Z");
//};

//void sound_class_enable_ducker_scripting_sound_class_enable_ducker_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?sound_class_enable_ducker_scripting_sound_class_enable_ducker_2_evaluate@@YAXFJ_N@Z");
//};

//void debug_sound_environment_parameter_platform_sound_set_debug_sound_environment_parameter_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?debug_sound_environment_parameter_platform_sound_set_debug_sound_environment_parameter_2_evaluate@@YAXFJ_N@Z");
//};

//void sound_start_global_effect_scripted_game_sound_start_global_effect_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?sound_start_global_effect_scripted_game_sound_start_global_effect_2_evaluate@@YAXFJ_N@Z");
//};

//void sound_start_timed_global_effect_scripted_game_sound_start_timed_global_effect_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?sound_start_timed_global_effect_scripted_game_sound_start_timed_global_effect_3_evaluate@@YAXFJ_N@Z");
//};

//void sound_stop_global_effect_scripted_game_sound_stop_global_effect_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?sound_stop_global_effect_scripted_game_sound_stop_global_effect_1_evaluate@@YAXFJ_N@Z");
//};

//void sound_enable_acoustic_palette_game_sound_enable_acoustic_palette_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?sound_enable_acoustic_palette_game_sound_enable_acoustic_palette_1_evaluate@@YAXFJ_N@Z");
//};

//void sound_disable_acoustic_palette_game_sound_disable_acoustic_palette_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?sound_disable_acoustic_palette_game_sound_disable_acoustic_palette_1_evaluate@@YAXFJ_N@Z");
//};

//void vehicle_force_alternate_state_vehicle_scripting_set_alternate_state_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?vehicle_force_alternate_state_vehicle_scripting_set_alternate_state_2_evaluate@@YAXFJ_N@Z");
//};

//void vehicle_auto_turret_vehicle_set_auto_turret_5_evaluate(short, long, bool)
//{
//    mangled_ppc("?vehicle_auto_turret_vehicle_set_auto_turret_5_evaluate@@YAXFJ_N@Z");
//};

//void vehicle_hover_vehicle_hover_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?vehicle_hover_vehicle_hover_2_evaluate@@YAXFJ_N@Z");
//};

//void vehicle_count_bipeds_killed_vehicle_count_bipeds_killed_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?vehicle_count_bipeds_killed_vehicle_count_bipeds_killed_1_evaluate@@YAXFJ_N@Z");
//};

//void biped_ragdoll_biped_scripting_ragdoll_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?biped_ragdoll_biped_scripting_ragdoll_1_evaluate@@YAXFJ_N@Z");
//};

//void water_float_reset_water_physics_object_float_reset_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?water_float_reset_water_physics_object_float_reset_1_evaluate@@YAXFJ_N@Z");
//};

//void hud_show_training_text_player_training_show_scripted_training_text_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?hud_show_training_text_player_training_show_scripted_training_text_1_evaluate@@YAXFJ_N@Z");
//};

//void hud_set_training_text_player_training_set_scripted_training_text_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?hud_set_training_text_player_training_set_scripted_training_text_1_evaluate@@YAXFJ_N@Z");
//};

//void hud_enable_training_player_training_enable_scripted_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?hud_enable_training_player_training_enable_scripted_1_evaluate@@YAXFJ_N@Z");
//};

//void player_training_activate_night_vision_player_training_activate_night_vision_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?player_training_activate_night_vision_player_training_activate_night_vision_0_evaluate@@YAXFJ_N@Z");
//};

//void player_training_activate_crouch_player_training_activate_crouch_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?player_training_activate_crouch_player_training_activate_crouch_0_evaluate@@YAXFJ_N@Z");
//};

//void player_training_activate_stealth_player_training_activate_stealth_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?player_training_activate_stealth_player_training_activate_stealth_0_evaluate@@YAXFJ_N@Z");
//};

//void player_training_activate_equipment_player_training_activate_equipment_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?player_training_activate_equipment_player_training_activate_equipment_0_evaluate@@YAXFJ_N@Z");
//};

//void player_training_activate_jump_player_training_activate_jump_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?player_training_activate_jump_player_training_activate_jump_0_evaluate@@YAXFJ_N@Z");
//};

//void player_training_reset_player_training_reset_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?player_training_reset_player_training_reset_1_evaluate@@YAXFJ_N@Z");
//};

//void chud_texture_cam_chud_texture_cam_set_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?chud_texture_cam_chud_texture_cam_set_1_evaluate@@YAXFJ_N@Z");
//};

//void chud_show_chud_scripting_show_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?chud_show_chud_scripting_show_1_evaluate@@YAXFJ_N@Z");
//};

//void chud_show_weapon_stats_chud_scripting_show_weapon_stats_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?chud_show_weapon_stats_chud_scripting_show_weapon_stats_1_evaluate@@YAXFJ_N@Z");
//};

//void chud_show_crosshair_chud_scripting_show_crosshair_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?chud_show_crosshair_chud_scripting_show_crosshair_1_evaluate@@YAXFJ_N@Z");
//};

//void chud_show_shield_chud_scripting_show_shield_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?chud_show_shield_chud_scripting_show_shield_1_evaluate@@YAXFJ_N@Z");
//};

//void chud_show_grenades_chud_scripting_show_grenades_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?chud_show_grenades_chud_scripting_show_grenades_1_evaluate@@YAXFJ_N@Z");
//};

//void chud_show_messages_chud_scripting_show_messages_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?chud_show_messages_chud_scripting_show_messages_1_evaluate@@YAXFJ_N@Z");
//};

//void chud_show_motion_sensor_chud_scripting_show_motion_sensor_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?chud_show_motion_sensor_chud_scripting_show_motion_sensor_1_evaluate@@YAXFJ_N@Z");
//};

//void chud_show_cinematics_chud_scripting_show_cinematics_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?chud_show_cinematics_chud_scripting_show_cinematics_1_evaluate@@YAXFJ_N@Z");
//};

//void chud_fade_weapon_stats_for_player_chud_scripting_class_fade_weapon_stats_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?chud_fade_weapon_stats_for_player_chud_scripting_class_fade_weapon_stats_3_evaluate@@YAXFJ_N@Z");
//};

//void chud_fade_crosshair_for_player_chud_scripting_class_fade_crosshair_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?chud_fade_crosshair_for_player_chud_scripting_class_fade_crosshair_3_evaluate@@YAXFJ_N@Z");
//};

//void chud_fade_shield_for_player_chud_scripting_class_fade_shield_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?chud_fade_shield_for_player_chud_scripting_class_fade_shield_3_evaluate@@YAXFJ_N@Z");
//};

//void chud_fade_grenades_for_player_chud_scripting_class_fade_grenades_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?chud_fade_grenades_for_player_chud_scripting_class_fade_grenades_3_evaluate@@YAXFJ_N@Z");
//};

//void chud_fade_messages_for_player_chud_scripting_class_fade_messages_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?chud_fade_messages_for_player_chud_scripting_class_fade_messages_3_evaluate@@YAXFJ_N@Z");
//};

//void chud_fade_motion_sensor_for_player_chud_scripting_class_fade_motion_sensor_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?chud_fade_motion_sensor_for_player_chud_scripting_class_fade_motion_sensor_3_evaluate@@YAXFJ_N@Z");
//};

//void chud_fade_chapter_title_for_player_chud_scripting_class_fade_chapter_title_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?chud_fade_chapter_title_for_player_chud_scripting_class_fade_chapter_title_3_evaluate@@YAXFJ_N@Z");
//};

//void chud_fade_cinematics_for_player_chud_scripting_class_fade_cinematics_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?chud_fade_cinematics_for_player_chud_scripting_class_fade_cinematics_3_evaluate@@YAXFJ_N@Z");
//};

//void chud_cinematic_fade_chud_scripting_set_fade_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?chud_cinematic_fade_chud_scripting_set_fade_2_evaluate@@YAXFJ_N@Z");
//};

//void chud_track_object_chud_scripting_track_object_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?chud_track_object_chud_scripting_track_object_2_evaluate@@YAXFJ_N@Z");
//};

//void chud_track_object_with_priority_chud_scripting_track_object_with_priority_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?chud_track_object_with_priority_chud_scripting_track_object_with_priority_2_evaluate@@YAXFJ_N@Z");
//};

//void chud_track_object_with_priority_chud_scripting_track_object_with_priority_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?chud_track_object_with_priority_chud_scripting_track_object_with_priority_3_evaluate@@YAXFJ_N@Z");
//};

//void chud_track_flag_chud_scripting_track_cutscene_flag_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?chud_track_flag_chud_scripting_track_cutscene_flag_2_evaluate@@YAXFJ_N@Z");
//};

//void chud_track_flag_with_priority_chud_scripting_track_cutscene_flag_with_priority_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?chud_track_flag_with_priority_chud_scripting_track_cutscene_flag_with_priority_2_evaluate@@YAXFJ_N@Z");
//};

//void chud_track_flag_with_priority_chud_scripting_track_cutscene_flag_with_priority_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?chud_track_flag_with_priority_chud_scripting_track_cutscene_flag_with_priority_3_evaluate@@YAXFJ_N@Z");
//};

//void chud_track_object_for_player_chud_scripting_track_object_for_player_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?chud_track_object_for_player_chud_scripting_track_object_for_player_3_evaluate@@YAXFJ_N@Z");
//};

//void chud_track_object_for_player_with_priority_chud_scripting_track_object_for_player_with_priority_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?chud_track_object_for_player_with_priority_chud_scripting_track_object_for_player_with_priority_3_evaluate@@YAXFJ_N@Z");
//};

//void chud_track_object_for_player_with_priority_chud_scripting_track_object_for_player_with_priority_4_evaluate(short, long, bool)
//{
//    mangled_ppc("?chud_track_object_for_player_with_priority_chud_scripting_track_object_for_player_with_priority_4_evaluate@@YAXFJ_N@Z");
//};

//void chud_track_flag_for_player_chud_scripting_track_cutscene_flag_for_player_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?chud_track_flag_for_player_chud_scripting_track_cutscene_flag_for_player_3_evaluate@@YAXFJ_N@Z");
//};

//void chud_track_flag_for_player_with_priority_chud_scripting_track_cutscene_flag_for_player_with_priority_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?chud_track_flag_for_player_with_priority_chud_scripting_track_cutscene_flag_for_player_with_priority_3_evaluate@@YAXFJ_N@Z");
//};

//void chud_track_flag_for_player_with_priority_chud_scripting_track_cutscene_flag_for_player_with_priority_4_evaluate(short, long, bool)
//{
//    mangled_ppc("?chud_track_flag_for_player_with_priority_chud_scripting_track_cutscene_flag_for_player_with_priority_4_evaluate@@YAXFJ_N@Z");
//};

//void chud_track_object_set_vertical_offset_chud_scripting_object_set_vertical_offset_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?chud_track_object_set_vertical_offset_chud_scripting_object_set_vertical_offset_2_evaluate@@YAXFJ_N@Z");
//};

//void chud_track_cutscene_flag_set_vertical_offset_chud_scripting_cutscene_flag_set_vertical_offset_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?chud_track_cutscene_flag_set_vertical_offset_chud_scripting_cutscene_flag_set_vertical_offset_2_evaluate@@YAXFJ_N@Z");
//};

//void chud_post_message_HACK_chud_scripting_post_message_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?chud_post_message_HACK_chud_scripting_post_message_1_evaluate@@YAXFJ_N@Z");
//};

//void chud_post_message_chud_scripting_post_message_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?chud_post_message_chud_scripting_post_message_2_evaluate@@YAXFJ_N@Z");
//};

//void chud_post_medal_chud_messaging_post_medal_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?chud_post_medal_chud_messaging_post_medal_2_evaluate@@YAXFJ_N@Z");
//};

//void chud_set_static_hs_variable_chud_scripting_set_static_hs_variable_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?chud_set_static_hs_variable_chud_scripting_set_static_hs_variable_3_evaluate@@YAXFJ_N@Z");
//};

//void chud_set_countdown_hs_variable_chud_scripting_set_countdown_hs_variable_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?chud_set_countdown_hs_variable_chud_scripting_set_countdown_hs_variable_3_evaluate@@YAXFJ_N@Z");
//};

//void chud_set_countup_hs_variable_chud_scripting_set_countup_hs_variable_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?chud_set_countup_hs_variable_chud_scripting_set_countup_hs_variable_3_evaluate@@YAXFJ_N@Z");
//};

//void chud_clear_hs_variable_chud_scripting_clear_hs_variable_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?chud_clear_hs_variable_chud_scripting_clear_hs_variable_2_evaluate@@YAXFJ_N@Z");
//};

//void chud_get_hs_variable_chud_scripting_get_hs_variable_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?chud_get_hs_variable_chud_scripting_get_hs_variable_2_evaluate@@YAXFJ_N@Z");
//};

//void chud_show_arbiter_ai_navpoint_chud_show_arbiter_ai_navpoint_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?chud_show_arbiter_ai_navpoint_chud_show_arbiter_ai_navpoint_1_evaluate@@YAXFJ_N@Z");
//};

//void chud_show_screen_objective_chud_scripting_show_screen_objective_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?chud_show_screen_objective_chud_scripting_show_screen_objective_1_evaluate@@YAXFJ_N@Z");
//};

//void chud_show_screen_chapter_title_chud_scripting_show_screen_chapter_title_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?chud_show_screen_chapter_title_chud_scripting_show_screen_chapter_title_1_evaluate@@YAXFJ_N@Z");
//};

//void chud_show_screen_training_chud_scripting_show_screen_training_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?chud_show_screen_training_chud_scripting_show_screen_training_2_evaluate@@YAXFJ_N@Z");
//};

//void cls_terminal_clear_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?cls_terminal_clear_0_evaluate@@YAXFJ_N@Z");
//};

//void events_spam_suppression_enable_events_spam_suppression_enable_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?events_spam_suppression_enable_events_spam_suppression_enable_1_evaluate@@YAXFJ_N@Z");
//};

//void error_geometry_show_error_report_show_substring_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?error_geometry_show_error_report_show_substring_1_evaluate@@YAXFJ_N@Z");
//};

//void error_geometry_hide_error_report_hide_substring_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?error_geometry_hide_error_report_hide_substring_1_evaluate@@YAXFJ_N@Z");
//};

//void error_geometry_show_all_error_report_show_all_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?error_geometry_show_all_error_report_show_all_0_evaluate@@YAXFJ_N@Z");
//};

//void error_geometry_hide_all_error_report_hide_all_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?error_geometry_hide_all_error_report_hide_all_0_evaluate@@YAXFJ_N@Z");
//};

//void error_geometry_list_error_report_list_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?error_geometry_list_error_report_list_0_evaluate@@YAXFJ_N@Z");
//};

//void player_effect_set_max_translation_scripted_player_effect_set_translation_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?player_effect_set_max_translation_scripted_player_effect_set_translation_3_evaluate@@YAXFJ_N@Z");
//};

//void player_effect_set_max_rotation_scripted_player_effect_set_rotation_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?player_effect_set_max_rotation_scripted_player_effect_set_rotation_3_evaluate@@YAXFJ_N@Z");
//};

//void player_effect_set_max_rumble_scripted_player_effect_set_rumble_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?player_effect_set_max_rumble_scripted_player_effect_set_rumble_2_evaluate@@YAXFJ_N@Z");
//};

//void player_effect_start_scripted_player_effect_start_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?player_effect_start_scripted_player_effect_start_2_evaluate@@YAXFJ_N@Z");
//};

//void player_effect_stop_scripted_player_effect_stop_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?player_effect_stop_scripted_player_effect_stop_1_evaluate@@YAXFJ_N@Z");
//};

//void player_effect_set_max_translation_for_player_scripted_player_effect_set_translation_for_player_4_evaluate(short, long, bool)
//{
//    mangled_ppc("?player_effect_set_max_translation_for_player_scripted_player_effect_set_translation_for_player_4_evaluate@@YAXFJ_N@Z");
//};

//void player_effect_set_max_rotation_for_player_scripted_player_effect_set_rotation_for_player_4_evaluate(short, long, bool)
//{
//    mangled_ppc("?player_effect_set_max_rotation_for_player_scripted_player_effect_set_rotation_for_player_4_evaluate@@YAXFJ_N@Z");
//};

//void player_effect_set_max_rumble_for_player_scripted_player_effect_set_rumble_for_player_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?player_effect_set_max_rumble_for_player_scripted_player_effect_set_rumble_for_player_3_evaluate@@YAXFJ_N@Z");
//};

//void player_effect_start_for_player_scripted_player_effect_start_for_player_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?player_effect_start_for_player_scripted_player_effect_start_for_player_3_evaluate@@YAXFJ_N@Z");
//};

//void player_effect_stop_for_player_scripted_player_effect_stop_for_player_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?player_effect_stop_for_player_scripted_player_effect_stop_for_player_2_evaluate@@YAXFJ_N@Z");
//};

//void time_code_show_scripted_time_code_show_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?time_code_show_scripted_time_code_show_1_evaluate@@YAXFJ_N@Z");
//};

//void time_code_start_scripted_time_code_start_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?time_code_start_scripted_time_code_start_1_evaluate@@YAXFJ_N@Z");
//};

//void time_code_reset_scripted_time_code_reset_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?time_code_reset_scripted_time_code_reset_0_evaluate@@YAXFJ_N@Z");
//};

//void script_screen_effect_set_value_rasterizer_script_screen_effect_set_value_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?script_screen_effect_set_value_rasterizer_script_screen_effect_set_value_2_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_screen_effect_start_rasterizer_screen_effect_start_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_screen_effect_start_rasterizer_screen_effect_start_1_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_screen_effect_set_crossfade_rasterizer_screen_effect_set_crossfade_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_screen_effect_set_crossfade_rasterizer_screen_effect_set_crossfade_1_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_screen_effect_set_crossfade2_rasterizer_screen_effect_set_crossfade2_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_screen_effect_set_crossfade2_rasterizer_screen_effect_set_crossfade2_2_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_screen_effect_stop_rasterizer_screen_effect_stop_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_screen_effect_stop_rasterizer_screen_effect_stop_0_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_set_near_clip_distance_rasterizer_set_near_clip_distance_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_set_near_clip_distance_rasterizer_set_near_clip_distance_1_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_set_far_clip_distance_rasterizer_set_far_clip_distance_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_set_far_clip_distance_rasterizer_set_far_clip_distance_1_evaluate@@YAXFJ_N@Z");
//};

//void render_atmosphere_fog_rasterizer_game_state_set_atmosphere_fog_enable_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?render_atmosphere_fog_rasterizer_game_state_set_atmosphere_fog_enable_1_evaluate@@YAXFJ_N@Z");
//};

//void motion_blur_rasterizer_game_state_set_motion_blur_enable_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?motion_blur_rasterizer_game_state_set_motion_blur_enable_1_evaluate@@YAXFJ_N@Z");
//};

//void antialias_blur_rasterizer_game_state_set_antialias_blur_enable_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?antialias_blur_rasterizer_game_state_set_antialias_blur_enable_1_evaluate@@YAXFJ_N@Z");
//};

//void render_weather_rasterizer_game_state_set_weather_enable_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?render_weather_rasterizer_game_state_set_weather_enable_1_evaluate@@YAXFJ_N@Z");
//};

//void render_patchy_fog_rasterizer_game_state_set_patchy_fog_enable_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?render_patchy_fog_rasterizer_game_state_set_patchy_fog_enable_1_evaluate@@YAXFJ_N@Z");
//};

//void render_ssao_rasterizer_game_state_set_ssao_enable_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?render_ssao_rasterizer_game_state_set_ssao_enable_1_evaluate@@YAXFJ_N@Z");
//};

//void render_planar_fog_rasterizer_game_state_set_planar_fog_enable_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?render_planar_fog_rasterizer_game_state_set_planar_fog_enable_1_evaluate@@YAXFJ_N@Z");
//};

//void motion_blur_enabled_rasterizer_game_state_get_motion_blur_enabled_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?motion_blur_enabled_rasterizer_game_state_get_motion_blur_enabled_0_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_set_environment_map_attenuation_rasterizer_set_cinematic_environment_map_attenuation_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_set_environment_map_attenuation_rasterizer_set_cinematic_environment_map_attenuation_3_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_set_environment_map_bitmap_rasterizer_set_cinematic_environment_map_bitmap_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_set_environment_map_bitmap_rasterizer_set_cinematic_environment_map_bitmap_1_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_reset_environment_map_bitmap_rasterizer_reset_cinematic_environment_map_bitmap_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_reset_environment_map_bitmap_rasterizer_reset_cinematic_environment_map_bitmap_0_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_set_environment_map_tint_rasterizer_set_cinematic_environment_map_tint_8_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_set_environment_map_tint_rasterizer_set_cinematic_environment_map_tint_8_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_reset_environment_map_tint_rasterizer_reset_cinematic_environment_map_tint_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_reset_environment_map_tint_rasterizer_reset_cinematic_environment_map_tint_0_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_layer_rasterizer_set_cinematic_layer_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_layer_rasterizer_set_cinematic_layer_3_evaluate@@YAXFJ_N@Z");
//};

//void player_has_skills_game_arcani_get_unlockability_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?player_has_skills_game_arcani_get_unlockability_0_evaluate@@YAXFJ_N@Z");
//};

//void player_has_mad_secret_skills_game_arcani_unlock_stylus_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?player_has_mad_secret_skills_game_arcani_unlock_stylus_1_evaluate@@YAXFJ_N@Z");
//};

//void controller_invert_look_user_interface_controller_hack_invert_look_all_controllers_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?controller_invert_look_user_interface_controller_hack_invert_look_all_controllers_0_evaluate@@YAXFJ_N@Z");
//};

//void controller_look_speed_user_interface_controller_hack_look_speed_all_controllers_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?controller_look_speed_user_interface_controller_hack_look_speed_all_controllers_1_evaluate@@YAXFJ_N@Z");
//};

//void player_invert_look_player_invert_look_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?player_invert_look_player_invert_look_1_evaluate@@YAXFJ_N@Z");
//};

//void user_interface_controller_get_last_level_played_hs_user_interface_controller_get_last_level_played_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?user_interface_controller_get_last_level_played_hs_user_interface_controller_get_last_level_played_1_evaluate@@YAXFJ_N@Z");
//};

//void controller_set_look_inverted_debug_set_controller_look_inverted_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?controller_set_look_inverted_debug_set_controller_look_inverted_2_evaluate@@YAXFJ_N@Z");
//};

//void controller_set_vibration_enabled_debug_set_controller_vibration_enabled_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?controller_set_vibration_enabled_debug_set_controller_vibration_enabled_2_evaluate@@YAXFJ_N@Z");
//};

//void controller_set_flight_stick_aircraft_controls_debug_set_controller_flight_stick_aircraft_controls_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?controller_set_flight_stick_aircraft_controls_debug_set_controller_flight_stick_aircraft_controls_2_evaluate@@YAXFJ_N@Z");
//};

//void controller_set_auto_center_look_debug_set_controller_auto_center_look_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?controller_set_auto_center_look_debug_set_controller_auto_center_look_2_evaluate@@YAXFJ_N@Z");
//};

//void controller_set_crouch_lock_debug_set_controller_crouch_lock_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?controller_set_crouch_lock_debug_set_controller_crouch_lock_2_evaluate@@YAXFJ_N@Z");
//};

//void controller_set_southpaw_debug_set_controller_southpaw_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?controller_set_southpaw_debug_set_controller_southpaw_2_evaluate@@YAXFJ_N@Z");
//};

//void controller_set_clench_protection_debug_set_controller_clench_protection_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?controller_set_clench_protection_debug_set_controller_clench_protection_2_evaluate@@YAXFJ_N@Z");
//};

//void controller_set_button_preset_debug_set_button_preset_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?controller_set_button_preset_debug_set_button_preset_2_evaluate@@YAXFJ_N@Z");
//};

//void controller_set_custom_button_debug_set_custom_button_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?controller_set_custom_button_debug_set_custom_button_3_evaluate@@YAXFJ_N@Z");
//};

//void controller_set_joystick_preset_debug_set_joystick_preset_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?controller_set_joystick_preset_debug_set_joystick_preset_2_evaluate@@YAXFJ_N@Z");
//};

//void controller_set_look_sensitivity_debug_set_look_sensitivity_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?controller_set_look_sensitivity_debug_set_look_sensitivity_2_evaluate@@YAXFJ_N@Z");
//};

//void controller_unlock_single_player_levels_debug_unlock_all_single_player_levels_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?controller_unlock_single_player_levels_debug_unlock_all_single_player_levels_1_evaluate@@YAXFJ_N@Z");
//};

//void controller_lock_single_player_levels_debug_lock_all_single_player_levels_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?controller_lock_single_player_levels_debug_lock_all_single_player_levels_1_evaluate@@YAXFJ_N@Z");
//};

//void controller_unlock_skulls_debug_unlock_all_skulls_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?controller_unlock_skulls_debug_unlock_all_skulls_1_evaluate@@YAXFJ_N@Z");
//};

//void controller_lock_skulls_debug_lock_all_skulls_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?controller_lock_skulls_debug_lock_all_skulls_1_evaluate@@YAXFJ_N@Z");
//};

//void controller_unlock_models_debug_unlock_all_models_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?controller_unlock_models_debug_unlock_all_models_1_evaluate@@YAXFJ_N@Z");
//};

//void controller_lock_models_debug_lock_all_models_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?controller_lock_models_debug_lock_all_models_1_evaluate@@YAXFJ_N@Z");
//};

//void controller_set_single_player_level_completed_debug_set_single_player_level_completed_5_evaluate(short, long, bool)
//{
//    mangled_ppc("?controller_set_single_player_level_completed_debug_set_single_player_level_completed_5_evaluate@@YAXFJ_N@Z");
//};

//void controller_set_primary_change_color_debug_set_primary_change_color_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?controller_set_primary_change_color_debug_set_primary_change_color_2_evaluate@@YAXFJ_N@Z");
//};

//void controller_set_secondary_change_color_debug_set_secondary_change_color_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?controller_set_secondary_change_color_debug_set_secondary_change_color_2_evaluate@@YAXFJ_N@Z");
//};

//void controller_set_tertiary_change_color_debug_set_tertiary_change_color_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?controller_set_tertiary_change_color_debug_set_tertiary_change_color_2_evaluate@@YAXFJ_N@Z");
//};

//void controller_set_primary_emblem_color_debug_set_primary_emblem_color_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?controller_set_primary_emblem_color_debug_set_primary_emblem_color_2_evaluate@@YAXFJ_N@Z");
//};

//void controller_set_secondary_emblem_color_debug_set_secondary_emblem_color_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?controller_set_secondary_emblem_color_debug_set_secondary_emblem_color_2_evaluate@@YAXFJ_N@Z");
//};

//void controller_set_background_emblem_color_debug_set_background_emblem_color_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?controller_set_background_emblem_color_debug_set_background_emblem_color_2_evaluate@@YAXFJ_N@Z");
//};

//void controller_set_player_character_type_debug_set_player_model_choice_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?controller_set_player_character_type_debug_set_player_model_choice_2_evaluate@@YAXFJ_N@Z");
//};

//void controller_set_emblem_info_debug_set_emblem_info_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?controller_set_emblem_info_debug_set_emblem_info_3_evaluate@@YAXFJ_N@Z");
//};

//void controller_set_voice_output_setting_debug_set_voice_output_setting_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?controller_set_voice_output_setting_debug_set_voice_output_setting_2_evaluate@@YAXFJ_N@Z");
//};

//void controller_set_subtitle_setting_debug_set_subtitle_setting_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?controller_set_subtitle_setting_debug_set_subtitle_setting_2_evaluate@@YAXFJ_N@Z");
//};

//void controller_set_nag_message_data_debug_set_nag_message_data_5_evaluate(short, long, bool)
//{
//    mangled_ppc("?controller_set_nag_message_data_debug_set_nag_message_data_5_evaluate@@YAXFJ_N@Z");
//};

//void controller_temporary_users_always_attached_set_debug_temporary_user_controllers_always_attached_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?controller_temporary_users_always_attached_set_debug_temporary_user_controllers_always_attached_1_evaluate@@YAXFJ_N@Z");
//};

//void controller_set_new_user_experience_debug_set_new_user_experience_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?controller_set_new_user_experience_debug_set_new_user_experience_2_evaluate@@YAXFJ_N@Z");
//};

//void controller_set_initial_bonus_toast_debug_set_initial_bonus_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?controller_set_initial_bonus_toast_debug_set_initial_bonus_2_evaluate@@YAXFJ_N@Z");
//};

//void controller_set_loyalty_bonus_toast_debug_set_loyalty_bonus_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?controller_set_loyalty_bonus_toast_debug_set_loyalty_bonus_2_evaluate@@YAXFJ_N@Z");
//};

//void controller_set_generic_bonus_toast_debug_set_generic_bonus_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?controller_set_generic_bonus_toast_debug_set_generic_bonus_2_evaluate@@YAXFJ_N@Z");
//};

//void controller_set_unsignedin_user_controller_activate_as_unsigned_in_user_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?controller_set_unsignedin_user_controller_activate_as_unsigned_in_user_2_evaluate@@YAXFJ_N@Z");
//};

//void controller_display_storage_device_selection_controller_display_storage_device_selection_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?controller_display_storage_device_selection_controller_display_storage_device_selection_1_evaluate@@YAXFJ_N@Z");
//};

//void font_cache_bitmap_save_font_cache_bitmap_save_to_targa_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?font_cache_bitmap_save_font_cache_bitmap_save_to_targa_1_evaluate@@YAXFJ_N@Z");
//};

//void ui_debug_load_main_menu_user_interface_enter_game_shell_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?ui_debug_load_main_menu_user_interface_enter_game_shell_0_evaluate@@YAXFJ_N@Z");
//};

//void ui_debug_text_bounds_debug_enable_text_bounds_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?ui_debug_text_bounds_debug_enable_text_bounds_1_evaluate@@YAXFJ_N@Z");
//};

//void ui_debug_text_font_user_interface_text_debug_display_font_index_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?ui_debug_text_font_user_interface_text_debug_display_font_index_1_evaluate@@YAXFJ_N@Z");
//};

//void ui_debug_show_title_safe_bounds_debug_render_title_safe_bounds_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?ui_debug_show_title_safe_bounds_debug_render_title_safe_bounds_1_evaluate@@YAXFJ_N@Z");
//};

//void ui_debug_element_bounds_set_debug_frame_element_bounds_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?ui_debug_element_bounds_set_debug_frame_element_bounds_1_evaluate@@YAXFJ_N@Z");
//};

//void ui_memory_dump_user_interface_memory_dump_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?ui_memory_dump_user_interface_memory_dump_1_evaluate@@YAXFJ_N@Z");
//};

//void ui_time_scale_step_user_interface_time_step_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?ui_time_scale_step_user_interface_time_step_1_evaluate@@YAXFJ_N@Z");
//};

//void xoverlapped_debug_render_overlapped_task_toggle_debug_rendering_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?xoverlapped_debug_render_overlapped_task_toggle_debug_rendering_1_evaluate@@YAXFJ_N@Z");
//};

//void shader_compile_target_platform_shader_compile_target_platform_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?shader_compile_target_platform_shader_compile_target_platform_1_evaluate@@YAXFJ_N@Z");
//};

//void shader_compile_shader_pipeline_shader_compile_shader_pipeline_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?shader_compile_shader_pipeline_shader_compile_shader_pipeline_1_evaluate@@YAXFJ_N@Z");
//};

//void shader_compile_filter_shader_type_shader_compile_filter_shader_type_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?shader_compile_filter_shader_type_shader_compile_filter_shader_type_1_evaluate@@YAXFJ_N@Z");
//};

//void shader_compile_filter_category_option_shader_compile_filter_category_option_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?shader_compile_filter_category_option_shader_compile_filter_category_option_2_evaluate@@YAXFJ_N@Z");
//};

//void gui_load_screen_window_manager_load_screen_hs_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?gui_load_screen_window_manager_load_screen_hs_1_evaluate@@YAXFJ_N@Z");
//};

//void gui_reset_window_manager_reset_screens_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?gui_reset_window_manager_reset_screens_0_evaluate@@YAXFJ_N@Z");
//};

//void gui_start_location_manager_start_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?gui_start_location_manager_start_0_evaluate@@YAXFJ_N@Z");
//};

//void gui_stop_location_manager_stop_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?gui_stop_location_manager_stop_0_evaluate@@YAXFJ_N@Z");
//};

//void gui_error_post_user_interface_errors_post_hs_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?gui_error_post_user_interface_errors_post_hs_3_evaluate@@YAXFJ_N@Z");
//};

//void user_interface_errors_post_hs(long, long, bool)
//{
//    mangled_ppc("?user_interface_errors_post_hs@@YAXJJ_N@Z");
//};

//void gui_error_post_toast_user_interface_errors_post_toast_hs_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?gui_error_post_toast_user_interface_errors_post_toast_hs_3_evaluate@@YAXFJ_N@Z");
//};

//void user_interface_errors_post_toast_hs(long, long, bool)
//{
//    mangled_ppc("?user_interface_errors_post_toast_hs@@YAXJJ_N@Z");
//};

//void gui_error_resolve_user_interface_errors_resolve_hs_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?gui_error_resolve_user_interface_errors_resolve_hs_2_evaluate@@YAXFJ_N@Z");
//};

//void user_interface_errors_resolve_hs(long, long)
//{
//    mangled_ppc("?user_interface_errors_resolve_hs@@YAXJJ@Z");
//};

//void gui_error_clear_user_interface_errors_clear_hs_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?gui_error_clear_user_interface_errors_clear_hs_2_evaluate@@YAXFJ_N@Z");
//};

//void user_interface_errors_clear_hs(long, long)
//{
//    mangled_ppc("?user_interface_errors_clear_hs@@YAXJJ@Z");
//};

//void gui_dialog_show_cui_load_dialog_hs_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?gui_dialog_show_cui_load_dialog_hs_1_evaluate@@YAXFJ_N@Z");
//};

//void gui_debug_music_state_user_interface_music_manager_toggle_debug_render_music_state_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?gui_debug_music_state_user_interface_music_manager_toggle_debug_render_music_state_1_evaluate@@YAXFJ_N@Z");
//};

//void cc_enable_closed_caption_enable_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?cc_enable_closed_caption_enable_1_evaluate@@YAXFJ_N@Z");
//};

//void cc_test_closed_caption_test_add_line_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?cc_test_closed_caption_test_add_line_1_evaluate@@YAXFJ_N@Z");
//};

//void objectives_clear_user_interface_objectives_clear_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?objectives_clear_user_interface_objectives_clear_0_evaluate@@YAXFJ_N@Z");
//};

//void objectives_show_up_to_user_interface_primary_objectives_show_up_to_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?objectives_show_up_to_user_interface_primary_objectives_show_up_to_1_evaluate@@YAXFJ_N@Z");
//};

//void objectives_finish_up_to_user_interface_primary_objectives_finish_up_to_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?objectives_finish_up_to_user_interface_primary_objectives_finish_up_to_1_evaluate@@YAXFJ_N@Z");
//};

//void objectives_show_user_interface_primary_objective_show_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?objectives_show_user_interface_primary_objective_show_1_evaluate@@YAXFJ_N@Z");
//};

//void objectives_finish_user_interface_primary_objective_finish_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?objectives_finish_user_interface_primary_objective_finish_1_evaluate@@YAXFJ_N@Z");
//};

//void objectives_unavailable_user_interface_primary_objective_make_unavailable_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?objectives_unavailable_user_interface_primary_objective_make_unavailable_1_evaluate@@YAXFJ_N@Z");
//};

//void objectives_secondary_show_user_interface_secondary_objective_show_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?objectives_secondary_show_user_interface_secondary_objective_show_1_evaluate@@YAXFJ_N@Z");
//};

//void objectives_secondary_finish_user_interface_secondary_objective_finish_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?objectives_secondary_finish_user_interface_secondary_objective_finish_1_evaluate@@YAXFJ_N@Z");
//};

//void objectives_secondary_unavailable_user_interface_secondary_objective_make_unavailable_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?objectives_secondary_unavailable_user_interface_secondary_objective_make_unavailable_1_evaluate@@YAXFJ_N@Z");
//};

//void objectives_set_string_user_interface_primary_objective_set_string_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?objectives_set_string_user_interface_primary_objective_set_string_2_evaluate@@YAXFJ_N@Z");
//};

//void objectives_secondary_set_string_user_interface_secondary_objective_set_string_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?objectives_secondary_set_string_user_interface_secondary_objective_set_string_2_evaluate@@YAXFJ_N@Z");
//};

//void objectives_show_string_user_interface_primary_objective_show_string_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?objectives_show_string_user_interface_primary_objective_show_string_1_evaluate@@YAXFJ_N@Z");
//};

//void objectives_finish_string_user_interface_primary_objective_finish_string_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?objectives_finish_string_user_interface_primary_objective_finish_string_1_evaluate@@YAXFJ_N@Z");
//};

//void objectives_unavailable_string_user_interface_primary_objective_make_unavailable_string_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?objectives_unavailable_string_user_interface_primary_objective_make_unavailable_string_1_evaluate@@YAXFJ_N@Z");
//};

//void objectives_secondary_show_string_user_interface_secondary_objective_show_string_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?objectives_secondary_show_string_user_interface_secondary_objective_show_string_1_evaluate@@YAXFJ_N@Z");
//};

//void objectives_secondary_finish_string_user_interface_secondary_objective_finish_string_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?objectives_secondary_finish_string_user_interface_secondary_objective_finish_string_1_evaluate@@YAXFJ_N@Z");
//};

//void objectives_secondary_unavailable_string_user_interface_secondary_objective_make_unavailable_string_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?objectives_secondary_unavailable_string_user_interface_secondary_objective_make_unavailable_string_1_evaluate@@YAXFJ_N@Z");
//};

//void input_suppress_rumble_input_feedback_suppress_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?input_suppress_rumble_input_feedback_suppress_1_evaluate@@YAXFJ_N@Z");
//};

//void input_disable_claw_button_combos_input_disable_claw_button_combos_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?input_disable_claw_button_combos_input_disable_claw_button_combos_1_evaluate@@YAXFJ_N@Z");
//};

//void update_remote_camera_remote_camera_force_update_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?update_remote_camera_remote_camera_force_update_0_evaluate@@YAXFJ_N@Z");
//};

//void net_build_network_config_network_build_network_configuration_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?net_build_network_config_network_build_network_configuration_0_evaluate@@YAXFJ_N@Z");
//};

//void net_build_game_variant_network_build_game_variant_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?net_build_game_variant_network_build_game_variant_2_evaluate@@YAXFJ_N@Z");
//};

//void net_verify_game_variant_network_verify_packed_game_variant_file_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?net_verify_game_variant_network_verify_packed_game_variant_file_1_evaluate@@YAXFJ_N@Z");
//};

//void net_load_and_use_game_variant_network_load_and_use_packed_game_variant_file_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?net_load_and_use_game_variant_network_load_and_use_packed_game_variant_file_1_evaluate@@YAXFJ_N@Z");
//};

//void net_use_hopper_directory_online_url_use_hopper_directory_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?net_use_hopper_directory_online_url_use_hopper_directory_1_evaluate@@YAXFJ_N@Z");
//};

//void net_lsp_dump_services_and_servers_online_lsp_display_services_and_servers_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?net_lsp_dump_services_and_servers_online_lsp_display_services_and_servers_0_evaluate@@YAXFJ_N@Z");
//};

//void net_lsp_force_server_online_lsp_force_server_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?net_lsp_force_server_online_lsp_force_server_3_evaluate@@YAXFJ_N@Z");
//};

//void net_lsp_disable_server_online_lsp_disable_server_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?net_lsp_disable_server_online_lsp_disable_server_2_evaluate@@YAXFJ_N@Z");
//};

//void net_lsp_disable_service_online_lsp_disable_service_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?net_lsp_disable_service_online_lsp_disable_service_2_evaluate@@YAXFJ_N@Z");
//};

//void net_quality_dump_network_bandwidth_quality_statistics_dump_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?net_quality_dump_network_bandwidth_quality_statistics_dump_0_evaluate@@YAXFJ_N@Z");
//};

//void net_quality_clear_network_bandwidth_quality_statistics_clear_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?net_quality_clear_network_bandwidth_quality_statistics_clear_0_evaluate@@YAXFJ_N@Z");
//};

//void net_quality_set_connection_badness_history_network_bandwidth_quality_set_connection_badness_history_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?net_quality_set_connection_badness_history_network_bandwidth_quality_set_connection_badness_history_2_evaluate@@YAXFJ_N@Z");
//};

//void net_quality_set_squad_host_badness_history_network_bandwidth_quality_set_squad_host_badness_history_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?net_quality_set_squad_host_badness_history_network_bandwidth_quality_set_squad_host_badness_history_2_evaluate@@YAXFJ_N@Z");
//};

//void net_quality_set_squad_client_badness_history_network_bandwidth_quality_set_squad_client_badness_history_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?net_quality_set_squad_client_badness_history_network_bandwidth_quality_set_squad_client_badness_history_2_evaluate@@YAXFJ_N@Z");
//};

//void net_quality_set_squad_speculative_migration_badness_history_network_bandwidth_quality_set_squad_speculative_migration_badness_history_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?net_quality_set_squad_speculative_migration_badness_history_network_bandwidth_quality_set_squad_speculative_migration_badness_history_2_evaluate@@YAXFJ_N@Z");
//};

//void net_quality_set_squad_bridging_badness_history_network_bandwidth_quality_set_squad_bridging_badness_history_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?net_quality_set_squad_bridging_badness_history_network_bandwidth_quality_set_squad_bridging_badness_history_2_evaluate@@YAXFJ_N@Z");
//};

//void net_quality_set_group_host_badness_history_network_bandwidth_quality_set_group_host_badness_history_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?net_quality_set_group_host_badness_history_network_bandwidth_quality_set_group_host_badness_history_2_evaluate@@YAXFJ_N@Z");
//};

//void net_quality_set_group_client_badness_history_network_bandwidth_quality_set_group_client_badness_history_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?net_quality_set_group_client_badness_history_network_bandwidth_quality_set_group_client_badness_history_2_evaluate@@YAXFJ_N@Z");
//};

//void net_quality_set_group_speculative_migration_badness_history_network_bandwidth_quality_set_group_speculative_migration_badness_history_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?net_quality_set_group_speculative_migration_badness_history_network_bandwidth_quality_set_group_speculative_migration_badness_history_2_evaluate@@YAXFJ_N@Z");
//};

//void net_quality_set_group_bridging_badness_history_network_bandwidth_quality_set_group_bridging_badness_history_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?net_quality_set_group_bridging_badness_history_network_bandwidth_quality_set_group_bridging_badness_history_2_evaluate@@YAXFJ_N@Z");
//};

//void net_join_friend_network_session_interface_join_friend_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?net_join_friend_network_session_interface_join_friend_1_evaluate@@YAXFJ_N@Z");
//};

//void net_join_squad_to_friend_network_session_interface_join_squad_to_friend_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?net_join_squad_to_friend_network_session_interface_join_squad_to_friend_1_evaluate@@YAXFJ_N@Z");
//};

//void net_join_sessionid_network_session_interface_join_sessionid_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?net_join_sessionid_network_session_interface_join_sessionid_1_evaluate@@YAXFJ_N@Z");
//};

//void net_join_squad_to_sessionid_network_session_interface_join_squad_to_sessionid_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?net_join_squad_to_sessionid_network_session_interface_join_squad_to_sessionid_1_evaluate@@YAXFJ_N@Z");
//};

//void net_enable_join_friend_loop_network_session_interface_enable_join_friend_loop_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?net_enable_join_friend_loop_network_session_interface_enable_join_friend_loop_1_evaluate@@YAXFJ_N@Z");
//};

//void net_set_maximum_player_count_network_squad_session_set_maximum_player_count_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?net_set_maximum_player_count_network_squad_session_set_maximum_player_count_1_evaluate@@YAXFJ_N@Z");
//};

//void net_status_filter_network_status_filter_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?net_status_filter_network_status_filter_1_evaluate@@YAXFJ_N@Z");
//};

//void net_test_ping_network_test_ping_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?net_test_ping_network_test_ping_0_evaluate@@YAXFJ_N@Z");
//};

//void net_test_channel_delete_network_test_channels_delete_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?net_test_channel_delete_network_test_channels_delete_0_evaluate@@YAXFJ_N@Z");
//};

//void net_test_delegate_host_network_test_delegate_host_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?net_test_delegate_host_network_test_delegate_host_1_evaluate@@YAXFJ_N@Z");
//};

//void net_test_delegate_leader_network_test_delegate_leadership_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?net_test_delegate_leader_network_test_delegate_leadership_1_evaluate@@YAXFJ_N@Z");
//};

//void net_test_map_name_network_test_set_map_name_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?net_test_map_name_network_test_set_map_name_1_evaluate@@YAXFJ_N@Z");
//};

//void net_test_variant_network_test_set_game_variant_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?net_test_variant_network_test_set_game_variant_1_evaluate@@YAXFJ_N@Z");
//};

//void net_test_campaign_difficulty_network_test_set_campaign_difficulty_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?net_test_campaign_difficulty_network_test_set_campaign_difficulty_1_evaluate@@YAXFJ_N@Z");
//};

//void net_test_player_color_network_test_set_player_color_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?net_test_player_color_network_test_set_player_color_1_evaluate@@YAXFJ_N@Z");
//};

//void net_test_reset_objects_network_test_reset_objects_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?net_test_reset_objects_network_test_reset_objects_0_evaluate@@YAXFJ_N@Z");
//};

//void net_test_fatal_error_simulation_fatal_error_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?net_test_fatal_error_simulation_fatal_error_0_evaluate@@YAXFJ_N@Z");
//};

//void net_set_machine_name_network_set_machine_name_ascii_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?net_set_machine_name_network_set_machine_name_ascii_1_evaluate@@YAXFJ_N@Z");
//};

//void events_enabled_events_enable_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?events_enabled_events_enable_1_evaluate@@YAXFJ_N@Z");
//};

//void events_suppression_events_suppression_enable_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?events_suppression_events_suppression_enable_1_evaluate@@YAXFJ_N@Z");
//};

//void events_suppress_display_events_suppress_output_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?events_suppress_display_events_suppress_output_1_evaluate@@YAXFJ_N@Z");
//};

//void events_global_display_events_set_output_level_global_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?events_global_display_events_set_output_level_global_1_evaluate@@YAXFJ_N@Z");
//};

//void events_global_log_events_set_log_level_global_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?events_global_log_events_set_log_level_global_1_evaluate@@YAXFJ_N@Z");
//};

//void events_global_debugger_events_set_debug_level_global_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?events_global_debugger_events_set_debug_level_global_1_evaluate@@YAXFJ_N@Z");
//};

//void events_global_datamine_events_set_datamine_level_global_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?events_global_datamine_events_set_datamine_level_global_1_evaluate@@YAXFJ_N@Z");
//};

//void events_category_display_events_set_output_level_by_name_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?events_category_display_events_set_output_level_by_name_2_evaluate@@YAXFJ_N@Z");
//};

//void events_category_force_display_events_set_force_output_level_by_name_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?events_category_force_display_events_set_force_output_level_by_name_2_evaluate@@YAXFJ_N@Z");
//};

//void events_category_log_events_set_log_level_by_name_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?events_category_log_events_set_log_level_by_name_2_evaluate@@YAXFJ_N@Z");
//};

//void events_category_debugger_events_set_debug_level_by_name_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?events_category_debugger_events_set_debug_level_by_name_2_evaluate@@YAXFJ_N@Z");
//};

//void events_category_debugger_break_events_set_debugger_break_level_by_name_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?events_category_debugger_break_events_set_debugger_break_level_by_name_2_evaluate@@YAXFJ_N@Z");
//};

//void events_category_halt_events_set_halt_level_by_name_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?events_category_halt_events_set_halt_level_by_name_2_evaluate@@YAXFJ_N@Z");
//};

//void events_category_datamine_events_set_datamine_level_by_name_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?events_category_datamine_events_set_datamine_level_by_name_2_evaluate@@YAXFJ_N@Z");
//};

//void events_list_categories_events_dump_categories_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?events_list_categories_events_dump_categories_1_evaluate@@YAXFJ_N@Z");
//};

//void event_logs_snapshot_events_snapshot_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?event_logs_snapshot_events_snapshot_0_evaluate@@YAXFJ_N@Z");
//};

//void events_disable_suppression_events_disable_suppression_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?events_disable_suppression_events_disable_suppression_1_evaluate@@YAXFJ_N@Z");
//};

//void event_global_display_category_events_set_output_level_global_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?event_global_display_category_events_set_output_level_global_1_evaluate@@YAXFJ_N@Z");
//};

//void event_global_log_category_events_set_log_level_global_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?event_global_log_category_events_set_log_level_global_1_evaluate@@YAXFJ_N@Z");
//};

//void event_global_remote_log_category_events_set_datamine_level_global_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?event_global_remote_log_category_events_set_datamine_level_global_1_evaluate@@YAXFJ_N@Z");
//};

//void event_display_category_events_set_output_level_by_name_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?event_display_category_events_set_output_level_by_name_2_evaluate@@YAXFJ_N@Z");
//};

//void event_force_display_category_events_set_force_output_level_by_name_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?event_force_display_category_events_set_force_output_level_by_name_2_evaluate@@YAXFJ_N@Z");
//};

//void event_debugger_break_category_events_set_debugger_break_level_by_name_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?event_debugger_break_category_events_set_debugger_break_level_by_name_2_evaluate@@YAXFJ_N@Z");
//};

//void event_halt_category_events_set_halt_level_by_name_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?event_halt_category_events_set_halt_level_by_name_2_evaluate@@YAXFJ_N@Z");
//};

//void event_list_categories_events_dump_categories_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?event_list_categories_events_dump_categories_1_evaluate@@YAXFJ_N@Z");
//};

//void events_suppress_console_display_events_suppress_output_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?events_suppress_console_display_events_suppress_output_1_evaluate@@YAXFJ_N@Z");
//};

//void play_bink_movie_play_bink_movie_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?play_bink_movie_play_bink_movie_1_evaluate@@YAXFJ_N@Z");
//};

//void play_bink_movie_from_tag_play_bink_movie_from_tag_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?play_bink_movie_from_tag_play_bink_movie_from_tag_1_evaluate@@YAXFJ_N@Z");
//};

//void play_credits_skip_to_menu_play_credits_movie_skippable_to_main_menu_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?play_credits_skip_to_menu_play_credits_movie_skippable_to_main_menu_0_evaluate@@YAXFJ_N@Z");
//};

//void bink_time_bink_playback_time_left_hs_ticks_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?bink_time_bink_playback_time_left_hs_ticks_0_evaluate@@YAXFJ_N@Z");
//};

//void set_global_doppler_factor_platform_sound_set_global_doppler_factor_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?set_global_doppler_factor_platform_sound_set_global_doppler_factor_1_evaluate@@YAXFJ_N@Z");
//};

//void set_global_mixbin_headroom_platform_sound_set_global_mixbin_headroom_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?set_global_mixbin_headroom_platform_sound_set_global_mixbin_headroom_2_evaluate@@YAXFJ_N@Z");
//};

//void debug_sound_environment_source_parameter_platform_sound_set_sound_environment_source_parameter_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?debug_sound_environment_source_parameter_platform_sound_set_sound_environment_source_parameter_2_evaluate@@YAXFJ_N@Z");
//};

//void data_mine_set_mission_segment_data_mine_usability_set_mission_segment_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?data_mine_set_mission_segment_data_mine_usability_set_mission_segment_1_evaluate@@YAXFJ_N@Z");
//};

//void data_mine_insert_data_mine_insert_text_and_camera_position_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?data_mine_insert_data_mine_insert_text_and_camera_position_1_evaluate@@YAXFJ_N@Z");
//};

//void data_mine_upload_data_mine_upload_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?data_mine_upload_data_mine_upload_0_evaluate@@YAXFJ_N@Z");
//};

//void data_mine_enable_data_mine_enable_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?data_mine_enable_data_mine_enable_1_evaluate@@YAXFJ_N@Z");
//};

//void data_mine_flush_data_mine_flush_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?data_mine_flush_data_mine_flush_0_evaluate@@YAXFJ_N@Z");
//};

//void data_mine_debug_menu_setting_data_mine_usability_set_user_experience_setting_and_close_debug_menu_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?data_mine_debug_menu_setting_data_mine_usability_set_user_experience_setting_and_close_debug_menu_1_evaluate@@YAXFJ_N@Z");
//};

//void data_mine_open_debug_menu_data_mine_usability_open_debug_menu_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?data_mine_open_debug_menu_data_mine_usability_open_debug_menu_0_evaluate@@YAXFJ_N@Z");
//};

//void data_mine_set_display_mission_segment_data_mine_set_display_mission_segment_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?data_mine_set_display_mission_segment_data_mine_set_display_mission_segment_1_evaluate@@YAXFJ_N@Z");
//};

//void data_mine_set_header_flag_data_mine_set_header_flag_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?data_mine_set_header_flag_data_mine_set_header_flag_2_evaluate@@YAXFJ_N@Z");
//};

//void test_memory_allocators_test_memory_allocators_5_evaluate(short, long, bool)
//{
//    mangled_ppc("?test_memory_allocators_test_memory_allocators_5_evaluate@@YAXFJ_N@Z");
//};

//void test_memory_allocators_test_memory_allocators_dump_to_file_6_evaluate(short, long, bool)
//{
//    mangled_ppc("?test_memory_allocators_test_memory_allocators_dump_to_file_6_evaluate@@YAXFJ_N@Z");
//};

//void display_video_standard_test_display_video_standard_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?display_video_standard_test_display_video_standard_0_evaluate@@YAXFJ_N@Z");
//};

//void test_display_video_standard(void)
//{
//    mangled_ppc("?test_display_video_standard@@YAXXZ");
//};

//void test_xcr_monkey_enable_test_xcr_monkey_enable_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?test_xcr_monkey_enable_test_xcr_monkey_enable_1_evaluate@@YAXFJ_N@Z");
//};

//void test_show_guide_status_test_show_guide_status_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?test_show_guide_status_test_show_guide_status_0_evaluate@@YAXFJ_N@Z");
//};

//void test_show_users_xuids_test_show_users_xuids_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?test_show_users_xuids_test_show_users_xuids_0_evaluate@@YAXFJ_N@Z");
//};

//void test_show_are_users_friends_test_show_are_users_friends_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?test_show_are_users_friends_test_show_are_users_friends_2_evaluate@@YAXFJ_N@Z");
//};

//void test_invite_friend_test_invite_friend_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?test_invite_friend_test_invite_friend_2_evaluate@@YAXFJ_N@Z");
//};

//void test_get_squad_session_id_test_get_squad_session_id_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?test_get_squad_session_id_test_get_squad_session_id_0_evaluate@@YAXFJ_N@Z");
//};

//void cui_get_active_screens_test_auto_cui_get_active_screens_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?cui_get_active_screens_test_auto_cui_get_active_screens_1_evaluate@@YAXFJ_N@Z");
//};

//void cui_get_screen_components_test_auto_cui_get_screen_components_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?cui_get_screen_components_test_auto_cui_get_screen_components_2_evaluate@@YAXFJ_N@Z");
//};

//void cui_get_component_properties_test_auto_cui_get_component_properties_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?cui_get_component_properties_test_auto_cui_get_component_properties_3_evaluate@@YAXFJ_N@Z");
//};

//void cui_send_button_press_test_auto_cui_send_button_press_4_evaluate(short, long, bool)
//{
//    mangled_ppc("?cui_send_button_press_test_auto_cui_send_button_press_4_evaluate@@YAXFJ_N@Z");
//};

//void cui_invoke_list_item_by_string_id_test_auto_cui_invoke_list_item_by_string_id_6_evaluate(short, long, bool)
//{
//    mangled_ppc("?cui_invoke_list_item_by_string_id_test_auto_cui_invoke_list_item_by_string_id_6_evaluate@@YAXFJ_N@Z");
//};

//void cui_invoke_list_item_by_long_test_auto_cui_invoke_list_item_by_long_6_evaluate(short, long, bool)
//{
//    mangled_ppc("?cui_invoke_list_item_by_long_test_auto_cui_invoke_list_item_by_long_6_evaluate@@YAXFJ_N@Z");
//};

//void cui_invoke_list_item_by_boolean_test_auto_cui_invoke_list_item_by_boolean_6_evaluate(short, long, bool)
//{
//    mangled_ppc("?cui_invoke_list_item_by_boolean_test_auto_cui_invoke_list_item_by_boolean_6_evaluate@@YAXFJ_N@Z");
//};

//void cui_invoke_list_item_by_text_test_auto_cui_invoke_list_item_by_text_6_evaluate(short, long, bool)
//{
//    mangled_ppc("?cui_invoke_list_item_by_text_test_auto_cui_invoke_list_item_by_text_6_evaluate@@YAXFJ_N@Z");
//};

//void test_download_storage_file_test_download_storage_file_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?test_download_storage_file_test_download_storage_file_2_evaluate@@YAXFJ_N@Z");
//};

//void test_game_results_save_to_file_test_game_results_save_to_file_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?test_game_results_save_to_file_test_game_results_save_to_file_1_evaluate@@YAXFJ_N@Z");
//};

//void test_game_results_load_from_file_test_game_results_load_from_file_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?test_game_results_load_from_file_test_game_results_load_from_file_1_evaluate@@YAXFJ_N@Z");
//};

//void test_game_results_make_random_test_game_results_make_random_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?test_game_results_make_random_test_game_results_make_random_0_evaluate@@YAXFJ_N@Z");
//};

//void test_fragment_utility_drive_test_fragment_utility_drive_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?test_fragment_utility_drive_test_fragment_utility_drive_3_evaluate@@YAXFJ_N@Z");
//};

//void clear_webcache_network_storage_cache_clear_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?clear_webcache_network_storage_cache_clear_0_evaluate@@YAXFJ_N@Z");
//};

//void online_files_upload_online_files_test_upload_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?online_files_upload_online_files_test_upload_1_evaluate@@YAXFJ_N@Z");
//};

//void online_files_throttle_bandwidth_online_files_test_throttle_bandwidth_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?online_files_throttle_bandwidth_online_files_test_throttle_bandwidth_1_evaluate@@YAXFJ_N@Z");
//};

//void online_marketplace_refresh_online_marketplace_refresh_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?online_marketplace_refresh_online_marketplace_refresh_0_evaluate@@YAXFJ_N@Z");
//};

//void webstats_disable_network_webstats_disable_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?webstats_disable_network_webstats_disable_1_evaluate@@YAXFJ_N@Z");
//};

//void webstats_test_submit_network_webstats_test_submit_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?webstats_test_submit_network_webstats_test_submit_1_evaluate@@YAXFJ_N@Z");
//};

//void webstats_test_submit_random_realistic_network_webstats_test_submit_random_realistic_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?webstats_test_submit_random_realistic_network_webstats_test_submit_random_realistic_0_evaluate@@YAXFJ_N@Z");
//};

//void webstats_throttle_bandwidth_network_webstats_set_upstream_quota_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?webstats_throttle_bandwidth_network_webstats_set_upstream_quota_1_evaluate@@YAXFJ_N@Z");
//};

//void webstats_log_uploads_network_webstats_log_uploads_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?webstats_log_uploads_network_webstats_log_uploads_1_evaluate@@YAXFJ_N@Z");
//};

//void flag_new_editor_scripted_flag_new_at_camera_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?flag_new_editor_scripted_flag_new_at_camera_2_evaluate@@YAXFJ_N@Z");
//};

//void flag_new_at_look_editor_scripted_flag_new_at_look_at_point_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?flag_new_at_look_editor_scripted_flag_new_at_look_at_point_2_evaluate@@YAXFJ_N@Z");
//};

//void flags_clear_editor_flags_clear_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?flags_clear_editor_flags_clear_0_evaluate@@YAXFJ_N@Z");
//};

//void flags_default_name_editor_set_default_flag_name_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?flags_default_name_editor_set_default_flag_name_1_evaluate@@YAXFJ_N@Z");
//};

//void flags_default_comment_editor_set_default_flag_description_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?flags_default_comment_editor_set_default_flag_description_1_evaluate@@YAXFJ_N@Z");
//};

//void flags_set_filter_editor_set_flag_filter_string_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?flags_set_filter_editor_set_flag_filter_string_1_evaluate@@YAXFJ_N@Z");
//};

//void bug_now_create_and_upload_bug_files_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?bug_now_create_and_upload_bug_files_1_evaluate@@YAXFJ_N@Z");
//};

//void bug_now_lite_create_and_upload_bug_files_no_minidump_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?bug_now_lite_create_and_upload_bug_files_no_minidump_1_evaluate@@YAXFJ_N@Z");
//};

//void bug_now_auto_create_and_upload_bug_files_auto_name_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?bug_now_auto_create_and_upload_bug_files_auto_name_1_evaluate@@YAXFJ_N@Z");
//};

//void bug_now_on_next_kill_bug_now_on_next_kill_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?bug_now_on_next_kill_bug_now_on_next_kill_1_evaluate@@YAXFJ_N@Z");
//};

//void object_list_children_object_list_children_by_definition_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?object_list_children_object_list_children_by_definition_2_evaluate@@YAXFJ_N@Z");
//};

//void voice_set_outgoing_channel_count_voice_set_outgoing_channel_count_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?voice_set_outgoing_channel_count_voice_set_outgoing_channel_count_2_evaluate@@YAXFJ_N@Z");
//};

//void voice_set_voice_repeater_peer_index_voice_set_voice_repeater_peer_index_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?voice_set_voice_repeater_peer_index_voice_set_voice_repeater_peer_index_1_evaluate@@YAXFJ_N@Z");
//};

//void voice_set_voice_repeater_peer_index(long)
//{
//    mangled_ppc("?voice_set_voice_repeater_peer_index@@YAXJ@Z");
//};

//void voice_set_mute_voice_set_mute_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?voice_set_mute_voice_set_mute_3_evaluate@@YAXFJ_N@Z");
//};

//void voice_set_mute(long, long, bool)
//{
//    mangled_ppc("?voice_set_mute@@YAXJJ_N@Z");
//};

//void net_leaderboard_clear_hopper_network_test_leaderboard_clear_hopper_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?net_leaderboard_clear_hopper_network_test_leaderboard_clear_hopper_1_evaluate@@YAXFJ_N@Z");
//};

//void net_leaderboard_clear_global_unarbitrated_network_test_leaderboard_clear_global_unarbitrated_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?net_leaderboard_clear_global_unarbitrated_network_test_leaderboard_clear_global_unarbitrated_1_evaluate@@YAXFJ_N@Z");
//};

//void net_leaderboard_refresh_network_test_leaderboard_refresh_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?net_leaderboard_refresh_network_test_leaderboard_refresh_0_evaluate@@YAXFJ_N@Z");
//};

//void ai_selected_actor_jump_ai_scripting_selected_actor_jump_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_selected_actor_jump_ai_scripting_selected_actor_jump_2_evaluate@@YAXFJ_N@Z");
//};

//void dump_loaded_tags_dump_loaded_tags_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?dump_loaded_tags_dump_loaded_tags_0_evaluate@@YAXFJ_N@Z");
//};

//void interpolator_start_hs_interpolator_start_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?interpolator_start_hs_interpolator_start_1_evaluate@@YAXFJ_N@Z");
//};

//void interpolator_stop_hs_interpolator_stop_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?interpolator_stop_hs_interpolator_stop_1_evaluate@@YAXFJ_N@Z");
//};

//void interpolator_stop_all_hs_interpolator_stop_all_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?interpolator_stop_all_hs_interpolator_stop_all_0_evaluate@@YAXFJ_N@Z");
//};

//void interpolator_dump_hs_interpolator_dump_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?interpolator_dump_hs_interpolator_dump_1_evaluate@@YAXFJ_N@Z");
//};

//void interpolator_dump_all_hs_interpolator_dump_all_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?interpolator_dump_all_hs_interpolator_dump_all_0_evaluate@@YAXFJ_N@Z");
//};

//void set_pc_runtime_language_scripting_set_runtime_platform_language_from_string_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?set_pc_runtime_language_scripting_set_runtime_platform_language_from_string_1_evaluate@@YAXFJ_N@Z");
//};

//void animation_cache_stats_reset_animation_cache_stats_reset_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?animation_cache_stats_reset_animation_cache_stats_reset_0_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_clone_players_weapon_cinematic_create_and_attach_players_weapon_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_clone_players_weapon_cinematic_create_and_attach_players_weapon_3_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_move_attached_objects_cinematic_move_attached_objects_4_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_move_attached_objects_cinematic_move_attached_objects_4_evaluate@@YAXFJ_N@Z");
//};

//void vehicle_enable_ghost_effects_vehicle_enable_ghost_effects_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?vehicle_enable_ghost_effects_vehicle_enable_ghost_effects_1_evaluate@@YAXFJ_N@Z");
//};

//void set_global_sound_environment_scripting_game_sound_set_global_environment_6_evaluate(short, long, bool)
//{
//    mangled_ppc("?set_global_sound_environment_scripting_game_sound_set_global_environment_6_evaluate@@YAXFJ_N@Z");
//};

//void reset_dsp_image_platform_sound_reset_dsp_image_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?reset_dsp_image_platform_sound_reset_dsp_image_0_evaluate@@YAXFJ_N@Z");
//};

//void game_save_cinematic_skip_game_save_cinematic_skip_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?game_save_cinematic_skip_game_save_cinematic_skip_0_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_outro_start_cinematic_outro_start_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_outro_start_cinematic_outro_start_0_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_enable_ambience_details_scripting_game_sound_enable_ambience_details_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_enable_ambience_details_scripting_game_sound_enable_ambience_details_1_evaluate@@YAXFJ_N@Z");
//};

//void rasterizer_bloom_override_rasterizer_bloom_override_enabled_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?rasterizer_bloom_override_rasterizer_bloom_override_enabled_1_evaluate@@YAXFJ_N@Z");
//};

//void rasterizer_bloom_override_reset_rasterizer_bloom_override_reset_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?rasterizer_bloom_override_reset_rasterizer_bloom_override_reset_1_evaluate@@YAXFJ_N@Z");
//};

//void rasterizer_bloom_override_blur_amount_rasterizer_bloom_override_blur_amount_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?rasterizer_bloom_override_blur_amount_rasterizer_bloom_override_blur_amount_1_evaluate@@YAXFJ_N@Z");
//};

//void rasterizer_bloom_override_threshold_rasterizer_bloom_override_threshold_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?rasterizer_bloom_override_threshold_rasterizer_bloom_override_threshold_1_evaluate@@YAXFJ_N@Z");
//};

//void rasterizer_bloom_override_brightness_rasterizer_bloom_override_brightness_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?rasterizer_bloom_override_brightness_rasterizer_bloom_override_brightness_1_evaluate@@YAXFJ_N@Z");
//};

//void rasterizer_bloom_override_box_factor_rasterizer_bloom_override_box_factor_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?rasterizer_bloom_override_box_factor_rasterizer_bloom_override_box_factor_1_evaluate@@YAXFJ_N@Z");
//};

//void rasterizer_bloom_override_max_factor_rasterizer_bloom_override_max_factor_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?rasterizer_bloom_override_max_factor_rasterizer_bloom_override_max_factor_1_evaluate@@YAXFJ_N@Z");
//};

//void rasterizer_bloom_override_silver_bullet_rasterizer_bloom_override_silver_bullet_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?rasterizer_bloom_override_silver_bullet_rasterizer_bloom_override_silver_bullet_1_evaluate@@YAXFJ_N@Z");
//};

//void rasterizer_bloom_override_only_rasterizer_bloom_override_only_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?rasterizer_bloom_override_only_rasterizer_bloom_override_only_1_evaluate@@YAXFJ_N@Z");
//};

//void rasterizer_bloom_override_high_res_rasterizer_bloom_override_high_res_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?rasterizer_bloom_override_high_res_rasterizer_bloom_override_high_res_1_evaluate@@YAXFJ_N@Z");
//};

//void rasterizer_bloom_override_brightness_alpha_rasterizer_bloom_override_brightness_alpha_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?rasterizer_bloom_override_brightness_alpha_rasterizer_bloom_override_brightness_alpha_1_evaluate@@YAXFJ_N@Z");
//};

//void rasterizer_bloom_override_max_factor_alpha_rasterizer_bloom_override_max_factor_alpha_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?rasterizer_bloom_override_max_factor_alpha_rasterizer_bloom_override_max_factor_alpha_1_evaluate@@YAXFJ_N@Z");
//};

//void cache_block_for_one_frame_observer_block_for_one_frame_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?cache_block_for_one_frame_observer_block_for_one_frame_0_evaluate@@YAXFJ_N@Z");
//};

//void sound_suppress_ambience_update_on_revert_scripting_game_sound_suppress_ambience_update_on_revert_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?sound_suppress_ambience_update_on_revert_scripting_game_sound_suppress_ambience_update_on_revert_0_evaluate@@YAXFJ_N@Z");
//};

//void render_autoexposure_enable_render_enable_autoexposure_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?render_autoexposure_enable_render_enable_autoexposure_1_evaluate@@YAXFJ_N@Z");
//};

//void render_exposure_full_render_animate_exposure_full_5_evaluate(short, long, bool)
//{
//    mangled_ppc("?render_exposure_full_render_animate_exposure_full_5_evaluate@@YAXFJ_N@Z");
//};

//void render_exposure_fade_in_render_animate_exposure_fade_in_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?render_exposure_fade_in_render_animate_exposure_fade_in_2_evaluate@@YAXFJ_N@Z");
//};

//void render_exposure_fade_out_render_animate_exposure_fade_out_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?render_exposure_fade_out_render_animate_exposure_fade_out_1_evaluate@@YAXFJ_N@Z");
//};

//void render_exposure_render_animate_exposure_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?render_exposure_render_animate_exposure_2_evaluate@@YAXFJ_N@Z");
//};

//void render_autoexposure_instant_render_autoexposure_instant_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?render_autoexposure_instant_render_autoexposure_instant_1_evaluate@@YAXFJ_N@Z");
//};

//void render_exposure_set_environment_darken_render_exposure_set_environment_darken_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?render_exposure_set_environment_darken_render_exposure_set_environment_darken_1_evaluate@@YAXFJ_N@Z");
//};

//void render_depth_of_field_enable_render_enable_depth_of_field_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?render_depth_of_field_enable_render_enable_depth_of_field_1_evaluate@@YAXFJ_N@Z");
//};

//void render_depth_of_field_render_animate_depth_of_field_4_evaluate(short, long, bool)
//{
//    mangled_ppc("?render_depth_of_field_render_animate_depth_of_field_4_evaluate@@YAXFJ_N@Z");
//};

//void render_dof_focus_depth_render_set_depth_of_field_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?render_dof_focus_depth_render_set_depth_of_field_1_evaluate@@YAXFJ_N@Z");
//};

//void render_dof_blur_animate_render_animate_depth_of_field_blur_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?render_dof_blur_animate_render_animate_depth_of_field_blur_2_evaluate@@YAXFJ_N@Z");
//};

//void render_debug_video_mode_render_debug_video_mode_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?render_debug_video_mode_render_debug_video_mode_0_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_lightmap_shadow_disable_hs_disable_cinematic_lightmap_shadow_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_lightmap_shadow_disable_hs_disable_cinematic_lightmap_shadow_0_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_lightmap_shadow_enable_hs_enable_cinematic_lightmap_shadow_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_lightmap_shadow_enable_hs_enable_cinematic_lightmap_shadow_0_evaluate@@YAXFJ_N@Z");
//};

//void predict_animation_precache_animation_by_name_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?predict_animation_precache_animation_by_name_2_evaluate@@YAXFJ_N@Z");
//};

//void mp_player_count_by_team_game_engine_player_count_by_team_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?mp_player_count_by_team_game_engine_player_count_by_team_1_evaluate@@YAXFJ_N@Z");
//};

//void mp_players_by_team_game_engine_players_by_team_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?mp_players_by_team_game_engine_players_by_team_1_evaluate@@YAXFJ_N@Z");
//};

//void mp_active_player_count_by_team_game_engine_active_player_count_by_team_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?mp_active_player_count_by_team_game_engine_active_player_count_by_team_1_evaluate@@YAXFJ_N@Z");
//};

//void deterministic_end_game_game_engine_finish_game_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?deterministic_end_game_game_engine_finish_game_0_evaluate@@YAXFJ_N@Z");
//};

//void mp_game_won_game_engine_game_won_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?mp_game_won_game_engine_game_won_1_evaluate@@YAXFJ_N@Z");
//};

//void mp_respawn_override_timers_game_engine_respawn_override_timers_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?mp_respawn_override_timers_game_engine_respawn_override_timers_1_evaluate@@YAXFJ_N@Z");
//};

//void mp_ai_allegiance_game_engine_ai_scripting_allegiance_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?mp_ai_allegiance_game_engine_ai_scripting_allegiance_2_evaluate@@YAXFJ_N@Z");
//};

//void mp_allegiance_game_engine_mp_team_allegiance_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?mp_allegiance_game_engine_mp_team_allegiance_2_evaluate@@YAXFJ_N@Z");
//};

//void mp_round_started_game_engine_in_round_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?mp_round_started_game_engine_in_round_0_evaluate@@YAXFJ_N@Z");
//};

//void mp_round_end_with_winning_player_game_engine_end_round_hs_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?mp_round_end_with_winning_player_game_engine_end_round_hs_1_evaluate@@YAXFJ_N@Z");
//};

//void mp_round_end_with_winning_team_game_engine_end_round_hs_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?mp_round_end_with_winning_team_game_engine_end_round_hs_1_evaluate@@YAXFJ_N@Z");
//};

//void mp_round_end_game_engine_end_round_hs_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?mp_round_end_game_engine_end_round_hs_0_evaluate@@YAXFJ_N@Z");
//};

//void mp_scripts_reset_hs_reset_scripts_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?mp_scripts_reset_hs_reset_scripts_0_evaluate@@YAXFJ_N@Z");
//};

//void tag_file_set_backend_tag_file_set_backend_by_name_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?tag_file_set_backend_tag_file_set_backend_by_name_1_evaluate@@YAXFJ_N@Z");
//};

//void mp_debug_goal_object_boundary_geometry_debug_multiplayer_object_boundary_geometry_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?mp_debug_goal_object_boundary_geometry_debug_multiplayer_object_boundary_geometry_1_evaluate@@YAXFJ_N@Z");
//};

//void mp_dump_candy_monitor_state_game_engine_candy_monitor_debug_dump_state_to_disk_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?mp_dump_candy_monitor_state_game_engine_candy_monitor_debug_dump_state_to_disk_0_evaluate@@YAXFJ_N@Z");
//};

//void determinism_debug_manager_enable_logging_determinism_debug_manager_enable_logging_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?determinism_debug_manager_enable_logging_determinism_debug_manager_enable_logging_1_evaluate@@YAXFJ_N@Z");
//};

//void determinism_debug_manager_set_trace_flags_determinism_debug_manager_set_trace_flags_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?determinism_debug_manager_set_trace_flags_determinism_debug_manager_set_trace_flags_1_evaluate@@YAXFJ_N@Z");
//};

//void determinism_debug_manager_enable_game_state_checksum_determinism_debug_manager_enable_game_state_checksum_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?determinism_debug_manager_enable_game_state_checksum_determinism_debug_manager_enable_game_state_checksum_1_evaluate@@YAXFJ_N@Z");
//};

//void determinism_debug_manager_enable_trace_determinism_debug_manager_enable_trace_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?determinism_debug_manager_enable_trace_determinism_debug_manager_enable_trace_1_evaluate@@YAXFJ_N@Z");
//};

//void determinism_debug_manager_set_consumer_sample_level_determinism_debug_manager_set_consumer_sample_level_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?determinism_debug_manager_set_consumer_sample_level_determinism_debug_manager_set_consumer_sample_level_2_evaluate@@YAXFJ_N@Z");
//};

//void determinism_log_compare_log_files_determinism_log_compare_log_files_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?determinism_log_compare_log_files_determinism_log_compare_log_files_2_evaluate@@YAXFJ_N@Z");
//};

//void determinism_debug_manager_enable_log_file_comparision_on_oos_determinism_debug_manager_enable_log_file_comparision_on_oos_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?determinism_debug_manager_enable_log_file_comparision_on_oos_determinism_debug_manager_enable_log_file_comparision_on_oos_1_evaluate@@YAXFJ_N@Z");
//};

//void saved_film_play_saved_film_manager_play_hs_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?saved_film_play_saved_film_manager_play_hs_2_evaluate@@YAXFJ_N@Z");
//};

//void saved_film_manager_play_hs(enum e_controller_index, char const *)
//{
//    mangled_ppc("?saved_film_manager_play_hs@@YAXW4e_controller_index@@PBD@Z");
//};

//void saved_film_play_last_saved_film_manager_play_last_hs_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?saved_film_play_last_saved_film_manager_play_last_hs_0_evaluate@@YAXFJ_N@Z");
//};

//void saved_film_manager_play_last_hs(void)
//{
//    mangled_ppc("?saved_film_manager_play_last_hs@@YAXXZ");
//};

//void saved_film_disable_version_checking_saved_film_manager_disable_version_checking_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?saved_film_disable_version_checking_saved_film_manager_disable_version_checking_1_evaluate@@YAXFJ_N@Z");
//};

//void saved_film_manager_disable_version_checking(bool)
//{
//    mangled_ppc("?saved_film_manager_disable_version_checking@@YAX_N@Z");
//};

//void saved_film_toggle_debug_saving_saved_film_manager_toggle_automatic_debug_saving_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?saved_film_toggle_debug_saving_saved_film_manager_toggle_automatic_debug_saving_1_evaluate@@YAXFJ_N@Z");
//};

//void saved_film_manager_toggle_automatic_debug_saving(bool)
//{
//    mangled_ppc("?saved_film_manager_toggle_automatic_debug_saving@@YAX_N@Z");
//};

//void saved_films_show_timestamp_saved_film_manager_show_timestamp_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?saved_films_show_timestamp_saved_film_manager_show_timestamp_1_evaluate@@YAXFJ_N@Z");
//};

//void saved_film_manager_show_timestamp(bool)
//{
//    mangled_ppc("?saved_film_manager_show_timestamp@@YAX_N@Z");
//};

//void mover_set_program_mover_scripting_set_program_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?mover_set_program_mover_scripting_set_program_2_evaluate@@YAXFJ_N@Z");
//};

//void floating_point_exceptions_enable_real_math_enable_floating_point_exceptions_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?floating_point_exceptions_enable_real_math_enable_floating_point_exceptions_1_evaluate@@YAXFJ_N@Z");
//};

//void tag_reload_force_tag_groups_sync_reload_fake_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?tag_reload_force_tag_groups_sync_reload_fake_1_evaluate@@YAXFJ_N@Z");
//};

//void tag_unload_force_hs_tag_unload_force_programmer_only_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?tag_unload_force_hs_tag_unload_force_programmer_only_1_evaluate@@YAXFJ_N@Z");
//};

//void tag_load_force_hs_tag_load_force_programmer_only_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?tag_load_force_hs_tag_load_force_programmer_only_1_evaluate@@YAXFJ_N@Z");
//};

//void predict_bink_movie_predict_bink_movie_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?predict_bink_movie_predict_bink_movie_1_evaluate@@YAXFJ_N@Z");
//};

//void predict_bink_movie_from_tag_predict_bink_movie_from_tag_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?predict_bink_movie_from_tag_predict_bink_movie_from_tag_1_evaluate@@YAXFJ_N@Z");
//};

//void profiler_dump_history_profiler_dump_recent_history_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?profiler_dump_history_profiler_dump_recent_history_0_evaluate@@YAXFJ_N@Z");
//};

//void camera_set_mode_hs_director_set_camera_mode_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?camera_set_mode_hs_director_set_camera_mode_2_evaluate@@YAXFJ_N@Z");
//};

//void camera_set_flying_cam_at_point_hs_director_setup_flying_camera_at_scenario_point_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?camera_set_flying_cam_at_point_hs_director_setup_flying_camera_at_scenario_point_2_evaluate@@YAXFJ_N@Z");
//};

//void camera_set_target_hs_director_set_camera_target_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?camera_set_target_hs_director_set_camera_target_2_evaluate@@YAXFJ_N@Z");
//};

//void camera_set_orbiting_cam_at_target_relative_point_hs_director_setup_orbiting_camera_at_target_relative_point_5_evaluate(short, long, bool)
//{
//    mangled_ppc("?camera_set_orbiting_cam_at_target_relative_point_hs_director_setup_orbiting_camera_at_target_relative_point_5_evaluate@@YAXFJ_N@Z");
//};

//void director_cycle_debug_camera_hs_director_cycle_debug_camera_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?director_cycle_debug_camera_hs_director_cycle_debug_camera_1_evaluate@@YAXFJ_N@Z");
//};

//void game_coop_player_count_game_coop_player_count_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?game_coop_player_count_game_coop_player_count_0_evaluate@@YAXFJ_N@Z");
//};

//void player_force_mode_player_override_desired_mode_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?player_force_mode_player_override_desired_mode_1_evaluate@@YAXFJ_N@Z");
//};

//void profiler_output_pulse_profiler_export_telnet_pulse_stats_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?profiler_output_pulse_profiler_export_telnet_pulse_stats_0_evaluate@@YAXFJ_N@Z");
//};

//void string_id_name_string_id_print_name_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?string_id_name_string_id_print_name_1_evaluate@@YAXFJ_N@Z");
//};

//void find_hs_find_matching_commands_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?find_hs_find_matching_commands_1_evaluate@@YAXFJ_N@Z");
//};

//void add_recycling_volume_object_recycling_system_add_volume_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?add_recycling_volume_object_recycling_system_add_volume_3_evaluate@@YAXFJ_N@Z");
//};

//void add_recycling_volume_by_type_object_recycling_system_add_volume_by_type_4_evaluate(short, long, bool)
//{
//    mangled_ppc("?add_recycling_volume_by_type_object_recycling_system_add_volume_by_type_4_evaluate@@YAXFJ_N@Z");
//};

//void tag_resources_set_per_frame_publish_tag_resources_set_per_frame_publish_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?tag_resources_set_per_frame_publish_tag_resources_set_per_frame_publish_1_evaluate@@YAXFJ_N@Z");
//};

//void object_recycling_clear_history_object_recycling_clear_history_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?object_recycling_clear_history_object_recycling_clear_history_0_evaluate@@YAXFJ_N@Z");
//};

//void dump_cinematics_script_dump_cinematics_script_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?dump_cinematics_script_dump_cinematics_script_0_evaluate@@YAXFJ_N@Z");
//};

//void dump_tag_stats_dump_tag_memory_usage_stats_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?dump_tag_stats_dump_tag_memory_usage_stats_0_evaluate@@YAXFJ_N@Z");
//};

//void global_preferences_clear_global_preferences_clear_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?global_preferences_clear_global_preferences_clear_0_evaluate@@YAXFJ_N@Z");
//};

//void network_storage_set_storage_subdirectory_network_storage_set_storage_subdirectory_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?network_storage_set_storage_subdirectory_network_storage_set_storage_subdirectory_1_evaluate@@YAXFJ_N@Z");
//};

//void network_storage_set_storage_user_network_storage_set_storage_user_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?network_storage_set_storage_user_network_storage_set_storage_user_1_evaluate@@YAXFJ_N@Z");
//};

//void network_storage_run_locally_network_storage_run_locally_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?network_storage_run_locally_network_storage_run_locally_1_evaluate@@YAXFJ_N@Z");
//};

//void status_line_dump_status_line_dump_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?status_line_dump_status_line_dump_0_evaluate@@YAXFJ_N@Z");
//};

//void game_tick_get_game_time_get_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?game_tick_get_game_time_get_0_evaluate@@YAXFJ_N@Z");
//};

//void loop_it_hs_looper_setup_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?loop_it_hs_looper_setup_1_evaluate@@YAXFJ_N@Z");
//};

//void loop_clear_hs_looper_clear_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?loop_clear_hs_looper_clear_0_evaluate@@YAXFJ_N@Z");
//};

//void status_lines_enable_status_lines_enable_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?status_lines_enable_status_lines_enable_1_evaluate@@YAXFJ_N@Z");
//};

//void status_lines_disable_status_lines_disable_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?status_lines_disable_status_lines_disable_1_evaluate@@YAXFJ_N@Z");
//};

//void on_target_platform_runtime_platform_on_target_platform_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?on_target_platform_runtime_platform_on_target_platform_0_evaluate@@YAXFJ_N@Z");
//};

//void f7_profiler_enable_profiler_enable_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?f7_profiler_enable_profiler_enable_1_evaluate@@YAXFJ_N@Z");
//};

//void f7_profiler_substring_activate_profiler_sections_activate_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?f7_profiler_substring_activate_profiler_sections_activate_1_evaluate@@YAXFJ_N@Z");
//};

//void f7_profiler_substring_deactivate_profiler_sections_deactivate_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?f7_profiler_substring_deactivate_profiler_sections_deactivate_1_evaluate@@YAXFJ_N@Z");
//};

//void net_game_set_player_standing_game_results_set_automation_player_standing_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?net_game_set_player_standing_game_results_set_automation_player_standing_2_evaluate@@YAXFJ_N@Z");
//};

//void net_get_game_id_game_options_print_game_id_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?net_get_game_id_game_options_print_game_id_0_evaluate@@YAXFJ_N@Z");
//};

//void generate_rsa_2048_key_pair_generate_rsa_2048_key_pair_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?generate_rsa_2048_key_pair_generate_rsa_2048_key_pair_0_evaluate@@YAXFJ_N@Z");
//};

//void create_secure_test_file_create_secure_test_file_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?create_secure_test_file_create_secure_test_file_0_evaluate@@YAXFJ_N@Z");
//};

//void net_test_matchmaking_hopper_list_multiplayer_game_hopper_display_hoppers_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?net_test_matchmaking_hopper_list_multiplayer_game_hopper_display_hoppers_0_evaluate@@YAXFJ_N@Z");
//};

//void net_test_matchmaking_hopper_game_list_multiplayer_game_hopper_display_games_for_current_hopper_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?net_test_matchmaking_hopper_game_list_multiplayer_game_hopper_display_games_for_current_hopper_0_evaluate@@YAXFJ_N@Z");
//};

//void net_test_matchmaking_hopper_set_game_multiplayer_game_hopper_set_game_for_current_hopper_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?net_test_matchmaking_hopper_set_game_multiplayer_game_hopper_set_game_for_current_hopper_1_evaluate@@YAXFJ_N@Z");
//};

//void net_test_matchmaking_set_voting_system_multiplayer_game_hopper_set_voting_system_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?net_test_matchmaking_set_voting_system_multiplayer_game_hopper_set_voting_system_1_evaluate@@YAXFJ_N@Z");
//};

//void net_test_matchmaking_set_arena_season_network_lsp_leaderboard_force_set_season_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?net_test_matchmaking_set_arena_season_network_lsp_leaderboard_force_set_season_1_evaluate@@YAXFJ_N@Z");
//};

//void net_test_matchmaking_suppress_arena_popup_network_lsp_leaderboard_suppress_popup_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?net_test_matchmaking_suppress_arena_popup_network_lsp_leaderboard_suppress_popup_1_evaluate@@YAXFJ_N@Z");
//};

//void net_test_matchmaking_test_arena_screen_network_lsp_leaderboard_test_screen_4_evaluate(short, long, bool)
//{
//    mangled_ppc("?net_test_matchmaking_test_arena_screen_network_lsp_leaderboard_test_screen_4_evaluate@@YAXFJ_N@Z");
//};

//void net_test_matchmaking_set_arena_stats_network_lsp_leaderboard_set_stats_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?net_test_matchmaking_set_arena_stats_network_lsp_leaderboard_set_stats_3_evaluate@@YAXFJ_N@Z");
//};

//void saved_film_set_playback_game_speed_saved_film_manager_set_playback_game_speed_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?saved_film_set_playback_game_speed_saved_film_manager_set_playback_game_speed_1_evaluate@@YAXFJ_N@Z");
//};

//void noguchis_mystery_tour_cache_file_builder_set_additional_music_path_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?noguchis_mystery_tour_cache_file_builder_set_additional_music_path_1_evaluate@@YAXFJ_N@Z");
//};

//void designer_zone_sync_scenario_zone_debugger_synchronize_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?designer_zone_sync_scenario_zone_debugger_synchronize_0_evaluate@@YAXFJ_N@Z");
//};

//void dump_designer_zone_scenario_dump_designer_zone_resources_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?dump_designer_zone_scenario_dump_designer_zone_resources_1_evaluate@@YAXFJ_N@Z");
//};

//void designer_zone_activate_main_activate_designer_zone_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?designer_zone_activate_main_activate_designer_zone_1_evaluate@@YAXFJ_N@Z");
//};

//void designer_zone_deactivate_main_deactivate_designer_zone_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?designer_zone_deactivate_main_deactivate_designer_zone_1_evaluate@@YAXFJ_N@Z");
//};

//void object_set_always_active_object_set_always_active_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?object_set_always_active_object_set_always_active_2_evaluate@@YAXFJ_N@Z");
//};

//void saved_film_seek_to_film_tick_saved_film_manager_seek_to_film_tick_hs_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?saved_film_seek_to_film_tick_saved_film_manager_seek_to_film_tick_hs_1_evaluate@@YAXFJ_N@Z");
//};

//void saved_film_manager_seek_to_film_tick_hs(long)
//{
//    mangled_ppc("?saved_film_manager_seek_to_film_tick_hs@@YAXJ@Z");
//};

//void saved_film_seek_to_film_timestamp_saved_film_manager_seek_to_film_timestamp_hs_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?saved_film_seek_to_film_timestamp_saved_film_manager_seek_to_film_timestamp_hs_1_evaluate@@YAXFJ_N@Z");
//};

//void saved_film_manager_seek_to_film_timestamp_hs(float)
//{
//    mangled_ppc("?saved_film_manager_seek_to_film_timestamp_hs@@YAXM@Z");
//};

//void tag_is_active_scenario_active_zone_is_tag_available_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?tag_is_active_scenario_active_zone_is_tag_available_1_evaluate@@YAXFJ_N@Z");
//};

//void tag_resources_set_incremental_publish_tag_resources_set_incremental_publish_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?tag_resources_set_incremental_publish_tag_resources_set_incremental_publish_1_evaluate@@YAXFJ_N@Z");
//};

//void tag_resources_enable_optional_caching_tag_resources_enable_optional_caching_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?tag_resources_enable_optional_caching_tag_resources_enable_optional_caching_1_evaluate@@YAXFJ_N@Z");
//};

//void dump_active_resources_scenario_zone_resource_dump_active_zone_set_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?dump_active_resources_scenario_zone_resource_dump_active_zone_set_0_evaluate@@YAXFJ_N@Z");
//};

//void object_set_persistent_object_set_invalid_for_recycling_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?object_set_persistent_object_set_invalid_for_recycling_2_evaluate@@YAXFJ_N@Z");
//};

//void display_zone_size_estimates_scenario_display_zone_size_estimates_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?display_zone_size_estimates_scenario_display_zone_size_estimates_1_evaluate@@YAXFJ_N@Z");
//};

//void report_zone_size_estimates_scenario_dump_zone_size_estimates_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?report_zone_size_estimates_scenario_dump_zone_size_estimates_0_evaluate@@YAXFJ_N@Z");
//};

//void net_test_disconnect_squad_networking_session_disconnect_squad_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?net_test_disconnect_squad_networking_session_disconnect_squad_0_evaluate@@YAXFJ_N@Z");
//};

//void net_test_disconnect_group_networking_session_disconnect_group_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?net_test_disconnect_group_networking_session_disconnect_group_0_evaluate@@YAXFJ_N@Z");
//};

//void net_test_clear_squad_session_parameter_networking_session_clear_squad_session_parameter_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?net_test_clear_squad_session_parameter_networking_session_clear_squad_session_parameter_1_evaluate@@YAXFJ_N@Z");
//};

//void net_test_clear_group_session_parameter_networking_session_clear_group_session_parameter_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?net_test_clear_group_session_parameter_networking_session_clear_group_session_parameter_1_evaluate@@YAXFJ_N@Z");
//};

//void net_test_life_cycle_pause_network_life_cycle_pause_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?net_test_life_cycle_pause_network_life_cycle_pause_2_evaluate@@YAXFJ_N@Z");
//};

//void net_test_life_cycle_display_states_network_life_cycle_display_state_strings_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?net_test_life_cycle_display_states_network_life_cycle_display_state_strings_0_evaluate@@YAXFJ_N@Z");
//};

//void net_test_life_cycle_abort_matchmaking_network_life_cycle_abort_matchmaking_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?net_test_life_cycle_abort_matchmaking_network_life_cycle_abort_matchmaking_0_evaluate@@YAXFJ_N@Z");
//};

//void overlapped_display_task_descriptions_overlapped_task_display_task_descriptions_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?overlapped_display_task_descriptions_overlapped_task_display_task_descriptions_0_evaluate@@YAXFJ_N@Z");
//};

//void overlapped_task_inject_error_overlapped_task_inject_error_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?overlapped_task_inject_error_overlapped_task_inject_error_2_evaluate@@YAXFJ_N@Z");
//};

//void net_leaderboard_clear_hopper_all_users_network_test_leaderboard_clear_hopper_all_users_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?net_leaderboard_clear_hopper_all_users_network_test_leaderboard_clear_hopper_all_users_1_evaluate@@YAXFJ_N@Z");
//};

//void net_leaderboard_clear_global_unarbitrated_all_users_network_test_leaderboard_clear_global_unarbitrated_all_users_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?net_leaderboard_clear_global_unarbitrated_all_users_network_test_leaderboard_clear_global_unarbitrated_all_users_1_evaluate@@YAXFJ_N@Z");
//};

//void test_sapien_crash_editor_save_progress_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?test_sapien_crash_editor_save_progress_0_evaluate@@YAXFJ_N@Z");
//};

//void output_window_add_category_editor_add_output_window_category_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?output_window_add_category_editor_add_output_window_category_1_evaluate@@YAXFJ_N@Z");
//};

//void output_window_remove_category_editor_remove_output_window_category_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?output_window_remove_category_editor_remove_output_window_category_1_evaluate@@YAXFJ_N@Z");
//};

//void output_window_list_categories_editor_list_output_window_categories_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?output_window_list_categories_editor_list_output_window_categories_0_evaluate@@YAXFJ_N@Z");
//};

//void decorators_split_decorators_split_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?decorators_split_decorators_split_2_evaluate@@YAXFJ_N@Z");
//};

//void bandwidth_profiler_enable_bandwidth_profiler_enable_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?bandwidth_profiler_enable_bandwidth_profiler_enable_1_evaluate@@YAXFJ_N@Z");
//};

//void bandwidth_profiler_set_context_bandwidth_profiler_set_context_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?bandwidth_profiler_set_context_bandwidth_profiler_set_context_1_evaluate@@YAXFJ_N@Z");
//};

//void simulation_priority_display_set_enabled_simulation_priority_display_set_enabled_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?simulation_priority_display_set_enabled_simulation_priority_display_set_enabled_1_evaluate@@YAXFJ_N@Z");
//};

//void simulation_priority_display_set_object_names_simulation_priority_display_set_object_names_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?simulation_priority_display_set_object_names_simulation_priority_display_set_object_names_1_evaluate@@YAXFJ_N@Z");
//};

//void simulation_priority_display_set_machine_filter_simulation_priority_display_set_machine_filter_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?simulation_priority_display_set_machine_filter_simulation_priority_display_set_machine_filter_0_evaluate@@YAXFJ_N@Z");
//};

//void simulation_priority_display_set_priority_scope_tick_simulation_priority_display_set_priority_scope_tick_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?simulation_priority_display_set_priority_scope_tick_simulation_priority_display_set_priority_scope_tick_0_evaluate@@YAXFJ_N@Z");
//};

//void simulation_priority_display_set_priority_scope_second_worst_simulation_priority_display_set_priority_scope_second_worst_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?simulation_priority_display_set_priority_scope_second_worst_simulation_priority_display_set_priority_scope_second_worst_0_evaluate@@YAXFJ_N@Z");
//};

//void simulation_priority_display_set_priority_scope_second_best_simulation_priority_display_set_priority_scope_second_best_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?simulation_priority_display_set_priority_scope_second_best_simulation_priority_display_set_priority_scope_second_best_0_evaluate@@YAXFJ_N@Z");
//};

//void simulation_priority_display_set_color_by_relevance_simulation_priority_display_set_color_by_relevance_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?simulation_priority_display_set_color_by_relevance_simulation_priority_display_set_color_by_relevance_0_evaluate@@YAXFJ_N@Z");
//};

//void simulation_priority_display_set_color_by_update_period_simulation_priority_display_set_color_by_update_period_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?simulation_priority_display_set_color_by_update_period_simulation_priority_display_set_color_by_update_period_0_evaluate@@YAXFJ_N@Z");
//};

//void simulation_priority_display_set_color_by_final_priority_simulation_priority_display_set_color_by_final_priority_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?simulation_priority_display_set_color_by_final_priority_simulation_priority_display_set_color_by_final_priority_0_evaluate@@YAXFJ_N@Z");
//};

//void overlapped_task_pause_overlapped_task_pause_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?overlapped_task_pause_overlapped_task_pause_2_evaluate@@YAXFJ_N@Z");
//};

//void net_banhammer_set_controller_cheat_flags_network_banhammer_set_controller_cheat_flags_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?net_banhammer_set_controller_cheat_flags_network_banhammer_set_controller_cheat_flags_3_evaluate@@YAXFJ_N@Z");
//};

//void net_banhammer_set_controller_ban_flags_network_banhammer_set_controller_ban_flags_4_evaluate(short, long, bool)
//{
//    mangled_ppc("?net_banhammer_set_controller_ban_flags_network_banhammer_set_controller_ban_flags_4_evaluate@@YAXFJ_N@Z");
//};

//void net_banhammer_dump_strings_network_banhammer_display_strings_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?net_banhammer_dump_strings_network_banhammer_display_strings_0_evaluate@@YAXFJ_N@Z");
//};

//void net_banhammer_dump_repeated_play_list_network_banhammer_display_repeated_play_list_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?net_banhammer_dump_repeated_play_list_network_banhammer_display_repeated_play_list_0_evaluate@@YAXFJ_N@Z");
//};

//void net_banhammer_set_locality_override_network_banhammer_set_machine_locality_override_4_evaluate(short, long, bool)
//{
//    mangled_ppc("?net_banhammer_set_locality_override_network_banhammer_set_machine_locality_override_4_evaluate@@YAXFJ_N@Z");
//};

//void net_leaderboard_set_user_stats_network_leaderboard_set_user_stats_6_evaluate(short, long, bool)
//{
//    mangled_ppc("?net_leaderboard_set_user_stats_network_leaderboard_set_user_stats_6_evaluate@@YAXFJ_N@Z");
//};

//void net_leaderboard_set_user_game_stats_network_leaderboard_set_user_game_stats_5_evaluate(short, long, bool)
//{
//    mangled_ppc("?net_leaderboard_set_user_game_stats_network_leaderboard_set_user_game_stats_5_evaluate@@YAXFJ_N@Z");
//};

//void net_build_map_variant_network_build_map_variant_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?net_build_map_variant_network_build_map_variant_2_evaluate@@YAXFJ_N@Z");
//};

//void net_verify_map_variant_network_verify_packed_map_variant_file_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?net_verify_map_variant_network_verify_packed_map_variant_file_1_evaluate@@YAXFJ_N@Z");
//};

//void net_load_and_use_map_variant_network_load_and_use_packed_map_variant_file_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?net_load_and_use_map_variant_network_load_and_use_packed_map_variant_file_1_evaluate@@YAXFJ_N@Z");
//};

//void write_current_map_variant_write_current_map_variant_to_file_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?write_current_map_variant_write_current_map_variant_to_file_2_evaluate@@YAXFJ_N@Z");
//};

//void read_map_variant_and_make_current_read_map_variant_from_file_and_make_current_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?read_map_variant_and_make_current_read_map_variant_from_file_and_make_current_1_evaluate@@YAXFJ_N@Z");
//};

//void async_set_thread_work_delay_milliseconds_async_setup_set_thread_work_delay_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?async_set_thread_work_delay_milliseconds_async_setup_set_thread_work_delay_2_evaluate@@YAXFJ_N@Z");
//};

//void tag_resources_set_demand_throttle_to_io_tag_resources_set_demand_throttle_to_io_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?tag_resources_set_demand_throttle_to_io_tag_resources_set_demand_throttle_to_io_1_evaluate@@YAXFJ_N@Z");
//};

//void tag_resources_flush_optional_tag_resources_flush_optional_resources_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?tag_resources_flush_optional_tag_resources_flush_optional_resources_0_evaluate@@YAXFJ_N@Z");
//};

//void set_performance_throttle_set_performance_throttle_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?set_performance_throttle_set_performance_throttle_3_evaluate@@YAXFJ_N@Z");
//};

//void get_performance_throttle_get_performance_throttle_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?get_performance_throttle_get_performance_throttle_2_evaluate@@YAXFJ_N@Z");
//};

//void voice_set_headset_boost_sound_xaudio_xenon_voice_set_headset_boost_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?voice_set_headset_boost_sound_xaudio_xenon_voice_set_headset_boost_1_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_zone_activate_main_activate_cinematic_zone_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_zone_activate_main_activate_cinematic_zone_1_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_zone_deactivate_main_deactivate_cinematic_zone_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_zone_deactivate_main_deactivate_cinematic_zone_1_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_zone_activate_from_editor_main_activate_cinematic_zone_from_tag_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_zone_activate_from_editor_main_activate_cinematic_zone_from_tag_1_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_zone_deactivate_from_editor_main_deactivate_cinematic_zone_from_tag_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_zone_deactivate_from_editor_main_deactivate_cinematic_zone_from_tag_1_evaluate@@YAXFJ_N@Z");
//};

//void tiling_current_rasterizer_get_current_tiling_configuration_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?tiling_current_rasterizer_get_current_tiling_configuration_0_evaluate@@YAXFJ_N@Z");
//};

//long rasterizer_get_current_tiling_configuration(void)
//{
//    mangled_ppc("?rasterizer_get_current_tiling_configuration@@YAJXZ");
//};

//public: static enum c_surface_tiling::e_configuration c_surface_tiling::get_current_configuration(void)
//{
//    mangled_ppc("?get_current_configuration@c_surface_tiling@@SA?AW4e_configuration@1@XZ");
//};

//void unit_limit_lipsync_to_mouth_only_unit_scripting_limit_lipsync_to_mouth_only_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_limit_lipsync_to_mouth_only_unit_scripting_limit_lipsync_to_mouth_only_2_evaluate@@YAXFJ_N@Z");
//};

//void dump_active_zone_tags_scenario_zone_resource_dump_active_zone_set_attachment_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?dump_active_zone_tags_scenario_zone_resource_dump_active_zone_set_attachment_0_evaluate@@YAXFJ_N@Z");
//};

//void calculate_tag_prediction_scenario_visit_tag_prediction_scripting_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?calculate_tag_prediction_scenario_visit_tag_prediction_scripting_1_evaluate@@YAXFJ_N@Z");
//};

//void tag_resources_enable_fast_prediction_tag_resources_enable_fast_prediction_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?tag_resources_enable_fast_prediction_tag_resources_enable_fast_prediction_1_evaluate@@YAXFJ_N@Z");
//};

//void unit_start_first_person_custom_animation_first_person_setup_custom_animation_on_unit_4_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_start_first_person_custom_animation_first_person_setup_custom_animation_on_unit_4_evaluate@@YAXFJ_N@Z");
//};

//void unit_is_playing_custom_first_person_animation_first_person_custom_animation_running_on_unit_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_is_playing_custom_first_person_animation_first_person_custom_animation_running_on_unit_1_evaluate@@YAXFJ_N@Z");
//};

//void unit_stop_first_person_custom_animation_first_person_end_custom_animation_on_unit_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_stop_first_person_custom_animation_first_person_end_custom_animation_on_unit_1_evaluate@@YAXFJ_N@Z");
//};

//void prepare_to_switch_to_zone_set_main_prepare_for_switch_zone_set_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?prepare_to_switch_to_zone_set_main_prepare_for_switch_zone_set_1_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_zone_activate_for_debugging_main_activate_cinematic_zone_for_debugging_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_zone_activate_for_debugging_main_activate_cinematic_zone_for_debugging_1_evaluate@@YAXFJ_N@Z");
//};

//void unit_play_random_ping_unit_play_random_ping_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_play_random_ping_unit_play_random_ping_1_evaluate@@YAXFJ_N@Z");
//};

//void player_control_fade_out_all_input_player_control_fade_out_all_input_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?player_control_fade_out_all_input_player_control_fade_out_all_input_1_evaluate@@YAXFJ_N@Z");
//};

//void player_control_fade_in_all_input_player_control_fade_in_all_input_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?player_control_fade_in_all_input_player_control_fade_in_all_input_1_evaluate@@YAXFJ_N@Z");
//};

//void player_control_lock_gaze_unit_scripting_player_lock_gaze_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?player_control_lock_gaze_unit_scripting_player_lock_gaze_3_evaluate@@YAXFJ_N@Z");
//};

//void player_control_unlock_gaze_unit_scripting_player_unlock_gaze_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?player_control_unlock_gaze_unit_scripting_player_unlock_gaze_1_evaluate@@YAXFJ_N@Z");
//};

//void player_control_scale_all_input_player_control_scale_all_input_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?player_control_scale_all_input_player_control_scale_all_input_2_evaluate@@YAXFJ_N@Z");
//};

//void run_like_dvd_asdf_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?run_like_dvd_asdf_0_evaluate@@YAXFJ_N@Z");
//};

//void profiler_auto_core_save_profiler_auto_core_save_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?profiler_auto_core_save_profiler_auto_core_save_1_evaluate@@YAXFJ_N@Z");
//};

//void run_no_hdd_asdf2_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?run_no_hdd_asdf2_0_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_tag_reference_get_bink_cinematic_tag_reference_get_bink_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_tag_reference_get_bink_cinematic_tag_reference_get_bink_1_evaluate@@YAXFJ_N@Z");
//};

//void voice_set_force_match_configurations_voice_set_force_match_configurations_4_evaluate(short, long, bool)
//{
//    mangled_ppc("?voice_set_force_match_configurations_voice_set_force_match_configurations_4_evaluate@@YAXFJ_N@Z");
//};

//void voice_set_force_match_configurations(long, long, long, bool)
//{
//    mangled_ppc("?voice_set_force_match_configurations@@YAXJJJ_N@Z");
//};

//void voice_set_force_hud_voice_set_force_hud_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?voice_set_force_hud_voice_set_force_hud_2_evaluate@@YAXFJ_N@Z");
//};

//void voice_set_force_hud(long, long)
//{
//    mangled_ppc("?voice_set_force_hud@@YAXJJ@Z");
//};

//void object_set_custom_animation_speed_object_set_custom_animation_speed_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?object_set_custom_animation_speed_object_set_custom_animation_speed_2_evaluate@@YAXFJ_N@Z");
//};

//void scenery_animation_start_at_frame_loop_scenery_animation_start_at_frame_loop_4_evaluate(short, long, bool)
//{
//    mangled_ppc("?scenery_animation_start_at_frame_loop_scenery_animation_start_at_frame_loop_4_evaluate@@YAXFJ_N@Z");
//};

//void saved_film_set_repro_mode_saved_film_manager_set_reproduction_enabled_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?saved_film_set_repro_mode_saved_film_manager_set_reproduction_enabled_1_evaluate@@YAXFJ_N@Z");
//};

//void saved_film_manager_set_reproduction_enabled(bool)
//{
//    mangled_ppc("?saved_film_manager_set_reproduction_enabled@@YAX_N@Z");
//};

//void font_set_emergency_font_initialize_emergency_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?font_set_emergency_font_initialize_emergency_0_evaluate@@YAXFJ_N@Z");
//};

//void biped_force_ground_fitting_on_biped_force_ground_fitting_on_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?biped_force_ground_fitting_on_biped_force_ground_fitting_on_2_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_set_chud_objective_cinematic_set_chud_objective_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_set_chud_objective_cinematic_set_chud_objective_1_evaluate@@YAXFJ_N@Z");
//};

//void chud_show_cinematic_title_cinematic_set_chud_objective_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?chud_show_cinematic_title_cinematic_set_chud_objective_2_evaluate@@YAXFJ_N@Z");
//};

//void unit_get_primary_weapon_unit_get_current_primary_weapon_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_get_primary_weapon_unit_get_current_primary_weapon_1_evaluate@@YAXFJ_N@Z");
//};

//void budget_resource_get_animation_graph_scenario_budget_resource_get_model_animation_graph_reference_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?budget_resource_get_animation_graph_scenario_budget_resource_get_model_animation_graph_reference_1_evaluate@@YAXFJ_N@Z");
//};

//void budget_resource_get_looping_sound_scenario_budget_resource_get_looping_sound_reference_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?budget_resource_get_looping_sound_scenario_budget_resource_get_looping_sound_reference_1_evaluate@@YAXFJ_N@Z");
//};

//void game_safe_to_respawn_players_set_safe_to_respawn_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?game_safe_to_respawn_players_set_safe_to_respawn_1_evaluate@@YAXFJ_N@Z");
//};

//void game_safe_to_respawn_players_set_safe_to_respawn_for_player_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?game_safe_to_respawn_players_set_safe_to_respawn_for_player_2_evaluate@@YAXFJ_N@Z");
//};

//void test_create_content_item_slayer_test_create_content_item_slayer_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?test_create_content_item_slayer_test_create_content_item_slayer_0_evaluate@@YAXFJ_N@Z");
//};

//void test_create_content_item_screenshot_test_create_content_item_screenshot_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?test_create_content_item_screenshot_test_create_content_item_screenshot_0_evaluate@@YAXFJ_N@Z");
//};

//void test_create_content_blf_screenshot_test_create_content_blf_screenshot_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?test_create_content_blf_screenshot_test_create_content_blf_screenshot_2_evaluate@@YAXFJ_N@Z");
//};

//void test_create_content_blf_film_test_create_content_blf_film_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?test_create_content_blf_film_test_create_content_blf_film_2_evaluate@@YAXFJ_N@Z");
//};

//void test_create_content_blf_film_clip_test_create_content_blf_film_clip_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?test_create_content_blf_film_clip_test_create_content_blf_film_clip_2_evaluate@@YAXFJ_N@Z");
//};

//void test_create_content_blf_game_variant_test_create_content_blf_game_variant_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?test_create_content_blf_game_variant_test_create_content_blf_game_variant_2_evaluate@@YAXFJ_N@Z");
//};

//void test_create_content_blf_map_variant_test_create_content_blf_map_variant_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?test_create_content_blf_map_variant_test_create_content_blf_map_variant_2_evaluate@@YAXFJ_N@Z");
//};

//void ai_migrate_infanty_ai_scripting_migrate_infantry_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_migrate_infanty_ai_scripting_migrate_infantry_2_evaluate@@YAXFJ_N@Z");
//};

//void render_cinematic_motion_blur_rasterizer_game_state_set_cinematic_motion_blur_enable_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?render_cinematic_motion_blur_rasterizer_game_state_set_cinematic_motion_blur_enable_1_evaluate@@YAXFJ_N@Z");
//};

//void ai_dont_do_avoidance_ai_scripting_dont_do_avoidance_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_dont_do_avoidance_ai_scripting_dont_do_avoidance_2_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_scripting_clean_up_cinematic_scripting_clean_up_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_scripting_clean_up_cinematic_scripting_clean_up_1_evaluate@@YAXFJ_N@Z");
//};

//void ai_erase_inactive_ai_scripting_erase_inactive_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_erase_inactive_ai_scripting_erase_inactive_2_evaluate@@YAXFJ_N@Z");
//};

//void ai_survival_cleanup_ai_scripting_survival_cleanup_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_survival_cleanup_ai_scripting_survival_cleanup_3_evaluate@@YAXFJ_N@Z");
//};

//void ai_enable_stuck_flying_kill_ai_scripting_stuck_flying_enable_kill_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_enable_stuck_flying_kill_ai_scripting_stuck_flying_enable_kill_2_evaluate@@YAXFJ_N@Z");
//};

//void ai_set_stuck_velocity_threshold_ai_scripting_set_stuck_velocity_threshold_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?ai_set_stuck_velocity_threshold_ai_scripting_set_stuck_velocity_threshold_2_evaluate@@YAXFJ_N@Z");
//};

//void stop_bink_movie_bink_playback_stop_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?stop_bink_movie_bink_playback_stop_0_evaluate@@YAXFJ_N@Z");
//};

//void play_credits_unskippable_play_credits_movie_unskippable_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?play_credits_unskippable_play_credits_movie_unskippable_0_evaluate@@YAXFJ_N@Z");
//};

//void budget_resource_get_sound_scenario_budget_resource_get_sound_reference_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?budget_resource_get_sound_scenario_budget_resource_get_sound_reference_1_evaluate@@YAXFJ_N@Z");
//};

//void controller_set_single_player_level_unlocked_debug_set_single_player_level_unlocked_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?controller_set_single_player_level_unlocked_debug_set_single_player_level_unlocked_3_evaluate@@YAXFJ_N@Z");
//};

//void physical_memory_dump_physical_memory_dump_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?physical_memory_dump_physical_memory_dump_0_evaluate@@YAXFJ_N@Z");
//};

//void tag_resources_validate_all_pages_tag_resources_validate_all_pages_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?tag_resources_validate_all_pages_tag_resources_validate_all_pages_1_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_set_debug_mode_cinematic_set_debug_mode_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_set_debug_mode_cinematic_set_debug_mode_1_evaluate@@YAXFJ_N@Z");
//};

//void cinematic_scripting_get_object_cinematic_scripting_get_object_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?cinematic_scripting_get_object_cinematic_scripting_get_object_2_evaluate@@YAXFJ_N@Z");
//};

//void player_override_team_player_override_team_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?player_override_team_player_override_team_2_evaluate@@YAXFJ_N@Z");
//};

//void unit_set_stance_unit_scripting_set_stance_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?unit_set_stance_unit_scripting_set_stance_2_evaluate@@YAXFJ_N@Z");
//};

//void player_set_stance_player_scripting_set_stance_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?player_set_stance_player_scripting_set_stance_1_evaluate@@YAXFJ_N@Z");
//};

//void sound_impulse_start_editor_scripted_sound_new_editor_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?sound_impulse_start_editor_scripted_sound_new_editor_3_evaluate@@YAXFJ_N@Z");
//};

//void sound_impulse_start_effect_editor_scripted_sound_new_with_effect_editor_4_evaluate(short, long, bool)
//{
//    mangled_ppc("?sound_impulse_start_effect_editor_scripted_sound_new_with_effect_editor_4_evaluate@@YAXFJ_N@Z");
//};

//void sound_impulse_start_3d_editor_scripted_sound_new_3d_editor_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?sound_impulse_start_3d_editor_scripted_sound_new_3d_editor_3_evaluate@@YAXFJ_N@Z");
//};

//void sound_looping_start_editor_scripted_looping_sound_start_editor_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?sound_looping_start_editor_scripted_looping_sound_start_editor_3_evaluate@@YAXFJ_N@Z");
//};

//void debug_sound_channels_log_start_sound_manager_debug_sound_channel_log_start_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?debug_sound_channels_log_start_sound_manager_debug_sound_channel_log_start_0_evaluate@@YAXFJ_N@Z");
//};

//void debug_sound_channels_log_start_named_sound_manager_debug_sound_channel_log_start_named_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?debug_sound_channels_log_start_named_sound_manager_debug_sound_channel_log_start_named_1_evaluate@@YAXFJ_N@Z");
//};

//void debug_sound_channels_log_stop_sound_manager_debug_sound_channel_log_stop_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?debug_sound_channels_log_stop_sound_manager_debug_sound_channel_log_stop_0_evaluate@@YAXFJ_N@Z");
//};

//void simulation_profiler_enable_simulation_profiler_graph_display_enable_for_high_level_use_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?simulation_profiler_enable_simulation_profiler_graph_display_enable_for_high_level_use_0_evaluate@@YAXFJ_N@Z");
//};

//void saved_film_insert_marker_saved_film_manager_insert_marker_hs_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?saved_film_insert_marker_saved_film_manager_insert_marker_hs_1_evaluate@@YAXFJ_N@Z");
//};

//void saved_film_manager_insert_marker_hs(char const *)
//{
//    mangled_ppc("?saved_film_manager_insert_marker_hs@@YAXPBD@Z");
//};

//void saved_film_seek_to_marker_saved_film_manager_seek_to_marker_hs_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?saved_film_seek_to_marker_saved_film_manager_seek_to_marker_hs_1_evaluate@@YAXFJ_N@Z");
//};

//bool saved_film_manager_seek_to_marker_hs(long)
//{
//    mangled_ppc("?saved_film_manager_seek_to_marker_hs@@YA_NJ@Z");
//};

//void game_currency_issue_award_to_team_game_currency_issue_award_to_team_hs_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?game_currency_issue_award_to_team_game_currency_issue_award_to_team_hs_2_evaluate@@YAXFJ_N@Z");
//};

//void xsync_pony_tag_not_actually_implemented_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?xsync_pony_tag_not_actually_implemented_1_evaluate@@YAXFJ_N@Z");
//};

//void xsync_pony_map_not_actually_implemented_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?xsync_pony_map_not_actually_implemented_1_evaluate@@YAXFJ_N@Z");
//};

//void net_simulation_set_stream_bandwidth_net_simulation_set_stream_bandwidth_hs_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?net_simulation_set_stream_bandwidth_net_simulation_set_stream_bandwidth_hs_1_evaluate@@YAXFJ_N@Z");
//};

//void debug_sound_fadeout_time_sound_manager_debug_sound_channel_set_fadeout_time_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?debug_sound_fadeout_time_sound_manager_debug_sound_channel_set_fadeout_time_1_evaluate@@YAXFJ_N@Z");
//};

//void render_model_marker_name_filter_render_model_marker_name_filter_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?render_model_marker_name_filter_render_model_marker_name_filter_1_evaluate@@YAXFJ_N@Z");
//};

//void skull_enable_game_skull_enable_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?skull_enable_game_skull_enable_2_evaluate@@YAXFJ_N@Z");
//};

//void allow_object_to_be_lased_hs_laser_designation_allow_object_to_be_lased_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?allow_object_to_be_lased_hs_laser_designation_allow_object_to_be_lased_2_evaluate@@YAXFJ_N@Z");
//};

//void is_object_being_lased_hs_laser_designation_is_object_being_lased_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?is_object_being_lased_hs_laser_designation_is_object_being_lased_1_evaluate@@YAXFJ_N@Z");
//};

//void simulation_profiler_detail_level_hs_simulation_profiler_recorder_set_host_detail_level_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?simulation_profiler_detail_level_hs_simulation_profiler_recorder_set_host_detail_level_1_evaluate@@YAXFJ_N@Z");
//};

//long hs_simulation_profiler_recorder_set_host_detail_level(long)
//{
//    mangled_ppc("?hs_simulation_profiler_recorder_set_host_detail_level@@YAJJ@Z");
//};

//void simulation_profiler_enable_downstream_processing_hs_simulation_profiler_database_enable_downstream_processing_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?simulation_profiler_enable_downstream_processing_hs_simulation_profiler_database_enable_downstream_processing_1_evaluate@@YAXFJ_N@Z");
//};

//void campaign_metagame_get_player_score_campaign_metagame_get_player_score_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?campaign_metagame_get_player_score_campaign_metagame_get_player_score_1_evaluate@@YAXFJ_N@Z");
//};

//void collision_debug_lightmaps_print_collision_debug_console_print_lightmap_debug_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?collision_debug_lightmaps_print_collision_debug_console_print_lightmap_debug_0_evaluate@@YAXFJ_N@Z");
//};

//void load_binary_game_engine_megalogamengine_load_binary_game_engine_from_file_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?load_binary_game_engine_megalogamengine_load_binary_game_engine_from_file_1_evaluate@@YAXFJ_N@Z");
//};

//void network_storage_files_display_file_names_network_storage_files_display_file_names_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?network_storage_files_display_file_names_network_storage_files_display_file_names_0_evaluate@@YAXFJ_N@Z");
//};

//void network_storage_files_force_download_network_storage_files_force_download_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?network_storage_files_force_download_network_storage_files_force_download_1_evaluate@@YAXFJ_N@Z");
//};

//void debug_lightmap_inspect_inspect_lightmap_status_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?debug_lightmap_inspect_inspect_lightmap_status_0_evaluate@@YAXFJ_N@Z");
//};

//void render_debug_colorbars_render_debug_colorbars_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?render_debug_colorbars_render_debug_colorbars_1_evaluate@@YAXFJ_N@Z");
//};

//void voice_force_global_repeater_use_voice_force_global_repeater_use_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?voice_force_global_repeater_use_voice_force_global_repeater_use_1_evaluate@@YAXFJ_N@Z");
//};

//void voice_force_global_repeater_use(bool)
//{
//    mangled_ppc("?voice_force_global_repeater_use@@YAX_N@Z");
//};

//void levels_add_campaign_map_with_id_levels_add_campaign_map_from_scripting_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?levels_add_campaign_map_with_id_levels_add_campaign_map_from_scripting_2_evaluate@@YAXFJ_N@Z");
//};

//void levels_add_campaign_map_levels_add_fake_campaign_map_from_scripting_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?levels_add_campaign_map_levels_add_fake_campaign_map_from_scripting_1_evaluate@@YAXFJ_N@Z");
//};

//void levels_add_multiplayer_map_levels_add_fake_multiplayer_map_from_scripting_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?levels_add_multiplayer_map_levels_add_fake_multiplayer_map_from_scripting_1_evaluate@@YAXFJ_N@Z");
//};

//void run_like_package_asdf_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?run_like_package_asdf_0_evaluate@@YAXFJ_N@Z");
//};

//void clear_map_slot_cache_files_clear_map_single_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?clear_map_slot_cache_files_clear_map_single_1_evaluate@@YAXFJ_N@Z");
//};

//void cache_files_clear_map_single(long)
//{
//    mangled_ppc("?cache_files_clear_map_single@@YAXJ@Z");
//};

//void clear_map_type_cache_files_clear_map_of_type_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?clear_map_type_cache_files_clear_map_of_type_1_evaluate@@YAXFJ_N@Z");
//};

//void cache_files_clear_map_of_type(long)
//{
//    mangled_ppc("?cache_files_clear_map_of_type@@YAXJ@Z");
//};

//void network_team_picker_unit_test_network_team_picker_unit_test_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?network_team_picker_unit_test_network_team_picker_unit_test_0_evaluate@@YAXFJ_N@Z");
//};

//void debug_objects_unit_seats_filter_debug_objects_set_unit_seat_filter_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?debug_objects_unit_seats_filter_debug_objects_set_unit_seat_filter_1_evaluate@@YAXFJ_N@Z");
//};

//void debug_lock_enforcement_synchronization_enable_lock_enforcement_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?debug_lock_enforcement_synchronization_enable_lock_enforcement_1_evaluate@@YAXFJ_N@Z");
//};

//void lsp_presence_dump_blfs_network_lsp_presence_write_blfs_to_file_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?lsp_presence_dump_blfs_network_lsp_presence_write_blfs_to_file_1_evaluate@@YAXFJ_N@Z");
//};

//void lsp_leaderboard_dump_blfs_network_lsp_leaderboard_write_blfs_to_file_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?lsp_leaderboard_dump_blfs_network_lsp_leaderboard_write_blfs_to_file_1_evaluate@@YAXFJ_N@Z");
//};

//void rewards_flush_player_rewards_flush_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?rewards_flush_player_rewards_flush_0_evaluate@@YAXFJ_N@Z");
//};

//void rewards_profile_write_player_rewards_write_to_profile_hs_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?rewards_profile_write_player_rewards_write_to_profile_hs_0_evaluate@@YAXFJ_N@Z");
//};

//void rewards_lsp_sync_player_rewards_sync_with_lsp_hs_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?rewards_lsp_sync_player_rewards_sync_with_lsp_hs_0_evaluate@@YAXFJ_N@Z");
//};

//void rewards_force_unlock_all_purchasable_items_player_rewards_force_unlock_all_purchasable_items_hs_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?rewards_force_unlock_all_purchasable_items_player_rewards_force_unlock_all_purchasable_items_hs_0_evaluate@@YAXFJ_N@Z");
//};

//void rewards_cookies_grant_to_controller_player_rewards_add_cookies_to_controller_hs_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?rewards_cookies_grant_to_controller_player_rewards_add_cookies_to_controller_hs_2_evaluate@@YAXFJ_N@Z");
//};

//void rewards_cookies_grant_to_player_player_rewards_add_cookies_to_player_hs_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?rewards_cookies_grant_to_player_player_rewards_add_cookies_to_player_hs_2_evaluate@@YAXFJ_N@Z");
//};

//void rewards_commendation_increment_for_controller_player_rewards_commendation_progress_increment_for_controller_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?rewards_commendation_increment_for_controller_player_rewards_commendation_progress_increment_for_controller_2_evaluate@@YAXFJ_N@Z");
//};

//void rewards_commendation_increment_for_player_player_rewards_commendation_progress_increment_for_player_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?rewards_commendation_increment_for_player_player_rewards_commendation_progress_increment_for_player_2_evaluate@@YAXFJ_N@Z");
//};

//void rewards_commendation_set_for_controller_player_rewards_commendation_set_progress_for_controller_hs_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?rewards_commendation_set_for_controller_player_rewards_commendation_set_progress_for_controller_hs_3_evaluate@@YAXFJ_N@Z");
//};

//void rewards_purchase_cookie_purchase_item_buy_hs_4_evaluate(short, long, bool)
//{
//    mangled_ppc("?rewards_purchase_cookie_purchase_item_buy_hs_4_evaluate@@YAXFJ_N@Z");
//};

//void rewards_set_player_appearance_from_purchase_cookie_purchase_item_set_player_appearance_hs_4_evaluate(short, long, bool)
//{
//    mangled_ppc("?rewards_set_player_appearance_from_purchase_cookie_purchase_item_set_player_appearance_hs_4_evaluate@@YAXFJ_N@Z");
//};

//void rewards_dump_player_rewards_dump_current_reward_state_hs_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?rewards_dump_player_rewards_dump_current_reward_state_hs_0_evaluate@@YAXFJ_N@Z");
//};

//void rewards_reinitialize_from_storage_player_rewards_reinitialize_reward_state_from_storage_hs_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?rewards_reinitialize_from_storage_player_rewards_reinitialize_reward_state_from_storage_hs_1_evaluate@@YAXFJ_N@Z");
//};

//void rewards_reset_to_default_state_player_rewards_reset_reward_state_hs_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?rewards_reset_to_default_state_player_rewards_reset_reward_state_hs_1_evaluate@@YAXFJ_N@Z");
//};

//void rewards_get_cookie_total_player_rewards_get_cookie_total_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?rewards_get_cookie_total_player_rewards_get_cookie_total_1_evaluate@@YAXFJ_N@Z");
//};

//void rewards_set_purchase_state_player_rewards_set_purchase_state_hs_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?rewards_set_purchase_state_player_rewards_set_purchase_state_hs_3_evaluate@@YAXFJ_N@Z");
//};

//void challenges_enable_lsp_synchronization_challenges_enable_lsp_synchronization_hs_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?challenges_enable_lsp_synchronization_challenges_enable_lsp_synchronization_hs_1_evaluate@@YAXFJ_N@Z");
//};

//void challenges_clear_challenges_clear_hs_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?challenges_clear_challenges_clear_hs_0_evaluate@@YAXFJ_N@Z");
//};

//void challenges_activate_challenge_challenges_activate_challenge_hs_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?challenges_activate_challenge_challenges_activate_challenge_hs_3_evaluate@@YAXFJ_N@Z");
//};

//void challenges_list_active_challenges_for_controller_challenges_list_active_challenges_for_controller_hs_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?challenges_list_active_challenges_for_controller_challenges_list_active_challenges_for_controller_hs_1_evaluate@@YAXFJ_N@Z");
//};

//void challenge_advance_for_controller_challenge_advance_for_controller_hs_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?challenge_advance_for_controller_challenge_advance_for_controller_hs_3_evaluate@@YAXFJ_N@Z");
//};

//void challenge_complete_for_controller_challenge_complete_for_controller_hs_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?challenge_complete_for_controller_challenge_complete_for_controller_hs_3_evaluate@@YAXFJ_N@Z");
//};

//void challenge_advance_for_controller_by_indices_challenge_advance_for_controller_by_indices_hs_4_evaluate(short, long, bool)
//{
//    mangled_ppc("?challenge_advance_for_controller_by_indices_challenge_advance_for_controller_by_indices_hs_4_evaluate@@YAXFJ_N@Z");
//};

//void challenge_complete_for_controller_by_indices_challenge_complete_for_controller_by_indices_hs_4_evaluate(short, long, bool)
//{
//    mangled_ppc("?challenge_complete_for_controller_by_indices_challenge_complete_for_controller_by_indices_hs_4_evaluate@@YAXFJ_N@Z");
//};

//void cui_set_screen_name_override_prefix_cui_load_set_screen_name_override_prefix_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?cui_set_screen_name_override_prefix_cui_load_set_screen_name_override_prefix_1_evaluate@@YAXFJ_N@Z");
//};

//void cui_load_screen_cui_load_screen_hs_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?cui_load_screen_cui_load_screen_hs_1_evaluate@@YAXFJ_N@Z");
//};

//void cui_load_themed_screen_cui_load_themed_screen_hs_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?cui_load_themed_screen_cui_load_themed_screen_hs_2_evaluate@@YAXFJ_N@Z");
//};

//void rewards_get_grade_player_rewards_get_controller_grade_hs_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?rewards_get_grade_player_rewards_get_controller_grade_hs_1_evaluate@@YAXFJ_N@Z");
//};

//void rewards_get_sub_grade_player_rewards_get_controller_sub_grade_hs_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?rewards_get_sub_grade_player_rewards_get_controller_sub_grade_hs_1_evaluate@@YAXFJ_N@Z");
//};

//void exit_experience_set_params_exit_experience_set_test_parameters_hs_7_evaluate(short, long, bool)
//{
//    mangled_ppc("?exit_experience_set_params_exit_experience_set_test_parameters_hs_7_evaluate@@YAXFJ_N@Z");
//};

//void player_profile_clear_to_default_values_player_profile_clear_to_default_values_hs_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?player_profile_clear_to_default_values_player_profile_clear_to_default_values_hs_1_evaluate@@YAXFJ_N@Z");
//};

//void submit_incident_submit_incident_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?submit_incident_submit_incident_1_evaluate@@YAXFJ_N@Z");
//};

//void submit_incident_with_cause_player_submit_incident_with_cause_player_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?submit_incident_with_cause_player_submit_incident_with_cause_player_2_evaluate@@YAXFJ_N@Z");
//};

//void submit_incident_with_cause_team_submit_incident_with_cause_team_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?submit_incident_with_cause_team_submit_incident_with_cause_team_2_evaluate@@YAXFJ_N@Z");
//};

//void submit_incident_with_cause_player_and_effect_player_submit_incident_with_cause_player_and_effect_player_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?submit_incident_with_cause_player_and_effect_player_submit_incident_with_cause_player_and_effect_player_3_evaluate@@YAXFJ_N@Z");
//};

//void submit_incident_with_cause_player_and_effect_team_submit_incident_with_cause_player_and_effect_team_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?submit_incident_with_cause_player_and_effect_team_submit_incident_with_cause_player_and_effect_team_3_evaluate@@YAXFJ_N@Z");
//};

//void submit_incident_with_cause_team_and_effect_player_submit_incident_with_cause_team_and_effect_player_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?submit_incident_with_cause_team_and_effect_player_submit_incident_with_cause_team_and_effect_player_3_evaluate@@YAXFJ_N@Z");
//};

//void submit_incident_with_cause_team_and_effect_team_submit_incident_with_cause_team_and_effect_team_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?submit_incident_with_cause_team_and_effect_team_submit_incident_with_cause_team_and_effect_team_3_evaluate@@YAXFJ_N@Z");
//};

//void submit_incident_with_cause_campaign_team_submit_incident_for_campaign_team_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?submit_incident_with_cause_campaign_team_submit_incident_for_campaign_team_2_evaluate@@YAXFJ_N@Z");
//};

//void net_set_campaign_insertion_point_network_squad_session_set_campaign_insertion_point_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?net_set_campaign_insertion_point_network_squad_session_set_campaign_insertion_point_1_evaluate@@YAXFJ_N@Z");
//};

//void hs_make_interactive_scripts_deterministic_hs_make_interactive_scripts_deterministic_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?hs_make_interactive_scripts_deterministic_hs_make_interactive_scripts_deterministic_1_evaluate@@YAXFJ_N@Z");
//};

//void threadlib_runtests_threadlib_run_unit_tests_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?threadlib_runtests_threadlib_run_unit_tests_0_evaluate@@YAXFJ_N@Z");
//};

//void player_set_respawn_vehicle_player_set_respawn_vehicle_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?player_set_respawn_vehicle_player_set_respawn_vehicle_2_evaluate@@YAXFJ_N@Z");
//};

//void teleport_players_into_vehicle_teleport_players_into_vehicle_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?teleport_players_into_vehicle_teleport_players_into_vehicle_1_evaluate@@YAXFJ_N@Z");
//};

//void content_test_set_active_content_test_set_active_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?content_test_set_active_content_test_set_active_1_evaluate@@YAXFJ_N@Z");
//};

//void content_test_set_active_test_pass_content_test_set_active_test_pass_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?content_test_set_active_test_pass_content_test_set_active_test_pass_2_evaluate@@YAXFJ_N@Z");
//};

//void command_buffer_cache_playback_enable_command_buffer_cache_playback_enable_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?command_buffer_cache_playback_enable_command_buffer_cache_playback_enable_1_evaluate@@YAXFJ_N@Z");
//};

//void command_buffer_cache_playback_enable(bool)
//{
//    mangled_ppc("?command_buffer_cache_playback_enable@@YAX_N@Z");
//};

//void player_set_spartan_loadout_player_set_loadout_palette_to_default_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?player_set_spartan_loadout_player_set_loadout_palette_to_default_1_evaluate@@YAXFJ_N@Z");
//};

//void player_set_elite_loadout_player_set_loadout_palette_to_elite_default_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?player_set_elite_loadout_player_set_loadout_palette_to_elite_default_1_evaluate@@YAXFJ_N@Z");
//};

//void auto_graph_render_debug_auto_graph_toggle_activation_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?auto_graph_render_debug_auto_graph_toggle_activation_1_evaluate@@YAXFJ_N@Z");
//};

//void auto_graph_reset_render_debug_auto_graph_deactivate_all_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?auto_graph_reset_render_debug_auto_graph_deactivate_all_0_evaluate@@YAXFJ_N@Z");
//};

//void auto_graph_enable_list_render_debug_auto_graph_track_available_series_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?auto_graph_enable_list_render_debug_auto_graph_track_available_series_1_evaluate@@YAXFJ_N@Z");
//};

//void auto_graph_filter_list_render_debug_auto_graph_filter_tracked_available_series_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?auto_graph_filter_list_render_debug_auto_graph_filter_tracked_available_series_1_evaluate@@YAXFJ_N@Z");
//};

//void auto_graph_list_render_debug_auto_graph_display_tracked_available_series_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?auto_graph_list_render_debug_auto_graph_display_tracked_available_series_0_evaluate@@YAXFJ_N@Z");
//};

//void auto_graph_hide_render_debug_auto_graph_toggle_hidden_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?auto_graph_hide_render_debug_auto_graph_toggle_hidden_0_evaluate@@YAXFJ_N@Z");
//};

//void location_names_print_location_names_print_hs_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?location_names_print_location_names_print_hs_0_evaluate@@YAXFJ_N@Z");
//};

//void net_force_host_network_force_host_by_machine_name_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?net_force_host_network_force_host_by_machine_name_1_evaluate@@YAXFJ_N@Z");
//};

//void net_force_host_squad_network_force_squad_host_by_machine_name_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?net_force_host_squad_network_force_squad_host_by_machine_name_1_evaluate@@YAXFJ_N@Z");
//};

//void net_force_host_posse_network_force_posse_host_by_machine_name_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?net_force_host_posse_network_force_posse_host_by_machine_name_1_evaluate@@YAXFJ_N@Z");
//};

//void net_force_host_group_network_force_group_host_by_machine_name_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?net_force_host_group_network_force_group_host_by_machine_name_1_evaluate@@YAXFJ_N@Z");
//};

//void sandbox_load_label_strings_sandbox_load_label_strings_from_megalo_engine_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?sandbox_load_label_strings_sandbox_load_label_strings_from_megalo_engine_1_evaluate@@YAXFJ_N@Z");
//};

//void net_dump_network_statistics_network_banhammer_dump_network_statistics_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?net_dump_network_statistics_network_banhammer_dump_network_statistics_0_evaluate@@YAXFJ_N@Z");
//};

//void net_enable_block_detection_network_set_block_detection_threshold_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?net_enable_block_detection_network_set_block_detection_threshold_1_evaluate@@YAXFJ_N@Z");
//};

//void main_enable_block_detection_main_set_block_detection_threshold_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?main_enable_block_detection_main_set_block_detection_threshold_1_evaluate@@YAXFJ_N@Z");
//};

//void main_synchronous_networking_request_vblank_slip_main_synchronous_networking_request_vblank_slip_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?main_synchronous_networking_request_vblank_slip_main_synchronous_networking_request_vblank_slip_0_evaluate@@YAXFJ_N@Z");
//};

//void debug_button_action_mapping_set_debug_button_action_mapping_set_hs_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?debug_button_action_mapping_set_debug_button_action_mapping_set_hs_2_evaluate@@YAXFJ_N@Z");
//};

//void player_appearance_force_model_area_player_appearance_force_model_area_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?player_appearance_force_model_area_player_appearance_force_model_area_2_evaluate@@YAXFJ_N@Z");
//};

//void player_appearance_force_model_area_disable_player_appearance_force_model_area_disable_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?player_appearance_force_model_area_disable_player_appearance_force_model_area_disable_1_evaluate@@YAXFJ_N@Z");
//};

//void debug_instanced_geometry_names_filter_set_debug_instanced_geometry_names_filter_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?debug_instanced_geometry_names_filter_set_debug_instanced_geometry_names_filter_1_evaluate@@YAXFJ_N@Z");
//};

//void stream_manager_load_core_stream_manager_load_core_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?stream_manager_load_core_stream_manager_load_core_1_evaluate@@YAXFJ_N@Z");
//};

//void stream_manager_save_cores_stream_manager_save_cores_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?stream_manager_save_cores_stream_manager_save_cores_1_evaluate@@YAXFJ_N@Z");
//};

//void controller_set_waypoint_flags_controller_set_waypoint_flags_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?controller_set_waypoint_flags_controller_set_waypoint_flags_3_evaluate@@YAXFJ_N@Z");
//};

//void waypoint_set_unlock_flag_waypoint_profile_manager_set_unlock_flag_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?waypoint_set_unlock_flag_waypoint_profile_manager_set_unlock_flag_3_evaluate@@YAXFJ_N@Z");
//};

//void async_test_hang_async_test_hang_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?async_test_hang_async_test_hang_3_evaluate@@YAXFJ_N@Z");
//};

//void incidents_force_campaign_debug_game_mode_flags_force_campaign_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?incidents_force_campaign_debug_game_mode_flags_force_campaign_0_evaluate@@YAXFJ_N@Z");
//};

//void incidents_force_firefight_debug_game_mode_flags_force_survival_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?incidents_force_firefight_debug_game_mode_flags_force_survival_0_evaluate@@YAXFJ_N@Z");
//};

//void incidents_force_multiplayer_debug_game_mode_flags_force_multiplayer_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?incidents_force_multiplayer_debug_game_mode_flags_force_multiplayer_0_evaluate@@YAXFJ_N@Z");
//};

//void incidents_force_matchmaking_debug_game_mode_flags_force_matchmaking_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?incidents_force_matchmaking_debug_game_mode_flags_force_matchmaking_0_evaluate@@YAXFJ_N@Z");
//};

//void incidents_force_custom_games_debug_game_mode_flags_force_custom_games_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?incidents_force_custom_games_debug_game_mode_flags_force_custom_games_0_evaluate@@YAXFJ_N@Z");
//};

//void incidents_force_solo_debug_game_mode_flags_force_solo_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?incidents_force_solo_debug_game_mode_flags_force_solo_0_evaluate@@YAXFJ_N@Z");
//};

//void incidents_force_coop_debug_game_mode_flags_force_coop_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?incidents_force_coop_debug_game_mode_flags_force_coop_0_evaluate@@YAXFJ_N@Z");
//};

//void incidents_force_four_player_coop_debug_game_mode_flags_force_four_player_coop_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?incidents_force_four_player_coop_debug_game_mode_flags_force_four_player_coop_0_evaluate@@YAXFJ_N@Z");
//};

//void game_sound_stress_test_message_queue_game_sound_stress_test_message_queue_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?game_sound_stress_test_message_queue_game_sound_stress_test_message_queue_0_evaluate@@YAXFJ_N@Z");
//};

//void net_log_channel_message_queue_state_net_log_channel_message_queue_state_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?net_log_channel_message_queue_state_net_log_channel_message_queue_state_2_evaluate@@YAXFJ_N@Z");
//};

//void global_preferences_set_campaign_state_test_global_preferences_set_campaign_state_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?global_preferences_set_campaign_state_test_global_preferences_set_campaign_state_1_evaluate@@YAXFJ_N@Z");
//};

//void net_load_machine_file_network_banhammer_load_machine_file_from_file_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?net_load_machine_file_network_banhammer_load_machine_file_from_file_1_evaluate@@YAXFJ_N@Z");
//};

//void lightmap_memory_inspect_inspect_lightmap_memories_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?lightmap_memory_inspect_inspect_lightmap_memories_0_evaluate@@YAXFJ_N@Z");
//};

//void game_set_random_holiday_game_set_random_holiday_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?game_set_random_holiday_game_set_random_holiday_0_evaluate@@YAXFJ_N@Z");
//};

//void airstrike_enable_airstrike_enable_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?airstrike_enable_airstrike_enable_1_evaluate@@YAXFJ_N@Z");
//};

//void airstrike_weapons_exist_airstrike_weapons_exist_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?airstrike_weapons_exist_airstrike_weapons_exist_0_evaluate@@YAXFJ_N@Z");
//};

//void airstrike_set_launches_airstrike_set_launches_remaining_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?airstrike_set_launches_airstrike_set_launches_remaining_1_evaluate@@YAXFJ_N@Z");
//};

//void cui_debug_add_global_property_watch_cui_debug_add_global_property_watch_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?cui_debug_add_global_property_watch_cui_debug_add_global_property_watch_1_evaluate@@YAXFJ_N@Z");
//};

//void cui_debug_add_property_watch_cui_debug_add_property_watch_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?cui_debug_add_property_watch_cui_debug_add_property_watch_1_evaluate@@YAXFJ_N@Z");
//};

//void cui_debug_remove_global_property_watch_cui_debug_remove_global_property_watch_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?cui_debug_remove_global_property_watch_cui_debug_remove_global_property_watch_1_evaluate@@YAXFJ_N@Z");
//};

//void cui_debug_remove_property_watch_cui_debug_remove_property_watch_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?cui_debug_remove_property_watch_cui_debug_remove_property_watch_1_evaluate@@YAXFJ_N@Z");
//};

//void cui_debug_clear_global_property_watches_cui_debug_clear_global_property_watches_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?cui_debug_clear_global_property_watches_cui_debug_clear_global_property_watches_0_evaluate@@YAXFJ_N@Z");
//};

//void cui_debug_clear_property_watches_cui_debug_clear_property_watches_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?cui_debug_clear_property_watches_cui_debug_clear_property_watches_0_evaluate@@YAXFJ_N@Z");
//};

//void cui_debug_add_global_binding_watch_cui_debug_add_global_binding_watch_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?cui_debug_add_global_binding_watch_cui_debug_add_global_binding_watch_1_evaluate@@YAXFJ_N@Z");
//};

//void cui_debug_add_binding_watch_cui_debug_add_binding_watch_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?cui_debug_add_binding_watch_cui_debug_add_binding_watch_1_evaluate@@YAXFJ_N@Z");
//};

//void cui_debug_remove_global_binding_watch_cui_debug_remove_global_binding_watch_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?cui_debug_remove_global_binding_watch_cui_debug_remove_global_binding_watch_1_evaluate@@YAXFJ_N@Z");
//};

//void cui_debug_remove_binding_watch_cui_debug_remove_binding_watch_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?cui_debug_remove_binding_watch_cui_debug_remove_binding_watch_1_evaluate@@YAXFJ_N@Z");
//};

//void cui_debug_clear_global_binding_watches_cui_debug_clear_global_binding_watches_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?cui_debug_clear_global_binding_watches_cui_debug_clear_global_binding_watches_0_evaluate@@YAXFJ_N@Z");
//};

//void cui_debug_clear_binding_watches_cui_debug_clear_binding_watches_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?cui_debug_clear_binding_watches_cui_debug_clear_binding_watches_0_evaluate@@YAXFJ_N@Z");
//};

//void cui_debug_clear_global_cui_debug_clear_global_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?cui_debug_clear_global_cui_debug_clear_global_0_evaluate@@YAXFJ_N@Z");
//};

//void cui_debug_clear_cui_debug_clear_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?cui_debug_clear_cui_debug_clear_0_evaluate@@YAXFJ_N@Z");
//};

//void game_grief_record_custom_penalty_game_grief_record_custom_penalty_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?game_grief_record_custom_penalty_game_grief_record_custom_penalty_2_evaluate@@YAXFJ_N@Z");
//};

//void game_grief_reset_game_grief_reset_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?game_grief_reset_game_grief_reset_0_evaluate@@YAXFJ_N@Z");
//};

//void game_grief_force_social_matchmaking_game_grief_force_social_matchmaking_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?game_grief_force_social_matchmaking_game_grief_force_social_matchmaking_0_evaluate@@YAXFJ_N@Z");
//};

//void game_grief_force_ranked_matchmaking_game_grief_force_ranked_matchmaking_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?game_grief_force_ranked_matchmaking_game_grief_force_ranked_matchmaking_0_evaluate@@YAXFJ_N@Z");
//};

//void game_grief_set_ranked_matchmaking_multiplier_game_grief_set_ranked_matchmaking_multiplier_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?game_grief_set_ranked_matchmaking_multiplier_game_grief_set_ranked_matchmaking_multiplier_1_evaluate@@YAXFJ_N@Z");
//};

//void game_grief_set_social_matchmaking_multiplier_game_grief_set_social_matchmaking_multiplier_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?game_grief_set_social_matchmaking_multiplier_game_grief_set_social_matchmaking_multiplier_1_evaluate@@YAXFJ_N@Z");
//};

//void game_grief_set_custom_game_multiplier_game_grief_set_custom_game_multiplier_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?game_grief_set_custom_game_multiplier_game_grief_set_custom_game_multiplier_1_evaluate@@YAXFJ_N@Z");
//};

//void game_grief_set_objects_in_sphere_radius_game_grief_set_objects_in_sphere_radius_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?game_grief_set_objects_in_sphere_radius_game_grief_set_objects_in_sphere_radius_1_evaluate@@YAXFJ_N@Z");
//};

//void game_grief_set_ai_multiplier_game_grief_set_ai_multiplier_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?game_grief_set_ai_multiplier_game_grief_set_ai_multiplier_1_evaluate@@YAXFJ_N@Z");
//};

//void game_grief_set_enemy_ai_nearby_multiplier_game_grief_set_enemy_ai_nearby_multiplier_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?game_grief_set_enemy_ai_nearby_multiplier_game_grief_set_enemy_ai_nearby_multiplier_1_evaluate@@YAXFJ_N@Z");
//};

//void game_grief_set_enemy_player_nearby_multiplier_game_grief_set_enemy_player_nearby_multiplier_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?game_grief_set_enemy_player_nearby_multiplier_game_grief_set_enemy_player_nearby_multiplier_1_evaluate@@YAXFJ_N@Z");
//};

//void game_grief_set_same_squad_multiplier_game_grief_set_same_squad_multiplier_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?game_grief_set_same_squad_multiplier_game_grief_set_same_squad_multiplier_1_evaluate@@YAXFJ_N@Z");
//};

//void game_grief_set_shield_damage_base_penalty_game_grief_set_shield_damage_base_penalty_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?game_grief_set_shield_damage_base_penalty_game_grief_set_shield_damage_base_penalty_1_evaluate@@YAXFJ_N@Z");
//};

//void game_grief_set_body_damage_base_penalty_game_grief_set_body_damage_base_penalty_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?game_grief_set_body_damage_base_penalty_game_grief_set_body_damage_base_penalty_1_evaluate@@YAXFJ_N@Z");
//};

//void game_grief_set_betrayal_base_penalty_game_grief_set_betrayal_base_penalty_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?game_grief_set_betrayal_base_penalty_game_grief_set_betrayal_base_penalty_1_evaluate@@YAXFJ_N@Z");
//};

//void game_grief_set_betrayal_boot_cutoff_game_grief_set_betrayal_boot_cutoff_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?game_grief_set_betrayal_boot_cutoff_game_grief_set_betrayal_boot_cutoff_1_evaluate@@YAXFJ_N@Z");
//};

//void game_grief_set_ejection_cutoff_game_grief_set_ejection_cutoff_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?game_grief_set_ejection_cutoff_game_grief_set_ejection_cutoff_1_evaluate@@YAXFJ_N@Z");
//};

//void game_grief_set_betrayal_decay_seconds_game_grief_set_betrayal_decay_seconds_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?game_grief_set_betrayal_decay_seconds_game_grief_set_betrayal_decay_seconds_1_evaluate@@YAXFJ_N@Z");
//};

//void game_grief_set_eject_decay_seconds_game_grief_set_eject_decay_seconds_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?game_grief_set_eject_decay_seconds_game_grief_set_eject_decay_seconds_1_evaluate@@YAXFJ_N@Z");
//};

//void net_disconnect_and_reconnect_all_channels_net_disconnect_and_reconnect_all_channels_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?net_disconnect_and_reconnect_all_channels_net_disconnect_and_reconnect_all_channels_0_evaluate@@YAXFJ_N@Z");
//};

//void player_set_profile_player_set_global_campaign_profile_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?player_set_profile_player_set_global_campaign_profile_1_evaluate@@YAXFJ_N@Z");
//};

//void player_set_profile_player_set_campaign_profile_2_evaluate(short, long, bool)
//{
//    mangled_ppc("?player_set_profile_player_set_campaign_profile_2_evaluate@@YAXFJ_N@Z");
//};

//void security_run_unit_tests_security_run_unit_tests_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?security_run_unit_tests_security_run_unit_tests_0_evaluate@@YAXFJ_N@Z");
//};

//void network_session_security_set_challenge_response_network_session_security_set_challenge_response_3_evaluate(short, long, bool)
//{
//    mangled_ppc("?network_session_security_set_challenge_response_network_session_security_set_challenge_response_3_evaluate@@YAXFJ_N@Z");
//};

//void network_session_security_set_challenge_failure_on_timeout_network_session_security_set_challenge_failure_on_timeout_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?network_session_security_set_challenge_failure_on_timeout_network_session_security_set_challenge_failure_on_timeout_1_evaluate@@YAXFJ_N@Z");
//};

//void network_session_security_set_challenge_force_fail_network_session_security_set_challenge_force_fail_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?network_session_security_set_challenge_force_fail_network_session_security_set_challenge_force_fail_1_evaluate@@YAXFJ_N@Z");
//};

//void network_session_security_disable_challenges_network_session_security_disable_challenges_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?network_session_security_disable_challenges_network_session_security_disable_challenges_1_evaluate@@YAXFJ_N@Z");
//};

//void test_player_appearance_encode_for_sneakernet_test_player_appearance_encode_for_sneakernet_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?test_player_appearance_encode_for_sneakernet_test_player_appearance_encode_for_sneakernet_0_evaluate@@YAXFJ_N@Z");
//};

//void test_player_appearance_decode_from_sneakernet_test_player_appearance_decode_from_sneakernet_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?test_player_appearance_decode_from_sneakernet_test_player_appearance_decode_from_sneakernet_1_evaluate@@YAXFJ_N@Z");
//};

//void ui_content_resize_cache_test_user_interface_content_resize_cache_1_evaluate(short, long, bool)
//{
//    mangled_ppc("?ui_content_resize_cache_test_user_interface_content_resize_cache_1_evaluate@@YAXFJ_N@Z");
//};

//void motl_dump_bitvector_for_scenario_multiplayer_object_type_list_dump_bitvector_for_scenario_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?motl_dump_bitvector_for_scenario_multiplayer_object_type_list_dump_bitvector_for_scenario_0_evaluate@@YAXFJ_N@Z");
//};

//void motl_verify_mapinfo_for_scenario_multiplayer_object_type_list_verify_mapinfo_for_scenario_0_evaluate(short, long, bool)
//{
//    mangled_ppc("?motl_verify_mapinfo_for_scenario_multiplayer_object_type_list_verify_mapinfo_for_scenario_0_evaluate@@YAXFJ_N@Z");
//};

