/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static enum e_crate_flag const c_flags_no_init<enum e_crate_flag, unsigned long, 2, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_crate_flag@@K$01Us_default_enum_string_resolver@@@@2W4e_crate_flag@@B"
// public: static enum e_creature_definition_flags const c_flags_no_init<enum e_creature_definition_flags, unsigned long, 7, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_creature_definition_flags@@K$06Us_default_enum_string_resolver@@@@2W4e_creature_definition_flags@@B"
// public: static enum e_creature_big_battle_definition_flags const c_flags_no_init<enum e_creature_big_battle_definition_flags, unsigned long, 3, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_creature_big_battle_definition_flags@@K$02Us_default_enum_string_resolver@@@@2W4e_creature_big_battle_definition_flags@@B"
// unsigned long g_object_types_with_deleted_object_handlers_mask; // "?g_object_types_with_deleted_object_handlers_mask@@3KA"
// unsigned long g_object_types_with_deleted_player_handlers_mask; // "?g_object_types_with_deleted_player_handlers_mask@@3KA"
// struct object_type_definition object_data_definition; // "?object_data_definition@@3Uobject_type_definition@@A"
// struct object_type_definition unit_data_definition; // "?unit_data_definition@@3Uobject_type_definition@@A"
// struct object_type_definition mover_data_definition; // "?mover_data_definition@@3Uobject_type_definition@@A"
// struct object_type_definition biped_data_definition; // "?biped_data_definition@@3Uobject_type_definition@@A"
// struct object_type_definition vehicle_data_definition; // "?vehicle_data_definition@@3Uobject_type_definition@@A"
// struct object_type_definition item_data_definition; // "?item_data_definition@@3Uobject_type_definition@@A"
// struct object_type_definition weapon_data_definition; // "?weapon_data_definition@@3Uobject_type_definition@@A"
// struct object_type_definition equipment_data_definition; // "?equipment_data_definition@@3Uobject_type_definition@@A"
// struct object_type_definition projectile_data_definition; // "?projectile_data_definition@@3Uobject_type_definition@@A"
// struct object_type_definition scenery_data_definition; // "?scenery_data_definition@@3Uobject_type_definition@@A"
// struct object_type_definition sound_scenery_data_definition; // "?sound_scenery_data_definition@@3Uobject_type_definition@@A"
// struct object_type_definition crate_data_definition; // "?crate_data_definition@@3Uobject_type_definition@@A"
// struct object_type_definition device_data_definition; // "?device_data_definition@@3Uobject_type_definition@@A"
// struct object_type_definition machine_data_definition; // "?machine_data_definition@@3Uobject_type_definition@@A"
// struct object_type_definition terminal_data_definition; // "?terminal_data_definition@@3Uobject_type_definition@@A"
// struct object_type_definition control_data_definition; // "?control_data_definition@@3Uobject_type_definition@@A"
// struct object_type_definition creature_data_definition; // "?creature_data_definition@@3Uobject_type_definition@@A"
// struct object_type_definition giant_data_definition; // "?giant_data_definition@@3Uobject_type_definition@@A"
// struct object_type_definition effect_scenery_data_definition; // "?effect_scenery_data_definition@@3Uobject_type_definition@@A"
// struct object_type_definition **object_type_definitions; // "?object_type_definitions@@3PAPAUobject_type_definition@@A"
// long debug_object_index; // "?debug_object_index@@3JA"
// struct object_type_definition *first_object_type_definition; // "?first_object_type_definition@@3PAUobject_type_definition@@A"
// long debug_objects_type_mask; // "?debug_objects_type_mask@@3JA"
// bool debug_objects_player_only; // "?debug_objects_player_only@@3_NA"

