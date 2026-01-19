/* ---------- headers */

#include "omaha\hs\hs_library_external.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// void hs_evaluate(short);
// bool hs_not(bool);
// float hs_pin(float, float, float);
// void hs_print(char const *);
// void hs_log_print(char const *);
// void hs_enable_debug_scripting(bool);
// void hs_enable_debug_globals(bool);
// void hs_debug_variable(char const *, bool);
// void hs_debug_variable_all(bool);
// long hs_players(void);
// long hs_local_players(void);
// long hs_players_human(void);
// long hs_players_by_type(enum e_player_character_type);
// long hs_players_elite(void);
// long hs_player_get(long);
// long hs_player_in_game_get(long);
// long hs_players_in_game_get_by_type(enum e_player_character_type, long);
// long hs_human_player_in_game_get(long);
// long hs_elite_player_in_game_get(long);
// void hs_teleport_players_not_in_trigger_volume(short, short);
// bool hs_trigger_volume_test_objects_all(short, long);
// bool hs_trigger_volume_test_objects_any(short, long);
// bool hs_trigger_volume_test_objects(short, long, bool);
// bool hs_unit_can_see_object(long, long, float);
// float hs_object_buckling_magnitude_get(long);
// bool hs_objects_can_see_object(long, long, float);
// bool hs_unit_can_see_flag(long, short, float);
// bool hs_objects_can_see_flag(long, short, float);
// float hs_objects_distance_to_object(long, long);
// float hs_objects_distance_to_flag(long, short);
// float hs_objects_distance_to_point(long, long);
// void hs_object_create(short);
// void hs_object_new_by_name_internal(short, bool, long);
// void hs_object_create_variant(short, long);
// void hs_object_create_clone(short);
// void hs_object_create_anew(short);
// void hs_object_create_if_necessary(short);
// void hs_object_create_folder(long);
// void hs_object_create_folder_internal(long, struct s_tag_block const *, struct s_tag_block *, long);
// void hs_object_create_folder_anew(long);
// void hs_object_destroy(long);
// void hs_object_delete_internal(long);
// void hs_object_destroy_by_name(short);
// void hs_object_destroy_all(void);
// void hs_object_destroy_all_type_mask(long);
// void hs_object_destroy_folder(long);
// void hs_object_destroy_folder_internal(long, struct s_tag_block const *, struct s_tag_block *, long);
// void hs_object_hide(long, bool);
// void hs_object_set_shadowless(long, bool);
// void hs_object_teleport(long, short);
// void hs_object_orient(long, union real_point3d const *, union vector3d const *, union vector3d const *, bool, bool);
// void hs_object_set_facing(long, short);
// void hs_object_teleport_ai(long, long);
// long hs_object_list_get_element(long, short);
// void hs_object_set_shield_stun_infinite(long);
// void hs_object_set_shield_stun(long, float);
// void hs_object_set_shield_normalized(long, float);
// void hs_object_set_permutation(long, long, long);
// void hs_object_set_variant(long, long);
// void hs_object_set_region_state(long, long, long);
// void hs_object_set_model_state_property(long, long, bool);
// void hs_objects_predict(long, bool);
// void hs_objects_predict_old(long);
// void hs_objects_predict_high(long);
// void hs_objects_predict_low(long);
// void hs_position_predict(float, float, float);
// void hs_shader_predict(long);
// void hs_bitmap_predict(long);
// void * texture_cache_bitmap_precache(struct bitmap_data const *, float);
// void hs_objects_delete_by_definition(long);
// void hs_effect_new(long, short);
// void hs_effect_new_at_ai_point(long, long);
// void hs_effect_new_at_ai_point_internal(long, long, float, float);
// void hs_effect_new_random2(long, long, float, float);
// void hs_effect_new_random(long, long);
// void hs_effect_new_at_point_set_point(long, long, long);
// void hs_effect_new_from_object_marker_internal(long, long, long, bool);
// void hs_effect_new_from_object_marker(long, long, long);
// void hs_effect_new_from_object_marker_loop(long, long, long);
// void hs_effect_stop_from_object_marker(long, long, long);
// void hs_effect_new_on_ground(long, long);
// void hs_damage_new(long, short);
// void hs_damage_object_effect_list(long, long);
// void hs_damage_object_effect(long, long);
// void hs_damage_object_list(long, long, float);
// void hs_damage_object(long, long, float);
// void hs_damage_players(long);
// void hs_map_info(void);
// void hs_find_matching_commands(char const *);
// long hs_user_interface_controller_get_last_level_played(short);
// void hs_tag_load_force_programmer_only(char const *);
// void hs_tag_unload_force_programmer_only(char const *);

