/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// bool apply_node_velocities_to_ragdoll; // "?apply_node_velocities_to_ragdoll@@3_NA"
// bool ragdoll_immediately_on_death; // "?ragdoll_immediately_on_death@@3_NA"
// bool biped_relaxation_pose_disabled; // "?biped_relaxation_pose_disabled@@3_NA"
// class c_motor_program_definition biped_dead_program_definition; // "?biped_dead_program_definition@@3Vc_motor_program_definition@@A"

// public: enum e_biped_relaxation_state c_biped_dead_state::get_relaxation_state(void) const;
// public: long c_biped_dead_state::get_relaxation_state_change_time(void) const;
// public: void c_biped_dead_state::set_relaxation_state(enum e_biped_relaxation_state);
// public: void c_biped_dead_state::update_ragdoll_keyframe(long);
// public: short c_animation_id::get_index(void) const;
// public: short c_animation_id::get_subgraph(void) const;
// public: enum e_unit_animation_key_frame_status c_biped_dead_state::get_ragdoll_keyframe_status(long) const;
// public: void c_biped_dead_state::compute_ragdoll_keyframe_time(long);
// enum e_motor_result biped_relaxation_pose_rebuild(long, class c_motor_request_base const *);
// enum e_motor_result biped_dead_handle_simulation_warp(long, class c_motor_request_base const *);
// enum e_motor_result biped_dead_force_airborne_submit(long, class c_motor_request_base const *);
// enum e_motor_result biped_dead_force_relaxation_state_submit(long, class c_motor_request_base const *);
// enum e_motor_result biped_dead_resurrect_submit(long, class c_motor_request_base const *);
// bool biped_dead_resurrect_finished(long, class c_motor_task *);
// enum e_motor_result biped_dead_execute_death_program_submit(long, class c_motor_request_base const *);
// void biped_death_program_selector_debug_render(long);
// void biped_exit_relaxation(long, bool);
// bool biped_start_relaxation(long, bool);
// void biped_update_constraint_limits(long);
// bool biped_start_relaxation_if_possible(long, bool);
// bool biped_should_relax_grounded_biped(long);
// void biped_apply_node_velocities_to_rigid_bodies(long, struct real_matrix4x3const *, long);
// void biped_initialize_head_shot_death(long, long, union vector3d const *, float);
// void biped_initialize_melee_death(long, long, union vector3d const *, float);
// void biped_initialize_standard_death(long, long, union vector3d const *, float);
// void biped_relaxation_finish(long);
// void biped_relaxation_calculate_object_relative_safe_position(long);
// void biped_dead_force_airborne(long);
// void biped_relaxation_debug_render_main_thread(long);
// void biped_relaxation_debug_render(long);
// public: void c_render_debug_line_drawer::enable_zbuffer(bool);
// void biped_relaxation_pose_update_scale(long);
// void biped_relaxation_pose_set(long, enum e_biped_relaxation_pose);
// enum e_biped_relaxation_pose biped_relaxation_calculate_best_relaxation_pose(long);
// void biped_keyframe_ragdoll_motors_to_nodes(long);
// public: struct s_physics_model_constraint_reference c_havok_component::get_physics_model_constraint_reference(long) const;
// public: bool c_havok_component::is_constraint_powered(long) const;
// public: enum e_physics_model_constraint_type c_havok_component::c_constraint::get_constraint_type(void) const;
// public: bool c_havok_component::c_constraint::is_powered(void) const;
// public: long c_havok_component::c_constraint::get_constraint_type_index(void) const;
// void biped_notify_game_ragdoll_allocation_state_change(long, class c_biped_dead_state *, bool);
// bool biped_dead_in_airborne_state(long);
// bool biped_dead_is_super_collidable_ragdoll(long);
// public: bool c_static_stack<short, 16>::full(void) const;
// public: long c_static_stack<short, 16>::count(void) const;
// public: void c_static_stack<short, 16>::push_back(short const &);
// public: short & c_static_stack<short, 16>::operator[](long);
// public: c_static_stack<short, 16>::c_static_stack<short, 16>(void);
// public: bool c_static_stack<short, 16>::valid(void) const;
// public: bool c_static_stack<short, 16>::valid(long) const;
// public: long c_static_stack<short, 16>::push(void);
// public: short * c_static_stack<short, 16>::get(long);
// public: bool c_flags_no_init<enum c_biped_dead_state::e_flag, unsigned long, 5, struct s_default_enum_string_resolver>::test(enum c_biped_dead_state::e_flag) const;
// public: void c_flags_no_init<enum c_biped_dead_state::e_flag, unsigned long, 5, struct s_default_enum_string_resolver>::set(enum c_biped_dead_state::e_flag, bool);
// public: static bool c_flags_no_init<enum c_biped_dead_state::e_flag, unsigned long, 5, struct s_default_enum_string_resolver>::valid_bit(enum c_biped_dead_state::e_flag);
// private: static unsigned long c_flags_no_init<enum c_biped_dead_state::e_flag, unsigned long, 5, struct s_default_enum_string_resolver>::flag_size_type(enum c_biped_dead_state::e_flag);
// bool biped_dead_activate(long);
// void biped_dead_deactivate(long);
// void biped_dead_delete(long);
// bool biped_dead_update(long);
// void biped_update_ragdoll(long);
// bool biped_update_relaxation(long);
// void biped_dead_motor_program_early_mover_localize_callback(long);
// void biped_update_out_of_map_status(long);
// bool biped_dead_update_animation(long, struct s_animation_control_data *, struct s_character_physics_update_input_datum *);
// public: s_character_physics_update_input_datum::s_character_physics_update_input_datum(void);
// public: s_character_physics_update_input_datum::~s_character_physics_update_input_datum(void);
// public: s_character_physics_update_input_datum::s_sentinel::s_sentinel(void);
// public: s_character_physics_update_input_datum::s_sentinel::~s_sentinel(void);
// enum e_motor_program biped_dead_move(long);
// void biped_relaxation_pose_update(long);
// short biped_dead_relaxation_state(long);
// public: void c_flags_no_init<enum c_biped_dead_state::e_flag, unsigned long, 5, struct s_default_enum_string_resolver>::clear(void);

