/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// bool breakpoints_enabled; // "?breakpoints_enabled@@3_NA"
// bool g_run_game_scripts; // "?g_run_game_scripts@@3_NA"
// struct hs_debug_data_definition hs_debug_data; // "?hs_debug_data@@3Uhs_debug_data_definition@@A"
// bool debug_trigger_volumes; // "?debug_trigger_volumes@@3_NA"
// long (__cdecl * (*g_typecasting_procedures)[89])(long); // "?g_typecasting_procedures@@3PAY0FJ@P6AJJ@ZA"
// bool *debug_global_variables; // "?debug_global_variables@@3PA_NA"
// bool debug_scripting; // "?debug_scripting@@3_NA"
// bool debug_globals; // "?debug_globals@@3_NA"
// bool debug_globals_all; // "?debug_globals_all@@3_NA"
// bool hs_verbose; // "?hs_verbose@@3_NA"
// class t_restricted_allocation_manager<1, 0, 0, void (__cdecl __tls_set_g_hs_thread_deterministic_data_allocator::*)(void *)> g_hs_thread_deterministic_data_allocator; // "?g_hs_thread_deterministic_data_allocator@@3V?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_hs_thread_deterministic_data_allocator@@YAXPAX@Z@@A"
// class t_restricted_allocation_manager<1, 0, 0, void (__cdecl __tls_set_g_hs_thread_non_deterministic_data_allocator::*)(void *)> g_hs_thread_non_deterministic_data_allocator; // "?g_hs_thread_non_deterministic_data_allocator@@3V?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_hs_thread_non_deterministic_data_allocator@@YAXPAX@Z@@A"
// class t_restricted_allocation_manager<1, 0, 0, void (__cdecl __tls_set_g_hs_global_data_allocator::*)(void *)> g_hs_global_data_allocator; // "?g_hs_global_data_allocator@@3V?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_hs_global_data_allocator@@YAXPAX@Z@@A"
// class t_restricted_allocation_manager<1, 0, 0, void (__cdecl __tls_set_g_hs_distributed_global_data_allocator::*)(void *)> g_hs_distributed_global_data_allocator; // "?g_hs_distributed_global_data_allocator@@3V?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_hs_distributed_global_data_allocator@@YAXPAX@Z@@A"
// class t_restricted_allocation_manager<1, 0, 0, void (__cdecl __tls_set_g_hs_runtime_globals_allocator::*)(void *)> g_hs_runtime_globals_allocator; // "?g_hs_runtime_globals_allocator@@3V?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_hs_runtime_globals_allocator@@YAXPAX@Z@@A"
// struct s_data_array *hs_thread_deterministic_data; // "?hs_thread_deterministic_data@@3PAUs_data_array@@A"
// struct s_data_array *hs_thread_non_deterministic_data; // "?hs_thread_non_deterministic_data@@3PAUs_data_array@@A"
// struct s_data_array *hs_global_data; // "?hs_global_data@@3PAUs_data_array@@A"
// struct s_data_array *hs_distributed_global_data; // "?hs_distributed_global_data@@3PAUs_data_array@@A"
// struct s_hs_runtime_globals *hs_runtime_globals; // "?hs_runtime_globals@@3PAUs_hs_runtime_globals@@A"

