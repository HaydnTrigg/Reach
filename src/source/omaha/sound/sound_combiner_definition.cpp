/* ---------- headers */

#include "omaha\sound\sound_combiner_definition.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// struct s_tag_group sound_combiner_group; // "?sound_combiner_group@@3Us_tag_group@@A"
// class c_tag_group_vtable<class c_sound_combiner_defintion_vtable> sound_combiner_vtable; // "?sound_combiner_vtable@@3V?$c_tag_group_vtable@Vc_sound_combiner_defintion_vtable@@@@A"
// class c_tag_struct_vtable<class c_sound_combiner_defintion_vtable> sound_combiner_block_struct_struct_vtable; // "?sound_combiner_block_struct_struct_vtable@@3V?$c_tag_struct_vtable@Vc_sound_combiner_defintion_vtable@@@@A"

// public: c_tag_group_vtable<class c_sound_combiner_defintion_vtable>::c_tag_group_vtable<class c_sound_combiner_defintion_vtable>(void);
// public: virtual bool c_tag_group_vtable<class c_sound_combiner_defintion_vtable>::has_custom_postprocess_proc(void) const;
// public: virtual bool c_tag_group_vtable<class c_sound_combiner_defintion_vtable>::postprocess_tag_thunk(long, bool) const;
// public: virtual bool c_tag_group_vtable<class c_sound_combiner_defintion_vtable>::has_custom_missing_tag_proc(void) const;
// public: virtual void c_tag_group_vtable<class c_sound_combiner_defintion_vtable>::handle_missing_tag_thunk(unsigned long, char const *, unsigned long, unsigned long, char const *, long *) const;
// public: virtual bool c_tag_group_vtable<class c_sound_combiner_defintion_vtable>::has_on_save_tag_proc(void) const;
// public: virtual void c_tag_group_vtable<class c_sound_combiner_defintion_vtable>::on_save_tag_thunk(long) const;
// public: virtual bool c_tag_group_vtable<class c_sound_combiner_defintion_vtable>::has_write_to_cache_file_proc(void) const;
// public: virtual void c_tag_group_vtable<class c_sound_combiner_defintion_vtable>::write_tag_to_cache_file_thunk(long, unsigned long, class c_cache_file_scratch_allocator *, class c_cache_file_resource_library *, class c_cache_file_tracer *, void **, void **) const;
// public: virtual bool c_tag_group_vtable<class c_sound_combiner_defintion_vtable>::has_valid_alternate_streams(void) const;
// public: virtual struct s_tag_group_stream_list * c_tag_group_vtable<class c_sound_combiner_defintion_vtable>::get_alterante_streams_thunk(void) const;
// public: virtual bool c_tag_group_vtable<class c_sound_combiner_defintion_vtable>::has_should_load_tag_stream_proc(void) const;
// public: virtual bool c_tag_group_vtable<class c_sound_combiner_defintion_vtable>::should_load_tag_stream_thunk(unsigned long, bool) const;
// public: virtual bool c_tag_group_vtable<class c_sound_combiner_defintion_vtable>::has_custom_xsync_runtime_platforms(void) const;
// public: virtual unsigned long c_tag_group_vtable<class c_sound_combiner_defintion_vtable>::get_xsync_runtime_platforms_thunk(void) const;
// public: virtual bool c_tag_group_vtable<class c_sound_combiner_defintion_vtable>::has_get_current_xsync_version_proc(void) const;
// public: virtual unsigned long c_tag_group_vtable<class c_sound_combiner_defintion_vtable>::get_current_xsync_version_thunk(void) const;
// public: virtual bool c_tag_group_vtable<class c_sound_combiner_defintion_vtable>::has_get_xsync_version_flags_proc(void) const;
// public: virtual unsigned long c_tag_group_vtable<class c_sound_combiner_defintion_vtable>::get_xsync_version_flags_thunk(unsigned long) const;
// public: virtual bool c_tag_group_vtable<class c_sound_combiner_defintion_vtable>::has_postprocess_on_sync_proc(void) const;
// public: virtual bool c_tag_group_vtable<class c_sound_combiner_defintion_vtable>::postprocess_on_sync_thunk(long, enum e_runtime_platform_type, class c_cache_file_global_tag_registry *, bool) const;
// public: virtual bool c_tag_group_vtable<class c_sound_combiner_defintion_vtable>::has_generate_tag_report_proc(void) const;
// public: virtual void c_tag_group_vtable<class c_sound_combiner_defintion_vtable>::generate_tag_report_thunk(long, class c_tag_group_reporter *) const;
// public: virtual bool c_tag_group_vtable<class c_sound_combiner_defintion_vtable>::has_build_tag_resource_prediction_proc(void) const;
// public: virtual void c_tag_group_vtable<class c_sound_combiner_defintion_vtable>::build_predicted_tag_resources_thunk(long, class c_tag_resource_predictor *) const;
// public: virtual bool c_tag_group_vtable<class c_sound_combiner_defintion_vtable>::has_collect_tag_resource_prediction_proc(void) const;
// public: virtual void c_tag_group_vtable<class c_sound_combiner_defintion_vtable>::collect_predicted_tag_resources_thunk(long, class c_tag_resource_prediction_collector *) const;
// public: virtual bool c_tag_group_vtable<class c_sound_combiner_defintion_vtable>::has_can_group_ever_load_in_game_proc(void) const;
// public: virtual bool c_tag_group_vtable<class c_sound_combiner_defintion_vtable>::can_group_ever_load_in_game_thunk(void) const;
// public: virtual bool c_tag_group_vtable<class c_sound_combiner_defintion_vtable>::has_optimize_for_cache_file_proc(void) const;
// public: virtual void c_tag_group_vtable<class c_sound_combiner_defintion_vtable>::optimize_for_cache_file_thunk(long, enum e_runtime_platform_type, class c_cache_file_global_tag_registry *, bool) const;
// public: virtual bool c_tag_group_vtable<class c_sound_combiner_defintion_vtable>::has_on_edit_field_proc(void) const;
// public: virtual unsigned long c_tag_group_vtable<class c_sound_combiner_defintion_vtable>::on_edit_field_thunk(long, __int64, struct s_tag_field const *) const;
// public: virtual bool c_tag_group_vtable<class c_sound_combiner_defintion_vtable>::has_estimate_final_resource_size_proc(void) const;
// public: virtual bool c_tag_group_vtable<class c_sound_combiner_defintion_vtable>::estimate_final_resource_size_thunk(long, struct s_tag_resource_estimated_size *) const;
// public: virtual bool c_tag_group_vtable<class c_sound_combiner_defintion_vtable>::has_valid_for_reload_stage_proc(void) const;
// public: virtual bool c_tag_group_vtable<class c_sound_combiner_defintion_vtable>::valid_for_reload_stage_thunk(enum e_tag_reload_stage) const;
// public: static bool s_tag_vtable_has_postprocess_tag<class c_sound_combiner_defintion_vtable>::call(long, bool);
// public: static bool c_sound_combiner_defintion_vtable::postprocess_tag(long, bool);
// struct s_sound_combiner_definition * sound_combiner_definition_get_mutable(long);
// public: static void s_tag_vtable_has_handle_missing_tag<class c_sound_combiner_defintion_vtable>::call(unsigned long, char const *, unsigned long, unsigned long, char const *, long *);
// public: static void s_tag_vtable_has_on_save_tag<class c_sound_combiner_defintion_vtable>::call(long);
// public: static void s_tag_vtable_has_write_tag_to_cache_file<class c_sound_combiner_defintion_vtable>::call(long, unsigned long, class c_cache_file_scratch_allocator *, class c_cache_file_resource_library *, class c_cache_file_tracer *, void **, void **);
// public: static struct s_tag_group_stream_list * s_tag_vtable_has_get_alternate_streams<class c_sound_combiner_defintion_vtable>::call(void);
// public: static bool s_tag_vtable_has_should_load_tag_stream<class c_sound_combiner_defintion_vtable>::call(unsigned long, bool);
// public: static unsigned long s_tag_vtable_has_get_xsync_runtime_platforms<class c_sound_combiner_defintion_vtable>::call(void);
// public: static unsigned long s_tag_vtable_has_get_current_xsync_version<class c_sound_combiner_defintion_vtable>::call(void);
// public: static unsigned long s_tag_vtable_has_get_xsync_version_flags<class c_sound_combiner_defintion_vtable>::call(unsigned long);
// public: static bool s_tag_vtable_has_postprocess_tag_on_sync<class c_sound_combiner_defintion_vtable>::call(long, enum e_runtime_platform_type, class c_cache_file_global_tag_registry *, bool);
// public: static void s_tag_vtable_has_generate_tag_report<class c_sound_combiner_defintion_vtable>::call(long, class c_tag_group_reporter *);
// public: static void s_tag_vtable_has_build_predicted_tag_resources<class c_sound_combiner_defintion_vtable>::call(long, class c_tag_resource_predictor *);
// public: static void s_tag_vtable_has_collect_predicted_tag_resources<class c_sound_combiner_defintion_vtable>::call(long, class c_tag_resource_prediction_collector *);
// public: static bool s_tag_vtable_has_can_group_ever_load_in_game<class c_sound_combiner_defintion_vtable>::call(void);
// public: static void s_tag_vtable_has_optimize_tag_for_cache_file<class c_sound_combiner_defintion_vtable>::call(long, enum e_runtime_platform_type, class c_cache_file_global_tag_registry *, bool);
// public: static unsigned long s_tag_vtable_has_on_edit_field<class c_sound_combiner_defintion_vtable>::call(long, __int64, struct s_tag_field const *);
// public: static bool s_tag_vtable_has_estimate_final_resource_size<class c_sound_combiner_defintion_vtable>::call(long, struct s_tag_resource_estimated_size *);
// public: static bool s_tag_vtable_has_valid_for_reload_stage<class c_sound_combiner_defintion_vtable>::call(enum e_tag_reload_stage);
// public: c_tag_struct_vtable<class c_sound_combiner_defintion_vtable>::c_tag_struct_vtable<class c_sound_combiner_defintion_vtable>(void);
// public: virtual bool c_tag_struct_vtable<class c_sound_combiner_defintion_vtable>::has_byte_swap_proc(void) const;
// public: virtual void c_tag_struct_vtable<class c_sound_combiner_defintion_vtable>::byte_swap_block_proc(void *) const;
// public: virtual bool c_tag_struct_vtable<class c_sound_combiner_defintion_vtable>::has_postprocess_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_sound_combiner_defintion_vtable>::postprocess_thunk(long, void *, bool) const;
// public: virtual bool c_tag_struct_vtable<class c_sound_combiner_defintion_vtable>::has_format_proc(void) const;
// public: virtual char * c_tag_struct_vtable<class c_sound_combiner_defintion_vtable>::format_thunk(long, __int64, struct s_tag_block *, long, char *, long) const;
// public: virtual bool c_tag_struct_vtable<class c_sound_combiner_defintion_vtable>::has_on_delete_proc(void) const;
// public: virtual void c_tag_struct_vtable<class c_sound_combiner_defintion_vtable>::on_delete_thunk(void *) const;
// public: virtual bool c_tag_struct_vtable<class c_sound_combiner_defintion_vtable>::has_on_new_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_sound_combiner_defintion_vtable>::on_new_thunk(void *) const;
// public: virtual bool c_tag_struct_vtable<class c_sound_combiner_defintion_vtable>::has_on_copy_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_sound_combiner_defintion_vtable>::on_copy_thunk(void const *, void *) const;
// public: virtual bool c_tag_struct_vtable<class c_sound_combiner_defintion_vtable>::has_write_to_cache_file_proc(void) const;
// public: virtual void c_tag_struct_vtable<class c_sound_combiner_defintion_vtable>::write_to_cache_file_thunk(long, struct s_tag_block *, struct s_cache_file_builder_stream_context const *, void **, void **) const;
// public: virtual bool c_tag_struct_vtable<class c_sound_combiner_defintion_vtable>::has_block_does_not_exist_in_cache_file_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_sound_combiner_defintion_vtable>::block_does_not_exist_in_cache_file_thunk(void) const;
// public: virtual bool c_tag_struct_vtable<class c_sound_combiner_defintion_vtable>::has_fixup_old_struct_definition(void) const;
// public: virtual struct s_tag_struct_definition * c_tag_struct_vtable<class c_sound_combiner_defintion_vtable>::get_fixup_source_definition_thunk(void) const;
// public: virtual bool c_tag_struct_vtable<class c_sound_combiner_defintion_vtable>::has_fixup_old_struct_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_sound_combiner_defintion_vtable>::fixup_old_struct_thunk(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool) const;
// public: virtual bool c_tag_struct_vtable<class c_sound_combiner_defintion_vtable>::has_fixup_old_struct_from_disk_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_sound_combiner_defintion_vtable>::fixup_old_struct_from_disk_thunk(struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool) const;
// public: static void s_tag_vtable_has_byte_swap_proc<class c_sound_combiner_defintion_vtable>::call(void *);
// public: static bool s_tag_vtable_has_postprocess_proc<class c_sound_combiner_defintion_vtable>::call(long, void *, bool);
// public: static char * s_tag_vtable_has_format_proc<class c_sound_combiner_defintion_vtable>::call(long, __int64, struct s_tag_block *, long, char *, long);
// public: static void s_tag_vtable_has_on_delete_proc<class c_sound_combiner_defintion_vtable>::call(void *);
// public: static bool s_tag_vtable_has_on_new_proc<class c_sound_combiner_defintion_vtable>::call(void *);
// public: static bool s_tag_vtable_has_on_copy_proc<class c_sound_combiner_defintion_vtable>::call(void const *, void *);
// public: static void s_tag_vtable_has_write_to_cache_file_proc<class c_sound_combiner_defintion_vtable>::call(long, struct s_tag_block *, struct s_cache_file_builder_stream_context const *, void **, void **);
// public: static bool s_tag_vtable_has_block_does_not_exist_in_cache_file<class c_sound_combiner_defintion_vtable>::call(void);
// public: static struct s_tag_struct_definition * s_tag_vtable_has_get_fixup_source_definition_proc<class c_sound_combiner_defintion_vtable>::call(void);
// public: static bool s_tag_vtable_has_fixup_old_struct_proc<class c_sound_combiner_defintion_vtable>::call(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool);
// public: static bool s_tag_vtable_has_fixup_old_struct_from_disk_proc<class c_sound_combiner_defintion_vtable>::call(struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool);

