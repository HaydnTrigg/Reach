/* ---------- headers */

#include "omaha\scenario\scenario_lightmap_definitions.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// struct s_tag_group scenario_lightmap_bsp_data_group; // "?scenario_lightmap_bsp_data_group@@3Us_tag_group@@A"
// struct s_tag_block_definition scenario_wetness_bsp_data_block; // "?scenario_wetness_bsp_data_block@@3Us_tag_block_definition@@A"
// struct s_tag_group scenario_wetness_bsp_data_group; // "?scenario_wetness_bsp_data_group@@3Us_tag_group@@A"
// struct s_tag_group scenario_lightmap_group; // "?scenario_lightmap_group@@3Us_tag_group@@A"
// bool prune_scenario_lightmaps; // "?prune_scenario_lightmaps@@3_NA"
// struct s_tag_group_legacy_vtable legacy_scenario_wetness_bsp_data_vtable; // "?legacy_scenario_wetness_bsp_data_vtable@@3Us_tag_group_legacy_vtable@@A"
// struct s_tag_group_stream_definition legacy_scenario_wetness_bsp_data_stream_definition; // "?legacy_scenario_wetness_bsp_data_stream_definition@@3Us_tag_group_stream_definition@@A"
// struct s_tag_group_sync_definition legacy_scenario_wetness_bsp_data_xsync_declaration; // "?legacy_scenario_wetness_bsp_data_xsync_declaration@@3Us_tag_group_sync_definition@@A"
// class c_tag_group_vtable<class c_scenario_lightmap_bsp_data_vtable> scenario_lightmap_bsp_data_vtable; // "?scenario_lightmap_bsp_data_vtable@@3V?$c_tag_group_vtable@Vc_scenario_lightmap_bsp_data_vtable@@@@A"
// class c_tag_struct_vtable<class c_scenario_lightmap_bsp_data_vtable> scenario_lightmap_bsp_data_block_struct_struct_vtable; // "?scenario_lightmap_bsp_data_block_struct_struct_vtable@@3V?$c_tag_struct_vtable@Vc_scenario_lightmap_bsp_data_vtable@@@@A"
// class c_legacy_tag_group_vtable_shim legacy_scenario_wetness_bsp_data_vtable_shim; // "?legacy_scenario_wetness_bsp_data_vtable_shim@@3Vc_legacy_tag_group_vtable_shim@@A"
// class c_tag_group_vtable<class c_scenario_lightmap_definition_vtable> scenario_lightmap_vtable; // "?scenario_lightmap_vtable@@3V?$c_tag_group_vtable@Vc_scenario_lightmap_definition_vtable@@@@A"
// class c_tag_struct_vtable<class c_scenario_lightmap_definition_vtable> scenario_lightmap_block_struct_struct_vtable; // "?scenario_lightmap_block_struct_struct_vtable@@3V?$c_tag_struct_vtable@Vc_scenario_lightmap_definition_vtable@@@@A"

