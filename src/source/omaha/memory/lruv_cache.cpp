/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const *const const c_byte_swap_traits<struct s_lruv_cache_block>::g_bs_codes_internal; // "?g_bs_codes_internal@?$c_byte_swap_traits@Us_lruv_cache_block@@@@2QBJB"
// public: static long const *const const c_byte_swap_traits<struct s_lruv_persist_header>::g_bs_codes_internal; // "?g_bs_codes_internal@?$c_byte_swap_traits@Us_lruv_persist_header@@@@2QBJB"
// public: static enum e_lruv_cache_block_bit const c_flags_no_init<enum e_lruv_cache_block_bit, unsigned short, 2, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_lruv_cache_block_bit@@G$01Us_default_enum_string_resolver@@@@2W4e_lruv_cache_block_bit@@B"
// public: static enum e_lruv_cache_bit const c_flags_no_init<enum e_lruv_cache_bit, unsigned long, 1, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_lruv_cache_bit@@K$00Us_default_enum_string_resolver@@@@2W4e_lruv_cache_bit@@B"
// public: static long const s_static_string<12288>::k_index_not_found; // "?k_index_not_found@?$s_static_string@$0DAAA@@@2JB"
// public: static long const s_static_string<12288>::k_element_count; // "?k_element_count@?$s_static_string@$0DAAA@@@2JB"
// bool lruv_lirp_enabled; // "?lruv_lirp_enabled@@3_NA"
// public: static struct byte_swap_definition c_byte_swap_traits<struct s_lruv_persist_header>::g_bs_definition_internal; // "?g_bs_definition_internal@?$c_byte_swap_traits@Us_lruv_persist_header@@@@2Ubyte_swap_definition@@A"
// public: static struct byte_swap_definition c_byte_swap_traits<struct s_lruv_cache_block>::g_bs_definition_internal; // "?g_bs_definition_internal@?$c_byte_swap_traits@Us_lruv_cache_block@@@@2Ubyte_swap_definition@@A"
// public: static struct byte_swap_definition *c_byte_swap_traits<struct s_lruv_cache_block>::g_bs_definition; // "?g_bs_definition@?$c_byte_swap_traits@Us_lruv_cache_block@@@@2PAUbyte_swap_definition@@A"
// public: static struct byte_swap_definition *c_byte_swap_traits<struct s_lruv_persist_header>::g_bs_definition; // "?g_bs_definition@?$c_byte_swap_traits@Us_lruv_persist_header@@@@2PAUbyte_swap_definition@@A"