//public: c_tag_group_vtable<class c_sound_combiner_defintion_vtable>::c_tag_group_vtable<class c_sound_combiner_defintion_vtable>(void)
//{
//    mangled_ppc("??0?$c_tag_group_vtable@Vc_sound_combiner_defintion_vtable@@@@QAA@XZ");
//};

//public: virtual bool c_tag_group_vtable<class c_sound_combiner_defintion_vtable>::has_custom_postprocess_proc(void) const
//{
//    mangled_ppc("?has_custom_postprocess_proc@?$c_tag_group_vtable@Vc_sound_combiner_defintion_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_group_vtable<class c_sound_combiner_defintion_vtable>::postprocess_tag_thunk(long, bool) const
//{
//    mangled_ppc("?postprocess_tag_thunk@?$c_tag_group_vtable@Vc_sound_combiner_defintion_vtable@@@@UBA_NJ_N@Z");
//};

//public: virtual bool c_tag_group_vtable<class c_sound_combiner_defintion_vtable>::has_custom_missing_tag_proc(void) const
//{
//    mangled_ppc("?has_custom_missing_tag_proc@?$c_tag_group_vtable@Vc_sound_combiner_defintion_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_group_vtable<class c_sound_combiner_defintion_vtable>::handle_missing_tag_thunk(unsigned long, char const *, unsigned long, unsigned long, char const *, long *) const
//{
//    mangled_ppc("?handle_missing_tag_thunk@?$c_tag_group_vtable@Vc_sound_combiner_defintion_vtable@@@@UBAXKPBDKK0PAJ@Z");
//};

