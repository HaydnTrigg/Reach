/* ---------- headers */

#include "omaha\game\game_engine_coop_spawning.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// bool g_render_coop_spawn_safety_status_tests; // "?g_render_coop_spawn_safety_status_tests@@3_NA"
// struct s_coop_spawning_globals_definition g_coop_spawning_runtime_globals; // "?g_coop_spawning_runtime_globals@@3Us_coop_spawning_globals_definition@@A"

// public: static void c_coop_spawning::initialize(void);
// public: static void c_coop_spawning::dispose(void);
// public: static void c_coop_spawning::initialize_for_new_map(void);
// public: static void c_coop_spawning::dispose_from_old_map(void);
// public: static long c_coop_spawning::get_player_cooldown_time_ticks(void);
// struct s_coop_spawning_globals_definition const * get_runtime_coop_spawning_globals(void);
// public: static long c_coop_spawning::get_backfield_cooldown_time_ticks(void);
// public: static long c_coop_spawning::get_unsafe_spawn_time_ticks(void);
// public: static long c_coop_spawning::get_teammate_damage_time_ticks(void);
// public: static long c_coop_spawning::get_dead_body_switch_time_ticks(void);
// public: static long c_coop_spawning::get_loadout_menu_suppression_time_ticks(void);
// public: static long c_coop_spawning::get_loadout_menu_cooldown_time_ticks(void);
// public: static long c_coop_spawning::get_loadout_initial_choice_time_ticks(void);
// public: unsigned char c_game_engine_respawn_options::get_initial_loadout_selection_time_seconds(void) const;
// public: class c_game_engine_respawn_options const * c_game_engine_base_variant::get_respawn_options(void) const;
// public: static long c_coop_spawning::get_maximum_spawn_suppression_time_ticks(void);
// public: static bool c_coop_spawning::push_to_spawn_enabled(void);
// public: static bool c_coop_spawning::should_show_marker(void);
// public: static bool c_coop_spawning::extermination_synchs_timers(void);
// public: static bool c_coop_spawning::extermination_synchs_location(void);
// public: static bool c_coop_spawning::rotation_allowed_on_player(void);
// public: static bool c_coop_spawning::rotation_allowed_on_object(void);
// public: static bool c_coop_spawning::should_display_loadout_menu(enum e_loadout_palette_type, enum e_loadout_palette_type);
// public: static bool c_coop_spawning::player_can_respawn_on_players(long);
// public: static bool c_coop_spawning::player_can_respawn_on_objects(long);
// public: static float c_coop_spawning::get_nearby_enemy_cylinder_height(void);
// public: static float c_coop_spawning::get_nearby_enemy_cylinder_radius(void);
// public: static bool c_coop_spawning::safety_check_in_use(enum e_player_respawn_failure);
// public: static bool c_coop_spawning::safety_check_prevents_spawn(enum e_player_respawn_failure);
// public: static void c_coop_spawning::set_loadout_menu_suppression_time_seconds(long);
// struct s_coop_spawning_globals_definition * get_runtime_coop_spawning_globals_writeable(void);
// public: static void c_coop_spawning::set_loadout_menu_cooldown_time_seconds(long);
// public: static void c_coop_spawning::set_loadout_initial_choice_time_seconds(long);
// public: static void c_coop_spawning::set_maximum_spawn_suppression_time_seconds(long);
// public: static enum e_player_respawn_failure c_coop_spawning::get_player_safety_status(long);
// public: static bool c_coop_spawning::player_is_in_soft_kill_volume(long);
// public: static bool c_coop_spawning::player_is_in_enemy_territory(long);
// public: static bool c_coop_spawning::player_is_recently_damaged(long);
// public: static bool c_coop_spawning::player_is_near_enemy(long);
// public: static bool c_coop_spawning::player_is_near_projectiles(long);
// public: static bool c_coop_spawning::target_is_near_enemy(long, long);
// public: static bool c_coop_spawning::player_is_valid_respawn_target(long, long);
// public: static bool c_coop_spawning::object_is_valid_respawn_target(long, long);
// public: static long c_coop_spawning::player_get_next_respawn_target_player(long, long, long);
// public: static long c_coop_spawning::player_get_next_respawn_target_object(long, long, long);
// public: static void c_coop_spawning::player_get_next_respawn_target(long, long, long, long, long *, long *);
// public: static void c_coop_spawning::player_changed_respawn_target(long);
// struct s_coop_spawning_globals_definition const * try_and_get_coop_spawning_globals(void);
// struct s_multiplayer_runtime_globals_definition * multiplayer_globals_try_and_get_runtime_data(struct s_multiplayer_globals_definition const *);
// public: struct s_megalo_object_datum * c_data_iterator<struct s_megalo_object_datum>::get_datum(void) const;
// public: void c_flags_no_init<enum e_coop_spawning_flags, unsigned short, 12, struct s_default_enum_string_resolver>::set_all(void);
// public: bool c_flags_no_init<enum e_coop_spawning_flags, unsigned short, 12, struct s_default_enum_string_resolver>::test(enum e_coop_spawning_flags) const;
// public: bool c_flags_no_init<unsigned char, unsigned char, 8, struct s_default_enum_string_resolver>::test(unsigned char) const;
// public: static class c_flags_no_init<enum e_coop_spawning_flags, unsigned short, 12, struct s_default_enum_string_resolver> c_flags_no_init<enum e_coop_spawning_flags, unsigned short, 12, struct s_default_enum_string_resolver>::make_mask_from_range(enum e_coop_spawning_flags, enum e_coop_spawning_flags);
// public: static bool c_flags_no_init<enum e_coop_spawning_flags, unsigned short, 12, struct s_default_enum_string_resolver>::valid_bit(enum e_coop_spawning_flags);
// private: static unsigned short c_flags_no_init<enum e_coop_spawning_flags, unsigned short, 12, struct s_default_enum_string_resolver>::flag_size_type(enum e_coop_spawning_flags);
// private: static unsigned char c_flags_no_init<unsigned char, unsigned char, 8, struct s_default_enum_string_resolver>::flag_size_type(unsigned char);
// public: void c_flags_no_init<enum e_coop_spawning_flags, unsigned short, 12, struct s_default_enum_string_resolver>::set_unsafe(unsigned short);
// private: static unsigned short c_flags_no_init<enum e_coop_spawning_flags, unsigned short, 12, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_coop_spawning_flags);
// public: bool c_flags_no_init<enum e_coop_spawning_flags, unsigned short, 12, struct s_default_enum_string_resolver>::valid(void) const;
// private: static unsigned short c_flags_no_init<enum e_coop_spawning_flags, unsigned short, 12, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// public: s_coop_spawning_globals_definition::s_coop_spawning_globals_definition(void);
// public: c_flags<enum e_coop_spawning_flags, unsigned short, 12, struct s_default_enum_string_resolver>::c_flags<enum e_coop_spawning_flags, unsigned short, 12, struct s_default_enum_string_resolver>(void);
// public: void c_flags_no_init<enum e_coop_spawning_flags, unsigned short, 12, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_coop_spawning_flags, unsigned short, 12, struct s_default_enum_string_resolver>::is_clear(void) const;

