/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// union real_point3d const global_invalid_dead_point; // "?global_invalid_dead_point@@3Treal_point3d@@B"

// void game_engine_reset_respawn_stagger_variables(void);
// void game_engine_handle_deleted_object(long);
// void game_engine_unit_entered_vehicle(long, long);
// void game_engine_unit_exited_vehicle(long, long);
// void game_engine_player_nearby_item(long, long);
// void game_engine_player_damaged_player(long, long, long, bool);
// void game_engine_handle_incident_begin(void);
// void game_engine_handle_incident_end(void);
// void game_engine_handle_incident(long, long, long, struct s_damage_reporting_info const &);
// public: unsigned char c_game_engine_respawn_options::get_suicide_penalty_seconds(void) const;
// public: unsigned char c_game_engine_respawn_options::get_betrayal_penalty_seconds(void) const;
// void game_engine_setup_player_for_respawn(long);
// public: bool c_game_engine_respawn_options::get_inherit_respawn_time_enabled(void) const;
// public: unsigned char c_game_engine_respawn_options::get_respawn_growth_seconds(void) const;
// void game_engine_object_killed(long, long, long, class c_game_team const &, struct s_damage_reporting_info const &);
// void game_engine_player_fired_weapon(long);
// short game_engine_notify_shot_fired(long, struct s_damage_reporting_info const &);
// void game_engine_notify_shot_hit_player(long, long, short);
// void game_engine_player_added(long);
// void game_engine_player_activated(long);
// void game_engine_player_left(long);
// void game_engine_player_rejoined(long);
// void game_engine_player_deleted(long);
// void game_engine_player_indices_swapped(long, long);
// void game_engine_player_changed_indices(long, long);
// void game_engine_player_connecting_to_game(long, bool);
// void game_engine_player_prepare_to_change_team(long, enum e_multiplayer_team);
// void game_engine_player_changed_names(long, wchar_t const *, wchar_t const *);
// void game_engine_player_changed_teams(long, enum e_multiplayer_team, enum e_multiplayer_team);
// void game_engine_player_changed_handicap_levels(long, short, short);
// void game_engine_user_has_new_unit_index(enum e_output_user_index, long, bool);
// void game_engine_prepare_for_tag_reload(void);
// void game_engine_handle_tag_changes(void);
// void game_engine_test_general_event(long);
// void game_engine_test_flavor_event(long);
// long game_engine_inherit_respawn_timer(long, long, long, bool);
// short game_engine_get_next_shot_id(void);
// public: bool c_flags_no_init<enum c_game_engine_respawn_options::e_game_engine_respawn_option_flags, unsigned char, 4, struct s_default_enum_string_resolver>::test(enum c_game_engine_respawn_options::e_game_engine_respawn_option_flags) const;
// public: struct s_player_navpoint_data & s_static_array<struct s_player_navpoint_data, 16>::operator[]<short>(short);
// public: static bool c_flags_no_init<enum c_game_engine_respawn_options::e_game_engine_respawn_option_flags, unsigned char, 4, struct s_default_enum_string_resolver>::valid_bit(enum c_game_engine_respawn_options::e_game_engine_respawn_option_flags);
// private: static unsigned char c_flags_no_init<enum c_game_engine_respawn_options::e_game_engine_respawn_option_flags, unsigned char, 4, struct s_default_enum_string_resolver>::flag_size_type(enum c_game_engine_respawn_options::e_game_engine_respawn_option_flags);
// public: static bool s_static_array<struct s_player_navpoint_data, 16>::valid<short>(short);

//void game_engine_reset_respawn_stagger_variables(void)
//{
//    mangled_ppc("?game_engine_reset_respawn_stagger_variables@@YAXXZ");
//};

//void game_engine_handle_deleted_object(long)
//{
//    mangled_ppc("?game_engine_handle_deleted_object@@YAXJ@Z");
//};

//void game_engine_unit_entered_vehicle(long, long)
//{
//    mangled_ppc("?game_engine_unit_entered_vehicle@@YAXJJ@Z");
//};

