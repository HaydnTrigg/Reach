/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const s_static_array<long, 32>::k_element_count; // "?k_element_count@?$s_static_array@J$0CA@@@2JB"
// public: static long const s_static_array<struct s_async_task_priority_timings, 32>::k_element_count; // "?k_element_count@?$s_static_array@Us_async_task_priority_timings@@$0CA@@@2JB"
// public: static long const s_static_array<struct t_thread_safe_list<struct s_async_task_element>::s_list_element, 128>::k_element_count; // "?k_element_count@?$s_static_array@Us_list_element@?$t_thread_safe_list@Us_async_task_element@@@@$0IA@@@2JB"
// struct s_async_task_id const k_invalid_async_task_id; // "?k_invalid_async_task_id@@3Us_async_task_id@@B"

// void async_initialize(void);
// void async_request_shutdown(void);
// void async_dispose(void);
// void async_idle(void);
// bool async_category_in_queue(long);
// public: c_category_counter_visitor::c_category_counter_visitor(long);
// bool async_task_change_priority(struct s_async_task_id, long);
// struct s_async_task_id async_task_add_simple_function(long, long, enum e_async_completion (*)(void *), class c_async_completion_flag *);
// struct s_async_task_id async_task_add_sized_task_data_unsafe(long, long, void const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full);
// void async_yield_begin(class c_async_completion_flag const *);
// public: long c_async_completion_flag::get_internal_data(void) const;
// void async_yield_end(class c_async_completion_flag const *);
// void async_yield_until_done_simple(struct s_async_task_id, class c_async_completion_flag const *);
// public: bool c_async_completion_flag::is_done(void) const;
// long async_get_thread_index_from_task_id(struct s_async_task_id);
// long async_get_local_index_from_task_id(struct s_async_task_id);
// enum e_async_completion async_exit_thread_callback(void *);
// struct s_async_task_id async_add_task_to_work_list_ordered(struct s_async_thread_context *, struct t_thread_safe_list<struct s_async_task_element>::s_list_element *);
// struct s_async_task_id async_add_task_to_work_list_ordered_internal(struct s_async_thread_context *, struct t_thread_safe_list<struct s_async_task_element>::s_list_element *, bool);
// struct s_async_task_id async_build_task_id(long, long, long);
// struct s_async_task_id async_add_task_to_work_list_ordered_with_new_id(struct s_async_thread_context *, struct t_thread_safe_list<struct s_async_task_element>::s_list_element *);
// struct s_async_task_id async_task_add_sized_task_data_with_thread_index_unsafe(long, long, long, void const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full, bool *);
// public: void c_async_completion_flag::set_internal_data(long);
// public: void c_async_completion_flag::set(long);
// struct t_thread_safe_list<struct s_async_task_element>::s_list_element * async_get_free_task_element_from_context_with_block(struct s_async_thread_context *, enum e_async_block_if_full, bool *);
// public: static long s_static_array<struct t_thread_safe_list<struct s_async_task_element>::s_list_element, 128>::get_count(void);
// public: long t_thread_safe_list<struct s_async_task_element>::size(void);
// public: struct t_thread_safe_list<struct s_async_task_element>::s_list_element * t_thread_safe_list<struct s_async_task_element>::get_and_remove_head_element(void);
// public: void t_thread_safe_list<struct s_async_task_element>::lock(void);
// public: void t_thread_safe_list<struct s_async_task_element>::unlock(void);
// public: bool t_thread_safe_list<struct s_async_task_element>::remove_element_assumes_locked(struct t_thread_safe_list<struct s_async_task_element>::s_list_element *);
// public: void t_thread_safe_list<struct s_async_task_element>::visit_list<class c_category_counter_visitor>(class c_category_counter_visitor *);
// public: void c_category_counter_visitor::visit(struct t_thread_safe_list<struct s_async_task_element>::s_list_element *);
// public: struct t_thread_safe_list<struct s_async_task_element>::s_list_element & s_static_array<struct t_thread_safe_list<struct s_async_task_element>::s_list_element, 128>::operator[]<long>(long);
// public: struct t_thread_safe_list<struct s_async_task_element>::s_list_element & s_static_array<struct t_thread_safe_list<struct s_async_task_element>::s_list_element, 128>::operator[]<int>(int);
// public: void t_thread_safe_list<struct s_async_task_element>::add_element_ordered_assumes_locked<class c_async_task_element_comparer>(struct t_thread_safe_list<struct s_async_task_element>::s_list_element *, class c_async_task_element_comparer &);
// public: static bool s_static_array<struct t_thread_safe_list<struct s_async_task_element>::s_list_element, 128>::valid<long>(long);
// public: static bool s_static_array<struct t_thread_safe_list<struct s_async_task_element>::s_list_element, 128>::valid<int>(int);

//void async_initialize(void)
//{
//    mangled_ppc("?async_initialize@@YAXXZ");
//};

