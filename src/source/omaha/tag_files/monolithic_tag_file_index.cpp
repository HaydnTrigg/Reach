/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const *const const c_byte_swap_traits<struct s_monolithic_tag_file_datum_v1>::g_bs_codes_internal; // "?g_bs_codes_internal@?$c_byte_swap_traits@Us_monolithic_tag_file_datum_v1@@@@2QBJB"
// public: static long const *const const c_byte_swap_traits<struct s_monolithic_tag_file_datum>::g_bs_codes_internal; // "?g_bs_codes_internal@?$c_byte_swap_traits@Us_monolithic_tag_file_datum@@@@2QBJB"
// public: static enum e_monolithic_tag_file_datum_bit const c_flags_no_init<enum e_monolithic_tag_file_datum_bit, unsigned short, 4, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_monolithic_tag_file_datum_bit@@G$03Us_default_enum_string_resolver@@@@2W4e_monolithic_tag_file_datum_bit@@B"
// public: static struct byte_swap_definition c_byte_swap_traits<struct s_monolithic_tag_file_datum>::g_bs_definition_internal; // "?g_bs_definition_internal@?$c_byte_swap_traits@Us_monolithic_tag_file_datum@@@@2Ubyte_swap_definition@@A"
// public: static struct byte_swap_definition c_byte_swap_traits<struct s_monolithic_tag_file_datum_v1>::g_bs_definition_internal; // "?g_bs_definition_internal@?$c_byte_swap_traits@Us_monolithic_tag_file_datum_v1@@@@2Ubyte_swap_definition@@A"
// class c_monolithic_tag_file_index::`RTTI Type Descriptor'; // "??_R0?AVc_monolithic_tag_file_index@@@8"
// public: static struct byte_swap_definition *c_byte_swap_traits<struct s_monolithic_tag_file_datum_v1>::g_bs_definition; // "?g_bs_definition@?$c_byte_swap_traits@Us_monolithic_tag_file_datum_v1@@@@2PAUbyte_swap_definition@@A"
// public: static struct byte_swap_definition *c_byte_swap_traits<struct s_monolithic_tag_file_datum>::g_bs_definition; // "?g_bs_definition@?$c_byte_swap_traits@Us_monolithic_tag_file_datum@@@@2PAUbyte_swap_definition@@A"

