/* ---------- headers */

#include "omaha\interface\first_person_weapons.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static enum e_first_person_weapon_flags const c_flags_no_init<enum e_first_person_weapon_flags, unsigned long, 10, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_first_person_weapon_flags@@K$09Us_default_enum_string_resolver@@@@2W4e_first_person_weapon_flags@@B"
// bool debug_animation_fp_weapon_ik_disable; // "?debug_animation_fp_weapon_ik_disable@@3_NA"
// bool debug_animation_fp_sprint_disable; // "?debug_animation_fp_sprint_disable@@3_NA"
// bool debug_animation_fp_jump_land_disable; // "?debug_animation_fp_jump_land_disable@@3_NA"
// bool debug_first_person_weapons; // "?debug_first_person_weapons@@3_NA"
// bool debug_first_person_models; // "?debug_first_person_models@@3_NA"
// bool debug_first_person_hide_base; // "?debug_first_person_hide_base@@3_NA"
// bool debug_first_person_hide_movement; // "?debug_first_person_hide_movement@@3_NA"
// bool debug_first_person_hide_jitter; // "?debug_first_person_hide_jitter@@3_NA"
// bool debug_first_person_hide_overlay; // "?debug_first_person_hide_overlay@@3_NA"
// bool debug_first_person_hide_pitch_turn; // "?debug_first_person_hide_pitch_turn@@3_NA"
// bool debug_first_person_hide_ammo; // "?debug_first_person_hide_ammo@@3_NA"
// bool debug_first_person_hide_ik; // "?debug_first_person_hide_ik@@3_NA"
// class t_restricted_allocation_manager<4, 0, 0, void (__cdecl __tls_set_g_first_person_weapons_allocator::*)(void *)> g_first_person_weapons_allocator; // "?g_first_person_weapons_allocator@@3V?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_first_person_weapons_allocator@@YAXPAX@Z@@A"
// class t_restricted_allocation_manager<4, 0, 0, void (__cdecl __tls_set_g_first_person_weapon_orientations_allocator::*)(void *)> g_first_person_weapon_orientations_allocator; // "?g_first_person_weapon_orientations_allocator@@3V?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_first_person_weapon_orientations_allocator@@YAXPAX@Z@@A"
// struct c_status_line *g_first_person_weapon_status; // "?g_first_person_weapon_status@@3PAUc_status_line@@A"
// struct first_person_weapon *first_person_weapons; // "?first_person_weapons@@3PAUfirst_person_weapon@@A"
// struct s_first_person_orientations *first_person_weapon_orientations; // "?first_person_weapon_orientations@@3PAUs_first_person_orientations@@A"

