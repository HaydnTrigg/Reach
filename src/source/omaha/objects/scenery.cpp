/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// bool g_debug_objects_scenery; // "?g_debug_objects_scenery@@3_NA"

// void scenery_initialize_for_new_structure_bsp(long);
// short scenery_pathfinding_policy(long, struct s_scenario_scenery const *);
// short scenery_lightmapping_policy(long);
// void scenery_place(long, struct s_scenario_scenery *);
// bool scenery_new(long, struct s_object_placement_data *, bool *);
// void scenery_delete(long);
// bool scenery_update(long);
// void scenery_animation_finish(long);
// void scenery_move(long);
// void scenery_preprocess_root_node_matrix(long, struct real_matrix4x3*);
// void scenery_animation_start(long, class c_animation_id);
// void scenery_animation_start(long, long, long);
// void scenery_animation_start_relative(long, class c_animation_id, struct real_matrix4x3*);
// void scenery_animation_start_relative(long, long, long, long);
// void scenery_animation_start_loop(long, long, long);
// void scenery_animation_start_relative_loop(long, long, long, long);
// void scenery_animation_start_at_frame(long, long, long, short);
// void scenery_animation_start_at_frame_loop(long, long, long, short);
// void scenery_animation_start_relative_at_frame(long, long, long, long, short);
// void scenery_animation_start_idle(long);
// short scenery_animation_get_ticks_remaining_for_scripting(long);
// bool scenery_is_fixed_rigid_body(long);
// bool scenery_has_physics_model(long);
// long scenery_get_mopp_index(long);
// long scenery_get_animation_relative_object_index(long);
// bool scenery_get_animation_relative_transform(long, struct real_matrix4x3*);
// bool scenery_play_animation_id(long, class c_animation_id, class c_flags<enum e_animation_playback_flags, unsigned long, 18, struct s_default_enum_string_resolver>, long);
// bool scenery_animation_start_private(long, long, long, short, long, bool, bool);
// void scenery_initialize_lightmap_object_index(long);
// long scenery_get_lightmap_object_index(class c_object_identifier *, long);
// void scenery_render_debug(long);
// bool scenery_compute_activation(long, struct s_game_cluster_bit_vectors const *, bool *);

//void scenery_initialize_for_new_structure_bsp(long)
//{
//    mangled_ppc("?scenery_initialize_for_new_structure_bsp@@YAXJ@Z");
//};

//short scenery_pathfinding_policy(long, struct s_scenario_scenery const *)
//{
//    mangled_ppc("?scenery_pathfinding_policy@@YAFJPBUs_scenario_scenery@@@Z");
//};

//short scenery_lightmapping_policy(long)
//{
//    mangled_ppc("?scenery_lightmapping_policy@@YAFJ@Z");
//};

//void scenery_place(long, struct s_scenario_scenery *)
//{
//    mangled_ppc("?scenery_place@@YAXJPAUs_scenario_scenery@@@Z");
//};

//bool scenery_new(long, struct s_object_placement_data *, bool *)
//{
//    mangled_ppc("?scenery_new@@YA_NJPAUs_object_placement_data@@PA_N@Z");
//};

//void scenery_delete(long)
//{
//    mangled_ppc("?scenery_delete@@YAXJ@Z");
//};

//bool scenery_update(long)
//{
//    mangled_ppc("?scenery_update@@YA_NJ@Z");
//};

//void scenery_animation_finish(long)
//{
//    mangled_ppc("?scenery_animation_finish@@YAXJ@Z");
//};

//void scenery_move(long)
//{
//    mangled_ppc("?scenery_move@@YAXJ@Z");
//};

//void scenery_preprocess_root_node_matrix(long, struct real_matrix4x3*)
//{
//    mangled_ppc("?scenery_preprocess_root_node_matrix@@YAXJPAUreal_matrix4x3@@@Z");
//};

//void scenery_animation_start(long, class c_animation_id)
//{
//    mangled_ppc("?scenery_animation_start@@YAXJVc_animation_id@@@Z");
//};