// bool remote_tag_file_matches_tag_file_index_entry(struct s_remote_tag_file const *, struct s_tag_file_index_entry const *);
// public: c_monolithic_tag_file_index::c_monolithic_tag_file_index(class c_allocation_interface *, enum e_monolithic_tag_file_index_usage);
// public: c_monolithic_tag_file_index::~c_monolithic_tag_file_index(void);
// public: void * c_monolithic_tag_file_index::get_tag_file_index(void) const;
// public: void c_monolithic_tag_file_index::set_tag_file_index(void *);
// public: void c_monolithic_tag_file_index::set_tag_heap_config(class c_tag_file_heap_partition_config *);
// public: void c_monolithic_tag_file_index::set_cache_heap_config(class c_tag_file_heap_partition_config *);
// public: class c_tag_file_persistent_heap const * c_monolithic_tag_file_index::get_tag_heap(void) const;
// public: class c_tag_file_persistent_heap * c_monolithic_tag_file_index::get_mutable_tag_heap(void);
// public: class c_tag_file_persistent_heap const * c_monolithic_tag_file_index::get_cache_heap(void) const;
// public: class c_tag_file_persistent_heap * c_monolithic_tag_file_index::get_mutable_cache_heap(void);
// public: bool c_monolithic_tag_file_index::get_xsync_version(__int64, unsigned long *) const;
// public: bool c_monolithic_tag_file_index::get_tag_partition_block(__int64, struct s_tag_file_partition_block *) const;
// public: bool c_monolithic_tag_file_index::get_cache_partition_block(__int64, struct s_tag_file_partition_block *) const;
// public: __int64 c_monolithic_tag_file_index::get_tag_file_block_index_from_transient_entry_index(long) const;
// public: __int64 c_monolithic_tag_file_index::allocate_space(struct s_tag_group const *, unsigned long, unsigned long);
// public: bool c_monolithic_tag_file_index::commit_space(struct s_remote_tag_file const *, __int64);
// public: bool c_monolithic_tag_file_index::tag_file_needs_updating(struct s_remote_tag_file const *);
// public: void c_monolithic_tag_file_index::invalidate_space(__int64);
// public: void c_monolithic_tag_file_index::mark_as_failed(__int64);
// public: void c_monolithic_tag_file_index::free_space(__int64);
// public: void c_monolithic_tag_file_index::dirtify_tag_file(struct s_remote_tag_file const *);
// public: bool c_monolithic_tag_file_index::commit_update(void);
// private: bool c_monolithic_tag_file_index::load_index(class c_persist_stream *);
// private: bool c_monolithic_tag_file_index::save_index(class c_persist_stream *);
// private: bool c_monolithic_tag_file_index::load_tag_heap(class c_persist_stream *);
// private: bool c_monolithic_tag_file_index::save_tag_heap(class c_persist_stream *);
// private: bool c_monolithic_tag_file_index::load_cache_heap(class c_persist_stream *);
// private: bool c_monolithic_tag_file_index::save_cache_heap(class c_persist_stream *);
// private: bool c_monolithic_tag_file_index::load_tag_file_blocks_v1(class c_persist_stream *);
// public: virtual bool `private: bool c_monolithic_tag_file_index::load_tag_file_blocks_v1(class c_persist_stream *)'::`2'::c_monolithic_tag_file_datum_v1_restorer::restore_datum_from_load(class c_basic_buffer<void> &, class c_persist_stream *);
// public: virtual bool `private: bool c_monolithic_tag_file_index::load_tag_file_blocks_v1(class c_persist_stream *)'::`2'::c_monolithic_tag_file_datum_v1_restorer::is_supported_datum_size(unsigned long);
// public: `private: bool c_monolithic_tag_file_index::load_tag_file_blocks_v1(class c_persist_stream *)'::`2'::c_monolithic_tag_file_datum_v1_restorer::c_monolithic_tag_file_datum_v1_restorer(void);
// private: bool c_monolithic_tag_file_index::load_tag_file_blocks(class c_persist_stream *);
// private: bool c_monolithic_tag_file_index::load_tag_file_blocks_internal(class c_persist_stream *, struct byte_swap_definition *, class c_datum_restorer *);
// private: bool c_monolithic_tag_file_index::save_tag_file_blocks(class c_persist_stream *);
// private: bool c_monolithic_tag_file_index::load_build_identifier(class c_persist_stream *);
// private: bool c_monolithic_tag_file_index::save_build_identifier(class c_persist_stream *);
// public: bool c_monolithic_tag_file_index::save(class c_persist_stream *);
// public: bool c_monolithic_tag_file_index::load(class c_persist_stream *);
// private: bool c_monolithic_tag_file_index::save_or_load(class c_persist_stream *, enum e_chunk_archive_action);
// public: void c_monolithic_tag_file_index::verify(class c_tag_group_dictionary *);
// public: void c_monolithic_tag_file_index::find_dirty_tags(class c_tag_group_dictionary *, class c_monolithic_tag_file_layout_registry *);
// bool get_monolithic_tag_partition_block(class c_monolithic_tag_file_index const *, long, struct s_tag_file_partition_block *);
// __int64 lookup_valid_tag_file_block_index_from_transient_entry_index(class c_monolithic_tag_file_index const *, long, struct s_tag_group const *, unsigned long);
// public: c_simple_chunk_section_archiver<class c_monolithic_tag_file_index>::c_simple_chunk_section_archiver<class c_monolithic_tag_file_index>(char const *, unsigned long, long, bool (c_monolithic_tag_file_index::*)(class c_persist_stream *), bool (c_monolithic_tag_file_index::*)(class c_persist_stream *));
// public: virtual char const * c_simple_chunk_section_archiver<class c_monolithic_tag_file_index>::get_description(void) const;
// public: virtual unsigned long c_simple_chunk_section_archiver<class c_monolithic_tag_file_index>::get_chunk_tag(void) const;
// public: virtual long c_simple_chunk_section_archiver<class c_monolithic_tag_file_index>::get_chunk_version(void) const;
// public: virtual bool c_simple_chunk_section_archiver<class c_monolithic_tag_file_index>::can_handle_chunk(unsigned long, long) const;
// public: virtual bool c_simple_chunk_section_archiver<class c_monolithic_tag_file_index>::persist(class c_typed_pointer_holder &, class c_persist_stream *) const;
// public: virtual bool c_simple_chunk_section_archiver<class c_monolithic_tag_file_index>::restore(struct s_persist_chunk_header const *, class c_typed_pointer_holder &, class c_persist_stream *) const;
// public: bool c_flags_no_init<enum e_monolithic_tag_file_datum_bit, unsigned short, 4, struct s_default_enum_string_resolver>::test(enum e_monolithic_tag_file_datum_bit) const;
// public: void c_flags_no_init<enum e_monolithic_tag_file_datum_bit, unsigned short, 4, struct s_default_enum_string_resolver>::set(enum e_monolithic_tag_file_datum_bit, bool);
// int memcmp_type<struct s_tag_file_index_entry const, struct s_tag_file_index_entry const>(struct s_tag_file_index_entry const *, struct s_tag_file_index_entry const *);
// public: bool c_persist_stream::read_typed<struct s_monolithic_tag_file_datum_v1>(struct s_monolithic_tag_file_datum_v1*, long);
// public: struct s_monolithic_tag_file_datum * c_basic_buffer<void>::c_basic_buffer_checked_caster::operatorcast<struct s_monolithic_tag_file_datum>(void);
// struct byte_swap_definition * get_persist_bs_definition<struct s_monolithic_tag_file_datum>(void);
// public: bool c_persist_stream::read_typed<__int64>(__int64*, long);
// public: bool c_persist_stream::write_typed<__int64>(__int64*, long);
// public: static struct s_persist_archiver_holder s_persist_archiver_holder::make<class c_simple_chunk_section_archiver<class c_monolithic_tag_file_index> >(class c_simple_chunk_section_archiver<class c_monolithic_tag_file_index>);
// public: c_typed_pointer_holder::ctor<class c_monolithic_tag_file_index>(class c_monolithic_tag_file_index *);
// public: class c_monolithic_tag_file_index * c_typed_pointer_holder::operatorcast<class c_monolithic_tag_file_index>(void);
// public: static bool c_flags_no_init<enum e_monolithic_tag_file_datum_bit, unsigned short, 4, struct s_default_enum_string_resolver>::valid_bit(enum e_monolithic_tag_file_datum_bit);
// private: static unsigned short c_flags_no_init<enum e_monolithic_tag_file_datum_bit, unsigned short, 4, struct s_default_enum_string_resolver>::flag_size_type(enum e_monolithic_tag_file_datum_bit);
// public: struct s_monolithic_tag_file_datum * c_basic_buffer<void>::get_as_type<struct s_monolithic_tag_file_datum>(void);
// public: struct s_monolithic_tag_file_datum * c_basic_buffer<void>::get_as_type_from_offset<struct s_monolithic_tag_file_datum>(unsigned long);
// public: static struct byte_swap_definition * c_byte_swap_traits<struct s_monolithic_tag_file_datum>::get_bs_definition(void);
// public: static struct byte_swap_definition * c_byte_swap_traits<struct s_monolithic_tag_file_datum_v1>::get_bs_definition(void);

