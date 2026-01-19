/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// float g_camera_speed; // "?g_camera_speed@@3MA"
// bool observer_collision_enabled; // "?observer_collision_enabled@@3_NA"
// bool observer_collision_anticipation_enabled; // "?observer_collision_anticipation_enabled@@3_NA"
// long observer_collision_water_flags; // "?observer_collision_water_flags@@3JA"
// float g_observer_wave_height; // "?g_observer_wave_height@@3MA"
// char const *const k_global_camera_parameters_name; // "?k_global_camera_parameters_name@@3PBDB"
// struct s_observer_update *global_observer_update_list; // "?global_observer_update_list@@3PAUs_observer_update@@A"
// bool observer_meter_display; // "?observer_meter_display@@3_NA"
// bool g_debug_observer_render; // "?g_debug_observer_render@@3_NA"
// class t_restricted_allocation_manager<4, 0, 0, void (__cdecl __tls_set_g_observer_globals_allocator::*)(void *)> g_observer_globals_allocator; // "?g_observer_globals_allocator@@3V?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_observer_globals_allocator@@YAXPAX@Z@@A"
// class t_restricted_allocation_manager<4, 0, 0, void (__cdecl __tls_set_g_observer_gamestate_globals_allocator::*)(void *)> g_observer_gamestate_globals_allocator; // "?g_observer_gamestate_globals_allocator@@3V?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_observer_gamestate_globals_allocator@@YAXPAX@Z@@A"
// struct c_status_line *observer_meters; // "?observer_meters@@3PAUc_status_line@@A"
// struct s_observer_globals *g_observer_globals; // "?g_observer_globals@@3PAUs_observer_globals@@A"
// struct s_observer_gamestate_globals *observer_gamestate_globals; // "?observer_gamestate_globals@@3PAUs_observer_gamestate_globals@@A"