// bool postprocess_per_vertex_lightmap_data(long, struct s_scenario_lightmap_pervertex_data *, struct s_scenario_lightmap_pervertex_data_run_time *, class c_tag_geometry_editor *);
// bool postprocess_lightmap_bsp_data(long, void *, bool);
// bool process_lightmap_bsp_pervertex_data_for_xsync(long, struct s_scenario_lightmap_bsp_data *);
// public: static bool c_scenario_lightmap_definition_vtable::can_group_ever_load_in_game(void);
// public: static bool c_scenario_lightmap_bsp_data_vtable::can_group_ever_load_in_game(void);
// public: static unsigned long c_scenario_lightmap_definition_vtable::get_current_xsync_version(void);
// public: static unsigned long c_scenario_lightmap_bsp_data_vtable::get_current_xsync_version(void);
// public: static bool c_scenario_lightmap_definition_vtable::postprocess_tag_on_sync(long, enum e_runtime_platform_type, class c_cache_file_global_tag_registry *, bool);
// public: static bool c_scenario_lightmap_bsp_data_vtable::postprocess_tag_on_sync(long, enum e_runtime_platform_type, class c_cache_file_global_tag_registry *, bool);
// bool scenario_lightmap_reconstruct_fast_iteration_lightmaps_from_match_data(struct scenario const *, long);
// long scenario_lightmap_find_bsp_data_index(long, long, enum e_scenario_lightmap_bsp_type);
// struct s_scenario_lightmap_bsp_data * scenario_lightmap_find_bsp(long, long, enum e_scenario_lightmap_bsp_type);
// struct s_scenario_wetness_bsp_data * scenario_wetness_map_find_bsp(long, long);
// class c_rasterizer_vertex_buffer * scenario_lightmap_bsp_get_runtime_vertex_buffer(struct s_scenario_lightmap_bsp_data const *, long, long);
// public: struct s_scenario_lightmap_bsp_data * s_scenario_lightmap::get_lightmap_bsp(long);
// public: struct s_scenario_lightmap_bsp_data const * s_scenario_lightmap::get_lightmap_bsp(long) const;
// struct s_scenario_wetness_bsp_data const * scenario_wetness_bsp_data_get_by_index(long);
// struct s_scenario_lightmap_bsp_data const * scenario_bsp_lightmap_data_get_by_index(long, long);
// void inspect_lightmap_status(void);
// public: void s_scenario_wetness_bsp_data::clear(void);
// void fix_analytical_index(long *, struct s_scenario_lightmap_uber_light_index_mapping *);
// public: void s_scenario_lightmap_bsp_data::update_uber_light_index(struct s_scenario_lightmap_uber_light_index_mapping *);
// void inspect_lightmap_bsp_memory(long);
// void inspect_lightmap_memories(void);
// bool operator!=<unsigned short>(enum e_none_sentinel const &, unsigned short const &);
// bool operator==<unsigned short>(enum e_none_sentinel const &, unsigned short const &);
// public: c_tag_group_vtable<class c_scenario_lightmap_bsp_data_vtable>::c_tag_group_vtable<class c_scenario_lightmap_bsp_data_vtable>(void);
// public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_bsp_data_vtable>::has_custom_postprocess_proc(void) const;
// public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_bsp_data_vtable>::postprocess_tag_thunk(long, bool) const;
// public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_bsp_data_vtable>::has_custom_missing_tag_proc(void) const;
// public: virtual void c_tag_group_vtable<class c_scenario_lightmap_bsp_data_vtable>::handle_missing_tag_thunk(unsigned long, char const *, unsigned long, unsigned long, char const *, long *) const;
// public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_bsp_data_vtable>::has_on_save_tag_proc(void) const;
// public: virtual void c_tag_group_vtable<class c_scenario_lightmap_bsp_data_vtable>::on_save_tag_thunk(long) const;
// public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_bsp_data_vtable>::has_write_to_cache_file_proc(void) const;
// public: virtual void c_tag_group_vtable<class c_scenario_lightmap_bsp_data_vtable>::write_tag_to_cache_file_thunk(long, unsigned long, class c_cache_file_scratch_allocator *, class c_cache_file_resource_library *, class c_cache_file_tracer *, void **, void **) const;
// public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_bsp_data_vtable>::has_valid_alternate_streams(void) const;
// public: virtual struct s_tag_group_stream_list * c_tag_group_vtable<class c_scenario_lightmap_bsp_data_vtable>::get_alterante_streams_thunk(void) const;
// public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_bsp_data_vtable>::has_should_load_tag_stream_proc(void) const;
// public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_bsp_data_vtable>::should_load_tag_stream_thunk(unsigned long, bool) const;
// public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_bsp_data_vtable>::has_custom_xsync_runtime_platforms(void) const;
// public: virtual unsigned long c_tag_group_vtable<class c_scenario_lightmap_bsp_data_vtable>::get_xsync_runtime_platforms_thunk(void) const;
// public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_bsp_data_vtable>::has_get_current_xsync_version_proc(void) const;
// public: virtual unsigned long c_tag_group_vtable<class c_scenario_lightmap_bsp_data_vtable>::get_current_xsync_version_thunk(void) const;
// public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_bsp_data_vtable>::has_get_xsync_version_flags_proc(void) const;
// public: virtual unsigned long c_tag_group_vtable<class c_scenario_lightmap_bsp_data_vtable>::get_xsync_version_flags_thunk(unsigned long) const;
// public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_bsp_data_vtable>::has_postprocess_on_sync_proc(void) const;
// public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_bsp_data_vtable>::postprocess_on_sync_thunk(long, enum e_runtime_platform_type, class c_cache_file_global_tag_registry *, bool) const;
// public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_bsp_data_vtable>::has_generate_tag_report_proc(void) const;
// public: virtual void c_tag_group_vtable<class c_scenario_lightmap_bsp_data_vtable>::generate_tag_report_thunk(long, class c_tag_group_reporter *) const;
// public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_bsp_data_vtable>::has_build_tag_resource_prediction_proc(void) const;
// public: virtual void c_tag_group_vtable<class c_scenario_lightmap_bsp_data_vtable>::build_predicted_tag_resources_thunk(long, class c_tag_resource_predictor *) const;
// public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_bsp_data_vtable>::has_collect_tag_resource_prediction_proc(void) const;
// public: virtual void c_tag_group_vtable<class c_scenario_lightmap_bsp_data_vtable>::collect_predicted_tag_resources_thunk(long, class c_tag_resource_prediction_collector *) const;
// public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_bsp_data_vtable>::has_can_group_ever_load_in_game_proc(void) const;
// public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_bsp_data_vtable>::can_group_ever_load_in_game_thunk(void) const;
// public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_bsp_data_vtable>::has_optimize_for_cache_file_proc(void) const;
// public: virtual void c_tag_group_vtable<class c_scenario_lightmap_bsp_data_vtable>::optimize_for_cache_file_thunk(long, enum e_runtime_platform_type, class c_cache_file_global_tag_registry *, bool) const;
// public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_bsp_data_vtable>::has_on_edit_field_proc(void) const;
// public: virtual unsigned long c_tag_group_vtable<class c_scenario_lightmap_bsp_data_vtable>::on_edit_field_thunk(long, __int64, struct s_tag_field const *) const;
// public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_bsp_data_vtable>::has_estimate_final_resource_size_proc(void) const;
// public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_bsp_data_vtable>::estimate_final_resource_size_thunk(long, struct s_tag_resource_estimated_size *) const;
// public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_bsp_data_vtable>::has_valid_for_reload_stage_proc(void) const;
// public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_bsp_data_vtable>::valid_for_reload_stage_thunk(enum e_tag_reload_stage) const;
// public: static bool s_tag_vtable_has_postprocess_tag<class c_scenario_lightmap_bsp_data_vtable>::call(long, bool);
// public: static bool c_scenario_lightmap_bsp_data_vtable::postprocess_tag(long, bool);
// public: static void s_tag_vtable_has_handle_missing_tag<class c_scenario_lightmap_bsp_data_vtable>::call(unsigned long, char const *, unsigned long, unsigned long, char const *, long *);
// public: static void s_tag_vtable_has_on_save_tag<class c_scenario_lightmap_bsp_data_vtable>::call(long);
// public: static void s_tag_vtable_has_write_tag_to_cache_file<class c_scenario_lightmap_bsp_data_vtable>::call(long, unsigned long, class c_cache_file_scratch_allocator *, class c_cache_file_resource_library *, class c_cache_file_tracer *, void **, void **);
// public: static struct s_tag_group_stream_list * s_tag_vtable_has_get_alternate_streams<class c_scenario_lightmap_bsp_data_vtable>::call(void);
// public: static bool s_tag_vtable_has_should_load_tag_stream<class c_scenario_lightmap_bsp_data_vtable>::call(unsigned long, bool);
// public: static unsigned long s_tag_vtable_has_get_xsync_runtime_platforms<class c_scenario_lightmap_bsp_data_vtable>::call(void);
// public: static unsigned long s_tag_vtable_has_get_current_xsync_version<class c_scenario_lightmap_bsp_data_vtable>::call(void);
// public: static unsigned long s_tag_vtable_has_get_xsync_version_flags<class c_scenario_lightmap_bsp_data_vtable>::call(unsigned long);
// public: static bool s_tag_vtable_has_postprocess_tag_on_sync<class c_scenario_lightmap_bsp_data_vtable>::call(long, enum e_runtime_platform_type, class c_cache_file_global_tag_registry *, bool);
// public: static void s_tag_vtable_has_generate_tag_report<class c_scenario_lightmap_bsp_data_vtable>::call(long, class c_tag_group_reporter *);
// public: static void s_tag_vtable_has_build_predicted_tag_resources<class c_scenario_lightmap_bsp_data_vtable>::call(long, class c_tag_resource_predictor *);
// public: static void s_tag_vtable_has_collect_predicted_tag_resources<class c_scenario_lightmap_bsp_data_vtable>::call(long, class c_tag_resource_prediction_collector *);
// public: static bool s_tag_vtable_has_can_group_ever_load_in_game<class c_scenario_lightmap_bsp_data_vtable>::call(void);
// public: static void s_tag_vtable_has_optimize_tag_for_cache_file<class c_scenario_lightmap_bsp_data_vtable>::call(long, enum e_runtime_platform_type, class c_cache_file_global_tag_registry *, bool);
// public: static unsigned long s_tag_vtable_has_on_edit_field<class c_scenario_lightmap_bsp_data_vtable>::call(long, __int64, struct s_tag_field const *);
// public: static bool s_tag_vtable_has_estimate_final_resource_size<class c_scenario_lightmap_bsp_data_vtable>::call(long, struct s_tag_resource_estimated_size *);
// public: static bool s_tag_vtable_has_valid_for_reload_stage<class c_scenario_lightmap_bsp_data_vtable>::call(enum e_tag_reload_stage);
// public: static bool c_scenario_lightmap_bsp_data_vtable::valid_for_reload_stage(enum e_tag_reload_stage);
// public: c_tag_struct_vtable<class c_scenario_lightmap_bsp_data_vtable>::c_tag_struct_vtable<class c_scenario_lightmap_bsp_data_vtable>(void);
// public: virtual bool c_tag_struct_vtable<class c_scenario_lightmap_bsp_data_vtable>::has_byte_swap_proc(void) const;
// public: virtual void c_tag_struct_vtable<class c_scenario_lightmap_bsp_data_vtable>::byte_swap_block_proc(void *) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_lightmap_bsp_data_vtable>::has_postprocess_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_lightmap_bsp_data_vtable>::postprocess_thunk(long, void *, bool) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_lightmap_bsp_data_vtable>::has_format_proc(void) const;
// public: virtual char * c_tag_struct_vtable<class c_scenario_lightmap_bsp_data_vtable>::format_thunk(long, __int64, struct s_tag_block *, long, char *, long) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_lightmap_bsp_data_vtable>::has_on_delete_proc(void) const;
// public: virtual void c_tag_struct_vtable<class c_scenario_lightmap_bsp_data_vtable>::on_delete_thunk(void *) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_lightmap_bsp_data_vtable>::has_on_new_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_lightmap_bsp_data_vtable>::on_new_thunk(void *) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_lightmap_bsp_data_vtable>::has_on_copy_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_lightmap_bsp_data_vtable>::on_copy_thunk(void const *, void *) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_lightmap_bsp_data_vtable>::has_write_to_cache_file_proc(void) const;
// public: virtual void c_tag_struct_vtable<class c_scenario_lightmap_bsp_data_vtable>::write_to_cache_file_thunk(long, struct s_tag_block *, struct s_cache_file_builder_stream_context const *, void **, void **) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_lightmap_bsp_data_vtable>::has_block_does_not_exist_in_cache_file_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_lightmap_bsp_data_vtable>::block_does_not_exist_in_cache_file_thunk(void) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_lightmap_bsp_data_vtable>::has_fixup_old_struct_definition(void) const;
// public: virtual struct s_tag_struct_definition * c_tag_struct_vtable<class c_scenario_lightmap_bsp_data_vtable>::get_fixup_source_definition_thunk(void) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_lightmap_bsp_data_vtable>::has_fixup_old_struct_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_lightmap_bsp_data_vtable>::fixup_old_struct_thunk(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_lightmap_bsp_data_vtable>::has_fixup_old_struct_from_disk_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_lightmap_bsp_data_vtable>::fixup_old_struct_from_disk_thunk(struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool) const;
// public: static void s_tag_vtable_has_byte_swap_proc<class c_scenario_lightmap_bsp_data_vtable>::call(void *);
// public: static bool s_tag_vtable_has_postprocess_proc<class c_scenario_lightmap_bsp_data_vtable>::call(long, void *, bool);
// public: static char * s_tag_vtable_has_format_proc<class c_scenario_lightmap_bsp_data_vtable>::call(long, __int64, struct s_tag_block *, long, char *, long);
// public: static void s_tag_vtable_has_on_delete_proc<class c_scenario_lightmap_bsp_data_vtable>::call(void *);
// public: static bool s_tag_vtable_has_on_new_proc<class c_scenario_lightmap_bsp_data_vtable>::call(void *);
// public: static bool s_tag_vtable_has_on_copy_proc<class c_scenario_lightmap_bsp_data_vtable>::call(void const *, void *);
// public: static void s_tag_vtable_has_write_to_cache_file_proc<class c_scenario_lightmap_bsp_data_vtable>::call(long, struct s_tag_block *, struct s_cache_file_builder_stream_context const *, void **, void **);
// public: static bool s_tag_vtable_has_block_does_not_exist_in_cache_file<class c_scenario_lightmap_bsp_data_vtable>::call(void);
// public: static struct s_tag_struct_definition * s_tag_vtable_has_get_fixup_source_definition_proc<class c_scenario_lightmap_bsp_data_vtable>::call(void);
// public: static bool s_tag_vtable_has_fixup_old_struct_proc<class c_scenario_lightmap_bsp_data_vtable>::call(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool);
// public: static bool s_tag_vtable_has_fixup_old_struct_from_disk_proc<class c_scenario_lightmap_bsp_data_vtable>::call(struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool);
// public: c_tag_group_vtable<class c_scenario_lightmap_definition_vtable>::c_tag_group_vtable<class c_scenario_lightmap_definition_vtable>(void);
// public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_definition_vtable>::has_custom_postprocess_proc(void) const;
// public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_definition_vtable>::postprocess_tag_thunk(long, bool) const;
// public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_definition_vtable>::has_custom_missing_tag_proc(void) const;
// public: virtual void c_tag_group_vtable<class c_scenario_lightmap_definition_vtable>::handle_missing_tag_thunk(unsigned long, char const *, unsigned long, unsigned long, char const *, long *) const;
// public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_definition_vtable>::has_on_save_tag_proc(void) const;
// public: virtual void c_tag_group_vtable<class c_scenario_lightmap_definition_vtable>::on_save_tag_thunk(long) const;
// public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_definition_vtable>::has_write_to_cache_file_proc(void) const;
// public: virtual void c_tag_group_vtable<class c_scenario_lightmap_definition_vtable>::write_tag_to_cache_file_thunk(long, unsigned long, class c_cache_file_scratch_allocator *, class c_cache_file_resource_library *, class c_cache_file_tracer *, void **, void **) const;
// public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_definition_vtable>::has_valid_alternate_streams(void) const;
// public: virtual struct s_tag_group_stream_list * c_tag_group_vtable<class c_scenario_lightmap_definition_vtable>::get_alterante_streams_thunk(void) const;
// public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_definition_vtable>::has_should_load_tag_stream_proc(void) const;
// public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_definition_vtable>::should_load_tag_stream_thunk(unsigned long, bool) const;
// public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_definition_vtable>::has_custom_xsync_runtime_platforms(void) const;
// public: virtual unsigned long c_tag_group_vtable<class c_scenario_lightmap_definition_vtable>::get_xsync_runtime_platforms_thunk(void) const;
// public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_definition_vtable>::has_get_current_xsync_version_proc(void) const;
// public: virtual unsigned long c_tag_group_vtable<class c_scenario_lightmap_definition_vtable>::get_current_xsync_version_thunk(void) const;
// public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_definition_vtable>::has_get_xsync_version_flags_proc(void) const;
// public: virtual unsigned long c_tag_group_vtable<class c_scenario_lightmap_definition_vtable>::get_xsync_version_flags_thunk(unsigned long) const;
// public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_definition_vtable>::has_postprocess_on_sync_proc(void) const;
// public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_definition_vtable>::postprocess_on_sync_thunk(long, enum e_runtime_platform_type, class c_cache_file_global_tag_registry *, bool) const;
// public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_definition_vtable>::has_generate_tag_report_proc(void) const;
// public: virtual void c_tag_group_vtable<class c_scenario_lightmap_definition_vtable>::generate_tag_report_thunk(long, class c_tag_group_reporter *) const;
// public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_definition_vtable>::has_build_tag_resource_prediction_proc(void) const;
// public: virtual void c_tag_group_vtable<class c_scenario_lightmap_definition_vtable>::build_predicted_tag_resources_thunk(long, class c_tag_resource_predictor *) const;
// public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_definition_vtable>::has_collect_tag_resource_prediction_proc(void) const;
// public: virtual void c_tag_group_vtable<class c_scenario_lightmap_definition_vtable>::collect_predicted_tag_resources_thunk(long, class c_tag_resource_prediction_collector *) const;
// public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_definition_vtable>::has_can_group_ever_load_in_game_proc(void) const;
// public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_definition_vtable>::can_group_ever_load_in_game_thunk(void) const;
// public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_definition_vtable>::has_optimize_for_cache_file_proc(void) const;
// public: virtual void c_tag_group_vtable<class c_scenario_lightmap_definition_vtable>::optimize_for_cache_file_thunk(long, enum e_runtime_platform_type, class c_cache_file_global_tag_registry *, bool) const;
// public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_definition_vtable>::has_on_edit_field_proc(void) const;
// public: virtual unsigned long c_tag_group_vtable<class c_scenario_lightmap_definition_vtable>::on_edit_field_thunk(long, __int64, struct s_tag_field const *) const;
// public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_definition_vtable>::has_estimate_final_resource_size_proc(void) const;
// public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_definition_vtable>::estimate_final_resource_size_thunk(long, struct s_tag_resource_estimated_size *) const;
// public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_definition_vtable>::has_valid_for_reload_stage_proc(void) const;
// public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_definition_vtable>::valid_for_reload_stage_thunk(enum e_tag_reload_stage) const;
// public: static bool s_tag_vtable_has_postprocess_tag<class c_scenario_lightmap_definition_vtable>::call(long, bool);
// public: static bool c_scenario_lightmap_definition_vtable::postprocess_tag(long, bool);
// public: static void s_tag_vtable_has_handle_missing_tag<class c_scenario_lightmap_definition_vtable>::call(unsigned long, char const *, unsigned long, unsigned long, char const *, long *);
// public: static void s_tag_vtable_has_on_save_tag<class c_scenario_lightmap_definition_vtable>::call(long);
// public: static void s_tag_vtable_has_write_tag_to_cache_file<class c_scenario_lightmap_definition_vtable>::call(long, unsigned long, class c_cache_file_scratch_allocator *, class c_cache_file_resource_library *, class c_cache_file_tracer *, void **, void **);
// public: static struct s_tag_group_stream_list * s_tag_vtable_has_get_alternate_streams<class c_scenario_lightmap_definition_vtable>::call(void);
// public: static bool s_tag_vtable_has_should_load_tag_stream<class c_scenario_lightmap_definition_vtable>::call(unsigned long, bool);
// public: static unsigned long s_tag_vtable_has_get_xsync_runtime_platforms<class c_scenario_lightmap_definition_vtable>::call(void);
// public: static unsigned long s_tag_vtable_has_get_current_xsync_version<class c_scenario_lightmap_definition_vtable>::call(void);
// public: static unsigned long s_tag_vtable_has_get_xsync_version_flags<class c_scenario_lightmap_definition_vtable>::call(unsigned long);
// public: static bool s_tag_vtable_has_postprocess_tag_on_sync<class c_scenario_lightmap_definition_vtable>::call(long, enum e_runtime_platform_type, class c_cache_file_global_tag_registry *, bool);
// public: static void s_tag_vtable_has_generate_tag_report<class c_scenario_lightmap_definition_vtable>::call(long, class c_tag_group_reporter *);
// public: static void s_tag_vtable_has_build_predicted_tag_resources<class c_scenario_lightmap_definition_vtable>::call(long, class c_tag_resource_predictor *);
// public: static void s_tag_vtable_has_collect_predicted_tag_resources<class c_scenario_lightmap_definition_vtable>::call(long, class c_tag_resource_prediction_collector *);
// public: static bool s_tag_vtable_has_can_group_ever_load_in_game<class c_scenario_lightmap_definition_vtable>::call(void);
// public: static void s_tag_vtable_has_optimize_tag_for_cache_file<class c_scenario_lightmap_definition_vtable>::call(long, enum e_runtime_platform_type, class c_cache_file_global_tag_registry *, bool);
// public: static unsigned long s_tag_vtable_has_on_edit_field<class c_scenario_lightmap_definition_vtable>::call(long, __int64, struct s_tag_field const *);
// public: static bool s_tag_vtable_has_estimate_final_resource_size<class c_scenario_lightmap_definition_vtable>::call(long, struct s_tag_resource_estimated_size *);
// public: static bool s_tag_vtable_has_valid_for_reload_stage<class c_scenario_lightmap_definition_vtable>::call(enum e_tag_reload_stage);
// public: static bool c_scenario_lightmap_definition_vtable::valid_for_reload_stage(enum e_tag_reload_stage);
// public: c_tag_struct_vtable<class c_scenario_lightmap_definition_vtable>::c_tag_struct_vtable<class c_scenario_lightmap_definition_vtable>(void);
// public: virtual bool c_tag_struct_vtable<class c_scenario_lightmap_definition_vtable>::has_byte_swap_proc(void) const;
// public: virtual void c_tag_struct_vtable<class c_scenario_lightmap_definition_vtable>::byte_swap_block_proc(void *) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_lightmap_definition_vtable>::has_postprocess_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_lightmap_definition_vtable>::postprocess_thunk(long, void *, bool) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_lightmap_definition_vtable>::has_format_proc(void) const;
// public: virtual char * c_tag_struct_vtable<class c_scenario_lightmap_definition_vtable>::format_thunk(long, __int64, struct s_tag_block *, long, char *, long) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_lightmap_definition_vtable>::has_on_delete_proc(void) const;
// public: virtual void c_tag_struct_vtable<class c_scenario_lightmap_definition_vtable>::on_delete_thunk(void *) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_lightmap_definition_vtable>::has_on_new_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_lightmap_definition_vtable>::on_new_thunk(void *) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_lightmap_definition_vtable>::has_on_copy_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_lightmap_definition_vtable>::on_copy_thunk(void const *, void *) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_lightmap_definition_vtable>::has_write_to_cache_file_proc(void) const;
// public: virtual void c_tag_struct_vtable<class c_scenario_lightmap_definition_vtable>::write_to_cache_file_thunk(long, struct s_tag_block *, struct s_cache_file_builder_stream_context const *, void **, void **) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_lightmap_definition_vtable>::has_block_does_not_exist_in_cache_file_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_lightmap_definition_vtable>::block_does_not_exist_in_cache_file_thunk(void) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_lightmap_definition_vtable>::has_fixup_old_struct_definition(void) const;
// public: virtual struct s_tag_struct_definition * c_tag_struct_vtable<class c_scenario_lightmap_definition_vtable>::get_fixup_source_definition_thunk(void) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_lightmap_definition_vtable>::has_fixup_old_struct_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_lightmap_definition_vtable>::fixup_old_struct_thunk(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_lightmap_definition_vtable>::has_fixup_old_struct_from_disk_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_lightmap_definition_vtable>::fixup_old_struct_from_disk_thunk(struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool) const;
// public: static void s_tag_vtable_has_byte_swap_proc<class c_scenario_lightmap_definition_vtable>::call(void *);
// public: static bool s_tag_vtable_has_postprocess_proc<class c_scenario_lightmap_definition_vtable>::call(long, void *, bool);
// public: static char * s_tag_vtable_has_format_proc<class c_scenario_lightmap_definition_vtable>::call(long, __int64, struct s_tag_block *, long, char *, long);
// public: static void s_tag_vtable_has_on_delete_proc<class c_scenario_lightmap_definition_vtable>::call(void *);
// public: static bool s_tag_vtable_has_on_new_proc<class c_scenario_lightmap_definition_vtable>::call(void *);
// public: static bool s_tag_vtable_has_on_copy_proc<class c_scenario_lightmap_definition_vtable>::call(void const *, void *);
// public: static void s_tag_vtable_has_write_to_cache_file_proc<class c_scenario_lightmap_definition_vtable>::call(long, struct s_tag_block *, struct s_cache_file_builder_stream_context const *, void **, void **);
// public: static bool s_tag_vtable_has_block_does_not_exist_in_cache_file<class c_scenario_lightmap_definition_vtable>::call(void);
// public: static struct s_tag_struct_definition * s_tag_vtable_has_get_fixup_source_definition_proc<class c_scenario_lightmap_definition_vtable>::call(void);
// public: static bool s_tag_vtable_has_fixup_old_struct_proc<class c_scenario_lightmap_definition_vtable>::call(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool);
// public: static bool s_tag_vtable_has_fixup_old_struct_from_disk_proc<class c_scenario_lightmap_definition_vtable>::call(struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool);