//bool remote_tag_file_matches_tag_file_index_entry(struct s_remote_tag_file const *, struct s_tag_file_index_entry const *)
//{
//    mangled_ppc("?remote_tag_file_matches_tag_file_index_entry@@YA_NPBUs_remote_tag_file@@PBUs_tag_file_index_entry@@@Z");
//};

//public: c_monolithic_tag_file_index::c_monolithic_tag_file_index(class c_allocation_interface *, enum e_monolithic_tag_file_index_usage)
//{
//    mangled_ppc("??0c_monolithic_tag_file_index@@QAA@PAVc_allocation_interface@@W4e_monolithic_tag_file_index_usage@@@Z");
//};

//public: c_monolithic_tag_file_index::~c_monolithic_tag_file_index(void)
//{
//    mangled_ppc("??1c_monolithic_tag_file_index@@QAA@XZ");
//};

//public: void * c_monolithic_tag_file_index::get_tag_file_index(void) const
//{
//    mangled_ppc("?get_tag_file_index@c_monolithic_tag_file_index@@QBAPAXXZ");
//};

//public: void c_monolithic_tag_file_index::set_tag_file_index(void *)
//{
//    mangled_ppc("?set_tag_file_index@c_monolithic_tag_file_index@@QAAXPAX@Z");
//};

