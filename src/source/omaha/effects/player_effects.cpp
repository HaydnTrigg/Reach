/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// bool g_render_enable_screen_flashes; // "?g_render_enable_screen_flashes@@3_NA"
// bool player_effects_enabled; // "?player_effects_enabled@@3_NA"
// class t_restricted_allocation_manager<4, 0, 0, void (__cdecl __tls_set_g_player_effect_globals_allocator::*)(void *)> g_player_effect_globals_allocator; // "?g_player_effect_globals_allocator@@3V?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_player_effect_globals_allocator@@YAXPAX@Z@@A"
// struct s_player_effect_globals *player_effect_globals; // "?player_effect_globals@@3PAUs_player_effect_globals@@A"

// void __tls_set_g_player_effect_globals_allocator(void *);
// void player_effect_initialize(void);
// void player_effect_dispose(void);
// void player_effect_initialize_for_new_map(void);
// void player_effect_dispose_from_old_map(void);
// void player_effect_update(void);
// struct player_effect_datum * player_effect_get(long);
// void player_effect_frame_update(float);
// void player_effect_handle_deleted_object(long);
// void player_effect_clear_datum(long);
// void scripted_player_effect_set_translation(float, float, float);
// void scripted_player_effect_set_rotation(float, float, float);
// void scripted_player_effect_set_rumble(float, float);
// void scripted_player_effect_start(float, float);
// void scripted_player_effect_stop(float);
// void scripted_player_effect_set_translation_for_player(long, float, float, float);
// void scripted_player_effect_set_rotation_for_player(long, float, float, float);
// void scripted_player_effect_set_rumble_for_player(long, float, float);
// void scripted_player_effect_start_for_player(long, float, float);
// void scripted_player_effect_stop_for_player(long, float);
// void player_effect_start_spatialized(long, union vector3d const *, union real_point3d const *, long, long, union real_point3d const *);
// void player_effect_start(long, enum e_output_user_index, long, struct s_damage_owner const *, union vector3d const *, union real_point3d const *, float, float, bool);
// void player_effect_start_internal(long, enum e_output_user_index, long, struct s_damage_owner const *, union vector3d const *, union real_point3d const *, float, float, bool, long, long, union real_point3d const *);
// void player_effect_start_response(long, enum e_output_user_index, long, struct s_damage_owner const *, union vector3d const *, union real_point3d const *, float, float, bool, long, long, union real_point3d const *);
// public: enum e_boolean_trait c_player_trait_sensors::get_directional_damage_setting(void) const;
// void player_effect_apply_camera_effect_matrix(enum e_output_user_index, struct real_matrix4x3*);
// void get_shake_matrix(float, float, struct real_matrix4x3*);
// bool player_effect_update_camera_impulse(enum e_output_user_index, struct player_effect_datum *, struct s_camera_impulse const *, union vector3d const *, float);
// bool player_effect_update_camera_shake(struct player_effect_datum *, struct s_camera_shake const *, float);
// public: s_area_control_datum::s_area_control_datum(void);
// public: void s_area_control_datum::init(enum e_output_user_index, long, long, long, union real_point3d const *);
// public: void s_area_control_datum::clear(void);
// public: void s_area_control_datum::update(void);
// public: void s_area_control_datum::handle_deleted_object(long);
// public: enum e_animated_camera_shake_playback_types c_enum_no_init<enum e_animated_camera_shake_playback_types, char, 0, 2, struct s_default_enum_string_resolver>::operator enum e_animated_camera_shake_playback_types(void) const;
// public: enum e_animated_camera_shake_weight_types c_enum_no_init<enum e_animated_camera_shake_weight_types, char, 0, 2, struct s_default_enum_string_resolver>::operator enum e_animated_camera_shake_weight_types(void) const;
// public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_player_effect_globals_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_player_effect_globals_allocator::*)(void *)>::valid(void) const;
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_player_effect_globals_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_player_effect_globals_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_player_effect_globals_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_player_effect_globals_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_player_effect_globals_allocator::*)(void *)>::free_memory(void);
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_player_effect_globals_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_player_effect_globals_allocator::*)(void *)>(void);
// void g_player_effect_globals_allocator::`dynamic atexit destructor'(void);

