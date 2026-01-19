/* ---------- headers */

#include "omaha\tag_files\tag_file_index.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const *const const c_byte_swap_traits<struct s_tag_file_index_header>::g_bs_codes_internal; // "?g_bs_codes_internal@?$c_byte_swap_traits@Us_tag_file_index_header@@@@2QBJB"
// public: static long const *const const c_byte_swap_traits<struct s_compressed_tag_file_index_entry>::g_bs_codes_internal; // "?g_bs_codes_internal@?$c_byte_swap_traits@Us_compressed_tag_file_index_entry@@@@2QBJB"
// public: static long const *const const c_byte_swap_traits<struct s_system_global_unique_identifier>::g_bs_codes_internal; // "?g_bs_codes_internal@?$c_byte_swap_traits@Us_system_global_unique_identifier@@@@2QBJB"
// public: static long const *const const c_byte_swap_traits<struct s_file_last_modification_date>::g_bs_codes_internal; // "?g_bs_codes_internal@?$c_byte_swap_traits@Us_file_last_modification_date@@@@2QBJB"
// public: static struct byte_swap_definition c_byte_swap_traits<struct s_file_last_modification_date>::g_bs_definition_internal; // "?g_bs_definition_internal@?$c_byte_swap_traits@Us_file_last_modification_date@@@@2Ubyte_swap_definition@@A"
// public: static struct byte_swap_definition c_byte_swap_traits<struct s_system_global_unique_identifier>::g_bs_definition_internal; // "?g_bs_definition_internal@?$c_byte_swap_traits@Us_system_global_unique_identifier@@@@2Ubyte_swap_definition@@A"
// public: static struct byte_swap_definition c_byte_swap_traits<struct s_compressed_tag_file_index_entry>::g_bs_definition_internal; // "?g_bs_definition_internal@?$c_byte_swap_traits@Us_compressed_tag_file_index_entry@@@@2Ubyte_swap_definition@@A"
// public: static struct byte_swap_definition c_byte_swap_traits<struct s_tag_file_index_header>::g_bs_definition_internal; // "?g_bs_definition_internal@?$c_byte_swap_traits@Us_tag_file_index_header@@@@2Ubyte_swap_definition@@A"
// public: static struct byte_swap_definition *c_byte_swap_traits<struct s_tag_file_index_header>::g_bs_definition; // "?g_bs_definition@?$c_byte_swap_traits@Us_tag_file_index_header@@@@2PAUbyte_swap_definition@@A"
// public: static struct byte_swap_definition *c_byte_swap_traits<struct s_compressed_tag_file_index_entry>::g_bs_definition; // "?g_bs_definition@?$c_byte_swap_traits@Us_compressed_tag_file_index_entry@@@@2PAUbyte_swap_definition@@A"
// public: static struct byte_swap_definition *c_byte_swap_traits<struct s_system_global_unique_identifier>::g_bs_definition; // "?g_bs_definition@?$c_byte_swap_traits@Us_system_global_unique_identifier@@@@2PAUbyte_swap_definition@@A"
// public: static struct byte_swap_definition *c_byte_swap_traits<struct s_file_last_modification_date>::g_bs_definition; // "?g_bs_definition@?$c_byte_swap_traits@Us_file_last_modification_date@@@@2PAUbyte_swap_definition@@A"