//public: void c_monolithic_tag_file_index::set_tag_heap_config(class c_tag_file_heap_partition_config *)
//{
//    mangled_ppc("?set_tag_heap_config@c_monolithic_tag_file_index@@QAAXPAVc_tag_file_heap_partition_config@@@Z");
//};

//public: void c_monolithic_tag_file_index::set_cache_heap_config(class c_tag_file_heap_partition_config *)
//{
//    mangled_ppc("?set_cache_heap_config@c_monolithic_tag_file_index@@QAAXPAVc_tag_file_heap_partition_config@@@Z");
//};

//public: class c_tag_file_persistent_heap const * c_monolithic_tag_file_index::get_tag_heap(void) const
//{
//    mangled_ppc("?get_tag_heap@c_monolithic_tag_file_index@@QBAPBVc_tag_file_persistent_heap@@XZ");
//};

//public: class c_tag_file_persistent_heap * c_monolithic_tag_file_index::get_mutable_tag_heap(void)
//{
//    mangled_ppc("?get_mutable_tag_heap@c_monolithic_tag_file_index@@QAAPAVc_tag_file_persistent_heap@@XZ");
//};

//public: class c_tag_file_persistent_heap const * c_monolithic_tag_file_index::get_cache_heap(void) const
//{
//    mangled_ppc("?get_cache_heap@c_monolithic_tag_file_index@@QBAPBVc_tag_file_persistent_heap@@XZ");
//};

//public: class c_tag_file_persistent_heap * c_monolithic_tag_file_index::get_mutable_cache_heap(void)
//{
//    mangled_ppc("?get_mutable_cache_heap@c_monolithic_tag_file_index@@QAAPAVc_tag_file_persistent_heap@@XZ");
//};

//public: bool c_monolithic_tag_file_index::get_xsync_version(__int64, unsigned long *) const
//{
//    mangled_ppc("?get_xsync_version@c_monolithic_tag_file_index@@QBA_N_JPAK@Z");
//};

//public: bool c_monolithic_tag_file_index::get_tag_partition_block(__int64, struct s_tag_file_partition_block *) const
//{
//    mangled_ppc("?get_tag_partition_block@c_monolithic_tag_file_index@@QBA_N_JPAUs_tag_file_partition_block@@@Z");
//};

//public: bool c_monolithic_tag_file_index::get_cache_partition_block(__int64, struct s_tag_file_partition_block *) const
//{
//    mangled_ppc("?get_cache_partition_block@c_monolithic_tag_file_index@@QBA_N_JPAUs_tag_file_partition_block@@@Z");
//};

//public: __int64 c_monolithic_tag_file_index::get_tag_file_block_index_from_transient_entry_index(long) const
//{
//    mangled_ppc("?get_tag_file_block_index_from_transient_entry_index@c_monolithic_tag_file_index@@QBA_JJ@Z");
//};

//public: __int64 c_monolithic_tag_file_index::allocate_space(struct s_tag_group const *, unsigned long, unsigned long)
//{
//    mangled_ppc("?allocate_space@c_monolithic_tag_file_index@@QAA_JPBUs_tag_group@@KK@Z");
//};

//public: bool c_monolithic_tag_file_index::commit_space(struct s_remote_tag_file const *, __int64)
//{
//    mangled_ppc("?commit_space@c_monolithic_tag_file_index@@QAA_NPBUs_remote_tag_file@@_J@Z");
//};

//public: bool c_monolithic_tag_file_index::tag_file_needs_updating(struct s_remote_tag_file const *)
//{
//    mangled_ppc("?tag_file_needs_updating@c_monolithic_tag_file_index@@QAA_NPBUs_remote_tag_file@@@Z");
//};

