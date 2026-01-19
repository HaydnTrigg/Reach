/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// bool user_interface_global_string_get(long, class c_static_wchar_string<1024> *);
// bool user_interface_global_string_get_and_parse_xml(enum e_controller_index, long, long, wchar_t *, long);
// bool user_interface_precache_bitmaps_from_tag(long);
// bool user_interface_precache_common_characters(enum e_font_id);
// bool user_interface_precache_numeric_characters(enum e_font_id);
// bool user_interface_precache_lowercase_alphabet_characters(enum e_font_id);
// bool user_interface_precache_uppercase_alphabet_characters(enum e_font_id);
// bool user_interface_precache_keyboard_symbol_characters(enum e_font_id);
// long user_interface_get_player_appearance_biped(enum e_player_model_choice, long, long);
// void user_interface_update_main_menu_character_model(long, struct s_player_appearance const *);
// void user_interface_offer_opportunity_to_select_storage_device(enum e_controller_index, long, long);
// void user_interface_build_local_machine_and_players(struct s_machine_identifier *, long *, struct game_player_options *);
// long user_interface_get_player_model_string(enum e_player_character_type);
// bool user_interface_get_player_total_xp(long, class c_static_wchar_string<1024> *);
// bool user_interface_error_display_allowed(void);
// long user_interface_get_emblem_color_count(void);
// void user_interface_get_emblem_color(enum e_player_color_index, union argb_color *);
// bool user_interface_get_bytes_size_string(long, class c_static_wchar_string<1024> *);
// bool user_interface_get_percentage_string(float, class c_static_wchar_string<1024> *);
// bool user_interface_get_date_string(__int64, class c_static_wchar_string<1024> *);
// bool user_interface_get_real_number_string(float, class c_static_wchar_string<1024> *);
// bool user_interface_get_timespan_string(long, enum e_user_interface_timespan_format, bool, class c_static_wchar_string<1024> *);
// bool parse_xml_ui_screen_party_privacy(void *, wchar_t *, long);
// long get_tint_color_count(enum e_tint_color_type);
// struct s_tag_block const * get_tint_color_tag_block(enum e_tint_color_type);
// union argb_color * get_tint_color(enum e_tint_color_type, long, union argb_color *);
// bool parse_day(struct tm const *, wchar_t *, long);
// bool parse_month(struct tm const *, wchar_t *, long);
// bool parse_year(struct tm const *, wchar_t *, long);
// localtime_s;

//bool user_interface_global_string_get(long, class c_static_wchar_string<1024> *)
//{
//    mangled_ppc("?user_interface_global_string_get@@YA_NJPAV?$c_static_wchar_string@$0EAA@@@@Z");
//};

//bool user_interface_global_string_get_and_parse_xml(enum e_controller_index, long, long, wchar_t *, long)
//{
//    mangled_ppc("?user_interface_global_string_get_and_parse_xml@@YA_NW4e_controller_index@@JJPA_WJ@Z");
//};

//bool user_interface_precache_bitmaps_from_tag(long)
//{
//    mangled_ppc("?user_interface_precache_bitmaps_from_tag@@YA_NJ@Z");
//};

//bool user_interface_precache_common_characters(enum e_font_id)
//{
//    mangled_ppc("?user_interface_precache_common_characters@@YA_NW4e_font_id@@@Z");
//};

//bool user_interface_precache_numeric_characters(enum e_font_id)
//{
//    mangled_ppc("?user_interface_precache_numeric_characters@@YA_NW4e_font_id@@@Z");
//};

//bool user_interface_precache_lowercase_alphabet_characters(enum e_font_id)
//{
//    mangled_ppc("?user_interface_precache_lowercase_alphabet_characters@@YA_NW4e_font_id@@@Z");
//};

//bool user_interface_precache_uppercase_alphabet_characters(enum e_font_id)
//{
//    mangled_ppc("?user_interface_precache_uppercase_alphabet_characters@@YA_NW4e_font_id@@@Z");
//};

//bool user_interface_precache_keyboard_symbol_characters(enum e_font_id)
//{
//    mangled_ppc("?user_interface_precache_keyboard_symbol_characters@@YA_NW4e_font_id@@@Z");
//};

//long user_interface_get_player_appearance_biped(enum e_player_model_choice, long, long)
//{
//    mangled_ppc("?user_interface_get_player_appearance_biped@@YAJW4e_player_model_choice@@JJ@Z");
//};