//public: virtual bool c_tag_group_vtable<class c_sound_combiner_defintion_vtable>::has_on_save_tag_proc(void) const
//{
//    mangled_ppc("?has_on_save_tag_proc@?$c_tag_group_vtable@Vc_sound_combiner_defintion_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_group_vtable<class c_sound_combiner_defintion_vtable>::on_save_tag_thunk(long) const
//{
//    mangled_ppc("?on_save_tag_thunk@?$c_tag_group_vtable@Vc_sound_combiner_defintion_vtable@@@@UBAXJ@Z");
//};

//public: virtual bool c_tag_group_vtable<class c_sound_combiner_defintion_vtable>::has_write_to_cache_file_proc(void) const
//{
//    mangled_ppc("?has_write_to_cache_file_proc@?$c_tag_group_vtable@Vc_sound_combiner_defintion_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_group_vtable<class c_sound_combiner_defintion_vtable>::write_tag_to_cache_file_thunk(long, unsigned long, class c_cache_file_scratch_allocator *, class c_cache_file_resource_library *, class c_cache_file_tracer *, void **, void **) const
//{
//    mangled_ppc("?write_tag_to_cache_file_thunk@?$c_tag_group_vtable@Vc_sound_combiner_defintion_vtable@@@@UBAXJKPAVc_cache_file_scratch_allocator@@PAVc_cache_file_resource_library@@PAVc_cache_file_tracer@@PAPAX3@Z");
//};

