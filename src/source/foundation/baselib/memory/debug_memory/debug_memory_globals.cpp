/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static short const c_static_hash_table_data<struct s_header_tracking_info *, 8192>::k_hash_entry_invalid; // "?k_hash_entry_invalid@?$c_static_hash_table_data@PAUs_header_tracking_info@@$0CAAA@@@2FB"
// public: static long const s_static_array<struct c_static_hash_table_data<struct s_header_tracking_info *, 8192>::s_data, 8192>::k_element_count; // "?k_element_count@?$s_static_array@Us_data@?$c_static_hash_table_data@PAUs_header_tracking_info@@$0CAAA@@@$0CAAA@@@2JB"
// public: static long const c_static_hash_table<class c_static_hash_table_data<struct s_header_tracking_info *, 8192>, 3001, 7187, 9973>::k_hash_invalid; // "?k_hash_invalid@?$c_static_hash_table@V?$c_static_hash_table_data@PAUs_header_tracking_info@@$0CAAA@@@$0LLJ@$0BMBD@$0CGPF@@@2JB"
// char const *const k_source_directory_string; // "?k_source_directory_string@@3PBDB"
// long volatile `public: static long __cdecl c_static_hash_table<class c_static_hash_table_data<struct s_header_tracking_info *, 8192>, 3001, 7187, 9973>::find_entry(class c_static_hash_table_data<struct s_header_tracking_info *, 8192> const *, long, long, long)'::`32'::x_event_category_index; // "?x_event_category_index@?CA@??find_entry@?$c_static_hash_table@V?$c_static_hash_table_data@PAUs_header_tracking_info@@$0CAAA@@@$0LLJ@$0BMBD@$0CGPF@@@SAJPBV?$c_static_hash_table_data@PAUs_header_tracking_info@@$0CAAA@@@JJJ@Z@4JC"
// class c_hash_table<struct s_pointer_header *, void> g_nonheap_hash_table; // "?g_nonheap_hash_table@@3V?$c_hash_table@PAUs_pointer_header@@X@@A"

