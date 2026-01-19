/* ---------- headers */

#include "omaha\sound\sound_acoustics_definitions.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const s_static_array<float, 64>::k_element_count; // "?k_element_count@?$s_static_array@M$0EA@@@2JB"
// public: static long const s_static_array<long, 64>::k_element_count; // "?k_element_count@?$s_static_array@J$0EA@@@2JB"
// char const **background_sound_scale_flags_definition_strings; // "?background_sound_scale_flags_definition_strings@@3PAPBDA"
// struct s_string_list_definition background_sound_scale_flags_definition; // "?background_sound_scale_flags_definition@@3Us_string_list_definition@@A"
// struct s_tag_block_definition scenario_acoustics_ambience_palette_block; // "?scenario_acoustics_ambience_palette_block@@3Us_tag_block_definition@@A"
// struct s_tag_struct_definition scenario_acoustics_ambience_palette_block_struct_definition; // "?scenario_acoustics_ambience_palette_block_struct_definition@@3Us_tag_struct_definition@@A"
// struct s_tag_block_definition scenario_acoustics_palette_block_definition; // "?scenario_acoustics_palette_block_definition@@3Us_tag_block_definition@@A"
// struct s_tag_struct_definition scenario_acoustics_palette_block_definition_struct; // "?scenario_acoustics_palette_block_definition_struct@@3Us_tag_struct_definition@@A"
// struct s_tag_block_definition scenario_acoustic_sector_block; // "?scenario_acoustic_sector_block@@3Us_tag_block_definition@@A"
// struct s_tag_struct_definition scenario_acoustic_sector_block_struct; // "?scenario_acoustic_sector_block_struct@@3Us_tag_struct_definition@@A"
// struct s_tag_struct_definition scenario_acoustic_transition_block_struct; // "?scenario_acoustic_transition_block_struct@@3Us_tag_struct_definition@@A"
// struct s_tag_block_definition scenario_acoustic_transition_block; // "?scenario_acoustic_transition_block@@3Us_tag_block_definition@@A"
// bool g_render_debug_acoustic_sectors; // "?g_render_debug_acoustic_sectors@@3_NA"
// class c_tag_struct_vtable<class c_null_tag_vtable> scenario_acoustics_environment_definition_struct_vtable; // "?scenario_acoustics_environment_definition_struct_vtable@@3V?$c_tag_struct_vtable@Vc_null_tag_vtable@@@@A"
// class c_tag_struct_vtable<class c_null_tag_vtable> scenario_acoustics_ambience_definition_struct_vtable; // "?scenario_acoustics_ambience_definition_struct_vtable@@3V?$c_tag_struct_vtable@Vc_null_tag_vtable@@@@A"
// class c_tag_struct_vtable<class c_scenario_acoustics_vtable> scenario_acoustics_palette_block_definition_struct_struct_vtable; // "?scenario_acoustics_palette_block_definition_struct_struct_vtable@@3V?$c_tag_struct_vtable@Vc_scenario_acoustics_vtable@@@@A"
// class c_tag_struct_vtable<class c_scenario_acoustic_sector_block_vtable> scenario_acoustic_sector_block_struct_struct_vtable; // "?scenario_acoustic_sector_block_struct_struct_vtable@@3V?$c_tag_struct_vtable@Vc_scenario_acoustic_sector_block_vtable@@@@A"
// class c_tag_struct_vtable<class c_null_tag_vtable> scenario_acoustic_cluster_reference_definition_struct_vtable; // "?scenario_acoustic_cluster_reference_definition_struct_vtable@@3V?$c_tag_struct_vtable@Vc_null_tag_vtable@@@@A"
// class c_tag_struct_vtable<class c_null_tag_vtable> scenario_acoustic_location_definition_struct_vtable; // "?scenario_acoustic_location_definition_struct_vtable@@3V?$c_tag_struct_vtable@Vc_null_tag_vtable@@@@A"
// class c_tag_struct_vtable<class c_scenario_acoustic_transition_block_vtable> scenario_acoustic_transition_block_struct_struct_vtable; // "?scenario_acoustic_transition_block_struct_struct_vtable@@3V?$c_tag_struct_vtable@Vc_scenario_acoustic_transition_block_vtable@@@@A"

