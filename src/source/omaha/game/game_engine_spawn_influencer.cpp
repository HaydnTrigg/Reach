/* ---------- headers */

#include "omaha\game\game_engine_spawn_influencer.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static enum e_spawn_influencer_debug_flags const c_flags_no_init<enum e_spawn_influencer_debug_flags, unsigned long, 13, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_spawn_influencer_debug_flags@@K$0N@Us_default_enum_string_resolver@@@@2W4e_spawn_influencer_debug_flags@@B"

// void game_engine_spawn_influencers_initialize(void);
// void game_engine_spawn_influencers_dispose(void);
// void game_engine_spawn_influencers_initialize_for_new_map(void);
// void game_engine_spawn_influencers_dispose_from_old_map(void);
// void game_engine_spawn_influencers_initialize_for_new_round(void);
// void game_engine_spawn_influencers_update(void);
// void game_engine_spawn_influencers_render(void);
// void game_engine_spawn_influencers_build_collection_for_player(long, struct s_dynamic_spawn_influencer_collection *);
// void game_engine_spawn_influencer_record_player_spawn(long);
// void game_engine_spawn_influencer_record_player_death(long);
// bool game_engine_spawn_influencer_test_point(union real_point3d const *, struct s_dynamic_spawn_influencer const *, float *);
// float game_engine_calculate_cumulative_spawn_location_weight(union real_point3d const *, bool, bool, float, float, struct s_dynamic_spawn_influencer_collection const *);
// bool game_engine_spawn_influencers_projectiles_near_point(union real_point3d const *, bool);
// void game_engine_debug_spawn_influencers(bool);
// void game_engine_debug_respawn_zone_influencers(bool);
// void game_engine_debug_spawn_influencers_proximity_forbid(bool);
// void game_engine_debug_spawn_influencers_vehicles(bool);
// void game_engine_debug_spawn_influencers_weapons(bool);
// void game_engine_debug_spawn_influencers_projectiles(bool);
// void game_engine_debug_spawn_influencers_equipment(bool);
// void game_engine_debug_spawn_influencers_enemies(bool);
// void game_engine_debug_spawn_influencers_teammates(bool);
// void game_engine_debug_spawn_influencers_dead_teammates(bool);
// void game_engine_debug_spawn_influencers_random_weight_component(bool);
// void game_engine_debug_spawn_influencers_nominal_weight(bool);
// void game_engine_debug_spawn_influencers_natural_weight(bool);
// void game_engine_debug_spawn_influencers_set_target_player(char const *);
// void game_engine_debug_spawn_influencers_rotate_target(void);
// void game_engine_debug_spawn_influencers_use_historic_spawn_state(long);
// bool game_engine_spawn_influencer_build(enum e_dynamic_spawn_influencer_type, long, struct s_dynamic_spawn_influencer *, float *);
// bool game_engine_build_respawn_zone_influencer(long, struct s_dynamic_spawn_influencer *);
// bool game_engine_build_player_spawn_influencer(struct s_player_spawn_influence const *, struct real_matrix4x3const *, struct s_dynamic_spawn_influencer *);
// bool game_engine_build_weapon_spawn_influencer(long, struct s_dynamic_spawn_influencer *);
// bool game_engine_build_vehicle_spawn_influencer(long, struct s_dynamic_spawn_influencer *);
// bool game_engine_build_projectile_spawn_influencer(long, struct s_dynamic_spawn_influencer *);
// bool game_engine_build_equipment_spawn_influencer(long, struct s_dynamic_spawn_influencer *);
// bool game_engine_spawn_influencer_type_is_active(struct s_dynamic_spawn_influencer const *);
// float game_engine_spawn_influencer_get_minimum_weight_cap(struct s_dynamic_spawn_influencer const *, float);
// float game_engine_spawn_influencer_get_maximum_weight_cap(struct s_dynamic_spawn_influencer const *, float);
// float game_engine_spawn_influencer_get_nominal_weight(struct s_dynamic_spawn_influencer const *, float);
// void game_engine_spawn_influencers_add_enemy_forbid_influence(long, struct player_datum const *, struct s_dynamic_spawn_influencer_collection *);
// void game_engine_spawn_influencers_add_enemy_bias_influence(long, struct player_datum const *, struct s_dynamic_spawn_influencer_collection *);
// void game_engine_spawn_influencers_add_ally_bias(long, struct player_datum const *, struct s_dynamic_spawn_influencer_collection *);
// bool game_engine_spawn_influencers_should_add_ally_bias(long, long);
// void game_engine_spawn_influencers_add_dead_teammate_influence(long, struct player_datum const *, struct s_dynamic_spawn_influencer_collection *);
// void game_engine_spawn_influencers_add_user_placed_influence(long, struct s_dynamic_spawn_influencer_collection *);
// void game_engine_spawn_influencers_add_weapon_influence(long, struct player_datum const *, struct s_dynamic_spawn_influencer_collection *);
// void game_engine_spawn_influencers_add_vehicle_influence(struct player_datum const *, struct s_dynamic_spawn_influencer_collection *);
// void game_engine_spawn_influence_add_projectile_influence(struct player_datum const *, struct s_dynamic_spawn_influencer_collection *);
// void game_engine_spawn_influence_add_equipment_influence(struct player_datum const *, struct s_dynamic_spawn_influencer_collection *);
// void game_engine_spawn_influence_add_netgame_goal_object_influence(long, struct player_datum const *, struct s_dynamic_spawn_influencer_collection *);
// struct s_multiplayer_constants const * game_engine_multiplayer_constants_try_and_get(void);
// struct s_player_spawn_influence const * game_engine_enemy_forbid_influence_try_and_get(void);
// struct s_player_spawn_influence const * game_engine_enemy_bias_influence_try_and_get(void);
// struct s_player_spawn_influence const * game_engine_ally_bias_influence_try_and_get(long);
// struct s_player_spawn_influence const * game_engine_selected_ally_bias_influence_try_and_get(void);
// struct s_player_spawn_influence const * game_engine_dead_teammate_influence_get(float *);
// struct s_weapon_spawn_influence const * game_engine_weapon_spawn_influence_try_and_get(long);
// struct s_vehicle_spawn_influence const * game_engine_vehicle_spawn_influence_try_and_get(long, union vector3d *, float *);
// struct s_projectile_spawn_influence const * game_engine_projectile_spawn_influence_try_and_get(long, union vector3d *);
// struct s_equipment_spawn_influence const * game_engine_equipment_spawn_influence_try_and_get(long);
// long game_engine_get_object_owner_biped_index(long);
// void game_engine_spawn_influencers_update_tracked_player(void);
// public: void s_dynamic_spawn_influencer_collection::set(struct s_dynamic_spawn_influencer_collection const *);
// void game_engine_spawn_influencer_render_debug(struct s_dynamic_spawn_influencer const *);
// void game_engine_spawn_influencer_collection_render_debug(struct s_dynamic_spawn_influencer_collection const *);
// union argb_color const * game_engine_spawn_influencer_get_debug_color(float);
// void game_engine_spawn_point_weights_render_debug(struct s_dynamic_spawn_influencer_collection const *);
// void game_engine_spawn_influencer_get_debug_color_relative(float, float, float, union argb_color *);
// bool game_engine_get_spawn_weight_from_object(long, enum e_multiplayer_team, long, struct s_dynamic_spawn_influencer_collection const *, float *);
// void game_engine_spawn_influencers_tracked_player_render_debug(void);
// public: c_enum<enum e_dynamic_spawn_influencer_shape, unsigned char, 0, 5, struct s_default_enum_string_resolver>::c_enum<enum e_dynamic_spawn_influencer_shape, unsigned char, 0, 5, struct s_default_enum_string_resolver>(enum e_dynamic_spawn_influencer_shape);
// public: enum e_dynamic_spawn_influencer_shape c_enum_no_init<enum e_dynamic_spawn_influencer_shape, unsigned char, 0, 5, struct s_default_enum_string_resolver>::operator enum e_dynamic_spawn_influencer_shape(void) const;
// public: c_enum<enum e_dynamic_spawn_influencer_type, unsigned char, 0, 14, struct s_default_enum_string_resolver>::c_enum<enum e_dynamic_spawn_influencer_type, unsigned char, 0, 14, struct s_default_enum_string_resolver>(enum e_dynamic_spawn_influencer_type);
// public: enum e_dynamic_spawn_influencer_type c_enum_no_init<enum e_dynamic_spawn_influencer_type, unsigned char, 0, 14, struct s_default_enum_string_resolver>::operator enum e_dynamic_spawn_influencer_type(void) const;
// public: static long s_static_array<struct s_dead_player_info, 64>::get_count(void);
// public: void c_object_iterator<struct equipment_datum>::begin(unsigned long, unsigned char);
// public: bool c_object_iterator<struct equipment_datum>::next(void);
// public: void c_flags_no_init<enum e_spawn_influencer_debug_flags, unsigned long, 13, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_spawn_influencer_debug_flags, unsigned long, 13, struct s_default_enum_string_resolver>::test(enum e_spawn_influencer_debug_flags) const;
// public: void c_flags_no_init<enum e_spawn_influencer_debug_flags, unsigned long, 13, struct s_default_enum_string_resolver>::set(enum e_spawn_influencer_debug_flags, bool);
// public: struct s_dead_player_info & s_static_array<struct s_dead_player_info, 64>::operator[]<long>(long);
// public: struct s_dead_player_info & s_static_array<struct s_dead_player_info, 64>::operator[]<int>(int);
// public: static bool c_flags_no_init<enum e_spawn_influencer_debug_flags, unsigned long, 13, struct s_default_enum_string_resolver>::valid_bit(enum e_spawn_influencer_debug_flags);
// private: static unsigned long c_flags_no_init<enum e_spawn_influencer_debug_flags, unsigned long, 13, struct s_default_enum_string_resolver>::flag_size_type(enum e_spawn_influencer_debug_flags);
// public: static bool s_static_array<struct s_dead_player_info, 64>::valid<long>(long);
// public: static bool s_static_array<struct s_dead_player_info, 64>::valid<int>(int);
// public: s_spawn_influencer_globals::s_spawn_influencer_globals(void);
// public: c_flags<enum e_spawn_influencer_debug_flags, unsigned long, 13, struct s_default_enum_string_resolver>::c_flags<enum e_spawn_influencer_debug_flags, unsigned long, 13, struct s_default_enum_string_resolver>(void);
// public: bool c_flags_no_init<enum e_spawn_influencer_debug_flags, unsigned long, 13, struct s_default_enum_string_resolver>::is_clear(void) const;
// private: static unsigned long c_flags_no_init<enum e_spawn_influencer_debug_flags, unsigned long, 13, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned long c_flags_no_init<enum e_spawn_influencer_debug_flags, unsigned long, 13, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_spawn_influencer_debug_flags);

