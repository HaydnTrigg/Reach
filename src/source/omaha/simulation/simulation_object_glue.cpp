/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// class t_restricted_allocation_manager<1, 0, 0, void (__cdecl __tls_set_g_simulation_object_glue_data_allocator::*)(void *)> g_simulation_object_glue_data_allocator; // "?g_simulation_object_glue_data_allocator@@3V?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_simulation_object_glue_data_allocator@@YAXPAX@Z@@A"
// struct s_data_array *simulation_object_glue_data; // "?simulation_object_glue_data@@3PAUs_data_array@@A"

// void __tls_set_g_simulation_object_glue_data_allocator(void *);
// void simulation_object_glue_initialize(void);
// void simulation_object_glue_dispose(void);
// void simulation_object_glue_initialize_for_new_map(void);
// void simulation_object_glue_build_clear_flags(struct s_simulation_queue_object_glue_clear_data *);
// void simulation_object_glue_clear_by_flags(struct s_simulation_queue_object_glue_clear_data const *);
// void simulation_object_glue_notify_simulation_world_reset(void);
// void simulation_object_glue_dispose_from_old_map(void);
// long simulation_object_glue_create(void);
// long simulation_object_glue_create_at_index(long);
// void simulation_object_glue_delete(long);
// long simulation_object_glue_get_object_index_type_safe(long, unsigned long);
// void simulation_object_glue_set_object_index(long, bool, long);
// long simulation_object_glue_get_simulation_entity_index(long);
// void simulation_object_glue_set_simulation_entity_index(long, long);
// bool simulation_object_glue_indices_are_equivalent(long, long);
// bool simulation_object_glue_index_valid(long);
// void simulation_object_glue_index_encode(class c_bitstream *, long);
// void simulation_object_glue_index_decode(class c_bitstream *, long *);
// void simulation_object_glue_determinism_trace(long, bool, char const *);
// public: void c_data_iterator<struct s_simulation_object_glue>::begin(struct s_data_array *);
// public: bool c_data_iterator<struct s_simulation_object_glue>::next(void);
// public: struct s_simulation_object_glue * c_data_iterator<struct s_simulation_object_glue>::get_datum(void) const;
// public: long c_data_iterator<struct s_simulation_object_glue>::get_absolute_index(void) const;
// public: bool c_big_flags_typed_no_init<long, 2048>::test(long) const;
// public: void c_big_flags_typed_no_init<long, 2048>::set(long, bool);
// public: static bool c_big_flags_typed_no_init<long, 2048>::valid_bit(long);
// public: bool c_big_flags_typed_no_init<long, 2048>::valid(void) const;
// protected: static unsigned long c_big_flags_typed_no_init<long, 2048>::get_mask_of_second_slice_of_chunk_inclusive(long);
// protected: static long c_big_flags_typed_no_init<long, 2048>::flag_chunk_index_to_bit_index(long);
// protected: static long c_big_flags_typed_no_init<long, 2048>::bit_index_to_flag_chunk_index(long);
// protected: static unsigned long c_big_flags_typed_no_init<long, 2048>::get_valid_mask_of_last_chunk(void);
// protected: static unsigned long c_big_flags_typed_no_init<long, 2048>::get_mask_of_first_slice_of_chunk_exclusive(long);
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_simulation_object_glue_data_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_simulation_object_glue_data_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_simulation_object_glue_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_simulation_object_glue_data_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_simulation_object_glue_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_simulation_object_glue_data_allocator::*)(void *)>::free_memory(void);
// public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_simulation_object_glue_data_allocator::*)(void *)>::valid(void) const;
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_simulation_object_glue_data_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_simulation_object_glue_data_allocator::*)(void *)>(void);
// void g_simulation_object_glue_data_allocator::`dynamic atexit destructor'(void);

//void __tls_set_g_simulation_object_glue_data_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_simulation_object_glue_data_allocator@@YAXPAX@Z");
//};

//void simulation_object_glue_initialize(void)
//{
//    mangled_ppc("?simulation_object_glue_initialize@@YAXXZ");
//};

//void simulation_object_glue_dispose(void)
//{
//    mangled_ppc("?simulation_object_glue_dispose@@YAXXZ");
//};

//void simulation_object_glue_initialize_for_new_map(void)
//{
//    mangled_ppc("?simulation_object_glue_initialize_for_new_map@@YAXXZ");
//};

//void simulation_object_glue_build_clear_flags(struct s_simulation_queue_object_glue_clear_data *)
//{
//    mangled_ppc("?simulation_object_glue_build_clear_flags@@YAXPAUs_simulation_queue_object_glue_clear_data@@@Z");
//};

//void simulation_object_glue_clear_by_flags(struct s_simulation_queue_object_glue_clear_data const *)
//{
//    mangled_ppc("?simulation_object_glue_clear_by_flags@@YAXPBUs_simulation_queue_object_glue_clear_data@@@Z");
//};

//void simulation_object_glue_notify_simulation_world_reset(void)
//{
//    mangled_ppc("?simulation_object_glue_notify_simulation_world_reset@@YAXXZ");
//};

//void simulation_object_glue_dispose_from_old_map(void)
//{
//    mangled_ppc("?simulation_object_glue_dispose_from_old_map@@YAXXZ");
//};

//long simulation_object_glue_create(void)
//{
//    mangled_ppc("?simulation_object_glue_create@@YAJXZ");
//};

//long simulation_object_glue_create_at_index(long)
//{
//    mangled_ppc("?simulation_object_glue_create_at_index@@YAJJ@Z");
//};

//void simulation_object_glue_delete(long)
//{
//    mangled_ppc("?simulation_object_glue_delete@@YAXJ@Z");
//};