//void game_engine_unit_exited_vehicle(long, long)
//{
//    mangled_ppc("?game_engine_unit_exited_vehicle@@YAXJJ@Z");
//};

//void game_engine_player_nearby_item(long, long)
//{
//    mangled_ppc("?game_engine_player_nearby_item@@YAXJJ@Z");
//};

//void game_engine_player_damaged_player(long, long, long, bool)
//{
//    mangled_ppc("?game_engine_player_damaged_player@@YAXJJJ_N@Z");
//};

//void game_engine_handle_incident_begin(void)
//{
//    mangled_ppc("?game_engine_handle_incident_begin@@YAXXZ");
//};

//void game_engine_handle_incident_end(void)
//{
//    mangled_ppc("?game_engine_handle_incident_end@@YAXXZ");
//};

//void game_engine_handle_incident(long, long, long, struct s_damage_reporting_info const &)
//{
//    mangled_ppc("?game_engine_handle_incident@@YAXJJJABUs_damage_reporting_info@@@Z");
//};

//public: unsigned char c_game_engine_respawn_options::get_suicide_penalty_seconds(void) const
//{
//    mangled_ppc("?get_suicide_penalty_seconds@c_game_engine_respawn_options@@QBAEXZ");
//};

//public: unsigned char c_game_engine_respawn_options::get_betrayal_penalty_seconds(void) const
//{
//    mangled_ppc("?get_betrayal_penalty_seconds@c_game_engine_respawn_options@@QBAEXZ");
//};

//void game_engine_setup_player_for_respawn(long)
//{
//    mangled_ppc("?game_engine_setup_player_for_respawn@@YAXJ@Z");
//};

//public: bool c_game_engine_respawn_options::get_inherit_respawn_time_enabled(void) const
//{
//    mangled_ppc("?get_inherit_respawn_time_enabled@c_game_engine_respawn_options@@QBA_NXZ");
//};

//public: unsigned char c_game_engine_respawn_options::get_respawn_growth_seconds(void) const
//{
//    mangled_ppc("?get_respawn_growth_seconds@c_game_engine_respawn_options@@QBAEXZ");
//};

//void game_engine_object_killed(long, long, long, class c_game_team const &, struct s_damage_reporting_info const &)
//{
//    mangled_ppc("?game_engine_object_killed@@YAXJJJABVc_game_team@@ABUs_damage_reporting_info@@@Z");
//};

//void game_engine_player_fired_weapon(long)
//{
//    mangled_ppc("?game_engine_player_fired_weapon@@YAXJ@Z");
//};

//short game_engine_notify_shot_fired(long, struct s_damage_reporting_info const &)
//{
//    mangled_ppc("?game_engine_notify_shot_fired@@YAFJABUs_damage_reporting_info@@@Z");
//};

//void game_engine_notify_shot_hit_player(long, long, short)
//{
//    mangled_ppc("?game_engine_notify_shot_hit_player@@YAXJJF@Z");
//};

//void game_engine_player_added(long)
//{
//    mangled_ppc("?game_engine_player_added@@YAXJ@Z");
//};

//void game_engine_player_activated(long)
//{
//    mangled_ppc("?game_engine_player_activated@@YAXJ@Z");
//};

//void game_engine_player_left(long)
//{
//    mangled_ppc("?game_engine_player_left@@YAXJ@Z");
//};

//void game_engine_player_rejoined(long)
//{
//    mangled_ppc("?game_engine_player_rejoined@@YAXJ@Z");
//};

//void game_engine_player_deleted(long)
//{
//    mangled_ppc("?game_engine_player_deleted@@YAXJ@Z");
//};

//void game_engine_player_indices_swapped(long, long)
//{
//    mangled_ppc("?game_engine_player_indices_swapped@@YAXJJ@Z");
//};

//void game_engine_player_changed_indices(long, long)
//{
//    mangled_ppc("?game_engine_player_changed_indices@@YAXJJ@Z");
//};

//void game_engine_player_connecting_to_game(long, bool)
//{
//    mangled_ppc("?game_engine_player_connecting_to_game@@YAXJ_N@Z");
//};

