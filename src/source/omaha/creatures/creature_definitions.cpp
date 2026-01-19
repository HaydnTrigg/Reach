/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// long const k_creature_marker_name_center_of_mass; // "?k_creature_marker_name_center_of_mass@@3JB"
// long const k_creature_marker_name_head; // "?k_creature_marker_name_head@@3JB"
// struct s_string_list_definition global_creature_function_string_list; // "?global_creature_function_string_list@@3Us_string_list_definition@@A"
// struct s_tag_group_legacy_vtable legacy_creature_vtable; // "?legacy_creature_vtable@@3Us_tag_group_legacy_vtable@@A"
// struct s_tag_block_definition creature_block; // "?creature_block@@3Us_tag_block_definition@@A"
// struct s_tag_group creature_group; // "?creature_group@@3Us_tag_group@@A"
// struct s_tag_group big_battle_creature_group; // "?big_battle_creature_group@@3Us_tag_group@@A"
// struct s_tag_group_stream_definition legacy_creature_stream_definition; // "?legacy_creature_stream_definition@@3Us_tag_group_stream_definition@@A"
// struct s_tag_group_sync_definition legacy_creature_xsync_declaration; // "?legacy_creature_xsync_declaration@@3Us_tag_group_sync_definition@@A"
// class c_legacy_tag_group_vtable_shim legacy_creature_vtable_shim; // "?legacy_creature_vtable_shim@@3Vc_legacy_tag_group_vtable_shim@@A"
// class c_tag_group_vtable<class c_null_tag_vtable> big_battle_creature_vtable; // "?big_battle_creature_vtable@@3V?$c_tag_group_vtable@Vc_null_tag_vtable@@@@A"
// class c_tag_struct_vtable<class c_null_tag_vtable> big_battle_creature_block_struct_struct_vtable; // "?big_battle_creature_block_struct_struct_vtable@@3V?$c_tag_struct_vtable@Vc_null_tag_vtable@@@@A"