// struct object_type_definition * object_type_definition_get(enum e_object_type);
// char const * object_type_get_name(enum e_object_type);
// unsigned long object_type_get_maximum_placement_count(enum e_object_type);
// void object_type_get_placement_tag_block(enum e_object_type, long *, long *);
// long object_type_get_palette_tag_block_offset(enum e_object_type);
// short object_type_get_datum_size(enum e_object_type);
// short object_types_get_maximum_datum_size(void);
// enum e_object_type operator++(enum e_object_type &, int);
// enum e_object_type object_type_from_group_tag(unsigned long);
// enum e_object_type object_type_from_definition_index(long);
// void object_types_initialize(void);
// void object_types_dispose(void);
// void object_types_initialize_for_new_map(void);
// void object_types_dispose_from_old_map(void);
// void object_type_initialize_for_new_structure_bsp(long);
// void object_type_dispose_from_old_structure_bsp(long);
// void object_type_adjust_placement(struct s_object_placement_data *);
// bool object_type_new(long, struct s_object_placement_data *, bool *);
// void object_type_place(long, struct s_scenario_object const *);
// void object_type_unplace(long);
// void object_type_create_children(long, class c_flags<enum e_object_placement_flags, unsigned long, 12, struct s_default_enum_string_resolver> const &);
// void object_type_delete(long);
// bool object_type_update(long);
// void object_type_move(long);
// bool object_type_compute_activation(long, struct s_game_cluster_bit_vectors const *, bool *);
// bool object_type_compute_function_value(long, long, long, float *, bool *, bool *);
// void object_type_attach_simulation_object_glue(long);
// void object_type_detach_simulation_object_glue(long);
// void object_type_attach_to_marker(long, long, long, long);
// void object_type_attach_to_node(long, long, short);
// void object_type_detach_from_parent(long);
// void object_type_handle_deleted_object(long, long);
// void object_type_handle_deleted_player(long, long);
// void object_type_handle_region_destroyed(long, short, unsigned long);
// bool object_type_handle_parent_destroyed(long);
// void object_type_preprocess_node_orientations(long, class c_big_flags_typed_no_init<long, 256> const *, long, struct real_orientation *);
// void object_type_preprocess_root_node_matrix(long, struct real_matrix4x3*);
// void object_type_adjust_node_matrices(long, long, struct real_matrix4x3*);
// void object_type_postprocess_node_matrices(long, long, struct real_matrix4x3*);
// void object_type_reset(long);
// void object_type_update_physics_payload(long);
// void object_type_adjust_gravity_scale(long, float *);
// bool should_render_debug_object(long);
// void object_type_render_debug(long);
// void object_type_notify_impulse_sound(long, long, struct s_game_sound_deterministic_permutation const *, long);
// void object_type_notify_acceleration(long, union vector3d const *);
// void object_type_fix_transform(long, union real_point3d *, union vector3d *, union vector3d *);
// void object_type_fix_transform_to_physics(long, struct real_matrix4x3*);
// void object_type_fix_transform_from_physics(long, struct real_matrix4x3*);
// enum e_object_type object_type_search_from_name(char const *);

//struct object_type_definition * object_type_definition_get(enum e_object_type)
//{
//    mangled_ppc("?object_type_definition_get@@YAPAUobject_type_definition@@W4e_object_type@@@Z");
//};

//char const * object_type_get_name(enum e_object_type)
//{
//    mangled_ppc("?object_type_get_name@@YAPBDW4e_object_type@@@Z");
//};

//unsigned long object_type_get_maximum_placement_count(enum e_object_type)
//{
//    mangled_ppc("?object_type_get_maximum_placement_count@@YAKW4e_object_type@@@Z");
//};

//void object_type_get_placement_tag_block(enum e_object_type, long *, long *)
//{
//    mangled_ppc("?object_type_get_placement_tag_block@@YAXW4e_object_type@@PAJ1@Z");
//};

//long object_type_get_palette_tag_block_offset(enum e_object_type)
//{
//    mangled_ppc("?object_type_get_palette_tag_block_offset@@YAJW4e_object_type@@@Z");
//};

//short object_type_get_datum_size(enum e_object_type)
//{
//    mangled_ppc("?object_type_get_datum_size@@YAFW4e_object_type@@@Z");
//};

