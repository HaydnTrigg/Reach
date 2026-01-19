/* ---------- headers */

#include "omaha\camera\camera_scripting.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static int const c_enum_no_init<enum e_scenario_camera_type, short, 0, 4, struct s_default_enum_string_resolver>::k_minimum_value; // "?k_minimum_value@?$c_enum_no_init@W4e_scenario_camera_type@@F$0A@$03Us_default_enum_string_resolver@@@@2HB"
// public: static enum e_scenario_camera_type const c_enum_no_init<enum e_scenario_camera_type, short, 0, 4, struct s_default_enum_string_resolver>::k_maximum_value_plus_one; // "?k_maximum_value_plus_one@?$c_enum_no_init@W4e_scenario_camera_type@@F$0A@$03Us_default_enum_string_resolver@@@@2W4e_scenario_camera_type@@B"
// public: static int const c_enum_no_init<enum e_easing_type, short, 0, 3, struct s_default_enum_string_resolver>::k_minimum_value; // "?k_minimum_value@?$c_enum_no_init@W4e_easing_type@@F$0A@$02Us_default_enum_string_resolver@@@@2HB"
// public: static enum e_easing_type const c_enum_no_init<enum e_easing_type, short, 0, 3, struct s_default_enum_string_resolver>::k_maximum_value_plus_one; // "?k_maximum_value_plus_one@?$c_enum_no_init@W4e_easing_type@@F$0A@$02Us_default_enum_string_resolver@@@@2W4e_easing_type@@B"
// public: static int const c_enum_no_init<enum e_camera_script_mode, short, 0, 6, struct s_default_enum_string_resolver>::k_minimum_value; // "?k_minimum_value@?$c_enum_no_init@W4e_camera_script_mode@@F$0A@$05Us_default_enum_string_resolver@@@@2HB"
// public: static enum e_camera_script_mode const c_enum_no_init<enum e_camera_script_mode, short, 0, 6, struct s_default_enum_string_resolver>::k_maximum_value_plus_one; // "?k_maximum_value_plus_one@?$c_enum_no_init@W4e_camera_script_mode@@F$0A@$05Us_default_enum_string_resolver@@@@2W4e_camera_script_mode@@B"
// class t_restricted_allocation_manager<4, 0, 0, void (__cdecl __tls_set_g_camera_script_globals_allocator::*)(void *)> g_camera_script_globals_allocator; // "?g_camera_script_globals_allocator@@3V?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_camera_script_globals_allocator@@YAXPAX@Z@@A"
// struct s_scripted_camera_globals *g_camera_script_globals; // "?g_camera_script_globals@@3PAUs_scripted_camera_globals@@A"