// bool creature_effects_timing_new_block_proc(void *);
// bool creature_postprocess(long, bool);
// void creature_definition_fixup(long);
// void creature_definition_teardown(long);
// public: c_tag_group_vtable<class c_null_tag_vtable>::c_tag_group_vtable<class c_null_tag_vtable>(void);
// public: virtual bool c_tag_group_vtable<class c_null_tag_vtable>::has_custom_postprocess_proc(void) const;
// public: virtual bool c_tag_group_vtable<class c_null_tag_vtable>::postprocess_tag_thunk(long, bool) const;
// public: virtual bool c_tag_group_vtable<class c_null_tag_vtable>::has_custom_missing_tag_proc(void) const;
// public: virtual void c_tag_group_vtable<class c_null_tag_vtable>::handle_missing_tag_thunk(unsigned long, char const *, unsigned long, unsigned long, char const *, long *) const;
// public: virtual bool c_tag_group_vtable<class c_null_tag_vtable>::has_on_save_tag_proc(void) const;
// public: virtual void c_tag_group_vtable<class c_null_tag_vtable>::on_save_tag_thunk(long) const;
// public: virtual bool c_tag_group_vtable<class c_null_tag_vtable>::has_write_to_cache_file_proc(void) const;
// public: virtual void c_tag_group_vtable<class c_null_tag_vtable>::write_tag_to_cache_file_thunk(long, unsigned long, class c_cache_file_scratch_allocator *, class c_cache_file_resource_library *, class c_cache_file_tracer *, void **, void **) const;
// public: virtual bool c_tag_group_vtable<class c_null_tag_vtable>::has_valid_alternate_streams(void) const;
// public: virtual struct s_tag_group_stream_list * c_tag_group_vtable<class c_null_tag_vtable>::get_alterante_streams_thunk(void) const;
// public: virtual bool c_tag_group_vtable<class c_null_tag_vtable>::has_should_load_tag_stream_proc(void) const;
// public: virtual bool c_tag_group_vtable<class c_null_tag_vtable>::should_load_tag_stream_thunk(unsigned long, bool) const;
// public: virtual bool c_tag_group_vtable<class c_null_tag_vtable>::has_custom_xsync_runtime_platforms(void) const;
// public: virtual unsigned long c_tag_group_vtable<class c_null_tag_vtable>::get_xsync_runtime_platforms_thunk(void) const;
// public: virtual bool c_tag_group_vtable<class c_null_tag_vtable>::has_get_current_xsync_version_proc(void) const;
// public: virtual unsigned long c_tag_group_vtable<class c_null_tag_vtable>::get_current_xsync_version_thunk(void) const;
// public: virtual bool c_tag_group_vtable<class c_null_tag_vtable>::has_get_xsync_version_flags_proc(void) const;
// public: virtual unsigned long c_tag_group_vtable<class c_null_tag_vtable>::get_xsync_version_flags_thunk(unsigned long) const;
// public: virtual bool c_tag_group_vtable<class c_null_tag_vtable>::has_postprocess_on_sync_proc(void) const;
// public: virtual bool c_tag_group_vtable<class c_null_tag_vtable>::postprocess_on_sync_thunk(long, enum e_runtime_platform_type, class c_cache_file_global_tag_registry *, bool) const;
// public: virtual bool c_tag_group_vtable<class c_null_tag_vtable>::has_generate_tag_report_proc(void) const;
// public: virtual void c_tag_group_vtable<class c_null_tag_vtable>::generate_tag_report_thunk(long, class c_tag_group_reporter *) const;
// public: virtual bool c_tag_group_vtable<class c_null_tag_vtable>::has_build_tag_resource_prediction_proc(void) const;
// public: virtual void c_tag_group_vtable<class c_null_tag_vtable>::build_predicted_tag_resources_thunk(long, class c_tag_resource_predictor *) const;
// public: virtual bool c_tag_group_vtable<class c_null_tag_vtable>::has_collect_tag_resource_prediction_proc(void) const;
// public: virtual void c_tag_group_vtable<class c_null_tag_vtable>::collect_predicted_tag_resources_thunk(long, class c_tag_resource_prediction_collector *) const;
// public: virtual bool c_tag_group_vtable<class c_null_tag_vtable>::has_can_group_ever_load_in_game_proc(void) const;
// public: virtual bool c_tag_group_vtable<class c_null_tag_vtable>::can_group_ever_load_in_game_thunk(void) const;
// public: virtual bool c_tag_group_vtable<class c_null_tag_vtable>::has_optimize_for_cache_file_proc(void) const;
// public: virtual void c_tag_group_vtable<class c_null_tag_vtable>::optimize_for_cache_file_thunk(long, enum e_runtime_platform_type, class c_cache_file_global_tag_registry *, bool) const;
// public: virtual bool c_tag_group_vtable<class c_null_tag_vtable>::has_on_edit_field_proc(void) const;
// public: virtual unsigned long c_tag_group_vtable<class c_null_tag_vtable>::on_edit_field_thunk(long, __int64, struct s_tag_field const *) const;
// public: virtual bool c_tag_group_vtable<class c_null_tag_vtable>::has_estimate_final_resource_size_proc(void) const;
// public: virtual bool c_tag_group_vtable<class c_null_tag_vtable>::estimate_final_resource_size_thunk(long, struct s_tag_resource_estimated_size *) const;
// public: virtual bool c_tag_group_vtable<class c_null_tag_vtable>::has_valid_for_reload_stage_proc(void) const;
// public: virtual bool c_tag_group_vtable<class c_null_tag_vtable>::valid_for_reload_stage_thunk(enum e_tag_reload_stage) const;
// public: static bool s_tag_vtable_has_postprocess_tag<class c_null_tag_vtable>::call(long, bool);
// public: static void s_tag_vtable_has_handle_missing_tag<class c_null_tag_vtable>::call(unsigned long, char const *, unsigned long, unsigned long, char const *, long *);
// public: static void s_tag_vtable_has_on_save_tag<class c_null_tag_vtable>::call(long);
// public: static void s_tag_vtable_has_write_tag_to_cache_file<class c_null_tag_vtable>::call(long, unsigned long, class c_cache_file_scratch_allocator *, class c_cache_file_resource_library *, class c_cache_file_tracer *, void **, void **);
// public: static struct s_tag_group_stream_list * s_tag_vtable_has_get_alternate_streams<class c_null_tag_vtable>::call(void);
// public: static bool s_tag_vtable_has_should_load_tag_stream<class c_null_tag_vtable>::call(unsigned long, bool);
// public: static unsigned long s_tag_vtable_has_get_xsync_runtime_platforms<class c_null_tag_vtable>::call(void);
// public: static unsigned long s_tag_vtable_has_get_current_xsync_version<class c_null_tag_vtable>::call(void);
// public: static unsigned long s_tag_vtable_has_get_xsync_version_flags<class c_null_tag_vtable>::call(unsigned long);
// public: static bool s_tag_vtable_has_postprocess_tag_on_sync<class c_null_tag_vtable>::call(long, enum e_runtime_platform_type, class c_cache_file_global_tag_registry *, bool);
// public: static void s_tag_vtable_has_generate_tag_report<class c_null_tag_vtable>::call(long, class c_tag_group_reporter *);
// public: static void s_tag_vtable_has_build_predicted_tag_resources<class c_null_tag_vtable>::call(long, class c_tag_resource_predictor *);
// public: static void s_tag_vtable_has_collect_predicted_tag_resources<class c_null_tag_vtable>::call(long, class c_tag_resource_prediction_collector *);
// public: static bool s_tag_vtable_has_can_group_ever_load_in_game<class c_null_tag_vtable>::call(void);
// public: static void s_tag_vtable_has_optimize_tag_for_cache_file<class c_null_tag_vtable>::call(long, enum e_runtime_platform_type, class c_cache_file_global_tag_registry *, bool);
// public: static void c_tag_group_vtable_defaults::optimize_tag_for_cache_file(long, enum e_runtime_platform_type, class c_cache_file_global_tag_registry *, bool);
// public: static unsigned long s_tag_vtable_has_on_edit_field<class c_null_tag_vtable>::call(long, __int64, struct s_tag_field const *);
// public: static bool s_tag_vtable_has_estimate_final_resource_size<class c_null_tag_vtable>::call(long, struct s_tag_resource_estimated_size *);
// public: static bool s_tag_vtable_has_valid_for_reload_stage<class c_null_tag_vtable>::call(enum e_tag_reload_stage);

