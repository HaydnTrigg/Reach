/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// bool render_debug_object_lighting_use_scenery_probe; // "?render_debug_object_lighting_use_scenery_probe@@3_NA"
// bool render_debug_object_lighting_use_device_probe; // "?render_debug_object_lighting_use_device_probe@@3_NA"
// bool render_debug_object_lighting_use_air_probe; // "?render_debug_object_lighting_use_air_probe@@3_NA"
// bool render_dynamic_objects; // "?render_dynamic_objects@@3_NA"
// float render_debug_object_lighting_interpolation_difference_factor; // "?render_debug_object_lighting_interpolation_difference_factor@@3MA"
// struct s_render_object_first_person_globals render_object_globals; // "?render_object_globals@@3Us_render_object_first_person_globals@@A"
// bool debug_objects; // "?debug_objects@@3_NA"
// bool render_debug_object_lighting; // "?render_debug_object_lighting@@3_NA"
// bool render_debug_object_lighting_refresh; // "?render_debug_object_lighting_refresh@@3_NA"
// bool render_debug_show_air_probes; // "?render_debug_show_air_probes@@3_NA"
// class t_restricted_allocation_manager<3, 0, 0, void (__cdecl __tls_set_g_cached_object_render_states_allocator::*)(void *)> g_cached_object_render_states_allocator; // "?g_cached_object_render_states_allocator@@3V?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_cached_object_render_states_allocator@@YAXPAX@Z@@A"
// struct s_data_array *cached_object_render_states; // "?cached_object_render_states@@3PAUs_data_array@@A"

// void __tls_set_g_cached_object_render_states_allocator(void *);
// void render_objects_initialize(void);
// void render_objects_initialize_for_new_map(void);
// void render_objects_dispose_from_old_map(void);
// void render_objects_dispose(void);
// void render_objects_prepare_for_window(enum e_output_user_index);
// void render_objects_reset_render_state(long);
// bool render_object_first_person_globals_valid(void);
// struct s_shader_extern_info * render_object_get_render_state_info(long);
// void render_object_invalidate_cached_render_state(long);
// bool is_dynamic_object(enum e_object_type);
// bool render_object_should_be_visible(long);
// bool render_object_has_lightmap_shadow(long);
// void render_debug_objects(void);
// struct render_lighting * object_update_cached_render_lighting(long, float);
// struct render_lighting const * object_get_cached_render_lighting(long);
// void render_object_update_change_colors(long, bool);
// long object_get_cached_render_state(long);
// long game_seconds_integer_to_ticks(int);
// union rgb_color interpolate_color(union rgb_color const *, union rgb_color const *, float);
// union vector3d interpolate_normal_with_check(union vector3d const *, union vector3d const *, float);
// void object_refresh_lighting(long, long, float);
// float saved_film_manager_get_playback_game_speed(void);
// public: void s_dual_vmf_basis::clear_analytical_mask(void);
// float interpolate_wetness_sample(float, float);
// bool interpoloate_lightmap_sample(struct s_lightmap_sample *, struct s_lightmap_sample const *, float, bool);
// void calculate_analytical_light_difference(struct s_analytical_light const *, struct s_analytical_light const *, float, float, float *);
// void calculate_vmf_difference(struct s_vmf_light const *, struct s_vmf_light const *, float *);
// void interpolate_analytical_light(struct s_analytical_light *, struct s_analytical_light const *, float);
// void interpolate_dual_vmf_basis(struct s_dual_vmf_basis *, struct s_dual_vmf_basis const *, float);
// bool object_is_sky(long);
// void interpolate_vector(union vector3d *, union vector3d const *, float);
// bool render_object_is_current_first_person(long);
// bool render_object_is_first_person_or_child_weapon(enum e_output_user_index, long);
// bool render_object_is_third_person(enum e_output_user_index, long);
// void render_object_invalidate_render_state(long);
// public: bool c_flags_no_init<enum e_object_definition_flags, unsigned long, 19, struct s_default_enum_string_resolver>::test(enum e_object_definition_flags) const;
// public: static bool c_flags_no_init<enum e_object_definition_flags, unsigned long, 19, struct s_default_enum_string_resolver>::valid_bit(enum e_object_definition_flags);
// private: static unsigned long c_flags_no_init<enum e_object_definition_flags, unsigned long, 19, struct s_default_enum_string_resolver>::flag_size_type(enum e_object_definition_flags);
// float arccosine(float);
// void interpolate_scalar(float *, float, float);
// union rgb_color * subtract_real_rgb_colors(union rgb_color const *, union rgb_color const *, union rgb_color *);
// public: t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_cached_object_render_states_allocator::*)(void *)>::t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_cached_object_render_states_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_cached_object_render_states_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_cached_object_render_states_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void * t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_cached_object_render_states_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: void t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_cached_object_render_states_allocator::*)(void *)>::free_memory(void);
// public: bool t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_cached_object_render_states_allocator::*)(void *)>::valid(void) const;
// public: t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_cached_object_render_states_allocator::*)(void *)>::~t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_cached_object_render_states_allocator::*)(void *)>(void);
// void g_cached_object_render_states_allocator::`dynamic atexit destructor'(void);

