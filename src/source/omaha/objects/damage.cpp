/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// float const k_maximum_body_damage_considered_semi_trivial; // "?k_maximum_body_damage_considered_semi_trivial@@3MB"
// float const k_maximum_shield_damage_considered_semi_trivial; // "?k_maximum_shield_damage_considered_semi_trivial@@3MB"
// float const k_current_damage_decay_delay_default; // "?k_current_damage_decay_delay_default@@3MB"
// float const k_current_damage_decay_time_default; // "?k_current_damage_decay_time_default@@3MB"
// float const k_recent_damage_decay_delay_default; // "?k_recent_damage_decay_delay_default@@3MB"
// float const k_recent_damage_decay_time_default; // "?k_recent_damage_decay_time_default@@3MB"
// float const k_over_charge_time; // "?k_over_charge_time@@3MB"
// float const k_over_charge_deplete_time; // "?k_over_charge_deplete_time@@3MB"
// bool g_damage_use_prototype_logic; // "?g_damage_use_prototype_logic@@3_NA"
// float minimum_havok_object_acceleration; // "?minimum_havok_object_acceleration@@3MA"
// float minimum_havok_biped_object_acceleration; // "?minimum_havok_biped_object_acceleration@@3MA"
// char const **global_damage_control_name_table; // "?global_damage_control_name_table@@3PAPBDA"
// long global_damage_control_flags; // "?global_damage_control_flags@@3JA"
// long global_debug_damage_object_index; // "?global_debug_damage_object_index@@3JA"
// float debug_damage_player_inflicted_duration; // "?debug_damage_player_inflicted_duration@@3MA"
// bool debug_damage_this_event; // "?debug_damage_this_event@@3_NA"
// bool debug_damage; // "?debug_damage@@3_NA"
// bool debug_player_damage; // "?debug_player_damage@@3_NA"
// bool debug_damage_verbose; // "?debug_damage_verbose@@3_NA"
// bool debug_damage_radius; // "?debug_damage_radius@@3_NA"
// bool debug_damage_transfer; // "?debug_damage_transfer@@3_NA"
// bool debug_damage_response; // "?debug_damage_response@@3_NA"
// bool debug_damage_acceleration; // "?debug_damage_acceleration@@3_NA"
// bool debug_damage_aoe; // "?debug_damage_aoe@@3_NA"
// bool debug_damage_armor; // "?debug_damage_armor@@3_NA"
// bool debug_damage_material; // "?debug_damage_material@@3_NA"
// bool debug_damage_networking; // "?debug_damage_networking@@3_NA"
// bool debug_damage_filter_output; // "?debug_damage_filter_output@@3_NA"
// bool debug_damage_player_inflicted_recent; // "?debug_damage_player_inflicted_recent@@3_NA"
// bool debug_damage_large_font; // "?debug_damage_large_font@@3_NA"
// bool g_damage_response_ignore_seat_ejection; // "?g_damage_response_ignore_seat_ejection@@3_NA"
// float const k_maximum_object_acceleration_considered_semi_trivial; // "?k_maximum_object_acceleration_considered_semi_trivial@@3MB"

