/* ---------- headers */

#include "omaha\effects\effect_definitions.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// char const **effect_dispositions_strings; // "?effect_dispositions_strings@@3PAPBDA"
// struct s_string_list_definition effect_dispositions; // "?effect_dispositions@@3Us_string_list_definition@@A"
// char const **effect_environments_strings; // "?effect_environments_strings@@3PAPBDA"
// struct s_string_list_definition effect_environments; // "?effect_environments@@3Us_string_list_definition@@A"
// char const **effect_camera_modes_strings; // "?effect_camera_modes_strings@@3PAPBDA"
// struct s_string_list_definition effect_camera_modes; // "?effect_camera_modes@@3Us_string_list_definition@@A"
// struct s_tag_block_definition effect_locations_block; // "?effect_locations_block@@3Us_tag_block_definition@@A"
// struct s_tag_struct_definition effect_locations_block_struct_definition; // "?effect_locations_block_struct_definition@@3Us_tag_struct_definition@@A"
// struct s_tag_reference_definition global_effect_reference; // "?global_effect_reference@@3Us_tag_reference_definition@@A"
// struct s_tag_group effect_group; // "?effect_group@@3Us_tag_group@@A"
// class c_tag_struct_vtable<class c_null_tag_vtable> effect_looping_sound_block_struct_struct_vtable; // "?effect_looping_sound_block_struct_struct_vtable@@3V?$c_tag_struct_vtable@Vc_null_tag_vtable@@@@A"
// class c_tag_struct_vtable<class c_null_tag_vtable> effect_v0_struct_vtable; // "?effect_v0_struct_vtable@@3V?$c_tag_struct_vtable@Vc_null_tag_vtable@@@@A"
// class c_tag_group_vtable<class effect_tag_vtable> effect_vtable; // "?effect_vtable@@3V?$c_tag_group_vtable@Veffect_tag_vtable@@@@A"
// class c_tag_struct_vtable<class effect_tag_vtable> effect_block_struct_struct_vtable; // "?effect_block_struct_struct_vtable@@3V?$c_tag_struct_vtable@Veffect_tag_vtable@@@@A"

