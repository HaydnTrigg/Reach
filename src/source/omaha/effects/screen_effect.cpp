/* ---------- headers */

#include "omaha\effects\screen_effect.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static enum s_screen_effect_datum::e_flags const c_flags_no_init<enum s_screen_effect_datum::e_flags, unsigned char, 3, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_flags@s_screen_effect_datum@@E$02Us_default_enum_string_resolver@@@@2W4e_flags@s_screen_effect_datum@@B"
// bool g_render_screen_effects; // "?g_render_screen_effects@@3_NA"
// float g_screen_effect_hud_alpha_scale; // "?g_screen_effect_hud_alpha_scale@@3MA"
// struct s_tag_reference_definition global_screen_shader_reference; // "?global_screen_shader_reference@@3Us_tag_reference_definition@@A"
// struct s_tag_block_definition area_screen_effect_block; // "?area_screen_effect_block@@3Us_tag_block_definition@@A"
// struct s_tag_group area_screen_effect_group; // "?area_screen_effect_group@@3Us_tag_group@@A"
// struct s_tag_reference_definition global_area_screen_effect_reference; // "?global_area_screen_effect_reference@@3Us_tag_reference_definition@@A"
// float *g_screen_effect_user_camera_shake; // "?g_screen_effect_user_camera_shake@@3PAMA"
// bool g_render_debug_screen_effects; // "?g_render_debug_screen_effects@@3_NA"
// struct s_tag_group_legacy_vtable legacy_area_screen_effect_vtable; // "?legacy_area_screen_effect_vtable@@3Us_tag_group_legacy_vtable@@A"
// struct s_tag_group_stream_definition legacy_area_screen_effect_stream_definition; // "?legacy_area_screen_effect_stream_definition@@3Us_tag_group_stream_definition@@A"
// struct s_tag_group_sync_definition legacy_area_screen_effect_xsync_declaration; // "?legacy_area_screen_effect_xsync_declaration@@3Us_tag_group_sync_definition@@A"
// class t_restricted_allocation_manager<4, 0, 0, void (__cdecl __tls_set_g_screen_effect_data_allocator::*)(void *)> g_screen_effect_data_allocator; // "?g_screen_effect_data_allocator@@3V?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_screen_effect_data_allocator@@YAXPAX@Z@@A"
// class c_legacy_tag_group_vtable_shim legacy_area_screen_effect_vtable_shim; // "?legacy_area_screen_effect_vtable_shim@@3Vc_legacy_tag_group_vtable_shim@@A"
// struct s_data_array *screen_effect_data; // "?screen_effect_data@@3PAUs_data_array@@A"