//public: enum e_biped_relaxation_state c_biped_dead_state::get_relaxation_state(void) const
//{
//    mangled_ppc("?get_relaxation_state@c_biped_dead_state@@QBA?AW4e_biped_relaxation_state@@XZ");
//};

//public: long c_biped_dead_state::get_relaxation_state_change_time(void) const
//{
//    mangled_ppc("?get_relaxation_state_change_time@c_biped_dead_state@@QBAJXZ");
//};

//public: void c_biped_dead_state::set_relaxation_state(enum e_biped_relaxation_state)
//{
//    mangled_ppc("?set_relaxation_state@c_biped_dead_state@@QAAXW4e_biped_relaxation_state@@@Z");
//};

//public: void c_biped_dead_state::update_ragdoll_keyframe(long)
//{
//    mangled_ppc("?update_ragdoll_keyframe@c_biped_dead_state@@QAAXJ@Z");
//};

//public: short c_animation_id::get_index(void) const
//{
//    mangled_ppc("?get_index@c_animation_id@@QBAFXZ");
//};

//public: short c_animation_id::get_subgraph(void) const
//{
//    mangled_ppc("?get_subgraph@c_animation_id@@QBAFXZ");
//};

//public: enum e_unit_animation_key_frame_status c_biped_dead_state::get_ragdoll_keyframe_status(long) const
//{
//    mangled_ppc("?get_ragdoll_keyframe_status@c_biped_dead_state@@QBA?AW4e_unit_animation_key_frame_status@@J@Z");
//};

//public: void c_biped_dead_state::compute_ragdoll_keyframe_time(long)
//{
//    mangled_ppc("?compute_ragdoll_keyframe_time@c_biped_dead_state@@QAAXJ@Z");
//};

//enum e_motor_result biped_relaxation_pose_rebuild(long, class c_motor_request_base const *)
//{
//    mangled_ppc("?biped_relaxation_pose_rebuild@@YA?AW4e_motor_result@@JPBVc_motor_request_base@@@Z");
//};

//enum e_motor_result biped_dead_handle_simulation_warp(long, class c_motor_request_base const *)
//{
//    mangled_ppc("?biped_dead_handle_simulation_warp@@YA?AW4e_motor_result@@JPBVc_motor_request_base@@@Z");
//};

