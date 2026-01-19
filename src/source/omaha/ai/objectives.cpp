/* ---------- headers */

#include "omaha\ai\objectives.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// except_record_838F8FA8; // "except_record_838F8FA8"
// short *g_movement_force_combat_status_mapping; // "?g_movement_force_combat_status_mapping@@3PAFA"
// char const **inhibit_behavior_flag_names; // "?inhibit_behavior_flag_names@@3PAPBDA"
// struct s_tag_struct_definition script_fragment_block_struct_definition; // "?script_fragment_block_struct_definition@@3Us_tag_struct_definition@@A"
// struct s_tag_block_definition script_fragment_block; // "?script_fragment_block@@3Us_tag_block_definition@@A"
// char const **g_filter_enum_strings; // "?g_filter_enum_strings@@3PAPBDA"
// struct s_tag_struct_definition zone_set_block_struct; // "?zone_set_block_struct@@3Us_tag_struct_definition@@A"
// struct s_tag_block_definition zone_set_block; // "?zone_set_block@@3Us_tag_block_definition@@A"
// char const **g_global_task_attitude_strings; // "?g_global_task_attitude_strings@@3PAPBDA"
// struct s_tag_block_definition tasks_block; // "?tasks_block@@3Us_tag_block_definition@@A"
// struct s_tag_struct_definition tasks_block_struct; // "?tasks_block_struct@@3Us_tag_struct_definition@@A"
// struct s_tag_block_definition objectives_block; // "?objectives_block@@3Us_tag_block_definition@@A"
// struct s_tag_struct_definition objectives_block_struct_definition; // "?objectives_block_struct_definition@@3Us_tag_struct_definition@@A"
// class t_restricted_allocation_manager<1, 0, 0, void (__cdecl __tls_set_g_objectives_data_allocator::*)(void *)> g_objectives_data_allocator; // "?g_objectives_data_allocator@@3V?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_objectives_data_allocator@@YAXPAX@Z@@A"
// class t_restricted_allocation_manager<1, 0, 0, void (__cdecl __tls_set_g_tasks_data_allocator::*)(void *)> g_tasks_data_allocator; // "?g_tasks_data_allocator@@3V?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_tasks_data_allocator@@YAXPAX@Z@@A"
// class c_tag_struct_vtable<class c_task_direction_v2_vtable> task_direction_block_v2_struct_struct_vtable; // "?task_direction_block_v2_struct_struct_vtable@@3V?$c_tag_struct_vtable@Vc_task_direction_v2_vtable@@@@A"
// class c_tag_struct_vtable<class c_zone_set_vtable> zone_set_block_struct_struct_vtable; // "?zone_set_block_struct_struct_vtable@@3V?$c_tag_struct_vtable@Vc_zone_set_vtable@@@@A"
// class c_tag_struct_vtable<class c_tasks_vtable> tasks_block_struct_struct_vtable; // "?tasks_block_struct_struct_vtable@@3V?$c_tag_struct_vtable@Vc_tasks_vtable@@@@A"
// struct s_data_array *objectives_data; // "?objectives_data@@3PAUs_data_array@@A"
// struct s_task_record *tasks_data; // "?tasks_data@@3PAUs_task_record@@A"

