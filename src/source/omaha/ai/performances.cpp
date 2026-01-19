/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// except_record_8375B210; // "except_record_8375B210"
// except_record_8375EB08; // "except_record_8375EB08"
// except_record_83766E48; // "except_record_83766E48"
// except_record_83767DA8; // "except_record_83767DA8"
// char const **performance_state_names; // "?performance_state_names@@3PAPBDA"
// char const **arranger_state_names; // "?arranger_state_names@@3PAPBDA"
// bool debug_performances; // "?debug_performances@@3_NA"
// long debug_performance_name; // "?debug_performance_name@@3JA"
// class t_restricted_allocation_manager<1, 0, 0, void (__cdecl __tls_set_g_performance_data_allocator::*)(void *)> g_performance_data_allocator; // "?g_performance_data_allocator@@3V?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_performance_data_allocator@@YAXPAX@Z@@A"
// class t_restricted_allocation_manager<1, 0, 0, void (__cdecl __tls_set_g_performance_runtime_definition_data_allocator::*)(void *)> g_performance_runtime_definition_data_allocator; // "?g_performance_runtime_definition_data_allocator@@3V?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_performance_runtime_definition_data_allocator@@YAXPAX@Z@@A"
// struct s_data_array *performance_data; // "?performance_data@@3PAUs_data_array@@A"
// struct s_data_array *performance_runtime_definition_data; // "?performance_runtime_definition_data@@3PAUs_data_array@@A"

