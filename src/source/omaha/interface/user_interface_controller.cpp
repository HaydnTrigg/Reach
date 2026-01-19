/* ---------- headers */

#include "omaha\interface\user_interface_controller.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// void user_interface_controller_initialize(void);
// void user_interface_controller_dispose(void);
// void user_interface_queue_event(struct s_event_record const *);
// void user_interface_controller_update(void);
// bool user_interface_controller_connected(enum e_controller_index);
// enum e_output_user_index user_interface_controller_get_output_user_index(enum e_controller_index);
// void user_interface_controller_set_output_user_index(enum e_controller_index, enum e_output_user_index);
// short user_interface_controller_get_signed_in_controller_count(void);
// void user_interface_controller_set_desired_multiplayer_team(enum e_controller_index, enum e_multiplayer_team);
// enum e_multiplayer_team user_interface_controller_get_team_index(enum e_controller_index);
// void user_interface_controller_set_griefer(enum e_controller_index, bool);
// struct s_user_interface_controller * user_interface_controller_get(enum e_controller_index);
// bool user_interface_controller_get_griefer(enum e_controller_index, bool);
// void user_interface_controller_set_bungienet_user(enum e_controller_index, class c_flags<enum e_bungienet_user_flags, unsigned short, 16, struct s_default_enum_string_resolver>);
// class c_flags<enum e_bungienet_user_flags, unsigned short, 16, struct s_default_enum_string_resolver> user_interface_controller_get_bungienet_user(enum e_controller_index);
// void user_interface_controller_set_hopper_access(enum e_controller_index, unsigned char);
// unsigned char user_interface_controller_get_hopper_access(enum e_controller_index);
// void user_interface_controller_set_extras_portal_debug(enum e_controller_index, bool);
// bool user_interface_controller_get_extras_portal_debug(enum e_controller_index);
// bool user_interface_controller_get_notification_pending(enum e_controller_index);
// void user_interface_controller_set_notification_pending(enum e_controller_index, bool);
// void user_interface_controller_get_player_configuration(enum e_controller_index, struct s_player_identifier *, struct s_player_configuration *);
// public: bool c_player_profile_interface::get_recently_advanced_grades(void) const;
// public: bool c_player_profile_interface::get_recently_advanced_sub_grades(void) const;
// void user_interface_controller_update_network_properties(enum e_controller_index);
// bool user_interface_controller_xbox_live_account_signed_in(enum e_controller_index);
// bool user_interface_controller_xbox_live_is_guest_account(enum e_controller_index);
// enum e_controller_index user_interface_controller_get_first_xbox_live_signed_in_non_guest(void);
// enum e_controller_index user_interface_controller_get_next_controller(enum e_controller_index);
// bool user_interface_controller_is_player_profile_valid(enum e_controller_index);
// bool user_interface_controller_get_rumble_enabled(enum e_controller_index);
// bool user_interface_controller_get_autolevel_enabled(enum e_controller_index);
// bool user_interface_controller_get_southpaw_enabled(enum e_controller_index);
// bool user_interface_controller_get_clench_protection_enabled(enum e_controller_index);
// wchar_t const * user_interface_controller_get_player_profile_name(enum e_controller_index);
// void user_interface_set_last_campaign_level(enum e_campaign_id, enum e_map_id);
// void user_interface_controller_hack_invert_look_all_controllers(void);
// void user_interface_controller_hack_look_speed_all_controllers(short);
// bool user_interface_controller_voice_allowed(enum e_controller_index);
// bool voice_guests_allowed(void);
// bool user_interface_controller_voice_automuted(enum e_controller_index);
// bool user_interface_controller_voice_is_for_friends_only(enum e_controller_index);
// bool user_interface_any_controller_voice_not_allowed(void);
// bool user_interface_any_controller_voice_is_for_friends_only(void);
// void user_interface_controller_detached(enum e_controller_index);
// bool user_interface_automation_is_active(void);
// void user_interface_controller_attached(enum e_controller_index);
// void user_interface_controller_set_daily_offline_cookie_cap_reached(enum e_controller_index, bool);
// void user_interface_controller_set_daily_online_cookie_cap_reached(enum e_controller_index, bool);
// void user_interface_controller_set_online_cookie_loss_count(enum e_controller_index, long);
// void event_manager_update(unsigned long);
// bool dpad_button_tabbed(bool, unsigned char, unsigned short);
// void send_stick_magnitude_events(enum e_controller_index, union int16_point2d, enum e_gamepad_stick);
// void event_manager_tab(enum e_gamepad_stick, enum e_controller_index, union int16_point2d const *, unsigned long, enum e_controller_component);
// public: unsigned long c_controller_interface::get_tab_timer(enum e_gamepad_stick);
// public: void c_controller_interface::set_tab_timer(enum e_gamepad_stick, unsigned long);
// public: unsigned long c_controller_interface::get_initial_run_tab_timer(enum e_gamepad_stick);
// public: void c_controller_interface::set_initial_run_tab_timer(enum e_gamepad_stick, unsigned long);
// public: union int16_point2d c_controller_interface::get_last_tab(enum e_gamepad_stick);
// public: void c_controller_interface::set_last_tab(enum e_gamepad_stick, union int16_point2d);
// void event_manager_alt_stick_depressed(enum e_controller_index, union int16_point2d const *, enum e_controller_component);
// void event_manager_button_pressed(enum e_controller_index, enum e_gamepad_button);
// void user_interface_controller_input_event_submit(struct s_event_record const *);
// void user_interface_controller_reset(enum e_controller_index);
// void user_interface_controller_clear(enum e_controller_index);
// enum e_campaign_progress user_interface_controller_calculate_campaign_completion(class c_player_profile_interface const *);
// enum e_controller_index user_interface_controller_get_new_user_controller_index(void);
// public: bool c_player_profile_interface::test_new_user_experience_flag(enum e_new_user_experience) const;
// void user_interface_get_last_campaign_level(enum e_campaign_id *, enum e_map_id *);
// char * user_interface_get_last_campaign_level_path(char *, long);
// void update_rewards_notifications(enum e_controller_index);
// bool is_window_available(enum e_window_index);
// bool handle_become_online_rewards_player_prompt_dialog_result(class c_dialog_result_message const *);
// public: bool c_flags_no_init<enum e_new_user_experience, unsigned char, 4, struct s_default_enum_string_resolver>::test(enum e_new_user_experience) const;
// public: static bool c_flags_no_init<enum e_new_user_experience, unsigned char, 4, struct s_default_enum_string_resolver>::valid_bit(enum e_new_user_experience);
// private: static unsigned char c_flags_no_init<enum e_new_user_experience, unsigned char, 4, struct s_default_enum_string_resolver>::flag_size_type(enum e_new_user_experience);
// public: s_user_interface_controller_globals::s_user_interface_controller_globals(void);
// public: s_user_interface_controller::s_user_interface_controller(void);