//short object_types_get_maximum_datum_size(void)
//{
//    mangled_ppc("?object_types_get_maximum_datum_size@@YAFXZ");
//};

//enum e_object_type operator++(enum e_object_type &, int)
//{
//    mangled_ppc("??E@YA?AW4e_object_type@@AAW40@H@Z");
//};

//enum e_object_type object_type_from_group_tag(unsigned long)
//{
//    mangled_ppc("?object_type_from_group_tag@@YA?AW4e_object_type@@K@Z");
//};

//enum e_object_type object_type_from_definition_index(long)
//{
//    mangled_ppc("?object_type_from_definition_index@@YA?AW4e_object_type@@J@Z");
//};

//void object_types_initialize(void)
//{
//    mangled_ppc("?object_types_initialize@@YAXXZ");
//};

//void object_types_dispose(void)
//{
//    mangled_ppc("?object_types_dispose@@YAXXZ");
//};

//void object_types_initialize_for_new_map(void)
//{
//    mangled_ppc("?object_types_initialize_for_new_map@@YAXXZ");
//};

//void object_types_dispose_from_old_map(void)
//{
//    mangled_ppc("?object_types_dispose_from_old_map@@YAXXZ");
//};

//void object_type_initialize_for_new_structure_bsp(long)
//{
//    mangled_ppc("?object_type_initialize_for_new_structure_bsp@@YAXJ@Z");
//};

//void object_type_dispose_from_old_structure_bsp(long)
//{
//    mangled_ppc("?object_type_dispose_from_old_structure_bsp@@YAXJ@Z");
//};

//void object_type_adjust_placement(struct s_object_placement_data *)
//{
//    mangled_ppc("?object_type_adjust_placement@@YAXPAUs_object_placement_data@@@Z");
//};

//bool object_type_new(long, struct s_object_placement_data *, bool *)
//{
//    mangled_ppc("?object_type_new@@YA_NJPAUs_object_placement_data@@PA_N@Z");
//};

//void object_type_place(long, struct s_scenario_object const *)
//{
//    mangled_ppc("?object_type_place@@YAXJPBUs_scenario_object@@@Z");
//};

//void object_type_unplace(long)
//{
//    mangled_ppc("?object_type_unplace@@YAXJ@Z");
//};

//void object_type_create_children(long, class c_flags<enum e_object_placement_flags, unsigned long, 12, struct s_default_enum_string_resolver> const &)
//{
//    mangled_ppc("?object_type_create_children@@YAXJABV?$c_flags@W4e_object_placement_flags@@K$0M@Us_default_enum_string_resolver@@@@@Z");
//};

//void object_type_delete(long)
//{
//    mangled_ppc("?object_type_delete@@YAXJ@Z");
//};

//bool object_type_update(long)
//{
//    mangled_ppc("?object_type_update@@YA_NJ@Z");
//};

//void object_type_move(long)
//{
//    mangled_ppc("?object_type_move@@YAXJ@Z");
//};

//bool object_type_compute_activation(long, struct s_game_cluster_bit_vectors const *, bool *)
//{
//    mangled_ppc("?object_type_compute_activation@@YA_NJPBUs_game_cluster_bit_vectors@@PA_N@Z");
//};

//bool object_type_compute_function_value(long, long, long, float *, bool *, bool *)
//{
//    mangled_ppc("?object_type_compute_function_value@@YA_NJJJPAMPA_N1@Z");
//};

//void object_type_attach_simulation_object_glue(long)
//{
//    mangled_ppc("?object_type_attach_simulation_object_glue@@YAXJ@Z");
//};

//void object_type_detach_simulation_object_glue(long)
//{
//    mangled_ppc("?object_type_detach_simulation_object_glue@@YAXJ@Z");
//};

//void object_type_attach_to_marker(long, long, long, long)
//{
//    mangled_ppc("?object_type_attach_to_marker@@YAXJJJJ@Z");
//};