// ?debug_memory_manager_initialize@@YAXQ6AKPBXI@ZQ6AGXZ@Z;
// void debug_memory_manager_dispose(void);
// void debug_memory_initialize_static(void);
// void debug_dump_memory_at_exit(void);
// void debug_memory_begin_exit(void);
// void debug_verify_memory(char const *, long);
// void * get_user_pointer_from_header(struct s_pointer_header *);
// void debug_notify_out_of_memory(char const *, long);
// void debug_checkpoint_memory(char const *, char const *, long);
// void debug_physical_memory_monitor(struct s_physical_memory_monitor *, char const *);
// void debug_memory_get_memory_information(struct s_debug_memory_information *);
// void check_debug_memory_manager(char const *, long);
// void check_header(struct s_pointer_header const *, char const *, long);
// void const * get_user_pointer_from_header_const(struct s_pointer_header const *);
// void check_pointer(void const *, char const *, long);
// struct s_pointer_header const * get_header_from_user_pointer_const(void const *);
// struct s_pointer_header * get_header_from_user_pointer(void *);
// struct s_pointer_trailer const * get_trailer_from_header_const(struct s_pointer_header const *);
// struct s_pointer_trailer * get_trailer_from_header(struct s_pointer_header *);
// void check_nonheap_resource(struct s_pointer_header const *, char const *, long);
// void build_header_and_trailer(void *, unsigned int, long, long, enum e_debug_memory_flags, char const *, long, long, unsigned int, char const *, char const *, char const *, void const *, bool);
// struct s_pointer_header const * get_heap_queue(void);
// struct s_pointer_header const * get_free_queue(void);
// void queue_header(struct s_pointer_header *);
// void dequeue_header(struct s_pointer_header *, char const *, long);
// bool query_possible_header(struct s_pointer_header const *);
// struct s_pointer_header * query_nonheap_header(void const *);
// unsigned long checksum_header(struct s_pointer_header const *);
// void force_release_header(struct s_pointer_header *, char const *, long);
// void track_heap_allocation_size(unsigned int, unsigned int);
// void track_nonheap_allocation_size(unsigned int, unsigned int);
// void pretrack_nonheap_allocation_size(unsigned int, unsigned int);
// char const * make_constant_string(char const *);
// char const * safe_printable_string(char const *);
// char const * strip_source_directory(char const *);
// void debug_memory_free_emergency_reserve(void);
// bool thread_can_use_debug_memory(void);
// bool debug_pointer_valid(void *);
// unsigned int debug_get_used_memory_size(void *, char const *, long);
// void * get_base_pointer_from_header(struct s_pointer_header *);
// unsigned int debug_get_actual_memory_size(void *, char const *, long);
// unsigned int header_get_actual_size(struct s_pointer_header const *);
// public: virtual void * c_debug_memory_internal_allocation::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void c_debug_memory_internal_allocation::deallocate(void *, char const *, long);
// unsigned long nonheap_hash_function(void const *);
// bool nonheap_compare_function(void const *, void const *);
// struct s_header_tracking_info * find_or_allocate_tracking_info(char const *, long, char const *, char const *, char const *);
// long get_constant_string_key(char const *);
// void dispose_tracking_info(void);
// ?set_checksum_function@@YAXQ6AKPBXI@Z@Z;
// ?set_local_random_function@@YAXQ6AGXZ@Z;
// public: struct s_header_tracking_info ** c_static_hash_table_data<struct s_header_tracking_info *, 8192>::get_element(long);
// public: bool c_hash_table<struct s_pointer_header *, void>::is_created(void) const;
// ?create@?$c_hash_table@PAUs_pointer_header@@X@@QAA_NPBDJJQ6AKPBX@ZQ6A_N11@Z0JPAVc_allocation_interface@@@Z;
// public: void c_hash_table<struct s_pointer_header *, void>::dispose(char const *, long);
// public: bool c_hash_table<struct s_pointer_header *, void>::remove(void const *);
// public: void const * c_hash_table<struct s_pointer_header *, void>::find(void const *, struct s_pointer_header **) const;
// public: void c_static_hash_table_data<struct s_header_tracking_info *, 8192>::clear_all(void);
// unsigned int int_max<unsigned int>(unsigned int const &, unsigned int const &);
// public: static long c_static_hash_table<class c_static_hash_table_data<struct s_header_tracking_info *, 8192>, 3001, 7187, 9973>::iterator_begin(class c_static_hash_table_data<struct s_header_tracking_info *, 8192> const *);
// public: static long c_static_hash_table<class c_static_hash_table_data<struct s_header_tracking_info *, 8192>, 3001, 7187, 9973>::iterator_next(class c_static_hash_table_data<struct s_header_tracking_info *, 8192> const *, long);
// public: static long c_static_hash_table<class c_static_hash_table_data<struct s_header_tracking_info *, 8192>, 3001, 7187, 9973>::add_entry(class c_static_hash_table_data<struct s_header_tracking_info *, 8192> *, long, long, long);
// public: static long c_static_hash_table<class c_static_hash_table_data<struct s_header_tracking_info *, 8192>, 3001, 7187, 9973>::find_entry(class c_static_hash_table_data<struct s_header_tracking_info *, 8192> const *, long, long, long);
// public: struct c_static_hash_table_data<struct s_header_tracking_info *, 8192>::s_data & s_static_array<struct c_static_hash_table_data<struct s_header_tracking_info *, 8192>::s_data, 8192>::operator[]<long>(long);
// public: struct c_static_hash_table_data<struct s_header_tracking_info *, 8192>::s_data * c_static_hash_table_data<struct s_header_tracking_info *, 8192>::get_data(long);
// public: struct c_static_hash_table_data<struct s_header_tracking_info *, 8192>::s_data const * c_static_hash_table_data<struct s_header_tracking_info *, 8192>::get_data(long) const;
// public: long c_static_hash_table_data<struct s_header_tracking_info *, 8192>::get_total_count(void) const;
// public: long c_static_hash_table_data<struct s_header_tracking_info *, 8192>::get_maximum_count(void) const;
// public: void c_static_hash_table_data<struct s_header_tracking_info *, 8192>::increment_total_count(void);
// public: short * c_static_hash_table_data<struct s_header_tracking_info *, 8192>::get_hash_entry_count(void);
// public: short const * c_static_hash_table_data<struct s_header_tracking_info *, 8192>::get_hash_entry_count(void) const;
// public: short * c_static_hash_table_data<struct s_header_tracking_info *, 8192>::get_original_hash_entry(void);
// public: short const * c_static_hash_table_data<struct s_header_tracking_info *, 8192>::get_original_hash_entry(void) const;
// private: static long c_static_hash_table<class c_static_hash_table_data<struct s_header_tracking_info *, 8192>, 3001, 7187, 9973>::calculate_hash(class c_static_hash_table_data<struct s_header_tracking_info *, 8192> const *, long, long, long);
// private: static long c_static_hash_table<class c_static_hash_table_data<struct s_header_tracking_info *, 8192>, 3001, 7187, 9973>::find_new_hash_entry(class c_static_hash_table_data<struct s_header_tracking_info *, 8192> *, long);
// public: static bool s_static_array<struct c_static_hash_table_data<struct s_header_tracking_info *, 8192>::s_data, 8192>::valid<long>(long);
// public: struct c_static_hash_table_data<struct s_header_tracking_info *, 8192>::s_data const & s_static_array<struct c_static_hash_table_data<struct s_header_tracking_info *, 8192>::s_data, 8192>::operator[]<long>(long) const;
// public: c_debug_memory_initializer::c_debug_memory_initializer(void);
// public: c_hash_table<struct s_pointer_header *, void>::c_hash_table<struct s_pointer_header *, void>(void);
// public: c_debug_memory_internal_allocation::c_debug_memory_internal_allocation(void);
// public: c_hash_table<struct s_pointer_header *, void>::~c_hash_table<struct s_pointer_header *, void>(void);
// void g_nonheap_hash_table::`dynamic atexit destructor'(void);