//long simulation_object_glue_get_object_index_type_safe(long, unsigned long)
//{
//    mangled_ppc("?simulation_object_glue_get_object_index_type_safe@@YAJJK@Z");
//};

//void simulation_object_glue_set_object_index(long, bool, long)
//{
//    mangled_ppc("?simulation_object_glue_set_object_index@@YAXJ_NJ@Z");
//};

//long simulation_object_glue_get_simulation_entity_index(long)
//{
//    mangled_ppc("?simulation_object_glue_get_simulation_entity_index@@YAJJ@Z");
//};

//void simulation_object_glue_set_simulation_entity_index(long, long)
//{
//    mangled_ppc("?simulation_object_glue_set_simulation_entity_index@@YAXJJ@Z");
//};

//bool simulation_object_glue_indices_are_equivalent(long, long)
//{
//    mangled_ppc("?simulation_object_glue_indices_are_equivalent@@YA_NJJ@Z");
//};

//bool simulation_object_glue_index_valid(long)
//{
//    mangled_ppc("?simulation_object_glue_index_valid@@YA_NJ@Z");
//};

//void simulation_object_glue_index_encode(class c_bitstream *, long)
//{
//    mangled_ppc("?simulation_object_glue_index_encode@@YAXPAVc_bitstream@@J@Z");
//};

//void simulation_object_glue_index_decode(class c_bitstream *, long *)
//{
//    mangled_ppc("?simulation_object_glue_index_decode@@YAXPAVc_bitstream@@PAJ@Z");
//};

//void simulation_object_glue_determinism_trace(long, bool, char const *)
//{
//    mangled_ppc("?simulation_object_glue_determinism_trace@@YAXJ_NPBD@Z");
//};

//public: void c_data_iterator<struct s_simulation_object_glue>::begin(struct s_data_array *)
//{
//    mangled_ppc("?begin@?$c_data_iterator@Us_simulation_object_glue@@@@QAAXPAUs_data_array@@@Z");
//};

//public: bool c_data_iterator<struct s_simulation_object_glue>::next(void)
//{
//    mangled_ppc("?next@?$c_data_iterator@Us_simulation_object_glue@@@@QAA_NXZ");
//};

//public: struct s_simulation_object_glue * c_data_iterator<struct s_simulation_object_glue>::get_datum(void) const
//{
//    mangled_ppc("?get_datum@?$c_data_iterator@Us_simulation_object_glue@@@@QBAPAUs_simulation_object_glue@@XZ");
//};

//public: long c_data_iterator<struct s_simulation_object_glue>::get_absolute_index(void) const
//{
//    mangled_ppc("?get_absolute_index@?$c_data_iterator@Us_simulation_object_glue@@@@QBAJXZ");
//};

//public: bool c_big_flags_typed_no_init<long, 2048>::test(long) const
//{
//    mangled_ppc("?test@?$c_big_flags_typed_no_init@J$0IAA@@@QBA_NJ@Z");
//};

//public: void c_big_flags_typed_no_init<long, 2048>::set(long, bool)
//{
//    mangled_ppc("?set@?$c_big_flags_typed_no_init@J$0IAA@@@QAAXJ_N@Z");
//};

//public: static bool c_big_flags_typed_no_init<long, 2048>::valid_bit(long)
//{
//    mangled_ppc("?valid_bit@?$c_big_flags_typed_no_init@J$0IAA@@@SA_NJ@Z");
//};

//public: bool c_big_flags_typed_no_init<long, 2048>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_big_flags_typed_no_init@J$0IAA@@@QBA_NXZ");
//};

//protected: static unsigned long c_big_flags_typed_no_init<long, 2048>::get_mask_of_second_slice_of_chunk_inclusive(long)
//{
//    mangled_ppc("?get_mask_of_second_slice_of_chunk_inclusive@?$c_big_flags_typed_no_init@J$0IAA@@@KAKJ@Z");
//};

//protected: static long c_big_flags_typed_no_init<long, 2048>::flag_chunk_index_to_bit_index(long)
//{
//    mangled_ppc("?flag_chunk_index_to_bit_index@?$c_big_flags_typed_no_init@J$0IAA@@@KAJJ@Z");
//};

//protected: static long c_big_flags_typed_no_init<long, 2048>::bit_index_to_flag_chunk_index(long)
//{
//    mangled_ppc("?bit_index_to_flag_chunk_index@?$c_big_flags_typed_no_init@J$0IAA@@@KAJJ@Z");
//};

//protected: static unsigned long c_big_flags_typed_no_init<long, 2048>::get_valid_mask_of_last_chunk(void)
//{
//    mangled_ppc("?get_valid_mask_of_last_chunk@?$c_big_flags_typed_no_init@J$0IAA@@@KAKXZ");
//};

//protected: static unsigned long c_big_flags_typed_no_init<long, 2048>::get_mask_of_first_slice_of_chunk_exclusive(long)
//{
//    mangled_ppc("?get_mask_of_first_slice_of_chunk_exclusive@?$c_big_flags_typed_no_init@J$0IAA@@@KAKJ@Z");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_simulation_object_glue_data_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_simulation_object_glue_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_simulation_object_glue_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_simulation_object_glue_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_simulation_object_glue_data_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_simulation_object_glue_data_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_simulation_object_glue_data_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_simulation_object_glue_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_simulation_object_glue_data_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_simulation_object_glue_data_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_simulation_object_glue_data_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_simulation_object_glue_data_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_simulation_object_glue_data_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_simulation_object_glue_data_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_simulation_object_glue_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_simulation_object_glue_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//void g_simulation_object_glue_data_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_simulation_object_glue_data_allocator@@YAXXZ");
//};