// void * tag_file_index_load(char const *);
// void * tag_file_index_restore(class c_persist_stream *);
// void * tag_file_index_build(void const *, char const *, char const *, bool);
// void * tag_file_index_build_custom(void const *, char const *, struct s_tag_file_index_builder *, bool);
// void * tag_file_index_build_empty(class c_allocation_interface *);
// bool tag_file_index_save(void const *, char const *);
// void * tag_file_index_restore(class c_persist_stream *, class c_allocation_interface *);
// bool tag_file_index_persist(void const *, class c_persist_stream *);
// void * tag_file_index_build(void const *, char const *, char const *, bool, class c_allocation_interface *);
// void * tag_file_index_build_custom(void const *, char const *, struct s_tag_file_index_builder *, bool, class c_allocation_interface *);
// int tag_file_index_build_qsort_proc(void const *, void const *);
// bool tag_file_index_builder_next_internal(struct s_tag_file_index_builder const *, class c_static_string<256> *, struct s_tag_group const **, struct s_file_last_modification_date *);
// void tag_file_index_free(void *);
// void * tag_file_index_copy(void const *, class c_allocation_interface *);
// void tag_file_index_free(void *, class c_allocation_interface *);
// long tag_file_index_size(void const *);
// long tag_file_index_approximate_count(void const *);
// bool tag_file_index_get_creator_name(void const *, class c_wrapped_array<char>);
// bool tag_file_index_get_creator_build(void const *, class c_wrapped_array<char>);
// bool tag_file_index_get_entry(void const *, long, struct s_tag_file_index_entry *);
// struct s_compressed_tag_file_index_entry const * tag_file_index_lookup_file_direct(struct s_tag_file_index_header const *, long);
// bool tag_file_index_get_entry_wide_cache_block_index(void const *, long, __int64*);
// bool tag_file_index_update_entry(void *, long, struct s_tag_file_index_entry const *);
// void tag_file_index_iterator_new(struct tag_file_index_iterator *, void const *, unsigned long, char const *, bool);
// bool tag_file_index_iterator_next(struct tag_file_index_iterator *, struct s_tag_file_index_entry *);
// bool tag_file_indices_creator_tags_equal(void const *, void const *);
// bool tag_file_indices_remote_equal(void const *, class c_persist_stream *);
// void tag_file_indices_difference_new(struct tag_file_indices_difference *, void const *, void const *);
// void tag_file_indices_difference_new_with_dirty_groups(struct tag_file_indices_difference *, void const *, void const *, unsigned long const *, long);
// bool tag_file_indices_difference_next(struct tag_file_indices_difference *, struct s_tag_file_index_entry *);
// bool initialize_tag_file_index_from_header(struct s_tag_file_index_header *, unsigned long);
// struct s_tag_file_index_header const * tag_file_index_verify(void const *);
// bool tag_file_index_verify_header(struct s_tag_file_index_header const *);
// struct s_tag_file_index_accelerator * tag_file_index_accelerator_new(void const *);
// void tag_file_index_accelerator_delete(struct s_tag_file_index_accelerator *);
// struct s_tag_file_index_accelerator * tag_file_index_accelerator_new(void const *, class c_allocation_interface *);
// bool tag_file_index_accelerated_file_qsort_proc(void const *, void const *, void const *);
// unsigned long tag_file_index_accelerator_checksum_name_and_group(unsigned long, char const *);
// void tag_file_index_accelerator_delete(struct s_tag_file_index_accelerator *, class c_allocation_interface *);
// struct s_compressed_tag_file_index_entry const * tag_file_index_accelerator_lookup_file_by_name(struct s_tag_file_index_accelerator const *, unsigned long, char const *);
// long tag_file_index_accelerator_lookup_compressed_entry_index_by_name(struct s_tag_file_index_accelerator const *, unsigned long, char const *);
// void tag_file_index_accelerator_find_compressed_entry_index_range(struct s_tag_file_index_accelerated_file const *, long, unsigned long, struct std::pair<long, long> *);
// char const * tag_file_index_get_name(struct s_tag_file_index_header const *, unsigned long);
// bool tag_file_index_accelerator_lookup(struct s_tag_file_index_accelerator const *, unsigned long, char const *);
// bool tag_file_index_accelerator_lookup_file(struct s_tag_file_index_accelerator const *, unsigned long, char const *, struct s_tag_file_index_entry *);
// long tag_file_index_accelerator_lookup_transient_entry_index(struct s_tag_file_index_accelerator const *, unsigned long, char const *);
// bool tag_file_index_lookup_from_transient_entry_index(struct s_tag_file_index_accelerator const *, long, struct s_tag_file_index_entry *);
// unsigned long tag_file_index_accelerator_lookup_short_name_identifier(struct s_tag_file_index_accelerator const *, unsigned long, char const *);
// bool tag_file_index_lookup_from_short_name_identifier(struct s_tag_file_index_accelerator const *, unsigned long, struct s_tag_file_index_entry *);
// struct s_compressed_tag_file_index_entry const * tag_file_index_accelerator_lookup_file_by_short_name_identifier(struct s_tag_file_index_accelerator const *, unsigned long);
// long tag_file_index_accelerator_lookup_compressed_entry_index_by_short_name_identifier(struct s_tag_file_index_accelerator const *, unsigned long);
// bool tag_file_index_accelerator_lookup_last_modification_date(struct s_tag_file_index_accelerator const *, unsigned long, char const *, struct s_file_last_modification_date *);
// long tag_file_index_accelerator_lookup_cache_block_index(struct s_tag_file_index_accelerator const *, unsigned long, char const *);
// __int64 tag_file_index_accelerator_lookup_wide_cache_block_index(struct s_tag_file_index_accelerator const *, unsigned long, char const *);
// __int64 tag_file_index_accelerator_lookup_wide_cache_block_index_from_transient_entry_index(struct s_tag_file_index_accelerator const *, long);
// public: void s_tag_file_index_entry::set_wide_block_index(__int64);
// long extract_low_long(__int64);
// long extract_high_long(__int64);
// public: __int64 s_compressed_tag_file_index_entry::get_wide_block_index(void) const;
// __int64 make_int64(long, long);
// public: __int64 s_tag_file_index_entry::get_wide_block_index(void) const;
// void tag_file_index_extract_from_compressed_entry(struct s_tag_file_index_header const *, struct s_compressed_tag_file_index_entry const *, struct s_tag_file_index_entry *);
// void tag_file_index_set_date_to_invalid(struct s_tag_file_index_entry *);
// public: c_wrapped_array<struct s_compressed_tag_file_index_entry>::c_wrapped_array<struct s_compressed_tag_file_index_entry>(struct s_compressed_tag_file_index_entry *, long);
// public: struct s_compressed_tag_file_index_entry & c_array_operator_interface<class c_wrapped_array_no_init<struct s_compressed_tag_file_index_entry>, struct s_compressed_tag_file_index_entry>::operator[](long);
// public: std::pair<long, long>::pair<long, long>(void);
// public: void c_wrapped_array_no_init<struct s_compressed_tag_file_index_entry>::set_elements(struct s_compressed_tag_file_index_entry *, long);
// public: struct s_compressed_tag_file_index_entry * c_wrapped_array_no_init<struct s_compressed_tag_file_index_entry>::begin(void);
// public: bool c_array_operator_interface<class c_wrapped_array_no_init<struct s_compressed_tag_file_index_entry>, struct s_compressed_tag_file_index_entry>::valid_index(long) const;
// public: class c_wrapped_array_no_init<struct s_compressed_tag_file_index_entry> * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_compressed_tag_file_index_entry> >::get_super_class(void);
// public: long c_array_operator_interface<class c_wrapped_array_no_init<struct s_compressed_tag_file_index_entry>, struct s_compressed_tag_file_index_entry>::count(void) const;
// public: long c_wrapped_array_no_init<struct s_compressed_tag_file_index_entry>::count(void) const;
// public: class c_wrapped_array_no_init<struct s_compressed_tag_file_index_entry> const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_compressed_tag_file_index_entry> >::get_super_class(void) const;
// public: bool c_persist_stream::read_typed<struct s_tag_file_index_header>(struct s_tag_file_index_header *, long);
// public: bool c_persist_stream::read_typed<struct s_compressed_tag_file_index_entry>(struct s_compressed_tag_file_index_entry *, long);
// public: bool c_persist_stream::read_typed<char>(char *, long);
// public: bool c_persist_stream::write_typed<struct s_tag_file_index_header>(struct s_tag_file_index_header *, long);
// public: bool c_persist_stream::write_typed<struct s_compressed_tag_file_index_entry>(struct s_compressed_tag_file_index_entry *, long);
// public: bool c_persist_stream::write_typed<char>(char *, long);
// unsigned long const * std::find<unsigned long const *, unsigned long>(unsigned long const *, unsigned long const *, unsigned long const &);
// struct s_allocation_description_holder make_allocation_description<struct s_tag_file_index_accelerator>(struct s_tag_file_index_accelerator *&);
// struct s_allocation_description_holder make_allocation_description<struct s_tag_file_index_accelerated_file>(struct s_tag_file_index_accelerated_file *&, unsigned long);
// public: c_wrapped_array<struct s_allocation_description_holder>::ctor<3>(struct s_allocation_description_holder (&)[3]);
// struct std::pair<struct s_tag_file_index_accelerated_file const *, struct s_tag_file_index_accelerated_file const *> std::equal_range<struct s_tag_file_index_accelerated_file const *, unsigned long, class c_tag_file_index_accelerated_file_less_than>(struct s_tag_file_index_accelerated_file const *, struct s_tag_file_index_accelerated_file const *, unsigned long const &, class c_tag_file_index_accelerated_file_less_than);
// public: void c_wrapped_array_no_init<struct s_allocation_description_holder>::set_elements(struct s_allocation_description_holder *, long);
// public: c_typed_allocation_description<struct s_tag_file_index_accelerator>::c_typed_allocation_description<struct s_tag_file_index_accelerator>(struct s_tag_file_index_accelerator *&);
// public: virtual unsigned long c_typed_allocation_description<struct s_tag_file_index_accelerator>::get_unaligned_size(void) const;
// public: virtual unsigned long c_typed_allocation_description<struct s_tag_file_index_accelerator>::get_alignment_bits(void) const;
// public: virtual void c_typed_allocation_description<struct s_tag_file_index_accelerator>::assign_storage(class c_raw_storage_buffer_iterator &) const;
// public: c_typed_allocation_description<struct s_tag_file_index_accelerated_file>::c_typed_allocation_description<struct s_tag_file_index_accelerated_file>(struct s_tag_file_index_accelerated_file *&, unsigned long);
// public: virtual unsigned long c_typed_allocation_description<struct s_tag_file_index_accelerated_file>::get_unaligned_size(void) const;
// public: virtual unsigned long c_typed_allocation_description<struct s_tag_file_index_accelerated_file>::get_alignment_bits(void) const;
// public: virtual void c_typed_allocation_description<struct s_tag_file_index_accelerated_file>::assign_storage(class c_raw_storage_buffer_iterator &) const;
// unsigned long const * std::_Find<unsigned long const *, unsigned long>(unsigned long const *, unsigned long const *, unsigned long const &);
// void std::_Checked_assign_from_base<unsigned long const *>(unsigned long const *&, unsigned long const *const &);
// struct s_allocation_description_holder make_into_description_holder<class c_typed_allocation_description<struct s_tag_file_index_accelerator> >(class c_typed_allocation_description<struct s_tag_file_index_accelerator>);
// struct s_allocation_description_holder make_into_description_holder<class c_typed_allocation_description<struct s_tag_file_index_accelerated_file> >(class c_typed_allocation_description<struct s_tag_file_index_accelerated_file>);
// int * std::_Dist_type<struct s_tag_file_index_accelerated_file const *>(struct s_tag_file_index_accelerated_file const *);
// struct std::pair<struct s_tag_file_index_accelerated_file const *, struct s_tag_file_index_accelerated_file const *> std::_Equal_range<struct s_tag_file_index_accelerated_file const *, unsigned long, int, class c_tag_file_index_accelerated_file_less_than>(struct s_tag_file_index_accelerated_file const *, struct s_tag_file_index_accelerated_file const *, unsigned long const &, class c_tag_file_index_accelerated_file_less_than, int *);
// public: bool c_tag_file_index_accelerated_file_less_than::operator()(unsigned long, struct s_tag_file_index_accelerated_file const &) const;
// unsigned long get_total_unaligned_raw_size<struct s_tag_file_index_accelerator>(long);
// public: struct s_tag_file_index_accelerator * c_raw_storage_buffer_iterator::get_array_elements<struct s_tag_file_index_accelerator>(long);
// unsigned long get_total_unaligned_raw_size<struct s_tag_file_index_accelerated_file>(long);
// public: struct s_tag_file_index_accelerated_file * c_raw_storage_buffer_iterator::get_array_elements<struct s_tag_file_index_accelerated_file>(long);
// public: std::pair<struct s_tag_file_index_accelerated_file const *, struct s_tag_file_index_accelerated_file const *>::pair<struct s_tag_file_index_accelerated_file const *, struct s_tag_file_index_accelerated_file const *>(struct s_tag_file_index_accelerated_file const *const &, struct s_tag_file_index_accelerated_file const *const &);
// void std::_Debug_range<unsigned long const *>(unsigned long const *, unsigned long const *, wchar_t const *, unsigned int);
// void std::_Debug_pointer<class c_tag_file_index_accelerated_file_less_than>(class c_tag_file_index_accelerated_file_less_than &, wchar_t const *, unsigned int);
// void std::_Debug_order_single<struct s_tag_file_index_accelerated_file const *, class c_tag_file_index_accelerated_file_less_than>(struct s_tag_file_index_accelerated_file const *, struct s_tag_file_index_accelerated_file const *, class c_tag_file_index_accelerated_file_less_than, bool, wchar_t const *, unsigned int);
// void std::_Distance<struct s_tag_file_index_accelerated_file const *, int>(struct s_tag_file_index_accelerated_file const *, struct s_tag_file_index_accelerated_file const *, int &);
// void std::advance<struct s_tag_file_index_accelerated_file const *, int>(struct s_tag_file_index_accelerated_file const *&, int);
// bool std::_Debug_lt_pred<class c_tag_file_index_accelerated_file_less_than, struct s_tag_file_index_accelerated_file, unsigned long>(class c_tag_file_index_accelerated_file_less_than, struct s_tag_file_index_accelerated_file const &, unsigned long const &, wchar_t const *, unsigned int);
// public: bool c_tag_file_index_accelerated_file_less_than::operator()(struct s_tag_file_index_accelerated_file const &, unsigned long) const;
// struct s_tag_file_index_accelerated_file const * std::lower_bound<struct s_tag_file_index_accelerated_file const *, unsigned long, class c_tag_file_index_accelerated_file_less_than>(struct s_tag_file_index_accelerated_file const *, struct s_tag_file_index_accelerated_file const *, unsigned long const &, class c_tag_file_index_accelerated_file_less_than);
// struct s_tag_file_index_accelerated_file const * std::upper_bound<struct s_tag_file_index_accelerated_file const *, unsigned long, class c_tag_file_index_accelerated_file_less_than>(struct s_tag_file_index_accelerated_file const *, struct s_tag_file_index_accelerated_file const *, unsigned long const &, class c_tag_file_index_accelerated_file_less_than);
// struct std::random_access_iterator_tag std::_Iter_cat<unsigned long const *>(unsigned long const *const &);
// void std::_Debug_range2<unsigned long const *>(unsigned long const *, unsigned long const *, wchar_t const *, unsigned int, struct std::random_access_iterator_tag);
// struct std::random_access_iterator_tag std::_Iter_cat<struct s_tag_file_index_accelerated_file const *>(struct s_tag_file_index_accelerated_file const *const &);
// void std::_Debug_order_single2<struct s_tag_file_index_accelerated_file const *, class c_tag_file_index_accelerated_file_less_than>(struct s_tag_file_index_accelerated_file const *, struct s_tag_file_index_accelerated_file const *, class c_tag_file_index_accelerated_file_less_than, bool, wchar_t const *, unsigned int, struct std::forward_iterator_tag);
// void std::_Distance2<struct s_tag_file_index_accelerated_file const *, int>(struct s_tag_file_index_accelerated_file const *, struct s_tag_file_index_accelerated_file const *, int &, struct std::random_access_iterator_tag);
// void std::_Advance<struct s_tag_file_index_accelerated_file const *, int>(struct s_tag_file_index_accelerated_file const *&, int, struct std::random_access_iterator_tag);
// struct s_tag_file_index_accelerated_file const * std::_Checked_base<struct s_tag_file_index_accelerated_file const *>(struct s_tag_file_index_accelerated_file const *&);
// struct s_tag_file_index_accelerated_file const * std::_Lower_bound<struct s_tag_file_index_accelerated_file const *, unsigned long, int, class c_tag_file_index_accelerated_file_less_than>(struct s_tag_file_index_accelerated_file const *, struct s_tag_file_index_accelerated_file const *, unsigned long const &, class c_tag_file_index_accelerated_file_less_than, int *);
// void std::_Checked_assign_from_base<struct s_tag_file_index_accelerated_file const *>(struct s_tag_file_index_accelerated_file const *&, struct s_tag_file_index_accelerated_file const *const &);
// struct s_tag_file_index_accelerated_file const * std::_Upper_bound<struct s_tag_file_index_accelerated_file const *, unsigned long, int, class c_tag_file_index_accelerated_file_less_than>(struct s_tag_file_index_accelerated_file const *, struct s_tag_file_index_accelerated_file const *, unsigned long const &, class c_tag_file_index_accelerated_file_less_than, int *);
// void std::_Debug_pointer<unsigned long>(unsigned long const *, wchar_t const *, unsigned int);
// bool std::_Debug_lt_pred<class c_tag_file_index_accelerated_file_less_than, struct s_tag_file_index_accelerated_file, struct s_tag_file_index_accelerated_file>(class c_tag_file_index_accelerated_file_less_than, struct s_tag_file_index_accelerated_file const &, struct s_tag_file_index_accelerated_file const &, wchar_t const *, unsigned int);
// public: bool c_tag_file_index_accelerated_file_less_than::operator()(struct s_tag_file_index_accelerated_file const &, struct s_tag_file_index_accelerated_file const &) const;
// void std::_Debug_pointer<struct s_tag_file_index_accelerated_file>(struct s_tag_file_index_accelerated_file const *, wchar_t const *, unsigned int);
// struct s_tag_file_index_accelerated_file const * std::_Checked_base<struct s_tag_file_index_accelerated_file const *>(struct s_tag_file_index_accelerated_file const *&, struct std::_Unchanged_checked_iterator_base_type_tag);
// bool std::_Debug_lt_pred<class c_tag_file_index_accelerated_file_less_than, unsigned long, struct s_tag_file_index_accelerated_file>(class c_tag_file_index_accelerated_file_less_than, unsigned long const &, struct s_tag_file_index_accelerated_file const &, wchar_t const *, unsigned int);
// public: static struct byte_swap_definition * c_byte_swap_traits<struct s_file_last_modification_date>::get_bs_definition(void);
// public: static struct byte_swap_definition * c_byte_swap_traits<struct s_system_global_unique_identifier>::get_bs_definition(void);
// public: static struct byte_swap_definition * c_byte_swap_traits<struct s_compressed_tag_file_index_entry>::get_bs_definition(void);
// public: static struct byte_swap_definition * c_byte_swap_traits<struct s_tag_file_index_header>::get_bs_definition(void);