// float damage_armor_table_lookup(long, long, long, long);
// float object_get_actual_body_vitality(long, bool);
// float object_get_actual_shield_vitality(long, bool);
// float object_get_maximum_body_vitality_normalized(long, bool);
// float object_get_maximum_body_vitality(long, bool);
// float object_get_maximum_shield_vitality_normalized(long, bool);
// float object_get_maximum_shield_vitality(long, bool);
// float object_get_damage_points(long, float, float, bool);
// void damage_data_new(struct s_damage_data *, long);
// void area_of_effect_cause_damage_to_children_recursive(long, long, float, struct s_damage_data const *, enum e_predictability, struct s_area_of_effect_result *);
// float object_get_recent_body_damage(long);
// float object_get_recent_shield_damage(long);
// void object_can_take_damage(long);
// void object_cannot_take_damage(long);
// void object_set_ranged_attack_inhibited(long, bool);
// void object_set_melee_attack_inhibited(long, bool);
// short object_model_targets_destroyed(long, long);
// bool object_model_target_destroyed(long, long);
// class c_global_material_type object_get_material(long, long);
// void object_scripting_cannot_die(long, bool);
// void object_scripting_cannot_die_except_for_kill_volumes(long, bool);
// long damage_group_bsearch_proc(void const *, void const *, void const *);
// long armor_modifier_bsearch_proc(void const *, void const *, void const *);
// void area_of_effect_cause_damage_to_object(struct s_damage_data *, long, long, bool, enum e_predictability, struct s_area_of_effect_result *);
// struct s_model_damage_info const * object_get_damage_info(long);
// void object_cause_damage_simple(struct s_damage_data *, long, enum e_predictability);
// void object_cause_damage(struct s_damage_data *, long, short, short, short, enum e_predictability);
// bool player_is_cheating_death(long, struct s_damage_data const *);
// void object_deplete_body_internal(long, struct s_damage_data const *, struct s_damage_owner const *, struct s_damage_response_data *, bool, struct s_damage_reporting_info const &);
// void object_deplete_shield_internal(long, struct s_damage_owner const *, struct s_damage_response_data *);
// bool area_effect_damage_test_obstruction(long, union real_point3d const *, struct s_damage_data const *);
// void debug_damage_add_obstruction_test(union real_point3d const *, union real_point3d const *, union real_point3d const *);
// void debug_damage_add_obstruction_test(union real_point3d const *, union vector3d const *, union real_point3d const *);
// bool area_effect_damage_consider_object(long, struct s_damage_data const *);
// void area_of_effect_result_record(struct s_area_of_effect_result *, long, float);
// void area_of_effect_cause_damage_to_object_targets(struct s_damage_data *, float, long, struct s_damage_response_data *);
// void object_set_damage_taking_internal(long, bool);
// void object_set_damage_flag_internal(long, enum e_object_damage_flags, bool);
// void object_set_friendly_damage_immunity(long, bool);
// void object_compute_body_damage(long, struct damage_definition const *, struct s_damage_data *, struct s_damage_response_data *);
// void object_damage_body(long, struct damage_definition const *, struct s_damage_data *, struct s_damage_response_data *);
// float compute_adjusted_body_damage(long, struct damage_definition const *, struct s_damage_data const *, struct s_damage_response_data const *);
// void object_compute_shield_damage(long, struct damage_definition const *, struct s_damage_data const *, struct s_damage_response_data *);
// void object_create_shield_damage_effects(long, struct s_damage_data const *, struct s_damage_response_data const *);
// void object_damage_shield(long, struct damage_definition const *, struct s_damage_data const *, struct s_damage_response_data const *);
// void object_compute_damage_aftermath(long, struct s_damage_data const *, struct s_damage_response_data const *, struct s_damage_aftermath_result_data *);
// void object_apply_damage_aftermath(long, struct s_damage_aftermath_result_data const *);
// void object_destroy_with_information(long, long, long, struct s_damage_reporting_info const &, bool);
// void object_destroy_notify_children(long);
// float object_compute_damage_acceleration(long, long, long, struct s_damage_owner const *, float, union vector3d const *, union real_point3d const *, bool, bool, bool, bool, bool *, bool *);
// bool object_can_be_accelerated_by_damage(long);
// void object_apply_damage_acceleration(long, long, long, struct s_damage_owner const *, float, union vector3d const *, union real_point3d const *, bool, bool, bool, bool);
// void damage_effect_new_on_object(long, long, struct s_damage_owner const *);
// float compute_total_damage(struct s_damage_data *, struct s_damage_effect_definition *, struct damage_definition const *, long, bool *);
// long get_player_index_from_object_or_parents(long);
// bool material_is_headshotable(struct s_model_damage_info const *, struct s_model_material const *);
// struct object_damage_section * object_damage_section_get(long, long);
// void damage_section_respond_to_damage(struct s_model_damage_info const *, long, struct s_damage_owner const *, struct s_damage_reporting_info const &, long, float, long, struct s_damage_response_data *);
// void damage_section_find_damage_response_thresholds(long, long, struct s_model_damage_section const *, float *, float *, float *);
// float damage_section_get_damage_section_max_vitality(struct s_model_damage_info const *, long, long);
// bool damage_section_deplete_next_response(struct s_model_damage_info const *, long, struct s_damage_owner const *, float, struct s_damage_reporting_info const &, long, long, struct s_damage_response_data *);
// void damage_spawn_effect_from_marker_name(long, long, struct s_damage_owner const *, struct s_damage_reporting_info const &, long, bool, bool);
// bool damage_section_response_is_valid(struct s_model_damage_info const *, long, struct s_damage_owner const *, long, long);
// void damage_section_response_fire(struct s_model_damage_info const *, long, struct s_damage_owner const *, struct s_damage_reporting_info const &, long, long, struct s_damage_response_data *);
// void object_deplete_body(long, struct s_damage_owner const *, struct s_damage_reporting_info const &);
// void damage_spawn_damage_effect_from_marker_name(long, long, struct s_damage_owner const *, long, struct s_damage_reporting_info const &);
// long area_of_effect_cause_damage(struct s_damage_data *, long, enum e_predictability);
// long area_of_effect_cause_damage(struct s_damage_data *, long, long, enum e_predictability);
// bool area_of_effect_object_comparison_function(void const *, void const *, void const *);
// bool object_is_non_critical_area_of_effect_object(long);
// void area_of_effect_result_new(struct s_area_of_effect_result *);
// long area_of_effect_result_get_primary_damage_object_index(struct s_area_of_effect_result const *);
// void destroy_child_objects_from_marker_name(long, long);
// void object_destroy(long);
// void damage_section_damage_one_constraint(struct s_model_damage_info const *, struct s_instantaneous_damage_response const *, unsigned short, unsigned short *);
// void damage_section_damage_all_constraints(struct s_model_damage_info const *, struct s_instantaneous_damage_response const *, unsigned short, unsigned short *);
// void damage_section_deplete(struct s_model_damage_info const *, long, struct s_damage_owner const *, struct s_damage_reporting_info const &, long, struct s_damage_response_data *);
// float calculate_body_damage_after_damage_section(struct s_model_damage_info const *, struct s_model_material const *, long, float, float, struct s_damage_response_data *);
// void apply_body_damage_to_damage_section(struct s_model_damage_info const *, struct s_model_material const *, long, struct s_damage_owner const *, struct s_damage_reporting_info const &, float, long, struct s_damage_response_data *);
// void damage_control_get(char const *);
// void damage_control_set(char const *, bool);
// void debug_damage_track_damage_inflicted(long, float);
// bool object_is_vehicle_occupied_by_object_or_player(long, bool, bool, long, bool *, long *);
// void handle_vehicle_damage_transfer(struct s_damage_data const *, long);
// long object_find_constraint_connected_regions(long, long, long *);
// public: long c_runtime_node_to_physics_model_rigid_body_index_mapping::get_rigid_body_count(long) const;
// public: long c_runtime_node_to_physics_model_rigid_body_index_mapping::get_node_count(void) const;
// public: long c_runtime_node_to_physics_model_rigid_body_index_mapping::get_rigid_body_index(long, long) const;
// bool object_constraint_is_broken(long, enum e_physics_model_constraint_type, long);
// long object_find_constraint_search_initial_region(long);
// void object_damage_constraints(long, unsigned short, unsigned short);
// void object_kill_instantly(long, bool, bool, bool, struct s_damage_owner const *, struct s_damage_reporting_info const &);
// float object_determine_rider_damage_scale(struct s_damage_data const *, long, long);
// void damage_seat_get_transfer_info(long, struct s_damage_seat_info const *, struct s_damage_seat_region_state_setting *);
// public: c_aoe_damage_batchifier::c_aoe_damage_batchifier(void);
// public: c_aoe_damage_batchifier::s_batch::s_batch(void);
// public: c_aoe_damage_batchifier::~c_aoe_damage_batchifier(void);
// private: long c_aoe_damage_batchifier::find_or_add_batch_index(struct s_damage_data *);
// private: long c_aoe_damage_batchifier::get_new_instance_index(void);
// private: void c_aoe_damage_batchifier::undo_new_instance_index(void);
// private: void c_aoe_damage_batchifier::add_damage_instance_internal(long, long, struct s_damage_data *);
// public: bool c_aoe_damage_batchifier::add_damage_instance(struct s_damage_data *);
// private: float const c_aoe_damage_batchifier::get_default_batch_radius(void) const;
// public: float c_aoe_damage_batchifier::get_search_radius(void);
// private: void c_aoe_damage_batchifier::flush(void);
// public: bool c_aoe_damage_batchifier::get_closest_instance(union real_point3d const *, union real_point3d *, float *);
// void damage_info_postprocess_old(long);
// bool compare_instant_responses(void const *, void const *, void const *);
// void object_damage_new_old(long);
// void object_damage_new(long);
// void object_cause_damage_old(struct s_damage_data *, long, short, short, short, enum e_predictability);
// bool object_damage_update_old(long);
// bool object_damage_update(long);
// void object_undeplete_shield_internal(long);
// bool object_damage_update_decay(class c_character_vitality_properties_internal const *, bool, float *, float *, char *);
// void object_initialize_vitality_old(long, float *, float *);
// void object_initialize_vitality(long, float *, float *);
// void object_apply_damage_aftermath_old(long, struct s_damage_aftermath_result_data const *);
// void object_destroy_old(long);
// void object_destroy_without_delayed_effects_old(long);
// void object_destroy_without_delayed_effects(long);
// void object_damage_damage_section_old(long, long, float, struct s_damage_reporting_info const &);
// void object_damage_damage_section(long, long, float, struct s_damage_reporting_info const &);
// void object_deplete_body_old(long, struct s_damage_owner const *, struct s_damage_reporting_info const &);
// void object_deplete_body_silent_old(long, struct s_damage_owner const *, struct s_damage_reporting_info const &);
// void object_deplete_body_silent(long, struct s_damage_owner const *, struct s_damage_reporting_info const &);
// void object_cause_fatal_damage_aftermath_old(long, char, short, union vector3d const *, struct s_damage_reporting_info const &, long, long);
// void object_cause_fatal_damage_aftermath(long, char, short, union vector3d const *, struct s_damage_reporting_info const &, long, long);
// void render_debug_object_damage_old(void);
// void render_debug_object_damage(void);
// void render_debug_object_damage_sections(long, char *, long);
// void object_deplete_shield_old(long, bool, struct s_damage_owner const *);
// void object_deplete_shield(long, bool, struct s_damage_owner const *);
// void object_kill_instantly_old(long, bool, bool, bool, struct s_damage_owner const *, struct s_damage_reporting_info const &);
// bool object_constraint_is_broken_old(long, enum e_physics_model_constraint_type, long);
// bool object_constraint_is_loosened_old(long, enum e_physics_model_constraint_type, long);
// bool object_constraint_is_loosened(long, enum e_physics_model_constraint_type, long);
// void object_damage_constraints_old(long, unsigned short, unsigned short);
// void object_damage_handle_resurrection_old(long);
// void object_damage_handle_resurrection(long);
// bool object_scripting_vitality_pinned_old(long);
// bool object_scripting_vitality_pinned(long);
// void damage_section_response_fire_from_simulation_event_old(long, long, long, struct s_damage_reporting_info const &, enum e_damage_section_response_type);
// void damage_section_response_fire_from_simulation_event(long, long, long, struct s_damage_reporting_info const &, enum e_damage_section_response_type);
// long area_of_effect_cause_damage_old(struct s_damage_data *, long, enum e_predictability);
// long area_of_effect_cause_damage_old(struct s_damage_data *, long, long, enum e_predictability);
// void damage_handle_vehicle_exit_old(long, long);
// void damage_handle_vehicle_exit(long, long);
// void damage_effect_new_on_weapon_old(long, long);
// void damage_effect_new_on_weapon(long, long);
// bool material_is_headshotable_old(long, struct s_model_material const *);
// public: void s_static_array<struct s_aoe_obstruction_result, 32>::set_memory(long);
// public: class c_character_vitality_properties_internal const * c_character_runtime_properties<class c_character_vitality_properties_internal>::get_properties(void);
// public: bool c_static_stack<struct s_debug_obstruction_line, 32>::full(void) const;
// public: long c_static_stack<struct s_debug_obstruction_line, 32>::count(void) const;
// public: void c_static_stack<struct s_debug_obstruction_line, 32>::clear(void);
// public: long c_static_stack<struct s_debug_obstruction_line, 32>::push(void);
// public: struct s_debug_obstruction_line & c_static_stack<struct s_debug_obstruction_line, 32>::operator[](long);
// public: struct s_debug_obstruction_line * c_static_stack<struct s_debug_obstruction_line, 32>::get_top(void);
// public: bool c_static_stack<struct s_debug_obstruction_line, 32>::valid(void) const;
// public: bool c_static_stack<struct s_debug_obstruction_line, 32>::valid(long) const;
// public: long c_static_stack<struct s_debug_obstruction_line, 32>::top(void) const;
// public: struct s_debug_obstruction_line * c_static_stack<struct s_debug_obstruction_line, 32>::get(long);
// public: bool c_static_stack<struct s_debug_obstruction_line, 32>::empty(void) const;
// public: <unnamed-type-global_debug_damage_radius_data>::<unnamed-type-global_debug_damage_radius_data>(void);
// public: c_static_stack<struct s_debug_obstruction_line, 32>::c_static_stack<struct s_debug_obstruction_line, 32>(void);