// void __tls_set_g_hs_thread_deterministic_data_allocator(void *);
// void __tls_set_g_hs_thread_non_deterministic_data_allocator(void *);
// void __tls_set_g_hs_global_data_allocator(void *);
// void __tls_set_g_hs_distributed_global_data_allocator(void *);
// void __tls_set_g_hs_runtime_globals_allocator(void *);
// void hs_evaluate_begin(short, long, bool);
// struct hs_syntax_node * hs_syntax_get(long);
// public: hs_destination_pointer::hs_destination_pointer(void);
// struct hs_stack_frame const * hs_thread_stack(struct hs_thread const *);
// struct hs_stack_frame const * hs_stack(struct hs_thread const *, struct hs_stack_pointer);
// void hs_evaluate_begin_random_count(short, long, bool);
// long hs_syntax_nth(long, short);
// void hs_evaluate_begin_random(short, long, bool);
// void hs_evaluate_if(short, long, bool);
// void hs_evaluate_set(short, long, bool);
// void hs_evaluate_logical(short, long, bool);
// void hs_evaluate_arithmetic(short, long, bool);
// void hs_evaluate_equality(short, long, bool);
// struct hs_stack_frame * hs_thread_stack(struct hs_thread *);
// struct hs_stack_frame * hs_stack(struct hs_thread *, struct hs_stack_pointer);
// void hs_evaluate_inequality(short, long, bool);
// void hs_evaluate_sleep_forever(short, long, bool);
// void hs_evaluate_sleep(short, long, bool);
// void hs_evaluate_sleep_until(short, long, bool);
// void hs_evaluate_wake(short, long, bool);
// void hs_inspect_boolean(short, long, char *, long);
// void hs_inspect_real(short, long, char *, long);
// void hs_inspect_short_integer(short, long, char *, long);
// void hs_inspect_long_integer(short, long, char *, long);
// void hs_inspect_string(short, long, char *, long);
// void hs_inspect_enum(short, long, char *, long);
// void hs_evaluate_inspect(short, long, bool);
// void hs_evaluate_object_cast_up(short, long, bool);
// void hs_evaluate_debug_string(short, long, bool);
// void hs_evaluate_branch(short, long, bool);
// bool hs_print_value(enum e_hs_type, long);
// void hs_runtime_initialize(void);
// void hs_runtime_initialize_for_new_map(void);
// void hs_runtime_delete_internal_global_datums(void);
// void hs_runtime_dispose_from_old_map(void);
// void hs_runtime_initialize_threads(void);
// void hs_reset_scripts(void);
// bool hs_running_game_scripts(void);
// void thread_update_sleep_time_for_reset(long, long);
// void hs_runtime_reset_time(long);
// void hs_runtime_dispose(void);
// bool hs_runtime_initialized(void);
// void hs_runtime_dirty(void);
// void hs_runtime_reset(void);
// void hs_runtime_require_gc(void);
// void hs_runtime_require_object_list_gc(void);
// void hs_runtime_update(void);
// bool hs_runtime_safe_to_gc(void);
// bool hs_runtime_nondeterministic_threads_running(void);
// bool hs_runtime_evaluate(long, long *, bool);
// long hs_runtime_script_begin(short, enum e_hs_script_type, enum e_hs_thread_type);
// long hs_runtime_command_script_begin(short);
// long hs_runtime_performance_script_begin(short, long);
// void hs_runtime_performance_script_terminate(long);
// char const * hs_runtime_get_executing_thread_name(void);
// bool hs_wake_by_name(char const *);
// bool hs_wake_by_name(long);
// void hs_handle_deleted_object(long);
// long * hs_stack_parameters(struct hs_thread *, struct hs_stack_frame *, long);
// void hs_restore_from_saved_game(long);
// void hs_scripting_debug_thread(long, bool);
// void hs_breakpoint(char const *);
// bool hs_script_started(long);
// bool hs_script_finished(long);
// char const * script_get_name(struct hs_script const *);
// long string_id_get_from_string(char const *);
// bool thread_render_debug_scripting(long, char *, long);
// char const * expression_get_function_name(long, long);
// void render_debug_scripting(void);
// long render_debug_tabbed_string(class c_simple_font_screen_display *, char const *, short, short const *, short, long, long, unsigned long);
// void render_debug_scripting_globals(void);
// void inspect_internal(short, long, char *, short);
// void hs_scripting_show_thread(char const *, bool);
// void render_debug_trigger_volumes(void);
// public: c_real_sector_accessor::c_real_sector_accessor(void);
// public: c_sector_accessor_base::c_sector_accessor_base(void);
// long hs_thread_new(enum e_hs_thread_type, long, bool);
// long hs_thread_allocate(bool);
// struct hs_thread * hs_thread_get(long);
// struct hs_thread * hs_thread_try_and_get(long);
// void hs_thread_try_to_delete(long, bool);
// void hs_thread_delete(long, bool);
// bool hs_thread_is_deterministic(long);
// char const * hs_thread_format(long);
// void hs_thread_main(long);
// bool hs_syntax_node_exists(long);
// bool hs_evaluate(long, long, struct hs_destination_pointer, long *);
// long * hs_destination(struct hs_thread *, struct hs_destination_pointer);
// long * hs_stack_destination(struct hs_thread *, struct hs_stack_pointer);
// void hs_return(long, long);
// long hs_global_evaluate(short);
// void hs_runtime_push_script(short);
// void hs_script_evaluate(short, long, bool);
// bool hs_stack_push(long);
// void hs_stack_pop(long);
// void * hs_stack_allocate(long, long, long, struct hs_stack_pointer *);
// void hs_wake(long, long);
// long * hs_arguments_evaluate(long, short, short const *, bool);
// bool script_error(long, char const *, char const *);
// long hs_find_thread_by_script(short);
// long hs_find_thread_by_name(long);
// bool valid_thread(long);
// void hs_typecasting_table_initialize(void);
// long hs_data_copy(long);
// long hs_boolean_to_long(long);
// long hs_long_to_boolean(long);
// long hs_short_to_boolean(long);
// long hs_string_to_boolean(long);
// long hs_data_to_void(long);
// long hs_short_to_real(long);
// long hs_long_to_real(long);
// long hs_enum_to_real(long);
// long hs_real_to_short(long);
// long hs_real_to_long(long);
// long hs_short_to_long(long);
// long hs_long_to_short(long);
// long hs_player_to_player(long);
// long hs_object_to_player(long);
// long hs_player_to_object(long);
// long hs_player_to_object_list(long);
// long hs_object_name_to_object_list(long);
// long hs_object_to_object_list(long);
// bool hs_can_cast(short, short);
// bool hs_object_type_can_cast(short, short);
// long hs_object_index_from_name_index(long, short);
// long hs_cast(long, short, short, long);
// long hs_runtime_index_from_global_designator(long);
// long * hs_macro_function_evaluate(short, long, bool);
// void hs_reconcile_read(enum e_hs_type, long *, void *);
// void hs_reconcile_write(enum e_hs_type, long, void *);
// void hs_global_reconcile_read(short);
// void hs_global_reconcile_write(short);
// void hs_determinism_trace_status(long, char const *);
// long hs_scripting_get_executing_thread_index(void);
// void hs_scripting_kill_running_thread(long);
// void hs_erase_all_threads(void);
// void hs_scripting_kill_all_threads(void);
// void hs_thread_iterator_new(struct s_hs_thread_iterator *, bool, bool);
// long hs_thread_iterator_next(struct s_hs_thread_iterator *);
// public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_runtime_globals_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: void c_data_iterator<struct hs_global_runtime>::begin(struct s_data_array *);
// public: bool c_data_iterator<struct hs_global_runtime>::next(void);
// public: struct hs_global_runtime * c_data_iterator<struct hs_global_runtime>::get_datum(void) const;
// public: long c_data_iterator<struct hs_global_runtime>::get_index(void) const;
// public: long c_data_iterator<struct hs_global_runtime>::get_absolute_index(void) const;
// public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_runtime_globals_allocator::*)(void *)>::valid(void) const;
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_thread_deterministic_data_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_thread_deterministic_data_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_thread_deterministic_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_thread_deterministic_data_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_thread_deterministic_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_thread_deterministic_data_allocator::*)(void *)>::free_memory(void);
// public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_thread_deterministic_data_allocator::*)(void *)>::valid(void) const;
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_thread_non_deterministic_data_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_thread_non_deterministic_data_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_thread_non_deterministic_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_thread_non_deterministic_data_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_thread_non_deterministic_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_thread_non_deterministic_data_allocator::*)(void *)>::free_memory(void);
// public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_thread_non_deterministic_data_allocator::*)(void *)>::valid(void) const;
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_global_data_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_global_data_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_global_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_global_data_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_global_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_global_data_allocator::*)(void *)>::free_memory(void);
// public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_global_data_allocator::*)(void *)>::valid(void) const;
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_distributed_global_data_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_distributed_global_data_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_distributed_global_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_distributed_global_data_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_distributed_global_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_distributed_global_data_allocator::*)(void *)>::free_memory(void);
// public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_distributed_global_data_allocator::*)(void *)>::valid(void) const;
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_runtime_globals_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_runtime_globals_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_runtime_globals_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_runtime_globals_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_runtime_globals_allocator::*)(void *)>::free_memory(void);
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_thread_deterministic_data_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_thread_deterministic_data_allocator::*)(void *)>(void);
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_thread_non_deterministic_data_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_thread_non_deterministic_data_allocator::*)(void *)>(void);
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_global_data_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_global_data_allocator::*)(void *)>(void);
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_distributed_global_data_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_distributed_global_data_allocator::*)(void *)>(void);
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_runtime_globals_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_runtime_globals_allocator::*)(void *)>(void);
// void g_hs_thread_deterministic_data_allocator::`dynamic atexit destructor'(void);
// void g_hs_thread_non_deterministic_data_allocator::`dynamic atexit destructor'(void);
// void g_hs_global_data_allocator::`dynamic atexit destructor'(void);
// void g_hs_distributed_global_data_allocator::`dynamic atexit destructor'(void);
// void g_hs_runtime_globals_allocator::`dynamic atexit destructor'(void);