// bool effect_part_deterministic(long);
// bool effect_part_postprocess(long, struct effect_part_definition *, bool);
// public: bool s_effect_scrubber::scrub(long, bool);
// public: void s_effect_scrubber::scrub_events(void);
// public: void s_effect_scrubber::scrub_event_accelerations(struct effect_event_definition *);
// public: bool s_effect_scrubber::valid_location_index(long);
// public: long s_effect_scrubber::find_or_create_default_location_index(void);
// public: void s_effect_scrubber::scrub_event_parts(struct effect_event_definition *);
// public: void s_effect_scrubber::scrub_event_particle_systems(struct effect_event_definition *);
// public: void s_effect_scrubber::build_flags(void);
// public: float c_particle_system_definition::get_max_lifespan(void) const;
// public: long c_particle_definition::get_requires_lightprobe(void) const;
// public: static struct s_cheap_particle_emitter const * s_cheap_particle_emitter::get(long);
// public: bool s_cheap_particle_emitter::requires_lighting_sample(void) const;
// public: long c_contrail_definition::get_requires_lightprobe(void) const;
// public: float c_contrail_definition::get_max_lifespan(void) const;
// public: class c_editable_property<class c_contrail_states> const * c_contrail_definition::get_profile_lifespan(void) const;
// public: void s_effect_scrubber::scrub_locations(void);
// public: c_flags<enum e_effect_location_flags, unsigned short, 3, struct s_default_enum_string_resolver>::c_flags<enum e_effect_location_flags, unsigned short, 3, struct s_default_enum_string_resolver>(void);
// public: void c_flags_no_init<enum e_effect_definition_flags, unsigned long, 16, struct s_default_enum_string_resolver>::set(enum e_effect_definition_flags, bool);
// public: void c_flags_no_init<enum e_effect_location_flags, unsigned short, 3, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_effect_location_flags, unsigned short, 3, struct s_default_enum_string_resolver>::is_clear(void) const;
// private: static unsigned short c_flags_no_init<enum e_effect_location_flags, unsigned short, 3, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned short c_flags_no_init<enum e_effect_location_flags, unsigned short, 3, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_effect_location_flags);
// public: c_tag_group_vtable<class effect_tag_vtable>::c_tag_group_vtable<class effect_tag_vtable>(void);
// public: virtual bool c_tag_group_vtable<class effect_tag_vtable>::has_custom_postprocess_proc(void) const;
// public: virtual bool c_tag_group_vtable<class effect_tag_vtable>::postprocess_tag_thunk(long, bool) const;
// public: virtual bool c_tag_group_vtable<class effect_tag_vtable>::has_custom_missing_tag_proc(void) const;
// public: virtual void c_tag_group_vtable<class effect_tag_vtable>::handle_missing_tag_thunk(unsigned long, char const *, unsigned long, unsigned long, char const *, long *) const;
// public: virtual bool c_tag_group_vtable<class effect_tag_vtable>::has_on_save_tag_proc(void) const;
// public: virtual void c_tag_group_vtable<class effect_tag_vtable>::on_save_tag_thunk(long) const;
// public: virtual bool c_tag_group_vtable<class effect_tag_vtable>::has_write_to_cache_file_proc(void) const;
// public: virtual void c_tag_group_vtable<class effect_tag_vtable>::write_tag_to_cache_file_thunk(long, unsigned long, class c_cache_file_scratch_allocator *, class c_cache_file_resource_library *, class c_cache_file_tracer *, void **, void **) const;
// public: virtual bool c_tag_group_vtable<class effect_tag_vtable>::has_valid_alternate_streams(void) const;
// public: virtual struct s_tag_group_stream_list * c_tag_group_vtable<class effect_tag_vtable>::get_alterante_streams_thunk(void) const;
// public: virtual bool c_tag_group_vtable<class effect_tag_vtable>::has_should_load_tag_stream_proc(void) const;
// public: virtual bool c_tag_group_vtable<class effect_tag_vtable>::should_load_tag_stream_thunk(unsigned long, bool) const;
// public: virtual bool c_tag_group_vtable<class effect_tag_vtable>::has_custom_xsync_runtime_platforms(void) const;
// public: virtual unsigned long c_tag_group_vtable<class effect_tag_vtable>::get_xsync_runtime_platforms_thunk(void) const;
// public: virtual bool c_tag_group_vtable<class effect_tag_vtable>::has_get_current_xsync_version_proc(void) const;
// public: virtual unsigned long c_tag_group_vtable<class effect_tag_vtable>::get_current_xsync_version_thunk(void) const;
// public: virtual bool c_tag_group_vtable<class effect_tag_vtable>::has_get_xsync_version_flags_proc(void) const;
// public: virtual unsigned long c_tag_group_vtable<class effect_tag_vtable>::get_xsync_version_flags_thunk(unsigned long) const;
// public: virtual bool c_tag_group_vtable<class effect_tag_vtable>::has_postprocess_on_sync_proc(void) const;
// public: virtual bool c_tag_group_vtable<class effect_tag_vtable>::postprocess_on_sync_thunk(long, enum e_runtime_platform_type, class c_cache_file_global_tag_registry *, bool) const;
// public: virtual bool c_tag_group_vtable<class effect_tag_vtable>::has_generate_tag_report_proc(void) const;
// public: virtual void c_tag_group_vtable<class effect_tag_vtable>::generate_tag_report_thunk(long, class c_tag_group_reporter *) const;
// public: virtual bool c_tag_group_vtable<class effect_tag_vtable>::has_build_tag_resource_prediction_proc(void) const;
// public: virtual void c_tag_group_vtable<class effect_tag_vtable>::build_predicted_tag_resources_thunk(long, class c_tag_resource_predictor *) const;
// public: virtual bool c_tag_group_vtable<class effect_tag_vtable>::has_collect_tag_resource_prediction_proc(void) const;
// public: virtual void c_tag_group_vtable<class effect_tag_vtable>::collect_predicted_tag_resources_thunk(long, class c_tag_resource_prediction_collector *) const;
// public: virtual bool c_tag_group_vtable<class effect_tag_vtable>::has_can_group_ever_load_in_game_proc(void) const;
// public: virtual bool c_tag_group_vtable<class effect_tag_vtable>::can_group_ever_load_in_game_thunk(void) const;
// public: virtual bool c_tag_group_vtable<class effect_tag_vtable>::has_optimize_for_cache_file_proc(void) const;
// public: virtual void c_tag_group_vtable<class effect_tag_vtable>::optimize_for_cache_file_thunk(long, enum e_runtime_platform_type, class c_cache_file_global_tag_registry *, bool) const;
// public: virtual bool c_tag_group_vtable<class effect_tag_vtable>::has_on_edit_field_proc(void) const;
// public: virtual unsigned long c_tag_group_vtable<class effect_tag_vtable>::on_edit_field_thunk(long, __int64, struct s_tag_field const *) const;
// public: virtual bool c_tag_group_vtable<class effect_tag_vtable>::has_estimate_final_resource_size_proc(void) const;
// public: virtual bool c_tag_group_vtable<class effect_tag_vtable>::estimate_final_resource_size_thunk(long, struct s_tag_resource_estimated_size *) const;
// public: virtual bool c_tag_group_vtable<class effect_tag_vtable>::has_valid_for_reload_stage_proc(void) const;
// public: virtual bool c_tag_group_vtable<class effect_tag_vtable>::valid_for_reload_stage_thunk(enum e_tag_reload_stage) const;
// public: static bool s_tag_vtable_has_postprocess_tag<class effect_tag_vtable>::call(long, bool);
// public: static bool effect_tag_vtable::postprocess_tag(long, bool);
// bool effect_postprocess(class c_tag_index, bool);
// void rename_locations(long);
// void fix_events(long);
// void strip_unused_or_duplicate_locations(long);
// public: void c_particle_system_definition::set_location_index(long);
// long effect_definition_find_first_location(struct effect_definition *, long);
// void effect_generate_default_event_names(long);
// public: void c_editable_property_type<class c_particle_state_list, union real_point3d>::allocate_random_seed(unsigned long *);
// public: void c_editable_property_type<class c_particle_state_list, union vector3d>::allocate_random_seed(unsigned long *);
// public: static void s_tag_vtable_has_handle_missing_tag<class effect_tag_vtable>::call(unsigned long, char const *, unsigned long, unsigned long, char const *, long *);
// public: static void s_tag_vtable_has_on_save_tag<class effect_tag_vtable>::call(long);
// public: static void s_tag_vtable_has_write_tag_to_cache_file<class effect_tag_vtable>::call(long, unsigned long, class c_cache_file_scratch_allocator *, class c_cache_file_resource_library *, class c_cache_file_tracer *, void **, void **);
// public: static struct s_tag_group_stream_list * s_tag_vtable_has_get_alternate_streams<class effect_tag_vtable>::call(void);
// public: static bool s_tag_vtable_has_should_load_tag_stream<class effect_tag_vtable>::call(unsigned long, bool);
// public: static unsigned long s_tag_vtable_has_get_xsync_runtime_platforms<class effect_tag_vtable>::call(void);
// public: static unsigned long s_tag_vtable_has_get_current_xsync_version<class effect_tag_vtable>::call(void);
// public: static unsigned long s_tag_vtable_has_get_xsync_version_flags<class effect_tag_vtable>::call(unsigned long);
// public: static bool s_tag_vtable_has_postprocess_tag_on_sync<class effect_tag_vtable>::call(long, enum e_runtime_platform_type, class c_cache_file_global_tag_registry *, bool);
// public: static void s_tag_vtable_has_generate_tag_report<class effect_tag_vtable>::call(long, class c_tag_group_reporter *);
// public: static void s_tag_vtable_has_build_predicted_tag_resources<class effect_tag_vtable>::call(long, class c_tag_resource_predictor *);
// public: static void s_tag_vtable_has_collect_predicted_tag_resources<class effect_tag_vtable>::call(long, class c_tag_resource_prediction_collector *);
// public: static bool s_tag_vtable_has_can_group_ever_load_in_game<class effect_tag_vtable>::call(void);
// public: static void s_tag_vtable_has_optimize_tag_for_cache_file<class effect_tag_vtable>::call(long, enum e_runtime_platform_type, class c_cache_file_global_tag_registry *, bool);
// public: static unsigned long s_tag_vtable_has_on_edit_field<class effect_tag_vtable>::call(long, __int64, struct s_tag_field const *);
// public: static bool s_tag_vtable_has_estimate_final_resource_size<class effect_tag_vtable>::call(long, struct s_tag_resource_estimated_size *);
// public: static bool s_tag_vtable_has_valid_for_reload_stage<class effect_tag_vtable>::call(enum e_tag_reload_stage);
// public: bool & s_static_array<bool, 8>::operator[]<short>(short);
// public: static bool s_static_array<bool, 8>::valid<short>(short);
// public: c_tag_struct_vtable<class effect_tag_vtable>::c_tag_struct_vtable<class effect_tag_vtable>(void);
// public: virtual bool c_tag_struct_vtable<class effect_tag_vtable>::has_byte_swap_proc(void) const;
// public: virtual void c_tag_struct_vtable<class effect_tag_vtable>::byte_swap_block_proc(void *) const;
// public: virtual bool c_tag_struct_vtable<class effect_tag_vtable>::has_postprocess_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class effect_tag_vtable>::postprocess_thunk(long, void *, bool) const;
// public: virtual bool c_tag_struct_vtable<class effect_tag_vtable>::has_format_proc(void) const;
// public: virtual char * c_tag_struct_vtable<class effect_tag_vtable>::format_thunk(long, __int64, struct s_tag_block *, long, char *, long) const;
// public: virtual bool c_tag_struct_vtable<class effect_tag_vtable>::has_on_delete_proc(void) const;
// public: virtual void c_tag_struct_vtable<class effect_tag_vtable>::on_delete_thunk(void *) const;
// public: virtual bool c_tag_struct_vtable<class effect_tag_vtable>::has_on_new_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class effect_tag_vtable>::on_new_thunk(void *) const;
// public: virtual bool c_tag_struct_vtable<class effect_tag_vtable>::has_on_copy_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class effect_tag_vtable>::on_copy_thunk(void const *, void *) const;
// public: virtual bool c_tag_struct_vtable<class effect_tag_vtable>::has_write_to_cache_file_proc(void) const;
// public: virtual void c_tag_struct_vtable<class effect_tag_vtable>::write_to_cache_file_thunk(long, struct s_tag_block *, struct s_cache_file_builder_stream_context const *, void **, void **) const;
// public: virtual bool c_tag_struct_vtable<class effect_tag_vtable>::has_block_does_not_exist_in_cache_file_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class effect_tag_vtable>::block_does_not_exist_in_cache_file_thunk(void) const;
// public: virtual bool c_tag_struct_vtable<class effect_tag_vtable>::has_fixup_old_struct_definition(void) const;
// public: virtual struct s_tag_struct_definition * c_tag_struct_vtable<class effect_tag_vtable>::get_fixup_source_definition_thunk(void) const;
// public: virtual bool c_tag_struct_vtable<class effect_tag_vtable>::has_fixup_old_struct_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class effect_tag_vtable>::fixup_old_struct_thunk(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool) const;
// public: virtual bool c_tag_struct_vtable<class effect_tag_vtable>::has_fixup_old_struct_from_disk_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class effect_tag_vtable>::fixup_old_struct_from_disk_thunk(struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool) const;
// public: static void s_tag_vtable_has_byte_swap_proc<class effect_tag_vtable>::call(void *);
// public: static bool s_tag_vtable_has_postprocess_proc<class effect_tag_vtable>::call(long, void *, bool);
// public: static char * s_tag_vtable_has_format_proc<class effect_tag_vtable>::call(long, __int64, struct s_tag_block *, long, char *, long);
// public: static void s_tag_vtable_has_on_delete_proc<class effect_tag_vtable>::call(void *);
// public: static bool s_tag_vtable_has_on_new_proc<class effect_tag_vtable>::call(void *);
// public: static bool s_tag_vtable_has_on_copy_proc<class effect_tag_vtable>::call(void const *, void *);
// public: static void s_tag_vtable_has_write_to_cache_file_proc<class effect_tag_vtable>::call(long, struct s_tag_block *, struct s_cache_file_builder_stream_context const *, void **, void **);
// public: static bool s_tag_vtable_has_block_does_not_exist_in_cache_file<class effect_tag_vtable>::call(void);
// public: static struct s_tag_struct_definition * s_tag_vtable_has_get_fixup_source_definition_proc<class effect_tag_vtable>::call(void);
// public: static struct s_tag_struct_definition * effect_tag_vtable::get_fixup_source_definition_proc(void);
// public: static bool s_tag_vtable_has_fixup_old_struct_proc<class effect_tag_vtable>::call(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool);
// public: static bool effect_tag_vtable::fixup_old_struct_proc(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool);
// public: static bool s_tag_vtable_has_fixup_old_struct_from_disk_proc<class effect_tag_vtable>::call(struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool);
// public: struct effect_definition_v0const * c_basic_buffer<void>::c_basic_buffer_checked_caster::operatorcast<struct effect_definition_v0const>(void);
// public: struct effect_definition * c_basic_buffer<void>::c_basic_buffer_checked_caster::operatorcast<struct effect_definition>(void);
// public: struct effect_definition_v0const * c_basic_buffer<void>::get_as_type<struct effect_definition_v0const>(void);
// public: struct effect_definition * c_basic_buffer<void>::get_as_type<struct effect_definition>(void);
// public: struct effect_definition_v0const * c_basic_buffer<void>::get_as_type_from_offset<struct effect_definition_v0const>(unsigned long);
// public: struct effect_definition * c_basic_buffer<void>::get_as_type_from_offset<struct effect_definition>(unsigned long);