//void __tls_set_g_player_effect_globals_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_player_effect_globals_allocator@@YAXPAX@Z");
//};

//void player_effect_initialize(void)
//{
//    mangled_ppc("?player_effect_initialize@@YAXXZ");
//};

//void player_effect_dispose(void)
//{
//    mangled_ppc("?player_effect_dispose@@YAXXZ");
//};

//void player_effect_initialize_for_new_map(void)
//{
//    mangled_ppc("?player_effect_initialize_for_new_map@@YAXXZ");
//};

//void player_effect_dispose_from_old_map(void)
//{
//    mangled_ppc("?player_effect_dispose_from_old_map@@YAXXZ");
//};

//void player_effect_update(void)
//{
//    mangled_ppc("?player_effect_update@@YAXXZ");
//};

//struct player_effect_datum * player_effect_get(long)
//{
//    mangled_ppc("?player_effect_get@@YAPAUplayer_effect_datum@@J@Z");
//};

//void player_effect_frame_update(float)
//{
//    mangled_ppc("?player_effect_frame_update@@YAXM@Z");
//};

//void player_effect_handle_deleted_object(long)
//{
//    mangled_ppc("?player_effect_handle_deleted_object@@YAXJ@Z");
//};

//void player_effect_clear_datum(long)
//{
//    mangled_ppc("?player_effect_clear_datum@@YAXJ@Z");
//};

//void scripted_player_effect_set_translation(float, float, float)
//{
//    mangled_ppc("?scripted_player_effect_set_translation@@YAXMMM@Z");
//};

//void scripted_player_effect_set_rotation(float, float, float)
//{
//    mangled_ppc("?scripted_player_effect_set_rotation@@YAXMMM@Z");
//};

//void scripted_player_effect_set_rumble(float, float)
//{
//    mangled_ppc("?scripted_player_effect_set_rumble@@YAXMM@Z");
//};

//void scripted_player_effect_start(float, float)
//{
//    mangled_ppc("?scripted_player_effect_start@@YAXMM@Z");
//};

//void scripted_player_effect_stop(float)
//{
//    mangled_ppc("?scripted_player_effect_stop@@YAXM@Z");
//};

//void scripted_player_effect_set_translation_for_player(long, float, float, float)
//{
//    mangled_ppc("?scripted_player_effect_set_translation_for_player@@YAXJMMM@Z");
//};

//void scripted_player_effect_set_rotation_for_player(long, float, float, float)
//{
//    mangled_ppc("?scripted_player_effect_set_rotation_for_player@@YAXJMMM@Z");
//};

//void scripted_player_effect_set_rumble_for_player(long, float, float)
//{
//    mangled_ppc("?scripted_player_effect_set_rumble_for_player@@YAXJMM@Z");
//};

//void scripted_player_effect_start_for_player(long, float, float)
//{
//    mangled_ppc("?scripted_player_effect_start_for_player@@YAXJMM@Z");
//};

//void scripted_player_effect_stop_for_player(long, float)
//{
//    mangled_ppc("?scripted_player_effect_stop_for_player@@YAXJM@Z");
//};

//void player_effect_start_spatialized(long, union vector3d const *, union real_point3d const *, long, long, union real_point3d const *)
//{
//    mangled_ppc("?player_effect_start_spatialized@@YAXJPBTvector3d@@PBTreal_point3d@@JJ1@Z");
//};

//void player_effect_start(long, enum e_output_user_index, long, struct s_damage_owner const *, union vector3d const *, union real_point3d const *, float, float, bool)
//{
//    mangled_ppc("?player_effect_start@@YAXJW4e_output_user_index@@JPBUs_damage_owner@@PBTvector3d@@PBTreal_point3d@@MM_N@Z");
//};

//void player_effect_start_internal(long, enum e_output_user_index, long, struct s_damage_owner const *, union vector3d const *, union real_point3d const *, float, float, bool, long, long, union real_point3d const *)
//{
//    mangled_ppc("?player_effect_start_internal@@YAXJW4e_output_user_index@@JPBUs_damage_owner@@PBTvector3d@@PBTreal_point3d@@MM_NJJ3@Z");
//};

