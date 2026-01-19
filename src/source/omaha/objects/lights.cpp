/* ---------- headers */

#include "omaha\objects\lights.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const s_static_array<class c_big_flags_typed_no_init<long, 600>, 2>::k_element_count; // "?k_element_count@?$s_static_array@V?$c_big_flags_typed_no_init@J$0CFI@@@$01@@2JB"
// public: static long const c_big_flags_typed_no_init<long, 600>::k_maximum_count; // "?k_maximum_count@?$c_big_flags_typed_no_init@J$0CFI@@@2JB"
// public: static long const c_big_flags_typed_no_init<long, 600>::k_flag_chunk_count; // "?k_flag_chunk_count@?$c_big_flags_typed_no_init@J$0CFI@@@2JB"
// public: static enum e_collision_bsp_test_sphere_flag const c_flags_no_init<enum e_collision_bsp_test_sphere_flag, unsigned long, 3, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_collision_bsp_test_sphere_flag@@K$02Us_default_enum_string_resolver@@@@2W4e_collision_bsp_test_sphere_flag@@B"
// bool debug_load_scenario_lights; // "?debug_load_scenario_lights@@3_NA"
// bool debug_load_lighting_info_lights; // "?debug_load_lighting_info_lights@@3_NA"
// bool debug_load_marker_lights; // "?debug_load_marker_lights@@3_NA"
// long volatile `public: void __cdecl c_big_flags_typed_no_init<long, 600>::clear(void)'::`35'::x_event_category_index; // "?x_event_category_index@?CD@??clear@?$c_big_flags_typed_no_init@J$0CFI@@@QAAXXZ@4JC"
// unsigned long *g_invalid_scenario_lights; // "?g_invalid_scenario_lights@@3PAKA"
// bool light_debug_local_light_basis; // "?light_debug_local_light_basis@@3_NA"
// class t_restricted_allocation_manager<4, 0, 0, void (__cdecl __tls_set_g_light_data_allocator::*)(void *)> g_light_data_allocator; // "?g_light_data_allocator@@3V?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_light_data_allocator@@YAXPAX@Z@@A"
// class t_restricted_allocation_manager<4, 0, 0, void (__cdecl __tls_set_g_lights_game_globals_allocator::*)(void *)> g_lights_game_globals_allocator; // "?g_lights_game_globals_allocator@@3V?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_lights_game_globals_allocator@@YAXPAX@Z@@A"
// struct s_lights_globals lights_globals; // "?lights_globals@@3Us_lights_globals@@A"
// struct s_data_array *light_data; // "?light_data@@3PAUs_data_array@@A"
// struct lights_game_globals_definition *lights_game_globals; // "?lights_game_globals@@3PAUlights_game_globals_definition@@A"

