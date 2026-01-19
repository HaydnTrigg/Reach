/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// float g_animation_throttle_dampening_scale; // "?g_animation_throttle_dampening_scale@@3MA"

// class c_animation_channel * motor_animation_resource_get_channel(long, enum e_motor_resource);
// class c_animation_channel * motor_animation_task_get_channel(long, class c_motor_task const *);
// long motor_animation_get_state(long);
// bool motor_animation_get_mode_and_state(long, long *, long *);
// bool motor_animation_running(long, long);
// float motor_animation_get_animation_time(long, float *);
// bool motor_animation_get_range(long, long, long, short, bool, float *);
// bool motor_animation_get_range(long, long, long, short, bool, float *, short *);
// bool motor_animation_get_range(long, long, long, short, bool, float *, short *, float *, short *);
// enum e_unit_animation_key_frame_status motor_animation_get_ragdoll_keyframe_status(long);
// bool motor_animation_test_mode(long, long);
// bool motor_animation_test_mode(long, long, long, long);
// bool motor_animation_test_bunker(long, enum e_bunker_direction, enum e_bunker_height, enum e_bunker_state);
// bool motor_animation_test_mode_and_impulse(long, long, long, long, long);
// bool motor_animation_test_mode_and_state(long, long, long);
// bool motor_animation_test_mode_and_state(long, long, long, long, long);
// bool motor_animation_validate_animation(long, long, long, bool *);
// bool motor_animation_action_loops(long, enum e_motor_resource);
// class c_motor_task * motor_animation_get_resource_owner(long, enum e_motor_resource);
// bool motor_animation_resource_busy(long, enum e_motor_resource);
// void motor_interrupability(long, bool *, bool *);
// bool motor_animation_task_busy(long, class c_motor_task *, enum e_motor_resource, bool, bool);
// public: class c_flags<enum e_animation_frame_event_types, unsigned long, 23, struct s_default_enum_string_resolver> const & c_animation_channel::get_past_event_flags(void) const;
// bool motor_animation_busy(long);
// bool motor_task_allow(long, enum e_action, short);
// void motor_task_build_context_for_action_interruption(long, enum e_motor_resource, enum e_action, class c_flags<enum e_action_interruption_context, unsigned short, 2, struct s_default_enum_string_resolver> *);
// void motor_task_interrupt(long, short, short);
// bool motor_animation_set_mode_weapons_and_state(long, long, long, long, long, float, class c_flags<enum e_animation_state_change_flags, unsigned short, 16, struct s_default_enum_string_resolver>, class c_flags<enum e_animation_playback_flags, unsigned long, 18, struct s_default_enum_string_resolver>, bool);
// bool motor_animation_set_mode_weapons_and_state(long, long, long, long, long, enum e_physics_animation_state, float, class c_flags<enum e_animation_state_change_flags, unsigned short, 16, struct s_default_enum_string_resolver>, class c_flags<enum e_animation_playback_flags, unsigned long, 18, struct s_default_enum_string_resolver>, bool);
// bool motor_animation_set_mode_and_state(long, long, long, float, class c_flags<enum e_animation_state_change_flags, unsigned short, 16, struct s_default_enum_string_resolver>, class c_flags<enum e_animation_playback_flags, unsigned long, 18, struct s_default_enum_string_resolver>);
// class c_motor_task * motor_task_new(long, enum e_motor_resource, long, long, enum e_motor_task, enum e_action);
// class c_motor_task * motor_task_get(long, enum e_motor_resource);
// class c_motor_task const * motor_task_get_const(long, enum e_motor_resource);
// class c_motor_task * motor_task_find(long, enum e_motor_task);
// class c_motor_task * motor_task_find_by_action(long, enum e_action);
// enum e_motor_resource motor_task_get_resource(long, class c_motor_task const *);
// enum e_action motor_task_get_action_by_resource(long, enum e_motor_resource);
// bool motor_animation_fix_pill(long, long, long, bool);
// long motor_animation_default_ground_mode(long);
// void motor_animation_posture_exit_end(long);
// void motor_animation_posture_exit_end(long, long, long);
// void motor_animation_posture_exit_end(long, long, long, long, long);
// void motor_animation_posture_exit_end(long, long, long, long, long, enum e_physics_animation_state);
// void motor_animation_enter_posture(long, union real_point3d const *, union vector3d const *, union vector3d const *, union real_point3d const *);
// public: class c_animation_id c_animation_manager::get_state_animation_id(void) const;
// bool motor_animation_set_posture(long, long, long, bool, bool, union real_point3d const *, union vector3d const *, bool *);
// class c_motor_task * motor_task_set_posture(long, enum e_motor_task, enum e_action, long, long, bool, bool, union real_point3d const *, union vector3d const *, short, bool, bool *, bool *);
// bool motor_task_enter_seat_internal(long, long, short, bool, long, bool *, bool, bool, bool);
// void motor_animation_unit_entry_finished(long, long);
// class c_motor_task * motor_task_enter_seat(long, enum e_motor_task, enum e_action, long, short, bool, bool *, bool, bool, bool);
// void motor_animation_exit_seat_immediate(long, bool, bool, bool, bool, enum e_motor_program *);
// void motor_animation_exit_seat_immediate_internal(long, bool, bool, bool, enum e_motor_program *);
// class c_motor_task * motor_task_exit_seat(long, enum e_motor_task, enum e_action, bool);
// bool motor_animation_exit_seat_internal(long, long, bool *);
// class c_motor_task * motor_task_set_mode_and_state(long, enum e_motor_task, enum e_action, long, long, float, short, class c_flags<enum e_animation_state_change_flags, unsigned short, 16, struct s_default_enum_string_resolver>, class c_flags<enum e_animation_playback_flags, unsigned long, 18, struct s_default_enum_string_resolver>, bool);
// class c_motor_task * motor_task_start_animation(long, enum e_motor_task, enum e_action, long, float, bool);
// class c_motor_task * motor_task_start_animation(long, enum e_motor_task, enum e_action, long, long, enum e_unit_weapon_config, float, bool);
// class c_motor_task * motor_task_start_animation(long, enum e_motor_task, enum e_action, long, long, enum e_unit_weapon_config, short, float, bool);
// bool motor_task_recursive_start_animation(long, enum e_motor_task, enum e_action, long, bool);
// class c_motor_task * motor_task_set_ping(long, enum e_motor_task, enum e_action, enum e_motor_resource, long, long, long, short, short, short *, short *);
// class c_motor_task * motor_task_start_custom_animation(long, enum e_motor_task, enum e_action, long, long, bool, bool);
// bool motor_animation_build_state_change_settings_from_control_data(long, struct s_animation_control_data const *, struct s_state_changes_requested *, struct s_animation_state_change_settings *);
// public: short c_model_animation::get_loop_frame_index(void) const;
// public: class c_flags<enum e_animation_playback_flags, unsigned long, 18, struct s_default_enum_string_resolver> const & c_channel_base::get_playback_flags(void) const;
// public: long s_animation_control_data::get_state_desired(void) const;
// public: enum e_physics_animation_state s_animation_control_data::get_physics_state_desired(void) const;
// public: bool s_animation_control_data::is_state_desired_valid(void) const;
// public: bool s_animation_state_change_settings::compare_settings(struct s_animation_state_change_settings const &, struct s_state_changes_requested *) const;
// public: class c_flags<enum e_channel_settings_comparison_flags, unsigned long, 10, struct s_default_enum_string_resolver> c_animation_channel_settings::compare_settings(class c_animation_channel_settings const &) const;
// public: bool c_animation_id::operator!=(class c_animation_id const &) const;
// public: class c_flags<enum e_channel_settings_comparison_flags, unsigned long, 10, struct s_default_enum_string_resolver> c_base_channel_settings::compare_base_settings(class c_base_channel_settings const &) const;
// public: class c_flags<enum e_goal_settings_comparison_flags, unsigned long, 5, struct s_default_enum_string_resolver> s_animation_goal_settings::compare_goals(struct s_animation_goal_settings const &) const;
// public: bool s_animation_state_change_settings::changes_should_interpolate(struct s_animation_state_change_settings const &) const;
// public: s_state_changes_requested::s_state_changes_requested(void);
// bool motor_animation_recommend_state_change_settings(long, long, long, long, long, float, class c_flags<enum e_animation_state_change_flags, unsigned short, 16, struct s_default_enum_string_resolver>, class c_flags<enum e_animation_playback_flags, unsigned long, 18, struct s_default_enum_string_resolver>, bool, struct s_animation_state_change_settings *);
// bool motor_animation_recommend_state_change_settings(long, long, long, long, long, enum e_physics_animation_state, float, class c_flags<enum e_animation_state_change_flags, unsigned short, 16, struct s_default_enum_string_resolver>, class c_flags<enum e_animation_playback_flags, unsigned long, 18, struct s_default_enum_string_resolver>, bool, struct s_animation_state_change_settings *);
// bool motor_animation_execute_state_change_settings(long, struct s_animation_state_change_settings const *, bool);
// void motor_animation_update_impulses_on_mode_change(long);
// class c_motor_task * motor_task_execute_state_change_settings(long, enum e_motor_task, enum e_action, struct s_animation_state_change_settings const *, short, bool);
// bool motor_program_execute_state_change_settings(long, struct s_animation_state_change_settings const *, bool);
// void motor_animation_update_analog_blending(long);
// bool motor_animation_update_gait_for_active_channel(long);
// bool is_physics_animation_state_turning(enum e_physics_animation_state);
// void motor_animation_inherit_animation_orientation(long);
// public: enum e_animation_types c_enum_no_init<enum e_animation_types, char, 0, 4, struct s_default_enum_string_resolver>::operator enum e_animation_types(void) const;
// public: enum e_animation_graph_location c_enum_no_init<enum e_animation_graph_location, char, 0, 9, struct s_default_enum_string_resolver>::operator enum e_animation_graph_location(void) const;
// public: void c_flags_no_init<enum e_goal_settings_comparison_flags, unsigned long, 5, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_goal_settings_comparison_flags, unsigned long, 5, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: bool c_flags_no_init<enum e_goal_settings_comparison_flags, unsigned long, 5, struct s_default_enum_string_resolver>::test(enum e_goal_settings_comparison_flags) const;
// public: void c_flags_no_init<enum e_goal_settings_comparison_flags, unsigned long, 5, struct s_default_enum_string_resolver>::set(enum e_goal_settings_comparison_flags, bool);
// public: unsigned long c_flags_no_init<enum e_goal_settings_comparison_flags, unsigned long, 5, struct s_default_enum_string_resolver>::get_unsafe(void) const;
// public: c_flags<enum e_goal_settings_comparison_flags, unsigned long, 5, struct s_default_enum_string_resolver>::c_flags<enum e_goal_settings_comparison_flags, unsigned long, 5, struct s_default_enum_string_resolver>(void);
// public: void c_flags_no_init<enum e_channel_settings_comparison_flags, unsigned long, 10, struct s_default_enum_string_resolver>::clear(void);
// public: void c_flags_no_init<enum e_channel_settings_comparison_flags, unsigned long, 10, struct s_default_enum_string_resolver>::set(enum e_channel_settings_comparison_flags, bool);
// public: unsigned long c_flags_no_init<enum e_channel_settings_comparison_flags, unsigned long, 10, struct s_default_enum_string_resolver>::get_unsafe(void) const;
// public: c_flags<enum e_channel_settings_comparison_flags, unsigned long, 10, struct s_default_enum_string_resolver>::c_flags<enum e_channel_settings_comparison_flags, unsigned long, 10, struct s_default_enum_string_resolver>(void);
// public: bool c_flags_no_init<enum e_animation_state_change_flags, unsigned short, 16, struct s_default_enum_string_resolver>::test(enum e_animation_state_change_flags) const;
// public: bool c_flags_no_init<enum e_animation_channel_settings_flags, unsigned long, 2, struct s_default_enum_string_resolver>::test(enum e_animation_channel_settings_flags) const;
// public: void c_flags_no_init<enum e_animation_channel_settings_flags, unsigned long, 2, struct s_default_enum_string_resolver>::set(enum e_animation_channel_settings_flags, bool);
// public: void c_flags_no_init<enum e_action_interruption_context, unsigned short, 2, struct s_default_enum_string_resolver>::clear(void);
// public: void c_flags_no_init<enum e_action_interruption_context, unsigned short, 2, struct s_default_enum_string_resolver>::set(enum e_action_interruption_context, bool);
// public: c_flags<enum e_action_interruption_context, unsigned short, 2, struct s_default_enum_string_resolver>::c_flags<enum e_action_interruption_context, unsigned short, 2, struct s_default_enum_string_resolver>(void);
// public: static bool c_flags_no_init<enum e_goal_settings_comparison_flags, unsigned long, 5, struct s_default_enum_string_resolver>::valid_bit(enum e_goal_settings_comparison_flags);
// private: static unsigned long c_flags_no_init<enum e_goal_settings_comparison_flags, unsigned long, 5, struct s_default_enum_string_resolver>::flag_size_type(enum e_goal_settings_comparison_flags);
// private: static unsigned long c_flags_no_init<enum e_goal_settings_comparison_flags, unsigned long, 5, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// public: bool c_flags_no_init<enum e_channel_settings_comparison_flags, unsigned long, 10, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: static bool c_flags_no_init<enum e_channel_settings_comparison_flags, unsigned long, 10, struct s_default_enum_string_resolver>::valid_bit(enum e_channel_settings_comparison_flags);
// private: static unsigned long c_flags_no_init<enum e_channel_settings_comparison_flags, unsigned long, 10, struct s_default_enum_string_resolver>::flag_size_type(enum e_channel_settings_comparison_flags);
// public: static bool c_flags_no_init<enum e_animation_channel_settings_flags, unsigned long, 2, struct s_default_enum_string_resolver>::valid_bit(enum e_animation_channel_settings_flags);
// private: static unsigned long c_flags_no_init<enum e_animation_channel_settings_flags, unsigned long, 2, struct s_default_enum_string_resolver>::flag_size_type(enum e_animation_channel_settings_flags);
// public: bool c_flags_no_init<enum e_action_interruption_context, unsigned short, 2, struct s_default_enum_string_resolver>::is_clear(void) const;
// private: static unsigned long c_flags_no_init<enum e_goal_settings_comparison_flags, unsigned long, 5, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_goal_settings_comparison_flags);
// private: static unsigned long c_flags_no_init<enum e_channel_settings_comparison_flags, unsigned long, 10, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned short c_flags_no_init<enum e_action_interruption_context, unsigned short, 2, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned long c_flags_no_init<enum e_channel_settings_comparison_flags, unsigned long, 10, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_channel_settings_comparison_flags);
// private: static unsigned short c_flags_no_init<enum e_action_interruption_context, unsigned short, 2, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_action_interruption_context);

