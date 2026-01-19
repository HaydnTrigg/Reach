/* ---------- headers */

#include "omaha\interface\c_player_profile.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static int const c_enum_no_init<enum e_gamepad_button, unsigned char, 0, 25, struct s_default_enum_string_resolver>::k_minimum_value; // "?k_minimum_value@?$c_enum_no_init@W4e_gamepad_button@@E$0A@$0BJ@Us_default_enum_string_resolver@@@@2HB"
// public: static enum e_gamepad_button const c_enum_no_init<enum e_gamepad_button, unsigned char, 0, 25, struct s_default_enum_string_resolver>::k_maximum_value_plus_one; // "?k_maximum_value_plus_one@?$c_enum_no_init@W4e_gamepad_button@@E$0A@$0BJ@Us_default_enum_string_resolver@@@@2W4e_gamepad_button@@B"
// public: static int const c_enum_no_init<enum e_button_action, char, 0, 36, struct s_default_enum_string_resolver>::k_minimum_value; // "?k_minimum_value@?$c_enum_no_init@W4e_button_action@@D$0A@$0CE@Us_default_enum_string_resolver@@@@2HB"
// public: static enum e_button_action const c_enum_no_init<enum e_button_action, char, 0, 36, struct s_default_enum_string_resolver>::k_maximum_value_plus_one; // "?k_maximum_value_plus_one@?$c_enum_no_init@W4e_button_action@@D$0A@$0CE@Us_default_enum_string_resolver@@@@2W4e_button_action@@B"
// public: static enum e_button_remapping_failure_reason const c_flags_no_init<enum e_button_remapping_failure_reason, unsigned char, 4, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_button_remapping_failure_reason@@E$03Us_default_enum_string_resolver@@@@2W4e_button_remapping_failure_reason@@B"
// public: static int const c_static_wchar_string<6>::k_buffer_size; // "?k_buffer_size@?$c_static_wchar_string@$05@@2HB"
// long volatile `public: void __cdecl c_big_flags_typed_no_init<long, 768>::clear(void)'::`35'::x_event_category_index; // "?x_event_category_index@?CD@??clear@?$c_big_flags_typed_no_init@J$0DAA@@@QAAXXZ@4JC"
// bool g_debug_button_action_mapping_active; // "?g_debug_button_action_mapping_active@@3_NA"