// void __tls_set_g_observer_globals_allocator(void *);
// void __tls_set_g_observer_gamestate_globals_allocator(void *);
// void observer_clear_global_update_list(void);
// void observer_adopt_global_update_list(void);
// struct s_observer * observer_get(enum e_output_user_index);
// struct s_observer_globals * observer_globals_get(void);
// void observer_post_global_update_list(void);
// void observer_initialize(void);
// void observer_dispose(void);
// void observer_initialize_before_saved_game(long);
// void observer_initialize_for_saved_game(long);
// void observer_clear_all(void);
// void observer_initialize_after_load_saved_game(long);
// void observer_block_for_one_frame(void);
// void observer_initialize_for_new_map(void);
// void observer_dispose_from_old_map(void);
// void observer_initialize_for_new_structure_bsp(unsigned long);
// void observer_dispose_from_old_structure_bsp(unsigned long);
// void observer_set_camera(enum e_output_user_index, struct s_observer_command *);
// void observer_game_tick(void);
// void observer_update(float);
// void observer_apply_camera_effect(enum e_output_user_index);
// bool observer_collision_in_safe_pill(enum e_output_user_index, union real_point3d *, union vector3d *, float);
// void observer_perform_collision(enum e_output_user_index, struct s_focus_and_distance const *, float);
// struct s_observer_result const * observer_get_camera(enum e_output_user_index);
// struct s_observer_result const * observer_try_and_get_camera(enum e_output_user_index);
// struct s_observer_result * observer_try_and_get_writable_camera(enum e_output_user_index);
// struct s_observer_result const * observer_try_to_get_valid_camera_invalid_location_okay(enum e_output_user_index);
// bool observer_command_has_finished(enum e_output_user_index);
// bool observer_result_valid(enum e_output_user_index);
// float observer_suggested_field_of_view(void);
// float observer_suggested_field_of_view_change_time(void);
// void observer_clear(struct s_observer *);
// void observer_result_clear(struct s_observer_result *);
// void observer_command_clear(struct s_observer_command *);
// void observer_update_command(enum e_output_user_index);
// void observer_pass_time(enum e_output_user_index);
// void observer_update_displacements(enum e_output_user_index);
// void observer_update_polynomial(enum e_output_user_index);
// void observer_update_accelerations(enum e_output_user_index);
// void observer_update_velocities(enum e_output_user_index);
// void observer_update_positions(enum e_output_user_index);
// void observer_find_displacement(float const *const, float const *const, struct s_observer_derivative *);
// void observer_rotational_displacement(union vector3d const *, union vector3d const *, union vector3d const *, union vector3d const *, union vector3d *);
// void observer_apply_rotational_displacement(union vector3d const *, union vector3d *, union vector3d *);
// float observer_get_near_plane_farthest_distance(float, float);
// void observer_apply_focus_offset(union real_point3d *, union vector3d const *, union vector3d const *, union vector3d const *);
// void observer_compute_result(enum e_output_user_index, struct s_focus_and_distance *);
// void observer_result_set_position(enum e_output_user_index, union real_point3d const *, float, union vector3d const *);
// void observer_fix_focus_position_to_safe_position(enum e_output_user_index, union real_point3d *, long, long, union real_point3d const *);
// float observer_get_max_wave_height(void);
// void observer_test_water(union real_point3d const *, union vector3d *, union real_point3d *, float, float);
// void observer_check_penetration(enum e_output_user_index, union real_point3d *, union vector3d *, union vector3d const *, union real_point3d const *, float, long, long, float *, float, float);
// void observer_collision_get_initial_configuration(enum e_output_user_index, union real_point3d const *, union vector3d const *, float, float *, union vector3d *, union real_point3d *, float);
// void observer_penetration_check_volume(union real_point3d *, union vector3d const *, union real_point3d const *, float, float);
// void observer_command_get_collision_ignore_objects(enum e_output_user_index, struct s_observer_command const *, long *, long *);
// void observer_result_compute_parameters(struct s_observer_result *);
// void observer_obsolete_position(enum e_output_user_index);
// bool valid_world_real(float);
// bool valid_world_real_point3d(union real_point3d const *);
// bool valid_field_of_view(float);
// bool valid_focus_distance(float);
// bool valid_timer(float);
// bool observer_valid_camera_command(struct s_observer_command const *);
// void observer_validate_camera_command(struct s_observer_command *);
// void observer_build_result_from_point_and_vectors(struct s_observer_result *, union real_point3d const *, union vector3d const *, union vector3d const *);
// void observer_assert_command_valid(struct s_observer_command const *);
// void debug_render_observer(void);
// bool active_user_close_to_point_not_deterministic(union real_point3d const *, float, enum e_adjust_for_fov_scale);
// void observer_compute_view_offset_matrix(enum e_output_user_index, struct real_matrix4x3*);
// struct s_collision_test_flags observer_collision_flags_get(enum e_output_user_index);
// public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_observer_globals_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_observer_gamestate_globals_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_observer_globals_allocator::*)(void *)>::valid(void) const;
// public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_observer_gamestate_globals_allocator::*)(void *)>::valid(void) const;
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_observer_globals_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_observer_globals_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_observer_globals_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_observer_globals_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_observer_globals_allocator::*)(void *)>::free_memory(void);
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_observer_gamestate_globals_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_observer_gamestate_globals_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_observer_gamestate_globals_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_observer_gamestate_globals_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_observer_gamestate_globals_allocator::*)(void *)>::free_memory(void);
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_observer_globals_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_observer_globals_allocator::*)(void *)>(void);
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_observer_gamestate_globals_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_observer_gamestate_globals_allocator::*)(void *)>(void);
// void g_observer_globals_allocator::`dynamic atexit destructor'(void);
// void g_observer_gamestate_globals_allocator::`dynamic atexit destructor'(void);

//void __tls_set_g_observer_globals_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_observer_globals_allocator@@YAXPAX@Z");
//};

//void __tls_set_g_observer_gamestate_globals_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_observer_gamestate_globals_allocator@@YAXPAX@Z");
//};

//void observer_clear_global_update_list(void)
//{
//    mangled_ppc("?observer_clear_global_update_list@@YAXXZ");
//};

//void observer_adopt_global_update_list(void)
//{
//    mangled_ppc("?observer_adopt_global_update_list@@YAXXZ");
//};

//struct s_observer * observer_get(enum e_output_user_index)
//{
//    mangled_ppc("?observer_get@@YAPAUs_observer@@W4e_output_user_index@@@Z");
//};

//struct s_observer_globals * observer_globals_get(void)
//{
//    mangled_ppc("?observer_globals_get@@YAPAUs_observer_globals@@XZ");
//};

//void observer_post_global_update_list(void)
//{
//    mangled_ppc("?observer_post_global_update_list@@YAXXZ");
//};

//void observer_initialize(void)
//{
//    mangled_ppc("?observer_initialize@@YAXXZ");
//};

//void observer_dispose(void)
//{
//    mangled_ppc("?observer_dispose@@YAXXZ");
//};

