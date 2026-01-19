/* ---------- headers */

#include "omaha\game\game_engine_team.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const s_static_array<char, 9>::k_element_count; // "?k_element_count@?$s_static_array@D$08@@2JB"
// char const **global_multiplayer_team_names; // "?global_multiplayer_team_names@@3PAPBDA"
// long volatile `public: enum e_multiplayer_team __cdecl c_flags_no_init<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver>::get_lowest_bit_set(void) const'::`3'::x_event_category_index; // "?x_event_category_index@?2??get_lowest_bit_set@?$c_flags_no_init@W4e_multiplayer_team@@G$07Us_default_enum_string_resolver@@@@QBA?AW4e_multiplayer_team@@XZ@4JC"
// long volatile `public: enum e_multiplayer_team __cdecl c_flags_no_init<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver>::get_highest_bit_set_in_range(enum e_multiplayer_team, enum e_multiplayer_team) const'::`15'::x_event_category_index; // "?x_event_category_index@?P@??get_highest_bit_set_in_range@?$c_flags_no_init@W4e_multiplayer_team@@G$07Us_default_enum_string_resolver@@@@QBA?AW4e_multiplayer_team@@W43@0@Z@4JC"

// bool game_engine_is_team_valid(enum e_multiplayer_team);
// bool game_engine_is_team_active(enum e_multiplayer_team);
// bool game_engine_is_team_ever_active(enum e_multiplayer_team);
// bool game_engine_player_is_enemy(long, long);
// bool game_engine_team_is_enemy(enum e_multiplayer_team, enum e_multiplayer_team);
// bool game_engine_team_designator_is_enemy(enum e_multiplayer_team_designator, enum e_multiplayer_team_designator);
// class c_flags<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver> game_engine_get_available_teams(void);
// bool game_engine_team_designator_is_valid(enum e_multiplayer_team_designator);
// enum e_multiplayer_team game_engine_team_designator_to_team_index(enum e_multiplayer_team_designator);
// enum e_multiplayer_team_designator game_engine_team_index_to_team_designator(enum e_multiplayer_team);
// void game_engine_build_valid_team_mapping(void);
// void game_engine_build_teams(void);
// void game_engine_handle_new_team_mapping(void);
// bool game_engine_is_team_designator_valid(enum e_multiplayer_team_designator);
// enum e_multiplayer_team game_engine_next_active_team(enum e_multiplayer_team);
// enum e_multiplayer_team game_engine_next_team_internal(enum e_multiplayer_team, bool);
// enum e_multiplayer_team game_engine_next_inactive_team(enum e_multiplayer_team);
// void game_engine_recompute_active_teams(void);
// long game_engine_get_any_player_from_team(enum e_multiplayer_team);
// bool game_engine_team_is_out_of_lives(enum e_multiplayer_team);
// long game_engine_team_get_number_of_shared_lives(enum e_multiplayer_team);
// bool game_engine_teams_use_one_shared_life(enum e_multiplayer_team);
// long game_engine_teams_get_number_of_players(enum e_multiplayer_team);
// long game_engine_teams_get_number_of_players_alive(enum e_multiplayer_team);
// bool game_engine_teams_player_can_change_teams(long);
// public: enum e_team_changing_type c_game_engine_social_options::get_team_changing_setting(void) const;
// bool game_engine_variant_has_teams(class c_game_variant const *);
// public: bool c_game_engine_miscellaneous_options::get_teams_enabled(void) const;
// long game_engine_variant_get_maximum_team_count(class c_game_variant const *, enum e_map_id);
// bool game_engine_variant_is_observer_allowed(class c_game_variant const *);
// public: bool c_game_engine_social_options::get_observers_enabled(void) const;
// void game_engine_variant_get_model_override_type(class c_game_variant const *, class c_enum<enum e_game_engine_team_options_model_override_type, unsigned char, 0, 5, struct s_default_enum_string_resolver> *);
// public: class c_game_engine_team_options const * c_game_engine_base_variant::get_team_options(void) const;
// void game_engine_variant_get_designator_switch_type(class c_game_variant const *, class c_enum<enum e_game_engine_team_options_designator_switch_type, unsigned char, 0, 3, struct s_default_enum_string_resolver> *);
// void game_engine_variant_get_team_model_choice(class c_game_variant const *, enum e_multiplayer_team, class c_enum_no_init<enum e_player_model_choice, char, 0, 2, struct s_default_enum_string_resolver> *);
// void game_engine_variant_get_team_initial_designator(class c_game_variant const *, enum e_multiplayer_team, class c_enum<enum e_multiplayer_team_designator, char, -1, 9, struct s_multiplayer_team_designator_string_resolver> *);
// bool game_engine_variant_uses_fireteams(class c_game_variant const *);
// long game_engine_variant_get_team_fireteam_count(class c_game_variant const *, enum e_multiplayer_team);
// long game_engine_variant_get_available_team_count(class c_game_variant const *);
// bool game_engine_variant_team_available(class c_game_variant const *, enum e_multiplayer_team);
// bool game_engine_variant_team_available_internal(class c_game_variant const *, enum e_multiplayer_team, bool);
// bool game_engine_variant_try_and_get_team_available(class c_game_variant const *, enum e_multiplayer_team);
// bool game_engine_variant_get_first_available_team(class c_game_variant const *, enum e_multiplayer_team *);
// bool game_engine_variant_get_next_available_team(class c_game_variant const *, enum e_multiplayer_team, enum e_multiplayer_team *);
// bool game_engine_variant_team_get_description(class c_game_variant const *, enum e_multiplayer_team, class c_static_wchar_string<256> *);
// enum e_multiplayer_team_designator game_engine_team_get_designator(enum e_multiplayer_team);
// void game_engine_variant_team_get_model(class c_game_variant const *, enum e_multiplayer_team, class c_enum_no_init<enum e_player_model_choice, char, 0, 2, struct s_default_enum_string_resolver>, class c_enum_no_init<enum e_player_model_choice, char, 0, 2, struct s_default_enum_string_resolver> *);
// void game_engine_variant_team_get_model(class c_game_variant const *, enum e_multiplayer_team, enum e_multiplayer_team_designator, class c_enum_no_init<enum e_player_model_choice, char, 0, 2, struct s_default_enum_string_resolver>, class c_enum_no_init<enum e_player_model_choice, char, 0, 2, struct s_default_enum_string_resolver> *);
// void game_engine_variant_team_get_model_for_initial_designator(class c_game_variant const *, enum e_multiplayer_team, class c_enum_no_init<enum e_player_model_choice, char, 0, 2, struct s_default_enum_string_resolver>, class c_enum_no_init<enum e_player_model_choice, char, 0, 2, struct s_default_enum_string_resolver> *);
// void game_engine_variant_team_get_visible_model_and_team(class c_game_variant const *, enum e_multiplayer_team, class c_enum_no_init<enum e_player_model_choice, char, 0, 2, struct s_default_enum_string_resolver>, enum e_multiplayer_team *, class c_enum_no_init<enum e_player_model_choice, char, 0, 2, struct s_default_enum_string_resolver> *);
// bool game_engine_variant_team_get_color_override(class c_game_variant const *, enum e_multiplayer_team, union rgb_color *);
// bool game_engine_variant_team_get_ui_text_tint_color_override(class c_game_variant const *, enum e_multiplayer_team, bool, union argb_color *);
// bool game_engine_variant_team_get_ui_bitmap_tint_color_override(class c_game_variant const *, enum e_multiplayer_team, bool, union argb_color *);
// enum e_multiplayer_team_designator game_engine_variant_team_get_initial_designator(class c_game_variant const *, enum e_multiplayer_team);
// void game_engine_build_random_team_mapping(void);
// enum e_multiplayer_team_designator & operator++(enum e_multiplayer_team_designator &);
// enum e_multiplayer_team game_engine_try_and_randomly_map_game_team(enum e_multiplayer_team, class c_flags<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver> const &, bool);
// void game_engine_build_initial_teams(void);
// void get_team_model_for_designator(class c_game_variant const *, enum e_multiplayer_team, enum e_multiplayer_team_designator, class c_enum_no_init<enum e_player_model_choice, char, 0, 2, struct s_default_enum_string_resolver>, class c_enum_no_init<enum e_player_model_choice, char, 0, 2, struct s_default_enum_string_resolver> *);
// public: c_flags<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver>::c_flags<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver>(class c_flags_no_init<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver>);
// public: bool c_enum_no_init<enum e_game_engine_team_options_model_override_type, unsigned char, 0, 5, struct s_default_enum_string_resolver>::operator==(enum e_game_engine_team_options_model_override_type) const;
// public: enum e_team_changing_type c_enum_no_init<enum e_team_changing_type, short, 0, 3, struct s_default_enum_string_resolver>::operator enum e_team_changing_type(void) const;
// public: long c_string_table<1, 32>::count(void) const;
// public: void s_static_array<char, 9>::set_all(char const &);
// public: void c_flags_no_init<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver>::set(enum e_multiplayer_team, bool);
// public: long c_flags_no_init<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver>::count_set(void) const;
// public: enum e_multiplayer_team c_flags_no_init<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver>::get_highest_bit_set(void) const;
// public: enum e_multiplayer_team c_flags_no_init<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver>::get_lowest_bit_set(void) const;
// public: bool c_flags_no_init<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver>::operator!=(class c_flags_no_init<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver> const &) const;
// public: class c_flags_no_init<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver> c_flags_no_init<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver>::operator&(class c_flags_no_init<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver> const &) const;
// public: class c_flags_no_init<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver> & c_flags_no_init<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver>::operator|=(class c_flags_no_init<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver> const &);
// public: void c_flags_no_init<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver>::and_not(class c_flags_no_init<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver> const *);
// public: c_flags<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver>::c_flags<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver>(void);
// public: bool c_flags_no_init<enum e_multiplayer_team_designator, unsigned short, 9, struct s_default_enum_string_resolver>::operator!=(class c_flags_no_init<enum e_multiplayer_team_designator, unsigned short, 9, struct s_default_enum_string_resolver> const &) const;
// public: bool c_flags_no_init<enum e_game_engine_team_options_team_flags, unsigned char, 4, struct s_default_enum_string_resolver>::test(enum e_game_engine_team_options_team_flags) const;
// public: struct utf8const * c_string_table<1, 32>::get(enum e_language, long) const;
// public: class c_game_engine_team_options_team const & s_static_array<class c_game_engine_team_options_team, 8>::operator[]<enum e_multiplayer_team>(enum e_multiplayer_team) const;
// public: void c_static_wchar_string<256>::set_utf8(struct utf8const *);
// public: bool c_static_wchar_string<256>::is_empty(void) const;
// public: class c_enum_no_init<enum e_multiplayer_team, char, -1, 16, struct s_default_enum_string_resolver> & s_static_array<class c_enum_no_init<enum e_multiplayer_team, char, -1, 16, struct s_default_enum_string_resolver>, 8>::operator[]<enum e_multiplayer_team>(enum e_multiplayer_team);
// public: char & s_static_array<char, 9>::operator[]<enum e_multiplayer_team_designator>(enum e_multiplayer_team_designator);
// public: struct utf8const * c_string_buffer<32>::get(long) const;
// public: void c_flags_no_init<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver>::clear(void);
// public: enum e_multiplayer_team c_flags_no_init<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver>::get_highest_bit_set_in_range(enum e_multiplayer_team, enum e_multiplayer_team) const;
// public: void c_flags_no_init<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver>::and_not_range(class c_flags_no_init<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver> const *, enum e_multiplayer_team, enum e_multiplayer_team);
// public: static bool c_flags_no_init<enum e_game_engine_team_options_team_flags, unsigned char, 4, struct s_default_enum_string_resolver>::valid_bit(enum e_game_engine_team_options_team_flags);
// private: static unsigned char c_flags_no_init<enum e_game_engine_team_options_team_flags, unsigned char, 4, struct s_default_enum_string_resolver>::flag_size_type(enum e_game_engine_team_options_team_flags);
// public: class s_static_array<short, 1> const & s_static_array<class s_static_array<short, 1>, 12>::operator[]<enum e_language>(enum e_language) const;
// public: short const & s_static_array<short, 1>::operator[]<long>(long) const;
// public: static bool s_static_array<class c_game_engine_team_options_team, 8>::valid<enum e_multiplayer_team>(enum e_multiplayer_team);
// public: static bool s_static_array<class c_enum_no_init<enum e_multiplayer_team, char, -1, 16, struct s_default_enum_string_resolver>, 8>::valid<enum e_multiplayer_team>(enum e_multiplayer_team);
// public: static bool s_static_array<char, 9>::valid<enum e_multiplayer_team_designator>(enum e_multiplayer_team_designator);
// public: struct utf8const & s_static_array<struct utf8, 32>::operator[]<long>(long) const;
// public: bool c_flags_no_init<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver>::test_range(enum e_multiplayer_team, enum e_multiplayer_team) const;
// public: class c_flags_no_init<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver> c_flags_no_init<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver>::operator~(void) const;
// public: class c_flags_no_init<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver> c_flags_no_init<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver>::operator|(class c_flags_no_init<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver> const &) const;
// public: class c_flags_no_init<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver> & c_flags_no_init<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver>::operator&=(class c_flags_no_init<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver> const &);
// public: static bool s_static_array<class s_static_array<short, 1>, 12>::valid<enum e_language>(enum e_language);
// public: static bool s_static_array<short, 1>::valid<long>(long);
// public: static bool s_static_array<struct utf8, 32>::valid<long>(long);