//public: static void c_coop_spawning::initialize(void)
//{
//    mangled_ppc("?initialize@c_coop_spawning@@SAXXZ");
//};

//public: static void c_coop_spawning::dispose(void)
//{
//    mangled_ppc("?dispose@c_coop_spawning@@SAXXZ");
//};

//public: static void c_coop_spawning::initialize_for_new_map(void)
//{
//    mangled_ppc("?initialize_for_new_map@c_coop_spawning@@SAXXZ");
//};

//public: static void c_coop_spawning::dispose_from_old_map(void)
//{
//    mangled_ppc("?dispose_from_old_map@c_coop_spawning@@SAXXZ");
//};

//public: static long c_coop_spawning::get_player_cooldown_time_ticks(void)
//{
//    mangled_ppc("?get_player_cooldown_time_ticks@c_coop_spawning@@SAJXZ");
//};

//struct s_coop_spawning_globals_definition const * get_runtime_coop_spawning_globals(void)
//{
//    mangled_ppc("?get_runtime_coop_spawning_globals@@YAPBUs_coop_spawning_globals_definition@@XZ");
//};

//public: static long c_coop_spawning::get_backfield_cooldown_time_ticks(void)
//{
//    mangled_ppc("?get_backfield_cooldown_time_ticks@c_coop_spawning@@SAJXZ");
//};

//public: static long c_coop_spawning::get_unsafe_spawn_time_ticks(void)
//{
//    mangled_ppc("?get_unsafe_spawn_time_ticks@c_coop_spawning@@SAJXZ");
//};

//public: static long c_coop_spawning::get_teammate_damage_time_ticks(void)
//{
//    mangled_ppc("?get_teammate_damage_time_ticks@c_coop_spawning@@SAJXZ");
//};

