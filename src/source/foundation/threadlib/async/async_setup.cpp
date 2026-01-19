/* ---------- headers */

#include "foundation\threadlib\async\async_setup.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const s_static_array<struct s_async_thread_context, 4>::k_element_count; // "?k_element_count@?$s_static_array@Us_async_thread_context@@$03@@2JB"

// void `vector destructor iterator'(void *, unsigned int, int, void (*)(void *));
// void async_setup_initialize(void);
// void async_setup_dispose(void);
// long async_setup_get_encoding_bit_count_for_thread_indices(void);
// void async_setup_set_thread_count(long);
// long async_setup_get_thread_count(void);
// void async_setup_set_categories_for_thread(long, long const *, long);
// void async_setup_synchronization_for_thread(long, struct s_semaphore, struct s_critical_section, struct s_critical_section, struct s_virtual_guard_block);
// void async_setup_set_thread_work_delay(long, long);
// void async_setup_set_free_list_blocked_callback_for_thread(long, void (*)(void));
// void async_setup_set_profiler(class c_async_profile_interface *);
// void async_setup_set_compare_interface_for_thread(long, struct s_async_task_compare_interface *);
// long async_setup_get_thread_work_delay(long);
// public: long c_interlocked_int32::operator long(void) const;
// public: long c_interlocked_int32::peek(void) const volatile;
// long async_setup_get_thread_index_for_category(long);
// bool async_setup_is_thread_index_valid(long);
// struct s_async_thread_context * async_setup_get_context_for_thread(long);
// struct s_async_thread_context * async_setup_get_context_for_category(long);
// long async_setup_get_total_tasks_added(void);
// long async_setup_increment_total_tasks_added(void);
// class c_async_profile_interface * async_setup_get_registered_profiler(void);
// struct s_async_task_compare_interface * async_setup_get_compare_interface_for_thread(long);
// public: void s_static_array<long, 32>::set_all(long const &);
// public: void s_static_array<long, 32>::set_memory(long);
// bool pointer_is_aligned(void const *, long);
// unsigned long address_from_pointer(void const *);
// bool address_is_aligned(unsigned long, long);
// public: void s_static_array<struct s_async_task_priority_timings, 32>::set_memory(long);
// public: void s_static_array<struct t_thread_safe_list<struct s_async_task_element>::s_list_element, 128>::set_memory(long);
// public: static long s_static_array<struct s_async_thread_context, 4>::get_count(void);
// public: void t_thread_safe_list<struct s_async_task_element>::initialize(struct s_critical_section);
// public: void t_thread_safe_list<struct s_async_task_element>::dispose(void);
// public: void t_thread_safe_list<struct s_async_task_element>::add_element_to_front(struct t_thread_safe_list<struct s_async_task_element>::s_list_element *);
// public: struct s_async_thread_context & s_static_array<struct s_async_thread_context, 4>::operator[]<long>(long);
// public: long & s_static_array<long, 32>::operator[]<long>(long);
// bool operator!=<unsigned long>(unsigned long const &, enum e_none_sentinel const &);
// public: static bool s_static_array<struct s_async_thread_context, 4>::valid<long>(long);
// public: static bool s_static_array<long, 32>::valid<long>(long);
// bool operator==<unsigned long>(unsigned long const &, enum e_none_sentinel const &);
// public: s_async_globals::s_async_globals(void);
// public: s_static_array<struct s_async_thread_context, 4>::s_static_array<struct s_async_thread_context, 4>(void);
// public: s_async_thread_context::s_async_thread_context(void);
// public: c_interlocked_int32::c_interlocked_int32(void);
// public: s_async_thread_internal_statistics::s_async_thread_internal_statistics(void);
// public: t_thread_safe_list<struct s_async_task_element>::t_thread_safe_list<struct s_async_task_element>(void);
// public: s_async_globals::~s_async_globals(void);
// public: s_static_array<struct s_async_thread_context, 4>::~s_static_array<struct s_async_thread_context, 4>(void);
// public: s_async_thread_context::~s_async_thread_context(void);
// public: c_interlocked_int32::~c_interlocked_int32(void);
// public: s_async_thread_internal_statistics::~s_async_thread_internal_statistics(void);
// public: t_thread_safe_list<struct s_async_task_element>::~t_thread_safe_list<struct s_async_task_element>(void);
// void g_async_globals::`dynamic atexit destructor'(void);

//void `vector destructor iterator'(void *, unsigned int, int, void (*)(void *))
//{
//    mangled_ppc("??_I@YAXPAXIHP6AX0@Z@Z");
//};

//void async_setup_initialize(void)
//{
//    mangled_ppc("?async_setup_initialize@@YAXXZ");
//};

//void async_setup_dispose(void)
//{
//    mangled_ppc("?async_setup_dispose@@YAXXZ");
//};