//?debug_memory_manager_initialize@@YAXQ6AKPBXI@ZQ6AGXZ@Z
//{
//    mangled_ppc("?debug_memory_manager_initialize@@YAXQ6AKPBXI@ZQ6AGXZ@Z");
//};

//void debug_memory_manager_dispose(void)
//{
//    mangled_ppc("?debug_memory_manager_dispose@@YAXXZ");
//};

//void debug_memory_initialize_static(void)
//{
//    mangled_ppc("?debug_memory_initialize_static@@YAXXZ");
//};

//void debug_dump_memory_at_exit(void)
//{
//    mangled_ppc("?debug_dump_memory_at_exit@@YAXXZ");
//};

//void debug_memory_begin_exit(void)
//{
//    mangled_ppc("?debug_memory_begin_exit@@YAXXZ");
//};

//void debug_verify_memory(char const *, long)
//{
//    mangled_ppc("?debug_verify_memory@@YAXPBDJ@Z");
//};

//void * get_user_pointer_from_header(struct s_pointer_header *)
//{
//    mangled_ppc("?get_user_pointer_from_header@@YAPAXPAUs_pointer_header@@@Z");
//};

//void debug_notify_out_of_memory(char const *, long)
//{
//    mangled_ppc("?debug_notify_out_of_memory@@YAXPBDJ@Z");
//};

//void debug_checkpoint_memory(char const *, char const *, long)
//{
//    mangled_ppc("?debug_checkpoint_memory@@YAXPBD0J@Z");
//};

//void debug_physical_memory_monitor(struct s_physical_memory_monitor *, char const *)
//{
//    mangled_ppc("?debug_physical_memory_monitor@@YAXPAUs_physical_memory_monitor@@PBD@Z");
//};

//void debug_memory_get_memory_information(struct s_debug_memory_information *)
//{
//    mangled_ppc("?debug_memory_get_memory_information@@YAXPAUs_debug_memory_information@@@Z");
//};

//void check_debug_memory_manager(char const *, long)
//{
//    mangled_ppc("?check_debug_memory_manager@@YAXPBDJ@Z");
//};

//void check_header(struct s_pointer_header const *, char const *, long)
//{
//    mangled_ppc("?check_header@@YAXPBUs_pointer_header@@PBDJ@Z");
//};

//void const * get_user_pointer_from_header_const(struct s_pointer_header const *)
//{
//    mangled_ppc("?get_user_pointer_from_header_const@@YAPBXPBUs_pointer_header@@@Z");
//};

//void check_pointer(void const *, char const *, long)
//{
//    mangled_ppc("?check_pointer@@YAXPBXPBDJ@Z");
//};

//struct s_pointer_header const * get_header_from_user_pointer_const(void const *)
//{
//    mangled_ppc("?get_header_from_user_pointer_const@@YAPBUs_pointer_header@@PBX@Z");
//};