// public: bool c_camera_pan_navigator::set_parameters(float, float, float, float, float);
// public: float c_camera_pan_navigator::evaluate(long);
// void __tls_set_g_camera_script_globals_allocator(void *);
// void transform_into_flag_space(struct real_matrix4x3*, long);
// void scripted_camera_initialize(void);
// void scripted_camera_initialize_for_new_map(void);
// void scripted_camera_game_tick(void);
// void scripted_camera_enable(bool);
// void scripted_camera_set_animation_relative(long, long, long, short);
// void scripted_camera_set_animation_relative_with_speed(long, long, long, short, float);
// void scripted_camera_set_animation_relative_with_speed_loop(long, long, long, short, float, bool);
// void scripted_camera_set_animation_relative_with_speed_loop_offset(long, long, long, short, float, bool, float);
// void scripted_camera_predict_resources_at_point(short);
// void scripted_camera_predict_resources_at_frame(long, long, long, short, long);
// void scripted_camera_set_animation(long, long);
// void scripted_camera_set_animation_with_speed(long, long, float);
// void scripted_camera_set_first_person(long);
// void scripted_camera_set_cinematic(void);
// void scripted_camera_set_cinematic_scene(long, long, short);
// bool scripted_camera_get_cinematic_data(long *, long *, long *);
// void scripted_camera_set_cinematic_shot_user_input_constraints(long, union short_rectangle2d const &, float);
// long scripted_camera_get_first_person_camera_object(void);
// void scripted_camera_set(short, short, long);
// void scripted_camera_set_internal(enum e_scenario_camera_type, union real_point3d const *, union euler_angles3d const *, float, short, long);
// void scripted_camera_set_absolute(short, short);
// void scripted_camera_set_pan(short, short);
// void scripted_camera_pan(short, short, short, short, float, short, float);
// void scripted_camera_get_relative_object_space(long, struct real_matrix4x3*);
// void scripted_camera_set_field_of_view(float, short);
// void scripted_camera_cinematic_stop(void);
// long scripted_camera_object_relative_to(void);
// float calculate_field_of_view(float);
// void cinematic_camera_update_texture_camera(struct s_camera_frame_dynamic const *, struct s_camera_frame_constant const *);
// void scripted_camera_update(void *, struct s_camera_control const *, struct s_observer_command *);
// short scripted_camera_time_in_hs_ticks(void);
// struct s_cluster_reference scripted_camera_get_deterministic_cluster_reference(void);
// void scripted_camera_initialize_for_control_point(void);
// void scripted_camera_initialize_for_constant_pan(void);
// void scripted_camera_initialize_for_animation(void);
// void scripted_camera_initialize_for_first_person_camera(void);
// void scripted_camera_initialize_for_cinematic_camera(void);
// struct s_scripted_camera_control_point * scripted_camera_get_control_point(void);
// struct s_scripted_camera_constant_pan * scripted_camera_get_constant_pan(void);
// struct s_scripted_camera_animation * scripted_camera_get_animation(void);
// bool scripted_camera_get_deterministic_animated_camera_matrix(struct real_matrix4x3*, float *);
// void scripted_camera_get_deterministic_cinematic_camera_matrix(struct s_camera_frame_dynamic const *, struct real_matrix4x3*);
// float scripted_camera_get_field_of_view(void);
// void cinematic_set_active_camera(long);
// void camera_render_main_camera_to_texture_camera(bool);
// void cinematic_camera_set_easing_in(float, float, float, float, float, float);
// public: c_scripted_camera::c_scripted_camera(void);
// public: virtual bool c_camera::should_apply_player_effects(void) const;
// public: virtual enum e_camera_mode c_scripted_camera::get_type(void) const;
// public: virtual enum e_director_perspective c_scripted_camera::get_perspective(void) const;
// public: virtual void c_scripted_camera::update(enum e_output_user_index, float, struct s_observer_command *);
// public: virtual void c_scripted_camera::assemble_screen_effects(class c_global_screen_effect_state *);
// void cinematic_camera_set_easing_out(float);
// void scripted_camera_handle_tag_reload(void);
// public: class c_enum_no_init<enum e_scenario_camera_type, short, 0, 4, struct s_default_enum_string_resolver> & c_enum_no_init<enum e_scenario_camera_type, short, 0, 4, struct s_default_enum_string_resolver>::operator=(enum e_scenario_camera_type);
// public: enum e_scenario_camera_type c_enum_no_init<enum e_scenario_camera_type, short, 0, 4, struct s_default_enum_string_resolver>::operator enum e_scenario_camera_type(void) const;
// public: class c_enum_no_init<enum e_easing_type, short, 0, 3, struct s_default_enum_string_resolver> & c_enum_no_init<enum e_easing_type, short, 0, 3, struct s_default_enum_string_resolver>::operator=(enum e_easing_type);
// public: enum e_easing_type c_enum_no_init<enum e_easing_type, short, 0, 3, struct s_default_enum_string_resolver>::operator enum e_easing_type(void) const;
// public: bool c_enum_no_init<enum e_easing_type, short, 0, 3, struct s_default_enum_string_resolver>::operator==(enum e_easing_type) const;
// public: c_enum<enum e_camera_script_mode, short, 0, 6, struct s_default_enum_string_resolver>::c_enum<enum e_camera_script_mode, short, 0, 6, struct s_default_enum_string_resolver>(enum e_camera_script_mode);
// public: enum e_camera_script_mode c_enum_no_init<enum e_camera_script_mode, short, 0, 6, struct s_default_enum_string_resolver>::operator enum e_camera_script_mode(void) const;
// public: bool c_enum_no_init<enum e_camera_script_mode, short, 0, 6, struct s_default_enum_string_resolver>::operator==(enum e_camera_script_mode) const;
// public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_camera_script_globals_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_camera_script_globals_allocator::*)(void *)>::valid(void) const;
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_camera_script_globals_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_camera_script_globals_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_camera_script_globals_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_camera_script_globals_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_camera_script_globals_allocator::*)(void *)>::free_memory(void);
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_camera_script_globals_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_camera_script_globals_allocator::*)(void *)>(void);
// void g_camera_script_globals_allocator::`dynamic atexit destructor'(void);