// struct s_lruv_cache * lruv_new(char const *, long, long, long, void *, void (*)(void *, long, bool, bool), bool (*)(void *, long), unsigned char (*)(void *, long), char const *, long, class c_allocation_interface *, long);
// struct s_lruv_cache * lruv_allocate(char const *, long, void *, void (*)(void *, long, bool, bool), bool (*)(void *, long), unsigned char (*)(void *, long), char const *, long, class c_allocation_interface *, long);
// long lruv_allocation_size(long);
// void lruv_initialize(struct s_lruv_cache *, char const *, long, long, struct s_data_array *, void *, void (*)(void *, long, bool, bool), bool (*)(void *, long), unsigned char (*)(void *, long), class c_allocation_interface *, long);
// void lruv_setup(struct s_lruv_cache *, char const *, long, void *, void (*)(void *, long, bool, bool), bool (*)(void *, long), unsigned char (*)(void *, long), class c_allocation_interface *, long);
// void lruv_connect(struct s_lruv_cache *, struct s_data_array *, long);
// void lruv_set_hole_algorithm(struct s_lruv_cache *, enum e_hole_algorithm);
// void lruv_set_function_pointers_new(struct s_lruv_cache *, void (*)(void *, long, bool, bool), bool (*)(void *, long), void (*)(void *, long, unsigned long, unsigned long), bool (*)(void *, long, long, unsigned long, unsigned long));
// void lruv_delete(struct s_lruv_cache *, char const *, long);
// void lruv_reset_failed_pages(struct s_lruv_cache *);
// void lruv_idle(struct s_lruv_cache *);
// void lruv_wrap_frame_index(struct s_lruv_cache *);
// public: long c_lruv_block_long::operator long(void) const;
// public: void c_lruv_block_long::set(long);
// public: long c_lruv_block_long::peek(void) const;
// long lruv_persist_compact_size(struct s_lruv_cache const *);
// bool lruv_persist(struct s_lruv_cache const *, class c_persist_stream *);
// public: s_lruv_persist_header::s_lruv_persist_header(void);
// bool lruv_restore(struct s_lruv_cache *, class c_persist_stream *, bool);
// bool lruv_recreate_from_stream(struct s_lruv_cache **, char const *, long, long, long, void *, void (*)(void *, long, bool, bool), bool (*)(void *, long), unsigned char (*)(void *, long), class c_allocation_interface *, long, class c_persist_stream *);
// long lruv_get_age(struct s_lruv_cache const *);
// void lruv_flush(struct s_lruv_cache *);
// bool lruv_verify_slave_data_array(struct s_lruv_cache const *, struct s_data_array const *);
// void lruv_cache_purge_hole(struct s_lruv_cache *, struct s_lruv_cache_hole const *, long);
// void lruv_block_initialize(struct s_lruv_cache *, struct s_lruv_cache_hole const *, long, long);
// long lruv_block_new_in_hole(struct s_lruv_cache *, long, long, struct s_lruv_cache_hole *, long);
// long lruv_block_new_at_index(struct s_lruv_cache *, long, long, long);
// bool lruv_cache_find_hole(struct s_lruv_cache *, long, long, struct s_lruv_cache_hole *, long *, bool *);
// bool lruv_cache_block_is_locked(struct s_lruv_cache *, long, long, struct s_lruv_cache_block *);
// bool lruv_cache_should_use_hole(struct s_lruv_cache *, long, struct s_lruv_cache_hole const *, struct s_lruv_cache_hole const *);
// bool should_use_this_hole_fragmentation(struct s_lruv_cache const *, long, struct s_lruv_cache_hole const *, struct s_lruv_cache_hole const *);
// bool should_use_this_hole_blend(struct s_lruv_cache const *, long, struct s_lruv_cache_hole const *, struct s_lruv_cache_hole const *);
// bool should_use_this_hole_age(struct s_lruv_cache const *, long, struct s_lruv_cache_hole const *, struct s_lruv_cache_hole const *);
// long lruv_block_new(struct s_lruv_cache *, long, long);
// long lruv_block_new_at_index_and_page(struct s_lruv_cache *, long, long, long);
// bool lruv_block_clone(struct s_lruv_cache *, long, long);
// void lruv_block_detach_and_delete(struct s_lruv_cache *, long);
// void lruv_block_delete_internal(struct s_lruv_cache *, long, bool);
// void lruv_block_delete(struct s_lruv_cache *, long);
// void lruv_block_prepare_for_delete(struct s_lruv_cache *, long);
// void lruv_block_touch(struct s_lruv_cache *, long);
// long lruv_block_get_age(struct s_lruv_cache *, long);
// void lruv_block_set_age(struct s_lruv_cache *, long, long);
// unsigned long lruv_block_get_address(struct s_lruv_cache *, long);
// void lruv_block_set_page_index(struct s_lruv_cache *, long, unsigned long);
// unsigned long lruv_block_get_page_index(struct s_lruv_cache *, long);
// unsigned long lruv_block_get_size(struct s_lruv_cache *, long);
// long lruv_block_get_absolute_index(struct s_lruv_cache *, long);
// bool lruv_block_touched(struct s_lruv_cache *, long);
// void lruv_block_set_always_locked(struct s_lruv_cache *, long, bool);
// void lruv_cache_get_page_usage(struct s_lruv_cache *, unsigned char *);
// unsigned long lruv_get_address_from_page_index(struct s_lruv_cache const *, unsigned long);
// void lruv_resize(struct s_lruv_cache *, long);
// void lruv_resize_non_destructive(struct s_lruv_cache *, long);
// bool lruv_find_page_hole(struct s_lruv_cache const *, long *, unsigned long *);
// unsigned long lruv_compact(struct s_lruv_cache *);
// unsigned long lruv_compact_up(struct s_lruv_cache *, long);
// unsigned long lruv_compact_down(struct s_lruv_cache *, long);
// unsigned long lruv_get_page_size(struct s_lruv_cache const *);
// long lruv_get_page_count(struct s_lruv_cache const *);
// bool lruv_has_locked_proc(struct s_lruv_cache const *);
// void lruv_debug_to_file(class c_formatted_output *, char const *, long, struct s_lruv_cache *, void *, void (*)(void *, class c_formatted_output *), char const * (*)(void *, void *, char *, long, long));
// long lruv_get_locked_pages(struct s_lruv_cache *, long);
// long lruv_get_largest_slot_in_pages(struct s_lruv_cache *);
// unsigned long lruv_get_used_page_end(struct s_lruv_cache *);
// unsigned long lruv_get_used_size(struct s_lruv_cache *);
// void lruv_iterator_begin(struct s_lruv_cache const *, struct s_data_iterator *);
// void * lruv_iterator_next(struct s_lruv_cache const *, struct s_data_iterator *);
// long lruv_compute_fragmentation_threshold(struct s_lruv_cache const *);
// unsigned long lruv_cache_bytes_to_pages(struct s_lruv_cache const *, unsigned long);
// void lruv_cache_verify(struct s_lruv_cache *, bool);
// void lruv_render_page_usage(struct s_lruv_cache *, char const *, union rgb_color const * (*)(void *, long, unsigned char), long, long);
// bool sort_render_page_list_compare(long, long, void const *);
// void lruv_render_page_list(struct s_lruv_cache *, char const *, void (*)(void *, char *, long, long));
// void sort_render_page_list(struct s_lruv_cache const *, long *, long);
// void lruv_verify_disable_lock(struct s_lruv_cache *);
// void lruv_verify_disable_unlock(struct s_lruv_cache *);
// public: c_lruv_verify_lock::c_lruv_verify_lock(struct s_lruv_cache *);
// public: c_lruv_verify_lock::~c_lruv_verify_lock(void);
// public: struct s_data_array * c_smart_data_array<struct s_lruv_cache_block>::operator struct s_data_array *(void) const;
// public: struct s_data_array * c_smart_data_array<struct s_lruv_cache_block>::operator->(void);
// public: struct s_data_array const * c_smart_data_array<struct s_lruv_cache_block>::operator->(void) const;
// public: class c_smart_data_array<struct s_lruv_cache_block> & c_smart_data_array<struct s_lruv_cache_block>::operator=(struct s_data_array *);
// public: void c_data_iterator<struct s_lruv_cache_block>::begin(struct s_data_array *);
// public: bool c_data_iterator<struct s_lruv_cache_block>::next(void);
// public: struct s_lruv_cache_block * c_data_iterator<struct s_lruv_cache_block>::get_datum(void) const;
// public: long c_data_iterator<struct s_lruv_cache_block>::get_index(void) const;
// public: void c_data_iterator<void>::begin(struct s_data_array *);
// public: bool c_data_iterator<void>::next(void);
// public: long c_data_iterator<void>::get_index(void) const;
// public: void c_data_iterator<struct s_lruv_cache_block const>::begin(struct s_data_array *);
// public: bool c_data_iterator<struct s_lruv_cache_block const>::next(void);
// public: struct s_lruv_cache_block const * c_data_iterator<struct s_lruv_cache_block const>::get_datum(void) const;
// public: long c_data_iterator<struct s_lruv_cache_block const>::get_index(void) const;
// public: bool c_persist_stream::read_typed<unsigned long>(unsigned long *, long);
// public: bool c_persist_stream::write_typed<unsigned long>(unsigned long *, long);
// public: bool c_flags_no_init<enum e_lruv_cache_block_bit, unsigned short, 2, struct s_default_enum_string_resolver>::test(enum e_lruv_cache_block_bit) const;
// public: void c_flags_no_init<enum e_lruv_cache_block_bit, unsigned short, 2, struct s_default_enum_string_resolver>::set(enum e_lruv_cache_block_bit, bool);
// public: bool c_flags_no_init<enum e_lruv_cache_bit, unsigned long, 1, struct s_default_enum_string_resolver>::test(enum e_lruv_cache_bit) const;
// public: void c_flags_no_init<enum e_lruv_cache_bit, unsigned long, 1, struct s_default_enum_string_resolver>::set(enum e_lruv_cache_bit, bool);
// public: bool c_persist_stream::write_typed<struct s_lruv_persist_header>(struct s_lruv_persist_header *, long);
// public: bool c_persist_stream::read_typed<struct s_lruv_persist_header>(struct s_lruv_persist_header *, long);
// public: char const * s_static_string<12288>::append(char const *);
// public: char const * s_static_string<12288>::append_print(char const *, ...);
// public: char const * s_static_string<12288>::get_string(void) const;
// public: c_static_string<12288>::c_static_string<12288>(void);
// public: static bool c_flags_no_init<enum e_lruv_cache_block_bit, unsigned short, 2, struct s_default_enum_string_resolver>::valid_bit(enum e_lruv_cache_block_bit);
// private: static unsigned short c_flags_no_init<enum e_lruv_cache_block_bit, unsigned short, 2, struct s_default_enum_string_resolver>::flag_size_type(enum e_lruv_cache_block_bit);
// public: static bool c_flags_no_init<enum e_lruv_cache_bit, unsigned long, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_lruv_cache_bit);
// private: static unsigned long c_flags_no_init<enum e_lruv_cache_bit, unsigned long, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_lruv_cache_bit);
// public: void s_static_string<12288>::clear(void);
// public: long s_static_string<12288>::length(void) const;
// void const * datum_try_and_get_const(struct s_data_array const *, long);
// public: static struct byte_swap_definition * c_byte_swap_traits<struct s_lruv_persist_header>::get_bs_definition(void);
// public: static struct byte_swap_definition * c_byte_swap_traits<struct s_lruv_cache_block>::get_bs_definition(void);