//bool postprocess_per_vertex_lightmap_data(long, struct s_scenario_lightmap_pervertex_data *, struct s_scenario_lightmap_pervertex_data_run_time *, class c_tag_geometry_editor *)
//{
//    mangled_ppc("?postprocess_per_vertex_lightmap_data@@YA_NJPAUs_scenario_lightmap_pervertex_data@@PAUs_scenario_lightmap_pervertex_data_run_time@@PAVc_tag_geometry_editor@@@Z");
//};

//bool postprocess_lightmap_bsp_data(long, void *, bool)
//{
//    mangled_ppc("?postprocess_lightmap_bsp_data@@YA_NJPAX_N@Z");
//};

//bool process_lightmap_bsp_pervertex_data_for_xsync(long, struct s_scenario_lightmap_bsp_data *)
//{
//    mangled_ppc("?process_lightmap_bsp_pervertex_data_for_xsync@@YA_NJPAUs_scenario_lightmap_bsp_data@@@Z");
//};

//public: static bool c_scenario_lightmap_definition_vtable::can_group_ever_load_in_game(void)
//{
//    mangled_ppc("?can_group_ever_load_in_game@c_scenario_lightmap_definition_vtable@@SA_NXZ");
//};

//public: static bool c_scenario_lightmap_bsp_data_vtable::can_group_ever_load_in_game(void)
//{
//    mangled_ppc("?can_group_ever_load_in_game@c_scenario_lightmap_bsp_data_vtable@@SA_NXZ");
//};

//public: static unsigned long c_scenario_lightmap_definition_vtable::get_current_xsync_version(void)
//{
//    mangled_ppc("?get_current_xsync_version@c_scenario_lightmap_definition_vtable@@SAKXZ");
//};

//public: static unsigned long c_scenario_lightmap_bsp_data_vtable::get_current_xsync_version(void)
//{
//    mangled_ppc("?get_current_xsync_version@c_scenario_lightmap_bsp_data_vtable@@SAKXZ");
//};

//public: static bool c_scenario_lightmap_definition_vtable::postprocess_tag_on_sync(long, enum e_runtime_platform_type, class c_cache_file_global_tag_registry *, bool)
//{
//    mangled_ppc("?postprocess_tag_on_sync@c_scenario_lightmap_definition_vtable@@SA_NJW4e_runtime_platform_type@@PAVc_cache_file_global_tag_registry@@_N@Z");
//};

//public: static bool c_scenario_lightmap_bsp_data_vtable::postprocess_tag_on_sync(long, enum e_runtime_platform_type, class c_cache_file_global_tag_registry *, bool)
//{
//    mangled_ppc("?postprocess_tag_on_sync@c_scenario_lightmap_bsp_data_vtable@@SA_NJW4e_runtime_platform_type@@PAVc_cache_file_global_tag_registry@@_N@Z");
//};

//bool scenario_lightmap_reconstruct_fast_iteration_lightmaps_from_match_data(struct scenario const *, long)
//{
//    mangled_ppc("?scenario_lightmap_reconstruct_fast_iteration_lightmaps_from_match_data@@YA_NPBUscenario@@J@Z");
//};

//long scenario_lightmap_find_bsp_data_index(long, long, enum e_scenario_lightmap_bsp_type)
//{
//    mangled_ppc("?scenario_lightmap_find_bsp_data_index@@YAJJJW4e_scenario_lightmap_bsp_type@@@Z");
//};

//struct s_scenario_lightmap_bsp_data * scenario_lightmap_find_bsp(long, long, enum e_scenario_lightmap_bsp_type)
//{
//    mangled_ppc("?scenario_lightmap_find_bsp@@YAPAUs_scenario_lightmap_bsp_data@@JJW4e_scenario_lightmap_bsp_type@@@Z");
//};

//struct s_scenario_wetness_bsp_data * scenario_wetness_map_find_bsp(long, long)
//{
//    mangled_ppc("?scenario_wetness_map_find_bsp@@YAPAUs_scenario_wetness_bsp_data@@JJ@Z");
//};

//class c_rasterizer_vertex_buffer * scenario_lightmap_bsp_get_runtime_vertex_buffer(struct s_scenario_lightmap_bsp_data const *, long, long)
//{
//    mangled_ppc("?scenario_lightmap_bsp_get_runtime_vertex_buffer@@YAPAVc_rasterizer_vertex_buffer@@PBUs_scenario_lightmap_bsp_data@@JJ@Z");
//};

//public: struct s_scenario_lightmap_bsp_data * s_scenario_lightmap::get_lightmap_bsp(long)
//{
//    mangled_ppc("?get_lightmap_bsp@s_scenario_lightmap@@QAAPAUs_scenario_lightmap_bsp_data@@J@Z");
//};

//public: struct s_scenario_lightmap_bsp_data const * s_scenario_lightmap::get_lightmap_bsp(long) const
//{
//    mangled_ppc("?get_lightmap_bsp@s_scenario_lightmap@@QBAPBUs_scenario_lightmap_bsp_data@@J@Z");
//};