//bool creature_effects_timing_new_block_proc(void *)
//{
//    mangled_ppc("?creature_effects_timing_new_block_proc@@YA_NPAX@Z");
//};

//bool creature_postprocess(long, bool)
//{
//    mangled_ppc("?creature_postprocess@@YA_NJ_N@Z");
//};

//void creature_definition_fixup(long)
//{
//    mangled_ppc("?creature_definition_fixup@@YAXJ@Z");
//};

//void creature_definition_teardown(long)
//{
//    mangled_ppc("?creature_definition_teardown@@YAXJ@Z");
//};

//public: c_tag_group_vtable<class c_null_tag_vtable>::c_tag_group_vtable<class c_null_tag_vtable>(void)
//{
//    mangled_ppc("??0?$c_tag_group_vtable@Vc_null_tag_vtable@@@@QAA@XZ");
//};

//public: virtual bool c_tag_group_vtable<class c_null_tag_vtable>::has_custom_postprocess_proc(void) const
//{
//    mangled_ppc("?has_custom_postprocess_proc@?$c_tag_group_vtable@Vc_null_tag_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_group_vtable<class c_null_tag_vtable>::postprocess_tag_thunk(long, bool) const
//{
//    mangled_ppc("?postprocess_tag_thunk@?$c_tag_group_vtable@Vc_null_tag_vtable@@@@UBA_NJ_N@Z");
//};