//struct s_pointer_header * get_header_from_user_pointer(void *)
//{
//    mangled_ppc("?get_header_from_user_pointer@@YAPAUs_pointer_header@@PAX@Z");
//};

//struct s_pointer_trailer const * get_trailer_from_header_const(struct s_pointer_header const *)
//{
//    mangled_ppc("?get_trailer_from_header_const@@YAPBUs_pointer_trailer@@PBUs_pointer_header@@@Z");
//};

//struct s_pointer_trailer * get_trailer_from_header(struct s_pointer_header *)
//{
//    mangled_ppc("?get_trailer_from_header@@YAPAUs_pointer_trailer@@PAUs_pointer_header@@@Z");
//};

//void check_nonheap_resource(struct s_pointer_header const *, char const *, long)
//{
//    mangled_ppc("?check_nonheap_resource@@YAXPBUs_pointer_header@@PBDJ@Z");
//};

//void build_header_and_trailer(void *, unsigned int, long, long, enum e_debug_memory_flags, char const *, long, long, unsigned int, char const *, char const *, char const *, void const *, bool)
//{
//    mangled_ppc("?build_header_and_trailer@@YAXPAXIJJW4e_debug_memory_flags@@PBDJJI222PBX_N@Z");
//};

//struct s_pointer_header const * get_heap_queue(void)
//{
//    mangled_ppc("?get_heap_queue@@YAPBUs_pointer_header@@XZ");
//};

//struct s_pointer_header const * get_free_queue(void)
//{
//    mangled_ppc("?get_free_queue@@YAPBUs_pointer_header@@XZ");
//};

//void queue_header(struct s_pointer_header *)
//{
//    mangled_ppc("?queue_header@@YAXPAUs_pointer_header@@@Z");
//};

//void dequeue_header(struct s_pointer_header *, char const *, long)
//{
//    mangled_ppc("?dequeue_header@@YAXPAUs_pointer_header@@PBDJ@Z");
//};

//bool query_possible_header(struct s_pointer_header const *)
//{
//    mangled_ppc("?query_possible_header@@YA_NPBUs_pointer_header@@@Z");
//};

//struct s_pointer_header * query_nonheap_header(void const *)
//{
//    mangled_ppc("?query_nonheap_header@@YAPAUs_pointer_header@@PBX@Z");
//};

//unsigned long checksum_header(struct s_pointer_header const *)
//{
//    mangled_ppc("?checksum_header@@YAKPBUs_pointer_header@@@Z");
//};

//void force_release_header(struct s_pointer_header *, char const *, long)
//{
//    mangled_ppc("?force_release_header@@YAXPAUs_pointer_header@@PBDJ@Z");
//};

//void track_heap_allocation_size(unsigned int, unsigned int)
//{
//    mangled_ppc("?track_heap_allocation_size@@YAXII@Z");
//};

//void track_nonheap_allocation_size(unsigned int, unsigned int)
//{
//    mangled_ppc("?track_nonheap_allocation_size@@YAXII@Z");
//};

//void pretrack_nonheap_allocation_size(unsigned int, unsigned int)
//{
//    mangled_ppc("?pretrack_nonheap_allocation_size@@YAXII@Z");
//};

//char const * make_constant_string(char const *)
//{
//    mangled_ppc("?make_constant_string@@YAPBDPBD@Z");
//};

//char const * safe_printable_string(char const *)
//{
//    mangled_ppc("?safe_printable_string@@YAPBDPBD@Z");
//};

//char const * strip_source_directory(char const *)
//{
//    mangled_ppc("?strip_source_directory@@YAPBDPBD@Z");
//};

//void debug_memory_free_emergency_reserve(void)
//{
//    mangled_ppc("?debug_memory_free_emergency_reserve@@YAXXZ");
//};

//bool thread_can_use_debug_memory(void)
//{
//    mangled_ppc("?thread_can_use_debug_memory@@YA_NXZ");
//};

//bool debug_pointer_valid(void *)
//{
//    mangled_ppc("?debug_pointer_valid@@YA_NPAX@Z");
//};

//unsigned int debug_get_used_memory_size(void *, char const *, long)
//{
//    mangled_ppc("?debug_get_used_memory_size@@YAIPAXPBDJ@Z");
//};