//public: virtual bool c_tag_group_vtable<class c_sound_combiner_defintion_vtable>::has_valid_alternate_streams(void) const
//{
//    mangled_ppc("?has_valid_alternate_streams@?$c_tag_group_vtable@Vc_sound_combiner_defintion_vtable@@@@UBA_NXZ");
//};

//public: virtual struct s_tag_group_stream_list * c_tag_group_vtable<class c_sound_combiner_defintion_vtable>::get_alterante_streams_thunk(void) const
//{
//    mangled_ppc("?get_alterante_streams_thunk@?$c_tag_group_vtable@Vc_sound_combiner_defintion_vtable@@@@UBAPAUs_tag_group_stream_list@@XZ");
//};

//public: virtual bool c_tag_group_vtable<class c_sound_combiner_defintion_vtable>::has_should_load_tag_stream_proc(void) const
//{
//    mangled_ppc("?has_should_load_tag_stream_proc@?$c_tag_group_vtable@Vc_sound_combiner_defintion_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_group_vtable<class c_sound_combiner_defintion_vtable>::should_load_tag_stream_thunk(unsigned long, bool) const
//{
//    mangled_ppc("?should_load_tag_stream_thunk@?$c_tag_group_vtable@Vc_sound_combiner_defintion_vtable@@@@UBA_NK_N@Z");
//};

//public: virtual bool c_tag_group_vtable<class c_sound_combiner_defintion_vtable>::has_custom_xsync_runtime_platforms(void) const
//{
//    mangled_ppc("?has_custom_xsync_runtime_platforms@?$c_tag_group_vtable@Vc_sound_combiner_defintion_vtable@@@@UBA_NXZ");
//};

//public: virtual unsigned long c_tag_group_vtable<class c_sound_combiner_defintion_vtable>::get_xsync_runtime_platforms_thunk(void) const
//{
//    mangled_ppc("?get_xsync_runtime_platforms_thunk@?$c_tag_group_vtable@Vc_sound_combiner_defintion_vtable@@@@UBAKXZ");
//};

//public: virtual bool c_tag_group_vtable<class c_sound_combiner_defintion_vtable>::has_get_current_xsync_version_proc(void) const
//{
//    mangled_ppc("?has_get_current_xsync_version_proc@?$c_tag_group_vtable@Vc_sound_combiner_defintion_vtable@@@@UBA_NXZ");
//};

//public: virtual unsigned long c_tag_group_vtable<class c_sound_combiner_defintion_vtable>::get_current_xsync_version_thunk(void) const
//{
//    mangled_ppc("?get_current_xsync_version_thunk@?$c_tag_group_vtable@Vc_sound_combiner_defintion_vtable@@@@UBAKXZ");
//};

//public: virtual bool c_tag_group_vtable<class c_sound_combiner_defintion_vtable>::has_get_xsync_version_flags_proc(void) const
//{
//    mangled_ppc("?has_get_xsync_version_flags_proc@?$c_tag_group_vtable@Vc_sound_combiner_defintion_vtable@@@@UBA_NXZ");
//};

//public: virtual unsigned long c_tag_group_vtable<class c_sound_combiner_defintion_vtable>::get_xsync_version_flags_thunk(unsigned long) const
//{
//    mangled_ppc("?get_xsync_version_flags_thunk@?$c_tag_group_vtable@Vc_sound_combiner_defintion_vtable@@@@UBAKK@Z");
//};

//public: virtual bool c_tag_group_vtable<class c_sound_combiner_defintion_vtable>::has_postprocess_on_sync_proc(void) const
//{
//    mangled_ppc("?has_postprocess_on_sync_proc@?$c_tag_group_vtable@Vc_sound_combiner_defintion_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_group_vtable<class c_sound_combiner_defintion_vtable>::postprocess_on_sync_thunk(long, enum e_runtime_platform_type, class c_cache_file_global_tag_registry *, bool) const
//{
//    mangled_ppc("?postprocess_on_sync_thunk@?$c_tag_group_vtable@Vc_sound_combiner_defintion_vtable@@@@UBA_NJW4e_runtime_platform_type@@PAVc_cache_file_global_tag_registry@@_N@Z");
//};