//float damage_armor_table_lookup(long, long, long, long)
//{
//    mangled_ppc("?damage_armor_table_lookup@@YAMJJJJ@Z");
//};

//float object_get_actual_body_vitality(long, bool)
//{
//    mangled_ppc("?object_get_actual_body_vitality@@YAMJ_N@Z");
//};

//float object_get_actual_shield_vitality(long, bool)
//{
//    mangled_ppc("?object_get_actual_shield_vitality@@YAMJ_N@Z");
//};

//float object_get_maximum_body_vitality_normalized(long, bool)
//{
//    mangled_ppc("?object_get_maximum_body_vitality_normalized@@YAMJ_N@Z");
//};

//float object_get_maximum_body_vitality(long, bool)
//{
//    mangled_ppc("?object_get_maximum_body_vitality@@YAMJ_N@Z");
//};

//float object_get_maximum_shield_vitality_normalized(long, bool)
//{
//    mangled_ppc("?object_get_maximum_shield_vitality_normalized@@YAMJ_N@Z");
//};

//float object_get_maximum_shield_vitality(long, bool)
//{
//    mangled_ppc("?object_get_maximum_shield_vitality@@YAMJ_N@Z");
//};

//float object_get_damage_points(long, float, float, bool)
//{
//    mangled_ppc("?object_get_damage_points@@YAMJMM_N@Z");
//};

//void damage_data_new(struct s_damage_data *, long)
//{
//    mangled_ppc("?damage_data_new@@YAXPAUs_damage_data@@J@Z");
//};

//void area_of_effect_cause_damage_to_children_recursive(long, long, float, struct s_damage_data const *, enum e_predictability, struct s_area_of_effect_result *)
//{
//    mangled_ppc("?area_of_effect_cause_damage_to_children_recursive@@YAXJJMPBUs_damage_data@@W4e_predictability@@PAUs_area_of_effect_result@@@Z");
//};

//float object_get_recent_body_damage(long)
//{
//    mangled_ppc("?object_get_recent_body_damage@@YAMJ@Z");
//};

//float object_get_recent_shield_damage(long)
//{
//    mangled_ppc("?object_get_recent_shield_damage@@YAMJ@Z");
//};

//void object_can_take_damage(long)
//{
//    mangled_ppc("?object_can_take_damage@@YAXJ@Z");
//};

//void object_cannot_take_damage(long)
//{
//    mangled_ppc("?object_cannot_take_damage@@YAXJ@Z");
//};

//void object_set_ranged_attack_inhibited(long, bool)
//{
//    mangled_ppc("?object_set_ranged_attack_inhibited@@YAXJ_N@Z");
//};

//void object_set_melee_attack_inhibited(long, bool)
//{
//    mangled_ppc("?object_set_melee_attack_inhibited@@YAXJ_N@Z");
//};

//short object_model_targets_destroyed(long, long)
//{
//    mangled_ppc("?object_model_targets_destroyed@@YAFJJ@Z");
//};

//bool object_model_target_destroyed(long, long)
//{
//    mangled_ppc("?object_model_target_destroyed@@YA_NJJ@Z");
//};

