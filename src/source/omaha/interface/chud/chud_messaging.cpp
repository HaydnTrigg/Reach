/* ---------- headers */

#include "omaha\interface\chud\chud_messaging.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// bool chud_debug_messages; // "?chud_debug_messages@@3_NA"

// void chud_messaging_clear(long);
// void chud_messaging_post(long, long, enum e_chud_message_context);
// void chud_messaging_post(long, wchar_t const *, enum e_chud_message_context);
// void chud_messaging_post_medal(long, long);
// void chud_messaging_post_primary(long, wchar_t const *, long, enum e_chud_message_context);
// void chud_messaging_post_progression_toast(long, long, float);
// void chud_messaging_post_commendation_callout(long, long, float, enum e_commendation_progression_level);
// void chud_messaging_special_load(bool);
// void chud_messaging_special_saving(bool);
// void chud_messaging_special_autosave(bool);
// void chud_messaging_picked_up_weapon(long, long);
// void chud_messaging_picked_up_powerup(long, long);
// void chud_messaging_enable(long, bool);
// public: void c_chud_messaging_manager::update(void);
// private: void c_chud_messaging_manager::update_state_messages(void);
// private: void c_chud_messaging_manager::update_progression_toasts(void);
// private: void c_chud_messaging_manager::update_commendation_callouts(void);
// private: void c_chud_messaging_manager::update_messages(void);
// private: void c_chud_messaging_manager::update_medals(void);
// public: void c_chud_messaging_manager::initialize(long);
// public: void c_chud_messaging_manager::reset(void);
// private: void c_chud_messaging_manager::delete_message(long);
// private: long c_chud_messaging_manager::get_new_message_index(void);
// private: void c_chud_messaging_manager::delete_medal(long);
// private: long c_chud_messaging_manager::get_new_medal_index(void);
// public: void c_chud_messaging_manager::post(wchar_t const *, enum e_chud_message_context);
// public: void c_chud_messaging_manager::post_medal(long);
// public: void c_chud_messaging_manager::post_progression_toast(long, float);
// public: void c_chud_messaging_manager::post_commendation_callout(long, float, enum e_commendation_progression_level);
// public: void c_chud_messaging_manager::set_state_text_from_buffer(wchar_t const *, long, long, enum c_chud_messaging_manager::e_chud_state_text_placement);
// bool chud_strings_equal(wchar_t const *, wchar_t const *);
// bool chud_chars_equal(wchar_t, wchar_t);
// public: void c_chud_messaging_manager::clear_messages(void);
// public: void c_chud_messaging_manager::clear_medals(void);
// public: void c_chud_messaging_manager::clear_progression_toasts(void);
// public: void c_chud_messaging_manager::clear_commendation_callouts(void);
// public: static void c_chud_messaging_manager::enable(bool);
// public: bool c_chud_messaging_manager::is_enabled(long);
// private: static enum e_font_id c_chud_messaging_manager::get_messaging_font_id(void);
// public: bool c_chud_messaging_manager::medal_is_valid(long);
// public: long c_chud_messaging_manager::get_medal_count(void);
// public: struct s_game_medal_definition const * c_chud_messaging_manager::get_medal_definition(long);
// public: long c_chud_messaging_manager::get_medal_animation_index(long);
// public: bool c_chud_messaging_manager::get_progression_toast_active(long);
// public: long c_chud_messaging_manager::get_progression_toast_name(long);
// public: long c_chud_messaging_manager::get_progression_toast_current(long);
// public: long c_chud_messaging_manager::get_progression_toast_goal(long);
// public: long c_chud_messaging_manager::get_progression_toast_sequence_offset(long);
// public: bool c_chud_messaging_manager::get_commendation_callout_active(long);
// public: long c_chud_messaging_manager::get_commendation_callout_name(long);
// public: enum e_commendation_progression_level c_chud_messaging_manager::get_commendation_callout_new_level(long);
// public: long c_chud_messaging_manager::get_commendation_callout_sequence_offset(long);
// bool chud_get_string(enum e_output_user_index, long, class c_static_wchar_string<256> *);
// bool chud_get_string_for_player(long, long, class c_static_wchar_string<256> *);
// void chud_post_action_response(long);
// void chud_set_state_text_from_buffer(long, wchar_t const *, long, enum c_chud_messaging_manager::e_chud_state_text_placement);
// void chud_set_state_text(long, long, long, enum c_chud_messaging_manager::e_chud_state_text_placement);
// void chud_post_directive_response(long);
// bool chud_weapon_state_is_depleted(struct weapon_interface_state const *);
// public: void c_static_wchar_string<96>::set(wchar_t const *);
// public: wchar_t const * c_static_wchar_string<96>::get_string(void) const;