//void user_interface_controller_initialize(void)
//{
//    mangled_ppc("?user_interface_controller_initialize@@YAXXZ");
//};

//void user_interface_controller_dispose(void)
//{
//    mangled_ppc("?user_interface_controller_dispose@@YAXXZ");
//};

//void user_interface_queue_event(struct s_event_record const *)
//{
//    mangled_ppc("?user_interface_queue_event@@YAXPBUs_event_record@@@Z");
//};

//void user_interface_controller_update(void)
//{
//    mangled_ppc("?user_interface_controller_update@@YAXXZ");
//};

//bool user_interface_controller_connected(enum e_controller_index)
//{
//    mangled_ppc("?user_interface_controller_connected@@YA_NW4e_controller_index@@@Z");
//};

//enum e_output_user_index user_interface_controller_get_output_user_index(enum e_controller_index)
//{
//    mangled_ppc("?user_interface_controller_get_output_user_index@@YA?AW4e_output_user_index@@W4e_controller_index@@@Z");
//};

//void user_interface_controller_set_output_user_index(enum e_controller_index, enum e_output_user_index)
//{
//    mangled_ppc("?user_interface_controller_set_output_user_index@@YAXW4e_controller_index@@W4e_output_user_index@@@Z");
//};

//short user_interface_controller_get_signed_in_controller_count(void)
//{
//    mangled_ppc("?user_interface_controller_get_signed_in_controller_count@@YAFXZ");
//};