// void __tls_set_g_first_person_weapons_allocator(void *);
// void __tls_set_g_first_person_weapon_orientations_allocator(void *);
// void first_person_weapons_initialize(void);
// void first_person_weapons_dispose(void);
// void first_person_weapons_initialize_for_new_map(void);
// long first_person_weapon_get_mixing_board_address(struct first_person_weapon_data *);
// void first_person_weapons_dispose_from_old_map(void);
// void first_person_weapons_reset_animations(void);
// public: void c_animation_manager::set_weapon_index(long);
// void first_person_weapons_update(void);
// long first_person_weapon_build_models(enum e_output_user_index, long, long, struct render_first_person_model *);
// bool biped_is_exiting_seat_in_first_person(enum e_output_user_index, long);
// bool first_person_weapon_get_render_info(enum e_output_user_index, struct s_first_person_render_info *);
// enum e_output_user_index first_person_weapon_find_first_output_user_index_from_weapon(long);
// enum e_output_user_index first_person_weapon_find_next_output_user_index_from_weapon(long, enum e_output_user_index);
// enum e_output_user_index first_person_weapon_find_next_output_user_index_from_unit(long, enum e_output_user_index);
// enum e_output_user_index first_person_weapon_find_first_output_user_index_from_unit(long);
// long first_person_weapon_get_non_deterministic_unit_index_from_user(enum e_output_user_index);
// bool first_person_weapon_is_visible(enum e_output_user_index, long);
// bool first_person_weapon_validate_weapon_index(enum e_output_user_index, long);
// bool first_person_weapon_validate_output_user_mask_for_weapon_index(long, long);
// short first_person_weapon_get_markers_by_string_id_render(enum e_output_user_index, long, long, struct object_marker *, short);
// short first_person_weapon_get_markers_by_string_id(long, long, struct object_marker *, short);
// short first_person_weapon_get_markers_by_string_id(enum e_output_user_index, long, struct object_marker *, short);
// short first_person_weapon_get_markers_with_direction_by_string_id(long, long, struct object_marker_with_direction *, short);
// bool first_person_weapon_adjust_light(long, long, union real_point3d *, union vector3d *, union vector3d *);
// struct real_matrix4x3const * first_person_weapon_get_camera_relative_node_matrix(enum e_output_user_index, long, short);
// void first_person_weapon_get_worldspace_node_matrix(enum e_output_user_index, long, short, struct real_matrix4x3*);
// void first_person_weapon_apply_camera_effect(enum e_output_user_index, struct real_matrix4x3*);
// void first_person_weapons_handle_deleted_object(long);
// void first_person_primary_animation_event_callback(struct s_animation_event_data const *, long);
// void first_person_secondary_animation_event_callback(struct s_animation_event_data const *, long);
// void first_person_weapon_detach_unit(enum e_output_user_index);
// void first_person_weapon_new_unit(enum e_output_user_index, long);
// void first_person_weapon_perspective_changed(enum e_output_user_index);
// class c_model_animation const * weapon_get_deterministic_first_person_animation(long, long, long *);
// public: short c_model_animation::get_sound_reference_index(void) const;
// short weapon_get_deterministic_first_person_animation_duration_ticks(long, long, short);
// long weapon_get_deterministic_first_person_animation_from_message(long, short);
// void first_person_weapon_suspend_weapon_attachment(long, bool);
// void first_person_weapon_handle_message(long, long, enum e_unit_messages, long);
// struct first_person_weapon * first_person_weapon_get(enum e_output_user_index);
// struct first_person_weapon_data * first_person_weapon_get_weapon_data(struct first_person_weapon *, long);
// long first_person_weapon_get_weapon_slot(enum e_output_user_index, long);
// long first_person_weapon_state_from_message(short);
// bool first_person_weapon_set_overlay(enum e_output_user_index, long, long);
// bool first_person_weapon_set_state(enum e_output_user_index, long, long, bool);
// bool first_person_weapon_state_is_melee(long);
// long first_person_weapon_get_current_state_string(long, long);
// long first_person_weapon_get_pending_state_string(long, long);
// void first_person_weapon_reset_sound(enum e_output_user_index, long);
// void first_person_weapon_start_interpolation(enum e_output_user_index, long, float);
// public: void c_animation_manager::set_interpolation_status(bool, float, bool, bool);
// struct s_weapon_orientations * first_person_get_weapon_orientations(enum e_output_user_index, long);
// void first_person_weapon_reset_interpolation(enum e_output_user_index, long);
// void handle_first_person_animation_event_callback(enum e_output_user_index, struct s_animation_event_data const *, long);
// void first_person_weapons_update_camera_estimates(void);
// void first_person_weapons_update_camera_estimate(enum e_output_user_index);
// void first_person_weapon_update(enum e_output_user_index);
// void first_person_weapon_update_orientation(enum e_output_user_index);
// void first_person_weapon_update_base_animation_and_state(enum e_output_user_index, long);
// void first_person_weapon_next_state(enum e_output_user_index, long);
// void first_person_weapon_update_overlay_animation(enum e_output_user_index, long);
// void first_person_weapon_update_movement_animation(enum e_output_user_index, long);
// void first_person_weapon_update_combat_animation(enum e_output_user_index, long);
// void first_person_weapon_update_posing_state(enum e_output_user_index, long);
// void first_person_weapon_update_data_driven_mixing_board(enum e_output_user_index, long);
// void first_person_weapon_update_ik(enum e_output_user_index);
// bool first_person_weapon_update_visibility(enum e_output_user_index, long);
// void first_person_weapon_build_node_matrices(enum e_output_user_index, long);
// bool first_person_weapon_attach(enum e_output_user_index, long, bool);
// void first_person_weapon_attach_weapon_slot(enum e_output_user_index, long, struct first_person_weapon_attachment const *, bool);
// void first_person_weapon_clear_animations(enum e_output_user_index, long);
// void first_person_weapon_setup_animations(enum e_output_user_index, long, bool);
// void first_person_weapon_set_visibility(enum e_output_user_index, long, bool);
// void first_person_weapon_set_attached(enum e_output_user_index, long, bool);
// void process_first_person_weapon_ik(enum e_output_user_index, struct render_first_person_model *, struct render_first_person_model const *);
// void first_person_weapon_build_model(long, long, unsigned long, struct real_matrix4x3const *, long, struct real_matrix4x3const *, long const *, struct render_first_person_model *);
// void model_remap_node_matrices_to_match_animation_graph(long, struct real_matrix4x3const *, struct real_matrix4x3*, long, struct real_matrix4x3const *, long const *);
// struct real_matrix4x3const * first_person_weapon_get_camera_offset_matrix(enum e_output_user_index);
// bool first_person_weapon_state_makes_weapon_busy(long);
// bool first_person_weapon_state_skip_ready(long);
// bool first_person_weapon_lowered_on_unit(long);
// bool first_person_custom_animation_running_on_unit(long);
// void first_person_end_custom_animation_on_unit(long);
// bool first_person_scripting_lower_weapon_on_unit(long, long);
// bool first_person_handle_lowering_weapon_on_unit(enum e_output_user_index, long);
// bool first_person_scripting_raise_weapon_on_unit(long, long);
// bool first_person_handle_raising_weapon(enum e_output_user_index, long);
// bool first_person_claw_lower_weapon_on_unit(long, long);
// bool first_person_claw_raise_weapon_on_unit(long, long);
// bool first_person_weapon_is_playing_secondary_venting_anim(long);
// bool first_person_setup_custom_animation_on_unit(long, long, long, bool);
// bool first_person_handle_weapon_lowering_complete(enum e_output_user_index);
// void first_person_end_custom_animation(enum e_output_user_index);
// bool first_person_handle_weapon_down_state(enum e_output_user_index);
// bool first_person_validate_weapon_lowering_flags(enum e_output_user_index);
// bool first_person_handle_unit_death(long);
// class c_animation_manager * first_person_weapon_get_animation_manager_from_unit(long, enum e_first_person_weapons);
// long first_person_weapon_get_current_weapon_index_from_unit(long, enum e_first_person_weapons);
// float first_person_weapon_get_pitch(enum e_output_user_index);
// float first_person_weapon_get_turn(enum e_output_user_index);
// void unit_get_deterministic_state_snapshot(long, struct s_unit_deterministic_state_snapshot *);
// void unit_validate_deterministic_state_snapshot(long, struct s_unit_deterministic_state_snapshot const *);
// public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_first_person_weapons_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_first_person_weapon_orientations_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_first_person_weapons_allocator::*)(void *)>::valid(void) const;
// public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_first_person_weapon_orientations_allocator::*)(void *)>::valid(void) const;
// public: bool c_flags_no_init<enum e_first_person_weapon_flags, unsigned long, 10, struct s_default_enum_string_resolver>::test(enum e_first_person_weapon_flags) const;
// public: void c_flags_no_init<enum e_first_person_weapon_flags, unsigned long, 10, struct s_default_enum_string_resolver>::set(enum e_first_person_weapon_flags, bool);
// public: static bool c_flags_no_init<enum e_first_person_weapon_flags, unsigned long, 10, struct s_default_enum_string_resolver>::valid_bit(enum e_first_person_weapon_flags);
// private: static unsigned long c_flags_no_init<enum e_first_person_weapon_flags, unsigned long, 10, struct s_default_enum_string_resolver>::flag_size_type(enum e_first_person_weapon_flags);
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_first_person_weapons_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_first_person_weapons_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_first_person_weapons_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_first_person_weapons_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_first_person_weapons_allocator::*)(void *)>::free_memory(void);
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_first_person_weapon_orientations_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_first_person_weapon_orientations_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_first_person_weapon_orientations_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_first_person_weapon_orientations_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_first_person_weapon_orientations_allocator::*)(void *)>::free_memory(void);
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_first_person_weapons_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_first_person_weapons_allocator::*)(void *)>(void);
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_first_person_weapon_orientations_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_first_person_weapon_orientations_allocator::*)(void *)>(void);
// void g_first_person_weapons_allocator::`dynamic atexit destructor'(void);
// void g_first_person_weapon_orientations_allocator::`dynamic atexit destructor'(void);