//class c_global_material_type object_get_material(long, long)
//{
//    mangled_ppc("?object_get_material@@YA?AVc_global_material_type@@JJ@Z");
//};

//void object_scripting_cannot_die(long, bool)
//{
//    mangled_ppc("?object_scripting_cannot_die@@YAXJ_N@Z");
//};

//void object_scripting_cannot_die_except_for_kill_volumes(long, bool)
//{
//    mangled_ppc("?object_scripting_cannot_die_except_for_kill_volumes@@YAXJ_N@Z");
//};

//long damage_group_bsearch_proc(void const *, void const *, void const *)
//{
//    mangled_ppc("?damage_group_bsearch_proc@@YAJPBX00@Z");
//};

//long armor_modifier_bsearch_proc(void const *, void const *, void const *)
//{
//    mangled_ppc("?armor_modifier_bsearch_proc@@YAJPBX00@Z");
//};

//void area_of_effect_cause_damage_to_object(struct s_damage_data *, long, long, bool, enum e_predictability, struct s_area_of_effect_result *)
//{
//    mangled_ppc("?area_of_effect_cause_damage_to_object@@YAXPAUs_damage_data@@JJ_NW4e_predictability@@PAUs_area_of_effect_result@@@Z");
//};

//struct s_model_damage_info const * object_get_damage_info(long)
//{
//    mangled_ppc("?object_get_damage_info@@YAPBUs_model_damage_info@@J@Z");
//};

//void object_cause_damage_simple(struct s_damage_data *, long, enum e_predictability)
//{
//    mangled_ppc("?object_cause_damage_simple@@YAXPAUs_damage_data@@JW4e_predictability@@@Z");
//};

//void object_cause_damage(struct s_damage_data *, long, short, short, short, enum e_predictability)
//{
//    mangled_ppc("?object_cause_damage@@YAXPAUs_damage_data@@JFFFW4e_predictability@@@Z");
//};

//bool player_is_cheating_death(long, struct s_damage_data const *)
//{
//    mangled_ppc("?player_is_cheating_death@@YA_NJPBUs_damage_data@@@Z");
//};

//void object_deplete_body_internal(long, struct s_damage_data const *, struct s_damage_owner const *, struct s_damage_response_data *, bool, struct s_damage_reporting_info const &)
//{
//    mangled_ppc("?object_deplete_body_internal@@YAXJPBUs_damage_data@@PBUs_damage_owner@@PAUs_damage_response_data@@_NABUs_damage_reporting_info@@@Z");
//};

//void object_deplete_shield_internal(long, struct s_damage_owner const *, struct s_damage_response_data *)
//{
//    mangled_ppc("?object_deplete_shield_internal@@YAXJPBUs_damage_owner@@PAUs_damage_response_data@@@Z");
//};

//bool area_effect_damage_test_obstruction(long, union real_point3d const *, struct s_damage_data const *)
//{
//    mangled_ppc("?area_effect_damage_test_obstruction@@YA_NJPBTreal_point3d@@PBUs_damage_data@@@Z");
//};

//void debug_damage_add_obstruction_test(union real_point3d const *, union real_point3d const *, union real_point3d const *)
//{
//    mangled_ppc("?debug_damage_add_obstruction_test@@YAXPBTreal_point3d@@00@Z");
//};

//void debug_damage_add_obstruction_test(union real_point3d const *, union vector3d const *, union real_point3d const *)
//{
//    mangled_ppc("?debug_damage_add_obstruction_test@@YAXPBTreal_point3d@@PBTvector3d@@0@Z");
//};

//bool area_effect_damage_consider_object(long, struct s_damage_data const *)
//{
//    mangled_ppc("?area_effect_damage_consider_object@@YA_NJPBUs_damage_data@@@Z");
//};

//void area_of_effect_result_record(struct s_area_of_effect_result *, long, float)
//{
//    mangled_ppc("?area_of_effect_result_record@@YAXPAUs_area_of_effect_result@@JM@Z");
//};

//void area_of_effect_cause_damage_to_object_targets(struct s_damage_data *, float, long, struct s_damage_response_data *)
//{
//    mangled_ppc("?area_of_effect_cause_damage_to_object_targets@@YAXPAUs_damage_data@@MJPAUs_damage_response_data@@@Z");
//};

//void object_set_damage_taking_internal(long, bool)
//{
//    mangled_ppc("?object_set_damage_taking_internal@@YAXJ_N@Z");
//};

//void object_set_damage_flag_internal(long, enum e_object_damage_flags, bool)
//{
//    mangled_ppc("?object_set_damage_flag_internal@@YAXJW4e_object_damage_flags@@_N@Z");
//};

//void object_set_friendly_damage_immunity(long, bool)
//{
//    mangled_ppc("?object_set_friendly_damage_immunity@@YAXJ_N@Z");
//};

//void object_compute_body_damage(long, struct damage_definition const *, struct s_damage_data *, struct s_damage_response_data *)
//{
//    mangled_ppc("?object_compute_body_damage@@YAXJPBUdamage_definition@@PAUs_damage_data@@PAUs_damage_response_data@@@Z");
//};

//void object_damage_body(long, struct damage_definition const *, struct s_damage_data *, struct s_damage_response_data *)
//{
//    mangled_ppc("?object_damage_body@@YAXJPBUdamage_definition@@PAUs_damage_data@@PAUs_damage_response_data@@@Z");
//};

//float compute_adjusted_body_damage(long, struct damage_definition const *, struct s_damage_data const *, struct s_damage_response_data const *)
//{
//    mangled_ppc("?compute_adjusted_body_damage@@YAMJPBUdamage_definition@@PBUs_damage_data@@PBUs_damage_response_data@@@Z");
//};

//void object_compute_shield_damage(long, struct damage_definition const *, struct s_damage_data const *, struct s_damage_response_data *)
//{
//    mangled_ppc("?object_compute_shield_damage@@YAXJPBUdamage_definition@@PBUs_damage_data@@PAUs_damage_response_data@@@Z");
//};

//void object_create_shield_damage_effects(long, struct s_damage_data const *, struct s_damage_response_data const *)
//{
//    mangled_ppc("?object_create_shield_damage_effects@@YAXJPBUs_damage_data@@PBUs_damage_response_data@@@Z");
//};

//void object_damage_shield(long, struct damage_definition const *, struct s_damage_data const *, struct s_damage_response_data const *)
//{
//    mangled_ppc("?object_damage_shield@@YAXJPBUdamage_definition@@PBUs_damage_data@@PBUs_damage_response_data@@@Z");
//};

//void object_compute_damage_aftermath(long, struct s_damage_data const *, struct s_damage_response_data const *, struct s_damage_aftermath_result_data *)
//{
//    mangled_ppc("?object_compute_damage_aftermath@@YAXJPBUs_damage_data@@PBUs_damage_response_data@@PAUs_damage_aftermath_result_data@@@Z");
//};

