/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const s_static_array<union real_point2d, 1024>::k_element_count; // "?k_element_count@?$s_static_array@Treal_point2d@@$0EAA@@@2JB"
// except_record_83911428; // "except_record_83911428"
// except_record_83915E90; // "except_record_83915E90"
// except_record_83916AB0; // "except_record_83916AB0"
// except_record_83916E58; // "except_record_83916E58"
// char const **global_evaluation_mode_names; // "?global_evaluation_mode_names@@3PAPBDA"
// char const **global_fp_evaluator_names; // "?global_fp_evaluator_names@@3PAPBDA"
// struct s_firing_position_ref FP_REF_NONE; // "?FP_REF_NONE@@3Us_firing_position_ref@@A"
// struct s_firing_position_ref FP_REF_CURRENT; // "?FP_REF_CURRENT@@3Us_firing_position_ref@@A"
// struct s_firing_position_definition global_current_firing_position_definition; // "?global_current_firing_position_definition@@3Us_firing_position_definition@@A"
// struct obstacles g_firing_position_obstacles_debug; // "?g_firing_position_obstacles_debug@@3Uobstacles@@A"
// float g_firing_position_obstacles_radius_debug; // "?g_firing_position_obstacles_radius_debug@@3MA"
// bool g_firing_position_obstacles_debug_valid; // "?g_firing_position_obstacles_debug_valid@@3_NA"
// bool global_current_firing_position_definition_valid; // "?global_current_firing_position_definition_valid@@3_NA"
// class c_firing_point_array const *const global_temporary_sort_firing_position_array; // "?global_temporary_sort_firing_position_array@@3PBVc_firing_point_array@@B"