//struct s_lruv_cache * lruv_new(char const *, long, long, long, void *, void (*)(void *, long, bool, bool), bool (*)(void *, long), unsigned char (*)(void *, long), char const *, long, class c_allocation_interface *, long)
//{
//    mangled_ppc("?lruv_new@@YAPAUs_lruv_cache@@PBDJJJPAXP6AX1J_N2@ZP6A_N1J@ZP6AE1J@Z0JPAVc_allocation_interface@@J@Z");
//};

//struct s_lruv_cache * lruv_allocate(char const *, long, void *, void (*)(void *, long, bool, bool), bool (*)(void *, long), unsigned char (*)(void *, long), char const *, long, class c_allocation_interface *, long)
//{
//    mangled_ppc("?lruv_allocate@@YAPAUs_lruv_cache@@PBDJPAXP6AX1J_N2@ZP6A_N1J@ZP6AE1J@Z0JPAVc_allocation_interface@@J@Z");
//};

//long lruv_allocation_size(long)
//{
//    mangled_ppc("?lruv_allocation_size@@YAJJ@Z");
//};

//void lruv_initialize(struct s_lruv_cache *, char const *, long, long, struct s_data_array *, void *, void (*)(void *, long, bool, bool), bool (*)(void *, long), unsigned char (*)(void *, long), class c_allocation_interface *, long)
//{
//    mangled_ppc("?lruv_initialize@@YAXPAUs_lruv_cache@@PBDJJPAUs_data_array@@PAXP6AX3J_N4@ZP6A_N3J@ZP6AE3J@ZPAVc_allocation_interface@@J@Z");
//};