// void __tls_set_g_objectives_data_allocator(void *);
// void __tls_set_g_tasks_data_allocator(void *);
// bool custom_area_block_search(long, struct s_tag_field const *, void const *, void const *, __int64, struct s_tag_block_resolve_custom_result *);
// bool custom_area_block_matches(struct s_tag_field const *, struct s_tag_block_definition const *);
// void objectives_initialize(void);
// void objective_build_area_connectivity(long);
// void objectives_build_hierarchy(void);
// void sort_linked_task_list(short, short *, unsigned char const *);
// bool sort_info_compare(long, long, void const *);
// void objectives_initialize_for_new_structure_bsp(unsigned long);
// void objectives_initialize_for_new_map(void);
// void objectives_build_area_connectivity(void);
// void objective_new(short, short *);
// void task_record_reset(short, short);
// void objective_reset(short);
// void ai_scripting_reset_objective(long);
// void ai_scripting_objective_patrol_disallow(long, bool);
// void objectives_handle_source_editing(struct s_script_fragment *);
// void objective_handle_death(short, short, long);
// void objectives_handle_areas_delete(short, unsigned long const *);
// void objectives_update(void);
// void objective_update(long);
// void task_update_group_state(short, short);
// void task_set_area_direction(struct s_task const *, struct s_area_reference *, struct s_task_direction_v2const *);
// float task_compute_area_direction(struct s_task const *, short, short, struct s_task_direction_v2const *);
// void task_set_area_directions(struct s_task *, struct s_task_direction_v2const *);
// void generate_area_connectivity(struct s_area_reference *, long);
// void task_generate_area_connectivity(struct s_task *);
// void task_update_behaviors(long, short);
// void objective_task_signal_engage(long);
// void task_update_broken(long, short);
// bool objective_decide(long);
// bool decide_task_group(short, short, struct s_task_info *, float *, long *);
// bool decide_tasks_priority_group(short, short, short, short, short, struct s_task_info *, float *, long *);
// short pick_a_squad_to_eject(short, short, short);
// void eject_squad(short, short, short, struct s_task_info *);
// bool squad_list_add(short, enum e_squad_source, struct s_task_info const *, struct s_squad_info *, short *);
// void disallow_task(short, short, unsigned long *);
// void disallowed_tasks_unassign_squads(short, short, struct s_task_info *, unsigned long const *, struct s_squad_info *, short *);
// void clear_assignments(short, short, short, struct s_squad_info *, short, struct s_task_info *);
// bool test_filter(long, struct s_task *, struct s_task_info *, struct s_task_record *, short, bool, bool *);
// bool test_vehicle_filter(long, struct s_task const *, struct s_task_info *, struct s_task_record *, short, bool);
// bool find_assignment(short, short, short, short, struct s_squad_info *, short, struct s_task_info *, unsigned long const *, float *, long *);
// float task_get_score(short, short, short, short, struct s_task_info *, float *, long *);
// float task_score(short, short, short, short, struct s_task_info *, float *, long *);
// short task_get_current_count(short, short, short, float, struct s_squad_info const *, short, struct s_task_info *, float *, long *);
// bool objective_task_test_script_activation(short, short);
// bool objective_task_test_activation(short, short, struct s_task_info const *, bool, bool *);
// float task_estimate_vitality(short, short);
// void objective_update_leadership(short, short, short, long);
// void objective_task_break(short, short);
// void objective_task_break_nearby(short, short, enum e_campaign_team, short);
// long objective_task_get_leader(short, short);
// void objective_task_request_engage(short, short, bool);
// bool objective_task_engage_allowed(short, short);
// void objective_task_request_group_grenade(short, short);
// bool objective_task_signal_group_grenade(long);
// bool objective_task_group_grenade_allowed(short, short);
// bool actor_task_kungfu_disallowed(long, long);
// float task_nearest_player_distance_squared(long, long, long, unsigned long);
// void objective_update_fight_count(long);
// short objective_task_update_fight_count_internal(long, long, unsigned long *);
// bool fight_count_compare(short, short, void const *);
// void objective_task_calculate_position(short, short);
// bool objective_get_position(long, union real_point3d *, enum e_objective_position_mode);
// union real_point3d const * objective_task_get_position(short, short);
// bool objective_task_get_area_direction(short, short, short, short, union vector3d *);
// bool objective_task_get_area_yaw(short, short, short, short, float *);
// enum e_task_movement objective_task_get_movement(short, struct s_task const *);
// long objective_get_count(long);
// bool objective_add_squad(short, long);
// void add_squad(short *, short);
// bool objective_remove_squad(short, long);
// bool remove_squad(short *, short);
// bool objective_unassigned_add_squad(short, long);
// bool objective_unassigned_remove_squad(short, long);
// void finalize_task_change(long);
// bool squad_set_objective(long, short, short, bool);
// void objective_activate(long);
// void objective_deactivate(long);
// char const * objective_task_get_fragment(struct s_task const *);
// bool objective_task_set_fragment(struct s_task *, char const *);
// void objectives_scripting_aggregate_fragments(struct s_file_reference *);
// bool objectives_verify_script_references(bool);
// void objectives_invalidate_fragments(void);
// bool ai_scripting_set_task2(long, long);
// bool ai_scripting_set_task(long, long, long);
// void task_exhaust(short, short, long);
// void task_update(short, short);
// short ai_scripting_task_status(long);
// bool ai_scripting_set_task_condition(long, bool);
// bool ai_scripting_leadership(long);
// bool ai_scripting_leadership_all(long);
// short ai_task_count(long);
// struct s_task * objective_get_task(struct s_objective const *, short);
// struct s_task * objective_get_task(short, short);
// struct s_task_record * objective_get_task_record(short, short);
// short objective_get_by_name(long);
// short objective_task_get_by_name(long, long);
// bool squad_is_broken(long);
// bool squad_valid_task(long);
// bool squad_is_broken(struct squad_datum *);
// bool squad_valid_task(struct squad_datum const *);
// short objective_task_get_body_count(short, short);
// short objective_task_get_lifetime_count(short, short);
// short objective_task_get_firing_position_count(short, short);
// void task_iterator_new(struct s_task_iterator *, short, short);
// struct s_task * task_iterator_next(struct s_task_iterator *);
// void task_squad_iterator_new(struct s_task_squad_iterator *, short, short, bool, bool);
// struct squad_datum * task_squad_iterator_next(struct s_task_squad_iterator *);
// void task_actor_iterator_new(short, short, struct task_actor_iterator *);
// struct squad_datum * task_actor_iterator_get_next_squad(struct task_actor_iterator *);
// struct actor_datum * task_actor_iterator_next(struct task_actor_iterator *);
// bool objective_task_is_vehicle_task(long, long);
// void ai_debug_render_objectives(long, union real_point3d const *);
// void objective_task_render_direction(struct s_task const *);
// public: c_enum<enum e_script_fragment_state, short, 0, 3, struct s_default_enum_string_resolver>::c_enum<enum e_script_fragment_state, short, 0, 3, struct s_default_enum_string_resolver>(enum e_script_fragment_state);
// public: enum e_script_fragment_state c_enum_no_init<enum e_script_fragment_state, short, 0, 3, struct s_default_enum_string_resolver>::operator enum e_script_fragment_state(void) const;
// public: enum e_task_movement c_enum_no_init<enum e_task_movement, short, 0, 3, struct s_default_enum_string_resolver>::operator enum e_task_movement(void) const;
// public: enum e_objective_filter c_enum_no_init<enum e_objective_filter, short, 0, 49, struct s_default_enum_string_resolver>::operator enum e_objective_filter(void) const;
// public: bool c_enum_no_init<enum e_objective_filter, short, 0, 49, struct s_default_enum_string_resolver>::operator==(enum e_objective_filter) const;
// public: bool c_enum_no_init<enum e_task_attitude, short, 0, 5, struct s_default_enum_string_resolver>::operator==(enum e_task_attitude) const;
// public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_tasks_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_tasks_data_allocator::*)(void *)>::valid(void) const;
// public: bool c_flags_no_init<enum e_objective_filter_flag, short, 1, struct s_default_enum_string_resolver>::test(enum e_objective_filter_flag) const;
// public: void c_flags_no_init<enum e_objective_runtime_flags, short, 1, struct s_default_enum_string_resolver>::clear(void);
// public: void c_flags_no_init<enum e_objective_runtime_flags, short, 1, struct s_default_enum_string_resolver>::set(enum e_objective_runtime_flags, bool);
// public: void c_flags_no_init<enum e_task_record_flags, unsigned short, 11, struct s_default_enum_string_resolver>::set(enum e_task_record_flags, bool);
// public: static bool c_flags_no_init<enum e_objective_filter_flag, short, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_objective_filter_flag);
// private: static short c_flags_no_init<enum e_objective_filter_flag, short, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_objective_filter_flag);
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_objectives_data_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_objectives_data_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_objectives_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_objectives_data_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_objectives_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_objectives_data_allocator::*)(void *)>::free_memory(void);
// public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_objectives_data_allocator::*)(void *)>::valid(void) const;
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_tasks_data_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_tasks_data_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_tasks_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_tasks_data_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_tasks_data_allocator::*)(void *)>::free_memory(void);
// public: c_tag_struct_vtable<class c_task_direction_v2_vtable>::c_tag_struct_vtable<class c_task_direction_v2_vtable>(void);
// public: virtual bool c_tag_struct_vtable<class c_task_direction_v2_vtable>::has_byte_swap_proc(void) const;
// public: virtual void c_tag_struct_vtable<class c_task_direction_v2_vtable>::byte_swap_block_proc(void *) const;
// public: virtual bool c_tag_struct_vtable<class c_task_direction_v2_vtable>::has_postprocess_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_task_direction_v2_vtable>::postprocess_thunk(long, void *, bool) const;
// public: virtual bool c_tag_struct_vtable<class c_task_direction_v2_vtable>::has_format_proc(void) const;
// public: virtual char * c_tag_struct_vtable<class c_task_direction_v2_vtable>::format_thunk(long, __int64, struct s_tag_block *, long, char *, long) const;
// public: virtual bool c_tag_struct_vtable<class c_task_direction_v2_vtable>::has_on_delete_proc(void) const;
// public: virtual void c_tag_struct_vtable<class c_task_direction_v2_vtable>::on_delete_thunk(void *) const;
// public: virtual bool c_tag_struct_vtable<class c_task_direction_v2_vtable>::has_on_new_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_task_direction_v2_vtable>::on_new_thunk(void *) const;
// public: virtual bool c_tag_struct_vtable<class c_task_direction_v2_vtable>::has_on_copy_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_task_direction_v2_vtable>::on_copy_thunk(void const *, void *) const;
// public: virtual bool c_tag_struct_vtable<class c_task_direction_v2_vtable>::has_write_to_cache_file_proc(void) const;
// public: virtual void c_tag_struct_vtable<class c_task_direction_v2_vtable>::write_to_cache_file_thunk(long, struct s_tag_block *, struct s_cache_file_builder_stream_context const *, void **, void **) const;
// public: virtual bool c_tag_struct_vtable<class c_task_direction_v2_vtable>::has_block_does_not_exist_in_cache_file_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_task_direction_v2_vtable>::block_does_not_exist_in_cache_file_thunk(void) const;
// public: virtual bool c_tag_struct_vtable<class c_task_direction_v2_vtable>::has_fixup_old_struct_definition(void) const;
// public: virtual struct s_tag_struct_definition * c_tag_struct_vtable<class c_task_direction_v2_vtable>::get_fixup_source_definition_thunk(void) const;
// public: virtual bool c_tag_struct_vtable<class c_task_direction_v2_vtable>::has_fixup_old_struct_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_task_direction_v2_vtable>::fixup_old_struct_thunk(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool) const;
// public: virtual bool c_tag_struct_vtable<class c_task_direction_v2_vtable>::has_fixup_old_struct_from_disk_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_task_direction_v2_vtable>::fixup_old_struct_from_disk_thunk(struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool) const;
// public: static void s_tag_vtable_has_byte_swap_proc<class c_task_direction_v2_vtable>::call(void *);
// public: static bool s_tag_vtable_has_postprocess_proc<class c_task_direction_v2_vtable>::call(long, void *, bool);
// public: static char * s_tag_vtable_has_format_proc<class c_task_direction_v2_vtable>::call(long, __int64, struct s_tag_block *, long, char *, long);
// public: static void s_tag_vtable_has_on_delete_proc<class c_task_direction_v2_vtable>::call(void *);
// public: static bool s_tag_vtable_has_on_new_proc<class c_task_direction_v2_vtable>::call(void *);
// public: static bool s_tag_vtable_has_on_copy_proc<class c_task_direction_v2_vtable>::call(void const *, void *);
// public: static void s_tag_vtable_has_write_to_cache_file_proc<class c_task_direction_v2_vtable>::call(long, struct s_tag_block *, struct s_cache_file_builder_stream_context const *, void **, void **);
// public: static bool s_tag_vtable_has_block_does_not_exist_in_cache_file<class c_task_direction_v2_vtable>::call(void);
// public: static struct s_tag_struct_definition * s_tag_vtable_has_get_fixup_source_definition_proc<class c_task_direction_v2_vtable>::call(void);
// public: static struct s_tag_struct_definition * c_task_direction_v2_vtable::get_fixup_source_definition_proc(void);
// public: static bool s_tag_vtable_has_fixup_old_struct_proc<class c_task_direction_v2_vtable>::call(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool);
// public: static bool c_task_direction_v2_vtable::fixup_old_struct_proc(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool);
// public: static bool s_tag_vtable_has_fixup_old_struct_from_disk_proc<class c_task_direction_v2_vtable>::call(struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool);
// public: struct s_task_direction_v1* c_basic_buffer<void>::c_basic_buffer_checked_caster::operatorcast<struct s_task_direction_v1>(void);
// public: struct s_task_direction_v2* c_basic_buffer<void>::c_basic_buffer_checked_caster::operatorcast<struct s_task_direction_v2>(void);
// public: struct s_task_direction_v1* c_basic_buffer<void>::get_as_type<struct s_task_direction_v1>(void);
// public: struct s_task_direction_v2* c_basic_buffer<void>::get_as_type<struct s_task_direction_v2>(void);
// public: struct s_task_direction_v1* c_basic_buffer<void>::get_as_type_from_offset<struct s_task_direction_v1>(unsigned long);
// public: struct s_task_direction_v2* c_basic_buffer<void>::get_as_type_from_offset<struct s_task_direction_v2>(unsigned long);
// public: c_tag_struct_vtable<class c_zone_set_vtable>::c_tag_struct_vtable<class c_zone_set_vtable>(void);
// public: virtual bool c_tag_struct_vtable<class c_zone_set_vtable>::has_byte_swap_proc(void) const;
// public: virtual void c_tag_struct_vtable<class c_zone_set_vtable>::byte_swap_block_proc(void *) const;
// public: virtual bool c_tag_struct_vtable<class c_zone_set_vtable>::has_postprocess_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_zone_set_vtable>::postprocess_thunk(long, void *, bool) const;
// public: virtual bool c_tag_struct_vtable<class c_zone_set_vtable>::has_format_proc(void) const;
// public: virtual char * c_tag_struct_vtable<class c_zone_set_vtable>::format_thunk(long, __int64, struct s_tag_block *, long, char *, long) const;
// public: virtual bool c_tag_struct_vtable<class c_zone_set_vtable>::has_on_delete_proc(void) const;
// public: virtual void c_tag_struct_vtable<class c_zone_set_vtable>::on_delete_thunk(void *) const;
// public: virtual bool c_tag_struct_vtable<class c_zone_set_vtable>::has_on_new_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_zone_set_vtable>::on_new_thunk(void *) const;
// public: virtual bool c_tag_struct_vtable<class c_zone_set_vtable>::has_on_copy_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_zone_set_vtable>::on_copy_thunk(void const *, void *) const;
// public: virtual bool c_tag_struct_vtable<class c_zone_set_vtable>::has_write_to_cache_file_proc(void) const;
// public: virtual void c_tag_struct_vtable<class c_zone_set_vtable>::write_to_cache_file_thunk(long, struct s_tag_block *, struct s_cache_file_builder_stream_context const *, void **, void **) const;
// public: virtual bool c_tag_struct_vtable<class c_zone_set_vtable>::has_block_does_not_exist_in_cache_file_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_zone_set_vtable>::block_does_not_exist_in_cache_file_thunk(void) const;
// public: virtual bool c_tag_struct_vtable<class c_zone_set_vtable>::has_fixup_old_struct_definition(void) const;
// public: virtual struct s_tag_struct_definition * c_tag_struct_vtable<class c_zone_set_vtable>::get_fixup_source_definition_thunk(void) const;
// public: virtual bool c_tag_struct_vtable<class c_zone_set_vtable>::has_fixup_old_struct_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_zone_set_vtable>::fixup_old_struct_thunk(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool) const;
// public: virtual bool c_tag_struct_vtable<class c_zone_set_vtable>::has_fixup_old_struct_from_disk_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_zone_set_vtable>::fixup_old_struct_from_disk_thunk(struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool) const;
// public: static void s_tag_vtable_has_byte_swap_proc<class c_zone_set_vtable>::call(void *);
// public: static bool s_tag_vtable_has_postprocess_proc<class c_zone_set_vtable>::call(long, void *, bool);
// public: static char * s_tag_vtable_has_format_proc<class c_zone_set_vtable>::call(long, __int64, struct s_tag_block *, long, char *, long);
// public: static char * c_zone_set_vtable::format_proc(long, __int64, struct s_tag_block *, long, char *, long);
// public: static void s_tag_vtable_has_on_delete_proc<class c_zone_set_vtable>::call(void *);
// public: static bool s_tag_vtable_has_on_new_proc<class c_zone_set_vtable>::call(void *);
// public: static bool s_tag_vtable_has_on_copy_proc<class c_zone_set_vtable>::call(void const *, void *);
// public: static void s_tag_vtable_has_write_to_cache_file_proc<class c_zone_set_vtable>::call(long, struct s_tag_block *, struct s_cache_file_builder_stream_context const *, void **, void **);
// public: static bool s_tag_vtable_has_block_does_not_exist_in_cache_file<class c_zone_set_vtable>::call(void);
// public: static struct s_tag_struct_definition * s_tag_vtable_has_get_fixup_source_definition_proc<class c_zone_set_vtable>::call(void);
// public: static bool s_tag_vtable_has_fixup_old_struct_proc<class c_zone_set_vtable>::call(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool);
// public: static bool s_tag_vtable_has_fixup_old_struct_from_disk_proc<class c_zone_set_vtable>::call(struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool);
// public: c_tag_struct_vtable<class c_tasks_vtable>::c_tag_struct_vtable<class c_tasks_vtable>(void);
// public: virtual bool c_tag_struct_vtable<class c_tasks_vtable>::has_byte_swap_proc(void) const;
// public: virtual void c_tag_struct_vtable<class c_tasks_vtable>::byte_swap_block_proc(void *) const;
// public: virtual bool c_tag_struct_vtable<class c_tasks_vtable>::has_postprocess_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_tasks_vtable>::postprocess_thunk(long, void *, bool) const;
// public: virtual bool c_tag_struct_vtable<class c_tasks_vtable>::has_format_proc(void) const;
// public: virtual char * c_tag_struct_vtable<class c_tasks_vtable>::format_thunk(long, __int64, struct s_tag_block *, long, char *, long) const;
// public: virtual bool c_tag_struct_vtable<class c_tasks_vtable>::has_on_delete_proc(void) const;
// public: virtual void c_tag_struct_vtable<class c_tasks_vtable>::on_delete_thunk(void *) const;
// public: virtual bool c_tag_struct_vtable<class c_tasks_vtable>::has_on_new_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_tasks_vtable>::on_new_thunk(void *) const;
// public: virtual bool c_tag_struct_vtable<class c_tasks_vtable>::has_on_copy_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_tasks_vtable>::on_copy_thunk(void const *, void *) const;
// public: virtual bool c_tag_struct_vtable<class c_tasks_vtable>::has_write_to_cache_file_proc(void) const;
// public: virtual void c_tag_struct_vtable<class c_tasks_vtable>::write_to_cache_file_thunk(long, struct s_tag_block *, struct s_cache_file_builder_stream_context const *, void **, void **) const;
// public: virtual bool c_tag_struct_vtable<class c_tasks_vtable>::has_block_does_not_exist_in_cache_file_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_tasks_vtable>::block_does_not_exist_in_cache_file_thunk(void) const;
// public: virtual bool c_tag_struct_vtable<class c_tasks_vtable>::has_fixup_old_struct_definition(void) const;
// public: virtual struct s_tag_struct_definition * c_tag_struct_vtable<class c_tasks_vtable>::get_fixup_source_definition_thunk(void) const;
// public: virtual bool c_tag_struct_vtable<class c_tasks_vtable>::has_fixup_old_struct_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_tasks_vtable>::fixup_old_struct_thunk(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool) const;
// public: virtual bool c_tag_struct_vtable<class c_tasks_vtable>::has_fixup_old_struct_from_disk_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_tasks_vtable>::fixup_old_struct_from_disk_thunk(struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool) const;
// public: static void s_tag_vtable_has_byte_swap_proc<class c_tasks_vtable>::call(void *);
// public: static bool s_tag_vtable_has_postprocess_proc<class c_tasks_vtable>::call(long, void *, bool);
// public: static bool c_tasks_vtable::postprocess_proc(long, void *, bool);
// public: static char * s_tag_vtable_has_format_proc<class c_tasks_vtable>::call(long, __int64, struct s_tag_block *, long, char *, long);
// public: static void s_tag_vtable_has_on_delete_proc<class c_tasks_vtable>::call(void *);
// public: static bool s_tag_vtable_has_on_new_proc<class c_tasks_vtable>::call(void *);
// public: static bool s_tag_vtable_has_on_copy_proc<class c_tasks_vtable>::call(void const *, void *);
// public: static void s_tag_vtable_has_write_to_cache_file_proc<class c_tasks_vtable>::call(long, struct s_tag_block *, struct s_cache_file_builder_stream_context const *, void **, void **);
// public: static bool s_tag_vtable_has_block_does_not_exist_in_cache_file<class c_tasks_vtable>::call(void);
// public: static struct s_tag_struct_definition * s_tag_vtable_has_get_fixup_source_definition_proc<class c_tasks_vtable>::call(void);
// public: static bool s_tag_vtable_has_fixup_old_struct_proc<class c_tasks_vtable>::call(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool);
// public: static bool s_tag_vtable_has_fixup_old_struct_from_disk_proc<class c_tasks_vtable>::call(struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool);
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_objectives_data_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_objectives_data_allocator::*)(void *)>(void);
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_tasks_data_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_tasks_data_allocator::*)(void *)>(void);
// void g_objectives_data_allocator::`dynamic atexit destructor'(void);
// void g_tasks_data_allocator::`dynamic atexit destructor'(void);