//class c_animation_channel * motor_animation_resource_get_channel(long, enum e_motor_resource)
//{
//    mangled_ppc("?motor_animation_resource_get_channel@@YAPAVc_animation_channel@@JW4e_motor_resource@@@Z");
//};

//class c_animation_channel * motor_animation_task_get_channel(long, class c_motor_task const *)
//{
//    mangled_ppc("?motor_animation_task_get_channel@@YAPAVc_animation_channel@@JPBVc_motor_task@@@Z");
//};

//long motor_animation_get_state(long)
//{
//    mangled_ppc("?motor_animation_get_state@@YAJJ@Z");
//};

//bool motor_animation_get_mode_and_state(long, long *, long *)
//{
//    mangled_ppc("?motor_animation_get_mode_and_state@@YA_NJPAJ0@Z");
//};

//bool motor_animation_running(long, long)
//{
//    mangled_ppc("?motor_animation_running@@YA_NJJ@Z");
//};

//float motor_animation_get_animation_time(long, float *)
//{
//    mangled_ppc("?motor_animation_get_animation_time@@YAMJPAM@Z");
//};

//bool motor_animation_get_range(long, long, long, short, bool, float *)
//{
//    mangled_ppc("?motor_animation_get_range@@YA_NJJJF_NPAM@Z");
//};

