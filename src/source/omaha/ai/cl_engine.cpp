/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// except_record_838D18B0; // "except_record_838D18B0"
// except_record_838D1DE8; // "except_record_838D1DE8"
// struct s_atom_definition **g_atom_definitions; // "?g_atom_definitions@@3PAPAUs_atom_definition@@A"
// struct s_atom_info *g_atom_info; // "?g_atom_info@@3PAUs_atom_info@@A"
// char **g_atom_names; // "?g_atom_names@@3PAPADA"
// class c_behavior_state *global_new_state_data; // "?global_new_state_data@@3PAVc_behavior_state@@A"
// short *global_new_behavior; // "?global_new_behavior@@3PAFA"
// class t_restricted_allocation_manager<1, 0, 0, void (__cdecl __tls_set_g_command_script_allocator::*)(void *)> g_command_script_allocator; // "?g_command_script_allocator@@3V?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_command_script_allocator@@YAXPAX@Z@@A"
// struct s_data_array *command_script_data; // "?command_script_data@@3PAUs_data_array@@A"

// void __tls_set_g_command_script_allocator(void *);
// void cs_initialize(void);
// void cs_initialize_for_new_map(void);
// void cs_initialize_for_new_structure_bsp(long);
// void cs_create_for_new_map(void);
// void cs_dispose(void);
// void cs_dispose_from_old_map(void);
// bool cs_datum_available_to_current_thread(void);
// long cs_index_from_thread(long, long, bool);
// bool cs_channel_is_running_on_actor(long, long, short, bool);
// bool cs_is_running_on_actor(long, long, bool);
// bool cs_blocked(long);
// void cs_global_script_context_clear(void);
// void cs_setup_global_script_context(long);
// struct cs_command * cs_initialize_command(long, short, bool);
// long cs_attach_command_script(long, short, long);
// long command_script_new(long, long, long);
// void cs_actor_handle_command_script_attach(long, long);
// long cs_attach_command_script(long, short);
// long cs_stack_command_script(long, short, long);
// long cs_stack_command_script(long, short);
// long cs_queue_command_script(long, short, long);
// long cs_queue_command_script(long, short);
// void cs_abort_thread(long);
// void cs_handle_thread_delete(long);
// void cs_remove_command_script(long, long);
// void cs_remove_all(long);
// long cs_reserve(long, long, bool, short);
// bool actor_allow_vignette(long, long, short, bool *);
// bool cs_release(long, long, long);
// bool cs_release(long, long);
// bool cs_cast(long, long, bool, short, long const *, short);
// bool cs_cast_internal(long, bool, short, struct mission_dialogue_line const **, short, short, struct s_role_set *, short *, short, long, long *, short *);
// float actor_can_fill_role(long, long, short, struct mission_dialogue_line const *, struct s_role_set const *, short, long *, short *, bool *);
// long cs_role(long, short);
// void cs_reset_cast(long);
// void cs_abort_on_alert(long, bool);
// void cs_abort_on_alert2(long, long, bool);
// void cs_abort_on_damage(long, bool);
// void cs_abort_on_damage2(long, long, bool);
// void cs_abort_on_combat_status(long, short);
// void cs_abort_on_combat_status2(long, long, short);
// void cs_abort_on_vehicle_exit(long, bool);
// void cs_abort_on_vehicle_exit2(long, long, bool);
// void cs_set_cleanup_script(long, short);
// void cs_actor_update(long);
// void cs_actor_execute_command_script(long, long, short *, class c_behavior_state *, short);
// void cs_actor_interrupt_command_script(long, long);
// short cs_helper(long, short, short (*)(long, long, struct cs_command *, struct s_atom_control *, long), long);
// void cs_command_clear(struct cs_command *);
// short cs_control_clear(long, long, struct cs_command *, struct s_atom_control *, long);
// short cs_command_start(long, long, struct cs_command *, struct s_atom_control *, long);
// short cs_command_update(long, long, struct cs_command *, struct s_atom_control *, long);
// short cs_command_end(long, long, struct cs_command *, struct s_atom_control *, long);
// void cs_apply_persistent_state(long);
// void cs_handle_deleted_object(long, long);
// bool cs_get_crouch_modifier(long, float *);
// float cs_atom_progress(long, long);
// short cs_progress_query(long, long, struct cs_command *, struct s_atom_control *, long);
// bool cs_atom_executing(long, long, short);
// short cs_control_query(long, long, struct cs_command *, struct s_atom_control *, long);
// void cs_atom_string(long, enum e_atom_channel, char *, short);
// void cs_atom_string(struct cs_command const *, char *, short);
// struct cs_script_data * cs_scenario_get_script_data(struct scenario const *);
// struct cs_point_set * cs_get_point_set(long);
// bool valid_point_ref(long);
// bool valid_point_set(long);
// bool point_ref_get_position_and_orientation(long, union real_point3d *, union vector3d *, union vector3d *);
// public: struct command_script_datum * c_data_iterator<struct command_script_datum>::get_datum(void) const;
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_command_script_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_command_script_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_command_script_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_command_script_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_command_script_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_command_script_allocator::*)(void *)>::free_memory(void);
// public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_command_script_allocator::*)(void *)>::valid(void) const;
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_command_script_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_command_script_allocator::*)(void *)>(void);
// void g_command_script_allocator::`dynamic atexit destructor'(void);

