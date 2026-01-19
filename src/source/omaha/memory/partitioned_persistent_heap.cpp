/* ---------- headers */

#include "omaha\memory\partitioned_persistent_heap.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const *const const c_byte_swap_traits<struct s_partitioned_heap_entry>::g_bs_codes_internal; // "?g_bs_codes_internal@?$c_byte_swap_traits@Us_partitioned_heap_entry@@@@2QBJB"
// public: static long const *const const c_byte_swap_traits<struct s_partitioned_heap_entry_list_header>::g_bs_codes_internal; // "?g_bs_codes_internal@?$c_byte_swap_traits@Us_partitioned_heap_entry_list_header@@@@2QBJB"
// public: static long const *const const c_byte_swap_traits<struct s_partition_header>::g_bs_codes_internal; // "?g_bs_codes_internal@?$c_byte_swap_traits@Us_partition_header@@@@2QBJB"
// public: static long const *const const c_byte_swap_traits<struct s_partitioned_persistent_heap_header>::g_bs_codes_internal; // "?g_bs_codes_internal@?$c_byte_swap_traits@Us_partitioned_persistent_heap_header@@@@2QBJB"
// public: static long const s_static_array<struct s_lruv_cache *, 32>::k_element_count; // "?k_element_count@?$s_static_array@PAUs_lruv_cache@@$0CA@@@2JB"
// public: static struct byte_swap_definition c_byte_swap_traits<struct s_partitioned_persistent_heap_header>::g_bs_definition_internal; // "?g_bs_definition_internal@?$c_byte_swap_traits@Us_partitioned_persistent_heap_header@@@@2Ubyte_swap_definition@@A"
// public: static struct byte_swap_definition c_byte_swap_traits<struct s_partition_header>::g_bs_definition_internal; // "?g_bs_definition_internal@?$c_byte_swap_traits@Us_partition_header@@@@2Ubyte_swap_definition@@A"
// public: static struct byte_swap_definition c_byte_swap_traits<struct s_partitioned_heap_entry_list_header>::g_bs_definition_internal; // "?g_bs_definition_internal@?$c_byte_swap_traits@Us_partitioned_heap_entry_list_header@@@@2Ubyte_swap_definition@@A"
// public: static struct byte_swap_definition c_byte_swap_traits<struct s_partitioned_heap_entry>::g_bs_definition_internal; // "?g_bs_definition_internal@?$c_byte_swap_traits@Us_partitioned_heap_entry@@@@2Ubyte_swap_definition@@A"
// class c_partitioned_persistent_heap_backend::`RTTI Type Descriptor'; // "??_R0?AVc_partitioned_persistent_heap_backend@@@8"
// public: static struct byte_swap_definition *c_byte_swap_traits<struct s_partitioned_heap_entry>::g_bs_definition; // "?g_bs_definition@?$c_byte_swap_traits@Us_partitioned_heap_entry@@@@2PAUbyte_swap_definition@@A"
// public: static struct byte_swap_definition *c_byte_swap_traits<struct s_partitioned_heap_entry_list_header>::g_bs_definition; // "?g_bs_definition@?$c_byte_swap_traits@Us_partitioned_heap_entry_list_header@@@@2PAUbyte_swap_definition@@A"
// public: static struct byte_swap_definition *c_byte_swap_traits<struct s_partition_header>::g_bs_definition; // "?g_bs_definition@?$c_byte_swap_traits@Us_partition_header@@@@2PAUbyte_swap_definition@@A"
// public: static struct byte_swap_definition *c_byte_swap_traits<struct s_partitioned_persistent_heap_header>::g_bs_definition; // "?g_bs_definition@?$c_byte_swap_traits@Us_partitioned_persistent_heap_header@@@@2PAUbyte_swap_definition@@A"