//bool effect_part_deterministic(long)
//{
//    mangled_ppc("?effect_part_deterministic@@YA_NJ@Z");
//};

//bool effect_part_postprocess(long, struct effect_part_definition *, bool)
//{
//    mangled_ppc("?effect_part_postprocess@@YA_NJPAUeffect_part_definition@@_N@Z");
//};

//public: bool s_effect_scrubber::scrub(long, bool)
//{
//    mangled_ppc("?scrub@s_effect_scrubber@@QAA_NJ_N@Z");
//};

//public: void s_effect_scrubber::scrub_events(void)
//{
//    mangled_ppc("?scrub_events@s_effect_scrubber@@QAAXXZ");
//};

//public: void s_effect_scrubber::scrub_event_accelerations(struct effect_event_definition *)
//{
//    mangled_ppc("?scrub_event_accelerations@s_effect_scrubber@@QAAXPAUeffect_event_definition@@@Z");
//};

//public: bool s_effect_scrubber::valid_location_index(long)
//{
//    mangled_ppc("?valid_location_index@s_effect_scrubber@@QAA_NJ@Z");
//};

//public: long s_effect_scrubber::find_or_create_default_location_index(void)
//{
//    mangled_ppc("?find_or_create_default_location_index@s_effect_scrubber@@QAAJXZ");
//};

//public: void s_effect_scrubber::scrub_event_parts(struct effect_event_definition *)
//{
//    mangled_ppc("?scrub_event_parts@s_effect_scrubber@@QAAXPAUeffect_event_definition@@@Z");
//};

//public: void s_effect_scrubber::scrub_event_particle_systems(struct effect_event_definition *)
//{
//    mangled_ppc("?scrub_event_particle_systems@s_effect_scrubber@@QAAXPAUeffect_event_definition@@@Z");
//};