// struct s_sector_point_template<union real_point3d> * acoustic_sector_get_sector_point(struct s_scenario_acoustic_sector const &, long);
// void render_acoustic_sectors(void);
// public: c_acoustic_sector_accessor::c_acoustic_sector_accessor(void);
// void render_debug_acoustic_sectors(void);
// struct s_scenario_acoustics_ambience * scenario_get_ambience_palette_entry(struct scenario *, long);
// struct s_scenario_acoustics_environment * scenario_get_reverb_palette_entry(struct scenario *, long);
// void build_acoustic_transitions_sector_samples(struct scenario *);
// void update_acoustic_transition_samples(struct s_scenario_acoustic_transition *, void (*)(union real_point3d const &, short *, struct s_scenario_acoustic_location *, void *), void *);
// void set_acoustic_transition_sample_to_sector(union real_point3d const &, short *, struct s_scenario_acoustic_location *, void *);
// long scenario_acoustic_sector_index_from_point(struct scenario const *, union real_point3d const &);
// bool point_in_acoustic_sector(union real_point3d const &, struct s_scenario_acoustic_sector const &);
// void build_acoustic_transitions_cluster_samples(struct scenario *, struct structure_bsp const *, short);
// void check_acoustic_transition_sample_in_bsp(union real_point3d const &, short *, struct s_scenario_acoustic_location *, void *);
// public: s_bsp_search::s_bsp_search(void);
// void refresh_acoustic_sector_planes(struct s_scenario_acoustic_sector *);
// void scenario_acoustics_clear_disabled_palettes(void);
// void scenario_acoustics_set_palette_disabled_by_id(long, bool);
// bool scenario_acoustics_get_palette_disabled(long);
// bool game_sound_calculate_sector_acoustic_state(union real_point3d const *, struct s_acoustic_state *);
// bool game_sound_calculate_transition_acoustic_state(union real_point3d const *, struct s_acoustic_state *);
// float distance_to_acoustic_transition(union real_point3d const &, struct s_scenario_acoustic_transition const &);
// bool point_in_front_of_acoustic_transition(union real_point3d const &, struct s_scenario_acoustic_transition const &);
// long scenario_acoustic_transition_index_from_point(struct scenario const *, union real_point3d const &);
// bool point_in_acoustic_transition(union real_point3d const &, struct s_scenario_acoustic_transition const &);
// bool operator==(struct s_scenario_acoustic_location const &, struct s_scenario_acoustic_location const &);
// struct s_scenario_acoustic_location scenario_acoustic_location_from_point(struct scenario const *, union real_point3d const &);
// bool game_sound_calculate_cluster_acoustic_state(union real_point3d const *, struct s_acoustic_state *);
// bool game_sound_distance_compare(long, long, void const *);
// public: short const & s_static_array<short, 2>::operator[]<bool>(bool) const;
// public: float * s_static_array<float, 64>::get_elements(void);
// public: long * s_static_array<long, 64>::get_elements(void);
// public: bool c_big_flags_typed_no_init<long, 64>::test(long) const;
// public: float & s_static_array<float, 64>::operator[]<short>(short);
// public: long & s_static_array<long, 64>::operator[]<short>(short);
// public: long & s_static_array<long, 64>::operator[]<long>(long);
// public: float & s_static_array<float, 64>::operator[]<long>(long);
// public: static bool s_static_array<short, 2>::valid<long>(long);
// public: static bool s_static_array<float, 64>::valid<short>(short);
// public: static bool s_static_array<long, 64>::valid<short>(short);
// public: static bool s_static_array<long, 64>::valid<long>(long);
// public: static bool s_static_array<float, 64>::valid<long>(long);
// public: c_tag_struct_vtable<class c_scenario_acoustics_vtable>::c_tag_struct_vtable<class c_scenario_acoustics_vtable>(void);
// public: virtual bool c_tag_struct_vtable<class c_scenario_acoustics_vtable>::has_byte_swap_proc(void) const;
// public: virtual void c_tag_struct_vtable<class c_scenario_acoustics_vtable>::byte_swap_block_proc(void *) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_acoustics_vtable>::has_postprocess_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_acoustics_vtable>::postprocess_thunk(long, void *, bool) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_acoustics_vtable>::has_format_proc(void) const;
// public: virtual char * c_tag_struct_vtable<class c_scenario_acoustics_vtable>::format_thunk(long, __int64, struct s_tag_block *, long, char *, long) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_acoustics_vtable>::has_on_delete_proc(void) const;
// public: virtual void c_tag_struct_vtable<class c_scenario_acoustics_vtable>::on_delete_thunk(void *) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_acoustics_vtable>::has_on_new_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_acoustics_vtable>::on_new_thunk(void *) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_acoustics_vtable>::has_on_copy_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_acoustics_vtable>::on_copy_thunk(void const *, void *) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_acoustics_vtable>::has_write_to_cache_file_proc(void) const;
// public: virtual void c_tag_struct_vtable<class c_scenario_acoustics_vtable>::write_to_cache_file_thunk(long, struct s_tag_block *, struct s_cache_file_builder_stream_context const *, void **, void **) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_acoustics_vtable>::has_block_does_not_exist_in_cache_file_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_acoustics_vtable>::block_does_not_exist_in_cache_file_thunk(void) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_acoustics_vtable>::has_fixup_old_struct_definition(void) const;
// public: virtual struct s_tag_struct_definition * c_tag_struct_vtable<class c_scenario_acoustics_vtable>::get_fixup_source_definition_thunk(void) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_acoustics_vtable>::has_fixup_old_struct_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_acoustics_vtable>::fixup_old_struct_thunk(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_acoustics_vtable>::has_fixup_old_struct_from_disk_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_acoustics_vtable>::fixup_old_struct_from_disk_thunk(struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool) const;
// public: static void s_tag_vtable_has_byte_swap_proc<class c_scenario_acoustics_vtable>::call(void *);
// public: static bool s_tag_vtable_has_postprocess_proc<class c_scenario_acoustics_vtable>::call(long, void *, bool);
// public: static char * s_tag_vtable_has_format_proc<class c_scenario_acoustics_vtable>::call(long, __int64, struct s_tag_block *, long, char *, long);
// public: static void s_tag_vtable_has_on_delete_proc<class c_scenario_acoustics_vtable>::call(void *);
// public: static bool s_tag_vtable_has_on_new_proc<class c_scenario_acoustics_vtable>::call(void *);
// public: static bool s_tag_vtable_has_on_copy_proc<class c_scenario_acoustics_vtable>::call(void const *, void *);
// public: static void s_tag_vtable_has_write_to_cache_file_proc<class c_scenario_acoustics_vtable>::call(long, struct s_tag_block *, struct s_cache_file_builder_stream_context const *, void **, void **);
// public: static bool s_tag_vtable_has_block_does_not_exist_in_cache_file<class c_scenario_acoustics_vtable>::call(void);
// public: static struct s_tag_struct_definition * s_tag_vtable_has_get_fixup_source_definition_proc<class c_scenario_acoustics_vtable>::call(void);
// public: static struct s_tag_struct_definition * c_scenario_acoustics_vtable::get_fixup_source_definition_proc(void);
// public: static bool s_tag_vtable_has_fixup_old_struct_proc<class c_scenario_acoustics_vtable>::call(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool);
// public: static bool c_scenario_acoustics_vtable::fixup_old_struct_proc(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool);
// public: static bool s_tag_vtable_has_fixup_old_struct_from_disk_proc<class c_scenario_acoustics_vtable>::call(struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool);
// public: struct structure_background_sound_palette_entry * c_basic_buffer<void>::c_basic_buffer_checked_caster::operatorcast<struct structure_background_sound_palette_entry>(void);
// public: struct s_scenario_acoustics_palette_entry * c_basic_buffer<void>::c_basic_buffer_checked_caster::operatorcast<struct s_scenario_acoustics_palette_entry>(void);
// public: struct structure_background_sound_palette_entry * c_basic_buffer<void>::get_as_type<struct structure_background_sound_palette_entry>(void);
// public: struct s_scenario_acoustics_palette_entry * c_basic_buffer<void>::get_as_type<struct s_scenario_acoustics_palette_entry>(void);
// public: struct structure_background_sound_palette_entry * c_basic_buffer<void>::get_as_type_from_offset<struct structure_background_sound_palette_entry>(unsigned long);
// public: struct s_scenario_acoustics_palette_entry * c_basic_buffer<void>::get_as_type_from_offset<struct s_scenario_acoustics_palette_entry>(unsigned long);
// public: c_tag_struct_vtable<class c_scenario_acoustic_sector_block_vtable>::c_tag_struct_vtable<class c_scenario_acoustic_sector_block_vtable>(void);
// public: virtual bool c_tag_struct_vtable<class c_scenario_acoustic_sector_block_vtable>::has_byte_swap_proc(void) const;
// public: virtual void c_tag_struct_vtable<class c_scenario_acoustic_sector_block_vtable>::byte_swap_block_proc(void *) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_acoustic_sector_block_vtable>::has_postprocess_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_acoustic_sector_block_vtable>::postprocess_thunk(long, void *, bool) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_acoustic_sector_block_vtable>::has_format_proc(void) const;
// public: virtual char * c_tag_struct_vtable<class c_scenario_acoustic_sector_block_vtable>::format_thunk(long, __int64, struct s_tag_block *, long, char *, long) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_acoustic_sector_block_vtable>::has_on_delete_proc(void) const;
// public: virtual void c_tag_struct_vtable<class c_scenario_acoustic_sector_block_vtable>::on_delete_thunk(void *) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_acoustic_sector_block_vtable>::has_on_new_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_acoustic_sector_block_vtable>::on_new_thunk(void *) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_acoustic_sector_block_vtable>::has_on_copy_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_acoustic_sector_block_vtable>::on_copy_thunk(void const *, void *) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_acoustic_sector_block_vtable>::has_write_to_cache_file_proc(void) const;
// public: virtual void c_tag_struct_vtable<class c_scenario_acoustic_sector_block_vtable>::write_to_cache_file_thunk(long, struct s_tag_block *, struct s_cache_file_builder_stream_context const *, void **, void **) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_acoustic_sector_block_vtable>::has_block_does_not_exist_in_cache_file_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_acoustic_sector_block_vtable>::block_does_not_exist_in_cache_file_thunk(void) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_acoustic_sector_block_vtable>::has_fixup_old_struct_definition(void) const;
// public: virtual struct s_tag_struct_definition * c_tag_struct_vtable<class c_scenario_acoustic_sector_block_vtable>::get_fixup_source_definition_thunk(void) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_acoustic_sector_block_vtable>::has_fixup_old_struct_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_acoustic_sector_block_vtable>::fixup_old_struct_thunk(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_acoustic_sector_block_vtable>::has_fixup_old_struct_from_disk_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_acoustic_sector_block_vtable>::fixup_old_struct_from_disk_thunk(struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool) const;
// public: static void s_tag_vtable_has_byte_swap_proc<class c_scenario_acoustic_sector_block_vtable>::call(void *);
// public: static bool s_tag_vtable_has_postprocess_proc<class c_scenario_acoustic_sector_block_vtable>::call(long, void *, bool);
// public: static bool c_scenario_acoustic_sector_block_vtable::postprocess_proc(long, void *, bool);
// public: static char * s_tag_vtable_has_format_proc<class c_scenario_acoustic_sector_block_vtable>::call(long, __int64, struct s_tag_block *, long, char *, long);
// public: static void s_tag_vtable_has_on_delete_proc<class c_scenario_acoustic_sector_block_vtable>::call(void *);
// public: static bool s_tag_vtable_has_on_new_proc<class c_scenario_acoustic_sector_block_vtable>::call(void *);
// public: static bool c_scenario_acoustic_sector_block_vtable::on_new_proc(void *);
// public: static bool s_tag_vtable_has_on_copy_proc<class c_scenario_acoustic_sector_block_vtable>::call(void const *, void *);
// public: static void s_tag_vtable_has_write_to_cache_file_proc<class c_scenario_acoustic_sector_block_vtable>::call(long, struct s_tag_block *, struct s_cache_file_builder_stream_context const *, void **, void **);
// public: static bool s_tag_vtable_has_block_does_not_exist_in_cache_file<class c_scenario_acoustic_sector_block_vtable>::call(void);
// public: static struct s_tag_struct_definition * s_tag_vtable_has_get_fixup_source_definition_proc<class c_scenario_acoustic_sector_block_vtable>::call(void);
// public: static bool s_tag_vtable_has_fixup_old_struct_proc<class c_scenario_acoustic_sector_block_vtable>::call(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool);
// public: static bool s_tag_vtable_has_fixup_old_struct_from_disk_proc<class c_scenario_acoustic_sector_block_vtable>::call(struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool);
// public: c_tag_struct_vtable<class c_scenario_acoustic_transition_block_vtable>::c_tag_struct_vtable<class c_scenario_acoustic_transition_block_vtable>(void);
// public: virtual bool c_tag_struct_vtable<class c_scenario_acoustic_transition_block_vtable>::has_byte_swap_proc(void) const;
// public: virtual void c_tag_struct_vtable<class c_scenario_acoustic_transition_block_vtable>::byte_swap_block_proc(void *) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_acoustic_transition_block_vtable>::has_postprocess_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_acoustic_transition_block_vtable>::postprocess_thunk(long, void *, bool) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_acoustic_transition_block_vtable>::has_format_proc(void) const;
// public: virtual char * c_tag_struct_vtable<class c_scenario_acoustic_transition_block_vtable>::format_thunk(long, __int64, struct s_tag_block *, long, char *, long) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_acoustic_transition_block_vtable>::has_on_delete_proc(void) const;
// public: virtual void c_tag_struct_vtable<class c_scenario_acoustic_transition_block_vtable>::on_delete_thunk(void *) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_acoustic_transition_block_vtable>::has_on_new_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_acoustic_transition_block_vtable>::on_new_thunk(void *) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_acoustic_transition_block_vtable>::has_on_copy_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_acoustic_transition_block_vtable>::on_copy_thunk(void const *, void *) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_acoustic_transition_block_vtable>::has_write_to_cache_file_proc(void) const;
// public: virtual void c_tag_struct_vtable<class c_scenario_acoustic_transition_block_vtable>::write_to_cache_file_thunk(long, struct s_tag_block *, struct s_cache_file_builder_stream_context const *, void **, void **) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_acoustic_transition_block_vtable>::has_block_does_not_exist_in_cache_file_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_acoustic_transition_block_vtable>::block_does_not_exist_in_cache_file_thunk(void) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_acoustic_transition_block_vtable>::has_fixup_old_struct_definition(void) const;
// public: virtual struct s_tag_struct_definition * c_tag_struct_vtable<class c_scenario_acoustic_transition_block_vtable>::get_fixup_source_definition_thunk(void) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_acoustic_transition_block_vtable>::has_fixup_old_struct_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_acoustic_transition_block_vtable>::fixup_old_struct_thunk(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_acoustic_transition_block_vtable>::has_fixup_old_struct_from_disk_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_acoustic_transition_block_vtable>::fixup_old_struct_from_disk_thunk(struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool) const;
// public: static void s_tag_vtable_has_byte_swap_proc<class c_scenario_acoustic_transition_block_vtable>::call(void *);
// public: static bool s_tag_vtable_has_postprocess_proc<class c_scenario_acoustic_transition_block_vtable>::call(long, void *, bool);
// public: static bool c_scenario_acoustic_transition_block_vtable::postprocess_proc(long, void *, bool);
// public: static char * s_tag_vtable_has_format_proc<class c_scenario_acoustic_transition_block_vtable>::call(long, __int64, struct s_tag_block *, long, char *, long);
// public: static void s_tag_vtable_has_on_delete_proc<class c_scenario_acoustic_transition_block_vtable>::call(void *);
// public: static bool s_tag_vtable_has_on_new_proc<class c_scenario_acoustic_transition_block_vtable>::call(void *);
// public: static bool c_scenario_acoustic_transition_block_vtable::on_new_proc(void *);
// public: static bool s_tag_vtable_has_on_copy_proc<class c_scenario_acoustic_transition_block_vtable>::call(void const *, void *);
// public: static void s_tag_vtable_has_write_to_cache_file_proc<class c_scenario_acoustic_transition_block_vtable>::call(long, struct s_tag_block *, struct s_cache_file_builder_stream_context const *, void **, void **);
// public: static bool s_tag_vtable_has_block_does_not_exist_in_cache_file<class c_scenario_acoustic_transition_block_vtable>::call(void);
// public: static struct s_tag_struct_definition * s_tag_vtable_has_get_fixup_source_definition_proc<class c_scenario_acoustic_transition_block_vtable>::call(void);
// public: static bool s_tag_vtable_has_fixup_old_struct_proc<class c_scenario_acoustic_transition_block_vtable>::call(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool);
// public: static bool s_tag_vtable_has_fixup_old_struct_from_disk_proc<class c_scenario_acoustic_transition_block_vtable>::call(struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool);