//public: void c_monolithic_tag_file_index::invalidate_space(__int64)
//{
//    mangled_ppc("?invalidate_space@c_monolithic_tag_file_index@@QAAX_J@Z");
//};

//public: void c_monolithic_tag_file_index::mark_as_failed(__int64)
//{
//    mangled_ppc("?mark_as_failed@c_monolithic_tag_file_index@@QAAX_J@Z");
//};

//public: void c_monolithic_tag_file_index::free_space(__int64)
//{
//    mangled_ppc("?free_space@c_monolithic_tag_file_index@@QAAX_J@Z");
//};

//public: void c_monolithic_tag_file_index::dirtify_tag_file(struct s_remote_tag_file const *)
//{
//    mangled_ppc("?dirtify_tag_file@c_monolithic_tag_file_index@@QAAXPBUs_remote_tag_file@@@Z");
//};

//public: bool c_monolithic_tag_file_index::commit_update(void)
//{
//    mangled_ppc("?commit_update@c_monolithic_tag_file_index@@QAA_NXZ");
//};

//private: bool c_monolithic_tag_file_index::load_index(class c_persist_stream *)
//{
//    mangled_ppc("?load_index@c_monolithic_tag_file_index@@AAA_NPAVc_persist_stream@@@Z");
//};

//private: bool c_monolithic_tag_file_index::save_index(class c_persist_stream *)
//{
//    mangled_ppc("?save_index@c_monolithic_tag_file_index@@AAA_NPAVc_persist_stream@@@Z");
//};

//private: bool c_monolithic_tag_file_index::load_tag_heap(class c_persist_stream *)
//{
//    mangled_ppc("?load_tag_heap@c_monolithic_tag_file_index@@AAA_NPAVc_persist_stream@@@Z");
//};

//private: bool c_monolithic_tag_file_index::save_tag_heap(class c_persist_stream *)
//{
//    mangled_ppc("?save_tag_heap@c_monolithic_tag_file_index@@AAA_NPAVc_persist_stream@@@Z");
//};

//private: bool c_monolithic_tag_file_index::load_cache_heap(class c_persist_stream *)
//{
//    mangled_ppc("?load_cache_heap@c_monolithic_tag_file_index@@AAA_NPAVc_persist_stream@@@Z");
//};

//private: bool c_monolithic_tag_file_index::save_cache_heap(class c_persist_stream *)
//{
//    mangled_ppc("?save_cache_heap@c_monolithic_tag_file_index@@AAA_NPAVc_persist_stream@@@Z");
//};

//private: bool c_monolithic_tag_file_index::load_tag_file_blocks_v1(class c_persist_stream *)
//{
//    mangled_ppc("?load_tag_file_blocks_v1@c_monolithic_tag_file_index@@AAA_NPAVc_persist_stream@@@Z");
//};

//public: virtual bool `private: bool c_monolithic_tag_file_index::load_tag_file_blocks_v1(class c_persist_stream *)'::`2'::c_monolithic_tag_file_datum_v1_restorer::restore_datum_from_load(class c_basic_buffer<void> &, class c_persist_stream *)
//{
//    mangled_ppc("?restore_datum_from_load@c_monolithic_tag_file_datum_v1_restorer@?1??load_tag_file_blocks_v1@c_monolithic_tag_file_index@@AAA_NPAVc_persist_stream@@@Z@UAA_NAAV?$c_basic_buffer@X@@0@Z");
//};

//public: virtual bool `private: bool c_monolithic_tag_file_index::load_tag_file_blocks_v1(class c_persist_stream *)'::`2'::c_monolithic_tag_file_datum_v1_restorer::is_supported_datum_size(unsigned long)
//{
//    mangled_ppc("?is_supported_datum_size@c_monolithic_tag_file_datum_v1_restorer@?1??load_tag_file_blocks_v1@c_monolithic_tag_file_index@@AAA_NPAVc_persist_stream@@@Z@UAA_NK@Z");
//};

//public: `private: bool c_monolithic_tag_file_index::load_tag_file_blocks_v1(class c_persist_stream *)'::`2'::c_monolithic_tag_file_datum_v1_restorer::c_monolithic_tag_file_datum_v1_restorer(void)
//{
//    mangled_ppc("??0c_monolithic_tag_file_datum_v1_restorer@?1??load_tag_file_blocks_v1@c_monolithic_tag_file_index@@AAA_NPAVc_persist_stream@@@Z@QAA@XZ");
//};