// public: c_player_profile_interface::c_player_profile_interface(void);
// public: c_player_profile_interface::<unnamed-type-m_campaign>::<unnamed-type-m_campaign>(void);
// public: c_player_profile_interface::<unnamed-type-m_purchase_item_record>::<unnamed-type-m_purchase_item_record>(void);
// public: c_player_profile_interface::c_player_profile_interface(bool);
// public: void c_player_profile_interface::initialize(enum e_controller_index, class c_verify_strings_task<2, 5> *);
// public: void c_player_profile_interface::signed_out(void);
// public: void c_player_profile_interface::update(enum e_controller_index);
// public: void c_player_profile_interface::set_unsafe_to_save(bool);
// public: unsigned long c_player_profile_interface::get_viewed_purchase_checksum(void) const;
// private: void c_player_profile_interface::update_service_tag(void);
// public: bool c_player_profile_interface::get_controller_look_inverted(void) const;
// public: void c_player_profile_interface::set_controller_look_inverted(bool, bool);
// public: bool c_player_profile_interface::get_controller_flight_stick_aircraft_controls(void) const;
// public: void c_player_profile_interface::set_controller_flight_stick_aircraft_controls(bool, bool);
// public: bool c_player_profile_interface::get_controller_crouch_lock_enabled(void) const;
// public: void c_player_profile_interface::set_controller_crouch_lock_enabled(bool, bool);
// public: bool c_player_profile_interface::get_controller_auto_center_look(void) const;
// public: void c_player_profile_interface::set_controller_auto_center_look(bool, bool);
// public: bool c_player_profile_interface::get_controller_southpaw(void) const;
// public: void c_player_profile_interface::set_controller_southpaw(bool, bool);
// public: bool c_player_profile_interface::get_controller_clench_protection(void) const;
// public: void c_player_profile_interface::set_controller_clench_protection(bool, bool);
// public: enum e_button_presets c_player_profile_interface::get_button_preset(void) const;
// public: void c_player_profile_interface::set_button_preset(enum e_button_presets, bool);
// public: class c_enum<enum e_gamepad_button, unsigned char, 0, 25, struct s_default_enum_string_resolver> c_player_profile_interface::get_actual_button(class c_enum<enum e_button_action, char, 0, 36, struct s_default_enum_string_resolver>) const;
// public: class c_enum<enum e_button_action, char, 0, 36, struct s_default_enum_string_resolver> c_player_profile_interface::get_first_actual_action(class c_enum<enum e_gamepad_button, unsigned char, 0, 25, struct s_default_enum_string_resolver>) const;
// public: class c_enum<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver> c_player_profile_interface::get_custom_button(class c_enum<enum e_button_action, char, 0, 10, struct s_default_enum_string_resolver>) const;
// public: void c_player_profile_interface::set_custom_button(class c_enum<enum e_button_action, char, 0, 10, struct s_default_enum_string_resolver>, class c_enum<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>, bool);
// public: class c_enum<enum e_button_action, char, 0, 10, struct s_default_enum_string_resolver> c_player_profile_interface::get_custom_action(class c_enum<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>) const;
// public: bool c_player_profile_interface::custom_button_can_map_to_action(class c_enum<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>, class c_enum<enum e_button_action, char, 0, 10, struct s_default_enum_string_resolver>) const;
// public: void c_player_profile_interface::get_button_remapping_failure_reason_flags(class c_flags<enum e_button_remapping_failure_reason, unsigned char, 4, struct s_default_enum_string_resolver> *) const;
// public: enum e_button_remapping_failure_reason c_player_profile_interface::get_first_button_remapping_failure_reason(void) const;
// public: bool c_player_profile_interface::is_button_remapping_valid(void) const;
// public: bool c_player_profile_interface::is_button_remapping_failure_reason_multiple_actions_mapped_to_the_same_button(void) const;
// public: bool c_player_profile_interface::is_button_remapping_failure_reason_fire_weapon_not_on_trigger(void) const;
// public: bool c_player_profile_interface::is_button_remapping_failure_reason_reload_on_trigger(void) const;
// public: bool c_player_profile_interface::is_button_remapping_failure_reason_action_outside_remappable_button_range(void) const;
// public: enum e_joystick_presets c_player_profile_interface::get_joystick_preset(void) const;
// public: void c_player_profile_interface::set_joystick_preset(enum e_joystick_presets, bool);
// public: enum e_look_sensitivity c_player_profile_interface::get_look_sensitivity(void) const;
// public: void c_player_profile_interface::set_look_sensitivity(enum e_look_sensitivity, bool);
// public: enum e_camera_attached_horizontal c_player_profile_interface::get_camera_attached_horizontal(void) const;
// public: void c_player_profile_interface::set_camera_attached_horizontal(enum e_camera_attached_horizontal, bool);
// public: enum e_camera_panning c_player_profile_interface::get_camera_panning(void) const;
// public: void c_player_profile_interface::set_camera_panning(enum e_camera_panning, bool);
// public: enum e_camera_look_sensitivity c_player_profile_interface::get_camera_look_sensitivity(void) const;
// public: void c_player_profile_interface::set_camera_look_sensitivity(enum e_camera_look_sensitivity, bool);
// public: enum e_camera_flying_movement c_player_profile_interface::get_camera_flying_movement(void) const;
// public: void c_player_profile_interface::set_camera_flying_movement(enum e_camera_flying_movement, bool);
// public: enum e_camera_flying_thrust c_player_profile_interface::get_camera_flying_thrust(void) const;
// public: void c_player_profile_interface::set_camera_flying_thrust(enum e_camera_flying_thrust, bool);
// public: bool c_player_profile_interface::get_film_auto_save(enum e_film_auto_save_type) const;
// public: void c_player_profile_interface::set_film_auto_save(enum e_film_auto_save_type, bool, bool);
// public: enum e_campaign_difficulty_level c_player_profile_interface::get_campaign_difficulty(void) const;
// public: void c_player_profile_interface::set_campaign_difficulty(enum e_campaign_difficulty_level, bool);
// public: short c_player_profile_interface::get_last_campaign_played_absolute_index(void) const;
// public: void c_player_profile_interface::set_last_campaign_played_absolute_index(short, bool);
// public: short c_player_profile_interface::get_last_campaign_map_played_absolute_index(void) const;
// public: void c_player_profile_interface::set_last_campaign_map_played_absolute_index(short, bool);
// public: unsigned __int64 c_player_profile_interface::get_last_campaign_played_time(enum e_campaign_game_mode) const;
// public: void c_player_profile_interface::set_last_campaign_played_time(enum e_campaign_game_mode, unsigned __int64, bool);
// public: bool c_player_profile_interface::get_map_completed_at_difficulty_level(enum e_campaign_game_mode, long, enum e_campaign_difficulty_level) const;
// public: void c_player_profile_interface::set_map_completed_at_difficulty_level(enum e_campaign_game_mode, long, enum e_campaign_difficulty_level, bool, bool);
// public: void c_player_profile_interface::player_campaign_progress_clear(bool);
// public: void c_player_profile_interface::player_campaign_progress_set_insertion_point(short, short, bool, bool);
// public: bool c_player_profile_interface::player_campaign_progress_test_insertion_point(short, short) const;
// public: void c_player_profile_interface::player_campaign_progress_set_map(short, bool, bool);
// public: bool c_player_profile_interface::player_campaign_progress_test_map(short) const;
// public: void c_player_profile_interface::player_campaign_progress_finished_map(short, bool);
// public: class c_flags<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver> c_player_profile_interface::get_campaign_awarded_skull_bitvector(void) const;
// public: void c_player_profile_interface::set_campaign_awarded_skull_bitvector(class c_flags<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver>, bool);
// public: long c_player_profile_interface::get_campaign_terminal_read_level1_bitvector(void) const;
// public: void c_player_profile_interface::set_campaign_terminal_read_level1_bitvector(short, bool);
// public: long c_player_profile_interface::get_campaign_terminal_read_level2_bitvector(void) const;
// public: void c_player_profile_interface::set_campaign_terminal_read_level2_bitvector(short, bool);
// public: bool c_player_profile_interface::get_female_voice_enabled(void) const;
// public: void c_player_profile_interface::set_female_voice_enabled(bool, bool);
// public: void c_player_profile_interface::set_appearance_changed_recently(bool);
// public: void c_player_profile_interface::get_player_appearance(struct s_player_appearance *) const;
// public: void c_player_profile_interface::set_player_appearance(struct s_player_appearance const *, bool);
// public: enum e_player_color_index c_player_profile_interface::get_primary_change_color(void) const;
// public: void c_player_profile_interface::set_primary_change_color(enum e_player_color_index, bool);
// public: bool c_player_profile_interface::has_appearance_changed_recently(void) const;
// public: enum e_player_color_index c_player_profile_interface::get_secondary_change_color(void) const;
// public: void c_player_profile_interface::set_secondary_change_color(enum e_player_color_index, bool);
// public: enum e_player_color_index c_player_profile_interface::get_tertiary_change_color(void) const;
// bool player_rewards_allows_player_customization_selection(enum e_controller_index, struct s_player_customization_description const *, char);
// public: enum e_player_color_index c_player_profile_interface::get_tertiary_change_color_raw_for_storage_writes(void) const;
// public: void c_player_profile_interface::set_tertiary_change_color(enum e_player_color_index, bool);
// public: enum e_player_model_choice c_player_profile_interface::get_player_model_choice(void) const;
// public: void c_player_profile_interface::set_player_model_choice(enum e_player_model_choice, bool);
// public: struct s_emblem_info c_player_profile_interface::get_emblem_info(void) const;
// public: void c_player_profile_interface::set_emblem_info(struct s_emblem_info const *, bool);
// public: struct s_player_model_customization c_player_profile_interface::get_player_model_customization(void) const;
// public: char c_player_profile_interface::get_player_customization_selection_raw_for_storage_writes(struct s_player_customization_description const *) const;
// public: void c_player_profile_interface::set_player_model_customization_selection(struct s_player_customization_description const *, char, bool);
// public: wchar_t const * c_player_profile_interface::get_desired_service_tag(void) const;
// public: wchar_t const * c_player_profile_interface::get_service_tag_validated(void) const;
// private: static void c_player_profile_interface::generate_random_service_tag(wchar_t *const);
// public: static bool c_player_profile_interface::is_service_tag_validly_formatted(wchar_t const *);
// public: void c_player_profile_interface::set_desired_service_tag(wchar_t const *, bool);
// public: void c_player_profile_interface::set_service_tag_validated(wchar_t const *, bool);
// public: bool c_player_profile_interface::get_service_tag_was_randomly_generated(void) const;
// public: void c_player_profile_interface::set_service_tag_was_randomly_generated(bool, bool);
// public: enum e_voice_mute_setting c_player_profile_interface::get_voice_mute_setting(void) const;
// public: void c_player_profile_interface::set_voice_mute_setting(enum e_voice_mute_setting, bool);
// public: enum e_voice_output_setting c_player_profile_interface::get_voice_output_setting(void) const;
// public: void c_player_profile_interface::set_voice_output_setting(enum e_voice_output_setting, bool);
// public: enum e_voice_matchmaking_setting c_player_profile_interface::get_voice_matchmaking_setting(void) const;
// public: void c_player_profile_interface::set_voice_matchmaking_setting(enum e_voice_matchmaking_setting, bool);
// public: enum e_guide_voice_through_speakers c_player_profile_interface::get_guide_voice_through_speakers(void) const;
// public: void c_player_profile_interface::set_guide_voice_through_speakers(enum e_guide_voice_through_speakers);
// public: bool c_player_profile_interface::get_guide_voice_muted(void) const;
// public: void c_player_profile_interface::set_guide_voice_muted(bool);
// public: enum e_subtitle_setting c_player_profile_interface::get_subtitle_setting(void) const;
// public: void c_player_profile_interface::set_subtitle_setting(enum e_subtitle_setting, bool);
// public: enum e_display_brightness c_player_profile_interface::get_display_brightness(void) const;
// public: void c_player_profile_interface::set_display_brightness(enum e_display_brightness, bool);
// public: void c_player_profile_interface::set_new_user_experience_flags(class c_flags<enum e_new_user_experience, unsigned char, 4, struct s_default_enum_string_resolver>, bool);
// public: void c_player_profile_interface::set_new_user_experience_flag(enum e_new_user_experience, bool, bool);
// public: void c_player_profile_interface::set_new_user_loyalty_bonus(short, bool);
// public: void c_player_profile_interface::set_generic_bonus(short, bool);
// public: long c_player_profile_interface::get_pending_bonus_value(void) const;
// public: void c_player_profile_interface::get_training_data(struct s_player_training_profile_data *) const;
// public: void c_player_profile_interface::set_training_data(struct s_player_training_profile_data const *, bool);
// public: void c_player_profile_interface::get_reward_state(struct s_profile_user_reward_state *) const;
// public: void c_player_profile_interface::set_reward_state(struct s_profile_user_reward_state const *, bool);
// public: void c_player_profile_interface::set_notified_purchase_flags(class c_big_flags<256>, bool);
// public: void c_player_profile_interface::set_viewed_purchase_flags(class c_big_flags<256>, bool);
// public: void c_player_profile_interface::set_viewed_purchase_checksum(unsigned long, bool);
// public: unsigned __int64 c_player_profile_interface::get_file_share_timestamp(void) const;
// public: void c_player_profile_interface::set_file_share_timestamp(unsigned __int64, bool);
// public: unsigned __int64 c_player_profile_interface::get_recommendations_timestamp(void) const;
// public: void c_player_profile_interface::set_recommendations_timestamp(unsigned __int64, bool);
// public: unsigned __int64 c_player_profile_interface::get_predefined_search_share_id_by_index(long) const;
// public: unsigned __int64 c_player_profile_interface::get_predefined_search_timestamp_by_index(long) const;
// public: unsigned __int64 c_player_profile_interface::get_predefined_search_timestamp(unsigned __int64) const;
// public: void c_player_profile_interface::clear_predefined_searches(bool);
// public: void c_player_profile_interface::set_predefined_search_timestamp(unsigned __int64, unsigned __int64, bool);
// public: void c_player_profile_interface::clear_saved_searches(bool);
// public: void c_player_profile_interface::add_saved_search(unsigned __int64, wchar_t const *, unsigned __int64, struct s_online_file_search_query const *);
// public: void c_player_profile_interface::delete_saved_search(long);
// public: unsigned __int64 c_player_profile_interface::get_saved_search_timestamp(long) const;
// public: void c_player_profile_interface::set_saved_search_timestamp(long, unsigned __int64, bool);
// public: unsigned __int64 c_player_profile_interface::get_saved_search_share_id(long) const;
// public: void c_player_profile_interface::set_saved_search_share_id(long, unsigned __int64, bool);
// public: wchar_t const * c_player_profile_interface::get_saved_search_name(long) const;
// public: void c_player_profile_interface::set_saved_search_name(long, wchar_t const *, bool);
// public: struct s_online_file_search_query const * c_player_profile_interface::get_saved_search_query(long) const;
// public: void c_player_profile_interface::set_saved_search_query(long, struct s_online_file_search_query const *, bool);
// public: void s_online_file_search_query::make_valid(void);
// public: void c_player_profile_interface::get_lsp_arena_data(struct s_lsp_leaderboard_profile_arena_data *) const;
// public: void c_player_profile_interface::set_lsp_arena_data(struct s_lsp_leaderboard_profile_arena_data const *);
// public: void c_player_profile_interface::get_quit_probation_data(struct s_network_banhammer_quit_probation_data *) const;
// public: void c_player_profile_interface::set_quit_probation_data(struct s_network_banhammer_quit_probation_data const *);
// public: void c_player_profile_interface::set_viewed_global_nag_message(long);
// public: void c_player_profile_interface::set_viewed_per_user_nag_message(long);
// public: void c_player_profile_interface::set_nag_nessage_data(long, long, long, long);
// public: void c_player_profile_interface::set_viewed_daily_challenge(long);
// public: void c_player_profile_interface::set_viewed_weekly_challenge(long);
// public: void c_player_profile_interface::set_last_viewed_player_grade(enum e_player_grade, bool);
// public: void c_player_profile_interface::set_last_viewed_player_sub_grade(enum e_player_sub_grade, bool);
// public: void c_player_profile_interface::set_waypoint_integration_flags(class c_flags<enum e_waypoint_integration_flags, unsigned long, 1, struct s_default_enum_string_resolver>);
// public: void c_player_profile_interface::get_social_preferences(struct s_network_social_preferences *) const;
// public: void c_player_profile_interface::set_social_preferences(struct s_network_social_preferences const *, bool);
// public: bool c_player_profile_interface::get_unlockable_unlocked(long) const;
// public: static enum e_language c_player_profile_interface::get_language(void);
// public: static enum e_region c_player_profile_interface::get_region(void);
// private: void c_player_profile_interface::read_from_storage(enum e_controller_index);
// private: void c_player_profile_interface::write_to_storage(enum e_controller_index);
// private: void c_player_profile_interface::dirty_or(bool);
// enum e_player_color_index player_profile_choose_random_default_color(void);
// enum e_player_color_index player_profile_choose_pseudorandom_default_color(void);
// private: void c_player_profile_interface::initialize_to_default_settings(void);
// public: void s_lsp_leaderboard_profile_arena_data::initialize(void);
// enum e_button_action & operator++(enum e_button_action &);
// public: void c_player_profile_interface::synchronization_with_storage_complete(void);
// public: void c_player_profile_interface::propagate_settings(void);
// void c_player_profile_initialize(void);
// void c_player_profile_dispose(void);
// void debug_button_action_mapping_set_hs(long, long);
// void controller_set_waypoint_flags(enum e_controller_index, long, bool);
// public: static enum e_content_item_type c_enum_no_init<enum e_content_item_type, char, -1, 8, struct s_default_enum_string_resolver>::begin(void);
// public: static enum e_game_engine_type c_enum_no_init<enum e_game_engine_type, char, 0, 5, struct s_default_enum_string_resolver>::begin(void);
// public: class c_enum_no_init<enum s_online_file_search_query::e_age, char, 0, 4, struct s_default_enum_string_resolver> & c_enum_no_init<enum s_online_file_search_query::e_age, char, 0, 4, struct s_default_enum_string_resolver>::operator=(enum s_online_file_search_query::e_age);
// public: bool c_enum_no_init<enum s_online_file_search_query::e_age, char, 0, 4, struct s_default_enum_string_resolver>::in_range(void) const;
// public: static enum s_online_file_search_query::e_age c_enum_no_init<enum s_online_file_search_query::e_age, char, 0, 4, struct s_default_enum_string_resolver>::begin(void);
// public: class c_enum_no_init<enum s_online_file_search_query::e_sort_criteria, char, 0, 5, struct s_default_enum_string_resolver> & c_enum_no_init<enum s_online_file_search_query::e_sort_criteria, char, 0, 5, struct s_default_enum_string_resolver>::operator=(enum s_online_file_search_query::e_sort_criteria);
// public: bool c_enum_no_init<enum s_online_file_search_query::e_sort_criteria, char, 0, 5, struct s_default_enum_string_resolver>::in_range(void) const;
// public: static enum s_online_file_search_query::e_sort_criteria c_enum_no_init<enum s_online_file_search_query::e_sort_criteria, char, 0, 5, struct s_default_enum_string_resolver>::begin(void);
// public: c_enum<enum e_campaign_difficulty_level, char, -1, 4, struct s_default_enum_string_resolver>::c_enum<enum e_campaign_difficulty_level, char, -1, 4, struct s_default_enum_string_resolver>(void);
// public: c_enum<enum e_campaign_difficulty_level, char, -1, 4, struct s_default_enum_string_resolver>::c_enum<enum e_campaign_difficulty_level, char, -1, 4, struct s_default_enum_string_resolver>(enum e_campaign_difficulty_level);
// public: enum e_remappable_button c_enum_no_init<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>::operator enum e_remappable_button(void) const;
// public: bool c_enum_no_init<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>::operator==(enum e_remappable_button) const;
// public: c_player_profile_insertion_point_flags<64, 12>::c_player_profile_insertion_point_flags<64, 12>(void);
// public: bool c_player_profile_insertion_point_flags<64, 12>::test(long, short) const;
// public: void c_player_profile_insertion_point_flags<64, 12>::set(long, short, bool);
// public: void c_player_profile_insertion_point_flags<64, 12>::clear(void);
// public: bool c_player_profile_insertion_point_flags<64, 12>::is_clear(void) const;
// public: wchar_t const * c_verify_strings_task<2, 5>::get_string(long) const;
// public: c_enum<enum e_gamepad_button, unsigned char, 0, 25, struct s_default_enum_string_resolver>::c_enum<enum e_gamepad_button, unsigned char, 0, 25, struct s_default_enum_string_resolver>(enum e_gamepad_button);
// public: enum e_gamepad_button c_enum_no_init<enum e_gamepad_button, unsigned char, 0, 25, struct s_default_enum_string_resolver>::operator enum e_gamepad_button(void) const;
// public: c_enum<enum e_button_action, char, 0, 36, struct s_default_enum_string_resolver>::c_enum<enum e_button_action, char, 0, 36, struct s_default_enum_string_resolver>(enum e_button_action);
// public: enum e_button_action c_enum_no_init<enum e_button_action, char, 0, 36, struct s_default_enum_string_resolver>::operator enum e_button_action(void) const;
// public: enum e_button_action c_enum_no_init<enum e_button_action, char, 0, 10, struct s_default_enum_string_resolver>::operator enum e_button_action(void) const;
// public: c_big_flags<768>::c_big_flags<768>(void);
// public: c_flags<enum c_player_profile_interface::e_player_profile_interface_flags, unsigned short, 15, struct s_default_enum_string_resolver>::c_flags<enum c_player_profile_interface::e_player_profile_interface_flags, unsigned short, 15, struct s_default_enum_string_resolver>(void);
// private: long c_player_profile_insertion_point_flags<64, 12>::get_flag_index(long, long) const;
// public: void c_big_flags_typed_no_init<long, 768>::clear(void);
// public: bool c_big_flags_typed_no_init<long, 768>::is_clear(void) const;
// public: bool c_big_flags_typed_no_init<long, 768>::test(long) const;
// public: void c_big_flags_typed_no_init<long, 768>::set(long, bool);
// public: c_big_flags_typed<long, 768>::c_big_flags_typed<long, 768>(void);
// public: void c_flags_no_init<enum e_new_user_experience, unsigned char, 4, struct s_default_enum_string_resolver>::clear(void);
// public: void c_flags_no_init<enum e_new_user_experience, unsigned char, 4, struct s_default_enum_string_resolver>::set(enum e_new_user_experience, bool);
// public: bool c_flags_no_init<enum e_new_user_experience, unsigned char, 4, struct s_default_enum_string_resolver>::operator!=(class c_flags_no_init<enum e_new_user_experience, unsigned char, 4, struct s_default_enum_string_resolver> const &) const;
// public: c_flags<enum e_new_user_experience, unsigned char, 4, struct s_default_enum_string_resolver>::c_flags<enum e_new_user_experience, unsigned char, 4, struct s_default_enum_string_resolver>(void);
// public: bool c_flags_no_init<enum e_waypoint_integration_flags, unsigned long, 1, struct s_default_enum_string_resolver>::operator!=(class c_flags_no_init<enum e_waypoint_integration_flags, unsigned long, 1, struct s_default_enum_string_resolver> const &) const;
// public: c_flags<enum e_waypoint_integration_flags, unsigned long, 1, struct s_default_enum_string_resolver>::c_flags<enum e_waypoint_integration_flags, unsigned long, 1, struct s_default_enum_string_resolver>(void);
// public: void c_verify_strings_task<2, 5>::initialize(enum e_language, wchar_t const **, long);
// public: bool c_verify_strings_task<2, 5>::string_passed_verification(long) const;
// public: void c_flags_no_init<enum e_button_remapping_failure_reason, unsigned char, 4, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_button_remapping_failure_reason, unsigned char, 4, struct s_default_enum_string_resolver>::test(enum e_button_remapping_failure_reason) const;
// public: void c_flags_no_init<enum e_button_remapping_failure_reason, unsigned char, 4, struct s_default_enum_string_resolver>::set(enum e_button_remapping_failure_reason, bool);
// public: c_flags<enum e_button_remapping_failure_reason, unsigned char, 4, struct s_default_enum_string_resolver>::c_flags<enum e_button_remapping_failure_reason, unsigned char, 4, struct s_default_enum_string_resolver>(void);
// public: void c_flags_no_init<enum e_player_appearance_flags, unsigned char, 1, struct s_default_enum_string_resolver>::clear(void);
// public: c_static_wchar_string<6>::c_static_wchar_string<6>(wchar_t const *);
// public: long c_static_wchar_string<6>::length(void) const;
// public: wchar_t const * c_static_wchar_string<6>::get_string(void) const;
// public: wchar_t const * c_static_wchar_string<6>::operator wchar_t const *(void) const;
// int wcsncpy_s<24>(wchar_t (&)[24], wchar_t const *, unsigned int);
// void zero_and_reconstruct<class c_player_profile_interface>(class c_player_profile_interface *);
// public: class c_static_wchar_string<5> const & s_static_array<class c_static_wchar_string<5>, 2>::operator[]<long>(long) const;
// public: void c_flags_no_init<enum c_player_profile_interface::e_player_profile_interface_flags, unsigned short, 15, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum c_player_profile_interface::e_player_profile_interface_flags, unsigned short, 15, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: static bool c_big_flags_typed_no_init<long, 768>::valid_bit(long);
// public: bool c_big_flags_typed_no_init<long, 768>::valid(void) const;
// public: bool c_flags_no_init<enum e_new_user_experience, unsigned char, 4, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: void c_flags_no_init<enum e_waypoint_integration_flags, unsigned long, 1, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_waypoint_integration_flags, unsigned long, 1, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: bool c_flags_no_init<enum e_button_remapping_failure_reason, unsigned char, 4, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: static bool c_flags_no_init<enum e_button_remapping_failure_reason, unsigned char, 4, struct s_default_enum_string_resolver>::valid_bit(enum e_button_remapping_failure_reason);
// private: static unsigned char c_flags_no_init<enum e_button_remapping_failure_reason, unsigned char, 4, struct s_default_enum_string_resolver>::flag_size_type(enum e_button_remapping_failure_reason);
// public: void c_static_wchar_string<6>::set(wchar_t const *);
// void reconstruct<class c_player_profile_interface>(class c_player_profile_interface *);
// private: static unsigned short c_flags_no_init<enum c_player_profile_interface::e_player_profile_interface_flags, unsigned short, 15, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// protected: static unsigned long c_big_flags_typed_no_init<long, 768>::get_mask_of_second_slice_of_chunk_inclusive(long);
// private: static unsigned char c_flags_no_init<enum e_new_user_experience, unsigned char, 4, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned long c_flags_no_init<enum e_waypoint_integration_flags, unsigned long, 1, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned char c_flags_no_init<enum e_button_remapping_failure_reason, unsigned char, 4, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned short c_flags_no_init<enum c_player_profile_interface::e_player_profile_interface_flags, unsigned short, 15, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum c_player_profile_interface::e_player_profile_interface_flags);
// protected: static long c_big_flags_typed_no_init<long, 768>::flag_chunk_index_to_bit_index(long);
// protected: static long c_big_flags_typed_no_init<long, 768>::bit_index_to_flag_chunk_index(long);
// protected: static unsigned long c_big_flags_typed_no_init<long, 768>::get_valid_mask_of_last_chunk(void);
// private: static unsigned char c_flags_no_init<enum e_new_user_experience, unsigned char, 4, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_new_user_experience);
// private: static unsigned long c_flags_no_init<enum e_waypoint_integration_flags, unsigned long, 1, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_waypoint_integration_flags);
// private: static unsigned char c_flags_no_init<enum e_button_remapping_failure_reason, unsigned char, 4, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_button_remapping_failure_reason);
// protected: static unsigned long c_big_flags_typed_no_init<long, 768>::get_mask_of_first_slice_of_chunk_exclusive(long);
// time;
// public: s_player_customization_description::s_player_customization_description(enum e_player_customization_type);