// void __tls_set_g_performance_data_allocator(void *);
// void __tls_set_g_performance_runtime_definition_data_allocator(void *);
// public: c_performance_definition::c_performance_definition(void);
// public: c_performance_definition::c_performance_definition(long, enum e_performance_definition_type);
// public: void c_performance_definition::set(long, enum e_performance_definition_type);
// public: void c_performance_definition::clear(void);
// public: void c_performance_definition::delete_runtime_definition(void);
// public: bool c_performance_definition::valid(void) const;
// public: bool c_performance_definition::test_flag(enum e_performance_flags) const;
// public: long c_performance_definition::get_name(void) const;
// public: long c_performance_definition::get_script_name(void) const;
// public: float c_performance_definition::get_attraction_radius(void) const;
// public: float c_performance_definition::get_attraction_probability_per_second(void) const;
// public: float c_performance_definition::get_performance_radius(void) const;
// public: void c_performance_definition::get_performance_origin(union real_point3d *) const;
// public: void c_performance_definition::get_performance_world_matrix(struct real_matrix4x3*) const;
// public: short c_performance_definition::get_role_count(void) const;
// public: short c_performance_definition::get_point_count(void) const;
// public: bool c_performance_definition::get_point_by_name(long, union real_point3d *, union euler_angles2d *, class c_sector_ref *) const;
// struct cs_point * find_point_in_point_set_by_name(long, long);
// public: bool c_performance_definition::get_point_by_index(short, union real_point3d *, union euler_angles2d *, class c_sector_ref *) const;
// public: bool c_performance_definition::get_role_name(short, long *) const;
// public: bool c_performance_definition::get_role_character_definition_index(short, long *) const;
// public: bool c_performance_definition::test_compatible_character_type(long, long) const;
// public: bool c_performance_definition::role_in_sync_action_actor_list(short, struct s_tag_block const *) const;
// public: bool c_performance_definition::get_role_properties(short, long *, long *, long *, long *, long *, bool *, union real_point3d *, union euler_angles2d *, class c_sector_ref *) const;
// public: bool c_performance_definition::test_role_flag(short, enum e_scenario_performance_actor_flags) const;
// public: short c_performance_definition::get_line_count(void) const;
// public: struct s_scenario_performance_line const * c_performance_definition::get_line(short) const;
// public: short c_performance_definition::get_task_ref_count(void) const;
// public: struct s_stimulus_distribution_task const * c_performance_definition::get_task_ref(short) const;
// public: bool c_performance_definition::initialize_runtime_definition_points(struct s_runtime_performance_definition_point *, short);
// void compute_world_space_point_for_template_point(struct s_performance_template_point const *, struct real_matrix4x3const *, union real_point3d *, union euler_angles2d *, class c_sector_ref *);
// public: bool c_performance_definition::initialize_tag_definition_points(bool);
// public: void c_performance_definition::cache_template_index(void);
// public: bool c_performance_definition::toggle_task(long, long);
// protected: struct s_runtime_performance_definition_datum const * c_performance_definition::get_runtime_performance_definition_const(void) const;
// protected: struct s_scenario_performance const * c_performance_definition::get_tag_performance_definition_const(void) const;
// protected: struct s_runtime_performance_definition_datum * c_performance_definition::get_runtime_performance_definition(void);
// protected: struct s_scenario_performance * c_performance_definition::get_tag_performance_definition(void);
// void performances_initialize(void);
// void performances_initialize_for_new_map(void);
// void performances_place_for_new_map(void);
// void performances_dispose_from_old_map(void);
// void performances_handle_deleted_actor(long);
// void performances_handle_actor_task_change(long);
// void performances_handle_hs_thread_delete(long);
// void performances_remove_participant(long);
// long performance_get_template_index_from_name(long);
// void performance_handle_addition(class c_performance_definition const &);
// void performance_handle_deletion(void);
// bool performance_handle_modification(class c_performance_definition &);
// public: bool c_performance_definition::operator==(class c_performance_definition const &) const;
// void performance_definition_toggle_task(class c_performance_definition &, long, long);
// long performance_definition_index_from_ray(union real_point3d const *, union vector3d const *);
// bool performance_participant_needed(long, long);
// bool performance_actor_blocked_on_line(long, struct s_performance_participant *);
// void performance_update_participant_to_line_index(long, long);
// void performance_set_up_line_completion_flags(struct s_scenario_performance_line const *, class c_flags<enum e_performance_participant_line_completion_flags, unsigned short, 7, struct s_default_enum_string_resolver> *);
// void performances_update(void);
// bool performance_can_cast_actor(long, long, short *);
// public: performance_definition_role_iterator::performance_definition_role_iterator(void);
// bool performance_cast_actor(long, long);
// bool performance_clear_casted_actors(long);
// long test_performance_new(class c_performance_definition const &);
// bool performance_datum_available_to_current_thread(void);
// bool performance_get_is_initialized(class c_performance_definition const &);
// bool performance_get_has_started(long);
// bool performance_get_has_active_sync_actions(long, bool, long);
// bool performance_get_has_active_sounds(long, bool, long);
// bool performance_get_is_blocked(long);
// bool performance_all_participants_queues_empty(long);
// bool performance_get_is_actor_participant(long, long);
// class c_performance_definition const & performance_get_definition(long);
// struct s_scenario_performance_line const * performance_get_line(long, long);
// bool performance_get_has_script_fragments(long);
// bool performance_line_has_sleep_block(struct s_scenario_performance_line const *);
// class c_performance_definition performance_runtime_definition_new(long, struct real_matrix4x3const *);
// class c_performance_definition performance_runtime_definition_new(long, struct real_matrix4x3const *, struct s_runtime_performance_definition_point *, short);
// long performance_new(class c_performance_definition const &);
// void performance_release_all_participants(long);
// void performance_release_participant(long, long);
// void performance_delete(long);
// long performance_find_participant_by_actor(long, long);
// long performance_find_participant_by_role(long, long);
// long performance_find_actor_index_for_line(long, long);
// void performance_remove_participant(long, long, bool);
// bool performance_is_actor_critical(long, long);
// bool performance_update_sync_action_arranger(long, long);
// void preformance_remove_sync_action(long, long);
// void performance_remove_sound(long, long);
// bool performance_has_required_participants(long);
// bool performance_play_script(long);
// bool performance_play_script(long, long);
// void performance_evaluate_line_actions(long, long, class c_flags<enum e_performance_participant_line_completion_flags, unsigned short, 7, struct s_default_enum_string_resolver> *);
// void performance_evaluate_line_animation(long, long, bool);
// void performance_add_command(long, long, long, short);
// void performance_evaluate_line_sync_action(long, long, bool);
// long performance_add_sync_action(long, long, long, long, class c_flags<enum e_performance_sync_action_flags, unsigned short, 1, struct s_default_enum_string_resolver>);
// void performance_participants_apply_sync_action_cs_command(long, long, bool);
// void performance_evaluate_line_scenery_sync_action(long, long, bool);
// void performance_evaluate_line_dialogue(long, long, bool);
// void performance_evaluate_line_sound(long, long, bool);
// long performance_add_sound(long, float, long, class c_flags<enum e_performance_sound_flags, unsigned short, 1, struct s_default_enum_string_resolver>);
// void performance_evaluate_line_point_interaction(long, long, bool);
// enum e_performance_exclusive_point_interaction performance_find_exclusive_point_interaction(long, long, bool *, union real_point3d *, union euler_angles2d *, class c_sector_ref *, long *);
// bool performance_interaction_resolve_points_and_objects(long, long, long, bool *, union real_point3d *, union euler_angles2d *, class c_sector_ref *, long *);
// void performance_apply_nonexclusive_point_interactions(long, long, long, long);
// void performance_scripting_test_by_name(long);
// void performance_scripting_folder_activate(long);
// void performance_scripting_folder_deactivate(long);
// void performance_scripting_activate(long);
// bool performance_scripting_setup_and_begin(long, long, float);
// bool performance_has_all_participants_slots_filled(long);
// public: static bool `bool performance_scripting_setup_and_begin(long, long, float)'::`5'::performance_role_call_entry::compare(struct `bool performance_scripting_setup_and_begin(long, long, float)'::`5'::performance_role_call_entry *, struct `bool performance_scripting_setup_and_begin(long, long, float)'::`5'::performance_role_call_entry *);
// public: static void `bool performance_scripting_setup_and_begin(long, long, float)'::`5'::performance_role_call_entry::swap(struct `bool performance_scripting_setup_and_begin(long, long, float)'::`5'::performance_role_call_entry *, struct `bool performance_scripting_setup_and_begin(long, long, float)'::`5'::performance_role_call_entry *, void *);
// long performance_scripting_new(long, bool);
// void performance_scripting_cast(long, long);
// void performance_scripting_begin(long);
// void performance_kill(long);
// void performance_kill_by_definition(class c_performance_definition const &);
// void performance_scripting_kill_by_name(long);
// void performance_scripting_kill_by_ai(long);
// void performance_scripting_fake_task_transition_event(long, long);
// void performance_scripting_play_line_by_name(long, long);
// long performance_find_by_thread_index(long);
// void performance_scripting_play_line_by_id(long, short);
// long performance_get_actor_by_performance_index(long, short);
// long performance_scripting_get_actor_by_participant_index(long, short);
// long performance_scripting_get_actor_by_role_name_from_performance(long, long);
// long performance_scripting_get_actor_by_role_name(long, long);
// short performance_scripting_get_participant_count(long);
// short performance_scripting_get_role_count(long);
// short performance_scripting_get_line_count(long);
// short performance_scripting_get_last_played_line_index(long);
// bool performance_scripting_get_is_blocked(long);
// bool performance_spawned_actor(long, long);
// void performance_iterator_new(struct performance_iterator *);
// struct s_performance_datum * performance_iterator_next(struct performance_iterator *);
// void performance_participant_actor_iterator_new(struct performance_participant_actor_iterator *, long);
// struct actor_datum * performance_participant_actor_iterator_next(struct performance_participant_actor_iterator *);
// bool performance_exists(long);
// void performance_definition_role_iterator_new(struct performance_definition_role_iterator *, long, bool);
// bool performance_definition_role_iterator_next(struct performance_definition_role_iterator *);
// void performances_debug_render(void);
// void performance_debug_render_timeline(long);
// public: long c_simple_font_screen_display::get_char_width(void) const;
// public: s_performance_debug_actor_record::s_performance_debug_actor_record(void);
// public: s_performance_debug_line_record::s_performance_debug_line_record(void);
// void performance_debug_render_general_state(long, long);
// void performance_debug_format_line_name(long, long, char *, long);
// void performance_debug_format_string(long, char *, long);
// void performance_name_debug_format(long, char *, long);
// void performance_debug_render_general_participant_state(long, long);
// void performance_debug_render_participant_commands(long, long);
// void performance_debug_render_facing_target(union real_point3d const *, float, short, long, union real_point3d const *);
// void performance_debug_render_sync_actions(long);
// bool performance_render_sync_action_arranger(long, union real_point3d *);
// void performance_definition_render(class c_performance_definition const &, union argb_color const *);
// public: enum e_actor_sync_action_state c_enum_no_init<enum e_actor_sync_action_state, unsigned char, 0, 6, struct s_default_enum_string_resolver>::operator enum e_actor_sync_action_state(void) const;
// public: bool c_enum_no_init<enum e_actor_sync_action_state, unsigned char, 0, 6, struct s_default_enum_string_resolver>::operator==(enum e_actor_sync_action_state) const;
// public: enum e_scenario_performance_line_progress_type c_enum_no_init<enum e_scenario_performance_line_progress_type, long, 0, 5, struct s_default_enum_string_resolver>::operator enum e_scenario_performance_line_progress_type(void) const;
// public: bool c_enum_no_init<enum e_scenario_performance_line_progress_type, long, 0, 5, struct s_default_enum_string_resolver>::operator==(enum e_scenario_performance_line_progress_type) const;
// public: c_enum<enum e_performance_definition_type, short, 1, 3, struct s_default_enum_string_resolver>::c_enum<enum e_performance_definition_type, short, 1, 3, struct s_default_enum_string_resolver>(void);
// public: c_enum<enum e_performance_definition_type, short, 1, 3, struct s_default_enum_string_resolver>::c_enum<enum e_performance_definition_type, short, 1, 3, struct s_default_enum_string_resolver>(enum e_performance_definition_type);
// public: enum e_performance_definition_type c_enum_no_init<enum e_performance_definition_type, short, 1, 3, struct s_default_enum_string_resolver>::operator enum e_performance_definition_type(void) const;
// public: bool c_enum_no_init<enum e_performance_definition_type, short, 1, 3, struct s_default_enum_string_resolver>::operator==(enum e_performance_definition_type) const;
// public: c_enum<enum e_performance_script_state, short, 0, 8, struct s_default_enum_string_resolver>::c_enum<enum e_performance_script_state, short, 0, 8, struct s_default_enum_string_resolver>(enum e_performance_script_state);
// public: enum e_performance_script_state c_enum_no_init<enum e_performance_script_state, short, 0, 8, struct s_default_enum_string_resolver>::operator enum e_performance_script_state(void) const;
// public: c_enum<enum e_performance_play_mode, short, 0, 2, struct s_default_enum_string_resolver>::c_enum<enum e_performance_play_mode, short, 0, 2, struct s_default_enum_string_resolver>(enum e_performance_play_mode);
// public: bool c_enum_no_init<enum e_performance_play_mode, short, 0, 2, struct s_default_enum_string_resolver>::operator==(enum e_performance_play_mode) const;
// public: void c_data_iterator<struct s_performance_datum>::begin(struct s_data_array *);
// public: bool c_data_iterator<struct s_performance_datum>::next(void);
// public: struct s_performance_datum * c_data_iterator<struct s_performance_datum>::get_datum(void) const;
// public: long c_data_iterator<struct s_performance_datum>::get_index(void) const;
// public: bool c_flags_no_init<enum e_scenario_performance_animation_type, short, 3, struct s_default_enum_string_resolver>::test(enum e_scenario_performance_animation_type) const;
// public: bool c_flags_no_init<enum e_scenario_performance_line_sync_action_type, short, 2, struct s_default_enum_string_resolver>::test(enum e_scenario_performance_line_sync_action_type) const;
// public: bool c_flags_no_init<enum e_scenario_performance_line_scenery_sync_action_type, short, 1, struct s_default_enum_string_resolver>::test(enum e_scenario_performance_line_scenery_sync_action_type) const;
// public: bool c_flags_no_init<enum e_scenario_performance_line_point_interaction_type, unsigned long, 9, struct s_default_enum_string_resolver>::test(enum e_scenario_performance_line_point_interaction_type) const;
// public: void c_flags_no_init<enum e_scenario_performance_line_point_interaction_type, unsigned long, 9, struct s_default_enum_string_resolver>::set(enum e_scenario_performance_line_point_interaction_type, bool);
// public: c_flags<enum e_scenario_performance_line_point_interaction_type, unsigned long, 9, struct s_default_enum_string_resolver>::c_flags<enum e_scenario_performance_line_point_interaction_type, unsigned long, 9, struct s_default_enum_string_resolver>(void);
// public: bool c_flags_no_init<enum e_scenario_performance_actor_flags, unsigned long, 1, struct s_default_enum_string_resolver>::test(enum e_scenario_performance_actor_flags) const;
// public: bool c_flags_no_init<enum e_scenario_performance_line_flags, unsigned short, 1, struct s_default_enum_string_resolver>::test(enum e_scenario_performance_line_flags) const;
// public: bool c_flags_no_init<enum e_performance_flags, short, 4, struct s_default_enum_string_resolver>::test(enum e_performance_flags) const;
// public: void c_flags_no_init<enum e_performance_participant_line_completion_flags, unsigned short, 7, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_performance_participant_line_completion_flags, unsigned short, 7, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: bool c_flags_no_init<enum e_performance_participant_line_completion_flags, unsigned short, 7, struct s_default_enum_string_resolver>::test(enum e_performance_participant_line_completion_flags) const;
// public: void c_flags_no_init<enum e_performance_participant_line_completion_flags, unsigned short, 7, struct s_default_enum_string_resolver>::set(enum e_performance_participant_line_completion_flags, bool);
// public: class c_flags_no_init<enum e_performance_participant_line_completion_flags, unsigned short, 7, struct s_default_enum_string_resolver> & c_flags_no_init<enum e_performance_participant_line_completion_flags, unsigned short, 7, struct s_default_enum_string_resolver>::operator|=(class c_flags_no_init<enum e_performance_participant_line_completion_flags, unsigned short, 7, struct s_default_enum_string_resolver> const &);
// public: c_flags<enum e_performance_participant_line_completion_flags, unsigned short, 7, struct s_default_enum_string_resolver>::c_flags<enum e_performance_participant_line_completion_flags, unsigned short, 7, struct s_default_enum_string_resolver>(void);
// public: bool c_flags_no_init<enum e_performance_participant_state_flags, unsigned short, 1, struct s_default_enum_string_resolver>::test(enum e_performance_participant_state_flags) const;
// public: void c_flags_no_init<enum e_performance_participant_state_flags, unsigned short, 1, struct s_default_enum_string_resolver>::set(enum e_performance_participant_state_flags, bool);
// public: bool c_flags_no_init<enum e_performance_sound_flags, unsigned short, 1, struct s_default_enum_string_resolver>::test(enum e_performance_sound_flags) const;
// public: void c_flags_no_init<enum e_performance_sound_flags, unsigned short, 1, struct s_default_enum_string_resolver>::set(enum e_performance_sound_flags, bool);
// public: c_flags<enum e_performance_sound_flags, unsigned short, 1, struct s_default_enum_string_resolver>::c_flags<enum e_performance_sound_flags, unsigned short, 1, struct s_default_enum_string_resolver>(void);
// public: bool c_flags_no_init<enum e_performance_sync_action_flags, unsigned short, 1, struct s_default_enum_string_resolver>::test(enum e_performance_sync_action_flags) const;
// public: void c_flags_no_init<enum e_performance_sync_action_flags, unsigned short, 1, struct s_default_enum_string_resolver>::set(enum e_performance_sync_action_flags, bool);
// public: c_flags<enum e_performance_sync_action_flags, unsigned short, 1, struct s_default_enum_string_resolver>::c_flags<enum e_performance_sync_action_flags, unsigned short, 1, struct s_default_enum_string_resolver>(void);
// public: void c_flags_no_init<enum e_ai_sync_action_arranger_setup_flags, unsigned long, 5, struct s_default_enum_string_resolver>::set(enum e_ai_sync_action_arranger_setup_flags, bool);
// public: c_flags<enum e_ai_sync_action_arranger_setup_flags, unsigned long, 5, struct s_default_enum_string_resolver>::c_flags<enum e_ai_sync_action_arranger_setup_flags, unsigned long, 5, struct s_default_enum_string_resolver>(void);
// public: void c_flags_no_init<enum e_distribution_performance_flags, short, 2, struct s_default_enum_string_resolver>::clear(void);
// public: void c_flags_no_init<enum e_distribution_performance_flags, short, 2, struct s_default_enum_string_resolver>::set(enum e_distribution_performance_flags, bool);
// void remove_element_from_list<struct s_performance_sync_action>(struct s_performance_sync_action *, long, short *);
// void remove_element_from_list<struct s_performance_sound>(struct s_performance_sound *, long, short *);
// struct s_scenario_performance_line_animation const * performance_select_random_tag_block_entry_from_line<struct s_scenario_performance_line_animation>(struct s_tag_block const *, long, long);
// struct s_scenario_performance_line_sync_action const * performance_select_random_tag_block_entry_from_line<struct s_scenario_performance_line_sync_action>(struct s_tag_block const *, long, long);
// bool performance_is_participant_needed_for_sync_action<struct s_scenario_performance_line_sync_action>(long, short, struct s_scenario_performance_line_sync_action const *);
// struct s_scenario_performance_line_scenery_sync_action const * performance_select_random_tag_block_entry_from_line<struct s_scenario_performance_line_scenery_sync_action>(struct s_tag_block const *, long, long);
// bool performance_is_participant_needed_for_sync_action<struct s_scenario_performance_line_scenery_sync_action>(long, short, struct s_scenario_performance_line_scenery_sync_action const *);
// struct s_scenario_performance_line_dialog const * performance_select_random_tag_block_entry_from_line<struct s_scenario_performance_line_dialog>(struct s_tag_block const *, long, long);
// void qsort_elements_fast<struct `bool performance_scripting_setup_and_begin(long, long, float)'::`5'::performance_role_call_entry>(struct `bool performance_scripting_setup_and_begin(long, long, float)'::`5'::performance_role_call_entry *, long, void *);
// public: static bool c_flags_no_init<enum e_scenario_performance_animation_type, short, 3, struct s_default_enum_string_resolver>::valid_bit(enum e_scenario_performance_animation_type);
// private: static short c_flags_no_init<enum e_scenario_performance_animation_type, short, 3, struct s_default_enum_string_resolver>::flag_size_type(enum e_scenario_performance_animation_type);
// public: static bool c_flags_no_init<enum e_scenario_performance_line_sync_action_type, short, 2, struct s_default_enum_string_resolver>::valid_bit(enum e_scenario_performance_line_sync_action_type);
// private: static short c_flags_no_init<enum e_scenario_performance_line_sync_action_type, short, 2, struct s_default_enum_string_resolver>::flag_size_type(enum e_scenario_performance_line_sync_action_type);
// public: static bool c_flags_no_init<enum e_scenario_performance_line_scenery_sync_action_type, short, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_scenario_performance_line_scenery_sync_action_type);
// private: static short c_flags_no_init<enum e_scenario_performance_line_scenery_sync_action_type, short, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_scenario_performance_line_scenery_sync_action_type);
// public: void c_flags_no_init<enum e_scenario_performance_line_point_interaction_type, unsigned long, 9, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_scenario_performance_line_point_interaction_type, unsigned long, 9, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: static bool c_flags_no_init<enum e_scenario_performance_line_point_interaction_type, unsigned long, 9, struct s_default_enum_string_resolver>::valid_bit(enum e_scenario_performance_line_point_interaction_type);
// private: static unsigned long c_flags_no_init<enum e_scenario_performance_line_point_interaction_type, unsigned long, 9, struct s_default_enum_string_resolver>::flag_size_type(enum e_scenario_performance_line_point_interaction_type);
// public: static bool c_flags_no_init<enum e_scenario_performance_actor_flags, unsigned long, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_scenario_performance_actor_flags);
// private: static unsigned long c_flags_no_init<enum e_scenario_performance_actor_flags, unsigned long, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_scenario_performance_actor_flags);
// public: static bool c_flags_no_init<enum e_scenario_performance_line_flags, unsigned short, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_scenario_performance_line_flags);
// private: static unsigned short c_flags_no_init<enum e_scenario_performance_line_flags, unsigned short, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_scenario_performance_line_flags);
// public: static bool c_flags_no_init<enum e_performance_participant_line_completion_flags, unsigned short, 7, struct s_default_enum_string_resolver>::valid_bit(enum e_performance_participant_line_completion_flags);
// public: bool c_flags_no_init<enum e_performance_participant_line_completion_flags, unsigned short, 7, struct s_default_enum_string_resolver>::valid(void) const;
// private: static unsigned short c_flags_no_init<enum e_performance_participant_line_completion_flags, unsigned short, 7, struct s_default_enum_string_resolver>::flag_size_type(enum e_performance_participant_line_completion_flags);
// private: static unsigned short c_flags_no_init<enum e_performance_participant_line_completion_flags, unsigned short, 7, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// public: static bool c_flags_no_init<enum e_performance_participant_state_flags, unsigned short, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_performance_participant_state_flags);
// private: static unsigned short c_flags_no_init<enum e_performance_participant_state_flags, unsigned short, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_performance_participant_state_flags);
// public: void c_flags_no_init<enum e_performance_sound_flags, unsigned short, 1, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_performance_sound_flags, unsigned short, 1, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: static bool c_flags_no_init<enum e_performance_sound_flags, unsigned short, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_performance_sound_flags);
// private: static unsigned short c_flags_no_init<enum e_performance_sound_flags, unsigned short, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_performance_sound_flags);
// public: void c_flags_no_init<enum e_performance_sync_action_flags, unsigned short, 1, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_performance_sync_action_flags, unsigned short, 1, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: static bool c_flags_no_init<enum e_performance_sync_action_flags, unsigned short, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_performance_sync_action_flags);
// private: static unsigned short c_flags_no_init<enum e_performance_sync_action_flags, unsigned short, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_performance_sync_action_flags);
// public: void c_flags_no_init<enum e_ai_sync_action_arranger_setup_flags, unsigned long, 5, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_ai_sync_action_arranger_setup_flags, unsigned long, 5, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: static bool c_flags_no_init<enum e_ai_sync_action_arranger_setup_flags, unsigned long, 5, struct s_default_enum_string_resolver>::valid_bit(enum e_ai_sync_action_arranger_setup_flags);
// private: static unsigned long c_flags_no_init<enum e_ai_sync_action_arranger_setup_flags, unsigned long, 5, struct s_default_enum_string_resolver>::flag_size_type(enum e_ai_sync_action_arranger_setup_flags);
// public: static bool c_flags_no_init<enum e_distribution_performance_flags, short, 2, struct s_default_enum_string_resolver>::valid_bit(enum e_distribution_performance_flags);
// private: static short c_flags_no_init<enum e_distribution_performance_flags, short, 2, struct s_default_enum_string_resolver>::flag_size_type(enum e_distribution_performance_flags);
// void qsort_elements_fast_inlined<struct `bool performance_scripting_setup_and_begin(long, long, float)'::`5'::performance_role_call_entry>(struct `bool performance_scripting_setup_and_begin(long, long, float)'::`5'::performance_role_call_entry *, long, void *);
// private: static unsigned long c_flags_no_init<enum e_scenario_performance_line_point_interaction_type, unsigned long, 9, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned short c_flags_no_init<enum e_performance_participant_line_completion_flags, unsigned short, 7, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_performance_participant_line_completion_flags);
// private: static unsigned short c_flags_no_init<enum e_performance_sound_flags, unsigned short, 1, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned short c_flags_no_init<enum e_performance_sync_action_flags, unsigned short, 1, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned long c_flags_no_init<enum e_ai_sync_action_arranger_setup_flags, unsigned long, 5, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned long c_flags_no_init<enum e_scenario_performance_line_point_interaction_type, unsigned long, 9, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_scenario_performance_line_point_interaction_type);
// private: static unsigned short c_flags_no_init<enum e_performance_sound_flags, unsigned short, 1, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_performance_sound_flags);
// private: static unsigned short c_flags_no_init<enum e_performance_sync_action_flags, unsigned short, 1, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_performance_sync_action_flags);
// private: static unsigned long c_flags_no_init<enum e_ai_sync_action_arranger_setup_flags, unsigned long, 5, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_ai_sync_action_arranger_setup_flags);
// public: void c_sector_ref::set(short, unsigned short);
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_performance_data_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_performance_data_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_performance_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_performance_data_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_performance_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_performance_data_allocator::*)(void *)>::free_memory(void);
// public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_performance_data_allocator::*)(void *)>::valid(void) const;
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_performance_runtime_definition_data_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_performance_runtime_definition_data_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_performance_runtime_definition_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_performance_runtime_definition_data_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_performance_runtime_definition_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_performance_runtime_definition_data_allocator::*)(void *)>::free_memory(void);
// public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_performance_runtime_definition_data_allocator::*)(void *)>::valid(void) const;
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_performance_data_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_performance_data_allocator::*)(void *)>(void);
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_performance_runtime_definition_data_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_performance_runtime_definition_data_allocator::*)(void *)>(void);
// void g_performance_data_allocator::`dynamic atexit destructor'(void);
// void g_performance_runtime_definition_data_allocator::`dynamic atexit destructor'(void);