//void __tls_set_g_objectives_data_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_objectives_data_allocator@@YAXPAX@Z");
//};

//void __tls_set_g_tasks_data_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_tasks_data_allocator@@YAXPAX@Z");
//};

//bool custom_area_block_search(long, struct s_tag_field const *, void const *, void const *, __int64, struct s_tag_block_resolve_custom_result *)
//{
//    mangled_ppc("?custom_area_block_search@@YA_NJPBUs_tag_field@@PBX1_JPAUs_tag_block_resolve_custom_result@@@Z");
//};

//bool custom_area_block_matches(struct s_tag_field const *, struct s_tag_block_definition const *)
//{
//    mangled_ppc("?custom_area_block_matches@@YA_NPBUs_tag_field@@PBUs_tag_block_definition@@@Z");
//};

//void objectives_initialize(void)
//{
//    mangled_ppc("?objectives_initialize@@YAXXZ");
//};

//void objective_build_area_connectivity(long)
//{
//    mangled_ppc("?objective_build_area_connectivity@@YAXJ@Z");
//};

//void objectives_build_hierarchy(void)
//{
//    mangled_ppc("?objectives_build_hierarchy@@YAXXZ");
//};

//void sort_linked_task_list(short, short *, unsigned char const *)
//{
//    mangled_ppc("?sort_linked_task_list@@YAXFPAFPBE@Z");
//};

//bool sort_info_compare(long, long, void const *)
//{
//    mangled_ppc("?sort_info_compare@@YA_NJJPBX@Z");
//};

//void objectives_initialize_for_new_structure_bsp(unsigned long)
//{
//    mangled_ppc("?objectives_initialize_for_new_structure_bsp@@YAXK@Z");
//};

//void objectives_initialize_for_new_map(void)
//{
//    mangled_ppc("?objectives_initialize_for_new_map@@YAXXZ");
//};

//void objectives_build_area_connectivity(void)
//{
//    mangled_ppc("?objectives_build_area_connectivity@@YAXXZ");
//};

//void objective_new(short, short *)
//{
//    mangled_ppc("?objective_new@@YAXFPAF@Z");
//};

//void task_record_reset(short, short)
//{
//    mangled_ppc("?task_record_reset@@YAXFF@Z");
//};

//void objective_reset(short)
//{
//    mangled_ppc("?objective_reset@@YAXF@Z");
//};

//void ai_scripting_reset_objective(long)
//{
//    mangled_ppc("?ai_scripting_reset_objective@@YAXJ@Z");
//};

//void ai_scripting_objective_patrol_disallow(long, bool)
//{
//    mangled_ppc("?ai_scripting_objective_patrol_disallow@@YAXJ_N@Z");
//};

//void objectives_handle_source_editing(struct s_script_fragment *)
//{
//    mangled_ppc("?objectives_handle_source_editing@@YAXPAUs_script_fragment@@@Z");
//};

//void objective_handle_death(short, short, long)
//{
//    mangled_ppc("?objective_handle_death@@YAXFFJ@Z");
//};

//void objectives_handle_areas_delete(short, unsigned long const *)
//{
//    mangled_ppc("?objectives_handle_areas_delete@@YAXFPBK@Z");
//};

//void objectives_update(void)
//{
//    mangled_ppc("?objectives_update@@YAXXZ");
//};

//void objective_update(long)
//{
//    mangled_ppc("?objective_update@@YAXJ@Z");
//};

//void task_update_group_state(short, short)
//{
//    mangled_ppc("?task_update_group_state@@YAXFF@Z");
//};