//void * tag_file_index_load(char const *)
//{
//    mangled_ppc("?tag_file_index_load@@YAPAXPBD@Z");
//};

//void * tag_file_index_restore(class c_persist_stream *)
//{
//    mangled_ppc("?tag_file_index_restore@@YAPAXPAVc_persist_stream@@@Z");
//};

//void * tag_file_index_build(void const *, char const *, char const *, bool)
//{
//    mangled_ppc("?tag_file_index_build@@YAPAXPBXPBD1_N@Z");
//};

//void * tag_file_index_build_custom(void const *, char const *, struct s_tag_file_index_builder *, bool)
//{
//    mangled_ppc("?tag_file_index_build_custom@@YAPAXPBXPBDPAUs_tag_file_index_builder@@_N@Z");
//};

//void * tag_file_index_build_empty(class c_allocation_interface *)
//{
//    mangled_ppc("?tag_file_index_build_empty@@YAPAXPAVc_allocation_interface@@@Z");
//};

//bool tag_file_index_save(void const *, char const *)
//{
//    mangled_ppc("?tag_file_index_save@@YA_NPBXPBD@Z");
//};

//void * tag_file_index_restore(class c_persist_stream *, class c_allocation_interface *)
//{
//    mangled_ppc("?tag_file_index_restore@@YAPAXPAVc_persist_stream@@PAVc_allocation_interface@@@Z");
//};

//bool tag_file_index_persist(void const *, class c_persist_stream *)
//{
//    mangled_ppc("?tag_file_index_persist@@YA_NPBXPAVc_persist_stream@@@Z");
//};

//void * tag_file_index_build(void const *, char const *, char const *, bool, class c_allocation_interface *)
//{
//    mangled_ppc("?tag_file_index_build@@YAPAXPBXPBD1_NPAVc_allocation_interface@@@Z");
//};

//void * tag_file_index_build_custom(void const *, char const *, struct s_tag_file_index_builder *, bool, class c_allocation_interface *)
//{
//    mangled_ppc("?tag_file_index_build_custom@@YAPAXPBXPBDPAUs_tag_file_index_builder@@_NPAVc_allocation_interface@@@Z");
//};