//void __tls_set_g_first_person_weapons_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_first_person_weapons_allocator@@YAXPAX@Z");
//};

//void __tls_set_g_first_person_weapon_orientations_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_first_person_weapon_orientations_allocator@@YAXPAX@Z");
//};

//void first_person_weapons_initialize(void)
//{
//    mangled_ppc("?first_person_weapons_initialize@@YAXXZ");
//};

//void first_person_weapons_dispose(void)
//{
//    mangled_ppc("?first_person_weapons_dispose@@YAXXZ");
//};

//void first_person_weapons_initialize_for_new_map(void)
//{
//    mangled_ppc("?first_person_weapons_initialize_for_new_map@@YAXXZ");
//};

//long first_person_weapon_get_mixing_board_address(struct first_person_weapon_data *)
//{
//    mangled_ppc("?first_person_weapon_get_mixing_board_address@@YAJPAUfirst_person_weapon_data@@@Z");
//};

//void first_person_weapons_dispose_from_old_map(void)
//{
//    mangled_ppc("?first_person_weapons_dispose_from_old_map@@YAXXZ");
//};

//void first_person_weapons_reset_animations(void)
//{
//    mangled_ppc("?first_person_weapons_reset_animations@@YAXXZ");
//};

//public: void c_animation_manager::set_weapon_index(long)
//{
//    mangled_ppc("?set_weapon_index@c_animation_manager@@QAAXJ@Z");
//};