//void user_interface_controller_set_desired_multiplayer_team(enum e_controller_index, enum e_multiplayer_team)
//{
//    mangled_ppc("?user_interface_controller_set_desired_multiplayer_team@@YAXW4e_controller_index@@W4e_multiplayer_team@@@Z");
//};

//enum e_multiplayer_team user_interface_controller_get_team_index(enum e_controller_index)
//{
//    mangled_ppc("?user_interface_controller_get_team_index@@YA?AW4e_multiplayer_team@@W4e_controller_index@@@Z");
//};

//void user_interface_controller_set_griefer(enum e_controller_index, bool)
//{
//    mangled_ppc("?user_interface_controller_set_griefer@@YAXW4e_controller_index@@_N@Z");
//};

//struct s_user_interface_controller * user_interface_controller_get(enum e_controller_index)
//{
//    mangled_ppc("?user_interface_controller_get@@YAPAUs_user_interface_controller@@W4e_controller_index@@@Z");
//};

//bool user_interface_controller_get_griefer(enum e_controller_index, bool)
//{
//    mangled_ppc("?user_interface_controller_get_griefer@@YA_NW4e_controller_index@@_N@Z");
//};

//void user_interface_controller_set_bungienet_user(enum e_controller_index, class c_flags<enum e_bungienet_user_flags, unsigned short, 16, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?user_interface_controller_set_bungienet_user@@YAXW4e_controller_index@@V?$c_flags@W4e_bungienet_user_flags@@G$0BA@Us_default_enum_string_resolver@@@@@Z");
//};

//class c_flags<enum e_bungienet_user_flags, unsigned short, 16, struct s_default_enum_string_resolver> user_interface_controller_get_bungienet_user(enum e_controller_index)
//{
//    mangled_ppc("?user_interface_controller_get_bungienet_user@@YA?AV?$c_flags@W4e_bungienet_user_flags@@G$0BA@Us_default_enum_string_resolver@@@@W4e_controller_index@@@Z");
//};

//void user_interface_controller_set_hopper_access(enum e_controller_index, unsigned char)
//{
//    mangled_ppc("?user_interface_controller_set_hopper_access@@YAXW4e_controller_index@@E@Z");
//};

//unsigned char user_interface_controller_get_hopper_access(enum e_controller_index)
//{
//    mangled_ppc("?user_interface_controller_get_hopper_access@@YAEW4e_controller_index@@@Z");
//};

//void user_interface_controller_set_extras_portal_debug(enum e_controller_index, bool)
//{
//    mangled_ppc("?user_interface_controller_set_extras_portal_debug@@YAXW4e_controller_index@@_N@Z");
//};

//bool user_interface_controller_get_extras_portal_debug(enum e_controller_index)
//{
//    mangled_ppc("?user_interface_controller_get_extras_portal_debug@@YA_NW4e_controller_index@@@Z");
//};

//bool user_interface_controller_get_notification_pending(enum e_controller_index)
//{
//    mangled_ppc("?user_interface_controller_get_notification_pending@@YA_NW4e_controller_index@@@Z");
//};

//void user_interface_controller_set_notification_pending(enum e_controller_index, bool)
//{
//    mangled_ppc("?user_interface_controller_set_notification_pending@@YAXW4e_controller_index@@_N@Z");
//};

//void user_interface_controller_get_player_configuration(enum e_controller_index, struct s_player_identifier *, struct s_player_configuration *)
//{
//    mangled_ppc("?user_interface_controller_get_player_configuration@@YAXW4e_controller_index@@PAUs_player_identifier@@PAUs_player_configuration@@@Z");
//};

//public: bool c_player_profile_interface::get_recently_advanced_grades(void) const
//{
//    mangled_ppc("?get_recently_advanced_grades@c_player_profile_interface@@QBA_NXZ");
//};