//void user_interface_update_main_menu_character_model(long, struct s_player_appearance const *)
//{
//    mangled_ppc("?user_interface_update_main_menu_character_model@@YAXJPBUs_player_appearance@@@Z");
//};

//void user_interface_offer_opportunity_to_select_storage_device(enum e_controller_index, long, long)
//{
//    mangled_ppc("?user_interface_offer_opportunity_to_select_storage_device@@YAXW4e_controller_index@@JJ@Z");
//};

//void user_interface_build_local_machine_and_players(struct s_machine_identifier *, long *, struct game_player_options *)
//{
//    mangled_ppc("?user_interface_build_local_machine_and_players@@YAXPAUs_machine_identifier@@PAJPAUgame_player_options@@@Z");
//};

//long user_interface_get_player_model_string(enum e_player_character_type)
//{
//    mangled_ppc("?user_interface_get_player_model_string@@YAJW4e_player_character_type@@@Z");
//};

//bool user_interface_get_player_total_xp(long, class c_static_wchar_string<1024> *)
//{
//    mangled_ppc("?user_interface_get_player_total_xp@@YA_NJPAV?$c_static_wchar_string@$0EAA@@@@Z");
//};

//bool user_interface_error_display_allowed(void)
//{
//    mangled_ppc("?user_interface_error_display_allowed@@YA_NXZ");
//};

//long user_interface_get_emblem_color_count(void)
//{
//    mangled_ppc("?user_interface_get_emblem_color_count@@YAJXZ");
//};

//void user_interface_get_emblem_color(enum e_player_color_index, union argb_color *)
//{
//    mangled_ppc("?user_interface_get_emblem_color@@YAXW4e_player_color_index@@PATargb_color@@@Z");
//};

//bool user_interface_get_bytes_size_string(long, class c_static_wchar_string<1024> *)
//{
//    mangled_ppc("?user_interface_get_bytes_size_string@@YA_NJPAV?$c_static_wchar_string@$0EAA@@@@Z");
//};

//bool user_interface_get_percentage_string(float, class c_static_wchar_string<1024> *)
//{
//    mangled_ppc("?user_interface_get_percentage_string@@YA_NMPAV?$c_static_wchar_string@$0EAA@@@@Z");
//};

//bool user_interface_get_date_string(__int64, class c_static_wchar_string<1024> *)
//{
//    mangled_ppc("?user_interface_get_date_string@@YA_N_JPAV?$c_static_wchar_string@$0EAA@@@@Z");
//};

//bool user_interface_get_real_number_string(float, class c_static_wchar_string<1024> *)
//{
//    mangled_ppc("?user_interface_get_real_number_string@@YA_NMPAV?$c_static_wchar_string@$0EAA@@@@Z");
//};

//bool user_interface_get_timespan_string(long, enum e_user_interface_timespan_format, bool, class c_static_wchar_string<1024> *)
//{
//    mangled_ppc("?user_interface_get_timespan_string@@YA_NJW4e_user_interface_timespan_format@@_NPAV?$c_static_wchar_string@$0EAA@@@@Z");
//};

//bool parse_xml_ui_screen_party_privacy(void *, wchar_t *, long)
//{
//    mangled_ppc("?parse_xml_ui_screen_party_privacy@@YA_NPAXPA_WJ@Z");
//};

//long get_tint_color_count(enum e_tint_color_type)
//{
//    mangled_ppc("?get_tint_color_count@@YAJW4e_tint_color_type@@@Z");
//};

//struct s_tag_block const * get_tint_color_tag_block(enum e_tint_color_type)
//{
//    mangled_ppc("?get_tint_color_tag_block@@YAPBUs_tag_block@@W4e_tint_color_type@@@Z");
//};

//union argb_color * get_tint_color(enum e_tint_color_type, long, union argb_color *)
//{
//    mangled_ppc("?get_tint_color@@YAPATargb_color@@W4e_tint_color_type@@JPAT1@@Z");
//};

//bool parse_day(struct tm const *, wchar_t *, long)
//{
//    mangled_ppc("?parse_day@@YA_NPBUtm@@PA_WJ@Z");
//};

//bool parse_month(struct tm const *, wchar_t *, long)
//{
//    mangled_ppc("?parse_month@@YA_NPBUtm@@PA_WJ@Z");
//};

//bool parse_year(struct tm const *, wchar_t *, long)
//{
//    mangled_ppc("?parse_year@@YA_NPBUtm@@PA_WJ@Z");
//};

//localtime_s
//{
//    mangled_ppc("localtime_s");
//};