//public: virtual bool c_tag_group_vtable<class c_sound_combiner_defintion_vtable>::has_generate_tag_report_proc(void) const
//{
//    mangled_ppc("?has_generate_tag_report_proc@?$c_tag_group_vtable@Vc_sound_combiner_defintion_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_group_vtable<class c_sound_combiner_defintion_vtable>::generate_tag_report_thunk(long, class c_tag_group_reporter *) const
//{
//    mangled_ppc("?generate_tag_report_thunk@?$c_tag_group_vtable@Vc_sound_combiner_defintion_vtable@@@@UBAXJPAVc_tag_group_reporter@@@Z");
//};

//public: virtual bool c_tag_group_vtable<class c_sound_combiner_defintion_vtable>::has_build_tag_resource_prediction_proc(void) const
//{
//    mangled_ppc("?has_build_tag_resource_prediction_proc@?$c_tag_group_vtable@Vc_sound_combiner_defintion_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_group_vtable<class c_sound_combiner_defintion_vtable>::build_predicted_tag_resources_thunk(long, class c_tag_resource_predictor *) const
//{
//    mangled_ppc("?build_predicted_tag_resources_thunk@?$c_tag_group_vtable@Vc_sound_combiner_defintion_vtable@@@@UBAXJPAVc_tag_resource_predictor@@@Z");
//};

//public: virtual bool c_tag_group_vtable<class c_sound_combiner_defintion_vtable>::has_collect_tag_resource_prediction_proc(void) const
//{
//    mangled_ppc("?has_collect_tag_resource_prediction_proc@?$c_tag_group_vtable@Vc_sound_combiner_defintion_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_group_vtable<class c_sound_combiner_defintion_vtable>::collect_predicted_tag_resources_thunk(long, class c_tag_resource_prediction_collector *) const
//{
//    mangled_ppc("?collect_predicted_tag_resources_thunk@?$c_tag_group_vtable@Vc_sound_combiner_defintion_vtable@@@@UBAXJPAVc_tag_resource_prediction_collector@@@Z");
//};

//public: virtual bool c_tag_group_vtable<class c_sound_combiner_defintion_vtable>::has_can_group_ever_load_in_game_proc(void) const
//{
//    mangled_ppc("?has_can_group_ever_load_in_game_proc@?$c_tag_group_vtable@Vc_sound_combiner_defintion_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_group_vtable<class c_sound_combiner_defintion_vtable>::can_group_ever_load_in_game_thunk(void) const
//{
//    mangled_ppc("?can_group_ever_load_in_game_thunk@?$c_tag_group_vtable@Vc_sound_combiner_defintion_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_group_vtable<class c_sound_combiner_defintion_vtable>::has_optimize_for_cache_file_proc(void) const
//{
//    mangled_ppc("?has_optimize_for_cache_file_proc@?$c_tag_group_vtable@Vc_sound_combiner_defintion_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_group_vtable<class c_sound_combiner_defintion_vtable>::optimize_for_cache_file_thunk(long, enum e_runtime_platform_type, class c_cache_file_global_tag_registry *, bool) const
//{
//    mangled_ppc("?optimize_for_cache_file_thunk@?$c_tag_group_vtable@Vc_sound_combiner_defintion_vtable@@@@UBAXJW4e_runtime_platform_type@@PAVc_cache_file_global_tag_registry@@_N@Z");
//};

//public: virtual bool c_tag_group_vtable<class c_sound_combiner_defintion_vtable>::has_on_edit_field_proc(void) const
//{
//    mangled_ppc("?has_on_edit_field_proc@?$c_tag_group_vtable@Vc_sound_combiner_defintion_vtable@@@@UBA_NXZ");
//};

//public: virtual unsigned long c_tag_group_vtable<class c_sound_combiner_defintion_vtable>::on_edit_field_thunk(long, __int64, struct s_tag_field const *) const
//{
//    mangled_ppc("?on_edit_field_thunk@?$c_tag_group_vtable@Vc_sound_combiner_defintion_vtable@@@@UBAKJ_JPBUs_tag_field@@@Z");
//};

//public: virtual bool c_tag_group_vtable<class c_sound_combiner_defintion_vtable>::has_estimate_final_resource_size_proc(void) const
//{
//    mangled_ppc("?has_estimate_final_resource_size_proc@?$c_tag_group_vtable@Vc_sound_combiner_defintion_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_group_vtable<class c_sound_combiner_defintion_vtable>::estimate_final_resource_size_thunk(long, struct s_tag_resource_estimated_size *) const
//{
//    mangled_ppc("?estimate_final_resource_size_thunk@?$c_tag_group_vtable@Vc_sound_combiner_defintion_vtable@@@@UBA_NJPAUs_tag_resource_estimated_size@@@Z");
//};

//public: virtual bool c_tag_group_vtable<class c_sound_combiner_defintion_vtable>::has_valid_for_reload_stage_proc(void) const
//{
//    mangled_ppc("?has_valid_for_reload_stage_proc@?$c_tag_group_vtable@Vc_sound_combiner_defintion_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_group_vtable<class c_sound_combiner_defintion_vtable>::valid_for_reload_stage_thunk(enum e_tag_reload_stage) const
//{
//    mangled_ppc("?valid_for_reload_stage_thunk@?$c_tag_group_vtable@Vc_sound_combiner_defintion_vtable@@@@UBA_NW4e_tag_reload_stage@@@Z");
//};