//void object_apply_damage_aftermath(long, struct s_damage_aftermath_result_data const *)
//{
//    mangled_ppc("?object_apply_damage_aftermath@@YAXJPBUs_damage_aftermath_result_data@@@Z");
//};

//void object_destroy_with_information(long, long, long, struct s_damage_reporting_info const &, bool)
//{
//    mangled_ppc("?object_destroy_with_information@@YAXJJJABUs_damage_reporting_info@@_N@Z");
//};

//void object_destroy_notify_children(long)
//{
//    mangled_ppc("?object_destroy_notify_children@@YAXJ@Z");
//};

//float object_compute_damage_acceleration(long, long, long, struct s_damage_owner const *, float, union vector3d const *, union real_point3d const *, bool, bool, bool, bool, bool *, bool *)
//{
//    mangled_ppc("?object_compute_damage_acceleration@@YAMJJJPBUs_damage_owner@@MPBTvector3d@@PBTreal_point3d@@_N333PA_N4@Z");
//};

//bool object_can_be_accelerated_by_damage(long)
//{
//    mangled_ppc("?object_can_be_accelerated_by_damage@@YA_NJ@Z");
//};

//void object_apply_damage_acceleration(long, long, long, struct s_damage_owner const *, float, union vector3d const *, union real_point3d const *, bool, bool, bool, bool)
//{
//    mangled_ppc("?object_apply_damage_acceleration@@YAXJJJPBUs_damage_owner@@MPBTvector3d@@PBTreal_point3d@@_N333@Z");
//};

//void damage_effect_new_on_object(long, long, struct s_damage_owner const *)
//{
//    mangled_ppc("?damage_effect_new_on_object@@YAXJJPBUs_damage_owner@@@Z");
//};

//float compute_total_damage(struct s_damage_data *, struct s_damage_effect_definition *, struct damage_definition const *, long, bool *)
//{
//    mangled_ppc("?compute_total_damage@@YAMPAUs_damage_data@@PAUs_damage_effect_definition@@PBUdamage_definition@@JPA_N@Z");
//};

//long get_player_index_from_object_or_parents(long)
//{
//    mangled_ppc("?get_player_index_from_object_or_parents@@YAJJ@Z");
//};

//bool material_is_headshotable(struct s_model_damage_info const *, struct s_model_material const *)
//{
//    mangled_ppc("?material_is_headshotable@@YA_NPBUs_model_damage_info@@PBUs_model_material@@@Z");
//};

//struct object_damage_section * object_damage_section_get(long, long)
//{
//    mangled_ppc("?object_damage_section_get@@YAPAUobject_damage_section@@JJ@Z");
//};

//void damage_section_respond_to_damage(struct s_model_damage_info const *, long, struct s_damage_owner const *, struct s_damage_reporting_info const &, long, float, long, struct s_damage_response_data *)
//{
//    mangled_ppc("?damage_section_respond_to_damage@@YAXPBUs_model_damage_info@@JPBUs_damage_owner@@ABUs_damage_reporting_info@@JMJPAUs_damage_response_data@@@Z");
//};

//void damage_section_find_damage_response_thresholds(long, long, struct s_model_damage_section const *, float *, float *, float *)
//{
//    mangled_ppc("?damage_section_find_damage_response_thresholds@@YAXJJPBUs_model_damage_section@@PAM11@Z");
//};

//float damage_section_get_damage_section_max_vitality(struct s_model_damage_info const *, long, long)
//{
//    mangled_ppc("?damage_section_get_damage_section_max_vitality@@YAMPBUs_model_damage_info@@JJ@Z");
//};

//bool damage_section_deplete_next_response(struct s_model_damage_info const *, long, struct s_damage_owner const *, float, struct s_damage_reporting_info const &, long, long, struct s_damage_response_data *)
//{
//    mangled_ppc("?damage_section_deplete_next_response@@YA_NPBUs_model_damage_info@@JPBUs_damage_owner@@MABUs_damage_reporting_info@@JJPAUs_damage_response_data@@@Z");
//};

//void damage_spawn_effect_from_marker_name(long, long, struct s_damage_owner const *, struct s_damage_reporting_info const &, long, bool, bool)
//{
//    mangled_ppc("?damage_spawn_effect_from_marker_name@@YAXJJPBUs_damage_owner@@ABUs_damage_reporting_info@@J_N2@Z");
//};

//bool damage_section_response_is_valid(struct s_model_damage_info const *, long, struct s_damage_owner const *, long, long)
//{
//    mangled_ppc("?damage_section_response_is_valid@@YA_NPBUs_model_damage_info@@JPBUs_damage_owner@@JJ@Z");
//};

//void damage_section_response_fire(struct s_model_damage_info const *, long, struct s_damage_owner const *, struct s_damage_reporting_info const &, long, long, struct s_damage_response_data *)
//{
//    mangled_ppc("?damage_section_response_fire@@YAXPBUs_model_damage_info@@JPBUs_damage_owner@@ABUs_damage_reporting_info@@JJPAUs_damage_response_data@@@Z");
//};

//void object_deplete_body(long, struct s_damage_owner const *, struct s_damage_reporting_info const &)
//{
//    mangled_ppc("?object_deplete_body@@YAXJPBUs_damage_owner@@ABUs_damage_reporting_info@@@Z");
//};

//void damage_spawn_damage_effect_from_marker_name(long, long, struct s_damage_owner const *, long, struct s_damage_reporting_info const &)
//{
//    mangled_ppc("?damage_spawn_damage_effect_from_marker_name@@YAXJJPBUs_damage_owner@@JABUs_damage_reporting_info@@@Z");
//};

//long area_of_effect_cause_damage(struct s_damage_data *, long, enum e_predictability)
//{
//    mangled_ppc("?area_of_effect_cause_damage@@YAJPAUs_damage_data@@JW4e_predictability@@@Z");
//};

//long area_of_effect_cause_damage(struct s_damage_data *, long, long, enum e_predictability)
//{
//    mangled_ppc("?area_of_effect_cause_damage@@YAJPAUs_damage_data@@JJW4e_predictability@@@Z");
//};

//bool area_of_effect_object_comparison_function(void const *, void const *, void const *)
//{
//    mangled_ppc("?area_of_effect_object_comparison_function@@YA_NPBX00@Z");
//};

//bool object_is_non_critical_area_of_effect_object(long)
//{
//    mangled_ppc("?object_is_non_critical_area_of_effect_object@@YA_NJ@Z");
//};

//void area_of_effect_result_new(struct s_area_of_effect_result *)
//{
//    mangled_ppc("?area_of_effect_result_new@@YAXPAUs_area_of_effect_result@@@Z");
//};

//long area_of_effect_result_get_primary_damage_object_index(struct s_area_of_effect_result const *)
//{
//    mangled_ppc("?area_of_effect_result_get_primary_damage_object_index@@YAJPBUs_area_of_effect_result@@@Z");
//};