//bool game_engine_is_team_valid(enum e_multiplayer_team)
//{
//    mangled_ppc("?game_engine_is_team_valid@@YA_NW4e_multiplayer_team@@@Z");
//};

//bool game_engine_is_team_active(enum e_multiplayer_team)
//{
//    mangled_ppc("?game_engine_is_team_active@@YA_NW4e_multiplayer_team@@@Z");
//};

//bool game_engine_is_team_ever_active(enum e_multiplayer_team)
//{
//    mangled_ppc("?game_engine_is_team_ever_active@@YA_NW4e_multiplayer_team@@@Z");
//};

//bool game_engine_player_is_enemy(long, long)
//{
//    mangled_ppc("?game_engine_player_is_enemy@@YA_NJJ@Z");
//};

//bool game_engine_team_is_enemy(enum e_multiplayer_team, enum e_multiplayer_team)
//{
//    mangled_ppc("?game_engine_team_is_enemy@@YA_NW4e_multiplayer_team@@0@Z");
//};

//bool game_engine_team_designator_is_enemy(enum e_multiplayer_team_designator, enum e_multiplayer_team_designator)
//{
//    mangled_ppc("?game_engine_team_designator_is_enemy@@YA_NW4e_multiplayer_team_designator@@0@Z");
//};

//class c_flags<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver> game_engine_get_available_teams(void)
//{
//    mangled_ppc("?game_engine_get_available_teams@@YA?AV?$c_flags@W4e_multiplayer_team@@G$07Us_default_enum_string_resolver@@@@XZ");
//};