//long async_setup_get_encoding_bit_count_for_thread_indices(void)
//{
//    mangled_ppc("?async_setup_get_encoding_bit_count_for_thread_indices@@YAJXZ");
//};

//void async_setup_set_thread_count(long)
//{
//    mangled_ppc("?async_setup_set_thread_count@@YAXJ@Z");
//};

//long async_setup_get_thread_count(void)
//{
//    mangled_ppc("?async_setup_get_thread_count@@YAJXZ");
//};

//void async_setup_set_categories_for_thread(long, long const *, long)
//{
//    mangled_ppc("?async_setup_set_categories_for_thread@@YAXJPBJJ@Z");
//};

//void async_setup_synchronization_for_thread(long, struct s_semaphore, struct s_critical_section, struct s_critical_section, struct s_virtual_guard_block)
//{
//    mangled_ppc("?async_setup_synchronization_for_thread@@YAXJUs_semaphore@@Us_critical_section@@1Us_virtual_guard_block@@@Z");
//};

//void async_setup_set_thread_work_delay(long, long)
//{
//    mangled_ppc("?async_setup_set_thread_work_delay@@YAXJJ@Z");
//};

//void async_setup_set_free_list_blocked_callback_for_thread(long, void (*)(void))
//{
//    mangled_ppc("?async_setup_set_free_list_blocked_callback_for_thread@@YAXJP6AXXZ@Z");
//};

//void async_setup_set_profiler(class c_async_profile_interface *)
//{
//    mangled_ppc("?async_setup_set_profiler@@YAXPAVc_async_profile_interface@@@Z");
//};

//void async_setup_set_compare_interface_for_thread(long, struct s_async_task_compare_interface *)
//{
//    mangled_ppc("?async_setup_set_compare_interface_for_thread@@YAXJPAUs_async_task_compare_interface@@@Z");
//};

//long async_setup_get_thread_work_delay(long)
//{
//    mangled_ppc("?async_setup_get_thread_work_delay@@YAJJ@Z");
//};

//public: long c_interlocked_int32::operator long(void) const
//{
//    mangled_ppc("??Bc_interlocked_int32@@QBAJXZ");
//};

//public: long c_interlocked_int32::peek(void) const volatile
//{
//    mangled_ppc("?peek@c_interlocked_int32@@QDAJXZ");
//};

//long async_setup_get_thread_index_for_category(long)
//{
//    mangled_ppc("?async_setup_get_thread_index_for_category@@YAJJ@Z");
//};

//bool async_setup_is_thread_index_valid(long)
//{
//    mangled_ppc("?async_setup_is_thread_index_valid@@YA_NJ@Z");
//};

//struct s_async_thread_context * async_setup_get_context_for_thread(long)
//{
//    mangled_ppc("?async_setup_get_context_for_thread@@YAPAUs_async_thread_context@@J@Z");
//};

//struct s_async_thread_context * async_setup_get_context_for_category(long)
//{
//    mangled_ppc("?async_setup_get_context_for_category@@YAPAUs_async_thread_context@@J@Z");
//};

//long async_setup_get_total_tasks_added(void)
//{
//    mangled_ppc("?async_setup_get_total_tasks_added@@YAJXZ");
//};

//long async_setup_increment_total_tasks_added(void)
//{
//    mangled_ppc("?async_setup_increment_total_tasks_added@@YAJXZ");
//};

//class c_async_profile_interface * async_setup_get_registered_profiler(void)
//{
//    mangled_ppc("?async_setup_get_registered_profiler@@YAPAVc_async_profile_interface@@XZ");
//};

//struct s_async_task_compare_interface * async_setup_get_compare_interface_for_thread(long)
//{
//    mangled_ppc("?async_setup_get_compare_interface_for_thread@@YAPAUs_async_task_compare_interface@@J@Z");
//};

//public: void s_static_array<long, 32>::set_all(long const &)
//{
//    mangled_ppc("?set_all@?$s_static_array@J$0CA@@@QAAXABJ@Z");
//};

//public: void s_static_array<long, 32>::set_memory(long)
//{
//    mangled_ppc("?set_memory@?$s_static_array@J$0CA@@@QAAXJ@Z");
//};

//bool pointer_is_aligned(void const *, long)
//{
//    mangled_ppc("?pointer_is_aligned@@YA_NPBXJ@Z");
//};

//unsigned long address_from_pointer(void const *)
//{
//    mangled_ppc("?address_from_pointer@@YAKPBX@Z");
//};

//bool address_is_aligned(unsigned long, long)
//{
//    mangled_ppc("?address_is_aligned@@YA_NKJ@Z");
//};