//void __tls_set_g_performance_data_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_performance_data_allocator@@YAXPAX@Z");
//};

//void __tls_set_g_performance_runtime_definition_data_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_performance_runtime_definition_data_allocator@@YAXPAX@Z");
//};

//public: c_performance_definition::c_performance_definition(void)
//{
//    mangled_ppc("??0c_performance_definition@@QAA@XZ");
//};

//public: c_performance_definition::c_performance_definition(long, enum e_performance_definition_type)
//{
//    mangled_ppc("??0c_performance_definition@@QAA@JW4e_performance_definition_type@@@Z");
//};

//public: void c_performance_definition::set(long, enum e_performance_definition_type)
//{
//    mangled_ppc("?set@c_performance_definition@@QAAXJW4e_performance_definition_type@@@Z");
//};

//public: void c_performance_definition::clear(void)
//{
//    mangled_ppc("?clear@c_performance_definition@@QAAXXZ");
//};

//public: void c_performance_definition::delete_runtime_definition(void)
//{
//    mangled_ppc("?delete_runtime_definition@c_performance_definition@@QAAXXZ");
//};

//public: bool c_performance_definition::valid(void) const
//{
//    mangled_ppc("?valid@c_performance_definition@@QBA_NXZ");
//};

//public: bool c_performance_definition::test_flag(enum e_performance_flags) const
//{
//    mangled_ppc("?test_flag@c_performance_definition@@QBA_NW4e_performance_flags@@@Z");
//};

//public: long c_performance_definition::get_name(void) const
//{
//    mangled_ppc("?get_name@c_performance_definition@@QBAJXZ");
//};

//public: long c_performance_definition::get_script_name(void) const
//{
//    mangled_ppc("?get_script_name@c_performance_definition@@QBAJXZ");
//};

//public: float c_performance_definition::get_attraction_radius(void) const
//{
//    mangled_ppc("?get_attraction_radius@c_performance_definition@@QBAMXZ");
//};

//public: float c_performance_definition::get_attraction_probability_per_second(void) const
//{
//    mangled_ppc("?get_attraction_probability_per_second@c_performance_definition@@QBAMXZ");
//};

//public: float c_performance_definition::get_performance_radius(void) const
//{
//    mangled_ppc("?get_performance_radius@c_performance_definition@@QBAMXZ");
//};

//public: void c_performance_definition::get_performance_origin(union real_point3d *) const
//{
//    mangled_ppc("?get_performance_origin@c_performance_definition@@QBAXPATreal_point3d@@@Z");
//};

//public: void c_performance_definition::get_performance_world_matrix(struct real_matrix4x3*) const
//{
//    mangled_ppc("?get_performance_world_matrix@c_performance_definition@@QBAXPAUreal_matrix4x3@@@Z");
//};

//public: short c_performance_definition::get_role_count(void) const
//{
//    mangled_ppc("?get_role_count@c_performance_definition@@QBAFXZ");
//};

//public: short c_performance_definition::get_point_count(void) const
//{
//    mangled_ppc("?get_point_count@c_performance_definition@@QBAFXZ");
//};

//public: bool c_performance_definition::get_point_by_name(long, union real_point3d *, union euler_angles2d *, class c_sector_ref *) const
//{
//    mangled_ppc("?get_point_by_name@c_performance_definition@@QBA_NJPATreal_point3d@@PATeuler_angles2d@@PAVc_sector_ref@@@Z");
//};

//struct cs_point * find_point_in_point_set_by_name(long, long)
//{
//    mangled_ppc("?find_point_in_point_set_by_name@@YAPAUcs_point@@JJ@Z");
//};

//public: bool c_performance_definition::get_point_by_index(short, union real_point3d *, union euler_angles2d *, class c_sector_ref *) const
//{
//    mangled_ppc("?get_point_by_index@c_performance_definition@@QBA_NFPATreal_point3d@@PATeuler_angles2d@@PAVc_sector_ref@@@Z");
//};