// void __tls_set_g_light_data_allocator(void *);
// void __tls_set_g_lights_game_globals_allocator(void *);
// void lights_initialize(void);
// void lights_dispose(void);
// void lights_initialize_for_new_map(void);
// void lights_dispose_from_old_map(void);
// void lights_initialize_for_new_structure_bsp(unsigned long);
// void lights_dispose_from_old_structure_bsp(unsigned long);
// void lights_reset(void);
// void lights_delete_all(void);
// bool lights_enable(bool);
// long light_new_attached(long, long, short, short, long, long, enum e_change_color_reference);
// void per_light_update(long);
// long light_new_unattached(long, long, short, union real_point3d const *, union vector3d const *, union vector3d const *, float, long, long);
// void light_delete(long);
// void light_delete_attached(long);
// void light_delete_internal(long, bool);
// bool light_update_from_scenario(long);
// void light_deleted_from_scenario(long);
// long scenario_light_place(long, bool);
// long light_new_from_scenario(long, long, bool, struct s_scenario_light const *);
// void lights_place(long);
// void lights_add_structure_bsp_marker_lights(long);
// long structure_bsp_light_place(long, long);
// void lights_add_max_light_in_lighting_info(long);
// void lighting_info_light_place(long, long);
// void lights_dispose_structure_bsp_marker_lights(long);
// void lights_dispose_lighting_info_lights(long);
// void lights_update(void);
// void light_update_state(long);
// void light_update_max_light(long, struct s_structure_lighting_generic_light_instance *, struct s_structure_lighting_generic_light_definition *);
// bool light_update_active_status(long);
// bool light_should_update_connection(long, bool *);
// bool light_expired(long);
// bool light_theoretically_produces_light(long, enum e_output_user_index, long);
// void light_verify(long);
// bool light_attached_object_node_moved(long);
// long light_get_any_object_index(long);
// void lights_handle_deleted_object(long);
// long lights_unattached_connect_to_object(long, bool, bool);
// bool light_adjust_position_from_attachment_last_minute(struct light_datum *, struct render_camera const *);
// bool light_adjust_position_from_attachment(long);
// bool game_can_use_flashlights(void);
// float game_flashlight_magnitude(void);
// void game_can_use_flashlights_set(bool);
// void calculate_light_starting_center(union real_point3d *, struct light_datum const *);
// bool light_is_screen_space(long);
// bool light_build_render_geometry(long, struct light_geometry *);
// void light_get_geometry_from_lighting_info_definition(long, struct light_geometry *);
// void light_get_geometry_from_definition(struct light_definition const *, struct light_geometry *);
// void light_get_geometry_from_scenario(struct light_definition const *, struct s_scenario_light const *, struct light_geometry *);
// void light_get_geometry(long, struct light_geometry *);
// bool light_geometry_is_valid(char const *, struct light_definition const *, struct light_geometry const *);
// void light_build_intermediate_geometry(union real_point3d const *, union real_point3d const *, union vector3d const *, union vector3d const *, long, struct light_geometry *);
// void light_build_visibility_projections(union vector3d const *, union vector3d const *, struct light_geometry const *, struct visibility_projection *, short *);
// struct s_data_array * lights_get_data_array(void);
// void force_vectors_orthogonal(union vector3d const *, union vector3d *);
// void compute_efficent_bounding_sphere(float *, float *, float, float);
// void light_update_bounding_sphere(long);
// void light_get_bounding_sphere(long, union real_point3d *, float *);
// void light_disconnect_from_map(long);
// void light_move_map_attachment(long);
// void light_reconnect_to_map_force_inside_world_expensive(long);
// bool light_compute_valid_location(long, bool);
// bool light_is_connected_to_map(long);
// long lights_iterate_first_index(void);
// long lights_iterate_next_index(long);
// bool light_find_valid_point(union real_point3d const *, union real_point3d const *, union real_point3d *, float *);
// long light_marker_begin(void);
// bool light_unmarked(long, long);
// bool light_mark(long, long);
// void light_marker_end(long);
// void light_submit_lens_flares(long, enum e_output_user_index);
// void light_calculate_priority_and_fade(long, union real_point3d const *, float, float *, float *);
// void render_debug_light(long, long, long, struct render_camera const *);
// long light_index_from_name_index(short);
// void dump_light_state(void);
// void light_render_debug_projection(struct visibility_projection *, union argb_color const *);
// struct light_datum * animated_uber_light(long);
// public: c_enum<enum e_change_color_reference, char, 0, 5, struct s_default_enum_string_resolver>::c_enum<enum e_change_color_reference, char, 0, 5, struct s_default_enum_string_resolver>(enum e_change_color_reference);
// public: static long s_static_array<class c_big_flags_typed_no_init<long, 600>, 2>::get_count(void);
// public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_lights_game_globals_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: void c_data_iterator<struct light_datum>::begin(struct s_data_array *);
// public: bool c_data_iterator<struct light_datum>::next(void);
// public: struct light_datum * c_data_iterator<struct light_datum>::get_datum(void) const;
// public: long c_data_iterator<struct light_datum>::get_index(void) const;
// public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_lights_game_globals_allocator::*)(void *)>::valid(void) const;
// public: void c_big_flags_typed_no_init<long, 600>::clear(void);
// public: bool c_big_flags_typed_no_init<long, 600>::test(long) const;
// public: void c_big_flags_typed_no_init<long, 600>::set(long, bool);
// public: void c_flags_no_init<enum e_collision_bsp_test_sphere_flag, unsigned long, 3, struct s_default_enum_string_resolver>::clear(void);
// public: void c_flags_no_init<enum e_collision_bsp_test_sphere_flag, unsigned long, 3, struct s_default_enum_string_resolver>::set(enum e_collision_bsp_test_sphere_flag, bool);
// public: c_flags<enum e_collision_bsp_test_sphere_flag, unsigned long, 3, struct s_default_enum_string_resolver>::c_flags<enum e_collision_bsp_test_sphere_flag, unsigned long, 3, struct s_default_enum_string_resolver>(void);
// public: class c_big_flags_typed_no_init<long, 600> & s_static_array<class c_big_flags_typed_no_init<long, 600>, 2>::operator[]<long>(long);
// public: bool c_big_flags_typed_no_init<long, 600>::is_clear(void) const;
// public: static bool c_big_flags_typed_no_init<long, 600>::valid_bit(long);
// public: bool c_big_flags_typed_no_init<long, 600>::valid(void) const;
// public: bool c_flags_no_init<enum e_collision_bsp_test_sphere_flag, unsigned long, 3, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: static bool c_flags_no_init<enum e_collision_bsp_test_sphere_flag, unsigned long, 3, struct s_default_enum_string_resolver>::valid_bit(enum e_collision_bsp_test_sphere_flag);
// private: static unsigned long c_flags_no_init<enum e_collision_bsp_test_sphere_flag, unsigned long, 3, struct s_default_enum_string_resolver>::flag_size_type(enum e_collision_bsp_test_sphere_flag);
// public: static bool s_static_array<class c_big_flags_typed_no_init<long, 600>, 2>::valid<long>(long);
// protected: static unsigned long c_big_flags_typed_no_init<long, 600>::get_mask_of_second_slice_of_chunk_inclusive(long);
// private: static unsigned long c_flags_no_init<enum e_collision_bsp_test_sphere_flag, unsigned long, 3, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// protected: static long c_big_flags_typed_no_init<long, 600>::flag_chunk_index_to_bit_index(long);
// protected: static long c_big_flags_typed_no_init<long, 600>::bit_index_to_flag_chunk_index(long);
// protected: static unsigned long c_big_flags_typed_no_init<long, 600>::get_valid_mask_of_last_chunk(void);
// private: static unsigned long c_flags_no_init<enum e_collision_bsp_test_sphere_flag, unsigned long, 3, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_collision_bsp_test_sphere_flag);
// protected: static unsigned long c_big_flags_typed_no_init<long, 600>::get_mask_of_first_slice_of_chunk_exclusive(long);
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_light_data_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_light_data_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_light_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_light_data_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_light_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_light_data_allocator::*)(void *)>::free_memory(void);
// public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_light_data_allocator::*)(void *)>::valid(void) const;
// public: s_lights_globals::s_lights_globals(void);
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_lights_game_globals_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_lights_game_globals_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_lights_game_globals_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_lights_game_globals_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_lights_game_globals_allocator::*)(void *)>::free_memory(void);
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_light_data_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_light_data_allocator::*)(void *)>(void);
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_lights_game_globals_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_lights_game_globals_allocator::*)(void *)>(void);
// void g_light_data_allocator::`dynamic atexit destructor'(void);
// void g_lights_game_globals_allocator::`dynamic atexit destructor'(void);

