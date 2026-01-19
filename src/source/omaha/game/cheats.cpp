/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const s_static_string<1022>::k_index_not_found; // "?k_index_not_found@?$s_static_string@$0DPO@@@2JB"
// public: static long const s_static_string<1022>::k_element_count; // "?k_element_count@?$s_static_string@$0DPO@@@2JB"
// char const *const k_cheat_shader_scenery_path; // "?k_cheat_shader_scenery_path@@3PBDB"
// struct cheat_globals cheat; // "?cheat@@3Ucheat_globals@@A"

// void cheats_initialize(void);
// void cheats_dispose(void);
// void cheats_initialize_for_new_map(void);
// void cheats_dispose_from_old_map(void);
// bool cheats_process_gamepad(enum e_input_user_index, struct s_game_input_state const *);
// enum e_async_completion cheats_load_task(void *);
// void cheats_load(void);
// void cheats_handle_deleted_object(long);
// void cheat_all_weapons(void);
// void cheat_all_powerups(void);
// void cheat_all_vehicles(void);
// void cheat_teleport_to_camera(void);
// bool cheat_get_teleport_to_camera_information(long *, union real_point3d *);
// void cheat_active_camouflage(bool);
// void cheat_active_camouflage_by_player(long, bool);
// void cheat_drop_tag_name(char const *);
// void cheat_get_droppable_tag_types(unsigned long *const, long *);
// void cheat_drop_tag_name_with_variant_and_permutations(char const *, char const *, struct s_model_customization_region_permutation const *, long);
// void cheat_drop_tag_name_with_variant_hs(char const *, char const *);
// void cheat_drop_tag_name_with_permutation_hs(char const *, char const *);
// void cheat_drop_tag_safe(long, long, struct s_model_customization_region_permutation const *, long);
// void cheat_drop_tag_safe_hs(long);
// void cheat_drop_tag_in_main_event_loop(long, long, struct s_model_customization_region_permutation const *, long, bool);
// void cheat_update_dropped_tag_permutation_in_main_event_loop(long, struct s_model_customization_region_permutation const *, long);
// long cheat_drop_tag(unsigned long, char const *, char const *, struct s_model_customization_region_permutation const *, long);
// void cheat_update_dropped_tag_permutation_hs(char const *, char const *);
// void cheat_objects(struct s_game_globals_tag_reference const *, short);
// long cheat_player_index(void);
// long cheat_get_tag_definition(unsigned long, char const *);
// bool cheat_drop_object(unsigned long, char const *, unsigned long, long, long, long, union real_point3d const *, union vector3d const *, struct s_model_customization_region_permutation const *, long);
// bool cheat_drop_effect(unsigned long, char const *, long, union real_point3d const *, union vector3d const *);
// long cheat_get_region_and_permutation_array_from_string(char const *, struct s_model_customization_region_permutation *, long);
// void game_arcani_unlock_stylus(long);
// bool game_arcani_get_unlockability(void);
// struct s_async_task_id async_task_add<int>(long, int const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *);
// public: void s_static_string<1022>::set(char const *);
// public: long s_static_string<1022>::next_index_of(char const *, long) const;
// public: bool s_static_string<1022>::substring(long, long, class s_static_string<1022> *) const;
// public: long s_static_string<1022>::length(void) const;
// public: char const * s_static_string<1022>::get_string(void) const;
// public: c_static_string<1022>::c_static_string<1022>(void);
// struct s_async_task_id async_task_add_ex<int>(long, int const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full);
// public: void s_static_string<1022>::clear(void);

//void cheats_initialize(void)
//{
//    mangled_ppc("?cheats_initialize@@YAXXZ");
//};

//void cheats_dispose(void)
//{
//    mangled_ppc("?cheats_dispose@@YAXXZ");
//};

//void cheats_initialize_for_new_map(void)
//{
//    mangled_ppc("?cheats_initialize_for_new_map@@YAXXZ");
//};

//void cheats_dispose_from_old_map(void)
//{
//    mangled_ppc("?cheats_dispose_from_old_map@@YAXXZ");
//};