//int tag_file_index_build_qsort_proc(void const *, void const *)
//{
//    mangled_ppc("?tag_file_index_build_qsort_proc@@YAHPBX0@Z");
//};

//bool tag_file_index_builder_next_internal(struct s_tag_file_index_builder const *, class c_static_string<256> *, struct s_tag_group const **, struct s_file_last_modification_date *)
//{
//    mangled_ppc("?tag_file_index_builder_next_internal@@YA_NPBUs_tag_file_index_builder@@PAV?$c_static_string@$0BAA@@@PAPBUs_tag_group@@PAUs_file_last_modification_date@@@Z");
//};

//void tag_file_index_free(void *)
//{
//    mangled_ppc("?tag_file_index_free@@YAXPAX@Z");
//};

//void * tag_file_index_copy(void const *, class c_allocation_interface *)
//{
//    mangled_ppc("?tag_file_index_copy@@YAPAXPBXPAVc_allocation_interface@@@Z");
//};

//void tag_file_index_free(void *, class c_allocation_interface *)
//{
//    mangled_ppc("?tag_file_index_free@@YAXPAXPAVc_allocation_interface@@@Z");
//};

//long tag_file_index_size(void const *)
//{
//    mangled_ppc("?tag_file_index_size@@YAJPBX@Z");
//};

//long tag_file_index_approximate_count(void const *)
//{
//    mangled_ppc("?tag_file_index_approximate_count@@YAJPBX@Z");
//};

//bool tag_file_index_get_creator_name(void const *, class c_wrapped_array<char>)
//{
//    mangled_ppc("?tag_file_index_get_creator_name@@YA_NPBXV?$c_wrapped_array@D@@@Z");
//};

//bool tag_file_index_get_creator_build(void const *, class c_wrapped_array<char>)
//{
//    mangled_ppc("?tag_file_index_get_creator_build@@YA_NPBXV?$c_wrapped_array@D@@@Z");
//};

//bool tag_file_index_get_entry(void const *, long, struct s_tag_file_index_entry *)
//{
//    mangled_ppc("?tag_file_index_get_entry@@YA_NPBXJPAUs_tag_file_index_entry@@@Z");
//};

//struct s_compressed_tag_file_index_entry const * tag_file_index_lookup_file_direct(struct s_tag_file_index_header const *, long)
//{
//    mangled_ppc("?tag_file_index_lookup_file_direct@@YAPBUs_compressed_tag_file_index_entry@@PBUs_tag_file_index_header@@J@Z");
//};

//bool tag_file_index_get_entry_wide_cache_block_index(void const *, long, __int64*)
//{
//    mangled_ppc("?tag_file_index_get_entry_wide_cache_block_index@@YA_NPBXJPA_J@Z");
//};

//bool tag_file_index_update_entry(void *, long, struct s_tag_file_index_entry const *)
//{
//    mangled_ppc("?tag_file_index_update_entry@@YA_NPAXJPBUs_tag_file_index_entry@@@Z");
//};

//void tag_file_index_iterator_new(struct tag_file_index_iterator *, void const *, unsigned long, char const *, bool)
//{
//    mangled_ppc("?tag_file_index_iterator_new@@YAXPAUtag_file_index_iterator@@PBXKPBD_N@Z");
//};

//bool tag_file_index_iterator_next(struct tag_file_index_iterator *, struct s_tag_file_index_entry *)
//{
//    mangled_ppc("?tag_file_index_iterator_next@@YA_NPAUtag_file_index_iterator@@PAUs_tag_file_index_entry@@@Z");
//};

//bool tag_file_indices_creator_tags_equal(void const *, void const *)
//{
//    mangled_ppc("?tag_file_indices_creator_tags_equal@@YA_NPBX0@Z");
//};

//bool tag_file_indices_remote_equal(void const *, class c_persist_stream *)
//{
//    mangled_ppc("?tag_file_indices_remote_equal@@YA_NPBXPAVc_persist_stream@@@Z");
//};

//void tag_file_indices_difference_new(struct tag_file_indices_difference *, void const *, void const *)
//{
//    mangled_ppc("?tag_file_indices_difference_new@@YAXPAUtag_file_indices_difference@@PBX1@Z");
//};

//void tag_file_indices_difference_new_with_dirty_groups(struct tag_file_indices_difference *, void const *, void const *, unsigned long const *, long)
//{
//    mangled_ppc("?tag_file_indices_difference_new_with_dirty_groups@@YAXPAUtag_file_indices_difference@@PBX1PBKJ@Z");
//};

//bool tag_file_indices_difference_next(struct tag_file_indices_difference *, struct s_tag_file_index_entry *)
//{
//    mangled_ppc("?tag_file_indices_difference_next@@YA_NPAUtag_file_indices_difference@@PAUs_tag_file_index_entry@@@Z");
//};

//bool initialize_tag_file_index_from_header(struct s_tag_file_index_header *, unsigned long)
//{
//    mangled_ppc("?initialize_tag_file_index_from_header@@YA_NPAUs_tag_file_index_header@@K@Z");
//};

//struct s_tag_file_index_header const * tag_file_index_verify(void const *)
//{
//    mangled_ppc("?tag_file_index_verify@@YAPBUs_tag_file_index_header@@PBX@Z");
//};

//bool tag_file_index_verify_header(struct s_tag_file_index_header const *)
//{
//    mangled_ppc("?tag_file_index_verify_header@@YA_NPBUs_tag_file_index_header@@@Z");
//};

//struct s_tag_file_index_accelerator * tag_file_index_accelerator_new(void const *)
//{
//    mangled_ppc("?tag_file_index_accelerator_new@@YAPAUs_tag_file_index_accelerator@@PBX@Z");
//};

//void tag_file_index_accelerator_delete(struct s_tag_file_index_accelerator *)
//{
//    mangled_ppc("?tag_file_index_accelerator_delete@@YAXPAUs_tag_file_index_accelerator@@@Z");
//};

//struct s_tag_file_index_accelerator * tag_file_index_accelerator_new(void const *, class c_allocation_interface *)
//{
//    mangled_ppc("?tag_file_index_accelerator_new@@YAPAUs_tag_file_index_accelerator@@PBXPAVc_allocation_interface@@@Z");
//};

//bool tag_file_index_accelerated_file_qsort_proc(void const *, void const *, void const *)
//{
//    mangled_ppc("?tag_file_index_accelerated_file_qsort_proc@@YA_NPBX00@Z");
//};

//unsigned long tag_file_index_accelerator_checksum_name_and_group(unsigned long, char const *)
//{
//    mangled_ppc("?tag_file_index_accelerator_checksum_name_and_group@@YAKKPBD@Z");
//};

//void tag_file_index_accelerator_delete(struct s_tag_file_index_accelerator *, class c_allocation_interface *)
//{
//    mangled_ppc("?tag_file_index_accelerator_delete@@YAXPAUs_tag_file_index_accelerator@@PAVc_allocation_interface@@@Z");
//};

//struct s_compressed_tag_file_index_entry const * tag_file_index_accelerator_lookup_file_by_name(struct s_tag_file_index_accelerator const *, unsigned long, char const *)
//{
//    mangled_ppc("?tag_file_index_accelerator_lookup_file_by_name@@YAPBUs_compressed_tag_file_index_entry@@PBUs_tag_file_index_accelerator@@KPBD@Z");
//};

//long tag_file_index_accelerator_lookup_compressed_entry_index_by_name(struct s_tag_file_index_accelerator const *, unsigned long, char const *)
//{
//    mangled_ppc("?tag_file_index_accelerator_lookup_compressed_entry_index_by_name@@YAJPBUs_tag_file_index_accelerator@@KPBD@Z");
//};

//void tag_file_index_accelerator_find_compressed_entry_index_range(struct s_tag_file_index_accelerated_file const *, long, unsigned long, struct std::pair<long, long> *)
//{
//    mangled_ppc("?tag_file_index_accelerator_find_compressed_entry_index_range@@YAXPBUs_tag_file_index_accelerated_file@@JKPAU?$pair@JJ@std@@@Z");
//};

//char const * tag_file_index_get_name(struct s_tag_file_index_header const *, unsigned long)
//{
//    mangled_ppc("?tag_file_index_get_name@@YAPBDPBUs_tag_file_index_header@@K@Z");
//};

