/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static enum c_flying_camera::e_flags const c_flags_no_init<enum c_flying_camera::e_flags, long, 6, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_flags@c_flying_camera@@J$05Us_default_enum_string_resolver@@@@2W4e_flags@c_flying_camera@@B"
// public: static long const s_static_array<unsigned char[404], 4>::k_element_count; // "?k_element_count@?$s_static_array@$$BY0BJE@E$03@@2JB"
// public: static long const s_static_array<struct s_director_info, 4>::k_element_count; // "?k_element_count@?$s_static_array@Us_director_info@@$03@@2JB"
// bool g_director_use_dt; // "?g_director_use_dt@@3_NA"
// bool g_objective_dead_cam_respawn_suppression; // "?g_objective_dead_cam_respawn_suppression@@3_NA"
// bool g_objective_dead_cam_respawn_time_resets_when_switching_targets; // "?g_objective_dead_cam_respawn_time_resets_when_switching_targets@@3_NA"
// bool g_objective_dead_cam_extermination_allows_push_to_respawn; // "?g_objective_dead_cam_extermination_allows_push_to_respawn@@3_NA"
// float k_objective_dead_cam_orbit_distance; // "?k_objective_dead_cam_orbit_distance@@3MA"
// float g_objective_dead_cam_respawning_delay_before_voluntary_control_of_spawn; // "?g_objective_dead_cam_respawning_delay_before_voluntary_control_of_spawn@@3MA"
// float g_objective_dead_cam_respawning_respawn_time_on_player_seconds; // "?g_objective_dead_cam_respawning_respawn_time_on_player_seconds@@3MA"
// float g_objective_dead_cam_respawning_respawn_time_at_base_seconds; // "?g_objective_dead_cam_respawning_respawn_time_at_base_seconds@@3MA"
// float g_objective_dead_cam_respawning_respawn_time_at_base_after_extermination_seconds; // "?g_objective_dead_cam_respawning_respawn_time_at_base_after_extermination_seconds@@3MA"
// char const *const k_camera_save_filename; // "?k_camera_save_filename@@3PBDB"
// struct s_observer_result g_debug_camera_director_observer; // "?g_debug_camera_director_observer@@3Us_observer_result@@A"
// bool debug_camera_director; // "?debug_camera_director@@3_NA"
// class t_restricted_allocation_manager<4, 0, 0, void (__cdecl __tls_set_g_director_globals_allocator::*)(void *)> g_director_globals_allocator; // "?g_director_globals_allocator@@3V?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_director_globals_allocator@@YAXPAX@Z@@A"
// class t_restricted_allocation_manager<4, 0, 0, void (__cdecl __tls_set_g_director_camera_scripted_allocator::*)(void *)> g_director_camera_scripted_allocator; // "?g_director_camera_scripted_allocator@@3V?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_director_camera_scripted_allocator@@YAXPAX@Z@@A"
// struct s_director_globals *director_globals; // "?director_globals@@3PAUs_director_globals@@A"
// bool *director_camera_scripted; // "?director_camera_scripted@@3PA_NA"