//public: bool c_performance_definition::get_role_name(short, long *) const
//{
//    mangled_ppc("?get_role_name@c_performance_definition@@QBA_NFPAJ@Z");
//};

//public: bool c_performance_definition::get_role_character_definition_index(short, long *) const
//{
//    mangled_ppc("?get_role_character_definition_index@c_performance_definition@@QBA_NFPAJ@Z");
//};

//public: bool c_performance_definition::test_compatible_character_type(long, long) const
//{
//    mangled_ppc("?test_compatible_character_type@c_performance_definition@@QBA_NJJ@Z");
//};

//public: bool c_performance_definition::role_in_sync_action_actor_list(short, struct s_tag_block const *) const
//{
//    mangled_ppc("?role_in_sync_action_actor_list@c_performance_definition@@QBA_NFPBUs_tag_block@@@Z");
//};

//public: bool c_performance_definition::get_role_properties(short, long *, long *, long *, long *, long *, bool *, union real_point3d *, union euler_angles2d *, class c_sector_ref *) const
//{
//    mangled_ppc("?get_role_properties@c_performance_definition@@QBA_NFPAJ0000PA_NPATreal_point3d@@PATeuler_angles2d@@PAVc_sector_ref@@@Z");
//};

//public: bool c_performance_definition::test_role_flag(short, enum e_scenario_performance_actor_flags) const
//{
//    mangled_ppc("?test_role_flag@c_performance_definition@@QBA_NFW4e_scenario_performance_actor_flags@@@Z");
//};

//public: short c_performance_definition::get_line_count(void) const
//{
//    mangled_ppc("?get_line_count@c_performance_definition@@QBAFXZ");
//};

//public: struct s_scenario_performance_line const * c_performance_definition::get_line(short) const
//{
//    mangled_ppc("?get_line@c_performance_definition@@QBAPBUs_scenario_performance_line@@F@Z");
//};

//public: short c_performance_definition::get_task_ref_count(void) const
//{
//    mangled_ppc("?get_task_ref_count@c_performance_definition@@QBAFXZ");
//};

//public: struct s_stimulus_distribution_task const * c_performance_definition::get_task_ref(short) const
//{
//    mangled_ppc("?get_task_ref@c_performance_definition@@QBAPBUs_stimulus_distribution_task@@F@Z");
//};

//public: bool c_performance_definition::initialize_runtime_definition_points(struct s_runtime_performance_definition_point *, short)
//{
//    mangled_ppc("?initialize_runtime_definition_points@c_performance_definition@@QAA_NPAUs_runtime_performance_definition_point@@F@Z");
//};

//void compute_world_space_point_for_template_point(struct s_performance_template_point const *, struct real_matrix4x3const *, union real_point3d *, union euler_angles2d *, class c_sector_ref *)
//{
//    mangled_ppc("?compute_world_space_point_for_template_point@@YAXPBUs_performance_template_point@@PBUreal_matrix4x3@@PATreal_point3d@@PATeuler_angles2d@@PAVc_sector_ref@@@Z");
//};

//public: bool c_performance_definition::initialize_tag_definition_points(bool)
//{
//    mangled_ppc("?initialize_tag_definition_points@c_performance_definition@@QAA_N_N@Z");
//};

//public: void c_performance_definition::cache_template_index(void)
//{
//    mangled_ppc("?cache_template_index@c_performance_definition@@QAAXXZ");
//};

//public: bool c_performance_definition::toggle_task(long, long)
//{
//    mangled_ppc("?toggle_task@c_performance_definition@@QAA_NJJ@Z");
//};

//protected: struct s_runtime_performance_definition_datum const * c_performance_definition::get_runtime_performance_definition_const(void) const
//{
//    mangled_ppc("?get_runtime_performance_definition_const@c_performance_definition@@IBAPBUs_runtime_performance_definition_datum@@XZ");
//};

//protected: struct s_scenario_performance const * c_performance_definition::get_tag_performance_definition_const(void) const
//{
//    mangled_ppc("?get_tag_performance_definition_const@c_performance_definition@@IBAPBUs_scenario_performance@@XZ");
//};

//protected: struct s_runtime_performance_definition_datum * c_performance_definition::get_runtime_performance_definition(void)
//{
//    mangled_ppc("?get_runtime_performance_definition@c_performance_definition@@IAAPAUs_runtime_performance_definition_datum@@XZ");
//};

//protected: struct s_scenario_performance * c_performance_definition::get_tag_performance_definition(void)
//{
//    mangled_ppc("?get_tag_performance_definition@c_performance_definition@@IAAPAUs_scenario_performance@@XZ");
//};

//void performances_initialize(void)
//{
//    mangled_ppc("?performances_initialize@@YAXXZ");
//};

//void performances_initialize_for_new_map(void)
//{
//    mangled_ppc("?performances_initialize_for_new_map@@YAXXZ");
//};

//void performances_place_for_new_map(void)
//{
//    mangled_ppc("?performances_place_for_new_map@@YAXXZ");
//};

//void performances_dispose_from_old_map(void)
//{
//    mangled_ppc("?performances_dispose_from_old_map@@YAXXZ");
//};

//void performances_handle_deleted_actor(long)
//{
//    mangled_ppc("?performances_handle_deleted_actor@@YAXJ@Z");
//};

//void performances_handle_actor_task_change(long)
//{
//    mangled_ppc("?performances_handle_actor_task_change@@YAXJ@Z");
//};

//void performances_handle_hs_thread_delete(long)
//{
//    mangled_ppc("?performances_handle_hs_thread_delete@@YAXJ@Z");
//};

//void performances_remove_participant(long)
//{
//    mangled_ppc("?performances_remove_participant@@YAXJ@Z");
//};

//long performance_get_template_index_from_name(long)
//{
//    mangled_ppc("?performance_get_template_index_from_name@@YAJJ@Z");
//};

//void performance_handle_addition(class c_performance_definition const &)
//{
//    mangled_ppc("?performance_handle_addition@@YAXABVc_performance_definition@@@Z");
//};

//void performance_handle_deletion(void)
//{
//    mangled_ppc("?performance_handle_deletion@@YAXXZ");
//};

//bool performance_handle_modification(class c_performance_definition &)
//{
//    mangled_ppc("?performance_handle_modification@@YA_NAAVc_performance_definition@@@Z");
//};

//public: bool c_performance_definition::operator==(class c_performance_definition const &) const
//{
//    mangled_ppc("??8c_performance_definition@@QBA_NABV0@@Z");
//};

//void performance_definition_toggle_task(class c_performance_definition &, long, long)
//{
//    mangled_ppc("?performance_definition_toggle_task@@YAXAAVc_performance_definition@@JJ@Z");
//};

//long performance_definition_index_from_ray(union real_point3d const *, union vector3d const *)
//{
//    mangled_ppc("?performance_definition_index_from_ray@@YAJPBTreal_point3d@@PBTvector3d@@@Z");
//};

//bool performance_participant_needed(long, long)
//{
//    mangled_ppc("?performance_participant_needed@@YA_NJJ@Z");
//};

//bool performance_actor_blocked_on_line(long, struct s_performance_participant *)
//{
//    mangled_ppc("?performance_actor_blocked_on_line@@YA_NJPAUs_performance_participant@@@Z");
//};

//void performance_update_participant_to_line_index(long, long)
//{
//    mangled_ppc("?performance_update_participant_to_line_index@@YAXJJ@Z");
//};

//void performance_set_up_line_completion_flags(struct s_scenario_performance_line const *, class c_flags<enum e_performance_participant_line_completion_flags, unsigned short, 7, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("?performance_set_up_line_completion_flags@@YAXPBUs_scenario_performance_line@@PAV?$c_flags@W4e_performance_participant_line_completion_flags@@G$06Us_default_enum_string_resolver@@@@@Z");
//};

//void performances_update(void)
//{
//    mangled_ppc("?performances_update@@YAXXZ");
//};

//bool performance_can_cast_actor(long, long, short *)
//{
//    mangled_ppc("?performance_can_cast_actor@@YA_NJJPAF@Z");
//};

//public: performance_definition_role_iterator::performance_definition_role_iterator(void)
//{
//    mangled_ppc("??0performance_definition_role_iterator@@QAA@XZ");
//};

//bool performance_cast_actor(long, long)
//{
//    mangled_ppc("?performance_cast_actor@@YA_NJJ@Z");
//};

//bool performance_clear_casted_actors(long)
//{
//    mangled_ppc("?performance_clear_casted_actors@@YA_NJ@Z");
//};

//long test_performance_new(class c_performance_definition const &)
//{
//    mangled_ppc("?test_performance_new@@YAJABVc_performance_definition@@@Z");
//};

//bool performance_datum_available_to_current_thread(void)
//{
//    mangled_ppc("?performance_datum_available_to_current_thread@@YA_NXZ");
//};

//bool performance_get_is_initialized(class c_performance_definition const &)
//{
//    mangled_ppc("?performance_get_is_initialized@@YA_NABVc_performance_definition@@@Z");
//};

//bool performance_get_has_started(long)
//{
//    mangled_ppc("?performance_get_has_started@@YA_NJ@Z");
//};

//bool performance_get_has_active_sync_actions(long, bool, long)
//{
//    mangled_ppc("?performance_get_has_active_sync_actions@@YA_NJ_NJ@Z");
//};

//bool performance_get_has_active_sounds(long, bool, long)
//{
//    mangled_ppc("?performance_get_has_active_sounds@@YA_NJ_NJ@Z");
//};

//bool performance_get_is_blocked(long)
//{
//    mangled_ppc("?performance_get_is_blocked@@YA_NJ@Z");
//};

//bool performance_all_participants_queues_empty(long)
//{
//    mangled_ppc("?performance_all_participants_queues_empty@@YA_NJ@Z");
//};

//bool performance_get_is_actor_participant(long, long)
//{
//    mangled_ppc("?performance_get_is_actor_participant@@YA_NJJ@Z");
//};

//class c_performance_definition const & performance_get_definition(long)
//{
//    mangled_ppc("?performance_get_definition@@YAABVc_performance_definition@@J@Z");
//};

//struct s_scenario_performance_line const * performance_get_line(long, long)
//{
//    mangled_ppc("?performance_get_line@@YAPBUs_scenario_performance_line@@JJ@Z");
//};

//bool performance_get_has_script_fragments(long)
//{
//    mangled_ppc("?performance_get_has_script_fragments@@YA_NJ@Z");
//};

//bool performance_line_has_sleep_block(struct s_scenario_performance_line const *)
//{
//    mangled_ppc("?performance_line_has_sleep_block@@YA_NPBUs_scenario_performance_line@@@Z");
//};

//class c_performance_definition performance_runtime_definition_new(long, struct real_matrix4x3const *)
//{
//    mangled_ppc("?performance_runtime_definition_new@@YA?AVc_performance_definition@@JPBUreal_matrix4x3@@@Z");
//};

//class c_performance_definition performance_runtime_definition_new(long, struct real_matrix4x3const *, struct s_runtime_performance_definition_point *, short)
//{
//    mangled_ppc("?performance_runtime_definition_new@@YA?AVc_performance_definition@@JPBUreal_matrix4x3@@PAUs_runtime_performance_definition_point@@F@Z");
//};