//void hs_evaluate(short)
//{
//    mangled_ppc("?hs_evaluate@@YAXF@Z");
//};

//bool hs_not(bool)
//{
//    mangled_ppc("?hs_not@@YA_N_N@Z");
//};

//float hs_pin(float, float, float)
//{
//    mangled_ppc("?hs_pin@@YAMMMM@Z");
//};

//void hs_print(char const *)
//{
//    mangled_ppc("?hs_print@@YAXPBD@Z");
//};

//void hs_log_print(char const *)
//{
//    mangled_ppc("?hs_log_print@@YAXPBD@Z");
//};

//void hs_enable_debug_scripting(bool)
//{
//    mangled_ppc("?hs_enable_debug_scripting@@YAX_N@Z");
//};

//void hs_enable_debug_globals(bool)
//{
//    mangled_ppc("?hs_enable_debug_globals@@YAX_N@Z");
//};

//void hs_debug_variable(char const *, bool)
//{
//    mangled_ppc("?hs_debug_variable@@YAXPBD_N@Z");
//};

//void hs_debug_variable_all(bool)
//{
//    mangled_ppc("?hs_debug_variable_all@@YAX_N@Z");
//};

//long hs_players(void)
//{
//    mangled_ppc("?hs_players@@YAJXZ");
//};

//long hs_local_players(void)
//{
//    mangled_ppc("?hs_local_players@@YAJXZ");
//};

//long hs_players_human(void)
//{
//    mangled_ppc("?hs_players_human@@YAJXZ");
//};

//long hs_players_by_type(enum e_player_character_type)
//{
//    mangled_ppc("?hs_players_by_type@@YAJW4e_player_character_type@@@Z");
//};

//long hs_players_elite(void)
//{
//    mangled_ppc("?hs_players_elite@@YAJXZ");
//};

//long hs_player_get(long)
//{
//    mangled_ppc("?hs_player_get@@YAJJ@Z");
//};

//long hs_player_in_game_get(long)
//{
//    mangled_ppc("?hs_player_in_game_get@@YAJJ@Z");
//};

//long hs_players_in_game_get_by_type(enum e_player_character_type, long)
//{
//    mangled_ppc("?hs_players_in_game_get_by_type@@YAJW4e_player_character_type@@J@Z");
//};

//long hs_human_player_in_game_get(long)
//{
//    mangled_ppc("?hs_human_player_in_game_get@@YAJJ@Z");
//};

//long hs_elite_player_in_game_get(long)
//{
//    mangled_ppc("?hs_elite_player_in_game_get@@YAJJ@Z");
//};

//void hs_teleport_players_not_in_trigger_volume(short, short)
//{
//    mangled_ppc("?hs_teleport_players_not_in_trigger_volume@@YAXFF@Z");
//};

//bool hs_trigger_volume_test_objects_all(short, long)
//{
//    mangled_ppc("?hs_trigger_volume_test_objects_all@@YA_NFJ@Z");
//};

//bool hs_trigger_volume_test_objects_any(short, long)
//{
//    mangled_ppc("?hs_trigger_volume_test_objects_any@@YA_NFJ@Z");
//};

//bool hs_trigger_volume_test_objects(short, long, bool)
//{
//    mangled_ppc("?hs_trigger_volume_test_objects@@YA_NFJ_N@Z");
//};

//bool hs_unit_can_see_object(long, long, float)
//{
//    mangled_ppc("?hs_unit_can_see_object@@YA_NJJM@Z");
//};

//float hs_object_buckling_magnitude_get(long)
//{
//    mangled_ppc("?hs_object_buckling_magnitude_get@@YAMJ@Z");
//};

//bool hs_objects_can_see_object(long, long, float)
//{
//    mangled_ppc("?hs_objects_can_see_object@@YA_NJJM@Z");
//};

//bool hs_unit_can_see_flag(long, short, float)
//{
//    mangled_ppc("?hs_unit_can_see_flag@@YA_NJFM@Z");
//};

//bool hs_objects_can_see_flag(long, short, float)
//{
//    mangled_ppc("?hs_objects_can_see_flag@@YA_NJFM@Z");
//};

//float hs_objects_distance_to_object(long, long)
//{
//    mangled_ppc("?hs_objects_distance_to_object@@YAMJJ@Z");
//};

//float hs_objects_distance_to_flag(long, short)
//{
//    mangled_ppc("?hs_objects_distance_to_flag@@YAMJF@Z");
//};

//float hs_objects_distance_to_point(long, long)
//{
//    mangled_ppc("?hs_objects_distance_to_point@@YAMJJ@Z");
//};

//void hs_object_create(short)
//{
//    mangled_ppc("?hs_object_create@@YAXF@Z");
//};