//enum e_motor_result biped_dead_force_airborne_submit(long, class c_motor_request_base const *)
//{
//    mangled_ppc("?biped_dead_force_airborne_submit@@YA?AW4e_motor_result@@JPBVc_motor_request_base@@@Z");
//};

//enum e_motor_result biped_dead_force_relaxation_state_submit(long, class c_motor_request_base const *)
//{
//    mangled_ppc("?biped_dead_force_relaxation_state_submit@@YA?AW4e_motor_result@@JPBVc_motor_request_base@@@Z");
//};

//enum e_motor_result biped_dead_resurrect_submit(long, class c_motor_request_base const *)
//{
//    mangled_ppc("?biped_dead_resurrect_submit@@YA?AW4e_motor_result@@JPBVc_motor_request_base@@@Z");
//};

//bool biped_dead_resurrect_finished(long, class c_motor_task *)
//{
//    mangled_ppc("?biped_dead_resurrect_finished@@YA_NJPAVc_motor_task@@@Z");
//};

//enum e_motor_result biped_dead_execute_death_program_submit(long, class c_motor_request_base const *)
//{
//    mangled_ppc("?biped_dead_execute_death_program_submit@@YA?AW4e_motor_result@@JPBVc_motor_request_base@@@Z");
//};

//void biped_death_program_selector_debug_render(long)
//{
//    mangled_ppc("?biped_death_program_selector_debug_render@@YAXJ@Z");
//};

//void biped_exit_relaxation(long, bool)
//{
//    mangled_ppc("?biped_exit_relaxation@@YAXJ_N@Z");
//};

//bool biped_start_relaxation(long, bool)
//{
//    mangled_ppc("?biped_start_relaxation@@YA_NJ_N@Z");
//};

//void biped_update_constraint_limits(long)
//{
//    mangled_ppc("?biped_update_constraint_limits@@YAXJ@Z");
//};

//bool biped_start_relaxation_if_possible(long, bool)
//{
//    mangled_ppc("?biped_start_relaxation_if_possible@@YA_NJ_N@Z");
//};

//bool biped_should_relax_grounded_biped(long)
//{
//    mangled_ppc("?biped_should_relax_grounded_biped@@YA_NJ@Z");
//};

//void biped_apply_node_velocities_to_rigid_bodies(long, struct real_matrix4x3const *, long)
//{
//    mangled_ppc("?biped_apply_node_velocities_to_rigid_bodies@@YAXJPBUreal_matrix4x3@@J@Z");
//};

//void biped_initialize_head_shot_death(long, long, union vector3d const *, float)
//{
//    mangled_ppc("?biped_initialize_head_shot_death@@YAXJJPBTvector3d@@M@Z");
//};

//void biped_initialize_melee_death(long, long, union vector3d const *, float)
//{
//    mangled_ppc("?biped_initialize_melee_death@@YAXJJPBTvector3d@@M@Z");
//};

//void biped_initialize_standard_death(long, long, union vector3d const *, float)
//{
//    mangled_ppc("?biped_initialize_standard_death@@YAXJJPBTvector3d@@M@Z");
//};

//void biped_relaxation_finish(long)
//{
//    mangled_ppc("?biped_relaxation_finish@@YAXJ@Z");
//};

//void biped_relaxation_calculate_object_relative_safe_position(long)
//{
//    mangled_ppc("?biped_relaxation_calculate_object_relative_safe_position@@YAXJ@Z");
//};

//void biped_dead_force_airborne(long)
//{
//    mangled_ppc("?biped_dead_force_airborne@@YAXJ@Z");
//};

//void biped_relaxation_debug_render_main_thread(long)
//{
//    mangled_ppc("?biped_relaxation_debug_render_main_thread@@YAXJ@Z");
//};

//void biped_relaxation_debug_render(long)
//{
//    mangled_ppc("?biped_relaxation_debug_render@@YAXJ@Z");
//};

//public: void c_render_debug_line_drawer::enable_zbuffer(bool)
//{
//    mangled_ppc("?enable_zbuffer@c_render_debug_line_drawer@@QAAX_N@Z");
//};