//void game_engine_spawn_influencers_initialize(void)
//{
//    mangled_ppc("?game_engine_spawn_influencers_initialize@@YAXXZ");
//};

//void game_engine_spawn_influencers_dispose(void)
//{
//    mangled_ppc("?game_engine_spawn_influencers_dispose@@YAXXZ");
//};

//void game_engine_spawn_influencers_initialize_for_new_map(void)
//{
//    mangled_ppc("?game_engine_spawn_influencers_initialize_for_new_map@@YAXXZ");
//};

//void game_engine_spawn_influencers_dispose_from_old_map(void)
//{
//    mangled_ppc("?game_engine_spawn_influencers_dispose_from_old_map@@YAXXZ");
//};

//void game_engine_spawn_influencers_initialize_for_new_round(void)
//{
//    mangled_ppc("?game_engine_spawn_influencers_initialize_for_new_round@@YAXXZ");
//};

//void game_engine_spawn_influencers_update(void)
//{
//    mangled_ppc("?game_engine_spawn_influencers_update@@YAXXZ");
//};

//void game_engine_spawn_influencers_render(void)
//{
//    mangled_ppc("?game_engine_spawn_influencers_render@@YAXXZ");
//};

//void game_engine_spawn_influencers_build_collection_for_player(long, struct s_dynamic_spawn_influencer_collection *)
//{
//    mangled_ppc("?game_engine_spawn_influencers_build_collection_for_player@@YAXJPAUs_dynamic_spawn_influencer_collection@@@Z");
//};