//public: c_player_profile_interface::c_player_profile_interface(void)
//{
//    mangled_ppc("??0c_player_profile_interface@@QAA@XZ");
//};

//public: c_player_profile_interface::<unnamed-type-m_campaign>::<unnamed-type-m_campaign>(void)
//{
//    mangled_ppc("??0<unnamed-type-m_campaign>@c_player_profile_interface@@QAA@XZ");
//};

//public: c_player_profile_interface::<unnamed-type-m_purchase_item_record>::<unnamed-type-m_purchase_item_record>(void)
//{
//    mangled_ppc("??0<unnamed-type-m_purchase_item_record>@c_player_profile_interface@@QAA@XZ");
//};

//public: c_player_profile_interface::c_player_profile_interface(bool)
//{
//    mangled_ppc("??0c_player_profile_interface@@QAA@_N@Z");
//};

//public: void c_player_profile_interface::initialize(enum e_controller_index, class c_verify_strings_task<2, 5> *)
//{
//    mangled_ppc("?initialize@c_player_profile_interface@@QAAXW4e_controller_index@@PAV?$c_verify_strings_task@$01$04@@@Z");
//};

//public: void c_player_profile_interface::signed_out(void)
//{
//    mangled_ppc("?signed_out@c_player_profile_interface@@QAAXXZ");
//};

//public: void c_player_profile_interface::update(enum e_controller_index)
//{
//    mangled_ppc("?update@c_player_profile_interface@@QAAXW4e_controller_index@@@Z");
//};

//public: void c_player_profile_interface::set_unsafe_to_save(bool)
//{
//    mangled_ppc("?set_unsafe_to_save@c_player_profile_interface@@QAAX_N@Z");
//};

//public: unsigned long c_player_profile_interface::get_viewed_purchase_checksum(void) const
//{
//    mangled_ppc("?get_viewed_purchase_checksum@c_player_profile_interface@@QBAKXZ");
//};

//private: void c_player_profile_interface::update_service_tag(void)
//{
//    mangled_ppc("?update_service_tag@c_player_profile_interface@@AAAXXZ");
//};

//public: bool c_player_profile_interface::get_controller_look_inverted(void) const
//{
//    mangled_ppc("?get_controller_look_inverted@c_player_profile_interface@@QBA_NXZ");
//};

//public: void c_player_profile_interface::set_controller_look_inverted(bool, bool)
//{
//    mangled_ppc("?set_controller_look_inverted@c_player_profile_interface@@QAAX_N0@Z");
//};

//public: bool c_player_profile_interface::get_controller_flight_stick_aircraft_controls(void) const
//{
//    mangled_ppc("?get_controller_flight_stick_aircraft_controls@c_player_profile_interface@@QBA_NXZ");
//};

//public: void c_player_profile_interface::set_controller_flight_stick_aircraft_controls(bool, bool)
//{
//    mangled_ppc("?set_controller_flight_stick_aircraft_controls@c_player_profile_interface@@QAAX_N0@Z");
//};

//public: bool c_player_profile_interface::get_controller_crouch_lock_enabled(void) const
//{
//    mangled_ppc("?get_controller_crouch_lock_enabled@c_player_profile_interface@@QBA_NXZ");
//};

//public: void c_player_profile_interface::set_controller_crouch_lock_enabled(bool, bool)
//{
//    mangled_ppc("?set_controller_crouch_lock_enabled@c_player_profile_interface@@QAAX_N0@Z");
//};

//public: bool c_player_profile_interface::get_controller_auto_center_look(void) const
//{
//    mangled_ppc("?get_controller_auto_center_look@c_player_profile_interface@@QBA_NXZ");
//};

//public: void c_player_profile_interface::set_controller_auto_center_look(bool, bool)
//{
//    mangled_ppc("?set_controller_auto_center_look@c_player_profile_interface@@QAAX_N0@Z");
//};

//public: bool c_player_profile_interface::get_controller_southpaw(void) const
//{
//    mangled_ppc("?get_controller_southpaw@c_player_profile_interface@@QBA_NXZ");
//};

//public: void c_player_profile_interface::set_controller_southpaw(bool, bool)
//{
//    mangled_ppc("?set_controller_southpaw@c_player_profile_interface@@QAAX_N0@Z");
//};

//public: bool c_player_profile_interface::get_controller_clench_protection(void) const
//{
//    mangled_ppc("?get_controller_clench_protection@c_player_profile_interface@@QBA_NXZ");
//};

//public: void c_player_profile_interface::set_controller_clench_protection(bool, bool)
//{
//    mangled_ppc("?set_controller_clench_protection@c_player_profile_interface@@QAAX_N0@Z");
//};

//public: enum e_button_presets c_player_profile_interface::get_button_preset(void) const
//{
//    mangled_ppc("?get_button_preset@c_player_profile_interface@@QBA?AW4e_button_presets@@XZ");
//};

