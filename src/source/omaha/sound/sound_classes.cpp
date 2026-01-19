/* ---------- headers */

#include "omaha\sound\sound_classes.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// char const **sound_class_acoustics_string_definition_strings; // "?sound_class_acoustics_string_definition_strings@@3PAPBDA"
// struct s_string_list_definition sound_class_acoustics_string_definition; // "?sound_class_acoustics_string_definition@@3Us_string_list_definition@@A"
// char const **sound_class_suppress_spatialization_string_defintion_strings; // "?sound_class_suppress_spatialization_string_defintion_strings@@3PAPBDA"
// struct s_string_list_definition sound_class_suppress_spatialization_string_defintion; // "?sound_class_suppress_spatialization_string_defintion@@3Us_string_list_definition@@A"
// struct s_tag_struct_definition sound_class_block_struct; // "?sound_class_block_struct@@3Us_tag_struct_definition@@A"
// struct s_tag_block_definition sound_class_block; // "?sound_class_block@@3Us_tag_block_definition@@A"
// struct s_tag_group sound_classes_group; // "?sound_classes_group@@3Us_tag_group@@A"
// struct s_tag_block_definition sound_class_block_v0; // "?sound_class_block_v0@@3Us_tag_block_definition@@A"
// struct s_tag_struct_definition sound_class_block_v0_struct_definition; // "?sound_class_block_v0_struct_definition@@3Us_tag_struct_definition@@A"
// char const **sound_class_names; // "?sound_class_names@@3PAPBDA"
// struct s_sound_class_debug_definition *g_sound_class_debug_info; // "?g_sound_class_debug_info@@3PAUs_sound_class_debug_definition@@A"
// class c_tag_struct_vtable<class c_sound_class_block_vtable> sound_class_block_struct_struct_vtable; // "?sound_class_block_struct_struct_vtable@@3V?$c_tag_struct_vtable@Vc_sound_class_block_vtable@@@@A"
// class c_tag_group_vtable<class c_sound_classes_group_vtable> sound_classes_vtable; // "?sound_classes_vtable@@3V?$c_tag_group_vtable@Vc_sound_classes_group_vtable@@@@A"
// class c_tag_struct_vtable<class c_sound_classes_group_vtable> sound_classes_block_struct_struct_vtable; // "?sound_classes_block_struct_struct_vtable@@3V?$c_tag_struct_vtable@Vc_sound_classes_group_vtable@@@@A"
// struct sound_class_definition *g_default_sound_classes; // "?g_default_sound_classes@@3PAUsound_class_definition@@A"
// class t_restricted_allocation_manager<2, 0, 0, void (__cdecl __tls_set_g_sound_class_data_allocator::*)(void *)> g_sound_class_data_allocator; // "?g_sound_class_data_allocator@@3V?$t_restricted_allocation_manager@$01$0A@$0A@$1?__tls_set_g_sound_class_data_allocator@@YAXPAX@Z@@A"
// struct sound_class_datum *sound_class_data; // "?sound_class_data@@3PAUsound_class_datum@@A"