//public: bool c_camera_pan_navigator::set_parameters(float, float, float, float, float)
//{
//    mangled_ppc("?set_parameters@c_camera_pan_navigator@@QAA_NMMMMM@Z");
//};

//public: float c_camera_pan_navigator::evaluate(long)
//{
//    mangled_ppc("?evaluate@c_camera_pan_navigator@@QAAMJ@Z");
//};

//void __tls_set_g_camera_script_globals_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_camera_script_globals_allocator@@YAXPAX@Z");
//};

//void transform_into_flag_space(struct real_matrix4x3*, long)
//{
//    mangled_ppc("?transform_into_flag_space@@YAXPAUreal_matrix4x3@@J@Z");
//};

//void scripted_camera_initialize(void)
//{
//    mangled_ppc("?scripted_camera_initialize@@YAXXZ");
//};

//void scripted_camera_initialize_for_new_map(void)
//{
//    mangled_ppc("?scripted_camera_initialize_for_new_map@@YAXXZ");
//};

//void scripted_camera_game_tick(void)
//{
//    mangled_ppc("?scripted_camera_game_tick@@YAXXZ");
//};

//void scripted_camera_enable(bool)
//{
//    mangled_ppc("?scripted_camera_enable@@YAX_N@Z");
//};

//void scripted_camera_set_animation_relative(long, long, long, short)
//{
//    mangled_ppc("?scripted_camera_set_animation_relative@@YAXJJJF@Z");
//};

//void scripted_camera_set_animation_relative_with_speed(long, long, long, short, float)
//{
//    mangled_ppc("?scripted_camera_set_animation_relative_with_speed@@YAXJJJFM@Z");
//};

//void scripted_camera_set_animation_relative_with_speed_loop(long, long, long, short, float, bool)
//{
//    mangled_ppc("?scripted_camera_set_animation_relative_with_speed_loop@@YAXJJJFM_N@Z");
//};

//void scripted_camera_set_animation_relative_with_speed_loop_offset(long, long, long, short, float, bool, float)
//{
//    mangled_ppc("?scripted_camera_set_animation_relative_with_speed_loop_offset@@YAXJJJFM_NM@Z");
//};

//void scripted_camera_predict_resources_at_point(short)
//{
//    mangled_ppc("?scripted_camera_predict_resources_at_point@@YAXF@Z");
//};

//void scripted_camera_predict_resources_at_frame(long, long, long, short, long)
//{
//    mangled_ppc("?scripted_camera_predict_resources_at_frame@@YAXJJJFJ@Z");
//};

//void scripted_camera_set_animation(long, long)
//{
//    mangled_ppc("?scripted_camera_set_animation@@YAXJJ@Z");
//};

//void scripted_camera_set_animation_with_speed(long, long, float)
//{
//    mangled_ppc("?scripted_camera_set_animation_with_speed@@YAXJJM@Z");
//};