//void lruv_setup(struct s_lruv_cache *, char const *, long, void *, void (*)(void *, long, bool, bool), bool (*)(void *, long), unsigned char (*)(void *, long), class c_allocation_interface *, long)
//{
//    mangled_ppc("?lruv_setup@@YAXPAUs_lruv_cache@@PBDJPAXP6AX2J_N3@ZP6A_N2J@ZP6AE2J@ZPAVc_allocation_interface@@J@Z");
//};

//void lruv_connect(struct s_lruv_cache *, struct s_data_array *, long)
//{
//    mangled_ppc("?lruv_connect@@YAXPAUs_lruv_cache@@PAUs_data_array@@J@Z");
//};

//void lruv_set_hole_algorithm(struct s_lruv_cache *, enum e_hole_algorithm)
//{
//    mangled_ppc("?lruv_set_hole_algorithm@@YAXPAUs_lruv_cache@@W4e_hole_algorithm@@@Z");
//};

//void lruv_set_function_pointers_new(struct s_lruv_cache *, void (*)(void *, long, bool, bool), bool (*)(void *, long), void (*)(void *, long, unsigned long, unsigned long), bool (*)(void *, long, long, unsigned long, unsigned long))
//{
//    mangled_ppc("?lruv_set_function_pointers_new@@YAXPAUs_lruv_cache@@P6AXPAXJ_N2@ZP6A_N1J@ZP6AX1JKK@ZP6A_N1JJKK@Z@Z");
//};

//void lruv_delete(struct s_lruv_cache *, char const *, long)
//{
//    mangled_ppc("?lruv_delete@@YAXPAUs_lruv_cache@@PBDJ@Z");
//};

//void lruv_reset_failed_pages(struct s_lruv_cache *)
//{
//    mangled_ppc("?lruv_reset_failed_pages@@YAXPAUs_lruv_cache@@@Z");
//};

//void lruv_idle(struct s_lruv_cache *)
//{
//    mangled_ppc("?lruv_idle@@YAXPAUs_lruv_cache@@@Z");
//};

//void lruv_wrap_frame_index(struct s_lruv_cache *)
//{
//    mangled_ppc("?lruv_wrap_frame_index@@YAXPAUs_lruv_cache@@@Z");
//};

//public: long c_lruv_block_long::operator long(void) const
//{
//    mangled_ppc("??Bc_lruv_block_long@@QBAJXZ");
//};

//public: void c_lruv_block_long::set(long)
//{
//    mangled_ppc("?set@c_lruv_block_long@@QAAXJ@Z");
//};

//public: long c_lruv_block_long::peek(void) const
//{
//    mangled_ppc("?peek@c_lruv_block_long@@QBAJXZ");
//};

//long lruv_persist_compact_size(struct s_lruv_cache const *)
//{
//    mangled_ppc("?lruv_persist_compact_size@@YAJPBUs_lruv_cache@@@Z");
//};

//bool lruv_persist(struct s_lruv_cache const *, class c_persist_stream *)
//{
//    mangled_ppc("?lruv_persist@@YA_NPBUs_lruv_cache@@PAVc_persist_stream@@@Z");
//};

//public: s_lruv_persist_header::s_lruv_persist_header(void)
//{
//    mangled_ppc("??0s_lruv_persist_header@@QAA@XZ");
//};

//bool lruv_restore(struct s_lruv_cache *, class c_persist_stream *, bool)
//{
//    mangled_ppc("?lruv_restore@@YA_NPAUs_lruv_cache@@PAVc_persist_stream@@_N@Z");
//};

//bool lruv_recreate_from_stream(struct s_lruv_cache **, char const *, long, long, long, void *, void (*)(void *, long, bool, bool), bool (*)(void *, long), unsigned char (*)(void *, long), class c_allocation_interface *, long, class c_persist_stream *)
//{
//    mangled_ppc("?lruv_recreate_from_stream@@YA_NPAPAUs_lruv_cache@@PBDJJJPAXP6AX2J_N3@ZP6A_N2J@ZP6AE2J@ZPAVc_allocation_interface@@JPAVc_persist_stream@@@Z");
//};

//long lruv_get_age(struct s_lruv_cache const *)
//{
//    mangled_ppc("?lruv_get_age@@YAJPBUs_lruv_cache@@@Z");
//};

//void lruv_flush(struct s_lruv_cache *)
//{
//    mangled_ppc("?lruv_flush@@YAXPAUs_lruv_cache@@@Z");
//};

//bool lruv_verify_slave_data_array(struct s_lruv_cache const *, struct s_data_array const *)
//{
//    mangled_ppc("?lruv_verify_slave_data_array@@YA_NPBUs_lruv_cache@@PBUs_data_array@@@Z");
//};

//void lruv_cache_purge_hole(struct s_lruv_cache *, struct s_lruv_cache_hole const *, long)
//{
//    mangled_ppc("?lruv_cache_purge_hole@@YAXPAUs_lruv_cache@@PBUs_lruv_cache_hole@@J@Z");
//};

//void lruv_block_initialize(struct s_lruv_cache *, struct s_lruv_cache_hole const *, long, long)
//{
//    mangled_ppc("?lruv_block_initialize@@YAXPAUs_lruv_cache@@PBUs_lruv_cache_hole@@JJ@Z");
//};

//long lruv_block_new_in_hole(struct s_lruv_cache *, long, long, struct s_lruv_cache_hole *, long)
//{
//    mangled_ppc("?lruv_block_new_in_hole@@YAJPAUs_lruv_cache@@JJPAUs_lruv_cache_hole@@J@Z");
//};