//public: static bool s_tag_vtable_has_postprocess_tag<class c_sound_combiner_defintion_vtable>::call(long, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_postprocess_tag@Vc_sound_combiner_defintion_vtable@@@@SA_NJ_N@Z");
//};

//public: static bool c_sound_combiner_defintion_vtable::postprocess_tag(long, bool)
//{
//    mangled_ppc("?postprocess_tag@c_sound_combiner_defintion_vtable@@SA_NJ_N@Z");
//};

//struct s_sound_combiner_definition * sound_combiner_definition_get_mutable(long)
//{
//    mangled_ppc("?sound_combiner_definition_get_mutable@@YAPAUs_sound_combiner_definition@@J@Z");
//};

//public: static void s_tag_vtable_has_handle_missing_tag<class c_sound_combiner_defintion_vtable>::call(unsigned long, char const *, unsigned long, unsigned long, char const *, long *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_handle_missing_tag@Vc_sound_combiner_defintion_vtable@@@@SAXKPBDKK0PAJ@Z");
//};

//public: static void s_tag_vtable_has_on_save_tag<class c_sound_combiner_defintion_vtable>::call(long)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_on_save_tag@Vc_sound_combiner_defintion_vtable@@@@SAXJ@Z");
//};

//public: static void s_tag_vtable_has_write_tag_to_cache_file<class c_sound_combiner_defintion_vtable>::call(long, unsigned long, class c_cache_file_scratch_allocator *, class c_cache_file_resource_library *, class c_cache_file_tracer *, void **, void **)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_write_tag_to_cache_file@Vc_sound_combiner_defintion_vtable@@@@SAXJKPAVc_cache_file_scratch_allocator@@PAVc_cache_file_resource_library@@PAVc_cache_file_tracer@@PAPAX3@Z");
//};

//public: static struct s_tag_group_stream_list * s_tag_vtable_has_get_alternate_streams<class c_sound_combiner_defintion_vtable>::call(void)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_get_alternate_streams@Vc_sound_combiner_defintion_vtable@@@@SAPAUs_tag_group_stream_list@@XZ");
//};

//public: static bool s_tag_vtable_has_should_load_tag_stream<class c_sound_combiner_defintion_vtable>::call(unsigned long, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_should_load_tag_stream@Vc_sound_combiner_defintion_vtable@@@@SA_NK_N@Z");
//};

//public: static unsigned long s_tag_vtable_has_get_xsync_runtime_platforms<class c_sound_combiner_defintion_vtable>::call(void)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_get_xsync_runtime_platforms@Vc_sound_combiner_defintion_vtable@@@@SAKXZ");
//};

//public: static unsigned long s_tag_vtable_has_get_current_xsync_version<class c_sound_combiner_defintion_vtable>::call(void)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_get_current_xsync_version@Vc_sound_combiner_defintion_vtable@@@@SAKXZ");
//};

//public: static unsigned long s_tag_vtable_has_get_xsync_version_flags<class c_sound_combiner_defintion_vtable>::call(unsigned long)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_get_xsync_version_flags@Vc_sound_combiner_defintion_vtable@@@@SAKK@Z");
//};

//public: static bool s_tag_vtable_has_postprocess_tag_on_sync<class c_sound_combiner_defintion_vtable>::call(long, enum e_runtime_platform_type, class c_cache_file_global_tag_registry *, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_postprocess_tag_on_sync@Vc_sound_combiner_defintion_vtable@@@@SA_NJW4e_runtime_platform_type@@PAVc_cache_file_global_tag_registry@@_N@Z");
//};

//public: static void s_tag_vtable_has_generate_tag_report<class c_sound_combiner_defintion_vtable>::call(long, class c_tag_group_reporter *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_generate_tag_report@Vc_sound_combiner_defintion_vtable@@@@SAXJPAVc_tag_group_reporter@@@Z");
//};

//public: static void s_tag_vtable_has_build_predicted_tag_resources<class c_sound_combiner_defintion_vtable>::call(long, class c_tag_resource_predictor *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_build_predicted_tag_resources@Vc_sound_combiner_defintion_vtable@@@@SAXJPAVc_tag_resource_predictor@@@Z");
//};

//public: static void s_tag_vtable_has_collect_predicted_tag_resources<class c_sound_combiner_defintion_vtable>::call(long, class c_tag_resource_prediction_collector *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_collect_predicted_tag_resources@Vc_sound_combiner_defintion_vtable@@@@SAXJPAVc_tag_resource_prediction_collector@@@Z");
//};

//public: static bool s_tag_vtable_has_can_group_ever_load_in_game<class c_sound_combiner_defintion_vtable>::call(void)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_can_group_ever_load_in_game@Vc_sound_combiner_defintion_vtable@@@@SA_NXZ");
//};

//public: static void s_tag_vtable_has_optimize_tag_for_cache_file<class c_sound_combiner_defintion_vtable>::call(long, enum e_runtime_platform_type, class c_cache_file_global_tag_registry *, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_optimize_tag_for_cache_file@Vc_sound_combiner_defintion_vtable@@@@SAXJW4e_runtime_platform_type@@PAVc_cache_file_global_tag_registry@@_N@Z");
//};