//void __tls_set_g_light_data_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_light_data_allocator@@YAXPAX@Z");
//};

//void __tls_set_g_lights_game_globals_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_lights_game_globals_allocator@@YAXPAX@Z");
//};

//void lights_initialize(void)
//{
//    mangled_ppc("?lights_initialize@@YAXXZ");
//};

//void lights_dispose(void)
//{
//    mangled_ppc("?lights_dispose@@YAXXZ");
//};

//void lights_initialize_for_new_map(void)
//{
//    mangled_ppc("?lights_initialize_for_new_map@@YAXXZ");
//};

//void lights_dispose_from_old_map(void)
//{
//    mangled_ppc("?lights_dispose_from_old_map@@YAXXZ");
//};

//void lights_initialize_for_new_structure_bsp(unsigned long)
//{
//    mangled_ppc("?lights_initialize_for_new_structure_bsp@@YAXK@Z");
//};

//void lights_dispose_from_old_structure_bsp(unsigned long)
//{
//    mangled_ppc("?lights_dispose_from_old_structure_bsp@@YAXK@Z");
//};

//void lights_reset(void)
//{
//    mangled_ppc("?lights_reset@@YAXXZ");
//};

//void lights_delete_all(void)
//{
//    mangled_ppc("?lights_delete_all@@YAXXZ");
//};