//void __tls_set_g_hs_thread_deterministic_data_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_hs_thread_deterministic_data_allocator@@YAXPAX@Z");
//};

//void __tls_set_g_hs_thread_non_deterministic_data_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_hs_thread_non_deterministic_data_allocator@@YAXPAX@Z");
//};

//void __tls_set_g_hs_global_data_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_hs_global_data_allocator@@YAXPAX@Z");
//};

//void __tls_set_g_hs_distributed_global_data_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_hs_distributed_global_data_allocator@@YAXPAX@Z");
//};

//void __tls_set_g_hs_runtime_globals_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_hs_runtime_globals_allocator@@YAXPAX@Z");
//};

//void hs_evaluate_begin(short, long, bool)
//{
//    mangled_ppc("?hs_evaluate_begin@@YAXFJ_N@Z");
//};

//struct hs_syntax_node * hs_syntax_get(long)
//{
//    mangled_ppc("?hs_syntax_get@@YAPAUhs_syntax_node@@J@Z");
//};

//public: hs_destination_pointer::hs_destination_pointer(void)
//{
//    mangled_ppc("??0hs_destination_pointer@@QAA@XZ");
//};

//struct hs_stack_frame const * hs_thread_stack(struct hs_thread const *)
//{
//    mangled_ppc("?hs_thread_stack@@YAPBUhs_stack_frame@@PBUhs_thread@@@Z");
//};