// unsigned long firing_position_ref_hash_function(void const *);
// bool firing_position_ref_hash_compare(void const *, void const *);
// void actor_evaluation_context_add_influence_point_3d(struct s_firing_position_evaluation_context *, enum e_firing_position_attraction_mode, bool, float, union real_point3d const *, enum e_firing_point_evaluator);
// void actor_setup_influence_point(struct s_firing_position_influence_point *, enum e_firing_position_attraction_mode, bool, float, union real_point3d const *, enum e_firing_point_evaluator);
// void actor_evaluation_context_push_influence_point(struct s_firing_position_evaluation_context *, struct s_firing_position_influence_point *);
// void actor_evaluation_context_add_influence_point(struct s_firing_position_evaluation_context *, enum e_firing_position_attraction_mode, bool, float, union real_point3d const *, enum e_firing_point_evaluator);
// void actor_evaluation_context_add_influence_vector(struct s_firing_position_evaluation_context *, enum e_firing_position_attraction_mode, bool, float, union real_point3d const *, union vector3d const *, enum e_firing_point_evaluator);
// void actor_setup_evaluation_context(long, struct s_firing_position_evaluation_context *);
// float firing_point_evaluator_get_default_preference_weight(short);
// float firing_point_evaluator_get_default_avoidance_weight(short);
// class c_big_flags_typed_no_init<long, 58> firing_point_evaluation_mode_get_default_evaluator_mask(short);
// void evaluator_mask_add_attack(class c_big_flags_typed_no_init<long, 58> *);
// void evaluator_mask_add_combatmove(class c_big_flags_typed_no_init<long, 58> *);
// void evaluator_mask_add_cornering(class c_big_flags_typed_no_init<long, 58> *);
// void evaluator_mask_add_global(class c_big_flags_typed_no_init<long, 58> *);
// void evaluator_mask_add_guard(class c_big_flags_typed_no_init<long, 58> *);
// void evaluator_mask_add_hide(class c_big_flags_typed_no_init<long, 58> *);
// void evaluator_mask_add_flank(class c_big_flags_typed_no_init<long, 58> *);
// void evaluator_mask_add_intertia(class c_big_flags_typed_no_init<long, 58> *);
// void evaluator_mask_add_leader_dist(class c_big_flags_typed_no_init<long, 58> *);
// void evaluator_mask_add_obstacles(class c_big_flags_typed_no_init<long, 58> *);
// void evaluator_mask_add_panic(class c_big_flags_typed_no_init<long, 58> *);
// void evaluator_mask_add_pursuit(class c_big_flags_typed_no_init<long, 58> *);
// void evaluator_mask_add_uncover(class c_big_flags_typed_no_init<long, 58> *);
// void evaluator_mask_add_attack_posteval(class c_big_flags_typed_no_init<long, 58> *);
// void evaluator_previously_discarded(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context const *, class c_firing_point_array *);
// bool firing_position_reject(struct s_firing_position_evaluation_context const *, struct s_firing_position *, struct s_evaluator_definition const *);
// bool firing_position_reject(struct s_firing_position_evaluation_context const *, struct s_firing_position *, enum e_firing_point_evaluator);
// void evaluator_goal_points_only(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context const *, class c_firing_point_array *);
// void evaluator_flag_preferences(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context const *, class c_firing_point_array *);
// void firing_position_store_evaluation(struct s_firing_position_evaluation_context const *, struct s_firing_position *, float, struct s_evaluator_definition const *, short);
// void evaluator_leadership(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context const *, class c_firing_point_array *);
// void evaluator_perch_preferences(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context const *, class c_firing_point_array *);
// void evaluator_goal_preferences(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context const *, class c_firing_point_array *);
// void evaluator_postsearch_prefer_original(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context const *, class c_firing_point_array *);
// void evaluator_current_position(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context const *, class c_firing_point_array *);
// struct s_evaluator_definition const * actor_find_evaluator_definition(long, struct s_firing_position_evaluation_context const *, enum e_firing_point_evaluator);
// void evaluator_too_far_from_leader(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context const *, class c_firing_point_array *);
// void evaluator_wall_leanable(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context const *, class c_firing_point_array *);
// void evaluator_multi_target(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context const *, class c_firing_point_array *);
// void evaluator_heatmap(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context const *, class c_firing_point_array *);
// void evaluator_flank(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context const *, class c_firing_point_array *);
// void evaluator_obstacle(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context const *, class c_firing_point_array *);
// void evaluator_inertia_preservation(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context const *, class c_firing_point_array *);
// void evaluator_combat_cue(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context const *, class c_firing_point_array *);
// void evaluator_combatmove_elevation(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context const *, class c_firing_point_array *);
// void evaluator_combatmove_follow_unit(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context const *, class c_firing_point_array *);
// void evaluator_move_localized(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context const *, class c_firing_point_array *);
// void evaluator_move_distance(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context const *, class c_firing_point_array *);
// void evaluator_move_distance_internal(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context const *, class c_firing_point_array *, float, float);
// void evaluator_vehicle_move_distance(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context const *, class c_firing_point_array *);
// void evaluator_attack_vectors(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context const *, class c_firing_point_array *);
// void evaluator_panic_closetotarget(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context const *, class c_firing_point_array *);
// void evaluator_hide_equipment(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context const *, class c_firing_point_array *);
// void evaluator_attack_dangerousenemy(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context const *, class c_firing_point_array *);
// void evaluator_invalid(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context const *, class c_firing_point_array *);
// void evaluator_attack(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context const *, class c_firing_point_array *);
// void evaluator_attack_leader_distance(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context const *, class c_firing_point_array *);
// void evaluator_directional_movement(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context const *, class c_firing_point_array *);
// void evaluator_facing(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context const *, class c_firing_point_array *);
// void evaluator_flee_to_leader(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context const *, class c_firing_point_array *);
// void evaluator_task_direction(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context const *, class c_firing_point_array *);
// void evaluator_danger_zones(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context const *, class c_firing_point_array *);
// void evaluator_panic_targetdistance(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context const *, class c_firing_point_array *);
// void evaluator_influence_point(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context const *, class c_firing_point_array *);
// void evaluator_pursuit_search_pattern(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context const *, class c_firing_point_array *);
// void evaluator_pathfinding(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context const *, class c_firing_point_array *);
// bool post_evaluator_attack(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context *, struct s_firing_position *);
// float evaluator_get_post_evaluation_bound(struct s_firing_position_evaluation_context const *, struct s_evaluator_definition const *);
// bool post_evaluator_guard_cover(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context *, struct s_firing_position *);
// bool post_evaluator_vehicle_hide_cover(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context *, struct s_firing_position *);
// bool post_evaluator_uncover_visible(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context *, struct s_firing_position *);
// bool post_evaluator_hide_cover(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context *, struct s_firing_position *);
// bool post_evaluator_3d_path_available(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context *, struct s_firing_position *);
// bool firing_position_forced_evaluation(long, struct s_firing_position_evaluation_context *, struct s_firing_position *);
// void firing_position_compute_line_of_sight(long, struct s_firing_position_evaluation_context *, struct s_firing_position *);
// void firing_position_pre_evaluate(long, struct s_firing_position_evaluation_context *, class c_firing_point_array *);
// bool firing_position_post_evaluate(long, struct s_firing_position_evaluation_context *, struct s_firing_position *);
// bool actor_nearby_firing_positions(long, class c_ai_point3d const *, class c_sector_ref, float, float);
// bool actor_nearby_firing_position_areas(long, class c_ai_point3d const *, float);
// float actor_nearest_firing_position_distance(long);
// bool firing_position_within_combat_range(float, class c_firing_point_array *, struct s_firing_position_evaluation_context const *);
// struct s_firing_position_ref actor_select_firing_position(long, struct s_firing_position_evaluation_context *, struct s_firing_position *, long *, struct path_state *, bool *);
// struct s_firing_position_ref actor_select_firing_position_internal(long, struct s_firing_position_evaluation_context *, class c_firing_point_array *, struct s_firing_position *, long *, struct path_state *, bool *);
// bool firing_positions_get_post_evaluation_bound(long, struct s_firing_position_evaluation_context *);
// bool firing_position_compare(long, long, void const *);
// void actor_perform_evaluator_sanity_check(long);
// void evaluation_mode_get_sane_evaluators(enum e_evaluation_mode, class c_big_flags_typed_no_init<long, 58> *);
// struct s_firing_position_ref actor_active_select_firing_position(long, struct s_firing_position_evaluation_context *, struct s_firing_position *, long *, struct path_state *, bool *);
// float firing_positions_find_avoidance_threshold(class c_firing_point_array *, short *);
// void actor_get_available_firing_positions(long, class c_firing_point_array *, struct s_firing_position_evaluation_context *);
// void actor_get_combat_cue_firing_positions(long, class c_firing_point_array *, struct s_firing_position_evaluation_context *);
// bool actor_get_dynamic_firing_positions(long, class c_firing_point_array *, struct s_firing_position_evaluation_context *);
// bool squad_get_available_firing_positions(long, long, class c_firing_point_array *, struct s_firing_position_evaluation_context *);
// void area_get_available_firing_positions(long, long, long, class c_firing_point_array *, struct s_firing_position_evaluation_context *, short, unsigned char);
// bool consider_firing_position(long, struct s_firing_position_ref, struct s_firing_position_evaluation_context const *);
// bool new_firing_position(long, struct s_firing_position_ref, struct s_firing_position *, struct s_firing_position_evaluation_context const *, bool, float);
// void runtime_firing_position_setup_cornering_info(long, struct s_firing_position *, struct s_firing_position_evaluation_context const *);
// bool firing_position_valid(long, struct s_firing_position_ref, bool);
// bool area_valid_firing_positions(short, short, struct s_firing_position_ref);
// struct s_firing_position_ref actor_change_firing_position(long, struct s_firing_position_ref, struct s_firing_position *, long, struct path_state *);
// struct s_firing_position_ref actor_change_firing_position(long, struct s_firing_position_ref, struct s_firing_position *, long, struct path_state *, bool);
// void actor_clear_discarded_firing_positions(long, bool);
// void actor_discard_firing_position(long, struct s_firing_position_ref, bool);
// bool actor_firing_position_discarded(long, struct s_firing_position_ref);
// bool actor_at_firing_position(long);
// bool actor_travelling_to_firing_position(long);
// void actor_check_firing_position(long);
// short actor_get_area_flags(long);
// void actor_set_current_firing_position(long, struct s_firing_position_ref);
// long firing_position_get_owner(struct s_firing_position_ref);
// bool firing_position_setup_current_definition(long);
// void firing_position_clear_current_definition(void);
// bool firing_position_get_perch_entry(struct s_firing_position_ref, union real_point3d *, union vector3d *);
// bool firing_position_get_landing_point(struct s_firing_position_ref, union real_point3d *, union vector3d *);
// struct s_firing_position_definition * firing_position_ref_get_definition(struct s_firing_position_ref);
// struct s_firing_position_definition * combat_cue_get_firing_position_definition(struct s_firing_position_ref);
// struct s_firing_position_definition * static_firing_position_ref_get_definition(struct s_firing_position_ref);
// short firing_position_get_area(struct s_firing_position_ref);
// bool verify_firing_position(short, short, bool);
// public: bool c_static_stack<struct s_firing_position_influence_point, 48>::empty(void) const;
// public: long c_static_stack<struct s_firing_position_influence_point, 48>::count(void) const;
// public: void c_static_stack<struct s_firing_position_influence_point, 48>::push_back(struct s_firing_position_influence_point const &);
// public: struct s_firing_position_influence_point const * c_static_stack<struct s_firing_position_influence_point, 48>::begin(void) const;
// public: struct s_firing_position_influence_point const * c_static_stack<struct s_firing_position_influence_point, 48>::end(void) const;
// public: bool c_static_stack<struct s_firing_position, 512>::empty(void) const;
// public: bool c_static_stack<struct s_firing_position, 512>::full(void) const;
// public: static long c_static_stack<struct s_firing_position, 512>::maximum_count(void);
// public: long c_static_stack<struct s_firing_position, 512>::push(void);
// public: void c_static_stack<struct s_firing_position, 512>::push_back(struct s_firing_position const &);
// public: struct s_firing_position const * c_static_stack<struct s_firing_position, 512>::get(long) const;
// public: struct s_firing_position * c_static_stack<struct s_firing_position, 512>::get_top(void);
// public: c_character_runtime_properties<class c_character_firing_point_evaluation_properties_internal>::c_character_runtime_properties<class c_character_firing_point_evaluation_properties_internal>(void);
// public: bool c_character_runtime_properties<class c_character_firing_point_evaluation_properties_internal>::valid(void) const;
// public: union real_point2d * s_static_array<union real_point2d, 1024>::get_elements(void);
// public: static long s_static_array<union real_point2d, 1024>::get_count(void);
// public: static long s_static_array<short, 1024>::get_count(void);
// public: long c_static_stack<struct s_firing_position_influence_point, 48>::push(void);
// public: struct s_firing_position_influence_point * c_static_stack<struct s_firing_position_influence_point, 48>::get(long);
// public: long c_static_stack<struct s_firing_position, 512>::top(void) const;
// public: bool c_static_stack<struct s_firing_position_influence_point, 48>::valid(long) const;
// public: long c_big_flags_typed_no_init<long, 58>::get_lowest_bit_set(void) const;
// public: void c_big_flags_typed_no_init<long, 58>::and_not(class c_big_flags_typed_no_init<long, 58> const *);
// public: void c_flags_no_init<enum e_bunker_direction, unsigned short, 4, struct s_default_enum_string_resolver>::clear(void);
// public: void c_flags_no_init<enum e_bunker_direction, unsigned short, 4, struct s_default_enum_string_resolver>::set(enum e_bunker_direction, bool);
// public: union real_point2d & s_static_array<union real_point2d, 1024>::operator[]<short>(short);
// public: union real_point2d & s_static_array<union real_point2d, 1024>::operator[]<long>(long);
// public: void c_big_flags_typed_no_init<long, 58>::and_not_range(class c_big_flags_typed_no_init<long, 58> const *, long, long);
// private: static unsigned short c_flags_no_init<enum e_bunker_direction, unsigned short, 4, struct s_default_enum_string_resolver>::flag_size_type(enum e_bunker_direction);
// public: static bool s_static_array<union real_point2d, 1024>::valid<short>(short);
// public: static bool s_static_array<union real_point2d, 1024>::valid<long>(long);
// protected: static unsigned long c_big_flags_typed_no_init<long, 58>::get_mask_of_first_slice_of_chunk_inclusive(long);
// public: struct s_firing_position * c_firing_point_array::iterate_valid(long);
// public: struct s_stimulus_payload_combat_cue const * c_stimulus_payload::get_combat_cue_data_const(void) const;
// public: struct s_stimulus_payload_prefer_firing_points const * c_stimulus_payload::get_firing_points_data_const(void) const;
// public: struct s_firing_position & c_static_stack<struct s_firing_position, 512>::get_element(long);