//public: virtual bool c_tag_group_vtable<class c_null_tag_vtable>::has_custom_missing_tag_proc(void) const
//{
//    mangled_ppc("?has_custom_missing_tag_proc@?$c_tag_group_vtable@Vc_null_tag_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_group_vtable<class c_null_tag_vtable>::handle_missing_tag_thunk(unsigned long, char const *, unsigned long, unsigned long, char const *, long *) const
//{
//    mangled_ppc("?handle_missing_tag_thunk@?$c_tag_group_vtable@Vc_null_tag_vtable@@@@UBAXKPBDKK0PAJ@Z");
//};

//public: virtual bool c_tag_group_vtable<class c_null_tag_vtable>::has_on_save_tag_proc(void) const
//{
//    mangled_ppc("?has_on_save_tag_proc@?$c_tag_group_vtable@Vc_null_tag_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_group_vtable<class c_null_tag_vtable>::on_save_tag_thunk(long) const
//{
//    mangled_ppc("?on_save_tag_thunk@?$c_tag_group_vtable@Vc_null_tag_vtable@@@@UBAXJ@Z");
//};

//public: virtual bool c_tag_group_vtable<class c_null_tag_vtable>::has_write_to_cache_file_proc(void) const
//{
//    mangled_ppc("?has_write_to_cache_file_proc@?$c_tag_group_vtable@Vc_null_tag_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_group_vtable<class c_null_tag_vtable>::write_tag_to_cache_file_thunk(long, unsigned long, class c_cache_file_scratch_allocator *, class c_cache_file_resource_library *, class c_cache_file_tracer *, void **, void **) const
//{
//    mangled_ppc("?write_tag_to_cache_file_thunk@?$c_tag_group_vtable@Vc_null_tag_vtable@@@@UBAXJKPAVc_cache_file_scratch_allocator@@PAVc_cache_file_resource_library@@PAVc_cache_file_tracer@@PAPAX3@Z");
//};

//public: virtual bool c_tag_group_vtable<class c_null_tag_vtable>::has_valid_alternate_streams(void) const
//{
//    mangled_ppc("?has_valid_alternate_streams@?$c_tag_group_vtable@Vc_null_tag_vtable@@@@UBA_NXZ");
//};

//public: virtual struct s_tag_group_stream_list * c_tag_group_vtable<class c_null_tag_vtable>::get_alterante_streams_thunk(void) const
//{
//    mangled_ppc("?get_alterante_streams_thunk@?$c_tag_group_vtable@Vc_null_tag_vtable@@@@UBAPAUs_tag_group_stream_list@@XZ");
//};

//public: virtual bool c_tag_group_vtable<class c_null_tag_vtable>::has_should_load_tag_stream_proc(void) const
//{
//    mangled_ppc("?has_should_load_tag_stream_proc@?$c_tag_group_vtable@Vc_null_tag_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_group_vtable<class c_null_tag_vtable>::should_load_tag_stream_thunk(unsigned long, bool) const
//{
//    mangled_ppc("?should_load_tag_stream_thunk@?$c_tag_group_vtable@Vc_null_tag_vtable@@@@UBA_NK_N@Z");
//};

//public: virtual bool c_tag_group_vtable<class c_null_tag_vtable>::has_custom_xsync_runtime_platforms(void) const
//{
//    mangled_ppc("?has_custom_xsync_runtime_platforms@?$c_tag_group_vtable@Vc_null_tag_vtable@@@@UBA_NXZ");
//};

//public: virtual unsigned long c_tag_group_vtable<class c_null_tag_vtable>::get_xsync_runtime_platforms_thunk(void) const
//{
//    mangled_ppc("?get_xsync_runtime_platforms_thunk@?$c_tag_group_vtable@Vc_null_tag_vtable@@@@UBAKXZ");
//};

//public: virtual bool c_tag_group_vtable<class c_null_tag_vtable>::has_get_current_xsync_version_proc(void) const
//{
//    mangled_ppc("?has_get_current_xsync_version_proc@?$c_tag_group_vtable@Vc_null_tag_vtable@@@@UBA_NXZ");
//};