//bool game_engine_team_designator_is_valid(enum e_multiplayer_team_designator)
//{
//    mangled_ppc("?game_engine_team_designator_is_valid@@YA_NW4e_multiplayer_team_designator@@@Z");
//};

//enum e_multiplayer_team game_engine_team_designator_to_team_index(enum e_multiplayer_team_designator)
//{
//    mangled_ppc("?game_engine_team_designator_to_team_index@@YA?AW4e_multiplayer_team@@W4e_multiplayer_team_designator@@@Z");
//};

//enum e_multiplayer_team_designator game_engine_team_index_to_team_designator(enum e_multiplayer_team)
//{
//    mangled_ppc("?game_engine_team_index_to_team_designator@@YA?AW4e_multiplayer_team_designator@@W4e_multiplayer_team@@@Z");
//};

//void game_engine_build_valid_team_mapping(void)
//{
//    mangled_ppc("?game_engine_build_valid_team_mapping@@YAXXZ");
//};

//void game_engine_build_teams(void)
//{
//    mangled_ppc("?game_engine_build_teams@@YAXXZ");
//};

//void game_engine_handle_new_team_mapping(void)
//{
//    mangled_ppc("?game_engine_handle_new_team_mapping@@YAXXZ");
//};

//bool game_engine_is_team_designator_valid(enum e_multiplayer_team_designator)
//{
//    mangled_ppc("?game_engine_is_team_designator_valid@@YA_NW4e_multiplayer_team_designator@@@Z");
//};