//bool lights_enable(bool)
//{
//    mangled_ppc("?lights_enable@@YA_N_N@Z");
//};

//long light_new_attached(long, long, short, short, long, long, enum e_change_color_reference)
//{
//    mangled_ppc("?light_new_attached@@YAJJJFFJJW4e_change_color_reference@@@Z");
//};

//void per_light_update(long)
//{
//    mangled_ppc("?per_light_update@@YAXJ@Z");
//};

//long light_new_unattached(long, long, short, union real_point3d const *, union vector3d const *, union vector3d const *, float, long, long)
//{
//    mangled_ppc("?light_new_unattached@@YAJJJFPBTreal_point3d@@PBTvector3d@@1MJJ@Z");
//};

//void light_delete(long)
//{
//    mangled_ppc("?light_delete@@YAXJ@Z");
//};

//void light_delete_attached(long)
//{
//    mangled_ppc("?light_delete_attached@@YAXJ@Z");
//};

//void light_delete_internal(long, bool)
//{
//    mangled_ppc("?light_delete_internal@@YAXJ_N@Z");
//};

//bool light_update_from_scenario(long)
//{
//    mangled_ppc("?light_update_from_scenario@@YA_NJ@Z");
//};

//void light_deleted_from_scenario(long)
//{
//    mangled_ppc("?light_deleted_from_scenario@@YAXJ@Z");
//};

//long scenario_light_place(long, bool)
//{
//    mangled_ppc("?scenario_light_place@@YAJJ_N@Z");
//};

//long light_new_from_scenario(long, long, bool, struct s_scenario_light const *)
//{
//    mangled_ppc("?light_new_from_scenario@@YAJJJ_NPBUs_scenario_light@@@Z");
//};

//void lights_place(long)
//{
//    mangled_ppc("?lights_place@@YAXJ@Z");
//};

//void lights_add_structure_bsp_marker_lights(long)
//{
//    mangled_ppc("?lights_add_structure_bsp_marker_lights@@YAXJ@Z");
//};

//long structure_bsp_light_place(long, long)
//{
//    mangled_ppc("?structure_bsp_light_place@@YAJJJ@Z");
//};

//void lights_add_max_light_in_lighting_info(long)
//{
//    mangled_ppc("?lights_add_max_light_in_lighting_info@@YAXJ@Z");
//};

//void lighting_info_light_place(long, long)
//{
//    mangled_ppc("?lighting_info_light_place@@YAXJJ@Z");
//};

//void lights_dispose_structure_bsp_marker_lights(long)
//{
//    mangled_ppc("?lights_dispose_structure_bsp_marker_lights@@YAXJ@Z");
//};

//void lights_dispose_lighting_info_lights(long)
//{
//    mangled_ppc("?lights_dispose_lighting_info_lights@@YAXJ@Z");
//};

//void lights_update(void)
//{
//    mangled_ppc("?lights_update@@YAXXZ");
//};

//void light_update_state(long)
//{
//    mangled_ppc("?light_update_state@@YAXJ@Z");
//};

//void light_update_max_light(long, struct s_structure_lighting_generic_light_instance *, struct s_structure_lighting_generic_light_definition *)
//{
//    mangled_ppc("?light_update_max_light@@YAXJPAUs_structure_lighting_generic_light_instance@@PAUs_structure_lighting_generic_light_definition@@@Z");
//};