//bool tag_file_index_accelerator_lookup(struct s_tag_file_index_accelerator const *, unsigned long, char const *)
//{
//    mangled_ppc("?tag_file_index_accelerator_lookup@@YA_NPBUs_tag_file_index_accelerator@@KPBD@Z");
//};

//bool tag_file_index_accelerator_lookup_file(struct s_tag_file_index_accelerator const *, unsigned long, char const *, struct s_tag_file_index_entry *)
//{
//    mangled_ppc("?tag_file_index_accelerator_lookup_file@@YA_NPBUs_tag_file_index_accelerator@@KPBDPAUs_tag_file_index_entry@@@Z");
//};

//long tag_file_index_accelerator_lookup_transient_entry_index(struct s_tag_file_index_accelerator const *, unsigned long, char const *)
//{
//    mangled_ppc("?tag_file_index_accelerator_lookup_transient_entry_index@@YAJPBUs_tag_file_index_accelerator@@KPBD@Z");
//};

//bool tag_file_index_lookup_from_transient_entry_index(struct s_tag_file_index_accelerator const *, long, struct s_tag_file_index_entry *)
//{
//    mangled_ppc("?tag_file_index_lookup_from_transient_entry_index@@YA_NPBUs_tag_file_index_accelerator@@JPAUs_tag_file_index_entry@@@Z");
//};

//unsigned long tag_file_index_accelerator_lookup_short_name_identifier(struct s_tag_file_index_accelerator const *, unsigned long, char const *)
//{
//    mangled_ppc("?tag_file_index_accelerator_lookup_short_name_identifier@@YAKPBUs_tag_file_index_accelerator@@KPBD@Z");
//};

//bool tag_file_index_lookup_from_short_name_identifier(struct s_tag_file_index_accelerator const *, unsigned long, struct s_tag_file_index_entry *)
//{
//    mangled_ppc("?tag_file_index_lookup_from_short_name_identifier@@YA_NPBUs_tag_file_index_accelerator@@KPAUs_tag_file_index_entry@@@Z");
//};

//struct s_compressed_tag_file_index_entry const * tag_file_index_accelerator_lookup_file_by_short_name_identifier(struct s_tag_file_index_accelerator const *, unsigned long)
//{
//    mangled_ppc("?tag_file_index_accelerator_lookup_file_by_short_name_identifier@@YAPBUs_compressed_tag_file_index_entry@@PBUs_tag_file_index_accelerator@@K@Z");
//};

//long tag_file_index_accelerator_lookup_compressed_entry_index_by_short_name_identifier(struct s_tag_file_index_accelerator const *, unsigned long)
//{
//    mangled_ppc("?tag_file_index_accelerator_lookup_compressed_entry_index_by_short_name_identifier@@YAJPBUs_tag_file_index_accelerator@@K@Z");
//};

//bool tag_file_index_accelerator_lookup_last_modification_date(struct s_tag_file_index_accelerator const *, unsigned long, char const *, struct s_file_last_modification_date *)
//{
//    mangled_ppc("?tag_file_index_accelerator_lookup_last_modification_date@@YA_NPBUs_tag_file_index_accelerator@@KPBDPAUs_file_last_modification_date@@@Z");
//};

//long tag_file_index_accelerator_lookup_cache_block_index(struct s_tag_file_index_accelerator const *, unsigned long, char const *)
//{
//    mangled_ppc("?tag_file_index_accelerator_lookup_cache_block_index@@YAJPBUs_tag_file_index_accelerator@@KPBD@Z");
//};

//__int64 tag_file_index_accelerator_lookup_wide_cache_block_index(struct s_tag_file_index_accelerator const *, unsigned long, char const *)
//{
//    mangled_ppc("?tag_file_index_accelerator_lookup_wide_cache_block_index@@YA_JPBUs_tag_file_index_accelerator@@KPBD@Z");
//};

//__int64 tag_file_index_accelerator_lookup_wide_cache_block_index_from_transient_entry_index(struct s_tag_file_index_accelerator const *, long)
//{
//    mangled_ppc("?tag_file_index_accelerator_lookup_wide_cache_block_index_from_transient_entry_index@@YA_JPBUs_tag_file_index_accelerator@@J@Z");
//};

//public: void s_tag_file_index_entry::set_wide_block_index(__int64)
//{
//    mangled_ppc("?set_wide_block_index@s_tag_file_index_entry@@QAAX_J@Z");
//};

//long extract_low_long(__int64)
//{
//    mangled_ppc("?extract_low_long@@YAJ_J@Z");
//};

//long extract_high_long(__int64)
//{
//    mangled_ppc("?extract_high_long@@YAJ_J@Z");
//};

//public: __int64 s_compressed_tag_file_index_entry::get_wide_block_index(void) const
//{
//    mangled_ppc("?get_wide_block_index@s_compressed_tag_file_index_entry@@QBA_JXZ");
//};

//__int64 make_int64(long, long)
//{
//    mangled_ppc("?make_int64@@YA_JJJ@Z");
//};

//public: __int64 s_tag_file_index_entry::get_wide_block_index(void) const
//{
//    mangled_ppc("?get_wide_block_index@s_tag_file_index_entry@@QBA_JXZ");
//};

//void tag_file_index_extract_from_compressed_entry(struct s_tag_file_index_header const *, struct s_compressed_tag_file_index_entry const *, struct s_tag_file_index_entry *)
//{
//    mangled_ppc("?tag_file_index_extract_from_compressed_entry@@YAXPBUs_tag_file_index_header@@PBUs_compressed_tag_file_index_entry@@PAUs_tag_file_index_entry@@@Z");
//};

//void tag_file_index_set_date_to_invalid(struct s_tag_file_index_entry *)
//{
//    mangled_ppc("?tag_file_index_set_date_to_invalid@@YAXPAUs_tag_file_index_entry@@@Z");
//};

//public: c_wrapped_array<struct s_compressed_tag_file_index_entry>::c_wrapped_array<struct s_compressed_tag_file_index_entry>(struct s_compressed_tag_file_index_entry *, long)
//{
//    mangled_ppc("??0?$c_wrapped_array@Us_compressed_tag_file_index_entry@@@@QAA@PAUs_compressed_tag_file_index_entry@@J@Z");
//};

//public: struct s_compressed_tag_file_index_entry & c_array_operator_interface<class c_wrapped_array_no_init<struct s_compressed_tag_file_index_entry>, struct s_compressed_tag_file_index_entry>::operator[](long)
//{
//    mangled_ppc("??A?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_compressed_tag_file_index_entry@@@@Us_compressed_tag_file_index_entry@@@@QAAAAUs_compressed_tag_file_index_entry@@J@Z");
//};

//public: std::pair<long, long>::pair<long, long>(void)
//{
//    mangled_ppc("??0?$pair@JJ@std@@QAA@XZ");
//};

//public: void c_wrapped_array_no_init<struct s_compressed_tag_file_index_entry>::set_elements(struct s_compressed_tag_file_index_entry *, long)
//{
//    mangled_ppc("?set_elements@?$c_wrapped_array_no_init@Us_compressed_tag_file_index_entry@@@@QAAXPAUs_compressed_tag_file_index_entry@@J@Z");
//};

//public: struct s_compressed_tag_file_index_entry * c_wrapped_array_no_init<struct s_compressed_tag_file_index_entry>::begin(void)
//{
//    mangled_ppc("?begin@?$c_wrapped_array_no_init@Us_compressed_tag_file_index_entry@@@@QAAPAUs_compressed_tag_file_index_entry@@XZ");
//};

//public: bool c_array_operator_interface<class c_wrapped_array_no_init<struct s_compressed_tag_file_index_entry>, struct s_compressed_tag_file_index_entry>::valid_index(long) const
//{
//    mangled_ppc("?valid_index@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_compressed_tag_file_index_entry@@@@Us_compressed_tag_file_index_entry@@@@QBA_NJ@Z");
//};

//public: class c_wrapped_array_no_init<struct s_compressed_tag_file_index_entry> * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_compressed_tag_file_index_entry> >::get_super_class(void)
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@Us_compressed_tag_file_index_entry@@@@@@QAAPAV?$c_wrapped_array_no_init@Us_compressed_tag_file_index_entry@@@@XZ");
//};