//public: void c_player_profile_interface::set_button_preset(enum e_button_presets, bool)
//{
//    mangled_ppc("?set_button_preset@c_player_profile_interface@@QAAXW4e_button_presets@@_N@Z");
//};

//public: class c_enum<enum e_gamepad_button, unsigned char, 0, 25, struct s_default_enum_string_resolver> c_player_profile_interface::get_actual_button(class c_enum<enum e_button_action, char, 0, 36, struct s_default_enum_string_resolver>) const
//{
//    mangled_ppc("?get_actual_button@c_player_profile_interface@@QBA?AV?$c_enum@W4e_gamepad_button@@E$0A@$0BJ@Us_default_enum_string_resolver@@@@V?$c_enum@W4e_button_action@@D$0A@$0CE@Us_default_enum_string_resolver@@@@@Z");
//};

//public: class c_enum<enum e_button_action, char, 0, 36, struct s_default_enum_string_resolver> c_player_profile_interface::get_first_actual_action(class c_enum<enum e_gamepad_button, unsigned char, 0, 25, struct s_default_enum_string_resolver>) const
//{
//    mangled_ppc("?get_first_actual_action@c_player_profile_interface@@QBA?AV?$c_enum@W4e_button_action@@D$0A@$0CE@Us_default_enum_string_resolver@@@@V?$c_enum@W4e_gamepad_button@@E$0A@$0BJ@Us_default_enum_string_resolver@@@@@Z");
//};

//public: class c_enum<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver> c_player_profile_interface::get_custom_button(class c_enum<enum e_button_action, char, 0, 10, struct s_default_enum_string_resolver>) const
//{
//    mangled_ppc("?get_custom_button@c_player_profile_interface@@QBA?AV?$c_enum@W4e_remappable_button@@D$0A@$09Us_default_enum_string_resolver@@@@V?$c_enum@W4e_button_action@@D$0A@$09Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_player_profile_interface::set_custom_button(class c_enum<enum e_button_action, char, 0, 10, struct s_default_enum_string_resolver>, class c_enum<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>, bool)
//{
//    mangled_ppc("?set_custom_button@c_player_profile_interface@@QAAXV?$c_enum@W4e_button_action@@D$0A@$09Us_default_enum_string_resolver@@@@V?$c_enum@W4e_remappable_button@@D$0A@$09Us_default_enum_string_resolver@@@@_N@Z");
//};

//public: class c_enum<enum e_button_action, char, 0, 10, struct s_default_enum_string_resolver> c_player_profile_interface::get_custom_action(class c_enum<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>) const
//{
//    mangled_ppc("?get_custom_action@c_player_profile_interface@@QBA?AV?$c_enum@W4e_button_action@@D$0A@$09Us_default_enum_string_resolver@@@@V?$c_enum@W4e_remappable_button@@D$0A@$09Us_default_enum_string_resolver@@@@@Z");
//};

//public: bool c_player_profile_interface::custom_button_can_map_to_action(class c_enum<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>, class c_enum<enum e_button_action, char, 0, 10, struct s_default_enum_string_resolver>) const
//{
//    mangled_ppc("?custom_button_can_map_to_action@c_player_profile_interface@@QBA_NV?$c_enum@W4e_remappable_button@@D$0A@$09Us_default_enum_string_resolver@@@@V?$c_enum@W4e_button_action@@D$0A@$09Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_player_profile_interface::get_button_remapping_failure_reason_flags(class c_flags<enum e_button_remapping_failure_reason, unsigned char, 4, struct s_default_enum_string_resolver> *) const
//{
//    mangled_ppc("?get_button_remapping_failure_reason_flags@c_player_profile_interface@@QBAXPAV?$c_flags@W4e_button_remapping_failure_reason@@E$03Us_default_enum_string_resolver@@@@@Z");
//};

//public: enum e_button_remapping_failure_reason c_player_profile_interface::get_first_button_remapping_failure_reason(void) const
//{
//    mangled_ppc("?get_first_button_remapping_failure_reason@c_player_profile_interface@@QBA?AW4e_button_remapping_failure_reason@@XZ");
//};

//public: bool c_player_profile_interface::is_button_remapping_valid(void) const
//{
//    mangled_ppc("?is_button_remapping_valid@c_player_profile_interface@@QBA_NXZ");
//};

//public: bool c_player_profile_interface::is_button_remapping_failure_reason_multiple_actions_mapped_to_the_same_button(void) const
//{
//    mangled_ppc("?is_button_remapping_failure_reason_multiple_actions_mapped_to_the_same_button@c_player_profile_interface@@QBA_NXZ");
//};

//public: bool c_player_profile_interface::is_button_remapping_failure_reason_fire_weapon_not_on_trigger(void) const
//{
//    mangled_ppc("?is_button_remapping_failure_reason_fire_weapon_not_on_trigger@c_player_profile_interface@@QBA_NXZ");
//};

//public: bool c_player_profile_interface::is_button_remapping_failure_reason_reload_on_trigger(void) const
//{
//    mangled_ppc("?is_button_remapping_failure_reason_reload_on_trigger@c_player_profile_interface@@QBA_NXZ");
//};

//public: bool c_player_profile_interface::is_button_remapping_failure_reason_action_outside_remappable_button_range(void) const
//{
//    mangled_ppc("?is_button_remapping_failure_reason_action_outside_remappable_button_range@c_player_profile_interface@@QBA_NXZ");
//};

//public: enum e_joystick_presets c_player_profile_interface::get_joystick_preset(void) const
//{
//    mangled_ppc("?get_joystick_preset@c_player_profile_interface@@QBA?AW4e_joystick_presets@@XZ");
//};

//public: void c_player_profile_interface::set_joystick_preset(enum e_joystick_presets, bool)
//{
//    mangled_ppc("?set_joystick_preset@c_player_profile_interface@@QAAXW4e_joystick_presets@@_N@Z");
//};

//public: enum e_look_sensitivity c_player_profile_interface::get_look_sensitivity(void) const
//{
//    mangled_ppc("?get_look_sensitivity@c_player_profile_interface@@QBA?AW4e_look_sensitivity@@XZ");
//};

//public: void c_player_profile_interface::set_look_sensitivity(enum e_look_sensitivity, bool)
//{
//    mangled_ppc("?set_look_sensitivity@c_player_profile_interface@@QAAXW4e_look_sensitivity@@_N@Z");
//};

//public: enum e_camera_attached_horizontal c_player_profile_interface::get_camera_attached_horizontal(void) const
//{
//    mangled_ppc("?get_camera_attached_horizontal@c_player_profile_interface@@QBA?AW4e_camera_attached_horizontal@@XZ");
//};

//public: void c_player_profile_interface::set_camera_attached_horizontal(enum e_camera_attached_horizontal, bool)
//{
//    mangled_ppc("?set_camera_attached_horizontal@c_player_profile_interface@@QAAXW4e_camera_attached_horizontal@@_N@Z");
//};

//public: enum e_camera_panning c_player_profile_interface::get_camera_panning(void) const
//{
//    mangled_ppc("?get_camera_panning@c_player_profile_interface@@QBA?AW4e_camera_panning@@XZ");
//};

//public: void c_player_profile_interface::set_camera_panning(enum e_camera_panning, bool)
//{
//    mangled_ppc("?set_camera_panning@c_player_profile_interface@@QAAXW4e_camera_panning@@_N@Z");
//};

//public: enum e_camera_look_sensitivity c_player_profile_interface::get_camera_look_sensitivity(void) const
//{
//    mangled_ppc("?get_camera_look_sensitivity@c_player_profile_interface@@QBA?AW4e_camera_look_sensitivity@@XZ");
//};

//public: void c_player_profile_interface::set_camera_look_sensitivity(enum e_camera_look_sensitivity, bool)
//{
//    mangled_ppc("?set_camera_look_sensitivity@c_player_profile_interface@@QAAXW4e_camera_look_sensitivity@@_N@Z");
//};

//public: enum e_camera_flying_movement c_player_profile_interface::get_camera_flying_movement(void) const
//{
//    mangled_ppc("?get_camera_flying_movement@c_player_profile_interface@@QBA?AW4e_camera_flying_movement@@XZ");
//};

//public: void c_player_profile_interface::set_camera_flying_movement(enum e_camera_flying_movement, bool)
//{
//    mangled_ppc("?set_camera_flying_movement@c_player_profile_interface@@QAAXW4e_camera_flying_movement@@_N@Z");
//};

//public: enum e_camera_flying_thrust c_player_profile_interface::get_camera_flying_thrust(void) const
//{
//    mangled_ppc("?get_camera_flying_thrust@c_player_profile_interface@@QBA?AW4e_camera_flying_thrust@@XZ");
//};

//public: void c_player_profile_interface::set_camera_flying_thrust(enum e_camera_flying_thrust, bool)
//{
//    mangled_ppc("?set_camera_flying_thrust@c_player_profile_interface@@QAAXW4e_camera_flying_thrust@@_N@Z");
//};

//public: bool c_player_profile_interface::get_film_auto_save(enum e_film_auto_save_type) const
//{
//    mangled_ppc("?get_film_auto_save@c_player_profile_interface@@QBA_NW4e_film_auto_save_type@@@Z");
//};

//public: void c_player_profile_interface::set_film_auto_save(enum e_film_auto_save_type, bool, bool)
//{
//    mangled_ppc("?set_film_auto_save@c_player_profile_interface@@QAAXW4e_film_auto_save_type@@_N1@Z");
//};

//public: enum e_campaign_difficulty_level c_player_profile_interface::get_campaign_difficulty(void) const
//{
//    mangled_ppc("?get_campaign_difficulty@c_player_profile_interface@@QBA?AW4e_campaign_difficulty_level@@XZ");
//};

//public: void c_player_profile_interface::set_campaign_difficulty(enum e_campaign_difficulty_level, bool)
//{
//    mangled_ppc("?set_campaign_difficulty@c_player_profile_interface@@QAAXW4e_campaign_difficulty_level@@_N@Z");
//};

//public: short c_player_profile_interface::get_last_campaign_played_absolute_index(void) const
//{
//    mangled_ppc("?get_last_campaign_played_absolute_index@c_player_profile_interface@@QBAFXZ");
//};

//public: void c_player_profile_interface::set_last_campaign_played_absolute_index(short, bool)
//{
//    mangled_ppc("?set_last_campaign_played_absolute_index@c_player_profile_interface@@QAAXF_N@Z");
//};

//public: short c_player_profile_interface::get_last_campaign_map_played_absolute_index(void) const
//{
//    mangled_ppc("?get_last_campaign_map_played_absolute_index@c_player_profile_interface@@QBAFXZ");
//};

//public: void c_player_profile_interface::set_last_campaign_map_played_absolute_index(short, bool)
//{
//    mangled_ppc("?set_last_campaign_map_played_absolute_index@c_player_profile_interface@@QAAXF_N@Z");
//};

//public: unsigned __int64 c_player_profile_interface::get_last_campaign_played_time(enum e_campaign_game_mode) const
//{
//    mangled_ppc("?get_last_campaign_played_time@c_player_profile_interface@@QBA_KW4e_campaign_game_mode@@@Z");
//};

//public: void c_player_profile_interface::set_last_campaign_played_time(enum e_campaign_game_mode, unsigned __int64, bool)
//{
//    mangled_ppc("?set_last_campaign_played_time@c_player_profile_interface@@QAAXW4e_campaign_game_mode@@_K_N@Z");
//};

//public: bool c_player_profile_interface::get_map_completed_at_difficulty_level(enum e_campaign_game_mode, long, enum e_campaign_difficulty_level) const
//{
//    mangled_ppc("?get_map_completed_at_difficulty_level@c_player_profile_interface@@QBA_NW4e_campaign_game_mode@@JW4e_campaign_difficulty_level@@@Z");
//};