// void __tls_set_g_director_globals_allocator(void *);
// void __tls_set_g_director_camera_scripted_allocator(void *);
// void director_initialize(void);
// void update_vtables(void);
// void director_fix_vtables_for_saved_game(long);
// void director_initialize_for_saved_game(long);
// void director_initialize_for_new_map(void);
// void director_dispose_from_old_map(void);
// void director_dispose(void);
// void director_game_tick(void);
// void director_update(float);
// void director_reset(void);
// void director_notify_map_reset(void);
// void director_set_fade_timer(float);
// float director_get_fade_timer(void);
// void director_render(void);
// void director_save_camera(void);
// void director_save_camera_named(char const *);
// void director_save_camera_simple_name(char const *);
// void director_load_camera_text(char const *);
// void director_load_camera(void);
// void director_load_camera_named(char const *);
// void director_load_camera_simple_name(char const *);
// class c_director * director_get(enum e_output_user_index);
// void director_get_position(enum e_output_user_index, union real_point3d *);
// bool director_current_camera_is_closely_tied_to_the_deterministic_world(enum e_output_user_index);
// enum e_director_perspective director_get_perspective(enum e_output_user_index);
// bool director_in_unit_perspective(enum e_output_user_index);
// void director_set_camera_third_person(enum e_output_user_index, bool);
// bool director_get_camera_third_person(enum e_output_user_index);
// long director_get_camera_hidden_object_index(enum e_output_user_index);
// void director_setup_flying_camera_at_scenario_point(enum e_output_user_index, long);
// void director_setup_orbiting_camera_at_target_relative_point(enum e_output_user_index, long, float, float, float);
// public: void c_orbiting_camera::set_orientation(union euler_angles2d const *);
// public: void c_orbiting_camera::set_vertical_offset(float);
// public: void c_orbiting_camera::set_horizontal_offset(float);
// void hs_director_setup_flying_camera_at_scenario_point(long, long);
// void hs_director_setup_orbiting_camera_at_target_relative_point(long, long, float, float, float);
// void director_script_camera(bool);
// void director_set_camera_mode(enum e_output_user_index, enum e_camera_mode);
// void hs_director_set_camera_mode(long, long);
// void hs_director_set_camera_target(long, long);
// bool director_inhibited_facing(enum e_output_user_index);
// bool director_inhibited_input(enum e_output_user_index);
// void director_reset_user_game_camera(enum e_output_user_index);
// struct s_cluster_reference director_get_deterministic_scripted_camera_cluster_reference(void);
// void director_synchronize_with_remote_camera(struct s_observer_result const *);
// void director_debug_camera(bool);
// struct s_observer_result const * director_get_debug_camera_observer(void);
// void hs_director_cycle_debug_camera(long);
// void director_print_camera_transform(long);
// void director_print_deterministic_camera_transform(long);
// bool director_debug_supress_black_screen(enum e_output_user_index);
// long upload_camera_start(long, struct s_file_reference *);
// void director_load_camera_named_internal(char const *);
// void director_save_camera_named_internal(char const *);
// void director_set_mode(enum e_output_user_index, enum e_director_mode);
// bool director_in_scripted_camera(void);
// enum e_director_mode choose_appropriate_director(enum e_output_user_index);
// void director_set_flying_camera_direct(enum e_output_user_index, union real_point3d const *, union vector3d const *, union vector3d const *, float);
// void survival_mode_update_flying_camera(enum e_output_user_index);
// void control_toggling_of_debug_directors(enum e_output_user_index);
// class c_game_team director_player_get_team_index(long);
// void director_handle_deleted_player(long);
// void director_handle_deleted_object(long);
// bool director_get_show_saved_film_control_pad(void);
// void director_set_show_saved_film_control_pad(bool);
// public: c_director::c_director(void);
// public: c_director::c_director(enum e_output_user_index);
// public: c_null_camera::c_null_camera(void);
// public: virtual void c_camera::set_position(union real_point3d const *);
// public: virtual void c_camera::set_forward(union vector3d const *);
// public: virtual void c_camera::set_roll(float);
// public: virtual void c_camera::enable_orientation(bool);
// public: virtual void c_camera::enable_movement(bool);
// public: virtual void c_camera::enable_roll(bool);
// public: virtual bool c_camera::should_draw_reticule(void) const;
// public: virtual long c_camera::get_camera_hidden_object_index(enum e_output_user_index) const;
// public: virtual enum e_camera_mode c_null_camera::get_type(void) const;
// public: virtual enum e_director_perspective c_null_camera::get_perspective(void) const;
// public: virtual bool c_null_camera::should_apply_player_effects(void) const;
// public: virtual void c_null_camera::update(enum e_output_user_index, float, struct s_observer_command *);
// public: virtual void c_director::update(float);
// public: enum e_output_user_index c_director::get_output_user_index(void) const;
// public: void c_director::assemble_screen_effects(class c_global_screen_effect_state *);
// protected: enum e_director_perspective c_director::get_perspective(void) const;
// protected: enum e_controller_index c_director::get_controller_index(void) const;
// public: virtual bool c_director::should_draw_hud_normal(void) const;
// public: virtual bool c_director::should_draw_hud_saved_film(void) const;
// public: virtual bool c_director::should_draw_reticule(void) const;
// public: virtual bool c_director::should_apply_player_effects(void) const;
// public: virtual bool c_director::inhibits_facing(void) const;
// public: virtual bool c_director::inhibits_input(void) const;
// public: virtual void c_director::handle_deleted_player(long);
// public: virtual void c_director::handle_deleted_object(long);
// public: class c_camera * c_director::get_camera(void);
// public: class c_camera const * c_director::get_camera(void) const;
// public: bool c_director::get_camera_as(enum e_camera_mode, class c_camera **);
// public: bool c_director::in_free_camera_mode(void) const;
// long dead_or_alive_unit_from_output_user(enum e_output_user_index);
// public: bool c_director::force_set_camera_mode(enum e_camera_mode, float);
// public: bool c_director::set_camera_mode(enum e_camera_mode, float);
// private: bool c_director::set_camera_mode_internal(enum e_camera_mode, float, bool);
// public: void c_director::get_position(union real_point3d *);
// protected: struct s_observer_command const * c_director::get_last_observer_command(void) const;
// private: void c_director::request_immediate_coop_respawn(void);
// private: void c_director::report_respawn_target_player_switch(long, bool, bool);
// protected: bool c_director::player_switch_update(void);
// private: void c_director::player_switch_gui_update(void);
// protected: void c_director::player_switch_gui_create_or_update(void);
// protected: bool c_director::player_switch_gui_destroy(void);
// private: void c_director::player_switch_gui_button_pressed(void);
// private: static bool c_director::player_switch_gui_create(enum e_output_user_index);
// public: class c_cui_screen_widget * c_cui_screen_manager::load_and_insert_by_name(long, struct s_cui_screen_parameters const *, long);
// private: static bool c_director::player_switch_gui_set_visible(enum e_output_user_index);
// public: long c_director::get_currently_viewed_player(void) const;
// public: long c_director::get_watched_player(void) const;
// public: void c_director::set_watched_player(long);
// enum e_director_perspective director_game_desired_perspective(long, enum e_seat_state *);
// public: virtual bool c_director::can_use_camera_mode(enum e_camera_mode) const;
// protected: static long c_director::player_get_next_player_with_a_unit(long, long, long, long, bool, bool, bool, long *);
// protected: void c_director::update_perspective(void);
// void set_debug_force_scripted_camera_disable(bool);
// public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_director_globals_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_director_camera_scripted_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_director_globals_allocator::*)(void *)>::valid(void) const;
// public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_director_camera_scripted_allocator::*)(void *)>::valid(void) const;
// public: struct s_director_info & s_static_array<struct s_director_info, 4>::operator[]<enum e_output_user_index>(enum e_output_user_index);
// public: unsigned char (& s_static_array<unsigned char[404], 4>::operator[]<enum e_output_user_index>(enum e_output_user_index))[404];
// public: static bool s_static_array<struct s_director_info, 4>::valid<enum e_output_user_index>(enum e_output_user_index);
// public: static bool s_static_array<unsigned char[404], 4>::valid<enum e_output_user_index>(enum e_output_user_index);
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_director_globals_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_director_globals_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_director_globals_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_director_globals_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_director_globals_allocator::*)(void *)>::free_memory(void);
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_director_camera_scripted_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_director_camera_scripted_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_director_camera_scripted_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_director_camera_scripted_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_director_camera_scripted_allocator::*)(void *)>::free_memory(void);
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_director_globals_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_director_globals_allocator::*)(void *)>(void);
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_director_camera_scripted_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_director_camera_scripted_allocator::*)(void *)>(void);
// void g_director_globals_allocator::`dynamic atexit destructor'(void);
// void g_director_camera_scripted_allocator::`dynamic atexit destructor'(void);