//void chud_messaging_clear(long)
//{
//    mangled_ppc("?chud_messaging_clear@@YAXJ@Z");
//};

//void chud_messaging_post(long, long, enum e_chud_message_context)
//{
//    mangled_ppc("?chud_messaging_post@@YAXJJW4e_chud_message_context@@@Z");
//};

//void chud_messaging_post(long, wchar_t const *, enum e_chud_message_context)
//{
//    mangled_ppc("?chud_messaging_post@@YAXJPB_WW4e_chud_message_context@@@Z");
//};

//void chud_messaging_post_medal(long, long)
//{
//    mangled_ppc("?chud_messaging_post_medal@@YAXJJ@Z");
//};

//void chud_messaging_post_primary(long, wchar_t const *, long, enum e_chud_message_context)
//{
//    mangled_ppc("?chud_messaging_post_primary@@YAXJPB_WJW4e_chud_message_context@@@Z");
//};

//void chud_messaging_post_progression_toast(long, long, float)
//{
//    mangled_ppc("?chud_messaging_post_progression_toast@@YAXJJM@Z");
//};

//void chud_messaging_post_commendation_callout(long, long, float, enum e_commendation_progression_level)
//{
//    mangled_ppc("?chud_messaging_post_commendation_callout@@YAXJJMW4e_commendation_progression_level@@@Z");
//};

//void chud_messaging_special_load(bool)
//{
//    mangled_ppc("?chud_messaging_special_load@@YAX_N@Z");
//};

//void chud_messaging_special_saving(bool)
//{
//    mangled_ppc("?chud_messaging_special_saving@@YAX_N@Z");
//};

//void chud_messaging_special_autosave(bool)
//{
//    mangled_ppc("?chud_messaging_special_autosave@@YAX_N@Z");
//};

//void chud_messaging_picked_up_weapon(long, long)
//{
//    mangled_ppc("?chud_messaging_picked_up_weapon@@YAXJJ@Z");
//};

//void chud_messaging_picked_up_powerup(long, long)
//{
//    mangled_ppc("?chud_messaging_picked_up_powerup@@YAXJJ@Z");
//};

//void chud_messaging_enable(long, bool)
//{
//    mangled_ppc("?chud_messaging_enable@@YAXJ_N@Z");
//};

//public: void c_chud_messaging_manager::update(void)
//{
//    mangled_ppc("?update@c_chud_messaging_manager@@QAAXXZ");
//};

//private: void c_chud_messaging_manager::update_state_messages(void)
//{
//    mangled_ppc("?update_state_messages@c_chud_messaging_manager@@AAAXXZ");
//};

//private: void c_chud_messaging_manager::update_progression_toasts(void)
//{
//    mangled_ppc("?update_progression_toasts@c_chud_messaging_manager@@AAAXXZ");
//};

//private: void c_chud_messaging_manager::update_commendation_callouts(void)
//{
//    mangled_ppc("?update_commendation_callouts@c_chud_messaging_manager@@AAAXXZ");
//};

//private: void c_chud_messaging_manager::update_messages(void)
//{
//    mangled_ppc("?update_messages@c_chud_messaging_manager@@AAAXXZ");
//};

//private: void c_chud_messaging_manager::update_medals(void)
//{
//    mangled_ppc("?update_medals@c_chud_messaging_manager@@AAAXXZ");
//};

//public: void c_chud_messaging_manager::initialize(long)
//{
//    mangled_ppc("?initialize@c_chud_messaging_manager@@QAAXJ@Z");
//};

//public: void c_chud_messaging_manager::reset(void)
//{
//    mangled_ppc("?reset@c_chud_messaging_manager@@QAAXXZ");
//};