//bool light_update_active_status(long)
//{
//    mangled_ppc("?light_update_active_status@@YA_NJ@Z");
//};

//bool light_should_update_connection(long, bool *)
//{
//    mangled_ppc("?light_should_update_connection@@YA_NJPA_N@Z");
//};

//bool light_expired(long)
//{
//    mangled_ppc("?light_expired@@YA_NJ@Z");
//};

//bool light_theoretically_produces_light(long, enum e_output_user_index, long)
//{
//    mangled_ppc("?light_theoretically_produces_light@@YA_NJW4e_output_user_index@@J@Z");
//};

//void light_verify(long)
//{
//    mangled_ppc("?light_verify@@YAXJ@Z");
//};

//bool light_attached_object_node_moved(long)
//{
//    mangled_ppc("?light_attached_object_node_moved@@YA_NJ@Z");
//};

//long light_get_any_object_index(long)
//{
//    mangled_ppc("?light_get_any_object_index@@YAJJ@Z");
//};

//void lights_handle_deleted_object(long)
//{
//    mangled_ppc("?lights_handle_deleted_object@@YAXJ@Z");
//};

//long lights_unattached_connect_to_object(long, bool, bool)
//{
//    mangled_ppc("?lights_unattached_connect_to_object@@YAJJ_N0@Z");
//};

//bool light_adjust_position_from_attachment_last_minute(struct light_datum *, struct render_camera const *)
//{
//    mangled_ppc("?light_adjust_position_from_attachment_last_minute@@YA_NPAUlight_datum@@PBUrender_camera@@@Z");
//};

//bool light_adjust_position_from_attachment(long)
//{
//    mangled_ppc("?light_adjust_position_from_attachment@@YA_NJ@Z");
//};

//bool game_can_use_flashlights(void)
//{
//    mangled_ppc("?game_can_use_flashlights@@YA_NXZ");
//};

//float game_flashlight_magnitude(void)
//{
//    mangled_ppc("?game_flashlight_magnitude@@YAMXZ");
//};

//void game_can_use_flashlights_set(bool)
//{
//    mangled_ppc("?game_can_use_flashlights_set@@YAX_N@Z");
//};

//void calculate_light_starting_center(union real_point3d *, struct light_datum const *)
//{
//    mangled_ppc("?calculate_light_starting_center@@YAXPATreal_point3d@@PBUlight_datum@@@Z");
//};

//bool light_is_screen_space(long)
//{
//    mangled_ppc("?light_is_screen_space@@YA_NJ@Z");
//};

//bool light_build_render_geometry(long, struct light_geometry *)
//{
//    mangled_ppc("?light_build_render_geometry@@YA_NJPAUlight_geometry@@@Z");
//};

//void light_get_geometry_from_lighting_info_definition(long, struct light_geometry *)
//{
//    mangled_ppc("?light_get_geometry_from_lighting_info_definition@@YAXJPAUlight_geometry@@@Z");
//};

//void light_get_geometry_from_definition(struct light_definition const *, struct light_geometry *)
//{
//    mangled_ppc("?light_get_geometry_from_definition@@YAXPBUlight_definition@@PAUlight_geometry@@@Z");
//};

//void light_get_geometry_from_scenario(struct light_definition const *, struct s_scenario_light const *, struct light_geometry *)
//{
//    mangled_ppc("?light_get_geometry_from_scenario@@YAXPBUlight_definition@@PBUs_scenario_light@@PAUlight_geometry@@@Z");
//};

//void light_get_geometry(long, struct light_geometry *)
//{
//    mangled_ppc("?light_get_geometry@@YAXJPAUlight_geometry@@@Z");
//};

//bool light_geometry_is_valid(char const *, struct light_definition const *, struct light_geometry const *)
//{
//    mangled_ppc("?light_geometry_is_valid@@YA_NPBDPBUlight_definition@@PBUlight_geometry@@@Z");
//};

//void light_build_intermediate_geometry(union real_point3d const *, union real_point3d const *, union vector3d const *, union vector3d const *, long, struct light_geometry *)
//{
//    mangled_ppc("?light_build_intermediate_geometry@@YAXPBTreal_point3d@@0PBTvector3d@@1JPAUlight_geometry@@@Z");
//};