//void destroy_child_objects_from_marker_name(long, long)
//{
//    mangled_ppc("?destroy_child_objects_from_marker_name@@YAXJJ@Z");
//};

//void object_destroy(long)
//{
//    mangled_ppc("?object_destroy@@YAXJ@Z");
//};

//void damage_section_damage_one_constraint(struct s_model_damage_info const *, struct s_instantaneous_damage_response const *, unsigned short, unsigned short *)
//{
//    mangled_ppc("?damage_section_damage_one_constraint@@YAXPBUs_model_damage_info@@PBUs_instantaneous_damage_response@@GPAG@Z");
//};

//void damage_section_damage_all_constraints(struct s_model_damage_info const *, struct s_instantaneous_damage_response const *, unsigned short, unsigned short *)
//{
//    mangled_ppc("?damage_section_damage_all_constraints@@YAXPBUs_model_damage_info@@PBUs_instantaneous_damage_response@@GPAG@Z");
//};

//void damage_section_deplete(struct s_model_damage_info const *, long, struct s_damage_owner const *, struct s_damage_reporting_info const &, long, struct s_damage_response_data *)
//{
//    mangled_ppc("?damage_section_deplete@@YAXPBUs_model_damage_info@@JPBUs_damage_owner@@ABUs_damage_reporting_info@@JPAUs_damage_response_data@@@Z");
//};

//float calculate_body_damage_after_damage_section(struct s_model_damage_info const *, struct s_model_material const *, long, float, float, struct s_damage_response_data *)
//{
//    mangled_ppc("?calculate_body_damage_after_damage_section@@YAMPBUs_model_damage_info@@PBUs_model_material@@JMMPAUs_damage_response_data@@@Z");
//};

//void apply_body_damage_to_damage_section(struct s_model_damage_info const *, struct s_model_material const *, long, struct s_damage_owner const *, struct s_damage_reporting_info const &, float, long, struct s_damage_response_data *)
//{
//    mangled_ppc("?apply_body_damage_to_damage_section@@YAXPBUs_model_damage_info@@PBUs_model_material@@JPBUs_damage_owner@@ABUs_damage_reporting_info@@MJPAUs_damage_response_data@@@Z");
//};

//void damage_control_get(char const *)
//{
//    mangled_ppc("?damage_control_get@@YAXPBD@Z");
//};

//void damage_control_set(char const *, bool)
//{
//    mangled_ppc("?damage_control_set@@YAXPBD_N@Z");
//};

//void debug_damage_track_damage_inflicted(long, float)
//{
//    mangled_ppc("?debug_damage_track_damage_inflicted@@YAXJM@Z");
//};

//bool object_is_vehicle_occupied_by_object_or_player(long, bool, bool, long, bool *, long *)
//{
//    mangled_ppc("?object_is_vehicle_occupied_by_object_or_player@@YA_NJ_N0JPA_NPAJ@Z");
//};

//void handle_vehicle_damage_transfer(struct s_damage_data const *, long)
//{
//    mangled_ppc("?handle_vehicle_damage_transfer@@YAXPBUs_damage_data@@J@Z");
//};

//long object_find_constraint_connected_regions(long, long, long *)
//{
//    mangled_ppc("?object_find_constraint_connected_regions@@YAJJJPAJ@Z");
//};

//public: long c_runtime_node_to_physics_model_rigid_body_index_mapping::get_rigid_body_count(long) const
//{
//    mangled_ppc("?get_rigid_body_count@c_runtime_node_to_physics_model_rigid_body_index_mapping@@QBAJJ@Z");
//};

//public: long c_runtime_node_to_physics_model_rigid_body_index_mapping::get_node_count(void) const
//{
//    mangled_ppc("?get_node_count@c_runtime_node_to_physics_model_rigid_body_index_mapping@@QBAJXZ");
//};

//public: long c_runtime_node_to_physics_model_rigid_body_index_mapping::get_rigid_body_index(long, long) const
//{
//    mangled_ppc("?get_rigid_body_index@c_runtime_node_to_physics_model_rigid_body_index_mapping@@QBAJJJ@Z");
//};

//bool object_constraint_is_broken(long, enum e_physics_model_constraint_type, long)
//{
//    mangled_ppc("?object_constraint_is_broken@@YA_NJW4e_physics_model_constraint_type@@J@Z");
//};

//long object_find_constraint_search_initial_region(long)
//{
//    mangled_ppc("?object_find_constraint_search_initial_region@@YAJJ@Z");
//};

//void object_damage_constraints(long, unsigned short, unsigned short)
//{
//    mangled_ppc("?object_damage_constraints@@YAXJGG@Z");
//};

//void object_kill_instantly(long, bool, bool, bool, struct s_damage_owner const *, struct s_damage_reporting_info const &)
//{
//    mangled_ppc("?object_kill_instantly@@YAXJ_N00PBUs_damage_owner@@ABUs_damage_reporting_info@@@Z");
//};

//float object_determine_rider_damage_scale(struct s_damage_data const *, long, long)
//{
//    mangled_ppc("?object_determine_rider_damage_scale@@YAMPBUs_damage_data@@JJ@Z");
//};

//void damage_seat_get_transfer_info(long, struct s_damage_seat_info const *, struct s_damage_seat_region_state_setting *)
//{
//    mangled_ppc("?damage_seat_get_transfer_info@@YAXJPBUs_damage_seat_info@@PAUs_damage_seat_region_state_setting@@@Z");
//};

//public: c_aoe_damage_batchifier::c_aoe_damage_batchifier(void)
//{
//    mangled_ppc("??0c_aoe_damage_batchifier@@QAA@XZ");
//};

//public: c_aoe_damage_batchifier::s_batch::s_batch(void)
//{
//    mangled_ppc("??0s_batch@c_aoe_damage_batchifier@@QAA@XZ");
//};

//public: c_aoe_damage_batchifier::~c_aoe_damage_batchifier(void)
//{
//    mangled_ppc("??1c_aoe_damage_batchifier@@QAA@XZ");
//};

//private: long c_aoe_damage_batchifier::find_or_add_batch_index(struct s_damage_data *)
//{
//    mangled_ppc("?find_or_add_batch_index@c_aoe_damage_batchifier@@AAAJPAUs_damage_data@@@Z");
//};

//private: long c_aoe_damage_batchifier::get_new_instance_index(void)
//{
//    mangled_ppc("?get_new_instance_index@c_aoe_damage_batchifier@@AAAJXZ");
//};

//private: void c_aoe_damage_batchifier::undo_new_instance_index(void)
//{
//    mangled_ppc("?undo_new_instance_index@c_aoe_damage_batchifier@@AAAXXZ");
//};

//private: void c_aoe_damage_batchifier::add_damage_instance_internal(long, long, struct s_damage_data *)
//{
//    mangled_ppc("?add_damage_instance_internal@c_aoe_damage_batchifier@@AAAXJJPAUs_damage_data@@@Z");
//};