//void task_set_area_direction(struct s_task const *, struct s_area_reference *, struct s_task_direction_v2const *)
//{
//    mangled_ppc("?task_set_area_direction@@YAXPBUs_task@@PAUs_area_reference@@PBUs_task_direction_v2@@@Z");
//};

//float task_compute_area_direction(struct s_task const *, short, short, struct s_task_direction_v2const *)
//{
//    mangled_ppc("?task_compute_area_direction@@YAMPBUs_task@@FFPBUs_task_direction_v2@@@Z");
//};

//void task_set_area_directions(struct s_task *, struct s_task_direction_v2const *)
//{
//    mangled_ppc("?task_set_area_directions@@YAXPAUs_task@@PBUs_task_direction_v2@@@Z");
//};

//void generate_area_connectivity(struct s_area_reference *, long)
//{
//    mangled_ppc("?generate_area_connectivity@@YAXPAUs_area_reference@@J@Z");
//};

//void task_generate_area_connectivity(struct s_task *)
//{
//    mangled_ppc("?task_generate_area_connectivity@@YAXPAUs_task@@@Z");
//};

//void task_update_behaviors(long, short)
//{
//    mangled_ppc("?task_update_behaviors@@YAXJF@Z");
//};

//void objective_task_signal_engage(long)
//{
//    mangled_ppc("?objective_task_signal_engage@@YAXJ@Z");
//};

//void task_update_broken(long, short)
//{
//    mangled_ppc("?task_update_broken@@YAXJF@Z");
//};

//bool objective_decide(long)
//{
//    mangled_ppc("?objective_decide@@YA_NJ@Z");
//};

//bool decide_task_group(short, short, struct s_task_info *, float *, long *)
//{
//    mangled_ppc("?decide_task_group@@YA_NFFPAUs_task_info@@PAMPAJ@Z");
//};

//bool decide_tasks_priority_group(short, short, short, short, short, struct s_task_info *, float *, long *)
//{
//    mangled_ppc("?decide_tasks_priority_group@@YA_NFFFFFPAUs_task_info@@PAMPAJ@Z");
//};

//short pick_a_squad_to_eject(short, short, short)
//{
//    mangled_ppc("?pick_a_squad_to_eject@@YAFFFF@Z");
//};

//void eject_squad(short, short, short, struct s_task_info *)
//{
//    mangled_ppc("?eject_squad@@YAXFFFPAUs_task_info@@@Z");
//};

//bool squad_list_add(short, enum e_squad_source, struct s_task_info const *, struct s_squad_info *, short *)
//{
//    mangled_ppc("?squad_list_add@@YA_NFW4e_squad_source@@PBUs_task_info@@PAUs_squad_info@@PAF@Z");
//};

//void disallow_task(short, short, unsigned long *)
//{
//    mangled_ppc("?disallow_task@@YAXFFPAK@Z");
//};

//void disallowed_tasks_unassign_squads(short, short, struct s_task_info *, unsigned long const *, struct s_squad_info *, short *)
//{
//    mangled_ppc("?disallowed_tasks_unassign_squads@@YAXFFPAUs_task_info@@PBKPAUs_squad_info@@PAF@Z");
//};

//void clear_assignments(short, short, short, struct s_squad_info *, short, struct s_task_info *)
//{
//    mangled_ppc("?clear_assignments@@YAXFFFPAUs_squad_info@@FPAUs_task_info@@@Z");
//};

//bool test_filter(long, struct s_task *, struct s_task_info *, struct s_task_record *, short, bool, bool *)
//{
//    mangled_ppc("?test_filter@@YA_NJPAUs_task@@PAUs_task_info@@PAUs_task_record@@F_NPA_N@Z");
//};

//bool test_vehicle_filter(long, struct s_task const *, struct s_task_info *, struct s_task_record *, short, bool)
//{
//    mangled_ppc("?test_vehicle_filter@@YA_NJPBUs_task@@PAUs_task_info@@PAUs_task_record@@F_N@Z");
//};

//bool find_assignment(short, short, short, short, struct s_squad_info *, short, struct s_task_info *, unsigned long const *, float *, long *)
//{
//    mangled_ppc("?find_assignment@@YA_NFFFFPAUs_squad_info@@FPAUs_task_info@@PBKPAMPAJ@Z");
//};

//float task_get_score(short, short, short, short, struct s_task_info *, float *, long *)
//{
//    mangled_ppc("?task_get_score@@YAMFFFFPAUs_task_info@@PAMPAJ@Z");
//};

//float task_score(short, short, short, short, struct s_task_info *, float *, long *)
//{
//    mangled_ppc("?task_score@@YAMFFFFPAUs_task_info@@PAMPAJ@Z");
//};

//short task_get_current_count(short, short, short, float, struct s_squad_info const *, short, struct s_task_info *, float *, long *)
//{
//    mangled_ppc("?task_get_current_count@@YAFFFFMPBUs_squad_info@@FPAUs_task_info@@PAMPAJ@Z");
//};

//bool objective_task_test_script_activation(short, short)
//{
//    mangled_ppc("?objective_task_test_script_activation@@YA_NFF@Z");
//};

//bool objective_task_test_activation(short, short, struct s_task_info const *, bool, bool *)
//{
//    mangled_ppc("?objective_task_test_activation@@YA_NFFPBUs_task_info@@_NPA_N@Z");
//};

//float task_estimate_vitality(short, short)
//{
//    mangled_ppc("?task_estimate_vitality@@YAMFF@Z");
//};

//void objective_update_leadership(short, short, short, long)
//{
//    mangled_ppc("?objective_update_leadership@@YAXFFFJ@Z");
//};

//void objective_task_break(short, short)
//{
//    mangled_ppc("?objective_task_break@@YAXFF@Z");
//};

//void objective_task_break_nearby(short, short, enum e_campaign_team, short)
//{
//    mangled_ppc("?objective_task_break_nearby@@YAXFFW4e_campaign_team@@F@Z");
//};

//long objective_task_get_leader(short, short)
//{
//    mangled_ppc("?objective_task_get_leader@@YAJFF@Z");
//};

//void objective_task_request_engage(short, short, bool)
//{
//    mangled_ppc("?objective_task_request_engage@@YAXFF_N@Z");
//};

//bool objective_task_engage_allowed(short, short)
//{
//    mangled_ppc("?objective_task_engage_allowed@@YA_NFF@Z");
//};

//void objective_task_request_group_grenade(short, short)
//{
//    mangled_ppc("?objective_task_request_group_grenade@@YAXFF@Z");
//};

//bool objective_task_signal_group_grenade(long)
//{
//    mangled_ppc("?objective_task_signal_group_grenade@@YA_NJ@Z");
//};

//bool objective_task_group_grenade_allowed(short, short)
//{
//    mangled_ppc("?objective_task_group_grenade_allowed@@YA_NFF@Z");
//};

//bool actor_task_kungfu_disallowed(long, long)
//{
//    mangled_ppc("?actor_task_kungfu_disallowed@@YA_NJJ@Z");
//};

//float task_nearest_player_distance_squared(long, long, long, unsigned long)
//{
//    mangled_ppc("?task_nearest_player_distance_squared@@YAMJJJK@Z");
//};

//void objective_update_fight_count(long)
//{
//    mangled_ppc("?objective_update_fight_count@@YAXJ@Z");
//};

//short objective_task_update_fight_count_internal(long, long, unsigned long *)
//{
//    mangled_ppc("?objective_task_update_fight_count_internal@@YAFJJPAK@Z");
//};

//bool fight_count_compare(short, short, void const *)
//{
//    mangled_ppc("?fight_count_compare@@YA_NFFPBX@Z");
//};

//void objective_task_calculate_position(short, short)
//{
//    mangled_ppc("?objective_task_calculate_position@@YAXFF@Z");
//};

//bool objective_get_position(long, union real_point3d *, enum e_objective_position_mode)
//{
//    mangled_ppc("?objective_get_position@@YA_NJPATreal_point3d@@W4e_objective_position_mode@@@Z");
//};

//union real_point3d const * objective_task_get_position(short, short)
//{
//    mangled_ppc("?objective_task_get_position@@YAPBTreal_point3d@@FF@Z");
//};

//bool objective_task_get_area_direction(short, short, short, short, union vector3d *)
//{
//    mangled_ppc("?objective_task_get_area_direction@@YA_NFFFFPATvector3d@@@Z");
//};

//bool objective_task_get_area_yaw(short, short, short, short, float *)
//{
//    mangled_ppc("?objective_task_get_area_yaw@@YA_NFFFFPAM@Z");
//};

//enum e_task_movement objective_task_get_movement(short, struct s_task const *)
//{
//    mangled_ppc("?objective_task_get_movement@@YA?AW4e_task_movement@@FPBUs_task@@@Z");
//};

//long objective_get_count(long)
//{
//    mangled_ppc("?objective_get_count@@YAJJ@Z");
//};

//bool objective_add_squad(short, long)
//{
//    mangled_ppc("?objective_add_squad@@YA_NFJ@Z");
//};

//void add_squad(short *, short)
//{
//    mangled_ppc("?add_squad@@YAXPAFF@Z");
//};

//bool objective_remove_squad(short, long)
//{
//    mangled_ppc("?objective_remove_squad@@YA_NFJ@Z");
//};

//bool remove_squad(short *, short)
//{
//    mangled_ppc("?remove_squad@@YA_NPAFF@Z");
//};

//bool objective_unassigned_add_squad(short, long)
//{
//    mangled_ppc("?objective_unassigned_add_squad@@YA_NFJ@Z");
//};

//bool objective_unassigned_remove_squad(short, long)
//{
//    mangled_ppc("?objective_unassigned_remove_squad@@YA_NFJ@Z");
//};

//void finalize_task_change(long)
//{
//    mangled_ppc("?finalize_task_change@@YAXJ@Z");
//};

//bool squad_set_objective(long, short, short, bool)
//{
//    mangled_ppc("?squad_set_objective@@YA_NJFF_N@Z");
//};

//void objective_activate(long)
//{
//    mangled_ppc("?objective_activate@@YAXJ@Z");
//};