//public: void c_player_profile_interface::set_map_completed_at_difficulty_level(enum e_campaign_game_mode, long, enum e_campaign_difficulty_level, bool, bool)
//{
//    mangled_ppc("?set_map_completed_at_difficulty_level@c_player_profile_interface@@QAAXW4e_campaign_game_mode@@JW4e_campaign_difficulty_level@@_N2@Z");
//};

//public: void c_player_profile_interface::player_campaign_progress_clear(bool)
//{
//    mangled_ppc("?player_campaign_progress_clear@c_player_profile_interface@@QAAX_N@Z");
//};

//public: void c_player_profile_interface::player_campaign_progress_set_insertion_point(short, short, bool, bool)
//{
//    mangled_ppc("?player_campaign_progress_set_insertion_point@c_player_profile_interface@@QAAXFF_N0@Z");
//};

//public: bool c_player_profile_interface::player_campaign_progress_test_insertion_point(short, short) const
//{
//    mangled_ppc("?player_campaign_progress_test_insertion_point@c_player_profile_interface@@QBA_NFF@Z");
//};

//public: void c_player_profile_interface::player_campaign_progress_set_map(short, bool, bool)
//{
//    mangled_ppc("?player_campaign_progress_set_map@c_player_profile_interface@@QAAXF_N0@Z");
//};

//public: bool c_player_profile_interface::player_campaign_progress_test_map(short) const
//{
//    mangled_ppc("?player_campaign_progress_test_map@c_player_profile_interface@@QBA_NF@Z");
//};

//public: void c_player_profile_interface::player_campaign_progress_finished_map(short, bool)
//{
//    mangled_ppc("?player_campaign_progress_finished_map@c_player_profile_interface@@QAAXF_N@Z");
//};

//public: class c_flags<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver> c_player_profile_interface::get_campaign_awarded_skull_bitvector(void) const
//{
//    mangled_ppc("?get_campaign_awarded_skull_bitvector@c_player_profile_interface@@QBA?AV?$c_flags@W4e_game_skulls@@K$0BB@Us_default_enum_string_resolver@@@@XZ");
//};

//public: void c_player_profile_interface::set_campaign_awarded_skull_bitvector(class c_flags<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver>, bool)
//{
//    mangled_ppc("?set_campaign_awarded_skull_bitvector@c_player_profile_interface@@QAAXV?$c_flags@W4e_game_skulls@@K$0BB@Us_default_enum_string_resolver@@@@_N@Z");
//};

//public: long c_player_profile_interface::get_campaign_terminal_read_level1_bitvector(void) const
//{
//    mangled_ppc("?get_campaign_terminal_read_level1_bitvector@c_player_profile_interface@@QBAJXZ");
//};

//public: void c_player_profile_interface::set_campaign_terminal_read_level1_bitvector(short, bool)
//{
//    mangled_ppc("?set_campaign_terminal_read_level1_bitvector@c_player_profile_interface@@QAAXF_N@Z");
//};

//public: long c_player_profile_interface::get_campaign_terminal_read_level2_bitvector(void) const
//{
//    mangled_ppc("?get_campaign_terminal_read_level2_bitvector@c_player_profile_interface@@QBAJXZ");
//};

//public: void c_player_profile_interface::set_campaign_terminal_read_level2_bitvector(short, bool)
//{
//    mangled_ppc("?set_campaign_terminal_read_level2_bitvector@c_player_profile_interface@@QAAXF_N@Z");
//};

//public: bool c_player_profile_interface::get_female_voice_enabled(void) const
//{
//    mangled_ppc("?get_female_voice_enabled@c_player_profile_interface@@QBA_NXZ");
//};

//public: void c_player_profile_interface::set_female_voice_enabled(bool, bool)
//{
//    mangled_ppc("?set_female_voice_enabled@c_player_profile_interface@@QAAX_N0@Z");
//};

//public: void c_player_profile_interface::set_appearance_changed_recently(bool)
//{
//    mangled_ppc("?set_appearance_changed_recently@c_player_profile_interface@@QAAX_N@Z");
//};

//public: void c_player_profile_interface::get_player_appearance(struct s_player_appearance *) const
//{
//    mangled_ppc("?get_player_appearance@c_player_profile_interface@@QBAXPAUs_player_appearance@@@Z");
//};

//public: void c_player_profile_interface::set_player_appearance(struct s_player_appearance const *, bool)
//{
//    mangled_ppc("?set_player_appearance@c_player_profile_interface@@QAAXPBUs_player_appearance@@_N@Z");
//};

//public: enum e_player_color_index c_player_profile_interface::get_primary_change_color(void) const
//{
//    mangled_ppc("?get_primary_change_color@c_player_profile_interface@@QBA?AW4e_player_color_index@@XZ");
//};

//public: void c_player_profile_interface::set_primary_change_color(enum e_player_color_index, bool)
//{
//    mangled_ppc("?set_primary_change_color@c_player_profile_interface@@QAAXW4e_player_color_index@@_N@Z");
//};

//public: bool c_player_profile_interface::has_appearance_changed_recently(void) const
//{
//    mangled_ppc("?has_appearance_changed_recently@c_player_profile_interface@@QBA_NXZ");
//};

//public: enum e_player_color_index c_player_profile_interface::get_secondary_change_color(void) const
//{
//    mangled_ppc("?get_secondary_change_color@c_player_profile_interface@@QBA?AW4e_player_color_index@@XZ");
//};

//public: void c_player_profile_interface::set_secondary_change_color(enum e_player_color_index, bool)
//{
//    mangled_ppc("?set_secondary_change_color@c_player_profile_interface@@QAAXW4e_player_color_index@@_N@Z");
//};

//public: enum e_player_color_index c_player_profile_interface::get_tertiary_change_color(void) const
//{
//    mangled_ppc("?get_tertiary_change_color@c_player_profile_interface@@QBA?AW4e_player_color_index@@XZ");
//};

//bool player_rewards_allows_player_customization_selection(enum e_controller_index, struct s_player_customization_description const *, char)
//{
//    mangled_ppc("?player_rewards_allows_player_customization_selection@@YA_NW4e_controller_index@@PBUs_player_customization_description@@D@Z");
//};

//public: enum e_player_color_index c_player_profile_interface::get_tertiary_change_color_raw_for_storage_writes(void) const
//{
//    mangled_ppc("?get_tertiary_change_color_raw_for_storage_writes@c_player_profile_interface@@QBA?AW4e_player_color_index@@XZ");
//};

//public: void c_player_profile_interface::set_tertiary_change_color(enum e_player_color_index, bool)
//{
//    mangled_ppc("?set_tertiary_change_color@c_player_profile_interface@@QAAXW4e_player_color_index@@_N@Z");
//};

//public: enum e_player_model_choice c_player_profile_interface::get_player_model_choice(void) const
//{
//    mangled_ppc("?get_player_model_choice@c_player_profile_interface@@QBA?AW4e_player_model_choice@@XZ");
//};

//public: void c_player_profile_interface::set_player_model_choice(enum e_player_model_choice, bool)
//{
//    mangled_ppc("?set_player_model_choice@c_player_profile_interface@@QAAXW4e_player_model_choice@@_N@Z");
//};

//public: struct s_emblem_info c_player_profile_interface::get_emblem_info(void) const
//{
//    mangled_ppc("?get_emblem_info@c_player_profile_interface@@QBA?AUs_emblem_info@@XZ");
//};

//public: void c_player_profile_interface::set_emblem_info(struct s_emblem_info const *, bool)
//{
//    mangled_ppc("?set_emblem_info@c_player_profile_interface@@QAAXPBUs_emblem_info@@_N@Z");
//};

//public: struct s_player_model_customization c_player_profile_interface::get_player_model_customization(void) const
//{
//    mangled_ppc("?get_player_model_customization@c_player_profile_interface@@QBA?AUs_player_model_customization@@XZ");
//};

//public: char c_player_profile_interface::get_player_customization_selection_raw_for_storage_writes(struct s_player_customization_description const *) const
//{
//    mangled_ppc("?get_player_customization_selection_raw_for_storage_writes@c_player_profile_interface@@QBADPBUs_player_customization_description@@@Z");
//};

//public: void c_player_profile_interface::set_player_model_customization_selection(struct s_player_customization_description const *, char, bool)
//{
//    mangled_ppc("?set_player_model_customization_selection@c_player_profile_interface@@QAAXPBUs_player_customization_description@@D_N@Z");
//};

//public: wchar_t const * c_player_profile_interface::get_desired_service_tag(void) const
//{
//    mangled_ppc("?get_desired_service_tag@c_player_profile_interface@@QBAPB_WXZ");
//};

//public: wchar_t const * c_player_profile_interface::get_service_tag_validated(void) const
//{
//    mangled_ppc("?get_service_tag_validated@c_player_profile_interface@@QBAPB_WXZ");
//};

//private: static void c_player_profile_interface::generate_random_service_tag(wchar_t *const)
//{
//    mangled_ppc("?generate_random_service_tag@c_player_profile_interface@@CAXQA_W@Z");
//};

//public: static bool c_player_profile_interface::is_service_tag_validly_formatted(wchar_t const *)
//{
//    mangled_ppc("?is_service_tag_validly_formatted@c_player_profile_interface@@SA_NPB_W@Z");
//};

//public: void c_player_profile_interface::set_desired_service_tag(wchar_t const *, bool)
//{
//    mangled_ppc("?set_desired_service_tag@c_player_profile_interface@@QAAXPB_W_N@Z");
//};

//public: void c_player_profile_interface::set_service_tag_validated(wchar_t const *, bool)
//{
//    mangled_ppc("?set_service_tag_validated@c_player_profile_interface@@QAAXPB_W_N@Z");
//};

//public: bool c_player_profile_interface::get_service_tag_was_randomly_generated(void) const
//{
//    mangled_ppc("?get_service_tag_was_randomly_generated@c_player_profile_interface@@QBA_NXZ");
//};

//public: void c_player_profile_interface::set_service_tag_was_randomly_generated(bool, bool)
//{
//    mangled_ppc("?set_service_tag_was_randomly_generated@c_player_profile_interface@@QAAX_N0@Z");
//};

//public: enum e_voice_mute_setting c_player_profile_interface::get_voice_mute_setting(void) const
//{
//    mangled_ppc("?get_voice_mute_setting@c_player_profile_interface@@QBA?AW4e_voice_mute_setting@@XZ");
//};

//public: void c_player_profile_interface::set_voice_mute_setting(enum e_voice_mute_setting, bool)
//{
//    mangled_ppc("?set_voice_mute_setting@c_player_profile_interface@@QAAXW4e_voice_mute_setting@@_N@Z");
//};

//public: enum e_voice_output_setting c_player_profile_interface::get_voice_output_setting(void) const
//{
//    mangled_ppc("?get_voice_output_setting@c_player_profile_interface@@QBA?AW4e_voice_output_setting@@XZ");
//};

//public: void c_player_profile_interface::set_voice_output_setting(enum e_voice_output_setting, bool)
//{
//    mangled_ppc("?set_voice_output_setting@c_player_profile_interface@@QAAXW4e_voice_output_setting@@_N@Z");
//};

//public: enum e_voice_matchmaking_setting c_player_profile_interface::get_voice_matchmaking_setting(void) const
//{
//    mangled_ppc("?get_voice_matchmaking_setting@c_player_profile_interface@@QBA?AW4e_voice_matchmaking_setting@@XZ");
//};

//public: void c_player_profile_interface::set_voice_matchmaking_setting(enum e_voice_matchmaking_setting, bool)
//{
//    mangled_ppc("?set_voice_matchmaking_setting@c_player_profile_interface@@QAAXW4e_voice_matchmaking_setting@@_N@Z");
//};

//public: enum e_guide_voice_through_speakers c_player_profile_interface::get_guide_voice_through_speakers(void) const
//{
//    mangled_ppc("?get_guide_voice_through_speakers@c_player_profile_interface@@QBA?AW4e_guide_voice_through_speakers@@XZ");
//};