//bool motor_animation_get_range(long, long, long, short, bool, float *, short *)
//{
//    mangled_ppc("?motor_animation_get_range@@YA_NJJJF_NPAMPAF@Z");
//};

//bool motor_animation_get_range(long, long, long, short, bool, float *, short *, float *, short *)
//{
//    mangled_ppc("?motor_animation_get_range@@YA_NJJJF_NPAMPAF12@Z");
//};

//enum e_unit_animation_key_frame_status motor_animation_get_ragdoll_keyframe_status(long)
//{
//    mangled_ppc("?motor_animation_get_ragdoll_keyframe_status@@YA?AW4e_unit_animation_key_frame_status@@J@Z");
//};

//bool motor_animation_test_mode(long, long)
//{
//    mangled_ppc("?motor_animation_test_mode@@YA_NJJ@Z");
//};

//bool motor_animation_test_mode(long, long, long, long)
//{
//    mangled_ppc("?motor_animation_test_mode@@YA_NJJJJ@Z");
//};

//bool motor_animation_test_bunker(long, enum e_bunker_direction, enum e_bunker_height, enum e_bunker_state)
//{
//    mangled_ppc("?motor_animation_test_bunker@@YA_NJW4e_bunker_direction@@W4e_bunker_height@@W4e_bunker_state@@@Z");
//};