//void objective_deactivate(long)
//{
//    mangled_ppc("?objective_deactivate@@YAXJ@Z");
//};

//char const * objective_task_get_fragment(struct s_task const *)
//{
//    mangled_ppc("?objective_task_get_fragment@@YAPBDPBUs_task@@@Z");
//};

//bool objective_task_set_fragment(struct s_task *, char const *)
//{
//    mangled_ppc("?objective_task_set_fragment@@YA_NPAUs_task@@PBD@Z");
//};

//void objectives_scripting_aggregate_fragments(struct s_file_reference *)
//{
//    mangled_ppc("?objectives_scripting_aggregate_fragments@@YAXPAUs_file_reference@@@Z");
//};

//bool objectives_verify_script_references(bool)
//{
//    mangled_ppc("?objectives_verify_script_references@@YA_N_N@Z");
//};

//void objectives_invalidate_fragments(void)
//{
//    mangled_ppc("?objectives_invalidate_fragments@@YAXXZ");
//};

//bool ai_scripting_set_task2(long, long)
//{
//    mangled_ppc("?ai_scripting_set_task2@@YA_NJJ@Z");
//};

//bool ai_scripting_set_task(long, long, long)
//{
//    mangled_ppc("?ai_scripting_set_task@@YA_NJJJ@Z");
//};

//void task_exhaust(short, short, long)
//{
//    mangled_ppc("?task_exhaust@@YAXFFJ@Z");
//};

//void task_update(short, short)
//{
//    mangled_ppc("?task_update@@YAXFF@Z");
//};

//short ai_scripting_task_status(long)
//{
//    mangled_ppc("?ai_scripting_task_status@@YAFJ@Z");
//};

//bool ai_scripting_set_task_condition(long, bool)
//{
//    mangled_ppc("?ai_scripting_set_task_condition@@YA_NJ_N@Z");
//};

//bool ai_scripting_leadership(long)
//{
//    mangled_ppc("?ai_scripting_leadership@@YA_NJ@Z");
//};

//bool ai_scripting_leadership_all(long)
//{
//    mangled_ppc("?ai_scripting_leadership_all@@YA_NJ@Z");
//};

//short ai_task_count(long)
//{
//    mangled_ppc("?ai_task_count@@YAFJ@Z");
//};

//struct s_task * objective_get_task(struct s_objective const *, short)
//{
//    mangled_ppc("?objective_get_task@@YAPAUs_task@@PBUs_objective@@F@Z");
//};

//struct s_task * objective_get_task(short, short)
//{
//    mangled_ppc("?objective_get_task@@YAPAUs_task@@FF@Z");
//};

//struct s_task_record * objective_get_task_record(short, short)
//{
//    mangled_ppc("?objective_get_task_record@@YAPAUs_task_record@@FF@Z");
//};

//short objective_get_by_name(long)
//{
//    mangled_ppc("?objective_get_by_name@@YAFJ@Z");
//};

//short objective_task_get_by_name(long, long)
//{
//    mangled_ppc("?objective_task_get_by_name@@YAFJJ@Z");
//};

//bool squad_is_broken(long)
//{
//    mangled_ppc("?squad_is_broken@@YA_NJ@Z");
//};

//bool squad_valid_task(long)
//{
//    mangled_ppc("?squad_valid_task@@YA_NJ@Z");
//};

//bool squad_is_broken(struct squad_datum *)
//{
//    mangled_ppc("?squad_is_broken@@YA_NPAUsquad_datum@@@Z");
//};

//bool squad_valid_task(struct squad_datum const *)
//{
//    mangled_ppc("?squad_valid_task@@YA_NPBUsquad_datum@@@Z");
//};

//short objective_task_get_body_count(short, short)
//{
//    mangled_ppc("?objective_task_get_body_count@@YAFFF@Z");
//};

//short objective_task_get_lifetime_count(short, short)
//{
//    mangled_ppc("?objective_task_get_lifetime_count@@YAFFF@Z");
//};

//short objective_task_get_firing_position_count(short, short)
//{
//    mangled_ppc("?objective_task_get_firing_position_count@@YAFFF@Z");
//};

//void task_iterator_new(struct s_task_iterator *, short, short)
//{
//    mangled_ppc("?task_iterator_new@@YAXPAUs_task_iterator@@FF@Z");
//};

//struct s_task * task_iterator_next(struct s_task_iterator *)
//{
//    mangled_ppc("?task_iterator_next@@YAPAUs_task@@PAUs_task_iterator@@@Z");
//};

//void task_squad_iterator_new(struct s_task_squad_iterator *, short, short, bool, bool)
//{
//    mangled_ppc("?task_squad_iterator_new@@YAXPAUs_task_squad_iterator@@FF_N1@Z");
//};

//struct squad_datum * task_squad_iterator_next(struct s_task_squad_iterator *)
//{
//    mangled_ppc("?task_squad_iterator_next@@YAPAUsquad_datum@@PAUs_task_squad_iterator@@@Z");
//};

//void task_actor_iterator_new(short, short, struct task_actor_iterator *)
//{
//    mangled_ppc("?task_actor_iterator_new@@YAXFFPAUtask_actor_iterator@@@Z");
//};

//struct squad_datum * task_actor_iterator_get_next_squad(struct task_actor_iterator *)
//{
//    mangled_ppc("?task_actor_iterator_get_next_squad@@YAPAUsquad_datum@@PAUtask_actor_iterator@@@Z");
//};

//struct actor_datum * task_actor_iterator_next(struct task_actor_iterator *)
//{
//    mangled_ppc("?task_actor_iterator_next@@YAPAUactor_datum@@PAUtask_actor_iterator@@@Z");
//};

//bool objective_task_is_vehicle_task(long, long)
//{
//    mangled_ppc("?objective_task_is_vehicle_task@@YA_NJJ@Z");
//};

//void ai_debug_render_objectives(long, union real_point3d const *)
//{
//    mangled_ppc("?ai_debug_render_objectives@@YAXJPBTreal_point3d@@@Z");
//};

//void objective_task_render_direction(struct s_task const *)
//{
//    mangled_ppc("?objective_task_render_direction@@YAXPBUs_task@@@Z");
//};

//public: c_enum<enum e_script_fragment_state, short, 0, 3, struct s_default_enum_string_resolver>::c_enum<enum e_script_fragment_state, short, 0, 3, struct s_default_enum_string_resolver>(enum e_script_fragment_state)
//{
//    mangled_ppc("??0?$c_enum@W4e_script_fragment_state@@F$0A@$02Us_default_enum_string_resolver@@@@QAA@W4e_script_fragment_state@@@Z");
//};

//public: enum e_script_fragment_state c_enum_no_init<enum e_script_fragment_state, short, 0, 3, struct s_default_enum_string_resolver>::operator enum e_script_fragment_state(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_script_fragment_state@@F$0A@$02Us_default_enum_string_resolver@@@@QBA?AW4e_script_fragment_state@@XZ");
//};

//public: enum e_task_movement c_enum_no_init<enum e_task_movement, short, 0, 3, struct s_default_enum_string_resolver>::operator enum e_task_movement(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_task_movement@@F$0A@$02Us_default_enum_string_resolver@@@@QBA?AW4e_task_movement@@XZ");
//};

//public: enum e_objective_filter c_enum_no_init<enum e_objective_filter, short, 0, 49, struct s_default_enum_string_resolver>::operator enum e_objective_filter(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_objective_filter@@F$0A@$0DB@Us_default_enum_string_resolver@@@@QBA?AW4e_objective_filter@@XZ");
//};

//public: bool c_enum_no_init<enum e_objective_filter, short, 0, 49, struct s_default_enum_string_resolver>::operator==(enum e_objective_filter) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_objective_filter@@F$0A@$0DB@Us_default_enum_string_resolver@@@@QBA_NW4e_objective_filter@@@Z");
//};

//public: bool c_enum_no_init<enum e_task_attitude, short, 0, 5, struct s_default_enum_string_resolver>::operator==(enum e_task_attitude) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_task_attitude@@F$0A@$04Us_default_enum_string_resolver@@@@QBA_NW4e_task_attitude@@@Z");
//};

//public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_tasks_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_tasks_data_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_tasks_data_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_tasks_data_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: bool c_flags_no_init<enum e_objective_filter_flag, short, 1, struct s_default_enum_string_resolver>::test(enum e_objective_filter_flag) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_objective_filter_flag@@F$00Us_default_enum_string_resolver@@@@QBA_NW4e_objective_filter_flag@@@Z");
//};

//public: void c_flags_no_init<enum e_objective_runtime_flags, short, 1, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_objective_runtime_flags@@F$00Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: void c_flags_no_init<enum e_objective_runtime_flags, short, 1, struct s_default_enum_string_resolver>::set(enum e_objective_runtime_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_objective_runtime_flags@@F$00Us_default_enum_string_resolver@@@@QAAXW4e_objective_runtime_flags@@_N@Z");
//};

//public: void c_flags_no_init<enum e_task_record_flags, unsigned short, 11, struct s_default_enum_string_resolver>::set(enum e_task_record_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_task_record_flags@@G$0L@Us_default_enum_string_resolver@@@@QAAXW4e_task_record_flags@@_N@Z");
//};

//public: static bool c_flags_no_init<enum e_objective_filter_flag, short, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_objective_filter_flag)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_objective_filter_flag@@F$00Us_default_enum_string_resolver@@@@SA_NW4e_objective_filter_flag@@@Z");
//};