// void __tls_set_g_screen_effect_data_allocator(void *);
// public: c_global_screen_effect_state::c_global_screen_effect_state(void);
// public: void c_global_screen_effect_state::add_screen_effect(long, float);
// void screen_effect_initialize(void);
// void screen_effect_initialize_for_new_map(void);
// void screen_effect_dispose_from_old_map(void);
// void screen_effect_dispose(void);
// void screen_effect_reset(void);
// void screen_effect_update(float);
// public: static struct s_area_screen_effect_definition const * s_area_screen_effect_definition::get(long);
// public: struct s_single_screen_effect_definition const * s_area_screen_effect_definition::get_effect(long) const;
// public: static struct s_screen_effect_datum * s_screen_effect_datum::get(long);
// public: bool s_screen_effect_datum::update_position(void);
// public: long s_screen_effect_datum::get_attached_object_index(void);
// void screen_effect_destroy(long);
// long screen_effect_new(long, long, short, union real_point3d const *);
// public: void s_screen_effect_settings::set_defaults(void);
// public: void s_screen_effect_camera_settings::set_defaults(void);
// public: void s_screen_effect_shader_sample_result::set_defaults(void);
// public: void s_screen_effect_settings::accumulate_settings(struct s_screen_effect_settings const *, union vector3d const *, float);
// public: void s_screen_effect_camera_settings::accumulate_settings(struct s_screen_effect_camera_settings const *, union vector3d const *, float);
// public: void s_screen_effect_shader_sample_result::accumulate_settings(struct s_screen_effect_shader_settings const *, float, float, long);
// public: bool s_single_screen_effect_definition::is_visible(float, long, enum e_output_user_index) const;
// public: float s_single_screen_effect_definition::evaluate_falloff(float, float, float, long, float *) const;
// void screen_effect_definition_accumulate(long, float, float, struct s_screen_effect_settings *, struct s_screen_effect_shader_sample_result *);
// void debug_screen_effect(long, long, struct s_screen_effect_datum *, float);
// void screen_effect_sample(enum e_output_user_index, union real_point3d const *, union vector3d const *, struct s_screen_effect_settings *, struct s_screen_effect_shader_sample_result *);
// public: long c_global_screen_effect_state::get_tag_index(long);
// public: long c_global_screen_effect_state::get_time_input(long);
// void screen_effect_sample_camera(enum e_output_user_index, union real_point3d const *, union vector3d const *, struct s_screen_effect_camera_settings *);
// float screen_effect_apply_field_of_view_scale(enum e_output_user_index, union real_point3d const *, union vector3d const *, float);
// void screen_effect_get_camera_shake(enum e_output_user_index, float *, float *);
// void screen_effect_set_hud_alpha_scale(float);
// float screen_effect_get_hud_alpha_scale(void);
// public: static bool s_single_screen_effect_definition::on_new(void *);
// public: static bool s_single_screen_effect_definition::postprocess(long, void *, bool);
// public: static bool s_area_screen_effect_definition::postprocess(long, void *, bool);
// public: struct s_single_screen_effect_definition * s_area_screen_effect_definition::get_effect_modifiable(long) const;
// public: static bool s_area_screen_effect_definition::on_new(void *);
// public: void c_data_iterator<struct `void screen_effect_reset(void)'::`2'::screen_effect_datum>::begin(struct s_data_array *);
// public: bool c_data_iterator<struct `void screen_effect_reset(void)'::`2'::screen_effect_datum>::next(void);
// public: long c_data_iterator<struct `void screen_effect_reset(void)'::`2'::screen_effect_datum>::get_index(void) const;
// public: bool c_flags_no_init<enum s_single_screen_effect_definition::e_flags, unsigned short, 7, struct s_default_enum_string_resolver>::test(enum s_single_screen_effect_definition::e_flags) const;
// public: bool c_flags_no_init<enum s_single_screen_effect_definition::e_hidden_flags, unsigned short, 2, struct s_default_enum_string_resolver>::test(enum s_single_screen_effect_definition::e_hidden_flags) const;
// public: void c_flags_no_init<enum s_single_screen_effect_definition::e_hidden_flags, unsigned short, 2, struct s_default_enum_string_resolver>::set(enum s_single_screen_effect_definition::e_hidden_flags, bool);
// public: bool c_flags_no_init<enum s_area_screen_effect_definition::e_flags, unsigned short, 4, struct s_default_enum_string_resolver>::test(enum s_area_screen_effect_definition::e_flags) const;
// public: void c_flags_no_init<enum s_area_screen_effect_definition::e_flags, unsigned short, 4, struct s_default_enum_string_resolver>::set(enum s_area_screen_effect_definition::e_flags, bool);
// public: bool c_flags_no_init<enum s_area_screen_effect_definition::e_hidden_flags, unsigned short, 2, struct s_default_enum_string_resolver>::test(enum s_area_screen_effect_definition::e_hidden_flags) const;
// public: void c_flags_no_init<enum s_area_screen_effect_definition::e_hidden_flags, unsigned short, 2, struct s_default_enum_string_resolver>::set(enum s_area_screen_effect_definition::e_hidden_flags, bool);
// public: bool c_flags_no_init<enum s_screen_effect_datum::e_flags, unsigned char, 3, struct s_default_enum_string_resolver>::test(enum s_screen_effect_datum::e_flags) const;
// public: void c_flags_no_init<enum s_screen_effect_datum::e_flags, unsigned char, 3, struct s_default_enum_string_resolver>::set(enum s_screen_effect_datum::e_flags, bool);
// public: static bool c_flags_no_init<enum s_single_screen_effect_definition::e_flags, unsigned short, 7, struct s_default_enum_string_resolver>::valid_bit(enum s_single_screen_effect_definition::e_flags);
// private: static unsigned short c_flags_no_init<enum s_single_screen_effect_definition::e_flags, unsigned short, 7, struct s_default_enum_string_resolver>::flag_size_type(enum s_single_screen_effect_definition::e_flags);
// public: static bool c_flags_no_init<enum s_single_screen_effect_definition::e_hidden_flags, unsigned short, 2, struct s_default_enum_string_resolver>::valid_bit(enum s_single_screen_effect_definition::e_hidden_flags);
// private: static unsigned short c_flags_no_init<enum s_single_screen_effect_definition::e_hidden_flags, unsigned short, 2, struct s_default_enum_string_resolver>::flag_size_type(enum s_single_screen_effect_definition::e_hidden_flags);
// public: static bool c_flags_no_init<enum s_area_screen_effect_definition::e_flags, unsigned short, 4, struct s_default_enum_string_resolver>::valid_bit(enum s_area_screen_effect_definition::e_flags);
// private: static unsigned short c_flags_no_init<enum s_area_screen_effect_definition::e_flags, unsigned short, 4, struct s_default_enum_string_resolver>::flag_size_type(enum s_area_screen_effect_definition::e_flags);
// public: static bool c_flags_no_init<enum s_area_screen_effect_definition::e_hidden_flags, unsigned short, 2, struct s_default_enum_string_resolver>::valid_bit(enum s_area_screen_effect_definition::e_hidden_flags);
// private: static unsigned short c_flags_no_init<enum s_area_screen_effect_definition::e_hidden_flags, unsigned short, 2, struct s_default_enum_string_resolver>::flag_size_type(enum s_area_screen_effect_definition::e_hidden_flags);
// public: static bool c_flags_no_init<enum s_screen_effect_datum::e_flags, unsigned char, 3, struct s_default_enum_string_resolver>::valid_bit(enum s_screen_effect_datum::e_flags);
// private: static unsigned char c_flags_no_init<enum s_screen_effect_datum::e_flags, unsigned char, 3, struct s_default_enum_string_resolver>::flag_size_type(enum s_screen_effect_datum::e_flags);
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_screen_effect_data_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_screen_effect_data_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_screen_effect_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_screen_effect_data_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_screen_effect_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_screen_effect_data_allocator::*)(void *)>::free_memory(void);
// public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_screen_effect_data_allocator::*)(void *)>::valid(void) const;
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_screen_effect_data_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_screen_effect_data_allocator::*)(void *)>(void);
// void g_screen_effect_data_allocator::`dynamic atexit destructor'(void);