//struct s_sector_point_template<union real_point3d> * acoustic_sector_get_sector_point(struct s_scenario_acoustic_sector const &, long)
//{
//    mangled_ppc("?acoustic_sector_get_sector_point@@YAPAU?$s_sector_point_template@Treal_point3d@@@@ABUs_scenario_acoustic_sector@@J@Z");
//};

//void render_acoustic_sectors(void)
//{
//    mangled_ppc("?render_acoustic_sectors@@YAXXZ");
//};

//public: c_acoustic_sector_accessor::c_acoustic_sector_accessor(void)
//{
//    mangled_ppc("??0c_acoustic_sector_accessor@@QAA@XZ");
//};

//void render_debug_acoustic_sectors(void)
//{
//    mangled_ppc("?render_debug_acoustic_sectors@@YAXXZ");
//};

//struct s_scenario_acoustics_ambience * scenario_get_ambience_palette_entry(struct scenario *, long)
//{
//    mangled_ppc("?scenario_get_ambience_palette_entry@@YAPAUs_scenario_acoustics_ambience@@PAUscenario@@J@Z");
//};

//struct s_scenario_acoustics_environment * scenario_get_reverb_palette_entry(struct scenario *, long)
//{
//    mangled_ppc("?scenario_get_reverb_palette_entry@@YAPAUs_scenario_acoustics_environment@@PAUscenario@@J@Z");
//};

//void build_acoustic_transitions_sector_samples(struct scenario *)
//{
//    mangled_ppc("?build_acoustic_transitions_sector_samples@@YAXPAUscenario@@@Z");
//};

//void update_acoustic_transition_samples(struct s_scenario_acoustic_transition *, void (*)(union real_point3d const &, short *, struct s_scenario_acoustic_location *, void *), void *)
//{
//    mangled_ppc("?update_acoustic_transition_samples@@YAXPAUs_scenario_acoustic_transition@@P6AXABTreal_point3d@@PAFPAUs_scenario_acoustic_location@@PAX@Z4@Z");
//};

//void set_acoustic_transition_sample_to_sector(union real_point3d const &, short *, struct s_scenario_acoustic_location *, void *)
//{
//    mangled_ppc("?set_acoustic_transition_sample_to_sector@@YAXABTreal_point3d@@PAFPAUs_scenario_acoustic_location@@PAX@Z");
//};

//long scenario_acoustic_sector_index_from_point(struct scenario const *, union real_point3d const &)
//{
//    mangled_ppc("?scenario_acoustic_sector_index_from_point@@YAJPBUscenario@@ABTreal_point3d@@@Z");
//};