//void light_build_visibility_projections(union vector3d const *, union vector3d const *, struct light_geometry const *, struct visibility_projection *, short *)
//{
//    mangled_ppc("?light_build_visibility_projections@@YAXPBTvector3d@@0PBUlight_geometry@@PAUvisibility_projection@@PAF@Z");
//};

//struct s_data_array * lights_get_data_array(void)
//{
//    mangled_ppc("?lights_get_data_array@@YAPAUs_data_array@@XZ");
//};

//void force_vectors_orthogonal(union vector3d const *, union vector3d *)
//{
//    mangled_ppc("?force_vectors_orthogonal@@YAXPBTvector3d@@PAT1@@Z");
//};

//void compute_efficent_bounding_sphere(float *, float *, float, float)
//{
//    mangled_ppc("?compute_efficent_bounding_sphere@@YAXPAM0MM@Z");
//};

//void light_update_bounding_sphere(long)
//{
//    mangled_ppc("?light_update_bounding_sphere@@YAXJ@Z");
//};

//void light_get_bounding_sphere(long, union real_point3d *, float *)
//{
//    mangled_ppc("?light_get_bounding_sphere@@YAXJPATreal_point3d@@PAM@Z");
//};

//void light_disconnect_from_map(long)
//{
//    mangled_ppc("?light_disconnect_from_map@@YAXJ@Z");
//};

//void light_move_map_attachment(long)
//{
//    mangled_ppc("?light_move_map_attachment@@YAXJ@Z");
//};

//void light_reconnect_to_map_force_inside_world_expensive(long)
//{
//    mangled_ppc("?light_reconnect_to_map_force_inside_world_expensive@@YAXJ@Z");
//};

//bool light_compute_valid_location(long, bool)
//{
//    mangled_ppc("?light_compute_valid_location@@YA_NJ_N@Z");
//};

//bool light_is_connected_to_map(long)
//{
//    mangled_ppc("?light_is_connected_to_map@@YA_NJ@Z");
//};

//long lights_iterate_first_index(void)
//{
//    mangled_ppc("?lights_iterate_first_index@@YAJXZ");
//};

//long lights_iterate_next_index(long)
//{
//    mangled_ppc("?lights_iterate_next_index@@YAJJ@Z");
//};

//bool light_find_valid_point(union real_point3d const *, union real_point3d const *, union real_point3d *, float *)
//{
//    mangled_ppc("?light_find_valid_point@@YA_NPBTreal_point3d@@0PAT1@PAM@Z");
//};

//long light_marker_begin(void)
//{
//    mangled_ppc("?light_marker_begin@@YAJXZ");
//};

//bool light_unmarked(long, long)
//{
//    mangled_ppc("?light_unmarked@@YA_NJJ@Z");
//};

//bool light_mark(long, long)
//{
//    mangled_ppc("?light_mark@@YA_NJJ@Z");
//};

//void light_marker_end(long)
//{
//    mangled_ppc("?light_marker_end@@YAXJ@Z");
//};

//void light_submit_lens_flares(long, enum e_output_user_index)
//{
//    mangled_ppc("?light_submit_lens_flares@@YAXJW4e_output_user_index@@@Z");
//};

//void light_calculate_priority_and_fade(long, union real_point3d const *, float, float *, float *)
//{
//    mangled_ppc("?light_calculate_priority_and_fade@@YAXJPBTreal_point3d@@MPAM1@Z");
//};

//void render_debug_light(long, long, long, struct render_camera const *)
//{
//    mangled_ppc("?render_debug_light@@YAXJJJPBUrender_camera@@@Z");
//};

//long light_index_from_name_index(short)
//{
//    mangled_ppc("?light_index_from_name_index@@YAJF@Z");
//};

//void dump_light_state(void)
//{
//    mangled_ppc("?dump_light_state@@YAXXZ");
//};

//void light_render_debug_projection(struct visibility_projection *, union argb_color const *)
//{
//    mangled_ppc("?light_render_debug_projection@@YAXPAUvisibility_projection@@PBTargb_color@@@Z");
//};