//private: static short c_flags_no_init<enum e_objective_filter_flag, short, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_objective_filter_flag)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_objective_filter_flag@@F$00Us_default_enum_string_resolver@@@@CAFW4e_objective_filter_flag@@@Z");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_objectives_data_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_objectives_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_objectives_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_objectives_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_objectives_data_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_objectives_data_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_objectives_data_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_objectives_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_objectives_data_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_objectives_data_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_objectives_data_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_objectives_data_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_objectives_data_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_tasks_data_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_tasks_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_tasks_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_tasks_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_tasks_data_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_tasks_data_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_tasks_data_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_tasks_data_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_tasks_data_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: c_tag_struct_vtable<class c_task_direction_v2_vtable>::c_tag_struct_vtable<class c_task_direction_v2_vtable>(void)
//{
//    mangled_ppc("??0?$c_tag_struct_vtable@Vc_task_direction_v2_vtable@@@@QAA@XZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_task_direction_v2_vtable>::has_byte_swap_proc(void) const
//{
//    mangled_ppc("?has_byte_swap_proc@?$c_tag_struct_vtable@Vc_task_direction_v2_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_struct_vtable<class c_task_direction_v2_vtable>::byte_swap_block_proc(void *) const
//{
//    mangled_ppc("?byte_swap_block_proc@?$c_tag_struct_vtable@Vc_task_direction_v2_vtable@@@@UBAXPAX@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_task_direction_v2_vtable>::has_postprocess_proc(void) const
//{
//    mangled_ppc("?has_postprocess_proc@?$c_tag_struct_vtable@Vc_task_direction_v2_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_task_direction_v2_vtable>::postprocess_thunk(long, void *, bool) const
//{
//    mangled_ppc("?postprocess_thunk@?$c_tag_struct_vtable@Vc_task_direction_v2_vtable@@@@UBA_NJPAX_N@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_task_direction_v2_vtable>::has_format_proc(void) const
//{
//    mangled_ppc("?has_format_proc@?$c_tag_struct_vtable@Vc_task_direction_v2_vtable@@@@UBA_NXZ");
//};

//public: virtual char * c_tag_struct_vtable<class c_task_direction_v2_vtable>::format_thunk(long, __int64, struct s_tag_block *, long, char *, long) const
//{
//    mangled_ppc("?format_thunk@?$c_tag_struct_vtable@Vc_task_direction_v2_vtable@@@@UBAPADJ_JPAUs_tag_block@@JPADJ@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_task_direction_v2_vtable>::has_on_delete_proc(void) const
//{
//    mangled_ppc("?has_on_delete_proc@?$c_tag_struct_vtable@Vc_task_direction_v2_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_struct_vtable<class c_task_direction_v2_vtable>::on_delete_thunk(void *) const
//{
//    mangled_ppc("?on_delete_thunk@?$c_tag_struct_vtable@Vc_task_direction_v2_vtable@@@@UBAXPAX@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_task_direction_v2_vtable>::has_on_new_proc(void) const
//{
//    mangled_ppc("?has_on_new_proc@?$c_tag_struct_vtable@Vc_task_direction_v2_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_task_direction_v2_vtable>::on_new_thunk(void *) const
//{
//    mangled_ppc("?on_new_thunk@?$c_tag_struct_vtable@Vc_task_direction_v2_vtable@@@@UBA_NPAX@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_task_direction_v2_vtable>::has_on_copy_proc(void) const
//{
//    mangled_ppc("?has_on_copy_proc@?$c_tag_struct_vtable@Vc_task_direction_v2_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_task_direction_v2_vtable>::on_copy_thunk(void const *, void *) const
//{
//    mangled_ppc("?on_copy_thunk@?$c_tag_struct_vtable@Vc_task_direction_v2_vtable@@@@UBA_NPBXPAX@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_task_direction_v2_vtable>::has_write_to_cache_file_proc(void) const
//{
//    mangled_ppc("?has_write_to_cache_file_proc@?$c_tag_struct_vtable@Vc_task_direction_v2_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_struct_vtable<class c_task_direction_v2_vtable>::write_to_cache_file_thunk(long, struct s_tag_block *, struct s_cache_file_builder_stream_context const *, void **, void **) const
//{
//    mangled_ppc("?write_to_cache_file_thunk@?$c_tag_struct_vtable@Vc_task_direction_v2_vtable@@@@UBAXJPAUs_tag_block@@PBUs_cache_file_builder_stream_context@@PAPAX2@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_task_direction_v2_vtable>::has_block_does_not_exist_in_cache_file_proc(void) const
//{
//    mangled_ppc("?has_block_does_not_exist_in_cache_file_proc@?$c_tag_struct_vtable@Vc_task_direction_v2_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_task_direction_v2_vtable>::block_does_not_exist_in_cache_file_thunk(void) const
//{
//    mangled_ppc("?block_does_not_exist_in_cache_file_thunk@?$c_tag_struct_vtable@Vc_task_direction_v2_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_task_direction_v2_vtable>::has_fixup_old_struct_definition(void) const
//{
//    mangled_ppc("?has_fixup_old_struct_definition@?$c_tag_struct_vtable@Vc_task_direction_v2_vtable@@@@UBA_NXZ");
//};

//public: virtual struct s_tag_struct_definition * c_tag_struct_vtable<class c_task_direction_v2_vtable>::get_fixup_source_definition_thunk(void) const
//{
//    mangled_ppc("?get_fixup_source_definition_thunk@?$c_tag_struct_vtable@Vc_task_direction_v2_vtable@@@@UBAPAUs_tag_struct_definition@@XZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_task_direction_v2_vtable>::has_fixup_old_struct_proc(void) const
//{
//    mangled_ppc("?has_fixup_old_struct_proc@?$c_tag_struct_vtable@Vc_task_direction_v2_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_task_direction_v2_vtable>::fixup_old_struct_thunk(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool) const
//{
//    mangled_ppc("?fixup_old_struct_thunk@?$c_tag_struct_vtable@Vc_task_direction_v2_vtable@@@@UBA_NAAV?$c_basic_buffer@X@@PBUs_tag_struct_definition@@01PAVc_tag_allocator@@_N@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_task_direction_v2_vtable>::has_fixup_old_struct_from_disk_proc(void) const
//{
//    mangled_ppc("?has_fixup_old_struct_from_disk_proc@?$c_tag_struct_vtable@Vc_task_direction_v2_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_task_direction_v2_vtable>::fixup_old_struct_from_disk_thunk(struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool) const
//{
//    mangled_ppc("?fixup_old_struct_from_disk_thunk@?$c_tag_struct_vtable@Vc_task_direction_v2_vtable@@@@UBA_NPBUs_tag_struct_definition@@AAV?$c_basic_buffer@X@@010PAVc_tag_allocator@@_N@Z");
//};

//public: static void s_tag_vtable_has_byte_swap_proc<class c_task_direction_v2_vtable>::call(void *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_byte_swap_proc@Vc_task_direction_v2_vtable@@@@SAXPAX@Z");
//};

//public: static bool s_tag_vtable_has_postprocess_proc<class c_task_direction_v2_vtable>::call(long, void *, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_postprocess_proc@Vc_task_direction_v2_vtable@@@@SA_NJPAX_N@Z");
//};

//public: static char * s_tag_vtable_has_format_proc<class c_task_direction_v2_vtable>::call(long, __int64, struct s_tag_block *, long, char *, long)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_format_proc@Vc_task_direction_v2_vtable@@@@SAPADJ_JPAUs_tag_block@@JPADJ@Z");
//};

//public: static void s_tag_vtable_has_on_delete_proc<class c_task_direction_v2_vtable>::call(void *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_on_delete_proc@Vc_task_direction_v2_vtable@@@@SAXPAX@Z");
//};

//public: static bool s_tag_vtable_has_on_new_proc<class c_task_direction_v2_vtable>::call(void *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_on_new_proc@Vc_task_direction_v2_vtable@@@@SA_NPAX@Z");
//};

//public: static bool s_tag_vtable_has_on_copy_proc<class c_task_direction_v2_vtable>::call(void const *, void *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_on_copy_proc@Vc_task_direction_v2_vtable@@@@SA_NPBXPAX@Z");
//};

//public: static void s_tag_vtable_has_write_to_cache_file_proc<class c_task_direction_v2_vtable>::call(long, struct s_tag_block *, struct s_cache_file_builder_stream_context const *, void **, void **)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_write_to_cache_file_proc@Vc_task_direction_v2_vtable@@@@SAXJPAUs_tag_block@@PBUs_cache_file_builder_stream_context@@PAPAX2@Z");
//};

//public: static bool s_tag_vtable_has_block_does_not_exist_in_cache_file<class c_task_direction_v2_vtable>::call(void)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_block_does_not_exist_in_cache_file@Vc_task_direction_v2_vtable@@@@SA_NXZ");
//};

//public: static struct s_tag_struct_definition * s_tag_vtable_has_get_fixup_source_definition_proc<class c_task_direction_v2_vtable>::call(void)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_get_fixup_source_definition_proc@Vc_task_direction_v2_vtable@@@@SAPAUs_tag_struct_definition@@XZ");
//};

//public: static struct s_tag_struct_definition * c_task_direction_v2_vtable::get_fixup_source_definition_proc(void)
//{
//    mangled_ppc("?get_fixup_source_definition_proc@c_task_direction_v2_vtable@@SAPAUs_tag_struct_definition@@XZ");
//};

//public: static bool s_tag_vtable_has_fixup_old_struct_proc<class c_task_direction_v2_vtable>::call(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_fixup_old_struct_proc@Vc_task_direction_v2_vtable@@@@SA_NAAV?$c_basic_buffer@X@@PBUs_tag_struct_definition@@01PAVc_tag_allocator@@_N@Z");
//};

//public: static bool c_task_direction_v2_vtable::fixup_old_struct_proc(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool)
//{
//    mangled_ppc("?fixup_old_struct_proc@c_task_direction_v2_vtable@@SA_NAAV?$c_basic_buffer@X@@PBUs_tag_struct_definition@@01PAVc_tag_allocator@@_N@Z");
//};

//public: static bool s_tag_vtable_has_fixup_old_struct_from_disk_proc<class c_task_direction_v2_vtable>::call(struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_fixup_old_struct_from_disk_proc@Vc_task_direction_v2_vtable@@@@SA_NPBUs_tag_struct_definition@@AAV?$c_basic_buffer@X@@010PAVc_tag_allocator@@_N@Z");
//};