//struct hs_stack_frame const * hs_stack(struct hs_thread const *, struct hs_stack_pointer)
//{
//    mangled_ppc("?hs_stack@@YAPBUhs_stack_frame@@PBUhs_thread@@Uhs_stack_pointer@@@Z");
//};

//void hs_evaluate_begin_random_count(short, long, bool)
//{
//    mangled_ppc("?hs_evaluate_begin_random_count@@YAXFJ_N@Z");
//};

//long hs_syntax_nth(long, short)
//{
//    mangled_ppc("?hs_syntax_nth@@YAJJF@Z");
//};

//void hs_evaluate_begin_random(short, long, bool)
//{
//    mangled_ppc("?hs_evaluate_begin_random@@YAXFJ_N@Z");
//};

//void hs_evaluate_if(short, long, bool)
//{
//    mangled_ppc("?hs_evaluate_if@@YAXFJ_N@Z");
//};

//void hs_evaluate_set(short, long, bool)
//{
//    mangled_ppc("?hs_evaluate_set@@YAXFJ_N@Z");
//};

//void hs_evaluate_logical(short, long, bool)
//{
//    mangled_ppc("?hs_evaluate_logical@@YAXFJ_N@Z");
//};

//void hs_evaluate_arithmetic(short, long, bool)
//{
//    mangled_ppc("?hs_evaluate_arithmetic@@YAXFJ_N@Z");
//};

//void hs_evaluate_equality(short, long, bool)
//{
//    mangled_ppc("?hs_evaluate_equality@@YAXFJ_N@Z");
//};

//struct hs_stack_frame * hs_thread_stack(struct hs_thread *)
//{
//    mangled_ppc("?hs_thread_stack@@YAPAUhs_stack_frame@@PAUhs_thread@@@Z");
//};

//struct hs_stack_frame * hs_stack(struct hs_thread *, struct hs_stack_pointer)
//{
//    mangled_ppc("?hs_stack@@YAPAUhs_stack_frame@@PAUhs_thread@@Uhs_stack_pointer@@@Z");
//};

//void hs_evaluate_inequality(short, long, bool)
//{
//    mangled_ppc("?hs_evaluate_inequality@@YAXFJ_N@Z");
//};

//void hs_evaluate_sleep_forever(short, long, bool)
//{
//    mangled_ppc("?hs_evaluate_sleep_forever@@YAXFJ_N@Z");
//};

//void hs_evaluate_sleep(short, long, bool)
//{
//    mangled_ppc("?hs_evaluate_sleep@@YAXFJ_N@Z");
//};

//void hs_evaluate_sleep_until(short, long, bool)
//{
//    mangled_ppc("?hs_evaluate_sleep_until@@YAXFJ_N@Z");
//};

//void hs_evaluate_wake(short, long, bool)
//{
//    mangled_ppc("?hs_evaluate_wake@@YAXFJ_N@Z");
//};

//void hs_inspect_boolean(short, long, char *, long)
//{
//    mangled_ppc("?hs_inspect_boolean@@YAXFJPADJ@Z");
//};

//void hs_inspect_real(short, long, char *, long)
//{
//    mangled_ppc("?hs_inspect_real@@YAXFJPADJ@Z");
//};

//void hs_inspect_short_integer(short, long, char *, long)
//{
//    mangled_ppc("?hs_inspect_short_integer@@YAXFJPADJ@Z");
//};

//void hs_inspect_long_integer(short, long, char *, long)
//{
//    mangled_ppc("?hs_inspect_long_integer@@YAXFJPADJ@Z");
//};

//void hs_inspect_string(short, long, char *, long)
//{
//    mangled_ppc("?hs_inspect_string@@YAXFJPADJ@Z");
//};

//void hs_inspect_enum(short, long, char *, long)
//{
//    mangled_ppc("?hs_inspect_enum@@YAXFJPADJ@Z");
//};

//void hs_evaluate_inspect(short, long, bool)
//{
//    mangled_ppc("?hs_evaluate_inspect@@YAXFJ_N@Z");
//};

//void hs_evaluate_object_cast_up(short, long, bool)
//{
//    mangled_ppc("?hs_evaluate_object_cast_up@@YAXFJ_N@Z");
//};

//void hs_evaluate_debug_string(short, long, bool)
//{
//    mangled_ppc("?hs_evaluate_debug_string@@YAXFJ_N@Z");
//};

//void hs_evaluate_branch(short, long, bool)
//{
//    mangled_ppc("?hs_evaluate_branch@@YAXFJ_N@Z");
//};

//bool hs_print_value(enum e_hs_type, long)
//{
//    mangled_ppc("?hs_print_value@@YA_NW4e_hs_type@@J@Z");
//};

//void hs_runtime_initialize(void)
//{
//    mangled_ppc("?hs_runtime_initialize@@YAXXZ");
//};

//void hs_runtime_initialize_for_new_map(void)
//{
//    mangled_ppc("?hs_runtime_initialize_for_new_map@@YAXXZ");
//};

//void hs_runtime_delete_internal_global_datums(void)
//{
//    mangled_ppc("?hs_runtime_delete_internal_global_datums@@YAXXZ");
//};