//bool point_in_acoustic_sector(union real_point3d const &, struct s_scenario_acoustic_sector const &)
//{
//    mangled_ppc("?point_in_acoustic_sector@@YA_NABTreal_point3d@@ABUs_scenario_acoustic_sector@@@Z");
//};

//void build_acoustic_transitions_cluster_samples(struct scenario *, struct structure_bsp const *, short)
//{
//    mangled_ppc("?build_acoustic_transitions_cluster_samples@@YAXPAUscenario@@PBUstructure_bsp@@F@Z");
//};

//void check_acoustic_transition_sample_in_bsp(union real_point3d const &, short *, struct s_scenario_acoustic_location *, void *)
//{
//    mangled_ppc("?check_acoustic_transition_sample_in_bsp@@YAXABTreal_point3d@@PAFPAUs_scenario_acoustic_location@@PAX@Z");
//};

//public: s_bsp_search::s_bsp_search(void)
//{
//    mangled_ppc("??0s_bsp_search@@QAA@XZ");
//};

//void refresh_acoustic_sector_planes(struct s_scenario_acoustic_sector *)
//{
//    mangled_ppc("?refresh_acoustic_sector_planes@@YAXPAUs_scenario_acoustic_sector@@@Z");
//};

//void scenario_acoustics_clear_disabled_palettes(void)
//{
//    mangled_ppc("?scenario_acoustics_clear_disabled_palettes@@YAXXZ");
//};

//void scenario_acoustics_set_palette_disabled_by_id(long, bool)
//{
//    mangled_ppc("?scenario_acoustics_set_palette_disabled_by_id@@YAXJ_N@Z");
//};

//bool scenario_acoustics_get_palette_disabled(long)
//{
//    mangled_ppc("?scenario_acoustics_get_palette_disabled@@YA_NJ@Z");
//};

//bool game_sound_calculate_sector_acoustic_state(union real_point3d const *, struct s_acoustic_state *)
//{
//    mangled_ppc("?game_sound_calculate_sector_acoustic_state@@YA_NPBTreal_point3d@@PAUs_acoustic_state@@@Z");
//};

//bool game_sound_calculate_transition_acoustic_state(union real_point3d const *, struct s_acoustic_state *)
//{
//    mangled_ppc("?game_sound_calculate_transition_acoustic_state@@YA_NPBTreal_point3d@@PAUs_acoustic_state@@@Z");
//};

//float distance_to_acoustic_transition(union real_point3d const &, struct s_scenario_acoustic_transition const &)
//{
//    mangled_ppc("?distance_to_acoustic_transition@@YAMABTreal_point3d@@ABUs_scenario_acoustic_transition@@@Z");
//};

//bool point_in_front_of_acoustic_transition(union real_point3d const &, struct s_scenario_acoustic_transition const &)
//{
//    mangled_ppc("?point_in_front_of_acoustic_transition@@YA_NABTreal_point3d@@ABUs_scenario_acoustic_transition@@@Z");
//};

//long scenario_acoustic_transition_index_from_point(struct scenario const *, union real_point3d const &)
//{
//    mangled_ppc("?scenario_acoustic_transition_index_from_point@@YAJPBUscenario@@ABTreal_point3d@@@Z");
//};

//bool point_in_acoustic_transition(union real_point3d const &, struct s_scenario_acoustic_transition const &)
//{
//    mangled_ppc("?point_in_acoustic_transition@@YA_NABTreal_point3d@@ABUs_scenario_acoustic_transition@@@Z");
//};

//bool operator==(struct s_scenario_acoustic_location const &, struct s_scenario_acoustic_location const &)
//{
//    mangled_ppc("??8@YA_NABUs_scenario_acoustic_location@@0@Z");
//};

//struct s_scenario_acoustic_location scenario_acoustic_location_from_point(struct scenario const *, union real_point3d const &)
//{
//    mangled_ppc("?scenario_acoustic_location_from_point@@YA?AUs_scenario_acoustic_location@@PBUscenario@@ABTreal_point3d@@@Z");
//};

//bool game_sound_calculate_cluster_acoustic_state(union real_point3d const *, struct s_acoustic_state *)
//{
//    mangled_ppc("?game_sound_calculate_cluster_acoustic_state@@YA_NPBTreal_point3d@@PAUs_acoustic_state@@@Z");
//};

//bool game_sound_distance_compare(long, long, void const *)
//{
//    mangled_ppc("?game_sound_distance_compare@@YA_NJJPBX@Z");
//};

//public: short const & s_static_array<short, 2>::operator[]<bool>(bool) const
//{
//    mangled_ppc("??$?A_N@?$s_static_array@F$01@@QBAABF_N@Z");
//};

//public: float * s_static_array<float, 64>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$s_static_array@M$0EA@@@QAAPAMXZ");
//};

//public: long * s_static_array<long, 64>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$s_static_array@J$0EA@@@QAAPAJXZ");
//};

//public: bool c_big_flags_typed_no_init<long, 64>::test(long) const
//{
//    mangled_ppc("?test@?$c_big_flags_typed_no_init@J$0EA@@@QBA_NJ@Z");
//};

//public: float & s_static_array<float, 64>::operator[]<short>(short)
//{
//    mangled_ppc("??$?AF@?$s_static_array@M$0EA@@@QAAAAMF@Z");
//};

//public: long & s_static_array<long, 64>::operator[]<short>(short)
//{
//    mangled_ppc("??$?AF@?$s_static_array@J$0EA@@@QAAAAJF@Z");
//};

//public: long & s_static_array<long, 64>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@J$0EA@@@QAAAAJJ@Z");
//};

//public: float & s_static_array<float, 64>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@M$0EA@@@QAAAAMJ@Z");
//};

//public: static bool s_static_array<short, 2>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@F$01@@SA_NJ@Z");
//};

//public: static bool s_static_array<float, 64>::valid<short>(short)
//{
//    mangled_ppc("??$valid@F@?$s_static_array@M$0EA@@@SA_NF@Z");
//};

//public: static bool s_static_array<long, 64>::valid<short>(short)
//{
//    mangled_ppc("??$valid@F@?$s_static_array@J$0EA@@@SA_NF@Z");
//};

//public: static bool s_static_array<long, 64>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@J$0EA@@@SA_NJ@Z");
//};

//public: static bool s_static_array<float, 64>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@M$0EA@@@SA_NJ@Z");
//};

//public: c_tag_struct_vtable<class c_scenario_acoustics_vtable>::c_tag_struct_vtable<class c_scenario_acoustics_vtable>(void)
//{
//    mangled_ppc("??0?$c_tag_struct_vtable@Vc_scenario_acoustics_vtable@@@@QAA@XZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_acoustics_vtable>::has_byte_swap_proc(void) const
//{
//    mangled_ppc("?has_byte_swap_proc@?$c_tag_struct_vtable@Vc_scenario_acoustics_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_struct_vtable<class c_scenario_acoustics_vtable>::byte_swap_block_proc(void *) const
//{
//    mangled_ppc("?byte_swap_block_proc@?$c_tag_struct_vtable@Vc_scenario_acoustics_vtable@@@@UBAXPAX@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_acoustics_vtable>::has_postprocess_proc(void) const
//{
//    mangled_ppc("?has_postprocess_proc@?$c_tag_struct_vtable@Vc_scenario_acoustics_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_acoustics_vtable>::postprocess_thunk(long, void *, bool) const
//{
//    mangled_ppc("?postprocess_thunk@?$c_tag_struct_vtable@Vc_scenario_acoustics_vtable@@@@UBA_NJPAX_N@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_acoustics_vtable>::has_format_proc(void) const
//{
//    mangled_ppc("?has_format_proc@?$c_tag_struct_vtable@Vc_scenario_acoustics_vtable@@@@UBA_NXZ");
//};