//public: static long c_coop_spawning::get_dead_body_switch_time_ticks(void)
//{
//    mangled_ppc("?get_dead_body_switch_time_ticks@c_coop_spawning@@SAJXZ");
//};

//public: static long c_coop_spawning::get_loadout_menu_suppression_time_ticks(void)
//{
//    mangled_ppc("?get_loadout_menu_suppression_time_ticks@c_coop_spawning@@SAJXZ");
//};

//public: static long c_coop_spawning::get_loadout_menu_cooldown_time_ticks(void)
//{
//    mangled_ppc("?get_loadout_menu_cooldown_time_ticks@c_coop_spawning@@SAJXZ");
//};

//public: static long c_coop_spawning::get_loadout_initial_choice_time_ticks(void)
//{
//    mangled_ppc("?get_loadout_initial_choice_time_ticks@c_coop_spawning@@SAJXZ");
//};

//public: unsigned char c_game_engine_respawn_options::get_initial_loadout_selection_time_seconds(void) const
//{
//    mangled_ppc("?get_initial_loadout_selection_time_seconds@c_game_engine_respawn_options@@QBAEXZ");
//};

//public: class c_game_engine_respawn_options const * c_game_engine_base_variant::get_respawn_options(void) const
//{
//    mangled_ppc("?get_respawn_options@c_game_engine_base_variant@@QBAPBVc_game_engine_respawn_options@@XZ");
//};

//public: static long c_coop_spawning::get_maximum_spawn_suppression_time_ticks(void)
//{
//    mangled_ppc("?get_maximum_spawn_suppression_time_ticks@c_coop_spawning@@SAJXZ");
//};

//public: static bool c_coop_spawning::push_to_spawn_enabled(void)
//{
//    mangled_ppc("?push_to_spawn_enabled@c_coop_spawning@@SA_NXZ");
//};

//public: static bool c_coop_spawning::should_show_marker(void)
//{
//    mangled_ppc("?should_show_marker@c_coop_spawning@@SA_NXZ");
//};

//public: static bool c_coop_spawning::extermination_synchs_timers(void)
//{
//    mangled_ppc("?extermination_synchs_timers@c_coop_spawning@@SA_NXZ");
//};

//public: static bool c_coop_spawning::extermination_synchs_location(void)
//{
//    mangled_ppc("?extermination_synchs_location@c_coop_spawning@@SA_NXZ");
//};

//public: static bool c_coop_spawning::rotation_allowed_on_player(void)
//{
//    mangled_ppc("?rotation_allowed_on_player@c_coop_spawning@@SA_NXZ");
//};

//public: static bool c_coop_spawning::rotation_allowed_on_object(void)
//{
//    mangled_ppc("?rotation_allowed_on_object@c_coop_spawning@@SA_NXZ");
//};

//public: static bool c_coop_spawning::should_display_loadout_menu(enum e_loadout_palette_type, enum e_loadout_palette_type)
//{
//    mangled_ppc("?should_display_loadout_menu@c_coop_spawning@@SA_NW4e_loadout_palette_type@@0@Z");
//};

//public: static bool c_coop_spawning::player_can_respawn_on_players(long)
//{
//    mangled_ppc("?player_can_respawn_on_players@c_coop_spawning@@SA_NJ@Z");
//};

//public: static bool c_coop_spawning::player_can_respawn_on_objects(long)
//{
//    mangled_ppc("?player_can_respawn_on_objects@c_coop_spawning@@SA_NJ@Z");
//};

//public: static float c_coop_spawning::get_nearby_enemy_cylinder_height(void)
//{
//    mangled_ppc("?get_nearby_enemy_cylinder_height@c_coop_spawning@@SAMXZ");
//};

//public: static float c_coop_spawning::get_nearby_enemy_cylinder_radius(void)
//{
//    mangled_ppc("?get_nearby_enemy_cylinder_radius@c_coop_spawning@@SAMXZ");
//};

//public: static bool c_coop_spawning::safety_check_in_use(enum e_player_respawn_failure)
//{
//    mangled_ppc("?safety_check_in_use@c_coop_spawning@@SA_NW4e_player_respawn_failure@@@Z");
//};

//public: static bool c_coop_spawning::safety_check_prevents_spawn(enum e_player_respawn_failure)
//{
//    mangled_ppc("?safety_check_prevents_spawn@c_coop_spawning@@SA_NW4e_player_respawn_failure@@@Z");
//};