//public: bool c_aoe_damage_batchifier::add_damage_instance(struct s_damage_data *)
//{
//    mangled_ppc("?add_damage_instance@c_aoe_damage_batchifier@@QAA_NPAUs_damage_data@@@Z");
//};

//private: float const c_aoe_damage_batchifier::get_default_batch_radius(void) const
//{
//    mangled_ppc("?get_default_batch_radius@c_aoe_damage_batchifier@@ABA?BMXZ");
//};

//public: float c_aoe_damage_batchifier::get_search_radius(void)
//{
//    mangled_ppc("?get_search_radius@c_aoe_damage_batchifier@@QAAMXZ");
//};

//private: void c_aoe_damage_batchifier::flush(void)
//{
//    mangled_ppc("?flush@c_aoe_damage_batchifier@@AAAXXZ");
//};

//public: bool c_aoe_damage_batchifier::get_closest_instance(union real_point3d const *, union real_point3d *, float *)
//{
//    mangled_ppc("?get_closest_instance@c_aoe_damage_batchifier@@QAA_NPBTreal_point3d@@PAT2@PAM@Z");
//};

//void damage_info_postprocess_old(long)
//{
//    mangled_ppc("?damage_info_postprocess_old@@YAXJ@Z");
//};

//bool compare_instant_responses(void const *, void const *, void const *)
//{
//    mangled_ppc("?compare_instant_responses@@YA_NPBX00@Z");
//};

//void object_damage_new_old(long)
//{
//    mangled_ppc("?object_damage_new_old@@YAXJ@Z");
//};

//void object_damage_new(long)
//{
//    mangled_ppc("?object_damage_new@@YAXJ@Z");
//};

//void object_cause_damage_old(struct s_damage_data *, long, short, short, short, enum e_predictability)
//{
//    mangled_ppc("?object_cause_damage_old@@YAXPAUs_damage_data@@JFFFW4e_predictability@@@Z");
//};

//bool object_damage_update_old(long)
//{
//    mangled_ppc("?object_damage_update_old@@YA_NJ@Z");
//};

//bool object_damage_update(long)
//{
//    mangled_ppc("?object_damage_update@@YA_NJ@Z");
//};

//void object_undeplete_shield_internal(long)
//{
//    mangled_ppc("?object_undeplete_shield_internal@@YAXJ@Z");
//};

//bool object_damage_update_decay(class c_character_vitality_properties_internal const *, bool, float *, float *, char *)
//{
//    mangled_ppc("?object_damage_update_decay@@YA_NPBVc_character_vitality_properties_internal@@_NPAM2PAD@Z");
//};

//void object_initialize_vitality_old(long, float *, float *)
//{
//    mangled_ppc("?object_initialize_vitality_old@@YAXJPAM0@Z");
//};

//void object_initialize_vitality(long, float *, float *)
//{
//    mangled_ppc("?object_initialize_vitality@@YAXJPAM0@Z");
//};

//void object_apply_damage_aftermath_old(long, struct s_damage_aftermath_result_data const *)
//{
//    mangled_ppc("?object_apply_damage_aftermath_old@@YAXJPBUs_damage_aftermath_result_data@@@Z");
//};

//void object_destroy_old(long)
//{
//    mangled_ppc("?object_destroy_old@@YAXJ@Z");
//};

//void object_destroy_without_delayed_effects_old(long)
//{
//    mangled_ppc("?object_destroy_without_delayed_effects_old@@YAXJ@Z");
//};

//void object_destroy_without_delayed_effects(long)
//{
//    mangled_ppc("?object_destroy_without_delayed_effects@@YAXJ@Z");
//};

//void object_damage_damage_section_old(long, long, float, struct s_damage_reporting_info const &)
//{
//    mangled_ppc("?object_damage_damage_section_old@@YAXJJMABUs_damage_reporting_info@@@Z");
//};

//void object_damage_damage_section(long, long, float, struct s_damage_reporting_info const &)
//{
//    mangled_ppc("?object_damage_damage_section@@YAXJJMABUs_damage_reporting_info@@@Z");
//};

//void object_deplete_body_old(long, struct s_damage_owner const *, struct s_damage_reporting_info const &)
//{
//    mangled_ppc("?object_deplete_body_old@@YAXJPBUs_damage_owner@@ABUs_damage_reporting_info@@@Z");
//};

//void object_deplete_body_silent_old(long, struct s_damage_owner const *, struct s_damage_reporting_info const &)
//{
//    mangled_ppc("?object_deplete_body_silent_old@@YAXJPBUs_damage_owner@@ABUs_damage_reporting_info@@@Z");
//};

//void object_deplete_body_silent(long, struct s_damage_owner const *, struct s_damage_reporting_info const &)
//{
//    mangled_ppc("?object_deplete_body_silent@@YAXJPBUs_damage_owner@@ABUs_damage_reporting_info@@@Z");
//};

//void object_cause_fatal_damage_aftermath_old(long, char, short, union vector3d const *, struct s_damage_reporting_info const &, long, long)
//{
//    mangled_ppc("?object_cause_fatal_damage_aftermath_old@@YAXJDFPBTvector3d@@ABUs_damage_reporting_info@@JJ@Z");
//};

//void object_cause_fatal_damage_aftermath(long, char, short, union vector3d const *, struct s_damage_reporting_info const &, long, long)
//{
//    mangled_ppc("?object_cause_fatal_damage_aftermath@@YAXJDFPBTvector3d@@ABUs_damage_reporting_info@@JJ@Z");
//};

//void render_debug_object_damage_old(void)
//{
//    mangled_ppc("?render_debug_object_damage_old@@YAXXZ");
//};

//void render_debug_object_damage(void)
//{
//    mangled_ppc("?render_debug_object_damage@@YAXXZ");
//};

//void render_debug_object_damage_sections(long, char *, long)
//{
//    mangled_ppc("?render_debug_object_damage_sections@@YAXJPADJ@Z");
//};

//void object_deplete_shield_old(long, bool, struct s_damage_owner const *)
//{
//    mangled_ppc("?object_deplete_shield_old@@YAXJ_NPBUs_damage_owner@@@Z");
//};

//void object_deplete_shield(long, bool, struct s_damage_owner const *)
//{
//    mangled_ppc("?object_deplete_shield@@YAXJ_NPBUs_damage_owner@@@Z");
//};

//void object_kill_instantly_old(long, bool, bool, bool, struct s_damage_owner const *, struct s_damage_reporting_info const &)
//{
//    mangled_ppc("?object_kill_instantly_old@@YAXJ_N00PBUs_damage_owner@@ABUs_damage_reporting_info@@@Z");
//};

//bool object_constraint_is_broken_old(long, enum e_physics_model_constraint_type, long)
//{
//    mangled_ppc("?object_constraint_is_broken_old@@YA_NJW4e_physics_model_constraint_type@@J@Z");
//};