//struct s_scenario_wetness_bsp_data const * scenario_wetness_bsp_data_get_by_index(long)
//{
//    mangled_ppc("?scenario_wetness_bsp_data_get_by_index@@YAPBUs_scenario_wetness_bsp_data@@J@Z");
//};

//struct s_scenario_lightmap_bsp_data const * scenario_bsp_lightmap_data_get_by_index(long, long)
//{
//    mangled_ppc("?scenario_bsp_lightmap_data_get_by_index@@YAPBUs_scenario_lightmap_bsp_data@@JJ@Z");
//};

//void inspect_lightmap_status(void)
//{
//    mangled_ppc("?inspect_lightmap_status@@YAXXZ");
//};

//public: void s_scenario_wetness_bsp_data::clear(void)
//{
//    mangled_ppc("?clear@s_scenario_wetness_bsp_data@@QAAXXZ");
//};

//void fix_analytical_index(long *, struct s_scenario_lightmap_uber_light_index_mapping *)
//{
//    mangled_ppc("?fix_analytical_index@@YAXPAJPAUs_scenario_lightmap_uber_light_index_mapping@@@Z");
//};

//public: void s_scenario_lightmap_bsp_data::update_uber_light_index(struct s_scenario_lightmap_uber_light_index_mapping *)
//{
//    mangled_ppc("?update_uber_light_index@s_scenario_lightmap_bsp_data@@QAAXPAUs_scenario_lightmap_uber_light_index_mapping@@@Z");
//};

//void inspect_lightmap_bsp_memory(long)
//{
//    mangled_ppc("?inspect_lightmap_bsp_memory@@YAXJ@Z");
//};

//void inspect_lightmap_memories(void)
//{
//    mangled_ppc("?inspect_lightmap_memories@@YAXXZ");
//};

//bool operator!=<unsigned short>(enum e_none_sentinel const &, unsigned short const &)
//{
//    mangled_ppc("??$?9G@@YA_NABW4e_none_sentinel@@ABG@Z");
//};

//bool operator==<unsigned short>(enum e_none_sentinel const &, unsigned short const &)
//{
//    mangled_ppc("??$?8G@@YA_NABW4e_none_sentinel@@ABG@Z");
//};

//public: c_tag_group_vtable<class c_scenario_lightmap_bsp_data_vtable>::c_tag_group_vtable<class c_scenario_lightmap_bsp_data_vtable>(void)
//{
//    mangled_ppc("??0?$c_tag_group_vtable@Vc_scenario_lightmap_bsp_data_vtable@@@@QAA@XZ");
//};

//public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_bsp_data_vtable>::has_custom_postprocess_proc(void) const
//{
//    mangled_ppc("?has_custom_postprocess_proc@?$c_tag_group_vtable@Vc_scenario_lightmap_bsp_data_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_bsp_data_vtable>::postprocess_tag_thunk(long, bool) const
//{
//    mangled_ppc("?postprocess_tag_thunk@?$c_tag_group_vtable@Vc_scenario_lightmap_bsp_data_vtable@@@@UBA_NJ_N@Z");
//};

//public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_bsp_data_vtable>::has_custom_missing_tag_proc(void) const
//{
//    mangled_ppc("?has_custom_missing_tag_proc@?$c_tag_group_vtable@Vc_scenario_lightmap_bsp_data_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_group_vtable<class c_scenario_lightmap_bsp_data_vtable>::handle_missing_tag_thunk(unsigned long, char const *, unsigned long, unsigned long, char const *, long *) const
//{
//    mangled_ppc("?handle_missing_tag_thunk@?$c_tag_group_vtable@Vc_scenario_lightmap_bsp_data_vtable@@@@UBAXKPBDKK0PAJ@Z");
//};

//public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_bsp_data_vtable>::has_on_save_tag_proc(void) const
//{
//    mangled_ppc("?has_on_save_tag_proc@?$c_tag_group_vtable@Vc_scenario_lightmap_bsp_data_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_group_vtable<class c_scenario_lightmap_bsp_data_vtable>::on_save_tag_thunk(long) const
//{
//    mangled_ppc("?on_save_tag_thunk@?$c_tag_group_vtable@Vc_scenario_lightmap_bsp_data_vtable@@@@UBAXJ@Z");
//};

//public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_bsp_data_vtable>::has_write_to_cache_file_proc(void) const
//{
//    mangled_ppc("?has_write_to_cache_file_proc@?$c_tag_group_vtable@Vc_scenario_lightmap_bsp_data_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_group_vtable<class c_scenario_lightmap_bsp_data_vtable>::write_tag_to_cache_file_thunk(long, unsigned long, class c_cache_file_scratch_allocator *, class c_cache_file_resource_library *, class c_cache_file_tracer *, void **, void **) const
//{
//    mangled_ppc("?write_tag_to_cache_file_thunk@?$c_tag_group_vtable@Vc_scenario_lightmap_bsp_data_vtable@@@@UBAXJKPAVc_cache_file_scratch_allocator@@PAVc_cache_file_resource_library@@PAVc_cache_file_tracer@@PAPAX3@Z");
//};

//public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_bsp_data_vtable>::has_valid_alternate_streams(void) const
//{
//    mangled_ppc("?has_valid_alternate_streams@?$c_tag_group_vtable@Vc_scenario_lightmap_bsp_data_vtable@@@@UBA_NXZ");
//};

//public: virtual struct s_tag_group_stream_list * c_tag_group_vtable<class c_scenario_lightmap_bsp_data_vtable>::get_alterante_streams_thunk(void) const
//{
//    mangled_ppc("?get_alterante_streams_thunk@?$c_tag_group_vtable@Vc_scenario_lightmap_bsp_data_vtable@@@@UBAPAUs_tag_group_stream_list@@XZ");
//};

//public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_bsp_data_vtable>::has_should_load_tag_stream_proc(void) const
//{
//    mangled_ppc("?has_should_load_tag_stream_proc@?$c_tag_group_vtable@Vc_scenario_lightmap_bsp_data_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_bsp_data_vtable>::should_load_tag_stream_thunk(unsigned long, bool) const
//{
//    mangled_ppc("?should_load_tag_stream_thunk@?$c_tag_group_vtable@Vc_scenario_lightmap_bsp_data_vtable@@@@UBA_NK_N@Z");
//};

//public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_bsp_data_vtable>::has_custom_xsync_runtime_platforms(void) const
//{
//    mangled_ppc("?has_custom_xsync_runtime_platforms@?$c_tag_group_vtable@Vc_scenario_lightmap_bsp_data_vtable@@@@UBA_NXZ");
//};

//public: virtual unsigned long c_tag_group_vtable<class c_scenario_lightmap_bsp_data_vtable>::get_xsync_runtime_platforms_thunk(void) const
//{
//    mangled_ppc("?get_xsync_runtime_platforms_thunk@?$c_tag_group_vtable@Vc_scenario_lightmap_bsp_data_vtable@@@@UBAKXZ");
//};

//public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_bsp_data_vtable>::has_get_current_xsync_version_proc(void) const
//{
//    mangled_ppc("?has_get_current_xsync_version_proc@?$c_tag_group_vtable@Vc_scenario_lightmap_bsp_data_vtable@@@@UBA_NXZ");
//};

//public: virtual unsigned long c_tag_group_vtable<class c_scenario_lightmap_bsp_data_vtable>::get_current_xsync_version_thunk(void) const
//{
//    mangled_ppc("?get_current_xsync_version_thunk@?$c_tag_group_vtable@Vc_scenario_lightmap_bsp_data_vtable@@@@UBAKXZ");
//};

//public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_bsp_data_vtable>::has_get_xsync_version_flags_proc(void) const
//{
//    mangled_ppc("?has_get_xsync_version_flags_proc@?$c_tag_group_vtable@Vc_scenario_lightmap_bsp_data_vtable@@@@UBA_NXZ");
//};

//public: virtual unsigned long c_tag_group_vtable<class c_scenario_lightmap_bsp_data_vtable>::get_xsync_version_flags_thunk(unsigned long) const
//{
//    mangled_ppc("?get_xsync_version_flags_thunk@?$c_tag_group_vtable@Vc_scenario_lightmap_bsp_data_vtable@@@@UBAKK@Z");
//};

//public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_bsp_data_vtable>::has_postprocess_on_sync_proc(void) const
//{
//    mangled_ppc("?has_postprocess_on_sync_proc@?$c_tag_group_vtable@Vc_scenario_lightmap_bsp_data_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_bsp_data_vtable>::postprocess_on_sync_thunk(long, enum e_runtime_platform_type, class c_cache_file_global_tag_registry *, bool) const
//{
//    mangled_ppc("?postprocess_on_sync_thunk@?$c_tag_group_vtable@Vc_scenario_lightmap_bsp_data_vtable@@@@UBA_NJW4e_runtime_platform_type@@PAVc_cache_file_global_tag_registry@@_N@Z");
//};

//public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_bsp_data_vtable>::has_generate_tag_report_proc(void) const
//{
//    mangled_ppc("?has_generate_tag_report_proc@?$c_tag_group_vtable@Vc_scenario_lightmap_bsp_data_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_group_vtable<class c_scenario_lightmap_bsp_data_vtable>::generate_tag_report_thunk(long, class c_tag_group_reporter *) const
//{
//    mangled_ppc("?generate_tag_report_thunk@?$c_tag_group_vtable@Vc_scenario_lightmap_bsp_data_vtable@@@@UBAXJPAVc_tag_group_reporter@@@Z");
//};

//public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_bsp_data_vtable>::has_build_tag_resource_prediction_proc(void) const
//{
//    mangled_ppc("?has_build_tag_resource_prediction_proc@?$c_tag_group_vtable@Vc_scenario_lightmap_bsp_data_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_group_vtable<class c_scenario_lightmap_bsp_data_vtable>::build_predicted_tag_resources_thunk(long, class c_tag_resource_predictor *) const
//{
//    mangled_ppc("?build_predicted_tag_resources_thunk@?$c_tag_group_vtable@Vc_scenario_lightmap_bsp_data_vtable@@@@UBAXJPAVc_tag_resource_predictor@@@Z");
//};

//public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_bsp_data_vtable>::has_collect_tag_resource_prediction_proc(void) const
//{
//    mangled_ppc("?has_collect_tag_resource_prediction_proc@?$c_tag_group_vtable@Vc_scenario_lightmap_bsp_data_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_group_vtable<class c_scenario_lightmap_bsp_data_vtable>::collect_predicted_tag_resources_thunk(long, class c_tag_resource_prediction_collector *) const
//{
//    mangled_ppc("?collect_predicted_tag_resources_thunk@?$c_tag_group_vtable@Vc_scenario_lightmap_bsp_data_vtable@@@@UBAXJPAVc_tag_resource_prediction_collector@@@Z");
//};

//public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_bsp_data_vtable>::has_can_group_ever_load_in_game_proc(void) const
//{
//    mangled_ppc("?has_can_group_ever_load_in_game_proc@?$c_tag_group_vtable@Vc_scenario_lightmap_bsp_data_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_bsp_data_vtable>::can_group_ever_load_in_game_thunk(void) const
//{
//    mangled_ppc("?can_group_ever_load_in_game_thunk@?$c_tag_group_vtable@Vc_scenario_lightmap_bsp_data_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_bsp_data_vtable>::has_optimize_for_cache_file_proc(void) const
//{
//    mangled_ppc("?has_optimize_for_cache_file_proc@?$c_tag_group_vtable@Vc_scenario_lightmap_bsp_data_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_group_vtable<class c_scenario_lightmap_bsp_data_vtable>::optimize_for_cache_file_thunk(long, enum e_runtime_platform_type, class c_cache_file_global_tag_registry *, bool) const
//{
//    mangled_ppc("?optimize_for_cache_file_thunk@?$c_tag_group_vtable@Vc_scenario_lightmap_bsp_data_vtable@@@@UBAXJW4e_runtime_platform_type@@PAVc_cache_file_global_tag_registry@@_N@Z");
//};