//void __tls_set_g_screen_effect_data_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_screen_effect_data_allocator@@YAXPAX@Z");
//};

//public: c_global_screen_effect_state::c_global_screen_effect_state(void)
//{
//    mangled_ppc("??0c_global_screen_effect_state@@QAA@XZ");
//};

//public: void c_global_screen_effect_state::add_screen_effect(long, float)
//{
//    mangled_ppc("?add_screen_effect@c_global_screen_effect_state@@QAAXJM@Z");
//};

//void screen_effect_initialize(void)
//{
//    mangled_ppc("?screen_effect_initialize@@YAXXZ");
//};

//void screen_effect_initialize_for_new_map(void)
//{
//    mangled_ppc("?screen_effect_initialize_for_new_map@@YAXXZ");
//};

//void screen_effect_dispose_from_old_map(void)
//{
//    mangled_ppc("?screen_effect_dispose_from_old_map@@YAXXZ");
//};

//void screen_effect_dispose(void)
//{
//    mangled_ppc("?screen_effect_dispose@@YAXXZ");
//};

//void screen_effect_reset(void)
//{
//    mangled_ppc("?screen_effect_reset@@YAXXZ");
//};

//void screen_effect_update(float)
//{
//    mangled_ppc("?screen_effect_update@@YAXM@Z");
//};