// public: c_partitioned_persistent_heap_backend::c_partitioned_persistent_heap_backend(class c_allocation_interface *, class c_partitioned_persistent_heap_config *);
// public: virtual long c_partitioned_persistent_heap_backend::get_partition_index(long);
// private: struct s_partitioned_heap_entry const * c_partitioned_persistent_heap_backend::get_heap_entry_const(long) const;
// public: c_partitioned_persistent_heap::c_partitioned_persistent_heap(void);
// public: c_partitioned_persistent_heap_backend::~c_partitioned_persistent_heap_backend(void);
// private: long c_partitioned_persistent_heap_backend::get_partition_count(void) const;
// private: struct s_lruv_cache * c_partitioned_persistent_heap_backend::get_partition(long) const;
// private: void c_partitioned_persistent_heap_backend::set_partition(long, struct s_lruv_cache *);
// public: virtual bool c_partitioned_persistent_heap_backend::restore(enum e_partiioned_persistent_heap_usage, class c_persist_stream *);
// public: virtual bool c_partitioned_persistent_heap_backend::persist(class c_persist_stream *);
// private: bool c_partitioned_persistent_heap_backend::save_or_restore(class c_persist_stream *, enum e_chunk_archive_action, enum e_partiioned_persistent_heap_usage);
// public: c_versioned_chunk_archiver::c_versioned_chunk_archiver(class c_versioned_chunk_archiver const &);
// private: bool c_partitioned_persistent_heap_backend::restore_partitions_current(enum e_partiioned_persistent_heap_usage, class c_persist_stream *);
// private: bool c_partitioned_persistent_heap_backend::valid_partition_index(long) const;
// private: bool c_partitioned_persistent_heap_backend::persist_partitions(enum e_partiioned_persistent_heap_usage, class c_persist_stream *);
// private: bool c_partitioned_persistent_heap_backend::restore_heap_entries_no_free_flag(class c_persist_stream *);
// private: bool c_partitioned_persistent_heap_backend::restore_heap_entries_current(class c_persist_stream *);
// private: bool c_partitioned_persistent_heap_backend::persist_heap_entries(class c_persist_stream *);
// public: virtual bool c_partitioned_persistent_heap_backend::prepare_for_update(long, long);
// public: virtual bool c_partitioned_persistent_heap_backend::commit_update(void);
// public: virtual bool c_partitioned_persistent_heap_backend::is_partition_active(long);
// public: virtual unsigned long c_partitioned_persistent_heap_backend::get_partition_size(long);
// public: virtual unsigned long c_partitioned_persistent_heap_backend::get_partition_used_size(long);
// public: virtual long c_partitioned_persistent_heap_backend::allocate_block(unsigned long);
// public: s_initialized_partitioned_heap_entry::s_initialized_partitioned_heap_entry(void);
// private: struct s_partitioned_heap_entry * c_partitioned_persistent_heap_backend::initialize_heap_entry(long);
// private: long c_partitioned_persistent_heap_backend::get_new_heap_entry(void);
// public: virtual void c_partitioned_persistent_heap_backend::invalidate_block(long);
// private: struct s_partitioned_heap_entry * c_partitioned_persistent_heap_backend::get_heap_entry_mutable(long);
// public: virtual bool c_partitioned_persistent_heap_backend::valid_block_index(long);
// public: virtual unsigned long c_partitioned_persistent_heap_backend::get_block_offset(long);
// public: virtual unsigned long c_partitioned_persistent_heap_backend::get_block_size(long);
// private: long c_partitioned_persistent_heap_backend::partition_try_to_allocate(long, unsigned long);
// private: void c_partitioned_persistent_heap_backend::verify(void);
// private: bool c_partitioned_persistent_heap_backend::load_partition(enum e_partiioned_persistent_heap_usage, long, class c_persist_stream *);
// private: bool c_partitioned_persistent_heap_backend::create_partition(long);
// bool partition_allocation_block_locked_proc(void *, long);
// private: bool c_partitioned_persistent_heap_backend::recreate_partition_from_stream(long, class c_persist_stream *);
// private: bool c_partitioned_persistent_heap_backend::valid_heap_entry(long) const;
// public: static void c_partitioned_persistent_heap_backend::dispose(class c_partitioned_persistent_heap_backend *);
// public: void * c_partitioned_persistent_heap_backend::`scalar deleting destructor'(unsigned int);
// class c_partitioned_persistent_heap * create_partitioned_persistent_heap(class c_allocation_interface *, class c_partitioned_persistent_heap_config *);
// void dispose_partitioned_persistent_heap(class c_partitioned_persistent_heap *);
// public: array_template<struct s_partitioned_heap_entry>::array_template<struct s_partitioned_heap_entry>(void);
// public: array_template<struct s_partitioned_heap_entry>::~array_template<struct s_partitioned_heap_entry>(void);
// public: bool array_template<struct s_partitioned_heap_entry>::is_valid_index(long) const;
// public: struct s_partitioned_heap_entry * array_template<struct s_partitioned_heap_entry>::get_elements(void);
// public: struct s_partitioned_heap_entry const * array_template<struct s_partitioned_heap_entry>::get_element(long) const;
// public: struct s_partitioned_heap_entry * array_template<struct s_partitioned_heap_entry>::get_element(long);
// public: long array_template<struct s_partitioned_heap_entry>::new_element_index(void);
// public: long array_template<struct s_partitioned_heap_entry>::append(struct s_partitioned_heap_entry const &);
// public: void array_template<struct s_partitioned_heap_entry>::resize(long);
// public: void array_template<struct s_partitioned_heap_entry>::clear(void);
// public: unsigned int array_template<struct s_partitioned_heap_entry>::size(void) const;
// public: static long s_static_array<struct s_lruv_cache *, 32>::get_count(void);
// public: void s_static_array<struct s_lruv_cache *, 32>::set_all(struct s_lruv_cache *const &);
// public: c_simple_chunk_section_archiver<class c_partitioned_persistent_heap_backend>::c_simple_chunk_section_archiver<class c_partitioned_persistent_heap_backend>(char const *, unsigned long, long, bool (c_partitioned_persistent_heap_backend::*)(class c_persist_stream *), bool (c_partitioned_persistent_heap_backend::*)(class c_persist_stream *));
// public: virtual char const * c_simple_chunk_section_archiver<class c_partitioned_persistent_heap_backend>::get_description(void) const;
// public: virtual unsigned long c_simple_chunk_section_archiver<class c_partitioned_persistent_heap_backend>::get_chunk_tag(void) const;
// public: virtual long c_simple_chunk_section_archiver<class c_partitioned_persistent_heap_backend>::get_chunk_version(void) const;
// public: virtual bool c_simple_chunk_section_archiver<class c_partitioned_persistent_heap_backend>::can_handle_chunk(unsigned long, long) const;
// public: virtual bool c_simple_chunk_section_archiver<class c_partitioned_persistent_heap_backend>::persist(class c_typed_pointer_holder &, class c_persist_stream *) const;
// public: virtual bool c_simple_chunk_section_archiver<class c_partitioned_persistent_heap_backend>::restore(struct s_persist_chunk_header const *, class c_typed_pointer_holder &, class c_persist_stream *) const;
// protected: void array_template<struct s_partitioned_heap_entry>::signal_out_of_memory(void) const;
// public: void array_template<struct s_partitioned_heap_entry>::resize_fill(long, long);
// public: static bool s_static_array<struct s_lruv_cache *, 32>::valid<long>(long);
// public: struct s_lruv_cache *const & s_static_array<struct s_lruv_cache *, 32>::operator[]<long>(long) const;
// public: struct s_lruv_cache *& s_static_array<struct s_lruv_cache *, 32>::operator[]<long>(long);
// public: static struct s_persist_archiver_holder s_persist_archiver_holder::make<class c_simple_chunk_section_archiver<class c_partitioned_persistent_heap_backend> >(class c_simple_chunk_section_archiver<class c_partitioned_persistent_heap_backend>);
// class c_simple_chunk_with_context_section_archiver<class c_partitioned_persistent_heap_backend, enum e_partiioned_persistent_heap_usage> make_section_with_context_archiver<class c_partitioned_persistent_heap_backend, enum e_partiioned_persistent_heap_usage>(char const *, unsigned long, long, enum e_partiioned_persistent_heap_usage, bool (c_partitioned_persistent_heap_backend::*)(enum e_partiioned_persistent_heap_usage, class c_persist_stream *), bool (c_partitioned_persistent_heap_backend::*)(enum e_partiioned_persistent_heap_usage, class c_persist_stream *));
// public: static struct s_persist_archiver_holder s_persist_archiver_holder::make<class c_simple_chunk_with_context_section_archiver<class c_partitioned_persistent_heap_backend, enum e_partiioned_persistent_heap_usage> >(class c_simple_chunk_with_context_section_archiver<class c_partitioned_persistent_heap_backend, enum e_partiioned_persistent_heap_usage>);
// public: static struct s_persist_archiver_holder s_persist_archiver_holder::make<class c_versioned_chunk_archiver>(class c_versioned_chunk_archiver);
// public: c_typed_pointer_holder::ctor<class c_partitioned_persistent_heap_backend>(class c_partitioned_persistent_heap_backend *);
// public: bool c_persist_stream::read_typed<struct s_partition_header>(struct s_partition_header *, long);
// public: bool c_persist_stream::write_typed<struct s_partition_header>(struct s_partition_header *, long);
// public: bool c_persist_stream::read_typed<struct s_partitioned_heap_entry_list_header>(struct s_partitioned_heap_entry_list_header *, long);
// public: bool c_persist_stream::read_typed<struct s_partitioned_heap_entry>(struct s_partitioned_heap_entry *, long);
// public: bool c_persist_stream::write_typed<struct s_partitioned_heap_entry_list_header>(struct s_partitioned_heap_entry_list_header *, long);
// public: bool c_persist_stream::write_typed<struct s_partitioned_heap_entry>(struct s_partitioned_heap_entry *, long);
// public: class c_partitioned_persistent_heap_backend * c_typed_pointer_holder::operatorcast<class c_partitioned_persistent_heap_backend>(void);
// public: c_simple_chunk_with_context_section_archiver<class c_partitioned_persistent_heap_backend, enum e_partiioned_persistent_heap_usage>::c_simple_chunk_with_context_section_archiver<class c_partitioned_persistent_heap_backend, enum e_partiioned_persistent_heap_usage>(char const *, unsigned long, long, enum e_partiioned_persistent_heap_usage, bool (c_partitioned_persistent_heap_backend::*)(enum e_partiioned_persistent_heap_usage, class c_persist_stream *), bool (c_partitioned_persistent_heap_backend::*)(enum e_partiioned_persistent_heap_usage, class c_persist_stream *));
// public: virtual char const * c_simple_chunk_with_context_section_archiver<class c_partitioned_persistent_heap_backend, enum e_partiioned_persistent_heap_usage>::get_description(void) const;
// public: virtual unsigned long c_simple_chunk_with_context_section_archiver<class c_partitioned_persistent_heap_backend, enum e_partiioned_persistent_heap_usage>::get_chunk_tag(void) const;
// public: virtual long c_simple_chunk_with_context_section_archiver<class c_partitioned_persistent_heap_backend, enum e_partiioned_persistent_heap_usage>::get_chunk_version(void) const;
// public: virtual bool c_simple_chunk_with_context_section_archiver<class c_partitioned_persistent_heap_backend, enum e_partiioned_persistent_heap_usage>::can_handle_chunk(unsigned long, long) const;
// public: virtual bool c_simple_chunk_with_context_section_archiver<class c_partitioned_persistent_heap_backend, enum e_partiioned_persistent_heap_usage>::persist(class c_typed_pointer_holder &, class c_persist_stream *) const;
// public: virtual bool c_simple_chunk_with_context_section_archiver<class c_partitioned_persistent_heap_backend, enum e_partiioned_persistent_heap_usage>::restore(struct s_persist_chunk_header const *, class c_typed_pointer_holder &, class c_persist_stream *) const;
// public: static struct byte_swap_definition * c_byte_swap_traits<struct s_partitioned_persistent_heap_header>::get_bs_definition(void);
// public: static struct byte_swap_definition * c_byte_swap_traits<struct s_partition_header>::get_bs_definition(void);
// public: static struct byte_swap_definition * c_byte_swap_traits<struct s_partitioned_heap_entry_list_header>::get_bs_definition(void);
// public: static struct byte_swap_definition * c_byte_swap_traits<struct s_partitioned_heap_entry>::get_bs_definition(void);