//bool motor_animation_test_mode_and_impulse(long, long, long, long, long)
//{
//    mangled_ppc("?motor_animation_test_mode_and_impulse@@YA_NJJJJJ@Z");
//};

//bool motor_animation_test_mode_and_state(long, long, long)
//{
//    mangled_ppc("?motor_animation_test_mode_and_state@@YA_NJJJ@Z");
//};

//bool motor_animation_test_mode_and_state(long, long, long, long, long)
//{
//    mangled_ppc("?motor_animation_test_mode_and_state@@YA_NJJJJJ@Z");
//};

//bool motor_animation_validate_animation(long, long, long, bool *)
//{
//    mangled_ppc("?motor_animation_validate_animation@@YA_NJJJPA_N@Z");
//};

//bool motor_animation_action_loops(long, enum e_motor_resource)
//{
//    mangled_ppc("?motor_animation_action_loops@@YA_NJW4e_motor_resource@@@Z");
//};

//class c_motor_task * motor_animation_get_resource_owner(long, enum e_motor_resource)
//{
//    mangled_ppc("?motor_animation_get_resource_owner@@YAPAVc_motor_task@@JW4e_motor_resource@@@Z");
//};

//bool motor_animation_resource_busy(long, enum e_motor_resource)
//{
//    mangled_ppc("?motor_animation_resource_busy@@YA_NJW4e_motor_resource@@@Z");
//};

//void motor_interrupability(long, bool *, bool *)
//{
//    mangled_ppc("?motor_interrupability@@YAXJPA_N0@Z");
//};

//bool motor_animation_task_busy(long, class c_motor_task *, enum e_motor_resource, bool, bool)
//{
//    mangled_ppc("?motor_animation_task_busy@@YA_NJPAVc_motor_task@@W4e_motor_resource@@_N2@Z");
//};

//public: class c_flags<enum e_animation_frame_event_types, unsigned long, 23, struct s_default_enum_string_resolver> const & c_animation_channel::get_past_event_flags(void) const
//{
//    mangled_ppc("?get_past_event_flags@c_animation_channel@@QBAABV?$c_flags@W4e_animation_frame_event_types@@K$0BH@Us_default_enum_string_resolver@@@@XZ");
//};

//bool motor_animation_busy(long)
//{
//    mangled_ppc("?motor_animation_busy@@YA_NJ@Z");
//};

//bool motor_task_allow(long, enum e_action, short)
//{
//    mangled_ppc("?motor_task_allow@@YA_NJW4e_action@@F@Z");
//};

//void motor_task_build_context_for_action_interruption(long, enum e_motor_resource, enum e_action, class c_flags<enum e_action_interruption_context, unsigned short, 2, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("?motor_task_build_context_for_action_interruption@@YAXJW4e_motor_resource@@W4e_action@@PAV?$c_flags@W4e_action_interruption_context@@G$01Us_default_enum_string_resolver@@@@@Z");
//};

//void motor_task_interrupt(long, short, short)
//{
//    mangled_ppc("?motor_task_interrupt@@YAXJFF@Z");
//};

//bool motor_animation_set_mode_weapons_and_state(long, long, long, long, long, float, class c_flags<enum e_animation_state_change_flags, unsigned short, 16, struct s_default_enum_string_resolver>, class c_flags<enum e_animation_playback_flags, unsigned long, 18, struct s_default_enum_string_resolver>, bool)
//{
//    mangled_ppc("?motor_animation_set_mode_weapons_and_state@@YA_NJJJJJMV?$c_flags@W4e_animation_state_change_flags@@G$0BA@Us_default_enum_string_resolver@@@@V?$c_flags@W4e_animation_playback_flags@@K$0BC@Us_default_enum_string_resolver@@@@_N@Z");
//};

//bool motor_animation_set_mode_weapons_and_state(long, long, long, long, long, enum e_physics_animation_state, float, class c_flags<enum e_animation_state_change_flags, unsigned short, 16, struct s_default_enum_string_resolver>, class c_flags<enum e_animation_playback_flags, unsigned long, 18, struct s_default_enum_string_resolver>, bool)
//{
//    mangled_ppc("?motor_animation_set_mode_weapons_and_state@@YA_NJJJJJW4e_physics_animation_state@@MV?$c_flags@W4e_animation_state_change_flags@@G$0BA@Us_default_enum_string_resolver@@@@V?$c_flags@W4e_animation_playback_flags@@K$0BC@Us_default_enum_string_resolver@@@@_N@Z");
//};

//bool motor_animation_set_mode_and_state(long, long, long, float, class c_flags<enum e_animation_state_change_flags, unsigned short, 16, struct s_default_enum_string_resolver>, class c_flags<enum e_animation_playback_flags, unsigned long, 18, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?motor_animation_set_mode_and_state@@YA_NJJJMV?$c_flags@W4e_animation_state_change_flags@@G$0BA@Us_default_enum_string_resolver@@@@V?$c_flags@W4e_animation_playback_flags@@K$0BC@Us_default_enum_string_resolver@@@@@Z");
//};

//class c_motor_task * motor_task_new(long, enum e_motor_resource, long, long, enum e_motor_task, enum e_action)
//{
//    mangled_ppc("?motor_task_new@@YAPAVc_motor_task@@JW4e_motor_resource@@JJW4e_motor_task@@W4e_action@@@Z");
//};

//class c_motor_task * motor_task_get(long, enum e_motor_resource)
//{
//    mangled_ppc("?motor_task_get@@YAPAVc_motor_task@@JW4e_motor_resource@@@Z");
//};