//void game_engine_spawn_influencer_record_player_spawn(long)
//{
//    mangled_ppc("?game_engine_spawn_influencer_record_player_spawn@@YAXJ@Z");
//};

//void game_engine_spawn_influencer_record_player_death(long)
//{
//    mangled_ppc("?game_engine_spawn_influencer_record_player_death@@YAXJ@Z");
//};

//bool game_engine_spawn_influencer_test_point(union real_point3d const *, struct s_dynamic_spawn_influencer const *, float *)
//{
//    mangled_ppc("?game_engine_spawn_influencer_test_point@@YA_NPBTreal_point3d@@PBUs_dynamic_spawn_influencer@@PAM@Z");
//};

//float game_engine_calculate_cumulative_spawn_location_weight(union real_point3d const *, bool, bool, float, float, struct s_dynamic_spawn_influencer_collection const *)
//{
//    mangled_ppc("?game_engine_calculate_cumulative_spawn_location_weight@@YAMPBTreal_point3d@@_N1MMPBUs_dynamic_spawn_influencer_collection@@@Z");
//};

//bool game_engine_spawn_influencers_projectiles_near_point(union real_point3d const *, bool)
//{
//    mangled_ppc("?game_engine_spawn_influencers_projectiles_near_point@@YA_NPBTreal_point3d@@_N@Z");
//};