//void * get_base_pointer_from_header(struct s_pointer_header *)
//{
//    mangled_ppc("?get_base_pointer_from_header@@YAPAXPAUs_pointer_header@@@Z");
//};

//unsigned int debug_get_actual_memory_size(void *, char const *, long)
//{
//    mangled_ppc("?debug_get_actual_memory_size@@YAIPAXPBDJ@Z");
//};

//unsigned int header_get_actual_size(struct s_pointer_header const *)
//{
//    mangled_ppc("?header_get_actual_size@@YAIPBUs_pointer_header@@@Z");
//};

//public: virtual void * c_debug_memory_internal_allocation::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@c_debug_memory_internal_allocation@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void c_debug_memory_internal_allocation::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@c_debug_memory_internal_allocation@@UAAXPAXPBDJ@Z");
//};

//unsigned long nonheap_hash_function(void const *)
//{
//    mangled_ppc("?nonheap_hash_function@@YAKPBX@Z");
//};

//bool nonheap_compare_function(void const *, void const *)
//{
//    mangled_ppc("?nonheap_compare_function@@YA_NPBX0@Z");
//};

//struct s_header_tracking_info * find_or_allocate_tracking_info(char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?find_or_allocate_tracking_info@@YAPAUs_header_tracking_info@@PBDJ000@Z");
//};

//long get_constant_string_key(char const *)
//{
//    mangled_ppc("?get_constant_string_key@@YAJPBD@Z");
//};

//void dispose_tracking_info(void)
//{
//    mangled_ppc("?dispose_tracking_info@@YAXXZ");
//};

//?set_checksum_function@@YAXQ6AKPBXI@Z@Z
//{
//    mangled_ppc("?set_checksum_function@@YAXQ6AKPBXI@Z@Z");
//};

//?set_local_random_function@@YAXQ6AGXZ@Z
//{
//    mangled_ppc("?set_local_random_function@@YAXQ6AGXZ@Z");
//};

//public: struct s_header_tracking_info ** c_static_hash_table_data<struct s_header_tracking_info *, 8192>::get_element(long)
//{
//    mangled_ppc("?get_element@?$c_static_hash_table_data@PAUs_header_tracking_info@@$0CAAA@@@QAAPAPAUs_header_tracking_info@@J@Z");
//};

//public: bool c_hash_table<struct s_pointer_header *, void>::is_created(void) const
//{
//    mangled_ppc("?is_created@?$c_hash_table@PAUs_pointer_header@@X@@QBA_NXZ");
//};

//?create@?$c_hash_table@PAUs_pointer_header@@X@@QAA_NPBDJJQ6AKPBX@ZQ6A_N11@Z0JPAVc_allocation_interface@@@Z
//{
//    mangled_ppc("?create@?$c_hash_table@PAUs_pointer_header@@X@@QAA_NPBDJJQ6AKPBX@ZQ6A_N11@Z0JPAVc_allocation_interface@@@Z");
//};

//public: void c_hash_table<struct s_pointer_header *, void>::dispose(char const *, long)
//{
//    mangled_ppc("?dispose@?$c_hash_table@PAUs_pointer_header@@X@@QAAXPBDJ@Z");
//};

//public: bool c_hash_table<struct s_pointer_header *, void>::remove(void const *)
//{
//    mangled_ppc("?remove@?$c_hash_table@PAUs_pointer_header@@X@@QAA_NPBX@Z");
//};

//public: void const * c_hash_table<struct s_pointer_header *, void>::find(void const *, struct s_pointer_header **) const
//{
//    mangled_ppc("?find@?$c_hash_table@PAUs_pointer_header@@X@@QBAPBXPBXPAPAUs_pointer_header@@@Z");
//};

//public: void c_static_hash_table_data<struct s_header_tracking_info *, 8192>::clear_all(void)
//{
//    mangled_ppc("?clear_all@?$c_static_hash_table_data@PAUs_header_tracking_info@@$0CAAA@@@QAAXXZ");
//};

//unsigned int int_max<unsigned int>(unsigned int const &, unsigned int const &)
//{
//    mangled_ppc("??$int_max@I@@YAIABI0@Z");
//};