//public: long c_array_operator_interface<class c_wrapped_array_no_init<struct s_compressed_tag_file_index_entry>, struct s_compressed_tag_file_index_entry>::count(void) const
//{
//    mangled_ppc("?count@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_compressed_tag_file_index_entry@@@@Us_compressed_tag_file_index_entry@@@@QBAJXZ");
//};

//public: long c_wrapped_array_no_init<struct s_compressed_tag_file_index_entry>::count(void) const
//{
//    mangled_ppc("?count@?$c_wrapped_array_no_init@Us_compressed_tag_file_index_entry@@@@QBAJXZ");
//};

//public: class c_wrapped_array_no_init<struct s_compressed_tag_file_index_entry> const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_compressed_tag_file_index_entry> >::get_super_class(void) const
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@Us_compressed_tag_file_index_entry@@@@@@QBAPBV?$c_wrapped_array_no_init@Us_compressed_tag_file_index_entry@@@@XZ");
//};

//public: bool c_persist_stream::read_typed<struct s_tag_file_index_header>(struct s_tag_file_index_header *, long)
//{
//    mangled_ppc("??$read_typed@Us_tag_file_index_header@@@c_persist_stream@@QAA_NPAUs_tag_file_index_header@@J@Z");
//};

//public: bool c_persist_stream::read_typed<struct s_compressed_tag_file_index_entry>(struct s_compressed_tag_file_index_entry *, long)
//{
//    mangled_ppc("??$read_typed@Us_compressed_tag_file_index_entry@@@c_persist_stream@@QAA_NPAUs_compressed_tag_file_index_entry@@J@Z");
//};

//public: bool c_persist_stream::read_typed<char>(char *, long)
//{
//    mangled_ppc("??$read_typed@D@c_persist_stream@@QAA_NPADJ@Z");
//};

//public: bool c_persist_stream::write_typed<struct s_tag_file_index_header>(struct s_tag_file_index_header *, long)
//{
//    mangled_ppc("??$write_typed@Us_tag_file_index_header@@@c_persist_stream@@QAA_NPAUs_tag_file_index_header@@J@Z");
//};

//public: bool c_persist_stream::write_typed<struct s_compressed_tag_file_index_entry>(struct s_compressed_tag_file_index_entry *, long)
//{
//    mangled_ppc("??$write_typed@Us_compressed_tag_file_index_entry@@@c_persist_stream@@QAA_NPAUs_compressed_tag_file_index_entry@@J@Z");
//};

//public: bool c_persist_stream::write_typed<char>(char *, long)
//{
//    mangled_ppc("??$write_typed@D@c_persist_stream@@QAA_NPADJ@Z");
//};

//unsigned long const * std::find<unsigned long const *, unsigned long>(unsigned long const *, unsigned long const *, unsigned long const &)
//{
//    mangled_ppc("??$find@PBKK@std@@YAPBKPBK0ABK@Z");
//};

//struct s_allocation_description_holder make_allocation_description<struct s_tag_file_index_accelerator>(struct s_tag_file_index_accelerator *&)
//{
//    mangled_ppc("??$make_allocation_description@Us_tag_file_index_accelerator@@@@YA?AUs_allocation_description_holder@@AAPAUs_tag_file_index_accelerator@@@Z");
//};

//struct s_allocation_description_holder make_allocation_description<struct s_tag_file_index_accelerated_file>(struct s_tag_file_index_accelerated_file *&, unsigned long)
//{
//    mangled_ppc("??$make_allocation_description@Us_tag_file_index_accelerated_file@@@@YA?AUs_allocation_description_holder@@AAPAUs_tag_file_index_accelerated_file@@K@Z");
//};

//public: c_wrapped_array<struct s_allocation_description_holder>::ctor<3>(struct s_allocation_description_holder (&)[3])
//{
//    mangled_ppc("??$?0$02@?$c_wrapped_array@Us_allocation_description_holder@@@@QAA@AAY02Us_allocation_description_holder@@@Z");
//};

//struct std::pair<struct s_tag_file_index_accelerated_file const *, struct s_tag_file_index_accelerated_file const *> std::equal_range<struct s_tag_file_index_accelerated_file const *, unsigned long, class c_tag_file_index_accelerated_file_less_than>(struct s_tag_file_index_accelerated_file const *, struct s_tag_file_index_accelerated_file const *, unsigned long const &, class c_tag_file_index_accelerated_file_less_than)
//{
//    mangled_ppc("??$equal_range@PBUs_tag_file_index_accelerated_file@@KVc_tag_file_index_accelerated_file_less_than@@@std@@YA?AU?$pair@PBUs_tag_file_index_accelerated_file@@PBU1@@0@PBUs_tag_file_index_accelerated_file@@0ABKVc_tag_file_index_accelerated_file_less_than@@@Z");
//};

//public: void c_wrapped_array_no_init<struct s_allocation_description_holder>::set_elements(struct s_allocation_description_holder *, long)
//{
//    mangled_ppc("?set_elements@?$c_wrapped_array_no_init@Us_allocation_description_holder@@@@QAAXPAUs_allocation_description_holder@@J@Z");
//};

//public: c_typed_allocation_description<struct s_tag_file_index_accelerator>::c_typed_allocation_description<struct s_tag_file_index_accelerator>(struct s_tag_file_index_accelerator *&)
//{
//    mangled_ppc("??0?$c_typed_allocation_description@Us_tag_file_index_accelerator@@@@QAA@AAPAUs_tag_file_index_accelerator@@@Z");
//};

//public: virtual unsigned long c_typed_allocation_description<struct s_tag_file_index_accelerator>::get_unaligned_size(void) const
//{
//    mangled_ppc("?get_unaligned_size@?$c_typed_allocation_description@Us_tag_file_index_accelerator@@@@UBAKXZ");
//};

//public: virtual unsigned long c_typed_allocation_description<struct s_tag_file_index_accelerator>::get_alignment_bits(void) const
//{
//    mangled_ppc("?get_alignment_bits@?$c_typed_allocation_description@Us_tag_file_index_accelerator@@@@UBAKXZ");
//};

//public: virtual void c_typed_allocation_description<struct s_tag_file_index_accelerator>::assign_storage(class c_raw_storage_buffer_iterator &) const
//{
//    mangled_ppc("?assign_storage@?$c_typed_allocation_description@Us_tag_file_index_accelerator@@@@UBAXAAVc_raw_storage_buffer_iterator@@@Z");
//};

//public: c_typed_allocation_description<struct s_tag_file_index_accelerated_file>::c_typed_allocation_description<struct s_tag_file_index_accelerated_file>(struct s_tag_file_index_accelerated_file *&, unsigned long)
//{
//    mangled_ppc("??0?$c_typed_allocation_description@Us_tag_file_index_accelerated_file@@@@QAA@AAPAUs_tag_file_index_accelerated_file@@K@Z");
//};

//public: virtual unsigned long c_typed_allocation_description<struct s_tag_file_index_accelerated_file>::get_unaligned_size(void) const
//{
//    mangled_ppc("?get_unaligned_size@?$c_typed_allocation_description@Us_tag_file_index_accelerated_file@@@@UBAKXZ");
//};

//public: virtual unsigned long c_typed_allocation_description<struct s_tag_file_index_accelerated_file>::get_alignment_bits(void) const
//{
//    mangled_ppc("?get_alignment_bits@?$c_typed_allocation_description@Us_tag_file_index_accelerated_file@@@@UBAKXZ");
//};

//public: virtual void c_typed_allocation_description<struct s_tag_file_index_accelerated_file>::assign_storage(class c_raw_storage_buffer_iterator &) const
//{
//    mangled_ppc("?assign_storage@?$c_typed_allocation_description@Us_tag_file_index_accelerated_file@@@@UBAXAAVc_raw_storage_buffer_iterator@@@Z");
//};

//unsigned long const * std::_Find<unsigned long const *, unsigned long>(unsigned long const *, unsigned long const *, unsigned long const &)
//{
//    mangled_ppc("??$_Find@PBKK@std@@YAPBKPBK0ABK@Z");
//};

//void std::_Checked_assign_from_base<unsigned long const *>(unsigned long const *&, unsigned long const *const &)
//{
//    mangled_ppc("??$_Checked_assign_from_base@PBK@std@@YAXAAPBKABQBK@Z");
//};