//public: virtual unsigned long c_tag_group_vtable<class c_null_tag_vtable>::get_current_xsync_version_thunk(void) const
//{
//    mangled_ppc("?get_current_xsync_version_thunk@?$c_tag_group_vtable@Vc_null_tag_vtable@@@@UBAKXZ");
//};

//public: virtual bool c_tag_group_vtable<class c_null_tag_vtable>::has_get_xsync_version_flags_proc(void) const
//{
//    mangled_ppc("?has_get_xsync_version_flags_proc@?$c_tag_group_vtable@Vc_null_tag_vtable@@@@UBA_NXZ");
//};

//public: virtual unsigned long c_tag_group_vtable<class c_null_tag_vtable>::get_xsync_version_flags_thunk(unsigned long) const
//{
//    mangled_ppc("?get_xsync_version_flags_thunk@?$c_tag_group_vtable@Vc_null_tag_vtable@@@@UBAKK@Z");
//};

//public: virtual bool c_tag_group_vtable<class c_null_tag_vtable>::has_postprocess_on_sync_proc(void) const
//{
//    mangled_ppc("?has_postprocess_on_sync_proc@?$c_tag_group_vtable@Vc_null_tag_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_group_vtable<class c_null_tag_vtable>::postprocess_on_sync_thunk(long, enum e_runtime_platform_type, class c_cache_file_global_tag_registry *, bool) const
//{
//    mangled_ppc("?postprocess_on_sync_thunk@?$c_tag_group_vtable@Vc_null_tag_vtable@@@@UBA_NJW4e_runtime_platform_type@@PAVc_cache_file_global_tag_registry@@_N@Z");
//};

//public: virtual bool c_tag_group_vtable<class c_null_tag_vtable>::has_generate_tag_report_proc(void) const
//{
//    mangled_ppc("?has_generate_tag_report_proc@?$c_tag_group_vtable@Vc_null_tag_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_group_vtable<class c_null_tag_vtable>::generate_tag_report_thunk(long, class c_tag_group_reporter *) const
//{
//    mangled_ppc("?generate_tag_report_thunk@?$c_tag_group_vtable@Vc_null_tag_vtable@@@@UBAXJPAVc_tag_group_reporter@@@Z");
//};

//public: virtual bool c_tag_group_vtable<class c_null_tag_vtable>::has_build_tag_resource_prediction_proc(void) const
//{
//    mangled_ppc("?has_build_tag_resource_prediction_proc@?$c_tag_group_vtable@Vc_null_tag_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_group_vtable<class c_null_tag_vtable>::build_predicted_tag_resources_thunk(long, class c_tag_resource_predictor *) const
//{
//    mangled_ppc("?build_predicted_tag_resources_thunk@?$c_tag_group_vtable@Vc_null_tag_vtable@@@@UBAXJPAVc_tag_resource_predictor@@@Z");
//};

//public: virtual bool c_tag_group_vtable<class c_null_tag_vtable>::has_collect_tag_resource_prediction_proc(void) const
//{
//    mangled_ppc("?has_collect_tag_resource_prediction_proc@?$c_tag_group_vtable@Vc_null_tag_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_group_vtable<class c_null_tag_vtable>::collect_predicted_tag_resources_thunk(long, class c_tag_resource_prediction_collector *) const
//{
//    mangled_ppc("?collect_predicted_tag_resources_thunk@?$c_tag_group_vtable@Vc_null_tag_vtable@@@@UBAXJPAVc_tag_resource_prediction_collector@@@Z");
//};