//public: void c_player_profile_interface::set_guide_voice_through_speakers(enum e_guide_voice_through_speakers)
//{
//    mangled_ppc("?set_guide_voice_through_speakers@c_player_profile_interface@@QAAXW4e_guide_voice_through_speakers@@@Z");
//};

//public: bool c_player_profile_interface::get_guide_voice_muted(void) const
//{
//    mangled_ppc("?get_guide_voice_muted@c_player_profile_interface@@QBA_NXZ");
//};

//public: void c_player_profile_interface::set_guide_voice_muted(bool)
//{
//    mangled_ppc("?set_guide_voice_muted@c_player_profile_interface@@QAAX_N@Z");
//};

//public: enum e_subtitle_setting c_player_profile_interface::get_subtitle_setting(void) const
//{
//    mangled_ppc("?get_subtitle_setting@c_player_profile_interface@@QBA?AW4e_subtitle_setting@@XZ");
//};

//public: void c_player_profile_interface::set_subtitle_setting(enum e_subtitle_setting, bool)
//{
//    mangled_ppc("?set_subtitle_setting@c_player_profile_interface@@QAAXW4e_subtitle_setting@@_N@Z");
//};

//public: enum e_display_brightness c_player_profile_interface::get_display_brightness(void) const
//{
//    mangled_ppc("?get_display_brightness@c_player_profile_interface@@QBA?AW4e_display_brightness@@XZ");
//};

//public: void c_player_profile_interface::set_display_brightness(enum e_display_brightness, bool)
//{
//    mangled_ppc("?set_display_brightness@c_player_profile_interface@@QAAXW4e_display_brightness@@_N@Z");
//};

//public: void c_player_profile_interface::set_new_user_experience_flags(class c_flags<enum e_new_user_experience, unsigned char, 4, struct s_default_enum_string_resolver>, bool)
//{
//    mangled_ppc("?set_new_user_experience_flags@c_player_profile_interface@@QAAXV?$c_flags@W4e_new_user_experience@@E$03Us_default_enum_string_resolver@@@@_N@Z");
//};

//public: void c_player_profile_interface::set_new_user_experience_flag(enum e_new_user_experience, bool, bool)
//{
//    mangled_ppc("?set_new_user_experience_flag@c_player_profile_interface@@QAAXW4e_new_user_experience@@_N1@Z");
//};

//public: void c_player_profile_interface::set_new_user_loyalty_bonus(short, bool)
//{
//    mangled_ppc("?set_new_user_loyalty_bonus@c_player_profile_interface@@QAAXF_N@Z");
//};

//public: void c_player_profile_interface::set_generic_bonus(short, bool)
//{
//    mangled_ppc("?set_generic_bonus@c_player_profile_interface@@QAAXF_N@Z");
//};

//public: long c_player_profile_interface::get_pending_bonus_value(void) const
//{
//    mangled_ppc("?get_pending_bonus_value@c_player_profile_interface@@QBAJXZ");
//};

//public: void c_player_profile_interface::get_training_data(struct s_player_training_profile_data *) const
//{
//    mangled_ppc("?get_training_data@c_player_profile_interface@@QBAXPAUs_player_training_profile_data@@@Z");
//};

//public: void c_player_profile_interface::set_training_data(struct s_player_training_profile_data const *, bool)
//{
//    mangled_ppc("?set_training_data@c_player_profile_interface@@QAAXPBUs_player_training_profile_data@@_N@Z");
//};

//public: void c_player_profile_interface::get_reward_state(struct s_profile_user_reward_state *) const
//{
//    mangled_ppc("?get_reward_state@c_player_profile_interface@@QBAXPAUs_profile_user_reward_state@@@Z");
//};

//public: void c_player_profile_interface::set_reward_state(struct s_profile_user_reward_state const *, bool)
//{
//    mangled_ppc("?set_reward_state@c_player_profile_interface@@QAAXPBUs_profile_user_reward_state@@_N@Z");
//};

//public: void c_player_profile_interface::set_notified_purchase_flags(class c_big_flags<256>, bool)
//{
//    mangled_ppc("?set_notified_purchase_flags@c_player_profile_interface@@QAAXV?$c_big_flags@$0BAA@@@_N@Z");
//};

//public: void c_player_profile_interface::set_viewed_purchase_flags(class c_big_flags<256>, bool)
//{
//    mangled_ppc("?set_viewed_purchase_flags@c_player_profile_interface@@QAAXV?$c_big_flags@$0BAA@@@_N@Z");
//};

//public: void c_player_profile_interface::set_viewed_purchase_checksum(unsigned long, bool)
//{
//    mangled_ppc("?set_viewed_purchase_checksum@c_player_profile_interface@@QAAXK_N@Z");
//};

//public: unsigned __int64 c_player_profile_interface::get_file_share_timestamp(void) const
//{
//    mangled_ppc("?get_file_share_timestamp@c_player_profile_interface@@QBA_KXZ");
//};

//public: void c_player_profile_interface::set_file_share_timestamp(unsigned __int64, bool)
//{
//    mangled_ppc("?set_file_share_timestamp@c_player_profile_interface@@QAAX_K_N@Z");
//};

//public: unsigned __int64 c_player_profile_interface::get_recommendations_timestamp(void) const
//{
//    mangled_ppc("?get_recommendations_timestamp@c_player_profile_interface@@QBA_KXZ");
//};

//public: void c_player_profile_interface::set_recommendations_timestamp(unsigned __int64, bool)
//{
//    mangled_ppc("?set_recommendations_timestamp@c_player_profile_interface@@QAAX_K_N@Z");
//};

//public: unsigned __int64 c_player_profile_interface::get_predefined_search_share_id_by_index(long) const
//{
//    mangled_ppc("?get_predefined_search_share_id_by_index@c_player_profile_interface@@QBA_KJ@Z");
//};

//public: unsigned __int64 c_player_profile_interface::get_predefined_search_timestamp_by_index(long) const
//{
//    mangled_ppc("?get_predefined_search_timestamp_by_index@c_player_profile_interface@@QBA_KJ@Z");
//};

//public: unsigned __int64 c_player_profile_interface::get_predefined_search_timestamp(unsigned __int64) const
//{
//    mangled_ppc("?get_predefined_search_timestamp@c_player_profile_interface@@QBA_K_K@Z");
//};

//public: void c_player_profile_interface::clear_predefined_searches(bool)
//{
//    mangled_ppc("?clear_predefined_searches@c_player_profile_interface@@QAAX_N@Z");
//};

//public: void c_player_profile_interface::set_predefined_search_timestamp(unsigned __int64, unsigned __int64, bool)
//{
//    mangled_ppc("?set_predefined_search_timestamp@c_player_profile_interface@@QAAX_K0_N@Z");
//};

//public: void c_player_profile_interface::clear_saved_searches(bool)
//{
//    mangled_ppc("?clear_saved_searches@c_player_profile_interface@@QAAX_N@Z");
//};

//public: void c_player_profile_interface::add_saved_search(unsigned __int64, wchar_t const *, unsigned __int64, struct s_online_file_search_query const *)
//{
//    mangled_ppc("?add_saved_search@c_player_profile_interface@@QAAX_KPB_W0PBUs_online_file_search_query@@@Z");
//};

//public: void c_player_profile_interface::delete_saved_search(long)
//{
//    mangled_ppc("?delete_saved_search@c_player_profile_interface@@QAAXJ@Z");
//};

//public: unsigned __int64 c_player_profile_interface::get_saved_search_timestamp(long) const
//{
//    mangled_ppc("?get_saved_search_timestamp@c_player_profile_interface@@QBA_KJ@Z");
//};

//public: void c_player_profile_interface::set_saved_search_timestamp(long, unsigned __int64, bool)
//{
//    mangled_ppc("?set_saved_search_timestamp@c_player_profile_interface@@QAAXJ_K_N@Z");
//};

//public: unsigned __int64 c_player_profile_interface::get_saved_search_share_id(long) const
//{
//    mangled_ppc("?get_saved_search_share_id@c_player_profile_interface@@QBA_KJ@Z");
//};

//public: void c_player_profile_interface::set_saved_search_share_id(long, unsigned __int64, bool)
//{
//    mangled_ppc("?set_saved_search_share_id@c_player_profile_interface@@QAAXJ_K_N@Z");
//};

//public: wchar_t const * c_player_profile_interface::get_saved_search_name(long) const
//{
//    mangled_ppc("?get_saved_search_name@c_player_profile_interface@@QBAPB_WJ@Z");
//};

//public: void c_player_profile_interface::set_saved_search_name(long, wchar_t const *, bool)
//{
//    mangled_ppc("?set_saved_search_name@c_player_profile_interface@@QAAXJPB_W_N@Z");
//};

//public: struct s_online_file_search_query const * c_player_profile_interface::get_saved_search_query(long) const
//{
//    mangled_ppc("?get_saved_search_query@c_player_profile_interface@@QBAPBUs_online_file_search_query@@J@Z");
//};

//public: void c_player_profile_interface::set_saved_search_query(long, struct s_online_file_search_query const *, bool)
//{
//    mangled_ppc("?set_saved_search_query@c_player_profile_interface@@QAAXJPBUs_online_file_search_query@@_N@Z");
//};

//public: void s_online_file_search_query::make_valid(void)
//{
//    mangled_ppc("?make_valid@s_online_file_search_query@@QAAXXZ");
//};

//public: void c_player_profile_interface::get_lsp_arena_data(struct s_lsp_leaderboard_profile_arena_data *) const
//{
//    mangled_ppc("?get_lsp_arena_data@c_player_profile_interface@@QBAXPAUs_lsp_leaderboard_profile_arena_data@@@Z");
//};

//public: void c_player_profile_interface::set_lsp_arena_data(struct s_lsp_leaderboard_profile_arena_data const *)
//{
//    mangled_ppc("?set_lsp_arena_data@c_player_profile_interface@@QAAXPBUs_lsp_leaderboard_profile_arena_data@@@Z");
//};

//public: void c_player_profile_interface::get_quit_probation_data(struct s_network_banhammer_quit_probation_data *) const
//{
//    mangled_ppc("?get_quit_probation_data@c_player_profile_interface@@QBAXPAUs_network_banhammer_quit_probation_data@@@Z");
//};

//public: void c_player_profile_interface::set_quit_probation_data(struct s_network_banhammer_quit_probation_data const *)
//{
//    mangled_ppc("?set_quit_probation_data@c_player_profile_interface@@QAAXPBUs_network_banhammer_quit_probation_data@@@Z");
//};

//public: void c_player_profile_interface::set_viewed_global_nag_message(long)
//{
//    mangled_ppc("?set_viewed_global_nag_message@c_player_profile_interface@@QAAXJ@Z");
//};

//public: void c_player_profile_interface::set_viewed_per_user_nag_message(long)
//{
//    mangled_ppc("?set_viewed_per_user_nag_message@c_player_profile_interface@@QAAXJ@Z");
//};

//public: void c_player_profile_interface::set_nag_nessage_data(long, long, long, long)
//{
//    mangled_ppc("?set_nag_nessage_data@c_player_profile_interface@@QAAXJJJJ@Z");
//};

//public: void c_player_profile_interface::set_viewed_daily_challenge(long)
//{
//    mangled_ppc("?set_viewed_daily_challenge@c_player_profile_interface@@QAAXJ@Z");
//};

//public: void c_player_profile_interface::set_viewed_weekly_challenge(long)
//{
//    mangled_ppc("?set_viewed_weekly_challenge@c_player_profile_interface@@QAAXJ@Z");
//};

//public: void c_player_profile_interface::set_last_viewed_player_grade(enum e_player_grade, bool)
//{
//    mangled_ppc("?set_last_viewed_player_grade@c_player_profile_interface@@QAAXW4e_player_grade@@_N@Z");
//};