//long performance_new(class c_performance_definition const &)
//{
//    mangled_ppc("?performance_new@@YAJABVc_performance_definition@@@Z");
//};

//void performance_release_all_participants(long)
//{
//    mangled_ppc("?performance_release_all_participants@@YAXJ@Z");
//};

//void performance_release_participant(long, long)
//{
//    mangled_ppc("?performance_release_participant@@YAXJJ@Z");
//};

//void performance_delete(long)
//{
//    mangled_ppc("?performance_delete@@YAXJ@Z");
//};

//long performance_find_participant_by_actor(long, long)
//{
//    mangled_ppc("?performance_find_participant_by_actor@@YAJJJ@Z");
//};

//long performance_find_participant_by_role(long, long)
//{
//    mangled_ppc("?performance_find_participant_by_role@@YAJJJ@Z");
//};

//long performance_find_actor_index_for_line(long, long)
//{
//    mangled_ppc("?performance_find_actor_index_for_line@@YAJJJ@Z");
//};

//void performance_remove_participant(long, long, bool)
//{
//    mangled_ppc("?performance_remove_participant@@YAXJJ_N@Z");
//};

//bool performance_is_actor_critical(long, long)
//{
//    mangled_ppc("?performance_is_actor_critical@@YA_NJJ@Z");
//};

//bool performance_update_sync_action_arranger(long, long)
//{
//    mangled_ppc("?performance_update_sync_action_arranger@@YA_NJJ@Z");
//};

//void preformance_remove_sync_action(long, long)
//{
//    mangled_ppc("?preformance_remove_sync_action@@YAXJJ@Z");
//};

//void performance_remove_sound(long, long)
//{
//    mangled_ppc("?performance_remove_sound@@YAXJJ@Z");
//};

//bool performance_has_required_participants(long)
//{
//    mangled_ppc("?performance_has_required_participants@@YA_NJ@Z");
//};

//bool performance_play_script(long)
//{
//    mangled_ppc("?performance_play_script@@YA_NJ@Z");
//};

//bool performance_play_script(long, long)
//{
//    mangled_ppc("?performance_play_script@@YA_NJJ@Z");
//};

//void performance_evaluate_line_actions(long, long, class c_flags<enum e_performance_participant_line_completion_flags, unsigned short, 7, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("?performance_evaluate_line_actions@@YAXJJPAV?$c_flags@W4e_performance_participant_line_completion_flags@@G$06Us_default_enum_string_resolver@@@@@Z");
//};

//void performance_evaluate_line_animation(long, long, bool)
//{
//    mangled_ppc("?performance_evaluate_line_animation@@YAXJJ_N@Z");
//};

//void performance_add_command(long, long, long, short)
//{
//    mangled_ppc("?performance_add_command@@YAXJJJF@Z");
//};

//void performance_evaluate_line_sync_action(long, long, bool)
//{
//    mangled_ppc("?performance_evaluate_line_sync_action@@YAXJJ_N@Z");
//};

//long performance_add_sync_action(long, long, long, long, class c_flags<enum e_performance_sync_action_flags, unsigned short, 1, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?performance_add_sync_action@@YAJJJJJV?$c_flags@W4e_performance_sync_action_flags@@G$00Us_default_enum_string_resolver@@@@@Z");
//};

//void performance_participants_apply_sync_action_cs_command(long, long, bool)
//{
//    mangled_ppc("?performance_participants_apply_sync_action_cs_command@@YAXJJ_N@Z");
//};

//void performance_evaluate_line_scenery_sync_action(long, long, bool)
//{
//    mangled_ppc("?performance_evaluate_line_scenery_sync_action@@YAXJJ_N@Z");
//};

//void performance_evaluate_line_dialogue(long, long, bool)
//{
//    mangled_ppc("?performance_evaluate_line_dialogue@@YAXJJ_N@Z");
//};

//void performance_evaluate_line_sound(long, long, bool)
//{
//    mangled_ppc("?performance_evaluate_line_sound@@YAXJJ_N@Z");
//};

//long performance_add_sound(long, float, long, class c_flags<enum e_performance_sound_flags, unsigned short, 1, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?performance_add_sound@@YAJJMJV?$c_flags@W4e_performance_sound_flags@@G$00Us_default_enum_string_resolver@@@@@Z");
//};

//void performance_evaluate_line_point_interaction(long, long, bool)
//{
//    mangled_ppc("?performance_evaluate_line_point_interaction@@YAXJJ_N@Z");
//};

//enum e_performance_exclusive_point_interaction performance_find_exclusive_point_interaction(long, long, bool *, union real_point3d *, union euler_angles2d *, class c_sector_ref *, long *)
//{
//    mangled_ppc("?performance_find_exclusive_point_interaction@@YA?AW4e_performance_exclusive_point_interaction@@JJPA_NPATreal_point3d@@PATeuler_angles2d@@PAVc_sector_ref@@PAJ@Z");
//};

//bool performance_interaction_resolve_points_and_objects(long, long, long, bool *, union real_point3d *, union euler_angles2d *, class c_sector_ref *, long *)
//{
//    mangled_ppc("?performance_interaction_resolve_points_and_objects@@YA_NJJJPA_NPATreal_point3d@@PATeuler_angles2d@@PAVc_sector_ref@@PAJ@Z");
//};

//void performance_apply_nonexclusive_point_interactions(long, long, long, long)
//{
//    mangled_ppc("?performance_apply_nonexclusive_point_interactions@@YAXJJJJ@Z");
//};

//void performance_scripting_test_by_name(long)
//{
//    mangled_ppc("?performance_scripting_test_by_name@@YAXJ@Z");
//};

//void performance_scripting_folder_activate(long)
//{
//    mangled_ppc("?performance_scripting_folder_activate@@YAXJ@Z");
//};

//void performance_scripting_folder_deactivate(long)
//{
//    mangled_ppc("?performance_scripting_folder_deactivate@@YAXJ@Z");
//};

//void performance_scripting_activate(long)
//{
//    mangled_ppc("?performance_scripting_activate@@YAXJ@Z");
//};

//bool performance_scripting_setup_and_begin(long, long, float)
//{
//    mangled_ppc("?performance_scripting_setup_and_begin@@YA_NJJM@Z");
//};

//bool performance_has_all_participants_slots_filled(long)
//{
//    mangled_ppc("?performance_has_all_participants_slots_filled@@YA_NJ@Z");
//};

//public: static bool `bool performance_scripting_setup_and_begin(long, long, float)'::`5'::performance_role_call_entry::compare(struct `bool performance_scripting_setup_and_begin(long, long, float)'::`5'::performance_role_call_entry *, struct `bool performance_scripting_setup_and_begin(long, long, float)'::`5'::performance_role_call_entry *)
//{
//    mangled_ppc("?compare@performance_role_call_entry@?4??performance_scripting_setup_and_begin@@YA_NJJM@Z@SA_NPAU1?4??2@YA_NJJM@Z@0@Z");
//};

//public: static void `bool performance_scripting_setup_and_begin(long, long, float)'::`5'::performance_role_call_entry::swap(struct `bool performance_scripting_setup_and_begin(long, long, float)'::`5'::performance_role_call_entry *, struct `bool performance_scripting_setup_and_begin(long, long, float)'::`5'::performance_role_call_entry *, void *)
//{
//    mangled_ppc("?swap@performance_role_call_entry@?4??performance_scripting_setup_and_begin@@YA_NJJM@Z@SAXPAU1?4??2@YA_NJJM@Z@0PAX@Z");
//};

//long performance_scripting_new(long, bool)
//{
//    mangled_ppc("?performance_scripting_new@@YAJJ_N@Z");
//};

//void performance_scripting_cast(long, long)
//{
//    mangled_ppc("?performance_scripting_cast@@YAXJJ@Z");
//};

//void performance_scripting_begin(long)
//{
//    mangled_ppc("?performance_scripting_begin@@YAXJ@Z");
//};

//void performance_kill(long)
//{
//    mangled_ppc("?performance_kill@@YAXJ@Z");
//};

//void performance_kill_by_definition(class c_performance_definition const &)
//{
//    mangled_ppc("?performance_kill_by_definition@@YAXABVc_performance_definition@@@Z");
//};

//void performance_scripting_kill_by_name(long)
//{
//    mangled_ppc("?performance_scripting_kill_by_name@@YAXJ@Z");
//};

//void performance_scripting_kill_by_ai(long)
//{
//    mangled_ppc("?performance_scripting_kill_by_ai@@YAXJ@Z");
//};

//void performance_scripting_fake_task_transition_event(long, long)
//{
//    mangled_ppc("?performance_scripting_fake_task_transition_event@@YAXJJ@Z");
//};

//void performance_scripting_play_line_by_name(long, long)
//{
//    mangled_ppc("?performance_scripting_play_line_by_name@@YAXJJ@Z");
//};

//long performance_find_by_thread_index(long)
//{
//    mangled_ppc("?performance_find_by_thread_index@@YAJJ@Z");
//};

//void performance_scripting_play_line_by_id(long, short)
//{
//    mangled_ppc("?performance_scripting_play_line_by_id@@YAXJF@Z");
//};

//long performance_get_actor_by_performance_index(long, short)
//{
//    mangled_ppc("?performance_get_actor_by_performance_index@@YAJJF@Z");
//};

//long performance_scripting_get_actor_by_participant_index(long, short)
//{
//    mangled_ppc("?performance_scripting_get_actor_by_participant_index@@YAJJF@Z");
//};

//long performance_scripting_get_actor_by_role_name_from_performance(long, long)
//{
//    mangled_ppc("?performance_scripting_get_actor_by_role_name_from_performance@@YAJJJ@Z");
//};

//long performance_scripting_get_actor_by_role_name(long, long)
//{
//    mangled_ppc("?performance_scripting_get_actor_by_role_name@@YAJJJ@Z");
//};

//short performance_scripting_get_participant_count(long)
//{
//    mangled_ppc("?performance_scripting_get_participant_count@@YAFJ@Z");
//};

//short performance_scripting_get_role_count(long)
//{
//    mangled_ppc("?performance_scripting_get_role_count@@YAFJ@Z");
//};

//short performance_scripting_get_line_count(long)
//{
//    mangled_ppc("?performance_scripting_get_line_count@@YAFJ@Z");
//};

//short performance_scripting_get_last_played_line_index(long)
//{
//    mangled_ppc("?performance_scripting_get_last_played_line_index@@YAFJ@Z");
//};

//bool performance_scripting_get_is_blocked(long)
//{
//    mangled_ppc("?performance_scripting_get_is_blocked@@YA_NJ@Z");
//};

//bool performance_spawned_actor(long, long)
//{
//    mangled_ppc("?performance_spawned_actor@@YA_NJJ@Z");
//};

//void performance_iterator_new(struct performance_iterator *)
//{
//    mangled_ppc("?performance_iterator_new@@YAXPAUperformance_iterator@@@Z");
//};

//struct s_performance_datum * performance_iterator_next(struct performance_iterator *)
//{
//    mangled_ppc("?performance_iterator_next@@YAPAUs_performance_datum@@PAUperformance_iterator@@@Z");
//};