//class c_motor_task const * motor_task_get_const(long, enum e_motor_resource)
//{
//    mangled_ppc("?motor_task_get_const@@YAPBVc_motor_task@@JW4e_motor_resource@@@Z");
//};

//class c_motor_task * motor_task_find(long, enum e_motor_task)
//{
//    mangled_ppc("?motor_task_find@@YAPAVc_motor_task@@JW4e_motor_task@@@Z");
//};

//class c_motor_task * motor_task_find_by_action(long, enum e_action)
//{
//    mangled_ppc("?motor_task_find_by_action@@YAPAVc_motor_task@@JW4e_action@@@Z");
//};

//enum e_motor_resource motor_task_get_resource(long, class c_motor_task const *)
//{
//    mangled_ppc("?motor_task_get_resource@@YA?AW4e_motor_resource@@JPBVc_motor_task@@@Z");
//};

//enum e_action motor_task_get_action_by_resource(long, enum e_motor_resource)
//{
//    mangled_ppc("?motor_task_get_action_by_resource@@YA?AW4e_action@@JW4e_motor_resource@@@Z");
//};

//bool motor_animation_fix_pill(long, long, long, bool)
//{
//    mangled_ppc("?motor_animation_fix_pill@@YA_NJJJ_N@Z");
//};

//long motor_animation_default_ground_mode(long)
//{
//    mangled_ppc("?motor_animation_default_ground_mode@@YAJJ@Z");
//};

//void motor_animation_posture_exit_end(long)
//{
//    mangled_ppc("?motor_animation_posture_exit_end@@YAXJ@Z");
//};

//void motor_animation_posture_exit_end(long, long, long)
//{
//    mangled_ppc("?motor_animation_posture_exit_end@@YAXJJJ@Z");
//};

//void motor_animation_posture_exit_end(long, long, long, long, long)
//{
//    mangled_ppc("?motor_animation_posture_exit_end@@YAXJJJJJ@Z");
//};

//void motor_animation_posture_exit_end(long, long, long, long, long, enum e_physics_animation_state)
//{
//    mangled_ppc("?motor_animation_posture_exit_end@@YAXJJJJJW4e_physics_animation_state@@@Z");
//};

//void motor_animation_enter_posture(long, union real_point3d const *, union vector3d const *, union vector3d const *, union real_point3d const *)
//{
//    mangled_ppc("?motor_animation_enter_posture@@YAXJPBTreal_point3d@@PBTvector3d@@10@Z");
//};

//public: class c_animation_id c_animation_manager::get_state_animation_id(void) const
//{
//    mangled_ppc("?get_state_animation_id@c_animation_manager@@QBA?AVc_animation_id@@XZ");
//};

//bool motor_animation_set_posture(long, long, long, bool, bool, union real_point3d const *, union vector3d const *, bool *)
//{
//    mangled_ppc("?motor_animation_set_posture@@YA_NJJJ_N0PBTreal_point3d@@PBTvector3d@@PA_N@Z");
//};

//class c_motor_task * motor_task_set_posture(long, enum e_motor_task, enum e_action, long, long, bool, bool, union real_point3d const *, union vector3d const *, short, bool, bool *, bool *)
//{
//    mangled_ppc("?motor_task_set_posture@@YAPAVc_motor_task@@JW4e_motor_task@@W4e_action@@JJ_N2PBTreal_point3d@@PBTvector3d@@F2PA_N5@Z");
//};

//bool motor_task_enter_seat_internal(long, long, short, bool, long, bool *, bool, bool, bool)
//{
//    mangled_ppc("?motor_task_enter_seat_internal@@YA_NJJF_NJPA_N000@Z");
//};

//void motor_animation_unit_entry_finished(long, long)
//{
//    mangled_ppc("?motor_animation_unit_entry_finished@@YAXJJ@Z");
//};

//class c_motor_task * motor_task_enter_seat(long, enum e_motor_task, enum e_action, long, short, bool, bool *, bool, bool, bool)
//{
//    mangled_ppc("?motor_task_enter_seat@@YAPAVc_motor_task@@JW4e_motor_task@@W4e_action@@JF_NPA_N222@Z");
//};

//void motor_animation_exit_seat_immediate(long, bool, bool, bool, bool, enum e_motor_program *)
//{
//    mangled_ppc("?motor_animation_exit_seat_immediate@@YAXJ_N000PAW4e_motor_program@@@Z");
//};

//void motor_animation_exit_seat_immediate_internal(long, bool, bool, bool, enum e_motor_program *)
//{
//    mangled_ppc("?motor_animation_exit_seat_immediate_internal@@YAXJ_N00PAW4e_motor_program@@@Z");
//};

//class c_motor_task * motor_task_exit_seat(long, enum e_motor_task, enum e_action, bool)
//{
//    mangled_ppc("?motor_task_exit_seat@@YAPAVc_motor_task@@JW4e_motor_task@@W4e_action@@_N@Z");
//};

//bool motor_animation_exit_seat_internal(long, long, bool *)
//{
//    mangled_ppc("?motor_animation_exit_seat_internal@@YA_NJJPA_N@Z");
//};

//class c_motor_task * motor_task_set_mode_and_state(long, enum e_motor_task, enum e_action, long, long, float, short, class c_flags<enum e_animation_state_change_flags, unsigned short, 16, struct s_default_enum_string_resolver>, class c_flags<enum e_animation_playback_flags, unsigned long, 18, struct s_default_enum_string_resolver>, bool)
//{
//    mangled_ppc("?motor_task_set_mode_and_state@@YAPAVc_motor_task@@JW4e_motor_task@@W4e_action@@JJMFV?$c_flags@W4e_animation_state_change_flags@@G$0BA@Us_default_enum_string_resolver@@@@V?$c_flags@W4e_animation_playback_flags@@K$0BC@Us_default_enum_string_resolver@@@@_N@Z");
//};