//public: static struct s_area_screen_effect_definition const * s_area_screen_effect_definition::get(long)
//{
//    mangled_ppc("?get@s_area_screen_effect_definition@@SAPBU1@J@Z");
//};

//public: struct s_single_screen_effect_definition const * s_area_screen_effect_definition::get_effect(long) const
//{
//    mangled_ppc("?get_effect@s_area_screen_effect_definition@@QBAPBUs_single_screen_effect_definition@@J@Z");
//};

//public: static struct s_screen_effect_datum * s_screen_effect_datum::get(long)
//{
//    mangled_ppc("?get@s_screen_effect_datum@@SAPAU1@J@Z");
//};

//public: bool s_screen_effect_datum::update_position(void)
//{
//    mangled_ppc("?update_position@s_screen_effect_datum@@QAA_NXZ");
//};

//public: long s_screen_effect_datum::get_attached_object_index(void)
//{
//    mangled_ppc("?get_attached_object_index@s_screen_effect_datum@@QAAJXZ");
//};

//void screen_effect_destroy(long)
//{
//    mangled_ppc("?screen_effect_destroy@@YAXJ@Z");
//};

//long screen_effect_new(long, long, short, union real_point3d const *)
//{
//    mangled_ppc("?screen_effect_new@@YAJJJFPBTreal_point3d@@@Z");
//};

//public: void s_screen_effect_settings::set_defaults(void)
//{
//    mangled_ppc("?set_defaults@s_screen_effect_settings@@QAAXXZ");
//};

//public: void s_screen_effect_camera_settings::set_defaults(void)
//{
//    mangled_ppc("?set_defaults@s_screen_effect_camera_settings@@QAAXXZ");
//};

//public: void s_screen_effect_shader_sample_result::set_defaults(void)
//{
//    mangled_ppc("?set_defaults@s_screen_effect_shader_sample_result@@QAAXXZ");
//};

//public: void s_screen_effect_settings::accumulate_settings(struct s_screen_effect_settings const *, union vector3d const *, float)
//{
//    mangled_ppc("?accumulate_settings@s_screen_effect_settings@@QAAXPBU1@PBTvector3d@@M@Z");
//};

//public: void s_screen_effect_camera_settings::accumulate_settings(struct s_screen_effect_camera_settings const *, union vector3d const *, float)
//{
//    mangled_ppc("?accumulate_settings@s_screen_effect_camera_settings@@QAAXPBU1@PBTvector3d@@M@Z");
//};

//public: void s_screen_effect_shader_sample_result::accumulate_settings(struct s_screen_effect_shader_settings const *, float, float, long)
//{
//    mangled_ppc("?accumulate_settings@s_screen_effect_shader_sample_result@@QAAXPBUs_screen_effect_shader_settings@@MMJ@Z");
//};

//public: bool s_single_screen_effect_definition::is_visible(float, long, enum e_output_user_index) const
//{
//    mangled_ppc("?is_visible@s_single_screen_effect_definition@@QBA_NMJW4e_output_user_index@@@Z");
//};

//public: float s_single_screen_effect_definition::evaluate_falloff(float, float, float, long, float *) const
//{
//    mangled_ppc("?evaluate_falloff@s_single_screen_effect_definition@@QBAMMMMJPAM@Z");
//};

//void screen_effect_definition_accumulate(long, float, float, struct s_screen_effect_settings *, struct s_screen_effect_shader_sample_result *)
//{
//    mangled_ppc("?screen_effect_definition_accumulate@@YAXJMMPAUs_screen_effect_settings@@PAUs_screen_effect_shader_sample_result@@@Z");
//};

//void debug_screen_effect(long, long, struct s_screen_effect_datum *, float)
//{
//    mangled_ppc("?debug_screen_effect@@YAXJJPAUs_screen_effect_datum@@M@Z");
//};