//void game_engine_debug_spawn_influencers(bool)
//{
//    mangled_ppc("?game_engine_debug_spawn_influencers@@YAX_N@Z");
//};

//void game_engine_debug_respawn_zone_influencers(bool)
//{
//    mangled_ppc("?game_engine_debug_respawn_zone_influencers@@YAX_N@Z");
//};

//void game_engine_debug_spawn_influencers_proximity_forbid(bool)
//{
//    mangled_ppc("?game_engine_debug_spawn_influencers_proximity_forbid@@YAX_N@Z");
//};

//void game_engine_debug_spawn_influencers_vehicles(bool)
//{
//    mangled_ppc("?game_engine_debug_spawn_influencers_vehicles@@YAX_N@Z");
//};

//void game_engine_debug_spawn_influencers_weapons(bool)
//{
//    mangled_ppc("?game_engine_debug_spawn_influencers_weapons@@YAX_N@Z");
//};

//void game_engine_debug_spawn_influencers_projectiles(bool)
//{
//    mangled_ppc("?game_engine_debug_spawn_influencers_projectiles@@YAX_N@Z");
//};

//void game_engine_debug_spawn_influencers_equipment(bool)
//{
//    mangled_ppc("?game_engine_debug_spawn_influencers_equipment@@YAX_N@Z");
//};

//void game_engine_debug_spawn_influencers_enemies(bool)
//{
//    mangled_ppc("?game_engine_debug_spawn_influencers_enemies@@YAX_N@Z");
//};

//void game_engine_debug_spawn_influencers_teammates(bool)
//{
//    mangled_ppc("?game_engine_debug_spawn_influencers_teammates@@YAX_N@Z");
//};

//void game_engine_debug_spawn_influencers_dead_teammates(bool)
//{
//    mangled_ppc("?game_engine_debug_spawn_influencers_dead_teammates@@YAX_N@Z");
//};

//void game_engine_debug_spawn_influencers_random_weight_component(bool)
//{
//    mangled_ppc("?game_engine_debug_spawn_influencers_random_weight_component@@YAX_N@Z");
//};

//void game_engine_debug_spawn_influencers_nominal_weight(bool)
//{
//    mangled_ppc("?game_engine_debug_spawn_influencers_nominal_weight@@YAX_N@Z");
//};

//void game_engine_debug_spawn_influencers_natural_weight(bool)
//{
//    mangled_ppc("?game_engine_debug_spawn_influencers_natural_weight@@YAX_N@Z");
//};

//void game_engine_debug_spawn_influencers_set_target_player(char const *)
//{
//    mangled_ppc("?game_engine_debug_spawn_influencers_set_target_player@@YAXPBD@Z");
//};

//void game_engine_debug_spawn_influencers_rotate_target(void)
//{
//    mangled_ppc("?game_engine_debug_spawn_influencers_rotate_target@@YAXXZ");
//};

//void game_engine_debug_spawn_influencers_use_historic_spawn_state(long)
//{
//    mangled_ppc("?game_engine_debug_spawn_influencers_use_historic_spawn_state@@YAXJ@Z");
//};

//bool game_engine_spawn_influencer_build(enum e_dynamic_spawn_influencer_type, long, struct s_dynamic_spawn_influencer *, float *)
//{
//    mangled_ppc("?game_engine_spawn_influencer_build@@YA_NW4e_dynamic_spawn_influencer_type@@JPAUs_dynamic_spawn_influencer@@PAM@Z");
//};

//bool game_engine_build_respawn_zone_influencer(long, struct s_dynamic_spawn_influencer *)
//{
//    mangled_ppc("?game_engine_build_respawn_zone_influencer@@YA_NJPAUs_dynamic_spawn_influencer@@@Z");
//};