//void __tls_set_g_director_globals_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_director_globals_allocator@@YAXPAX@Z");
//};

//void __tls_set_g_director_camera_scripted_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_director_camera_scripted_allocator@@YAXPAX@Z");
//};

//void director_initialize(void)
//{
//    mangled_ppc("?director_initialize@@YAXXZ");
//};

//void update_vtables(void)
//{
//    mangled_ppc("?update_vtables@@YAXXZ");
//};

//void director_fix_vtables_for_saved_game(long)
//{
//    mangled_ppc("?director_fix_vtables_for_saved_game@@YAXJ@Z");
//};

//void director_initialize_for_saved_game(long)
//{
//    mangled_ppc("?director_initialize_for_saved_game@@YAXJ@Z");
//};

//void director_initialize_for_new_map(void)
//{
//    mangled_ppc("?director_initialize_for_new_map@@YAXXZ");
//};

//void director_dispose_from_old_map(void)
//{
//    mangled_ppc("?director_dispose_from_old_map@@YAXXZ");
//};

//void director_dispose(void)
//{
//    mangled_ppc("?director_dispose@@YAXXZ");
//};

//void director_game_tick(void)
//{
//    mangled_ppc("?director_game_tick@@YAXXZ");
//};

//void director_update(float)
//{
//    mangled_ppc("?director_update@@YAXM@Z");
//};