//private: bool c_monolithic_tag_file_index::load_tag_file_blocks(class c_persist_stream *)
//{
//    mangled_ppc("?load_tag_file_blocks@c_monolithic_tag_file_index@@AAA_NPAVc_persist_stream@@@Z");
//};

//private: bool c_monolithic_tag_file_index::load_tag_file_blocks_internal(class c_persist_stream *, struct byte_swap_definition *, class c_datum_restorer *)
//{
//    mangled_ppc("?load_tag_file_blocks_internal@c_monolithic_tag_file_index@@AAA_NPAVc_persist_stream@@PAUbyte_swap_definition@@PAVc_datum_restorer@@@Z");
//};

//private: bool c_monolithic_tag_file_index::save_tag_file_blocks(class c_persist_stream *)
//{
//    mangled_ppc("?save_tag_file_blocks@c_monolithic_tag_file_index@@AAA_NPAVc_persist_stream@@@Z");
//};

//private: bool c_monolithic_tag_file_index::load_build_identifier(class c_persist_stream *)
//{
//    mangled_ppc("?load_build_identifier@c_monolithic_tag_file_index@@AAA_NPAVc_persist_stream@@@Z");
//};

//private: bool c_monolithic_tag_file_index::save_build_identifier(class c_persist_stream *)
//{
//    mangled_ppc("?save_build_identifier@c_monolithic_tag_file_index@@AAA_NPAVc_persist_stream@@@Z");
//};

//public: bool c_monolithic_tag_file_index::save(class c_persist_stream *)
//{
//    mangled_ppc("?save@c_monolithic_tag_file_index@@QAA_NPAVc_persist_stream@@@Z");
//};

//public: bool c_monolithic_tag_file_index::load(class c_persist_stream *)
//{
//    mangled_ppc("?load@c_monolithic_tag_file_index@@QAA_NPAVc_persist_stream@@@Z");
//};

//private: bool c_monolithic_tag_file_index::save_or_load(class c_persist_stream *, enum e_chunk_archive_action)
//{
//    mangled_ppc("?save_or_load@c_monolithic_tag_file_index@@AAA_NPAVc_persist_stream@@W4e_chunk_archive_action@@@Z");
//};

//public: void c_monolithic_tag_file_index::verify(class c_tag_group_dictionary *)
//{
//    mangled_ppc("?verify@c_monolithic_tag_file_index@@QAAXPAVc_tag_group_dictionary@@@Z");
//};

//public: void c_monolithic_tag_file_index::find_dirty_tags(class c_tag_group_dictionary *, class c_monolithic_tag_file_layout_registry *)
//{
//    mangled_ppc("?find_dirty_tags@c_monolithic_tag_file_index@@QAAXPAVc_tag_group_dictionary@@PAVc_monolithic_tag_file_layout_registry@@@Z");
//};

//bool get_monolithic_tag_partition_block(class c_monolithic_tag_file_index const *, long, struct s_tag_file_partition_block *)
//{
//    mangled_ppc("?get_monolithic_tag_partition_block@@YA_NPBVc_monolithic_tag_file_index@@JPAUs_tag_file_partition_block@@@Z");
//};

//__int64 lookup_valid_tag_file_block_index_from_transient_entry_index(class c_monolithic_tag_file_index const *, long, struct s_tag_group const *, unsigned long)
//{
//    mangled_ppc("?lookup_valid_tag_file_block_index_from_transient_entry_index@@YA_JPBVc_monolithic_tag_file_index@@JPBUs_tag_group@@K@Z");
//};

//public: c_simple_chunk_section_archiver<class c_monolithic_tag_file_index>::c_simple_chunk_section_archiver<class c_monolithic_tag_file_index>(char const *, unsigned long, long, bool (c_monolithic_tag_file_index::*)(class c_persist_stream *), bool (c_monolithic_tag_file_index::*)(class c_persist_stream *))
//{
//    mangled_ppc("??0?$c_simple_chunk_section_archiver@Vc_monolithic_tag_file_index@@@@QAA@PBDKJP8c_monolithic_tag_file_index@@AA_NPAVc_persist_stream@@@Z2@Z");
//};