//bool game_engine_build_player_spawn_influencer(struct s_player_spawn_influence const *, struct real_matrix4x3const *, struct s_dynamic_spawn_influencer *)
//{
//    mangled_ppc("?game_engine_build_player_spawn_influencer@@YA_NPBUs_player_spawn_influence@@PBUreal_matrix4x3@@PAUs_dynamic_spawn_influencer@@@Z");
//};

//bool game_engine_build_weapon_spawn_influencer(long, struct s_dynamic_spawn_influencer *)
//{
//    mangled_ppc("?game_engine_build_weapon_spawn_influencer@@YA_NJPAUs_dynamic_spawn_influencer@@@Z");
//};

//bool game_engine_build_vehicle_spawn_influencer(long, struct s_dynamic_spawn_influencer *)
//{
//    mangled_ppc("?game_engine_build_vehicle_spawn_influencer@@YA_NJPAUs_dynamic_spawn_influencer@@@Z");
//};

//bool game_engine_build_projectile_spawn_influencer(long, struct s_dynamic_spawn_influencer *)
//{
//    mangled_ppc("?game_engine_build_projectile_spawn_influencer@@YA_NJPAUs_dynamic_spawn_influencer@@@Z");
//};

//bool game_engine_build_equipment_spawn_influencer(long, struct s_dynamic_spawn_influencer *)
//{
//    mangled_ppc("?game_engine_build_equipment_spawn_influencer@@YA_NJPAUs_dynamic_spawn_influencer@@@Z");
//};

//bool game_engine_spawn_influencer_type_is_active(struct s_dynamic_spawn_influencer const *)
//{
//    mangled_ppc("?game_engine_spawn_influencer_type_is_active@@YA_NPBUs_dynamic_spawn_influencer@@@Z");
//};

//float game_engine_spawn_influencer_get_minimum_weight_cap(struct s_dynamic_spawn_influencer const *, float)
//{
//    mangled_ppc("?game_engine_spawn_influencer_get_minimum_weight_cap@@YAMPBUs_dynamic_spawn_influencer@@M@Z");
//};

//float game_engine_spawn_influencer_get_maximum_weight_cap(struct s_dynamic_spawn_influencer const *, float)
//{
//    mangled_ppc("?game_engine_spawn_influencer_get_maximum_weight_cap@@YAMPBUs_dynamic_spawn_influencer@@M@Z");
//};

//float game_engine_spawn_influencer_get_nominal_weight(struct s_dynamic_spawn_influencer const *, float)
//{
//    mangled_ppc("?game_engine_spawn_influencer_get_nominal_weight@@YAMPBUs_dynamic_spawn_influencer@@M@Z");
//};

//void game_engine_spawn_influencers_add_enemy_forbid_influence(long, struct player_datum const *, struct s_dynamic_spawn_influencer_collection *)
//{
//    mangled_ppc("?game_engine_spawn_influencers_add_enemy_forbid_influence@@YAXJPBUplayer_datum@@PAUs_dynamic_spawn_influencer_collection@@@Z");
//};

//void game_engine_spawn_influencers_add_enemy_bias_influence(long, struct player_datum const *, struct s_dynamic_spawn_influencer_collection *)
//{
//    mangled_ppc("?game_engine_spawn_influencers_add_enemy_bias_influence@@YAXJPBUplayer_datum@@PAUs_dynamic_spawn_influencer_collection@@@Z");
//};

//void game_engine_spawn_influencers_add_ally_bias(long, struct player_datum const *, struct s_dynamic_spawn_influencer_collection *)
//{
//    mangled_ppc("?game_engine_spawn_influencers_add_ally_bias@@YAXJPBUplayer_datum@@PAUs_dynamic_spawn_influencer_collection@@@Z");
//};

//bool game_engine_spawn_influencers_should_add_ally_bias(long, long)
//{
//    mangled_ppc("?game_engine_spawn_influencers_should_add_ally_bias@@YA_NJJ@Z");
//};

//void game_engine_spawn_influencers_add_dead_teammate_influence(long, struct player_datum const *, struct s_dynamic_spawn_influencer_collection *)
//{
//    mangled_ppc("?game_engine_spawn_influencers_add_dead_teammate_influence@@YAXJPBUplayer_datum@@PAUs_dynamic_spawn_influencer_collection@@@Z");
//};