//public: virtual bool c_tag_group_vtable<class c_null_tag_vtable>::has_can_group_ever_load_in_game_proc(void) const
//{
//    mangled_ppc("?has_can_group_ever_load_in_game_proc@?$c_tag_group_vtable@Vc_null_tag_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_group_vtable<class c_null_tag_vtable>::can_group_ever_load_in_game_thunk(void) const
//{
//    mangled_ppc("?can_group_ever_load_in_game_thunk@?$c_tag_group_vtable@Vc_null_tag_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_group_vtable<class c_null_tag_vtable>::has_optimize_for_cache_file_proc(void) const
//{
//    mangled_ppc("?has_optimize_for_cache_file_proc@?$c_tag_group_vtable@Vc_null_tag_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_group_vtable<class c_null_tag_vtable>::optimize_for_cache_file_thunk(long, enum e_runtime_platform_type, class c_cache_file_global_tag_registry *, bool) const
//{
//    mangled_ppc("?optimize_for_cache_file_thunk@?$c_tag_group_vtable@Vc_null_tag_vtable@@@@UBAXJW4e_runtime_platform_type@@PAVc_cache_file_global_tag_registry@@_N@Z");
//};

//public: virtual bool c_tag_group_vtable<class c_null_tag_vtable>::has_on_edit_field_proc(void) const
//{
//    mangled_ppc("?has_on_edit_field_proc@?$c_tag_group_vtable@Vc_null_tag_vtable@@@@UBA_NXZ");
//};

//public: virtual unsigned long c_tag_group_vtable<class c_null_tag_vtable>::on_edit_field_thunk(long, __int64, struct s_tag_field const *) const
//{
//    mangled_ppc("?on_edit_field_thunk@?$c_tag_group_vtable@Vc_null_tag_vtable@@@@UBAKJ_JPBUs_tag_field@@@Z");
//};

//public: virtual bool c_tag_group_vtable<class c_null_tag_vtable>::has_estimate_final_resource_size_proc(void) const
//{
//    mangled_ppc("?has_estimate_final_resource_size_proc@?$c_tag_group_vtable@Vc_null_tag_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_group_vtable<class c_null_tag_vtable>::estimate_final_resource_size_thunk(long, struct s_tag_resource_estimated_size *) const
//{
//    mangled_ppc("?estimate_final_resource_size_thunk@?$c_tag_group_vtable@Vc_null_tag_vtable@@@@UBA_NJPAUs_tag_resource_estimated_size@@@Z");
//};

//public: virtual bool c_tag_group_vtable<class c_null_tag_vtable>::has_valid_for_reload_stage_proc(void) const
//{
//    mangled_ppc("?has_valid_for_reload_stage_proc@?$c_tag_group_vtable@Vc_null_tag_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_group_vtable<class c_null_tag_vtable>::valid_for_reload_stage_thunk(enum e_tag_reload_stage) const
//{
//    mangled_ppc("?valid_for_reload_stage_thunk@?$c_tag_group_vtable@Vc_null_tag_vtable@@@@UBA_NW4e_tag_reload_stage@@@Z");
//};

//public: static bool s_tag_vtable_has_postprocess_tag<class c_null_tag_vtable>::call(long, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_postprocess_tag@Vc_null_tag_vtable@@@@SA_NJ_N@Z");
//};

//public: static void s_tag_vtable_has_handle_missing_tag<class c_null_tag_vtable>::call(unsigned long, char const *, unsigned long, unsigned long, char const *, long *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_handle_missing_tag@Vc_null_tag_vtable@@@@SAXKPBDKK0PAJ@Z");
//};

//public: static void s_tag_vtable_has_on_save_tag<class c_null_tag_vtable>::call(long)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_on_save_tag@Vc_null_tag_vtable@@@@SAXJ@Z");
//};

//public: static void s_tag_vtable_has_write_tag_to_cache_file<class c_null_tag_vtable>::call(long, unsigned long, class c_cache_file_scratch_allocator *, class c_cache_file_resource_library *, class c_cache_file_tracer *, void **, void **)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_write_tag_to_cache_file@Vc_null_tag_vtable@@@@SAXJKPAVc_cache_file_scratch_allocator@@PAVc_cache_file_resource_library@@PAVc_cache_file_tracer@@PAPAX3@Z");
//};

//public: static struct s_tag_group_stream_list * s_tag_vtable_has_get_alternate_streams<class c_null_tag_vtable>::call(void)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_get_alternate_streams@Vc_null_tag_vtable@@@@SAPAUs_tag_group_stream_list@@XZ");
//};