//long lruv_block_new_at_index(struct s_lruv_cache *, long, long, long)
//{
//    mangled_ppc("?lruv_block_new_at_index@@YAJPAUs_lruv_cache@@JJJ@Z");
//};

//bool lruv_cache_find_hole(struct s_lruv_cache *, long, long, struct s_lruv_cache_hole *, long *, bool *)
//{
//    mangled_ppc("?lruv_cache_find_hole@@YA_NPAUs_lruv_cache@@JJPAUs_lruv_cache_hole@@PAJPA_N@Z");
//};

//bool lruv_cache_block_is_locked(struct s_lruv_cache *, long, long, struct s_lruv_cache_block *)
//{
//    mangled_ppc("?lruv_cache_block_is_locked@@YA_NPAUs_lruv_cache@@JJPAUs_lruv_cache_block@@@Z");
//};

//bool lruv_cache_should_use_hole(struct s_lruv_cache *, long, struct s_lruv_cache_hole const *, struct s_lruv_cache_hole const *)
//{
//    mangled_ppc("?lruv_cache_should_use_hole@@YA_NPAUs_lruv_cache@@JPBUs_lruv_cache_hole@@1@Z");
//};

//bool should_use_this_hole_fragmentation(struct s_lruv_cache const *, long, struct s_lruv_cache_hole const *, struct s_lruv_cache_hole const *)
//{
//    mangled_ppc("?should_use_this_hole_fragmentation@@YA_NPBUs_lruv_cache@@JPBUs_lruv_cache_hole@@1@Z");
//};

//bool should_use_this_hole_blend(struct s_lruv_cache const *, long, struct s_lruv_cache_hole const *, struct s_lruv_cache_hole const *)
//{
//    mangled_ppc("?should_use_this_hole_blend@@YA_NPBUs_lruv_cache@@JPBUs_lruv_cache_hole@@1@Z");
//};

//bool should_use_this_hole_age(struct s_lruv_cache const *, long, struct s_lruv_cache_hole const *, struct s_lruv_cache_hole const *)
//{
//    mangled_ppc("?should_use_this_hole_age@@YA_NPBUs_lruv_cache@@JPBUs_lruv_cache_hole@@1@Z");
//};

//long lruv_block_new(struct s_lruv_cache *, long, long)
//{
//    mangled_ppc("?lruv_block_new@@YAJPAUs_lruv_cache@@JJ@Z");
//};

//long lruv_block_new_at_index_and_page(struct s_lruv_cache *, long, long, long)
//{
//    mangled_ppc("?lruv_block_new_at_index_and_page@@YAJPAUs_lruv_cache@@JJJ@Z");
//};

//bool lruv_block_clone(struct s_lruv_cache *, long, long)
//{
//    mangled_ppc("?lruv_block_clone@@YA_NPAUs_lruv_cache@@JJ@Z");
//};

//void lruv_block_detach_and_delete(struct s_lruv_cache *, long)
//{
//    mangled_ppc("?lruv_block_detach_and_delete@@YAXPAUs_lruv_cache@@J@Z");
//};

//void lruv_block_delete_internal(struct s_lruv_cache *, long, bool)
//{
//    mangled_ppc("?lruv_block_delete_internal@@YAXPAUs_lruv_cache@@J_N@Z");
//};

//void lruv_block_delete(struct s_lruv_cache *, long)
//{
//    mangled_ppc("?lruv_block_delete@@YAXPAUs_lruv_cache@@J@Z");
//};

//void lruv_block_prepare_for_delete(struct s_lruv_cache *, long)
//{
//    mangled_ppc("?lruv_block_prepare_for_delete@@YAXPAUs_lruv_cache@@J@Z");
//};

//void lruv_block_touch(struct s_lruv_cache *, long)
//{
//    mangled_ppc("?lruv_block_touch@@YAXPAUs_lruv_cache@@J@Z");
//};

//long lruv_block_get_age(struct s_lruv_cache *, long)
//{
//    mangled_ppc("?lruv_block_get_age@@YAJPAUs_lruv_cache@@J@Z");
//};

//void lruv_block_set_age(struct s_lruv_cache *, long, long)
//{
//    mangled_ppc("?lruv_block_set_age@@YAXPAUs_lruv_cache@@JJ@Z");
//};

//unsigned long lruv_block_get_address(struct s_lruv_cache *, long)
//{
//    mangled_ppc("?lruv_block_get_address@@YAKPAUs_lruv_cache@@J@Z");
//};

//void lruv_block_set_page_index(struct s_lruv_cache *, long, unsigned long)
//{
//    mangled_ppc("?lruv_block_set_page_index@@YAXPAUs_lruv_cache@@JK@Z");
//};

//unsigned long lruv_block_get_page_index(struct s_lruv_cache *, long)
//{
//    mangled_ppc("?lruv_block_get_page_index@@YAKPAUs_lruv_cache@@J@Z");
//};

//unsigned long lruv_block_get_size(struct s_lruv_cache *, long)
//{
//    mangled_ppc("?lruv_block_get_size@@YAKPAUs_lruv_cache@@J@Z");
//};

//long lruv_block_get_absolute_index(struct s_lruv_cache *, long)
//{
//    mangled_ppc("?lruv_block_get_absolute_index@@YAJPAUs_lruv_cache@@J@Z");
//};