//public: struct s_task_direction_v1* c_basic_buffer<void>::c_basic_buffer_checked_caster::operatorcast<struct s_task_direction_v1>(void)
//{
//    mangled_ppc("??$?BUs_task_direction_v1@@@c_basic_buffer_checked_caster@?$c_basic_buffer@X@@QAAPAUs_task_direction_v1@@XZ");
//};

//public: struct s_task_direction_v2* c_basic_buffer<void>::c_basic_buffer_checked_caster::operatorcast<struct s_task_direction_v2>(void)
//{
//    mangled_ppc("??$?BUs_task_direction_v2@@@c_basic_buffer_checked_caster@?$c_basic_buffer@X@@QAAPAUs_task_direction_v2@@XZ");
//};

//public: struct s_task_direction_v1* c_basic_buffer<void>::get_as_type<struct s_task_direction_v1>(void)
//{
//    mangled_ppc("??$get_as_type@Us_task_direction_v1@@@?$c_basic_buffer@X@@QAAPAUs_task_direction_v1@@XZ");
//};

//public: struct s_task_direction_v2* c_basic_buffer<void>::get_as_type<struct s_task_direction_v2>(void)
//{
//    mangled_ppc("??$get_as_type@Us_task_direction_v2@@@?$c_basic_buffer@X@@QAAPAUs_task_direction_v2@@XZ");
//};

//public: struct s_task_direction_v1* c_basic_buffer<void>::get_as_type_from_offset<struct s_task_direction_v1>(unsigned long)
//{
//    mangled_ppc("??$get_as_type_from_offset@Us_task_direction_v1@@@?$c_basic_buffer@X@@QAAPAUs_task_direction_v1@@K@Z");
//};

//public: struct s_task_direction_v2* c_basic_buffer<void>::get_as_type_from_offset<struct s_task_direction_v2>(unsigned long)
//{
//    mangled_ppc("??$get_as_type_from_offset@Us_task_direction_v2@@@?$c_basic_buffer@X@@QAAPAUs_task_direction_v2@@K@Z");
//};

//public: c_tag_struct_vtable<class c_zone_set_vtable>::c_tag_struct_vtable<class c_zone_set_vtable>(void)
//{
//    mangled_ppc("??0?$c_tag_struct_vtable@Vc_zone_set_vtable@@@@QAA@XZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_zone_set_vtable>::has_byte_swap_proc(void) const
//{
//    mangled_ppc("?has_byte_swap_proc@?$c_tag_struct_vtable@Vc_zone_set_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_struct_vtable<class c_zone_set_vtable>::byte_swap_block_proc(void *) const
//{
//    mangled_ppc("?byte_swap_block_proc@?$c_tag_struct_vtable@Vc_zone_set_vtable@@@@UBAXPAX@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_zone_set_vtable>::has_postprocess_proc(void) const
//{
//    mangled_ppc("?has_postprocess_proc@?$c_tag_struct_vtable@Vc_zone_set_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_zone_set_vtable>::postprocess_thunk(long, void *, bool) const
//{
//    mangled_ppc("?postprocess_thunk@?$c_tag_struct_vtable@Vc_zone_set_vtable@@@@UBA_NJPAX_N@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_zone_set_vtable>::has_format_proc(void) const
//{
//    mangled_ppc("?has_format_proc@?$c_tag_struct_vtable@Vc_zone_set_vtable@@@@UBA_NXZ");
//};

//public: virtual char * c_tag_struct_vtable<class c_zone_set_vtable>::format_thunk(long, __int64, struct s_tag_block *, long, char *, long) const
//{
//    mangled_ppc("?format_thunk@?$c_tag_struct_vtable@Vc_zone_set_vtable@@@@UBAPADJ_JPAUs_tag_block@@JPADJ@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_zone_set_vtable>::has_on_delete_proc(void) const
//{
//    mangled_ppc("?has_on_delete_proc@?$c_tag_struct_vtable@Vc_zone_set_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_struct_vtable<class c_zone_set_vtable>::on_delete_thunk(void *) const
//{
//    mangled_ppc("?on_delete_thunk@?$c_tag_struct_vtable@Vc_zone_set_vtable@@@@UBAXPAX@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_zone_set_vtable>::has_on_new_proc(void) const
//{
//    mangled_ppc("?has_on_new_proc@?$c_tag_struct_vtable@Vc_zone_set_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_zone_set_vtable>::on_new_thunk(void *) const
//{
//    mangled_ppc("?on_new_thunk@?$c_tag_struct_vtable@Vc_zone_set_vtable@@@@UBA_NPAX@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_zone_set_vtable>::has_on_copy_proc(void) const
//{
//    mangled_ppc("?has_on_copy_proc@?$c_tag_struct_vtable@Vc_zone_set_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_zone_set_vtable>::on_copy_thunk(void const *, void *) const
//{
//    mangled_ppc("?on_copy_thunk@?$c_tag_struct_vtable@Vc_zone_set_vtable@@@@UBA_NPBXPAX@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_zone_set_vtable>::has_write_to_cache_file_proc(void) const
//{
//    mangled_ppc("?has_write_to_cache_file_proc@?$c_tag_struct_vtable@Vc_zone_set_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_struct_vtable<class c_zone_set_vtable>::write_to_cache_file_thunk(long, struct s_tag_block *, struct s_cache_file_builder_stream_context const *, void **, void **) const
//{
//    mangled_ppc("?write_to_cache_file_thunk@?$c_tag_struct_vtable@Vc_zone_set_vtable@@@@UBAXJPAUs_tag_block@@PBUs_cache_file_builder_stream_context@@PAPAX2@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_zone_set_vtable>::has_block_does_not_exist_in_cache_file_proc(void) const
//{
//    mangled_ppc("?has_block_does_not_exist_in_cache_file_proc@?$c_tag_struct_vtable@Vc_zone_set_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_zone_set_vtable>::block_does_not_exist_in_cache_file_thunk(void) const
//{
//    mangled_ppc("?block_does_not_exist_in_cache_file_thunk@?$c_tag_struct_vtable@Vc_zone_set_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_zone_set_vtable>::has_fixup_old_struct_definition(void) const
//{
//    mangled_ppc("?has_fixup_old_struct_definition@?$c_tag_struct_vtable@Vc_zone_set_vtable@@@@UBA_NXZ");
//};

//public: virtual struct s_tag_struct_definition * c_tag_struct_vtable<class c_zone_set_vtable>::get_fixup_source_definition_thunk(void) const
//{
//    mangled_ppc("?get_fixup_source_definition_thunk@?$c_tag_struct_vtable@Vc_zone_set_vtable@@@@UBAPAUs_tag_struct_definition@@XZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_zone_set_vtable>::has_fixup_old_struct_proc(void) const
//{
//    mangled_ppc("?has_fixup_old_struct_proc@?$c_tag_struct_vtable@Vc_zone_set_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_zone_set_vtable>::fixup_old_struct_thunk(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool) const
//{
//    mangled_ppc("?fixup_old_struct_thunk@?$c_tag_struct_vtable@Vc_zone_set_vtable@@@@UBA_NAAV?$c_basic_buffer@X@@PBUs_tag_struct_definition@@01PAVc_tag_allocator@@_N@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_zone_set_vtable>::has_fixup_old_struct_from_disk_proc(void) const
//{
//    mangled_ppc("?has_fixup_old_struct_from_disk_proc@?$c_tag_struct_vtable@Vc_zone_set_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_zone_set_vtable>::fixup_old_struct_from_disk_thunk(struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool) const
//{
//    mangled_ppc("?fixup_old_struct_from_disk_thunk@?$c_tag_struct_vtable@Vc_zone_set_vtable@@@@UBA_NPBUs_tag_struct_definition@@AAV?$c_basic_buffer@X@@010PAVc_tag_allocator@@_N@Z");
//};

//public: static void s_tag_vtable_has_byte_swap_proc<class c_zone_set_vtable>::call(void *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_byte_swap_proc@Vc_zone_set_vtable@@@@SAXPAX@Z");
//};

//public: static bool s_tag_vtable_has_postprocess_proc<class c_zone_set_vtable>::call(long, void *, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_postprocess_proc@Vc_zone_set_vtable@@@@SA_NJPAX_N@Z");
//};

//public: static char * s_tag_vtable_has_format_proc<class c_zone_set_vtable>::call(long, __int64, struct s_tag_block *, long, char *, long)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_format_proc@Vc_zone_set_vtable@@@@SAPADJ_JPAUs_tag_block@@JPADJ@Z");
//};

//public: static char * c_zone_set_vtable::format_proc(long, __int64, struct s_tag_block *, long, char *, long)
//{
//    mangled_ppc("?format_proc@c_zone_set_vtable@@SAPADJ_JPAUs_tag_block@@JPADJ@Z");
//};

//public: static void s_tag_vtable_has_on_delete_proc<class c_zone_set_vtable>::call(void *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_on_delete_proc@Vc_zone_set_vtable@@@@SAXPAX@Z");
//};

//public: static bool s_tag_vtable_has_on_new_proc<class c_zone_set_vtable>::call(void *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_on_new_proc@Vc_zone_set_vtable@@@@SA_NPAX@Z");
//};

//public: static bool s_tag_vtable_has_on_copy_proc<class c_zone_set_vtable>::call(void const *, void *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_on_copy_proc@Vc_zone_set_vtable@@@@SA_NPBXPAX@Z");
//};

//public: static void s_tag_vtable_has_write_to_cache_file_proc<class c_zone_set_vtable>::call(long, struct s_tag_block *, struct s_cache_file_builder_stream_context const *, void **, void **)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_write_to_cache_file_proc@Vc_zone_set_vtable@@@@SAXJPAUs_tag_block@@PBUs_cache_file_builder_stream_context@@PAPAX2@Z");
//};

//public: static bool s_tag_vtable_has_block_does_not_exist_in_cache_file<class c_zone_set_vtable>::call(void)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_block_does_not_exist_in_cache_file@Vc_zone_set_vtable@@@@SA_NXZ");
//};