//unsigned long firing_position_ref_hash_function(void const *)
//{
//    mangled_ppc("?firing_position_ref_hash_function@@YAKPBX@Z");
//};

//bool firing_position_ref_hash_compare(void const *, void const *)
//{
//    mangled_ppc("?firing_position_ref_hash_compare@@YA_NPBX0@Z");
//};

//void actor_evaluation_context_add_influence_point_3d(struct s_firing_position_evaluation_context *, enum e_firing_position_attraction_mode, bool, float, union real_point3d const *, enum e_firing_point_evaluator)
//{
//    mangled_ppc("?actor_evaluation_context_add_influence_point_3d@@YAXPAUs_firing_position_evaluation_context@@W4e_firing_position_attraction_mode@@_NMPBTreal_point3d@@W4e_firing_point_evaluator@@@Z");
//};

//void actor_setup_influence_point(struct s_firing_position_influence_point *, enum e_firing_position_attraction_mode, bool, float, union real_point3d const *, enum e_firing_point_evaluator)
//{
//    mangled_ppc("?actor_setup_influence_point@@YAXPAUs_firing_position_influence_point@@W4e_firing_position_attraction_mode@@_NMPBTreal_point3d@@W4e_firing_point_evaluator@@@Z");
//};

//void actor_evaluation_context_push_influence_point(struct s_firing_position_evaluation_context *, struct s_firing_position_influence_point *)
//{
//    mangled_ppc("?actor_evaluation_context_push_influence_point@@YAXPAUs_firing_position_evaluation_context@@PAUs_firing_position_influence_point@@@Z");
//};

//void actor_evaluation_context_add_influence_point(struct s_firing_position_evaluation_context *, enum e_firing_position_attraction_mode, bool, float, union real_point3d const *, enum e_firing_point_evaluator)
//{
//    mangled_ppc("?actor_evaluation_context_add_influence_point@@YAXPAUs_firing_position_evaluation_context@@W4e_firing_position_attraction_mode@@_NMPBTreal_point3d@@W4e_firing_point_evaluator@@@Z");
//};

//void actor_evaluation_context_add_influence_vector(struct s_firing_position_evaluation_context *, enum e_firing_position_attraction_mode, bool, float, union real_point3d const *, union vector3d const *, enum e_firing_point_evaluator)
//{
//    mangled_ppc("?actor_evaluation_context_add_influence_vector@@YAXPAUs_firing_position_evaluation_context@@W4e_firing_position_attraction_mode@@_NMPBTreal_point3d@@PBTvector3d@@W4e_firing_point_evaluator@@@Z");
//};

//void actor_setup_evaluation_context(long, struct s_firing_position_evaluation_context *)
//{
//    mangled_ppc("?actor_setup_evaluation_context@@YAXJPAUs_firing_position_evaluation_context@@@Z");
//};

//float firing_point_evaluator_get_default_preference_weight(short)
//{
//    mangled_ppc("?firing_point_evaluator_get_default_preference_weight@@YAMF@Z");
//};

//float firing_point_evaluator_get_default_avoidance_weight(short)
//{
//    mangled_ppc("?firing_point_evaluator_get_default_avoidance_weight@@YAMF@Z");
//};

//class c_big_flags_typed_no_init<long, 58> firing_point_evaluation_mode_get_default_evaluator_mask(short)
//{
//    mangled_ppc("?firing_point_evaluation_mode_get_default_evaluator_mask@@YA?AV?$c_big_flags_typed_no_init@J$0DK@@@F@Z");
//};

//void evaluator_mask_add_attack(class c_big_flags_typed_no_init<long, 58> *)
//{
//    mangled_ppc("?evaluator_mask_add_attack@@YAXPAV?$c_big_flags_typed_no_init@J$0DK@@@@Z");
//};

//void evaluator_mask_add_combatmove(class c_big_flags_typed_no_init<long, 58> *)
//{
//    mangled_ppc("?evaluator_mask_add_combatmove@@YAXPAV?$c_big_flags_typed_no_init@J$0DK@@@@Z");
//};

//void evaluator_mask_add_cornering(class c_big_flags_typed_no_init<long, 58> *)
//{
//    mangled_ppc("?evaluator_mask_add_cornering@@YAXPAV?$c_big_flags_typed_no_init@J$0DK@@@@Z");
//};

//void evaluator_mask_add_global(class c_big_flags_typed_no_init<long, 58> *)
//{
//    mangled_ppc("?evaluator_mask_add_global@@YAXPAV?$c_big_flags_typed_no_init@J$0DK@@@@Z");
//};

//void evaluator_mask_add_guard(class c_big_flags_typed_no_init<long, 58> *)
//{
//    mangled_ppc("?evaluator_mask_add_guard@@YAXPAV?$c_big_flags_typed_no_init@J$0DK@@@@Z");
//};

//void evaluator_mask_add_hide(class c_big_flags_typed_no_init<long, 58> *)
//{
//    mangled_ppc("?evaluator_mask_add_hide@@YAXPAV?$c_big_flags_typed_no_init@J$0DK@@@@Z");
//};