//void __tls_set_g_command_script_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_command_script_allocator@@YAXPAX@Z");
//};

//void cs_initialize(void)
//{
//    mangled_ppc("?cs_initialize@@YAXXZ");
//};

//void cs_initialize_for_new_map(void)
//{
//    mangled_ppc("?cs_initialize_for_new_map@@YAXXZ");
//};

//void cs_initialize_for_new_structure_bsp(long)
//{
//    mangled_ppc("?cs_initialize_for_new_structure_bsp@@YAXJ@Z");
//};

//void cs_create_for_new_map(void)
//{
//    mangled_ppc("?cs_create_for_new_map@@YAXXZ");
//};

//void cs_dispose(void)
//{
//    mangled_ppc("?cs_dispose@@YAXXZ");
//};

//void cs_dispose_from_old_map(void)
//{
//    mangled_ppc("?cs_dispose_from_old_map@@YAXXZ");
//};

//bool cs_datum_available_to_current_thread(void)
//{
//    mangled_ppc("?cs_datum_available_to_current_thread@@YA_NXZ");
//};

//long cs_index_from_thread(long, long, bool)
//{
//    mangled_ppc("?cs_index_from_thread@@YAJJJ_N@Z");
//};

//bool cs_channel_is_running_on_actor(long, long, short, bool)
//{
//    mangled_ppc("?cs_channel_is_running_on_actor@@YA_NJJF_N@Z");
//};

//bool cs_is_running_on_actor(long, long, bool)
//{
//    mangled_ppc("?cs_is_running_on_actor@@YA_NJJ_N@Z");
//};

//bool cs_blocked(long)
//{
//    mangled_ppc("?cs_blocked@@YA_NJ@Z");
//};

//void cs_global_script_context_clear(void)
//{
//    mangled_ppc("?cs_global_script_context_clear@@YAXXZ");
//};

//void cs_setup_global_script_context(long)
//{
//    mangled_ppc("?cs_setup_global_script_context@@YAXJ@Z");
//};

//struct cs_command * cs_initialize_command(long, short, bool)
//{
//    mangled_ppc("?cs_initialize_command@@YAPAUcs_command@@JF_N@Z");
//};

//long cs_attach_command_script(long, short, long)
//{
//    mangled_ppc("?cs_attach_command_script@@YAJJFJ@Z");
//};

//long command_script_new(long, long, long)
//{
//    mangled_ppc("?command_script_new@@YAJJJJ@Z");
//};

//void cs_actor_handle_command_script_attach(long, long)
//{
//    mangled_ppc("?cs_actor_handle_command_script_attach@@YAXJJ@Z");
//};

//long cs_attach_command_script(long, short)
//{
//    mangled_ppc("?cs_attach_command_script@@YAJJF@Z");
//};

//long cs_stack_command_script(long, short, long)
//{
//    mangled_ppc("?cs_stack_command_script@@YAJJFJ@Z");
//};

//long cs_stack_command_script(long, short)
//{
//    mangled_ppc("?cs_stack_command_script@@YAJJF@Z");
//};

//long cs_queue_command_script(long, short, long)
//{
//    mangled_ppc("?cs_queue_command_script@@YAJJFJ@Z");
//};

//long cs_queue_command_script(long, short)
//{
//    mangled_ppc("?cs_queue_command_script@@YAJJF@Z");
//};

