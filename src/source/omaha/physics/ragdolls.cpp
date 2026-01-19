/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// class t_restricted_allocation_manager<1, 0, 0, void (__cdecl __tls_set_g_ragdoll_data_allocator::*)(void *)> g_ragdoll_data_allocator; // "?g_ragdoll_data_allocator@@3V?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_ragdoll_data_allocator@@YAXPAX@Z@@A"
// struct s_data_array *g_ragdoll_data; // "?g_ragdoll_data@@3PAUs_data_array@@A"

// void __tls_set_g_ragdoll_data_allocator(void *);
// void ragdolls_initialize(void);
// void ragdolls_dispose(void);
// void ragdolls_initialize_for_new_map(void);
// void ragdolls_dispose_from_old_map(void);
// bool ragdolls_can_create_additonal_ragdoll(long, enum e_ragdoll_source);
// long ragdolls_active_ragdoll_count_get(enum e_ragoll_budget);
// long ragdoll_new(long);
// void ragdoll_update(long, class c_havok_component *);
// void ragdoll_notify_accelerated(long);
// void ragdoll_delete(long);
// void ragdoll_save_state(long, class c_havok_component *);
// void ragdoll_restore_state(long, class c_havok_component *);
// public: void c_data_iterator<struct s_ragdoll_datum>::begin(struct s_data_array *);
// public: bool c_data_iterator<struct s_ragdoll_datum>::next(void);
// public: struct s_ragdoll_datum * c_data_iterator<struct s_ragdoll_datum>::get_datum(void) const;
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_ragdoll_data_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_ragdoll_data_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_ragdoll_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_ragdoll_data_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_ragdoll_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_ragdoll_data_allocator::*)(void *)>::free_memory(void);
// public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_ragdoll_data_allocator::*)(void *)>::valid(void) const;
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_ragdoll_data_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_ragdoll_data_allocator::*)(void *)>(void);
// void g_ragdoll_data_allocator::`dynamic atexit destructor'(void);

//void __tls_set_g_ragdoll_data_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_ragdoll_data_allocator@@YAXPAX@Z");
//};

//void ragdolls_initialize(void)
//{
//    mangled_ppc("?ragdolls_initialize@@YAXXZ");
//};

//void ragdolls_dispose(void)
//{
//    mangled_ppc("?ragdolls_dispose@@YAXXZ");
//};

//void ragdolls_initialize_for_new_map(void)
//{
//    mangled_ppc("?ragdolls_initialize_for_new_map@@YAXXZ");
//};

//void ragdolls_dispose_from_old_map(void)
//{
//    mangled_ppc("?ragdolls_dispose_from_old_map@@YAXXZ");
//};

//bool ragdolls_can_create_additonal_ragdoll(long, enum e_ragdoll_source)
//{
//    mangled_ppc("?ragdolls_can_create_additonal_ragdoll@@YA_NJW4e_ragdoll_source@@@Z");
//};

//long ragdolls_active_ragdoll_count_get(enum e_ragoll_budget)
//{
//    mangled_ppc("?ragdolls_active_ragdoll_count_get@@YAJW4e_ragoll_budget@@@Z");
//};

//long ragdoll_new(long)
//{
//    mangled_ppc("?ragdoll_new@@YAJJ@Z");
//};

//void ragdoll_update(long, class c_havok_component *)
//{
//    mangled_ppc("?ragdoll_update@@YAXJPAVc_havok_component@@@Z");
//};

//void ragdoll_notify_accelerated(long)
//{
//    mangled_ppc("?ragdoll_notify_accelerated@@YAXJ@Z");
//};

//void ragdoll_delete(long)
//{
//    mangled_ppc("?ragdoll_delete@@YAXJ@Z");
//};

//void ragdoll_save_state(long, class c_havok_component *)
//{
//    mangled_ppc("?ragdoll_save_state@@YAXJPAVc_havok_component@@@Z");
//};

//void ragdoll_restore_state(long, class c_havok_component *)
//{
//    mangled_ppc("?ragdoll_restore_state@@YAXJPAVc_havok_component@@@Z");
//};

//public: void c_data_iterator<struct s_ragdoll_datum>::begin(struct s_data_array *)
//{
//    mangled_ppc("?begin@?$c_data_iterator@Us_ragdoll_datum@@@@QAAXPAUs_data_array@@@Z");
//};

//public: bool c_data_iterator<struct s_ragdoll_datum>::next(void)
//{
//    mangled_ppc("?next@?$c_data_iterator@Us_ragdoll_datum@@@@QAA_NXZ");
//};

//public: struct s_ragdoll_datum * c_data_iterator<struct s_ragdoll_datum>::get_datum(void) const
//{
//    mangled_ppc("?get_datum@?$c_data_iterator@Us_ragdoll_datum@@@@QBAPAUs_ragdoll_datum@@XZ");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_ragdoll_data_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_ragdoll_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_ragdoll_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_ragdoll_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_ragdoll_data_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_ragdoll_data_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_ragdoll_data_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_ragdoll_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_ragdoll_data_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_ragdoll_data_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_ragdoll_data_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_ragdoll_data_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_ragdoll_data_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_ragdoll_data_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_ragdoll_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_ragdoll_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//void g_ragdoll_data_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_ragdoll_data_allocator@@YAXXZ");
//};