//public: c_partitioned_persistent_heap_backend::c_partitioned_persistent_heap_backend(class c_allocation_interface *, class c_partitioned_persistent_heap_config *)
//{
//    mangled_ppc("??0c_partitioned_persistent_heap_backend@@QAA@PAVc_allocation_interface@@PAVc_partitioned_persistent_heap_config@@@Z");
//};

//public: virtual long c_partitioned_persistent_heap_backend::get_partition_index(long)
//{
//    mangled_ppc("?get_partition_index@c_partitioned_persistent_heap_backend@@UAAJJ@Z");
//};

//private: struct s_partitioned_heap_entry const * c_partitioned_persistent_heap_backend::get_heap_entry_const(long) const
//{
//    mangled_ppc("?get_heap_entry_const@c_partitioned_persistent_heap_backend@@ABAPBUs_partitioned_heap_entry@@J@Z");
//};

//public: c_partitioned_persistent_heap::c_partitioned_persistent_heap(void)
//{
//    mangled_ppc("??0c_partitioned_persistent_heap@@QAA@XZ");
//};

//public: c_partitioned_persistent_heap_backend::~c_partitioned_persistent_heap_backend(void)
//{
//    mangled_ppc("??1c_partitioned_persistent_heap_backend@@QAA@XZ");
//};