//void cs_abort_thread(long)
//{
//    mangled_ppc("?cs_abort_thread@@YAXJ@Z");
//};

//void cs_handle_thread_delete(long)
//{
//    mangled_ppc("?cs_handle_thread_delete@@YAXJ@Z");
//};

//void cs_remove_command_script(long, long)
//{
//    mangled_ppc("?cs_remove_command_script@@YAXJJ@Z");
//};

//void cs_remove_all(long)
//{
//    mangled_ppc("?cs_remove_all@@YAXJ@Z");
//};

//long cs_reserve(long, long, bool, short)
//{
//    mangled_ppc("?cs_reserve@@YAJJJ_NF@Z");
//};

//bool actor_allow_vignette(long, long, short, bool *)
//{
//    mangled_ppc("?actor_allow_vignette@@YA_NJJFPA_N@Z");
//};

//bool cs_release(long, long, long)
//{
//    mangled_ppc("?cs_release@@YA_NJJJ@Z");
//};

//bool cs_release(long, long)
//{
//    mangled_ppc("?cs_release@@YA_NJJ@Z");
//};

//bool cs_cast(long, long, bool, short, long const *, short)
//{
//    mangled_ppc("?cs_cast@@YA_NJJ_NFPBJF@Z");
//};

//bool cs_cast_internal(long, bool, short, struct mission_dialogue_line const **, short, short, struct s_role_set *, short *, short, long, long *, short *)
//{
//    mangled_ppc("?cs_cast_internal@@YA_NJ_NFPAPBUmission_dialogue_line@@FFPAUs_role_set@@PAFFJPAJ3@Z");
//};

//float actor_can_fill_role(long, long, short, struct mission_dialogue_line const *, struct s_role_set const *, short, long *, short *, bool *)
//{
//    mangled_ppc("?actor_can_fill_role@@YAMJJFPBUmission_dialogue_line@@PBUs_role_set@@FPAJPAFPA_N@Z");
//};

//long cs_role(long, short)
//{
//    mangled_ppc("?cs_role@@YAJJF@Z");
//};

//void cs_reset_cast(long)
//{
//    mangled_ppc("?cs_reset_cast@@YAXJ@Z");
//};

//void cs_abort_on_alert(long, bool)
//{
//    mangled_ppc("?cs_abort_on_alert@@YAXJ_N@Z");
//};

//void cs_abort_on_alert2(long, long, bool)
//{
//    mangled_ppc("?cs_abort_on_alert2@@YAXJJ_N@Z");
//};

//void cs_abort_on_damage(long, bool)
//{
//    mangled_ppc("?cs_abort_on_damage@@YAXJ_N@Z");
//};

//void cs_abort_on_damage2(long, long, bool)
//{
//    mangled_ppc("?cs_abort_on_damage2@@YAXJJ_N@Z");
//};

//void cs_abort_on_combat_status(long, short)
//{
//    mangled_ppc("?cs_abort_on_combat_status@@YAXJF@Z");
//};

//void cs_abort_on_combat_status2(long, long, short)
//{
//    mangled_ppc("?cs_abort_on_combat_status2@@YAXJJF@Z");
//};

//void cs_abort_on_vehicle_exit(long, bool)
//{
//    mangled_ppc("?cs_abort_on_vehicle_exit@@YAXJ_N@Z");
//};

//void cs_abort_on_vehicle_exit2(long, long, bool)
//{
//    mangled_ppc("?cs_abort_on_vehicle_exit2@@YAXJJ_N@Z");
//};

//void cs_set_cleanup_script(long, short)
//{
//    mangled_ppc("?cs_set_cleanup_script@@YAXJF@Z");
//};

//void cs_actor_update(long)
//{
//    mangled_ppc("?cs_actor_update@@YAXJ@Z");
//};

//void cs_actor_execute_command_script(long, long, short *, class c_behavior_state *, short)
//{
//    mangled_ppc("?cs_actor_execute_command_script@@YAXJJPAFPAVc_behavior_state@@F@Z");
//};

//void cs_actor_interrupt_command_script(long, long)
//{
//    mangled_ppc("?cs_actor_interrupt_command_script@@YAXJJ@Z");
//};