//public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_bsp_data_vtable>::has_on_edit_field_proc(void) const
//{
//    mangled_ppc("?has_on_edit_field_proc@?$c_tag_group_vtable@Vc_scenario_lightmap_bsp_data_vtable@@@@UBA_NXZ");
//};

//public: virtual unsigned long c_tag_group_vtable<class c_scenario_lightmap_bsp_data_vtable>::on_edit_field_thunk(long, __int64, struct s_tag_field const *) const
//{
//    mangled_ppc("?on_edit_field_thunk@?$c_tag_group_vtable@Vc_scenario_lightmap_bsp_data_vtable@@@@UBAKJ_JPBUs_tag_field@@@Z");
//};

//public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_bsp_data_vtable>::has_estimate_final_resource_size_proc(void) const
//{
//    mangled_ppc("?has_estimate_final_resource_size_proc@?$c_tag_group_vtable@Vc_scenario_lightmap_bsp_data_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_bsp_data_vtable>::estimate_final_resource_size_thunk(long, struct s_tag_resource_estimated_size *) const
//{
//    mangled_ppc("?estimate_final_resource_size_thunk@?$c_tag_group_vtable@Vc_scenario_lightmap_bsp_data_vtable@@@@UBA_NJPAUs_tag_resource_estimated_size@@@Z");
//};

//public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_bsp_data_vtable>::has_valid_for_reload_stage_proc(void) const
//{
//    mangled_ppc("?has_valid_for_reload_stage_proc@?$c_tag_group_vtable@Vc_scenario_lightmap_bsp_data_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_bsp_data_vtable>::valid_for_reload_stage_thunk(enum e_tag_reload_stage) const
//{
//    mangled_ppc("?valid_for_reload_stage_thunk@?$c_tag_group_vtable@Vc_scenario_lightmap_bsp_data_vtable@@@@UBA_NW4e_tag_reload_stage@@@Z");
//};

//public: static bool s_tag_vtable_has_postprocess_tag<class c_scenario_lightmap_bsp_data_vtable>::call(long, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_postprocess_tag@Vc_scenario_lightmap_bsp_data_vtable@@@@SA_NJ_N@Z");
//};

//public: static bool c_scenario_lightmap_bsp_data_vtable::postprocess_tag(long, bool)
//{
//    mangled_ppc("?postprocess_tag@c_scenario_lightmap_bsp_data_vtable@@SA_NJ_N@Z");
//};

//public: static void s_tag_vtable_has_handle_missing_tag<class c_scenario_lightmap_bsp_data_vtable>::call(unsigned long, char const *, unsigned long, unsigned long, char const *, long *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_handle_missing_tag@Vc_scenario_lightmap_bsp_data_vtable@@@@SAXKPBDKK0PAJ@Z");
//};

//public: static void s_tag_vtable_has_on_save_tag<class c_scenario_lightmap_bsp_data_vtable>::call(long)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_on_save_tag@Vc_scenario_lightmap_bsp_data_vtable@@@@SAXJ@Z");
//};

//public: static void s_tag_vtable_has_write_tag_to_cache_file<class c_scenario_lightmap_bsp_data_vtable>::call(long, unsigned long, class c_cache_file_scratch_allocator *, class c_cache_file_resource_library *, class c_cache_file_tracer *, void **, void **)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_write_tag_to_cache_file@Vc_scenario_lightmap_bsp_data_vtable@@@@SAXJKPAVc_cache_file_scratch_allocator@@PAVc_cache_file_resource_library@@PAVc_cache_file_tracer@@PAPAX3@Z");
//};

//public: static struct s_tag_group_stream_list * s_tag_vtable_has_get_alternate_streams<class c_scenario_lightmap_bsp_data_vtable>::call(void)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_get_alternate_streams@Vc_scenario_lightmap_bsp_data_vtable@@@@SAPAUs_tag_group_stream_list@@XZ");
//};

//public: static bool s_tag_vtable_has_should_load_tag_stream<class c_scenario_lightmap_bsp_data_vtable>::call(unsigned long, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_should_load_tag_stream@Vc_scenario_lightmap_bsp_data_vtable@@@@SA_NK_N@Z");
//};

//public: static unsigned long s_tag_vtable_has_get_xsync_runtime_platforms<class c_scenario_lightmap_bsp_data_vtable>::call(void)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_get_xsync_runtime_platforms@Vc_scenario_lightmap_bsp_data_vtable@@@@SAKXZ");
//};

//public: static unsigned long s_tag_vtable_has_get_current_xsync_version<class c_scenario_lightmap_bsp_data_vtable>::call(void)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_get_current_xsync_version@Vc_scenario_lightmap_bsp_data_vtable@@@@SAKXZ");
//};

//public: static unsigned long s_tag_vtable_has_get_xsync_version_flags<class c_scenario_lightmap_bsp_data_vtable>::call(unsigned long)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_get_xsync_version_flags@Vc_scenario_lightmap_bsp_data_vtable@@@@SAKK@Z");
//};

//public: static bool s_tag_vtable_has_postprocess_tag_on_sync<class c_scenario_lightmap_bsp_data_vtable>::call(long, enum e_runtime_platform_type, class c_cache_file_global_tag_registry *, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_postprocess_tag_on_sync@Vc_scenario_lightmap_bsp_data_vtable@@@@SA_NJW4e_runtime_platform_type@@PAVc_cache_file_global_tag_registry@@_N@Z");
//};

//public: static void s_tag_vtable_has_generate_tag_report<class c_scenario_lightmap_bsp_data_vtable>::call(long, class c_tag_group_reporter *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_generate_tag_report@Vc_scenario_lightmap_bsp_data_vtable@@@@SAXJPAVc_tag_group_reporter@@@Z");
//};

//public: static void s_tag_vtable_has_build_predicted_tag_resources<class c_scenario_lightmap_bsp_data_vtable>::call(long, class c_tag_resource_predictor *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_build_predicted_tag_resources@Vc_scenario_lightmap_bsp_data_vtable@@@@SAXJPAVc_tag_resource_predictor@@@Z");
//};

//public: static void s_tag_vtable_has_collect_predicted_tag_resources<class c_scenario_lightmap_bsp_data_vtable>::call(long, class c_tag_resource_prediction_collector *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_collect_predicted_tag_resources@Vc_scenario_lightmap_bsp_data_vtable@@@@SAXJPAVc_tag_resource_prediction_collector@@@Z");
//};

//public: static bool s_tag_vtable_has_can_group_ever_load_in_game<class c_scenario_lightmap_bsp_data_vtable>::call(void)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_can_group_ever_load_in_game@Vc_scenario_lightmap_bsp_data_vtable@@@@SA_NXZ");
//};

//public: static void s_tag_vtable_has_optimize_tag_for_cache_file<class c_scenario_lightmap_bsp_data_vtable>::call(long, enum e_runtime_platform_type, class c_cache_file_global_tag_registry *, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_optimize_tag_for_cache_file@Vc_scenario_lightmap_bsp_data_vtable@@@@SAXJW4e_runtime_platform_type@@PAVc_cache_file_global_tag_registry@@_N@Z");
//};

//public: static unsigned long s_tag_vtable_has_on_edit_field<class c_scenario_lightmap_bsp_data_vtable>::call(long, __int64, struct s_tag_field const *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_on_edit_field@Vc_scenario_lightmap_bsp_data_vtable@@@@SAKJ_JPBUs_tag_field@@@Z");
//};

//public: static bool s_tag_vtable_has_estimate_final_resource_size<class c_scenario_lightmap_bsp_data_vtable>::call(long, struct s_tag_resource_estimated_size *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_estimate_final_resource_size@Vc_scenario_lightmap_bsp_data_vtable@@@@SA_NJPAUs_tag_resource_estimated_size@@@Z");
//};

//public: static bool s_tag_vtable_has_valid_for_reload_stage<class c_scenario_lightmap_bsp_data_vtable>::call(enum e_tag_reload_stage)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_valid_for_reload_stage@Vc_scenario_lightmap_bsp_data_vtable@@@@SA_NW4e_tag_reload_stage@@@Z");
//};

//public: static bool c_scenario_lightmap_bsp_data_vtable::valid_for_reload_stage(enum e_tag_reload_stage)
//{
//    mangled_ppc("?valid_for_reload_stage@c_scenario_lightmap_bsp_data_vtable@@SA_NW4e_tag_reload_stage@@@Z");
//};

//public: c_tag_struct_vtable<class c_scenario_lightmap_bsp_data_vtable>::c_tag_struct_vtable<class c_scenario_lightmap_bsp_data_vtable>(void)
//{
//    mangled_ppc("??0?$c_tag_struct_vtable@Vc_scenario_lightmap_bsp_data_vtable@@@@QAA@XZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_lightmap_bsp_data_vtable>::has_byte_swap_proc(void) const
//{
//    mangled_ppc("?has_byte_swap_proc@?$c_tag_struct_vtable@Vc_scenario_lightmap_bsp_data_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_struct_vtable<class c_scenario_lightmap_bsp_data_vtable>::byte_swap_block_proc(void *) const
//{
//    mangled_ppc("?byte_swap_block_proc@?$c_tag_struct_vtable@Vc_scenario_lightmap_bsp_data_vtable@@@@UBAXPAX@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_lightmap_bsp_data_vtable>::has_postprocess_proc(void) const
//{
//    mangled_ppc("?has_postprocess_proc@?$c_tag_struct_vtable@Vc_scenario_lightmap_bsp_data_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_lightmap_bsp_data_vtable>::postprocess_thunk(long, void *, bool) const
//{
//    mangled_ppc("?postprocess_thunk@?$c_tag_struct_vtable@Vc_scenario_lightmap_bsp_data_vtable@@@@UBA_NJPAX_N@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_lightmap_bsp_data_vtable>::has_format_proc(void) const
//{
//    mangled_ppc("?has_format_proc@?$c_tag_struct_vtable@Vc_scenario_lightmap_bsp_data_vtable@@@@UBA_NXZ");
//};