//void scripted_camera_set_first_person(long)
//{
//    mangled_ppc("?scripted_camera_set_first_person@@YAXJ@Z");
//};

//void scripted_camera_set_cinematic(void)
//{
//    mangled_ppc("?scripted_camera_set_cinematic@@YAXXZ");
//};

//void scripted_camera_set_cinematic_scene(long, long, short)
//{
//    mangled_ppc("?scripted_camera_set_cinematic_scene@@YAXJJF@Z");
//};

//bool scripted_camera_get_cinematic_data(long *, long *, long *)
//{
//    mangled_ppc("?scripted_camera_get_cinematic_data@@YA_NPAJ00@Z");
//};

//void scripted_camera_set_cinematic_shot_user_input_constraints(long, union short_rectangle2d const &, float)
//{
//    mangled_ppc("?scripted_camera_set_cinematic_shot_user_input_constraints@@YAXJABTshort_rectangle2d@@M@Z");
//};

//long scripted_camera_get_first_person_camera_object(void)
//{
//    mangled_ppc("?scripted_camera_get_first_person_camera_object@@YAJXZ");
//};

//void scripted_camera_set(short, short, long)
//{
//    mangled_ppc("?scripted_camera_set@@YAXFFJ@Z");
//};

//void scripted_camera_set_internal(enum e_scenario_camera_type, union real_point3d const *, union euler_angles3d const *, float, short, long)
//{
//    mangled_ppc("?scripted_camera_set_internal@@YAXW4e_scenario_camera_type@@PBTreal_point3d@@PBTeuler_angles3d@@MFJ@Z");
//};

//void scripted_camera_set_absolute(short, short)
//{
//    mangled_ppc("?scripted_camera_set_absolute@@YAXFF@Z");
//};

//void scripted_camera_set_pan(short, short)
//{
//    mangled_ppc("?scripted_camera_set_pan@@YAXFF@Z");
//};

//void scripted_camera_pan(short, short, short, short, float, short, float)
//{
//    mangled_ppc("?scripted_camera_pan@@YAXFFFFMFM@Z");
//};

//void scripted_camera_get_relative_object_space(long, struct real_matrix4x3*)
//{
//    mangled_ppc("?scripted_camera_get_relative_object_space@@YAXJPAUreal_matrix4x3@@@Z");
//};

//void scripted_camera_set_field_of_view(float, short)
//{
//    mangled_ppc("?scripted_camera_set_field_of_view@@YAXMF@Z");
//};

//void scripted_camera_cinematic_stop(void)
//{
//    mangled_ppc("?scripted_camera_cinematic_stop@@YAXXZ");
//};

//long scripted_camera_object_relative_to(void)
//{
//    mangled_ppc("?scripted_camera_object_relative_to@@YAJXZ");
//};

//float calculate_field_of_view(float)
//{
//    mangled_ppc("?calculate_field_of_view@@YAMM@Z");
//};

//void cinematic_camera_update_texture_camera(struct s_camera_frame_dynamic const *, struct s_camera_frame_constant const *)
//{
//    mangled_ppc("?cinematic_camera_update_texture_camera@@YAXPBUs_camera_frame_dynamic@@PBUs_camera_frame_constant@@@Z");
//};

//void scripted_camera_update(void *, struct s_camera_control const *, struct s_observer_command *)
//{
//    mangled_ppc("?scripted_camera_update@@YAXPAXPBUs_camera_control@@PAUs_observer_command@@@Z");
//};

//short scripted_camera_time_in_hs_ticks(void)
//{
//    mangled_ppc("?scripted_camera_time_in_hs_ticks@@YAFXZ");
//};

//struct s_cluster_reference scripted_camera_get_deterministic_cluster_reference(void)
//{
//    mangled_ppc("?scripted_camera_get_deterministic_cluster_reference@@YA?AUs_cluster_reference@@XZ");
//};

//void scripted_camera_initialize_for_control_point(void)
//{
//    mangled_ppc("?scripted_camera_initialize_for_control_point@@YAXXZ");
//};