//bool lruv_block_touched(struct s_lruv_cache *, long)
//{
//    mangled_ppc("?lruv_block_touched@@YA_NPAUs_lruv_cache@@J@Z");
//};

//void lruv_block_set_always_locked(struct s_lruv_cache *, long, bool)
//{
//    mangled_ppc("?lruv_block_set_always_locked@@YAXPAUs_lruv_cache@@J_N@Z");
//};

//void lruv_cache_get_page_usage(struct s_lruv_cache *, unsigned char *)
//{
//    mangled_ppc("?lruv_cache_get_page_usage@@YAXPAUs_lruv_cache@@PAE@Z");
//};

//unsigned long lruv_get_address_from_page_index(struct s_lruv_cache const *, unsigned long)
//{
//    mangled_ppc("?lruv_get_address_from_page_index@@YAKPBUs_lruv_cache@@K@Z");
//};

//void lruv_resize(struct s_lruv_cache *, long)
//{
//    mangled_ppc("?lruv_resize@@YAXPAUs_lruv_cache@@J@Z");
//};

//void lruv_resize_non_destructive(struct s_lruv_cache *, long)
//{
//    mangled_ppc("?lruv_resize_non_destructive@@YAXPAUs_lruv_cache@@J@Z");
//};

//bool lruv_find_page_hole(struct s_lruv_cache const *, long *, unsigned long *)
//{
//    mangled_ppc("?lruv_find_page_hole@@YA_NPBUs_lruv_cache@@PAJPAK@Z");
//};

//unsigned long lruv_compact(struct s_lruv_cache *)
//{
//    mangled_ppc("?lruv_compact@@YAKPAUs_lruv_cache@@@Z");
//};

//unsigned long lruv_compact_up(struct s_lruv_cache *, long)
//{
//    mangled_ppc("?lruv_compact_up@@YAKPAUs_lruv_cache@@J@Z");
//};

//unsigned long lruv_compact_down(struct s_lruv_cache *, long)
//{
//    mangled_ppc("?lruv_compact_down@@YAKPAUs_lruv_cache@@J@Z");
//};

//unsigned long lruv_get_page_size(struct s_lruv_cache const *)
//{
//    mangled_ppc("?lruv_get_page_size@@YAKPBUs_lruv_cache@@@Z");
//};

//long lruv_get_page_count(struct s_lruv_cache const *)
//{
//    mangled_ppc("?lruv_get_page_count@@YAJPBUs_lruv_cache@@@Z");
//};

//bool lruv_has_locked_proc(struct s_lruv_cache const *)
//{
//    mangled_ppc("?lruv_has_locked_proc@@YA_NPBUs_lruv_cache@@@Z");
//};

//void lruv_debug_to_file(class c_formatted_output *, char const *, long, struct s_lruv_cache *, void *, void (*)(void *, class c_formatted_output *), char const * (*)(void *, void *, char *, long, long))
//{
//    mangled_ppc("?lruv_debug_to_file@@YAXPAVc_formatted_output@@PBDJPAUs_lruv_cache@@PAXP6AX30@ZP6APBD33PADJJ@Z@Z");
//};

//long lruv_get_locked_pages(struct s_lruv_cache *, long)
//{
//    mangled_ppc("?lruv_get_locked_pages@@YAJPAUs_lruv_cache@@J@Z");
//};

//long lruv_get_largest_slot_in_pages(struct s_lruv_cache *)
//{
//    mangled_ppc("?lruv_get_largest_slot_in_pages@@YAJPAUs_lruv_cache@@@Z");
//};

//unsigned long lruv_get_used_page_end(struct s_lruv_cache *)
//{
//    mangled_ppc("?lruv_get_used_page_end@@YAKPAUs_lruv_cache@@@Z");
//};

//unsigned long lruv_get_used_size(struct s_lruv_cache *)
//{
//    mangled_ppc("?lruv_get_used_size@@YAKPAUs_lruv_cache@@@Z");
//};

//void lruv_iterator_begin(struct s_lruv_cache const *, struct s_data_iterator *)
//{
//    mangled_ppc("?lruv_iterator_begin@@YAXPBUs_lruv_cache@@PAUs_data_iterator@@@Z");
//};

//void * lruv_iterator_next(struct s_lruv_cache const *, struct s_data_iterator *)
//{
//    mangled_ppc("?lruv_iterator_next@@YAPAXPBUs_lruv_cache@@PAUs_data_iterator@@@Z");
//};

//long lruv_compute_fragmentation_threshold(struct s_lruv_cache const *)
//{
//    mangled_ppc("?lruv_compute_fragmentation_threshold@@YAJPBUs_lruv_cache@@@Z");
//};

//unsigned long lruv_cache_bytes_to_pages(struct s_lruv_cache const *, unsigned long)
//{
//    mangled_ppc("?lruv_cache_bytes_to_pages@@YAKPBUs_lruv_cache@@K@Z");
//};

//void lruv_cache_verify(struct s_lruv_cache *, bool)
//{
//    mangled_ppc("?lruv_cache_verify@@YAXPAUs_lruv_cache@@_N@Z");
//};

//void lruv_render_page_usage(struct s_lruv_cache *, char const *, union rgb_color const * (*)(void *, long, unsigned char), long, long)
//{
//    mangled_ppc("?lruv_render_page_usage@@YAXPAUs_lruv_cache@@PBDP6APBTrgb_color@@PAXJE@ZJJ@Z");
//};