//void evaluator_mask_add_flank(class c_big_flags_typed_no_init<long, 58> *)
//{
//    mangled_ppc("?evaluator_mask_add_flank@@YAXPAV?$c_big_flags_typed_no_init@J$0DK@@@@Z");
//};

//void evaluator_mask_add_intertia(class c_big_flags_typed_no_init<long, 58> *)
//{
//    mangled_ppc("?evaluator_mask_add_intertia@@YAXPAV?$c_big_flags_typed_no_init@J$0DK@@@@Z");
//};

//void evaluator_mask_add_leader_dist(class c_big_flags_typed_no_init<long, 58> *)
//{
//    mangled_ppc("?evaluator_mask_add_leader_dist@@YAXPAV?$c_big_flags_typed_no_init@J$0DK@@@@Z");
//};

//void evaluator_mask_add_obstacles(class c_big_flags_typed_no_init<long, 58> *)
//{
//    mangled_ppc("?evaluator_mask_add_obstacles@@YAXPAV?$c_big_flags_typed_no_init@J$0DK@@@@Z");
//};

//void evaluator_mask_add_panic(class c_big_flags_typed_no_init<long, 58> *)
//{
//    mangled_ppc("?evaluator_mask_add_panic@@YAXPAV?$c_big_flags_typed_no_init@J$0DK@@@@Z");
//};

//void evaluator_mask_add_pursuit(class c_big_flags_typed_no_init<long, 58> *)
//{
//    mangled_ppc("?evaluator_mask_add_pursuit@@YAXPAV?$c_big_flags_typed_no_init@J$0DK@@@@Z");
//};

//void evaluator_mask_add_uncover(class c_big_flags_typed_no_init<long, 58> *)
//{
//    mangled_ppc("?evaluator_mask_add_uncover@@YAXPAV?$c_big_flags_typed_no_init@J$0DK@@@@Z");
//};

//void evaluator_mask_add_attack_posteval(class c_big_flags_typed_no_init<long, 58> *)
//{
//    mangled_ppc("?evaluator_mask_add_attack_posteval@@YAXPAV?$c_big_flags_typed_no_init@J$0DK@@@@Z");
//};

//void evaluator_previously_discarded(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context const *, class c_firing_point_array *)
//{
//    mangled_ppc("?evaluator_previously_discarded@@YAXJPBUs_evaluator_definition@@PBUs_firing_position_evaluation_context@@PAVc_firing_point_array@@@Z");
//};

//bool firing_position_reject(struct s_firing_position_evaluation_context const *, struct s_firing_position *, struct s_evaluator_definition const *)
//{
//    mangled_ppc("?firing_position_reject@@YA_NPBUs_firing_position_evaluation_context@@PAUs_firing_position@@PBUs_evaluator_definition@@@Z");
//};

//bool firing_position_reject(struct s_firing_position_evaluation_context const *, struct s_firing_position *, enum e_firing_point_evaluator)
//{
//    mangled_ppc("?firing_position_reject@@YA_NPBUs_firing_position_evaluation_context@@PAUs_firing_position@@W4e_firing_point_evaluator@@@Z");
//};

//void evaluator_goal_points_only(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context const *, class c_firing_point_array *)
//{
//    mangled_ppc("?evaluator_goal_points_only@@YAXJPBUs_evaluator_definition@@PBUs_firing_position_evaluation_context@@PAVc_firing_point_array@@@Z");
//};

//void evaluator_flag_preferences(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context const *, class c_firing_point_array *)
//{
//    mangled_ppc("?evaluator_flag_preferences@@YAXJPBUs_evaluator_definition@@PBUs_firing_position_evaluation_context@@PAVc_firing_point_array@@@Z");
//};

//void firing_position_store_evaluation(struct s_firing_position_evaluation_context const *, struct s_firing_position *, float, struct s_evaluator_definition const *, short)
//{
//    mangled_ppc("?firing_position_store_evaluation@@YAXPBUs_firing_position_evaluation_context@@PAUs_firing_position@@MPBUs_evaluator_definition@@F@Z");
//};

//void evaluator_leadership(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context const *, class c_firing_point_array *)
//{
//    mangled_ppc("?evaluator_leadership@@YAXJPBUs_evaluator_definition@@PBUs_firing_position_evaluation_context@@PAVc_firing_point_array@@@Z");
//};

//void evaluator_perch_preferences(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context const *, class c_firing_point_array *)
//{
//    mangled_ppc("?evaluator_perch_preferences@@YAXJPBUs_evaluator_definition@@PBUs_firing_position_evaluation_context@@PAVc_firing_point_array@@@Z");
//};

//void evaluator_goal_preferences(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context const *, class c_firing_point_array *)
//{
//    mangled_ppc("?evaluator_goal_preferences@@YAXJPBUs_evaluator_definition@@PBUs_firing_position_evaluation_context@@PAVc_firing_point_array@@@Z");
//};

//void evaluator_postsearch_prefer_original(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context const *, class c_firing_point_array *)
//{
//    mangled_ppc("?evaluator_postsearch_prefer_original@@YAXJPBUs_evaluator_definition@@PBUs_firing_position_evaluation_context@@PAVc_firing_point_array@@@Z");
//};

//void evaluator_current_position(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context const *, class c_firing_point_array *)
//{
//    mangled_ppc("?evaluator_current_position@@YAXJPBUs_evaluator_definition@@PBUs_firing_position_evaluation_context@@PAVc_firing_point_array@@@Z");
//};

//struct s_evaluator_definition const * actor_find_evaluator_definition(long, struct s_firing_position_evaluation_context const *, enum e_firing_point_evaluator)
//{
//    mangled_ppc("?actor_find_evaluator_definition@@YAPBUs_evaluator_definition@@JPBUs_firing_position_evaluation_context@@W4e_firing_point_evaluator@@@Z");
//};

//void evaluator_too_far_from_leader(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context const *, class c_firing_point_array *)
//{
//    mangled_ppc("?evaluator_too_far_from_leader@@YAXJPBUs_evaluator_definition@@PBUs_firing_position_evaluation_context@@PAVc_firing_point_array@@@Z");
//};

//void evaluator_wall_leanable(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context const *, class c_firing_point_array *)
//{
//    mangled_ppc("?evaluator_wall_leanable@@YAXJPBUs_evaluator_definition@@PBUs_firing_position_evaluation_context@@PAVc_firing_point_array@@@Z");
//};

//void evaluator_multi_target(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context const *, class c_firing_point_array *)
//{
//    mangled_ppc("?evaluator_multi_target@@YAXJPBUs_evaluator_definition@@PBUs_firing_position_evaluation_context@@PAVc_firing_point_array@@@Z");
//};

//void evaluator_heatmap(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context const *, class c_firing_point_array *)
//{
//    mangled_ppc("?evaluator_heatmap@@YAXJPBUs_evaluator_definition@@PBUs_firing_position_evaluation_context@@PAVc_firing_point_array@@@Z");
//};

//void evaluator_flank(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context const *, class c_firing_point_array *)
//{
//    mangled_ppc("?evaluator_flank@@YAXJPBUs_evaluator_definition@@PBUs_firing_position_evaluation_context@@PAVc_firing_point_array@@@Z");
//};

//void evaluator_obstacle(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context const *, class c_firing_point_array *)
//{
//    mangled_ppc("?evaluator_obstacle@@YAXJPBUs_evaluator_definition@@PBUs_firing_position_evaluation_context@@PAVc_firing_point_array@@@Z");
//};