//void async_request_shutdown(void)
//{
//    mangled_ppc("?async_request_shutdown@@YAXXZ");
//};

//void async_dispose(void)
//{
//    mangled_ppc("?async_dispose@@YAXXZ");
//};

//void async_idle(void)
//{
//    mangled_ppc("?async_idle@@YAXXZ");
//};

//bool async_category_in_queue(long)
//{
//    mangled_ppc("?async_category_in_queue@@YA_NJ@Z");
//};

//public: c_category_counter_visitor::c_category_counter_visitor(long)
//{
//    mangled_ppc("??0c_category_counter_visitor@@QAA@J@Z");
//};

//bool async_task_change_priority(struct s_async_task_id, long)
//{
//    mangled_ppc("?async_task_change_priority@@YA_NUs_async_task_id@@J@Z");
//};

//struct s_async_task_id async_task_add_simple_function(long, long, enum e_async_completion (*)(void *), class c_async_completion_flag *)
//{
//    mangled_ppc("?async_task_add_simple_function@@YA?AUs_async_task_id@@JJP6A?AW4e_async_completion@@PAX@ZPAVc_async_completion_flag@@@Z");
//};

//struct s_async_task_id async_task_add_sized_task_data_unsafe(long, long, void const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full)
//{
//    mangled_ppc("?async_task_add_sized_task_data_unsafe@@YA?AUs_async_task_id@@JJPBXJP6A?AW4e_async_completion@@PAX@ZPAVc_async_completion_flag@@W4e_async_block_if_full@@@Z");
//};

//void async_yield_begin(class c_async_completion_flag const *)
//{
//    mangled_ppc("?async_yield_begin@@YAXPBVc_async_completion_flag@@@Z");
//};

//public: long c_async_completion_flag::get_internal_data(void) const
//{
//    mangled_ppc("?get_internal_data@c_async_completion_flag@@QBAJXZ");
//};

//void async_yield_end(class c_async_completion_flag const *)
//{
//    mangled_ppc("?async_yield_end@@YAXPBVc_async_completion_flag@@@Z");
//};

//void async_yield_until_done_simple(struct s_async_task_id, class c_async_completion_flag const *)
//{
//    mangled_ppc("?async_yield_until_done_simple@@YAXUs_async_task_id@@PBVc_async_completion_flag@@@Z");
//};

//public: bool c_async_completion_flag::is_done(void) const
//{
//    mangled_ppc("?is_done@c_async_completion_flag@@QBA_NXZ");
//};

//long async_get_thread_index_from_task_id(struct s_async_task_id)
//{
//    mangled_ppc("?async_get_thread_index_from_task_id@@YAJUs_async_task_id@@@Z");
//};

//long async_get_local_index_from_task_id(struct s_async_task_id)
//{
//    mangled_ppc("?async_get_local_index_from_task_id@@YAJUs_async_task_id@@@Z");
//};

//enum e_async_completion async_exit_thread_callback(void *)
//{
//    mangled_ppc("?async_exit_thread_callback@@YA?AW4e_async_completion@@PAX@Z");
//};

//struct s_async_task_id async_add_task_to_work_list_ordered(struct s_async_thread_context *, struct t_thread_safe_list<struct s_async_task_element>::s_list_element *)
//{
//    mangled_ppc("?async_add_task_to_work_list_ordered@@YA?AUs_async_task_id@@PAUs_async_thread_context@@PAUs_list_element@?$t_thread_safe_list@Us_async_task_element@@@@@Z");
//};

//struct s_async_task_id async_add_task_to_work_list_ordered_internal(struct s_async_thread_context *, struct t_thread_safe_list<struct s_async_task_element>::s_list_element *, bool)
//{
//    mangled_ppc("?async_add_task_to_work_list_ordered_internal@@YA?AUs_async_task_id@@PAUs_async_thread_context@@PAUs_list_element@?$t_thread_safe_list@Us_async_task_element@@@@_N@Z");
//};

//struct s_async_task_id async_build_task_id(long, long, long)
//{
//    mangled_ppc("?async_build_task_id@@YA?AUs_async_task_id@@JJJ@Z");
//};

//struct s_async_task_id async_add_task_to_work_list_ordered_with_new_id(struct s_async_thread_context *, struct t_thread_safe_list<struct s_async_task_element>::s_list_element *)
//{
//    mangled_ppc("?async_add_task_to_work_list_ordered_with_new_id@@YA?AUs_async_task_id@@PAUs_async_thread_context@@PAUs_list_element@?$t_thread_safe_list@Us_async_task_element@@@@@Z");
//};

//struct s_async_task_id async_task_add_sized_task_data_with_thread_index_unsafe(long, long, long, void const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full, bool *)
//{
//    mangled_ppc("?async_task_add_sized_task_data_with_thread_index_unsafe@@YA?AUs_async_task_id@@JJJPBXJP6A?AW4e_async_completion@@PAX@ZPAVc_async_completion_flag@@W4e_async_block_if_full@@PA_N@Z");
//};