//private: long c_partitioned_persistent_heap_backend::get_partition_count(void) const
//{
//    mangled_ppc("?get_partition_count@c_partitioned_persistent_heap_backend@@ABAJXZ");
//};

//private: struct s_lruv_cache * c_partitioned_persistent_heap_backend::get_partition(long) const
//{
//    mangled_ppc("?get_partition@c_partitioned_persistent_heap_backend@@ABAPAUs_lruv_cache@@J@Z");
//};

//private: void c_partitioned_persistent_heap_backend::set_partition(long, struct s_lruv_cache *)
//{
//    mangled_ppc("?set_partition@c_partitioned_persistent_heap_backend@@AAAXJPAUs_lruv_cache@@@Z");
//};

//public: virtual bool c_partitioned_persistent_heap_backend::restore(enum e_partiioned_persistent_heap_usage, class c_persist_stream *)
//{
//    mangled_ppc("?restore@c_partitioned_persistent_heap_backend@@UAA_NW4e_partiioned_persistent_heap_usage@@PAVc_persist_stream@@@Z");
//};

//public: virtual bool c_partitioned_persistent_heap_backend::persist(class c_persist_stream *)
//{
//    mangled_ppc("?persist@c_partitioned_persistent_heap_backend@@UAA_NPAVc_persist_stream@@@Z");
//};

//private: bool c_partitioned_persistent_heap_backend::save_or_restore(class c_persist_stream *, enum e_chunk_archive_action, enum e_partiioned_persistent_heap_usage)
//{
//    mangled_ppc("?save_or_restore@c_partitioned_persistent_heap_backend@@AAA_NPAVc_persist_stream@@W4e_chunk_archive_action@@W4e_partiioned_persistent_heap_usage@@@Z");
//};

//public: c_versioned_chunk_archiver::c_versioned_chunk_archiver(class c_versioned_chunk_archiver const &)
//{
//    mangled_ppc("??0c_versioned_chunk_archiver@@QAA@ABV0@@Z");
//};

//private: bool c_partitioned_persistent_heap_backend::restore_partitions_current(enum e_partiioned_persistent_heap_usage, class c_persist_stream *)
//{
//    mangled_ppc("?restore_partitions_current@c_partitioned_persistent_heap_backend@@AAA_NW4e_partiioned_persistent_heap_usage@@PAVc_persist_stream@@@Z");
//};

//private: bool c_partitioned_persistent_heap_backend::valid_partition_index(long) const
//{
//    mangled_ppc("?valid_partition_index@c_partitioned_persistent_heap_backend@@ABA_NJ@Z");
//};

//private: bool c_partitioned_persistent_heap_backend::persist_partitions(enum e_partiioned_persistent_heap_usage, class c_persist_stream *)
//{
//    mangled_ppc("?persist_partitions@c_partitioned_persistent_heap_backend@@AAA_NW4e_partiioned_persistent_heap_usage@@PAVc_persist_stream@@@Z");
//};

//private: bool c_partitioned_persistent_heap_backend::restore_heap_entries_no_free_flag(class c_persist_stream *)
//{
//    mangled_ppc("?restore_heap_entries_no_free_flag@c_partitioned_persistent_heap_backend@@AAA_NPAVc_persist_stream@@@Z");
//};

//private: bool c_partitioned_persistent_heap_backend::restore_heap_entries_current(class c_persist_stream *)
//{
//    mangled_ppc("?restore_heap_entries_current@c_partitioned_persistent_heap_backend@@AAA_NPAVc_persist_stream@@@Z");
//};

//private: bool c_partitioned_persistent_heap_backend::persist_heap_entries(class c_persist_stream *)
//{
//    mangled_ppc("?persist_heap_entries@c_partitioned_persistent_heap_backend@@AAA_NPAVc_persist_stream@@@Z");
//};

//public: virtual bool c_partitioned_persistent_heap_backend::prepare_for_update(long, long)
//{
//    mangled_ppc("?prepare_for_update@c_partitioned_persistent_heap_backend@@UAA_NJJ@Z");
//};

//public: virtual bool c_partitioned_persistent_heap_backend::commit_update(void)
//{
//    mangled_ppc("?commit_update@c_partitioned_persistent_heap_backend@@UAA_NXZ");
//};

//public: virtual bool c_partitioned_persistent_heap_backend::is_partition_active(long)
//{
//    mangled_ppc("?is_partition_active@c_partitioned_persistent_heap_backend@@UAA_NJ@Z");
//};

//public: virtual unsigned long c_partitioned_persistent_heap_backend::get_partition_size(long)
//{
//    mangled_ppc("?get_partition_size@c_partitioned_persistent_heap_backend@@UAAKJ@Z");
//};

//public: virtual unsigned long c_partitioned_persistent_heap_backend::get_partition_used_size(long)
//{
//    mangled_ppc("?get_partition_used_size@c_partitioned_persistent_heap_backend@@UAAKJ@Z");
//};