//void scripted_camera_initialize_for_constant_pan(void)
//{
//    mangled_ppc("?scripted_camera_initialize_for_constant_pan@@YAXXZ");
//};

//void scripted_camera_initialize_for_animation(void)
//{
//    mangled_ppc("?scripted_camera_initialize_for_animation@@YAXXZ");
//};

//void scripted_camera_initialize_for_first_person_camera(void)
//{
//    mangled_ppc("?scripted_camera_initialize_for_first_person_camera@@YAXXZ");
//};

//void scripted_camera_initialize_for_cinematic_camera(void)
//{
//    mangled_ppc("?scripted_camera_initialize_for_cinematic_camera@@YAXXZ");
//};

//struct s_scripted_camera_control_point * scripted_camera_get_control_point(void)
//{
//    mangled_ppc("?scripted_camera_get_control_point@@YAPAUs_scripted_camera_control_point@@XZ");
//};

//struct s_scripted_camera_constant_pan * scripted_camera_get_constant_pan(void)
//{
//    mangled_ppc("?scripted_camera_get_constant_pan@@YAPAUs_scripted_camera_constant_pan@@XZ");
//};

//struct s_scripted_camera_animation * scripted_camera_get_animation(void)
//{
//    mangled_ppc("?scripted_camera_get_animation@@YAPAUs_scripted_camera_animation@@XZ");
//};

//bool scripted_camera_get_deterministic_animated_camera_matrix(struct real_matrix4x3*, float *)
//{
//    mangled_ppc("?scripted_camera_get_deterministic_animated_camera_matrix@@YA_NPAUreal_matrix4x3@@PAM@Z");
//};

//void scripted_camera_get_deterministic_cinematic_camera_matrix(struct s_camera_frame_dynamic const *, struct real_matrix4x3*)
//{
//    mangled_ppc("?scripted_camera_get_deterministic_cinematic_camera_matrix@@YAXPBUs_camera_frame_dynamic@@PAUreal_matrix4x3@@@Z");
//};

//float scripted_camera_get_field_of_view(void)
//{
//    mangled_ppc("?scripted_camera_get_field_of_view@@YAMXZ");
//};

//void cinematic_set_active_camera(long)
//{
//    mangled_ppc("?cinematic_set_active_camera@@YAXJ@Z");
//};

//void camera_render_main_camera_to_texture_camera(bool)
//{
//    mangled_ppc("?camera_render_main_camera_to_texture_camera@@YAX_N@Z");
//};

//void cinematic_camera_set_easing_in(float, float, float, float, float, float)
//{
//    mangled_ppc("?cinematic_camera_set_easing_in@@YAXMMMMMM@Z");
//};

//public: c_scripted_camera::c_scripted_camera(void)
//{
//    mangled_ppc("??0c_scripted_camera@@QAA@XZ");
//};

//public: virtual bool c_camera::should_apply_player_effects(void) const
//{
//    mangled_ppc("?should_apply_player_effects@c_camera@@UBA_NXZ");
//};

//public: virtual enum e_camera_mode c_scripted_camera::get_type(void) const
//{
//    mangled_ppc("?get_type@c_scripted_camera@@UBA?AW4e_camera_mode@@XZ");
//};

//public: virtual enum e_director_perspective c_scripted_camera::get_perspective(void) const
//{
//    mangled_ppc("?get_perspective@c_scripted_camera@@UBA?AW4e_director_perspective@@XZ");
//};

//public: virtual void c_scripted_camera::update(enum e_output_user_index, float, struct s_observer_command *)
//{
//    mangled_ppc("?update@c_scripted_camera@@UAAXW4e_output_user_index@@MPAUs_observer_command@@@Z");
//};

//public: virtual void c_scripted_camera::assemble_screen_effects(class c_global_screen_effect_state *)
//{
//    mangled_ppc("?assemble_screen_effects@c_scripted_camera@@UAAXPAVc_global_screen_effect_state@@@Z");
//};