//struct light_datum * animated_uber_light(long)
//{
//    mangled_ppc("?animated_uber_light@@YAPAUlight_datum@@J@Z");
//};

//public: c_enum<enum e_change_color_reference, char, 0, 5, struct s_default_enum_string_resolver>::c_enum<enum e_change_color_reference, char, 0, 5, struct s_default_enum_string_resolver>(enum e_change_color_reference)
//{
//    mangled_ppc("??0?$c_enum@W4e_change_color_reference@@D$0A@$04Us_default_enum_string_resolver@@@@QAA@W4e_change_color_reference@@@Z");
//};

//public: static long s_static_array<class c_big_flags_typed_no_init<long, 600>, 2>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@V?$c_big_flags_typed_no_init@J$0CFI@@@$01@@SAJXZ");
//};

//public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_lights_game_globals_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_lights_game_globals_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: void c_data_iterator<struct light_datum>::begin(struct s_data_array *)
//{
//    mangled_ppc("?begin@?$c_data_iterator@Ulight_datum@@@@QAAXPAUs_data_array@@@Z");
//};

//public: bool c_data_iterator<struct light_datum>::next(void)
//{
//    mangled_ppc("?next@?$c_data_iterator@Ulight_datum@@@@QAA_NXZ");
//};

//public: struct light_datum * c_data_iterator<struct light_datum>::get_datum(void) const
//{
//    mangled_ppc("?get_datum@?$c_data_iterator@Ulight_datum@@@@QBAPAUlight_datum@@XZ");
//};

//public: long c_data_iterator<struct light_datum>::get_index(void) const
//{
//    mangled_ppc("?get_index@?$c_data_iterator@Ulight_datum@@@@QBAJXZ");
//};

//public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_lights_game_globals_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_lights_game_globals_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: void c_big_flags_typed_no_init<long, 600>::clear(void)
//{
//    mangled_ppc("?clear@?$c_big_flags_typed_no_init@J$0CFI@@@QAAXXZ");
//};

//public: bool c_big_flags_typed_no_init<long, 600>::test(long) const
//{
//    mangled_ppc("?test@?$c_big_flags_typed_no_init@J$0CFI@@@QBA_NJ@Z");
//};

//public: void c_big_flags_typed_no_init<long, 600>::set(long, bool)
//{
//    mangled_ppc("?set@?$c_big_flags_typed_no_init@J$0CFI@@@QAAXJ_N@Z");
//};

//public: void c_flags_no_init<enum e_collision_bsp_test_sphere_flag, unsigned long, 3, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_collision_bsp_test_sphere_flag@@K$02Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: void c_flags_no_init<enum e_collision_bsp_test_sphere_flag, unsigned long, 3, struct s_default_enum_string_resolver>::set(enum e_collision_bsp_test_sphere_flag, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_collision_bsp_test_sphere_flag@@K$02Us_default_enum_string_resolver@@@@QAAXW4e_collision_bsp_test_sphere_flag@@_N@Z");
//};

//public: c_flags<enum e_collision_bsp_test_sphere_flag, unsigned long, 3, struct s_default_enum_string_resolver>::c_flags<enum e_collision_bsp_test_sphere_flag, unsigned long, 3, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_collision_bsp_test_sphere_flag@@K$02Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: class c_big_flags_typed_no_init<long, 600> & s_static_array<class c_big_flags_typed_no_init<long, 600>, 2>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@V?$c_big_flags_typed_no_init@J$0CFI@@@$01@@QAAAAV?$c_big_flags_typed_no_init@J$0CFI@@@J@Z");
//};

//public: bool c_big_flags_typed_no_init<long, 600>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_big_flags_typed_no_init@J$0CFI@@@QBA_NXZ");
//};

//public: static bool c_big_flags_typed_no_init<long, 600>::valid_bit(long)
//{
//    mangled_ppc("?valid_bit@?$c_big_flags_typed_no_init@J$0CFI@@@SA_NJ@Z");
//};