//void performance_participant_actor_iterator_new(struct performance_participant_actor_iterator *, long)
//{
//    mangled_ppc("?performance_participant_actor_iterator_new@@YAXPAUperformance_participant_actor_iterator@@J@Z");
//};

//struct actor_datum * performance_participant_actor_iterator_next(struct performance_participant_actor_iterator *)
//{
//    mangled_ppc("?performance_participant_actor_iterator_next@@YAPAUactor_datum@@PAUperformance_participant_actor_iterator@@@Z");
//};

//bool performance_exists(long)
//{
//    mangled_ppc("?performance_exists@@YA_NJ@Z");
//};

//void performance_definition_role_iterator_new(struct performance_definition_role_iterator *, long, bool)
//{
//    mangled_ppc("?performance_definition_role_iterator_new@@YAXPAUperformance_definition_role_iterator@@J_N@Z");
//};

//bool performance_definition_role_iterator_next(struct performance_definition_role_iterator *)
//{
//    mangled_ppc("?performance_definition_role_iterator_next@@YA_NPAUperformance_definition_role_iterator@@@Z");
//};

//void performances_debug_render(void)
//{
//    mangled_ppc("?performances_debug_render@@YAXXZ");
//};

//void performance_debug_render_timeline(long)
//{
//    mangled_ppc("?performance_debug_render_timeline@@YAXJ@Z");
//};

//public: long c_simple_font_screen_display::get_char_width(void) const
//{
//    mangled_ppc("?get_char_width@c_simple_font_screen_display@@QBAJXZ");
//};

//public: s_performance_debug_actor_record::s_performance_debug_actor_record(void)
//{
//    mangled_ppc("??0s_performance_debug_actor_record@@QAA@XZ");
//};

//public: s_performance_debug_line_record::s_performance_debug_line_record(void)
//{
//    mangled_ppc("??0s_performance_debug_line_record@@QAA@XZ");
//};

//void performance_debug_render_general_state(long, long)
//{
//    mangled_ppc("?performance_debug_render_general_state@@YAXJJ@Z");
//};

//void performance_debug_format_line_name(long, long, char *, long)
//{
//    mangled_ppc("?performance_debug_format_line_name@@YAXJJPADJ@Z");
//};

//void performance_debug_format_string(long, char *, long)
//{
//    mangled_ppc("?performance_debug_format_string@@YAXJPADJ@Z");
//};

//void performance_name_debug_format(long, char *, long)
//{
//    mangled_ppc("?performance_name_debug_format@@YAXJPADJ@Z");
//};

//void performance_debug_render_general_participant_state(long, long)
//{
//    mangled_ppc("?performance_debug_render_general_participant_state@@YAXJJ@Z");
//};

//void performance_debug_render_participant_commands(long, long)
//{
//    mangled_ppc("?performance_debug_render_participant_commands@@YAXJJ@Z");
//};

//void performance_debug_render_facing_target(union real_point3d const *, float, short, long, union real_point3d const *)
//{
//    mangled_ppc("?performance_debug_render_facing_target@@YAXPBTreal_point3d@@MFJ0@Z");
//};

//void performance_debug_render_sync_actions(long)
//{
//    mangled_ppc("?performance_debug_render_sync_actions@@YAXJ@Z");
//};

//bool performance_render_sync_action_arranger(long, union real_point3d *)
//{
//    mangled_ppc("?performance_render_sync_action_arranger@@YA_NJPATreal_point3d@@@Z");
//};

//void performance_definition_render(class c_performance_definition const &, union argb_color const *)
//{
//    mangled_ppc("?performance_definition_render@@YAXABVc_performance_definition@@PBTargb_color@@@Z");
//};

//public: enum e_actor_sync_action_state c_enum_no_init<enum e_actor_sync_action_state, unsigned char, 0, 6, struct s_default_enum_string_resolver>::operator enum e_actor_sync_action_state(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_actor_sync_action_state@@E$0A@$05Us_default_enum_string_resolver@@@@QBA?AW4e_actor_sync_action_state@@XZ");
//};

//public: bool c_enum_no_init<enum e_actor_sync_action_state, unsigned char, 0, 6, struct s_default_enum_string_resolver>::operator==(enum e_actor_sync_action_state) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_actor_sync_action_state@@E$0A@$05Us_default_enum_string_resolver@@@@QBA_NW4e_actor_sync_action_state@@@Z");
//};

//public: enum e_scenario_performance_line_progress_type c_enum_no_init<enum e_scenario_performance_line_progress_type, long, 0, 5, struct s_default_enum_string_resolver>::operator enum e_scenario_performance_line_progress_type(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_scenario_performance_line_progress_type@@J$0A@$04Us_default_enum_string_resolver@@@@QBA?AW4e_scenario_performance_line_progress_type@@XZ");
//};

//public: bool c_enum_no_init<enum e_scenario_performance_line_progress_type, long, 0, 5, struct s_default_enum_string_resolver>::operator==(enum e_scenario_performance_line_progress_type) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_scenario_performance_line_progress_type@@J$0A@$04Us_default_enum_string_resolver@@@@QBA_NW4e_scenario_performance_line_progress_type@@@Z");
//};

//public: c_enum<enum e_performance_definition_type, short, 1, 3, struct s_default_enum_string_resolver>::c_enum<enum e_performance_definition_type, short, 1, 3, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_performance_definition_type@@F$00$02Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: c_enum<enum e_performance_definition_type, short, 1, 3, struct s_default_enum_string_resolver>::c_enum<enum e_performance_definition_type, short, 1, 3, struct s_default_enum_string_resolver>(enum e_performance_definition_type)
//{
//    mangled_ppc("??0?$c_enum@W4e_performance_definition_type@@F$00$02Us_default_enum_string_resolver@@@@QAA@W4e_performance_definition_type@@@Z");
//};

//public: enum e_performance_definition_type c_enum_no_init<enum e_performance_definition_type, short, 1, 3, struct s_default_enum_string_resolver>::operator enum e_performance_definition_type(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_performance_definition_type@@F$00$02Us_default_enum_string_resolver@@@@QBA?AW4e_performance_definition_type@@XZ");
//};

//public: bool c_enum_no_init<enum e_performance_definition_type, short, 1, 3, struct s_default_enum_string_resolver>::operator==(enum e_performance_definition_type) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_performance_definition_type@@F$00$02Us_default_enum_string_resolver@@@@QBA_NW4e_performance_definition_type@@@Z");
//};

//public: c_enum<enum e_performance_script_state, short, 0, 8, struct s_default_enum_string_resolver>::c_enum<enum e_performance_script_state, short, 0, 8, struct s_default_enum_string_resolver>(enum e_performance_script_state)
//{
//    mangled_ppc("??0?$c_enum@W4e_performance_script_state@@F$0A@$07Us_default_enum_string_resolver@@@@QAA@W4e_performance_script_state@@@Z");
//};

//public: enum e_performance_script_state c_enum_no_init<enum e_performance_script_state, short, 0, 8, struct s_default_enum_string_resolver>::operator enum e_performance_script_state(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_performance_script_state@@F$0A@$07Us_default_enum_string_resolver@@@@QBA?AW4e_performance_script_state@@XZ");
//};

//public: c_enum<enum e_performance_play_mode, short, 0, 2, struct s_default_enum_string_resolver>::c_enum<enum e_performance_play_mode, short, 0, 2, struct s_default_enum_string_resolver>(enum e_performance_play_mode)
//{
//    mangled_ppc("??0?$c_enum@W4e_performance_play_mode@@F$0A@$01Us_default_enum_string_resolver@@@@QAA@W4e_performance_play_mode@@@Z");
//};

//public: bool c_enum_no_init<enum e_performance_play_mode, short, 0, 2, struct s_default_enum_string_resolver>::operator==(enum e_performance_play_mode) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_performance_play_mode@@F$0A@$01Us_default_enum_string_resolver@@@@QBA_NW4e_performance_play_mode@@@Z");
//};

//public: void c_data_iterator<struct s_performance_datum>::begin(struct s_data_array *)
//{
//    mangled_ppc("?begin@?$c_data_iterator@Us_performance_datum@@@@QAAXPAUs_data_array@@@Z");
//};

//public: bool c_data_iterator<struct s_performance_datum>::next(void)
//{
//    mangled_ppc("?next@?$c_data_iterator@Us_performance_datum@@@@QAA_NXZ");
//};

//public: struct s_performance_datum * c_data_iterator<struct s_performance_datum>::get_datum(void) const
//{
//    mangled_ppc("?get_datum@?$c_data_iterator@Us_performance_datum@@@@QBAPAUs_performance_datum@@XZ");
//};

//public: long c_data_iterator<struct s_performance_datum>::get_index(void) const
//{
//    mangled_ppc("?get_index@?$c_data_iterator@Us_performance_datum@@@@QBAJXZ");
//};

//public: bool c_flags_no_init<enum e_scenario_performance_animation_type, short, 3, struct s_default_enum_string_resolver>::test(enum e_scenario_performance_animation_type) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_scenario_performance_animation_type@@F$02Us_default_enum_string_resolver@@@@QBA_NW4e_scenario_performance_animation_type@@@Z");
//};

//public: bool c_flags_no_init<enum e_scenario_performance_line_sync_action_type, short, 2, struct s_default_enum_string_resolver>::test(enum e_scenario_performance_line_sync_action_type) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_scenario_performance_line_sync_action_type@@F$01Us_default_enum_string_resolver@@@@QBA_NW4e_scenario_performance_line_sync_action_type@@@Z");
//};

//public: bool c_flags_no_init<enum e_scenario_performance_line_scenery_sync_action_type, short, 1, struct s_default_enum_string_resolver>::test(enum e_scenario_performance_line_scenery_sync_action_type) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_scenario_performance_line_scenery_sync_action_type@@F$00Us_default_enum_string_resolver@@@@QBA_NW4e_scenario_performance_line_scenery_sync_action_type@@@Z");
//};

//public: bool c_flags_no_init<enum e_scenario_performance_line_point_interaction_type, unsigned long, 9, struct s_default_enum_string_resolver>::test(enum e_scenario_performance_line_point_interaction_type) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_scenario_performance_line_point_interaction_type@@K$08Us_default_enum_string_resolver@@@@QBA_NW4e_scenario_performance_line_point_interaction_type@@@Z");
//};

//public: void c_flags_no_init<enum e_scenario_performance_line_point_interaction_type, unsigned long, 9, struct s_default_enum_string_resolver>::set(enum e_scenario_performance_line_point_interaction_type, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_scenario_performance_line_point_interaction_type@@K$08Us_default_enum_string_resolver@@@@QAAXW4e_scenario_performance_line_point_interaction_type@@_N@Z");
//};

//public: c_flags<enum e_scenario_performance_line_point_interaction_type, unsigned long, 9, struct s_default_enum_string_resolver>::c_flags<enum e_scenario_performance_line_point_interaction_type, unsigned long, 9, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_scenario_performance_line_point_interaction_type@@K$08Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: bool c_flags_no_init<enum e_scenario_performance_actor_flags, unsigned long, 1, struct s_default_enum_string_resolver>::test(enum e_scenario_performance_actor_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_scenario_performance_actor_flags@@K$00Us_default_enum_string_resolver@@@@QBA_NW4e_scenario_performance_actor_flags@@@Z");
//};