//public: static void c_coop_spawning::set_loadout_menu_suppression_time_seconds(long)
//{
//    mangled_ppc("?set_loadout_menu_suppression_time_seconds@c_coop_spawning@@SAXJ@Z");
//};

//struct s_coop_spawning_globals_definition * get_runtime_coop_spawning_globals_writeable(void)
//{
//    mangled_ppc("?get_runtime_coop_spawning_globals_writeable@@YAPAUs_coop_spawning_globals_definition@@XZ");
//};

//public: static void c_coop_spawning::set_loadout_menu_cooldown_time_seconds(long)
//{
//    mangled_ppc("?set_loadout_menu_cooldown_time_seconds@c_coop_spawning@@SAXJ@Z");
//};

//public: static void c_coop_spawning::set_loadout_initial_choice_time_seconds(long)
//{
//    mangled_ppc("?set_loadout_initial_choice_time_seconds@c_coop_spawning@@SAXJ@Z");
//};

//public: static void c_coop_spawning::set_maximum_spawn_suppression_time_seconds(long)
//{
//    mangled_ppc("?set_maximum_spawn_suppression_time_seconds@c_coop_spawning@@SAXJ@Z");
//};

//public: static enum e_player_respawn_failure c_coop_spawning::get_player_safety_status(long)
//{
//    mangled_ppc("?get_player_safety_status@c_coop_spawning@@SA?AW4e_player_respawn_failure@@J@Z");
//};

//public: static bool c_coop_spawning::player_is_in_soft_kill_volume(long)
//{
//    mangled_ppc("?player_is_in_soft_kill_volume@c_coop_spawning@@SA_NJ@Z");
//};

//public: static bool c_coop_spawning::player_is_in_enemy_territory(long)
//{
//    mangled_ppc("?player_is_in_enemy_territory@c_coop_spawning@@SA_NJ@Z");
//};

//public: static bool c_coop_spawning::player_is_recently_damaged(long)
//{
//    mangled_ppc("?player_is_recently_damaged@c_coop_spawning@@SA_NJ@Z");
//};

//public: static bool c_coop_spawning::player_is_near_enemy(long)
//{
//    mangled_ppc("?player_is_near_enemy@c_coop_spawning@@SA_NJ@Z");
//};

//public: static bool c_coop_spawning::player_is_near_projectiles(long)
//{
//    mangled_ppc("?player_is_near_projectiles@c_coop_spawning@@SA_NJ@Z");
//};

//public: static bool c_coop_spawning::target_is_near_enemy(long, long)
//{
//    mangled_ppc("?target_is_near_enemy@c_coop_spawning@@SA_NJJ@Z");
//};

//public: static bool c_coop_spawning::player_is_valid_respawn_target(long, long)
//{
//    mangled_ppc("?player_is_valid_respawn_target@c_coop_spawning@@SA_NJJ@Z");
//};

//public: static bool c_coop_spawning::object_is_valid_respawn_target(long, long)
//{
//    mangled_ppc("?object_is_valid_respawn_target@c_coop_spawning@@SA_NJJ@Z");
//};

//public: static long c_coop_spawning::player_get_next_respawn_target_player(long, long, long)
//{
//    mangled_ppc("?player_get_next_respawn_target_player@c_coop_spawning@@SAJJJJ@Z");
//};

//public: static long c_coop_spawning::player_get_next_respawn_target_object(long, long, long)
//{
//    mangled_ppc("?player_get_next_respawn_target_object@c_coop_spawning@@SAJJJJ@Z");
//};

//public: static void c_coop_spawning::player_get_next_respawn_target(long, long, long, long, long *, long *)
//{
//    mangled_ppc("?player_get_next_respawn_target@c_coop_spawning@@SAXJJJJPAJ0@Z");
//};

//public: static void c_coop_spawning::player_changed_respawn_target(long)
//{
//    mangled_ppc("?player_changed_respawn_target@c_coop_spawning@@SAXJ@Z");
//};

//struct s_coop_spawning_globals_definition const * try_and_get_coop_spawning_globals(void)
//{
//    mangled_ppc("?try_and_get_coop_spawning_globals@@YAPBUs_coop_spawning_globals_definition@@XZ");
//};

//struct s_multiplayer_runtime_globals_definition * multiplayer_globals_try_and_get_runtime_data(struct s_multiplayer_globals_definition const *)
//{
//    mangled_ppc("?multiplayer_globals_try_and_get_runtime_data@@YAPAUs_multiplayer_runtime_globals_definition@@PBUs_multiplayer_globals_definition@@@Z");
//};