//public: virtual char * c_tag_struct_vtable<class c_scenario_acoustics_vtable>::format_thunk(long, __int64, struct s_tag_block *, long, char *, long) const
//{
//    mangled_ppc("?format_thunk@?$c_tag_struct_vtable@Vc_scenario_acoustics_vtable@@@@UBAPADJ_JPAUs_tag_block@@JPADJ@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_acoustics_vtable>::has_on_delete_proc(void) const
//{
//    mangled_ppc("?has_on_delete_proc@?$c_tag_struct_vtable@Vc_scenario_acoustics_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_struct_vtable<class c_scenario_acoustics_vtable>::on_delete_thunk(void *) const
//{
//    mangled_ppc("?on_delete_thunk@?$c_tag_struct_vtable@Vc_scenario_acoustics_vtable@@@@UBAXPAX@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_acoustics_vtable>::has_on_new_proc(void) const
//{
//    mangled_ppc("?has_on_new_proc@?$c_tag_struct_vtable@Vc_scenario_acoustics_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_acoustics_vtable>::on_new_thunk(void *) const
//{
//    mangled_ppc("?on_new_thunk@?$c_tag_struct_vtable@Vc_scenario_acoustics_vtable@@@@UBA_NPAX@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_acoustics_vtable>::has_on_copy_proc(void) const
//{
//    mangled_ppc("?has_on_copy_proc@?$c_tag_struct_vtable@Vc_scenario_acoustics_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_acoustics_vtable>::on_copy_thunk(void const *, void *) const
//{
//    mangled_ppc("?on_copy_thunk@?$c_tag_struct_vtable@Vc_scenario_acoustics_vtable@@@@UBA_NPBXPAX@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_acoustics_vtable>::has_write_to_cache_file_proc(void) const
//{
//    mangled_ppc("?has_write_to_cache_file_proc@?$c_tag_struct_vtable@Vc_scenario_acoustics_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_struct_vtable<class c_scenario_acoustics_vtable>::write_to_cache_file_thunk(long, struct s_tag_block *, struct s_cache_file_builder_stream_context const *, void **, void **) const
//{
//    mangled_ppc("?write_to_cache_file_thunk@?$c_tag_struct_vtable@Vc_scenario_acoustics_vtable@@@@UBAXJPAUs_tag_block@@PBUs_cache_file_builder_stream_context@@PAPAX2@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_acoustics_vtable>::has_block_does_not_exist_in_cache_file_proc(void) const
//{
//    mangled_ppc("?has_block_does_not_exist_in_cache_file_proc@?$c_tag_struct_vtable@Vc_scenario_acoustics_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_acoustics_vtable>::block_does_not_exist_in_cache_file_thunk(void) const
//{
//    mangled_ppc("?block_does_not_exist_in_cache_file_thunk@?$c_tag_struct_vtable@Vc_scenario_acoustics_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_acoustics_vtable>::has_fixup_old_struct_definition(void) const
//{
//    mangled_ppc("?has_fixup_old_struct_definition@?$c_tag_struct_vtable@Vc_scenario_acoustics_vtable@@@@UBA_NXZ");
//};

//public: virtual struct s_tag_struct_definition * c_tag_struct_vtable<class c_scenario_acoustics_vtable>::get_fixup_source_definition_thunk(void) const
//{
//    mangled_ppc("?get_fixup_source_definition_thunk@?$c_tag_struct_vtable@Vc_scenario_acoustics_vtable@@@@UBAPAUs_tag_struct_definition@@XZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_acoustics_vtable>::has_fixup_old_struct_proc(void) const
//{
//    mangled_ppc("?has_fixup_old_struct_proc@?$c_tag_struct_vtable@Vc_scenario_acoustics_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_acoustics_vtable>::fixup_old_struct_thunk(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool) const
//{
//    mangled_ppc("?fixup_old_struct_thunk@?$c_tag_struct_vtable@Vc_scenario_acoustics_vtable@@@@UBA_NAAV?$c_basic_buffer@X@@PBUs_tag_struct_definition@@01PAVc_tag_allocator@@_N@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_acoustics_vtable>::has_fixup_old_struct_from_disk_proc(void) const
//{
//    mangled_ppc("?has_fixup_old_struct_from_disk_proc@?$c_tag_struct_vtable@Vc_scenario_acoustics_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_acoustics_vtable>::fixup_old_struct_from_disk_thunk(struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool) const
//{
//    mangled_ppc("?fixup_old_struct_from_disk_thunk@?$c_tag_struct_vtable@Vc_scenario_acoustics_vtable@@@@UBA_NPBUs_tag_struct_definition@@AAV?$c_basic_buffer@X@@010PAVc_tag_allocator@@_N@Z");
//};

//public: static void s_tag_vtable_has_byte_swap_proc<class c_scenario_acoustics_vtable>::call(void *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_byte_swap_proc@Vc_scenario_acoustics_vtable@@@@SAXPAX@Z");
//};

//public: static bool s_tag_vtable_has_postprocess_proc<class c_scenario_acoustics_vtable>::call(long, void *, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_postprocess_proc@Vc_scenario_acoustics_vtable@@@@SA_NJPAX_N@Z");
//};

//public: static char * s_tag_vtable_has_format_proc<class c_scenario_acoustics_vtable>::call(long, __int64, struct s_tag_block *, long, char *, long)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_format_proc@Vc_scenario_acoustics_vtable@@@@SAPADJ_JPAUs_tag_block@@JPADJ@Z");
//};

//public: static void s_tag_vtable_has_on_delete_proc<class c_scenario_acoustics_vtable>::call(void *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_on_delete_proc@Vc_scenario_acoustics_vtable@@@@SAXPAX@Z");
//};

//public: static bool s_tag_vtable_has_on_new_proc<class c_scenario_acoustics_vtable>::call(void *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_on_new_proc@Vc_scenario_acoustics_vtable@@@@SA_NPAX@Z");
//};

//public: static bool s_tag_vtable_has_on_copy_proc<class c_scenario_acoustics_vtable>::call(void const *, void *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_on_copy_proc@Vc_scenario_acoustics_vtable@@@@SA_NPBXPAX@Z");
//};

//public: static void s_tag_vtable_has_write_to_cache_file_proc<class c_scenario_acoustics_vtable>::call(long, struct s_tag_block *, struct s_cache_file_builder_stream_context const *, void **, void **)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_write_to_cache_file_proc@Vc_scenario_acoustics_vtable@@@@SAXJPAUs_tag_block@@PBUs_cache_file_builder_stream_context@@PAPAX2@Z");
//};

//public: static bool s_tag_vtable_has_block_does_not_exist_in_cache_file<class c_scenario_acoustics_vtable>::call(void)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_block_does_not_exist_in_cache_file@Vc_scenario_acoustics_vtable@@@@SA_NXZ");
//};

//public: static struct s_tag_struct_definition * s_tag_vtable_has_get_fixup_source_definition_proc<class c_scenario_acoustics_vtable>::call(void)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_get_fixup_source_definition_proc@Vc_scenario_acoustics_vtable@@@@SAPAUs_tag_struct_definition@@XZ");
//};

//public: static struct s_tag_struct_definition * c_scenario_acoustics_vtable::get_fixup_source_definition_proc(void)
//{
//    mangled_ppc("?get_fixup_source_definition_proc@c_scenario_acoustics_vtable@@SAPAUs_tag_struct_definition@@XZ");
//};

//public: static bool s_tag_vtable_has_fixup_old_struct_proc<class c_scenario_acoustics_vtable>::call(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_fixup_old_struct_proc@Vc_scenario_acoustics_vtable@@@@SA_NAAV?$c_basic_buffer@X@@PBUs_tag_struct_definition@@01PAVc_tag_allocator@@_N@Z");
//};

//public: static bool c_scenario_acoustics_vtable::fixup_old_struct_proc(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool)
//{
//    mangled_ppc("?fixup_old_struct_proc@c_scenario_acoustics_vtable@@SA_NAAV?$c_basic_buffer@X@@PBUs_tag_struct_definition@@01PAVc_tag_allocator@@_N@Z");
//};