//class c_motor_task * motor_task_start_animation(long, enum e_motor_task, enum e_action, long, float, bool)
//{
//    mangled_ppc("?motor_task_start_animation@@YAPAVc_motor_task@@JW4e_motor_task@@W4e_action@@JM_N@Z");
//};

//class c_motor_task * motor_task_start_animation(long, enum e_motor_task, enum e_action, long, long, enum e_unit_weapon_config, float, bool)
//{
//    mangled_ppc("?motor_task_start_animation@@YAPAVc_motor_task@@JW4e_motor_task@@W4e_action@@JJW4e_unit_weapon_config@@M_N@Z");
//};

//class c_motor_task * motor_task_start_animation(long, enum e_motor_task, enum e_action, long, long, enum e_unit_weapon_config, short, float, bool)
//{
//    mangled_ppc("?motor_task_start_animation@@YAPAVc_motor_task@@JW4e_motor_task@@W4e_action@@JJW4e_unit_weapon_config@@FM_N@Z");
//};

//bool motor_task_recursive_start_animation(long, enum e_motor_task, enum e_action, long, bool)
//{
//    mangled_ppc("?motor_task_recursive_start_animation@@YA_NJW4e_motor_task@@W4e_action@@J_N@Z");
//};

//class c_motor_task * motor_task_set_ping(long, enum e_motor_task, enum e_action, enum e_motor_resource, long, long, long, short, short, short *, short *)
//{
//    mangled_ppc("?motor_task_set_ping@@YAPAVc_motor_task@@JW4e_motor_task@@W4e_action@@W4e_motor_resource@@JJJFFPAF3@Z");
//};

//class c_motor_task * motor_task_start_custom_animation(long, enum e_motor_task, enum e_action, long, long, bool, bool)
//{
//    mangled_ppc("?motor_task_start_custom_animation@@YAPAVc_motor_task@@JW4e_motor_task@@W4e_action@@JJ_N2@Z");
//};

//bool motor_animation_build_state_change_settings_from_control_data(long, struct s_animation_control_data const *, struct s_state_changes_requested *, struct s_animation_state_change_settings *)
//{
//    mangled_ppc("?motor_animation_build_state_change_settings_from_control_data@@YA_NJPBUs_animation_control_data@@PAUs_state_changes_requested@@PAUs_animation_state_change_settings@@@Z");
//};

//public: short c_model_animation::get_loop_frame_index(void) const
//{
//    mangled_ppc("?get_loop_frame_index@c_model_animation@@QBAFXZ");
//};

//public: class c_flags<enum e_animation_playback_flags, unsigned long, 18, struct s_default_enum_string_resolver> const & c_channel_base::get_playback_flags(void) const
//{
//    mangled_ppc("?get_playback_flags@c_channel_base@@QBAABV?$c_flags@W4e_animation_playback_flags@@K$0BC@Us_default_enum_string_resolver@@@@XZ");
//};

//public: long s_animation_control_data::get_state_desired(void) const
//{
//    mangled_ppc("?get_state_desired@s_animation_control_data@@QBAJXZ");
//};

//public: enum e_physics_animation_state s_animation_control_data::get_physics_state_desired(void) const
//{
//    mangled_ppc("?get_physics_state_desired@s_animation_control_data@@QBA?AW4e_physics_animation_state@@XZ");
//};

//public: bool s_animation_control_data::is_state_desired_valid(void) const
//{
//    mangled_ppc("?is_state_desired_valid@s_animation_control_data@@QBA_NXZ");
//};

//public: bool s_animation_state_change_settings::compare_settings(struct s_animation_state_change_settings const &, struct s_state_changes_requested *) const
//{
//    mangled_ppc("?compare_settings@s_animation_state_change_settings@@QBA_NABU1@PAUs_state_changes_requested@@@Z");
//};

//public: class c_flags<enum e_channel_settings_comparison_flags, unsigned long, 10, struct s_default_enum_string_resolver> c_animation_channel_settings::compare_settings(class c_animation_channel_settings const &) const
//{
//    mangled_ppc("?compare_settings@c_animation_channel_settings@@QBA?AV?$c_flags@W4e_channel_settings_comparison_flags@@K$09Us_default_enum_string_resolver@@@@ABV1@@Z");
//};

//public: bool c_animation_id::operator!=(class c_animation_id const &) const
//{
//    mangled_ppc("??9c_animation_id@@QBA_NABV0@@Z");
//};

//public: class c_flags<enum e_channel_settings_comparison_flags, unsigned long, 10, struct s_default_enum_string_resolver> c_base_channel_settings::compare_base_settings(class c_base_channel_settings const &) const
//{
//    mangled_ppc("?compare_base_settings@c_base_channel_settings@@QBA?AV?$c_flags@W4e_channel_settings_comparison_flags@@K$09Us_default_enum_string_resolver@@@@ABV1@@Z");
//};

//public: class c_flags<enum e_goal_settings_comparison_flags, unsigned long, 5, struct s_default_enum_string_resolver> s_animation_goal_settings::compare_goals(struct s_animation_goal_settings const &) const
//{
//    mangled_ppc("?compare_goals@s_animation_goal_settings@@QBA?AV?$c_flags@W4e_goal_settings_comparison_flags@@K$04Us_default_enum_string_resolver@@@@ABU1@@Z");
//};

//public: bool s_animation_state_change_settings::changes_should_interpolate(struct s_animation_state_change_settings const &) const
//{
//    mangled_ppc("?changes_should_interpolate@s_animation_state_change_settings@@QBA_NABU1@@Z");
//};

//public: s_state_changes_requested::s_state_changes_requested(void)
//{
//    mangled_ppc("??0s_state_changes_requested@@QAA@XZ");
//};

