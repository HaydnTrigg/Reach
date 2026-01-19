/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// float g_unseen_spawning_cone_distance; // "?g_unseen_spawning_cone_distance@@3MA"
// float g_unseen_spawning_cone_angle_degrees; // "?g_unseen_spawning_cone_angle_degrees@@3MA"

// bool game_engine_biped_can_spawn_at_spawn_object_unobstructed(long, long);
// bool game_engine_biped_can_spawn_at_location_unobstructed(long, long, union real_point3d const *, bool);
// bool game_engine_biped_can_spawn_at_location_unseen(long, union real_point3d const *);
// bool game_engine_vehicle_can_spawn_at_location_unobstructed(long, union real_point3d const *, bool);
// long game_engine_find_best_player_respawn_object_index(long, bool);
// public: bool s_multiplayer_spawn_globals::debug_initial_spawn_point_cycling_enabled(void) const;
// public: bool s_multiplayer_spawn_globals::debug_respawn_point_cycling_enabled(void) const;
// public: short s_multiplayer_spawn_globals::get_debug_spawn_object_index(void) const;
// public: void s_multiplayer_spawn_globals::increment_debug_spawn_object_index(void);
// public: void s_multiplayer_spawn_globals::wrap_debug_spawn_object_index(void);
// public: s_dynamic_spawn_influencer_collection::s_dynamic_spawn_influencer_collection(void);
// public: s_dynamic_spawn_influencer::s_dynamic_spawn_influencer(void);
// long game_engine_find_any_player_respawn_object_index(long);
// void game_engine_render_spawn_ui(enum e_output_user_index);
// long game_engine_get_maximum_grenade_count(enum e_grenade_type);
// void game_engine_set_map_default_grenade_count(long, struct s_player_loadout *);
// void game_engine_build_initial_loadout(long, struct s_player_loadout *);
// void game_engine_loadout_apply_initial_player_traits_definition(long, struct s_player_loadout_definition *);
// public: enum e_grenade_count_setting c_player_trait_weapons::get_initial_grenade_count_setting(void) const;
// void game_engine_loadout_apply_initial_player_traits(long, struct s_player_loadout *);
// void game_engine_reset_player_respawn_timers(void);
// void game_engine_reset_player_respawn_timer(long);
// bool game_engine_should_spawn_player(long);
// bool game_engine_limited_lives_active(enum e_multiplayer_team);
// bool game_engine_teams_sharing_lives(enum e_multiplayer_team);
// void game_engine_toggle_initial_spawn_point_cycling(bool);
// void game_engine_toggle_respawn_point_cycling(bool);
// void game_engine_find_available_spawn_location_objects(long, unsigned long, unsigned long, enum e_designator_match_mode, long *, long *);
// bool spawn_order_compare_proc(long, long, void const *);
// void game_engine_spawning_get_spawn_location_for_biped(long, long, union real_point3d *);
// public: c_enum<enum e_dynamic_spawn_influencer_shape, unsigned char, 0, 5, struct s_default_enum_string_resolver>::c_enum<enum e_dynamic_spawn_influencer_shape, unsigned char, 0, 5, struct s_default_enum_string_resolver>(void);
// public: c_enum<enum e_dynamic_spawn_influencer_type, unsigned char, 0, 14, struct s_default_enum_string_resolver>::c_enum<enum e_dynamic_spawn_influencer_type, unsigned char, 0, 14, struct s_default_enum_string_resolver>(void);
// public: struct s_player_loadout_weapon & s_static_array<struct s_player_loadout_weapon, 3>::operator[]<enum e_weapon_set>(enum e_weapon_set);
// public: static bool s_static_array<struct s_player_loadout_weapon, 3>::valid<enum e_weapon_set>(enum e_weapon_set);
// public: s_multiplayer_spawn_globals::s_multiplayer_spawn_globals(void);

//bool game_engine_biped_can_spawn_at_spawn_object_unobstructed(long, long)
//{
//    mangled_ppc("?game_engine_biped_can_spawn_at_spawn_object_unobstructed@@YA_NJJ@Z");
//};