//void director_reset(void)
//{
//    mangled_ppc("?director_reset@@YAXXZ");
//};

//void director_notify_map_reset(void)
//{
//    mangled_ppc("?director_notify_map_reset@@YAXXZ");
//};

//void director_set_fade_timer(float)
//{
//    mangled_ppc("?director_set_fade_timer@@YAXM@Z");
//};

//float director_get_fade_timer(void)
//{
//    mangled_ppc("?director_get_fade_timer@@YAMXZ");
//};

//void director_render(void)
//{
//    mangled_ppc("?director_render@@YAXXZ");
//};

//void director_save_camera(void)
//{
//    mangled_ppc("?director_save_camera@@YAXXZ");
//};

//void director_save_camera_named(char const *)
//{
//    mangled_ppc("?director_save_camera_named@@YAXPBD@Z");
//};

//void director_save_camera_simple_name(char const *)
//{
//    mangled_ppc("?director_save_camera_simple_name@@YAXPBD@Z");
//};

//void director_load_camera_text(char const *)
//{
//    mangled_ppc("?director_load_camera_text@@YAXPBD@Z");
//};

//void director_load_camera(void)
//{
//    mangled_ppc("?director_load_camera@@YAXXZ");
//};

//void director_load_camera_named(char const *)
//{
//    mangled_ppc("?director_load_camera_named@@YAXPBD@Z");
//};

//void director_load_camera_simple_name(char const *)
//{
//    mangled_ppc("?director_load_camera_simple_name@@YAXPBD@Z");
//};

//class c_director * director_get(enum e_output_user_index)
//{
//    mangled_ppc("?director_get@@YAPAVc_director@@W4e_output_user_index@@@Z");
//};

//void director_get_position(enum e_output_user_index, union real_point3d *)
//{
//    mangled_ppc("?director_get_position@@YAXW4e_output_user_index@@PATreal_point3d@@@Z");
//};

//bool director_current_camera_is_closely_tied_to_the_deterministic_world(enum e_output_user_index)
//{
//    mangled_ppc("?director_current_camera_is_closely_tied_to_the_deterministic_world@@YA_NW4e_output_user_index@@@Z");
//};

//enum e_director_perspective director_get_perspective(enum e_output_user_index)
//{
//    mangled_ppc("?director_get_perspective@@YA?AW4e_director_perspective@@W4e_output_user_index@@@Z");
//};

//bool director_in_unit_perspective(enum e_output_user_index)
//{
//    mangled_ppc("?director_in_unit_perspective@@YA_NW4e_output_user_index@@@Z");
//};

//void director_set_camera_third_person(enum e_output_user_index, bool)
//{
//    mangled_ppc("?director_set_camera_third_person@@YAXW4e_output_user_index@@_N@Z");
//};

//bool director_get_camera_third_person(enum e_output_user_index)
//{
//    mangled_ppc("?director_get_camera_third_person@@YA_NW4e_output_user_index@@@Z");
//};

//long director_get_camera_hidden_object_index(enum e_output_user_index)
//{
//    mangled_ppc("?director_get_camera_hidden_object_index@@YAJW4e_output_user_index@@@Z");
//};

//void director_setup_flying_camera_at_scenario_point(enum e_output_user_index, long)
//{
//    mangled_ppc("?director_setup_flying_camera_at_scenario_point@@YAXW4e_output_user_index@@J@Z");
//};

//void director_setup_orbiting_camera_at_target_relative_point(enum e_output_user_index, long, float, float, float)
//{
//    mangled_ppc("?director_setup_orbiting_camera_at_target_relative_point@@YAXW4e_output_user_index@@JMMM@Z");
//};

//public: void c_orbiting_camera::set_orientation(union euler_angles2d const *)
//{
//    mangled_ppc("?set_orientation@c_orbiting_camera@@QAAXPBTeuler_angles2d@@@Z");
//};

//public: void c_orbiting_camera::set_vertical_offset(float)
//{
//    mangled_ppc("?set_vertical_offset@c_orbiting_camera@@QAAXM@Z");
//};

//public: void c_orbiting_camera::set_horizontal_offset(float)
//{
//    mangled_ppc("?set_horizontal_offset@c_orbiting_camera@@QAAXM@Z");
//};

//void hs_director_setup_flying_camera_at_scenario_point(long, long)
//{
//    mangled_ppc("?hs_director_setup_flying_camera_at_scenario_point@@YAXJJ@Z");
//};