//enum e_multiplayer_team game_engine_next_active_team(enum e_multiplayer_team)
//{
//    mangled_ppc("?game_engine_next_active_team@@YA?AW4e_multiplayer_team@@W41@@Z");
//};

//enum e_multiplayer_team game_engine_next_team_internal(enum e_multiplayer_team, bool)
//{
//    mangled_ppc("?game_engine_next_team_internal@@YA?AW4e_multiplayer_team@@W41@_N@Z");
//};

//enum e_multiplayer_team game_engine_next_inactive_team(enum e_multiplayer_team)
//{
//    mangled_ppc("?game_engine_next_inactive_team@@YA?AW4e_multiplayer_team@@W41@@Z");
//};

//void game_engine_recompute_active_teams(void)
//{
//    mangled_ppc("?game_engine_recompute_active_teams@@YAXXZ");
//};

//long game_engine_get_any_player_from_team(enum e_multiplayer_team)
//{
//    mangled_ppc("?game_engine_get_any_player_from_team@@YAJW4e_multiplayer_team@@@Z");
//};

//bool game_engine_team_is_out_of_lives(enum e_multiplayer_team)
//{
//    mangled_ppc("?game_engine_team_is_out_of_lives@@YA_NW4e_multiplayer_team@@@Z");
//};

//long game_engine_team_get_number_of_shared_lives(enum e_multiplayer_team)
//{
//    mangled_ppc("?game_engine_team_get_number_of_shared_lives@@YAJW4e_multiplayer_team@@@Z");
//};

//bool game_engine_teams_use_one_shared_life(enum e_multiplayer_team)
//{
//    mangled_ppc("?game_engine_teams_use_one_shared_life@@YA_NW4e_multiplayer_team@@@Z");
//};

//long game_engine_teams_get_number_of_players(enum e_multiplayer_team)
//{
//    mangled_ppc("?game_engine_teams_get_number_of_players@@YAJW4e_multiplayer_team@@@Z");
//};

//long game_engine_teams_get_number_of_players_alive(enum e_multiplayer_team)
//{
//    mangled_ppc("?game_engine_teams_get_number_of_players_alive@@YAJW4e_multiplayer_team@@@Z");
//};

//bool game_engine_teams_player_can_change_teams(long)
//{
//    mangled_ppc("?game_engine_teams_player_can_change_teams@@YA_NJ@Z");
//};

//public: enum e_team_changing_type c_game_engine_social_options::get_team_changing_setting(void) const
//{
//    mangled_ppc("?get_team_changing_setting@c_game_engine_social_options@@QBA?AW4e_team_changing_type@@XZ");
//};

//bool game_engine_variant_has_teams(class c_game_variant const *)
//{
//    mangled_ppc("?game_engine_variant_has_teams@@YA_NPBVc_game_variant@@@Z");
//};

//public: bool c_game_engine_miscellaneous_options::get_teams_enabled(void) const
//{
//    mangled_ppc("?get_teams_enabled@c_game_engine_miscellaneous_options@@QBA_NXZ");
//};

//long game_engine_variant_get_maximum_team_count(class c_game_variant const *, enum e_map_id)
//{
//    mangled_ppc("?game_engine_variant_get_maximum_team_count@@YAJPBVc_game_variant@@W4e_map_id@@@Z");
//};

//bool game_engine_variant_is_observer_allowed(class c_game_variant const *)
//{
//    mangled_ppc("?game_engine_variant_is_observer_allowed@@YA_NPBVc_game_variant@@@Z");
//};

//public: bool c_game_engine_social_options::get_observers_enabled(void) const
//{
//    mangled_ppc("?get_observers_enabled@c_game_engine_social_options@@QBA_NXZ");
//};

//void game_engine_variant_get_model_override_type(class c_game_variant const *, class c_enum<enum e_game_engine_team_options_model_override_type, unsigned char, 0, 5, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("?game_engine_variant_get_model_override_type@@YAXPBVc_game_variant@@PAV?$c_enum@W4e_game_engine_team_options_model_override_type@@E$0A@$04Us_default_enum_string_resolver@@@@@Z");
//};

//public: class c_game_engine_team_options const * c_game_engine_base_variant::get_team_options(void) const
//{
//    mangled_ppc("?get_team_options@c_game_engine_base_variant@@QBAPBVc_game_engine_team_options@@XZ");
//};

//void game_engine_variant_get_designator_switch_type(class c_game_variant const *, class c_enum<enum e_game_engine_team_options_designator_switch_type, unsigned char, 0, 3, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("?game_engine_variant_get_designator_switch_type@@YAXPBVc_game_variant@@PAV?$c_enum@W4e_game_engine_team_options_designator_switch_type@@E$0A@$02Us_default_enum_string_resolver@@@@@Z");
//};