//public: void s_static_array<struct s_async_task_priority_timings, 32>::set_memory(long)
//{
//    mangled_ppc("?set_memory@?$s_static_array@Us_async_task_priority_timings@@$0CA@@@QAAXJ@Z");
//};

//public: void s_static_array<struct t_thread_safe_list<struct s_async_task_element>::s_list_element, 128>::set_memory(long)
//{
//    mangled_ppc("?set_memory@?$s_static_array@Us_list_element@?$t_thread_safe_list@Us_async_task_element@@@@$0IA@@@QAAXJ@Z");
//};

//public: static long s_static_array<struct s_async_thread_context, 4>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Us_async_thread_context@@$03@@SAJXZ");
//};

//public: void t_thread_safe_list<struct s_async_task_element>::initialize(struct s_critical_section)
//{
//    mangled_ppc("?initialize@?$t_thread_safe_list@Us_async_task_element@@@@QAAXUs_critical_section@@@Z");
//};

//public: void t_thread_safe_list<struct s_async_task_element>::dispose(void)
//{
//    mangled_ppc("?dispose@?$t_thread_safe_list@Us_async_task_element@@@@QAAXXZ");
//};

//public: void t_thread_safe_list<struct s_async_task_element>::add_element_to_front(struct t_thread_safe_list<struct s_async_task_element>::s_list_element *)
//{
//    mangled_ppc("?add_element_to_front@?$t_thread_safe_list@Us_async_task_element@@@@QAAXPAUs_list_element@1@@Z");
//};

//public: struct s_async_thread_context & s_static_array<struct s_async_thread_context, 4>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_async_thread_context@@$03@@QAAAAUs_async_thread_context@@J@Z");
//};

//public: long & s_static_array<long, 32>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@J$0CA@@@QAAAAJJ@Z");
//};

//bool operator!=<unsigned long>(unsigned long const &, enum e_none_sentinel const &)
//{
//    mangled_ppc("??$?9K@@YA_NABKABW4e_none_sentinel@@@Z");
//};

//public: static bool s_static_array<struct s_async_thread_context, 4>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_async_thread_context@@$03@@SA_NJ@Z");
//};

//public: static bool s_static_array<long, 32>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@J$0CA@@@SA_NJ@Z");
//};

//bool operator==<unsigned long>(unsigned long const &, enum e_none_sentinel const &)
//{
//    mangled_ppc("??$?8K@@YA_NABKABW4e_none_sentinel@@@Z");
//};

//public: s_async_globals::s_async_globals(void)
//{
//    mangled_ppc("??0s_async_globals@@QAA@XZ");
//};

//public: s_static_array<struct s_async_thread_context, 4>::s_static_array<struct s_async_thread_context, 4>(void)
//{
//    mangled_ppc("??0?$s_static_array@Us_async_thread_context@@$03@@QAA@XZ");
//};

//public: s_async_thread_context::s_async_thread_context(void)
//{
//    mangled_ppc("??0s_async_thread_context@@QAA@XZ");
//};

//public: c_interlocked_int32::c_interlocked_int32(void)
//{
//    mangled_ppc("??0c_interlocked_int32@@QAA@XZ");
//};

//public: s_async_thread_internal_statistics::s_async_thread_internal_statistics(void)
//{
//    mangled_ppc("??0s_async_thread_internal_statistics@@QAA@XZ");
//};

//public: t_thread_safe_list<struct s_async_task_element>::t_thread_safe_list<struct s_async_task_element>(void)
//{
//    mangled_ppc("??0?$t_thread_safe_list@Us_async_task_element@@@@QAA@XZ");
//};

//public: s_async_globals::~s_async_globals(void)
//{
//    mangled_ppc("??1s_async_globals@@QAA@XZ");
//};

//public: s_static_array<struct s_async_thread_context, 4>::~s_static_array<struct s_async_thread_context, 4>(void)
//{
//    mangled_ppc("??1?$s_static_array@Us_async_thread_context@@$03@@QAA@XZ");
//};

//public: s_async_thread_context::~s_async_thread_context(void)
//{
//    mangled_ppc("??1s_async_thread_context@@QAA@XZ");
//};

//public: c_interlocked_int32::~c_interlocked_int32(void)
//{
//    mangled_ppc("??1c_interlocked_int32@@QAA@XZ");
//};

//public: s_async_thread_internal_statistics::~s_async_thread_internal_statistics(void)
//{
//    mangled_ppc("??1s_async_thread_internal_statistics@@QAA@XZ");
//};

//public: t_thread_safe_list<struct s_async_task_element>::~t_thread_safe_list<struct s_async_task_element>(void)
//{
//    mangled_ppc("??1?$t_thread_safe_list@Us_async_task_element@@@@QAA@XZ");
//};

//void g_async_globals::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_async_globals@@YAXXZ");
//};