//void hs_director_setup_orbiting_camera_at_target_relative_point(long, long, float, float, float)
//{
//    mangled_ppc("?hs_director_setup_orbiting_camera_at_target_relative_point@@YAXJJMMM@Z");
//};

//void director_script_camera(bool)
//{
//    mangled_ppc("?director_script_camera@@YAX_N@Z");
//};

//void director_set_camera_mode(enum e_output_user_index, enum e_camera_mode)
//{
//    mangled_ppc("?director_set_camera_mode@@YAXW4e_output_user_index@@W4e_camera_mode@@@Z");
//};

//void hs_director_set_camera_mode(long, long)
//{
//    mangled_ppc("?hs_director_set_camera_mode@@YAXJJ@Z");
//};

//void hs_director_set_camera_target(long, long)
//{
//    mangled_ppc("?hs_director_set_camera_target@@YAXJJ@Z");
//};

//bool director_inhibited_facing(enum e_output_user_index)
//{
//    mangled_ppc("?director_inhibited_facing@@YA_NW4e_output_user_index@@@Z");
//};

//bool director_inhibited_input(enum e_output_user_index)
//{
//    mangled_ppc("?director_inhibited_input@@YA_NW4e_output_user_index@@@Z");
//};

//void director_reset_user_game_camera(enum e_output_user_index)
//{
//    mangled_ppc("?director_reset_user_game_camera@@YAXW4e_output_user_index@@@Z");
//};

//struct s_cluster_reference director_get_deterministic_scripted_camera_cluster_reference(void)
//{
//    mangled_ppc("?director_get_deterministic_scripted_camera_cluster_reference@@YA?AUs_cluster_reference@@XZ");
//};

//void director_synchronize_with_remote_camera(struct s_observer_result const *)
//{
//    mangled_ppc("?director_synchronize_with_remote_camera@@YAXPBUs_observer_result@@@Z");
//};

//void director_debug_camera(bool)
//{
//    mangled_ppc("?director_debug_camera@@YAX_N@Z");
//};

//struct s_observer_result const * director_get_debug_camera_observer(void)
//{
//    mangled_ppc("?director_get_debug_camera_observer@@YAPBUs_observer_result@@XZ");
//};

//void hs_director_cycle_debug_camera(long)
//{
//    mangled_ppc("?hs_director_cycle_debug_camera@@YAXJ@Z");
//};

//void director_print_camera_transform(long)
//{
//    mangled_ppc("?director_print_camera_transform@@YAXJ@Z");
//};

//void director_print_deterministic_camera_transform(long)
//{
//    mangled_ppc("?director_print_deterministic_camera_transform@@YAXJ@Z");
//};

//bool director_debug_supress_black_screen(enum e_output_user_index)
//{
//    mangled_ppc("?director_debug_supress_black_screen@@YA_NW4e_output_user_index@@@Z");
//};

//long upload_camera_start(long, struct s_file_reference *)
//{
//    mangled_ppc("?upload_camera_start@@YAJJPAUs_file_reference@@@Z");
//};

//void director_load_camera_named_internal(char const *)
//{
//    mangled_ppc("?director_load_camera_named_internal@@YAXPBD@Z");
//};

//void director_save_camera_named_internal(char const *)
//{
//    mangled_ppc("?director_save_camera_named_internal@@YAXPBD@Z");
//};

//void director_set_mode(enum e_output_user_index, enum e_director_mode)
//{
//    mangled_ppc("?director_set_mode@@YAXW4e_output_user_index@@W4e_director_mode@@@Z");
//};

//bool director_in_scripted_camera(void)
//{
//    mangled_ppc("?director_in_scripted_camera@@YA_NXZ");
//};

//enum e_director_mode choose_appropriate_director(enum e_output_user_index)
//{
//    mangled_ppc("?choose_appropriate_director@@YA?AW4e_director_mode@@W4e_output_user_index@@@Z");
//};

//void director_set_flying_camera_direct(enum e_output_user_index, union real_point3d const *, union vector3d const *, union vector3d const *, float)
//{
//    mangled_ppc("?director_set_flying_camera_direct@@YAXW4e_output_user_index@@PBTreal_point3d@@PBTvector3d@@2M@Z");
//};

//void survival_mode_update_flying_camera(enum e_output_user_index)
//{
//    mangled_ppc("?survival_mode_update_flying_camera@@YAXW4e_output_user_index@@@Z");
//};

//void control_toggling_of_debug_directors(enum e_output_user_index)
//{
//    mangled_ppc("?control_toggling_of_debug_directors@@YAXW4e_output_user_index@@@Z");
//};