//void first_person_weapons_update(void)
//{
//    mangled_ppc("?first_person_weapons_update@@YAXXZ");
//};

//long first_person_weapon_build_models(enum e_output_user_index, long, long, struct render_first_person_model *)
//{
//    mangled_ppc("?first_person_weapon_build_models@@YAJW4e_output_user_index@@JJPAUrender_first_person_model@@@Z");
//};

//bool biped_is_exiting_seat_in_first_person(enum e_output_user_index, long)
//{
//    mangled_ppc("?biped_is_exiting_seat_in_first_person@@YA_NW4e_output_user_index@@J@Z");
//};

//bool first_person_weapon_get_render_info(enum e_output_user_index, struct s_first_person_render_info *)
//{
//    mangled_ppc("?first_person_weapon_get_render_info@@YA_NW4e_output_user_index@@PAUs_first_person_render_info@@@Z");
//};

//enum e_output_user_index first_person_weapon_find_first_output_user_index_from_weapon(long)
//{
//    mangled_ppc("?first_person_weapon_find_first_output_user_index_from_weapon@@YA?AW4e_output_user_index@@J@Z");
//};

//enum e_output_user_index first_person_weapon_find_next_output_user_index_from_weapon(long, enum e_output_user_index)
//{
//    mangled_ppc("?first_person_weapon_find_next_output_user_index_from_weapon@@YA?AW4e_output_user_index@@JW41@@Z");
//};

//enum e_output_user_index first_person_weapon_find_next_output_user_index_from_unit(long, enum e_output_user_index)
//{
//    mangled_ppc("?first_person_weapon_find_next_output_user_index_from_unit@@YA?AW4e_output_user_index@@JW41@@Z");
//};

//enum e_output_user_index first_person_weapon_find_first_output_user_index_from_unit(long)
//{
//    mangled_ppc("?first_person_weapon_find_first_output_user_index_from_unit@@YA?AW4e_output_user_index@@J@Z");
//};

//long first_person_weapon_get_non_deterministic_unit_index_from_user(enum e_output_user_index)
//{
//    mangled_ppc("?first_person_weapon_get_non_deterministic_unit_index_from_user@@YAJW4e_output_user_index@@@Z");
//};

//bool first_person_weapon_is_visible(enum e_output_user_index, long)
//{
//    mangled_ppc("?first_person_weapon_is_visible@@YA_NW4e_output_user_index@@J@Z");
//};

//bool first_person_weapon_validate_weapon_index(enum e_output_user_index, long)
//{
//    mangled_ppc("?first_person_weapon_validate_weapon_index@@YA_NW4e_output_user_index@@J@Z");
//};

//bool first_person_weapon_validate_output_user_mask_for_weapon_index(long, long)
//{
//    mangled_ppc("?first_person_weapon_validate_output_user_mask_for_weapon_index@@YA_NJJ@Z");
//};

//short first_person_weapon_get_markers_by_string_id_render(enum e_output_user_index, long, long, struct object_marker *, short)
//{
//    mangled_ppc("?first_person_weapon_get_markers_by_string_id_render@@YAFW4e_output_user_index@@JJPAUobject_marker@@F@Z");
//};

//short first_person_weapon_get_markers_by_string_id(long, long, struct object_marker *, short)
//{
//    mangled_ppc("?first_person_weapon_get_markers_by_string_id@@YAFJJPAUobject_marker@@F@Z");
//};

//short first_person_weapon_get_markers_by_string_id(enum e_output_user_index, long, struct object_marker *, short)
//{
//    mangled_ppc("?first_person_weapon_get_markers_by_string_id@@YAFW4e_output_user_index@@JPAUobject_marker@@F@Z");
//};

//short first_person_weapon_get_markers_with_direction_by_string_id(long, long, struct object_marker_with_direction *, short)
//{
//    mangled_ppc("?first_person_weapon_get_markers_with_direction_by_string_id@@YAFJJPAUobject_marker_with_direction@@F@Z");
//};

//bool first_person_weapon_adjust_light(long, long, union real_point3d *, union vector3d *, union vector3d *)
//{
//    mangled_ppc("?first_person_weapon_adjust_light@@YA_NJJPATreal_point3d@@PATvector3d@@1@Z");
//};

//struct real_matrix4x3const * first_person_weapon_get_camera_relative_node_matrix(enum e_output_user_index, long, short)
//{
//    mangled_ppc("?first_person_weapon_get_camera_relative_node_matrix@@YAPBUreal_matrix4x3@@W4e_output_user_index@@JF@Z");
//};