//void hs_object_new_by_name_internal(short, bool, long)
//{
//    mangled_ppc("?hs_object_new_by_name_internal@@YAXF_NJ@Z");
//};

//void hs_object_create_variant(short, long)
//{
//    mangled_ppc("?hs_object_create_variant@@YAXFJ@Z");
//};

//void hs_object_create_clone(short)
//{
//    mangled_ppc("?hs_object_create_clone@@YAXF@Z");
//};

//void hs_object_create_anew(short)
//{
//    mangled_ppc("?hs_object_create_anew@@YAXF@Z");
//};

//void hs_object_create_if_necessary(short)
//{
//    mangled_ppc("?hs_object_create_if_necessary@@YAXF@Z");
//};

//void hs_object_create_folder(long)
//{
//    mangled_ppc("?hs_object_create_folder@@YAXJ@Z");
//};

//void hs_object_create_folder_internal(long, struct s_tag_block const *, struct s_tag_block *, long)
//{
//    mangled_ppc("?hs_object_create_folder_internal@@YAXJPBUs_tag_block@@PAU1@J@Z");
//};

//void hs_object_create_folder_anew(long)
//{
//    mangled_ppc("?hs_object_create_folder_anew@@YAXJ@Z");
//};

//void hs_object_destroy(long)
//{
//    mangled_ppc("?hs_object_destroy@@YAXJ@Z");
//};

//void hs_object_delete_internal(long)
//{
//    mangled_ppc("?hs_object_delete_internal@@YAXJ@Z");
//};

//void hs_object_destroy_by_name(short)
//{
//    mangled_ppc("?hs_object_destroy_by_name@@YAXF@Z");
//};

//void hs_object_destroy_all(void)
//{
//    mangled_ppc("?hs_object_destroy_all@@YAXXZ");
//};

//void hs_object_destroy_all_type_mask(long)
//{
//    mangled_ppc("?hs_object_destroy_all_type_mask@@YAXJ@Z");
//};

//void hs_object_destroy_folder(long)
//{
//    mangled_ppc("?hs_object_destroy_folder@@YAXJ@Z");
//};

//void hs_object_destroy_folder_internal(long, struct s_tag_block const *, struct s_tag_block *, long)
//{
//    mangled_ppc("?hs_object_destroy_folder_internal@@YAXJPBUs_tag_block@@PAU1@J@Z");
//};

//void hs_object_hide(long, bool)
//{
//    mangled_ppc("?hs_object_hide@@YAXJ_N@Z");
//};

//void hs_object_set_shadowless(long, bool)
//{
//    mangled_ppc("?hs_object_set_shadowless@@YAXJ_N@Z");
//};

//void hs_object_teleport(long, short)
//{
//    mangled_ppc("?hs_object_teleport@@YAXJF@Z");
//};

//void hs_object_orient(long, union real_point3d const *, union vector3d const *, union vector3d const *, bool, bool)
//{
//    mangled_ppc("?hs_object_orient@@YAXJPBTreal_point3d@@PBTvector3d@@1_N2@Z");
//};

//void hs_object_set_facing(long, short)
//{
//    mangled_ppc("?hs_object_set_facing@@YAXJF@Z");
//};

//void hs_object_teleport_ai(long, long)
//{
//    mangled_ppc("?hs_object_teleport_ai@@YAXJJ@Z");
//};

//long hs_object_list_get_element(long, short)
//{
//    mangled_ppc("?hs_object_list_get_element@@YAJJF@Z");
//};

//void hs_object_set_shield_stun_infinite(long)
//{
//    mangled_ppc("?hs_object_set_shield_stun_infinite@@YAXJ@Z");
//};

//void hs_object_set_shield_stun(long, float)
//{
//    mangled_ppc("?hs_object_set_shield_stun@@YAXJM@Z");
//};

//void hs_object_set_shield_normalized(long, float)
//{
//    mangled_ppc("?hs_object_set_shield_normalized@@YAXJM@Z");
//};

//void hs_object_set_permutation(long, long, long)
//{
//    mangled_ppc("?hs_object_set_permutation@@YAXJJJ@Z");
//};

//void hs_object_set_variant(long, long)
//{
//    mangled_ppc("?hs_object_set_variant@@YAXJJ@Z");
//};

//void hs_object_set_region_state(long, long, long)
//{
//    mangled_ppc("?hs_object_set_region_state@@YAXJJJ@Z");
//};

//void hs_object_set_model_state_property(long, long, bool)
//{
//    mangled_ppc("?hs_object_set_model_state_property@@YAXJJ_N@Z");
//};

//void hs_objects_predict(long, bool)
//{
//    mangled_ppc("?hs_objects_predict@@YAXJ_N@Z");
//};