//public: void s_effect_scrubber::build_flags(void)
//{
//    mangled_ppc("?build_flags@s_effect_scrubber@@QAAXXZ");
//};

//public: float c_particle_system_definition::get_max_lifespan(void) const
//{
//    mangled_ppc("?get_max_lifespan@c_particle_system_definition@@QBAMXZ");
//};

//public: long c_particle_definition::get_requires_lightprobe(void) const
//{
//    mangled_ppc("?get_requires_lightprobe@c_particle_definition@@QBAJXZ");
//};

//public: static struct s_cheap_particle_emitter const * s_cheap_particle_emitter::get(long)
//{
//    mangled_ppc("?get@s_cheap_particle_emitter@@SAPBU1@J@Z");
//};

//public: bool s_cheap_particle_emitter::requires_lighting_sample(void) const
//{
//    mangled_ppc("?requires_lighting_sample@s_cheap_particle_emitter@@QBA_NXZ");
//};

//public: long c_contrail_definition::get_requires_lightprobe(void) const
//{
//    mangled_ppc("?get_requires_lightprobe@c_contrail_definition@@QBAJXZ");
//};

//public: float c_contrail_definition::get_max_lifespan(void) const
//{
//    mangled_ppc("?get_max_lifespan@c_contrail_definition@@QBAMXZ");
//};

//public: class c_editable_property<class c_contrail_states> const * c_contrail_definition::get_profile_lifespan(void) const
//{
//    mangled_ppc("?get_profile_lifespan@c_contrail_definition@@QBAPBV?$c_editable_property@Vc_contrail_states@@@@XZ");
//};

//public: void s_effect_scrubber::scrub_locations(void)
//{
//    mangled_ppc("?scrub_locations@s_effect_scrubber@@QAAXXZ");
//};

//public: c_flags<enum e_effect_location_flags, unsigned short, 3, struct s_default_enum_string_resolver>::c_flags<enum e_effect_location_flags, unsigned short, 3, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_effect_location_flags@@G$02Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: void c_flags_no_init<enum e_effect_definition_flags, unsigned long, 16, struct s_default_enum_string_resolver>::set(enum e_effect_definition_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_effect_definition_flags@@K$0BA@Us_default_enum_string_resolver@@@@QAAXW4e_effect_definition_flags@@_N@Z");
//};

//public: void c_flags_no_init<enum e_effect_location_flags, unsigned short, 3, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_effect_location_flags@@G$02Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_effect_location_flags, unsigned short, 3, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_effect_location_flags@@G$02Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//private: static unsigned short c_flags_no_init<enum e_effect_location_flags, unsigned short, 3, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_effect_location_flags@@G$02Us_default_enum_string_resolver@@@@CAGXZ");
//};

//private: static unsigned short c_flags_no_init<enum e_effect_location_flags, unsigned short, 3, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_effect_location_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_effect_location_flags@@G$02Us_default_enum_string_resolver@@@@CAGW4e_effect_location_flags@@@Z");
//};

//public: c_tag_group_vtable<class effect_tag_vtable>::c_tag_group_vtable<class effect_tag_vtable>(void)
//{
//    mangled_ppc("??0?$c_tag_group_vtable@Veffect_tag_vtable@@@@QAA@XZ");
//};

//public: virtual bool c_tag_group_vtable<class effect_tag_vtable>::has_custom_postprocess_proc(void) const
//{
//    mangled_ppc("?has_custom_postprocess_proc@?$c_tag_group_vtable@Veffect_tag_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_group_vtable<class effect_tag_vtable>::postprocess_tag_thunk(long, bool) const
//{
//    mangled_ppc("?postprocess_tag_thunk@?$c_tag_group_vtable@Veffect_tag_vtable@@@@UBA_NJ_N@Z");
//};

//public: virtual bool c_tag_group_vtable<class effect_tag_vtable>::has_custom_missing_tag_proc(void) const
//{
//    mangled_ppc("?has_custom_missing_tag_proc@?$c_tag_group_vtable@Veffect_tag_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_group_vtable<class effect_tag_vtable>::handle_missing_tag_thunk(unsigned long, char const *, unsigned long, unsigned long, char const *, long *) const
//{
//    mangled_ppc("?handle_missing_tag_thunk@?$c_tag_group_vtable@Veffect_tag_vtable@@@@UBAXKPBDKK0PAJ@Z");
//};

//public: virtual bool c_tag_group_vtable<class effect_tag_vtable>::has_on_save_tag_proc(void) const
//{
//    mangled_ppc("?has_on_save_tag_proc@?$c_tag_group_vtable@Veffect_tag_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_group_vtable<class effect_tag_vtable>::on_save_tag_thunk(long) const
//{
//    mangled_ppc("?on_save_tag_thunk@?$c_tag_group_vtable@Veffect_tag_vtable@@@@UBAXJ@Z");
//};

//public: virtual bool c_tag_group_vtable<class effect_tag_vtable>::has_write_to_cache_file_proc(void) const
//{
//    mangled_ppc("?has_write_to_cache_file_proc@?$c_tag_group_vtable@Veffect_tag_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_group_vtable<class effect_tag_vtable>::write_tag_to_cache_file_thunk(long, unsigned long, class c_cache_file_scratch_allocator *, class c_cache_file_resource_library *, class c_cache_file_tracer *, void **, void **) const
//{
//    mangled_ppc("?write_tag_to_cache_file_thunk@?$c_tag_group_vtable@Veffect_tag_vtable@@@@UBAXJKPAVc_cache_file_scratch_allocator@@PAVc_cache_file_resource_library@@PAVc_cache_file_tracer@@PAPAX3@Z");
//};

//public: virtual bool c_tag_group_vtable<class effect_tag_vtable>::has_valid_alternate_streams(void) const
//{
//    mangled_ppc("?has_valid_alternate_streams@?$c_tag_group_vtable@Veffect_tag_vtable@@@@UBA_NXZ");
//};

//public: virtual struct s_tag_group_stream_list * c_tag_group_vtable<class effect_tag_vtable>::get_alterante_streams_thunk(void) const
//{
//    mangled_ppc("?get_alterante_streams_thunk@?$c_tag_group_vtable@Veffect_tag_vtable@@@@UBAPAUs_tag_group_stream_list@@XZ");
//};

//public: virtual bool c_tag_group_vtable<class effect_tag_vtable>::has_should_load_tag_stream_proc(void) const
//{
//    mangled_ppc("?has_should_load_tag_stream_proc@?$c_tag_group_vtable@Veffect_tag_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_group_vtable<class effect_tag_vtable>::should_load_tag_stream_thunk(unsigned long, bool) const
//{
//    mangled_ppc("?should_load_tag_stream_thunk@?$c_tag_group_vtable@Veffect_tag_vtable@@@@UBA_NK_N@Z");
//};

