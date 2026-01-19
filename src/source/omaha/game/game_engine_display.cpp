/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// bool g_fade_to_black_enabled; // "?g_fade_to_black_enabled@@3_NA"
// bool g_ignore_date_and_time_random_seed_for_watermark_rendering; // "?g_ignore_date_and_time_random_seed_for_watermark_rendering@@3_NA"
// bool g_watermark_enabled; // "?g_watermark_enabled@@3_NA"
// bool debug_multiplayer_object_properties; // "?debug_multiplayer_object_properties@@3_NA"

// void game_engine_render_fade_to_black(enum e_output_user_index);
// void game_engine_render_frame_watermarks(bool);
// void game_engine_render_frame_watermarks_for_controller(enum e_controller_index);
// void game_engine_render_window_watermarks(enum e_output_user_index);
// void game_engine_render_debug(void);
// void game_engine_render(enum e_output_user_index);
// bool game_engine_suppress_render_scene(enum e_output_user_index);
// void game_engine_submit_navpoints(enum e_output_user_index, long);
// void game_engine_parse_utf_character(enum e_utf32, wchar_t *, long);
// void game_engine_get_place_string(long, class c_static_wchar_string<256> *);
// void game_engine_get_score_string(long, class c_static_wchar_string<256> *);
// void game_engine_get_default_team_name(enum e_multiplayer_team, class c_static_wchar_string<256> *);
// void game_engine_get_team_name(enum e_multiplayer_team, class c_static_wchar_string<256> *);
// bool chud_should_render_motion_sensor(long);
// public: enum e_motion_tracker_setting c_player_trait_sensors::get_motion_tracker_setting(void) const;
// bool game_engine_hud_get_state_message(long, wchar_t *, long, bool);
// float game_engine_hud_get_fade(enum e_output_user_index);
// float game_engine_get_user_fade_to_black_amount(enum e_output_user_index);
// void game_engine_render_all_multiplayer_object_boundaries(void);
// void game_engine_render_multiplayer_object_properties(enum e_output_user_index);
// public: char const * c_map_variant::get_megalo_label_string(long) const;
// public: class c_static_string<64> c_enum_no_init<enum e_multiplayer_team_designator, char, -1, 9, struct s_multiplayer_team_designator_string_resolver>::to_string(void) const;
// public: enum e_motion_tracker_setting c_enum_no_init<enum e_motion_tracker_setting, unsigned char, 0, 5, struct s_default_enum_string_resolver>::operator enum e_motion_tracker_setting(void) const;
// public: class c_static_string<64> c_enum_no_init<enum e_multiplayer_object_type, char, 0, 28, struct s_multiplayer_object_type_string_resolver>::to_string(void) const;
// public: bool c_enum_no_init<enum e_multiplayer_object_type, char, 0, 28, struct s_multiplayer_object_type_string_resolver>::in_range(void) const;
// public: struct utf8const * c_single_language_string_table<256, 4096>::get(long) const;
// public: char const * s_static_string<10>::get_string(void) const;

//void game_engine_render_fade_to_black(enum e_output_user_index)
//{
//    mangled_ppc("?game_engine_render_fade_to_black@@YAXW4e_output_user_index@@@Z");
//};

//void game_engine_render_frame_watermarks(bool)
//{
//    mangled_ppc("?game_engine_render_frame_watermarks@@YAX_N@Z");
//};

//void game_engine_render_frame_watermarks_for_controller(enum e_controller_index)
//{
//    mangled_ppc("?game_engine_render_frame_watermarks_for_controller@@YAXW4e_controller_index@@@Z");
//};

//void game_engine_render_window_watermarks(enum e_output_user_index)
//{
//    mangled_ppc("?game_engine_render_window_watermarks@@YAXW4e_output_user_index@@@Z");
//};

//void game_engine_render_debug(void)
//{
//    mangled_ppc("?game_engine_render_debug@@YAXXZ");
//};

//void game_engine_render(enum e_output_user_index)
//{
//    mangled_ppc("?game_engine_render@@YAXW4e_output_user_index@@@Z");
//};

//bool game_engine_suppress_render_scene(enum e_output_user_index)
//{
//    mangled_ppc("?game_engine_suppress_render_scene@@YA_NW4e_output_user_index@@@Z");
//};

//void game_engine_submit_navpoints(enum e_output_user_index, long)
//{
//    mangled_ppc("?game_engine_submit_navpoints@@YAXW4e_output_user_index@@J@Z");
//};

//void game_engine_parse_utf_character(enum e_utf32, wchar_t *, long)
//{
//    mangled_ppc("?game_engine_parse_utf_character@@YAXW4e_utf32@@PA_WJ@Z");
//};