//public: static struct s_tag_struct_definition * s_tag_vtable_has_get_fixup_source_definition_proc<class c_zone_set_vtable>::call(void)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_get_fixup_source_definition_proc@Vc_zone_set_vtable@@@@SAPAUs_tag_struct_definition@@XZ");
//};

//public: static bool s_tag_vtable_has_fixup_old_struct_proc<class c_zone_set_vtable>::call(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_fixup_old_struct_proc@Vc_zone_set_vtable@@@@SA_NAAV?$c_basic_buffer@X@@PBUs_tag_struct_definition@@01PAVc_tag_allocator@@_N@Z");
//};

//public: static bool s_tag_vtable_has_fixup_old_struct_from_disk_proc<class c_zone_set_vtable>::call(struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_fixup_old_struct_from_disk_proc@Vc_zone_set_vtable@@@@SA_NPBUs_tag_struct_definition@@AAV?$c_basic_buffer@X@@010PAVc_tag_allocator@@_N@Z");
//};

//public: c_tag_struct_vtable<class c_tasks_vtable>::c_tag_struct_vtable<class c_tasks_vtable>(void)
//{
//    mangled_ppc("??0?$c_tag_struct_vtable@Vc_tasks_vtable@@@@QAA@XZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_tasks_vtable>::has_byte_swap_proc(void) const
//{
//    mangled_ppc("?has_byte_swap_proc@?$c_tag_struct_vtable@Vc_tasks_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_struct_vtable<class c_tasks_vtable>::byte_swap_block_proc(void *) const
//{
//    mangled_ppc("?byte_swap_block_proc@?$c_tag_struct_vtable@Vc_tasks_vtable@@@@UBAXPAX@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_tasks_vtable>::has_postprocess_proc(void) const
//{
//    mangled_ppc("?has_postprocess_proc@?$c_tag_struct_vtable@Vc_tasks_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_tasks_vtable>::postprocess_thunk(long, void *, bool) const
//{
//    mangled_ppc("?postprocess_thunk@?$c_tag_struct_vtable@Vc_tasks_vtable@@@@UBA_NJPAX_N@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_tasks_vtable>::has_format_proc(void) const
//{
//    mangled_ppc("?has_format_proc@?$c_tag_struct_vtable@Vc_tasks_vtable@@@@UBA_NXZ");
//};

//public: virtual char * c_tag_struct_vtable<class c_tasks_vtable>::format_thunk(long, __int64, struct s_tag_block *, long, char *, long) const
//{
//    mangled_ppc("?format_thunk@?$c_tag_struct_vtable@Vc_tasks_vtable@@@@UBAPADJ_JPAUs_tag_block@@JPADJ@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_tasks_vtable>::has_on_delete_proc(void) const
//{
//    mangled_ppc("?has_on_delete_proc@?$c_tag_struct_vtable@Vc_tasks_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_struct_vtable<class c_tasks_vtable>::on_delete_thunk(void *) const
//{
//    mangled_ppc("?on_delete_thunk@?$c_tag_struct_vtable@Vc_tasks_vtable@@@@UBAXPAX@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_tasks_vtable>::has_on_new_proc(void) const
//{
//    mangled_ppc("?has_on_new_proc@?$c_tag_struct_vtable@Vc_tasks_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_tasks_vtable>::on_new_thunk(void *) const
//{
//    mangled_ppc("?on_new_thunk@?$c_tag_struct_vtable@Vc_tasks_vtable@@@@UBA_NPAX@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_tasks_vtable>::has_on_copy_proc(void) const
//{
//    mangled_ppc("?has_on_copy_proc@?$c_tag_struct_vtable@Vc_tasks_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_tasks_vtable>::on_copy_thunk(void const *, void *) const
//{
//    mangled_ppc("?on_copy_thunk@?$c_tag_struct_vtable@Vc_tasks_vtable@@@@UBA_NPBXPAX@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_tasks_vtable>::has_write_to_cache_file_proc(void) const
//{
//    mangled_ppc("?has_write_to_cache_file_proc@?$c_tag_struct_vtable@Vc_tasks_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_struct_vtable<class c_tasks_vtable>::write_to_cache_file_thunk(long, struct s_tag_block *, struct s_cache_file_builder_stream_context const *, void **, void **) const
//{
//    mangled_ppc("?write_to_cache_file_thunk@?$c_tag_struct_vtable@Vc_tasks_vtable@@@@UBAXJPAUs_tag_block@@PBUs_cache_file_builder_stream_context@@PAPAX2@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_tasks_vtable>::has_block_does_not_exist_in_cache_file_proc(void) const
//{
//    mangled_ppc("?has_block_does_not_exist_in_cache_file_proc@?$c_tag_struct_vtable@Vc_tasks_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_tasks_vtable>::block_does_not_exist_in_cache_file_thunk(void) const
//{
//    mangled_ppc("?block_does_not_exist_in_cache_file_thunk@?$c_tag_struct_vtable@Vc_tasks_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_tasks_vtable>::has_fixup_old_struct_definition(void) const
//{
//    mangled_ppc("?has_fixup_old_struct_definition@?$c_tag_struct_vtable@Vc_tasks_vtable@@@@UBA_NXZ");
//};

//public: virtual struct s_tag_struct_definition * c_tag_struct_vtable<class c_tasks_vtable>::get_fixup_source_definition_thunk(void) const
//{
//    mangled_ppc("?get_fixup_source_definition_thunk@?$c_tag_struct_vtable@Vc_tasks_vtable@@@@UBAPAUs_tag_struct_definition@@XZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_tasks_vtable>::has_fixup_old_struct_proc(void) const
//{
//    mangled_ppc("?has_fixup_old_struct_proc@?$c_tag_struct_vtable@Vc_tasks_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_tasks_vtable>::fixup_old_struct_thunk(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool) const
//{
//    mangled_ppc("?fixup_old_struct_thunk@?$c_tag_struct_vtable@Vc_tasks_vtable@@@@UBA_NAAV?$c_basic_buffer@X@@PBUs_tag_struct_definition@@01PAVc_tag_allocator@@_N@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_tasks_vtable>::has_fixup_old_struct_from_disk_proc(void) const
//{
//    mangled_ppc("?has_fixup_old_struct_from_disk_proc@?$c_tag_struct_vtable@Vc_tasks_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_tasks_vtable>::fixup_old_struct_from_disk_thunk(struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool) const
//{
//    mangled_ppc("?fixup_old_struct_from_disk_thunk@?$c_tag_struct_vtable@Vc_tasks_vtable@@@@UBA_NPBUs_tag_struct_definition@@AAV?$c_basic_buffer@X@@010PAVc_tag_allocator@@_N@Z");
//};

//public: static void s_tag_vtable_has_byte_swap_proc<class c_tasks_vtable>::call(void *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_byte_swap_proc@Vc_tasks_vtable@@@@SAXPAX@Z");
//};

//public: static bool s_tag_vtable_has_postprocess_proc<class c_tasks_vtable>::call(long, void *, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_postprocess_proc@Vc_tasks_vtable@@@@SA_NJPAX_N@Z");
//};

//public: static bool c_tasks_vtable::postprocess_proc(long, void *, bool)
//{
//    mangled_ppc("?postprocess_proc@c_tasks_vtable@@SA_NJPAX_N@Z");
//};

//public: static char * s_tag_vtable_has_format_proc<class c_tasks_vtable>::call(long, __int64, struct s_tag_block *, long, char *, long)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_format_proc@Vc_tasks_vtable@@@@SAPADJ_JPAUs_tag_block@@JPADJ@Z");
//};

//public: static void s_tag_vtable_has_on_delete_proc<class c_tasks_vtable>::call(void *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_on_delete_proc@Vc_tasks_vtable@@@@SAXPAX@Z");
//};

//public: static bool s_tag_vtable_has_on_new_proc<class c_tasks_vtable>::call(void *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_on_new_proc@Vc_tasks_vtable@@@@SA_NPAX@Z");
//};

//public: static bool s_tag_vtable_has_on_copy_proc<class c_tasks_vtable>::call(void const *, void *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_on_copy_proc@Vc_tasks_vtable@@@@SA_NPBXPAX@Z");
//};

//public: static void s_tag_vtable_has_write_to_cache_file_proc<class c_tasks_vtable>::call(long, struct s_tag_block *, struct s_cache_file_builder_stream_context const *, void **, void **)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_write_to_cache_file_proc@Vc_tasks_vtable@@@@SAXJPAUs_tag_block@@PBUs_cache_file_builder_stream_context@@PAPAX2@Z");
//};

//public: static bool s_tag_vtable_has_block_does_not_exist_in_cache_file<class c_tasks_vtable>::call(void)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_block_does_not_exist_in_cache_file@Vc_tasks_vtable@@@@SA_NXZ");
//};

//public: static struct s_tag_struct_definition * s_tag_vtable_has_get_fixup_source_definition_proc<class c_tasks_vtable>::call(void)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_get_fixup_source_definition_proc@Vc_tasks_vtable@@@@SAPAUs_tag_struct_definition@@XZ");
//};

//public: static bool s_tag_vtable_has_fixup_old_struct_proc<class c_tasks_vtable>::call(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_fixup_old_struct_proc@Vc_tasks_vtable@@@@SA_NAAV?$c_basic_buffer@X@@PBUs_tag_struct_definition@@01PAVc_tag_allocator@@_N@Z");
//};

//public: static bool s_tag_vtable_has_fixup_old_struct_from_disk_proc<class c_tasks_vtable>::call(struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_fixup_old_struct_from_disk_proc@Vc_tasks_vtable@@@@SA_NPBUs_tag_struct_definition@@AAV?$c_basic_buffer@X@@010PAVc_tag_allocator@@_N@Z");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_objectives_data_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_objectives_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_objectives_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_tasks_data_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_tasks_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_tasks_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//void g_objectives_data_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_objectives_data_allocator@@YAXXZ");
//};

//void g_tasks_data_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_tasks_data_allocator@@YAXXZ");
//};