//public: virtual bool c_tag_group_vtable<class effect_tag_vtable>::has_custom_xsync_runtime_platforms(void) const
//{
//    mangled_ppc("?has_custom_xsync_runtime_platforms@?$c_tag_group_vtable@Veffect_tag_vtable@@@@UBA_NXZ");
//};

//public: virtual unsigned long c_tag_group_vtable<class effect_tag_vtable>::get_xsync_runtime_platforms_thunk(void) const
//{
//    mangled_ppc("?get_xsync_runtime_platforms_thunk@?$c_tag_group_vtable@Veffect_tag_vtable@@@@UBAKXZ");
//};

//public: virtual bool c_tag_group_vtable<class effect_tag_vtable>::has_get_current_xsync_version_proc(void) const
//{
//    mangled_ppc("?has_get_current_xsync_version_proc@?$c_tag_group_vtable@Veffect_tag_vtable@@@@UBA_NXZ");
//};

//public: virtual unsigned long c_tag_group_vtable<class effect_tag_vtable>::get_current_xsync_version_thunk(void) const
//{
//    mangled_ppc("?get_current_xsync_version_thunk@?$c_tag_group_vtable@Veffect_tag_vtable@@@@UBAKXZ");
//};

//public: virtual bool c_tag_group_vtable<class effect_tag_vtable>::has_get_xsync_version_flags_proc(void) const
//{
//    mangled_ppc("?has_get_xsync_version_flags_proc@?$c_tag_group_vtable@Veffect_tag_vtable@@@@UBA_NXZ");
//};

//public: virtual unsigned long c_tag_group_vtable<class effect_tag_vtable>::get_xsync_version_flags_thunk(unsigned long) const
//{
//    mangled_ppc("?get_xsync_version_flags_thunk@?$c_tag_group_vtable@Veffect_tag_vtable@@@@UBAKK@Z");
//};

//public: virtual bool c_tag_group_vtable<class effect_tag_vtable>::has_postprocess_on_sync_proc(void) const
//{
//    mangled_ppc("?has_postprocess_on_sync_proc@?$c_tag_group_vtable@Veffect_tag_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_group_vtable<class effect_tag_vtable>::postprocess_on_sync_thunk(long, enum e_runtime_platform_type, class c_cache_file_global_tag_registry *, bool) const
//{
//    mangled_ppc("?postprocess_on_sync_thunk@?$c_tag_group_vtable@Veffect_tag_vtable@@@@UBA_NJW4e_runtime_platform_type@@PAVc_cache_file_global_tag_registry@@_N@Z");
//};

//public: virtual bool c_tag_group_vtable<class effect_tag_vtable>::has_generate_tag_report_proc(void) const
//{
//    mangled_ppc("?has_generate_tag_report_proc@?$c_tag_group_vtable@Veffect_tag_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_group_vtable<class effect_tag_vtable>::generate_tag_report_thunk(long, class c_tag_group_reporter *) const
//{
//    mangled_ppc("?generate_tag_report_thunk@?$c_tag_group_vtable@Veffect_tag_vtable@@@@UBAXJPAVc_tag_group_reporter@@@Z");
//};

//public: virtual bool c_tag_group_vtable<class effect_tag_vtable>::has_build_tag_resource_prediction_proc(void) const
//{
//    mangled_ppc("?has_build_tag_resource_prediction_proc@?$c_tag_group_vtable@Veffect_tag_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_group_vtable<class effect_tag_vtable>::build_predicted_tag_resources_thunk(long, class c_tag_resource_predictor *) const
//{
//    mangled_ppc("?build_predicted_tag_resources_thunk@?$c_tag_group_vtable@Veffect_tag_vtable@@@@UBAXJPAVc_tag_resource_predictor@@@Z");
//};

//public: virtual bool c_tag_group_vtable<class effect_tag_vtable>::has_collect_tag_resource_prediction_proc(void) const
//{
//    mangled_ppc("?has_collect_tag_resource_prediction_proc@?$c_tag_group_vtable@Veffect_tag_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_group_vtable<class effect_tag_vtable>::collect_predicted_tag_resources_thunk(long, class c_tag_resource_prediction_collector *) const
//{
//    mangled_ppc("?collect_predicted_tag_resources_thunk@?$c_tag_group_vtable@Veffect_tag_vtable@@@@UBAXJPAVc_tag_resource_prediction_collector@@@Z");
//};

//public: virtual bool c_tag_group_vtable<class effect_tag_vtable>::has_can_group_ever_load_in_game_proc(void) const
//{
//    mangled_ppc("?has_can_group_ever_load_in_game_proc@?$c_tag_group_vtable@Veffect_tag_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_group_vtable<class effect_tag_vtable>::can_group_ever_load_in_game_thunk(void) const
//{
//    mangled_ppc("?can_group_ever_load_in_game_thunk@?$c_tag_group_vtable@Veffect_tag_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_group_vtable<class effect_tag_vtable>::has_optimize_for_cache_file_proc(void) const
//{
//    mangled_ppc("?has_optimize_for_cache_file_proc@?$c_tag_group_vtable@Veffect_tag_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_group_vtable<class effect_tag_vtable>::optimize_for_cache_file_thunk(long, enum e_runtime_platform_type, class c_cache_file_global_tag_registry *, bool) const
//{
//    mangled_ppc("?optimize_for_cache_file_thunk@?$c_tag_group_vtable@Veffect_tag_vtable@@@@UBAXJW4e_runtime_platform_type@@PAVc_cache_file_global_tag_registry@@_N@Z");
//};

//public: virtual bool c_tag_group_vtable<class effect_tag_vtable>::has_on_edit_field_proc(void) const
//{
//    mangled_ppc("?has_on_edit_field_proc@?$c_tag_group_vtable@Veffect_tag_vtable@@@@UBA_NXZ");
//};

//public: virtual unsigned long c_tag_group_vtable<class effect_tag_vtable>::on_edit_field_thunk(long, __int64, struct s_tag_field const *) const
//{
//    mangled_ppc("?on_edit_field_thunk@?$c_tag_group_vtable@Veffect_tag_vtable@@@@UBAKJ_JPBUs_tag_field@@@Z");
//};

//public: virtual bool c_tag_group_vtable<class effect_tag_vtable>::has_estimate_final_resource_size_proc(void) const
//{
//    mangled_ppc("?has_estimate_final_resource_size_proc@?$c_tag_group_vtable@Veffect_tag_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_group_vtable<class effect_tag_vtable>::estimate_final_resource_size_thunk(long, struct s_tag_resource_estimated_size *) const
//{
//    mangled_ppc("?estimate_final_resource_size_thunk@?$c_tag_group_vtable@Veffect_tag_vtable@@@@UBA_NJPAUs_tag_resource_estimated_size@@@Z");
//};