//public: virtual long c_partitioned_persistent_heap_backend::allocate_block(unsigned long)
//{
//    mangled_ppc("?allocate_block@c_partitioned_persistent_heap_backend@@UAAJK@Z");
//};

//public: s_initialized_partitioned_heap_entry::s_initialized_partitioned_heap_entry(void)
//{
//    mangled_ppc("??0s_initialized_partitioned_heap_entry@@QAA@XZ");
//};

//private: struct s_partitioned_heap_entry * c_partitioned_persistent_heap_backend::initialize_heap_entry(long)
//{
//    mangled_ppc("?initialize_heap_entry@c_partitioned_persistent_heap_backend@@AAAPAUs_partitioned_heap_entry@@J@Z");
//};

//private: long c_partitioned_persistent_heap_backend::get_new_heap_entry(void)
//{
//    mangled_ppc("?get_new_heap_entry@c_partitioned_persistent_heap_backend@@AAAJXZ");
//};

//public: virtual void c_partitioned_persistent_heap_backend::invalidate_block(long)
//{
//    mangled_ppc("?invalidate_block@c_partitioned_persistent_heap_backend@@UAAXJ@Z");
//};

//private: struct s_partitioned_heap_entry * c_partitioned_persistent_heap_backend::get_heap_entry_mutable(long)
//{
//    mangled_ppc("?get_heap_entry_mutable@c_partitioned_persistent_heap_backend@@AAAPAUs_partitioned_heap_entry@@J@Z");
//};

//public: virtual bool c_partitioned_persistent_heap_backend::valid_block_index(long)
//{
//    mangled_ppc("?valid_block_index@c_partitioned_persistent_heap_backend@@UAA_NJ@Z");
//};

//public: virtual unsigned long c_partitioned_persistent_heap_backend::get_block_offset(long)
//{
//    mangled_ppc("?get_block_offset@c_partitioned_persistent_heap_backend@@UAAKJ@Z");
//};

//public: virtual unsigned long c_partitioned_persistent_heap_backend::get_block_size(long)
//{
//    mangled_ppc("?get_block_size@c_partitioned_persistent_heap_backend@@UAAKJ@Z");
//};

//private: long c_partitioned_persistent_heap_backend::partition_try_to_allocate(long, unsigned long)
//{
//    mangled_ppc("?partition_try_to_allocate@c_partitioned_persistent_heap_backend@@AAAJJK@Z");
//};

//private: void c_partitioned_persistent_heap_backend::verify(void)
//{
//    mangled_ppc("?verify@c_partitioned_persistent_heap_backend@@AAAXXZ");
//};

//private: bool c_partitioned_persistent_heap_backend::load_partition(enum e_partiioned_persistent_heap_usage, long, class c_persist_stream *)
//{
//    mangled_ppc("?load_partition@c_partitioned_persistent_heap_backend@@AAA_NW4e_partiioned_persistent_heap_usage@@JPAVc_persist_stream@@@Z");
//};

//private: bool c_partitioned_persistent_heap_backend::create_partition(long)
//{
//    mangled_ppc("?create_partition@c_partitioned_persistent_heap_backend@@AAA_NJ@Z");
//};

//bool partition_allocation_block_locked_proc(void *, long)
//{
//    mangled_ppc("?partition_allocation_block_locked_proc@@YA_NPAXJ@Z");
//};

//private: bool c_partitioned_persistent_heap_backend::recreate_partition_from_stream(long, class c_persist_stream *)
//{
//    mangled_ppc("?recreate_partition_from_stream@c_partitioned_persistent_heap_backend@@AAA_NJPAVc_persist_stream@@@Z");
//};

//private: bool c_partitioned_persistent_heap_backend::valid_heap_entry(long) const
//{
//    mangled_ppc("?valid_heap_entry@c_partitioned_persistent_heap_backend@@ABA_NJ@Z");
//};

//public: static void c_partitioned_persistent_heap_backend::dispose(class c_partitioned_persistent_heap_backend *)
//{
//    mangled_ppc("?dispose@c_partitioned_persistent_heap_backend@@SAXPAV1@@Z");
//};

//public: void * c_partitioned_persistent_heap_backend::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_Gc_partitioned_persistent_heap_backend@@QAAPAXI@Z");
//};

//class c_partitioned_persistent_heap * create_partitioned_persistent_heap(class c_allocation_interface *, class c_partitioned_persistent_heap_config *)
//{
//    mangled_ppc("?create_partitioned_persistent_heap@@YAPAVc_partitioned_persistent_heap@@PAVc_allocation_interface@@PAVc_partitioned_persistent_heap_config@@@Z");
//};

//void dispose_partitioned_persistent_heap(class c_partitioned_persistent_heap *)
//{
//    mangled_ppc("?dispose_partitioned_persistent_heap@@YAXPAVc_partitioned_persistent_heap@@@Z");
//};

//public: array_template<struct s_partitioned_heap_entry>::array_template<struct s_partitioned_heap_entry>(void)
//{
//    mangled_ppc("??0?$array_template@Us_partitioned_heap_entry@@@@QAA@XZ");
//};

//public: array_template<struct s_partitioned_heap_entry>::~array_template<struct s_partitioned_heap_entry>(void)
//{
//    mangled_ppc("??1?$array_template@Us_partitioned_heap_entry@@@@QAA@XZ");
//};

//public: bool array_template<struct s_partitioned_heap_entry>::is_valid_index(long) const
//{
//    mangled_ppc("?is_valid_index@?$array_template@Us_partitioned_heap_entry@@@@QBA_NJ@Z");
//};