//void screen_effect_sample(enum e_output_user_index, union real_point3d const *, union vector3d const *, struct s_screen_effect_settings *, struct s_screen_effect_shader_sample_result *)
//{
//    mangled_ppc("?screen_effect_sample@@YAXW4e_output_user_index@@PBTreal_point3d@@PBTvector3d@@PAUs_screen_effect_settings@@PAUs_screen_effect_shader_sample_result@@@Z");
//};

//public: long c_global_screen_effect_state::get_tag_index(long)
//{
//    mangled_ppc("?get_tag_index@c_global_screen_effect_state@@QAAJJ@Z");
//};

//public: long c_global_screen_effect_state::get_time_input(long)
//{
//    mangled_ppc("?get_time_input@c_global_screen_effect_state@@QAAJJ@Z");
//};

//void screen_effect_sample_camera(enum e_output_user_index, union real_point3d const *, union vector3d const *, struct s_screen_effect_camera_settings *)
//{
//    mangled_ppc("?screen_effect_sample_camera@@YAXW4e_output_user_index@@PBTreal_point3d@@PBTvector3d@@PAUs_screen_effect_camera_settings@@@Z");
//};

//float screen_effect_apply_field_of_view_scale(enum e_output_user_index, union real_point3d const *, union vector3d const *, float)
//{
//    mangled_ppc("?screen_effect_apply_field_of_view_scale@@YAMW4e_output_user_index@@PBTreal_point3d@@PBTvector3d@@M@Z");
//};

//void screen_effect_get_camera_shake(enum e_output_user_index, float *, float *)
//{
//    mangled_ppc("?screen_effect_get_camera_shake@@YAXW4e_output_user_index@@PAM1@Z");
//};

//void screen_effect_set_hud_alpha_scale(float)
//{
//    mangled_ppc("?screen_effect_set_hud_alpha_scale@@YAXM@Z");
//};

//float screen_effect_get_hud_alpha_scale(void)
//{
//    mangled_ppc("?screen_effect_get_hud_alpha_scale@@YAMXZ");
//};

//public: static bool s_single_screen_effect_definition::on_new(void *)
//{
//    mangled_ppc("?on_new@s_single_screen_effect_definition@@SA_NPAX@Z");
//};

//public: static bool s_single_screen_effect_definition::postprocess(long, void *, bool)
//{
//    mangled_ppc("?postprocess@s_single_screen_effect_definition@@SA_NJPAX_N@Z");
//};

//public: static bool s_area_screen_effect_definition::postprocess(long, void *, bool)
//{
//    mangled_ppc("?postprocess@s_area_screen_effect_definition@@SA_NJPAX_N@Z");
//};

//public: struct s_single_screen_effect_definition * s_area_screen_effect_definition::get_effect_modifiable(long) const
//{
//    mangled_ppc("?get_effect_modifiable@s_area_screen_effect_definition@@QBAPAUs_single_screen_effect_definition@@J@Z");
//};

//public: static bool s_area_screen_effect_definition::on_new(void *)
//{
//    mangled_ppc("?on_new@s_area_screen_effect_definition@@SA_NPAX@Z");
//};

//public: void c_data_iterator<struct `void screen_effect_reset(void)'::`2'::screen_effect_datum>::begin(struct s_data_array *)
//{
//    mangled_ppc("?begin@?$c_data_iterator@Uscreen_effect_datum@?1??screen_effect_reset@@YAXXZ@@@QAAXPAUs_data_array@@@Z");
//};

//public: bool c_data_iterator<struct `void screen_effect_reset(void)'::`2'::screen_effect_datum>::next(void)
//{
//    mangled_ppc("?next@?$c_data_iterator@Uscreen_effect_datum@?1??screen_effect_reset@@YAXXZ@@@QAA_NXZ");
//};

//public: long c_data_iterator<struct `void screen_effect_reset(void)'::`2'::screen_effect_datum>::get_index(void) const
//{
//    mangled_ppc("?get_index@?$c_data_iterator@Uscreen_effect_datum@?1??screen_effect_reset@@YAXXZ@@@QBAJXZ");
//};