//bool object_constraint_is_loosened_old(long, enum e_physics_model_constraint_type, long)
//{
//    mangled_ppc("?object_constraint_is_loosened_old@@YA_NJW4e_physics_model_constraint_type@@J@Z");
//};

//bool object_constraint_is_loosened(long, enum e_physics_model_constraint_type, long)
//{
//    mangled_ppc("?object_constraint_is_loosened@@YA_NJW4e_physics_model_constraint_type@@J@Z");
//};

//void object_damage_constraints_old(long, unsigned short, unsigned short)
//{
//    mangled_ppc("?object_damage_constraints_old@@YAXJGG@Z");
//};

//void object_damage_handle_resurrection_old(long)
//{
//    mangled_ppc("?object_damage_handle_resurrection_old@@YAXJ@Z");
//};

//void object_damage_handle_resurrection(long)
//{
//    mangled_ppc("?object_damage_handle_resurrection@@YAXJ@Z");
//};

//bool object_scripting_vitality_pinned_old(long)
//{
//    mangled_ppc("?object_scripting_vitality_pinned_old@@YA_NJ@Z");
//};

//bool object_scripting_vitality_pinned(long)
//{
//    mangled_ppc("?object_scripting_vitality_pinned@@YA_NJ@Z");
//};

//void damage_section_response_fire_from_simulation_event_old(long, long, long, struct s_damage_reporting_info const &, enum e_damage_section_response_type)
//{
//    mangled_ppc("?damage_section_response_fire_from_simulation_event_old@@YAXJJJABUs_damage_reporting_info@@W4e_damage_section_response_type@@@Z");
//};

//void damage_section_response_fire_from_simulation_event(long, long, long, struct s_damage_reporting_info const &, enum e_damage_section_response_type)
//{
//    mangled_ppc("?damage_section_response_fire_from_simulation_event@@YAXJJJABUs_damage_reporting_info@@W4e_damage_section_response_type@@@Z");
//};

//long area_of_effect_cause_damage_old(struct s_damage_data *, long, enum e_predictability)
//{
//    mangled_ppc("?area_of_effect_cause_damage_old@@YAJPAUs_damage_data@@JW4e_predictability@@@Z");
//};

//long area_of_effect_cause_damage_old(struct s_damage_data *, long, long, enum e_predictability)
//{
//    mangled_ppc("?area_of_effect_cause_damage_old@@YAJPAUs_damage_data@@JJW4e_predictability@@@Z");
//};

//void damage_handle_vehicle_exit_old(long, long)
//{
//    mangled_ppc("?damage_handle_vehicle_exit_old@@YAXJJ@Z");
//};

//void damage_handle_vehicle_exit(long, long)
//{
//    mangled_ppc("?damage_handle_vehicle_exit@@YAXJJ@Z");
//};

//void damage_effect_new_on_weapon_old(long, long)
//{
//    mangled_ppc("?damage_effect_new_on_weapon_old@@YAXJJ@Z");
//};

//void damage_effect_new_on_weapon(long, long)
//{
//    mangled_ppc("?damage_effect_new_on_weapon@@YAXJJ@Z");
//};

//bool material_is_headshotable_old(long, struct s_model_material const *)
//{
//    mangled_ppc("?material_is_headshotable_old@@YA_NJPBUs_model_material@@@Z");
//};

//public: void s_static_array<struct s_aoe_obstruction_result, 32>::set_memory(long)
//{
//    mangled_ppc("?set_memory@?$s_static_array@Us_aoe_obstruction_result@@$0CA@@@QAAXJ@Z");
//};

//public: class c_character_vitality_properties_internal const * c_character_runtime_properties<class c_character_vitality_properties_internal>::get_properties(void)
//{
//    mangled_ppc("?get_properties@?$c_character_runtime_properties@Vc_character_vitality_properties_internal@@@@QAAPBVc_character_vitality_properties_internal@@XZ");
//};

//public: bool c_static_stack<struct s_debug_obstruction_line, 32>::full(void) const
//{
//    mangled_ppc("?full@?$c_static_stack@Us_debug_obstruction_line@@$0CA@@@QBA_NXZ");
//};

//public: long c_static_stack<struct s_debug_obstruction_line, 32>::count(void) const
//{
//    mangled_ppc("?count@?$c_static_stack@Us_debug_obstruction_line@@$0CA@@@QBAJXZ");
//};

//public: void c_static_stack<struct s_debug_obstruction_line, 32>::clear(void)
//{
//    mangled_ppc("?clear@?$c_static_stack@Us_debug_obstruction_line@@$0CA@@@QAAXXZ");
//};

//public: long c_static_stack<struct s_debug_obstruction_line, 32>::push(void)
//{
//    mangled_ppc("?push@?$c_static_stack@Us_debug_obstruction_line@@$0CA@@@QAAJXZ");
//};

//public: struct s_debug_obstruction_line & c_static_stack<struct s_debug_obstruction_line, 32>::operator[](long)
//{
//    mangled_ppc("??A?$c_static_stack@Us_debug_obstruction_line@@$0CA@@@QAAAAUs_debug_obstruction_line@@J@Z");
//};

//public: struct s_debug_obstruction_line * c_static_stack<struct s_debug_obstruction_line, 32>::get_top(void)
//{
//    mangled_ppc("?get_top@?$c_static_stack@Us_debug_obstruction_line@@$0CA@@@QAAPAUs_debug_obstruction_line@@XZ");
//};

//public: bool c_static_stack<struct s_debug_obstruction_line, 32>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_debug_obstruction_line@@$0CA@@@QBA_NXZ");
//};

//public: bool c_static_stack<struct s_debug_obstruction_line, 32>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_debug_obstruction_line@@$0CA@@@QBA_NJ@Z");
//};

//public: long c_static_stack<struct s_debug_obstruction_line, 32>::top(void) const
//{
//    mangled_ppc("?top@?$c_static_stack@Us_debug_obstruction_line@@$0CA@@@QBAJXZ");
//};

//public: struct s_debug_obstruction_line * c_static_stack<struct s_debug_obstruction_line, 32>::get(long)
//{
//    mangled_ppc("?get@?$c_static_stack@Us_debug_obstruction_line@@$0CA@@@QAAPAUs_debug_obstruction_line@@J@Z");
//};

//public: bool c_static_stack<struct s_debug_obstruction_line, 32>::empty(void) const
//{
//    mangled_ppc("?empty@?$c_static_stack@Us_debug_obstruction_line@@$0CA@@@QBA_NXZ");
//};

//public: <unnamed-type-global_debug_damage_radius_data>::<unnamed-type-global_debug_damage_radius_data>(void)
//{
//    mangled_ppc("??0<unnamed-type-global_debug_damage_radius_data>@@QAA@XZ");
//};

//public: c_static_stack<struct s_debug_obstruction_line, 32>::c_static_stack<struct s_debug_obstruction_line, 32>(void)
//{
//    mangled_ppc("??0?$c_static_stack@Us_debug_obstruction_line@@$0CA@@@QAA@XZ");
//};