//void object_type_attach_to_node(long, long, short)
//{
//    mangled_ppc("?object_type_attach_to_node@@YAXJJF@Z");
//};

//void object_type_detach_from_parent(long)
//{
//    mangled_ppc("?object_type_detach_from_parent@@YAXJ@Z");
//};

//void object_type_handle_deleted_object(long, long)
//{
//    mangled_ppc("?object_type_handle_deleted_object@@YAXJJ@Z");
//};

//void object_type_handle_deleted_player(long, long)
//{
//    mangled_ppc("?object_type_handle_deleted_player@@YAXJJ@Z");
//};

//void object_type_handle_region_destroyed(long, short, unsigned long)
//{
//    mangled_ppc("?object_type_handle_region_destroyed@@YAXJFK@Z");
//};

//bool object_type_handle_parent_destroyed(long)
//{
//    mangled_ppc("?object_type_handle_parent_destroyed@@YA_NJ@Z");
//};

//void object_type_preprocess_node_orientations(long, class c_big_flags_typed_no_init<long, 256> const *, long, struct real_orientation *)
//{
//    mangled_ppc("?object_type_preprocess_node_orientations@@YAXJPBV?$c_big_flags_typed_no_init@J$0BAA@@@JPAUreal_orientation@@@Z");
//};

//void object_type_preprocess_root_node_matrix(long, struct real_matrix4x3*)
//{
//    mangled_ppc("?object_type_preprocess_root_node_matrix@@YAXJPAUreal_matrix4x3@@@Z");
//};

//void object_type_adjust_node_matrices(long, long, struct real_matrix4x3*)
//{
//    mangled_ppc("?object_type_adjust_node_matrices@@YAXJJPAUreal_matrix4x3@@@Z");
//};

//void object_type_postprocess_node_matrices(long, long, struct real_matrix4x3*)
//{
//    mangled_ppc("?object_type_postprocess_node_matrices@@YAXJJPAUreal_matrix4x3@@@Z");
//};

//void object_type_reset(long)
//{
//    mangled_ppc("?object_type_reset@@YAXJ@Z");
//};

//void object_type_update_physics_payload(long)
//{
//    mangled_ppc("?object_type_update_physics_payload@@YAXJ@Z");
//};

//void object_type_adjust_gravity_scale(long, float *)
//{
//    mangled_ppc("?object_type_adjust_gravity_scale@@YAXJPAM@Z");
//};

//bool should_render_debug_object(long)
//{
//    mangled_ppc("?should_render_debug_object@@YA_NJ@Z");
//};

//void object_type_render_debug(long)
//{
//    mangled_ppc("?object_type_render_debug@@YAXJ@Z");
//};

//void object_type_notify_impulse_sound(long, long, struct s_game_sound_deterministic_permutation const *, long)
//{
//    mangled_ppc("?object_type_notify_impulse_sound@@YAXJJPBUs_game_sound_deterministic_permutation@@J@Z");
//};

//void object_type_notify_acceleration(long, union vector3d const *)
//{
//    mangled_ppc("?object_type_notify_acceleration@@YAXJPBTvector3d@@@Z");
//};

//void object_type_fix_transform(long, union real_point3d *, union vector3d *, union vector3d *)
//{
//    mangled_ppc("?object_type_fix_transform@@YAXJPATreal_point3d@@PATvector3d@@1@Z");
//};

//void object_type_fix_transform_to_physics(long, struct real_matrix4x3*)
//{
//    mangled_ppc("?object_type_fix_transform_to_physics@@YAXJPAUreal_matrix4x3@@@Z");
//};

//void object_type_fix_transform_from_physics(long, struct real_matrix4x3*)
//{
//    mangled_ppc("?object_type_fix_transform_from_physics@@YAXJPAUreal_matrix4x3@@@Z");
//};

//enum e_object_type object_type_search_from_name(char const *)
//{
//    mangled_ppc("?object_type_search_from_name@@YA?AW4e_object_type@@PBD@Z");
//};