// char * sound_class_format(long, __int64, struct s_tag_block *, long, char *, long);
// bool sound_classes_initialize_tag(long);
// bool sound_classes_tag_postprocess(long, bool);
// public: static bool c_sound_classes_group_vtable::postprocess_tag(long, bool);
// void __tls_set_g_sound_class_data_allocator(void *);
// struct s_game_globals * sound_classes_try_to_get_game_globals(void);
// struct sound_class_definition const * sound_class_get(short);
// bool sound_class_is_valid(long);
// struct s_sound_class_propagation const * sound_class_get_propagation(short, bool);
// void sound_classes_initialize(void);
// void sound_classes_initialize_for_new_map(void);
// void sound_classes_dispose_from_old_map(void);
// void sound_classes_dispose(void);
// void sound_class_update_ui_gain_suppression(short);
// void sound_classes_update(float);
// bool sound_class_is_music(short);
// bool sound_class_is_dialog(short);
// bool sound_class_is_occluded_by_equipment_channel(short);
// bool sound_class_is_cinematic(short);
// bool sound_class_always_streams(short);
// bool sound_class_can_stream(short);
// bool sound_class_can_play_with_acoustics(short, enum e_sound_class_acoustics_type);
// bool sound_class_synchronize_to_game_time(short);
// struct real_decibel sound_class_get_gain_db(short, enum e_sound_class_gain_modifier);
// struct real_decibel sound_class_get_aggregated_gain_db(short);
// bool sound_class_get_ducker_enabled(short);
// void sound_class_set_gain_db_by_index(long, struct real_decibel, float, enum e_sound_class_gain_modifier);
// void sound_class_set_gain_by_index(long, float, float, enum e_sound_class_gain_modifier);
// void sound_class_set_gain_modifier_deferred(float, enum e_sound_class_gain_modifier);
// void sound_class_set_gain(char const *, float, float, enum e_sound_class_gain_modifier);
// void sound_class_set_gain_db(char const *, struct real_decibel, float, enum e_sound_class_gain_modifier);
// void scripting_sound_class_set_gain(char const *, float, short);
// void scripting_sound_class_set_gain_db(char const *, float, short);
// void scripting_sound_class_set_gain_by_index(long, float, short);
// void scripting_sound_class_set_gain_db_by_index(long, float, short);
// void scripting_sound_class_enable_ducker(char const *, bool);
// struct sound_class_definition const * sound_class_default_get(short);
// struct s_sound_class_debug_definition * sound_class_debug_get(short);
// void sound_classes_show_in_channel_debug(char const *, bool);
// void sound_classes_debug_sound_start(char const *, bool);
// void debug_sound_classes_enable(char const *, unsigned char);
// struct sound_class_datum * sound_class_datum_get(short);
// bool sound_classes_initialized(void);
// char const * sound_class_get_name(short);
// public: void * t_restricted_allocation_manager<2, 0, 0, void (__tls_set_g_sound_class_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: bool t_restricted_allocation_manager<2, 0, 0, void (__tls_set_g_sound_class_data_allocator::*)(void *)>::valid(void) const;
// public: c_tag_struct_vtable<class c_sound_class_block_vtable>::c_tag_struct_vtable<class c_sound_class_block_vtable>(void);
// public: virtual bool c_tag_struct_vtable<class c_sound_class_block_vtable>::has_byte_swap_proc(void) const;
// public: virtual void c_tag_struct_vtable<class c_sound_class_block_vtable>::byte_swap_block_proc(void *) const;
// public: virtual bool c_tag_struct_vtable<class c_sound_class_block_vtable>::has_postprocess_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_sound_class_block_vtable>::postprocess_thunk(long, void *, bool) const;
// public: virtual bool c_tag_struct_vtable<class c_sound_class_block_vtable>::has_format_proc(void) const;
// public: virtual char * c_tag_struct_vtable<class c_sound_class_block_vtable>::format_thunk(long, __int64, struct s_tag_block *, long, char *, long) const;
// public: virtual bool c_tag_struct_vtable<class c_sound_class_block_vtable>::has_on_delete_proc(void) const;
// public: virtual void c_tag_struct_vtable<class c_sound_class_block_vtable>::on_delete_thunk(void *) const;
// public: virtual bool c_tag_struct_vtable<class c_sound_class_block_vtable>::has_on_new_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_sound_class_block_vtable>::on_new_thunk(void *) const;
// public: virtual bool c_tag_struct_vtable<class c_sound_class_block_vtable>::has_on_copy_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_sound_class_block_vtable>::on_copy_thunk(void const *, void *) const;
// public: virtual bool c_tag_struct_vtable<class c_sound_class_block_vtable>::has_write_to_cache_file_proc(void) const;
// public: virtual void c_tag_struct_vtable<class c_sound_class_block_vtable>::write_to_cache_file_thunk(long, struct s_tag_block *, struct s_cache_file_builder_stream_context const *, void **, void **) const;
// public: virtual bool c_tag_struct_vtable<class c_sound_class_block_vtable>::has_block_does_not_exist_in_cache_file_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_sound_class_block_vtable>::block_does_not_exist_in_cache_file_thunk(void) const;
// public: virtual bool c_tag_struct_vtable<class c_sound_class_block_vtable>::has_fixup_old_struct_definition(void) const;
// public: virtual struct s_tag_struct_definition * c_tag_struct_vtable<class c_sound_class_block_vtable>::get_fixup_source_definition_thunk(void) const;
// public: virtual bool c_tag_struct_vtable<class c_sound_class_block_vtable>::has_fixup_old_struct_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_sound_class_block_vtable>::fixup_old_struct_thunk(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool) const;
// public: virtual bool c_tag_struct_vtable<class c_sound_class_block_vtable>::has_fixup_old_struct_from_disk_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_sound_class_block_vtable>::fixup_old_struct_from_disk_thunk(struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool) const;
// public: static void s_tag_vtable_has_byte_swap_proc<class c_sound_class_block_vtable>::call(void *);
// public: static bool s_tag_vtable_has_postprocess_proc<class c_sound_class_block_vtable>::call(long, void *, bool);
// public: static char * s_tag_vtable_has_format_proc<class c_sound_class_block_vtable>::call(long, __int64, struct s_tag_block *, long, char *, long);
// public: static char * c_sound_class_block_vtable::format_proc(long, __int64, struct s_tag_block *, long, char *, long);
// public: static void s_tag_vtable_has_on_delete_proc<class c_sound_class_block_vtable>::call(void *);
// public: static bool s_tag_vtable_has_on_new_proc<class c_sound_class_block_vtable>::call(void *);
// public: static bool s_tag_vtable_has_on_copy_proc<class c_sound_class_block_vtable>::call(void const *, void *);
// public: static void s_tag_vtable_has_write_to_cache_file_proc<class c_sound_class_block_vtable>::call(long, struct s_tag_block *, struct s_cache_file_builder_stream_context const *, void **, void **);
// public: static bool s_tag_vtable_has_block_does_not_exist_in_cache_file<class c_sound_class_block_vtable>::call(void);
// public: static struct s_tag_struct_definition * s_tag_vtable_has_get_fixup_source_definition_proc<class c_sound_class_block_vtable>::call(void);
// public: static struct s_tag_struct_definition * c_sound_class_block_vtable::get_fixup_source_definition_proc(void);
// public: static bool s_tag_vtable_has_fixup_old_struct_proc<class c_sound_class_block_vtable>::call(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool);
// public: static bool c_sound_class_block_vtable::fixup_old_struct_proc(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool);
// public: static bool s_tag_vtable_has_fixup_old_struct_from_disk_proc<class c_sound_class_block_vtable>::call(struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool);
// public: struct sound_class_definition_v0* c_basic_buffer<void>::c_basic_buffer_checked_caster::operatorcast<struct sound_class_definition_v0>(void);
// public: struct sound_class_definition * c_basic_buffer<void>::c_basic_buffer_checked_caster::operatorcast<struct sound_class_definition>(void);
// public: struct sound_class_definition_v0* c_basic_buffer<void>::get_as_type<struct sound_class_definition_v0>(void);
// public: struct sound_class_definition * c_basic_buffer<void>::get_as_type<struct sound_class_definition>(void);
// public: struct sound_class_definition_v0* c_basic_buffer<void>::get_as_type_from_offset<struct sound_class_definition_v0>(unsigned long);
// public: struct sound_class_definition * c_basic_buffer<void>::get_as_type_from_offset<struct sound_class_definition>(unsigned long);
// public: c_tag_group_vtable<class c_sound_classes_group_vtable>::c_tag_group_vtable<class c_sound_classes_group_vtable>(void);
// public: virtual bool c_tag_group_vtable<class c_sound_classes_group_vtable>::has_custom_postprocess_proc(void) const;
// public: virtual bool c_tag_group_vtable<class c_sound_classes_group_vtable>::postprocess_tag_thunk(long, bool) const;
// public: virtual bool c_tag_group_vtable<class c_sound_classes_group_vtable>::has_custom_missing_tag_proc(void) const;
// public: virtual void c_tag_group_vtable<class c_sound_classes_group_vtable>::handle_missing_tag_thunk(unsigned long, char const *, unsigned long, unsigned long, char const *, long *) const;
// public: virtual bool c_tag_group_vtable<class c_sound_classes_group_vtable>::has_on_save_tag_proc(void) const;
// public: virtual void c_tag_group_vtable<class c_sound_classes_group_vtable>::on_save_tag_thunk(long) const;
// public: virtual bool c_tag_group_vtable<class c_sound_classes_group_vtable>::has_write_to_cache_file_proc(void) const;
// public: virtual void c_tag_group_vtable<class c_sound_classes_group_vtable>::write_tag_to_cache_file_thunk(long, unsigned long, class c_cache_file_scratch_allocator *, class c_cache_file_resource_library *, class c_cache_file_tracer *, void **, void **) const;
// public: virtual bool c_tag_group_vtable<class c_sound_classes_group_vtable>::has_valid_alternate_streams(void) const;
// public: virtual struct s_tag_group_stream_list * c_tag_group_vtable<class c_sound_classes_group_vtable>::get_alterante_streams_thunk(void) const;
// public: virtual bool c_tag_group_vtable<class c_sound_classes_group_vtable>::has_should_load_tag_stream_proc(void) const;
// public: virtual bool c_tag_group_vtable<class c_sound_classes_group_vtable>::should_load_tag_stream_thunk(unsigned long, bool) const;
// public: virtual bool c_tag_group_vtable<class c_sound_classes_group_vtable>::has_custom_xsync_runtime_platforms(void) const;
// public: virtual unsigned long c_tag_group_vtable<class c_sound_classes_group_vtable>::get_xsync_runtime_platforms_thunk(void) const;
// public: virtual bool c_tag_group_vtable<class c_sound_classes_group_vtable>::has_get_current_xsync_version_proc(void) const;
// public: virtual unsigned long c_tag_group_vtable<class c_sound_classes_group_vtable>::get_current_xsync_version_thunk(void) const;
// public: virtual bool c_tag_group_vtable<class c_sound_classes_group_vtable>::has_get_xsync_version_flags_proc(void) const;
// public: virtual unsigned long c_tag_group_vtable<class c_sound_classes_group_vtable>::get_xsync_version_flags_thunk(unsigned long) const;
// public: virtual bool c_tag_group_vtable<class c_sound_classes_group_vtable>::has_postprocess_on_sync_proc(void) const;
// public: virtual bool c_tag_group_vtable<class c_sound_classes_group_vtable>::postprocess_on_sync_thunk(long, enum e_runtime_platform_type, class c_cache_file_global_tag_registry *, bool) const;
// public: virtual bool c_tag_group_vtable<class c_sound_classes_group_vtable>::has_generate_tag_report_proc(void) const;
// public: virtual void c_tag_group_vtable<class c_sound_classes_group_vtable>::generate_tag_report_thunk(long, class c_tag_group_reporter *) const;
// public: virtual bool c_tag_group_vtable<class c_sound_classes_group_vtable>::has_build_tag_resource_prediction_proc(void) const;
// public: virtual void c_tag_group_vtable<class c_sound_classes_group_vtable>::build_predicted_tag_resources_thunk(long, class c_tag_resource_predictor *) const;
// public: virtual bool c_tag_group_vtable<class c_sound_classes_group_vtable>::has_collect_tag_resource_prediction_proc(void) const;
// public: virtual void c_tag_group_vtable<class c_sound_classes_group_vtable>::collect_predicted_tag_resources_thunk(long, class c_tag_resource_prediction_collector *) const;
// public: virtual bool c_tag_group_vtable<class c_sound_classes_group_vtable>::has_can_group_ever_load_in_game_proc(void) const;
// public: virtual bool c_tag_group_vtable<class c_sound_classes_group_vtable>::can_group_ever_load_in_game_thunk(void) const;
// public: virtual bool c_tag_group_vtable<class c_sound_classes_group_vtable>::has_optimize_for_cache_file_proc(void) const;
// public: virtual void c_tag_group_vtable<class c_sound_classes_group_vtable>::optimize_for_cache_file_thunk(long, enum e_runtime_platform_type, class c_cache_file_global_tag_registry *, bool) const;
// public: virtual bool c_tag_group_vtable<class c_sound_classes_group_vtable>::has_on_edit_field_proc(void) const;
// public: virtual unsigned long c_tag_group_vtable<class c_sound_classes_group_vtable>::on_edit_field_thunk(long, __int64, struct s_tag_field const *) const;
// public: virtual bool c_tag_group_vtable<class c_sound_classes_group_vtable>::has_estimate_final_resource_size_proc(void) const;
// public: virtual bool c_tag_group_vtable<class c_sound_classes_group_vtable>::estimate_final_resource_size_thunk(long, struct s_tag_resource_estimated_size *) const;
// public: virtual bool c_tag_group_vtable<class c_sound_classes_group_vtable>::has_valid_for_reload_stage_proc(void) const;
// public: virtual bool c_tag_group_vtable<class c_sound_classes_group_vtable>::valid_for_reload_stage_thunk(enum e_tag_reload_stage) const;
// public: static bool s_tag_vtable_has_postprocess_tag<class c_sound_classes_group_vtable>::call(long, bool);
// public: static void s_tag_vtable_has_handle_missing_tag<class c_sound_classes_group_vtable>::call(unsigned long, char const *, unsigned long, unsigned long, char const *, long *);
// public: static void s_tag_vtable_has_on_save_tag<class c_sound_classes_group_vtable>::call(long);
// public: static void s_tag_vtable_has_write_tag_to_cache_file<class c_sound_classes_group_vtable>::call(long, unsigned long, class c_cache_file_scratch_allocator *, class c_cache_file_resource_library *, class c_cache_file_tracer *, void **, void **);
// public: static struct s_tag_group_stream_list * s_tag_vtable_has_get_alternate_streams<class c_sound_classes_group_vtable>::call(void);
// public: static bool s_tag_vtable_has_should_load_tag_stream<class c_sound_classes_group_vtable>::call(unsigned long, bool);
// public: static unsigned long s_tag_vtable_has_get_xsync_runtime_platforms<class c_sound_classes_group_vtable>::call(void);
// public: static unsigned long s_tag_vtable_has_get_current_xsync_version<class c_sound_classes_group_vtable>::call(void);
// public: static unsigned long s_tag_vtable_has_get_xsync_version_flags<class c_sound_classes_group_vtable>::call(unsigned long);
// public: static bool s_tag_vtable_has_postprocess_tag_on_sync<class c_sound_classes_group_vtable>::call(long, enum e_runtime_platform_type, class c_cache_file_global_tag_registry *, bool);
// public: static void s_tag_vtable_has_generate_tag_report<class c_sound_classes_group_vtable>::call(long, class c_tag_group_reporter *);
// public: static void s_tag_vtable_has_build_predicted_tag_resources<class c_sound_classes_group_vtable>::call(long, class c_tag_resource_predictor *);
// public: static void s_tag_vtable_has_collect_predicted_tag_resources<class c_sound_classes_group_vtable>::call(long, class c_tag_resource_prediction_collector *);
// public: static bool s_tag_vtable_has_can_group_ever_load_in_game<class c_sound_classes_group_vtable>::call(void);
// public: static void s_tag_vtable_has_optimize_tag_for_cache_file<class c_sound_classes_group_vtable>::call(long, enum e_runtime_platform_type, class c_cache_file_global_tag_registry *, bool);
// public: static unsigned long s_tag_vtable_has_on_edit_field<class c_sound_classes_group_vtable>::call(long, __int64, struct s_tag_field const *);
// public: static bool s_tag_vtable_has_estimate_final_resource_size<class c_sound_classes_group_vtable>::call(long, struct s_tag_resource_estimated_size *);
// public: static bool s_tag_vtable_has_valid_for_reload_stage<class c_sound_classes_group_vtable>::call(enum e_tag_reload_stage);
// public: c_tag_struct_vtable<class c_sound_classes_group_vtable>::c_tag_struct_vtable<class c_sound_classes_group_vtable>(void);
// public: virtual bool c_tag_struct_vtable<class c_sound_classes_group_vtable>::has_byte_swap_proc(void) const;
// public: virtual void c_tag_struct_vtable<class c_sound_classes_group_vtable>::byte_swap_block_proc(void *) const;
// public: virtual bool c_tag_struct_vtable<class c_sound_classes_group_vtable>::has_postprocess_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_sound_classes_group_vtable>::postprocess_thunk(long, void *, bool) const;
// public: virtual bool c_tag_struct_vtable<class c_sound_classes_group_vtable>::has_format_proc(void) const;
// public: virtual char * c_tag_struct_vtable<class c_sound_classes_group_vtable>::format_thunk(long, __int64, struct s_tag_block *, long, char *, long) const;
// public: virtual bool c_tag_struct_vtable<class c_sound_classes_group_vtable>::has_on_delete_proc(void) const;
// public: virtual void c_tag_struct_vtable<class c_sound_classes_group_vtable>::on_delete_thunk(void *) const;
// public: virtual bool c_tag_struct_vtable<class c_sound_classes_group_vtable>::has_on_new_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_sound_classes_group_vtable>::on_new_thunk(void *) const;
// public: virtual bool c_tag_struct_vtable<class c_sound_classes_group_vtable>::has_on_copy_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_sound_classes_group_vtable>::on_copy_thunk(void const *, void *) const;
// public: virtual bool c_tag_struct_vtable<class c_sound_classes_group_vtable>::has_write_to_cache_file_proc(void) const;
// public: virtual void c_tag_struct_vtable<class c_sound_classes_group_vtable>::write_to_cache_file_thunk(long, struct s_tag_block *, struct s_cache_file_builder_stream_context const *, void **, void **) const;
// public: virtual bool c_tag_struct_vtable<class c_sound_classes_group_vtable>::has_block_does_not_exist_in_cache_file_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_sound_classes_group_vtable>::block_does_not_exist_in_cache_file_thunk(void) const;
// public: virtual bool c_tag_struct_vtable<class c_sound_classes_group_vtable>::has_fixup_old_struct_definition(void) const;
// public: virtual struct s_tag_struct_definition * c_tag_struct_vtable<class c_sound_classes_group_vtable>::get_fixup_source_definition_thunk(void) const;
// public: virtual bool c_tag_struct_vtable<class c_sound_classes_group_vtable>::has_fixup_old_struct_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_sound_classes_group_vtable>::fixup_old_struct_thunk(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool) const;
// public: virtual bool c_tag_struct_vtable<class c_sound_classes_group_vtable>::has_fixup_old_struct_from_disk_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_sound_classes_group_vtable>::fixup_old_struct_from_disk_thunk(struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool) const;
// public: static void s_tag_vtable_has_byte_swap_proc<class c_sound_classes_group_vtable>::call(void *);
// public: static bool s_tag_vtable_has_postprocess_proc<class c_sound_classes_group_vtable>::call(long, void *, bool);
// public: static char * s_tag_vtable_has_format_proc<class c_sound_classes_group_vtable>::call(long, __int64, struct s_tag_block *, long, char *, long);
// public: static void s_tag_vtable_has_on_delete_proc<class c_sound_classes_group_vtable>::call(void *);
// public: static bool s_tag_vtable_has_on_new_proc<class c_sound_classes_group_vtable>::call(void *);
// public: static bool s_tag_vtable_has_on_copy_proc<class c_sound_classes_group_vtable>::call(void const *, void *);
// public: static void s_tag_vtable_has_write_to_cache_file_proc<class c_sound_classes_group_vtable>::call(long, struct s_tag_block *, struct s_cache_file_builder_stream_context const *, void **, void **);
// public: static bool s_tag_vtable_has_block_does_not_exist_in_cache_file<class c_sound_classes_group_vtable>::call(void);
// public: static struct s_tag_struct_definition * s_tag_vtable_has_get_fixup_source_definition_proc<class c_sound_classes_group_vtable>::call(void);
// public: static bool s_tag_vtable_has_fixup_old_struct_proc<class c_sound_classes_group_vtable>::call(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool);
// public: static bool s_tag_vtable_has_fixup_old_struct_from_disk_proc<class c_sound_classes_group_vtable>::call(struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool);
// public: c_enum<enum e_sound_class_stereo_playback_type, char, 0, 2, struct s_default_enum_string_resolver>::c_enum<enum e_sound_class_stereo_playback_type, char, 0, 2, struct s_default_enum_string_resolver>(void);
// public: t_restricted_allocation_manager<2, 0, 0, void (__tls_set_g_sound_class_data_allocator::*)(void *)>::t_restricted_allocation_manager<2, 0, 0, void (__tls_set_g_sound_class_data_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<2, 0, 0, void (__tls_set_g_sound_class_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<2, 0, 0, void (__tls_set_g_sound_class_data_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void t_restricted_allocation_manager<2, 0, 0, void (__tls_set_g_sound_class_data_allocator::*)(void *)>::free_memory(void);
// public: t_restricted_allocation_manager<2, 0, 0, void (__tls_set_g_sound_class_data_allocator::*)(void *)>::~t_restricted_allocation_manager<2, 0, 0, void (__tls_set_g_sound_class_data_allocator::*)(void *)>(void);
// void g_sound_class_data_allocator::`dynamic atexit destructor'(void);