//public: bool c_flags_no_init<enum e_scenario_performance_line_flags, unsigned short, 1, struct s_default_enum_string_resolver>::test(enum e_scenario_performance_line_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_scenario_performance_line_flags@@G$00Us_default_enum_string_resolver@@@@QBA_NW4e_scenario_performance_line_flags@@@Z");
//};

//public: bool c_flags_no_init<enum e_performance_flags, short, 4, struct s_default_enum_string_resolver>::test(enum e_performance_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_performance_flags@@F$03Us_default_enum_string_resolver@@@@QBA_NW4e_performance_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_performance_participant_line_completion_flags, unsigned short, 7, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_performance_participant_line_completion_flags@@G$06Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_performance_participant_line_completion_flags, unsigned short, 7, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_performance_participant_line_completion_flags@@G$06Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: bool c_flags_no_init<enum e_performance_participant_line_completion_flags, unsigned short, 7, struct s_default_enum_string_resolver>::test(enum e_performance_participant_line_completion_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_performance_participant_line_completion_flags@@G$06Us_default_enum_string_resolver@@@@QBA_NW4e_performance_participant_line_completion_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_performance_participant_line_completion_flags, unsigned short, 7, struct s_default_enum_string_resolver>::set(enum e_performance_participant_line_completion_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_performance_participant_line_completion_flags@@G$06Us_default_enum_string_resolver@@@@QAAXW4e_performance_participant_line_completion_flags@@_N@Z");
//};

//public: class c_flags_no_init<enum e_performance_participant_line_completion_flags, unsigned short, 7, struct s_default_enum_string_resolver> & c_flags_no_init<enum e_performance_participant_line_completion_flags, unsigned short, 7, struct s_default_enum_string_resolver>::operator|=(class c_flags_no_init<enum e_performance_participant_line_completion_flags, unsigned short, 7, struct s_default_enum_string_resolver> const &)
//{
//    mangled_ppc("??_5?$c_flags_no_init@W4e_performance_participant_line_completion_flags@@G$06Us_default_enum_string_resolver@@@@QAAAAV0@ABV0@@Z");
//};

//public: c_flags<enum e_performance_participant_line_completion_flags, unsigned short, 7, struct s_default_enum_string_resolver>::c_flags<enum e_performance_participant_line_completion_flags, unsigned short, 7, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_performance_participant_line_completion_flags@@G$06Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: bool c_flags_no_init<enum e_performance_participant_state_flags, unsigned short, 1, struct s_default_enum_string_resolver>::test(enum e_performance_participant_state_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_performance_participant_state_flags@@G$00Us_default_enum_string_resolver@@@@QBA_NW4e_performance_participant_state_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_performance_participant_state_flags, unsigned short, 1, struct s_default_enum_string_resolver>::set(enum e_performance_participant_state_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_performance_participant_state_flags@@G$00Us_default_enum_string_resolver@@@@QAAXW4e_performance_participant_state_flags@@_N@Z");
//};

//public: bool c_flags_no_init<enum e_performance_sound_flags, unsigned short, 1, struct s_default_enum_string_resolver>::test(enum e_performance_sound_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_performance_sound_flags@@G$00Us_default_enum_string_resolver@@@@QBA_NW4e_performance_sound_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_performance_sound_flags, unsigned short, 1, struct s_default_enum_string_resolver>::set(enum e_performance_sound_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_performance_sound_flags@@G$00Us_default_enum_string_resolver@@@@QAAXW4e_performance_sound_flags@@_N@Z");
//};

//public: c_flags<enum e_performance_sound_flags, unsigned short, 1, struct s_default_enum_string_resolver>::c_flags<enum e_performance_sound_flags, unsigned short, 1, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_performance_sound_flags@@G$00Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: bool c_flags_no_init<enum e_performance_sync_action_flags, unsigned short, 1, struct s_default_enum_string_resolver>::test(enum e_performance_sync_action_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_performance_sync_action_flags@@G$00Us_default_enum_string_resolver@@@@QBA_NW4e_performance_sync_action_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_performance_sync_action_flags, unsigned short, 1, struct s_default_enum_string_resolver>::set(enum e_performance_sync_action_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_performance_sync_action_flags@@G$00Us_default_enum_string_resolver@@@@QAAXW4e_performance_sync_action_flags@@_N@Z");
//};

//public: c_flags<enum e_performance_sync_action_flags, unsigned short, 1, struct s_default_enum_string_resolver>::c_flags<enum e_performance_sync_action_flags, unsigned short, 1, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_performance_sync_action_flags@@G$00Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: void c_flags_no_init<enum e_ai_sync_action_arranger_setup_flags, unsigned long, 5, struct s_default_enum_string_resolver>::set(enum e_ai_sync_action_arranger_setup_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_ai_sync_action_arranger_setup_flags@@K$04Us_default_enum_string_resolver@@@@QAAXW4e_ai_sync_action_arranger_setup_flags@@_N@Z");
//};

//public: c_flags<enum e_ai_sync_action_arranger_setup_flags, unsigned long, 5, struct s_default_enum_string_resolver>::c_flags<enum e_ai_sync_action_arranger_setup_flags, unsigned long, 5, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_ai_sync_action_arranger_setup_flags@@K$04Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: void c_flags_no_init<enum e_distribution_performance_flags, short, 2, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_distribution_performance_flags@@F$01Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: void c_flags_no_init<enum e_distribution_performance_flags, short, 2, struct s_default_enum_string_resolver>::set(enum e_distribution_performance_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_distribution_performance_flags@@F$01Us_default_enum_string_resolver@@@@QAAXW4e_distribution_performance_flags@@_N@Z");
//};

//void remove_element_from_list<struct s_performance_sync_action>(struct s_performance_sync_action *, long, short *)
//{
//    mangled_ppc("??$remove_element_from_list@Us_performance_sync_action@@@@YAXPAUs_performance_sync_action@@JPAF@Z");
//};

//void remove_element_from_list<struct s_performance_sound>(struct s_performance_sound *, long, short *)
//{
//    mangled_ppc("??$remove_element_from_list@Us_performance_sound@@@@YAXPAUs_performance_sound@@JPAF@Z");
//};

//struct s_scenario_performance_line_animation const * performance_select_random_tag_block_entry_from_line<struct s_scenario_performance_line_animation>(struct s_tag_block const *, long, long)
//{
//    mangled_ppc("??$performance_select_random_tag_block_entry_from_line@Us_scenario_performance_line_animation@@@@YAPBUs_scenario_performance_line_animation@@PBUs_tag_block@@JJ@Z");
//};

//struct s_scenario_performance_line_sync_action const * performance_select_random_tag_block_entry_from_line<struct s_scenario_performance_line_sync_action>(struct s_tag_block const *, long, long)
//{
//    mangled_ppc("??$performance_select_random_tag_block_entry_from_line@Us_scenario_performance_line_sync_action@@@@YAPBUs_scenario_performance_line_sync_action@@PBUs_tag_block@@JJ@Z");
//};

//bool performance_is_participant_needed_for_sync_action<struct s_scenario_performance_line_sync_action>(long, short, struct s_scenario_performance_line_sync_action const *)
//{
//    mangled_ppc("??$performance_is_participant_needed_for_sync_action@Us_scenario_performance_line_sync_action@@@@YA_NJFPBUs_scenario_performance_line_sync_action@@@Z");
//};

//struct s_scenario_performance_line_scenery_sync_action const * performance_select_random_tag_block_entry_from_line<struct s_scenario_performance_line_scenery_sync_action>(struct s_tag_block const *, long, long)
//{
//    mangled_ppc("??$performance_select_random_tag_block_entry_from_line@Us_scenario_performance_line_scenery_sync_action@@@@YAPBUs_scenario_performance_line_scenery_sync_action@@PBUs_tag_block@@JJ@Z");
//};

//bool performance_is_participant_needed_for_sync_action<struct s_scenario_performance_line_scenery_sync_action>(long, short, struct s_scenario_performance_line_scenery_sync_action const *)
//{
//    mangled_ppc("??$performance_is_participant_needed_for_sync_action@Us_scenario_performance_line_scenery_sync_action@@@@YA_NJFPBUs_scenario_performance_line_scenery_sync_action@@@Z");
//};

//struct s_scenario_performance_line_dialog const * performance_select_random_tag_block_entry_from_line<struct s_scenario_performance_line_dialog>(struct s_tag_block const *, long, long)
//{
//    mangled_ppc("??$performance_select_random_tag_block_entry_from_line@Us_scenario_performance_line_dialog@@@@YAPBUs_scenario_performance_line_dialog@@PBUs_tag_block@@JJ@Z");
//};

//void qsort_elements_fast<struct `bool performance_scripting_setup_and_begin(long, long, float)'::`5'::performance_role_call_entry>(struct `bool performance_scripting_setup_and_begin(long, long, float)'::`5'::performance_role_call_entry *, long, void *)
//{
//    mangled_ppc("??$qsort_elements_fast@Uperformance_role_call_entry@?4??performance_scripting_setup_and_begin@@YA_NJJM@Z@@@YAXPAUperformance_role_call_entry@?4??performance_scripting_setup_and_begin@@YA_NJJM@Z@JPAX@Z");
//};

//public: static bool c_flags_no_init<enum e_scenario_performance_animation_type, short, 3, struct s_default_enum_string_resolver>::valid_bit(enum e_scenario_performance_animation_type)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_scenario_performance_animation_type@@F$02Us_default_enum_string_resolver@@@@SA_NW4e_scenario_performance_animation_type@@@Z");
//};

//private: static short c_flags_no_init<enum e_scenario_performance_animation_type, short, 3, struct s_default_enum_string_resolver>::flag_size_type(enum e_scenario_performance_animation_type)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_scenario_performance_animation_type@@F$02Us_default_enum_string_resolver@@@@CAFW4e_scenario_performance_animation_type@@@Z");
//};

//public: static bool c_flags_no_init<enum e_scenario_performance_line_sync_action_type, short, 2, struct s_default_enum_string_resolver>::valid_bit(enum e_scenario_performance_line_sync_action_type)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_scenario_performance_line_sync_action_type@@F$01Us_default_enum_string_resolver@@@@SA_NW4e_scenario_performance_line_sync_action_type@@@Z");
//};

//private: static short c_flags_no_init<enum e_scenario_performance_line_sync_action_type, short, 2, struct s_default_enum_string_resolver>::flag_size_type(enum e_scenario_performance_line_sync_action_type)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_scenario_performance_line_sync_action_type@@F$01Us_default_enum_string_resolver@@@@CAFW4e_scenario_performance_line_sync_action_type@@@Z");
//};

//public: static bool c_flags_no_init<enum e_scenario_performance_line_scenery_sync_action_type, short, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_scenario_performance_line_scenery_sync_action_type)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_scenario_performance_line_scenery_sync_action_type@@F$00Us_default_enum_string_resolver@@@@SA_NW4e_scenario_performance_line_scenery_sync_action_type@@@Z");
//};