//void game_engine_variant_get_team_model_choice(class c_game_variant const *, enum e_multiplayer_team, class c_enum_no_init<enum e_player_model_choice, char, 0, 2, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("?game_engine_variant_get_team_model_choice@@YAXPBVc_game_variant@@W4e_multiplayer_team@@PAV?$c_enum_no_init@W4e_player_model_choice@@D$0A@$01Us_default_enum_string_resolver@@@@@Z");
//};

//void game_engine_variant_get_team_initial_designator(class c_game_variant const *, enum e_multiplayer_team, class c_enum<enum e_multiplayer_team_designator, char, -1, 9, struct s_multiplayer_team_designator_string_resolver> *)
//{
//    mangled_ppc("?game_engine_variant_get_team_initial_designator@@YAXPBVc_game_variant@@W4e_multiplayer_team@@PAV?$c_enum@W4e_multiplayer_team_designator@@D$0?0$08Us_multiplayer_team_designator_string_resolver@@@@@Z");
//};

//bool game_engine_variant_uses_fireteams(class c_game_variant const *)
//{
//    mangled_ppc("?game_engine_variant_uses_fireteams@@YA_NPBVc_game_variant@@@Z");
//};

//long game_engine_variant_get_team_fireteam_count(class c_game_variant const *, enum e_multiplayer_team)
//{
//    mangled_ppc("?game_engine_variant_get_team_fireteam_count@@YAJPBVc_game_variant@@W4e_multiplayer_team@@@Z");
//};

//long game_engine_variant_get_available_team_count(class c_game_variant const *)
//{
//    mangled_ppc("?game_engine_variant_get_available_team_count@@YAJPBVc_game_variant@@@Z");
//};

//bool game_engine_variant_team_available(class c_game_variant const *, enum e_multiplayer_team)
//{
//    mangled_ppc("?game_engine_variant_team_available@@YA_NPBVc_game_variant@@W4e_multiplayer_team@@@Z");
//};

//bool game_engine_variant_team_available_internal(class c_game_variant const *, enum e_multiplayer_team, bool)
//{
//    mangled_ppc("?game_engine_variant_team_available_internal@@YA_NPBVc_game_variant@@W4e_multiplayer_team@@_N@Z");
//};

//bool game_engine_variant_try_and_get_team_available(class c_game_variant const *, enum e_multiplayer_team)
//{
//    mangled_ppc("?game_engine_variant_try_and_get_team_available@@YA_NPBVc_game_variant@@W4e_multiplayer_team@@@Z");
//};

//bool game_engine_variant_get_first_available_team(class c_game_variant const *, enum e_multiplayer_team *)
//{
//    mangled_ppc("?game_engine_variant_get_first_available_team@@YA_NPBVc_game_variant@@PAW4e_multiplayer_team@@@Z");
//};

//bool game_engine_variant_get_next_available_team(class c_game_variant const *, enum e_multiplayer_team, enum e_multiplayer_team *)
//{
//    mangled_ppc("?game_engine_variant_get_next_available_team@@YA_NPBVc_game_variant@@W4e_multiplayer_team@@PAW42@@Z");
//};

//bool game_engine_variant_team_get_description(class c_game_variant const *, enum e_multiplayer_team, class c_static_wchar_string<256> *)
//{
//    mangled_ppc("?game_engine_variant_team_get_description@@YA_NPBVc_game_variant@@W4e_multiplayer_team@@PAV?$c_static_wchar_string@$0BAA@@@@Z");
//};

//enum e_multiplayer_team_designator game_engine_team_get_designator(enum e_multiplayer_team)
//{
//    mangled_ppc("?game_engine_team_get_designator@@YA?AW4e_multiplayer_team_designator@@W4e_multiplayer_team@@@Z");
//};

//void game_engine_variant_team_get_model(class c_game_variant const *, enum e_multiplayer_team, class c_enum_no_init<enum e_player_model_choice, char, 0, 2, struct s_default_enum_string_resolver>, class c_enum_no_init<enum e_player_model_choice, char, 0, 2, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("?game_engine_variant_team_get_model@@YAXPBVc_game_variant@@W4e_multiplayer_team@@V?$c_enum_no_init@W4e_player_model_choice@@D$0A@$01Us_default_enum_string_resolver@@@@PAV3@@Z");
//};

//void game_engine_variant_team_get_model(class c_game_variant const *, enum e_multiplayer_team, enum e_multiplayer_team_designator, class c_enum_no_init<enum e_player_model_choice, char, 0, 2, struct s_default_enum_string_resolver>, class c_enum_no_init<enum e_player_model_choice, char, 0, 2, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("?game_engine_variant_team_get_model@@YAXPBVc_game_variant@@W4e_multiplayer_team@@W4e_multiplayer_team_designator@@V?$c_enum_no_init@W4e_player_model_choice@@D$0A@$01Us_default_enum_string_resolver@@@@PAV4@@Z");
//};

//void game_engine_variant_team_get_model_for_initial_designator(class c_game_variant const *, enum e_multiplayer_team, class c_enum_no_init<enum e_player_model_choice, char, 0, 2, struct s_default_enum_string_resolver>, class c_enum_no_init<enum e_player_model_choice, char, 0, 2, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("?game_engine_variant_team_get_model_for_initial_designator@@YAXPBVc_game_variant@@W4e_multiplayer_team@@V?$c_enum_no_init@W4e_player_model_choice@@D$0A@$01Us_default_enum_string_resolver@@@@PAV3@@Z");
//};