//void biped_relaxation_pose_update_scale(long)
//{
//    mangled_ppc("?biped_relaxation_pose_update_scale@@YAXJ@Z");
//};

//void biped_relaxation_pose_set(long, enum e_biped_relaxation_pose)
//{
//    mangled_ppc("?biped_relaxation_pose_set@@YAXJW4e_biped_relaxation_pose@@@Z");
//};

//enum e_biped_relaxation_pose biped_relaxation_calculate_best_relaxation_pose(long)
//{
//    mangled_ppc("?biped_relaxation_calculate_best_relaxation_pose@@YA?AW4e_biped_relaxation_pose@@J@Z");
//};

//void biped_keyframe_ragdoll_motors_to_nodes(long)
//{
//    mangled_ppc("?biped_keyframe_ragdoll_motors_to_nodes@@YAXJ@Z");
//};

//public: struct s_physics_model_constraint_reference c_havok_component::get_physics_model_constraint_reference(long) const
//{
//    mangled_ppc("?get_physics_model_constraint_reference@c_havok_component@@QBA?AUs_physics_model_constraint_reference@@J@Z");
//};

//public: bool c_havok_component::is_constraint_powered(long) const
//{
//    mangled_ppc("?is_constraint_powered@c_havok_component@@QBA_NJ@Z");
//};

//public: enum e_physics_model_constraint_type c_havok_component::c_constraint::get_constraint_type(void) const
//{
//    mangled_ppc("?get_constraint_type@c_constraint@c_havok_component@@QBA?AW4e_physics_model_constraint_type@@XZ");
//};

//public: bool c_havok_component::c_constraint::is_powered(void) const
//{
//    mangled_ppc("?is_powered@c_constraint@c_havok_component@@QBA_NXZ");
//};

//public: long c_havok_component::c_constraint::get_constraint_type_index(void) const
//{
//    mangled_ppc("?get_constraint_type_index@c_constraint@c_havok_component@@QBAJXZ");
//};

//void biped_notify_game_ragdoll_allocation_state_change(long, class c_biped_dead_state *, bool)
//{
//    mangled_ppc("?biped_notify_game_ragdoll_allocation_state_change@@YAXJPAVc_biped_dead_state@@_N@Z");
//};

//bool biped_dead_in_airborne_state(long)
//{
//    mangled_ppc("?biped_dead_in_airborne_state@@YA_NJ@Z");
//};

//bool biped_dead_is_super_collidable_ragdoll(long)
//{
//    mangled_ppc("?biped_dead_is_super_collidable_ragdoll@@YA_NJ@Z");
//};

//public: bool c_static_stack<short, 16>::full(void) const
//{
//    mangled_ppc("?full@?$c_static_stack@F$0BA@@@QBA_NXZ");
//};

//public: long c_static_stack<short, 16>::count(void) const
//{
//    mangled_ppc("?count@?$c_static_stack@F$0BA@@@QBAJXZ");
//};

//public: void c_static_stack<short, 16>::push_back(short const &)
//{
//    mangled_ppc("?push_back@?$c_static_stack@F$0BA@@@QAAXABF@Z");
//};

//public: short & c_static_stack<short, 16>::operator[](long)
//{
//    mangled_ppc("??A?$c_static_stack@F$0BA@@@QAAAAFJ@Z");
//};

//public: c_static_stack<short, 16>::c_static_stack<short, 16>(void)
//{
//    mangled_ppc("??0?$c_static_stack@F$0BA@@@QAA@XZ");
//};

//public: bool c_static_stack<short, 16>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@F$0BA@@@QBA_NXZ");
//};

//public: bool c_static_stack<short, 16>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@F$0BA@@@QBA_NJ@Z");
//};

//public: long c_static_stack<short, 16>::push(void)
//{
//    mangled_ppc("?push@?$c_static_stack@F$0BA@@@QAAJXZ");
//};

//public: short * c_static_stack<short, 16>::get(long)
//{
//    mangled_ppc("?get@?$c_static_stack@F$0BA@@@QAAPAFJ@Z");
//};