//bool cheats_process_gamepad(enum e_input_user_index, struct s_game_input_state const *)
//{
//    mangled_ppc("?cheats_process_gamepad@@YA_NW4e_input_user_index@@PBUs_game_input_state@@@Z");
//};

//enum e_async_completion cheats_load_task(void *)
//{
//    mangled_ppc("?cheats_load_task@@YA?AW4e_async_completion@@PAX@Z");
//};

//void cheats_load(void)
//{
//    mangled_ppc("?cheats_load@@YAXXZ");
//};

//void cheats_handle_deleted_object(long)
//{
//    mangled_ppc("?cheats_handle_deleted_object@@YAXJ@Z");
//};

//void cheat_all_weapons(void)
//{
//    mangled_ppc("?cheat_all_weapons@@YAXXZ");
//};

//void cheat_all_powerups(void)
//{
//    mangled_ppc("?cheat_all_powerups@@YAXXZ");
//};

//void cheat_all_vehicles(void)
//{
//    mangled_ppc("?cheat_all_vehicles@@YAXXZ");
//};

//void cheat_teleport_to_camera(void)
//{
//    mangled_ppc("?cheat_teleport_to_camera@@YAXXZ");
//};

//bool cheat_get_teleport_to_camera_information(long *, union real_point3d *)
//{
//    mangled_ppc("?cheat_get_teleport_to_camera_information@@YA_NPAJPATreal_point3d@@@Z");
//};

//void cheat_active_camouflage(bool)
//{
//    mangled_ppc("?cheat_active_camouflage@@YAX_N@Z");
//};

//void cheat_active_camouflage_by_player(long, bool)
//{
//    mangled_ppc("?cheat_active_camouflage_by_player@@YAXJ_N@Z");
//};

//void cheat_drop_tag_name(char const *)
//{
//    mangled_ppc("?cheat_drop_tag_name@@YAXPBD@Z");
//};

//void cheat_get_droppable_tag_types(unsigned long *const, long *)
//{
//    mangled_ppc("?cheat_get_droppable_tag_types@@YAXQAKPAJ@Z");
//};

//void cheat_drop_tag_name_with_variant_and_permutations(char const *, char const *, struct s_model_customization_region_permutation const *, long)
//{
//    mangled_ppc("?cheat_drop_tag_name_with_variant_and_permutations@@YAXPBD0PBUs_model_customization_region_permutation@@J@Z");
//};

//void cheat_drop_tag_name_with_variant_hs(char const *, char const *)
//{
//    mangled_ppc("?cheat_drop_tag_name_with_variant_hs@@YAXPBD0@Z");
//};

//void cheat_drop_tag_name_with_permutation_hs(char const *, char const *)
//{
//    mangled_ppc("?cheat_drop_tag_name_with_permutation_hs@@YAXPBD0@Z");
//};

//void cheat_drop_tag_safe(long, long, struct s_model_customization_region_permutation const *, long)
//{
//    mangled_ppc("?cheat_drop_tag_safe@@YAXJJPBUs_model_customization_region_permutation@@J@Z");
//};

//void cheat_drop_tag_safe_hs(long)
//{
//    mangled_ppc("?cheat_drop_tag_safe_hs@@YAXJ@Z");
//};

//void cheat_drop_tag_in_main_event_loop(long, long, struct s_model_customization_region_permutation const *, long, bool)
//{
//    mangled_ppc("?cheat_drop_tag_in_main_event_loop@@YAXJJPBUs_model_customization_region_permutation@@J_N@Z");
//};

//void cheat_update_dropped_tag_permutation_in_main_event_loop(long, struct s_model_customization_region_permutation const *, long)
//{
//    mangled_ppc("?cheat_update_dropped_tag_permutation_in_main_event_loop@@YAXJPBUs_model_customization_region_permutation@@J@Z");
//};