//public: virtual char const * c_simple_chunk_section_archiver<class c_monolithic_tag_file_index>::get_description(void) const
//{
//    mangled_ppc("?get_description@?$c_simple_chunk_section_archiver@Vc_monolithic_tag_file_index@@@@UBAPBDXZ");
//};

//public: virtual unsigned long c_simple_chunk_section_archiver<class c_monolithic_tag_file_index>::get_chunk_tag(void) const
//{
//    mangled_ppc("?get_chunk_tag@?$c_simple_chunk_section_archiver@Vc_monolithic_tag_file_index@@@@UBAKXZ");
//};

//public: virtual long c_simple_chunk_section_archiver<class c_monolithic_tag_file_index>::get_chunk_version(void) const
//{
//    mangled_ppc("?get_chunk_version@?$c_simple_chunk_section_archiver@Vc_monolithic_tag_file_index@@@@UBAJXZ");
//};

//public: virtual bool c_simple_chunk_section_archiver<class c_monolithic_tag_file_index>::can_handle_chunk(unsigned long, long) const
//{
//    mangled_ppc("?can_handle_chunk@?$c_simple_chunk_section_archiver@Vc_monolithic_tag_file_index@@@@UBA_NKJ@Z");
//};

//public: virtual bool c_simple_chunk_section_archiver<class c_monolithic_tag_file_index>::persist(class c_typed_pointer_holder &, class c_persist_stream *) const
//{
//    mangled_ppc("?persist@?$c_simple_chunk_section_archiver@Vc_monolithic_tag_file_index@@@@UBA_NAAVc_typed_pointer_holder@@PAVc_persist_stream@@@Z");
//};

//public: virtual bool c_simple_chunk_section_archiver<class c_monolithic_tag_file_index>::restore(struct s_persist_chunk_header const *, class c_typed_pointer_holder &, class c_persist_stream *) const
//{
//    mangled_ppc("?restore@?$c_simple_chunk_section_archiver@Vc_monolithic_tag_file_index@@@@UBA_NPBUs_persist_chunk_header@@AAVc_typed_pointer_holder@@PAVc_persist_stream@@@Z");
//};

//public: bool c_flags_no_init<enum e_monolithic_tag_file_datum_bit, unsigned short, 4, struct s_default_enum_string_resolver>::test(enum e_monolithic_tag_file_datum_bit) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_monolithic_tag_file_datum_bit@@G$03Us_default_enum_string_resolver@@@@QBA_NW4e_monolithic_tag_file_datum_bit@@@Z");
//};

//public: void c_flags_no_init<enum e_monolithic_tag_file_datum_bit, unsigned short, 4, struct s_default_enum_string_resolver>::set(enum e_monolithic_tag_file_datum_bit, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_monolithic_tag_file_datum_bit@@G$03Us_default_enum_string_resolver@@@@QAAXW4e_monolithic_tag_file_datum_bit@@_N@Z");
//};

//int memcmp_type<struct s_tag_file_index_entry const, struct s_tag_file_index_entry const>(struct s_tag_file_index_entry const *, struct s_tag_file_index_entry const *)
//{
//    mangled_ppc("??$memcmp_type@$$CBUs_tag_file_index_entry@@$$CBU1@@@YAHPBUs_tag_file_index_entry@@0@Z");
//};

//public: bool c_persist_stream::read_typed<struct s_monolithic_tag_file_datum_v1>(struct s_monolithic_tag_file_datum_v1*, long)
//{
//    mangled_ppc("??$read_typed@Us_monolithic_tag_file_datum_v1@@@c_persist_stream@@QAA_NPAUs_monolithic_tag_file_datum_v1@@J@Z");
//};

//public: struct s_monolithic_tag_file_datum * c_basic_buffer<void>::c_basic_buffer_checked_caster::operatorcast<struct s_monolithic_tag_file_datum>(void)
//{
//    mangled_ppc("??$?BUs_monolithic_tag_file_datum@@@c_basic_buffer_checked_caster@?$c_basic_buffer@X@@QAAPAUs_monolithic_tag_file_datum@@XZ");
//};