//class c_game_team director_player_get_team_index(long)
//{
//    mangled_ppc("?director_player_get_team_index@@YA?AVc_game_team@@J@Z");
//};

//void director_handle_deleted_player(long)
//{
//    mangled_ppc("?director_handle_deleted_player@@YAXJ@Z");
//};

//void director_handle_deleted_object(long)
//{
//    mangled_ppc("?director_handle_deleted_object@@YAXJ@Z");
//};

//bool director_get_show_saved_film_control_pad(void)
//{
//    mangled_ppc("?director_get_show_saved_film_control_pad@@YA_NXZ");
//};

//void director_set_show_saved_film_control_pad(bool)
//{
//    mangled_ppc("?director_set_show_saved_film_control_pad@@YAX_N@Z");
//};

//public: c_director::c_director(void)
//{
//    mangled_ppc("??0c_director@@QAA@XZ");
//};

//public: c_director::c_director(enum e_output_user_index)
//{
//    mangled_ppc("??0c_director@@QAA@W4e_output_user_index@@@Z");
//};

//public: c_null_camera::c_null_camera(void)
//{
//    mangled_ppc("??0c_null_camera@@QAA@XZ");
//};

//public: virtual void c_camera::set_position(union real_point3d const *)
//{
//    mangled_ppc("?set_position@c_camera@@UAAXPBTreal_point3d@@@Z");
//};

//public: virtual void c_camera::set_forward(union vector3d const *)
//{
//    mangled_ppc("?set_forward@c_camera@@UAAXPBTvector3d@@@Z");
//};

//public: virtual void c_camera::set_roll(float)
//{
//    mangled_ppc("?set_roll@c_camera@@UAAXM@Z");
//};

//public: virtual void c_camera::enable_orientation(bool)
//{
//    mangled_ppc("?enable_orientation@c_camera@@UAAX_N@Z");
//};

//public: virtual void c_camera::enable_movement(bool)
//{
//    mangled_ppc("?enable_movement@c_camera@@UAAX_N@Z");
//};

//public: virtual void c_camera::enable_roll(bool)
//{
//    mangled_ppc("?enable_roll@c_camera@@UAAX_N@Z");
//};

//public: virtual bool c_camera::should_draw_reticule(void) const
//{
//    mangled_ppc("?should_draw_reticule@c_camera@@UBA_NXZ");
//};

//public: virtual long c_camera::get_camera_hidden_object_index(enum e_output_user_index) const
//{
//    mangled_ppc("?get_camera_hidden_object_index@c_camera@@UBAJW4e_output_user_index@@@Z");
//};

//public: virtual enum e_camera_mode c_null_camera::get_type(void) const
//{
//    mangled_ppc("?get_type@c_null_camera@@UBA?AW4e_camera_mode@@XZ");
//};

//public: virtual enum e_director_perspective c_null_camera::get_perspective(void) const
//{
//    mangled_ppc("?get_perspective@c_null_camera@@UBA?AW4e_director_perspective@@XZ");
//};

//public: virtual bool c_null_camera::should_apply_player_effects(void) const
//{
//    mangled_ppc("?should_apply_player_effects@c_null_camera@@UBA_NXZ");
//};

//public: virtual void c_null_camera::update(enum e_output_user_index, float, struct s_observer_command *)
//{
//    mangled_ppc("?update@c_null_camera@@UAAXW4e_output_user_index@@MPAUs_observer_command@@@Z");
//};

//public: virtual void c_director::update(float)
//{
//    mangled_ppc("?update@c_director@@UAAXM@Z");
//};

//public: enum e_output_user_index c_director::get_output_user_index(void) const
//{
//    mangled_ppc("?get_output_user_index@c_director@@QBA?AW4e_output_user_index@@XZ");
//};

//public: void c_director::assemble_screen_effects(class c_global_screen_effect_state *)
//{
//    mangled_ppc("?assemble_screen_effects@c_director@@QAAXPAVc_global_screen_effect_state@@@Z");
//};

//protected: enum e_director_perspective c_director::get_perspective(void) const
//{
//    mangled_ppc("?get_perspective@c_director@@IBA?AW4e_director_perspective@@XZ");
//};

//protected: enum e_controller_index c_director::get_controller_index(void) const
//{
//    mangled_ppc("?get_controller_index@c_director@@IBA?AW4e_controller_index@@XZ");
//};