//bool motor_animation_recommend_state_change_settings(long, long, long, long, long, float, class c_flags<enum e_animation_state_change_flags, unsigned short, 16, struct s_default_enum_string_resolver>, class c_flags<enum e_animation_playback_flags, unsigned long, 18, struct s_default_enum_string_resolver>, bool, struct s_animation_state_change_settings *)
//{
//    mangled_ppc("?motor_animation_recommend_state_change_settings@@YA_NJJJJJMV?$c_flags@W4e_animation_state_change_flags@@G$0BA@Us_default_enum_string_resolver@@@@V?$c_flags@W4e_animation_playback_flags@@K$0BC@Us_default_enum_string_resolver@@@@_NPAUs_animation_state_change_settings@@@Z");
//};

//bool motor_animation_recommend_state_change_settings(long, long, long, long, long, enum e_physics_animation_state, float, class c_flags<enum e_animation_state_change_flags, unsigned short, 16, struct s_default_enum_string_resolver>, class c_flags<enum e_animation_playback_flags, unsigned long, 18, struct s_default_enum_string_resolver>, bool, struct s_animation_state_change_settings *)
//{
//    mangled_ppc("?motor_animation_recommend_state_change_settings@@YA_NJJJJJW4e_physics_animation_state@@MV?$c_flags@W4e_animation_state_change_flags@@G$0BA@Us_default_enum_string_resolver@@@@V?$c_flags@W4e_animation_playback_flags@@K$0BC@Us_default_enum_string_resolver@@@@_NPAUs_animation_state_change_settings@@@Z");
//};

//bool motor_animation_execute_state_change_settings(long, struct s_animation_state_change_settings const *, bool)
//{
//    mangled_ppc("?motor_animation_execute_state_change_settings@@YA_NJPBUs_animation_state_change_settings@@_N@Z");
//};

//void motor_animation_update_impulses_on_mode_change(long)
//{
//    mangled_ppc("?motor_animation_update_impulses_on_mode_change@@YAXJ@Z");
//};

//class c_motor_task * motor_task_execute_state_change_settings(long, enum e_motor_task, enum e_action, struct s_animation_state_change_settings const *, short, bool)
//{
//    mangled_ppc("?motor_task_execute_state_change_settings@@YAPAVc_motor_task@@JW4e_motor_task@@W4e_action@@PBUs_animation_state_change_settings@@F_N@Z");
//};

//bool motor_program_execute_state_change_settings(long, struct s_animation_state_change_settings const *, bool)
//{
//    mangled_ppc("?motor_program_execute_state_change_settings@@YA_NJPBUs_animation_state_change_settings@@_N@Z");
//};

//void motor_animation_update_analog_blending(long)
//{
//    mangled_ppc("?motor_animation_update_analog_blending@@YAXJ@Z");
//};

//bool motor_animation_update_gait_for_active_channel(long)
//{
//    mangled_ppc("?motor_animation_update_gait_for_active_channel@@YA_NJ@Z");
//};

//bool is_physics_animation_state_turning(enum e_physics_animation_state)
//{
//    mangled_ppc("?is_physics_animation_state_turning@@YA_NW4e_physics_animation_state@@@Z");
//};

//void motor_animation_inherit_animation_orientation(long)
//{
//    mangled_ppc("?motor_animation_inherit_animation_orientation@@YAXJ@Z");
//};

//public: enum e_animation_types c_enum_no_init<enum e_animation_types, char, 0, 4, struct s_default_enum_string_resolver>::operator enum e_animation_types(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_animation_types@@D$0A@$03Us_default_enum_string_resolver@@@@QBA?AW4e_animation_types@@XZ");
//};

//public: enum e_animation_graph_location c_enum_no_init<enum e_animation_graph_location, char, 0, 9, struct s_default_enum_string_resolver>::operator enum e_animation_graph_location(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_animation_graph_location@@D$0A@$08Us_default_enum_string_resolver@@@@QBA?AW4e_animation_graph_location@@XZ");
//};

//public: void c_flags_no_init<enum e_goal_settings_comparison_flags, unsigned long, 5, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_goal_settings_comparison_flags@@K$04Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_goal_settings_comparison_flags, unsigned long, 5, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_goal_settings_comparison_flags@@K$04Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: bool c_flags_no_init<enum e_goal_settings_comparison_flags, unsigned long, 5, struct s_default_enum_string_resolver>::test(enum e_goal_settings_comparison_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_goal_settings_comparison_flags@@K$04Us_default_enum_string_resolver@@@@QBA_NW4e_goal_settings_comparison_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_goal_settings_comparison_flags, unsigned long, 5, struct s_default_enum_string_resolver>::set(enum e_goal_settings_comparison_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_goal_settings_comparison_flags@@K$04Us_default_enum_string_resolver@@@@QAAXW4e_goal_settings_comparison_flags@@_N@Z");
//};

//public: unsigned long c_flags_no_init<enum e_goal_settings_comparison_flags, unsigned long, 5, struct s_default_enum_string_resolver>::get_unsafe(void) const
//{
//    mangled_ppc("?get_unsafe@?$c_flags_no_init@W4e_goal_settings_comparison_flags@@K$04Us_default_enum_string_resolver@@@@QBAKXZ");
//};

//public: c_flags<enum e_goal_settings_comparison_flags, unsigned long, 5, struct s_default_enum_string_resolver>::c_flags<enum e_goal_settings_comparison_flags, unsigned long, 5, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_goal_settings_comparison_flags@@K$04Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: void c_flags_no_init<enum e_channel_settings_comparison_flags, unsigned long, 10, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_channel_settings_comparison_flags@@K$09Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: void c_flags_no_init<enum e_channel_settings_comparison_flags, unsigned long, 10, struct s_default_enum_string_resolver>::set(enum e_channel_settings_comparison_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_channel_settings_comparison_flags@@K$09Us_default_enum_string_resolver@@@@QAAXW4e_channel_settings_comparison_flags@@_N@Z");
//};