//char * sound_class_format(long, __int64, struct s_tag_block *, long, char *, long)
//{
//    mangled_ppc("?sound_class_format@@YAPADJ_JPAUs_tag_block@@JPADJ@Z");
//};

//bool sound_classes_initialize_tag(long)
//{
//    mangled_ppc("?sound_classes_initialize_tag@@YA_NJ@Z");
//};

//bool sound_classes_tag_postprocess(long, bool)
//{
//    mangled_ppc("?sound_classes_tag_postprocess@@YA_NJ_N@Z");
//};

//public: static bool c_sound_classes_group_vtable::postprocess_tag(long, bool)
//{
//    mangled_ppc("?postprocess_tag@c_sound_classes_group_vtable@@SA_NJ_N@Z");
//};

//void __tls_set_g_sound_class_data_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_sound_class_data_allocator@@YAXPAX@Z");
//};

//struct s_game_globals * sound_classes_try_to_get_game_globals(void)
//{
//    mangled_ppc("?sound_classes_try_to_get_game_globals@@YAPAUs_game_globals@@XZ");
//};

//struct sound_class_definition const * sound_class_get(short)
//{
//    mangled_ppc("?sound_class_get@@YAPBUsound_class_definition@@F@Z");
//};

//bool sound_class_is_valid(long)
//{
//    mangled_ppc("?sound_class_is_valid@@YA_NJ@Z");
//};

//struct s_sound_class_propagation const * sound_class_get_propagation(short, bool)
//{
//    mangled_ppc("?sound_class_get_propagation@@YAPBUs_sound_class_propagation@@F_N@Z");
//};

//void sound_classes_initialize(void)
//{
//    mangled_ppc("?sound_classes_initialize@@YAXXZ");
//};

//void sound_classes_initialize_for_new_map(void)
//{
//    mangled_ppc("?sound_classes_initialize_for_new_map@@YAXXZ");
//};

//void sound_classes_dispose_from_old_map(void)
//{
//    mangled_ppc("?sound_classes_dispose_from_old_map@@YAXXZ");
//};

//void sound_classes_dispose(void)
//{
//    mangled_ppc("?sound_classes_dispose@@YAXXZ");
//};