//public: virtual char * c_tag_struct_vtable<class c_scenario_lightmap_bsp_data_vtable>::format_thunk(long, __int64, struct s_tag_block *, long, char *, long) const
//{
//    mangled_ppc("?format_thunk@?$c_tag_struct_vtable@Vc_scenario_lightmap_bsp_data_vtable@@@@UBAPADJ_JPAUs_tag_block@@JPADJ@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_lightmap_bsp_data_vtable>::has_on_delete_proc(void) const
//{
//    mangled_ppc("?has_on_delete_proc@?$c_tag_struct_vtable@Vc_scenario_lightmap_bsp_data_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_struct_vtable<class c_scenario_lightmap_bsp_data_vtable>::on_delete_thunk(void *) const
//{
//    mangled_ppc("?on_delete_thunk@?$c_tag_struct_vtable@Vc_scenario_lightmap_bsp_data_vtable@@@@UBAXPAX@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_lightmap_bsp_data_vtable>::has_on_new_proc(void) const
//{
//    mangled_ppc("?has_on_new_proc@?$c_tag_struct_vtable@Vc_scenario_lightmap_bsp_data_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_lightmap_bsp_data_vtable>::on_new_thunk(void *) const
//{
//    mangled_ppc("?on_new_thunk@?$c_tag_struct_vtable@Vc_scenario_lightmap_bsp_data_vtable@@@@UBA_NPAX@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_lightmap_bsp_data_vtable>::has_on_copy_proc(void) const
//{
//    mangled_ppc("?has_on_copy_proc@?$c_tag_struct_vtable@Vc_scenario_lightmap_bsp_data_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_lightmap_bsp_data_vtable>::on_copy_thunk(void const *, void *) const
//{
//    mangled_ppc("?on_copy_thunk@?$c_tag_struct_vtable@Vc_scenario_lightmap_bsp_data_vtable@@@@UBA_NPBXPAX@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_lightmap_bsp_data_vtable>::has_write_to_cache_file_proc(void) const
//{
//    mangled_ppc("?has_write_to_cache_file_proc@?$c_tag_struct_vtable@Vc_scenario_lightmap_bsp_data_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_struct_vtable<class c_scenario_lightmap_bsp_data_vtable>::write_to_cache_file_thunk(long, struct s_tag_block *, struct s_cache_file_builder_stream_context const *, void **, void **) const
//{
//    mangled_ppc("?write_to_cache_file_thunk@?$c_tag_struct_vtable@Vc_scenario_lightmap_bsp_data_vtable@@@@UBAXJPAUs_tag_block@@PBUs_cache_file_builder_stream_context@@PAPAX2@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_lightmap_bsp_data_vtable>::has_block_does_not_exist_in_cache_file_proc(void) const
//{
//    mangled_ppc("?has_block_does_not_exist_in_cache_file_proc@?$c_tag_struct_vtable@Vc_scenario_lightmap_bsp_data_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_lightmap_bsp_data_vtable>::block_does_not_exist_in_cache_file_thunk(void) const
//{
//    mangled_ppc("?block_does_not_exist_in_cache_file_thunk@?$c_tag_struct_vtable@Vc_scenario_lightmap_bsp_data_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_lightmap_bsp_data_vtable>::has_fixup_old_struct_definition(void) const
//{
//    mangled_ppc("?has_fixup_old_struct_definition@?$c_tag_struct_vtable@Vc_scenario_lightmap_bsp_data_vtable@@@@UBA_NXZ");
//};

//public: virtual struct s_tag_struct_definition * c_tag_struct_vtable<class c_scenario_lightmap_bsp_data_vtable>::get_fixup_source_definition_thunk(void) const
//{
//    mangled_ppc("?get_fixup_source_definition_thunk@?$c_tag_struct_vtable@Vc_scenario_lightmap_bsp_data_vtable@@@@UBAPAUs_tag_struct_definition@@XZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_lightmap_bsp_data_vtable>::has_fixup_old_struct_proc(void) const
//{
//    mangled_ppc("?has_fixup_old_struct_proc@?$c_tag_struct_vtable@Vc_scenario_lightmap_bsp_data_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_lightmap_bsp_data_vtable>::fixup_old_struct_thunk(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool) const
//{
//    mangled_ppc("?fixup_old_struct_thunk@?$c_tag_struct_vtable@Vc_scenario_lightmap_bsp_data_vtable@@@@UBA_NAAV?$c_basic_buffer@X@@PBUs_tag_struct_definition@@01PAVc_tag_allocator@@_N@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_lightmap_bsp_data_vtable>::has_fixup_old_struct_from_disk_proc(void) const
//{
//    mangled_ppc("?has_fixup_old_struct_from_disk_proc@?$c_tag_struct_vtable@Vc_scenario_lightmap_bsp_data_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_lightmap_bsp_data_vtable>::fixup_old_struct_from_disk_thunk(struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool) const
//{
//    mangled_ppc("?fixup_old_struct_from_disk_thunk@?$c_tag_struct_vtable@Vc_scenario_lightmap_bsp_data_vtable@@@@UBA_NPBUs_tag_struct_definition@@AAV?$c_basic_buffer@X@@010PAVc_tag_allocator@@_N@Z");
//};

//public: static void s_tag_vtable_has_byte_swap_proc<class c_scenario_lightmap_bsp_data_vtable>::call(void *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_byte_swap_proc@Vc_scenario_lightmap_bsp_data_vtable@@@@SAXPAX@Z");
//};

//public: static bool s_tag_vtable_has_postprocess_proc<class c_scenario_lightmap_bsp_data_vtable>::call(long, void *, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_postprocess_proc@Vc_scenario_lightmap_bsp_data_vtable@@@@SA_NJPAX_N@Z");
//};

//public: static char * s_tag_vtable_has_format_proc<class c_scenario_lightmap_bsp_data_vtable>::call(long, __int64, struct s_tag_block *, long, char *, long)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_format_proc@Vc_scenario_lightmap_bsp_data_vtable@@@@SAPADJ_JPAUs_tag_block@@JPADJ@Z");
//};

//public: static void s_tag_vtable_has_on_delete_proc<class c_scenario_lightmap_bsp_data_vtable>::call(void *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_on_delete_proc@Vc_scenario_lightmap_bsp_data_vtable@@@@SAXPAX@Z");
//};

//public: static bool s_tag_vtable_has_on_new_proc<class c_scenario_lightmap_bsp_data_vtable>::call(void *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_on_new_proc@Vc_scenario_lightmap_bsp_data_vtable@@@@SA_NPAX@Z");
//};

//public: static bool s_tag_vtable_has_on_copy_proc<class c_scenario_lightmap_bsp_data_vtable>::call(void const *, void *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_on_copy_proc@Vc_scenario_lightmap_bsp_data_vtable@@@@SA_NPBXPAX@Z");
//};

//public: static void s_tag_vtable_has_write_to_cache_file_proc<class c_scenario_lightmap_bsp_data_vtable>::call(long, struct s_tag_block *, struct s_cache_file_builder_stream_context const *, void **, void **)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_write_to_cache_file_proc@Vc_scenario_lightmap_bsp_data_vtable@@@@SAXJPAUs_tag_block@@PBUs_cache_file_builder_stream_context@@PAPAX2@Z");
//};

//public: static bool s_tag_vtable_has_block_does_not_exist_in_cache_file<class c_scenario_lightmap_bsp_data_vtable>::call(void)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_block_does_not_exist_in_cache_file@Vc_scenario_lightmap_bsp_data_vtable@@@@SA_NXZ");
//};

//public: static struct s_tag_struct_definition * s_tag_vtable_has_get_fixup_source_definition_proc<class c_scenario_lightmap_bsp_data_vtable>::call(void)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_get_fixup_source_definition_proc@Vc_scenario_lightmap_bsp_data_vtable@@@@SAPAUs_tag_struct_definition@@XZ");
//};

//public: static bool s_tag_vtable_has_fixup_old_struct_proc<class c_scenario_lightmap_bsp_data_vtable>::call(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_fixup_old_struct_proc@Vc_scenario_lightmap_bsp_data_vtable@@@@SA_NAAV?$c_basic_buffer@X@@PBUs_tag_struct_definition@@01PAVc_tag_allocator@@_N@Z");
//};

//public: static bool s_tag_vtable_has_fixup_old_struct_from_disk_proc<class c_scenario_lightmap_bsp_data_vtable>::call(struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_fixup_old_struct_from_disk_proc@Vc_scenario_lightmap_bsp_data_vtable@@@@SA_NPBUs_tag_struct_definition@@AAV?$c_basic_buffer@X@@010PAVc_tag_allocator@@_N@Z");
//};

//public: c_tag_group_vtable<class c_scenario_lightmap_definition_vtable>::c_tag_group_vtable<class c_scenario_lightmap_definition_vtable>(void)
//{
//    mangled_ppc("??0?$c_tag_group_vtable@Vc_scenario_lightmap_definition_vtable@@@@QAA@XZ");
//};

//public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_definition_vtable>::has_custom_postprocess_proc(void) const
//{
//    mangled_ppc("?has_custom_postprocess_proc@?$c_tag_group_vtable@Vc_scenario_lightmap_definition_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_definition_vtable>::postprocess_tag_thunk(long, bool) const
//{
//    mangled_ppc("?postprocess_tag_thunk@?$c_tag_group_vtable@Vc_scenario_lightmap_definition_vtable@@@@UBA_NJ_N@Z");
//};

//public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_definition_vtable>::has_custom_missing_tag_proc(void) const
//{
//    mangled_ppc("?has_custom_missing_tag_proc@?$c_tag_group_vtable@Vc_scenario_lightmap_definition_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_group_vtable<class c_scenario_lightmap_definition_vtable>::handle_missing_tag_thunk(unsigned long, char const *, unsigned long, unsigned long, char const *, long *) const
//{
//    mangled_ppc("?handle_missing_tag_thunk@?$c_tag_group_vtable@Vc_scenario_lightmap_definition_vtable@@@@UBAXKPBDKK0PAJ@Z");
//};

//public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_definition_vtable>::has_on_save_tag_proc(void) const
//{
//    mangled_ppc("?has_on_save_tag_proc@?$c_tag_group_vtable@Vc_scenario_lightmap_definition_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_group_vtable<class c_scenario_lightmap_definition_vtable>::on_save_tag_thunk(long) const
//{
//    mangled_ppc("?on_save_tag_thunk@?$c_tag_group_vtable@Vc_scenario_lightmap_definition_vtable@@@@UBAXJ@Z");
//};

//public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_definition_vtable>::has_write_to_cache_file_proc(void) const
//{
//    mangled_ppc("?has_write_to_cache_file_proc@?$c_tag_group_vtable@Vc_scenario_lightmap_definition_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_group_vtable<class c_scenario_lightmap_definition_vtable>::write_tag_to_cache_file_thunk(long, unsigned long, class c_cache_file_scratch_allocator *, class c_cache_file_resource_library *, class c_cache_file_tracer *, void **, void **) const
//{
//    mangled_ppc("?write_tag_to_cache_file_thunk@?$c_tag_group_vtable@Vc_scenario_lightmap_definition_vtable@@@@UBAXJKPAVc_cache_file_scratch_allocator@@PAVc_cache_file_resource_library@@PAVc_cache_file_tracer@@PAPAX3@Z");
//};

//public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_definition_vtable>::has_valid_alternate_streams(void) const
//{
//    mangled_ppc("?has_valid_alternate_streams@?$c_tag_group_vtable@Vc_scenario_lightmap_definition_vtable@@@@UBA_NXZ");
//};

//public: virtual struct s_tag_group_stream_list * c_tag_group_vtable<class c_scenario_lightmap_definition_vtable>::get_alterante_streams_thunk(void) const
//{
//    mangled_ppc("?get_alterante_streams_thunk@?$c_tag_group_vtable@Vc_scenario_lightmap_definition_vtable@@@@UBAPAUs_tag_group_stream_list@@XZ");
//};

//public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_definition_vtable>::has_should_load_tag_stream_proc(void) const
//{
//    mangled_ppc("?has_should_load_tag_stream_proc@?$c_tag_group_vtable@Vc_scenario_lightmap_definition_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_definition_vtable>::should_load_tag_stream_thunk(unsigned long, bool) const
//{
//    mangled_ppc("?should_load_tag_stream_thunk@?$c_tag_group_vtable@Vc_scenario_lightmap_definition_vtable@@@@UBA_NK_N@Z");
//};

//public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_definition_vtable>::has_custom_xsync_runtime_platforms(void) const
//{
//    mangled_ppc("?has_custom_xsync_runtime_platforms@?$c_tag_group_vtable@Vc_scenario_lightmap_definition_vtable@@@@UBA_NXZ");
//};