//void game_engine_variant_team_get_visible_model_and_team(class c_game_variant const *, enum e_multiplayer_team, class c_enum_no_init<enum e_player_model_choice, char, 0, 2, struct s_default_enum_string_resolver>, enum e_multiplayer_team *, class c_enum_no_init<enum e_player_model_choice, char, 0, 2, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("?game_engine_variant_team_get_visible_model_and_team@@YAXPBVc_game_variant@@W4e_multiplayer_team@@V?$c_enum_no_init@W4e_player_model_choice@@D$0A@$01Us_default_enum_string_resolver@@@@PAW42@PAV3@@Z");
//};

//bool game_engine_variant_team_get_color_override(class c_game_variant const *, enum e_multiplayer_team, union rgb_color *)
//{
//    mangled_ppc("?game_engine_variant_team_get_color_override@@YA_NPBVc_game_variant@@W4e_multiplayer_team@@PATrgb_color@@@Z");
//};

//bool game_engine_variant_team_get_ui_text_tint_color_override(class c_game_variant const *, enum e_multiplayer_team, bool, union argb_color *)
//{
//    mangled_ppc("?game_engine_variant_team_get_ui_text_tint_color_override@@YA_NPBVc_game_variant@@W4e_multiplayer_team@@_NPATargb_color@@@Z");
//};

//bool game_engine_variant_team_get_ui_bitmap_tint_color_override(class c_game_variant const *, enum e_multiplayer_team, bool, union argb_color *)
//{
//    mangled_ppc("?game_engine_variant_team_get_ui_bitmap_tint_color_override@@YA_NPBVc_game_variant@@W4e_multiplayer_team@@_NPATargb_color@@@Z");
//};

//enum e_multiplayer_team_designator game_engine_variant_team_get_initial_designator(class c_game_variant const *, enum e_multiplayer_team)
//{
//    mangled_ppc("?game_engine_variant_team_get_initial_designator@@YA?AW4e_multiplayer_team_designator@@PBVc_game_variant@@W4e_multiplayer_team@@@Z");
//};

//void game_engine_build_random_team_mapping(void)
//{
//    mangled_ppc("?game_engine_build_random_team_mapping@@YAXXZ");
//};

//enum e_multiplayer_team_designator & operator++(enum e_multiplayer_team_designator &)
//{
//    mangled_ppc("??E@YAAAW4e_multiplayer_team_designator@@AAW40@@Z");
//};

//enum e_multiplayer_team game_engine_try_and_randomly_map_game_team(enum e_multiplayer_team, class c_flags<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver> const &, bool)
//{
//    mangled_ppc("?game_engine_try_and_randomly_map_game_team@@YA?AW4e_multiplayer_team@@W41@ABV?$c_flags@W4e_multiplayer_team@@G$07Us_default_enum_string_resolver@@@@_N@Z");
//};

//void game_engine_build_initial_teams(void)
//{
//    mangled_ppc("?game_engine_build_initial_teams@@YAXXZ");
//};

//void get_team_model_for_designator(class c_game_variant const *, enum e_multiplayer_team, enum e_multiplayer_team_designator, class c_enum_no_init<enum e_player_model_choice, char, 0, 2, struct s_default_enum_string_resolver>, class c_enum_no_init<enum e_player_model_choice, char, 0, 2, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("?get_team_model_for_designator@@YAXPBVc_game_variant@@W4e_multiplayer_team@@W4e_multiplayer_team_designator@@V?$c_enum_no_init@W4e_player_model_choice@@D$0A@$01Us_default_enum_string_resolver@@@@PAV4@@Z");
//};

//public: c_flags<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver>::c_flags<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver>(class c_flags_no_init<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??0?$c_flags@W4e_multiplayer_team@@G$07Us_default_enum_string_resolver@@@@QAA@V?$c_flags_no_init@W4e_multiplayer_team@@G$07Us_default_enum_string_resolver@@@@@Z");
//};

//public: bool c_enum_no_init<enum e_game_engine_team_options_model_override_type, unsigned char, 0, 5, struct s_default_enum_string_resolver>::operator==(enum e_game_engine_team_options_model_override_type) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_game_engine_team_options_model_override_type@@E$0A@$04Us_default_enum_string_resolver@@@@QBA_NW4e_game_engine_team_options_model_override_type@@@Z");
//};

//public: enum e_team_changing_type c_enum_no_init<enum e_team_changing_type, short, 0, 3, struct s_default_enum_string_resolver>::operator enum e_team_changing_type(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_team_changing_type@@F$0A@$02Us_default_enum_string_resolver@@@@QBA?AW4e_team_changing_type@@XZ");
//};

//public: long c_string_table<1, 32>::count(void) const
//{
//    mangled_ppc("?count@?$c_string_table@$00$0CA@@@QBAJXZ");
//};

//public: void s_static_array<char, 9>::set_all(char const &)
//{
//    mangled_ppc("?set_all@?$s_static_array@D$08@@QAAXABD@Z");
//};

//public: void c_flags_no_init<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver>::set(enum e_multiplayer_team, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_multiplayer_team@@G$07Us_default_enum_string_resolver@@@@QAAXW4e_multiplayer_team@@_N@Z");
//};