//public: bool c_player_profile_interface::get_recently_advanced_sub_grades(void) const
//{
//    mangled_ppc("?get_recently_advanced_sub_grades@c_player_profile_interface@@QBA_NXZ");
//};

//void user_interface_controller_update_network_properties(enum e_controller_index)
//{
//    mangled_ppc("?user_interface_controller_update_network_properties@@YAXW4e_controller_index@@@Z");
//};

//bool user_interface_controller_xbox_live_account_signed_in(enum e_controller_index)
//{
//    mangled_ppc("?user_interface_controller_xbox_live_account_signed_in@@YA_NW4e_controller_index@@@Z");
//};

//bool user_interface_controller_xbox_live_is_guest_account(enum e_controller_index)
//{
//    mangled_ppc("?user_interface_controller_xbox_live_is_guest_account@@YA_NW4e_controller_index@@@Z");
//};

//enum e_controller_index user_interface_controller_get_first_xbox_live_signed_in_non_guest(void)
//{
//    mangled_ppc("?user_interface_controller_get_first_xbox_live_signed_in_non_guest@@YA?AW4e_controller_index@@XZ");
//};

//enum e_controller_index user_interface_controller_get_next_controller(enum e_controller_index)
//{
//    mangled_ppc("?user_interface_controller_get_next_controller@@YA?AW4e_controller_index@@W41@@Z");
//};

//bool user_interface_controller_is_player_profile_valid(enum e_controller_index)
//{
//    mangled_ppc("?user_interface_controller_is_player_profile_valid@@YA_NW4e_controller_index@@@Z");
//};

//bool user_interface_controller_get_rumble_enabled(enum e_controller_index)
//{
//    mangled_ppc("?user_interface_controller_get_rumble_enabled@@YA_NW4e_controller_index@@@Z");
//};

//bool user_interface_controller_get_autolevel_enabled(enum e_controller_index)
//{
//    mangled_ppc("?user_interface_controller_get_autolevel_enabled@@YA_NW4e_controller_index@@@Z");
//};

//bool user_interface_controller_get_southpaw_enabled(enum e_controller_index)
//{
//    mangled_ppc("?user_interface_controller_get_southpaw_enabled@@YA_NW4e_controller_index@@@Z");
//};

//bool user_interface_controller_get_clench_protection_enabled(enum e_controller_index)
//{
//    mangled_ppc("?user_interface_controller_get_clench_protection_enabled@@YA_NW4e_controller_index@@@Z");
//};

//wchar_t const * user_interface_controller_get_player_profile_name(enum e_controller_index)
//{
//    mangled_ppc("?user_interface_controller_get_player_profile_name@@YAPB_WW4e_controller_index@@@Z");
//};

//void user_interface_set_last_campaign_level(enum e_campaign_id, enum e_map_id)
//{
//    mangled_ppc("?user_interface_set_last_campaign_level@@YAXW4e_campaign_id@@W4e_map_id@@@Z");
//};

//void user_interface_controller_hack_invert_look_all_controllers(void)
//{
//    mangled_ppc("?user_interface_controller_hack_invert_look_all_controllers@@YAXXZ");
//};

//void user_interface_controller_hack_look_speed_all_controllers(short)
//{
//    mangled_ppc("?user_interface_controller_hack_look_speed_all_controllers@@YAXF@Z");
//};

//bool user_interface_controller_voice_allowed(enum e_controller_index)
//{
//    mangled_ppc("?user_interface_controller_voice_allowed@@YA_NW4e_controller_index@@@Z");
//};

//bool voice_guests_allowed(void)
//{
//    mangled_ppc("?voice_guests_allowed@@YA_NXZ");
//};

//bool user_interface_controller_voice_automuted(enum e_controller_index)
//{
//    mangled_ppc("?user_interface_controller_voice_automuted@@YA_NW4e_controller_index@@@Z");
//};

//bool user_interface_controller_voice_is_for_friends_only(enum e_controller_index)
//{
//    mangled_ppc("?user_interface_controller_voice_is_for_friends_only@@YA_NW4e_controller_index@@@Z");
//};