//void evaluator_inertia_preservation(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context const *, class c_firing_point_array *)
//{
//    mangled_ppc("?evaluator_inertia_preservation@@YAXJPBUs_evaluator_definition@@PBUs_firing_position_evaluation_context@@PAVc_firing_point_array@@@Z");
//};

//void evaluator_combat_cue(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context const *, class c_firing_point_array *)
//{
//    mangled_ppc("?evaluator_combat_cue@@YAXJPBUs_evaluator_definition@@PBUs_firing_position_evaluation_context@@PAVc_firing_point_array@@@Z");
//};

//void evaluator_combatmove_elevation(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context const *, class c_firing_point_array *)
//{
//    mangled_ppc("?evaluator_combatmove_elevation@@YAXJPBUs_evaluator_definition@@PBUs_firing_position_evaluation_context@@PAVc_firing_point_array@@@Z");
//};

//void evaluator_combatmove_follow_unit(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context const *, class c_firing_point_array *)
//{
//    mangled_ppc("?evaluator_combatmove_follow_unit@@YAXJPBUs_evaluator_definition@@PBUs_firing_position_evaluation_context@@PAVc_firing_point_array@@@Z");
//};

//void evaluator_move_localized(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context const *, class c_firing_point_array *)
//{
//    mangled_ppc("?evaluator_move_localized@@YAXJPBUs_evaluator_definition@@PBUs_firing_position_evaluation_context@@PAVc_firing_point_array@@@Z");
//};

//void evaluator_move_distance(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context const *, class c_firing_point_array *)
//{
//    mangled_ppc("?evaluator_move_distance@@YAXJPBUs_evaluator_definition@@PBUs_firing_position_evaluation_context@@PAVc_firing_point_array@@@Z");
//};

//void evaluator_move_distance_internal(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context const *, class c_firing_point_array *, float, float)
//{
//    mangled_ppc("?evaluator_move_distance_internal@@YAXJPBUs_evaluator_definition@@PBUs_firing_position_evaluation_context@@PAVc_firing_point_array@@MM@Z");
//};

//void evaluator_vehicle_move_distance(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context const *, class c_firing_point_array *)
//{
//    mangled_ppc("?evaluator_vehicle_move_distance@@YAXJPBUs_evaluator_definition@@PBUs_firing_position_evaluation_context@@PAVc_firing_point_array@@@Z");
//};

//void evaluator_attack_vectors(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context const *, class c_firing_point_array *)
//{
//    mangled_ppc("?evaluator_attack_vectors@@YAXJPBUs_evaluator_definition@@PBUs_firing_position_evaluation_context@@PAVc_firing_point_array@@@Z");
//};

//void evaluator_panic_closetotarget(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context const *, class c_firing_point_array *)
//{
//    mangled_ppc("?evaluator_panic_closetotarget@@YAXJPBUs_evaluator_definition@@PBUs_firing_position_evaluation_context@@PAVc_firing_point_array@@@Z");
//};

//void evaluator_hide_equipment(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context const *, class c_firing_point_array *)
//{
//    mangled_ppc("?evaluator_hide_equipment@@YAXJPBUs_evaluator_definition@@PBUs_firing_position_evaluation_context@@PAVc_firing_point_array@@@Z");
//};

//void evaluator_attack_dangerousenemy(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context const *, class c_firing_point_array *)
//{
//    mangled_ppc("?evaluator_attack_dangerousenemy@@YAXJPBUs_evaluator_definition@@PBUs_firing_position_evaluation_context@@PAVc_firing_point_array@@@Z");
//};

//void evaluator_invalid(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context const *, class c_firing_point_array *)
//{
//    mangled_ppc("?evaluator_invalid@@YAXJPBUs_evaluator_definition@@PBUs_firing_position_evaluation_context@@PAVc_firing_point_array@@@Z");
//};

//void evaluator_attack(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context const *, class c_firing_point_array *)
//{
//    mangled_ppc("?evaluator_attack@@YAXJPBUs_evaluator_definition@@PBUs_firing_position_evaluation_context@@PAVc_firing_point_array@@@Z");
//};

//void evaluator_attack_leader_distance(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context const *, class c_firing_point_array *)
//{
//    mangled_ppc("?evaluator_attack_leader_distance@@YAXJPBUs_evaluator_definition@@PBUs_firing_position_evaluation_context@@PAVc_firing_point_array@@@Z");
//};

//void evaluator_directional_movement(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context const *, class c_firing_point_array *)
//{
//    mangled_ppc("?evaluator_directional_movement@@YAXJPBUs_evaluator_definition@@PBUs_firing_position_evaluation_context@@PAVc_firing_point_array@@@Z");
//};

//void evaluator_facing(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context const *, class c_firing_point_array *)
//{
//    mangled_ppc("?evaluator_facing@@YAXJPBUs_evaluator_definition@@PBUs_firing_position_evaluation_context@@PAVc_firing_point_array@@@Z");
//};

//void evaluator_flee_to_leader(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context const *, class c_firing_point_array *)
//{
//    mangled_ppc("?evaluator_flee_to_leader@@YAXJPBUs_evaluator_definition@@PBUs_firing_position_evaluation_context@@PAVc_firing_point_array@@@Z");
//};

//void evaluator_task_direction(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context const *, class c_firing_point_array *)
//{
//    mangled_ppc("?evaluator_task_direction@@YAXJPBUs_evaluator_definition@@PBUs_firing_position_evaluation_context@@PAVc_firing_point_array@@@Z");
//};

//void evaluator_danger_zones(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context const *, class c_firing_point_array *)
//{
//    mangled_ppc("?evaluator_danger_zones@@YAXJPBUs_evaluator_definition@@PBUs_firing_position_evaluation_context@@PAVc_firing_point_array@@@Z");
//};

//void evaluator_panic_targetdistance(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context const *, class c_firing_point_array *)
//{
//    mangled_ppc("?evaluator_panic_targetdistance@@YAXJPBUs_evaluator_definition@@PBUs_firing_position_evaluation_context@@PAVc_firing_point_array@@@Z");
//};

//void evaluator_influence_point(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context const *, class c_firing_point_array *)
//{
//    mangled_ppc("?evaluator_influence_point@@YAXJPBUs_evaluator_definition@@PBUs_firing_position_evaluation_context@@PAVc_firing_point_array@@@Z");
//};

//void evaluator_pursuit_search_pattern(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context const *, class c_firing_point_array *)
//{
//    mangled_ppc("?evaluator_pursuit_search_pattern@@YAXJPBUs_evaluator_definition@@PBUs_firing_position_evaluation_context@@PAVc_firing_point_array@@@Z");
//};

//void evaluator_pathfinding(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context const *, class c_firing_point_array *)
//{
//    mangled_ppc("?evaluator_pathfinding@@YAXJPBUs_evaluator_definition@@PBUs_firing_position_evaluation_context@@PAVc_firing_point_array@@@Z");
//};

//bool post_evaluator_attack(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context *, struct s_firing_position *)
//{
//    mangled_ppc("?post_evaluator_attack@@YA_NJPBUs_evaluator_definition@@PAUs_firing_position_evaluation_context@@PAUs_firing_position@@@Z");
//};