//void game_engine_player_prepare_to_change_team(long, enum e_multiplayer_team)
//{
//    mangled_ppc("?game_engine_player_prepare_to_change_team@@YAXJW4e_multiplayer_team@@@Z");
//};

//void game_engine_player_changed_names(long, wchar_t const *, wchar_t const *)
//{
//    mangled_ppc("?game_engine_player_changed_names@@YAXJPB_W0@Z");
//};

//void game_engine_player_changed_teams(long, enum e_multiplayer_team, enum e_multiplayer_team)
//{
//    mangled_ppc("?game_engine_player_changed_teams@@YAXJW4e_multiplayer_team@@0@Z");
//};

//void game_engine_player_changed_handicap_levels(long, short, short)
//{
//    mangled_ppc("?game_engine_player_changed_handicap_levels@@YAXJFF@Z");
//};

//void game_engine_user_has_new_unit_index(enum e_output_user_index, long, bool)
//{
//    mangled_ppc("?game_engine_user_has_new_unit_index@@YAXW4e_output_user_index@@J_N@Z");
//};

//void game_engine_prepare_for_tag_reload(void)
//{
//    mangled_ppc("?game_engine_prepare_for_tag_reload@@YAXXZ");
//};

//void game_engine_handle_tag_changes(void)
//{
//    mangled_ppc("?game_engine_handle_tag_changes@@YAXXZ");
//};

//void game_engine_test_general_event(long)
//{
//    mangled_ppc("?game_engine_test_general_event@@YAXJ@Z");
//};

//void game_engine_test_flavor_event(long)
//{
//    mangled_ppc("?game_engine_test_flavor_event@@YAXJ@Z");
//};

//long game_engine_inherit_respawn_timer(long, long, long, bool)
//{
//    mangled_ppc("?game_engine_inherit_respawn_timer@@YAJJJJ_N@Z");
//};

//short game_engine_get_next_shot_id(void)
//{
//    mangled_ppc("?game_engine_get_next_shot_id@@YAFXZ");
//};

//public: bool c_flags_no_init<enum c_game_engine_respawn_options::e_game_engine_respawn_option_flags, unsigned char, 4, struct s_default_enum_string_resolver>::test(enum c_game_engine_respawn_options::e_game_engine_respawn_option_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_game_engine_respawn_option_flags@c_game_engine_respawn_options@@E$03Us_default_enum_string_resolver@@@@QBA_NW4e_game_engine_respawn_option_flags@c_game_engine_respawn_options@@@Z");
//};

//public: struct s_player_navpoint_data & s_static_array<struct s_player_navpoint_data, 16>::operator[]<short>(short)
//{
//    mangled_ppc("??$?AF@?$s_static_array@Us_player_navpoint_data@@$0BA@@@QAAAAUs_player_navpoint_data@@F@Z");
//};

//public: static bool c_flags_no_init<enum c_game_engine_respawn_options::e_game_engine_respawn_option_flags, unsigned char, 4, struct s_default_enum_string_resolver>::valid_bit(enum c_game_engine_respawn_options::e_game_engine_respawn_option_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_game_engine_respawn_option_flags@c_game_engine_respawn_options@@E$03Us_default_enum_string_resolver@@@@SA_NW4e_game_engine_respawn_option_flags@c_game_engine_respawn_options@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum c_game_engine_respawn_options::e_game_engine_respawn_option_flags, unsigned char, 4, struct s_default_enum_string_resolver>::flag_size_type(enum c_game_engine_respawn_options::e_game_engine_respawn_option_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_game_engine_respawn_option_flags@c_game_engine_respawn_options@@E$03Us_default_enum_string_resolver@@@@CAEW4e_game_engine_respawn_option_flags@c_game_engine_respawn_options@@@Z");
//};

//public: static bool s_static_array<struct s_player_navpoint_data, 16>::valid<short>(short)
//{
//    mangled_ppc("??$valid@F@?$s_static_array@Us_player_navpoint_data@@$0BA@@@SA_NF@Z");
//};