//void hs_runtime_dispose_from_old_map(void)
//{
//    mangled_ppc("?hs_runtime_dispose_from_old_map@@YAXXZ");
//};

//void hs_runtime_initialize_threads(void)
//{
//    mangled_ppc("?hs_runtime_initialize_threads@@YAXXZ");
//};

//void hs_reset_scripts(void)
//{
//    mangled_ppc("?hs_reset_scripts@@YAXXZ");
//};

//bool hs_running_game_scripts(void)
//{
//    mangled_ppc("?hs_running_game_scripts@@YA_NXZ");
//};

//void thread_update_sleep_time_for_reset(long, long)
//{
//    mangled_ppc("?thread_update_sleep_time_for_reset@@YAXJJ@Z");
//};

//void hs_runtime_reset_time(long)
//{
//    mangled_ppc("?hs_runtime_reset_time@@YAXJ@Z");
//};

//void hs_runtime_dispose(void)
//{
//    mangled_ppc("?hs_runtime_dispose@@YAXXZ");
//};

//bool hs_runtime_initialized(void)
//{
//    mangled_ppc("?hs_runtime_initialized@@YA_NXZ");
//};

//void hs_runtime_dirty(void)
//{
//    mangled_ppc("?hs_runtime_dirty@@YAXXZ");
//};

//void hs_runtime_reset(void)
//{
//    mangled_ppc("?hs_runtime_reset@@YAXXZ");
//};

//void hs_runtime_require_gc(void)
//{
//    mangled_ppc("?hs_runtime_require_gc@@YAXXZ");
//};

//void hs_runtime_require_object_list_gc(void)
//{
//    mangled_ppc("?hs_runtime_require_object_list_gc@@YAXXZ");
//};

//void hs_runtime_update(void)
//{
//    mangled_ppc("?hs_runtime_update@@YAXXZ");
//};

//bool hs_runtime_safe_to_gc(void)
//{
//    mangled_ppc("?hs_runtime_safe_to_gc@@YA_NXZ");
//};

//bool hs_runtime_nondeterministic_threads_running(void)
//{
//    mangled_ppc("?hs_runtime_nondeterministic_threads_running@@YA_NXZ");
//};

//bool hs_runtime_evaluate(long, long *, bool)
//{
//    mangled_ppc("?hs_runtime_evaluate@@YA_NJPAJ_N@Z");
//};

//long hs_runtime_script_begin(short, enum e_hs_script_type, enum e_hs_thread_type)
//{
//    mangled_ppc("?hs_runtime_script_begin@@YAJFW4e_hs_script_type@@W4e_hs_thread_type@@@Z");
//};

//long hs_runtime_command_script_begin(short)
//{
//    mangled_ppc("?hs_runtime_command_script_begin@@YAJF@Z");
//};

//long hs_runtime_performance_script_begin(short, long)
//{
//    mangled_ppc("?hs_runtime_performance_script_begin@@YAJFJ@Z");
//};

//void hs_runtime_performance_script_terminate(long)
//{
//    mangled_ppc("?hs_runtime_performance_script_terminate@@YAXJ@Z");
//};

//char const * hs_runtime_get_executing_thread_name(void)
//{
//    mangled_ppc("?hs_runtime_get_executing_thread_name@@YAPBDXZ");
//};

//bool hs_wake_by_name(char const *)
//{
//    mangled_ppc("?hs_wake_by_name@@YA_NPBD@Z");
//};

//bool hs_wake_by_name(long)
//{
//    mangled_ppc("?hs_wake_by_name@@YA_NJ@Z");
//};

//void hs_handle_deleted_object(long)
//{
//    mangled_ppc("?hs_handle_deleted_object@@YAXJ@Z");
//};

//long * hs_stack_parameters(struct hs_thread *, struct hs_stack_frame *, long)
//{
//    mangled_ppc("?hs_stack_parameters@@YAPAJPAUhs_thread@@PAUhs_stack_frame@@J@Z");
//};

//void hs_restore_from_saved_game(long)
//{
//    mangled_ppc("?hs_restore_from_saved_game@@YAXJ@Z");
//};

//void hs_scripting_debug_thread(long, bool)
//{
//    mangled_ppc("?hs_scripting_debug_thread@@YAXJ_N@Z");
//};

//void hs_breakpoint(char const *)
//{
//    mangled_ppc("?hs_breakpoint@@YAXPBD@Z");
//};

//bool hs_script_started(long)
//{
//    mangled_ppc("?hs_script_started@@YA_NJ@Z");
//};

//bool hs_script_finished(long)
//{
//    mangled_ppc("?hs_script_finished@@YA_NJ@Z");
//};

//char const * script_get_name(struct hs_script const *)
//{
//    mangled_ppc("?script_get_name@@YAPBDPBUhs_script@@@Z");
//};

//long string_id_get_from_string(char const *)
//{
//    mangled_ppc("?string_id_get_from_string@@YAJPBD@Z");
//};