//void observer_initialize_before_saved_game(long)
//{
//    mangled_ppc("?observer_initialize_before_saved_game@@YAXJ@Z");
//};

//void observer_initialize_for_saved_game(long)
//{
//    mangled_ppc("?observer_initialize_for_saved_game@@YAXJ@Z");
//};

//void observer_clear_all(void)
//{
//    mangled_ppc("?observer_clear_all@@YAXXZ");
//};

//void observer_initialize_after_load_saved_game(long)
//{
//    mangled_ppc("?observer_initialize_after_load_saved_game@@YAXJ@Z");
//};

//void observer_block_for_one_frame(void)
//{
//    mangled_ppc("?observer_block_for_one_frame@@YAXXZ");
//};

//void observer_initialize_for_new_map(void)
//{
//    mangled_ppc("?observer_initialize_for_new_map@@YAXXZ");
//};

//void observer_dispose_from_old_map(void)
//{
//    mangled_ppc("?observer_dispose_from_old_map@@YAXXZ");
//};

//void observer_initialize_for_new_structure_bsp(unsigned long)
//{
//    mangled_ppc("?observer_initialize_for_new_structure_bsp@@YAXK@Z");
//};

//void observer_dispose_from_old_structure_bsp(unsigned long)
//{
//    mangled_ppc("?observer_dispose_from_old_structure_bsp@@YAXK@Z");
//};

//void observer_set_camera(enum e_output_user_index, struct s_observer_command *)
//{
//    mangled_ppc("?observer_set_camera@@YAXW4e_output_user_index@@PAUs_observer_command@@@Z");
//};

//void observer_game_tick(void)
//{
//    mangled_ppc("?observer_game_tick@@YAXXZ");
//};

//void observer_update(float)
//{
//    mangled_ppc("?observer_update@@YAXM@Z");
//};

//void observer_apply_camera_effect(enum e_output_user_index)
//{
//    mangled_ppc("?observer_apply_camera_effect@@YAXW4e_output_user_index@@@Z");
//};

//bool observer_collision_in_safe_pill(enum e_output_user_index, union real_point3d *, union vector3d *, float)
//{
//    mangled_ppc("?observer_collision_in_safe_pill@@YA_NW4e_output_user_index@@PATreal_point3d@@PATvector3d@@M@Z");
//};

//void observer_perform_collision(enum e_output_user_index, struct s_focus_and_distance const *, float)
//{
//    mangled_ppc("?observer_perform_collision@@YAXW4e_output_user_index@@PBUs_focus_and_distance@@M@Z");
//};

//struct s_observer_result const * observer_get_camera(enum e_output_user_index)
//{
//    mangled_ppc("?observer_get_camera@@YAPBUs_observer_result@@W4e_output_user_index@@@Z");
//};

//struct s_observer_result const * observer_try_and_get_camera(enum e_output_user_index)
//{
//    mangled_ppc("?observer_try_and_get_camera@@YAPBUs_observer_result@@W4e_output_user_index@@@Z");
//};

//struct s_observer_result * observer_try_and_get_writable_camera(enum e_output_user_index)
//{
//    mangled_ppc("?observer_try_and_get_writable_camera@@YAPAUs_observer_result@@W4e_output_user_index@@@Z");
//};

//struct s_observer_result const * observer_try_to_get_valid_camera_invalid_location_okay(enum e_output_user_index)
//{
//    mangled_ppc("?observer_try_to_get_valid_camera_invalid_location_okay@@YAPBUs_observer_result@@W4e_output_user_index@@@Z");
//};

//bool observer_command_has_finished(enum e_output_user_index)
//{
//    mangled_ppc("?observer_command_has_finished@@YA_NW4e_output_user_index@@@Z");
//};

//bool observer_result_valid(enum e_output_user_index)
//{
//    mangled_ppc("?observer_result_valid@@YA_NW4e_output_user_index@@@Z");
//};

//float observer_suggested_field_of_view(void)
//{
//    mangled_ppc("?observer_suggested_field_of_view@@YAMXZ");
//};

//float observer_suggested_field_of_view_change_time(void)
//{
//    mangled_ppc("?observer_suggested_field_of_view_change_time@@YAMXZ");
//};

//void observer_clear(struct s_observer *)
//{
//    mangled_ppc("?observer_clear@@YAXPAUs_observer@@@Z");
//};

//void observer_result_clear(struct s_observer_result *)
//{
//    mangled_ppc("?observer_result_clear@@YAXPAUs_observer_result@@@Z");
//};