//struct byte_swap_definition * get_persist_bs_definition<struct s_monolithic_tag_file_datum>(void)
//{
//    mangled_ppc("??$get_persist_bs_definition@Us_monolithic_tag_file_datum@@@@YAPAUbyte_swap_definition@@XZ");
//};

//public: bool c_persist_stream::read_typed<__int64>(__int64*, long)
//{
//    mangled_ppc("??$read_typed@_J@c_persist_stream@@QAA_NPA_JJ@Z");
//};

//public: bool c_persist_stream::write_typed<__int64>(__int64*, long)
//{
//    mangled_ppc("??$write_typed@_J@c_persist_stream@@QAA_NPA_JJ@Z");
//};

//public: static struct s_persist_archiver_holder s_persist_archiver_holder::make<class c_simple_chunk_section_archiver<class c_monolithic_tag_file_index> >(class c_simple_chunk_section_archiver<class c_monolithic_tag_file_index>)
//{
//    mangled_ppc("??$make@V?$c_simple_chunk_section_archiver@Vc_monolithic_tag_file_index@@@@@s_persist_archiver_holder@@SA?AU0@V?$c_simple_chunk_section_archiver@Vc_monolithic_tag_file_index@@@@@Z");
//};

//public: c_typed_pointer_holder::ctor<class c_monolithic_tag_file_index>(class c_monolithic_tag_file_index *)
//{
//    mangled_ppc("??$?0Vc_monolithic_tag_file_index@@@c_typed_pointer_holder@@QAA@PAVc_monolithic_tag_file_index@@@Z");
//};

//public: class c_monolithic_tag_file_index * c_typed_pointer_holder::operatorcast<class c_monolithic_tag_file_index>(void)
//{
//    mangled_ppc("??$?BVc_monolithic_tag_file_index@@@c_typed_pointer_holder@@QAAPAVc_monolithic_tag_file_index@@XZ");
//};

//public: static bool c_flags_no_init<enum e_monolithic_tag_file_datum_bit, unsigned short, 4, struct s_default_enum_string_resolver>::valid_bit(enum e_monolithic_tag_file_datum_bit)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_monolithic_tag_file_datum_bit@@G$03Us_default_enum_string_resolver@@@@SA_NW4e_monolithic_tag_file_datum_bit@@@Z");
//};

//private: static unsigned short c_flags_no_init<enum e_monolithic_tag_file_datum_bit, unsigned short, 4, struct s_default_enum_string_resolver>::flag_size_type(enum e_monolithic_tag_file_datum_bit)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_monolithic_tag_file_datum_bit@@G$03Us_default_enum_string_resolver@@@@CAGW4e_monolithic_tag_file_datum_bit@@@Z");
//};

//public: struct s_monolithic_tag_file_datum * c_basic_buffer<void>::get_as_type<struct s_monolithic_tag_file_datum>(void)
//{
//    mangled_ppc("??$get_as_type@Us_monolithic_tag_file_datum@@@?$c_basic_buffer@X@@QAAPAUs_monolithic_tag_file_datum@@XZ");
//};

//public: struct s_monolithic_tag_file_datum * c_basic_buffer<void>::get_as_type_from_offset<struct s_monolithic_tag_file_datum>(unsigned long)
//{
//    mangled_ppc("??$get_as_type_from_offset@Us_monolithic_tag_file_datum@@@?$c_basic_buffer@X@@QAAPAUs_monolithic_tag_file_datum@@K@Z");
//};

//public: static struct byte_swap_definition * c_byte_swap_traits<struct s_monolithic_tag_file_datum>::get_bs_definition(void)
//{
//    mangled_ppc("?get_bs_definition@?$c_byte_swap_traits@Us_monolithic_tag_file_datum@@@@SAPAUbyte_swap_definition@@XZ");
//};

//public: static struct byte_swap_definition * c_byte_swap_traits<struct s_monolithic_tag_file_datum_v1>::get_bs_definition(void)
//{
//    mangled_ppc("?get_bs_definition@?$c_byte_swap_traits@Us_monolithic_tag_file_datum_v1@@@@SAPAUbyte_swap_definition@@XZ");
//};