//void first_person_weapon_get_worldspace_node_matrix(enum e_output_user_index, long, short, struct real_matrix4x3*)
//{
//    mangled_ppc("?first_person_weapon_get_worldspace_node_matrix@@YAXW4e_output_user_index@@JFPAUreal_matrix4x3@@@Z");
//};

//void first_person_weapon_apply_camera_effect(enum e_output_user_index, struct real_matrix4x3*)
//{
//    mangled_ppc("?first_person_weapon_apply_camera_effect@@YAXW4e_output_user_index@@PAUreal_matrix4x3@@@Z");
//};

//void first_person_weapons_handle_deleted_object(long)
//{
//    mangled_ppc("?first_person_weapons_handle_deleted_object@@YAXJ@Z");
//};

//void first_person_primary_animation_event_callback(struct s_animation_event_data const *, long)
//{
//    mangled_ppc("?first_person_primary_animation_event_callback@@YAXPBUs_animation_event_data@@J@Z");
//};

//void first_person_secondary_animation_event_callback(struct s_animation_event_data const *, long)
//{
//    mangled_ppc("?first_person_secondary_animation_event_callback@@YAXPBUs_animation_event_data@@J@Z");
//};

//void first_person_weapon_detach_unit(enum e_output_user_index)
//{
//    mangled_ppc("?first_person_weapon_detach_unit@@YAXW4e_output_user_index@@@Z");
//};

//void first_person_weapon_new_unit(enum e_output_user_index, long)
//{
//    mangled_ppc("?first_person_weapon_new_unit@@YAXW4e_output_user_index@@J@Z");
//};

//void first_person_weapon_perspective_changed(enum e_output_user_index)
//{
//    mangled_ppc("?first_person_weapon_perspective_changed@@YAXW4e_output_user_index@@@Z");
//};

//class c_model_animation const * weapon_get_deterministic_first_person_animation(long, long, long *)
//{
//    mangled_ppc("?weapon_get_deterministic_first_person_animation@@YAPBVc_model_animation@@JJPAJ@Z");
//};

//public: short c_model_animation::get_sound_reference_index(void) const
//{
//    mangled_ppc("?get_sound_reference_index@c_model_animation@@QBAFXZ");
//};

//short weapon_get_deterministic_first_person_animation_duration_ticks(long, long, short)
//{
//    mangled_ppc("?weapon_get_deterministic_first_person_animation_duration_ticks@@YAFJJF@Z");
//};

//long weapon_get_deterministic_first_person_animation_from_message(long, short)
//{
//    mangled_ppc("?weapon_get_deterministic_first_person_animation_from_message@@YAJJF@Z");
//};

//void first_person_weapon_suspend_weapon_attachment(long, bool)
//{
//    mangled_ppc("?first_person_weapon_suspend_weapon_attachment@@YAXJ_N@Z");
//};

//void first_person_weapon_handle_message(long, long, enum e_unit_messages, long)
//{
//    mangled_ppc("?first_person_weapon_handle_message@@YAXJJW4e_unit_messages@@J@Z");
//};

//struct first_person_weapon * first_person_weapon_get(enum e_output_user_index)
//{
//    mangled_ppc("?first_person_weapon_get@@YAPAUfirst_person_weapon@@W4e_output_user_index@@@Z");
//};

//struct first_person_weapon_data * first_person_weapon_get_weapon_data(struct first_person_weapon *, long)
//{
//    mangled_ppc("?first_person_weapon_get_weapon_data@@YAPAUfirst_person_weapon_data@@PAUfirst_person_weapon@@J@Z");
//};

//long first_person_weapon_get_weapon_slot(enum e_output_user_index, long)
//{
//    mangled_ppc("?first_person_weapon_get_weapon_slot@@YAJW4e_output_user_index@@J@Z");
//};

//long first_person_weapon_state_from_message(short)
//{
//    mangled_ppc("?first_person_weapon_state_from_message@@YAJF@Z");
//};

//bool first_person_weapon_set_overlay(enum e_output_user_index, long, long)
//{
//    mangled_ppc("?first_person_weapon_set_overlay@@YA_NW4e_output_user_index@@JJ@Z");
//};

//bool first_person_weapon_set_state(enum e_output_user_index, long, long, bool)
//{
//    mangled_ppc("?first_person_weapon_set_state@@YA_NW4e_output_user_index@@JJ_N@Z");
//};

//bool first_person_weapon_state_is_melee(long)
//{
//    mangled_ppc("?first_person_weapon_state_is_melee@@YA_NJ@Z");
//};

//long first_person_weapon_get_current_state_string(long, long)
//{
//    mangled_ppc("?first_person_weapon_get_current_state_string@@YAJJJ@Z");
//};

//long first_person_weapon_get_pending_state_string(long, long)
//{
//    mangled_ppc("?first_person_weapon_get_pending_state_string@@YAJJJ@Z");
//};