//public: virtual unsigned long c_tag_group_vtable<class c_scenario_lightmap_definition_vtable>::get_xsync_runtime_platforms_thunk(void) const
//{
//    mangled_ppc("?get_xsync_runtime_platforms_thunk@?$c_tag_group_vtable@Vc_scenario_lightmap_definition_vtable@@@@UBAKXZ");
//};

//public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_definition_vtable>::has_get_current_xsync_version_proc(void) const
//{
//    mangled_ppc("?has_get_current_xsync_version_proc@?$c_tag_group_vtable@Vc_scenario_lightmap_definition_vtable@@@@UBA_NXZ");
//};

//public: virtual unsigned long c_tag_group_vtable<class c_scenario_lightmap_definition_vtable>::get_current_xsync_version_thunk(void) const
//{
//    mangled_ppc("?get_current_xsync_version_thunk@?$c_tag_group_vtable@Vc_scenario_lightmap_definition_vtable@@@@UBAKXZ");
//};

//public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_definition_vtable>::has_get_xsync_version_flags_proc(void) const
//{
//    mangled_ppc("?has_get_xsync_version_flags_proc@?$c_tag_group_vtable@Vc_scenario_lightmap_definition_vtable@@@@UBA_NXZ");
//};

//public: virtual unsigned long c_tag_group_vtable<class c_scenario_lightmap_definition_vtable>::get_xsync_version_flags_thunk(unsigned long) const
//{
//    mangled_ppc("?get_xsync_version_flags_thunk@?$c_tag_group_vtable@Vc_scenario_lightmap_definition_vtable@@@@UBAKK@Z");
//};

//public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_definition_vtable>::has_postprocess_on_sync_proc(void) const
//{
//    mangled_ppc("?has_postprocess_on_sync_proc@?$c_tag_group_vtable@Vc_scenario_lightmap_definition_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_definition_vtable>::postprocess_on_sync_thunk(long, enum e_runtime_platform_type, class c_cache_file_global_tag_registry *, bool) const
//{
//    mangled_ppc("?postprocess_on_sync_thunk@?$c_tag_group_vtable@Vc_scenario_lightmap_definition_vtable@@@@UBA_NJW4e_runtime_platform_type@@PAVc_cache_file_global_tag_registry@@_N@Z");
//};

//public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_definition_vtable>::has_generate_tag_report_proc(void) const
//{
//    mangled_ppc("?has_generate_tag_report_proc@?$c_tag_group_vtable@Vc_scenario_lightmap_definition_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_group_vtable<class c_scenario_lightmap_definition_vtable>::generate_tag_report_thunk(long, class c_tag_group_reporter *) const
//{
//    mangled_ppc("?generate_tag_report_thunk@?$c_tag_group_vtable@Vc_scenario_lightmap_definition_vtable@@@@UBAXJPAVc_tag_group_reporter@@@Z");
//};

//public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_definition_vtable>::has_build_tag_resource_prediction_proc(void) const
//{
//    mangled_ppc("?has_build_tag_resource_prediction_proc@?$c_tag_group_vtable@Vc_scenario_lightmap_definition_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_group_vtable<class c_scenario_lightmap_definition_vtable>::build_predicted_tag_resources_thunk(long, class c_tag_resource_predictor *) const
//{
//    mangled_ppc("?build_predicted_tag_resources_thunk@?$c_tag_group_vtable@Vc_scenario_lightmap_definition_vtable@@@@UBAXJPAVc_tag_resource_predictor@@@Z");
//};

//public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_definition_vtable>::has_collect_tag_resource_prediction_proc(void) const
//{
//    mangled_ppc("?has_collect_tag_resource_prediction_proc@?$c_tag_group_vtable@Vc_scenario_lightmap_definition_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_group_vtable<class c_scenario_lightmap_definition_vtable>::collect_predicted_tag_resources_thunk(long, class c_tag_resource_prediction_collector *) const
//{
//    mangled_ppc("?collect_predicted_tag_resources_thunk@?$c_tag_group_vtable@Vc_scenario_lightmap_definition_vtable@@@@UBAXJPAVc_tag_resource_prediction_collector@@@Z");
//};

//public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_definition_vtable>::has_can_group_ever_load_in_game_proc(void) const
//{
//    mangled_ppc("?has_can_group_ever_load_in_game_proc@?$c_tag_group_vtable@Vc_scenario_lightmap_definition_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_definition_vtable>::can_group_ever_load_in_game_thunk(void) const
//{
//    mangled_ppc("?can_group_ever_load_in_game_thunk@?$c_tag_group_vtable@Vc_scenario_lightmap_definition_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_definition_vtable>::has_optimize_for_cache_file_proc(void) const
//{
//    mangled_ppc("?has_optimize_for_cache_file_proc@?$c_tag_group_vtable@Vc_scenario_lightmap_definition_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_group_vtable<class c_scenario_lightmap_definition_vtable>::optimize_for_cache_file_thunk(long, enum e_runtime_platform_type, class c_cache_file_global_tag_registry *, bool) const
//{
//    mangled_ppc("?optimize_for_cache_file_thunk@?$c_tag_group_vtable@Vc_scenario_lightmap_definition_vtable@@@@UBAXJW4e_runtime_platform_type@@PAVc_cache_file_global_tag_registry@@_N@Z");
//};

//public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_definition_vtable>::has_on_edit_field_proc(void) const
//{
//    mangled_ppc("?has_on_edit_field_proc@?$c_tag_group_vtable@Vc_scenario_lightmap_definition_vtable@@@@UBA_NXZ");
//};

//public: virtual unsigned long c_tag_group_vtable<class c_scenario_lightmap_definition_vtable>::on_edit_field_thunk(long, __int64, struct s_tag_field const *) const
//{
//    mangled_ppc("?on_edit_field_thunk@?$c_tag_group_vtable@Vc_scenario_lightmap_definition_vtable@@@@UBAKJ_JPBUs_tag_field@@@Z");
//};

//public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_definition_vtable>::has_estimate_final_resource_size_proc(void) const
//{
//    mangled_ppc("?has_estimate_final_resource_size_proc@?$c_tag_group_vtable@Vc_scenario_lightmap_definition_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_definition_vtable>::estimate_final_resource_size_thunk(long, struct s_tag_resource_estimated_size *) const
//{
//    mangled_ppc("?estimate_final_resource_size_thunk@?$c_tag_group_vtable@Vc_scenario_lightmap_definition_vtable@@@@UBA_NJPAUs_tag_resource_estimated_size@@@Z");
//};

//public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_definition_vtable>::has_valid_for_reload_stage_proc(void) const
//{
//    mangled_ppc("?has_valid_for_reload_stage_proc@?$c_tag_group_vtable@Vc_scenario_lightmap_definition_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_group_vtable<class c_scenario_lightmap_definition_vtable>::valid_for_reload_stage_thunk(enum e_tag_reload_stage) const
//{
//    mangled_ppc("?valid_for_reload_stage_thunk@?$c_tag_group_vtable@Vc_scenario_lightmap_definition_vtable@@@@UBA_NW4e_tag_reload_stage@@@Z");
//};

//public: static bool s_tag_vtable_has_postprocess_tag<class c_scenario_lightmap_definition_vtable>::call(long, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_postprocess_tag@Vc_scenario_lightmap_definition_vtable@@@@SA_NJ_N@Z");
//};

//public: static bool c_scenario_lightmap_definition_vtable::postprocess_tag(long, bool)
//{
//    mangled_ppc("?postprocess_tag@c_scenario_lightmap_definition_vtable@@SA_NJ_N@Z");
//};

//public: static void s_tag_vtable_has_handle_missing_tag<class c_scenario_lightmap_definition_vtable>::call(unsigned long, char const *, unsigned long, unsigned long, char const *, long *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_handle_missing_tag@Vc_scenario_lightmap_definition_vtable@@@@SAXKPBDKK0PAJ@Z");
//};

//public: static void s_tag_vtable_has_on_save_tag<class c_scenario_lightmap_definition_vtable>::call(long)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_on_save_tag@Vc_scenario_lightmap_definition_vtable@@@@SAXJ@Z");
//};

//public: static void s_tag_vtable_has_write_tag_to_cache_file<class c_scenario_lightmap_definition_vtable>::call(long, unsigned long, class c_cache_file_scratch_allocator *, class c_cache_file_resource_library *, class c_cache_file_tracer *, void **, void **)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_write_tag_to_cache_file@Vc_scenario_lightmap_definition_vtable@@@@SAXJKPAVc_cache_file_scratch_allocator@@PAVc_cache_file_resource_library@@PAVc_cache_file_tracer@@PAPAX3@Z");
//};

//public: static struct s_tag_group_stream_list * s_tag_vtable_has_get_alternate_streams<class c_scenario_lightmap_definition_vtable>::call(void)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_get_alternate_streams@Vc_scenario_lightmap_definition_vtable@@@@SAPAUs_tag_group_stream_list@@XZ");
//};

//public: static bool s_tag_vtable_has_should_load_tag_stream<class c_scenario_lightmap_definition_vtable>::call(unsigned long, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_should_load_tag_stream@Vc_scenario_lightmap_definition_vtable@@@@SA_NK_N@Z");
//};

//public: static unsigned long s_tag_vtable_has_get_xsync_runtime_platforms<class c_scenario_lightmap_definition_vtable>::call(void)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_get_xsync_runtime_platforms@Vc_scenario_lightmap_definition_vtable@@@@SAKXZ");
//};

//public: static unsigned long s_tag_vtable_has_get_current_xsync_version<class c_scenario_lightmap_definition_vtable>::call(void)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_get_current_xsync_version@Vc_scenario_lightmap_definition_vtable@@@@SAKXZ");
//};

//public: static unsigned long s_tag_vtable_has_get_xsync_version_flags<class c_scenario_lightmap_definition_vtable>::call(unsigned long)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_get_xsync_version_flags@Vc_scenario_lightmap_definition_vtable@@@@SAKK@Z");
//};

//public: static bool s_tag_vtable_has_postprocess_tag_on_sync<class c_scenario_lightmap_definition_vtable>::call(long, enum e_runtime_platform_type, class c_cache_file_global_tag_registry *, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_postprocess_tag_on_sync@Vc_scenario_lightmap_definition_vtable@@@@SA_NJW4e_runtime_platform_type@@PAVc_cache_file_global_tag_registry@@_N@Z");
//};

//public: static void s_tag_vtable_has_generate_tag_report<class c_scenario_lightmap_definition_vtable>::call(long, class c_tag_group_reporter *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_generate_tag_report@Vc_scenario_lightmap_definition_vtable@@@@SAXJPAVc_tag_group_reporter@@@Z");
//};

//public: static void s_tag_vtable_has_build_predicted_tag_resources<class c_scenario_lightmap_definition_vtable>::call(long, class c_tag_resource_predictor *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_build_predicted_tag_resources@Vc_scenario_lightmap_definition_vtable@@@@SAXJPAVc_tag_resource_predictor@@@Z");
//};

//public: static void s_tag_vtable_has_collect_predicted_tag_resources<class c_scenario_lightmap_definition_vtable>::call(long, class c_tag_resource_prediction_collector *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_collect_predicted_tag_resources@Vc_scenario_lightmap_definition_vtable@@@@SAXJPAVc_tag_resource_prediction_collector@@@Z");
//};