//public: bool c_big_flags_typed_no_init<long, 600>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_big_flags_typed_no_init@J$0CFI@@@QBA_NXZ");
//};

//public: bool c_flags_no_init<enum e_collision_bsp_test_sphere_flag, unsigned long, 3, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_collision_bsp_test_sphere_flag@@K$02Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static bool c_flags_no_init<enum e_collision_bsp_test_sphere_flag, unsigned long, 3, struct s_default_enum_string_resolver>::valid_bit(enum e_collision_bsp_test_sphere_flag)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_collision_bsp_test_sphere_flag@@K$02Us_default_enum_string_resolver@@@@SA_NW4e_collision_bsp_test_sphere_flag@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_collision_bsp_test_sphere_flag, unsigned long, 3, struct s_default_enum_string_resolver>::flag_size_type(enum e_collision_bsp_test_sphere_flag)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_collision_bsp_test_sphere_flag@@K$02Us_default_enum_string_resolver@@@@CAKW4e_collision_bsp_test_sphere_flag@@@Z");
//};

//public: static bool s_static_array<class c_big_flags_typed_no_init<long, 600>, 2>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@V?$c_big_flags_typed_no_init@J$0CFI@@@$01@@SA_NJ@Z");
//};

//protected: static unsigned long c_big_flags_typed_no_init<long, 600>::get_mask_of_second_slice_of_chunk_inclusive(long)
//{
//    mangled_ppc("?get_mask_of_second_slice_of_chunk_inclusive@?$c_big_flags_typed_no_init@J$0CFI@@@KAKJ@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_collision_bsp_test_sphere_flag, unsigned long, 3, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_collision_bsp_test_sphere_flag@@K$02Us_default_enum_string_resolver@@@@CAKXZ");
//};

//protected: static long c_big_flags_typed_no_init<long, 600>::flag_chunk_index_to_bit_index(long)
//{
//    mangled_ppc("?flag_chunk_index_to_bit_index@?$c_big_flags_typed_no_init@J$0CFI@@@KAJJ@Z");
//};

//protected: static long c_big_flags_typed_no_init<long, 600>::bit_index_to_flag_chunk_index(long)
//{
//    mangled_ppc("?bit_index_to_flag_chunk_index@?$c_big_flags_typed_no_init@J$0CFI@@@KAJJ@Z");
//};

//protected: static unsigned long c_big_flags_typed_no_init<long, 600>::get_valid_mask_of_last_chunk(void)
//{
//    mangled_ppc("?get_valid_mask_of_last_chunk@?$c_big_flags_typed_no_init@J$0CFI@@@KAKXZ");
//};

//private: static unsigned long c_flags_no_init<enum e_collision_bsp_test_sphere_flag, unsigned long, 3, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_collision_bsp_test_sphere_flag)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_collision_bsp_test_sphere_flag@@K$02Us_default_enum_string_resolver@@@@CAKW4e_collision_bsp_test_sphere_flag@@@Z");
//};

//protected: static unsigned long c_big_flags_typed_no_init<long, 600>::get_mask_of_first_slice_of_chunk_exclusive(long)
//{
//    mangled_ppc("?get_mask_of_first_slice_of_chunk_exclusive@?$c_big_flags_typed_no_init@J$0CFI@@@KAKJ@Z");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_light_data_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_light_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_light_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_light_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_light_data_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_light_data_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_light_data_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_light_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_light_data_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_light_data_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_light_data_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_light_data_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_light_data_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: s_lights_globals::s_lights_globals(void)
//{
//    mangled_ppc("??0s_lights_globals@@QAA@XZ");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_lights_game_globals_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_lights_game_globals_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_lights_game_globals_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_lights_game_globals_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_lights_game_globals_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_lights_game_globals_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_lights_game_globals_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_lights_game_globals_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_lights_game_globals_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_light_data_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_light_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_light_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_lights_game_globals_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_lights_game_globals_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_lights_game_globals_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//void g_light_data_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_light_data_allocator@@YAXXZ");
//};

//void g_lights_game_globals_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_lights_game_globals_allocator@@YAXXZ");
//};