//void first_person_weapon_reset_sound(enum e_output_user_index, long)
//{
//    mangled_ppc("?first_person_weapon_reset_sound@@YAXW4e_output_user_index@@J@Z");
//};

//void first_person_weapon_start_interpolation(enum e_output_user_index, long, float)
//{
//    mangled_ppc("?first_person_weapon_start_interpolation@@YAXW4e_output_user_index@@JM@Z");
//};

//public: void c_animation_manager::set_interpolation_status(bool, float, bool, bool)
//{
//    mangled_ppc("?set_interpolation_status@c_animation_manager@@QAAX_NM0_N@Z");
//};

//struct s_weapon_orientations * first_person_get_weapon_orientations(enum e_output_user_index, long)
//{
//    mangled_ppc("?first_person_get_weapon_orientations@@YAPAUs_weapon_orientations@@W4e_output_user_index@@J@Z");
//};

//void first_person_weapon_reset_interpolation(enum e_output_user_index, long)
//{
//    mangled_ppc("?first_person_weapon_reset_interpolation@@YAXW4e_output_user_index@@J@Z");
//};

//void handle_first_person_animation_event_callback(enum e_output_user_index, struct s_animation_event_data const *, long)
//{
//    mangled_ppc("?handle_first_person_animation_event_callback@@YAXW4e_output_user_index@@PBUs_animation_event_data@@J@Z");
//};

//void first_person_weapons_update_camera_estimates(void)
//{
//    mangled_ppc("?first_person_weapons_update_camera_estimates@@YAXXZ");
//};

//void first_person_weapons_update_camera_estimate(enum e_output_user_index)
//{
//    mangled_ppc("?first_person_weapons_update_camera_estimate@@YAXW4e_output_user_index@@@Z");
//};

//void first_person_weapon_update(enum e_output_user_index)
//{
//    mangled_ppc("?first_person_weapon_update@@YAXW4e_output_user_index@@@Z");
//};

//void first_person_weapon_update_orientation(enum e_output_user_index)
//{
//    mangled_ppc("?first_person_weapon_update_orientation@@YAXW4e_output_user_index@@@Z");
//};

//void first_person_weapon_update_base_animation_and_state(enum e_output_user_index, long)
//{
//    mangled_ppc("?first_person_weapon_update_base_animation_and_state@@YAXW4e_output_user_index@@J@Z");
//};

//void first_person_weapon_next_state(enum e_output_user_index, long)
//{
//    mangled_ppc("?first_person_weapon_next_state@@YAXW4e_output_user_index@@J@Z");
//};

//void first_person_weapon_update_overlay_animation(enum e_output_user_index, long)
//{
//    mangled_ppc("?first_person_weapon_update_overlay_animation@@YAXW4e_output_user_index@@J@Z");
//};

//void first_person_weapon_update_movement_animation(enum e_output_user_index, long)
//{
//    mangled_ppc("?first_person_weapon_update_movement_animation@@YAXW4e_output_user_index@@J@Z");
//};

//void first_person_weapon_update_combat_animation(enum e_output_user_index, long)
//{
//    mangled_ppc("?first_person_weapon_update_combat_animation@@YAXW4e_output_user_index@@J@Z");
//};

//void first_person_weapon_update_posing_state(enum e_output_user_index, long)
//{
//    mangled_ppc("?first_person_weapon_update_posing_state@@YAXW4e_output_user_index@@J@Z");
//};

//void first_person_weapon_update_data_driven_mixing_board(enum e_output_user_index, long)
//{
//    mangled_ppc("?first_person_weapon_update_data_driven_mixing_board@@YAXW4e_output_user_index@@J@Z");
//};

//void first_person_weapon_update_ik(enum e_output_user_index)
//{
//    mangled_ppc("?first_person_weapon_update_ik@@YAXW4e_output_user_index@@@Z");
//};

//bool first_person_weapon_update_visibility(enum e_output_user_index, long)
//{
//    mangled_ppc("?first_person_weapon_update_visibility@@YA_NW4e_output_user_index@@J@Z");
//};

//void first_person_weapon_build_node_matrices(enum e_output_user_index, long)
//{
//    mangled_ppc("?first_person_weapon_build_node_matrices@@YAXW4e_output_user_index@@J@Z");
//};

//bool first_person_weapon_attach(enum e_output_user_index, long, bool)
//{
//    mangled_ppc("?first_person_weapon_attach@@YA_NW4e_output_user_index@@J_N@Z");
//};

//void first_person_weapon_attach_weapon_slot(enum e_output_user_index, long, struct first_person_weapon_attachment const *, bool)
//{
//    mangled_ppc("?first_person_weapon_attach_weapon_slot@@YAXW4e_output_user_index@@JPBUfirst_person_weapon_attachment@@_N@Z");
//};