//public: void c_player_profile_interface::set_last_viewed_player_sub_grade(enum e_player_sub_grade, bool)
//{
//    mangled_ppc("?set_last_viewed_player_sub_grade@c_player_profile_interface@@QAAXW4e_player_sub_grade@@_N@Z");
//};

//public: void c_player_profile_interface::set_waypoint_integration_flags(class c_flags<enum e_waypoint_integration_flags, unsigned long, 1, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_waypoint_integration_flags@c_player_profile_interface@@QAAXV?$c_flags@W4e_waypoint_integration_flags@@K$00Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_player_profile_interface::get_social_preferences(struct s_network_social_preferences *) const
//{
//    mangled_ppc("?get_social_preferences@c_player_profile_interface@@QBAXPAUs_network_social_preferences@@@Z");
//};

//public: void c_player_profile_interface::set_social_preferences(struct s_network_social_preferences const *, bool)
//{
//    mangled_ppc("?set_social_preferences@c_player_profile_interface@@QAAXPBUs_network_social_preferences@@_N@Z");
//};

//public: bool c_player_profile_interface::get_unlockable_unlocked(long) const
//{
//    mangled_ppc("?get_unlockable_unlocked@c_player_profile_interface@@QBA_NJ@Z");
//};

//public: static enum e_language c_player_profile_interface::get_language(void)
//{
//    mangled_ppc("?get_language@c_player_profile_interface@@SA?AW4e_language@@XZ");
//};

//public: static enum e_region c_player_profile_interface::get_region(void)
//{
//    mangled_ppc("?get_region@c_player_profile_interface@@SA?AW4e_region@@XZ");
//};

//private: void c_player_profile_interface::read_from_storage(enum e_controller_index)
//{
//    mangled_ppc("?read_from_storage@c_player_profile_interface@@AAAXW4e_controller_index@@@Z");
//};

//private: void c_player_profile_interface::write_to_storage(enum e_controller_index)
//{
//    mangled_ppc("?write_to_storage@c_player_profile_interface@@AAAXW4e_controller_index@@@Z");
//};

//private: void c_player_profile_interface::dirty_or(bool)
//{
//    mangled_ppc("?dirty_or@c_player_profile_interface@@AAAX_N@Z");
//};

//enum e_player_color_index player_profile_choose_random_default_color(void)
//{
//    mangled_ppc("?player_profile_choose_random_default_color@@YA?AW4e_player_color_index@@XZ");
//};

//enum e_player_color_index player_profile_choose_pseudorandom_default_color(void)
//{
//    mangled_ppc("?player_profile_choose_pseudorandom_default_color@@YA?AW4e_player_color_index@@XZ");
//};

//private: void c_player_profile_interface::initialize_to_default_settings(void)
//{
//    mangled_ppc("?initialize_to_default_settings@c_player_profile_interface@@AAAXXZ");
//};

//public: void s_lsp_leaderboard_profile_arena_data::initialize(void)
//{
//    mangled_ppc("?initialize@s_lsp_leaderboard_profile_arena_data@@QAAXXZ");
//};

//enum e_button_action & operator++(enum e_button_action &)
//{
//    mangled_ppc("??E@YAAAW4e_button_action@@AAW40@@Z");
//};

//public: void c_player_profile_interface::synchronization_with_storage_complete(void)
//{
//    mangled_ppc("?synchronization_with_storage_complete@c_player_profile_interface@@QAAXXZ");
//};

//public: void c_player_profile_interface::propagate_settings(void)
//{
//    mangled_ppc("?propagate_settings@c_player_profile_interface@@QAAXXZ");
//};

//void c_player_profile_initialize(void)
//{
//    mangled_ppc("?c_player_profile_initialize@@YAXXZ");
//};

//void c_player_profile_dispose(void)
//{
//    mangled_ppc("?c_player_profile_dispose@@YAXXZ");
//};

//void debug_button_action_mapping_set_hs(long, long)
//{
//    mangled_ppc("?debug_button_action_mapping_set_hs@@YAXJJ@Z");
//};

//void controller_set_waypoint_flags(enum e_controller_index, long, bool)
//{
//    mangled_ppc("?controller_set_waypoint_flags@@YAXW4e_controller_index@@J_N@Z");
//};

//public: static enum e_content_item_type c_enum_no_init<enum e_content_item_type, char, -1, 8, struct s_default_enum_string_resolver>::begin(void)
//{
//    mangled_ppc("?begin@?$c_enum_no_init@W4e_content_item_type@@D$0?0$07Us_default_enum_string_resolver@@@@SA?AW4e_content_item_type@@XZ");
//};

//public: static enum e_game_engine_type c_enum_no_init<enum e_game_engine_type, char, 0, 5, struct s_default_enum_string_resolver>::begin(void)
//{
//    mangled_ppc("?begin@?$c_enum_no_init@W4e_game_engine_type@@D$0A@$04Us_default_enum_string_resolver@@@@SA?AW4e_game_engine_type@@XZ");
//};

//public: class c_enum_no_init<enum s_online_file_search_query::e_age, char, 0, 4, struct s_default_enum_string_resolver> & c_enum_no_init<enum s_online_file_search_query::e_age, char, 0, 4, struct s_default_enum_string_resolver>::operator=(enum s_online_file_search_query::e_age)
//{
//    mangled_ppc("??4?$c_enum_no_init@W4e_age@s_online_file_search_query@@D$0A@$03Us_default_enum_string_resolver@@@@QAAAAV0@W4e_age@s_online_file_search_query@@@Z");
//};

//public: bool c_enum_no_init<enum s_online_file_search_query::e_age, char, 0, 4, struct s_default_enum_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_age@s_online_file_search_query@@D$0A@$03Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static enum s_online_file_search_query::e_age c_enum_no_init<enum s_online_file_search_query::e_age, char, 0, 4, struct s_default_enum_string_resolver>::begin(void)
//{
//    mangled_ppc("?begin@?$c_enum_no_init@W4e_age@s_online_file_search_query@@D$0A@$03Us_default_enum_string_resolver@@@@SA?AW4e_age@s_online_file_search_query@@XZ");
//};

//public: class c_enum_no_init<enum s_online_file_search_query::e_sort_criteria, char, 0, 5, struct s_default_enum_string_resolver> & c_enum_no_init<enum s_online_file_search_query::e_sort_criteria, char, 0, 5, struct s_default_enum_string_resolver>::operator=(enum s_online_file_search_query::e_sort_criteria)
//{
//    mangled_ppc("??4?$c_enum_no_init@W4e_sort_criteria@s_online_file_search_query@@D$0A@$04Us_default_enum_string_resolver@@@@QAAAAV0@W4e_sort_criteria@s_online_file_search_query@@@Z");
//};

//public: bool c_enum_no_init<enum s_online_file_search_query::e_sort_criteria, char, 0, 5, struct s_default_enum_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_sort_criteria@s_online_file_search_query@@D$0A@$04Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static enum s_online_file_search_query::e_sort_criteria c_enum_no_init<enum s_online_file_search_query::e_sort_criteria, char, 0, 5, struct s_default_enum_string_resolver>::begin(void)
//{
//    mangled_ppc("?begin@?$c_enum_no_init@W4e_sort_criteria@s_online_file_search_query@@D$0A@$04Us_default_enum_string_resolver@@@@SA?AW4e_sort_criteria@s_online_file_search_query@@XZ");
//};

//public: c_enum<enum e_campaign_difficulty_level, char, -1, 4, struct s_default_enum_string_resolver>::c_enum<enum e_campaign_difficulty_level, char, -1, 4, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_campaign_difficulty_level@@D$0?0$03Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: c_enum<enum e_campaign_difficulty_level, char, -1, 4, struct s_default_enum_string_resolver>::c_enum<enum e_campaign_difficulty_level, char, -1, 4, struct s_default_enum_string_resolver>(enum e_campaign_difficulty_level)
//{
//    mangled_ppc("??0?$c_enum@W4e_campaign_difficulty_level@@D$0?0$03Us_default_enum_string_resolver@@@@QAA@W4e_campaign_difficulty_level@@@Z");
//};

//public: enum e_remappable_button c_enum_no_init<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>::operator enum e_remappable_button(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_remappable_button@@D$0A@$09Us_default_enum_string_resolver@@@@QBA?AW4e_remappable_button@@XZ");
//};

//public: bool c_enum_no_init<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>::operator==(enum e_remappable_button) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_remappable_button@@D$0A@$09Us_default_enum_string_resolver@@@@QBA_NW4e_remappable_button@@@Z");
//};

//public: c_player_profile_insertion_point_flags<64, 12>::c_player_profile_insertion_point_flags<64, 12>(void)
//{
//    mangled_ppc("??0?$c_player_profile_insertion_point_flags@$0EA@$0M@@@QAA@XZ");
//};

//public: bool c_player_profile_insertion_point_flags<64, 12>::test(long, short) const
//{
//    mangled_ppc("?test@?$c_player_profile_insertion_point_flags@$0EA@$0M@@@QBA_NJF@Z");
//};

//public: void c_player_profile_insertion_point_flags<64, 12>::set(long, short, bool)
//{
//    mangled_ppc("?set@?$c_player_profile_insertion_point_flags@$0EA@$0M@@@QAAXJF_N@Z");
//};

//public: void c_player_profile_insertion_point_flags<64, 12>::clear(void)
//{
//    mangled_ppc("?clear@?$c_player_profile_insertion_point_flags@$0EA@$0M@@@QAAXXZ");
//};

//public: bool c_player_profile_insertion_point_flags<64, 12>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_player_profile_insertion_point_flags@$0EA@$0M@@@QBA_NXZ");
//};

//public: wchar_t const * c_verify_strings_task<2, 5>::get_string(long) const
//{
//    mangled_ppc("?get_string@?$c_verify_strings_task@$01$04@@QBAPB_WJ@Z");
//};

//public: c_enum<enum e_gamepad_button, unsigned char, 0, 25, struct s_default_enum_string_resolver>::c_enum<enum e_gamepad_button, unsigned char, 0, 25, struct s_default_enum_string_resolver>(enum e_gamepad_button)
//{
//    mangled_ppc("??0?$c_enum@W4e_gamepad_button@@E$0A@$0BJ@Us_default_enum_string_resolver@@@@QAA@W4e_gamepad_button@@@Z");
//};

//public: enum e_gamepad_button c_enum_no_init<enum e_gamepad_button, unsigned char, 0, 25, struct s_default_enum_string_resolver>::operator enum e_gamepad_button(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_gamepad_button@@E$0A@$0BJ@Us_default_enum_string_resolver@@@@QBA?AW4e_gamepad_button@@XZ");
//};

//public: c_enum<enum e_button_action, char, 0, 36, struct s_default_enum_string_resolver>::c_enum<enum e_button_action, char, 0, 36, struct s_default_enum_string_resolver>(enum e_button_action)
//{
//    mangled_ppc("??0?$c_enum@W4e_button_action@@D$0A@$0CE@Us_default_enum_string_resolver@@@@QAA@W4e_button_action@@@Z");
//};

//public: enum e_button_action c_enum_no_init<enum e_button_action, char, 0, 36, struct s_default_enum_string_resolver>::operator enum e_button_action(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_button_action@@D$0A@$0CE@Us_default_enum_string_resolver@@@@QBA?AW4e_button_action@@XZ");
//};

//public: enum e_button_action c_enum_no_init<enum e_button_action, char, 0, 10, struct s_default_enum_string_resolver>::operator enum e_button_action(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_button_action@@D$0A@$09Us_default_enum_string_resolver@@@@QBA?AW4e_button_action@@XZ");
//};

//public: c_big_flags<768>::c_big_flags<768>(void)
//{
//    mangled_ppc("??0?$c_big_flags@$0DAA@@@QAA@XZ");
//};