//public: struct s_partitioned_heap_entry * array_template<struct s_partitioned_heap_entry>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$array_template@Us_partitioned_heap_entry@@@@QAAPAUs_partitioned_heap_entry@@XZ");
//};

//public: struct s_partitioned_heap_entry const * array_template<struct s_partitioned_heap_entry>::get_element(long) const
//{
//    mangled_ppc("?get_element@?$array_template@Us_partitioned_heap_entry@@@@QBAPBUs_partitioned_heap_entry@@J@Z");
//};

//public: struct s_partitioned_heap_entry * array_template<struct s_partitioned_heap_entry>::get_element(long)
//{
//    mangled_ppc("?get_element@?$array_template@Us_partitioned_heap_entry@@@@QAAPAUs_partitioned_heap_entry@@J@Z");
//};

//public: long array_template<struct s_partitioned_heap_entry>::new_element_index(void)
//{
//    mangled_ppc("?new_element_index@?$array_template@Us_partitioned_heap_entry@@@@QAAJXZ");
//};

//public: long array_template<struct s_partitioned_heap_entry>::append(struct s_partitioned_heap_entry const &)
//{
//    mangled_ppc("?append@?$array_template@Us_partitioned_heap_entry@@@@QAAJABUs_partitioned_heap_entry@@@Z");
//};

//public: void array_template<struct s_partitioned_heap_entry>::resize(long)
//{
//    mangled_ppc("?resize@?$array_template@Us_partitioned_heap_entry@@@@QAAXJ@Z");
//};

//public: void array_template<struct s_partitioned_heap_entry>::clear(void)
//{
//    mangled_ppc("?clear@?$array_template@Us_partitioned_heap_entry@@@@QAAXXZ");
//};

//public: unsigned int array_template<struct s_partitioned_heap_entry>::size(void) const
//{
//    mangled_ppc("?size@?$array_template@Us_partitioned_heap_entry@@@@QBAIXZ");
//};

//public: static long s_static_array<struct s_lruv_cache *, 32>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@PAUs_lruv_cache@@$0CA@@@SAJXZ");
//};

//public: void s_static_array<struct s_lruv_cache *, 32>::set_all(struct s_lruv_cache *const &)
//{
//    mangled_ppc("?set_all@?$s_static_array@PAUs_lruv_cache@@$0CA@@@QAAXABQAUs_lruv_cache@@@Z");
//};

//public: c_simple_chunk_section_archiver<class c_partitioned_persistent_heap_backend>::c_simple_chunk_section_archiver<class c_partitioned_persistent_heap_backend>(char const *, unsigned long, long, bool (c_partitioned_persistent_heap_backend::*)(class c_persist_stream *), bool (c_partitioned_persistent_heap_backend::*)(class c_persist_stream *))
//{
//    mangled_ppc("??0?$c_simple_chunk_section_archiver@Vc_partitioned_persistent_heap_backend@@@@QAA@PBDKJP8c_partitioned_persistent_heap_backend@@AA_NPAVc_persist_stream@@@Z2@Z");
//};

//public: virtual char const * c_simple_chunk_section_archiver<class c_partitioned_persistent_heap_backend>::get_description(void) const
//{
//    mangled_ppc("?get_description@?$c_simple_chunk_section_archiver@Vc_partitioned_persistent_heap_backend@@@@UBAPBDXZ");
//};

//public: virtual unsigned long c_simple_chunk_section_archiver<class c_partitioned_persistent_heap_backend>::get_chunk_tag(void) const
//{
//    mangled_ppc("?get_chunk_tag@?$c_simple_chunk_section_archiver@Vc_partitioned_persistent_heap_backend@@@@UBAKXZ");
//};

//public: virtual long c_simple_chunk_section_archiver<class c_partitioned_persistent_heap_backend>::get_chunk_version(void) const
//{
//    mangled_ppc("?get_chunk_version@?$c_simple_chunk_section_archiver@Vc_partitioned_persistent_heap_backend@@@@UBAJXZ");
//};

//public: virtual bool c_simple_chunk_section_archiver<class c_partitioned_persistent_heap_backend>::can_handle_chunk(unsigned long, long) const
//{
//    mangled_ppc("?can_handle_chunk@?$c_simple_chunk_section_archiver@Vc_partitioned_persistent_heap_backend@@@@UBA_NKJ@Z");
//};

//public: virtual bool c_simple_chunk_section_archiver<class c_partitioned_persistent_heap_backend>::persist(class c_typed_pointer_holder &, class c_persist_stream *) const
//{
//    mangled_ppc("?persist@?$c_simple_chunk_section_archiver@Vc_partitioned_persistent_heap_backend@@@@UBA_NAAVc_typed_pointer_holder@@PAVc_persist_stream@@@Z");
//};

//public: virtual bool c_simple_chunk_section_archiver<class c_partitioned_persistent_heap_backend>::restore(struct s_persist_chunk_header const *, class c_typed_pointer_holder &, class c_persist_stream *) const
//{
//    mangled_ppc("?restore@?$c_simple_chunk_section_archiver@Vc_partitioned_persistent_heap_backend@@@@UBA_NPBUs_persist_chunk_header@@AAVc_typed_pointer_holder@@PAVc_persist_stream@@@Z");
//};

//protected: void array_template<struct s_partitioned_heap_entry>::signal_out_of_memory(void) const
//{
//    mangled_ppc("?signal_out_of_memory@?$array_template@Us_partitioned_heap_entry@@@@IBAXXZ");
//};

//public: void array_template<struct s_partitioned_heap_entry>::resize_fill(long, long)
//{
//    mangled_ppc("?resize_fill@?$array_template@Us_partitioned_heap_entry@@@@QAAXJJ@Z");
//};