//void game_engine_get_place_string(long, class c_static_wchar_string<256> *)
//{
//    mangled_ppc("?game_engine_get_place_string@@YAXJPAV?$c_static_wchar_string@$0BAA@@@@Z");
//};

//void game_engine_get_score_string(long, class c_static_wchar_string<256> *)
//{
//    mangled_ppc("?game_engine_get_score_string@@YAXJPAV?$c_static_wchar_string@$0BAA@@@@Z");
//};

//void game_engine_get_default_team_name(enum e_multiplayer_team, class c_static_wchar_string<256> *)
//{
//    mangled_ppc("?game_engine_get_default_team_name@@YAXW4e_multiplayer_team@@PAV?$c_static_wchar_string@$0BAA@@@@Z");
//};

//void game_engine_get_team_name(enum e_multiplayer_team, class c_static_wchar_string<256> *)
//{
//    mangled_ppc("?game_engine_get_team_name@@YAXW4e_multiplayer_team@@PAV?$c_static_wchar_string@$0BAA@@@@Z");
//};

//bool chud_should_render_motion_sensor(long)
//{
//    mangled_ppc("?chud_should_render_motion_sensor@@YA_NJ@Z");
//};

//public: enum e_motion_tracker_setting c_player_trait_sensors::get_motion_tracker_setting(void) const
//{
//    mangled_ppc("?get_motion_tracker_setting@c_player_trait_sensors@@QBA?AW4e_motion_tracker_setting@@XZ");
//};

//bool game_engine_hud_get_state_message(long, wchar_t *, long, bool)
//{
//    mangled_ppc("?game_engine_hud_get_state_message@@YA_NJPA_WJ_N@Z");
//};

//float game_engine_hud_get_fade(enum e_output_user_index)
//{
//    mangled_ppc("?game_engine_hud_get_fade@@YAMW4e_output_user_index@@@Z");
//};

//float game_engine_get_user_fade_to_black_amount(enum e_output_user_index)
//{
//    mangled_ppc("?game_engine_get_user_fade_to_black_amount@@YAMW4e_output_user_index@@@Z");
//};

//void game_engine_render_all_multiplayer_object_boundaries(void)
//{
//    mangled_ppc("?game_engine_render_all_multiplayer_object_boundaries@@YAXXZ");
//};

//void game_engine_render_multiplayer_object_properties(enum e_output_user_index)
//{
//    mangled_ppc("?game_engine_render_multiplayer_object_properties@@YAXW4e_output_user_index@@@Z");
//};

//public: char const * c_map_variant::get_megalo_label_string(long) const
//{
//    mangled_ppc("?get_megalo_label_string@c_map_variant@@QBAPBDJ@Z");
//};

//public: class c_static_string<64> c_enum_no_init<enum e_multiplayer_team_designator, char, -1, 9, struct s_multiplayer_team_designator_string_resolver>::to_string(void) const
//{
//    mangled_ppc("?to_string@?$c_enum_no_init@W4e_multiplayer_team_designator@@D$0?0$08Us_multiplayer_team_designator_string_resolver@@@@QBA?AV?$c_static_string@$0EA@@@XZ");
//};

//public: enum e_motion_tracker_setting c_enum_no_init<enum e_motion_tracker_setting, unsigned char, 0, 5, struct s_default_enum_string_resolver>::operator enum e_motion_tracker_setting(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_motion_tracker_setting@@E$0A@$04Us_default_enum_string_resolver@@@@QBA?AW4e_motion_tracker_setting@@XZ");
//};

//public: class c_static_string<64> c_enum_no_init<enum e_multiplayer_object_type, char, 0, 28, struct s_multiplayer_object_type_string_resolver>::to_string(void) const
//{
//    mangled_ppc("?to_string@?$c_enum_no_init@W4e_multiplayer_object_type@@D$0A@$0BM@Us_multiplayer_object_type_string_resolver@@@@QBA?AV?$c_static_string@$0EA@@@XZ");
//};

//public: bool c_enum_no_init<enum e_multiplayer_object_type, char, 0, 28, struct s_multiplayer_object_type_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_multiplayer_object_type@@D$0A@$0BM@Us_multiplayer_object_type_string_resolver@@@@QBA_NXZ");
//};

//public: struct utf8const * c_single_language_string_table<256, 4096>::get(long) const
//{
//    mangled_ppc("?get@?$c_single_language_string_table@$0BAA@$0BAAA@@@QBAPBUutf8@@J@Z");
//};

//public: char const * s_static_string<10>::get_string(void) const
//{
//    mangled_ppc("?get_string@?$s_static_string@$09@@QBAPBDXZ");
//};