//public: c_flags<enum c_player_profile_interface::e_player_profile_interface_flags, unsigned short, 15, struct s_default_enum_string_resolver>::c_flags<enum c_player_profile_interface::e_player_profile_interface_flags, unsigned short, 15, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_player_profile_interface_flags@c_player_profile_interface@@G$0P@Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//private: long c_player_profile_insertion_point_flags<64, 12>::get_flag_index(long, long) const
//{
//    mangled_ppc("?get_flag_index@?$c_player_profile_insertion_point_flags@$0EA@$0M@@@ABAJJJ@Z");
//};

//public: void c_big_flags_typed_no_init<long, 768>::clear(void)
//{
//    mangled_ppc("?clear@?$c_big_flags_typed_no_init@J$0DAA@@@QAAXXZ");
//};

//public: bool c_big_flags_typed_no_init<long, 768>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_big_flags_typed_no_init@J$0DAA@@@QBA_NXZ");
//};

//public: bool c_big_flags_typed_no_init<long, 768>::test(long) const
//{
//    mangled_ppc("?test@?$c_big_flags_typed_no_init@J$0DAA@@@QBA_NJ@Z");
//};

//public: void c_big_flags_typed_no_init<long, 768>::set(long, bool)
//{
//    mangled_ppc("?set@?$c_big_flags_typed_no_init@J$0DAA@@@QAAXJ_N@Z");
//};

//public: c_big_flags_typed<long, 768>::c_big_flags_typed<long, 768>(void)
//{
//    mangled_ppc("??0?$c_big_flags_typed@J$0DAA@@@QAA@XZ");
//};

//public: void c_flags_no_init<enum e_new_user_experience, unsigned char, 4, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_new_user_experience@@E$03Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: void c_flags_no_init<enum e_new_user_experience, unsigned char, 4, struct s_default_enum_string_resolver>::set(enum e_new_user_experience, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_new_user_experience@@E$03Us_default_enum_string_resolver@@@@QAAXW4e_new_user_experience@@_N@Z");
//};

//public: bool c_flags_no_init<enum e_new_user_experience, unsigned char, 4, struct s_default_enum_string_resolver>::operator!=(class c_flags_no_init<enum e_new_user_experience, unsigned char, 4, struct s_default_enum_string_resolver> const &) const
//{
//    mangled_ppc("??9?$c_flags_no_init@W4e_new_user_experience@@E$03Us_default_enum_string_resolver@@@@QBA_NABV0@@Z");
//};

//public: c_flags<enum e_new_user_experience, unsigned char, 4, struct s_default_enum_string_resolver>::c_flags<enum e_new_user_experience, unsigned char, 4, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_new_user_experience@@E$03Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: bool c_flags_no_init<enum e_waypoint_integration_flags, unsigned long, 1, struct s_default_enum_string_resolver>::operator!=(class c_flags_no_init<enum e_waypoint_integration_flags, unsigned long, 1, struct s_default_enum_string_resolver> const &) const
//{
//    mangled_ppc("??9?$c_flags_no_init@W4e_waypoint_integration_flags@@K$00Us_default_enum_string_resolver@@@@QBA_NABV0@@Z");
//};

//public: c_flags<enum e_waypoint_integration_flags, unsigned long, 1, struct s_default_enum_string_resolver>::c_flags<enum e_waypoint_integration_flags, unsigned long, 1, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_waypoint_integration_flags@@K$00Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: void c_verify_strings_task<2, 5>::initialize(enum e_language, wchar_t const **, long)
//{
//    mangled_ppc("?initialize@?$c_verify_strings_task@$01$04@@QAAXW4e_language@@PAPB_WJ@Z");
//};

//public: bool c_verify_strings_task<2, 5>::string_passed_verification(long) const
//{
//    mangled_ppc("?string_passed_verification@?$c_verify_strings_task@$01$04@@QBA_NJ@Z");
//};

//public: void c_flags_no_init<enum e_button_remapping_failure_reason, unsigned char, 4, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_button_remapping_failure_reason@@E$03Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_button_remapping_failure_reason, unsigned char, 4, struct s_default_enum_string_resolver>::test(enum e_button_remapping_failure_reason) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_button_remapping_failure_reason@@E$03Us_default_enum_string_resolver@@@@QBA_NW4e_button_remapping_failure_reason@@@Z");
//};

//public: void c_flags_no_init<enum e_button_remapping_failure_reason, unsigned char, 4, struct s_default_enum_string_resolver>::set(enum e_button_remapping_failure_reason, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_button_remapping_failure_reason@@E$03Us_default_enum_string_resolver@@@@QAAXW4e_button_remapping_failure_reason@@_N@Z");
//};

//public: c_flags<enum e_button_remapping_failure_reason, unsigned char, 4, struct s_default_enum_string_resolver>::c_flags<enum e_button_remapping_failure_reason, unsigned char, 4, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_button_remapping_failure_reason@@E$03Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: void c_flags_no_init<enum e_player_appearance_flags, unsigned char, 1, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_player_appearance_flags@@E$00Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: c_static_wchar_string<6>::c_static_wchar_string<6>(wchar_t const *)
//{
//    mangled_ppc("??0?$c_static_wchar_string@$05@@QAA@PB_W@Z");
//};

//public: long c_static_wchar_string<6>::length(void) const
//{
//    mangled_ppc("?length@?$c_static_wchar_string@$05@@QBAJXZ");
//};

//public: wchar_t const * c_static_wchar_string<6>::get_string(void) const
//{
//    mangled_ppc("?get_string@?$c_static_wchar_string@$05@@QBAPB_WXZ");
//};

//public: wchar_t const * c_static_wchar_string<6>::operator wchar_t const *(void) const
//{
//    mangled_ppc("??B?$c_static_wchar_string@$05@@QBAPB_WXZ");
//};

//int wcsncpy_s<24>(wchar_t (&)[24], wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$wcsncpy_s@$0BI@@@YAHAAY0BI@_WPB_WI@Z");
//};

//void zero_and_reconstruct<class c_player_profile_interface>(class c_player_profile_interface *)
//{
//    mangled_ppc("??$zero_and_reconstruct@Vc_player_profile_interface@@@@YAXPAVc_player_profile_interface@@@Z");
//};

//public: class c_static_wchar_string<5> const & s_static_array<class c_static_wchar_string<5>, 2>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@V?$c_static_wchar_string@$04@@$01@@QBAABV?$c_static_wchar_string@$04@@J@Z");
//};

//public: void c_flags_no_init<enum c_player_profile_interface::e_player_profile_interface_flags, unsigned short, 15, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_player_profile_interface_flags@c_player_profile_interface@@G$0P@Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum c_player_profile_interface::e_player_profile_interface_flags, unsigned short, 15, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_player_profile_interface_flags@c_player_profile_interface@@G$0P@Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static bool c_big_flags_typed_no_init<long, 768>::valid_bit(long)
//{
//    mangled_ppc("?valid_bit@?$c_big_flags_typed_no_init@J$0DAA@@@SA_NJ@Z");
//};

//public: bool c_big_flags_typed_no_init<long, 768>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_big_flags_typed_no_init@J$0DAA@@@QBA_NXZ");
//};

//public: bool c_flags_no_init<enum e_new_user_experience, unsigned char, 4, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_new_user_experience@@E$03Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: void c_flags_no_init<enum e_waypoint_integration_flags, unsigned long, 1, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_waypoint_integration_flags@@K$00Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_waypoint_integration_flags, unsigned long, 1, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_waypoint_integration_flags@@K$00Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: bool c_flags_no_init<enum e_button_remapping_failure_reason, unsigned char, 4, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_button_remapping_failure_reason@@E$03Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static bool c_flags_no_init<enum e_button_remapping_failure_reason, unsigned char, 4, struct s_default_enum_string_resolver>::valid_bit(enum e_button_remapping_failure_reason)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_button_remapping_failure_reason@@E$03Us_default_enum_string_resolver@@@@SA_NW4e_button_remapping_failure_reason@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_button_remapping_failure_reason, unsigned char, 4, struct s_default_enum_string_resolver>::flag_size_type(enum e_button_remapping_failure_reason)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_button_remapping_failure_reason@@E$03Us_default_enum_string_resolver@@@@CAEW4e_button_remapping_failure_reason@@@Z");
//};

//public: void c_static_wchar_string<6>::set(wchar_t const *)
//{
//    mangled_ppc("?set@?$c_static_wchar_string@$05@@QAAXPB_W@Z");
//};

//void reconstruct<class c_player_profile_interface>(class c_player_profile_interface *)
//{
//    mangled_ppc("??$reconstruct@Vc_player_profile_interface@@@@YAXPAVc_player_profile_interface@@@Z");
//};

//private: static unsigned short c_flags_no_init<enum c_player_profile_interface::e_player_profile_interface_flags, unsigned short, 15, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_player_profile_interface_flags@c_player_profile_interface@@G$0P@Us_default_enum_string_resolver@@@@CAGXZ");
//};

//protected: static unsigned long c_big_flags_typed_no_init<long, 768>::get_mask_of_second_slice_of_chunk_inclusive(long)
//{
//    mangled_ppc("?get_mask_of_second_slice_of_chunk_inclusive@?$c_big_flags_typed_no_init@J$0DAA@@@KAKJ@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_new_user_experience, unsigned char, 4, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_new_user_experience@@E$03Us_default_enum_string_resolver@@@@CAEXZ");
//};

//private: static unsigned long c_flags_no_init<enum e_waypoint_integration_flags, unsigned long, 1, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_waypoint_integration_flags@@K$00Us_default_enum_string_resolver@@@@CAKXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_button_remapping_failure_reason, unsigned char, 4, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_button_remapping_failure_reason@@E$03Us_default_enum_string_resolver@@@@CAEXZ");
//};

//private: static unsigned short c_flags_no_init<enum c_player_profile_interface::e_player_profile_interface_flags, unsigned short, 15, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum c_player_profile_interface::e_player_profile_interface_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_player_profile_interface_flags@c_player_profile_interface@@G$0P@Us_default_enum_string_resolver@@@@CAGW4e_player_profile_interface_flags@c_player_profile_interface@@@Z");
//};

//protected: static long c_big_flags_typed_no_init<long, 768>::flag_chunk_index_to_bit_index(long)
//{
//    mangled_ppc("?flag_chunk_index_to_bit_index@?$c_big_flags_typed_no_init@J$0DAA@@@KAJJ@Z");
//};

//protected: static long c_big_flags_typed_no_init<long, 768>::bit_index_to_flag_chunk_index(long)
//{
//    mangled_ppc("?bit_index_to_flag_chunk_index@?$c_big_flags_typed_no_init@J$0DAA@@@KAJJ@Z");
//};

//protected: static unsigned long c_big_flags_typed_no_init<long, 768>::get_valid_mask_of_last_chunk(void)
//{
//    mangled_ppc("?get_valid_mask_of_last_chunk@?$c_big_flags_typed_no_init@J$0DAA@@@KAKXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_new_user_experience, unsigned char, 4, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_new_user_experience)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_new_user_experience@@E$03Us_default_enum_string_resolver@@@@CAEW4e_new_user_experience@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_waypoint_integration_flags, unsigned long, 1, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_waypoint_integration_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_waypoint_integration_flags@@K$00Us_default_enum_string_resolver@@@@CAKW4e_waypoint_integration_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_button_remapping_failure_reason, unsigned char, 4, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_button_remapping_failure_reason)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_button_remapping_failure_reason@@E$03Us_default_enum_string_resolver@@@@CAEW4e_button_remapping_failure_reason@@@Z");
//};

//protected: static unsigned long c_big_flags_typed_no_init<long, 768>::get_mask_of_first_slice_of_chunk_exclusive(long)
//{
//    mangled_ppc("?get_mask_of_first_slice_of_chunk_exclusive@?$c_big_flags_typed_no_init@J$0DAA@@@KAKJ@Z");
//};

//time
//{
//    mangled_ppc("time");
//};

//public: s_player_customization_description::s_player_customization_description(enum e_player_customization_type)
//{
//    mangled_ppc("??0s_player_customization_description@@QAA@W4e_player_customization_type@@@Z");
//};