//void game_engine_spawn_influencers_add_user_placed_influence(long, struct s_dynamic_spawn_influencer_collection *)
//{
//    mangled_ppc("?game_engine_spawn_influencers_add_user_placed_influence@@YAXJPAUs_dynamic_spawn_influencer_collection@@@Z");
//};

//void game_engine_spawn_influencers_add_weapon_influence(long, struct player_datum const *, struct s_dynamic_spawn_influencer_collection *)
//{
//    mangled_ppc("?game_engine_spawn_influencers_add_weapon_influence@@YAXJPBUplayer_datum@@PAUs_dynamic_spawn_influencer_collection@@@Z");
//};

//void game_engine_spawn_influencers_add_vehicle_influence(struct player_datum const *, struct s_dynamic_spawn_influencer_collection *)
//{
//    mangled_ppc("?game_engine_spawn_influencers_add_vehicle_influence@@YAXPBUplayer_datum@@PAUs_dynamic_spawn_influencer_collection@@@Z");
//};

//void game_engine_spawn_influence_add_projectile_influence(struct player_datum const *, struct s_dynamic_spawn_influencer_collection *)
//{
//    mangled_ppc("?game_engine_spawn_influence_add_projectile_influence@@YAXPBUplayer_datum@@PAUs_dynamic_spawn_influencer_collection@@@Z");
//};

//void game_engine_spawn_influence_add_equipment_influence(struct player_datum const *, struct s_dynamic_spawn_influencer_collection *)
//{
//    mangled_ppc("?game_engine_spawn_influence_add_equipment_influence@@YAXPBUplayer_datum@@PAUs_dynamic_spawn_influencer_collection@@@Z");
//};

//void game_engine_spawn_influence_add_netgame_goal_object_influence(long, struct player_datum const *, struct s_dynamic_spawn_influencer_collection *)
//{
//    mangled_ppc("?game_engine_spawn_influence_add_netgame_goal_object_influence@@YAXJPBUplayer_datum@@PAUs_dynamic_spawn_influencer_collection@@@Z");
//};

//struct s_multiplayer_constants const * game_engine_multiplayer_constants_try_and_get(void)
//{
//    mangled_ppc("?game_engine_multiplayer_constants_try_and_get@@YAPBUs_multiplayer_constants@@XZ");
//};

//struct s_player_spawn_influence const * game_engine_enemy_forbid_influence_try_and_get(void)
//{
//    mangled_ppc("?game_engine_enemy_forbid_influence_try_and_get@@YAPBUs_player_spawn_influence@@XZ");
//};

//struct s_player_spawn_influence const * game_engine_enemy_bias_influence_try_and_get(void)
//{
//    mangled_ppc("?game_engine_enemy_bias_influence_try_and_get@@YAPBUs_player_spawn_influence@@XZ");
//};

//struct s_player_spawn_influence const * game_engine_ally_bias_influence_try_and_get(long)
//{
//    mangled_ppc("?game_engine_ally_bias_influence_try_and_get@@YAPBUs_player_spawn_influence@@J@Z");
//};

//struct s_player_spawn_influence const * game_engine_selected_ally_bias_influence_try_and_get(void)
//{
//    mangled_ppc("?game_engine_selected_ally_bias_influence_try_and_get@@YAPBUs_player_spawn_influence@@XZ");
//};

//struct s_player_spawn_influence const * game_engine_dead_teammate_influence_get(float *)
//{
//    mangled_ppc("?game_engine_dead_teammate_influence_get@@YAPBUs_player_spawn_influence@@PAM@Z");
//};

//struct s_weapon_spawn_influence const * game_engine_weapon_spawn_influence_try_and_get(long)
//{
//    mangled_ppc("?game_engine_weapon_spawn_influence_try_and_get@@YAPBUs_weapon_spawn_influence@@J@Z");
//};

//struct s_vehicle_spawn_influence const * game_engine_vehicle_spawn_influence_try_and_get(long, union vector3d *, float *)
//{
//    mangled_ppc("?game_engine_vehicle_spawn_influence_try_and_get@@YAPBUs_vehicle_spawn_influence@@JPATvector3d@@PAM@Z");
//};

//struct s_projectile_spawn_influence const * game_engine_projectile_spawn_influence_try_and_get(long, union vector3d *)
//{
//    mangled_ppc("?game_engine_projectile_spawn_influence_try_and_get@@YAPBUs_projectile_spawn_influence@@JPATvector3d@@@Z");
//};