//struct s_allocation_description_holder make_into_description_holder<class c_typed_allocation_description<struct s_tag_file_index_accelerator> >(class c_typed_allocation_description<struct s_tag_file_index_accelerator>)
//{
//    mangled_ppc("??$make_into_description_holder@V?$c_typed_allocation_description@Us_tag_file_index_accelerator@@@@@@YA?AUs_allocation_description_holder@@V?$c_typed_allocation_description@Us_tag_file_index_accelerator@@@@@Z");
//};

//struct s_allocation_description_holder make_into_description_holder<class c_typed_allocation_description<struct s_tag_file_index_accelerated_file> >(class c_typed_allocation_description<struct s_tag_file_index_accelerated_file>)
//{
//    mangled_ppc("??$make_into_description_holder@V?$c_typed_allocation_description@Us_tag_file_index_accelerated_file@@@@@@YA?AUs_allocation_description_holder@@V?$c_typed_allocation_description@Us_tag_file_index_accelerated_file@@@@@Z");
//};

//int * std::_Dist_type<struct s_tag_file_index_accelerated_file const *>(struct s_tag_file_index_accelerated_file const *)
//{
//    mangled_ppc("??$_Dist_type@PBUs_tag_file_index_accelerated_file@@@std@@YAPAHPBUs_tag_file_index_accelerated_file@@@Z");
//};

//struct std::pair<struct s_tag_file_index_accelerated_file const *, struct s_tag_file_index_accelerated_file const *> std::_Equal_range<struct s_tag_file_index_accelerated_file const *, unsigned long, int, class c_tag_file_index_accelerated_file_less_than>(struct s_tag_file_index_accelerated_file const *, struct s_tag_file_index_accelerated_file const *, unsigned long const &, class c_tag_file_index_accelerated_file_less_than, int *)
//{
//    mangled_ppc("??$_Equal_range@PBUs_tag_file_index_accelerated_file@@KHVc_tag_file_index_accelerated_file_less_than@@@std@@YA?AU?$pair@PBUs_tag_file_index_accelerated_file@@PBU1@@0@PBUs_tag_file_index_accelerated_file@@0ABKVc_tag_file_index_accelerated_file_less_than@@PAH@Z");
//};

//public: bool c_tag_file_index_accelerated_file_less_than::operator()(unsigned long, struct s_tag_file_index_accelerated_file const &) const
//{
//    mangled_ppc("??Rc_tag_file_index_accelerated_file_less_than@@QBA_NKABUs_tag_file_index_accelerated_file@@@Z");
//};

//unsigned long get_total_unaligned_raw_size<struct s_tag_file_index_accelerator>(long)
//{
//    mangled_ppc("??$get_total_unaligned_raw_size@Us_tag_file_index_accelerator@@@@YAKJ@Z");
//};

//public: struct s_tag_file_index_accelerator * c_raw_storage_buffer_iterator::get_array_elements<struct s_tag_file_index_accelerator>(long)
//{
//    mangled_ppc("??$get_array_elements@Us_tag_file_index_accelerator@@@c_raw_storage_buffer_iterator@@QAAPAUs_tag_file_index_accelerator@@J@Z");
//};

//unsigned long get_total_unaligned_raw_size<struct s_tag_file_index_accelerated_file>(long)
//{
//    mangled_ppc("??$get_total_unaligned_raw_size@Us_tag_file_index_accelerated_file@@@@YAKJ@Z");
//};

//public: struct s_tag_file_index_accelerated_file * c_raw_storage_buffer_iterator::get_array_elements<struct s_tag_file_index_accelerated_file>(long)
//{
//    mangled_ppc("??$get_array_elements@Us_tag_file_index_accelerated_file@@@c_raw_storage_buffer_iterator@@QAAPAUs_tag_file_index_accelerated_file@@J@Z");
//};

//public: std::pair<struct s_tag_file_index_accelerated_file const *, struct s_tag_file_index_accelerated_file const *>::pair<struct s_tag_file_index_accelerated_file const *, struct s_tag_file_index_accelerated_file const *>(struct s_tag_file_index_accelerated_file const *const &, struct s_tag_file_index_accelerated_file const *const &)
//{
//    mangled_ppc("??0?$pair@PBUs_tag_file_index_accelerated_file@@PBU1@@std@@QAA@ABQBUs_tag_file_index_accelerated_file@@0@Z");
//};

//void std::_Debug_range<unsigned long const *>(unsigned long const *, unsigned long const *, wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_range@PBK@std@@YAXPBK0PB_WI@Z");
//};

//void std::_Debug_pointer<class c_tag_file_index_accelerated_file_less_than>(class c_tag_file_index_accelerated_file_less_than &, wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_pointer@Vc_tag_file_index_accelerated_file_less_than@@@std@@YAXAAVc_tag_file_index_accelerated_file_less_than@@PB_WI@Z");
//};

//void std::_Debug_order_single<struct s_tag_file_index_accelerated_file const *, class c_tag_file_index_accelerated_file_less_than>(struct s_tag_file_index_accelerated_file const *, struct s_tag_file_index_accelerated_file const *, class c_tag_file_index_accelerated_file_less_than, bool, wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_order_single@PBUs_tag_file_index_accelerated_file@@Vc_tag_file_index_accelerated_file_less_than@@@std@@YAXPBUs_tag_file_index_accelerated_file@@0Vc_tag_file_index_accelerated_file_less_than@@_NPB_WI@Z");
//};

//void std::_Distance<struct s_tag_file_index_accelerated_file const *, int>(struct s_tag_file_index_accelerated_file const *, struct s_tag_file_index_accelerated_file const *, int &)
//{
//    mangled_ppc("??$_Distance@PBUs_tag_file_index_accelerated_file@@H@std@@YAXPBUs_tag_file_index_accelerated_file@@0AAH@Z");
//};

//void std::advance<struct s_tag_file_index_accelerated_file const *, int>(struct s_tag_file_index_accelerated_file const *&, int)
//{
//    mangled_ppc("??$advance@PBUs_tag_file_index_accelerated_file@@H@std@@YAXAAPBUs_tag_file_index_accelerated_file@@H@Z");
//};

//bool std::_Debug_lt_pred<class c_tag_file_index_accelerated_file_less_than, struct s_tag_file_index_accelerated_file, unsigned long>(class c_tag_file_index_accelerated_file_less_than, struct s_tag_file_index_accelerated_file const &, unsigned long const &, wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_lt_pred@Vc_tag_file_index_accelerated_file_less_than@@Us_tag_file_index_accelerated_file@@K@std@@YA_NVc_tag_file_index_accelerated_file_less_than@@ABUs_tag_file_index_accelerated_file@@ABKPB_WI@Z");
//};

//public: bool c_tag_file_index_accelerated_file_less_than::operator()(struct s_tag_file_index_accelerated_file const &, unsigned long) const
//{
//    mangled_ppc("??Rc_tag_file_index_accelerated_file_less_than@@QBA_NABUs_tag_file_index_accelerated_file@@K@Z");
//};

//struct s_tag_file_index_accelerated_file const * std::lower_bound<struct s_tag_file_index_accelerated_file const *, unsigned long, class c_tag_file_index_accelerated_file_less_than>(struct s_tag_file_index_accelerated_file const *, struct s_tag_file_index_accelerated_file const *, unsigned long const &, class c_tag_file_index_accelerated_file_less_than)
//{
//    mangled_ppc("??$lower_bound@PBUs_tag_file_index_accelerated_file@@KVc_tag_file_index_accelerated_file_less_than@@@std@@YAPBUs_tag_file_index_accelerated_file@@PBU1@0ABKVc_tag_file_index_accelerated_file_less_than@@@Z");
//};

//struct s_tag_file_index_accelerated_file const * std::upper_bound<struct s_tag_file_index_accelerated_file const *, unsigned long, class c_tag_file_index_accelerated_file_less_than>(struct s_tag_file_index_accelerated_file const *, struct s_tag_file_index_accelerated_file const *, unsigned long const &, class c_tag_file_index_accelerated_file_less_than)
//{
//    mangled_ppc("??$upper_bound@PBUs_tag_file_index_accelerated_file@@KVc_tag_file_index_accelerated_file_less_than@@@std@@YAPBUs_tag_file_index_accelerated_file@@PBU1@0ABKVc_tag_file_index_accelerated_file_less_than@@@Z");
//};

//struct std::random_access_iterator_tag std::_Iter_cat<unsigned long const *>(unsigned long const *const &)
//{
//    mangled_ppc("??$_Iter_cat@PBK@std@@YA?AUrandom_access_iterator_tag@0@ABQBK@Z");
//};