//float evaluator_get_post_evaluation_bound(struct s_firing_position_evaluation_context const *, struct s_evaluator_definition const *)
//{
//    mangled_ppc("?evaluator_get_post_evaluation_bound@@YAMPBUs_firing_position_evaluation_context@@PBUs_evaluator_definition@@@Z");
//};

//bool post_evaluator_guard_cover(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context *, struct s_firing_position *)
//{
//    mangled_ppc("?post_evaluator_guard_cover@@YA_NJPBUs_evaluator_definition@@PAUs_firing_position_evaluation_context@@PAUs_firing_position@@@Z");
//};

//bool post_evaluator_vehicle_hide_cover(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context *, struct s_firing_position *)
//{
//    mangled_ppc("?post_evaluator_vehicle_hide_cover@@YA_NJPBUs_evaluator_definition@@PAUs_firing_position_evaluation_context@@PAUs_firing_position@@@Z");
//};

//bool post_evaluator_uncover_visible(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context *, struct s_firing_position *)
//{
//    mangled_ppc("?post_evaluator_uncover_visible@@YA_NJPBUs_evaluator_definition@@PAUs_firing_position_evaluation_context@@PAUs_firing_position@@@Z");
//};

//bool post_evaluator_hide_cover(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context *, struct s_firing_position *)
//{
//    mangled_ppc("?post_evaluator_hide_cover@@YA_NJPBUs_evaluator_definition@@PAUs_firing_position_evaluation_context@@PAUs_firing_position@@@Z");
//};

//bool post_evaluator_3d_path_available(long, struct s_evaluator_definition const *, struct s_firing_position_evaluation_context *, struct s_firing_position *)
//{
//    mangled_ppc("?post_evaluator_3d_path_available@@YA_NJPBUs_evaluator_definition@@PAUs_firing_position_evaluation_context@@PAUs_firing_position@@@Z");
//};

//bool firing_position_forced_evaluation(long, struct s_firing_position_evaluation_context *, struct s_firing_position *)
//{
//    mangled_ppc("?firing_position_forced_evaluation@@YA_NJPAUs_firing_position_evaluation_context@@PAUs_firing_position@@@Z");
//};

//void firing_position_compute_line_of_sight(long, struct s_firing_position_evaluation_context *, struct s_firing_position *)
//{
//    mangled_ppc("?firing_position_compute_line_of_sight@@YAXJPAUs_firing_position_evaluation_context@@PAUs_firing_position@@@Z");
//};

//void firing_position_pre_evaluate(long, struct s_firing_position_evaluation_context *, class c_firing_point_array *)
//{
//    mangled_ppc("?firing_position_pre_evaluate@@YAXJPAUs_firing_position_evaluation_context@@PAVc_firing_point_array@@@Z");
//};

//bool firing_position_post_evaluate(long, struct s_firing_position_evaluation_context *, struct s_firing_position *)
//{
//    mangled_ppc("?firing_position_post_evaluate@@YA_NJPAUs_firing_position_evaluation_context@@PAUs_firing_position@@@Z");
//};

//bool actor_nearby_firing_positions(long, class c_ai_point3d const *, class c_sector_ref, float, float)
//{
//    mangled_ppc("?actor_nearby_firing_positions@@YA_NJPBVc_ai_point3d@@Vc_sector_ref@@MM@Z");
//};

//bool actor_nearby_firing_position_areas(long, class c_ai_point3d const *, float)
//{
//    mangled_ppc("?actor_nearby_firing_position_areas@@YA_NJPBVc_ai_point3d@@M@Z");
//};

//float actor_nearest_firing_position_distance(long)
//{
//    mangled_ppc("?actor_nearest_firing_position_distance@@YAMJ@Z");
//};

//bool firing_position_within_combat_range(float, class c_firing_point_array *, struct s_firing_position_evaluation_context const *)
//{
//    mangled_ppc("?firing_position_within_combat_range@@YA_NMPAVc_firing_point_array@@PBUs_firing_position_evaluation_context@@@Z");
//};

//struct s_firing_position_ref actor_select_firing_position(long, struct s_firing_position_evaluation_context *, struct s_firing_position *, long *, struct path_state *, bool *)
//{
//    mangled_ppc("?actor_select_firing_position@@YA?AUs_firing_position_ref@@JPAUs_firing_position_evaluation_context@@PAUs_firing_position@@PAJPAUpath_state@@PA_N@Z");
//};

//struct s_firing_position_ref actor_select_firing_position_internal(long, struct s_firing_position_evaluation_context *, class c_firing_point_array *, struct s_firing_position *, long *, struct path_state *, bool *)
//{
//    mangled_ppc("?actor_select_firing_position_internal@@YA?AUs_firing_position_ref@@JPAUs_firing_position_evaluation_context@@PAVc_firing_point_array@@PAUs_firing_position@@PAJPAUpath_state@@PA_N@Z");
//};

//bool firing_positions_get_post_evaluation_bound(long, struct s_firing_position_evaluation_context *)
//{
//    mangled_ppc("?firing_positions_get_post_evaluation_bound@@YA_NJPAUs_firing_position_evaluation_context@@@Z");
//};

//bool firing_position_compare(long, long, void const *)
//{
//    mangled_ppc("?firing_position_compare@@YA_NJJPBX@Z");
//};

//void actor_perform_evaluator_sanity_check(long)
//{
//    mangled_ppc("?actor_perform_evaluator_sanity_check@@YAXJ@Z");
//};

//void evaluation_mode_get_sane_evaluators(enum e_evaluation_mode, class c_big_flags_typed_no_init<long, 58> *)
//{
//    mangled_ppc("?evaluation_mode_get_sane_evaluators@@YAXW4e_evaluation_mode@@PAV?$c_big_flags_typed_no_init@J$0DK@@@@Z");
//};

//struct s_firing_position_ref actor_active_select_firing_position(long, struct s_firing_position_evaluation_context *, struct s_firing_position *, long *, struct path_state *, bool *)
//{
//    mangled_ppc("?actor_active_select_firing_position@@YA?AUs_firing_position_ref@@JPAUs_firing_position_evaluation_context@@PAUs_firing_position@@PAJPAUpath_state@@PA_N@Z");
//};

//float firing_positions_find_avoidance_threshold(class c_firing_point_array *, short *)
//{
//    mangled_ppc("?firing_positions_find_avoidance_threshold@@YAMPAVc_firing_point_array@@PAF@Z");
//};

//void actor_get_available_firing_positions(long, class c_firing_point_array *, struct s_firing_position_evaluation_context *)
//{
//    mangled_ppc("?actor_get_available_firing_positions@@YAXJPAVc_firing_point_array@@PAUs_firing_position_evaluation_context@@@Z");
//};

//void actor_get_combat_cue_firing_positions(long, class c_firing_point_array *, struct s_firing_position_evaluation_context *)
//{
//    mangled_ppc("?actor_get_combat_cue_firing_positions@@YAXJPAVc_firing_point_array@@PAUs_firing_position_evaluation_context@@@Z");
//};

//bool actor_get_dynamic_firing_positions(long, class c_firing_point_array *, struct s_firing_position_evaluation_context *)
//{
//    mangled_ppc("?actor_get_dynamic_firing_positions@@YA_NJPAVc_firing_point_array@@PAUs_firing_position_evaluation_context@@@Z");
//};