//public: static bool s_static_array<struct s_lruv_cache *, 32>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@PAUs_lruv_cache@@$0CA@@@SA_NJ@Z");
//};

//public: struct s_lruv_cache *const & s_static_array<struct s_lruv_cache *, 32>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@PAUs_lruv_cache@@$0CA@@@QBAABQAUs_lruv_cache@@J@Z");
//};

//public: struct s_lruv_cache *& s_static_array<struct s_lruv_cache *, 32>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@PAUs_lruv_cache@@$0CA@@@QAAAAPAUs_lruv_cache@@J@Z");
//};

//public: static struct s_persist_archiver_holder s_persist_archiver_holder::make<class c_simple_chunk_section_archiver<class c_partitioned_persistent_heap_backend> >(class c_simple_chunk_section_archiver<class c_partitioned_persistent_heap_backend>)
//{
//    mangled_ppc("??$make@V?$c_simple_chunk_section_archiver@Vc_partitioned_persistent_heap_backend@@@@@s_persist_archiver_holder@@SA?AU0@V?$c_simple_chunk_section_archiver@Vc_partitioned_persistent_heap_backend@@@@@Z");
//};

//class c_simple_chunk_with_context_section_archiver<class c_partitioned_persistent_heap_backend, enum e_partiioned_persistent_heap_usage> make_section_with_context_archiver<class c_partitioned_persistent_heap_backend, enum e_partiioned_persistent_heap_usage>(char const *, unsigned long, long, enum e_partiioned_persistent_heap_usage, bool (c_partitioned_persistent_heap_backend::*)(enum e_partiioned_persistent_heap_usage, class c_persist_stream *), bool (c_partitioned_persistent_heap_backend::*)(enum e_partiioned_persistent_heap_usage, class c_persist_stream *))
//{
//    mangled_ppc("??$make_section_with_context_archiver@Vc_partitioned_persistent_heap_backend@@W4e_partiioned_persistent_heap_usage@@@@YA?AV?$c_simple_chunk_with_context_section_archiver@Vc_partitioned_persistent_heap_backend@@W4e_partiioned_persistent_heap_usage@@@@PBDKJW4e_partiioned_persistent_heap_usage@@P8c_partitioned_persistent_heap_backend@@AA_N1PAVc_persist_stream@@@Z3@Z");
//};

//public: static struct s_persist_archiver_holder s_persist_archiver_holder::make<class c_simple_chunk_with_context_section_archiver<class c_partitioned_persistent_heap_backend, enum e_partiioned_persistent_heap_usage> >(class c_simple_chunk_with_context_section_archiver<class c_partitioned_persistent_heap_backend, enum e_partiioned_persistent_heap_usage>)
//{
//    mangled_ppc("??$make@V?$c_simple_chunk_with_context_section_archiver@Vc_partitioned_persistent_heap_backend@@W4e_partiioned_persistent_heap_usage@@@@@s_persist_archiver_holder@@SA?AU0@V?$c_simple_chunk_with_context_section_archiver@Vc_partitioned_persistent_heap_backend@@W4e_partiioned_persistent_heap_usage@@@@@Z");
//};

//public: static struct s_persist_archiver_holder s_persist_archiver_holder::make<class c_versioned_chunk_archiver>(class c_versioned_chunk_archiver)
//{
//    mangled_ppc("??$make@Vc_versioned_chunk_archiver@@@s_persist_archiver_holder@@SA?AU0@Vc_versioned_chunk_archiver@@@Z");
//};

//public: c_typed_pointer_holder::ctor<class c_partitioned_persistent_heap_backend>(class c_partitioned_persistent_heap_backend *)
//{
//    mangled_ppc("??$?0Vc_partitioned_persistent_heap_backend@@@c_typed_pointer_holder@@QAA@PAVc_partitioned_persistent_heap_backend@@@Z");
//};

//public: bool c_persist_stream::read_typed<struct s_partition_header>(struct s_partition_header *, long)
//{
//    mangled_ppc("??$read_typed@Us_partition_header@@@c_persist_stream@@QAA_NPAUs_partition_header@@J@Z");
//};

//public: bool c_persist_stream::write_typed<struct s_partition_header>(struct s_partition_header *, long)
//{
//    mangled_ppc("??$write_typed@Us_partition_header@@@c_persist_stream@@QAA_NPAUs_partition_header@@J@Z");
//};

//public: bool c_persist_stream::read_typed<struct s_partitioned_heap_entry_list_header>(struct s_partitioned_heap_entry_list_header *, long)
//{
//    mangled_ppc("??$read_typed@Us_partitioned_heap_entry_list_header@@@c_persist_stream@@QAA_NPAUs_partitioned_heap_entry_list_header@@J@Z");
//};

//public: bool c_persist_stream::read_typed<struct s_partitioned_heap_entry>(struct s_partitioned_heap_entry *, long)
//{
//    mangled_ppc("??$read_typed@Us_partitioned_heap_entry@@@c_persist_stream@@QAA_NPAUs_partitioned_heap_entry@@J@Z");
//};

//public: bool c_persist_stream::write_typed<struct s_partitioned_heap_entry_list_header>(struct s_partitioned_heap_entry_list_header *, long)
//{
//    mangled_ppc("??$write_typed@Us_partitioned_heap_entry_list_header@@@c_persist_stream@@QAA_NPAUs_partitioned_heap_entry_list_header@@J@Z");
//};

//public: bool c_persist_stream::write_typed<struct s_partitioned_heap_entry>(struct s_partitioned_heap_entry *, long)
//{
//    mangled_ppc("??$write_typed@Us_partitioned_heap_entry@@@c_persist_stream@@QAA_NPAUs_partitioned_heap_entry@@J@Z");
//};