//void sound_class_update_ui_gain_suppression(short)
//{
//    mangled_ppc("?sound_class_update_ui_gain_suppression@@YAXF@Z");
//};

//void sound_classes_update(float)
//{
//    mangled_ppc("?sound_classes_update@@YAXM@Z");
//};

//bool sound_class_is_music(short)
//{
//    mangled_ppc("?sound_class_is_music@@YA_NF@Z");
//};

//bool sound_class_is_dialog(short)
//{
//    mangled_ppc("?sound_class_is_dialog@@YA_NF@Z");
//};

//bool sound_class_is_occluded_by_equipment_channel(short)
//{
//    mangled_ppc("?sound_class_is_occluded_by_equipment_channel@@YA_NF@Z");
//};

//bool sound_class_is_cinematic(short)
//{
//    mangled_ppc("?sound_class_is_cinematic@@YA_NF@Z");
//};

//bool sound_class_always_streams(short)
//{
//    mangled_ppc("?sound_class_always_streams@@YA_NF@Z");
//};

//bool sound_class_can_stream(short)
//{
//    mangled_ppc("?sound_class_can_stream@@YA_NF@Z");
//};

//bool sound_class_can_play_with_acoustics(short, enum e_sound_class_acoustics_type)
//{
//    mangled_ppc("?sound_class_can_play_with_acoustics@@YA_NFW4e_sound_class_acoustics_type@@@Z");
//};

//bool sound_class_synchronize_to_game_time(short)
//{
//    mangled_ppc("?sound_class_synchronize_to_game_time@@YA_NF@Z");
//};

//struct real_decibel sound_class_get_gain_db(short, enum e_sound_class_gain_modifier)
//{
//    mangled_ppc("?sound_class_get_gain_db@@YA?AUreal_decibel@@FW4e_sound_class_gain_modifier@@@Z");
//};

//struct real_decibel sound_class_get_aggregated_gain_db(short)
//{
//    mangled_ppc("?sound_class_get_aggregated_gain_db@@YA?AUreal_decibel@@F@Z");
//};

//bool sound_class_get_ducker_enabled(short)
//{
//    mangled_ppc("?sound_class_get_ducker_enabled@@YA_NF@Z");
//};

//void sound_class_set_gain_db_by_index(long, struct real_decibel, float, enum e_sound_class_gain_modifier)
//{
//    mangled_ppc("?sound_class_set_gain_db_by_index@@YAXJUreal_decibel@@MW4e_sound_class_gain_modifier@@@Z");
//};

//void sound_class_set_gain_by_index(long, float, float, enum e_sound_class_gain_modifier)
//{
//    mangled_ppc("?sound_class_set_gain_by_index@@YAXJMMW4e_sound_class_gain_modifier@@@Z");
//};

//void sound_class_set_gain_modifier_deferred(float, enum e_sound_class_gain_modifier)
//{
//    mangled_ppc("?sound_class_set_gain_modifier_deferred@@YAXMW4e_sound_class_gain_modifier@@@Z");
//};

//void sound_class_set_gain(char const *, float, float, enum e_sound_class_gain_modifier)
//{
//    mangled_ppc("?sound_class_set_gain@@YAXPBDMMW4e_sound_class_gain_modifier@@@Z");
//};

//void sound_class_set_gain_db(char const *, struct real_decibel, float, enum e_sound_class_gain_modifier)
//{
//    mangled_ppc("?sound_class_set_gain_db@@YAXPBDUreal_decibel@@MW4e_sound_class_gain_modifier@@@Z");
//};

//void scripting_sound_class_set_gain(char const *, float, short)
//{
//    mangled_ppc("?scripting_sound_class_set_gain@@YAXPBDMF@Z");
//};

//void scripting_sound_class_set_gain_db(char const *, float, short)
//{
//    mangled_ppc("?scripting_sound_class_set_gain_db@@YAXPBDMF@Z");
//};

//void scripting_sound_class_set_gain_by_index(long, float, short)
//{
//    mangled_ppc("?scripting_sound_class_set_gain_by_index@@YAXJMF@Z");
//};

//void scripting_sound_class_set_gain_db_by_index(long, float, short)
//{
//    mangled_ppc("?scripting_sound_class_set_gain_db_by_index@@YAXJMF@Z");
//};

//void scripting_sound_class_enable_ducker(char const *, bool)
//{
//    mangled_ppc("?scripting_sound_class_enable_ducker@@YAXPBD_N@Z");
//};

//struct sound_class_definition const * sound_class_default_get(short)
//{
//    mangled_ppc("?sound_class_default_get@@YAPBUsound_class_definition@@F@Z");
//};

//struct s_sound_class_debug_definition * sound_class_debug_get(short)
//{
//    mangled_ppc("?sound_class_debug_get@@YAPAUs_sound_class_debug_definition@@F@Z");
//};

//void sound_classes_show_in_channel_debug(char const *, bool)
//{
//    mangled_ppc("?sound_classes_show_in_channel_debug@@YAXPBD_N@Z");
//};

//void sound_classes_debug_sound_start(char const *, bool)
//{
//    mangled_ppc("?sound_classes_debug_sound_start@@YAXPBD_N@Z");
//};

//void debug_sound_classes_enable(char const *, unsigned char)
//{
//    mangled_ppc("?debug_sound_classes_enable@@YAXPBDE@Z");
//};

//struct sound_class_datum * sound_class_datum_get(short)
//{
//    mangled_ppc("?sound_class_datum_get@@YAPAUsound_class_datum@@F@Z");
//};

//bool sound_classes_initialized(void)
//{
//    mangled_ppc("?sound_classes_initialized@@YA_NXZ");
//};

//char const * sound_class_get_name(short)
//{
//    mangled_ppc("?sound_class_get_name@@YAPBDF@Z");
//};

//public: void * t_restricted_allocation_manager<2, 0, 0, void (__tls_set_g_sound_class_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$01$0A@$0A@$1?__tls_set_g_sound_class_data_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: bool t_restricted_allocation_manager<2, 0, 0, void (__tls_set_g_sound_class_data_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$01$0A@$0A@$1?__tls_set_g_sound_class_data_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: c_tag_struct_vtable<class c_sound_class_block_vtable>::c_tag_struct_vtable<class c_sound_class_block_vtable>(void)
//{
//    mangled_ppc("??0?$c_tag_struct_vtable@Vc_sound_class_block_vtable@@@@QAA@XZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_sound_class_block_vtable>::has_byte_swap_proc(void) const
//{
//    mangled_ppc("?has_byte_swap_proc@?$c_tag_struct_vtable@Vc_sound_class_block_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_struct_vtable<class c_sound_class_block_vtable>::byte_swap_block_proc(void *) const
//{
//    mangled_ppc("?byte_swap_block_proc@?$c_tag_struct_vtable@Vc_sound_class_block_vtable@@@@UBAXPAX@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_sound_class_block_vtable>::has_postprocess_proc(void) const
//{
//    mangled_ppc("?has_postprocess_proc@?$c_tag_struct_vtable@Vc_sound_class_block_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_sound_class_block_vtable>::postprocess_thunk(long, void *, bool) const
//{
//    mangled_ppc("?postprocess_thunk@?$c_tag_struct_vtable@Vc_sound_class_block_vtable@@@@UBA_NJPAX_N@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_sound_class_block_vtable>::has_format_proc(void) const
//{
//    mangled_ppc("?has_format_proc@?$c_tag_struct_vtable@Vc_sound_class_block_vtable@@@@UBA_NXZ");
//};

//public: virtual char * c_tag_struct_vtable<class c_sound_class_block_vtable>::format_thunk(long, __int64, struct s_tag_block *, long, char *, long) const
//{
//    mangled_ppc("?format_thunk@?$c_tag_struct_vtable@Vc_sound_class_block_vtable@@@@UBAPADJ_JPAUs_tag_block@@JPADJ@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_sound_class_block_vtable>::has_on_delete_proc(void) const
//{
//    mangled_ppc("?has_on_delete_proc@?$c_tag_struct_vtable@Vc_sound_class_block_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_struct_vtable<class c_sound_class_block_vtable>::on_delete_thunk(void *) const
//{
//    mangled_ppc("?on_delete_thunk@?$c_tag_struct_vtable@Vc_sound_class_block_vtable@@@@UBAXPAX@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_sound_class_block_vtable>::has_on_new_proc(void) const
//{
//    mangled_ppc("?has_on_new_proc@?$c_tag_struct_vtable@Vc_sound_class_block_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_sound_class_block_vtable>::on_new_thunk(void *) const
//{
//    mangled_ppc("?on_new_thunk@?$c_tag_struct_vtable@Vc_sound_class_block_vtable@@@@UBA_NPAX@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_sound_class_block_vtable>::has_on_copy_proc(void) const
//{
//    mangled_ppc("?has_on_copy_proc@?$c_tag_struct_vtable@Vc_sound_class_block_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_sound_class_block_vtable>::on_copy_thunk(void const *, void *) const
//{
//    mangled_ppc("?on_copy_thunk@?$c_tag_struct_vtable@Vc_sound_class_block_vtable@@@@UBA_NPBXPAX@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_sound_class_block_vtable>::has_write_to_cache_file_proc(void) const
//{
//    mangled_ppc("?has_write_to_cache_file_proc@?$c_tag_struct_vtable@Vc_sound_class_block_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_struct_vtable<class c_sound_class_block_vtable>::write_to_cache_file_thunk(long, struct s_tag_block *, struct s_cache_file_builder_stream_context const *, void **, void **) const
//{
//    mangled_ppc("?write_to_cache_file_thunk@?$c_tag_struct_vtable@Vc_sound_class_block_vtable@@@@UBAXJPAUs_tag_block@@PBUs_cache_file_builder_stream_context@@PAPAX2@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_sound_class_block_vtable>::has_block_does_not_exist_in_cache_file_proc(void) const
//{
//    mangled_ppc("?has_block_does_not_exist_in_cache_file_proc@?$c_tag_struct_vtable@Vc_sound_class_block_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_sound_class_block_vtable>::block_does_not_exist_in_cache_file_thunk(void) const
//{
//    mangled_ppc("?block_does_not_exist_in_cache_file_thunk@?$c_tag_struct_vtable@Vc_sound_class_block_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_sound_class_block_vtable>::has_fixup_old_struct_definition(void) const
//{
//    mangled_ppc("?has_fixup_old_struct_definition@?$c_tag_struct_vtable@Vc_sound_class_block_vtable@@@@UBA_NXZ");
//};