//bool sort_render_page_list_compare(long, long, void const *)
//{
//    mangled_ppc("?sort_render_page_list_compare@@YA_NJJPBX@Z");
//};

//void lruv_render_page_list(struct s_lruv_cache *, char const *, void (*)(void *, char *, long, long))
//{
//    mangled_ppc("?lruv_render_page_list@@YAXPAUs_lruv_cache@@PBDP6AXPAXPADJJ@Z@Z");
//};

//void sort_render_page_list(struct s_lruv_cache const *, long *, long)
//{
//    mangled_ppc("?sort_render_page_list@@YAXPBUs_lruv_cache@@PAJJ@Z");
//};

//void lruv_verify_disable_lock(struct s_lruv_cache *)
//{
//    mangled_ppc("?lruv_verify_disable_lock@@YAXPAUs_lruv_cache@@@Z");
//};

//void lruv_verify_disable_unlock(struct s_lruv_cache *)
//{
//    mangled_ppc("?lruv_verify_disable_unlock@@YAXPAUs_lruv_cache@@@Z");
//};

//public: c_lruv_verify_lock::c_lruv_verify_lock(struct s_lruv_cache *)
//{
//    mangled_ppc("??0c_lruv_verify_lock@@QAA@PAUs_lruv_cache@@@Z");
//};

//public: c_lruv_verify_lock::~c_lruv_verify_lock(void)
//{
//    mangled_ppc("??1c_lruv_verify_lock@@QAA@XZ");
//};

//public: struct s_data_array * c_smart_data_array<struct s_lruv_cache_block>::operator struct s_data_array *(void) const
//{
//    mangled_ppc("??B?$c_smart_data_array@Us_lruv_cache_block@@@@QBAPAUs_data_array@@XZ");
//};

//public: struct s_data_array * c_smart_data_array<struct s_lruv_cache_block>::operator->(void)
//{
//    mangled_ppc("??C?$c_smart_data_array@Us_lruv_cache_block@@@@QAAPAUs_data_array@@XZ");
//};

//public: struct s_data_array const * c_smart_data_array<struct s_lruv_cache_block>::operator->(void) const
//{
//    mangled_ppc("??C?$c_smart_data_array@Us_lruv_cache_block@@@@QBAPBUs_data_array@@XZ");
//};

//public: class c_smart_data_array<struct s_lruv_cache_block> & c_smart_data_array<struct s_lruv_cache_block>::operator=(struct s_data_array *)
//{
//    mangled_ppc("??4?$c_smart_data_array@Us_lruv_cache_block@@@@QAAAAV0@PAUs_data_array@@@Z");
//};

//public: void c_data_iterator<struct s_lruv_cache_block>::begin(struct s_data_array *)
//{
//    mangled_ppc("?begin@?$c_data_iterator@Us_lruv_cache_block@@@@QAAXPAUs_data_array@@@Z");
//};

//public: bool c_data_iterator<struct s_lruv_cache_block>::next(void)
//{
//    mangled_ppc("?next@?$c_data_iterator@Us_lruv_cache_block@@@@QAA_NXZ");
//};

//public: struct s_lruv_cache_block * c_data_iterator<struct s_lruv_cache_block>::get_datum(void) const
//{
//    mangled_ppc("?get_datum@?$c_data_iterator@Us_lruv_cache_block@@@@QBAPAUs_lruv_cache_block@@XZ");
//};

//public: long c_data_iterator<struct s_lruv_cache_block>::get_index(void) const
//{
//    mangled_ppc("?get_index@?$c_data_iterator@Us_lruv_cache_block@@@@QBAJXZ");
//};

//public: void c_data_iterator<void>::begin(struct s_data_array *)
//{
//    mangled_ppc("?begin@?$c_data_iterator@X@@QAAXPAUs_data_array@@@Z");
//};

//public: bool c_data_iterator<void>::next(void)
//{
//    mangled_ppc("?next@?$c_data_iterator@X@@QAA_NXZ");
//};

//public: long c_data_iterator<void>::get_index(void) const
//{
//    mangled_ppc("?get_index@?$c_data_iterator@X@@QBAJXZ");
//};

//public: void c_data_iterator<struct s_lruv_cache_block const>::begin(struct s_data_array *)
//{
//    mangled_ppc("?begin@?$c_data_iterator@$$CBUs_lruv_cache_block@@@@QAAXPAUs_data_array@@@Z");
//};

//public: bool c_data_iterator<struct s_lruv_cache_block const>::next(void)
//{
//    mangled_ppc("?next@?$c_data_iterator@$$CBUs_lruv_cache_block@@@@QAA_NXZ");
//};

//public: struct s_lruv_cache_block const * c_data_iterator<struct s_lruv_cache_block const>::get_datum(void) const
//{
//    mangled_ppc("?get_datum@?$c_data_iterator@$$CBUs_lruv_cache_block@@@@QBAPBUs_lruv_cache_block@@XZ");
//};

//public: long c_data_iterator<struct s_lruv_cache_block const>::get_index(void) const
//{
//    mangled_ppc("?get_index@?$c_data_iterator@$$CBUs_lruv_cache_block@@@@QBAJXZ");
//};