//public: static bool s_tag_vtable_has_fixup_old_struct_from_disk_proc<class c_scenario_acoustics_vtable>::call(struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_fixup_old_struct_from_disk_proc@Vc_scenario_acoustics_vtable@@@@SA_NPBUs_tag_struct_definition@@AAV?$c_basic_buffer@X@@010PAVc_tag_allocator@@_N@Z");
//};

//public: struct structure_background_sound_palette_entry * c_basic_buffer<void>::c_basic_buffer_checked_caster::operatorcast<struct structure_background_sound_palette_entry>(void)
//{
//    mangled_ppc("??$?BUstructure_background_sound_palette_entry@@@c_basic_buffer_checked_caster@?$c_basic_buffer@X@@QAAPAUstructure_background_sound_palette_entry@@XZ");
//};

//public: struct s_scenario_acoustics_palette_entry * c_basic_buffer<void>::c_basic_buffer_checked_caster::operatorcast<struct s_scenario_acoustics_palette_entry>(void)
//{
//    mangled_ppc("??$?BUs_scenario_acoustics_palette_entry@@@c_basic_buffer_checked_caster@?$c_basic_buffer@X@@QAAPAUs_scenario_acoustics_palette_entry@@XZ");
//};

//public: struct structure_background_sound_palette_entry * c_basic_buffer<void>::get_as_type<struct structure_background_sound_palette_entry>(void)
//{
//    mangled_ppc("??$get_as_type@Ustructure_background_sound_palette_entry@@@?$c_basic_buffer@X@@QAAPAUstructure_background_sound_palette_entry@@XZ");
//};

//public: struct s_scenario_acoustics_palette_entry * c_basic_buffer<void>::get_as_type<struct s_scenario_acoustics_palette_entry>(void)
//{
//    mangled_ppc("??$get_as_type@Us_scenario_acoustics_palette_entry@@@?$c_basic_buffer@X@@QAAPAUs_scenario_acoustics_palette_entry@@XZ");
//};

//public: struct structure_background_sound_palette_entry * c_basic_buffer<void>::get_as_type_from_offset<struct structure_background_sound_palette_entry>(unsigned long)
//{
//    mangled_ppc("??$get_as_type_from_offset@Ustructure_background_sound_palette_entry@@@?$c_basic_buffer@X@@QAAPAUstructure_background_sound_palette_entry@@K@Z");
//};

//public: struct s_scenario_acoustics_palette_entry * c_basic_buffer<void>::get_as_type_from_offset<struct s_scenario_acoustics_palette_entry>(unsigned long)
//{
//    mangled_ppc("??$get_as_type_from_offset@Us_scenario_acoustics_palette_entry@@@?$c_basic_buffer@X@@QAAPAUs_scenario_acoustics_palette_entry@@K@Z");
//};

//public: c_tag_struct_vtable<class c_scenario_acoustic_sector_block_vtable>::c_tag_struct_vtable<class c_scenario_acoustic_sector_block_vtable>(void)
//{
//    mangled_ppc("??0?$c_tag_struct_vtable@Vc_scenario_acoustic_sector_block_vtable@@@@QAA@XZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_acoustic_sector_block_vtable>::has_byte_swap_proc(void) const
//{
//    mangled_ppc("?has_byte_swap_proc@?$c_tag_struct_vtable@Vc_scenario_acoustic_sector_block_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_struct_vtable<class c_scenario_acoustic_sector_block_vtable>::byte_swap_block_proc(void *) const
//{
//    mangled_ppc("?byte_swap_block_proc@?$c_tag_struct_vtable@Vc_scenario_acoustic_sector_block_vtable@@@@UBAXPAX@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_acoustic_sector_block_vtable>::has_postprocess_proc(void) const
//{
//    mangled_ppc("?has_postprocess_proc@?$c_tag_struct_vtable@Vc_scenario_acoustic_sector_block_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_acoustic_sector_block_vtable>::postprocess_thunk(long, void *, bool) const
//{
//    mangled_ppc("?postprocess_thunk@?$c_tag_struct_vtable@Vc_scenario_acoustic_sector_block_vtable@@@@UBA_NJPAX_N@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_acoustic_sector_block_vtable>::has_format_proc(void) const
//{
//    mangled_ppc("?has_format_proc@?$c_tag_struct_vtable@Vc_scenario_acoustic_sector_block_vtable@@@@UBA_NXZ");
//};

//public: virtual char * c_tag_struct_vtable<class c_scenario_acoustic_sector_block_vtable>::format_thunk(long, __int64, struct s_tag_block *, long, char *, long) const
//{
//    mangled_ppc("?format_thunk@?$c_tag_struct_vtable@Vc_scenario_acoustic_sector_block_vtable@@@@UBAPADJ_JPAUs_tag_block@@JPADJ@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_acoustic_sector_block_vtable>::has_on_delete_proc(void) const
//{
//    mangled_ppc("?has_on_delete_proc@?$c_tag_struct_vtable@Vc_scenario_acoustic_sector_block_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_struct_vtable<class c_scenario_acoustic_sector_block_vtable>::on_delete_thunk(void *) const
//{
//    mangled_ppc("?on_delete_thunk@?$c_tag_struct_vtable@Vc_scenario_acoustic_sector_block_vtable@@@@UBAXPAX@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_acoustic_sector_block_vtable>::has_on_new_proc(void) const
//{
//    mangled_ppc("?has_on_new_proc@?$c_tag_struct_vtable@Vc_scenario_acoustic_sector_block_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_acoustic_sector_block_vtable>::on_new_thunk(void *) const
//{
//    mangled_ppc("?on_new_thunk@?$c_tag_struct_vtable@Vc_scenario_acoustic_sector_block_vtable@@@@UBA_NPAX@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_acoustic_sector_block_vtable>::has_on_copy_proc(void) const
//{
//    mangled_ppc("?has_on_copy_proc@?$c_tag_struct_vtable@Vc_scenario_acoustic_sector_block_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_acoustic_sector_block_vtable>::on_copy_thunk(void const *, void *) const
//{
//    mangled_ppc("?on_copy_thunk@?$c_tag_struct_vtable@Vc_scenario_acoustic_sector_block_vtable@@@@UBA_NPBXPAX@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_acoustic_sector_block_vtable>::has_write_to_cache_file_proc(void) const
//{
//    mangled_ppc("?has_write_to_cache_file_proc@?$c_tag_struct_vtable@Vc_scenario_acoustic_sector_block_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_struct_vtable<class c_scenario_acoustic_sector_block_vtable>::write_to_cache_file_thunk(long, struct s_tag_block *, struct s_cache_file_builder_stream_context const *, void **, void **) const
//{
//    mangled_ppc("?write_to_cache_file_thunk@?$c_tag_struct_vtable@Vc_scenario_acoustic_sector_block_vtable@@@@UBAXJPAUs_tag_block@@PBUs_cache_file_builder_stream_context@@PAPAX2@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_acoustic_sector_block_vtable>::has_block_does_not_exist_in_cache_file_proc(void) const
//{
//    mangled_ppc("?has_block_does_not_exist_in_cache_file_proc@?$c_tag_struct_vtable@Vc_scenario_acoustic_sector_block_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_acoustic_sector_block_vtable>::block_does_not_exist_in_cache_file_thunk(void) const
//{
//    mangled_ppc("?block_does_not_exist_in_cache_file_thunk@?$c_tag_struct_vtable@Vc_scenario_acoustic_sector_block_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_acoustic_sector_block_vtable>::has_fixup_old_struct_definition(void) const
//{
//    mangled_ppc("?has_fixup_old_struct_definition@?$c_tag_struct_vtable@Vc_scenario_acoustic_sector_block_vtable@@@@UBA_NXZ");
//};