//public: virtual struct s_tag_struct_definition * c_tag_struct_vtable<class c_sound_class_block_vtable>::get_fixup_source_definition_thunk(void) const
//{
//    mangled_ppc("?get_fixup_source_definition_thunk@?$c_tag_struct_vtable@Vc_sound_class_block_vtable@@@@UBAPAUs_tag_struct_definition@@XZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_sound_class_block_vtable>::has_fixup_old_struct_proc(void) const
//{
//    mangled_ppc("?has_fixup_old_struct_proc@?$c_tag_struct_vtable@Vc_sound_class_block_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_sound_class_block_vtable>::fixup_old_struct_thunk(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool) const
//{
//    mangled_ppc("?fixup_old_struct_thunk@?$c_tag_struct_vtable@Vc_sound_class_block_vtable@@@@UBA_NAAV?$c_basic_buffer@X@@PBUs_tag_struct_definition@@01PAVc_tag_allocator@@_N@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_sound_class_block_vtable>::has_fixup_old_struct_from_disk_proc(void) const
//{
//    mangled_ppc("?has_fixup_old_struct_from_disk_proc@?$c_tag_struct_vtable@Vc_sound_class_block_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_sound_class_block_vtable>::fixup_old_struct_from_disk_thunk(struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool) const
//{
//    mangled_ppc("?fixup_old_struct_from_disk_thunk@?$c_tag_struct_vtable@Vc_sound_class_block_vtable@@@@UBA_NPBUs_tag_struct_definition@@AAV?$c_basic_buffer@X@@010PAVc_tag_allocator@@_N@Z");
//};

//public: static void s_tag_vtable_has_byte_swap_proc<class c_sound_class_block_vtable>::call(void *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_byte_swap_proc@Vc_sound_class_block_vtable@@@@SAXPAX@Z");
//};

//public: static bool s_tag_vtable_has_postprocess_proc<class c_sound_class_block_vtable>::call(long, void *, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_postprocess_proc@Vc_sound_class_block_vtable@@@@SA_NJPAX_N@Z");
//};

//public: static char * s_tag_vtable_has_format_proc<class c_sound_class_block_vtable>::call(long, __int64, struct s_tag_block *, long, char *, long)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_format_proc@Vc_sound_class_block_vtable@@@@SAPADJ_JPAUs_tag_block@@JPADJ@Z");
//};

//public: static char * c_sound_class_block_vtable::format_proc(long, __int64, struct s_tag_block *, long, char *, long)
//{
//    mangled_ppc("?format_proc@c_sound_class_block_vtable@@SAPADJ_JPAUs_tag_block@@JPADJ@Z");
//};

//public: static void s_tag_vtable_has_on_delete_proc<class c_sound_class_block_vtable>::call(void *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_on_delete_proc@Vc_sound_class_block_vtable@@@@SAXPAX@Z");
//};

//public: static bool s_tag_vtable_has_on_new_proc<class c_sound_class_block_vtable>::call(void *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_on_new_proc@Vc_sound_class_block_vtable@@@@SA_NPAX@Z");
//};

//public: static bool s_tag_vtable_has_on_copy_proc<class c_sound_class_block_vtable>::call(void const *, void *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_on_copy_proc@Vc_sound_class_block_vtable@@@@SA_NPBXPAX@Z");
//};

//public: static void s_tag_vtable_has_write_to_cache_file_proc<class c_sound_class_block_vtable>::call(long, struct s_tag_block *, struct s_cache_file_builder_stream_context const *, void **, void **)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_write_to_cache_file_proc@Vc_sound_class_block_vtable@@@@SAXJPAUs_tag_block@@PBUs_cache_file_builder_stream_context@@PAPAX2@Z");
//};

//public: static bool s_tag_vtable_has_block_does_not_exist_in_cache_file<class c_sound_class_block_vtable>::call(void)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_block_does_not_exist_in_cache_file@Vc_sound_class_block_vtable@@@@SA_NXZ");
//};

//public: static struct s_tag_struct_definition * s_tag_vtable_has_get_fixup_source_definition_proc<class c_sound_class_block_vtable>::call(void)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_get_fixup_source_definition_proc@Vc_sound_class_block_vtable@@@@SAPAUs_tag_struct_definition@@XZ");
//};

//public: static struct s_tag_struct_definition * c_sound_class_block_vtable::get_fixup_source_definition_proc(void)
//{
//    mangled_ppc("?get_fixup_source_definition_proc@c_sound_class_block_vtable@@SAPAUs_tag_struct_definition@@XZ");
//};

//public: static bool s_tag_vtable_has_fixup_old_struct_proc<class c_sound_class_block_vtable>::call(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_fixup_old_struct_proc@Vc_sound_class_block_vtable@@@@SA_NAAV?$c_basic_buffer@X@@PBUs_tag_struct_definition@@01PAVc_tag_allocator@@_N@Z");
//};

//public: static bool c_sound_class_block_vtable::fixup_old_struct_proc(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool)
//{
//    mangled_ppc("?fixup_old_struct_proc@c_sound_class_block_vtable@@SA_NAAV?$c_basic_buffer@X@@PBUs_tag_struct_definition@@01PAVc_tag_allocator@@_N@Z");
//};

//public: static bool s_tag_vtable_has_fixup_old_struct_from_disk_proc<class c_sound_class_block_vtable>::call(struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_fixup_old_struct_from_disk_proc@Vc_sound_class_block_vtable@@@@SA_NPBUs_tag_struct_definition@@AAV?$c_basic_buffer@X@@010PAVc_tag_allocator@@_N@Z");
//};

//public: struct sound_class_definition_v0* c_basic_buffer<void>::c_basic_buffer_checked_caster::operatorcast<struct sound_class_definition_v0>(void)
//{
//    mangled_ppc("??$?BUsound_class_definition_v0@@@c_basic_buffer_checked_caster@?$c_basic_buffer@X@@QAAPAUsound_class_definition_v0@@XZ");
//};

//public: struct sound_class_definition * c_basic_buffer<void>::c_basic_buffer_checked_caster::operatorcast<struct sound_class_definition>(void)
//{
//    mangled_ppc("??$?BUsound_class_definition@@@c_basic_buffer_checked_caster@?$c_basic_buffer@X@@QAAPAUsound_class_definition@@XZ");
//};

//public: struct sound_class_definition_v0* c_basic_buffer<void>::get_as_type<struct sound_class_definition_v0>(void)
//{
//    mangled_ppc("??$get_as_type@Usound_class_definition_v0@@@?$c_basic_buffer@X@@QAAPAUsound_class_definition_v0@@XZ");
//};

//public: struct sound_class_definition * c_basic_buffer<void>::get_as_type<struct sound_class_definition>(void)
//{
//    mangled_ppc("??$get_as_type@Usound_class_definition@@@?$c_basic_buffer@X@@QAAPAUsound_class_definition@@XZ");
//};

//public: struct sound_class_definition_v0* c_basic_buffer<void>::get_as_type_from_offset<struct sound_class_definition_v0>(unsigned long)
//{
//    mangled_ppc("??$get_as_type_from_offset@Usound_class_definition_v0@@@?$c_basic_buffer@X@@QAAPAUsound_class_definition_v0@@K@Z");
//};

//public: struct sound_class_definition * c_basic_buffer<void>::get_as_type_from_offset<struct sound_class_definition>(unsigned long)
//{
//    mangled_ppc("??$get_as_type_from_offset@Usound_class_definition@@@?$c_basic_buffer@X@@QAAPAUsound_class_definition@@K@Z");
//};

//public: c_tag_group_vtable<class c_sound_classes_group_vtable>::c_tag_group_vtable<class c_sound_classes_group_vtable>(void)
//{
//    mangled_ppc("??0?$c_tag_group_vtable@Vc_sound_classes_group_vtable@@@@QAA@XZ");
//};