//public: long c_flags_no_init<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver>::count_set(void) const
//{
//    mangled_ppc("?count_set@?$c_flags_no_init@W4e_multiplayer_team@@G$07Us_default_enum_string_resolver@@@@QBAJXZ");
//};

//public: enum e_multiplayer_team c_flags_no_init<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver>::get_highest_bit_set(void) const
//{
//    mangled_ppc("?get_highest_bit_set@?$c_flags_no_init@W4e_multiplayer_team@@G$07Us_default_enum_string_resolver@@@@QBA?AW4e_multiplayer_team@@XZ");
//};

//public: enum e_multiplayer_team c_flags_no_init<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver>::get_lowest_bit_set(void) const
//{
//    mangled_ppc("?get_lowest_bit_set@?$c_flags_no_init@W4e_multiplayer_team@@G$07Us_default_enum_string_resolver@@@@QBA?AW4e_multiplayer_team@@XZ");
//};

//public: bool c_flags_no_init<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver>::operator!=(class c_flags_no_init<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver> const &) const
//{
//    mangled_ppc("??9?$c_flags_no_init@W4e_multiplayer_team@@G$07Us_default_enum_string_resolver@@@@QBA_NABV0@@Z");
//};

//public: class c_flags_no_init<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver> c_flags_no_init<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver>::operator&(class c_flags_no_init<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver> const &) const
//{
//    mangled_ppc("??I?$c_flags_no_init@W4e_multiplayer_team@@G$07Us_default_enum_string_resolver@@@@QBA?AV0@ABV0@@Z");
//};

//public: class c_flags_no_init<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver> & c_flags_no_init<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver>::operator|=(class c_flags_no_init<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver> const &)
//{
//    mangled_ppc("??_5?$c_flags_no_init@W4e_multiplayer_team@@G$07Us_default_enum_string_resolver@@@@QAAAAV0@ABV0@@Z");
//};

//public: void c_flags_no_init<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver>::and_not(class c_flags_no_init<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver> const *)
//{
//    mangled_ppc("?and_not@?$c_flags_no_init@W4e_multiplayer_team@@G$07Us_default_enum_string_resolver@@@@QAAXPBV1@@Z");
//};

//public: c_flags<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver>::c_flags<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_multiplayer_team@@G$07Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: bool c_flags_no_init<enum e_multiplayer_team_designator, unsigned short, 9, struct s_default_enum_string_resolver>::operator!=(class c_flags_no_init<enum e_multiplayer_team_designator, unsigned short, 9, struct s_default_enum_string_resolver> const &) const
//{
//    mangled_ppc("??9?$c_flags_no_init@W4e_multiplayer_team_designator@@G$08Us_default_enum_string_resolver@@@@QBA_NABV0@@Z");
//};

//public: bool c_flags_no_init<enum e_game_engine_team_options_team_flags, unsigned char, 4, struct s_default_enum_string_resolver>::test(enum e_game_engine_team_options_team_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_game_engine_team_options_team_flags@@E$03Us_default_enum_string_resolver@@@@QBA_NW4e_game_engine_team_options_team_flags@@@Z");
//};

//public: struct utf8const * c_string_table<1, 32>::get(enum e_language, long) const
//{
//    mangled_ppc("?get@?$c_string_table@$00$0CA@@@QBAPBUutf8@@W4e_language@@J@Z");
//};

//public: class c_game_engine_team_options_team const & s_static_array<class c_game_engine_team_options_team, 8>::operator[]<enum e_multiplayer_team>(enum e_multiplayer_team) const
//{
//    mangled_ppc("??$?AW4e_multiplayer_team@@@?$s_static_array@Vc_game_engine_team_options_team@@$07@@QBAABVc_game_engine_team_options_team@@W4e_multiplayer_team@@@Z");
//};

//public: void c_static_wchar_string<256>::set_utf8(struct utf8const *)
//{
//    mangled_ppc("?set_utf8@?$c_static_wchar_string@$0BAA@@@QAAXPBUutf8@@@Z");
//};

//public: bool c_static_wchar_string<256>::is_empty(void) const
//{
//    mangled_ppc("?is_empty@?$c_static_wchar_string@$0BAA@@@QBA_NXZ");
//};

//public: class c_enum_no_init<enum e_multiplayer_team, char, -1, 16, struct s_default_enum_string_resolver> & s_static_array<class c_enum_no_init<enum e_multiplayer_team, char, -1, 16, struct s_default_enum_string_resolver>, 8>::operator[]<enum e_multiplayer_team>(enum e_multiplayer_team)
//{
//    mangled_ppc("??$?AW4e_multiplayer_team@@@?$s_static_array@V?$c_enum_no_init@W4e_multiplayer_team@@D$0?0$0BA@Us_default_enum_string_resolver@@@@$07@@QAAAAV?$c_enum_no_init@W4e_multiplayer_team@@D$0?0$0BA@Us_default_enum_string_resolver@@@@W4e_multiplayer_team@@@Z");
//};

//public: char & s_static_array<char, 9>::operator[]<enum e_multiplayer_team_designator>(enum e_multiplayer_team_designator)
//{
//    mangled_ppc("??$?AW4e_multiplayer_team_designator@@@?$s_static_array@D$08@@QAAAADW4e_multiplayer_team_designator@@@Z");
//};