//public: bool c_flags_no_init<enum s_single_screen_effect_definition::e_flags, unsigned short, 7, struct s_default_enum_string_resolver>::test(enum s_single_screen_effect_definition::e_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_flags@s_single_screen_effect_definition@@G$06Us_default_enum_string_resolver@@@@QBA_NW4e_flags@s_single_screen_effect_definition@@@Z");
//};

//public: bool c_flags_no_init<enum s_single_screen_effect_definition::e_hidden_flags, unsigned short, 2, struct s_default_enum_string_resolver>::test(enum s_single_screen_effect_definition::e_hidden_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_hidden_flags@s_single_screen_effect_definition@@G$01Us_default_enum_string_resolver@@@@QBA_NW4e_hidden_flags@s_single_screen_effect_definition@@@Z");
//};

//public: void c_flags_no_init<enum s_single_screen_effect_definition::e_hidden_flags, unsigned short, 2, struct s_default_enum_string_resolver>::set(enum s_single_screen_effect_definition::e_hidden_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_hidden_flags@s_single_screen_effect_definition@@G$01Us_default_enum_string_resolver@@@@QAAXW4e_hidden_flags@s_single_screen_effect_definition@@_N@Z");
//};

//public: bool c_flags_no_init<enum s_area_screen_effect_definition::e_flags, unsigned short, 4, struct s_default_enum_string_resolver>::test(enum s_area_screen_effect_definition::e_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_flags@s_area_screen_effect_definition@@G$03Us_default_enum_string_resolver@@@@QBA_NW4e_flags@s_area_screen_effect_definition@@@Z");
//};

//public: void c_flags_no_init<enum s_area_screen_effect_definition::e_flags, unsigned short, 4, struct s_default_enum_string_resolver>::set(enum s_area_screen_effect_definition::e_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_flags@s_area_screen_effect_definition@@G$03Us_default_enum_string_resolver@@@@QAAXW4e_flags@s_area_screen_effect_definition@@_N@Z");
//};

//public: bool c_flags_no_init<enum s_area_screen_effect_definition::e_hidden_flags, unsigned short, 2, struct s_default_enum_string_resolver>::test(enum s_area_screen_effect_definition::e_hidden_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_hidden_flags@s_area_screen_effect_definition@@G$01Us_default_enum_string_resolver@@@@QBA_NW4e_hidden_flags@s_area_screen_effect_definition@@@Z");
//};

//public: void c_flags_no_init<enum s_area_screen_effect_definition::e_hidden_flags, unsigned short, 2, struct s_default_enum_string_resolver>::set(enum s_area_screen_effect_definition::e_hidden_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_hidden_flags@s_area_screen_effect_definition@@G$01Us_default_enum_string_resolver@@@@QAAXW4e_hidden_flags@s_area_screen_effect_definition@@_N@Z");
//};

//public: bool c_flags_no_init<enum s_screen_effect_datum::e_flags, unsigned char, 3, struct s_default_enum_string_resolver>::test(enum s_screen_effect_datum::e_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_flags@s_screen_effect_datum@@E$02Us_default_enum_string_resolver@@@@QBA_NW4e_flags@s_screen_effect_datum@@@Z");
//};

//public: void c_flags_no_init<enum s_screen_effect_datum::e_flags, unsigned char, 3, struct s_default_enum_string_resolver>::set(enum s_screen_effect_datum::e_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_flags@s_screen_effect_datum@@E$02Us_default_enum_string_resolver@@@@QAAXW4e_flags@s_screen_effect_datum@@_N@Z");
//};

//public: static bool c_flags_no_init<enum s_single_screen_effect_definition::e_flags, unsigned short, 7, struct s_default_enum_string_resolver>::valid_bit(enum s_single_screen_effect_definition::e_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_flags@s_single_screen_effect_definition@@G$06Us_default_enum_string_resolver@@@@SA_NW4e_flags@s_single_screen_effect_definition@@@Z");
//};