//bool squad_get_available_firing_positions(long, long, class c_firing_point_array *, struct s_firing_position_evaluation_context *)
//{
//    mangled_ppc("?squad_get_available_firing_positions@@YA_NJJPAVc_firing_point_array@@PAUs_firing_position_evaluation_context@@@Z");
//};

//void area_get_available_firing_positions(long, long, long, class c_firing_point_array *, struct s_firing_position_evaluation_context *, short, unsigned char)
//{
//    mangled_ppc("?area_get_available_firing_positions@@YAXJJJPAVc_firing_point_array@@PAUs_firing_position_evaluation_context@@FE@Z");
//};

//bool consider_firing_position(long, struct s_firing_position_ref, struct s_firing_position_evaluation_context const *)
//{
//    mangled_ppc("?consider_firing_position@@YA_NJUs_firing_position_ref@@PBUs_firing_position_evaluation_context@@@Z");
//};

//bool new_firing_position(long, struct s_firing_position_ref, struct s_firing_position *, struct s_firing_position_evaluation_context const *, bool, float)
//{
//    mangled_ppc("?new_firing_position@@YA_NJUs_firing_position_ref@@PAUs_firing_position@@PBUs_firing_position_evaluation_context@@_NM@Z");
//};

//void runtime_firing_position_setup_cornering_info(long, struct s_firing_position *, struct s_firing_position_evaluation_context const *)
//{
//    mangled_ppc("?runtime_firing_position_setup_cornering_info@@YAXJPAUs_firing_position@@PBUs_firing_position_evaluation_context@@@Z");
//};

//bool firing_position_valid(long, struct s_firing_position_ref, bool)
//{
//    mangled_ppc("?firing_position_valid@@YA_NJUs_firing_position_ref@@_N@Z");
//};

//bool area_valid_firing_positions(short, short, struct s_firing_position_ref)
//{
//    mangled_ppc("?area_valid_firing_positions@@YA_NFFUs_firing_position_ref@@@Z");
//};

//struct s_firing_position_ref actor_change_firing_position(long, struct s_firing_position_ref, struct s_firing_position *, long, struct path_state *)
//{
//    mangled_ppc("?actor_change_firing_position@@YA?AUs_firing_position_ref@@JU1@PAUs_firing_position@@JPAUpath_state@@@Z");
//};

//struct s_firing_position_ref actor_change_firing_position(long, struct s_firing_position_ref, struct s_firing_position *, long, struct path_state *, bool)
//{
//    mangled_ppc("?actor_change_firing_position@@YA?AUs_firing_position_ref@@JU1@PAUs_firing_position@@JPAUpath_state@@_N@Z");
//};

//void actor_clear_discarded_firing_positions(long, bool)
//{
//    mangled_ppc("?actor_clear_discarded_firing_positions@@YAXJ_N@Z");
//};

//void actor_discard_firing_position(long, struct s_firing_position_ref, bool)
//{
//    mangled_ppc("?actor_discard_firing_position@@YAXJUs_firing_position_ref@@_N@Z");
//};

//bool actor_firing_position_discarded(long, struct s_firing_position_ref)
//{
//    mangled_ppc("?actor_firing_position_discarded@@YA_NJUs_firing_position_ref@@@Z");
//};

//bool actor_at_firing_position(long)
//{
//    mangled_ppc("?actor_at_firing_position@@YA_NJ@Z");
//};

//bool actor_travelling_to_firing_position(long)
//{
//    mangled_ppc("?actor_travelling_to_firing_position@@YA_NJ@Z");
//};

//void actor_check_firing_position(long)
//{
//    mangled_ppc("?actor_check_firing_position@@YAXJ@Z");
//};

//short actor_get_area_flags(long)
//{
//    mangled_ppc("?actor_get_area_flags@@YAFJ@Z");
//};

//void actor_set_current_firing_position(long, struct s_firing_position_ref)
//{
//    mangled_ppc("?actor_set_current_firing_position@@YAXJUs_firing_position_ref@@@Z");
//};

//long firing_position_get_owner(struct s_firing_position_ref)
//{
//    mangled_ppc("?firing_position_get_owner@@YAJUs_firing_position_ref@@@Z");
//};

//bool firing_position_setup_current_definition(long)
//{
//    mangled_ppc("?firing_position_setup_current_definition@@YA_NJ@Z");
//};

//void firing_position_clear_current_definition(void)
//{
//    mangled_ppc("?firing_position_clear_current_definition@@YAXXZ");
//};

//bool firing_position_get_perch_entry(struct s_firing_position_ref, union real_point3d *, union vector3d *)
//{
//    mangled_ppc("?firing_position_get_perch_entry@@YA_NUs_firing_position_ref@@PATreal_point3d@@PATvector3d@@@Z");
//};

//bool firing_position_get_landing_point(struct s_firing_position_ref, union real_point3d *, union vector3d *)
//{
//    mangled_ppc("?firing_position_get_landing_point@@YA_NUs_firing_position_ref@@PATreal_point3d@@PATvector3d@@@Z");
//};

//struct s_firing_position_definition * firing_position_ref_get_definition(struct s_firing_position_ref)
//{
//    mangled_ppc("?firing_position_ref_get_definition@@YAPAUs_firing_position_definition@@Us_firing_position_ref@@@Z");
//};

//struct s_firing_position_definition * combat_cue_get_firing_position_definition(struct s_firing_position_ref)
//{
//    mangled_ppc("?combat_cue_get_firing_position_definition@@YAPAUs_firing_position_definition@@Us_firing_position_ref@@@Z");
//};

//struct s_firing_position_definition * static_firing_position_ref_get_definition(struct s_firing_position_ref)
//{
//    mangled_ppc("?static_firing_position_ref_get_definition@@YAPAUs_firing_position_definition@@Us_firing_position_ref@@@Z");
//};

//short firing_position_get_area(struct s_firing_position_ref)
//{
//    mangled_ppc("?firing_position_get_area@@YAFUs_firing_position_ref@@@Z");
//};

//bool verify_firing_position(short, short, bool)
//{
//    mangled_ppc("?verify_firing_position@@YA_NFF_N@Z");
//};

//public: bool c_static_stack<struct s_firing_position_influence_point, 48>::empty(void) const
//{
//    mangled_ppc("?empty@?$c_static_stack@Us_firing_position_influence_point@@$0DA@@@QBA_NXZ");
//};

//public: long c_static_stack<struct s_firing_position_influence_point, 48>::count(void) const
//{
//    mangled_ppc("?count@?$c_static_stack@Us_firing_position_influence_point@@$0DA@@@QBAJXZ");
//};

//public: void c_static_stack<struct s_firing_position_influence_point, 48>::push_back(struct s_firing_position_influence_point const &)
//{
//    mangled_ppc("?push_back@?$c_static_stack@Us_firing_position_influence_point@@$0DA@@@QAAXABUs_firing_position_influence_point@@@Z");
//};

//public: struct s_firing_position_influence_point const * c_static_stack<struct s_firing_position_influence_point, 48>::begin(void) const
//{
//    mangled_ppc("?begin@?$c_static_stack@Us_firing_position_influence_point@@$0DA@@@QBAPBUs_firing_position_influence_point@@XZ");
//};

//public: struct s_firing_position_influence_point const * c_static_stack<struct s_firing_position_influence_point, 48>::end(void) const
//{
//    mangled_ppc("?end@?$c_static_stack@Us_firing_position_influence_point@@$0DA@@@QBAPBUs_firing_position_influence_point@@XZ");
//};