//bool thread_render_debug_scripting(long, char *, long)
//{
//    mangled_ppc("?thread_render_debug_scripting@@YA_NJPADJ@Z");
//};

//char const * expression_get_function_name(long, long)
//{
//    mangled_ppc("?expression_get_function_name@@YAPBDJJ@Z");
//};

//void render_debug_scripting(void)
//{
//    mangled_ppc("?render_debug_scripting@@YAXXZ");
//};

//long render_debug_tabbed_string(class c_simple_font_screen_display *, char const *, short, short const *, short, long, long, unsigned long)
//{
//    mangled_ppc("?render_debug_tabbed_string@@YAJPAVc_simple_font_screen_display@@PBDFPBFFJJK@Z");
//};

//void render_debug_scripting_globals(void)
//{
//    mangled_ppc("?render_debug_scripting_globals@@YAXXZ");
//};

//void inspect_internal(short, long, char *, short)
//{
//    mangled_ppc("?inspect_internal@@YAXFJPADF@Z");
//};

//void hs_scripting_show_thread(char const *, bool)
//{
//    mangled_ppc("?hs_scripting_show_thread@@YAXPBD_N@Z");
//};

//void render_debug_trigger_volumes(void)
//{
//    mangled_ppc("?render_debug_trigger_volumes@@YAXXZ");
//};

//public: c_real_sector_accessor::c_real_sector_accessor(void)
//{
//    mangled_ppc("??0c_real_sector_accessor@@QAA@XZ");
//};

//public: c_sector_accessor_base::c_sector_accessor_base(void)
//{
//    mangled_ppc("??0c_sector_accessor_base@@QAA@XZ");
//};

//long hs_thread_new(enum e_hs_thread_type, long, bool)
//{
//    mangled_ppc("?hs_thread_new@@YAJW4e_hs_thread_type@@J_N@Z");
//};

//long hs_thread_allocate(bool)
//{
//    mangled_ppc("?hs_thread_allocate@@YAJ_N@Z");
//};

//struct hs_thread * hs_thread_get(long)
//{
//    mangled_ppc("?hs_thread_get@@YAPAUhs_thread@@J@Z");
//};

//struct hs_thread * hs_thread_try_and_get(long)
//{
//    mangled_ppc("?hs_thread_try_and_get@@YAPAUhs_thread@@J@Z");
//};

//void hs_thread_try_to_delete(long, bool)
//{
//    mangled_ppc("?hs_thread_try_to_delete@@YAXJ_N@Z");
//};

//void hs_thread_delete(long, bool)
//{
//    mangled_ppc("?hs_thread_delete@@YAXJ_N@Z");
//};

//bool hs_thread_is_deterministic(long)
//{
//    mangled_ppc("?hs_thread_is_deterministic@@YA_NJ@Z");
//};

//char const * hs_thread_format(long)
//{
//    mangled_ppc("?hs_thread_format@@YAPBDJ@Z");
//};

//void hs_thread_main(long)
//{
//    mangled_ppc("?hs_thread_main@@YAXJ@Z");
//};

//bool hs_syntax_node_exists(long)
//{
//    mangled_ppc("?hs_syntax_node_exists@@YA_NJ@Z");
//};

//bool hs_evaluate(long, long, struct hs_destination_pointer, long *)
//{
//    mangled_ppc("?hs_evaluate@@YA_NJJUhs_destination_pointer@@PAJ@Z");
//};

//long * hs_destination(struct hs_thread *, struct hs_destination_pointer)
//{
//    mangled_ppc("?hs_destination@@YAPAJPAUhs_thread@@Uhs_destination_pointer@@@Z");
//};

//long * hs_stack_destination(struct hs_thread *, struct hs_stack_pointer)
//{
//    mangled_ppc("?hs_stack_destination@@YAPAJPAUhs_thread@@Uhs_stack_pointer@@@Z");
//};

//void hs_return(long, long)
//{
//    mangled_ppc("?hs_return@@YAXJJ@Z");
//};

//long hs_global_evaluate(short)
//{
//    mangled_ppc("?hs_global_evaluate@@YAJF@Z");
//};

//void hs_runtime_push_script(short)
//{
//    mangled_ppc("?hs_runtime_push_script@@YAXF@Z");
//};

//void hs_script_evaluate(short, long, bool)
//{
//    mangled_ppc("?hs_script_evaluate@@YAXFJ_N@Z");
//};

//bool hs_stack_push(long)
//{
//    mangled_ppc("?hs_stack_push@@YA_NJ@Z");
//};

//void hs_stack_pop(long)
//{
//    mangled_ppc("?hs_stack_pop@@YAXJ@Z");
//};

//void * hs_stack_allocate(long, long, long, struct hs_stack_pointer *)
//{
//    mangled_ppc("?hs_stack_allocate@@YAPAXJJJPAUhs_stack_pointer@@@Z");
//};

//void hs_wake(long, long)
//{
//    mangled_ppc("?hs_wake@@YAXJJ@Z");
//};

//long * hs_arguments_evaluate(long, short, short const *, bool)
//{
//    mangled_ppc("?hs_arguments_evaluate@@YAPAJJFPBF_N@Z");
//};