//public: bool c_flags_no_init<enum c_biped_dead_state::e_flag, unsigned long, 5, struct s_default_enum_string_resolver>::test(enum c_biped_dead_state::e_flag) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_flag@c_biped_dead_state@@K$04Us_default_enum_string_resolver@@@@QBA_NW4e_flag@c_biped_dead_state@@@Z");
//};

//public: void c_flags_no_init<enum c_biped_dead_state::e_flag, unsigned long, 5, struct s_default_enum_string_resolver>::set(enum c_biped_dead_state::e_flag, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_flag@c_biped_dead_state@@K$04Us_default_enum_string_resolver@@@@QAAXW4e_flag@c_biped_dead_state@@_N@Z");
//};

//public: static bool c_flags_no_init<enum c_biped_dead_state::e_flag, unsigned long, 5, struct s_default_enum_string_resolver>::valid_bit(enum c_biped_dead_state::e_flag)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_flag@c_biped_dead_state@@K$04Us_default_enum_string_resolver@@@@SA_NW4e_flag@c_biped_dead_state@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum c_biped_dead_state::e_flag, unsigned long, 5, struct s_default_enum_string_resolver>::flag_size_type(enum c_biped_dead_state::e_flag)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_flag@c_biped_dead_state@@K$04Us_default_enum_string_resolver@@@@CAKW4e_flag@c_biped_dead_state@@@Z");
//};

//bool biped_dead_activate(long)
//{
//    mangled_ppc("?biped_dead_activate@@YA_NJ@Z");
//};

//void biped_dead_deactivate(long)
//{
//    mangled_ppc("?biped_dead_deactivate@@YAXJ@Z");
//};

//void biped_dead_delete(long)
//{
//    mangled_ppc("?biped_dead_delete@@YAXJ@Z");
//};

//bool biped_dead_update(long)
//{
//    mangled_ppc("?biped_dead_update@@YA_NJ@Z");
//};

//void biped_update_ragdoll(long)
//{
//    mangled_ppc("?biped_update_ragdoll@@YAXJ@Z");
//};

//bool biped_update_relaxation(long)
//{
//    mangled_ppc("?biped_update_relaxation@@YA_NJ@Z");
//};

//void biped_dead_motor_program_early_mover_localize_callback(long)
//{
//    mangled_ppc("?biped_dead_motor_program_early_mover_localize_callback@@YAXJ@Z");
//};

//void biped_update_out_of_map_status(long)
//{
//    mangled_ppc("?biped_update_out_of_map_status@@YAXJ@Z");
//};

//bool biped_dead_update_animation(long, struct s_animation_control_data *, struct s_character_physics_update_input_datum *)
//{
//    mangled_ppc("?biped_dead_update_animation@@YA_NJPAUs_animation_control_data@@PAUs_character_physics_update_input_datum@@@Z");
//};

//public: s_character_physics_update_input_datum::s_character_physics_update_input_datum(void)
//{
//    mangled_ppc("??0s_character_physics_update_input_datum@@QAA@XZ");
//};

//public: s_character_physics_update_input_datum::~s_character_physics_update_input_datum(void)
//{
//    mangled_ppc("??1s_character_physics_update_input_datum@@QAA@XZ");
//};

//public: s_character_physics_update_input_datum::s_sentinel::s_sentinel(void)
//{
//    mangled_ppc("??0s_sentinel@s_character_physics_update_input_datum@@QAA@XZ");
//};

//public: s_character_physics_update_input_datum::s_sentinel::~s_sentinel(void)
//{
//    mangled_ppc("??1s_sentinel@s_character_physics_update_input_datum@@QAA@XZ");
//};

//enum e_motor_program biped_dead_move(long)
//{
//    mangled_ppc("?biped_dead_move@@YA?AW4e_motor_program@@J@Z");
//};

//void biped_relaxation_pose_update(long)
//{
//    mangled_ppc("?biped_relaxation_pose_update@@YAXJ@Z");
//};

//short biped_dead_relaxation_state(long)
//{
//    mangled_ppc("?biped_dead_relaxation_state@@YAFJ@Z");
//};

//public: void c_flags_no_init<enum c_biped_dead_state::e_flag, unsigned long, 5, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_flag@c_biped_dead_state@@K$04Us_default_enum_string_resolver@@@@QAAXXZ");
//};