//short cs_helper(long, short, short (*)(long, long, struct cs_command *, struct s_atom_control *, long), long)
//{
//    mangled_ppc("?cs_helper@@YAFJFP6AFJJPAUcs_command@@PAUs_atom_control@@J@ZJ@Z");
//};

//void cs_command_clear(struct cs_command *)
//{
//    mangled_ppc("?cs_command_clear@@YAXPAUcs_command@@@Z");
//};

//short cs_control_clear(long, long, struct cs_command *, struct s_atom_control *, long)
//{
//    mangled_ppc("?cs_control_clear@@YAFJJPAUcs_command@@PAUs_atom_control@@J@Z");
//};

//short cs_command_start(long, long, struct cs_command *, struct s_atom_control *, long)
//{
//    mangled_ppc("?cs_command_start@@YAFJJPAUcs_command@@PAUs_atom_control@@J@Z");
//};

//short cs_command_update(long, long, struct cs_command *, struct s_atom_control *, long)
//{
//    mangled_ppc("?cs_command_update@@YAFJJPAUcs_command@@PAUs_atom_control@@J@Z");
//};

//short cs_command_end(long, long, struct cs_command *, struct s_atom_control *, long)
//{
//    mangled_ppc("?cs_command_end@@YAFJJPAUcs_command@@PAUs_atom_control@@J@Z");
//};

//void cs_apply_persistent_state(long)
//{
//    mangled_ppc("?cs_apply_persistent_state@@YAXJ@Z");
//};

//void cs_handle_deleted_object(long, long)
//{
//    mangled_ppc("?cs_handle_deleted_object@@YAXJJ@Z");
//};

//bool cs_get_crouch_modifier(long, float *)
//{
//    mangled_ppc("?cs_get_crouch_modifier@@YA_NJPAM@Z");
//};

//float cs_atom_progress(long, long)
//{
//    mangled_ppc("?cs_atom_progress@@YAMJJ@Z");
//};

//short cs_progress_query(long, long, struct cs_command *, struct s_atom_control *, long)
//{
//    mangled_ppc("?cs_progress_query@@YAFJJPAUcs_command@@PAUs_atom_control@@J@Z");
//};

//bool cs_atom_executing(long, long, short)
//{
//    mangled_ppc("?cs_atom_executing@@YA_NJJF@Z");
//};

//short cs_control_query(long, long, struct cs_command *, struct s_atom_control *, long)
//{
//    mangled_ppc("?cs_control_query@@YAFJJPAUcs_command@@PAUs_atom_control@@J@Z");
//};

//void cs_atom_string(long, enum e_atom_channel, char *, short)
//{
//    mangled_ppc("?cs_atom_string@@YAXJW4e_atom_channel@@PADF@Z");
//};

//void cs_atom_string(struct cs_command const *, char *, short)
//{
//    mangled_ppc("?cs_atom_string@@YAXPBUcs_command@@PADF@Z");
//};

//struct cs_script_data * cs_scenario_get_script_data(struct scenario const *)
//{
//    mangled_ppc("?cs_scenario_get_script_data@@YAPAUcs_script_data@@PBUscenario@@@Z");
//};

//struct cs_point_set * cs_get_point_set(long)
//{
//    mangled_ppc("?cs_get_point_set@@YAPAUcs_point_set@@J@Z");
//};

//bool valid_point_ref(long)
//{
//    mangled_ppc("?valid_point_ref@@YA_NJ@Z");
//};

//bool valid_point_set(long)
//{
//    mangled_ppc("?valid_point_set@@YA_NJ@Z");
//};

//bool point_ref_get_position_and_orientation(long, union real_point3d *, union vector3d *, union vector3d *)
//{
//    mangled_ppc("?point_ref_get_position_and_orientation@@YA_NJPATreal_point3d@@PATvector3d@@1@Z");
//};

//public: struct command_script_datum * c_data_iterator<struct command_script_datum>::get_datum(void) const
//{
//    mangled_ppc("?get_datum@?$c_data_iterator@Ucommand_script_datum@@@@QBAPAUcommand_script_datum@@XZ");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_command_script_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_command_script_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_command_script_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_command_script_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_command_script_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_command_script_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_command_script_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_command_script_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_command_script_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_command_script_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_command_script_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_command_script_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_command_script_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_command_script_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_command_script_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_command_script_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//void g_command_script_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_command_script_allocator@@YAXXZ");
//};