//void __tls_set_g_cached_object_render_states_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_cached_object_render_states_allocator@@YAXPAX@Z");
//};

//void render_objects_initialize(void)
//{
//    mangled_ppc("?render_objects_initialize@@YAXXZ");
//};

//void render_objects_initialize_for_new_map(void)
//{
//    mangled_ppc("?render_objects_initialize_for_new_map@@YAXXZ");
//};

//void render_objects_dispose_from_old_map(void)
//{
//    mangled_ppc("?render_objects_dispose_from_old_map@@YAXXZ");
//};

//void render_objects_dispose(void)
//{
//    mangled_ppc("?render_objects_dispose@@YAXXZ");
//};

//void render_objects_prepare_for_window(enum e_output_user_index)
//{
//    mangled_ppc("?render_objects_prepare_for_window@@YAXW4e_output_user_index@@@Z");
//};

//void render_objects_reset_render_state(long)
//{
//    mangled_ppc("?render_objects_reset_render_state@@YAXJ@Z");
//};

//bool render_object_first_person_globals_valid(void)
//{
//    mangled_ppc("?render_object_first_person_globals_valid@@YA_NXZ");
//};

//struct s_shader_extern_info * render_object_get_render_state_info(long)
//{
//    mangled_ppc("?render_object_get_render_state_info@@YAPAUs_shader_extern_info@@J@Z");
//};

//void render_object_invalidate_cached_render_state(long)
//{
//    mangled_ppc("?render_object_invalidate_cached_render_state@@YAXJ@Z");
//};

//bool is_dynamic_object(enum e_object_type)
//{
//    mangled_ppc("?is_dynamic_object@@YA_NW4e_object_type@@@Z");
//};

//bool render_object_should_be_visible(long)
//{
//    mangled_ppc("?render_object_should_be_visible@@YA_NJ@Z");
//};

//bool render_object_has_lightmap_shadow(long)
//{
//    mangled_ppc("?render_object_has_lightmap_shadow@@YA_NJ@Z");
//};

//void render_debug_objects(void)
//{
//    mangled_ppc("?render_debug_objects@@YAXXZ");
//};

//struct render_lighting * object_update_cached_render_lighting(long, float)
//{
//    mangled_ppc("?object_update_cached_render_lighting@@YAPAUrender_lighting@@JM@Z");
//};

//struct render_lighting const * object_get_cached_render_lighting(long)
//{
//    mangled_ppc("?object_get_cached_render_lighting@@YAPBUrender_lighting@@J@Z");
//};

//void render_object_update_change_colors(long, bool)
//{
//    mangled_ppc("?render_object_update_change_colors@@YAXJ_N@Z");
//};

//long object_get_cached_render_state(long)
//{
//    mangled_ppc("?object_get_cached_render_state@@YAJJ@Z");
//};

//long game_seconds_integer_to_ticks(int)
//{
//    mangled_ppc("?game_seconds_integer_to_ticks@@YAJH@Z");
//};

//union rgb_color interpolate_color(union rgb_color const *, union rgb_color const *, float)
//{
//    mangled_ppc("?interpolate_color@@YA?ATrgb_color@@PBT1@0M@Z");
//};

//union vector3d interpolate_normal_with_check(union vector3d const *, union vector3d const *, float)
//{
//    mangled_ppc("?interpolate_normal_with_check@@YA?ATvector3d@@PBT1@0M@Z");
//};

//void object_refresh_lighting(long, long, float)
//{
//    mangled_ppc("?object_refresh_lighting@@YAXJJM@Z");
//};

//float saved_film_manager_get_playback_game_speed(void)
//{
//    mangled_ppc("?saved_film_manager_get_playback_game_speed@@YAMXZ");
//};

//public: void s_dual_vmf_basis::clear_analytical_mask(void)
//{
//    mangled_ppc("?clear_analytical_mask@s_dual_vmf_basis@@QAAXXZ");
//};