//public: static unsigned long s_tag_vtable_has_on_edit_field<class c_sound_combiner_defintion_vtable>::call(long, __int64, struct s_tag_field const *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_on_edit_field@Vc_sound_combiner_defintion_vtable@@@@SAKJ_JPBUs_tag_field@@@Z");
//};

//public: static bool s_tag_vtable_has_estimate_final_resource_size<class c_sound_combiner_defintion_vtable>::call(long, struct s_tag_resource_estimated_size *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_estimate_final_resource_size@Vc_sound_combiner_defintion_vtable@@@@SA_NJPAUs_tag_resource_estimated_size@@@Z");
//};

//public: static bool s_tag_vtable_has_valid_for_reload_stage<class c_sound_combiner_defintion_vtable>::call(enum e_tag_reload_stage)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_valid_for_reload_stage@Vc_sound_combiner_defintion_vtable@@@@SA_NW4e_tag_reload_stage@@@Z");
//};

//public: c_tag_struct_vtable<class c_sound_combiner_defintion_vtable>::c_tag_struct_vtable<class c_sound_combiner_defintion_vtable>(void)
//{
//    mangled_ppc("??0?$c_tag_struct_vtable@Vc_sound_combiner_defintion_vtable@@@@QAA@XZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_sound_combiner_defintion_vtable>::has_byte_swap_proc(void) const
//{
//    mangled_ppc("?has_byte_swap_proc@?$c_tag_struct_vtable@Vc_sound_combiner_defintion_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_struct_vtable<class c_sound_combiner_defintion_vtable>::byte_swap_block_proc(void *) const
//{
//    mangled_ppc("?byte_swap_block_proc@?$c_tag_struct_vtable@Vc_sound_combiner_defintion_vtable@@@@UBAXPAX@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_sound_combiner_defintion_vtable>::has_postprocess_proc(void) const
//{
//    mangled_ppc("?has_postprocess_proc@?$c_tag_struct_vtable@Vc_sound_combiner_defintion_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_sound_combiner_defintion_vtable>::postprocess_thunk(long, void *, bool) const
//{
//    mangled_ppc("?postprocess_thunk@?$c_tag_struct_vtable@Vc_sound_combiner_defintion_vtable@@@@UBA_NJPAX_N@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_sound_combiner_defintion_vtable>::has_format_proc(void) const
//{
//    mangled_ppc("?has_format_proc@?$c_tag_struct_vtable@Vc_sound_combiner_defintion_vtable@@@@UBA_NXZ");
//};

//public: virtual char * c_tag_struct_vtable<class c_sound_combiner_defintion_vtable>::format_thunk(long, __int64, struct s_tag_block *, long, char *, long) const
//{
//    mangled_ppc("?format_thunk@?$c_tag_struct_vtable@Vc_sound_combiner_defintion_vtable@@@@UBAPADJ_JPAUs_tag_block@@JPADJ@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_sound_combiner_defintion_vtable>::has_on_delete_proc(void) const
//{
//    mangled_ppc("?has_on_delete_proc@?$c_tag_struct_vtable@Vc_sound_combiner_defintion_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_struct_vtable<class c_sound_combiner_defintion_vtable>::on_delete_thunk(void *) const
//{
//    mangled_ppc("?on_delete_thunk@?$c_tag_struct_vtable@Vc_sound_combiner_defintion_vtable@@@@UBAXPAX@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_sound_combiner_defintion_vtable>::has_on_new_proc(void) const
//{
//    mangled_ppc("?has_on_new_proc@?$c_tag_struct_vtable@Vc_sound_combiner_defintion_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_sound_combiner_defintion_vtable>::on_new_thunk(void *) const
//{
//    mangled_ppc("?on_new_thunk@?$c_tag_struct_vtable@Vc_sound_combiner_defintion_vtable@@@@UBA_NPAX@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_sound_combiner_defintion_vtable>::has_on_copy_proc(void) const
//{
//    mangled_ppc("?has_on_copy_proc@?$c_tag_struct_vtable@Vc_sound_combiner_defintion_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_sound_combiner_defintion_vtable>::on_copy_thunk(void const *, void *) const
//{
//    mangled_ppc("?on_copy_thunk@?$c_tag_struct_vtable@Vc_sound_combiner_defintion_vtable@@@@UBA_NPBXPAX@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_sound_combiner_defintion_vtable>::has_write_to_cache_file_proc(void) const
//{
//    mangled_ppc("?has_write_to_cache_file_proc@?$c_tag_struct_vtable@Vc_sound_combiner_defintion_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_struct_vtable<class c_sound_combiner_defintion_vtable>::write_to_cache_file_thunk(long, struct s_tag_block *, struct s_cache_file_builder_stream_context const *, void **, void **) const
//{
//    mangled_ppc("?write_to_cache_file_thunk@?$c_tag_struct_vtable@Vc_sound_combiner_defintion_vtable@@@@UBAXJPAUs_tag_block@@PBUs_cache_file_builder_stream_context@@PAPAX2@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_sound_combiner_defintion_vtable>::has_block_does_not_exist_in_cache_file_proc(void) const
//{
//    mangled_ppc("?has_block_does_not_exist_in_cache_file_proc@?$c_tag_struct_vtable@Vc_sound_combiner_defintion_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_sound_combiner_defintion_vtable>::block_does_not_exist_in_cache_file_thunk(void) const
//{
//    mangled_ppc("?block_does_not_exist_in_cache_file_thunk@?$c_tag_struct_vtable@Vc_sound_combiner_defintion_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_sound_combiner_defintion_vtable>::has_fixup_old_struct_definition(void) const
//{
//    mangled_ppc("?has_fixup_old_struct_definition@?$c_tag_struct_vtable@Vc_sound_combiner_defintion_vtable@@@@UBA_NXZ");
//};