//public: static long c_static_hash_table<class c_static_hash_table_data<struct s_header_tracking_info *, 8192>, 3001, 7187, 9973>::iterator_begin(class c_static_hash_table_data<struct s_header_tracking_info *, 8192> const *)
//{
//    mangled_ppc("?iterator_begin@?$c_static_hash_table@V?$c_static_hash_table_data@PAUs_header_tracking_info@@$0CAAA@@@$0LLJ@$0BMBD@$0CGPF@@@SAJPBV?$c_static_hash_table_data@PAUs_header_tracking_info@@$0CAAA@@@@Z");
//};

//public: static long c_static_hash_table<class c_static_hash_table_data<struct s_header_tracking_info *, 8192>, 3001, 7187, 9973>::iterator_next(class c_static_hash_table_data<struct s_header_tracking_info *, 8192> const *, long)
//{
//    mangled_ppc("?iterator_next@?$c_static_hash_table@V?$c_static_hash_table_data@PAUs_header_tracking_info@@$0CAAA@@@$0LLJ@$0BMBD@$0CGPF@@@SAJPBV?$c_static_hash_table_data@PAUs_header_tracking_info@@$0CAAA@@@J@Z");
//};

//public: static long c_static_hash_table<class c_static_hash_table_data<struct s_header_tracking_info *, 8192>, 3001, 7187, 9973>::add_entry(class c_static_hash_table_data<struct s_header_tracking_info *, 8192> *, long, long, long)
//{
//    mangled_ppc("?add_entry@?$c_static_hash_table@V?$c_static_hash_table_data@PAUs_header_tracking_info@@$0CAAA@@@$0LLJ@$0BMBD@$0CGPF@@@SAJPAV?$c_static_hash_table_data@PAUs_header_tracking_info@@$0CAAA@@@JJJ@Z");
//};

//public: static long c_static_hash_table<class c_static_hash_table_data<struct s_header_tracking_info *, 8192>, 3001, 7187, 9973>::find_entry(class c_static_hash_table_data<struct s_header_tracking_info *, 8192> const *, long, long, long)
//{
//    mangled_ppc("?find_entry@?$c_static_hash_table@V?$c_static_hash_table_data@PAUs_header_tracking_info@@$0CAAA@@@$0LLJ@$0BMBD@$0CGPF@@@SAJPBV?$c_static_hash_table_data@PAUs_header_tracking_info@@$0CAAA@@@JJJ@Z");
//};

//public: struct c_static_hash_table_data<struct s_header_tracking_info *, 8192>::s_data & s_static_array<struct c_static_hash_table_data<struct s_header_tracking_info *, 8192>::s_data, 8192>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_data@?$c_static_hash_table_data@PAUs_header_tracking_info@@$0CAAA@@@$0CAAA@@@QAAAAUs_data@?$c_static_hash_table_data@PAUs_header_tracking_info@@$0CAAA@@@J@Z");
//};

//public: struct c_static_hash_table_data<struct s_header_tracking_info *, 8192>::s_data * c_static_hash_table_data<struct s_header_tracking_info *, 8192>::get_data(long)
//{
//    mangled_ppc("?get_data@?$c_static_hash_table_data@PAUs_header_tracking_info@@$0CAAA@@@QAAPAUs_data@1@J@Z");
//};

//public: struct c_static_hash_table_data<struct s_header_tracking_info *, 8192>::s_data const * c_static_hash_table_data<struct s_header_tracking_info *, 8192>::get_data(long) const
//{
//    mangled_ppc("?get_data@?$c_static_hash_table_data@PAUs_header_tracking_info@@$0CAAA@@@QBAPBUs_data@1@J@Z");
//};

//public: long c_static_hash_table_data<struct s_header_tracking_info *, 8192>::get_total_count(void) const
//{
//    mangled_ppc("?get_total_count@?$c_static_hash_table_data@PAUs_header_tracking_info@@$0CAAA@@@QBAJXZ");
//};

//public: long c_static_hash_table_data<struct s_header_tracking_info *, 8192>::get_maximum_count(void) const
//{
//    mangled_ppc("?get_maximum_count@?$c_static_hash_table_data@PAUs_header_tracking_info@@$0CAAA@@@QBAJXZ");
//};

//public: void c_static_hash_table_data<struct s_header_tracking_info *, 8192>::increment_total_count(void)
//{
//    mangled_ppc("?increment_total_count@?$c_static_hash_table_data@PAUs_header_tracking_info@@$0CAAA@@@QAAXXZ");
//};