//public: unsigned long c_flags_no_init<enum e_channel_settings_comparison_flags, unsigned long, 10, struct s_default_enum_string_resolver>::get_unsafe(void) const
//{
//    mangled_ppc("?get_unsafe@?$c_flags_no_init@W4e_channel_settings_comparison_flags@@K$09Us_default_enum_string_resolver@@@@QBAKXZ");
//};

//public: c_flags<enum e_channel_settings_comparison_flags, unsigned long, 10, struct s_default_enum_string_resolver>::c_flags<enum e_channel_settings_comparison_flags, unsigned long, 10, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_channel_settings_comparison_flags@@K$09Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: bool c_flags_no_init<enum e_animation_state_change_flags, unsigned short, 16, struct s_default_enum_string_resolver>::test(enum e_animation_state_change_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_animation_state_change_flags@@G$0BA@Us_default_enum_string_resolver@@@@QBA_NW4e_animation_state_change_flags@@@Z");
//};

//public: bool c_flags_no_init<enum e_animation_channel_settings_flags, unsigned long, 2, struct s_default_enum_string_resolver>::test(enum e_animation_channel_settings_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_animation_channel_settings_flags@@K$01Us_default_enum_string_resolver@@@@QBA_NW4e_animation_channel_settings_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_animation_channel_settings_flags, unsigned long, 2, struct s_default_enum_string_resolver>::set(enum e_animation_channel_settings_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_animation_channel_settings_flags@@K$01Us_default_enum_string_resolver@@@@QAAXW4e_animation_channel_settings_flags@@_N@Z");
//};

//public: void c_flags_no_init<enum e_action_interruption_context, unsigned short, 2, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_action_interruption_context@@G$01Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: void c_flags_no_init<enum e_action_interruption_context, unsigned short, 2, struct s_default_enum_string_resolver>::set(enum e_action_interruption_context, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_action_interruption_context@@G$01Us_default_enum_string_resolver@@@@QAAXW4e_action_interruption_context@@_N@Z");
//};

//public: c_flags<enum e_action_interruption_context, unsigned short, 2, struct s_default_enum_string_resolver>::c_flags<enum e_action_interruption_context, unsigned short, 2, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_action_interruption_context@@G$01Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: static bool c_flags_no_init<enum e_goal_settings_comparison_flags, unsigned long, 5, struct s_default_enum_string_resolver>::valid_bit(enum e_goal_settings_comparison_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_goal_settings_comparison_flags@@K$04Us_default_enum_string_resolver@@@@SA_NW4e_goal_settings_comparison_flags@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_goal_settings_comparison_flags, unsigned long, 5, struct s_default_enum_string_resolver>::flag_size_type(enum e_goal_settings_comparison_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_goal_settings_comparison_flags@@K$04Us_default_enum_string_resolver@@@@CAKW4e_goal_settings_comparison_flags@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_goal_settings_comparison_flags, unsigned long, 5, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_goal_settings_comparison_flags@@K$04Us_default_enum_string_resolver@@@@CAKXZ");
//};

//public: bool c_flags_no_init<enum e_channel_settings_comparison_flags, unsigned long, 10, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_channel_settings_comparison_flags@@K$09Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static bool c_flags_no_init<enum e_channel_settings_comparison_flags, unsigned long, 10, struct s_default_enum_string_resolver>::valid_bit(enum e_channel_settings_comparison_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_channel_settings_comparison_flags@@K$09Us_default_enum_string_resolver@@@@SA_NW4e_channel_settings_comparison_flags@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_channel_settings_comparison_flags, unsigned long, 10, struct s_default_enum_string_resolver>::flag_size_type(enum e_channel_settings_comparison_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_channel_settings_comparison_flags@@K$09Us_default_enum_string_resolver@@@@CAKW4e_channel_settings_comparison_flags@@@Z");
//};

//public: static bool c_flags_no_init<enum e_animation_channel_settings_flags, unsigned long, 2, struct s_default_enum_string_resolver>::valid_bit(enum e_animation_channel_settings_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_animation_channel_settings_flags@@K$01Us_default_enum_string_resolver@@@@SA_NW4e_animation_channel_settings_flags@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_animation_channel_settings_flags, unsigned long, 2, struct s_default_enum_string_resolver>::flag_size_type(enum e_animation_channel_settings_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_animation_channel_settings_flags@@K$01Us_default_enum_string_resolver@@@@CAKW4e_animation_channel_settings_flags@@@Z");
//};

//public: bool c_flags_no_init<enum e_action_interruption_context, unsigned short, 2, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_action_interruption_context@@G$01Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//private: static unsigned long c_flags_no_init<enum e_goal_settings_comparison_flags, unsigned long, 5, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_goal_settings_comparison_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_goal_settings_comparison_flags@@K$04Us_default_enum_string_resolver@@@@CAKW4e_goal_settings_comparison_flags@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_channel_settings_comparison_flags, unsigned long, 10, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_channel_settings_comparison_flags@@K$09Us_default_enum_string_resolver@@@@CAKXZ");
//};

//private: static unsigned short c_flags_no_init<enum e_action_interruption_context, unsigned short, 2, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_action_interruption_context@@G$01Us_default_enum_string_resolver@@@@CAGXZ");
//};

//private: static unsigned long c_flags_no_init<enum e_channel_settings_comparison_flags, unsigned long, 10, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_channel_settings_comparison_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_channel_settings_comparison_flags@@K$09Us_default_enum_string_resolver@@@@CAKW4e_channel_settings_comparison_flags@@@Z");
//};

//private: static unsigned short c_flags_no_init<enum e_action_interruption_context, unsigned short, 2, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_action_interruption_context)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_action_interruption_context@@G$01Us_default_enum_string_resolver@@@@CAGW4e_action_interruption_context@@@Z");
//};