//void hs_objects_predict_old(long)
//{
//    mangled_ppc("?hs_objects_predict_old@@YAXJ@Z");
//};

//void hs_objects_predict_high(long)
//{
//    mangled_ppc("?hs_objects_predict_high@@YAXJ@Z");
//};

//void hs_objects_predict_low(long)
//{
//    mangled_ppc("?hs_objects_predict_low@@YAXJ@Z");
//};

//void hs_position_predict(float, float, float)
//{
//    mangled_ppc("?hs_position_predict@@YAXMMM@Z");
//};

//void hs_shader_predict(long)
//{
//    mangled_ppc("?hs_shader_predict@@YAXJ@Z");
//};

//void hs_bitmap_predict(long)
//{
//    mangled_ppc("?hs_bitmap_predict@@YAXJ@Z");
//};

//void * texture_cache_bitmap_precache(struct bitmap_data const *, float)
//{
//    mangled_ppc("?texture_cache_bitmap_precache@@YAPAXPBUbitmap_data@@M@Z");
//};

//void hs_objects_delete_by_definition(long)
//{
//    mangled_ppc("?hs_objects_delete_by_definition@@YAXJ@Z");
//};

//void hs_effect_new(long, short)
//{
//    mangled_ppc("?hs_effect_new@@YAXJF@Z");
//};

//void hs_effect_new_at_ai_point(long, long)
//{
//    mangled_ppc("?hs_effect_new_at_ai_point@@YAXJJ@Z");
//};

//void hs_effect_new_at_ai_point_internal(long, long, float, float)
//{
//    mangled_ppc("?hs_effect_new_at_ai_point_internal@@YAXJJMM@Z");
//};

//void hs_effect_new_random2(long, long, float, float)
//{
//    mangled_ppc("?hs_effect_new_random2@@YAXJJMM@Z");
//};

//void hs_effect_new_random(long, long)
//{
//    mangled_ppc("?hs_effect_new_random@@YAXJJ@Z");
//};

//void hs_effect_new_at_point_set_point(long, long, long)
//{
//    mangled_ppc("?hs_effect_new_at_point_set_point@@YAXJJJ@Z");
//};

//void hs_effect_new_from_object_marker_internal(long, long, long, bool)
//{
//    mangled_ppc("?hs_effect_new_from_object_marker_internal@@YAXJJJ_N@Z");
//};

//void hs_effect_new_from_object_marker(long, long, long)
//{
//    mangled_ppc("?hs_effect_new_from_object_marker@@YAXJJJ@Z");
//};

//void hs_effect_new_from_object_marker_loop(long, long, long)
//{
//    mangled_ppc("?hs_effect_new_from_object_marker_loop@@YAXJJJ@Z");
//};

//void hs_effect_stop_from_object_marker(long, long, long)
//{
//    mangled_ppc("?hs_effect_stop_from_object_marker@@YAXJJJ@Z");
//};

//void hs_effect_new_on_ground(long, long)
//{
//    mangled_ppc("?hs_effect_new_on_ground@@YAXJJ@Z");
//};

//void hs_damage_new(long, short)
//{
//    mangled_ppc("?hs_damage_new@@YAXJF@Z");
//};

//void hs_damage_object_effect_list(long, long)
//{
//    mangled_ppc("?hs_damage_object_effect_list@@YAXJJ@Z");
//};

//void hs_damage_object_effect(long, long)
//{
//    mangled_ppc("?hs_damage_object_effect@@YAXJJ@Z");
//};

//void hs_damage_object_list(long, long, float)
//{
//    mangled_ppc("?hs_damage_object_list@@YAXJJM@Z");
//};

//void hs_damage_object(long, long, float)
//{
//    mangled_ppc("?hs_damage_object@@YAXJJM@Z");
//};

//void hs_damage_players(long)
//{
//    mangled_ppc("?hs_damage_players@@YAXJ@Z");
//};

//void hs_map_info(void)
//{
//    mangled_ppc("?hs_map_info@@YAXXZ");
//};

//void hs_find_matching_commands(char const *)
//{
//    mangled_ppc("?hs_find_matching_commands@@YAXPBD@Z");
//};

//long hs_user_interface_controller_get_last_level_played(short)
//{
//    mangled_ppc("?hs_user_interface_controller_get_last_level_played@@YAJF@Z");
//};

//void hs_tag_load_force_programmer_only(char const *)
//{
//    mangled_ppc("?hs_tag_load_force_programmer_only@@YAXPBD@Z");
//};

//void hs_tag_unload_force_programmer_only(char const *)
//{
//    mangled_ppc("?hs_tag_unload_force_programmer_only@@YAXPBD@Z");
//};