//struct s_equipment_spawn_influence const * game_engine_equipment_spawn_influence_try_and_get(long)
//{
//    mangled_ppc("?game_engine_equipment_spawn_influence_try_and_get@@YAPBUs_equipment_spawn_influence@@J@Z");
//};

//long game_engine_get_object_owner_biped_index(long)
//{
//    mangled_ppc("?game_engine_get_object_owner_biped_index@@YAJJ@Z");
//};

//void game_engine_spawn_influencers_update_tracked_player(void)
//{
//    mangled_ppc("?game_engine_spawn_influencers_update_tracked_player@@YAXXZ");
//};

//public: void s_dynamic_spawn_influencer_collection::set(struct s_dynamic_spawn_influencer_collection const *)
//{
//    mangled_ppc("?set@s_dynamic_spawn_influencer_collection@@QAAXPBU1@@Z");
//};

//void game_engine_spawn_influencer_render_debug(struct s_dynamic_spawn_influencer const *)
//{
//    mangled_ppc("?game_engine_spawn_influencer_render_debug@@YAXPBUs_dynamic_spawn_influencer@@@Z");
//};

//void game_engine_spawn_influencer_collection_render_debug(struct s_dynamic_spawn_influencer_collection const *)
//{
//    mangled_ppc("?game_engine_spawn_influencer_collection_render_debug@@YAXPBUs_dynamic_spawn_influencer_collection@@@Z");
//};

//union argb_color const * game_engine_spawn_influencer_get_debug_color(float)
//{
//    mangled_ppc("?game_engine_spawn_influencer_get_debug_color@@YAPBTargb_color@@M@Z");
//};

//void game_engine_spawn_point_weights_render_debug(struct s_dynamic_spawn_influencer_collection const *)
//{
//    mangled_ppc("?game_engine_spawn_point_weights_render_debug@@YAXPBUs_dynamic_spawn_influencer_collection@@@Z");
//};

//void game_engine_spawn_influencer_get_debug_color_relative(float, float, float, union argb_color *)
//{
//    mangled_ppc("?game_engine_spawn_influencer_get_debug_color_relative@@YAXMMMPATargb_color@@@Z");
//};

//bool game_engine_get_spawn_weight_from_object(long, enum e_multiplayer_team, long, struct s_dynamic_spawn_influencer_collection const *, float *)
//{
//    mangled_ppc("?game_engine_get_spawn_weight_from_object@@YA_NJW4e_multiplayer_team@@JPBUs_dynamic_spawn_influencer_collection@@PAM@Z");
//};

//void game_engine_spawn_influencers_tracked_player_render_debug(void)
//{
//    mangled_ppc("?game_engine_spawn_influencers_tracked_player_render_debug@@YAXXZ");
//};

//public: c_enum<enum e_dynamic_spawn_influencer_shape, unsigned char, 0, 5, struct s_default_enum_string_resolver>::c_enum<enum e_dynamic_spawn_influencer_shape, unsigned char, 0, 5, struct s_default_enum_string_resolver>(enum e_dynamic_spawn_influencer_shape)
//{
//    mangled_ppc("??0?$c_enum@W4e_dynamic_spawn_influencer_shape@@E$0A@$04Us_default_enum_string_resolver@@@@QAA@W4e_dynamic_spawn_influencer_shape@@@Z");
//};

//public: enum e_dynamic_spawn_influencer_shape c_enum_no_init<enum e_dynamic_spawn_influencer_shape, unsigned char, 0, 5, struct s_default_enum_string_resolver>::operator enum e_dynamic_spawn_influencer_shape(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_dynamic_spawn_influencer_shape@@E$0A@$04Us_default_enum_string_resolver@@@@QBA?AW4e_dynamic_spawn_influencer_shape@@XZ");
//};

//public: c_enum<enum e_dynamic_spawn_influencer_type, unsigned char, 0, 14, struct s_default_enum_string_resolver>::c_enum<enum e_dynamic_spawn_influencer_type, unsigned char, 0, 14, struct s_default_enum_string_resolver>(enum e_dynamic_spawn_influencer_type)
//{
//    mangled_ppc("??0?$c_enum@W4e_dynamic_spawn_influencer_type@@E$0A@$0O@Us_default_enum_string_resolver@@@@QAA@W4e_dynamic_spawn_influencer_type@@@Z");
//};