//public: short * c_static_hash_table_data<struct s_header_tracking_info *, 8192>::get_hash_entry_count(void)
//{
//    mangled_ppc("?get_hash_entry_count@?$c_static_hash_table_data@PAUs_header_tracking_info@@$0CAAA@@@QAAPAFXZ");
//};

//public: short const * c_static_hash_table_data<struct s_header_tracking_info *, 8192>::get_hash_entry_count(void) const
//{
//    mangled_ppc("?get_hash_entry_count@?$c_static_hash_table_data@PAUs_header_tracking_info@@$0CAAA@@@QBAPBFXZ");
//};

//public: short * c_static_hash_table_data<struct s_header_tracking_info *, 8192>::get_original_hash_entry(void)
//{
//    mangled_ppc("?get_original_hash_entry@?$c_static_hash_table_data@PAUs_header_tracking_info@@$0CAAA@@@QAAPAFXZ");
//};

//public: short const * c_static_hash_table_data<struct s_header_tracking_info *, 8192>::get_original_hash_entry(void) const
//{
//    mangled_ppc("?get_original_hash_entry@?$c_static_hash_table_data@PAUs_header_tracking_info@@$0CAAA@@@QBAPBFXZ");
//};

//private: static long c_static_hash_table<class c_static_hash_table_data<struct s_header_tracking_info *, 8192>, 3001, 7187, 9973>::calculate_hash(class c_static_hash_table_data<struct s_header_tracking_info *, 8192> const *, long, long, long)
//{
//    mangled_ppc("?calculate_hash@?$c_static_hash_table@V?$c_static_hash_table_data@PAUs_header_tracking_info@@$0CAAA@@@$0LLJ@$0BMBD@$0CGPF@@@CAJPBV?$c_static_hash_table_data@PAUs_header_tracking_info@@$0CAAA@@@JJJ@Z");
//};

//private: static long c_static_hash_table<class c_static_hash_table_data<struct s_header_tracking_info *, 8192>, 3001, 7187, 9973>::find_new_hash_entry(class c_static_hash_table_data<struct s_header_tracking_info *, 8192> *, long)
//{
//    mangled_ppc("?find_new_hash_entry@?$c_static_hash_table@V?$c_static_hash_table_data@PAUs_header_tracking_info@@$0CAAA@@@$0LLJ@$0BMBD@$0CGPF@@@CAJPAV?$c_static_hash_table_data@PAUs_header_tracking_info@@$0CAAA@@@J@Z");
//};

//public: static bool s_static_array<struct c_static_hash_table_data<struct s_header_tracking_info *, 8192>::s_data, 8192>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_data@?$c_static_hash_table_data@PAUs_header_tracking_info@@$0CAAA@@@$0CAAA@@@SA_NJ@Z");
//};

//public: struct c_static_hash_table_data<struct s_header_tracking_info *, 8192>::s_data const & s_static_array<struct c_static_hash_table_data<struct s_header_tracking_info *, 8192>::s_data, 8192>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_data@?$c_static_hash_table_data@PAUs_header_tracking_info@@$0CAAA@@@$0CAAA@@@QBAABUs_data@?$c_static_hash_table_data@PAUs_header_tracking_info@@$0CAAA@@@J@Z");
//};

//public: c_debug_memory_initializer::c_debug_memory_initializer(void)
//{
//    mangled_ppc("??0c_debug_memory_initializer@@QAA@XZ");
//};

//public: c_hash_table<struct s_pointer_header *, void>::c_hash_table<struct s_pointer_header *, void>(void)
//{
//    mangled_ppc("??0?$c_hash_table@PAUs_pointer_header@@X@@QAA@XZ");
//};

//public: c_debug_memory_internal_allocation::c_debug_memory_internal_allocation(void)
//{
//    mangled_ppc("??0c_debug_memory_internal_allocation@@QAA@XZ");
//};

//public: c_hash_table<struct s_pointer_header *, void>::~c_hash_table<struct s_pointer_header *, void>(void)
//{
//    mangled_ppc("??1?$c_hash_table@PAUs_pointer_header@@X@@QAA@XZ");
//};

//void g_nonheap_hash_table::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_nonheap_hash_table@@YAXXZ");
//};