//public: bool c_persist_stream::read_typed<unsigned long>(unsigned long *, long)
//{
//    mangled_ppc("??$read_typed@K@c_persist_stream@@QAA_NPAKJ@Z");
//};

//public: bool c_persist_stream::write_typed<unsigned long>(unsigned long *, long)
//{
//    mangled_ppc("??$write_typed@K@c_persist_stream@@QAA_NPAKJ@Z");
//};

//public: bool c_flags_no_init<enum e_lruv_cache_block_bit, unsigned short, 2, struct s_default_enum_string_resolver>::test(enum e_lruv_cache_block_bit) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_lruv_cache_block_bit@@G$01Us_default_enum_string_resolver@@@@QBA_NW4e_lruv_cache_block_bit@@@Z");
//};

//public: void c_flags_no_init<enum e_lruv_cache_block_bit, unsigned short, 2, struct s_default_enum_string_resolver>::set(enum e_lruv_cache_block_bit, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_lruv_cache_block_bit@@G$01Us_default_enum_string_resolver@@@@QAAXW4e_lruv_cache_block_bit@@_N@Z");
//};

//public: bool c_flags_no_init<enum e_lruv_cache_bit, unsigned long, 1, struct s_default_enum_string_resolver>::test(enum e_lruv_cache_bit) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_lruv_cache_bit@@K$00Us_default_enum_string_resolver@@@@QBA_NW4e_lruv_cache_bit@@@Z");
//};

//public: void c_flags_no_init<enum e_lruv_cache_bit, unsigned long, 1, struct s_default_enum_string_resolver>::set(enum e_lruv_cache_bit, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_lruv_cache_bit@@K$00Us_default_enum_string_resolver@@@@QAAXW4e_lruv_cache_bit@@_N@Z");
//};

//public: bool c_persist_stream::write_typed<struct s_lruv_persist_header>(struct s_lruv_persist_header *, long)
//{
//    mangled_ppc("??$write_typed@Us_lruv_persist_header@@@c_persist_stream@@QAA_NPAUs_lruv_persist_header@@J@Z");
//};

//public: bool c_persist_stream::read_typed<struct s_lruv_persist_header>(struct s_lruv_persist_header *, long)
//{
//    mangled_ppc("??$read_typed@Us_lruv_persist_header@@@c_persist_stream@@QAA_NPAUs_lruv_persist_header@@J@Z");
//};

//public: char const * s_static_string<12288>::append(char const *)
//{
//    mangled_ppc("?append@?$s_static_string@$0DAAA@@@QAAPBDPBD@Z");
//};

//public: char const * s_static_string<12288>::append_print(char const *, ...)
//{
//    mangled_ppc("?append_print@?$s_static_string@$0DAAA@@@QAAPBDPBDZZ");
//};

//public: char const * s_static_string<12288>::get_string(void) const
//{
//    mangled_ppc("?get_string@?$s_static_string@$0DAAA@@@QBAPBDXZ");
//};

//public: c_static_string<12288>::c_static_string<12288>(void)
//{
//    mangled_ppc("??0?$c_static_string@$0DAAA@@@QAA@XZ");
//};

//public: static bool c_flags_no_init<enum e_lruv_cache_block_bit, unsigned short, 2, struct s_default_enum_string_resolver>::valid_bit(enum e_lruv_cache_block_bit)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_lruv_cache_block_bit@@G$01Us_default_enum_string_resolver@@@@SA_NW4e_lruv_cache_block_bit@@@Z");
//};

//private: static unsigned short c_flags_no_init<enum e_lruv_cache_block_bit, unsigned short, 2, struct s_default_enum_string_resolver>::flag_size_type(enum e_lruv_cache_block_bit)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_lruv_cache_block_bit@@G$01Us_default_enum_string_resolver@@@@CAGW4e_lruv_cache_block_bit@@@Z");
//};

//public: static bool c_flags_no_init<enum e_lruv_cache_bit, unsigned long, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_lruv_cache_bit)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_lruv_cache_bit@@K$00Us_default_enum_string_resolver@@@@SA_NW4e_lruv_cache_bit@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_lruv_cache_bit, unsigned long, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_lruv_cache_bit)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_lruv_cache_bit@@K$00Us_default_enum_string_resolver@@@@CAKW4e_lruv_cache_bit@@@Z");
//};

//public: void s_static_string<12288>::clear(void)
//{
//    mangled_ppc("?clear@?$s_static_string@$0DAAA@@@QAAXXZ");
//};

//public: long s_static_string<12288>::length(void) const
//{
//    mangled_ppc("?length@?$s_static_string@$0DAAA@@@QBAJXZ");
//};

//void const * datum_try_and_get_const(struct s_data_array const *, long)
//{
//    mangled_ppc("?datum_try_and_get_const@@YAPBXPBUs_data_array@@J@Z");
//};

//public: static struct byte_swap_definition * c_byte_swap_traits<struct s_lruv_persist_header>::get_bs_definition(void)
//{
//    mangled_ppc("?get_bs_definition@?$c_byte_swap_traits@Us_lruv_persist_header@@@@SAPAUbyte_swap_definition@@XZ");
//};

//public: static struct byte_swap_definition * c_byte_swap_traits<struct s_lruv_cache_block>::get_bs_definition(void)
//{
//    mangled_ppc("?get_bs_definition@?$c_byte_swap_traits@Us_lruv_cache_block@@@@SAPAUbyte_swap_definition@@XZ");
//};