//public: struct utf8const * c_string_buffer<32>::get(long) const
//{
//    mangled_ppc("?get@?$c_string_buffer@$0CA@@@QBAPBUutf8@@J@Z");
//};

//public: void c_flags_no_init<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_multiplayer_team@@G$07Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: enum e_multiplayer_team c_flags_no_init<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver>::get_highest_bit_set_in_range(enum e_multiplayer_team, enum e_multiplayer_team) const
//{
//    mangled_ppc("?get_highest_bit_set_in_range@?$c_flags_no_init@W4e_multiplayer_team@@G$07Us_default_enum_string_resolver@@@@QBA?AW4e_multiplayer_team@@W42@0@Z");
//};

//public: void c_flags_no_init<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver>::and_not_range(class c_flags_no_init<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver> const *, enum e_multiplayer_team, enum e_multiplayer_team)
//{
//    mangled_ppc("?and_not_range@?$c_flags_no_init@W4e_multiplayer_team@@G$07Us_default_enum_string_resolver@@@@QAAXPBV1@W4e_multiplayer_team@@1@Z");
//};

//public: static bool c_flags_no_init<enum e_game_engine_team_options_team_flags, unsigned char, 4, struct s_default_enum_string_resolver>::valid_bit(enum e_game_engine_team_options_team_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_game_engine_team_options_team_flags@@E$03Us_default_enum_string_resolver@@@@SA_NW4e_game_engine_team_options_team_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_game_engine_team_options_team_flags, unsigned char, 4, struct s_default_enum_string_resolver>::flag_size_type(enum e_game_engine_team_options_team_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_game_engine_team_options_team_flags@@E$03Us_default_enum_string_resolver@@@@CAEW4e_game_engine_team_options_team_flags@@@Z");
//};

//public: class s_static_array<short, 1> const & s_static_array<class s_static_array<short, 1>, 12>::operator[]<enum e_language>(enum e_language) const
//{
//    mangled_ppc("??$?AW4e_language@@@?$s_static_array@V?$s_static_array@F$00@@$0M@@@QBAABV?$s_static_array@F$00@@W4e_language@@@Z");
//};

//public: short const & s_static_array<short, 1>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@F$00@@QBAABFJ@Z");
//};

//public: static bool s_static_array<class c_game_engine_team_options_team, 8>::valid<enum e_multiplayer_team>(enum e_multiplayer_team)
//{
//    mangled_ppc("??$valid@W4e_multiplayer_team@@@?$s_static_array@Vc_game_engine_team_options_team@@$07@@SA_NW4e_multiplayer_team@@@Z");
//};

//public: static bool s_static_array<class c_enum_no_init<enum e_multiplayer_team, char, -1, 16, struct s_default_enum_string_resolver>, 8>::valid<enum e_multiplayer_team>(enum e_multiplayer_team)
//{
//    mangled_ppc("??$valid@W4e_multiplayer_team@@@?$s_static_array@V?$c_enum_no_init@W4e_multiplayer_team@@D$0?0$0BA@Us_default_enum_string_resolver@@@@$07@@SA_NW4e_multiplayer_team@@@Z");
//};

//public: static bool s_static_array<char, 9>::valid<enum e_multiplayer_team_designator>(enum e_multiplayer_team_designator)
//{
//    mangled_ppc("??$valid@W4e_multiplayer_team_designator@@@?$s_static_array@D$08@@SA_NW4e_multiplayer_team_designator@@@Z");
//};

//public: struct utf8const & s_static_array<struct utf8, 32>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Uutf8@@$0CA@@@QBAABUutf8@@J@Z");
//};

//public: bool c_flags_no_init<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver>::test_range(enum e_multiplayer_team, enum e_multiplayer_team) const
//{
//    mangled_ppc("?test_range@?$c_flags_no_init@W4e_multiplayer_team@@G$07Us_default_enum_string_resolver@@@@QBA_NW4e_multiplayer_team@@0@Z");
//};

//public: class c_flags_no_init<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver> c_flags_no_init<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver>::operator~(void) const
//{
//    mangled_ppc("??S?$c_flags_no_init@W4e_multiplayer_team@@G$07Us_default_enum_string_resolver@@@@QBA?AV0@XZ");
//};

//public: class c_flags_no_init<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver> c_flags_no_init<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver>::operator|(class c_flags_no_init<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver> const &) const
//{
//    mangled_ppc("??U?$c_flags_no_init@W4e_multiplayer_team@@G$07Us_default_enum_string_resolver@@@@QBA?AV0@ABV0@@Z");
//};

//public: class c_flags_no_init<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver> & c_flags_no_init<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver>::operator&=(class c_flags_no_init<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver> const &)
//{
//    mangled_ppc("??_4?$c_flags_no_init@W4e_multiplayer_team@@G$07Us_default_enum_string_resolver@@@@QAAAAV0@ABV0@@Z");
//};

//public: static bool s_static_array<class s_static_array<short, 1>, 12>::valid<enum e_language>(enum e_language)
//{
//    mangled_ppc("??$valid@W4e_language@@@?$s_static_array@V?$s_static_array@F$00@@$0M@@@SA_NW4e_language@@@Z");
//};

//public: static bool s_static_array<short, 1>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@F$00@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct utf8, 32>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Uutf8@@$0CA@@@SA_NJ@Z");
//};