//public: virtual bool c_director::should_draw_hud_normal(void) const
//{
//    mangled_ppc("?should_draw_hud_normal@c_director@@UBA_NXZ");
//};

//public: virtual bool c_director::should_draw_hud_saved_film(void) const
//{
//    mangled_ppc("?should_draw_hud_saved_film@c_director@@UBA_NXZ");
//};

//public: virtual bool c_director::should_draw_reticule(void) const
//{
//    mangled_ppc("?should_draw_reticule@c_director@@UBA_NXZ");
//};

//public: virtual bool c_director::should_apply_player_effects(void) const
//{
//    mangled_ppc("?should_apply_player_effects@c_director@@UBA_NXZ");
//};

//public: virtual bool c_director::inhibits_facing(void) const
//{
//    mangled_ppc("?inhibits_facing@c_director@@UBA_NXZ");
//};

//public: virtual bool c_director::inhibits_input(void) const
//{
//    mangled_ppc("?inhibits_input@c_director@@UBA_NXZ");
//};

//public: virtual void c_director::handle_deleted_player(long)
//{
//    mangled_ppc("?handle_deleted_player@c_director@@UAAXJ@Z");
//};

//public: virtual void c_director::handle_deleted_object(long)
//{
//    mangled_ppc("?handle_deleted_object@c_director@@UAAXJ@Z");
//};

//public: class c_camera * c_director::get_camera(void)
//{
//    mangled_ppc("?get_camera@c_director@@QAAPAVc_camera@@XZ");
//};

//public: class c_camera const * c_director::get_camera(void) const
//{
//    mangled_ppc("?get_camera@c_director@@QBAPBVc_camera@@XZ");
//};

//public: bool c_director::get_camera_as(enum e_camera_mode, class c_camera **)
//{
//    mangled_ppc("?get_camera_as@c_director@@QAA_NW4e_camera_mode@@PAPAVc_camera@@@Z");
//};

//public: bool c_director::in_free_camera_mode(void) const
//{
//    mangled_ppc("?in_free_camera_mode@c_director@@QBA_NXZ");
//};

//long dead_or_alive_unit_from_output_user(enum e_output_user_index)
//{
//    mangled_ppc("?dead_or_alive_unit_from_output_user@@YAJW4e_output_user_index@@@Z");
//};

//public: bool c_director::force_set_camera_mode(enum e_camera_mode, float)
//{
//    mangled_ppc("?force_set_camera_mode@c_director@@QAA_NW4e_camera_mode@@M@Z");
//};

//public: bool c_director::set_camera_mode(enum e_camera_mode, float)
//{
//    mangled_ppc("?set_camera_mode@c_director@@QAA_NW4e_camera_mode@@M@Z");
//};

//private: bool c_director::set_camera_mode_internal(enum e_camera_mode, float, bool)
//{
//    mangled_ppc("?set_camera_mode_internal@c_director@@AAA_NW4e_camera_mode@@M_N@Z");
//};

//public: void c_director::get_position(union real_point3d *)
//{
//    mangled_ppc("?get_position@c_director@@QAAXPATreal_point3d@@@Z");
//};

//protected: struct s_observer_command const * c_director::get_last_observer_command(void) const
//{
//    mangled_ppc("?get_last_observer_command@c_director@@IBAPBUs_observer_command@@XZ");
//};

//private: void c_director::request_immediate_coop_respawn(void)
//{
//    mangled_ppc("?request_immediate_coop_respawn@c_director@@AAAXXZ");
//};

//private: void c_director::report_respawn_target_player_switch(long, bool, bool)
//{
//    mangled_ppc("?report_respawn_target_player_switch@c_director@@AAAXJ_N0@Z");
//};

//protected: bool c_director::player_switch_update(void)
//{
//    mangled_ppc("?player_switch_update@c_director@@IAA_NXZ");
//};

//private: void c_director::player_switch_gui_update(void)
//{
//    mangled_ppc("?player_switch_gui_update@c_director@@AAAXXZ");
//};

//protected: void c_director::player_switch_gui_create_or_update(void)
//{
//    mangled_ppc("?player_switch_gui_create_or_update@c_director@@IAAXXZ");
//};

//protected: bool c_director::player_switch_gui_destroy(void)
//{
//    mangled_ppc("?player_switch_gui_destroy@c_director@@IAA_NXZ");
//};

//private: void c_director::player_switch_gui_button_pressed(void)
//{
//    mangled_ppc("?player_switch_gui_button_pressed@c_director@@AAAXXZ");
//};