//public: virtual bool c_tag_group_vtable<class effect_tag_vtable>::has_valid_for_reload_stage_proc(void) const
//{
//    mangled_ppc("?has_valid_for_reload_stage_proc@?$c_tag_group_vtable@Veffect_tag_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_group_vtable<class effect_tag_vtable>::valid_for_reload_stage_thunk(enum e_tag_reload_stage) const
//{
//    mangled_ppc("?valid_for_reload_stage_thunk@?$c_tag_group_vtable@Veffect_tag_vtable@@@@UBA_NW4e_tag_reload_stage@@@Z");
//};

//public: static bool s_tag_vtable_has_postprocess_tag<class effect_tag_vtable>::call(long, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_postprocess_tag@Veffect_tag_vtable@@@@SA_NJ_N@Z");
//};

//public: static bool effect_tag_vtable::postprocess_tag(long, bool)
//{
//    mangled_ppc("?postprocess_tag@effect_tag_vtable@@SA_NJ_N@Z");
//};

//bool effect_postprocess(class c_tag_index, bool)
//{
//    mangled_ppc("?effect_postprocess@@YA_NVc_tag_index@@_N@Z");
//};

//void rename_locations(long)
//{
//    mangled_ppc("?rename_locations@@YAXJ@Z");
//};

//void fix_events(long)
//{
//    mangled_ppc("?fix_events@@YAXJ@Z");
//};

//void strip_unused_or_duplicate_locations(long)
//{
//    mangled_ppc("?strip_unused_or_duplicate_locations@@YAXJ@Z");
//};

//public: void c_particle_system_definition::set_location_index(long)
//{
//    mangled_ppc("?set_location_index@c_particle_system_definition@@QAAXJ@Z");
//};

//long effect_definition_find_first_location(struct effect_definition *, long)
//{
//    mangled_ppc("?effect_definition_find_first_location@@YAJPAUeffect_definition@@J@Z");
//};

//void effect_generate_default_event_names(long)
//{
//    mangled_ppc("?effect_generate_default_event_names@@YAXJ@Z");
//};

//public: void c_editable_property_type<class c_particle_state_list, union real_point3d>::allocate_random_seed(unsigned long *)
//{
//    mangled_ppc("?allocate_random_seed@?$c_editable_property_type@Vc_particle_state_list@@Treal_point3d@@@@QAAXPAK@Z");
//};

//public: void c_editable_property_type<class c_particle_state_list, union vector3d>::allocate_random_seed(unsigned long *)
//{
//    mangled_ppc("?allocate_random_seed@?$c_editable_property_type@Vc_particle_state_list@@Tvector3d@@@@QAAXPAK@Z");
//};

//public: static void s_tag_vtable_has_handle_missing_tag<class effect_tag_vtable>::call(unsigned long, char const *, unsigned long, unsigned long, char const *, long *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_handle_missing_tag@Veffect_tag_vtable@@@@SAXKPBDKK0PAJ@Z");
//};

//public: static void s_tag_vtable_has_on_save_tag<class effect_tag_vtable>::call(long)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_on_save_tag@Veffect_tag_vtable@@@@SAXJ@Z");
//};

//public: static void s_tag_vtable_has_write_tag_to_cache_file<class effect_tag_vtable>::call(long, unsigned long, class c_cache_file_scratch_allocator *, class c_cache_file_resource_library *, class c_cache_file_tracer *, void **, void **)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_write_tag_to_cache_file@Veffect_tag_vtable@@@@SAXJKPAVc_cache_file_scratch_allocator@@PAVc_cache_file_resource_library@@PAVc_cache_file_tracer@@PAPAX3@Z");
//};

//public: static struct s_tag_group_stream_list * s_tag_vtable_has_get_alternate_streams<class effect_tag_vtable>::call(void)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_get_alternate_streams@Veffect_tag_vtable@@@@SAPAUs_tag_group_stream_list@@XZ");
//};

//public: static bool s_tag_vtable_has_should_load_tag_stream<class effect_tag_vtable>::call(unsigned long, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_should_load_tag_stream@Veffect_tag_vtable@@@@SA_NK_N@Z");
//};

//public: static unsigned long s_tag_vtable_has_get_xsync_runtime_platforms<class effect_tag_vtable>::call(void)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_get_xsync_runtime_platforms@Veffect_tag_vtable@@@@SAKXZ");
//};

//public: static unsigned long s_tag_vtable_has_get_current_xsync_version<class effect_tag_vtable>::call(void)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_get_current_xsync_version@Veffect_tag_vtable@@@@SAKXZ");
//};

//public: static unsigned long s_tag_vtable_has_get_xsync_version_flags<class effect_tag_vtable>::call(unsigned long)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_get_xsync_version_flags@Veffect_tag_vtable@@@@SAKK@Z");
//};

//public: static bool s_tag_vtable_has_postprocess_tag_on_sync<class effect_tag_vtable>::call(long, enum e_runtime_platform_type, class c_cache_file_global_tag_registry *, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_postprocess_tag_on_sync@Veffect_tag_vtable@@@@SA_NJW4e_runtime_platform_type@@PAVc_cache_file_global_tag_registry@@_N@Z");
//};

//public: static void s_tag_vtable_has_generate_tag_report<class effect_tag_vtable>::call(long, class c_tag_group_reporter *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_generate_tag_report@Veffect_tag_vtable@@@@SAXJPAVc_tag_group_reporter@@@Z");
//};

//public: static void s_tag_vtable_has_build_predicted_tag_resources<class effect_tag_vtable>::call(long, class c_tag_resource_predictor *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_build_predicted_tag_resources@Veffect_tag_vtable@@@@SAXJPAVc_tag_resource_predictor@@@Z");
//};

//public: static void s_tag_vtable_has_collect_predicted_tag_resources<class effect_tag_vtable>::call(long, class c_tag_resource_prediction_collector *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_collect_predicted_tag_resources@Veffect_tag_vtable@@@@SAXJPAVc_tag_resource_prediction_collector@@@Z");
//};

//public: static bool s_tag_vtable_has_can_group_ever_load_in_game<class effect_tag_vtable>::call(void)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_can_group_ever_load_in_game@Veffect_tag_vtable@@@@SA_NXZ");
//};

//public: static void s_tag_vtable_has_optimize_tag_for_cache_file<class effect_tag_vtable>::call(long, enum e_runtime_platform_type, class c_cache_file_global_tag_registry *, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_optimize_tag_for_cache_file@Veffect_tag_vtable@@@@SAXJW4e_runtime_platform_type@@PAVc_cache_file_global_tag_registry@@_N@Z");
//};