//public: struct s_megalo_object_datum * c_data_iterator<struct s_megalo_object_datum>::get_datum(void) const
//{
//    mangled_ppc("?get_datum@?$c_data_iterator@Us_megalo_object_datum@@@@QBAPAUs_megalo_object_datum@@XZ");
//};

//public: void c_flags_no_init<enum e_coop_spawning_flags, unsigned short, 12, struct s_default_enum_string_resolver>::set_all(void)
//{
//    mangled_ppc("?set_all@?$c_flags_no_init@W4e_coop_spawning_flags@@G$0M@Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_coop_spawning_flags, unsigned short, 12, struct s_default_enum_string_resolver>::test(enum e_coop_spawning_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_coop_spawning_flags@@G$0M@Us_default_enum_string_resolver@@@@QBA_NW4e_coop_spawning_flags@@@Z");
//};

//public: bool c_flags_no_init<unsigned char, unsigned char, 8, struct s_default_enum_string_resolver>::test(unsigned char) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@EE$07Us_default_enum_string_resolver@@@@QBA_NE@Z");
//};

//public: static class c_flags_no_init<enum e_coop_spawning_flags, unsigned short, 12, struct s_default_enum_string_resolver> c_flags_no_init<enum e_coop_spawning_flags, unsigned short, 12, struct s_default_enum_string_resolver>::make_mask_from_range(enum e_coop_spawning_flags, enum e_coop_spawning_flags)
//{
//    mangled_ppc("?make_mask_from_range@?$c_flags_no_init@W4e_coop_spawning_flags@@G$0M@Us_default_enum_string_resolver@@@@SA?AV1@W4e_coop_spawning_flags@@0@Z");
//};

//public: static bool c_flags_no_init<enum e_coop_spawning_flags, unsigned short, 12, struct s_default_enum_string_resolver>::valid_bit(enum e_coop_spawning_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_coop_spawning_flags@@G$0M@Us_default_enum_string_resolver@@@@SA_NW4e_coop_spawning_flags@@@Z");
//};

//private: static unsigned short c_flags_no_init<enum e_coop_spawning_flags, unsigned short, 12, struct s_default_enum_string_resolver>::flag_size_type(enum e_coop_spawning_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_coop_spawning_flags@@G$0M@Us_default_enum_string_resolver@@@@CAGW4e_coop_spawning_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<unsigned char, unsigned char, 8, struct s_default_enum_string_resolver>::flag_size_type(unsigned char)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@EE$07Us_default_enum_string_resolver@@@@CAEE@Z");
//};

//public: void c_flags_no_init<enum e_coop_spawning_flags, unsigned short, 12, struct s_default_enum_string_resolver>::set_unsafe(unsigned short)
//{
//    mangled_ppc("?set_unsafe@?$c_flags_no_init@W4e_coop_spawning_flags@@G$0M@Us_default_enum_string_resolver@@@@QAAXG@Z");
//};

//private: static unsigned short c_flags_no_init<enum e_coop_spawning_flags, unsigned short, 12, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_coop_spawning_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_coop_spawning_flags@@G$0M@Us_default_enum_string_resolver@@@@CAGW4e_coop_spawning_flags@@@Z");
//};

//public: bool c_flags_no_init<enum e_coop_spawning_flags, unsigned short, 12, struct s_default_enum_string_resolver>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_flags_no_init@W4e_coop_spawning_flags@@G$0M@Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//private: static unsigned short c_flags_no_init<enum e_coop_spawning_flags, unsigned short, 12, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_coop_spawning_flags@@G$0M@Us_default_enum_string_resolver@@@@CAGXZ");
//};

//public: s_coop_spawning_globals_definition::s_coop_spawning_globals_definition(void)
//{
//    mangled_ppc("??0s_coop_spawning_globals_definition@@QAA@XZ");
//};

//public: c_flags<enum e_coop_spawning_flags, unsigned short, 12, struct s_default_enum_string_resolver>::c_flags<enum e_coop_spawning_flags, unsigned short, 12, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_coop_spawning_flags@@G$0M@Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: void c_flags_no_init<enum e_coop_spawning_flags, unsigned short, 12, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_coop_spawning_flags@@G$0M@Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_coop_spawning_flags, unsigned short, 12, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_coop_spawning_flags@@G$0M@Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