//void scenery_animation_start(long, long, long)
//{
//    mangled_ppc("?scenery_animation_start@@YAXJJJ@Z");
//};

//void scenery_animation_start_relative(long, class c_animation_id, struct real_matrix4x3*)
//{
//    mangled_ppc("?scenery_animation_start_relative@@YAXJVc_animation_id@@PAUreal_matrix4x3@@@Z");
//};

//void scenery_animation_start_relative(long, long, long, long)
//{
//    mangled_ppc("?scenery_animation_start_relative@@YAXJJJJ@Z");
//};

//void scenery_animation_start_loop(long, long, long)
//{
//    mangled_ppc("?scenery_animation_start_loop@@YAXJJJ@Z");
//};

//void scenery_animation_start_relative_loop(long, long, long, long)
//{
//    mangled_ppc("?scenery_animation_start_relative_loop@@YAXJJJJ@Z");
//};

//void scenery_animation_start_at_frame(long, long, long, short)
//{
//    mangled_ppc("?scenery_animation_start_at_frame@@YAXJJJF@Z");
//};

//void scenery_animation_start_at_frame_loop(long, long, long, short)
//{
//    mangled_ppc("?scenery_animation_start_at_frame_loop@@YAXJJJF@Z");
//};

//void scenery_animation_start_relative_at_frame(long, long, long, long, short)
//{
//    mangled_ppc("?scenery_animation_start_relative_at_frame@@YAXJJJJF@Z");
//};

//void scenery_animation_start_idle(long)
//{
//    mangled_ppc("?scenery_animation_start_idle@@YAXJ@Z");
//};

//short scenery_animation_get_ticks_remaining_for_scripting(long)
//{
//    mangled_ppc("?scenery_animation_get_ticks_remaining_for_scripting@@YAFJ@Z");
//};

//bool scenery_is_fixed_rigid_body(long)
//{
//    mangled_ppc("?scenery_is_fixed_rigid_body@@YA_NJ@Z");
//};

//bool scenery_has_physics_model(long)
//{
//    mangled_ppc("?scenery_has_physics_model@@YA_NJ@Z");
//};

//long scenery_get_mopp_index(long)
//{
//    mangled_ppc("?scenery_get_mopp_index@@YAJJ@Z");
//};

//long scenery_get_animation_relative_object_index(long)
//{
//    mangled_ppc("?scenery_get_animation_relative_object_index@@YAJJ@Z");
//};

//bool scenery_get_animation_relative_transform(long, struct real_matrix4x3*)
//{
//    mangled_ppc("?scenery_get_animation_relative_transform@@YA_NJPAUreal_matrix4x3@@@Z");
//};

//bool scenery_play_animation_id(long, class c_animation_id, class c_flags<enum e_animation_playback_flags, unsigned long, 18, struct s_default_enum_string_resolver>, long)
//{
//    mangled_ppc("?scenery_play_animation_id@@YA_NJVc_animation_id@@V?$c_flags@W4e_animation_playback_flags@@K$0BC@Us_default_enum_string_resolver@@@@J@Z");
//};

//bool scenery_animation_start_private(long, long, long, short, long, bool, bool)
//{
//    mangled_ppc("?scenery_animation_start_private@@YA_NJJJFJ_N0@Z");
//};

//void scenery_initialize_lightmap_object_index(long)
//{
//    mangled_ppc("?scenery_initialize_lightmap_object_index@@YAXJ@Z");
//};

//long scenery_get_lightmap_object_index(class c_object_identifier *, long)
//{
//    mangled_ppc("?scenery_get_lightmap_object_index@@YAJPAVc_object_identifier@@J@Z");
//};

//void scenery_render_debug(long)
//{
//    mangled_ppc("?scenery_render_debug@@YAXJ@Z");
//};

//bool scenery_compute_activation(long, struct s_game_cluster_bit_vectors const *, bool *)
//{
//    mangled_ppc("?scenery_compute_activation@@YA_NJPBUs_game_cluster_bit_vectors@@PA_N@Z");
//};