//void observer_command_clear(struct s_observer_command *)
//{
//    mangled_ppc("?observer_command_clear@@YAXPAUs_observer_command@@@Z");
//};

//void observer_update_command(enum e_output_user_index)
//{
//    mangled_ppc("?observer_update_command@@YAXW4e_output_user_index@@@Z");
//};

//void observer_pass_time(enum e_output_user_index)
//{
//    mangled_ppc("?observer_pass_time@@YAXW4e_output_user_index@@@Z");
//};

//void observer_update_displacements(enum e_output_user_index)
//{
//    mangled_ppc("?observer_update_displacements@@YAXW4e_output_user_index@@@Z");
//};

//void observer_update_polynomial(enum e_output_user_index)
//{
//    mangled_ppc("?observer_update_polynomial@@YAXW4e_output_user_index@@@Z");
//};

//void observer_update_accelerations(enum e_output_user_index)
//{
//    mangled_ppc("?observer_update_accelerations@@YAXW4e_output_user_index@@@Z");
//};

//void observer_update_velocities(enum e_output_user_index)
//{
//    mangled_ppc("?observer_update_velocities@@YAXW4e_output_user_index@@@Z");
//};

//void observer_update_positions(enum e_output_user_index)
//{
//    mangled_ppc("?observer_update_positions@@YAXW4e_output_user_index@@@Z");
//};

//void observer_find_displacement(float const *const, float const *const, struct s_observer_derivative *)
//{
//    mangled_ppc("?observer_find_displacement@@YAXQBM0PAUs_observer_derivative@@@Z");
//};

//void observer_rotational_displacement(union vector3d const *, union vector3d const *, union vector3d const *, union vector3d const *, union vector3d *)
//{
//    mangled_ppc("?observer_rotational_displacement@@YAXPBTvector3d@@000PAT1@@Z");
//};

//void observer_apply_rotational_displacement(union vector3d const *, union vector3d *, union vector3d *)
//{
//    mangled_ppc("?observer_apply_rotational_displacement@@YAXPBTvector3d@@PAT1@1@Z");
//};

//float observer_get_near_plane_farthest_distance(float, float)
//{
//    mangled_ppc("?observer_get_near_plane_farthest_distance@@YAMMM@Z");
//};

//void observer_apply_focus_offset(union real_point3d *, union vector3d const *, union vector3d const *, union vector3d const *)
//{
//    mangled_ppc("?observer_apply_focus_offset@@YAXPATreal_point3d@@PBTvector3d@@11@Z");
//};

//void observer_compute_result(enum e_output_user_index, struct s_focus_and_distance *)
//{
//    mangled_ppc("?observer_compute_result@@YAXW4e_output_user_index@@PAUs_focus_and_distance@@@Z");
//};

//void observer_result_set_position(enum e_output_user_index, union real_point3d const *, float, union vector3d const *)
//{
//    mangled_ppc("?observer_result_set_position@@YAXW4e_output_user_index@@PBTreal_point3d@@MPBTvector3d@@@Z");
//};

//void observer_fix_focus_position_to_safe_position(enum e_output_user_index, union real_point3d *, long, long, union real_point3d const *)
//{
//    mangled_ppc("?observer_fix_focus_position_to_safe_position@@YAXW4e_output_user_index@@PATreal_point3d@@JJPBT2@@Z");
//};

//float observer_get_max_wave_height(void)
//{
//    mangled_ppc("?observer_get_max_wave_height@@YAMXZ");
//};

//void observer_test_water(union real_point3d const *, union vector3d *, union real_point3d *, float, float)
//{
//    mangled_ppc("?observer_test_water@@YAXPBTreal_point3d@@PATvector3d@@PAT1@MM@Z");
//};

//void observer_check_penetration(enum e_output_user_index, union real_point3d *, union vector3d *, union vector3d const *, union real_point3d const *, float, long, long, float *, float, float)
//{
//    mangled_ppc("?observer_check_penetration@@YAXW4e_output_user_index@@PATreal_point3d@@PATvector3d@@PBT3@PBT2@MJJPAMMM@Z");
//};

//void observer_collision_get_initial_configuration(enum e_output_user_index, union real_point3d const *, union vector3d const *, float, float *, union vector3d *, union real_point3d *, float)
//{
//    mangled_ppc("?observer_collision_get_initial_configuration@@YAXW4e_output_user_index@@PBTreal_point3d@@PBTvector3d@@MPAMPAT3@PAT2@M@Z");
//};