//long cheat_drop_tag(unsigned long, char const *, char const *, struct s_model_customization_region_permutation const *, long)
//{
//    mangled_ppc("?cheat_drop_tag@@YAJKPBD0PBUs_model_customization_region_permutation@@J@Z");
//};

//void cheat_update_dropped_tag_permutation_hs(char const *, char const *)
//{
//    mangled_ppc("?cheat_update_dropped_tag_permutation_hs@@YAXPBD0@Z");
//};

//void cheat_objects(struct s_game_globals_tag_reference const *, short)
//{
//    mangled_ppc("?cheat_objects@@YAXPBUs_game_globals_tag_reference@@F@Z");
//};

//long cheat_player_index(void)
//{
//    mangled_ppc("?cheat_player_index@@YAJXZ");
//};

//long cheat_get_tag_definition(unsigned long, char const *)
//{
//    mangled_ppc("?cheat_get_tag_definition@@YAJKPBD@Z");
//};

//bool cheat_drop_object(unsigned long, char const *, unsigned long, long, long, long, union real_point3d const *, union vector3d const *, struct s_model_customization_region_permutation const *, long)
//{
//    mangled_ppc("?cheat_drop_object@@YA_NKPBDKJJJPBTreal_point3d@@PBTvector3d@@PBUs_model_customization_region_permutation@@J@Z");
//};

//bool cheat_drop_effect(unsigned long, char const *, long, union real_point3d const *, union vector3d const *)
//{
//    mangled_ppc("?cheat_drop_effect@@YA_NKPBDJPBTreal_point3d@@PBTvector3d@@@Z");
//};

//long cheat_get_region_and_permutation_array_from_string(char const *, struct s_model_customization_region_permutation *, long)
//{
//    mangled_ppc("?cheat_get_region_and_permutation_array_from_string@@YAJPBDPAUs_model_customization_region_permutation@@J@Z");
//};

//void game_arcani_unlock_stylus(long)
//{
//    mangled_ppc("?game_arcani_unlock_stylus@@YAXJ@Z");
//};

//bool game_arcani_get_unlockability(void)
//{
//    mangled_ppc("?game_arcani_get_unlockability@@YA_NXZ");
//};

//struct s_async_task_id async_task_add<int>(long, int const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *)
//{
//    mangled_ppc("??$async_task_add@H@@YA?AUs_async_task_id@@JPBHJP6A?AW4e_async_completion@@PAX@ZPAVc_async_completion_flag@@@Z");
//};

//public: void s_static_string<1022>::set(char const *)
//{
//    mangled_ppc("?set@?$s_static_string@$0DPO@@@QAAXPBD@Z");
//};

//public: long s_static_string<1022>::next_index_of(char const *, long) const
//{
//    mangled_ppc("?next_index_of@?$s_static_string@$0DPO@@@QBAJPBDJ@Z");
//};

//public: bool s_static_string<1022>::substring(long, long, class s_static_string<1022> *) const
//{
//    mangled_ppc("?substring@?$s_static_string@$0DPO@@@QBA_NJJPAV1@@Z");
//};

//public: long s_static_string<1022>::length(void) const
//{
//    mangled_ppc("?length@?$s_static_string@$0DPO@@@QBAJXZ");
//};

//public: char const * s_static_string<1022>::get_string(void) const
//{
//    mangled_ppc("?get_string@?$s_static_string@$0DPO@@@QBAPBDXZ");
//};

//public: c_static_string<1022>::c_static_string<1022>(void)
//{
//    mangled_ppc("??0?$c_static_string@$0DPO@@@QAA@XZ");
//};

//struct s_async_task_id async_task_add_ex<int>(long, int const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full)
//{
//    mangled_ppc("??$async_task_add_ex@H@@YA?AUs_async_task_id@@JPBHJP6A?AW4e_async_completion@@PAX@ZPAVc_async_completion_flag@@W4e_async_block_if_full@@@Z");
//};

//public: void s_static_string<1022>::clear(void)
//{
//    mangled_ppc("?clear@?$s_static_string@$0DPO@@@QAAXXZ");
//};