//private: static short c_flags_no_init<enum e_scenario_performance_line_scenery_sync_action_type, short, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_scenario_performance_line_scenery_sync_action_type)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_scenario_performance_line_scenery_sync_action_type@@F$00Us_default_enum_string_resolver@@@@CAFW4e_scenario_performance_line_scenery_sync_action_type@@@Z");
//};

//public: void c_flags_no_init<enum e_scenario_performance_line_point_interaction_type, unsigned long, 9, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_scenario_performance_line_point_interaction_type@@K$08Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_scenario_performance_line_point_interaction_type, unsigned long, 9, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_scenario_performance_line_point_interaction_type@@K$08Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static bool c_flags_no_init<enum e_scenario_performance_line_point_interaction_type, unsigned long, 9, struct s_default_enum_string_resolver>::valid_bit(enum e_scenario_performance_line_point_interaction_type)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_scenario_performance_line_point_interaction_type@@K$08Us_default_enum_string_resolver@@@@SA_NW4e_scenario_performance_line_point_interaction_type@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_scenario_performance_line_point_interaction_type, unsigned long, 9, struct s_default_enum_string_resolver>::flag_size_type(enum e_scenario_performance_line_point_interaction_type)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_scenario_performance_line_point_interaction_type@@K$08Us_default_enum_string_resolver@@@@CAKW4e_scenario_performance_line_point_interaction_type@@@Z");
//};

//public: static bool c_flags_no_init<enum e_scenario_performance_actor_flags, unsigned long, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_scenario_performance_actor_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_scenario_performance_actor_flags@@K$00Us_default_enum_string_resolver@@@@SA_NW4e_scenario_performance_actor_flags@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_scenario_performance_actor_flags, unsigned long, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_scenario_performance_actor_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_scenario_performance_actor_flags@@K$00Us_default_enum_string_resolver@@@@CAKW4e_scenario_performance_actor_flags@@@Z");
//};

//public: static bool c_flags_no_init<enum e_scenario_performance_line_flags, unsigned short, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_scenario_performance_line_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_scenario_performance_line_flags@@G$00Us_default_enum_string_resolver@@@@SA_NW4e_scenario_performance_line_flags@@@Z");
//};

//private: static unsigned short c_flags_no_init<enum e_scenario_performance_line_flags, unsigned short, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_scenario_performance_line_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_scenario_performance_line_flags@@G$00Us_default_enum_string_resolver@@@@CAGW4e_scenario_performance_line_flags@@@Z");
//};

//public: static bool c_flags_no_init<enum e_performance_participant_line_completion_flags, unsigned short, 7, struct s_default_enum_string_resolver>::valid_bit(enum e_performance_participant_line_completion_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_performance_participant_line_completion_flags@@G$06Us_default_enum_string_resolver@@@@SA_NW4e_performance_participant_line_completion_flags@@@Z");
//};

//public: bool c_flags_no_init<enum e_performance_participant_line_completion_flags, unsigned short, 7, struct s_default_enum_string_resolver>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_flags_no_init@W4e_performance_participant_line_completion_flags@@G$06Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//private: static unsigned short c_flags_no_init<enum e_performance_participant_line_completion_flags, unsigned short, 7, struct s_default_enum_string_resolver>::flag_size_type(enum e_performance_participant_line_completion_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_performance_participant_line_completion_flags@@G$06Us_default_enum_string_resolver@@@@CAGW4e_performance_participant_line_completion_flags@@@Z");
//};

//private: static unsigned short c_flags_no_init<enum e_performance_participant_line_completion_flags, unsigned short, 7, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_performance_participant_line_completion_flags@@G$06Us_default_enum_string_resolver@@@@CAGXZ");
//};

//public: static bool c_flags_no_init<enum e_performance_participant_state_flags, unsigned short, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_performance_participant_state_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_performance_participant_state_flags@@G$00Us_default_enum_string_resolver@@@@SA_NW4e_performance_participant_state_flags@@@Z");
//};

//private: static unsigned short c_flags_no_init<enum e_performance_participant_state_flags, unsigned short, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_performance_participant_state_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_performance_participant_state_flags@@G$00Us_default_enum_string_resolver@@@@CAGW4e_performance_participant_state_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_performance_sound_flags, unsigned short, 1, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_performance_sound_flags@@G$00Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_performance_sound_flags, unsigned short, 1, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_performance_sound_flags@@G$00Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static bool c_flags_no_init<enum e_performance_sound_flags, unsigned short, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_performance_sound_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_performance_sound_flags@@G$00Us_default_enum_string_resolver@@@@SA_NW4e_performance_sound_flags@@@Z");
//};

//private: static unsigned short c_flags_no_init<enum e_performance_sound_flags, unsigned short, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_performance_sound_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_performance_sound_flags@@G$00Us_default_enum_string_resolver@@@@CAGW4e_performance_sound_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_performance_sync_action_flags, unsigned short, 1, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_performance_sync_action_flags@@G$00Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_performance_sync_action_flags, unsigned short, 1, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_performance_sync_action_flags@@G$00Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static bool c_flags_no_init<enum e_performance_sync_action_flags, unsigned short, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_performance_sync_action_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_performance_sync_action_flags@@G$00Us_default_enum_string_resolver@@@@SA_NW4e_performance_sync_action_flags@@@Z");
//};

//private: static unsigned short c_flags_no_init<enum e_performance_sync_action_flags, unsigned short, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_performance_sync_action_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_performance_sync_action_flags@@G$00Us_default_enum_string_resolver@@@@CAGW4e_performance_sync_action_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_ai_sync_action_arranger_setup_flags, unsigned long, 5, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_ai_sync_action_arranger_setup_flags@@K$04Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_ai_sync_action_arranger_setup_flags, unsigned long, 5, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_ai_sync_action_arranger_setup_flags@@K$04Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static bool c_flags_no_init<enum e_ai_sync_action_arranger_setup_flags, unsigned long, 5, struct s_default_enum_string_resolver>::valid_bit(enum e_ai_sync_action_arranger_setup_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_ai_sync_action_arranger_setup_flags@@K$04Us_default_enum_string_resolver@@@@SA_NW4e_ai_sync_action_arranger_setup_flags@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_ai_sync_action_arranger_setup_flags, unsigned long, 5, struct s_default_enum_string_resolver>::flag_size_type(enum e_ai_sync_action_arranger_setup_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_ai_sync_action_arranger_setup_flags@@K$04Us_default_enum_string_resolver@@@@CAKW4e_ai_sync_action_arranger_setup_flags@@@Z");
//};

//public: static bool c_flags_no_init<enum e_distribution_performance_flags, short, 2, struct s_default_enum_string_resolver>::valid_bit(enum e_distribution_performance_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_distribution_performance_flags@@F$01Us_default_enum_string_resolver@@@@SA_NW4e_distribution_performance_flags@@@Z");
//};

//private: static short c_flags_no_init<enum e_distribution_performance_flags, short, 2, struct s_default_enum_string_resolver>::flag_size_type(enum e_distribution_performance_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_distribution_performance_flags@@F$01Us_default_enum_string_resolver@@@@CAFW4e_distribution_performance_flags@@@Z");
//};

//void qsort_elements_fast_inlined<struct `bool performance_scripting_setup_and_begin(long, long, float)'::`5'::performance_role_call_entry>(struct `bool performance_scripting_setup_and_begin(long, long, float)'::`5'::performance_role_call_entry *, long, void *)
//{
//    mangled_ppc("??$qsort_elements_fast_inlined@Uperformance_role_call_entry@?4??performance_scripting_setup_and_begin@@YA_NJJM@Z@@@YAXPAUperformance_role_call_entry@?4??performance_scripting_setup_and_begin@@YA_NJJM@Z@JPAX@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_scenario_performance_line_point_interaction_type, unsigned long, 9, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_scenario_performance_line_point_interaction_type@@K$08Us_default_enum_string_resolver@@@@CAKXZ");
//};

//private: static unsigned short c_flags_no_init<enum e_performance_participant_line_completion_flags, unsigned short, 7, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_performance_participant_line_completion_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_performance_participant_line_completion_flags@@G$06Us_default_enum_string_resolver@@@@CAGW4e_performance_participant_line_completion_flags@@@Z");
//};

//private: static unsigned short c_flags_no_init<enum e_performance_sound_flags, unsigned short, 1, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_performance_sound_flags@@G$00Us_default_enum_string_resolver@@@@CAGXZ");
//};

//private: static unsigned short c_flags_no_init<enum e_performance_sync_action_flags, unsigned short, 1, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_performance_sync_action_flags@@G$00Us_default_enum_string_resolver@@@@CAGXZ");
//};

//private: static unsigned long c_flags_no_init<enum e_ai_sync_action_arranger_setup_flags, unsigned long, 5, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_ai_sync_action_arranger_setup_flags@@K$04Us_default_enum_string_resolver@@@@CAKXZ");
//};

//private: static unsigned long c_flags_no_init<enum e_scenario_performance_line_point_interaction_type, unsigned long, 9, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_scenario_performance_line_point_interaction_type)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_scenario_performance_line_point_interaction_type@@K$08Us_default_enum_string_resolver@@@@CAKW4e_scenario_performance_line_point_interaction_type@@@Z");
//};

//private: static unsigned short c_flags_no_init<enum e_performance_sound_flags, unsigned short, 1, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_performance_sound_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_performance_sound_flags@@G$00Us_default_enum_string_resolver@@@@CAGW4e_performance_sound_flags@@@Z");
//};

//private: static unsigned short c_flags_no_init<enum e_performance_sync_action_flags, unsigned short, 1, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_performance_sync_action_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_performance_sync_action_flags@@G$00Us_default_enum_string_resolver@@@@CAGW4e_performance_sync_action_flags@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_ai_sync_action_arranger_setup_flags, unsigned long, 5, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_ai_sync_action_arranger_setup_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_ai_sync_action_arranger_setup_flags@@K$04Us_default_enum_string_resolver@@@@CAKW4e_ai_sync_action_arranger_setup_flags@@@Z");
//};

//public: void c_sector_ref::set(short, unsigned short)
//{
//    mangled_ppc("?set@c_sector_ref@@QAAXFG@Z");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_performance_data_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_performance_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_performance_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_performance_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_performance_data_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_performance_data_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_performance_data_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_performance_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_performance_data_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_performance_data_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_performance_data_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_performance_data_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_performance_data_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_performance_runtime_definition_data_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_performance_runtime_definition_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_performance_runtime_definition_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_performance_runtime_definition_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_performance_runtime_definition_data_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_performance_runtime_definition_data_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_performance_runtime_definition_data_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_performance_runtime_definition_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_performance_runtime_definition_data_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_performance_runtime_definition_data_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_performance_runtime_definition_data_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_performance_runtime_definition_data_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_performance_runtime_definition_data_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_performance_data_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_performance_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_performance_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_performance_runtime_definition_data_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_performance_runtime_definition_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_performance_runtime_definition_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//void g_performance_data_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_performance_data_allocator@@YAXXZ");
//};

//void g_performance_runtime_definition_data_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_performance_runtime_definition_data_allocator@@YAXXZ");
//};