//bool user_interface_any_controller_voice_not_allowed(void)
//{
//    mangled_ppc("?user_interface_any_controller_voice_not_allowed@@YA_NXZ");
//};

//bool user_interface_any_controller_voice_is_for_friends_only(void)
//{
//    mangled_ppc("?user_interface_any_controller_voice_is_for_friends_only@@YA_NXZ");
//};

//void user_interface_controller_detached(enum e_controller_index)
//{
//    mangled_ppc("?user_interface_controller_detached@@YAXW4e_controller_index@@@Z");
//};

//bool user_interface_automation_is_active(void)
//{
//    mangled_ppc("?user_interface_automation_is_active@@YA_NXZ");
//};

//void user_interface_controller_attached(enum e_controller_index)
//{
//    mangled_ppc("?user_interface_controller_attached@@YAXW4e_controller_index@@@Z");
//};

//void user_interface_controller_set_daily_offline_cookie_cap_reached(enum e_controller_index, bool)
//{
//    mangled_ppc("?user_interface_controller_set_daily_offline_cookie_cap_reached@@YAXW4e_controller_index@@_N@Z");
//};

//void user_interface_controller_set_daily_online_cookie_cap_reached(enum e_controller_index, bool)
//{
//    mangled_ppc("?user_interface_controller_set_daily_online_cookie_cap_reached@@YAXW4e_controller_index@@_N@Z");
//};

//void user_interface_controller_set_online_cookie_loss_count(enum e_controller_index, long)
//{
//    mangled_ppc("?user_interface_controller_set_online_cookie_loss_count@@YAXW4e_controller_index@@J@Z");
//};

//void event_manager_update(unsigned long)
//{
//    mangled_ppc("?event_manager_update@@YAXK@Z");
//};

//bool dpad_button_tabbed(bool, unsigned char, unsigned short)
//{
//    mangled_ppc("?dpad_button_tabbed@@YA_N_NEG@Z");
//};

//void send_stick_magnitude_events(enum e_controller_index, union int16_point2d, enum e_gamepad_stick)
//{
//    mangled_ppc("?send_stick_magnitude_events@@YAXW4e_controller_index@@Tint16_point2d@@W4e_gamepad_stick@@@Z");
//};

//void event_manager_tab(enum e_gamepad_stick, enum e_controller_index, union int16_point2d const *, unsigned long, enum e_controller_component)
//{
//    mangled_ppc("?event_manager_tab@@YAXW4e_gamepad_stick@@W4e_controller_index@@PBTint16_point2d@@KW4e_controller_component@@@Z");
//};

//public: unsigned long c_controller_interface::get_tab_timer(enum e_gamepad_stick)
//{
//    mangled_ppc("?get_tab_timer@c_controller_interface@@QAAKW4e_gamepad_stick@@@Z");
//};

//public: void c_controller_interface::set_tab_timer(enum e_gamepad_stick, unsigned long)
//{
//    mangled_ppc("?set_tab_timer@c_controller_interface@@QAAXW4e_gamepad_stick@@K@Z");
//};

//public: unsigned long c_controller_interface::get_initial_run_tab_timer(enum e_gamepad_stick)
//{
//    mangled_ppc("?get_initial_run_tab_timer@c_controller_interface@@QAAKW4e_gamepad_stick@@@Z");
//};

//public: void c_controller_interface::set_initial_run_tab_timer(enum e_gamepad_stick, unsigned long)
//{
//    mangled_ppc("?set_initial_run_tab_timer@c_controller_interface@@QAAXW4e_gamepad_stick@@K@Z");
//};

//public: union int16_point2d c_controller_interface::get_last_tab(enum e_gamepad_stick)
//{
//    mangled_ppc("?get_last_tab@c_controller_interface@@QAA?ATint16_point2d@@W4e_gamepad_stick@@@Z");
//};

//public: void c_controller_interface::set_last_tab(enum e_gamepad_stick, union int16_point2d)
//{
//    mangled_ppc("?set_last_tab@c_controller_interface@@QAAXW4e_gamepad_stick@@Tint16_point2d@@@Z");
//};