//public: virtual struct s_tag_struct_definition * c_tag_struct_vtable<class c_sound_combiner_defintion_vtable>::get_fixup_source_definition_thunk(void) const
//{
//    mangled_ppc("?get_fixup_source_definition_thunk@?$c_tag_struct_vtable@Vc_sound_combiner_defintion_vtable@@@@UBAPAUs_tag_struct_definition@@XZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_sound_combiner_defintion_vtable>::has_fixup_old_struct_proc(void) const
//{
//    mangled_ppc("?has_fixup_old_struct_proc@?$c_tag_struct_vtable@Vc_sound_combiner_defintion_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_sound_combiner_defintion_vtable>::fixup_old_struct_thunk(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool) const
//{
//    mangled_ppc("?fixup_old_struct_thunk@?$c_tag_struct_vtable@Vc_sound_combiner_defintion_vtable@@@@UBA_NAAV?$c_basic_buffer@X@@PBUs_tag_struct_definition@@01PAVc_tag_allocator@@_N@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_sound_combiner_defintion_vtable>::has_fixup_old_struct_from_disk_proc(void) const
//{
//    mangled_ppc("?has_fixup_old_struct_from_disk_proc@?$c_tag_struct_vtable@Vc_sound_combiner_defintion_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_sound_combiner_defintion_vtable>::fixup_old_struct_from_disk_thunk(struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool) const
//{
//    mangled_ppc("?fixup_old_struct_from_disk_thunk@?$c_tag_struct_vtable@Vc_sound_combiner_defintion_vtable@@@@UBA_NPBUs_tag_struct_definition@@AAV?$c_basic_buffer@X@@010PAVc_tag_allocator@@_N@Z");
//};

//public: static void s_tag_vtable_has_byte_swap_proc<class c_sound_combiner_defintion_vtable>::call(void *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_byte_swap_proc@Vc_sound_combiner_defintion_vtable@@@@SAXPAX@Z");
//};

//public: static bool s_tag_vtable_has_postprocess_proc<class c_sound_combiner_defintion_vtable>::call(long, void *, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_postprocess_proc@Vc_sound_combiner_defintion_vtable@@@@SA_NJPAX_N@Z");
//};

//public: static char * s_tag_vtable_has_format_proc<class c_sound_combiner_defintion_vtable>::call(long, __int64, struct s_tag_block *, long, char *, long)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_format_proc@Vc_sound_combiner_defintion_vtable@@@@SAPADJ_JPAUs_tag_block@@JPADJ@Z");
//};

//public: static void s_tag_vtable_has_on_delete_proc<class c_sound_combiner_defintion_vtable>::call(void *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_on_delete_proc@Vc_sound_combiner_defintion_vtable@@@@SAXPAX@Z");
//};

//public: static bool s_tag_vtable_has_on_new_proc<class c_sound_combiner_defintion_vtable>::call(void *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_on_new_proc@Vc_sound_combiner_defintion_vtable@@@@SA_NPAX@Z");
//};

//public: static bool s_tag_vtable_has_on_copy_proc<class c_sound_combiner_defintion_vtable>::call(void const *, void *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_on_copy_proc@Vc_sound_combiner_defintion_vtable@@@@SA_NPBXPAX@Z");
//};

//public: static void s_tag_vtable_has_write_to_cache_file_proc<class c_sound_combiner_defintion_vtable>::call(long, struct s_tag_block *, struct s_cache_file_builder_stream_context const *, void **, void **)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_write_to_cache_file_proc@Vc_sound_combiner_defintion_vtable@@@@SAXJPAUs_tag_block@@PBUs_cache_file_builder_stream_context@@PAPAX2@Z");
//};

//public: static bool s_tag_vtable_has_block_does_not_exist_in_cache_file<class c_sound_combiner_defintion_vtable>::call(void)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_block_does_not_exist_in_cache_file@Vc_sound_combiner_defintion_vtable@@@@SA_NXZ");
//};

//public: static struct s_tag_struct_definition * s_tag_vtable_has_get_fixup_source_definition_proc<class c_sound_combiner_defintion_vtable>::call(void)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_get_fixup_source_definition_proc@Vc_sound_combiner_defintion_vtable@@@@SAPAUs_tag_struct_definition@@XZ");
//};

//public: static bool s_tag_vtable_has_fixup_old_struct_proc<class c_sound_combiner_defintion_vtable>::call(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_fixup_old_struct_proc@Vc_sound_combiner_defintion_vtable@@@@SA_NAAV?$c_basic_buffer@X@@PBUs_tag_struct_definition@@01PAVc_tag_allocator@@_N@Z");
//};

//public: static bool s_tag_vtable_has_fixup_old_struct_from_disk_proc<class c_sound_combiner_defintion_vtable>::call(struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_fixup_old_struct_from_disk_proc@Vc_sound_combiner_defintion_vtable@@@@SA_NPBUs_tag_struct_definition@@AAV?$c_basic_buffer@X@@010PAVc_tag_allocator@@_N@Z");
//};