//bool script_error(long, char const *, char const *)
//{
//    mangled_ppc("?script_error@@YA_NJPBD0@Z");
//};

//long hs_find_thread_by_script(short)
//{
//    mangled_ppc("?hs_find_thread_by_script@@YAJF@Z");
//};

//long hs_find_thread_by_name(long)
//{
//    mangled_ppc("?hs_find_thread_by_name@@YAJJ@Z");
//};

//bool valid_thread(long)
//{
//    mangled_ppc("?valid_thread@@YA_NJ@Z");
//};

//void hs_typecasting_table_initialize(void)
//{
//    mangled_ppc("?hs_typecasting_table_initialize@@YAXXZ");
//};

//long hs_data_copy(long)
//{
//    mangled_ppc("?hs_data_copy@@YAJJ@Z");
//};

//long hs_boolean_to_long(long)
//{
//    mangled_ppc("?hs_boolean_to_long@@YAJJ@Z");
//};

//long hs_long_to_boolean(long)
//{
//    mangled_ppc("?hs_long_to_boolean@@YAJJ@Z");
//};

//long hs_short_to_boolean(long)
//{
//    mangled_ppc("?hs_short_to_boolean@@YAJJ@Z");
//};

//long hs_string_to_boolean(long)
//{
//    mangled_ppc("?hs_string_to_boolean@@YAJJ@Z");
//};

//long hs_data_to_void(long)
//{
//    mangled_ppc("?hs_data_to_void@@YAJJ@Z");
//};

//long hs_short_to_real(long)
//{
//    mangled_ppc("?hs_short_to_real@@YAJJ@Z");
//};

//long hs_long_to_real(long)
//{
//    mangled_ppc("?hs_long_to_real@@YAJJ@Z");
//};

//long hs_enum_to_real(long)
//{
//    mangled_ppc("?hs_enum_to_real@@YAJJ@Z");
//};

//long hs_real_to_short(long)
//{
//    mangled_ppc("?hs_real_to_short@@YAJJ@Z");
//};

//long hs_real_to_long(long)
//{
//    mangled_ppc("?hs_real_to_long@@YAJJ@Z");
//};

//long hs_short_to_long(long)
//{
//    mangled_ppc("?hs_short_to_long@@YAJJ@Z");
//};

//long hs_long_to_short(long)
//{
//    mangled_ppc("?hs_long_to_short@@YAJJ@Z");
//};

//long hs_player_to_player(long)
//{
//    mangled_ppc("?hs_player_to_player@@YAJJ@Z");
//};

//long hs_object_to_player(long)
//{
//    mangled_ppc("?hs_object_to_player@@YAJJ@Z");
//};

//long hs_player_to_object(long)
//{
//    mangled_ppc("?hs_player_to_object@@YAJJ@Z");
//};

//long hs_player_to_object_list(long)
//{
//    mangled_ppc("?hs_player_to_object_list@@YAJJ@Z");
//};

//long hs_object_name_to_object_list(long)
//{
//    mangled_ppc("?hs_object_name_to_object_list@@YAJJ@Z");
//};

//long hs_object_to_object_list(long)
//{
//    mangled_ppc("?hs_object_to_object_list@@YAJJ@Z");
//};

//bool hs_can_cast(short, short)
//{
//    mangled_ppc("?hs_can_cast@@YA_NFF@Z");
//};

//bool hs_object_type_can_cast(short, short)
//{
//    mangled_ppc("?hs_object_type_can_cast@@YA_NFF@Z");
//};

//long hs_object_index_from_name_index(long, short)
//{
//    mangled_ppc("?hs_object_index_from_name_index@@YAJJF@Z");
//};

//long hs_cast(long, short, short, long)
//{
//    mangled_ppc("?hs_cast@@YAJJFFJ@Z");
//};

//long hs_runtime_index_from_global_designator(long)
//{
//    mangled_ppc("?hs_runtime_index_from_global_designator@@YAJJ@Z");
//};

//long * hs_macro_function_evaluate(short, long, bool)
//{
//    mangled_ppc("?hs_macro_function_evaluate@@YAPAJFJ_N@Z");
//};

//void hs_reconcile_read(enum e_hs_type, long *, void *)
//{
//    mangled_ppc("?hs_reconcile_read@@YAXW4e_hs_type@@PAJPAX@Z");
//};

//void hs_reconcile_write(enum e_hs_type, long, void *)
//{
//    mangled_ppc("?hs_reconcile_write@@YAXW4e_hs_type@@JPAX@Z");
//};

//void hs_global_reconcile_read(short)
//{
//    mangled_ppc("?hs_global_reconcile_read@@YAXF@Z");
//};

//void hs_global_reconcile_write(short)
//{
//    mangled_ppc("?hs_global_reconcile_write@@YAXF@Z");
//};

//void hs_determinism_trace_status(long, char const *)
//{
//    mangled_ppc("?hs_determinism_trace_status@@YAXJPBD@Z");
//};