//void std::_Debug_range2<unsigned long const *>(unsigned long const *, unsigned long const *, wchar_t const *, unsigned int, struct std::random_access_iterator_tag)
//{
//    mangled_ppc("??$_Debug_range2@PBK@std@@YAXPBK0PB_WIUrandom_access_iterator_tag@0@@Z");
//};

//struct std::random_access_iterator_tag std::_Iter_cat<struct s_tag_file_index_accelerated_file const *>(struct s_tag_file_index_accelerated_file const *const &)
//{
//    mangled_ppc("??$_Iter_cat@PBUs_tag_file_index_accelerated_file@@@std@@YA?AUrandom_access_iterator_tag@0@ABQBUs_tag_file_index_accelerated_file@@@Z");
//};

//void std::_Debug_order_single2<struct s_tag_file_index_accelerated_file const *, class c_tag_file_index_accelerated_file_less_than>(struct s_tag_file_index_accelerated_file const *, struct s_tag_file_index_accelerated_file const *, class c_tag_file_index_accelerated_file_less_than, bool, wchar_t const *, unsigned int, struct std::forward_iterator_tag)
//{
//    mangled_ppc("??$_Debug_order_single2@PBUs_tag_file_index_accelerated_file@@Vc_tag_file_index_accelerated_file_less_than@@@std@@YAXPBUs_tag_file_index_accelerated_file@@0Vc_tag_file_index_accelerated_file_less_than@@_NPB_WIUforward_iterator_tag@0@@Z");
//};

//void std::_Distance2<struct s_tag_file_index_accelerated_file const *, int>(struct s_tag_file_index_accelerated_file const *, struct s_tag_file_index_accelerated_file const *, int &, struct std::random_access_iterator_tag)
//{
//    mangled_ppc("??$_Distance2@PBUs_tag_file_index_accelerated_file@@H@std@@YAXPBUs_tag_file_index_accelerated_file@@0AAHUrandom_access_iterator_tag@0@@Z");
//};

//void std::_Advance<struct s_tag_file_index_accelerated_file const *, int>(struct s_tag_file_index_accelerated_file const *&, int, struct std::random_access_iterator_tag)
//{
//    mangled_ppc("??$_Advance@PBUs_tag_file_index_accelerated_file@@H@std@@YAXAAPBUs_tag_file_index_accelerated_file@@HUrandom_access_iterator_tag@0@@Z");
//};

//struct s_tag_file_index_accelerated_file const * std::_Checked_base<struct s_tag_file_index_accelerated_file const *>(struct s_tag_file_index_accelerated_file const *&)
//{
//    mangled_ppc("??$_Checked_base@PBUs_tag_file_index_accelerated_file@@@std@@YAPBUs_tag_file_index_accelerated_file@@AAPBU1@@Z");
//};

//struct s_tag_file_index_accelerated_file const * std::_Lower_bound<struct s_tag_file_index_accelerated_file const *, unsigned long, int, class c_tag_file_index_accelerated_file_less_than>(struct s_tag_file_index_accelerated_file const *, struct s_tag_file_index_accelerated_file const *, unsigned long const &, class c_tag_file_index_accelerated_file_less_than, int *)
//{
//    mangled_ppc("??$_Lower_bound@PBUs_tag_file_index_accelerated_file@@KHVc_tag_file_index_accelerated_file_less_than@@@std@@YAPBUs_tag_file_index_accelerated_file@@PBU1@0ABKVc_tag_file_index_accelerated_file_less_than@@PAH@Z");
//};

//void std::_Checked_assign_from_base<struct s_tag_file_index_accelerated_file const *>(struct s_tag_file_index_accelerated_file const *&, struct s_tag_file_index_accelerated_file const *const &)
//{
//    mangled_ppc("??$_Checked_assign_from_base@PBUs_tag_file_index_accelerated_file@@@std@@YAXAAPBUs_tag_file_index_accelerated_file@@ABQBU1@@Z");
//};

//struct s_tag_file_index_accelerated_file const * std::_Upper_bound<struct s_tag_file_index_accelerated_file const *, unsigned long, int, class c_tag_file_index_accelerated_file_less_than>(struct s_tag_file_index_accelerated_file const *, struct s_tag_file_index_accelerated_file const *, unsigned long const &, class c_tag_file_index_accelerated_file_less_than, int *)
//{
//    mangled_ppc("??$_Upper_bound@PBUs_tag_file_index_accelerated_file@@KHVc_tag_file_index_accelerated_file_less_than@@@std@@YAPBUs_tag_file_index_accelerated_file@@PBU1@0ABKVc_tag_file_index_accelerated_file_less_than@@PAH@Z");
//};

//void std::_Debug_pointer<unsigned long>(unsigned long const *, wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_pointer@K@std@@YAXPBKPB_WI@Z");
//};

//bool std::_Debug_lt_pred<class c_tag_file_index_accelerated_file_less_than, struct s_tag_file_index_accelerated_file, struct s_tag_file_index_accelerated_file>(class c_tag_file_index_accelerated_file_less_than, struct s_tag_file_index_accelerated_file const &, struct s_tag_file_index_accelerated_file const &, wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_lt_pred@Vc_tag_file_index_accelerated_file_less_than@@Us_tag_file_index_accelerated_file@@U2@@std@@YA_NVc_tag_file_index_accelerated_file_less_than@@ABUs_tag_file_index_accelerated_file@@1PB_WI@Z");
//};

//public: bool c_tag_file_index_accelerated_file_less_than::operator()(struct s_tag_file_index_accelerated_file const &, struct s_tag_file_index_accelerated_file const &) const
//{
//    mangled_ppc("??Rc_tag_file_index_accelerated_file_less_than@@QBA_NABUs_tag_file_index_accelerated_file@@0@Z");
//};

//void std::_Debug_pointer<struct s_tag_file_index_accelerated_file>(struct s_tag_file_index_accelerated_file const *, wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_pointer@Us_tag_file_index_accelerated_file@@@std@@YAXPBUs_tag_file_index_accelerated_file@@PB_WI@Z");
//};

//struct s_tag_file_index_accelerated_file const * std::_Checked_base<struct s_tag_file_index_accelerated_file const *>(struct s_tag_file_index_accelerated_file const *&, struct std::_Unchanged_checked_iterator_base_type_tag)
//{
//    mangled_ppc("??$_Checked_base@PBUs_tag_file_index_accelerated_file@@@std@@YAPBUs_tag_file_index_accelerated_file@@AAPBU1@U_Unchanged_checked_iterator_base_type_tag@0@@Z");
//};

//bool std::_Debug_lt_pred<class c_tag_file_index_accelerated_file_less_than, unsigned long, struct s_tag_file_index_accelerated_file>(class c_tag_file_index_accelerated_file_less_than, unsigned long const &, struct s_tag_file_index_accelerated_file const &, wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_lt_pred@Vc_tag_file_index_accelerated_file_less_than@@KUs_tag_file_index_accelerated_file@@@std@@YA_NVc_tag_file_index_accelerated_file_less_than@@ABKABUs_tag_file_index_accelerated_file@@PB_WI@Z");
//};

//public: static struct byte_swap_definition * c_byte_swap_traits<struct s_file_last_modification_date>::get_bs_definition(void)
//{
//    mangled_ppc("?get_bs_definition@?$c_byte_swap_traits@Us_file_last_modification_date@@@@SAPAUbyte_swap_definition@@XZ");
//};

//public: static struct byte_swap_definition * c_byte_swap_traits<struct s_system_global_unique_identifier>::get_bs_definition(void)
//{
//    mangled_ppc("?get_bs_definition@?$c_byte_swap_traits@Us_system_global_unique_identifier@@@@SAPAUbyte_swap_definition@@XZ");
//};

//public: static struct byte_swap_definition * c_byte_swap_traits<struct s_compressed_tag_file_index_entry>::get_bs_definition(void)
//{
//    mangled_ppc("?get_bs_definition@?$c_byte_swap_traits@Us_compressed_tag_file_index_entry@@@@SAPAUbyte_swap_definition@@XZ");
//};

//public: static struct byte_swap_definition * c_byte_swap_traits<struct s_tag_file_index_header>::get_bs_definition(void)
//{
//    mangled_ppc("?get_bs_definition@?$c_byte_swap_traits@Us_tag_file_index_header@@@@SAPAUbyte_swap_definition@@XZ");
//};