//public: static bool s_tag_vtable_has_can_group_ever_load_in_game<class c_scenario_lightmap_definition_vtable>::call(void)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_can_group_ever_load_in_game@Vc_scenario_lightmap_definition_vtable@@@@SA_NXZ");
//};

//public: static void s_tag_vtable_has_optimize_tag_for_cache_file<class c_scenario_lightmap_definition_vtable>::call(long, enum e_runtime_platform_type, class c_cache_file_global_tag_registry *, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_optimize_tag_for_cache_file@Vc_scenario_lightmap_definition_vtable@@@@SAXJW4e_runtime_platform_type@@PAVc_cache_file_global_tag_registry@@_N@Z");
//};

//public: static unsigned long s_tag_vtable_has_on_edit_field<class c_scenario_lightmap_definition_vtable>::call(long, __int64, struct s_tag_field const *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_on_edit_field@Vc_scenario_lightmap_definition_vtable@@@@SAKJ_JPBUs_tag_field@@@Z");
//};

//public: static bool s_tag_vtable_has_estimate_final_resource_size<class c_scenario_lightmap_definition_vtable>::call(long, struct s_tag_resource_estimated_size *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_estimate_final_resource_size@Vc_scenario_lightmap_definition_vtable@@@@SA_NJPAUs_tag_resource_estimated_size@@@Z");
//};

//public: static bool s_tag_vtable_has_valid_for_reload_stage<class c_scenario_lightmap_definition_vtable>::call(enum e_tag_reload_stage)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_valid_for_reload_stage@Vc_scenario_lightmap_definition_vtable@@@@SA_NW4e_tag_reload_stage@@@Z");
//};

//public: static bool c_scenario_lightmap_definition_vtable::valid_for_reload_stage(enum e_tag_reload_stage)
//{
//    mangled_ppc("?valid_for_reload_stage@c_scenario_lightmap_definition_vtable@@SA_NW4e_tag_reload_stage@@@Z");
//};

//public: c_tag_struct_vtable<class c_scenario_lightmap_definition_vtable>::c_tag_struct_vtable<class c_scenario_lightmap_definition_vtable>(void)
//{
//    mangled_ppc("??0?$c_tag_struct_vtable@Vc_scenario_lightmap_definition_vtable@@@@QAA@XZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_lightmap_definition_vtable>::has_byte_swap_proc(void) const
//{
//    mangled_ppc("?has_byte_swap_proc@?$c_tag_struct_vtable@Vc_scenario_lightmap_definition_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_struct_vtable<class c_scenario_lightmap_definition_vtable>::byte_swap_block_proc(void *) const
//{
//    mangled_ppc("?byte_swap_block_proc@?$c_tag_struct_vtable@Vc_scenario_lightmap_definition_vtable@@@@UBAXPAX@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_lightmap_definition_vtable>::has_postprocess_proc(void) const
//{
//    mangled_ppc("?has_postprocess_proc@?$c_tag_struct_vtable@Vc_scenario_lightmap_definition_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_lightmap_definition_vtable>::postprocess_thunk(long, void *, bool) const
//{
//    mangled_ppc("?postprocess_thunk@?$c_tag_struct_vtable@Vc_scenario_lightmap_definition_vtable@@@@UBA_NJPAX_N@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_lightmap_definition_vtable>::has_format_proc(void) const
//{
//    mangled_ppc("?has_format_proc@?$c_tag_struct_vtable@Vc_scenario_lightmap_definition_vtable@@@@UBA_NXZ");
//};

//public: virtual char * c_tag_struct_vtable<class c_scenario_lightmap_definition_vtable>::format_thunk(long, __int64, struct s_tag_block *, long, char *, long) const
//{
//    mangled_ppc("?format_thunk@?$c_tag_struct_vtable@Vc_scenario_lightmap_definition_vtable@@@@UBAPADJ_JPAUs_tag_block@@JPADJ@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_lightmap_definition_vtable>::has_on_delete_proc(void) const
//{
//    mangled_ppc("?has_on_delete_proc@?$c_tag_struct_vtable@Vc_scenario_lightmap_definition_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_struct_vtable<class c_scenario_lightmap_definition_vtable>::on_delete_thunk(void *) const
//{
//    mangled_ppc("?on_delete_thunk@?$c_tag_struct_vtable@Vc_scenario_lightmap_definition_vtable@@@@UBAXPAX@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_lightmap_definition_vtable>::has_on_new_proc(void) const
//{
//    mangled_ppc("?has_on_new_proc@?$c_tag_struct_vtable@Vc_scenario_lightmap_definition_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_lightmap_definition_vtable>::on_new_thunk(void *) const
//{
//    mangled_ppc("?on_new_thunk@?$c_tag_struct_vtable@Vc_scenario_lightmap_definition_vtable@@@@UBA_NPAX@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_lightmap_definition_vtable>::has_on_copy_proc(void) const
//{
//    mangled_ppc("?has_on_copy_proc@?$c_tag_struct_vtable@Vc_scenario_lightmap_definition_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_lightmap_definition_vtable>::on_copy_thunk(void const *, void *) const
//{
//    mangled_ppc("?on_copy_thunk@?$c_tag_struct_vtable@Vc_scenario_lightmap_definition_vtable@@@@UBA_NPBXPAX@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_lightmap_definition_vtable>::has_write_to_cache_file_proc(void) const
//{
//    mangled_ppc("?has_write_to_cache_file_proc@?$c_tag_struct_vtable@Vc_scenario_lightmap_definition_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_struct_vtable<class c_scenario_lightmap_definition_vtable>::write_to_cache_file_thunk(long, struct s_tag_block *, struct s_cache_file_builder_stream_context const *, void **, void **) const
//{
//    mangled_ppc("?write_to_cache_file_thunk@?$c_tag_struct_vtable@Vc_scenario_lightmap_definition_vtable@@@@UBAXJPAUs_tag_block@@PBUs_cache_file_builder_stream_context@@PAPAX2@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_lightmap_definition_vtable>::has_block_does_not_exist_in_cache_file_proc(void) const
//{
//    mangled_ppc("?has_block_does_not_exist_in_cache_file_proc@?$c_tag_struct_vtable@Vc_scenario_lightmap_definition_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_lightmap_definition_vtable>::block_does_not_exist_in_cache_file_thunk(void) const
//{
//    mangled_ppc("?block_does_not_exist_in_cache_file_thunk@?$c_tag_struct_vtable@Vc_scenario_lightmap_definition_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_lightmap_definition_vtable>::has_fixup_old_struct_definition(void) const
//{
//    mangled_ppc("?has_fixup_old_struct_definition@?$c_tag_struct_vtable@Vc_scenario_lightmap_definition_vtable@@@@UBA_NXZ");
//};

//public: virtual struct s_tag_struct_definition * c_tag_struct_vtable<class c_scenario_lightmap_definition_vtable>::get_fixup_source_definition_thunk(void) const
//{
//    mangled_ppc("?get_fixup_source_definition_thunk@?$c_tag_struct_vtable@Vc_scenario_lightmap_definition_vtable@@@@UBAPAUs_tag_struct_definition@@XZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_lightmap_definition_vtable>::has_fixup_old_struct_proc(void) const
//{
//    mangled_ppc("?has_fixup_old_struct_proc@?$c_tag_struct_vtable@Vc_scenario_lightmap_definition_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_lightmap_definition_vtable>::fixup_old_struct_thunk(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool) const
//{
//    mangled_ppc("?fixup_old_struct_thunk@?$c_tag_struct_vtable@Vc_scenario_lightmap_definition_vtable@@@@UBA_NAAV?$c_basic_buffer@X@@PBUs_tag_struct_definition@@01PAVc_tag_allocator@@_N@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_lightmap_definition_vtable>::has_fixup_old_struct_from_disk_proc(void) const
//{
//    mangled_ppc("?has_fixup_old_struct_from_disk_proc@?$c_tag_struct_vtable@Vc_scenario_lightmap_definition_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_lightmap_definition_vtable>::fixup_old_struct_from_disk_thunk(struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool) const
//{
//    mangled_ppc("?fixup_old_struct_from_disk_thunk@?$c_tag_struct_vtable@Vc_scenario_lightmap_definition_vtable@@@@UBA_NPBUs_tag_struct_definition@@AAV?$c_basic_buffer@X@@010PAVc_tag_allocator@@_N@Z");
//};

//public: static void s_tag_vtable_has_byte_swap_proc<class c_scenario_lightmap_definition_vtable>::call(void *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_byte_swap_proc@Vc_scenario_lightmap_definition_vtable@@@@SAXPAX@Z");
//};

//public: static bool s_tag_vtable_has_postprocess_proc<class c_scenario_lightmap_definition_vtable>::call(long, void *, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_postprocess_proc@Vc_scenario_lightmap_definition_vtable@@@@SA_NJPAX_N@Z");
//};

//public: static char * s_tag_vtable_has_format_proc<class c_scenario_lightmap_definition_vtable>::call(long, __int64, struct s_tag_block *, long, char *, long)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_format_proc@Vc_scenario_lightmap_definition_vtable@@@@SAPADJ_JPAUs_tag_block@@JPADJ@Z");
//};

//public: static void s_tag_vtable_has_on_delete_proc<class c_scenario_lightmap_definition_vtable>::call(void *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_on_delete_proc@Vc_scenario_lightmap_definition_vtable@@@@SAXPAX@Z");
//};

//public: static bool s_tag_vtable_has_on_new_proc<class c_scenario_lightmap_definition_vtable>::call(void *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_on_new_proc@Vc_scenario_lightmap_definition_vtable@@@@SA_NPAX@Z");
//};

//public: static bool s_tag_vtable_has_on_copy_proc<class c_scenario_lightmap_definition_vtable>::call(void const *, void *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_on_copy_proc@Vc_scenario_lightmap_definition_vtable@@@@SA_NPBXPAX@Z");
//};

//public: static void s_tag_vtable_has_write_to_cache_file_proc<class c_scenario_lightmap_definition_vtable>::call(long, struct s_tag_block *, struct s_cache_file_builder_stream_context const *, void **, void **)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_write_to_cache_file_proc@Vc_scenario_lightmap_definition_vtable@@@@SAXJPAUs_tag_block@@PBUs_cache_file_builder_stream_context@@PAPAX2@Z");
//};

//public: static bool s_tag_vtable_has_block_does_not_exist_in_cache_file<class c_scenario_lightmap_definition_vtable>::call(void)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_block_does_not_exist_in_cache_file@Vc_scenario_lightmap_definition_vtable@@@@SA_NXZ");
//};

//public: static struct s_tag_struct_definition * s_tag_vtable_has_get_fixup_source_definition_proc<class c_scenario_lightmap_definition_vtable>::call(void)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_get_fixup_source_definition_proc@Vc_scenario_lightmap_definition_vtable@@@@SAPAUs_tag_struct_definition@@XZ");
//};

//public: static bool s_tag_vtable_has_fixup_old_struct_proc<class c_scenario_lightmap_definition_vtable>::call(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_fixup_old_struct_proc@Vc_scenario_lightmap_definition_vtable@@@@SA_NAAV?$c_basic_buffer@X@@PBUs_tag_struct_definition@@01PAVc_tag_allocator@@_N@Z");
//};

//public: static bool s_tag_vtable_has_fixup_old_struct_from_disk_proc<class c_scenario_lightmap_definition_vtable>::call(struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_fixup_old_struct_from_disk_proc@Vc_scenario_lightmap_definition_vtable@@@@SA_NPBUs_tag_struct_definition@@AAV?$c_basic_buffer@X@@010PAVc_tag_allocator@@_N@Z");
//};