//private: void c_chud_messaging_manager::delete_message(long)
//{
//    mangled_ppc("?delete_message@c_chud_messaging_manager@@AAAXJ@Z");
//};

//private: long c_chud_messaging_manager::get_new_message_index(void)
//{
//    mangled_ppc("?get_new_message_index@c_chud_messaging_manager@@AAAJXZ");
//};

//private: void c_chud_messaging_manager::delete_medal(long)
//{
//    mangled_ppc("?delete_medal@c_chud_messaging_manager@@AAAXJ@Z");
//};

//private: long c_chud_messaging_manager::get_new_medal_index(void)
//{
//    mangled_ppc("?get_new_medal_index@c_chud_messaging_manager@@AAAJXZ");
//};

//public: void c_chud_messaging_manager::post(wchar_t const *, enum e_chud_message_context)
//{
//    mangled_ppc("?post@c_chud_messaging_manager@@QAAXPB_WW4e_chud_message_context@@@Z");
//};

//public: void c_chud_messaging_manager::post_medal(long)
//{
//    mangled_ppc("?post_medal@c_chud_messaging_manager@@QAAXJ@Z");
//};

//public: void c_chud_messaging_manager::post_progression_toast(long, float)
//{
//    mangled_ppc("?post_progression_toast@c_chud_messaging_manager@@QAAXJM@Z");
//};

//public: void c_chud_messaging_manager::post_commendation_callout(long, float, enum e_commendation_progression_level)
//{
//    mangled_ppc("?post_commendation_callout@c_chud_messaging_manager@@QAAXJMW4e_commendation_progression_level@@@Z");
//};

//public: void c_chud_messaging_manager::set_state_text_from_buffer(wchar_t const *, long, long, enum c_chud_messaging_manager::e_chud_state_text_placement)
//{
//    mangled_ppc("?set_state_text_from_buffer@c_chud_messaging_manager@@QAAXPB_WJJW4e_chud_state_text_placement@1@@Z");
//};

//bool chud_strings_equal(wchar_t const *, wchar_t const *)
//{
//    mangled_ppc("?chud_strings_equal@@YA_NPB_W0@Z");
//};

//bool chud_chars_equal(wchar_t, wchar_t)
//{
//    mangled_ppc("?chud_chars_equal@@YA_N_W0@Z");
//};

//public: void c_chud_messaging_manager::clear_messages(void)
//{
//    mangled_ppc("?clear_messages@c_chud_messaging_manager@@QAAXXZ");
//};

//public: void c_chud_messaging_manager::clear_medals(void)
//{
//    mangled_ppc("?clear_medals@c_chud_messaging_manager@@QAAXXZ");
//};

//public: void c_chud_messaging_manager::clear_progression_toasts(void)
//{
//    mangled_ppc("?clear_progression_toasts@c_chud_messaging_manager@@QAAXXZ");
//};

//public: void c_chud_messaging_manager::clear_commendation_callouts(void)
//{
//    mangled_ppc("?clear_commendation_callouts@c_chud_messaging_manager@@QAAXXZ");
//};

//public: static void c_chud_messaging_manager::enable(bool)
//{
//    mangled_ppc("?enable@c_chud_messaging_manager@@SAX_N@Z");
//};

//public: bool c_chud_messaging_manager::is_enabled(long)
//{
//    mangled_ppc("?is_enabled@c_chud_messaging_manager@@QAA_NJ@Z");
//};

//private: static enum e_font_id c_chud_messaging_manager::get_messaging_font_id(void)
//{
//    mangled_ppc("?get_messaging_font_id@c_chud_messaging_manager@@CA?AW4e_font_id@@XZ");
//};

//public: bool c_chud_messaging_manager::medal_is_valid(long)
//{
//    mangled_ppc("?medal_is_valid@c_chud_messaging_manager@@QAA_NJ@Z");
//};

//public: long c_chud_messaging_manager::get_medal_count(void)
//{
//    mangled_ppc("?get_medal_count@c_chud_messaging_manager@@QAAJXZ");
//};

//public: struct s_game_medal_definition const * c_chud_messaging_manager::get_medal_definition(long)
//{
//    mangled_ppc("?get_medal_definition@c_chud_messaging_manager@@QAAPBUs_game_medal_definition@@J@Z");
//};