//void player_effect_start_response(long, enum e_output_user_index, long, struct s_damage_owner const *, union vector3d const *, union real_point3d const *, float, float, bool, long, long, union real_point3d const *)
//{
//    mangled_ppc("?player_effect_start_response@@YAXJW4e_output_user_index@@JPBUs_damage_owner@@PBTvector3d@@PBTreal_point3d@@MM_NJJ3@Z");
//};

//public: enum e_boolean_trait c_player_trait_sensors::get_directional_damage_setting(void) const
//{
//    mangled_ppc("?get_directional_damage_setting@c_player_trait_sensors@@QBA?AW4e_boolean_trait@@XZ");
//};

//void player_effect_apply_camera_effect_matrix(enum e_output_user_index, struct real_matrix4x3*)
//{
//    mangled_ppc("?player_effect_apply_camera_effect_matrix@@YAXW4e_output_user_index@@PAUreal_matrix4x3@@@Z");
//};

//void get_shake_matrix(float, float, struct real_matrix4x3*)
//{
//    mangled_ppc("?get_shake_matrix@@YAXMMPAUreal_matrix4x3@@@Z");
//};

//bool player_effect_update_camera_impulse(enum e_output_user_index, struct player_effect_datum *, struct s_camera_impulse const *, union vector3d const *, float)
//{
//    mangled_ppc("?player_effect_update_camera_impulse@@YA_NW4e_output_user_index@@PAUplayer_effect_datum@@PBUs_camera_impulse@@PBTvector3d@@M@Z");
//};

//bool player_effect_update_camera_shake(struct player_effect_datum *, struct s_camera_shake const *, float)
//{
//    mangled_ppc("?player_effect_update_camera_shake@@YA_NPAUplayer_effect_datum@@PBUs_camera_shake@@M@Z");
//};

//public: s_area_control_datum::s_area_control_datum(void)
//{
//    mangled_ppc("??0s_area_control_datum@@QAA@XZ");
//};

//public: void s_area_control_datum::init(enum e_output_user_index, long, long, long, union real_point3d const *)
//{
//    mangled_ppc("?init@s_area_control_datum@@QAAXW4e_output_user_index@@JJJPBTreal_point3d@@@Z");
//};

//public: void s_area_control_datum::clear(void)
//{
//    mangled_ppc("?clear@s_area_control_datum@@QAAXXZ");
//};

//public: void s_area_control_datum::update(void)
//{
//    mangled_ppc("?update@s_area_control_datum@@QAAXXZ");
//};

//public: void s_area_control_datum::handle_deleted_object(long)
//{
//    mangled_ppc("?handle_deleted_object@s_area_control_datum@@QAAXJ@Z");
//};

//public: enum e_animated_camera_shake_playback_types c_enum_no_init<enum e_animated_camera_shake_playback_types, char, 0, 2, struct s_default_enum_string_resolver>::operator enum e_animated_camera_shake_playback_types(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_animated_camera_shake_playback_types@@D$0A@$01Us_default_enum_string_resolver@@@@QBA?AW4e_animated_camera_shake_playback_types@@XZ");
//};

//public: enum e_animated_camera_shake_weight_types c_enum_no_init<enum e_animated_camera_shake_weight_types, char, 0, 2, struct s_default_enum_string_resolver>::operator enum e_animated_camera_shake_weight_types(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_animated_camera_shake_weight_types@@D$0A@$01Us_default_enum_string_resolver@@@@QBA?AW4e_animated_camera_shake_weight_types@@XZ");
//};

//public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_player_effect_globals_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_player_effect_globals_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_player_effect_globals_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_player_effect_globals_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_player_effect_globals_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_player_effect_globals_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_player_effect_globals_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_player_effect_globals_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_player_effect_globals_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_player_effect_globals_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_player_effect_globals_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_player_effect_globals_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_player_effect_globals_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_player_effect_globals_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_player_effect_globals_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_player_effect_globals_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//void g_player_effect_globals_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_player_effect_globals_allocator@@YAXXZ");
//};