//void observer_penetration_check_volume(union real_point3d *, union vector3d const *, union real_point3d const *, float, float)
//{
//    mangled_ppc("?observer_penetration_check_volume@@YAXPATreal_point3d@@PBTvector3d@@PBT1@MM@Z");
//};

//void observer_command_get_collision_ignore_objects(enum e_output_user_index, struct s_observer_command const *, long *, long *)
//{
//    mangled_ppc("?observer_command_get_collision_ignore_objects@@YAXW4e_output_user_index@@PBUs_observer_command@@PAJ2@Z");
//};

//void observer_result_compute_parameters(struct s_observer_result *)
//{
//    mangled_ppc("?observer_result_compute_parameters@@YAXPAUs_observer_result@@@Z");
//};

//void observer_obsolete_position(enum e_output_user_index)
//{
//    mangled_ppc("?observer_obsolete_position@@YAXW4e_output_user_index@@@Z");
//};

//bool valid_world_real(float)
//{
//    mangled_ppc("?valid_world_real@@YA_NM@Z");
//};

//bool valid_world_real_point3d(union real_point3d const *)
//{
//    mangled_ppc("?valid_world_real_point3d@@YA_NPBTreal_point3d@@@Z");
//};

//bool valid_field_of_view(float)
//{
//    mangled_ppc("?valid_field_of_view@@YA_NM@Z");
//};

//bool valid_focus_distance(float)
//{
//    mangled_ppc("?valid_focus_distance@@YA_NM@Z");
//};

//bool valid_timer(float)
//{
//    mangled_ppc("?valid_timer@@YA_NM@Z");
//};

//bool observer_valid_camera_command(struct s_observer_command const *)
//{
//    mangled_ppc("?observer_valid_camera_command@@YA_NPBUs_observer_command@@@Z");
//};

//void observer_validate_camera_command(struct s_observer_command *)
//{
//    mangled_ppc("?observer_validate_camera_command@@YAXPAUs_observer_command@@@Z");
//};

//void observer_build_result_from_point_and_vectors(struct s_observer_result *, union real_point3d const *, union vector3d const *, union vector3d const *)
//{
//    mangled_ppc("?observer_build_result_from_point_and_vectors@@YAXPAUs_observer_result@@PBTreal_point3d@@PBTvector3d@@2@Z");
//};

//void observer_assert_command_valid(struct s_observer_command const *)
//{
//    mangled_ppc("?observer_assert_command_valid@@YAXPBUs_observer_command@@@Z");
//};

//void debug_render_observer(void)
//{
//    mangled_ppc("?debug_render_observer@@YAXXZ");
//};

//bool active_user_close_to_point_not_deterministic(union real_point3d const *, float, enum e_adjust_for_fov_scale)
//{
//    mangled_ppc("?active_user_close_to_point_not_deterministic@@YA_NPBTreal_point3d@@MW4e_adjust_for_fov_scale@@@Z");
//};

//void observer_compute_view_offset_matrix(enum e_output_user_index, struct real_matrix4x3*)
//{
//    mangled_ppc("?observer_compute_view_offset_matrix@@YAXW4e_output_user_index@@PAUreal_matrix4x3@@@Z");
//};

//struct s_collision_test_flags observer_collision_flags_get(enum e_output_user_index)
//{
//    mangled_ppc("?observer_collision_flags_get@@YA?AUs_collision_test_flags@@W4e_output_user_index@@@Z");
//};

//public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_observer_globals_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_observer_globals_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_observer_gamestate_globals_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_observer_gamestate_globals_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_observer_globals_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_observer_globals_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_observer_gamestate_globals_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_observer_gamestate_globals_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_observer_globals_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_observer_globals_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_observer_globals_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_observer_globals_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_observer_globals_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_observer_globals_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_observer_globals_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_observer_globals_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_observer_globals_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_observer_gamestate_globals_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_observer_gamestate_globals_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_observer_gamestate_globals_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_observer_gamestate_globals_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_observer_gamestate_globals_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_observer_gamestate_globals_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_observer_gamestate_globals_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_observer_gamestate_globals_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_observer_gamestate_globals_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_observer_globals_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_observer_globals_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_observer_globals_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_observer_gamestate_globals_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_observer_gamestate_globals_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_observer_gamestate_globals_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//void g_observer_globals_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_observer_globals_allocator@@YAXXZ");
//};

//void g_observer_gamestate_globals_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_observer_gamestate_globals_allocator@@YAXXZ");
//};