//void first_person_weapon_clear_animations(enum e_output_user_index, long)
//{
//    mangled_ppc("?first_person_weapon_clear_animations@@YAXW4e_output_user_index@@J@Z");
//};

//void first_person_weapon_setup_animations(enum e_output_user_index, long, bool)
//{
//    mangled_ppc("?first_person_weapon_setup_animations@@YAXW4e_output_user_index@@J_N@Z");
//};

//void first_person_weapon_set_visibility(enum e_output_user_index, long, bool)
//{
//    mangled_ppc("?first_person_weapon_set_visibility@@YAXW4e_output_user_index@@J_N@Z");
//};

//void first_person_weapon_set_attached(enum e_output_user_index, long, bool)
//{
//    mangled_ppc("?first_person_weapon_set_attached@@YAXW4e_output_user_index@@J_N@Z");
//};

//void process_first_person_weapon_ik(enum e_output_user_index, struct render_first_person_model *, struct render_first_person_model const *)
//{
//    mangled_ppc("?process_first_person_weapon_ik@@YAXW4e_output_user_index@@PAUrender_first_person_model@@PBU2@@Z");
//};

//void first_person_weapon_build_model(long, long, unsigned long, struct real_matrix4x3const *, long, struct real_matrix4x3const *, long const *, struct render_first_person_model *)
//{
//    mangled_ppc("?first_person_weapon_build_model@@YAXJJKPBUreal_matrix4x3@@J0PBJPAUrender_first_person_model@@@Z");
//};

//void model_remap_node_matrices_to_match_animation_graph(long, struct real_matrix4x3const *, struct real_matrix4x3*, long, struct real_matrix4x3const *, long const *)
//{
//    mangled_ppc("?model_remap_node_matrices_to_match_animation_graph@@YAXJPBUreal_matrix4x3@@PAU1@J0PBJ@Z");
//};

//struct real_matrix4x3const * first_person_weapon_get_camera_offset_matrix(enum e_output_user_index)
//{
//    mangled_ppc("?first_person_weapon_get_camera_offset_matrix@@YAPBUreal_matrix4x3@@W4e_output_user_index@@@Z");
//};

//bool first_person_weapon_state_makes_weapon_busy(long)
//{
//    mangled_ppc("?first_person_weapon_state_makes_weapon_busy@@YA_NJ@Z");
//};

//bool first_person_weapon_state_skip_ready(long)
//{
//    mangled_ppc("?first_person_weapon_state_skip_ready@@YA_NJ@Z");
//};

//bool first_person_weapon_lowered_on_unit(long)
//{
//    mangled_ppc("?first_person_weapon_lowered_on_unit@@YA_NJ@Z");
//};

//bool first_person_custom_animation_running_on_unit(long)
//{
//    mangled_ppc("?first_person_custom_animation_running_on_unit@@YA_NJ@Z");
//};

//void first_person_end_custom_animation_on_unit(long)
//{
//    mangled_ppc("?first_person_end_custom_animation_on_unit@@YAXJ@Z");
//};

//bool first_person_scripting_lower_weapon_on_unit(long, long)
//{
//    mangled_ppc("?first_person_scripting_lower_weapon_on_unit@@YA_NJJ@Z");
//};

//bool first_person_handle_lowering_weapon_on_unit(enum e_output_user_index, long)
//{
//    mangled_ppc("?first_person_handle_lowering_weapon_on_unit@@YA_NW4e_output_user_index@@J@Z");
//};

//bool first_person_scripting_raise_weapon_on_unit(long, long)
//{
//    mangled_ppc("?first_person_scripting_raise_weapon_on_unit@@YA_NJJ@Z");
//};

//bool first_person_handle_raising_weapon(enum e_output_user_index, long)
//{
//    mangled_ppc("?first_person_handle_raising_weapon@@YA_NW4e_output_user_index@@J@Z");
//};

//bool first_person_claw_lower_weapon_on_unit(long, long)
//{
//    mangled_ppc("?first_person_claw_lower_weapon_on_unit@@YA_NJJ@Z");
//};

//bool first_person_claw_raise_weapon_on_unit(long, long)
//{
//    mangled_ppc("?first_person_claw_raise_weapon_on_unit@@YA_NJJ@Z");
//};

//bool first_person_weapon_is_playing_secondary_venting_anim(long)
//{
//    mangled_ppc("?first_person_weapon_is_playing_secondary_venting_anim@@YA_NJ@Z");
//};

//bool first_person_setup_custom_animation_on_unit(long, long, long, bool)
//{
//    mangled_ppc("?first_person_setup_custom_animation_on_unit@@YA_NJJJ_N@Z");
//};