//private: static bool c_director::player_switch_gui_create(enum e_output_user_index)
//{
//    mangled_ppc("?player_switch_gui_create@c_director@@CA_NW4e_output_user_index@@@Z");
//};

//public: class c_cui_screen_widget * c_cui_screen_manager::load_and_insert_by_name(long, struct s_cui_screen_parameters const *, long)
//{
//    mangled_ppc("?load_and_insert_by_name@c_cui_screen_manager@@QAAPAVc_cui_screen_widget@@JPBUs_cui_screen_parameters@@J@Z");
//};

//private: static bool c_director::player_switch_gui_set_visible(enum e_output_user_index)
//{
//    mangled_ppc("?player_switch_gui_set_visible@c_director@@CA_NW4e_output_user_index@@@Z");
//};

//public: long c_director::get_currently_viewed_player(void) const
//{
//    mangled_ppc("?get_currently_viewed_player@c_director@@QBAJXZ");
//};

//public: long c_director::get_watched_player(void) const
//{
//    mangled_ppc("?get_watched_player@c_director@@QBAJXZ");
//};

//public: void c_director::set_watched_player(long)
//{
//    mangled_ppc("?set_watched_player@c_director@@QAAXJ@Z");
//};

//enum e_director_perspective director_game_desired_perspective(long, enum e_seat_state *)
//{
//    mangled_ppc("?director_game_desired_perspective@@YA?AW4e_director_perspective@@JPAW4e_seat_state@@@Z");
//};

//public: virtual bool c_director::can_use_camera_mode(enum e_camera_mode) const
//{
//    mangled_ppc("?can_use_camera_mode@c_director@@UBA_NW4e_camera_mode@@@Z");
//};

//protected: static long c_director::player_get_next_player_with_a_unit(long, long, long, long, bool, bool, bool, long *)
//{
//    mangled_ppc("?player_get_next_player_with_a_unit@c_director@@KAJJJJJ_N00PAJ@Z");
//};

//protected: void c_director::update_perspective(void)
//{
//    mangled_ppc("?update_perspective@c_director@@IAAXXZ");
//};

//void set_debug_force_scripted_camera_disable(bool)
//{
//    mangled_ppc("?set_debug_force_scripted_camera_disable@@YAX_N@Z");
//};

//public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_director_globals_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_director_globals_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_director_camera_scripted_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_director_camera_scripted_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_director_globals_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_director_globals_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_director_camera_scripted_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_director_camera_scripted_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: struct s_director_info & s_static_array<struct s_director_info, 4>::operator[]<enum e_output_user_index>(enum e_output_user_index)
//{
//    mangled_ppc("??$?AW4e_output_user_index@@@?$s_static_array@Us_director_info@@$03@@QAAAAUs_director_info@@W4e_output_user_index@@@Z");
//};

//public: unsigned char (& s_static_array<unsigned char[404], 4>::operator[]<enum e_output_user_index>(enum e_output_user_index))[404]
//{
//    mangled_ppc("??$?AW4e_output_user_index@@@?$s_static_array@$$BY0BJE@E$03@@QAAAAY0BJE@EW4e_output_user_index@@@Z");
//};

//public: static bool s_static_array<struct s_director_info, 4>::valid<enum e_output_user_index>(enum e_output_user_index)
//{
//    mangled_ppc("??$valid@W4e_output_user_index@@@?$s_static_array@Us_director_info@@$03@@SA_NW4e_output_user_index@@@Z");
//};

//public: static bool s_static_array<unsigned char[404], 4>::valid<enum e_output_user_index>(enum e_output_user_index)
//{
//    mangled_ppc("??$valid@W4e_output_user_index@@@?$s_static_array@$$BY0BJE@E$03@@SA_NW4e_output_user_index@@@Z");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_director_globals_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_director_globals_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_director_globals_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_director_globals_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_director_globals_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_director_globals_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_director_globals_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_director_globals_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_director_globals_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_director_camera_scripted_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_director_camera_scripted_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_director_camera_scripted_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_director_camera_scripted_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_director_camera_scripted_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_director_camera_scripted_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_director_camera_scripted_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_director_camera_scripted_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_director_camera_scripted_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_director_globals_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_director_globals_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_director_globals_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_director_camera_scripted_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_director_camera_scripted_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_director_camera_scripted_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//void g_director_globals_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_director_globals_allocator@@YAXXZ");
//};

//void g_director_camera_scripted_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_director_camera_scripted_allocator@@YAXXZ");
//};