//float interpolate_wetness_sample(float, float)
//{
//    mangled_ppc("?interpolate_wetness_sample@@YAMMM@Z");
//};

//bool interpoloate_lightmap_sample(struct s_lightmap_sample *, struct s_lightmap_sample const *, float, bool)
//{
//    mangled_ppc("?interpoloate_lightmap_sample@@YA_NPAUs_lightmap_sample@@PBU1@M_N@Z");
//};

//void calculate_analytical_light_difference(struct s_analytical_light const *, struct s_analytical_light const *, float, float, float *)
//{
//    mangled_ppc("?calculate_analytical_light_difference@@YAXPBUs_analytical_light@@0MMPAM@Z");
//};

//void calculate_vmf_difference(struct s_vmf_light const *, struct s_vmf_light const *, float *)
//{
//    mangled_ppc("?calculate_vmf_difference@@YAXPBUs_vmf_light@@0PAM@Z");
//};

//void interpolate_analytical_light(struct s_analytical_light *, struct s_analytical_light const *, float)
//{
//    mangled_ppc("?interpolate_analytical_light@@YAXPAUs_analytical_light@@PBU1@M@Z");
//};

//void interpolate_dual_vmf_basis(struct s_dual_vmf_basis *, struct s_dual_vmf_basis const *, float)
//{
//    mangled_ppc("?interpolate_dual_vmf_basis@@YAXPAUs_dual_vmf_basis@@PBU1@M@Z");
//};

//bool object_is_sky(long)
//{
//    mangled_ppc("?object_is_sky@@YA_NJ@Z");
//};

//void interpolate_vector(union vector3d *, union vector3d const *, float)
//{
//    mangled_ppc("?interpolate_vector@@YAXPATvector3d@@PBT1@M@Z");
//};

//bool render_object_is_current_first_person(long)
//{
//    mangled_ppc("?render_object_is_current_first_person@@YA_NJ@Z");
//};

//bool render_object_is_first_person_or_child_weapon(enum e_output_user_index, long)
//{
//    mangled_ppc("?render_object_is_first_person_or_child_weapon@@YA_NW4e_output_user_index@@J@Z");
//};

//bool render_object_is_third_person(enum e_output_user_index, long)
//{
//    mangled_ppc("?render_object_is_third_person@@YA_NW4e_output_user_index@@J@Z");
//};

//void render_object_invalidate_render_state(long)
//{
//    mangled_ppc("?render_object_invalidate_render_state@@YAXJ@Z");
//};

//public: bool c_flags_no_init<enum e_object_definition_flags, unsigned long, 19, struct s_default_enum_string_resolver>::test(enum e_object_definition_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_object_definition_flags@@K$0BD@Us_default_enum_string_resolver@@@@QBA_NW4e_object_definition_flags@@@Z");
//};

//public: static bool c_flags_no_init<enum e_object_definition_flags, unsigned long, 19, struct s_default_enum_string_resolver>::valid_bit(enum e_object_definition_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_object_definition_flags@@K$0BD@Us_default_enum_string_resolver@@@@SA_NW4e_object_definition_flags@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_object_definition_flags, unsigned long, 19, struct s_default_enum_string_resolver>::flag_size_type(enum e_object_definition_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_object_definition_flags@@K$0BD@Us_default_enum_string_resolver@@@@CAKW4e_object_definition_flags@@@Z");
//};

//float arccosine(float)
//{
//    mangled_ppc("?arccosine@@YAMM@Z");
//};

//void interpolate_scalar(float *, float, float)
//{
//    mangled_ppc("?interpolate_scalar@@YAXPAMMM@Z");
//};

//union rgb_color * subtract_real_rgb_colors(union rgb_color const *, union rgb_color const *, union rgb_color *)
//{
//    mangled_ppc("?subtract_real_rgb_colors@@YAPATrgb_color@@PBT1@0PAT1@@Z");
//};

//public: t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_cached_object_render_states_allocator::*)(void *)>::t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_cached_object_render_states_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_cached_object_render_states_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_cached_object_render_states_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_cached_object_render_states_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_cached_object_render_states_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_cached_object_render_states_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void * t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_cached_object_render_states_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_cached_object_render_states_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: void t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_cached_object_render_states_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_cached_object_render_states_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: bool t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_cached_object_render_states_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_cached_object_render_states_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_cached_object_render_states_allocator::*)(void *)>::~t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_cached_object_render_states_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_cached_object_render_states_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//void g_cached_object_render_states_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_cached_object_render_states_allocator@@YAXXZ");
//};