//public: void c_async_completion_flag::set_internal_data(long)
//{
//    mangled_ppc("?set_internal_data@c_async_completion_flag@@QAAXJ@Z");
//};

//public: void c_async_completion_flag::set(long)
//{
//    mangled_ppc("?set@c_async_completion_flag@@QAAXJ@Z");
//};

//struct t_thread_safe_list<struct s_async_task_element>::s_list_element * async_get_free_task_element_from_context_with_block(struct s_async_thread_context *, enum e_async_block_if_full, bool *)
//{
//    mangled_ppc("?async_get_free_task_element_from_context_with_block@@YAPAUs_list_element@?$t_thread_safe_list@Us_async_task_element@@@@PAUs_async_thread_context@@W4e_async_block_if_full@@PA_N@Z");
//};

//public: static long s_static_array<struct t_thread_safe_list<struct s_async_task_element>::s_list_element, 128>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Us_list_element@?$t_thread_safe_list@Us_async_task_element@@@@$0IA@@@SAJXZ");
//};

//public: long t_thread_safe_list<struct s_async_task_element>::size(void)
//{
//    mangled_ppc("?size@?$t_thread_safe_list@Us_async_task_element@@@@QAAJXZ");
//};

//public: struct t_thread_safe_list<struct s_async_task_element>::s_list_element * t_thread_safe_list<struct s_async_task_element>::get_and_remove_head_element(void)
//{
//    mangled_ppc("?get_and_remove_head_element@?$t_thread_safe_list@Us_async_task_element@@@@QAAPAUs_list_element@1@XZ");
//};

//public: void t_thread_safe_list<struct s_async_task_element>::lock(void)
//{
//    mangled_ppc("?lock@?$t_thread_safe_list@Us_async_task_element@@@@QAAXXZ");
//};

//public: void t_thread_safe_list<struct s_async_task_element>::unlock(void)
//{
//    mangled_ppc("?unlock@?$t_thread_safe_list@Us_async_task_element@@@@QAAXXZ");
//};

//public: bool t_thread_safe_list<struct s_async_task_element>::remove_element_assumes_locked(struct t_thread_safe_list<struct s_async_task_element>::s_list_element *)
//{
//    mangled_ppc("?remove_element_assumes_locked@?$t_thread_safe_list@Us_async_task_element@@@@QAA_NPAUs_list_element@1@@Z");
//};

//public: void t_thread_safe_list<struct s_async_task_element>::visit_list<class c_category_counter_visitor>(class c_category_counter_visitor *)
//{
//    mangled_ppc("??$visit_list@Vc_category_counter_visitor@@@?$t_thread_safe_list@Us_async_task_element@@@@QAAXPAVc_category_counter_visitor@@@Z");
//};

//public: void c_category_counter_visitor::visit(struct t_thread_safe_list<struct s_async_task_element>::s_list_element *)
//{
//    mangled_ppc("?visit@c_category_counter_visitor@@QAAXPAUs_list_element@?$t_thread_safe_list@Us_async_task_element@@@@@Z");
//};

//public: struct t_thread_safe_list<struct s_async_task_element>::s_list_element & s_static_array<struct t_thread_safe_list<struct s_async_task_element>::s_list_element, 128>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_list_element@?$t_thread_safe_list@Us_async_task_element@@@@$0IA@@@QAAAAUs_list_element@?$t_thread_safe_list@Us_async_task_element@@@@J@Z");
//};

//public: struct t_thread_safe_list<struct s_async_task_element>::s_list_element & s_static_array<struct t_thread_safe_list<struct s_async_task_element>::s_list_element, 128>::operator[]<int>(int)
//{
//    mangled_ppc("??$?AH@?$s_static_array@Us_list_element@?$t_thread_safe_list@Us_async_task_element@@@@$0IA@@@QAAAAUs_list_element@?$t_thread_safe_list@Us_async_task_element@@@@H@Z");
//};

//public: void t_thread_safe_list<struct s_async_task_element>::add_element_ordered_assumes_locked<class c_async_task_element_comparer>(struct t_thread_safe_list<struct s_async_task_element>::s_list_element *, class c_async_task_element_comparer &)
//{
//    mangled_ppc("??$add_element_ordered_assumes_locked@Vc_async_task_element_comparer@@@?$t_thread_safe_list@Us_async_task_element@@@@QAAXPAUs_list_element@0@AAVc_async_task_element_comparer@@@Z");
//};

//public: static bool s_static_array<struct t_thread_safe_list<struct s_async_task_element>::s_list_element, 128>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_list_element@?$t_thread_safe_list@Us_async_task_element@@@@$0IA@@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct t_thread_safe_list<struct s_async_task_element>::s_list_element, 128>::valid<int>(int)
//{
//    mangled_ppc("??$valid@H@?$s_static_array@Us_list_element@?$t_thread_safe_list@Us_async_task_element@@@@$0IA@@@SA_NH@Z");
//};