//public: virtual bool c_tag_group_vtable<class c_sound_classes_group_vtable>::has_custom_postprocess_proc(void) const
//{
//    mangled_ppc("?has_custom_postprocess_proc@?$c_tag_group_vtable@Vc_sound_classes_group_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_group_vtable<class c_sound_classes_group_vtable>::postprocess_tag_thunk(long, bool) const
//{
//    mangled_ppc("?postprocess_tag_thunk@?$c_tag_group_vtable@Vc_sound_classes_group_vtable@@@@UBA_NJ_N@Z");
//};

//public: virtual bool c_tag_group_vtable<class c_sound_classes_group_vtable>::has_custom_missing_tag_proc(void) const
//{
//    mangled_ppc("?has_custom_missing_tag_proc@?$c_tag_group_vtable@Vc_sound_classes_group_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_group_vtable<class c_sound_classes_group_vtable>::handle_missing_tag_thunk(unsigned long, char const *, unsigned long, unsigned long, char const *, long *) const
//{
//    mangled_ppc("?handle_missing_tag_thunk@?$c_tag_group_vtable@Vc_sound_classes_group_vtable@@@@UBAXKPBDKK0PAJ@Z");
//};

//public: virtual bool c_tag_group_vtable<class c_sound_classes_group_vtable>::has_on_save_tag_proc(void) const
//{
//    mangled_ppc("?has_on_save_tag_proc@?$c_tag_group_vtable@Vc_sound_classes_group_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_group_vtable<class c_sound_classes_group_vtable>::on_save_tag_thunk(long) const
//{
//    mangled_ppc("?on_save_tag_thunk@?$c_tag_group_vtable@Vc_sound_classes_group_vtable@@@@UBAXJ@Z");
//};

//public: virtual bool c_tag_group_vtable<class c_sound_classes_group_vtable>::has_write_to_cache_file_proc(void) const
//{
//    mangled_ppc("?has_write_to_cache_file_proc@?$c_tag_group_vtable@Vc_sound_classes_group_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_group_vtable<class c_sound_classes_group_vtable>::write_tag_to_cache_file_thunk(long, unsigned long, class c_cache_file_scratch_allocator *, class c_cache_file_resource_library *, class c_cache_file_tracer *, void **, void **) const
//{
//    mangled_ppc("?write_tag_to_cache_file_thunk@?$c_tag_group_vtable@Vc_sound_classes_group_vtable@@@@UBAXJKPAVc_cache_file_scratch_allocator@@PAVc_cache_file_resource_library@@PAVc_cache_file_tracer@@PAPAX3@Z");
//};

//public: virtual bool c_tag_group_vtable<class c_sound_classes_group_vtable>::has_valid_alternate_streams(void) const
//{
//    mangled_ppc("?has_valid_alternate_streams@?$c_tag_group_vtable@Vc_sound_classes_group_vtable@@@@UBA_NXZ");
//};

//public: virtual struct s_tag_group_stream_list * c_tag_group_vtable<class c_sound_classes_group_vtable>::get_alterante_streams_thunk(void) const
//{
//    mangled_ppc("?get_alterante_streams_thunk@?$c_tag_group_vtable@Vc_sound_classes_group_vtable@@@@UBAPAUs_tag_group_stream_list@@XZ");
//};

//public: virtual bool c_tag_group_vtable<class c_sound_classes_group_vtable>::has_should_load_tag_stream_proc(void) const
//{
//    mangled_ppc("?has_should_load_tag_stream_proc@?$c_tag_group_vtable@Vc_sound_classes_group_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_group_vtable<class c_sound_classes_group_vtable>::should_load_tag_stream_thunk(unsigned long, bool) const
//{
//    mangled_ppc("?should_load_tag_stream_thunk@?$c_tag_group_vtable@Vc_sound_classes_group_vtable@@@@UBA_NK_N@Z");
//};

//public: virtual bool c_tag_group_vtable<class c_sound_classes_group_vtable>::has_custom_xsync_runtime_platforms(void) const
//{
//    mangled_ppc("?has_custom_xsync_runtime_platforms@?$c_tag_group_vtable@Vc_sound_classes_group_vtable@@@@UBA_NXZ");
//};

//public: virtual unsigned long c_tag_group_vtable<class c_sound_classes_group_vtable>::get_xsync_runtime_platforms_thunk(void) const
//{
//    mangled_ppc("?get_xsync_runtime_platforms_thunk@?$c_tag_group_vtable@Vc_sound_classes_group_vtable@@@@UBAKXZ");
//};

//public: virtual bool c_tag_group_vtable<class c_sound_classes_group_vtable>::has_get_current_xsync_version_proc(void) const
//{
//    mangled_ppc("?has_get_current_xsync_version_proc@?$c_tag_group_vtable@Vc_sound_classes_group_vtable@@@@UBA_NXZ");
//};

//public: virtual unsigned long c_tag_group_vtable<class c_sound_classes_group_vtable>::get_current_xsync_version_thunk(void) const
//{
//    mangled_ppc("?get_current_xsync_version_thunk@?$c_tag_group_vtable@Vc_sound_classes_group_vtable@@@@UBAKXZ");
//};

//public: virtual bool c_tag_group_vtable<class c_sound_classes_group_vtable>::has_get_xsync_version_flags_proc(void) const
//{
//    mangled_ppc("?has_get_xsync_version_flags_proc@?$c_tag_group_vtable@Vc_sound_classes_group_vtable@@@@UBA_NXZ");
//};

//public: virtual unsigned long c_tag_group_vtable<class c_sound_classes_group_vtable>::get_xsync_version_flags_thunk(unsigned long) const
//{
//    mangled_ppc("?get_xsync_version_flags_thunk@?$c_tag_group_vtable@Vc_sound_classes_group_vtable@@@@UBAKK@Z");
//};

//public: virtual bool c_tag_group_vtable<class c_sound_classes_group_vtable>::has_postprocess_on_sync_proc(void) const
//{
//    mangled_ppc("?has_postprocess_on_sync_proc@?$c_tag_group_vtable@Vc_sound_classes_group_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_group_vtable<class c_sound_classes_group_vtable>::postprocess_on_sync_thunk(long, enum e_runtime_platform_type, class c_cache_file_global_tag_registry *, bool) const
//{
//    mangled_ppc("?postprocess_on_sync_thunk@?$c_tag_group_vtable@Vc_sound_classes_group_vtable@@@@UBA_NJW4e_runtime_platform_type@@PAVc_cache_file_global_tag_registry@@_N@Z");
//};

//public: virtual bool c_tag_group_vtable<class c_sound_classes_group_vtable>::has_generate_tag_report_proc(void) const
//{
//    mangled_ppc("?has_generate_tag_report_proc@?$c_tag_group_vtable@Vc_sound_classes_group_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_group_vtable<class c_sound_classes_group_vtable>::generate_tag_report_thunk(long, class c_tag_group_reporter *) const
//{
//    mangled_ppc("?generate_tag_report_thunk@?$c_tag_group_vtable@Vc_sound_classes_group_vtable@@@@UBAXJPAVc_tag_group_reporter@@@Z");
//};

//public: virtual bool c_tag_group_vtable<class c_sound_classes_group_vtable>::has_build_tag_resource_prediction_proc(void) const
//{
//    mangled_ppc("?has_build_tag_resource_prediction_proc@?$c_tag_group_vtable@Vc_sound_classes_group_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_group_vtable<class c_sound_classes_group_vtable>::build_predicted_tag_resources_thunk(long, class c_tag_resource_predictor *) const
//{
//    mangled_ppc("?build_predicted_tag_resources_thunk@?$c_tag_group_vtable@Vc_sound_classes_group_vtable@@@@UBAXJPAVc_tag_resource_predictor@@@Z");
//};

//public: virtual bool c_tag_group_vtable<class c_sound_classes_group_vtable>::has_collect_tag_resource_prediction_proc(void) const
//{
//    mangled_ppc("?has_collect_tag_resource_prediction_proc@?$c_tag_group_vtable@Vc_sound_classes_group_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_group_vtable<class c_sound_classes_group_vtable>::collect_predicted_tag_resources_thunk(long, class c_tag_resource_prediction_collector *) const
//{
//    mangled_ppc("?collect_predicted_tag_resources_thunk@?$c_tag_group_vtable@Vc_sound_classes_group_vtable@@@@UBAXJPAVc_tag_resource_prediction_collector@@@Z");
//};

//public: virtual bool c_tag_group_vtable<class c_sound_classes_group_vtable>::has_can_group_ever_load_in_game_proc(void) const
//{
//    mangled_ppc("?has_can_group_ever_load_in_game_proc@?$c_tag_group_vtable@Vc_sound_classes_group_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_group_vtable<class c_sound_classes_group_vtable>::can_group_ever_load_in_game_thunk(void) const
//{
//    mangled_ppc("?can_group_ever_load_in_game_thunk@?$c_tag_group_vtable@Vc_sound_classes_group_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_group_vtable<class c_sound_classes_group_vtable>::has_optimize_for_cache_file_proc(void) const
//{
//    mangled_ppc("?has_optimize_for_cache_file_proc@?$c_tag_group_vtable@Vc_sound_classes_group_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_group_vtable<class c_sound_classes_group_vtable>::optimize_for_cache_file_thunk(long, enum e_runtime_platform_type, class c_cache_file_global_tag_registry *, bool) const
//{
//    mangled_ppc("?optimize_for_cache_file_thunk@?$c_tag_group_vtable@Vc_sound_classes_group_vtable@@@@UBAXJW4e_runtime_platform_type@@PAVc_cache_file_global_tag_registry@@_N@Z");
//};