//bool game_engine_biped_can_spawn_at_location_unobstructed(long, long, union real_point3d const *, bool)
//{
//    mangled_ppc("?game_engine_biped_can_spawn_at_location_unobstructed@@YA_NJJPBTreal_point3d@@_N@Z");
//};

//bool game_engine_biped_can_spawn_at_location_unseen(long, union real_point3d const *)
//{
//    mangled_ppc("?game_engine_biped_can_spawn_at_location_unseen@@YA_NJPBTreal_point3d@@@Z");
//};

//bool game_engine_vehicle_can_spawn_at_location_unobstructed(long, union real_point3d const *, bool)
//{
//    mangled_ppc("?game_engine_vehicle_can_spawn_at_location_unobstructed@@YA_NJPBTreal_point3d@@_N@Z");
//};

//long game_engine_find_best_player_respawn_object_index(long, bool)
//{
//    mangled_ppc("?game_engine_find_best_player_respawn_object_index@@YAJJ_N@Z");
//};

//public: bool s_multiplayer_spawn_globals::debug_initial_spawn_point_cycling_enabled(void) const
//{
//    mangled_ppc("?debug_initial_spawn_point_cycling_enabled@s_multiplayer_spawn_globals@@QBA_NXZ");
//};

//public: bool s_multiplayer_spawn_globals::debug_respawn_point_cycling_enabled(void) const
//{
//    mangled_ppc("?debug_respawn_point_cycling_enabled@s_multiplayer_spawn_globals@@QBA_NXZ");
//};

//public: short s_multiplayer_spawn_globals::get_debug_spawn_object_index(void) const
//{
//    mangled_ppc("?get_debug_spawn_object_index@s_multiplayer_spawn_globals@@QBAFXZ");
//};

//public: void s_multiplayer_spawn_globals::increment_debug_spawn_object_index(void)
//{
//    mangled_ppc("?increment_debug_spawn_object_index@s_multiplayer_spawn_globals@@QAAXXZ");
//};

//public: void s_multiplayer_spawn_globals::wrap_debug_spawn_object_index(void)
//{
//    mangled_ppc("?wrap_debug_spawn_object_index@s_multiplayer_spawn_globals@@QAAXXZ");
//};

//public: s_dynamic_spawn_influencer_collection::s_dynamic_spawn_influencer_collection(void)
//{
//    mangled_ppc("??0s_dynamic_spawn_influencer_collection@@QAA@XZ");
//};

//public: s_dynamic_spawn_influencer::s_dynamic_spawn_influencer(void)
//{
//    mangled_ppc("??0s_dynamic_spawn_influencer@@QAA@XZ");
//};

//long game_engine_find_any_player_respawn_object_index(long)
//{
//    mangled_ppc("?game_engine_find_any_player_respawn_object_index@@YAJJ@Z");
//};

//void game_engine_render_spawn_ui(enum e_output_user_index)
//{
//    mangled_ppc("?game_engine_render_spawn_ui@@YAXW4e_output_user_index@@@Z");
//};

//long game_engine_get_maximum_grenade_count(enum e_grenade_type)
//{
//    mangled_ppc("?game_engine_get_maximum_grenade_count@@YAJW4e_grenade_type@@@Z");
//};

//void game_engine_set_map_default_grenade_count(long, struct s_player_loadout *)
//{
//    mangled_ppc("?game_engine_set_map_default_grenade_count@@YAXJPAUs_player_loadout@@@Z");
//};

//void game_engine_build_initial_loadout(long, struct s_player_loadout *)
//{
//    mangled_ppc("?game_engine_build_initial_loadout@@YAXJPAUs_player_loadout@@@Z");
//};

//void game_engine_loadout_apply_initial_player_traits_definition(long, struct s_player_loadout_definition *)
//{
//    mangled_ppc("?game_engine_loadout_apply_initial_player_traits_definition@@YAXJPAUs_player_loadout_definition@@@Z");
//};