//public: static bool s_tag_vtable_has_should_load_tag_stream<class c_null_tag_vtable>::call(unsigned long, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_should_load_tag_stream@Vc_null_tag_vtable@@@@SA_NK_N@Z");
//};

//public: static unsigned long s_tag_vtable_has_get_xsync_runtime_platforms<class c_null_tag_vtable>::call(void)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_get_xsync_runtime_platforms@Vc_null_tag_vtable@@@@SAKXZ");
//};

//public: static unsigned long s_tag_vtable_has_get_current_xsync_version<class c_null_tag_vtable>::call(void)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_get_current_xsync_version@Vc_null_tag_vtable@@@@SAKXZ");
//};

//public: static unsigned long s_tag_vtable_has_get_xsync_version_flags<class c_null_tag_vtable>::call(unsigned long)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_get_xsync_version_flags@Vc_null_tag_vtable@@@@SAKK@Z");
//};

//public: static bool s_tag_vtable_has_postprocess_tag_on_sync<class c_null_tag_vtable>::call(long, enum e_runtime_platform_type, class c_cache_file_global_tag_registry *, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_postprocess_tag_on_sync@Vc_null_tag_vtable@@@@SA_NJW4e_runtime_platform_type@@PAVc_cache_file_global_tag_registry@@_N@Z");
//};

//public: static void s_tag_vtable_has_generate_tag_report<class c_null_tag_vtable>::call(long, class c_tag_group_reporter *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_generate_tag_report@Vc_null_tag_vtable@@@@SAXJPAVc_tag_group_reporter@@@Z");
//};

//public: static void s_tag_vtable_has_build_predicted_tag_resources<class c_null_tag_vtable>::call(long, class c_tag_resource_predictor *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_build_predicted_tag_resources@Vc_null_tag_vtable@@@@SAXJPAVc_tag_resource_predictor@@@Z");
//};

//public: static void s_tag_vtable_has_collect_predicted_tag_resources<class c_null_tag_vtable>::call(long, class c_tag_resource_prediction_collector *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_collect_predicted_tag_resources@Vc_null_tag_vtable@@@@SAXJPAVc_tag_resource_prediction_collector@@@Z");
//};

//public: static bool s_tag_vtable_has_can_group_ever_load_in_game<class c_null_tag_vtable>::call(void)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_can_group_ever_load_in_game@Vc_null_tag_vtable@@@@SA_NXZ");
//};

//public: static void s_tag_vtable_has_optimize_tag_for_cache_file<class c_null_tag_vtable>::call(long, enum e_runtime_platform_type, class c_cache_file_global_tag_registry *, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_optimize_tag_for_cache_file@Vc_null_tag_vtable@@@@SAXJW4e_runtime_platform_type@@PAVc_cache_file_global_tag_registry@@_N@Z");
//};

//public: static void c_tag_group_vtable_defaults::optimize_tag_for_cache_file(long, enum e_runtime_platform_type, class c_cache_file_global_tag_registry *, bool)
//{
//    mangled_ppc("?optimize_tag_for_cache_file@c_tag_group_vtable_defaults@@SAXJW4e_runtime_platform_type@@PAVc_cache_file_global_tag_registry@@_N@Z");
//};

//public: static unsigned long s_tag_vtable_has_on_edit_field<class c_null_tag_vtable>::call(long, __int64, struct s_tag_field const *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_on_edit_field@Vc_null_tag_vtable@@@@SAKJ_JPBUs_tag_field@@@Z");
//};

//public: static bool s_tag_vtable_has_estimate_final_resource_size<class c_null_tag_vtable>::call(long, struct s_tag_resource_estimated_size *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_estimate_final_resource_size@Vc_null_tag_vtable@@@@SA_NJPAUs_tag_resource_estimated_size@@@Z");
//};

//public: static bool s_tag_vtable_has_valid_for_reload_stage<class c_null_tag_vtable>::call(enum e_tag_reload_stage)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_valid_for_reload_stage@Vc_null_tag_vtable@@@@SA_NW4e_tag_reload_stage@@@Z");
//};