//public: virtual bool c_tag_group_vtable<class c_sound_classes_group_vtable>::has_on_edit_field_proc(void) const
//{
//    mangled_ppc("?has_on_edit_field_proc@?$c_tag_group_vtable@Vc_sound_classes_group_vtable@@@@UBA_NXZ");
//};

//public: virtual unsigned long c_tag_group_vtable<class c_sound_classes_group_vtable>::on_edit_field_thunk(long, __int64, struct s_tag_field const *) const
//{
//    mangled_ppc("?on_edit_field_thunk@?$c_tag_group_vtable@Vc_sound_classes_group_vtable@@@@UBAKJ_JPBUs_tag_field@@@Z");
//};

//public: virtual bool c_tag_group_vtable<class c_sound_classes_group_vtable>::has_estimate_final_resource_size_proc(void) const
//{
//    mangled_ppc("?has_estimate_final_resource_size_proc@?$c_tag_group_vtable@Vc_sound_classes_group_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_group_vtable<class c_sound_classes_group_vtable>::estimate_final_resource_size_thunk(long, struct s_tag_resource_estimated_size *) const
//{
//    mangled_ppc("?estimate_final_resource_size_thunk@?$c_tag_group_vtable@Vc_sound_classes_group_vtable@@@@UBA_NJPAUs_tag_resource_estimated_size@@@Z");
//};

//public: virtual bool c_tag_group_vtable<class c_sound_classes_group_vtable>::has_valid_for_reload_stage_proc(void) const
//{
//    mangled_ppc("?has_valid_for_reload_stage_proc@?$c_tag_group_vtable@Vc_sound_classes_group_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_group_vtable<class c_sound_classes_group_vtable>::valid_for_reload_stage_thunk(enum e_tag_reload_stage) const
//{
//    mangled_ppc("?valid_for_reload_stage_thunk@?$c_tag_group_vtable@Vc_sound_classes_group_vtable@@@@UBA_NW4e_tag_reload_stage@@@Z");
//};

//public: static bool s_tag_vtable_has_postprocess_tag<class c_sound_classes_group_vtable>::call(long, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_postprocess_tag@Vc_sound_classes_group_vtable@@@@SA_NJ_N@Z");
//};

//public: static void s_tag_vtable_has_handle_missing_tag<class c_sound_classes_group_vtable>::call(unsigned long, char const *, unsigned long, unsigned long, char const *, long *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_handle_missing_tag@Vc_sound_classes_group_vtable@@@@SAXKPBDKK0PAJ@Z");
//};

//public: static void s_tag_vtable_has_on_save_tag<class c_sound_classes_group_vtable>::call(long)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_on_save_tag@Vc_sound_classes_group_vtable@@@@SAXJ@Z");
//};

//public: static void s_tag_vtable_has_write_tag_to_cache_file<class c_sound_classes_group_vtable>::call(long, unsigned long, class c_cache_file_scratch_allocator *, class c_cache_file_resource_library *, class c_cache_file_tracer *, void **, void **)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_write_tag_to_cache_file@Vc_sound_classes_group_vtable@@@@SAXJKPAVc_cache_file_scratch_allocator@@PAVc_cache_file_resource_library@@PAVc_cache_file_tracer@@PAPAX3@Z");
//};

//public: static struct s_tag_group_stream_list * s_tag_vtable_has_get_alternate_streams<class c_sound_classes_group_vtable>::call(void)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_get_alternate_streams@Vc_sound_classes_group_vtable@@@@SAPAUs_tag_group_stream_list@@XZ");
//};

//public: static bool s_tag_vtable_has_should_load_tag_stream<class c_sound_classes_group_vtable>::call(unsigned long, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_should_load_tag_stream@Vc_sound_classes_group_vtable@@@@SA_NK_N@Z");
//};

//public: static unsigned long s_tag_vtable_has_get_xsync_runtime_platforms<class c_sound_classes_group_vtable>::call(void)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_get_xsync_runtime_platforms@Vc_sound_classes_group_vtable@@@@SAKXZ");
//};

//public: static unsigned long s_tag_vtable_has_get_current_xsync_version<class c_sound_classes_group_vtable>::call(void)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_get_current_xsync_version@Vc_sound_classes_group_vtable@@@@SAKXZ");
//};

//public: static unsigned long s_tag_vtable_has_get_xsync_version_flags<class c_sound_classes_group_vtable>::call(unsigned long)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_get_xsync_version_flags@Vc_sound_classes_group_vtable@@@@SAKK@Z");
//};

//public: static bool s_tag_vtable_has_postprocess_tag_on_sync<class c_sound_classes_group_vtable>::call(long, enum e_runtime_platform_type, class c_cache_file_global_tag_registry *, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_postprocess_tag_on_sync@Vc_sound_classes_group_vtable@@@@SA_NJW4e_runtime_platform_type@@PAVc_cache_file_global_tag_registry@@_N@Z");
//};

//public: static void s_tag_vtable_has_generate_tag_report<class c_sound_classes_group_vtable>::call(long, class c_tag_group_reporter *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_generate_tag_report@Vc_sound_classes_group_vtable@@@@SAXJPAVc_tag_group_reporter@@@Z");
//};

//public: static void s_tag_vtable_has_build_predicted_tag_resources<class c_sound_classes_group_vtable>::call(long, class c_tag_resource_predictor *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_build_predicted_tag_resources@Vc_sound_classes_group_vtable@@@@SAXJPAVc_tag_resource_predictor@@@Z");
//};

//public: static void s_tag_vtable_has_collect_predicted_tag_resources<class c_sound_classes_group_vtable>::call(long, class c_tag_resource_prediction_collector *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_collect_predicted_tag_resources@Vc_sound_classes_group_vtable@@@@SAXJPAVc_tag_resource_prediction_collector@@@Z");
//};

//public: static bool s_tag_vtable_has_can_group_ever_load_in_game<class c_sound_classes_group_vtable>::call(void)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_can_group_ever_load_in_game@Vc_sound_classes_group_vtable@@@@SA_NXZ");
//};

//public: static void s_tag_vtable_has_optimize_tag_for_cache_file<class c_sound_classes_group_vtable>::call(long, enum e_runtime_platform_type, class c_cache_file_global_tag_registry *, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_optimize_tag_for_cache_file@Vc_sound_classes_group_vtable@@@@SAXJW4e_runtime_platform_type@@PAVc_cache_file_global_tag_registry@@_N@Z");
//};

//public: static unsigned long s_tag_vtable_has_on_edit_field<class c_sound_classes_group_vtable>::call(long, __int64, struct s_tag_field const *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_on_edit_field@Vc_sound_classes_group_vtable@@@@SAKJ_JPBUs_tag_field@@@Z");
//};

//public: static bool s_tag_vtable_has_estimate_final_resource_size<class c_sound_classes_group_vtable>::call(long, struct s_tag_resource_estimated_size *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_estimate_final_resource_size@Vc_sound_classes_group_vtable@@@@SA_NJPAUs_tag_resource_estimated_size@@@Z");
//};

//public: static bool s_tag_vtable_has_valid_for_reload_stage<class c_sound_classes_group_vtable>::call(enum e_tag_reload_stage)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_valid_for_reload_stage@Vc_sound_classes_group_vtable@@@@SA_NW4e_tag_reload_stage@@@Z");
//};

//public: c_tag_struct_vtable<class c_sound_classes_group_vtable>::c_tag_struct_vtable<class c_sound_classes_group_vtable>(void)
//{
//    mangled_ppc("??0?$c_tag_struct_vtable@Vc_sound_classes_group_vtable@@@@QAA@XZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_sound_classes_group_vtable>::has_byte_swap_proc(void) const
//{
//    mangled_ppc("?has_byte_swap_proc@?$c_tag_struct_vtable@Vc_sound_classes_group_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_struct_vtable<class c_sound_classes_group_vtable>::byte_swap_block_proc(void *) const
//{
//    mangled_ppc("?byte_swap_block_proc@?$c_tag_struct_vtable@Vc_sound_classes_group_vtable@@@@UBAXPAX@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_sound_classes_group_vtable>::has_postprocess_proc(void) const
//{
//    mangled_ppc("?has_postprocess_proc@?$c_tag_struct_vtable@Vc_sound_classes_group_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_sound_classes_group_vtable>::postprocess_thunk(long, void *, bool) const
//{
//    mangled_ppc("?postprocess_thunk@?$c_tag_struct_vtable@Vc_sound_classes_group_vtable@@@@UBA_NJPAX_N@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_sound_classes_group_vtable>::has_format_proc(void) const
//{
//    mangled_ppc("?has_format_proc@?$c_tag_struct_vtable@Vc_sound_classes_group_vtable@@@@UBA_NXZ");
//};