//public: enum e_grenade_count_setting c_player_trait_weapons::get_initial_grenade_count_setting(void) const
//{
//    mangled_ppc("?get_initial_grenade_count_setting@c_player_trait_weapons@@QBA?AW4e_grenade_count_setting@@XZ");
//};

//void game_engine_loadout_apply_initial_player_traits(long, struct s_player_loadout *)
//{
//    mangled_ppc("?game_engine_loadout_apply_initial_player_traits@@YAXJPAUs_player_loadout@@@Z");
//};

//void game_engine_reset_player_respawn_timers(void)
//{
//    mangled_ppc("?game_engine_reset_player_respawn_timers@@YAXXZ");
//};

//void game_engine_reset_player_respawn_timer(long)
//{
//    mangled_ppc("?game_engine_reset_player_respawn_timer@@YAXJ@Z");
//};

//bool game_engine_should_spawn_player(long)
//{
//    mangled_ppc("?game_engine_should_spawn_player@@YA_NJ@Z");
//};

//bool game_engine_limited_lives_active(enum e_multiplayer_team)
//{
//    mangled_ppc("?game_engine_limited_lives_active@@YA_NW4e_multiplayer_team@@@Z");
//};

//bool game_engine_teams_sharing_lives(enum e_multiplayer_team)
//{
//    mangled_ppc("?game_engine_teams_sharing_lives@@YA_NW4e_multiplayer_team@@@Z");
//};

//void game_engine_toggle_initial_spawn_point_cycling(bool)
//{
//    mangled_ppc("?game_engine_toggle_initial_spawn_point_cycling@@YAX_N@Z");
//};

//void game_engine_toggle_respawn_point_cycling(bool)
//{
//    mangled_ppc("?game_engine_toggle_respawn_point_cycling@@YAX_N@Z");
//};

//void game_engine_find_available_spawn_location_objects(long, unsigned long, unsigned long, enum e_designator_match_mode, long *, long *)
//{
//    mangled_ppc("?game_engine_find_available_spawn_location_objects@@YAXJKKW4e_designator_match_mode@@PAJ1@Z");
//};

//bool spawn_order_compare_proc(long, long, void const *)
//{
//    mangled_ppc("?spawn_order_compare_proc@@YA_NJJPBX@Z");
//};

//void game_engine_spawning_get_spawn_location_for_biped(long, long, union real_point3d *)
//{
//    mangled_ppc("?game_engine_spawning_get_spawn_location_for_biped@@YAXJJPATreal_point3d@@@Z");
//};

//public: c_enum<enum e_dynamic_spawn_influencer_shape, unsigned char, 0, 5, struct s_default_enum_string_resolver>::c_enum<enum e_dynamic_spawn_influencer_shape, unsigned char, 0, 5, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_dynamic_spawn_influencer_shape@@E$0A@$04Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: c_enum<enum e_dynamic_spawn_influencer_type, unsigned char, 0, 14, struct s_default_enum_string_resolver>::c_enum<enum e_dynamic_spawn_influencer_type, unsigned char, 0, 14, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_dynamic_spawn_influencer_type@@E$0A@$0O@Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: struct s_player_loadout_weapon & s_static_array<struct s_player_loadout_weapon, 3>::operator[]<enum e_weapon_set>(enum e_weapon_set)
//{
//    mangled_ppc("??$?AW4e_weapon_set@@@?$s_static_array@Us_player_loadout_weapon@@$02@@QAAAAUs_player_loadout_weapon@@W4e_weapon_set@@@Z");
//};

//public: static bool s_static_array<struct s_player_loadout_weapon, 3>::valid<enum e_weapon_set>(enum e_weapon_set)
//{
//    mangled_ppc("??$valid@W4e_weapon_set@@@?$s_static_array@Us_player_loadout_weapon@@$02@@SA_NW4e_weapon_set@@@Z");
//};

//public: s_multiplayer_spawn_globals::s_multiplayer_spawn_globals(void)
//{
//    mangled_ppc("??0s_multiplayer_spawn_globals@@QAA@XZ");
//};