//private: static unsigned short c_flags_no_init<enum s_single_screen_effect_definition::e_flags, unsigned short, 7, struct s_default_enum_string_resolver>::flag_size_type(enum s_single_screen_effect_definition::e_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_flags@s_single_screen_effect_definition@@G$06Us_default_enum_string_resolver@@@@CAGW4e_flags@s_single_screen_effect_definition@@@Z");
//};

//public: static bool c_flags_no_init<enum s_single_screen_effect_definition::e_hidden_flags, unsigned short, 2, struct s_default_enum_string_resolver>::valid_bit(enum s_single_screen_effect_definition::e_hidden_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_hidden_flags@s_single_screen_effect_definition@@G$01Us_default_enum_string_resolver@@@@SA_NW4e_hidden_flags@s_single_screen_effect_definition@@@Z");
//};

//private: static unsigned short c_flags_no_init<enum s_single_screen_effect_definition::e_hidden_flags, unsigned short, 2, struct s_default_enum_string_resolver>::flag_size_type(enum s_single_screen_effect_definition::e_hidden_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_hidden_flags@s_single_screen_effect_definition@@G$01Us_default_enum_string_resolver@@@@CAGW4e_hidden_flags@s_single_screen_effect_definition@@@Z");
//};

//public: static bool c_flags_no_init<enum s_area_screen_effect_definition::e_flags, unsigned short, 4, struct s_default_enum_string_resolver>::valid_bit(enum s_area_screen_effect_definition::e_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_flags@s_area_screen_effect_definition@@G$03Us_default_enum_string_resolver@@@@SA_NW4e_flags@s_area_screen_effect_definition@@@Z");
//};

//private: static unsigned short c_flags_no_init<enum s_area_screen_effect_definition::e_flags, unsigned short, 4, struct s_default_enum_string_resolver>::flag_size_type(enum s_area_screen_effect_definition::e_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_flags@s_area_screen_effect_definition@@G$03Us_default_enum_string_resolver@@@@CAGW4e_flags@s_area_screen_effect_definition@@@Z");
//};

//public: static bool c_flags_no_init<enum s_area_screen_effect_definition::e_hidden_flags, unsigned short, 2, struct s_default_enum_string_resolver>::valid_bit(enum s_area_screen_effect_definition::e_hidden_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_hidden_flags@s_area_screen_effect_definition@@G$01Us_default_enum_string_resolver@@@@SA_NW4e_hidden_flags@s_area_screen_effect_definition@@@Z");
//};

//private: static unsigned short c_flags_no_init<enum s_area_screen_effect_definition::e_hidden_flags, unsigned short, 2, struct s_default_enum_string_resolver>::flag_size_type(enum s_area_screen_effect_definition::e_hidden_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_hidden_flags@s_area_screen_effect_definition@@G$01Us_default_enum_string_resolver@@@@CAGW4e_hidden_flags@s_area_screen_effect_definition@@@Z");
//};

//public: static bool c_flags_no_init<enum s_screen_effect_datum::e_flags, unsigned char, 3, struct s_default_enum_string_resolver>::valid_bit(enum s_screen_effect_datum::e_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_flags@s_screen_effect_datum@@E$02Us_default_enum_string_resolver@@@@SA_NW4e_flags@s_screen_effect_datum@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum s_screen_effect_datum::e_flags, unsigned char, 3, struct s_default_enum_string_resolver>::flag_size_type(enum s_screen_effect_datum::e_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_flags@s_screen_effect_datum@@E$02Us_default_enum_string_resolver@@@@CAEW4e_flags@s_screen_effect_datum@@@Z");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_screen_effect_data_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_screen_effect_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_screen_effect_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_screen_effect_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_screen_effect_data_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_screen_effect_data_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_screen_effect_data_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_screen_effect_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_screen_effect_data_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_screen_effect_data_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_screen_effect_data_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_screen_effect_data_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_screen_effect_data_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_screen_effect_data_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_screen_effect_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_screen_effect_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//void g_screen_effect_data_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_screen_effect_data_allocator@@YAXXZ");
//};