//public: static unsigned long s_tag_vtable_has_on_edit_field<class effect_tag_vtable>::call(long, __int64, struct s_tag_field const *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_on_edit_field@Veffect_tag_vtable@@@@SAKJ_JPBUs_tag_field@@@Z");
//};

//public: static bool s_tag_vtable_has_estimate_final_resource_size<class effect_tag_vtable>::call(long, struct s_tag_resource_estimated_size *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_estimate_final_resource_size@Veffect_tag_vtable@@@@SA_NJPAUs_tag_resource_estimated_size@@@Z");
//};

//public: static bool s_tag_vtable_has_valid_for_reload_stage<class effect_tag_vtable>::call(enum e_tag_reload_stage)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_valid_for_reload_stage@Veffect_tag_vtable@@@@SA_NW4e_tag_reload_stage@@@Z");
//};

//public: bool & s_static_array<bool, 8>::operator[]<short>(short)
//{
//    mangled_ppc("??$?AF@?$s_static_array@_N$07@@QAAAA_NF@Z");
//};

//public: static bool s_static_array<bool, 8>::valid<short>(short)
//{
//    mangled_ppc("??$valid@F@?$s_static_array@_N$07@@SA_NF@Z");
//};

//public: c_tag_struct_vtable<class effect_tag_vtable>::c_tag_struct_vtable<class effect_tag_vtable>(void)
//{
//    mangled_ppc("??0?$c_tag_struct_vtable@Veffect_tag_vtable@@@@QAA@XZ");
//};

//public: virtual bool c_tag_struct_vtable<class effect_tag_vtable>::has_byte_swap_proc(void) const
//{
//    mangled_ppc("?has_byte_swap_proc@?$c_tag_struct_vtable@Veffect_tag_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_struct_vtable<class effect_tag_vtable>::byte_swap_block_proc(void *) const
//{
//    mangled_ppc("?byte_swap_block_proc@?$c_tag_struct_vtable@Veffect_tag_vtable@@@@UBAXPAX@Z");
//};

//public: virtual bool c_tag_struct_vtable<class effect_tag_vtable>::has_postprocess_proc(void) const
//{
//    mangled_ppc("?has_postprocess_proc@?$c_tag_struct_vtable@Veffect_tag_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class effect_tag_vtable>::postprocess_thunk(long, void *, bool) const
//{
//    mangled_ppc("?postprocess_thunk@?$c_tag_struct_vtable@Veffect_tag_vtable@@@@UBA_NJPAX_N@Z");
//};

//public: virtual bool c_tag_struct_vtable<class effect_tag_vtable>::has_format_proc(void) const
//{
//    mangled_ppc("?has_format_proc@?$c_tag_struct_vtable@Veffect_tag_vtable@@@@UBA_NXZ");
//};

//public: virtual char * c_tag_struct_vtable<class effect_tag_vtable>::format_thunk(long, __int64, struct s_tag_block *, long, char *, long) const
//{
//    mangled_ppc("?format_thunk@?$c_tag_struct_vtable@Veffect_tag_vtable@@@@UBAPADJ_JPAUs_tag_block@@JPADJ@Z");
//};

//public: virtual bool c_tag_struct_vtable<class effect_tag_vtable>::has_on_delete_proc(void) const
//{
//    mangled_ppc("?has_on_delete_proc@?$c_tag_struct_vtable@Veffect_tag_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_struct_vtable<class effect_tag_vtable>::on_delete_thunk(void *) const
//{
//    mangled_ppc("?on_delete_thunk@?$c_tag_struct_vtable@Veffect_tag_vtable@@@@UBAXPAX@Z");
//};

//public: virtual bool c_tag_struct_vtable<class effect_tag_vtable>::has_on_new_proc(void) const
//{
//    mangled_ppc("?has_on_new_proc@?$c_tag_struct_vtable@Veffect_tag_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class effect_tag_vtable>::on_new_thunk(void *) const
//{
//    mangled_ppc("?on_new_thunk@?$c_tag_struct_vtable@Veffect_tag_vtable@@@@UBA_NPAX@Z");
//};

//public: virtual bool c_tag_struct_vtable<class effect_tag_vtable>::has_on_copy_proc(void) const
//{
//    mangled_ppc("?has_on_copy_proc@?$c_tag_struct_vtable@Veffect_tag_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class effect_tag_vtable>::on_copy_thunk(void const *, void *) const
//{
//    mangled_ppc("?on_copy_thunk@?$c_tag_struct_vtable@Veffect_tag_vtable@@@@UBA_NPBXPAX@Z");
//};

//public: virtual bool c_tag_struct_vtable<class effect_tag_vtable>::has_write_to_cache_file_proc(void) const
//{
//    mangled_ppc("?has_write_to_cache_file_proc@?$c_tag_struct_vtable@Veffect_tag_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_struct_vtable<class effect_tag_vtable>::write_to_cache_file_thunk(long, struct s_tag_block *, struct s_cache_file_builder_stream_context const *, void **, void **) const
//{
//    mangled_ppc("?write_to_cache_file_thunk@?$c_tag_struct_vtable@Veffect_tag_vtable@@@@UBAXJPAUs_tag_block@@PBUs_cache_file_builder_stream_context@@PAPAX2@Z");
//};

//public: virtual bool c_tag_struct_vtable<class effect_tag_vtable>::has_block_does_not_exist_in_cache_file_proc(void) const
//{
//    mangled_ppc("?has_block_does_not_exist_in_cache_file_proc@?$c_tag_struct_vtable@Veffect_tag_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class effect_tag_vtable>::block_does_not_exist_in_cache_file_thunk(void) const
//{
//    mangled_ppc("?block_does_not_exist_in_cache_file_thunk@?$c_tag_struct_vtable@Veffect_tag_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class effect_tag_vtable>::has_fixup_old_struct_definition(void) const
//{
//    mangled_ppc("?has_fixup_old_struct_definition@?$c_tag_struct_vtable@Veffect_tag_vtable@@@@UBA_NXZ");
//};

//public: virtual struct s_tag_struct_definition * c_tag_struct_vtable<class effect_tag_vtable>::get_fixup_source_definition_thunk(void) const
//{
//    mangled_ppc("?get_fixup_source_definition_thunk@?$c_tag_struct_vtable@Veffect_tag_vtable@@@@UBAPAUs_tag_struct_definition@@XZ");
//};