//public: virtual struct s_tag_struct_definition * c_tag_struct_vtable<class c_scenario_acoustic_sector_block_vtable>::get_fixup_source_definition_thunk(void) const
//{
//    mangled_ppc("?get_fixup_source_definition_thunk@?$c_tag_struct_vtable@Vc_scenario_acoustic_sector_block_vtable@@@@UBAPAUs_tag_struct_definition@@XZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_acoustic_sector_block_vtable>::has_fixup_old_struct_proc(void) const
//{
//    mangled_ppc("?has_fixup_old_struct_proc@?$c_tag_struct_vtable@Vc_scenario_acoustic_sector_block_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_acoustic_sector_block_vtable>::fixup_old_struct_thunk(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool) const
//{
//    mangled_ppc("?fixup_old_struct_thunk@?$c_tag_struct_vtable@Vc_scenario_acoustic_sector_block_vtable@@@@UBA_NAAV?$c_basic_buffer@X@@PBUs_tag_struct_definition@@01PAVc_tag_allocator@@_N@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_acoustic_sector_block_vtable>::has_fixup_old_struct_from_disk_proc(void) const
//{
//    mangled_ppc("?has_fixup_old_struct_from_disk_proc@?$c_tag_struct_vtable@Vc_scenario_acoustic_sector_block_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_acoustic_sector_block_vtable>::fixup_old_struct_from_disk_thunk(struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool) const
//{
//    mangled_ppc("?fixup_old_struct_from_disk_thunk@?$c_tag_struct_vtable@Vc_scenario_acoustic_sector_block_vtable@@@@UBA_NPBUs_tag_struct_definition@@AAV?$c_basic_buffer@X@@010PAVc_tag_allocator@@_N@Z");
//};

//public: static void s_tag_vtable_has_byte_swap_proc<class c_scenario_acoustic_sector_block_vtable>::call(void *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_byte_swap_proc@Vc_scenario_acoustic_sector_block_vtable@@@@SAXPAX@Z");
//};

//public: static bool s_tag_vtable_has_postprocess_proc<class c_scenario_acoustic_sector_block_vtable>::call(long, void *, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_postprocess_proc@Vc_scenario_acoustic_sector_block_vtable@@@@SA_NJPAX_N@Z");
//};

//public: static bool c_scenario_acoustic_sector_block_vtable::postprocess_proc(long, void *, bool)
//{
//    mangled_ppc("?postprocess_proc@c_scenario_acoustic_sector_block_vtable@@SA_NJPAX_N@Z");
//};

//public: static char * s_tag_vtable_has_format_proc<class c_scenario_acoustic_sector_block_vtable>::call(long, __int64, struct s_tag_block *, long, char *, long)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_format_proc@Vc_scenario_acoustic_sector_block_vtable@@@@SAPADJ_JPAUs_tag_block@@JPADJ@Z");
//};

//public: static void s_tag_vtable_has_on_delete_proc<class c_scenario_acoustic_sector_block_vtable>::call(void *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_on_delete_proc@Vc_scenario_acoustic_sector_block_vtable@@@@SAXPAX@Z");
//};

//public: static bool s_tag_vtable_has_on_new_proc<class c_scenario_acoustic_sector_block_vtable>::call(void *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_on_new_proc@Vc_scenario_acoustic_sector_block_vtable@@@@SA_NPAX@Z");
//};

//public: static bool c_scenario_acoustic_sector_block_vtable::on_new_proc(void *)
//{
//    mangled_ppc("?on_new_proc@c_scenario_acoustic_sector_block_vtable@@SA_NPAX@Z");
//};

//public: static bool s_tag_vtable_has_on_copy_proc<class c_scenario_acoustic_sector_block_vtable>::call(void const *, void *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_on_copy_proc@Vc_scenario_acoustic_sector_block_vtable@@@@SA_NPBXPAX@Z");
//};

//public: static void s_tag_vtable_has_write_to_cache_file_proc<class c_scenario_acoustic_sector_block_vtable>::call(long, struct s_tag_block *, struct s_cache_file_builder_stream_context const *, void **, void **)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_write_to_cache_file_proc@Vc_scenario_acoustic_sector_block_vtable@@@@SAXJPAUs_tag_block@@PBUs_cache_file_builder_stream_context@@PAPAX2@Z");
//};

//public: static bool s_tag_vtable_has_block_does_not_exist_in_cache_file<class c_scenario_acoustic_sector_block_vtable>::call(void)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_block_does_not_exist_in_cache_file@Vc_scenario_acoustic_sector_block_vtable@@@@SA_NXZ");
//};

//public: static struct s_tag_struct_definition * s_tag_vtable_has_get_fixup_source_definition_proc<class c_scenario_acoustic_sector_block_vtable>::call(void)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_get_fixup_source_definition_proc@Vc_scenario_acoustic_sector_block_vtable@@@@SAPAUs_tag_struct_definition@@XZ");
//};

//public: static bool s_tag_vtable_has_fixup_old_struct_proc<class c_scenario_acoustic_sector_block_vtable>::call(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_fixup_old_struct_proc@Vc_scenario_acoustic_sector_block_vtable@@@@SA_NAAV?$c_basic_buffer@X@@PBUs_tag_struct_definition@@01PAVc_tag_allocator@@_N@Z");
//};

//public: static bool s_tag_vtable_has_fixup_old_struct_from_disk_proc<class c_scenario_acoustic_sector_block_vtable>::call(struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_fixup_old_struct_from_disk_proc@Vc_scenario_acoustic_sector_block_vtable@@@@SA_NPBUs_tag_struct_definition@@AAV?$c_basic_buffer@X@@010PAVc_tag_allocator@@_N@Z");
//};

//public: c_tag_struct_vtable<class c_scenario_acoustic_transition_block_vtable>::c_tag_struct_vtable<class c_scenario_acoustic_transition_block_vtable>(void)
//{
//    mangled_ppc("??0?$c_tag_struct_vtable@Vc_scenario_acoustic_transition_block_vtable@@@@QAA@XZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_acoustic_transition_block_vtable>::has_byte_swap_proc(void) const
//{
//    mangled_ppc("?has_byte_swap_proc@?$c_tag_struct_vtable@Vc_scenario_acoustic_transition_block_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_struct_vtable<class c_scenario_acoustic_transition_block_vtable>::byte_swap_block_proc(void *) const
//{
//    mangled_ppc("?byte_swap_block_proc@?$c_tag_struct_vtable@Vc_scenario_acoustic_transition_block_vtable@@@@UBAXPAX@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_acoustic_transition_block_vtable>::has_postprocess_proc(void) const
//{
//    mangled_ppc("?has_postprocess_proc@?$c_tag_struct_vtable@Vc_scenario_acoustic_transition_block_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_acoustic_transition_block_vtable>::postprocess_thunk(long, void *, bool) const
//{
//    mangled_ppc("?postprocess_thunk@?$c_tag_struct_vtable@Vc_scenario_acoustic_transition_block_vtable@@@@UBA_NJPAX_N@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_acoustic_transition_block_vtable>::has_format_proc(void) const
//{
//    mangled_ppc("?has_format_proc@?$c_tag_struct_vtable@Vc_scenario_acoustic_transition_block_vtable@@@@UBA_NXZ");
//};