//public: class c_partitioned_persistent_heap_backend * c_typed_pointer_holder::operatorcast<class c_partitioned_persistent_heap_backend>(void)
//{
//    mangled_ppc("??$?BVc_partitioned_persistent_heap_backend@@@c_typed_pointer_holder@@QAAPAVc_partitioned_persistent_heap_backend@@XZ");
//};

//public: c_simple_chunk_with_context_section_archiver<class c_partitioned_persistent_heap_backend, enum e_partiioned_persistent_heap_usage>::c_simple_chunk_with_context_section_archiver<class c_partitioned_persistent_heap_backend, enum e_partiioned_persistent_heap_usage>(char const *, unsigned long, long, enum e_partiioned_persistent_heap_usage, bool (c_partitioned_persistent_heap_backend::*)(enum e_partiioned_persistent_heap_usage, class c_persist_stream *), bool (c_partitioned_persistent_heap_backend::*)(enum e_partiioned_persistent_heap_usage, class c_persist_stream *))
//{
//    mangled_ppc("??0?$c_simple_chunk_with_context_section_archiver@Vc_partitioned_persistent_heap_backend@@W4e_partiioned_persistent_heap_usage@@@@QAA@PBDKJW4e_partiioned_persistent_heap_usage@@P8c_partitioned_persistent_heap_backend@@AA_N1PAVc_persist_stream@@@Z3@Z");
//};

//public: virtual char const * c_simple_chunk_with_context_section_archiver<class c_partitioned_persistent_heap_backend, enum e_partiioned_persistent_heap_usage>::get_description(void) const
//{
//    mangled_ppc("?get_description@?$c_simple_chunk_with_context_section_archiver@Vc_partitioned_persistent_heap_backend@@W4e_partiioned_persistent_heap_usage@@@@UBAPBDXZ");
//};

//public: virtual unsigned long c_simple_chunk_with_context_section_archiver<class c_partitioned_persistent_heap_backend, enum e_partiioned_persistent_heap_usage>::get_chunk_tag(void) const
//{
//    mangled_ppc("?get_chunk_tag@?$c_simple_chunk_with_context_section_archiver@Vc_partitioned_persistent_heap_backend@@W4e_partiioned_persistent_heap_usage@@@@UBAKXZ");
//};

//public: virtual long c_simple_chunk_with_context_section_archiver<class c_partitioned_persistent_heap_backend, enum e_partiioned_persistent_heap_usage>::get_chunk_version(void) const
//{
//    mangled_ppc("?get_chunk_version@?$c_simple_chunk_with_context_section_archiver@Vc_partitioned_persistent_heap_backend@@W4e_partiioned_persistent_heap_usage@@@@UBAJXZ");
//};

//public: virtual bool c_simple_chunk_with_context_section_archiver<class c_partitioned_persistent_heap_backend, enum e_partiioned_persistent_heap_usage>::can_handle_chunk(unsigned long, long) const
//{
//    mangled_ppc("?can_handle_chunk@?$c_simple_chunk_with_context_section_archiver@Vc_partitioned_persistent_heap_backend@@W4e_partiioned_persistent_heap_usage@@@@UBA_NKJ@Z");
//};

//public: virtual bool c_simple_chunk_with_context_section_archiver<class c_partitioned_persistent_heap_backend, enum e_partiioned_persistent_heap_usage>::persist(class c_typed_pointer_holder &, class c_persist_stream *) const
//{
//    mangled_ppc("?persist@?$c_simple_chunk_with_context_section_archiver@Vc_partitioned_persistent_heap_backend@@W4e_partiioned_persistent_heap_usage@@@@UBA_NAAVc_typed_pointer_holder@@PAVc_persist_stream@@@Z");
//};

//public: virtual bool c_simple_chunk_with_context_section_archiver<class c_partitioned_persistent_heap_backend, enum e_partiioned_persistent_heap_usage>::restore(struct s_persist_chunk_header const *, class c_typed_pointer_holder &, class c_persist_stream *) const
//{
//    mangled_ppc("?restore@?$c_simple_chunk_with_context_section_archiver@Vc_partitioned_persistent_heap_backend@@W4e_partiioned_persistent_heap_usage@@@@UBA_NPBUs_persist_chunk_header@@AAVc_typed_pointer_holder@@PAVc_persist_stream@@@Z");
//};

//public: static struct byte_swap_definition * c_byte_swap_traits<struct s_partitioned_persistent_heap_header>::get_bs_definition(void)
//{
//    mangled_ppc("?get_bs_definition@?$c_byte_swap_traits@Us_partitioned_persistent_heap_header@@@@SAPAUbyte_swap_definition@@XZ");
//};

//public: static struct byte_swap_definition * c_byte_swap_traits<struct s_partition_header>::get_bs_definition(void)
//{
//    mangled_ppc("?get_bs_definition@?$c_byte_swap_traits@Us_partition_header@@@@SAPAUbyte_swap_definition@@XZ");
//};

//public: static struct byte_swap_definition * c_byte_swap_traits<struct s_partitioned_heap_entry_list_header>::get_bs_definition(void)
//{
//    mangled_ppc("?get_bs_definition@?$c_byte_swap_traits@Us_partitioned_heap_entry_list_header@@@@SAPAUbyte_swap_definition@@XZ");
//};

//public: static struct byte_swap_definition * c_byte_swap_traits<struct s_partitioned_heap_entry>::get_bs_definition(void)
//{
//    mangled_ppc("?get_bs_definition@?$c_byte_swap_traits@Us_partitioned_heap_entry@@@@SAPAUbyte_swap_definition@@XZ");
//};