//bool first_person_handle_weapon_lowering_complete(enum e_output_user_index)
//{
//    mangled_ppc("?first_person_handle_weapon_lowering_complete@@YA_NW4e_output_user_index@@@Z");
//};

//void first_person_end_custom_animation(enum e_output_user_index)
//{
//    mangled_ppc("?first_person_end_custom_animation@@YAXW4e_output_user_index@@@Z");
//};

//bool first_person_handle_weapon_down_state(enum e_output_user_index)
//{
//    mangled_ppc("?first_person_handle_weapon_down_state@@YA_NW4e_output_user_index@@@Z");
//};

//bool first_person_validate_weapon_lowering_flags(enum e_output_user_index)
//{
//    mangled_ppc("?first_person_validate_weapon_lowering_flags@@YA_NW4e_output_user_index@@@Z");
//};

//bool first_person_handle_unit_death(long)
//{
//    mangled_ppc("?first_person_handle_unit_death@@YA_NJ@Z");
//};

//class c_animation_manager * first_person_weapon_get_animation_manager_from_unit(long, enum e_first_person_weapons)
//{
//    mangled_ppc("?first_person_weapon_get_animation_manager_from_unit@@YAPAVc_animation_manager@@JW4e_first_person_weapons@@@Z");
//};

//long first_person_weapon_get_current_weapon_index_from_unit(long, enum e_first_person_weapons)
//{
//    mangled_ppc("?first_person_weapon_get_current_weapon_index_from_unit@@YAJJW4e_first_person_weapons@@@Z");
//};

//float first_person_weapon_get_pitch(enum e_output_user_index)
//{
//    mangled_ppc("?first_person_weapon_get_pitch@@YAMW4e_output_user_index@@@Z");
//};

//float first_person_weapon_get_turn(enum e_output_user_index)
//{
//    mangled_ppc("?first_person_weapon_get_turn@@YAMW4e_output_user_index@@@Z");
//};

//void unit_get_deterministic_state_snapshot(long, struct s_unit_deterministic_state_snapshot *)
//{
//    mangled_ppc("?unit_get_deterministic_state_snapshot@@YAXJPAUs_unit_deterministic_state_snapshot@@@Z");
//};

//void unit_validate_deterministic_state_snapshot(long, struct s_unit_deterministic_state_snapshot const *)
//{
//    mangled_ppc("?unit_validate_deterministic_state_snapshot@@YAXJPBUs_unit_deterministic_state_snapshot@@@Z");
//};

//public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_first_person_weapons_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_first_person_weapons_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_first_person_weapon_orientations_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_first_person_weapon_orientations_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_first_person_weapons_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_first_person_weapons_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_first_person_weapon_orientations_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_first_person_weapon_orientations_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: bool c_flags_no_init<enum e_first_person_weapon_flags, unsigned long, 10, struct s_default_enum_string_resolver>::test(enum e_first_person_weapon_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_first_person_weapon_flags@@K$09Us_default_enum_string_resolver@@@@QBA_NW4e_first_person_weapon_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_first_person_weapon_flags, unsigned long, 10, struct s_default_enum_string_resolver>::set(enum e_first_person_weapon_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_first_person_weapon_flags@@K$09Us_default_enum_string_resolver@@@@QAAXW4e_first_person_weapon_flags@@_N@Z");
//};

//public: static bool c_flags_no_init<enum e_first_person_weapon_flags, unsigned long, 10, struct s_default_enum_string_resolver>::valid_bit(enum e_first_person_weapon_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_first_person_weapon_flags@@K$09Us_default_enum_string_resolver@@@@SA_NW4e_first_person_weapon_flags@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_first_person_weapon_flags, unsigned long, 10, struct s_default_enum_string_resolver>::flag_size_type(enum e_first_person_weapon_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_first_person_weapon_flags@@K$09Us_default_enum_string_resolver@@@@CAKW4e_first_person_weapon_flags@@@Z");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_first_person_weapons_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_first_person_weapons_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_first_person_weapons_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_first_person_weapons_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_first_person_weapons_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_first_person_weapons_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_first_person_weapons_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_first_person_weapons_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_first_person_weapons_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_first_person_weapon_orientations_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_first_person_weapon_orientations_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_first_person_weapon_orientations_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_first_person_weapon_orientations_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_first_person_weapon_orientations_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_first_person_weapon_orientations_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_first_person_weapon_orientations_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_first_person_weapon_orientations_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_first_person_weapon_orientations_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_first_person_weapons_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_first_person_weapons_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_first_person_weapons_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_first_person_weapon_orientations_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_first_person_weapon_orientations_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_first_person_weapon_orientations_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//void g_first_person_weapons_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_first_person_weapons_allocator@@YAXXZ");
//};

//void g_first_person_weapon_orientations_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_first_person_weapon_orientations_allocator@@YAXXZ");
//};