//public: enum e_dynamic_spawn_influencer_type c_enum_no_init<enum e_dynamic_spawn_influencer_type, unsigned char, 0, 14, struct s_default_enum_string_resolver>::operator enum e_dynamic_spawn_influencer_type(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_dynamic_spawn_influencer_type@@E$0A@$0O@Us_default_enum_string_resolver@@@@QBA?AW4e_dynamic_spawn_influencer_type@@XZ");
//};

//public: static long s_static_array<struct s_dead_player_info, 64>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Us_dead_player_info@@$0EA@@@SAJXZ");
//};

//public: void c_object_iterator<struct equipment_datum>::begin(unsigned long, unsigned char)
//{
//    mangled_ppc("?begin@?$c_object_iterator@Uequipment_datum@@@@QAAXKE@Z");
//};

//public: bool c_object_iterator<struct equipment_datum>::next(void)
//{
//    mangled_ppc("?next@?$c_object_iterator@Uequipment_datum@@@@QAA_NXZ");
//};

//public: void c_flags_no_init<enum e_spawn_influencer_debug_flags, unsigned long, 13, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_spawn_influencer_debug_flags@@K$0N@Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_spawn_influencer_debug_flags, unsigned long, 13, struct s_default_enum_string_resolver>::test(enum e_spawn_influencer_debug_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_spawn_influencer_debug_flags@@K$0N@Us_default_enum_string_resolver@@@@QBA_NW4e_spawn_influencer_debug_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_spawn_influencer_debug_flags, unsigned long, 13, struct s_default_enum_string_resolver>::set(enum e_spawn_influencer_debug_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_spawn_influencer_debug_flags@@K$0N@Us_default_enum_string_resolver@@@@QAAXW4e_spawn_influencer_debug_flags@@_N@Z");
//};

//public: struct s_dead_player_info & s_static_array<struct s_dead_player_info, 64>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_dead_player_info@@$0EA@@@QAAAAUs_dead_player_info@@J@Z");
//};

//public: struct s_dead_player_info & s_static_array<struct s_dead_player_info, 64>::operator[]<int>(int)
//{
//    mangled_ppc("??$?AH@?$s_static_array@Us_dead_player_info@@$0EA@@@QAAAAUs_dead_player_info@@H@Z");
//};

//public: static bool c_flags_no_init<enum e_spawn_influencer_debug_flags, unsigned long, 13, struct s_default_enum_string_resolver>::valid_bit(enum e_spawn_influencer_debug_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_spawn_influencer_debug_flags@@K$0N@Us_default_enum_string_resolver@@@@SA_NW4e_spawn_influencer_debug_flags@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_spawn_influencer_debug_flags, unsigned long, 13, struct s_default_enum_string_resolver>::flag_size_type(enum e_spawn_influencer_debug_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_spawn_influencer_debug_flags@@K$0N@Us_default_enum_string_resolver@@@@CAKW4e_spawn_influencer_debug_flags@@@Z");
//};

//public: static bool s_static_array<struct s_dead_player_info, 64>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_dead_player_info@@$0EA@@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_dead_player_info, 64>::valid<int>(int)
//{
//    mangled_ppc("??$valid@H@?$s_static_array@Us_dead_player_info@@$0EA@@@SA_NH@Z");
//};

//public: s_spawn_influencer_globals::s_spawn_influencer_globals(void)
//{
//    mangled_ppc("??0s_spawn_influencer_globals@@QAA@XZ");
//};

//public: c_flags<enum e_spawn_influencer_debug_flags, unsigned long, 13, struct s_default_enum_string_resolver>::c_flags<enum e_spawn_influencer_debug_flags, unsigned long, 13, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_spawn_influencer_debug_flags@@K$0N@Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: bool c_flags_no_init<enum e_spawn_influencer_debug_flags, unsigned long, 13, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_spawn_influencer_debug_flags@@K$0N@Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//private: static unsigned long c_flags_no_init<enum e_spawn_influencer_debug_flags, unsigned long, 13, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_spawn_influencer_debug_flags@@K$0N@Us_default_enum_string_resolver@@@@CAKXZ");
//};

//private: static unsigned long c_flags_no_init<enum e_spawn_influencer_debug_flags, unsigned long, 13, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_spawn_influencer_debug_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_spawn_influencer_debug_flags@@K$0N@Us_default_enum_string_resolver@@@@CAKW4e_spawn_influencer_debug_flags@@@Z");
//};