//public: virtual char * c_tag_struct_vtable<class c_sound_classes_group_vtable>::format_thunk(long, __int64, struct s_tag_block *, long, char *, long) const
//{
//    mangled_ppc("?format_thunk@?$c_tag_struct_vtable@Vc_sound_classes_group_vtable@@@@UBAPADJ_JPAUs_tag_block@@JPADJ@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_sound_classes_group_vtable>::has_on_delete_proc(void) const
//{
//    mangled_ppc("?has_on_delete_proc@?$c_tag_struct_vtable@Vc_sound_classes_group_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_struct_vtable<class c_sound_classes_group_vtable>::on_delete_thunk(void *) const
//{
//    mangled_ppc("?on_delete_thunk@?$c_tag_struct_vtable@Vc_sound_classes_group_vtable@@@@UBAXPAX@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_sound_classes_group_vtable>::has_on_new_proc(void) const
//{
//    mangled_ppc("?has_on_new_proc@?$c_tag_struct_vtable@Vc_sound_classes_group_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_sound_classes_group_vtable>::on_new_thunk(void *) const
//{
//    mangled_ppc("?on_new_thunk@?$c_tag_struct_vtable@Vc_sound_classes_group_vtable@@@@UBA_NPAX@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_sound_classes_group_vtable>::has_on_copy_proc(void) const
//{
//    mangled_ppc("?has_on_copy_proc@?$c_tag_struct_vtable@Vc_sound_classes_group_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_sound_classes_group_vtable>::on_copy_thunk(void const *, void *) const
//{
//    mangled_ppc("?on_copy_thunk@?$c_tag_struct_vtable@Vc_sound_classes_group_vtable@@@@UBA_NPBXPAX@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_sound_classes_group_vtable>::has_write_to_cache_file_proc(void) const
//{
//    mangled_ppc("?has_write_to_cache_file_proc@?$c_tag_struct_vtable@Vc_sound_classes_group_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_struct_vtable<class c_sound_classes_group_vtable>::write_to_cache_file_thunk(long, struct s_tag_block *, struct s_cache_file_builder_stream_context const *, void **, void **) const
//{
//    mangled_ppc("?write_to_cache_file_thunk@?$c_tag_struct_vtable@Vc_sound_classes_group_vtable@@@@UBAXJPAUs_tag_block@@PBUs_cache_file_builder_stream_context@@PAPAX2@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_sound_classes_group_vtable>::has_block_does_not_exist_in_cache_file_proc(void) const
//{
//    mangled_ppc("?has_block_does_not_exist_in_cache_file_proc@?$c_tag_struct_vtable@Vc_sound_classes_group_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_sound_classes_group_vtable>::block_does_not_exist_in_cache_file_thunk(void) const
//{
//    mangled_ppc("?block_does_not_exist_in_cache_file_thunk@?$c_tag_struct_vtable@Vc_sound_classes_group_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_sound_classes_group_vtable>::has_fixup_old_struct_definition(void) const
//{
//    mangled_ppc("?has_fixup_old_struct_definition@?$c_tag_struct_vtable@Vc_sound_classes_group_vtable@@@@UBA_NXZ");
//};

//public: virtual struct s_tag_struct_definition * c_tag_struct_vtable<class c_sound_classes_group_vtable>::get_fixup_source_definition_thunk(void) const
//{
//    mangled_ppc("?get_fixup_source_definition_thunk@?$c_tag_struct_vtable@Vc_sound_classes_group_vtable@@@@UBAPAUs_tag_struct_definition@@XZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_sound_classes_group_vtable>::has_fixup_old_struct_proc(void) const
//{
//    mangled_ppc("?has_fixup_old_struct_proc@?$c_tag_struct_vtable@Vc_sound_classes_group_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_sound_classes_group_vtable>::fixup_old_struct_thunk(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool) const
//{
//    mangled_ppc("?fixup_old_struct_thunk@?$c_tag_struct_vtable@Vc_sound_classes_group_vtable@@@@UBA_NAAV?$c_basic_buffer@X@@PBUs_tag_struct_definition@@01PAVc_tag_allocator@@_N@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_sound_classes_group_vtable>::has_fixup_old_struct_from_disk_proc(void) const
//{
//    mangled_ppc("?has_fixup_old_struct_from_disk_proc@?$c_tag_struct_vtable@Vc_sound_classes_group_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_sound_classes_group_vtable>::fixup_old_struct_from_disk_thunk(struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool) const
//{
//    mangled_ppc("?fixup_old_struct_from_disk_thunk@?$c_tag_struct_vtable@Vc_sound_classes_group_vtable@@@@UBA_NPBUs_tag_struct_definition@@AAV?$c_basic_buffer@X@@010PAVc_tag_allocator@@_N@Z");
//};

//public: static void s_tag_vtable_has_byte_swap_proc<class c_sound_classes_group_vtable>::call(void *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_byte_swap_proc@Vc_sound_classes_group_vtable@@@@SAXPAX@Z");
//};

//public: static bool s_tag_vtable_has_postprocess_proc<class c_sound_classes_group_vtable>::call(long, void *, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_postprocess_proc@Vc_sound_classes_group_vtable@@@@SA_NJPAX_N@Z");
//};

//public: static char * s_tag_vtable_has_format_proc<class c_sound_classes_group_vtable>::call(long, __int64, struct s_tag_block *, long, char *, long)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_format_proc@Vc_sound_classes_group_vtable@@@@SAPADJ_JPAUs_tag_block@@JPADJ@Z");
//};

//public: static void s_tag_vtable_has_on_delete_proc<class c_sound_classes_group_vtable>::call(void *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_on_delete_proc@Vc_sound_classes_group_vtable@@@@SAXPAX@Z");
//};

//public: static bool s_tag_vtable_has_on_new_proc<class c_sound_classes_group_vtable>::call(void *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_on_new_proc@Vc_sound_classes_group_vtable@@@@SA_NPAX@Z");
//};

//public: static bool s_tag_vtable_has_on_copy_proc<class c_sound_classes_group_vtable>::call(void const *, void *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_on_copy_proc@Vc_sound_classes_group_vtable@@@@SA_NPBXPAX@Z");
//};

//public: static void s_tag_vtable_has_write_to_cache_file_proc<class c_sound_classes_group_vtable>::call(long, struct s_tag_block *, struct s_cache_file_builder_stream_context const *, void **, void **)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_write_to_cache_file_proc@Vc_sound_classes_group_vtable@@@@SAXJPAUs_tag_block@@PBUs_cache_file_builder_stream_context@@PAPAX2@Z");
//};

//public: static bool s_tag_vtable_has_block_does_not_exist_in_cache_file<class c_sound_classes_group_vtable>::call(void)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_block_does_not_exist_in_cache_file@Vc_sound_classes_group_vtable@@@@SA_NXZ");
//};

//public: static struct s_tag_struct_definition * s_tag_vtable_has_get_fixup_source_definition_proc<class c_sound_classes_group_vtable>::call(void)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_get_fixup_source_definition_proc@Vc_sound_classes_group_vtable@@@@SAPAUs_tag_struct_definition@@XZ");
//};

//public: static bool s_tag_vtable_has_fixup_old_struct_proc<class c_sound_classes_group_vtable>::call(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_fixup_old_struct_proc@Vc_sound_classes_group_vtable@@@@SA_NAAV?$c_basic_buffer@X@@PBUs_tag_struct_definition@@01PAVc_tag_allocator@@_N@Z");
//};

//public: static bool s_tag_vtable_has_fixup_old_struct_from_disk_proc<class c_sound_classes_group_vtable>::call(struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_fixup_old_struct_from_disk_proc@Vc_sound_classes_group_vtable@@@@SA_NPBUs_tag_struct_definition@@AAV?$c_basic_buffer@X@@010PAVc_tag_allocator@@_N@Z");
//};

//public: c_enum<enum e_sound_class_stereo_playback_type, char, 0, 2, struct s_default_enum_string_resolver>::c_enum<enum e_sound_class_stereo_playback_type, char, 0, 2, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_sound_class_stereo_playback_type@@D$0A@$01Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: t_restricted_allocation_manager<2, 0, 0, void (__tls_set_g_sound_class_data_allocator::*)(void *)>::t_restricted_allocation_manager<2, 0, 0, void (__tls_set_g_sound_class_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$01$0A@$0A@$1?__tls_set_g_sound_class_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<2, 0, 0, void (__tls_set_g_sound_class_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$01$0A@$0A@$1?__tls_set_g_sound_class_data_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<2, 0, 0, void (__tls_set_g_sound_class_data_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$01$0A@$0A@$1?__tls_set_g_sound_class_data_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void t_restricted_allocation_manager<2, 0, 0, void (__tls_set_g_sound_class_data_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$01$0A@$0A@$1?__tls_set_g_sound_class_data_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: t_restricted_allocation_manager<2, 0, 0, void (__tls_set_g_sound_class_data_allocator::*)(void *)>::~t_restricted_allocation_manager<2, 0, 0, void (__tls_set_g_sound_class_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$01$0A@$0A@$1?__tls_set_g_sound_class_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//void g_sound_class_data_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_sound_class_data_allocator@@YAXXZ");
//};