//public: virtual bool c_tag_struct_vtable<class effect_tag_vtable>::has_fixup_old_struct_proc(void) const
//{
//    mangled_ppc("?has_fixup_old_struct_proc@?$c_tag_struct_vtable@Veffect_tag_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class effect_tag_vtable>::fixup_old_struct_thunk(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool) const
//{
//    mangled_ppc("?fixup_old_struct_thunk@?$c_tag_struct_vtable@Veffect_tag_vtable@@@@UBA_NAAV?$c_basic_buffer@X@@PBUs_tag_struct_definition@@01PAVc_tag_allocator@@_N@Z");
//};

//public: virtual bool c_tag_struct_vtable<class effect_tag_vtable>::has_fixup_old_struct_from_disk_proc(void) const
//{
//    mangled_ppc("?has_fixup_old_struct_from_disk_proc@?$c_tag_struct_vtable@Veffect_tag_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class effect_tag_vtable>::fixup_old_struct_from_disk_thunk(struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool) const
//{
//    mangled_ppc("?fixup_old_struct_from_disk_thunk@?$c_tag_struct_vtable@Veffect_tag_vtable@@@@UBA_NPBUs_tag_struct_definition@@AAV?$c_basic_buffer@X@@010PAVc_tag_allocator@@_N@Z");
//};

//public: static void s_tag_vtable_has_byte_swap_proc<class effect_tag_vtable>::call(void *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_byte_swap_proc@Veffect_tag_vtable@@@@SAXPAX@Z");
//};

//public: static bool s_tag_vtable_has_postprocess_proc<class effect_tag_vtable>::call(long, void *, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_postprocess_proc@Veffect_tag_vtable@@@@SA_NJPAX_N@Z");
//};

//public: static char * s_tag_vtable_has_format_proc<class effect_tag_vtable>::call(long, __int64, struct s_tag_block *, long, char *, long)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_format_proc@Veffect_tag_vtable@@@@SAPADJ_JPAUs_tag_block@@JPADJ@Z");
//};

//public: static void s_tag_vtable_has_on_delete_proc<class effect_tag_vtable>::call(void *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_on_delete_proc@Veffect_tag_vtable@@@@SAXPAX@Z");
//};

//public: static bool s_tag_vtable_has_on_new_proc<class effect_tag_vtable>::call(void *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_on_new_proc@Veffect_tag_vtable@@@@SA_NPAX@Z");
//};

//public: static bool s_tag_vtable_has_on_copy_proc<class effect_tag_vtable>::call(void const *, void *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_on_copy_proc@Veffect_tag_vtable@@@@SA_NPBXPAX@Z");
//};

//public: static void s_tag_vtable_has_write_to_cache_file_proc<class effect_tag_vtable>::call(long, struct s_tag_block *, struct s_cache_file_builder_stream_context const *, void **, void **)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_write_to_cache_file_proc@Veffect_tag_vtable@@@@SAXJPAUs_tag_block@@PBUs_cache_file_builder_stream_context@@PAPAX2@Z");
//};

//public: static bool s_tag_vtable_has_block_does_not_exist_in_cache_file<class effect_tag_vtable>::call(void)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_block_does_not_exist_in_cache_file@Veffect_tag_vtable@@@@SA_NXZ");
//};

//public: static struct s_tag_struct_definition * s_tag_vtable_has_get_fixup_source_definition_proc<class effect_tag_vtable>::call(void)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_get_fixup_source_definition_proc@Veffect_tag_vtable@@@@SAPAUs_tag_struct_definition@@XZ");
//};

//public: static struct s_tag_struct_definition * effect_tag_vtable::get_fixup_source_definition_proc(void)
//{
//    mangled_ppc("?get_fixup_source_definition_proc@effect_tag_vtable@@SAPAUs_tag_struct_definition@@XZ");
//};

//public: static bool s_tag_vtable_has_fixup_old_struct_proc<class effect_tag_vtable>::call(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_fixup_old_struct_proc@Veffect_tag_vtable@@@@SA_NAAV?$c_basic_buffer@X@@PBUs_tag_struct_definition@@01PAVc_tag_allocator@@_N@Z");
//};

//public: static bool effect_tag_vtable::fixup_old_struct_proc(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool)
//{
//    mangled_ppc("?fixup_old_struct_proc@effect_tag_vtable@@SA_NAAV?$c_basic_buffer@X@@PBUs_tag_struct_definition@@01PAVc_tag_allocator@@_N@Z");
//};

//public: static bool s_tag_vtable_has_fixup_old_struct_from_disk_proc<class effect_tag_vtable>::call(struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_fixup_old_struct_from_disk_proc@Veffect_tag_vtable@@@@SA_NPBUs_tag_struct_definition@@AAV?$c_basic_buffer@X@@010PAVc_tag_allocator@@_N@Z");
//};

//public: struct effect_definition_v0const * c_basic_buffer<void>::c_basic_buffer_checked_caster::operatorcast<struct effect_definition_v0const>(void)
//{
//    mangled_ppc("??$?B$$CBUeffect_definition_v0@@@c_basic_buffer_checked_caster@?$c_basic_buffer@X@@QAAPBUeffect_definition_v0@@XZ");
//};

//public: struct effect_definition * c_basic_buffer<void>::c_basic_buffer_checked_caster::operatorcast<struct effect_definition>(void)
//{
//    mangled_ppc("??$?BUeffect_definition@@@c_basic_buffer_checked_caster@?$c_basic_buffer@X@@QAAPAUeffect_definition@@XZ");
//};

//public: struct effect_definition_v0const * c_basic_buffer<void>::get_as_type<struct effect_definition_v0const>(void)
//{
//    mangled_ppc("??$get_as_type@$$CBUeffect_definition_v0@@@?$c_basic_buffer@X@@QAAPBUeffect_definition_v0@@XZ");
//};

//public: struct effect_definition * c_basic_buffer<void>::get_as_type<struct effect_definition>(void)
//{
//    mangled_ppc("??$get_as_type@Ueffect_definition@@@?$c_basic_buffer@X@@QAAPAUeffect_definition@@XZ");
//};

//public: struct effect_definition_v0const * c_basic_buffer<void>::get_as_type_from_offset<struct effect_definition_v0const>(unsigned long)
//{
//    mangled_ppc("??$get_as_type_from_offset@$$CBUeffect_definition_v0@@@?$c_basic_buffer@X@@QAAPBUeffect_definition_v0@@K@Z");
//};

//public: struct effect_definition * c_basic_buffer<void>::get_as_type_from_offset<struct effect_definition>(unsigned long)
//{
//    mangled_ppc("??$get_as_type_from_offset@Ueffect_definition@@@?$c_basic_buffer@X@@QAAPAUeffect_definition@@K@Z");
//};