//public: long c_chud_messaging_manager::get_medal_animation_index(long)
//{
//    mangled_ppc("?get_medal_animation_index@c_chud_messaging_manager@@QAAJJ@Z");
//};

//public: bool c_chud_messaging_manager::get_progression_toast_active(long)
//{
//    mangled_ppc("?get_progression_toast_active@c_chud_messaging_manager@@QAA_NJ@Z");
//};

//public: long c_chud_messaging_manager::get_progression_toast_name(long)
//{
//    mangled_ppc("?get_progression_toast_name@c_chud_messaging_manager@@QAAJJ@Z");
//};

//public: long c_chud_messaging_manager::get_progression_toast_current(long)
//{
//    mangled_ppc("?get_progression_toast_current@c_chud_messaging_manager@@QAAJJ@Z");
//};

//public: long c_chud_messaging_manager::get_progression_toast_goal(long)
//{
//    mangled_ppc("?get_progression_toast_goal@c_chud_messaging_manager@@QAAJJ@Z");
//};

//public: long c_chud_messaging_manager::get_progression_toast_sequence_offset(long)
//{
//    mangled_ppc("?get_progression_toast_sequence_offset@c_chud_messaging_manager@@QAAJJ@Z");
//};

//public: bool c_chud_messaging_manager::get_commendation_callout_active(long)
//{
//    mangled_ppc("?get_commendation_callout_active@c_chud_messaging_manager@@QAA_NJ@Z");
//};

//public: long c_chud_messaging_manager::get_commendation_callout_name(long)
//{
//    mangled_ppc("?get_commendation_callout_name@c_chud_messaging_manager@@QAAJJ@Z");
//};

//public: enum e_commendation_progression_level c_chud_messaging_manager::get_commendation_callout_new_level(long)
//{
//    mangled_ppc("?get_commendation_callout_new_level@c_chud_messaging_manager@@QAA?AW4e_commendation_progression_level@@J@Z");
//};

//public: long c_chud_messaging_manager::get_commendation_callout_sequence_offset(long)
//{
//    mangled_ppc("?get_commendation_callout_sequence_offset@c_chud_messaging_manager@@QAAJJ@Z");
//};

//bool chud_get_string(enum e_output_user_index, long, class c_static_wchar_string<256> *)
//{
//    mangled_ppc("?chud_get_string@@YA_NW4e_output_user_index@@JPAV?$c_static_wchar_string@$0BAA@@@@Z");
//};

//bool chud_get_string_for_player(long, long, class c_static_wchar_string<256> *)
//{
//    mangled_ppc("?chud_get_string_for_player@@YA_NJJPAV?$c_static_wchar_string@$0BAA@@@@Z");
//};

//void chud_post_action_response(long)
//{
//    mangled_ppc("?chud_post_action_response@@YAXJ@Z");
//};

//void chud_set_state_text_from_buffer(long, wchar_t const *, long, enum c_chud_messaging_manager::e_chud_state_text_placement)
//{
//    mangled_ppc("?chud_set_state_text_from_buffer@@YAXJPB_WJW4e_chud_state_text_placement@c_chud_messaging_manager@@@Z");
//};

//void chud_set_state_text(long, long, long, enum c_chud_messaging_manager::e_chud_state_text_placement)
//{
//    mangled_ppc("?chud_set_state_text@@YAXJJJW4e_chud_state_text_placement@c_chud_messaging_manager@@@Z");
//};

//void chud_post_directive_response(long)
//{
//    mangled_ppc("?chud_post_directive_response@@YAXJ@Z");
//};

//bool chud_weapon_state_is_depleted(struct weapon_interface_state const *)
//{
//    mangled_ppc("?chud_weapon_state_is_depleted@@YA_NPBUweapon_interface_state@@@Z");
//};

//public: void c_static_wchar_string<96>::set(wchar_t const *)
//{
//    mangled_ppc("?set@?$c_static_wchar_string@$0GA@@@QAAXPB_W@Z");
//};

//public: wchar_t const * c_static_wchar_string<96>::get_string(void) const
//{
//    mangled_ppc("?get_string@?$c_static_wchar_string@$0GA@@@QBAPB_WXZ");
//};