//void cinematic_camera_set_easing_out(float)
//{
//    mangled_ppc("?cinematic_camera_set_easing_out@@YAXM@Z");
//};

//void scripted_camera_handle_tag_reload(void)
//{
//    mangled_ppc("?scripted_camera_handle_tag_reload@@YAXXZ");
//};

//public: class c_enum_no_init<enum e_scenario_camera_type, short, 0, 4, struct s_default_enum_string_resolver> & c_enum_no_init<enum e_scenario_camera_type, short, 0, 4, struct s_default_enum_string_resolver>::operator=(enum e_scenario_camera_type)
//{
//    mangled_ppc("??4?$c_enum_no_init@W4e_scenario_camera_type@@F$0A@$03Us_default_enum_string_resolver@@@@QAAAAV0@W4e_scenario_camera_type@@@Z");
//};

//public: enum e_scenario_camera_type c_enum_no_init<enum e_scenario_camera_type, short, 0, 4, struct s_default_enum_string_resolver>::operator enum e_scenario_camera_type(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_scenario_camera_type@@F$0A@$03Us_default_enum_string_resolver@@@@QBA?AW4e_scenario_camera_type@@XZ");
//};

//public: class c_enum_no_init<enum e_easing_type, short, 0, 3, struct s_default_enum_string_resolver> & c_enum_no_init<enum e_easing_type, short, 0, 3, struct s_default_enum_string_resolver>::operator=(enum e_easing_type)
//{
//    mangled_ppc("??4?$c_enum_no_init@W4e_easing_type@@F$0A@$02Us_default_enum_string_resolver@@@@QAAAAV0@W4e_easing_type@@@Z");
//};

//public: enum e_easing_type c_enum_no_init<enum e_easing_type, short, 0, 3, struct s_default_enum_string_resolver>::operator enum e_easing_type(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_easing_type@@F$0A@$02Us_default_enum_string_resolver@@@@QBA?AW4e_easing_type@@XZ");
//};

//public: bool c_enum_no_init<enum e_easing_type, short, 0, 3, struct s_default_enum_string_resolver>::operator==(enum e_easing_type) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_easing_type@@F$0A@$02Us_default_enum_string_resolver@@@@QBA_NW4e_easing_type@@@Z");
//};

//public: c_enum<enum e_camera_script_mode, short, 0, 6, struct s_default_enum_string_resolver>::c_enum<enum e_camera_script_mode, short, 0, 6, struct s_default_enum_string_resolver>(enum e_camera_script_mode)
//{
//    mangled_ppc("??0?$c_enum@W4e_camera_script_mode@@F$0A@$05Us_default_enum_string_resolver@@@@QAA@W4e_camera_script_mode@@@Z");
//};

//public: enum e_camera_script_mode c_enum_no_init<enum e_camera_script_mode, short, 0, 6, struct s_default_enum_string_resolver>::operator enum e_camera_script_mode(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_camera_script_mode@@F$0A@$05Us_default_enum_string_resolver@@@@QBA?AW4e_camera_script_mode@@XZ");
//};

//public: bool c_enum_no_init<enum e_camera_script_mode, short, 0, 6, struct s_default_enum_string_resolver>::operator==(enum e_camera_script_mode) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_camera_script_mode@@F$0A@$05Us_default_enum_string_resolver@@@@QBA_NW4e_camera_script_mode@@@Z");
//};

//public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_camera_script_globals_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_camera_script_globals_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_camera_script_globals_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_camera_script_globals_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_camera_script_globals_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_camera_script_globals_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_camera_script_globals_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_camera_script_globals_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_camera_script_globals_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_camera_script_globals_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_camera_script_globals_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_camera_script_globals_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_camera_script_globals_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_camera_script_globals_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_camera_script_globals_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_camera_script_globals_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//void g_camera_script_globals_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_camera_script_globals_allocator@@YAXXZ");
//};