//public: virtual char * c_tag_struct_vtable<class c_scenario_acoustic_transition_block_vtable>::format_thunk(long, __int64, struct s_tag_block *, long, char *, long) const
//{
//    mangled_ppc("?format_thunk@?$c_tag_struct_vtable@Vc_scenario_acoustic_transition_block_vtable@@@@UBAPADJ_JPAUs_tag_block@@JPADJ@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_acoustic_transition_block_vtable>::has_on_delete_proc(void) const
//{
//    mangled_ppc("?has_on_delete_proc@?$c_tag_struct_vtable@Vc_scenario_acoustic_transition_block_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_struct_vtable<class c_scenario_acoustic_transition_block_vtable>::on_delete_thunk(void *) const
//{
//    mangled_ppc("?on_delete_thunk@?$c_tag_struct_vtable@Vc_scenario_acoustic_transition_block_vtable@@@@UBAXPAX@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_acoustic_transition_block_vtable>::has_on_new_proc(void) const
//{
//    mangled_ppc("?has_on_new_proc@?$c_tag_struct_vtable@Vc_scenario_acoustic_transition_block_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_acoustic_transition_block_vtable>::on_new_thunk(void *) const
//{
//    mangled_ppc("?on_new_thunk@?$c_tag_struct_vtable@Vc_scenario_acoustic_transition_block_vtable@@@@UBA_NPAX@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_acoustic_transition_block_vtable>::has_on_copy_proc(void) const
//{
//    mangled_ppc("?has_on_copy_proc@?$c_tag_struct_vtable@Vc_scenario_acoustic_transition_block_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_acoustic_transition_block_vtable>::on_copy_thunk(void const *, void *) const
//{
//    mangled_ppc("?on_copy_thunk@?$c_tag_struct_vtable@Vc_scenario_acoustic_transition_block_vtable@@@@UBA_NPBXPAX@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_acoustic_transition_block_vtable>::has_write_to_cache_file_proc(void) const
//{
//    mangled_ppc("?has_write_to_cache_file_proc@?$c_tag_struct_vtable@Vc_scenario_acoustic_transition_block_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_struct_vtable<class c_scenario_acoustic_transition_block_vtable>::write_to_cache_file_thunk(long, struct s_tag_block *, struct s_cache_file_builder_stream_context const *, void **, void **) const
//{
//    mangled_ppc("?write_to_cache_file_thunk@?$c_tag_struct_vtable@Vc_scenario_acoustic_transition_block_vtable@@@@UBAXJPAUs_tag_block@@PBUs_cache_file_builder_stream_context@@PAPAX2@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_acoustic_transition_block_vtable>::has_block_does_not_exist_in_cache_file_proc(void) const
//{
//    mangled_ppc("?has_block_does_not_exist_in_cache_file_proc@?$c_tag_struct_vtable@Vc_scenario_acoustic_transition_block_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_acoustic_transition_block_vtable>::block_does_not_exist_in_cache_file_thunk(void) const
//{
//    mangled_ppc("?block_does_not_exist_in_cache_file_thunk@?$c_tag_struct_vtable@Vc_scenario_acoustic_transition_block_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_acoustic_transition_block_vtable>::has_fixup_old_struct_definition(void) const
//{
//    mangled_ppc("?has_fixup_old_struct_definition@?$c_tag_struct_vtable@Vc_scenario_acoustic_transition_block_vtable@@@@UBA_NXZ");
//};

//public: virtual struct s_tag_struct_definition * c_tag_struct_vtable<class c_scenario_acoustic_transition_block_vtable>::get_fixup_source_definition_thunk(void) const
//{
//    mangled_ppc("?get_fixup_source_definition_thunk@?$c_tag_struct_vtable@Vc_scenario_acoustic_transition_block_vtable@@@@UBAPAUs_tag_struct_definition@@XZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_acoustic_transition_block_vtable>::has_fixup_old_struct_proc(void) const
//{
//    mangled_ppc("?has_fixup_old_struct_proc@?$c_tag_struct_vtable@Vc_scenario_acoustic_transition_block_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_acoustic_transition_block_vtable>::fixup_old_struct_thunk(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool) const
//{
//    mangled_ppc("?fixup_old_struct_thunk@?$c_tag_struct_vtable@Vc_scenario_acoustic_transition_block_vtable@@@@UBA_NAAV?$c_basic_buffer@X@@PBUs_tag_struct_definition@@01PAVc_tag_allocator@@_N@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_acoustic_transition_block_vtable>::has_fixup_old_struct_from_disk_proc(void) const
//{
//    mangled_ppc("?has_fixup_old_struct_from_disk_proc@?$c_tag_struct_vtable@Vc_scenario_acoustic_transition_block_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_acoustic_transition_block_vtable>::fixup_old_struct_from_disk_thunk(struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool) const
//{
//    mangled_ppc("?fixup_old_struct_from_disk_thunk@?$c_tag_struct_vtable@Vc_scenario_acoustic_transition_block_vtable@@@@UBA_NPBUs_tag_struct_definition@@AAV?$c_basic_buffer@X@@010PAVc_tag_allocator@@_N@Z");
//};

//public: static void s_tag_vtable_has_byte_swap_proc<class c_scenario_acoustic_transition_block_vtable>::call(void *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_byte_swap_proc@Vc_scenario_acoustic_transition_block_vtable@@@@SAXPAX@Z");
//};

//public: static bool s_tag_vtable_has_postprocess_proc<class c_scenario_acoustic_transition_block_vtable>::call(long, void *, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_postprocess_proc@Vc_scenario_acoustic_transition_block_vtable@@@@SA_NJPAX_N@Z");
//};

//public: static bool c_scenario_acoustic_transition_block_vtable::postprocess_proc(long, void *, bool)
//{
//    mangled_ppc("?postprocess_proc@c_scenario_acoustic_transition_block_vtable@@SA_NJPAX_N@Z");
//};

//public: static char * s_tag_vtable_has_format_proc<class c_scenario_acoustic_transition_block_vtable>::call(long, __int64, struct s_tag_block *, long, char *, long)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_format_proc@Vc_scenario_acoustic_transition_block_vtable@@@@SAPADJ_JPAUs_tag_block@@JPADJ@Z");
//};

//public: static void s_tag_vtable_has_on_delete_proc<class c_scenario_acoustic_transition_block_vtable>::call(void *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_on_delete_proc@Vc_scenario_acoustic_transition_block_vtable@@@@SAXPAX@Z");
//};

//public: static bool s_tag_vtable_has_on_new_proc<class c_scenario_acoustic_transition_block_vtable>::call(void *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_on_new_proc@Vc_scenario_acoustic_transition_block_vtable@@@@SA_NPAX@Z");
//};

//public: static bool c_scenario_acoustic_transition_block_vtable::on_new_proc(void *)
//{
//    mangled_ppc("?on_new_proc@c_scenario_acoustic_transition_block_vtable@@SA_NPAX@Z");
//};

//public: static bool s_tag_vtable_has_on_copy_proc<class c_scenario_acoustic_transition_block_vtable>::call(void const *, void *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_on_copy_proc@Vc_scenario_acoustic_transition_block_vtable@@@@SA_NPBXPAX@Z");
//};

//public: static void s_tag_vtable_has_write_to_cache_file_proc<class c_scenario_acoustic_transition_block_vtable>::call(long, struct s_tag_block *, struct s_cache_file_builder_stream_context const *, void **, void **)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_write_to_cache_file_proc@Vc_scenario_acoustic_transition_block_vtable@@@@SAXJPAUs_tag_block@@PBUs_cache_file_builder_stream_context@@PAPAX2@Z");
//};

//public: static bool s_tag_vtable_has_block_does_not_exist_in_cache_file<class c_scenario_acoustic_transition_block_vtable>::call(void)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_block_does_not_exist_in_cache_file@Vc_scenario_acoustic_transition_block_vtable@@@@SA_NXZ");
//};

//public: static struct s_tag_struct_definition * s_tag_vtable_has_get_fixup_source_definition_proc<class c_scenario_acoustic_transition_block_vtable>::call(void)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_get_fixup_source_definition_proc@Vc_scenario_acoustic_transition_block_vtable@@@@SAPAUs_tag_struct_definition@@XZ");
//};

//public: static bool s_tag_vtable_has_fixup_old_struct_proc<class c_scenario_acoustic_transition_block_vtable>::call(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_fixup_old_struct_proc@Vc_scenario_acoustic_transition_block_vtable@@@@SA_NAAV?$c_basic_buffer@X@@PBUs_tag_struct_definition@@01PAVc_tag_allocator@@_N@Z");
//};

//public: static bool s_tag_vtable_has_fixup_old_struct_from_disk_proc<class c_scenario_acoustic_transition_block_vtable>::call(struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_fixup_old_struct_from_disk_proc@Vc_scenario_acoustic_transition_block_vtable@@@@SA_NPBUs_tag_struct_definition@@AAV?$c_basic_buffer@X@@010PAVc_tag_allocator@@_N@Z");
//};