//long hs_scripting_get_executing_thread_index(void)
//{
//    mangled_ppc("?hs_scripting_get_executing_thread_index@@YAJXZ");
//};

//void hs_scripting_kill_running_thread(long)
//{
//    mangled_ppc("?hs_scripting_kill_running_thread@@YAXJ@Z");
//};

//void hs_erase_all_threads(void)
//{
//    mangled_ppc("?hs_erase_all_threads@@YAXXZ");
//};

//void hs_scripting_kill_all_threads(void)
//{
//    mangled_ppc("?hs_scripting_kill_all_threads@@YAXXZ");
//};

//void hs_thread_iterator_new(struct s_hs_thread_iterator *, bool, bool)
//{
//    mangled_ppc("?hs_thread_iterator_new@@YAXPAUs_hs_thread_iterator@@_N1@Z");
//};

//long hs_thread_iterator_next(struct s_hs_thread_iterator *)
//{
//    mangled_ppc("?hs_thread_iterator_next@@YAJPAUs_hs_thread_iterator@@@Z");
//};

//public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_runtime_globals_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_hs_runtime_globals_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: void c_data_iterator<struct hs_global_runtime>::begin(struct s_data_array *)
//{
//    mangled_ppc("?begin@?$c_data_iterator@Uhs_global_runtime@@@@QAAXPAUs_data_array@@@Z");
//};

//public: bool c_data_iterator<struct hs_global_runtime>::next(void)
//{
//    mangled_ppc("?next@?$c_data_iterator@Uhs_global_runtime@@@@QAA_NXZ");
//};

//public: struct hs_global_runtime * c_data_iterator<struct hs_global_runtime>::get_datum(void) const
//{
//    mangled_ppc("?get_datum@?$c_data_iterator@Uhs_global_runtime@@@@QBAPAUhs_global_runtime@@XZ");
//};

//public: long c_data_iterator<struct hs_global_runtime>::get_index(void) const
//{
//    mangled_ppc("?get_index@?$c_data_iterator@Uhs_global_runtime@@@@QBAJXZ");
//};

//public: long c_data_iterator<struct hs_global_runtime>::get_absolute_index(void) const
//{
//    mangled_ppc("?get_absolute_index@?$c_data_iterator@Uhs_global_runtime@@@@QBAJXZ");
//};

//public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_runtime_globals_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_hs_runtime_globals_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_thread_deterministic_data_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_thread_deterministic_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_hs_thread_deterministic_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_thread_deterministic_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_hs_thread_deterministic_data_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_thread_deterministic_data_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_hs_thread_deterministic_data_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_thread_deterministic_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_hs_thread_deterministic_data_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_thread_deterministic_data_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_hs_thread_deterministic_data_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_thread_deterministic_data_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_hs_thread_deterministic_data_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_thread_non_deterministic_data_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_thread_non_deterministic_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_hs_thread_non_deterministic_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_thread_non_deterministic_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_hs_thread_non_deterministic_data_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_thread_non_deterministic_data_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_hs_thread_non_deterministic_data_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_thread_non_deterministic_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_hs_thread_non_deterministic_data_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_thread_non_deterministic_data_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_hs_thread_non_deterministic_data_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_thread_non_deterministic_data_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_hs_thread_non_deterministic_data_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_global_data_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_global_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_hs_global_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_global_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_hs_global_data_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_global_data_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_hs_global_data_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_global_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_hs_global_data_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_global_data_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_hs_global_data_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_global_data_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_hs_global_data_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_distributed_global_data_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_distributed_global_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_hs_distributed_global_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_distributed_global_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_hs_distributed_global_data_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_distributed_global_data_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_hs_distributed_global_data_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_distributed_global_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_hs_distributed_global_data_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_distributed_global_data_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_hs_distributed_global_data_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_distributed_global_data_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_hs_distributed_global_data_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_runtime_globals_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_runtime_globals_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_hs_runtime_globals_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_runtime_globals_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_hs_runtime_globals_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_runtime_globals_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_hs_runtime_globals_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_runtime_globals_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_hs_runtime_globals_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_thread_deterministic_data_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_thread_deterministic_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_hs_thread_deterministic_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_thread_non_deterministic_data_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_thread_non_deterministic_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_hs_thread_non_deterministic_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_global_data_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_global_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_hs_global_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_distributed_global_data_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_distributed_global_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_hs_distributed_global_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_runtime_globals_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_hs_runtime_globals_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_hs_runtime_globals_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//void g_hs_thread_deterministic_data_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_hs_thread_deterministic_data_allocator@@YAXXZ");
//};

//void g_hs_thread_non_deterministic_data_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_hs_thread_non_deterministic_data_allocator@@YAXXZ");
//};

//void g_hs_global_data_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_hs_global_data_allocator@@YAXXZ");
//};

//void g_hs_distributed_global_data_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_hs_distributed_global_data_allocator@@YAXXZ");
//};

//void g_hs_runtime_globals_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_hs_runtime_globals_allocator@@YAXXZ");
//};