//public: bool c_static_stack<struct s_firing_position, 512>::empty(void) const
//{
//    mangled_ppc("?empty@?$c_static_stack@Us_firing_position@@$0CAA@@@QBA_NXZ");
//};

//public: bool c_static_stack<struct s_firing_position, 512>::full(void) const
//{
//    mangled_ppc("?full@?$c_static_stack@Us_firing_position@@$0CAA@@@QBA_NXZ");
//};

//public: static long c_static_stack<struct s_firing_position, 512>::maximum_count(void)
//{
//    mangled_ppc("?maximum_count@?$c_static_stack@Us_firing_position@@$0CAA@@@SAJXZ");
//};

//public: long c_static_stack<struct s_firing_position, 512>::push(void)
//{
//    mangled_ppc("?push@?$c_static_stack@Us_firing_position@@$0CAA@@@QAAJXZ");
//};

//public: void c_static_stack<struct s_firing_position, 512>::push_back(struct s_firing_position const &)
//{
//    mangled_ppc("?push_back@?$c_static_stack@Us_firing_position@@$0CAA@@@QAAXABUs_firing_position@@@Z");
//};

//public: struct s_firing_position const * c_static_stack<struct s_firing_position, 512>::get(long) const
//{
//    mangled_ppc("?get@?$c_static_stack@Us_firing_position@@$0CAA@@@QBAPBUs_firing_position@@J@Z");
//};

//public: struct s_firing_position * c_static_stack<struct s_firing_position, 512>::get_top(void)
//{
//    mangled_ppc("?get_top@?$c_static_stack@Us_firing_position@@$0CAA@@@QAAPAUs_firing_position@@XZ");
//};

//public: c_character_runtime_properties<class c_character_firing_point_evaluation_properties_internal>::c_character_runtime_properties<class c_character_firing_point_evaluation_properties_internal>(void)
//{
//    mangled_ppc("??0?$c_character_runtime_properties@Vc_character_firing_point_evaluation_properties_internal@@@@QAA@XZ");
//};

//public: bool c_character_runtime_properties<class c_character_firing_point_evaluation_properties_internal>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_character_runtime_properties@Vc_character_firing_point_evaluation_properties_internal@@@@QBA_NXZ");
//};

//public: union real_point2d * s_static_array<union real_point2d, 1024>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$s_static_array@Treal_point2d@@$0EAA@@@QAAPATreal_point2d@@XZ");
//};

//public: static long s_static_array<union real_point2d, 1024>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Treal_point2d@@$0EAA@@@SAJXZ");
//};

//public: static long s_static_array<short, 1024>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@F$0EAA@@@SAJXZ");
//};

//public: long c_static_stack<struct s_firing_position_influence_point, 48>::push(void)
//{
//    mangled_ppc("?push@?$c_static_stack@Us_firing_position_influence_point@@$0DA@@@QAAJXZ");
//};

//public: struct s_firing_position_influence_point * c_static_stack<struct s_firing_position_influence_point, 48>::get(long)
//{
//    mangled_ppc("?get@?$c_static_stack@Us_firing_position_influence_point@@$0DA@@@QAAPAUs_firing_position_influence_point@@J@Z");
//};

//public: long c_static_stack<struct s_firing_position, 512>::top(void) const
//{
//    mangled_ppc("?top@?$c_static_stack@Us_firing_position@@$0CAA@@@QBAJXZ");
//};

//public: bool c_static_stack<struct s_firing_position_influence_point, 48>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_firing_position_influence_point@@$0DA@@@QBA_NJ@Z");
//};

//public: long c_big_flags_typed_no_init<long, 58>::get_lowest_bit_set(void) const
//{
//    mangled_ppc("?get_lowest_bit_set@?$c_big_flags_typed_no_init@J$0DK@@@QBAJXZ");
//};

//public: void c_big_flags_typed_no_init<long, 58>::and_not(class c_big_flags_typed_no_init<long, 58> const *)
//{
//    mangled_ppc("?and_not@?$c_big_flags_typed_no_init@J$0DK@@@QAAXPBV1@@Z");
//};

//public: void c_flags_no_init<enum e_bunker_direction, unsigned short, 4, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_bunker_direction@@G$03Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: void c_flags_no_init<enum e_bunker_direction, unsigned short, 4, struct s_default_enum_string_resolver>::set(enum e_bunker_direction, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_bunker_direction@@G$03Us_default_enum_string_resolver@@@@QAAXW4e_bunker_direction@@_N@Z");
//};

//public: union real_point2d & s_static_array<union real_point2d, 1024>::operator[]<short>(short)
//{
//    mangled_ppc("??$?AF@?$s_static_array@Treal_point2d@@$0EAA@@@QAAAATreal_point2d@@F@Z");
//};

//public: union real_point2d & s_static_array<union real_point2d, 1024>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Treal_point2d@@$0EAA@@@QAAAATreal_point2d@@J@Z");
//};

//public: void c_big_flags_typed_no_init<long, 58>::and_not_range(class c_big_flags_typed_no_init<long, 58> const *, long, long)
//{
//    mangled_ppc("?and_not_range@?$c_big_flags_typed_no_init@J$0DK@@@QAAXPBV1@JJ@Z");
//};

//private: static unsigned short c_flags_no_init<enum e_bunker_direction, unsigned short, 4, struct s_default_enum_string_resolver>::flag_size_type(enum e_bunker_direction)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_bunker_direction@@G$03Us_default_enum_string_resolver@@@@CAGW4e_bunker_direction@@@Z");
//};

//public: static bool s_static_array<union real_point2d, 1024>::valid<short>(short)
//{
//    mangled_ppc("??$valid@F@?$s_static_array@Treal_point2d@@$0EAA@@@SA_NF@Z");
//};

//public: static bool s_static_array<union real_point2d, 1024>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Treal_point2d@@$0EAA@@@SA_NJ@Z");
//};

//protected: static unsigned long c_big_flags_typed_no_init<long, 58>::get_mask_of_first_slice_of_chunk_inclusive(long)
//{
//    mangled_ppc("?get_mask_of_first_slice_of_chunk_inclusive@?$c_big_flags_typed_no_init@J$0DK@@@KAKJ@Z");
//};

//public: struct s_firing_position * c_firing_point_array::iterate_valid(long)
//{
//    mangled_ppc("?iterate_valid@c_firing_point_array@@QAAPAUs_firing_position@@J@Z");
//};

//public: struct s_stimulus_payload_combat_cue const * c_stimulus_payload::get_combat_cue_data_const(void) const
//{
//    mangled_ppc("?get_combat_cue_data_const@c_stimulus_payload@@QBAPBUs_stimulus_payload_combat_cue@@XZ");
//};

//public: struct s_stimulus_payload_prefer_firing_points const * c_stimulus_payload::get_firing_points_data_const(void) const
//{
//    mangled_ppc("?get_firing_points_data_const@c_stimulus_payload@@QBAPBUs_stimulus_payload_prefer_firing_points@@XZ");
//};

//public: struct s_firing_position & c_static_stack<struct s_firing_position, 512>::get_element(long)
//{
//    mangled_ppc("?get_element@?$c_static_stack@Us_firing_position@@$0CAA@@@QAAAAUs_firing_position@@J@Z");
//};