//void event_manager_alt_stick_depressed(enum e_controller_index, union int16_point2d const *, enum e_controller_component)
//{
//    mangled_ppc("?event_manager_alt_stick_depressed@@YAXW4e_controller_index@@PBTint16_point2d@@W4e_controller_component@@@Z");
//};

//void event_manager_button_pressed(enum e_controller_index, enum e_gamepad_button)
//{
//    mangled_ppc("?event_manager_button_pressed@@YAXW4e_controller_index@@W4e_gamepad_button@@@Z");
//};

//void user_interface_controller_input_event_submit(struct s_event_record const *)
//{
//    mangled_ppc("?user_interface_controller_input_event_submit@@YAXPBUs_event_record@@@Z");
//};

//void user_interface_controller_reset(enum e_controller_index)
//{
//    mangled_ppc("?user_interface_controller_reset@@YAXW4e_controller_index@@@Z");
//};

//void user_interface_controller_clear(enum e_controller_index)
//{
//    mangled_ppc("?user_interface_controller_clear@@YAXW4e_controller_index@@@Z");
//};

//enum e_campaign_progress user_interface_controller_calculate_campaign_completion(class c_player_profile_interface const *)
//{
//    mangled_ppc("?user_interface_controller_calculate_campaign_completion@@YA?AW4e_campaign_progress@@PBVc_player_profile_interface@@@Z");
//};

//enum e_controller_index user_interface_controller_get_new_user_controller_index(void)
//{
//    mangled_ppc("?user_interface_controller_get_new_user_controller_index@@YA?AW4e_controller_index@@XZ");
//};

//public: bool c_player_profile_interface::test_new_user_experience_flag(enum e_new_user_experience) const
//{
//    mangled_ppc("?test_new_user_experience_flag@c_player_profile_interface@@QBA_NW4e_new_user_experience@@@Z");
//};

//void user_interface_get_last_campaign_level(enum e_campaign_id *, enum e_map_id *)
//{
//    mangled_ppc("?user_interface_get_last_campaign_level@@YAXPAW4e_campaign_id@@PAW4e_map_id@@@Z");
//};

//char * user_interface_get_last_campaign_level_path(char *, long)
//{
//    mangled_ppc("?user_interface_get_last_campaign_level_path@@YAPADPADJ@Z");
//};

//void update_rewards_notifications(enum e_controller_index)
//{
//    mangled_ppc("?update_rewards_notifications@@YAXW4e_controller_index@@@Z");
//};

//bool is_window_available(enum e_window_index)
//{
//    mangled_ppc("?is_window_available@@YA_NW4e_window_index@@@Z");
//};

//bool handle_become_online_rewards_player_prompt_dialog_result(class c_dialog_result_message const *)
//{
//    mangled_ppc("?handle_become_online_rewards_player_prompt_dialog_result@@YA_NPBVc_dialog_result_message@@@Z");
//};

//public: bool c_flags_no_init<enum e_new_user_experience, unsigned char, 4, struct s_default_enum_string_resolver>::test(enum e_new_user_experience) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_new_user_experience@@E$03Us_default_enum_string_resolver@@@@QBA_NW4e_new_user_experience@@@Z");
//};

//public: static bool c_flags_no_init<enum e_new_user_experience, unsigned char, 4, struct s_default_enum_string_resolver>::valid_bit(enum e_new_user_experience)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_new_user_experience@@E$03Us_default_enum_string_resolver@@@@SA_NW4e_new_user_experience@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_new_user_experience, unsigned char, 4, struct s_default_enum_string_resolver>::flag_size_type(enum e_new_user_experience)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_new_user_experience@@E$03Us_default_enum_string_resolver@@@@CAEW4e_new_user_experience@@@Z");
//};

//public: s_user_interface_controller_globals::s_user_interface_controller_globals(void)
//{
//    mangled_ppc("??0s_user_interface_controller_globals@@QAA@XZ");
//};

//public: s_user_interface_controller::s_user_interface_controller(void)
//{
//    mangled_ppc("??0s_user_interface_controller@@QAA@XZ");
//};

