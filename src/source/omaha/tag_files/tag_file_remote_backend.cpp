/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static int const std::deque<__int64, class std::allocator<__int64> >::_EEM_DS; // "?_EEM_DS@?$deque@_JV?$allocator@_J@std@@@std@@2HB"
// const c_xsync_monolithic_tag_file_remote_backend::`vftable'{for `c_monolithic_tag_file_remote_backend'}; // "??_7c_xsync_monolithic_tag_file_remote_backend@@6Bc_monolithic_tag_file_remote_backend@@@"
// const c_xsync_monolithic_tag_file_remote_backend::`vftable'{for `c_xsync_monolithic_remote_backend_config'}; // "??_7c_xsync_monolithic_tag_file_remote_backend@@6Bc_xsync_monolithic_remote_backend_config@@@"
// class c_tag_file_persistent_heap::`RTTI Type Descriptor'; // "??_R0?AVc_tag_file_persistent_heap@@@8"
// long volatile `public: virtual bool __cdecl c_handler_chunk_section_archiver<class c_tag_file_heap_partition_config, class c_tag_file_heap_partition_config>::persist(class c_typed_pointer_holder &, class c_persist_stream *) const'::`6'::x_event_category_index; // "?x_event_category_index@?5??persist@?$c_handler_chunk_section_archiver@Vc_tag_file_heap_partition_config@@V1@@@UBA_NAAVc_typed_pointer_holder@@PAVc_persist_stream@@@Z@4JC"
// long volatile `public: virtual bool __cdecl c_handler_chunk_section_archiver<class c_tag_file_heap_partition_config, class c_tag_file_heap_partition_config>::restore(struct s_persist_chunk_header const *, class c_typed_pointer_holder &, class c_persist_stream *) const'::`42'::x_event_category_index; // "?x_event_category_index@?CK@??restore@?$c_handler_chunk_section_archiver@Vc_tag_file_heap_partition_config@@V1@@@UBA_NPBUs_persist_chunk_header@@AAVc_typed_pointer_holder@@PAVc_persist_stream@@@Z@4JC"
// bool xsync_restricted_tag_groups; // "?xsync_restricted_tag_groups@@3_NA"

// public: c_monolithic_tag_file_remote_backend::c_monolithic_tag_file_remote_backend(class c_monolithic_remote_backend_config *, class c_allocation_interface *, enum e_runtime_platform_type, class c_target_file_system *, unsigned long, class c_tag_group_dictionary *);
// merged_8368FB60;
// public: c_tag_file_remote_backend::c_tag_file_remote_backend(void);
// public: c_monolithic_tag_file_layout_writer::c_monolithic_tag_file_layout_writer(void);
// public: virtual c_monolithic_tag_file_remote_backend::~c_monolithic_tag_file_remote_backend(void);
// public: c_monolithic_tag_file_layout_writer::~c_monolithic_tag_file_layout_writer(void);
// public: c_monolithic_tag_file_layout_registry::~c_monolithic_tag_file_layout_registry(void);
// public: c_monolithic_tag_file_write_cache::~c_monolithic_tag_file_write_cache(void);
// public: std::map<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > > >::~map<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > > >(void);
// public: virtual void c_monolithic_tag_file_remote_backend::invalidate_tags_after_this_time(struct s_file_last_modification_date const *);
// public: virtual class c_allocation_interface * c_monolithic_tag_file_remote_backend::get_index_allocator(void);
// public: virtual void * c_monolithic_tag_file_remote_backend::get_old_tag_file_index(void);
// public: virtual bool c_monolithic_tag_file_remote_backend::modify_host_state_for_backup(class c_persist_stream *);
// public: virtual bool c_monolithic_tag_file_remote_backend::begin_changes(void *);
// public: virtual void c_monolithic_tag_file_remote_backend::erase_old_tag_file(struct s_remote_tag_file const *);
// public: virtual void c_monolithic_tag_file_remote_backend::mark_old_tag_file(struct s_remote_tag_file const *);
// private: bool c_monolithic_tag_file_remote_backend::write_to_target(class c_monolithic_tag_file_write_cache *, class c_tag_file_persistent_heap const *, struct s_tag_file_partition_block const *, void *, unsigned long);
// public: virtual bool c_monolithic_tag_file_remote_backend::tag_file_needs_updating(struct s_remote_tag_file const *);
// public: virtual bool c_monolithic_tag_file_remote_backend::get_tag_file_dependencies(struct s_remote_tag_file const *, struct array_template<struct s_tag_file_index_entry> *);
// public: char const * c_tag_file_description::get_tag_name(void) const;
// public: unsigned long c_tag_file_description::get_group_tag(void) const;
// private: bool c_monolithic_tag_file_remote_backend::skip_xsync_for_file(struct s_remote_tag_file const *);
// public: virtual bool c_monolithic_tag_file_remote_backend::update_new_tag_file(class c_tag_allocator *, class c_tag_field_editor_manager *, class c_tag_group_loading_shim *, class c_tag_file_read_backend *, struct s_remote_tag_file const *, bool *);
// public: c_monolithic_tag_field_editor_manager::~c_monolithic_tag_field_editor_manager(void);
// public: c_monolithic_tag_field_editor_manager::s_tag_dependency_set::~s_tag_dependency_set(void);
// public: std::map<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> > >::~map<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> > >(void);
// public: std::set<__int64, struct std::less<__int64>, class std::allocator<__int64> >::~set<__int64, struct std::less<__int64>, class std::allocator<__int64> >(void);
// private: bool c_monolithic_tag_file_remote_backend::flush_target_caches(void);
// private: void c_monolithic_tag_file_remote_backend::truncate_target_files(void);
// private: void c_monolithic_tag_file_remote_backend::truncate_tag_heap(class c_tag_file_persistent_heap const *);
// public: virtual bool c_monolithic_tag_file_remote_backend::commit_changes(void);
// public: virtual void c_monolithic_tag_file_remote_backend::notify_commit_success(void);
// public: virtual void c_monolithic_tag_file_remote_backend::verify_remote_tags(void);
// public: c_remote_persist_stream::c_remote_persist_stream(class c_target_file_system *, char const *);
// public: virtual bool c_remote_persist_stream::read(void *, unsigned long);
// public: virtual bool c_remote_persist_stream::write(void const *, unsigned long);
// public: virtual bool c_remote_persist_stream::write_extend_to_position(void);
// public: virtual bool c_remote_persist_stream::seek_relative(long);
// public: virtual bool c_remote_persist_stream::seek_absolute(unsigned long);
// public: virtual bool c_remote_persist_stream::get_absolute_position(unsigned long *);
// public: virtual bool c_remote_persist_stream::get_total_size(unsigned long *);
// merged_83692320;
// public: virtual c_remote_persist_stream::~c_remote_persist_stream(void);
// public: void c_monolithic_tag_file_remote_backend::backup_incremental_changes(void);
// public: virtual bool c_monolithic_tag_file_remote_backend::save_host_state(class c_persist_stream *);
// private: bool c_monolithic_tag_file_remote_backend::create_partition_if_not_present(class c_tag_file_persistent_heap const *, long);
// private: void c_monolithic_tag_file_remote_backend::truncate_partition(class c_tag_file_persistent_heap const *, long);
// private: bool c_monolithic_tag_file_remote_backend::write_state_header(class c_persist_stream *);
// private: bool c_monolithic_tag_file_remote_backend::save_state(class c_persist_stream *, enum e_monolithic_state_platform);
// public: c_monolithic_tag_file_layout_registry_archiver::c_monolithic_tag_file_layout_registry_archiver(class c_monolithic_tag_file_layout_registry *, class c_tag_group_dictionary *, class c_single_tag_file_layout_writer *, class c_single_tag_file_layout_reader *, class c_allocation_interface *);
// public: virtual bool c_monolithic_tag_file_layout_registry_archiver::load_chunk(class c_persist_stream *);
// public: virtual bool c_monolithic_tag_file_layout_registry_archiver::save_chunk(class c_persist_stream *);
// public: c_monolithic_tag_file_archiver::c_monolithic_tag_file_archiver(void);
// public: bool c_monolithic_tag_file_remote_backend::load_host_state(class c_persist_stream *, char const *);
// bool monolithic_tag_file_backend_load_state(class c_persist_stream *, class c_persist_stream *, struct s_system_global_unique_identifier *, class c_tag_group_dictionary *, class c_monolithic_tag_file_index *, class c_tag_dependency_index_loader *, class c_monolithic_tag_file_archiver *, enum e_monolithic_state_platform);
// bool monolithic_tag_file_backend_save_state(class c_persist_stream *, struct s_system_global_unique_identifier *, class c_monolithic_tag_file_index *, class c_tag_dependency_index_loader *, class c_monolithic_tag_file_archiver *, enum e_monolithic_state_platform);
// bool monolithic_tag_file_backend_save_or_load_state(class c_persist_stream *, class c_monolithic_tag_file_index *, class c_tag_dependency_index_loader *, class c_monolithic_tag_file_archiver *, enum e_chunk_archive_action, enum e_monolithic_state_platform);
// public: c_versioned_chunk_archiver::c_versioned_chunk_archiver(char const *, class c_wrapped_array<struct s_persist_archiver_holder>, long);
// public: virtual char const * c_versioned_chunk_archiver::get_description(void) const;
// public: virtual unsigned long c_versioned_chunk_archiver::get_chunk_tag(void) const;
// public: virtual long c_versioned_chunk_archiver::get_chunk_version(void) const;
// public: virtual bool c_versioned_chunk_archiver::can_handle_chunk(unsigned long, long) const;
// public: virtual bool c_versioned_chunk_archiver::persist(class c_typed_pointer_holder &, class c_persist_stream *) const;
// public: virtual bool c_versioned_chunk_archiver::restore(struct s_persist_chunk_header const *, class c_typed_pointer_holder &, class c_persist_stream *) const;
// public: virtual bool c_versioned_chunk_archiver::traverse(class c_persist_archiver_visitor *) const;
// public: c_chunk_with_sections_archiver::c_chunk_with_sections_archiver(class c_chunk_with_sections_archiver const &);
// public: virtual void * c_monolithic_tag_file_remote_backend::get_new_tag_file_index(void);
// bool monolithic_tag_file_backend_target_state_matches_host(struct s_system_global_unique_identifier const *, class c_persist_stream *);
// public: c_tag_file_persistent_heap::c_tag_file_persistent_heap(class c_allocation_interface *);
// public: c_partitioned_persistent_heap_config::c_partitioned_persistent_heap_config(void);
// public: void c_tag_file_persistent_heap::set_heap_config(class c_tag_file_heap_partition_config *);
// public: c_tag_file_persistent_heap::~c_tag_file_persistent_heap(void);
// private: virtual bool c_tag_file_persistent_heap::can_create_partition(long);
// private: virtual long c_tag_file_persistent_heap::get_partition_page_bits(long);
// private: virtual long c_tag_file_persistent_heap::get_partition_maximum_page_count(long);
// public: long c_tag_file_persistent_heap::allocate_block(unsigned long);
// public: void c_tag_file_persistent_heap::invalidate_block(long);
// public: bool c_tag_file_persistent_heap::get_partition_block(long, struct s_tag_file_partition_block *) const;
// public: unsigned long c_tag_file_persistent_heap::get_partition_size(long) const;
// public: unsigned long c_tag_file_persistent_heap::get_partition_used_size(long) const;
// public: void c_tag_file_persistent_heap::get_active_partitions(class c_big_flags_typed_no_init<long, 32> *) const;
// public: bool c_tag_file_persistent_heap::get_partition_config(long, struct s_tag_resource_cache_file_config *) const;
// public: bool c_tag_file_persistent_heap::commit_update(void);
// private: bool c_tag_file_persistent_heap::load_persistent_heap(enum e_monolithic_tag_file_index_usage, class c_persist_stream *);
// private: bool c_tag_file_persistent_heap::save_persistent_heap(enum e_monolithic_tag_file_index_usage, class c_persist_stream *);
// public: bool c_tag_file_persistent_heap::save_or_load(class c_persist_stream *, enum e_chunk_archive_action, enum e_monolithic_tag_file_index_usage);
// public: c_tag_file_heap_xsync_config::c_tag_file_heap_xsync_config(long, long);
// public: void c_tag_file_heap_xsync_config::set_partition_prefix(char const *);
// public: virtual bool c_tag_file_heap_xsync_config::get_partition_config(long, struct s_tag_resource_cache_file_config *) const;
// public: virtual bool c_tag_file_heap_xsync_config::can_create_partition(long);
// public: virtual long c_tag_file_heap_xsync_config::get_partition_page_bits(long);
// public: virtual long c_tag_file_heap_xsync_config::get_partition_maximum_page_count(long);
// public: virtual unsigned long c_tag_file_heap_xsync_config::get_persist_chunk_tag(void) const;
// public: virtual long c_tag_file_heap_xsync_config::get_persist_chunk_version(void) const;
// public: virtual bool c_tag_file_heap_xsync_config::restore(class c_persist_stream *);
// public: virtual bool c_tag_file_heap_xsync_config::persist(class c_persist_stream *);
// public: virtual unsigned long c_monolithic_tag_file_layout_writer::get_layout_tag(void);
// public: virtual long c_monolithic_tag_file_layout_writer::get_layout_version(void);
// public: virtual bool c_monolithic_tag_file_layout_writer::write_layout_to_stream(class c_persist_stream *, struct s_tag_block_definition const *);
// public: std::pair<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char> >::~pair<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char> >(void);
// public: c_copyable_array_template<unsigned char>::~c_copyable_array_template<unsigned char>(void);
// public: std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> >::~pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> >(void);
// public: std::pair<class std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::iterator, bool>::~pair<class std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::iterator, bool>(void);
// public: std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::const_iterator::const_iterator(class std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::const_iterator const &);
// public: std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::iterator::~iterator(void);
// public: std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::const_iterator::~const_iterator(void);
// public: std::_Bidit<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> >, int, struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > const *, struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > const &>::_Bidit<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> >, int, struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > const *, struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > const &>(struct std::_Bidit<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> >, int, struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > const *, struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > const &> const &);
// public: std::_Bidit<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> >, int, struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > const *, struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > const &>::~_Bidit<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> >, int, struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > const *, struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > const &>(void);
// public: std::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> >, int, struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > const *, struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > const &, class std::_Iterator_base>::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> >, int, struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > const *, struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > const &, class std::_Iterator_base>(struct std::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> >, int, struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > const *, struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > const &, class std::_Iterator_base> const &);
// public: std::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> >, int, struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > const *, struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > const &, class std::_Iterator_base>::~_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> >, int, struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > const *, struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > const &, class std::_Iterator_base>(void);
// public: unsigned long c_monolithic_tag_file_layout_writer::get_block_definition_size(struct s_tag_block_definition const *) const;
// public: c_monolithic_tag_file_write_cache::c_monolithic_tag_file_write_cache(unsigned long, unsigned long);
// private: unsigned long c_monolithic_tag_file_write_cache::get_next_write_offset(void) const;
// private: unsigned long c_monolithic_tag_file_write_cache::get_aligned_write_cache_size(void) const;
// public: bool c_monolithic_tag_file_write_cache::write(class c_tag_file_persistent_heap const *, class c_target_file_system *, long, unsigned long, unsigned long, void const *);
// public: bool c_monolithic_tag_file_write_cache::flush(class c_tag_file_persistent_heap const *, class c_target_file_system *);
// private: static bool c_monolithic_tag_file_write_cache::write_to_target(class c_tag_file_persistent_heap const *, class c_target_file_system *, long, unsigned long, unsigned long, void const *);
// public: c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor::c_monolithic_tag_reference_editor(class c_monolithic_tag_field_editor_manager *, class c_tag_field_editor *);
// public: virtual bool c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor::write(void *, void *, void const *, class c_persist_chunk_writer *, class c_tag_persist_context *);
// public: void c_monolithic_tag_field_editor_manager::s_tag_dependency_set::add_dependency(__int64);
// public: std::pair<class std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::iterator, bool>::~pair<class std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::iterator, bool>(void);
// public: std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::iterator::~iterator(void);
// public: std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::const_iterator::~const_iterator(void);
// public: std::_Bidit<__int64, int, __int64const *, __int64const &>::~_Bidit<__int64, int, __int64const *, __int64const &>(void);
// public: std::_Iterator_with_base<struct std::bidirectional_iterator_tag, __int64, int, __int64const *, __int64const &, class std::_Iterator_base>::~_Iterator_with_base<struct std::bidirectional_iterator_tag, __int64, int, __int64const *, __int64const &, class std::_Iterator_base>(void);
// public: virtual bool c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor::create(void *, void const *, class c_tag_persist_context *);
// public: virtual void c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor::dispose(void *, void const *, class c_tag_persist_context *);
// public: virtual bool c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor::read(void *, struct s_tag_struct_definition const *, void *, void const *, struct s_persist_chunk_header const *, class c_persist_stream *, class c_tag_persist_context *);
// public: c_monolithic_tag_field_editor_manager::c_monolithic_tag_field_editor_manager(class c_tag_dependency_index_editor *, class c_tag_field_editor_manager *);
// public: c_monolithic_tag_field_editor_manager::s_tag_dependency_set::s_tag_dependency_set(void);
// public: virtual class c_tag_field_editor * c_monolithic_tag_field_editor_manager::tag_field_editor_get(enum e_tag_field, void const *);
// public: std::pair<class std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::iterator, bool>::~pair<class std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::iterator, bool>(void);
// public: std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::iterator::~iterator(void);
// public: std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::const_iterator::~const_iterator(void);
// public: std::_Bidit<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor>, int, struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> const *, struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> const &>::~_Bidit<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor>, int, struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> const *, struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> const &>(void);
// public: std::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor>, int, struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> const *, struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> const &, class std::_Iterator_base>::~_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor>, int, struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> const *, struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> const &, class std::_Iterator_base>(void);
// public: virtual class c_tag_field_editor * c_monolithic_tag_field_editor_manager::tag_struct_editor_get(struct s_tag_struct_definition const *);
// public: virtual void c_monolithic_tag_field_editor_manager::set_tag_field_scanner_fields(struct tag_field_scan_state *);
// public: virtual struct s_tag_struct_definition const * c_monolithic_tag_field_editor_manager::get_struct_from_block_definition(struct s_tag_block_definition const *);
// public: virtual struct s_tag_struct_definition const * c_monolithic_tag_field_editor_manager::get_struct_from_resource_definition(struct s_tag_resource_definition const *);
// public: virtual struct s_tag_struct_definition const * c_monolithic_tag_field_editor_manager::get_struct_from_interop_definition(struct s_tag_interop_definition const *);
// public: void c_monolithic_tag_field_editor_manager::update_dependencies(struct s_tag_group const *, char const *);
// public: void c_monolithic_tag_field_editor_manager::dump_dependencies(void);
// public: c_monolithic_tag_dependency_index_editor_loader::c_monolithic_tag_dependency_index_editor_loader(class c_monolithic_tag_file_index *, class c_tag_dependency_index_editor *);
// public: c_tag_dependency_index_loader_default::c_tag_dependency_index_loader_default(void);
// public: c_tag_dependency_index_loader::c_tag_dependency_index_loader(void);
// private: virtual bool c_monolithic_tag_dependency_index_editor_loader::load_optimized_dependencies(class c_persist_stream *);
// private: virtual bool c_monolithic_tag_dependency_index_editor_loader::save_optimized_dependencies(class c_persist_stream *);
// private: virtual bool c_monolithic_tag_dependency_index_editor_loader::load_exploded_dependencies(class c_persist_stream *);
// private: virtual bool c_monolithic_tag_dependency_index_editor_loader::save_exploded_dependencies(class c_persist_stream *);
// void build_remote_tag_file_from_tag_file_index_entry(struct s_tag_file_index_entry const *, long, class c_tag_group_dictionary *, struct s_remote_tag_file *);
// public: c_xsync_monolithic_remote_backend_config::c_xsync_monolithic_remote_backend_config(struct s_remote_tag_file_backend_setup const *);
// public: c_xsync_monolithic_remote_backend_config::c_xsync_monolithic_remote_backend_config(char const *);
// protected: class c_xsync_monolithic_remote_backend_config * c_xsync_monolithic_remote_backend_config::get_config(void);
// public: virtual bool c_xsync_monolithic_remote_backend_config::truncate_target_files(void);
// public: virtual char const * c_xsync_monolithic_remote_backend_config::get_state_filename(void);
// public: virtual char const * c_xsync_monolithic_remote_backend_config::get_backup_state_filename(void);
// public: virtual class c_tag_file_heap_partition_config * c_xsync_monolithic_remote_backend_config::get_tag_heap_config(void);
// public: virtual class c_tag_file_heap_partition_config * c_xsync_monolithic_remote_backend_config::get_cache_heap_config(void);
// public: c_xsync_monolithic_tag_file_remote_backend::c_xsync_monolithic_tag_file_remote_backend(struct s_remote_tag_file_backend_setup const *, class c_allocation_interface *, enum e_runtime_platform_type, class c_target_file_system *, unsigned long, class c_tag_group_dictionary *);
// public: std::map<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > > >::map<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > > >(void);
// public: std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::~_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >(void);
// public: class std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::const_iterator std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::end(void) const;
// public: struct std::pair<class std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::iterator, bool> std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::insert(struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > const &);
// public: class std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::iterator std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::erase(class std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::const_iterator);
// public: class std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::const_iterator std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::find(struct std::pair<struct s_tag_block_definition const *, bool> const &) const;
// public: std::set<__int64, struct std::less<__int64>, class std::allocator<__int64> >::set<__int64, struct std::less<__int64>, class std::allocator<__int64> >(void);
// public: std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::~_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >(void);
// public: struct std::pair<class std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::iterator, bool> std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::insert(__int64const &);
// public: std::deque<__int64, class std::allocator<__int64> >::deque<__int64, class std::allocator<__int64> >(void);
// public: std::deque<__int64, class std::allocator<__int64> >::~deque<__int64, class std::allocator<__int64> >(void);
// public: unsigned int std::deque<__int64, class std::allocator<__int64> >::size(void) const;
// public: __int64& std::deque<__int64, class std::allocator<__int64> >::operator[](unsigned int);
// public: void std::deque<__int64, class std::allocator<__int64> >::push_back(__int64const &);
// public: std::map<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> > >::map<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> > >(void);
// public: std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::~_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >(void);
// public: struct std::pair<class std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::iterator, bool> std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::insert(struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> const &);
// public: struct s_tag_file_index_entry & array_template<struct s_tag_file_index_entry>::new_element(void);
// public: c_free_chunk_section_archiver<class c_monolithic_tag_file_index>::c_free_chunk_section_archiver<class c_monolithic_tag_file_index>(class c_monolithic_tag_file_index *, char const *, unsigned long, long, bool (c_monolithic_tag_file_index::*)(class c_persist_stream *), bool (c_monolithic_tag_file_index::*)(class c_persist_stream *));
// public: virtual char const * c_free_chunk_section_archiver<class c_monolithic_tag_file_index>::get_description(void) const;
// public: virtual unsigned long c_free_chunk_section_archiver<class c_monolithic_tag_file_index>::get_chunk_tag(void) const;
// public: virtual long c_free_chunk_section_archiver<class c_monolithic_tag_file_index>::get_chunk_version(void) const;
// public: virtual bool c_free_chunk_section_archiver<class c_monolithic_tag_file_index>::can_handle_chunk(unsigned long, long) const;
// public: virtual bool c_free_chunk_section_archiver<class c_monolithic_tag_file_index>::persist(class c_typed_pointer_holder &, class c_persist_stream *) const;
// public: virtual bool c_free_chunk_section_archiver<class c_monolithic_tag_file_index>::restore(struct s_persist_chunk_header const *, class c_typed_pointer_holder &, class c_persist_stream *) const;
// public: c_free_chunk_section_archiver<class c_tag_dependency_index_loader>::c_free_chunk_section_archiver<class c_tag_dependency_index_loader>(class c_tag_dependency_index_loader *, char const *, unsigned long, long, bool (c_tag_dependency_index_loader::*)(class c_persist_stream *), bool (c_tag_dependency_index_loader::*)(class c_persist_stream *));
// public: virtual char const * c_free_chunk_section_archiver<class c_tag_dependency_index_loader>::get_description(void) const;
// public: virtual unsigned long c_free_chunk_section_archiver<class c_tag_dependency_index_loader>::get_chunk_tag(void) const;
// public: virtual long c_free_chunk_section_archiver<class c_tag_dependency_index_loader>::get_chunk_version(void) const;
// public: virtual bool c_free_chunk_section_archiver<class c_tag_dependency_index_loader>::can_handle_chunk(unsigned long, long) const;
// public: virtual bool c_free_chunk_section_archiver<class c_tag_dependency_index_loader>::persist(class c_typed_pointer_holder &, class c_persist_stream *) const;
// public: virtual bool c_free_chunk_section_archiver<class c_tag_dependency_index_loader>::restore(struct s_persist_chunk_header const *, class c_typed_pointer_holder &, class c_persist_stream *) const;
// public: c_try_free_chunk_section_archiver<class c_monolithic_tag_file_archiver>::c_try_free_chunk_section_archiver<class c_monolithic_tag_file_archiver>(class c_monolithic_tag_file_archiver *, char const *, unsigned long, long, bool (c_monolithic_tag_file_archiver::*)(class c_persist_stream *), bool (c_monolithic_tag_file_archiver::*)(class c_persist_stream *));
// public: virtual char const * c_try_free_chunk_section_archiver<class c_monolithic_tag_file_archiver>::get_description(void) const;
// public: virtual unsigned long c_try_free_chunk_section_archiver<class c_monolithic_tag_file_archiver>::get_chunk_tag(void) const;
// public: virtual long c_try_free_chunk_section_archiver<class c_monolithic_tag_file_archiver>::get_chunk_version(void) const;
// public: virtual bool c_try_free_chunk_section_archiver<class c_monolithic_tag_file_archiver>::can_handle_chunk(unsigned long, long) const;
// public: virtual bool c_try_free_chunk_section_archiver<class c_monolithic_tag_file_archiver>::persist(class c_typed_pointer_holder &, class c_persist_stream *) const;
// public: virtual bool c_try_free_chunk_section_archiver<class c_monolithic_tag_file_archiver>::restore(struct s_persist_chunk_header const *, class c_typed_pointer_holder &, class c_persist_stream *) const;
// public: struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > * std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::iterator::operator->(void) const;
// public: struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > const * std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::const_iterator::operator->(void) const;
// public: bool std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::const_iterator::operator!=(class std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::const_iterator const &) const;
// public: c_copyable_array_template<unsigned char>::c_copyable_array_template<unsigned char>(void);
// public: struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> * std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::iterator::operator->(void) const;
// public: std::_Tree_val<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::~_Tree_val<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >(void);
// public: std::_Tree_val<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::~_Tree_val<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >(void);
// public: std::_Deque_val<__int64, class std::allocator<__int64> >::~_Deque_val<__int64, class std::allocator<__int64> >(void);
// public: std::_Deque_iterator<__int64, class std::allocator<__int64>, 1>::~_Deque_iterator<__int64, class std::allocator<__int64>, 1>(void);
// public: std::_Tree_val<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::~_Tree_val<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >(void);
// public: std::_Tree_ptr<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::~_Tree_ptr<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >(void);
// public: std::_Tree_ptr<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::~_Tree_ptr<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >(void);
// public: std::_Deque_map<__int64, class std::allocator<__int64> >::~_Deque_map<__int64, class std::allocator<__int64> >(void);
// public: std::_Deque_const_iterator<__int64, class std::allocator<__int64>, 1>::~_Deque_const_iterator<__int64, class std::allocator<__int64>, 1>(void);
// public: std::_Tree_ptr<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::~_Tree_ptr<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >(void);
// public: std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::~_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >(void);
// public: std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::~_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >(void);
// public: std::_Ranit<__int64, int, __int64const *, __int64const &>::~_Ranit<__int64, int, __int64const *, __int64const &>(void);
// public: std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::~_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >(void);
// public: std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0>::~_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0>(void);
// public: std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0>::~_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0>(void);
// public: std::_Iterator_with_base<struct std::random_access_iterator_tag, __int64, int, __int64const *, __int64const &, class std::_Iterator_base>::~_Iterator_with_base<struct std::random_access_iterator_tag, __int64, int, __int64const *, __int64const &, class std::_Iterator_base>(void);
// public: std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0>::~_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0>(void);
// public: std::allocator<__int64>::allocator<__int64>(void);
// public: __int64* std::allocator<__int64>::allocate(unsigned int);
// public: void std::allocator<__int64>::construct(__int64*, __int64const &);
// protected: static char & std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Color(struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node *);
// protected: static char & std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Isnil(struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node *);
// protected: static struct std::pair<struct s_tag_block_definition const *, bool> const & std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Key(struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node *);
// protected: static struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node *& std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Left(struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node *);
// protected: static struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node *& std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Parent(struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node *);
// protected: static struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node *& std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Right(struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node *);
// public: std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >(struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> > const &, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > > const &);
// public: class std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::iterator std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::begin(void);
// public: class std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::iterator std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Make_iter(class std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::const_iterator) const;
// public: class std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::const_iterator std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::lower_bound(struct std::pair<struct s_tag_block_definition const *, bool> const &) const;
// protected: class std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::iterator std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Insert(bool, struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node *, struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > const &);
// protected: struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node *& std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Lmost(void) const;
// protected: void std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Lrotate(struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node *);
// protected: static struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node * std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Max(struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node *);
// protected: static struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node * std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Min(struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node *);
// protected: struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node *& std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Rmost(void) const;
// protected: struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node *& std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Root(void) const;
// protected: void std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Rrotate(struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node *);
// protected: void std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Orphan_ptr(class std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> > &, struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node *) const;
// protected: void std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Tidy(void);
// public: static struct std::pair<struct s_tag_block_definition const *, bool> const & std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0>::_Kfn(struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > const &);
// protected: std::_Container_base_aux_alloc_empty<class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > > >::~_Container_base_aux_alloc_empty<class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > > >(void);
// public: std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >(void);
// public: void std::allocator<struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node>::deallocate(struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node *, unsigned int);
// public: void std::allocator<struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node>::destroy(struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node *);
// protected: static char & std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Isnil(struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node *);
// protected: static __int64const & std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Key(struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node *);
// protected: static struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node *& std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Left(struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node *);
// protected: static struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node *& std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Right(struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node *);
// public: std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >(struct std::less<__int64> const &, class std::allocator<__int64> const &);
// public: class std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::iterator std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::begin(void);
// protected: class std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::iterator std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Insert(bool, struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node *, __int64const &);
// protected: struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node *& std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Root(void) const;
// protected: void std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Tidy(void);
// public: static __int64const & std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0>::_Kfn(__int64const &);
// protected: std::_Container_base_aux_alloc_empty<class std::allocator<__int64> >::~_Container_base_aux_alloc_empty<class std::allocator<__int64> >(void);
// public: class std::_Deque_iterator<__int64, class std::allocator<__int64>, 1> std::deque<__int64, class std::allocator<__int64> >::begin(void);
// protected: void std::deque<__int64, class std::allocator<__int64> >::_Growmap(unsigned int);
// protected: void std::deque<__int64, class std::allocator<__int64> >::_Tidy(void);
// protected: std::_Deque_val<__int64, class std::allocator<__int64> >::_Deque_val<__int64, class std::allocator<__int64> >(class std::allocator<__int64>);
// protected: static char & std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Isnil(struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node *);
// protected: static class c_tag_field_editor *const & std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Key(struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node *);
// protected: static struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node *& std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Left(struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node *);
// protected: static struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node *& std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Right(struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node *);
// public: std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >(struct std::less<class c_tag_field_editor *> const &, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> > const &);
// public: class std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::iterator std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::begin(void);
// protected: class std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::iterator std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Insert(bool, struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node *, struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> const &);
// protected: struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node *& std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Root(void) const;
// protected: void std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Tidy(void);
// public: static class c_tag_field_editor *const & std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0>::_Kfn(struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> const &);
// protected: std::_Container_base_aux_alloc_empty<class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> > >::~_Container_base_aux_alloc_empty<class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> > >(void);
// public: std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >(void);
// public: std::pair<class std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::iterator, bool>::pair<class std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::iterator, bool>(class std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::iterator const &, bool const &);
// public: std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::iterator::iterator(struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node *, class std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> > const *);
// public: class std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::iterator & std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::iterator::operator--(void);
// public: bool std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::const_iterator::operator==(class std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::const_iterator const &) const;
// public: struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node * std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::const_iterator::_Mynode(void) const;
// public: struct s_tag_file_index_entry & array_template<struct s_tag_file_index_entry>::element(long);
// public: long array_template<struct s_tag_file_index_entry>::new_element_index(void);
// public: std::pair<class std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::iterator, bool>::pair<class std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::iterator, bool>(class std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::iterator const &, bool const &);
// public: std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::iterator::iterator(struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node *, class std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> > const *);
// public: struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > & std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::iterator::operator*(void) const;
// public: class std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::iterator & std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::iterator::operator--(void);
// public: std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::const_iterator::const_iterator(struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node *, class std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> > const *);
// public: struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > const & std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::const_iterator::operator*(void) const;
// public: class std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::const_iterator & std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::const_iterator::operator++(void);
// public: bool std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::const_iterator::operator==(class std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::const_iterator const &) const;
// public: struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node * std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::const_iterator::_Mynode(void) const;
// public: std::pair<class std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::iterator, bool>::pair<class std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::iterator, bool>(class std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::iterator const &, bool const &);
// public: std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::iterator::iterator(struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node *, class std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> > const *);
// public: struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> & std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::iterator::operator*(void) const;
// public: class std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::iterator & std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::iterator::operator--(void);
// public: bool std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::const_iterator::operator==(class std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::const_iterator const &) const;
// public: struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node * std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::const_iterator::_Mynode(void) const;
// public: __int64& std::_Deque_iterator<__int64, class std::allocator<__int64>, 1>::operator*(void) const;
// public: class std::_Deque_iterator<__int64, class std::allocator<__int64>, 1> std::_Deque_iterator<__int64, class std::allocator<__int64>, 1>::operator+(int) const;
// public: std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::iterator::iterator(class std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::iterator const &);
// public: std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::const_iterator::const_iterator(class std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::const_iterator const &);
// public: std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::const_iterator::const_iterator(class std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::const_iterator const &);
// public: std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::iterator::iterator(class std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::iterator const &);
// public: std::_Bidit<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> >, int, struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > const *, struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > const &>::_Bidit<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> >, int, struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > const *, struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > const &>(void);
// public: std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::iterator::iterator(class std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::iterator const &);
// public: std::_Deque_iterator<__int64, class std::allocator<__int64>, 1>::_Deque_iterator<__int64, class std::allocator<__int64>, 1>(class std::_Deque_iterator<__int64, class std::allocator<__int64>, 1> const &);
// public: std::_Bidit<__int64, int, __int64const *, __int64const &>::_Bidit<__int64, int, __int64const *, __int64const &>(struct std::_Bidit<__int64, int, __int64const *, __int64const &> const &);
// public: std::_Bidit<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor>, int, struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> const *, struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> const &>::_Bidit<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor>, int, struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> const *, struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> const &>(struct std::_Bidit<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor>, int, struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> const *, struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> const &> const &);
// public: std::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> >, int, struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > const *, struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > const &, class std::_Iterator_base>::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> >, int, struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > const *, struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > const &, class std::_Iterator_base>(void);
// public: std::_Iterator_with_base<struct std::bidirectional_iterator_tag, __int64, int, __int64const *, __int64const &, class std::_Iterator_base>::_Iterator_with_base<struct std::bidirectional_iterator_tag, __int64, int, __int64const *, __int64const &, class std::_Iterator_base>(struct std::_Iterator_with_base<struct std::bidirectional_iterator_tag, __int64, int, __int64const *, __int64const &, class std::_Iterator_base> const &);
// public: std::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor>, int, struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> const *, struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> const &, class std::_Iterator_base>::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor>, int, struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> const *, struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> const &, class std::_Iterator_base>(struct std::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor>, int, struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> const *, struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> const &, class std::_Iterator_base> const &);
// public: std::allocator<__int64>::allocator<__int64>(class std::allocator<__int64> const &);
// public: void std::allocator<__int64>::deallocate(__int64*, unsigned int);
// protected: static struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > & std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Myval(struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node *);
// public: class std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::iterator std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::end(void);
// public: unsigned int std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::max_size(void) const;
// public: class std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::iterator std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::erase(class std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::const_iterator, class std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::const_iterator);
// protected: void std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Init(void);
// protected: struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node * std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Lbound(struct std::pair<struct s_tag_block_definition const *, bool> const &) const;
// protected: struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node * std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Buynode(struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node *, struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node *, struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node *, struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > const &, char);
// protected: std::_Tree_val<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Tree_val<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >(struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> > const &, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >);
// public: std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >(class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > > const &);
// public: void std::allocator<struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node *>::destroy(struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node **);
// protected: static char & std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Color(struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node *);
// protected: static struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node *& std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Parent(struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node *);
// protected: static __int64& std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Myval(struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node *);
// public: class std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::iterator std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::end(void);
// public: unsigned int std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::max_size(void) const;
// public: class std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::iterator std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::erase(class std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::const_iterator, class std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::const_iterator);
// protected: void std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Init(void);
// protected: struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node *& std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Lmost(void) const;
// protected: void std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Lrotate(struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node *);
// protected: struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node *& std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Rmost(void) const;
// protected: void std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Rrotate(struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node *);
// protected: struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node * std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Buynode(struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node *, struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node *, struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node *, __int64const &, char);
// protected: std::_Tree_val<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Tree_val<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >(struct std::less<__int64> const &, class std::allocator<__int64>);
// public: void std::allocator<struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node>::deallocate(struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node *, unsigned int);
// public: void std::allocator<struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node *>::destroy(struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node **);
// public: unsigned int std::deque<__int64, class std::allocator<__int64> >::max_size(void) const;
// public: bool std::deque<__int64, class std::allocator<__int64> >::empty(void) const;
// public: void std::deque<__int64, class std::allocator<__int64> >::pop_back(void);
// protected: static void std::deque<__int64, class std::allocator<__int64> >::_Xlen(void);
// protected: std::_Deque_map<__int64, class std::allocator<__int64> >::_Deque_map<__int64, class std::allocator<__int64> >(class std::allocator<__int64>);
// public: void std::allocator<__int64*>::deallocate(__int64**, unsigned int);
// public: __int64** std::allocator<__int64*>::allocate(unsigned int);
// public: void std::allocator<__int64*>::destroy(__int64**);
// protected: static char & std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Color(struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node *);
// protected: static struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node *& std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Parent(struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node *);
// protected: static struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> & std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Myval(struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node *);
// public: class std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::iterator std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::end(void);
// public: unsigned int std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::max_size(void) const;
// public: class std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::iterator std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::erase(class std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::const_iterator, class std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::const_iterator);
// protected: void std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Init(void);
// protected: struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node *& std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Lmost(void) const;
// protected: void std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Lrotate(struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node *);
// protected: struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node *& std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Rmost(void) const;
// protected: void std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Rrotate(struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node *);
// protected: struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node * std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Buynode(struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node *, struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node *, struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node *, struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> const &, char);
// protected: std::_Tree_val<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Tree_val<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >(struct std::less<class c_tag_field_editor *> const &, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >);
// public: std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >(class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> > const &);
// public: void std::allocator<struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node>::deallocate(struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node *, unsigned int);
// public: void std::allocator<struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node *>::destroy(struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node **);
// public: std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::const_iterator::const_iterator(struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node *, class std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> > const *);
// public: class std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::const_iterator & std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::const_iterator::operator--(void);
// protected: void array_template<struct s_tag_file_index_entry>::signal_out_of_memory(void) const;
// public: class std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::const_iterator & std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::const_iterator::operator--(void);
// public: void std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::const_iterator::_Inc(void);
// public: std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::const_iterator::const_iterator(struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node *, class std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> > const *);
// public: struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> const & std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::const_iterator::operator*(void) const;
// public: class std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::const_iterator & std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::const_iterator::operator--(void);
// public: std::_Deque_iterator<__int64, class std::allocator<__int64>, 1>::_Deque_iterator<__int64, class std::allocator<__int64>, 1>(unsigned int, class std::_Container_base_secure const *);
// public: class std::_Deque_iterator<__int64, class std::allocator<__int64>, 1> & std::_Deque_iterator<__int64, class std::allocator<__int64>, 1>::operator+=(int);
// public: std::_Deque_const_iterator<__int64, class std::allocator<__int64>, 1>::_Deque_const_iterator<__int64, class std::allocator<__int64>, 1>(class std::_Deque_const_iterator<__int64, class std::allocator<__int64>, 1> const &);
// public: __int64const & std::_Deque_const_iterator<__int64, class std::allocator<__int64>, 1>::operator*(void) const;
// public: std::_Bidit<__int64, int, __int64const *, __int64const &>::_Bidit<__int64, int, __int64const *, __int64const &>(void);
// public: std::_Bidit<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor>, int, struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> const *, struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> const &>::_Bidit<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor>, int, struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> const *, struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> const &>(void);
// public: std::_Ranit<__int64, int, __int64const *, __int64const &>::_Ranit<__int64, int, __int64const *, __int64const &>(void);
// public: std::_Iterator_with_base<struct std::bidirectional_iterator_tag, __int64, int, __int64const *, __int64const &, class std::_Iterator_base>::_Iterator_with_base<struct std::bidirectional_iterator_tag, __int64, int, __int64const *, __int64const &, class std::_Iterator_base>(void);
// public: std::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor>, int, struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> const *, struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> const &, class std::_Iterator_base>::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor>, int, struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> const *, struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> const &, class std::_Iterator_base>(void);
// public: std::_Iterator_with_base<struct std::random_access_iterator_tag, __int64, int, __int64const *, __int64const &, class std::_Iterator_base>::_Iterator_with_base<struct std::random_access_iterator_tag, __int64, int, __int64const *, __int64const &, class std::_Iterator_base>(void);
// public: void std::allocator<__int64>::destroy(__int64*);
// public: unsigned int std::allocator<__int64>::max_size(void) const;
// public: void std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::clear(void);
// protected: struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node * std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Buynode(void);
// public: std::_Tree_ptr<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Tree_ptr<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >(struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> > const &, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >);
// public: unsigned int std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >::max_size(void) const;
// public: struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node * std::allocator<struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node>::allocate(unsigned int);
// public: class std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::iterator std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Make_iter(class std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::const_iterator) const;
// public: class std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::iterator std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::erase(class std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::const_iterator);
// public: void std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::clear(void);
// protected: struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node * std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Buynode(void);
// public: std::_Tree_ptr<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Tree_ptr<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >(struct std::less<__int64> const &, class std::allocator<__int64>);
// protected: std::_Container_base_aux_alloc_empty<class std::allocator<__int64> >::_Container_base_aux_alloc_empty<class std::allocator<__int64> >(class std::allocator<__int64>);
// public: struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node * std::allocator<struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node>::allocate(unsigned int);
// protected: void std::deque<__int64, class std::allocator<__int64> >::_Orphan_off(unsigned int) const;
// public: class std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::iterator std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Make_iter(class std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::const_iterator) const;
// public: class std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::iterator std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::erase(class std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::const_iterator);
// public: void std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::clear(void);
// protected: struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node * std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Buynode(void);
// public: std::_Tree_ptr<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Tree_ptr<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >(struct std::less<class c_tag_field_editor *> const &, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >);
// public: unsigned int std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >::max_size(void) const;
// public: struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node * std::allocator<struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node>::allocate(unsigned int);
// public: class std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::const_iterator std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::const_iterator::operator++(int);
// public: bool std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::const_iterator::operator!=(class std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::const_iterator const &) const;
// public: void std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::const_iterator::_Dec(void);
// public: class std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::const_iterator std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::const_iterator::operator++(int);
// public: void std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::const_iterator::_Dec(void);
// public: class std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::const_iterator std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::const_iterator::operator++(int);
// public: bool std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::const_iterator::operator!=(class std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::const_iterator const &) const;
// public: void std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::const_iterator::_Dec(void);
// public: std::_Deque_const_iterator<__int64, class std::allocator<__int64>, 1>::_Deque_const_iterator<__int64, class std::allocator<__int64>, 1>(unsigned int, class std::_Container_base_secure const *);
// public: class std::_Deque_const_iterator<__int64, class std::allocator<__int64>, 1> & std::_Deque_const_iterator<__int64, class std::allocator<__int64>, 1>::operator+=(int);
// public: std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node::_Node(struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node *, struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node *, struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node *, struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > const &, char);
// public: std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node::_Node(struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node *, struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node *, struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node *, __int64const &, char);
// public: std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node::_Node(struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node *, struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node *, struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node *, struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> const &, char);
// public: std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> >::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> >(struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > const &);
// public: std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor>::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor>(struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> const &);
// public: c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor::c_monolithic_tag_reference_editor(class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor const &);
// public: c_tag_field_editor::c_tag_field_editor(class c_tag_field_editor const &);
// protected: void std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Erase(struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node *);
// protected: std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >(struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> > const &, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >);
// public: void std::allocator<struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node *>::construct(struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node **, struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node *const &);
// protected: void std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Erase(struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node *);
// protected: static struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node * std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Max(struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node *);
// protected: static struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node * std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Min(struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node *);
// protected: void std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Orphan_ptr(class std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> > &, struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node *) const;
// protected: std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >(struct std::less<__int64> const &, class std::allocator<__int64>);
// public: void std::allocator<struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node>::destroy(struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node *);
// public: void std::allocator<struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node *>::construct(struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node **, struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node *const &);
// protected: void std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Erase(struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node *);
// protected: static struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node * std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Max(struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node *);
// protected: static struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node * std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Min(struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node *);
// protected: void std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Orphan_ptr(class std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> > &, struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node *) const;
// protected: std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >(struct std::less<class c_tag_field_editor *> const &, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >);
// public: void std::allocator<struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node>::destroy(struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node *);
// public: void std::allocator<struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node *>::construct(struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node **, struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node *const &);
// public: class std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::const_iterator & std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::const_iterator::operator++(void);
// public: c_copyable_array_template<unsigned char>::c_copyable_array_template<unsigned char>(class c_copyable_array_template<unsigned char> const &);
// public: class std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::const_iterator & std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::const_iterator::operator++(void);
// public: std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0>::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0>(struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >);
// public: std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0>::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0>(struct std::less<__int64>, class std::allocator<__int64>);
// public: std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0>::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0>(struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >);
// public: void std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::const_iterator::_Inc(void);
// public: void std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::const_iterator::_Inc(void);
// protected: std::_Container_base_aux_alloc_empty<class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > > >::_Container_base_aux_alloc_empty<class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > > >(class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >);
// protected: std::_Container_base_aux_alloc_empty<class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> > >::_Container_base_aux_alloc_empty<class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> > >(class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >);
// public: bool c_persist_stream::write_typed<struct s_system_global_unique_identifier>(struct s_system_global_unique_identifier *, long);
// public: bool c_persist_stream::read_typed<struct s_system_global_unique_identifier>(struct s_system_global_unique_identifier *, long);
// public: static struct s_persist_archiver_holder s_persist_archiver_holder::make<class c_free_chunk_section_archiver<class c_monolithic_tag_file_index> >(class c_free_chunk_section_archiver<class c_monolithic_tag_file_index>);
// public: static struct s_persist_archiver_holder s_persist_archiver_holder::make<class c_free_chunk_section_archiver<class c_tag_dependency_index_loader> >(class c_free_chunk_section_archiver<class c_tag_dependency_index_loader>);
// public: static struct s_persist_archiver_holder s_persist_archiver_holder::make<class c_try_free_chunk_section_archiver<class c_monolithic_tag_file_archiver> >(class c_try_free_chunk_section_archiver<class c_monolithic_tag_file_archiver>);
// public: static struct s_persist_archiver_holder s_persist_archiver_holder::make<class c_chunk_with_sections_archiver>(class c_chunk_with_sections_archiver);
// class c_simple_chunk_with_context_section_archiver<class c_tag_file_persistent_heap, enum e_monolithic_tag_file_index_usage> make_section_with_context_archiver<class c_tag_file_persistent_heap, enum e_monolithic_tag_file_index_usage>(char const *, unsigned long, long, enum e_monolithic_tag_file_index_usage, bool (c_tag_file_persistent_heap::*)(enum e_monolithic_tag_file_index_usage, class c_persist_stream *), bool (c_tag_file_persistent_heap::*)(enum e_monolithic_tag_file_index_usage, class c_persist_stream *));
// public: static struct s_persist_archiver_holder s_persist_archiver_holder::make<class c_simple_chunk_with_context_section_archiver<class c_tag_file_persistent_heap, enum e_monolithic_tag_file_index_usage> >(class c_simple_chunk_with_context_section_archiver<class c_tag_file_persistent_heap, enum e_monolithic_tag_file_index_usage>);
// class c_handler_chunk_section_archiver<class c_tag_file_heap_partition_config, class c_tag_file_heap_partition_config> create_handler_chunk_archiver<class c_tag_file_heap_partition_config, class c_tag_file_heap_partition_config>(char const *, unsigned long, long, class c_tag_file_heap_partition_config *, class c_tag_file_heap_partition_config *);
// public: static struct s_persist_archiver_holder s_persist_archiver_holder::make<class c_handler_chunk_section_archiver<class c_tag_file_heap_partition_config, class c_tag_file_heap_partition_config> >(class c_handler_chunk_section_archiver<class c_tag_file_heap_partition_config, class c_tag_file_heap_partition_config>);
// public: c_typed_pointer_holder::ctor<class c_tag_file_persistent_heap>(class c_tag_file_persistent_heap *);
// struct std::pair<struct s_tag_block_definition const *, bool> std::make_pair<struct s_tag_block_definition const *, bool>(struct s_tag_block_definition const *, bool);
// struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char> > std::make_pair<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char> >(struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>);
// public: std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> >::ctor<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char> >(struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char> > const &);
// struct std::pair<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> std::make_pair<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor>(class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor);
// public: std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor>::ctor<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor>(struct std::pair<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> const &);
// bool std::_Debug_lt_pred<struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, struct std::pair<struct s_tag_block_definition const *, bool>, struct std::pair<struct s_tag_block_definition const *, bool> >(struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, struct std::pair<struct s_tag_block_definition const *, bool> const &, struct std::pair<struct s_tag_block_definition const *, bool> const &, wchar_t const *, unsigned int);
// bool std::_Debug_lt_pred<struct std::less<__int64>, __int64, __int64>(struct std::less<__int64>, __int64const &, __int64const &, wchar_t const *, unsigned int);
// bool std::_Debug_lt_pred<struct std::less<class c_tag_field_editor *>, class c_tag_field_editor *, class c_tag_field_editor *>(struct std::less<class c_tag_field_editor *>, class c_tag_field_editor *const &, class c_tag_field_editor *const &, wchar_t const *, unsigned int);
// __int64* std::_Allocate<__int64>(unsigned int, __int64*);
// void std::_Construct<__int64, __int64>(__int64*, __int64const &);
// void std::_Destroy<struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node>(struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node *);
// __int64** stdext::unchecked_uninitialized_copy<__int64**, __int64**, class std::allocator<__int64*> >(__int64**, __int64**, __int64**, class std::allocator<__int64*> &);
// void stdext::unchecked_uninitialized_fill_n<__int64**, unsigned int, __int64*, class std::allocator<__int64*> >(__int64**, unsigned int, __int64*const &, class std::allocator<__int64*> &);
// void std::_Destroy_range<class std::allocator<__int64*> >(__int64**, __int64**, class std::allocator<__int64*> &);
// void std::_Destroy<struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node *>(struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node **);
// void std::_Destroy<struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node *>(struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node **);
// public: std::allocator<__int64*>::ctor<__int64>(class std::allocator<__int64> const &);
// __int64** std::_Allocate<__int64*>(unsigned int, __int64**);
// void std::_Destroy<__int64*>(__int64**);
// void std::_Destroy<struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node *>(struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node **);
// void std::_Destroy<__int64>(__int64*);
// public: std::allocator<struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node *>::ctor<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >(class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > > const &);
// struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node * std::_Allocate<struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node>(unsigned int, struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node *);
// public: std::allocator<struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node *>::ctor<__int64>(class std::allocator<__int64> const &);
// struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node * std::_Allocate<struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node>(unsigned int, struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node *);
// public: std::allocator<struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node *>::ctor<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >(class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> > const &);
// struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node * std::_Allocate<struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node>(unsigned int, struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node *);
// public: std::allocator<struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node>::ctor<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >(class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > > const &);
// void std::_Construct<struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node *, struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node *>(struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node **, struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node *const &);
// public: std::allocator<struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node>::ctor<__int64>(class std::allocator<__int64> const &);
// void std::_Destroy<struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node>(struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node *);
// void std::_Construct<struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node *, struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node *>(struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node **, struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node *const &);
// public: std::allocator<struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node>::ctor<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >(class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> > const &);
// void std::_Destroy<struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node>(struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node *);
// void std::_Construct<struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node *, struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node *>(struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node **, struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node *const &);
// public: void * std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node::`scalar deleting destructor'(unsigned int);
// public: std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node::~_Node(void);
// public: bool std::less<__int64>::operator()(__int64const &, __int64const &) const;
// public: bool std::less<struct std::pair<struct s_tag_block_definition const *, bool> >::operator()(struct std::pair<struct s_tag_block_definition const *, bool> const &, struct std::pair<struct s_tag_block_definition const *, bool> const &) const;
// public: bool std::less<class c_tag_field_editor *>::operator()(class c_tag_field_editor *const &, class c_tag_field_editor *const &) const;
// public: c_simple_chunk_with_context_section_archiver<class c_tag_file_persistent_heap, enum e_monolithic_tag_file_index_usage>::c_simple_chunk_with_context_section_archiver<class c_tag_file_persistent_heap, enum e_monolithic_tag_file_index_usage>(char const *, unsigned long, long, enum e_monolithic_tag_file_index_usage, bool (c_tag_file_persistent_heap::*)(enum e_monolithic_tag_file_index_usage, class c_persist_stream *), bool (c_tag_file_persistent_heap::*)(enum e_monolithic_tag_file_index_usage, class c_persist_stream *));
// public: virtual char const * c_simple_chunk_with_context_section_archiver<class c_tag_file_persistent_heap, enum e_monolithic_tag_file_index_usage>::get_description(void) const;
// public: virtual unsigned long c_simple_chunk_with_context_section_archiver<class c_tag_file_persistent_heap, enum e_monolithic_tag_file_index_usage>::get_chunk_tag(void) const;
// public: virtual long c_simple_chunk_with_context_section_archiver<class c_tag_file_persistent_heap, enum e_monolithic_tag_file_index_usage>::get_chunk_version(void) const;
// public: virtual bool c_simple_chunk_with_context_section_archiver<class c_tag_file_persistent_heap, enum e_monolithic_tag_file_index_usage>::can_handle_chunk(unsigned long, long) const;
// public: virtual bool c_simple_chunk_with_context_section_archiver<class c_tag_file_persistent_heap, enum e_monolithic_tag_file_index_usage>::persist(class c_typed_pointer_holder &, class c_persist_stream *) const;
// public: virtual bool c_simple_chunk_with_context_section_archiver<class c_tag_file_persistent_heap, enum e_monolithic_tag_file_index_usage>::restore(struct s_persist_chunk_header const *, class c_typed_pointer_holder &, class c_persist_stream *) const;
// public: class c_tag_file_persistent_heap * c_typed_pointer_holder::operatorcast<class c_tag_file_persistent_heap>(void);
// public: c_handler_chunk_section_archiver<class c_tag_file_heap_partition_config, class c_tag_file_heap_partition_config>::c_handler_chunk_section_archiver<class c_tag_file_heap_partition_config, class c_tag_file_heap_partition_config>(char const *, unsigned long, long, class c_tag_file_heap_partition_config *, class c_tag_file_heap_partition_config *);
// public: virtual char const * c_handler_chunk_section_archiver<class c_tag_file_heap_partition_config, class c_tag_file_heap_partition_config>::get_description(void) const;
// public: virtual unsigned long c_handler_chunk_section_archiver<class c_tag_file_heap_partition_config, class c_tag_file_heap_partition_config>::get_chunk_tag(void) const;
// public: virtual long c_handler_chunk_section_archiver<class c_tag_file_heap_partition_config, class c_tag_file_heap_partition_config>::get_chunk_version(void) const;
// public: virtual bool c_handler_chunk_section_archiver<class c_tag_file_heap_partition_config, class c_tag_file_heap_partition_config>::can_handle_chunk(unsigned long, long) const;
// public: virtual bool c_handler_chunk_section_archiver<class c_tag_file_heap_partition_config, class c_tag_file_heap_partition_config>::persist(class c_typed_pointer_holder &, class c_persist_stream *) const;
// public: virtual bool c_handler_chunk_section_archiver<class c_tag_file_heap_partition_config, class c_tag_file_heap_partition_config>::restore(struct s_persist_chunk_header const *, class c_typed_pointer_holder &, class c_persist_stream *) const;
// public: std::pair<struct s_tag_block_definition const *, bool>::pair<struct s_tag_block_definition const *, bool>(struct s_tag_block_definition const *const &, bool const &);
// public: std::pair<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char> >::pair<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char> >(struct std::pair<struct s_tag_block_definition const *, bool> const &, class c_copyable_array_template<unsigned char> const &);
// public: std::pair<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor>::pair<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor>(class c_tag_field_editor *const &, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor const &);
// __int64** std::_Checked_base<__int64**>(__int64**&);
// struct std::_Scalar_ptr_iterator_tag std::_Ptr_cat<__int64**, __int64**>(__int64**&, __int64**&);
// __int64** std::_Uninit_copy<__int64**, __int64**, class std::allocator<__int64*> >(__int64**, __int64**, __int64**, class std::allocator<__int64*> &, struct std::_Scalar_ptr_iterator_tag, struct std::_Range_checked_iterator_tag);
// void std::_Uninit_fill_n<__int64**, unsigned int, __int64*, class std::allocator<__int64*> >(__int64**, unsigned int, __int64*const &, class std::allocator<__int64*> &, struct std::_Scalar_ptr_iterator_tag, struct std::_Range_checked_iterator_tag);
// void std::_Destroy_range<class std::allocator<__int64*> >(__int64**, __int64**, class std::allocator<__int64*> &, struct std::_Scalar_ptr_iterator_tag);
// bool std::operator<<struct s_tag_block_definition const *, bool>(struct std::pair<struct s_tag_block_definition const *, bool> const &, struct std::pair<struct s_tag_block_definition const *, bool> const &);
// __int64** std::_Checked_base<__int64**>(__int64**&, struct std::_Unchanged_checked_iterator_base_type_tag);
// void std::_Debug_range<__int64**>(__int64**, __int64**, wchar_t const *, unsigned int);
// void std::_Debug_pointer<__int64*>(__int64**, wchar_t const *, unsigned int);
// void stdext::unchecked_fill_n<__int64**, unsigned int, __int64*>(__int64**, unsigned int, __int64*const &);
// struct std::random_access_iterator_tag std::_Iter_cat<__int64**>(__int64**const &);
// void std::_Debug_range2<__int64**>(__int64**, __int64**, wchar_t const *, unsigned int, struct std::random_access_iterator_tag);
// void std::_Fill_n<__int64**, unsigned int, __int64*>(__int64**, unsigned int, __int64*const &, struct std::random_access_iterator_tag, struct std::_Range_checked_iterator_tag);
// void std::_Fill_n<__int64**, unsigned int, __int64*>(__int64**, unsigned int, __int64*const &, struct std::_Range_checked_iterator_tag);
// [thunk]: c_tag_dependency_index_loader::`vcall'{12, {flat}};
// [thunk]: c_tag_dependency_index_loader::`vcall'{0, {flat}};
// [thunk]: c_tag_dependency_index_loader::`vcall'{4, {flat}};
// [thunk]: c_tag_dependency_index_loader::`vcall'{8, {flat}};
// [thunk]: public: virtual void * c_xsync_monolithic_tag_file_remote_backend::`vector deleting destructor'(unsigned int);
// merged_836A1E40;
// public: virtual c_xsync_monolithic_tag_file_remote_backend::~c_xsync_monolithic_tag_file_remote_backend(void);

//public: c_monolithic_tag_file_remote_backend::c_monolithic_tag_file_remote_backend(class c_monolithic_remote_backend_config *, class c_allocation_interface *, enum e_runtime_platform_type, class c_target_file_system *, unsigned long, class c_tag_group_dictionary *)
//{
//    mangled_ppc("??0c_monolithic_tag_file_remote_backend@@QAA@PAVc_monolithic_remote_backend_config@@PAVc_allocation_interface@@W4e_runtime_platform_type@@PAVc_target_file_system@@KPAVc_tag_group_dictionary@@@Z");
//};

//merged_8368FB60
//{
//    mangled_ppc("merged_8368FB60");
//};

//public: c_tag_file_remote_backend::c_tag_file_remote_backend(void)
//{
//    mangled_ppc("??0c_tag_file_remote_backend@@QAA@XZ");
//};

//public: c_monolithic_tag_file_layout_writer::c_monolithic_tag_file_layout_writer(void)
//{
//    mangled_ppc("??0c_monolithic_tag_file_layout_writer@@QAA@XZ");
//};

//public: virtual c_monolithic_tag_file_remote_backend::~c_monolithic_tag_file_remote_backend(void)
//{
//    mangled_ppc("??1c_monolithic_tag_file_remote_backend@@UAA@XZ");
//};

//public: c_monolithic_tag_file_layout_writer::~c_monolithic_tag_file_layout_writer(void)
//{
//    mangled_ppc("??1c_monolithic_tag_file_layout_writer@@QAA@XZ");
//};

//public: c_monolithic_tag_file_layout_registry::~c_monolithic_tag_file_layout_registry(void)
//{
//    mangled_ppc("??1c_monolithic_tag_file_layout_registry@@QAA@XZ");
//};

//public: c_monolithic_tag_file_write_cache::~c_monolithic_tag_file_write_cache(void)
//{
//    mangled_ppc("??1c_monolithic_tag_file_write_cache@@QAA@XZ");
//};

//public: std::map<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > > >::~map<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > > >(void)
//{
//    mangled_ppc("??1?$map@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@@std@@QAA@XZ");
//};

//public: virtual void c_monolithic_tag_file_remote_backend::invalidate_tags_after_this_time(struct s_file_last_modification_date const *)
//{
//    mangled_ppc("?invalidate_tags_after_this_time@c_monolithic_tag_file_remote_backend@@UAAXPBUs_file_last_modification_date@@@Z");
//};

//public: virtual class c_allocation_interface * c_monolithic_tag_file_remote_backend::get_index_allocator(void)
//{
//    mangled_ppc("?get_index_allocator@c_monolithic_tag_file_remote_backend@@UAAPAVc_allocation_interface@@XZ");
//};

//public: virtual void * c_monolithic_tag_file_remote_backend::get_old_tag_file_index(void)
//{
//    mangled_ppc("?get_old_tag_file_index@c_monolithic_tag_file_remote_backend@@UAAPAXXZ");
//};

//public: virtual bool c_monolithic_tag_file_remote_backend::modify_host_state_for_backup(class c_persist_stream *)
//{
//    mangled_ppc("?modify_host_state_for_backup@c_monolithic_tag_file_remote_backend@@UAA_NPAVc_persist_stream@@@Z");
//};

//public: virtual bool c_monolithic_tag_file_remote_backend::begin_changes(void *)
//{
//    mangled_ppc("?begin_changes@c_monolithic_tag_file_remote_backend@@UAA_NPAX@Z");
//};

//public: virtual void c_monolithic_tag_file_remote_backend::erase_old_tag_file(struct s_remote_tag_file const *)
//{
//    mangled_ppc("?erase_old_tag_file@c_monolithic_tag_file_remote_backend@@UAAXPBUs_remote_tag_file@@@Z");
//};

//public: virtual void c_monolithic_tag_file_remote_backend::mark_old_tag_file(struct s_remote_tag_file const *)
//{
//    mangled_ppc("?mark_old_tag_file@c_monolithic_tag_file_remote_backend@@UAAXPBUs_remote_tag_file@@@Z");
//};

//private: bool c_monolithic_tag_file_remote_backend::write_to_target(class c_monolithic_tag_file_write_cache *, class c_tag_file_persistent_heap const *, struct s_tag_file_partition_block const *, void *, unsigned long)
//{
//    mangled_ppc("?write_to_target@c_monolithic_tag_file_remote_backend@@AAA_NPAVc_monolithic_tag_file_write_cache@@PBVc_tag_file_persistent_heap@@PBUs_tag_file_partition_block@@PAXK@Z");
//};

//public: virtual bool c_monolithic_tag_file_remote_backend::tag_file_needs_updating(struct s_remote_tag_file const *)
//{
//    mangled_ppc("?tag_file_needs_updating@c_monolithic_tag_file_remote_backend@@UAA_NPBUs_remote_tag_file@@@Z");
//};

//public: virtual bool c_monolithic_tag_file_remote_backend::get_tag_file_dependencies(struct s_remote_tag_file const *, struct array_template<struct s_tag_file_index_entry> *)
//{
//    mangled_ppc("?get_tag_file_dependencies@c_monolithic_tag_file_remote_backend@@UAA_NPBUs_remote_tag_file@@PAU?$array_template@Us_tag_file_index_entry@@@@@Z");
//};

//public: char const * c_tag_file_description::get_tag_name(void) const
//{
//    mangled_ppc("?get_tag_name@c_tag_file_description@@QBAPBDXZ");
//};

//public: unsigned long c_tag_file_description::get_group_tag(void) const
//{
//    mangled_ppc("?get_group_tag@c_tag_file_description@@QBAKXZ");
//};

//private: bool c_monolithic_tag_file_remote_backend::skip_xsync_for_file(struct s_remote_tag_file const *)
//{
//    mangled_ppc("?skip_xsync_for_file@c_monolithic_tag_file_remote_backend@@AAA_NPBUs_remote_tag_file@@@Z");
//};

//public: virtual bool c_monolithic_tag_file_remote_backend::update_new_tag_file(class c_tag_allocator *, class c_tag_field_editor_manager *, class c_tag_group_loading_shim *, class c_tag_file_read_backend *, struct s_remote_tag_file const *, bool *)
//{
//    mangled_ppc("?update_new_tag_file@c_monolithic_tag_file_remote_backend@@UAA_NPAVc_tag_allocator@@PAVc_tag_field_editor_manager@@PAVc_tag_group_loading_shim@@PAVc_tag_file_read_backend@@PBUs_remote_tag_file@@PA_N@Z");
//};

//public: c_monolithic_tag_field_editor_manager::~c_monolithic_tag_field_editor_manager(void)
//{
//    mangled_ppc("??1c_monolithic_tag_field_editor_manager@@QAA@XZ");
//};

//public: c_monolithic_tag_field_editor_manager::s_tag_dependency_set::~s_tag_dependency_set(void)
//{
//    mangled_ppc("??1s_tag_dependency_set@c_monolithic_tag_field_editor_manager@@QAA@XZ");
//};

//public: std::map<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> > >::~map<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> > >(void)
//{
//    mangled_ppc("??1?$map@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@@std@@QAA@XZ");
//};

//public: std::set<__int64, struct std::less<__int64>, class std::allocator<__int64> >::~set<__int64, struct std::less<__int64>, class std::allocator<__int64> >(void)
//{
//    mangled_ppc("??1?$set@_JU?$less@_J@std@@V?$allocator@_J@2@@std@@QAA@XZ");
//};

//private: bool c_monolithic_tag_file_remote_backend::flush_target_caches(void)
//{
//    mangled_ppc("?flush_target_caches@c_monolithic_tag_file_remote_backend@@AAA_NXZ");
//};

//private: void c_monolithic_tag_file_remote_backend::truncate_target_files(void)
//{
//    mangled_ppc("?truncate_target_files@c_monolithic_tag_file_remote_backend@@AAAXXZ");
//};

//private: void c_monolithic_tag_file_remote_backend::truncate_tag_heap(class c_tag_file_persistent_heap const *)
//{
//    mangled_ppc("?truncate_tag_heap@c_monolithic_tag_file_remote_backend@@AAAXPBVc_tag_file_persistent_heap@@@Z");
//};

//public: virtual bool c_monolithic_tag_file_remote_backend::commit_changes(void)
//{
//    mangled_ppc("?commit_changes@c_monolithic_tag_file_remote_backend@@UAA_NXZ");
//};

//public: virtual void c_monolithic_tag_file_remote_backend::notify_commit_success(void)
//{
//    mangled_ppc("?notify_commit_success@c_monolithic_tag_file_remote_backend@@UAAXXZ");
//};

//public: virtual void c_monolithic_tag_file_remote_backend::verify_remote_tags(void)
//{
//    mangled_ppc("?verify_remote_tags@c_monolithic_tag_file_remote_backend@@UAAXXZ");
//};

//public: c_remote_persist_stream::c_remote_persist_stream(class c_target_file_system *, char const *)
//{
//    mangled_ppc("??0c_remote_persist_stream@@QAA@PAVc_target_file_system@@PBD@Z");
//};

//public: virtual bool c_remote_persist_stream::read(void *, unsigned long)
//{
//    mangled_ppc("?read@c_remote_persist_stream@@UAA_NPAXK@Z");
//};

//public: virtual bool c_remote_persist_stream::write(void const *, unsigned long)
//{
//    mangled_ppc("?write@c_remote_persist_stream@@UAA_NPBXK@Z");
//};

//public: virtual bool c_remote_persist_stream::write_extend_to_position(void)
//{
//    mangled_ppc("?write_extend_to_position@c_remote_persist_stream@@UAA_NXZ");
//};

//public: virtual bool c_remote_persist_stream::seek_relative(long)
//{
//    mangled_ppc("?seek_relative@c_remote_persist_stream@@UAA_NJ@Z");
//};

//public: virtual bool c_remote_persist_stream::seek_absolute(unsigned long)
//{
//    mangled_ppc("?seek_absolute@c_remote_persist_stream@@UAA_NK@Z");
//};

//public: virtual bool c_remote_persist_stream::get_absolute_position(unsigned long *)
//{
//    mangled_ppc("?get_absolute_position@c_remote_persist_stream@@UAA_NPAK@Z");
//};

//public: virtual bool c_remote_persist_stream::get_total_size(unsigned long *)
//{
//    mangled_ppc("?get_total_size@c_remote_persist_stream@@UAA_NPAK@Z");
//};

//merged_83692320
//{
//    mangled_ppc("merged_83692320");
//};

//public: virtual c_remote_persist_stream::~c_remote_persist_stream(void)
//{
//    mangled_ppc("??1c_remote_persist_stream@@UAA@XZ");
//};

//public: void c_monolithic_tag_file_remote_backend::backup_incremental_changes(void)
//{
//    mangled_ppc("?backup_incremental_changes@c_monolithic_tag_file_remote_backend@@QAAXXZ");
//};

//public: virtual bool c_monolithic_tag_file_remote_backend::save_host_state(class c_persist_stream *)
//{
//    mangled_ppc("?save_host_state@c_monolithic_tag_file_remote_backend@@UAA_NPAVc_persist_stream@@@Z");
//};

//private: bool c_monolithic_tag_file_remote_backend::create_partition_if_not_present(class c_tag_file_persistent_heap const *, long)
//{
//    mangled_ppc("?create_partition_if_not_present@c_monolithic_tag_file_remote_backend@@AAA_NPBVc_tag_file_persistent_heap@@J@Z");
//};

//private: void c_monolithic_tag_file_remote_backend::truncate_partition(class c_tag_file_persistent_heap const *, long)
//{
//    mangled_ppc("?truncate_partition@c_monolithic_tag_file_remote_backend@@AAAXPBVc_tag_file_persistent_heap@@J@Z");
//};

//private: bool c_monolithic_tag_file_remote_backend::write_state_header(class c_persist_stream *)
//{
//    mangled_ppc("?write_state_header@c_monolithic_tag_file_remote_backend@@AAA_NPAVc_persist_stream@@@Z");
//};

//private: bool c_monolithic_tag_file_remote_backend::save_state(class c_persist_stream *, enum e_monolithic_state_platform)
//{
//    mangled_ppc("?save_state@c_monolithic_tag_file_remote_backend@@AAA_NPAVc_persist_stream@@W4e_monolithic_state_platform@@@Z");
//};

//public: c_monolithic_tag_file_layout_registry_archiver::c_monolithic_tag_file_layout_registry_archiver(class c_monolithic_tag_file_layout_registry *, class c_tag_group_dictionary *, class c_single_tag_file_layout_writer *, class c_single_tag_file_layout_reader *, class c_allocation_interface *)
//{
//    mangled_ppc("??0c_monolithic_tag_file_layout_registry_archiver@@QAA@PAVc_monolithic_tag_file_layout_registry@@PAVc_tag_group_dictionary@@PAVc_single_tag_file_layout_writer@@PAVc_single_tag_file_layout_reader@@PAVc_allocation_interface@@@Z");
//};

//public: virtual bool c_monolithic_tag_file_layout_registry_archiver::load_chunk(class c_persist_stream *)
//{
//    mangled_ppc("?load_chunk@c_monolithic_tag_file_layout_registry_archiver@@UAA_NPAVc_persist_stream@@@Z");
//};

//public: virtual bool c_monolithic_tag_file_layout_registry_archiver::save_chunk(class c_persist_stream *)
//{
//    mangled_ppc("?save_chunk@c_monolithic_tag_file_layout_registry_archiver@@UAA_NPAVc_persist_stream@@@Z");
//};

//public: c_monolithic_tag_file_archiver::c_monolithic_tag_file_archiver(void)
//{
//    mangled_ppc("??0c_monolithic_tag_file_archiver@@QAA@XZ");
//};

//public: bool c_monolithic_tag_file_remote_backend::load_host_state(class c_persist_stream *, char const *)
//{
//    mangled_ppc("?load_host_state@c_monolithic_tag_file_remote_backend@@QAA_NPAVc_persist_stream@@PBD@Z");
//};

//bool monolithic_tag_file_backend_load_state(class c_persist_stream *, class c_persist_stream *, struct s_system_global_unique_identifier *, class c_tag_group_dictionary *, class c_monolithic_tag_file_index *, class c_tag_dependency_index_loader *, class c_monolithic_tag_file_archiver *, enum e_monolithic_state_platform)
//{
//    mangled_ppc("?monolithic_tag_file_backend_load_state@@YA_NPAVc_persist_stream@@0PAUs_system_global_unique_identifier@@PAVc_tag_group_dictionary@@PAVc_monolithic_tag_file_index@@PAVc_tag_dependency_index_loader@@PAVc_monolithic_tag_file_archiver@@W4e_monolithic_state_platform@@@Z");
//};

//bool monolithic_tag_file_backend_save_state(class c_persist_stream *, struct s_system_global_unique_identifier *, class c_monolithic_tag_file_index *, class c_tag_dependency_index_loader *, class c_monolithic_tag_file_archiver *, enum e_monolithic_state_platform)
//{
//    mangled_ppc("?monolithic_tag_file_backend_save_state@@YA_NPAVc_persist_stream@@PAUs_system_global_unique_identifier@@PAVc_monolithic_tag_file_index@@PAVc_tag_dependency_index_loader@@PAVc_monolithic_tag_file_archiver@@W4e_monolithic_state_platform@@@Z");
//};

//bool monolithic_tag_file_backend_save_or_load_state(class c_persist_stream *, class c_monolithic_tag_file_index *, class c_tag_dependency_index_loader *, class c_monolithic_tag_file_archiver *, enum e_chunk_archive_action, enum e_monolithic_state_platform)
//{
//    mangled_ppc("?monolithic_tag_file_backend_save_or_load_state@@YA_NPAVc_persist_stream@@PAVc_monolithic_tag_file_index@@PAVc_tag_dependency_index_loader@@PAVc_monolithic_tag_file_archiver@@W4e_chunk_archive_action@@W4e_monolithic_state_platform@@@Z");
//};

//public: c_versioned_chunk_archiver::c_versioned_chunk_archiver(char const *, class c_wrapped_array<struct s_persist_archiver_holder>, long)
//{
//    mangled_ppc("??0c_versioned_chunk_archiver@@QAA@PBDV?$c_wrapped_array@Us_persist_archiver_holder@@@@J@Z");
//};

//public: virtual char const * c_versioned_chunk_archiver::get_description(void) const
//{
//    mangled_ppc("?get_description@c_versioned_chunk_archiver@@UBAPBDXZ");
//};

//public: virtual unsigned long c_versioned_chunk_archiver::get_chunk_tag(void) const
//{
//    mangled_ppc("?get_chunk_tag@c_versioned_chunk_archiver@@UBAKXZ");
//};

//public: virtual long c_versioned_chunk_archiver::get_chunk_version(void) const
//{
//    mangled_ppc("?get_chunk_version@c_versioned_chunk_archiver@@UBAJXZ");
//};

//public: virtual bool c_versioned_chunk_archiver::can_handle_chunk(unsigned long, long) const
//{
//    mangled_ppc("?can_handle_chunk@c_versioned_chunk_archiver@@UBA_NKJ@Z");
//};

//public: virtual bool c_versioned_chunk_archiver::persist(class c_typed_pointer_holder &, class c_persist_stream *) const
//{
//    mangled_ppc("?persist@c_versioned_chunk_archiver@@UBA_NAAVc_typed_pointer_holder@@PAVc_persist_stream@@@Z");
//};

//public: virtual bool c_versioned_chunk_archiver::restore(struct s_persist_chunk_header const *, class c_typed_pointer_holder &, class c_persist_stream *) const
//{
//    mangled_ppc("?restore@c_versioned_chunk_archiver@@UBA_NPBUs_persist_chunk_header@@AAVc_typed_pointer_holder@@PAVc_persist_stream@@@Z");
//};

//public: virtual bool c_versioned_chunk_archiver::traverse(class c_persist_archiver_visitor *) const
//{
//    mangled_ppc("?traverse@c_versioned_chunk_archiver@@UBA_NPAVc_persist_archiver_visitor@@@Z");
//};

//public: c_chunk_with_sections_archiver::c_chunk_with_sections_archiver(class c_chunk_with_sections_archiver const &)
//{
//    mangled_ppc("??0c_chunk_with_sections_archiver@@QAA@ABV0@@Z");
//};

//public: virtual void * c_monolithic_tag_file_remote_backend::get_new_tag_file_index(void)
//{
//    mangled_ppc("?get_new_tag_file_index@c_monolithic_tag_file_remote_backend@@UAAPAXXZ");
//};

//bool monolithic_tag_file_backend_target_state_matches_host(struct s_system_global_unique_identifier const *, class c_persist_stream *)
//{
//    mangled_ppc("?monolithic_tag_file_backend_target_state_matches_host@@YA_NPBUs_system_global_unique_identifier@@PAVc_persist_stream@@@Z");
//};

//public: c_tag_file_persistent_heap::c_tag_file_persistent_heap(class c_allocation_interface *)
//{
//    mangled_ppc("??0c_tag_file_persistent_heap@@QAA@PAVc_allocation_interface@@@Z");
//};

//public: c_partitioned_persistent_heap_config::c_partitioned_persistent_heap_config(void)
//{
//    mangled_ppc("??0c_partitioned_persistent_heap_config@@QAA@XZ");
//};

//public: void c_tag_file_persistent_heap::set_heap_config(class c_tag_file_heap_partition_config *)
//{
//    mangled_ppc("?set_heap_config@c_tag_file_persistent_heap@@QAAXPAVc_tag_file_heap_partition_config@@@Z");
//};

//public: c_tag_file_persistent_heap::~c_tag_file_persistent_heap(void)
//{
//    mangled_ppc("??1c_tag_file_persistent_heap@@QAA@XZ");
//};

//private: virtual bool c_tag_file_persistent_heap::can_create_partition(long)
//{
//    mangled_ppc("?can_create_partition@c_tag_file_persistent_heap@@EAA_NJ@Z");
//};

//private: virtual long c_tag_file_persistent_heap::get_partition_page_bits(long)
//{
//    mangled_ppc("?get_partition_page_bits@c_tag_file_persistent_heap@@EAAJJ@Z");
//};

//private: virtual long c_tag_file_persistent_heap::get_partition_maximum_page_count(long)
//{
//    mangled_ppc("?get_partition_maximum_page_count@c_tag_file_persistent_heap@@EAAJJ@Z");
//};

//public: long c_tag_file_persistent_heap::allocate_block(unsigned long)
//{
//    mangled_ppc("?allocate_block@c_tag_file_persistent_heap@@QAAJK@Z");
//};

//public: void c_tag_file_persistent_heap::invalidate_block(long)
//{
//    mangled_ppc("?invalidate_block@c_tag_file_persistent_heap@@QAAXJ@Z");
//};

//public: bool c_tag_file_persistent_heap::get_partition_block(long, struct s_tag_file_partition_block *) const
//{
//    mangled_ppc("?get_partition_block@c_tag_file_persistent_heap@@QBA_NJPAUs_tag_file_partition_block@@@Z");
//};

//public: unsigned long c_tag_file_persistent_heap::get_partition_size(long) const
//{
//    mangled_ppc("?get_partition_size@c_tag_file_persistent_heap@@QBAKJ@Z");
//};

//public: unsigned long c_tag_file_persistent_heap::get_partition_used_size(long) const
//{
//    mangled_ppc("?get_partition_used_size@c_tag_file_persistent_heap@@QBAKJ@Z");
//};

//public: void c_tag_file_persistent_heap::get_active_partitions(class c_big_flags_typed_no_init<long, 32> *) const
//{
//    mangled_ppc("?get_active_partitions@c_tag_file_persistent_heap@@QBAXPAV?$c_big_flags_typed_no_init@J$0CA@@@@Z");
//};

//public: bool c_tag_file_persistent_heap::get_partition_config(long, struct s_tag_resource_cache_file_config *) const
//{
//    mangled_ppc("?get_partition_config@c_tag_file_persistent_heap@@QBA_NJPAUs_tag_resource_cache_file_config@@@Z");
//};

//public: bool c_tag_file_persistent_heap::commit_update(void)
//{
//    mangled_ppc("?commit_update@c_tag_file_persistent_heap@@QAA_NXZ");
//};

//private: bool c_tag_file_persistent_heap::load_persistent_heap(enum e_monolithic_tag_file_index_usage, class c_persist_stream *)
//{
//    mangled_ppc("?load_persistent_heap@c_tag_file_persistent_heap@@AAA_NW4e_monolithic_tag_file_index_usage@@PAVc_persist_stream@@@Z");
//};

//private: bool c_tag_file_persistent_heap::save_persistent_heap(enum e_monolithic_tag_file_index_usage, class c_persist_stream *)
//{
//    mangled_ppc("?save_persistent_heap@c_tag_file_persistent_heap@@AAA_NW4e_monolithic_tag_file_index_usage@@PAVc_persist_stream@@@Z");
//};

//public: bool c_tag_file_persistent_heap::save_or_load(class c_persist_stream *, enum e_chunk_archive_action, enum e_monolithic_tag_file_index_usage)
//{
//    mangled_ppc("?save_or_load@c_tag_file_persistent_heap@@QAA_NPAVc_persist_stream@@W4e_chunk_archive_action@@W4e_monolithic_tag_file_index_usage@@@Z");
//};

//public: c_tag_file_heap_xsync_config::c_tag_file_heap_xsync_config(long, long)
//{
//    mangled_ppc("??0c_tag_file_heap_xsync_config@@QAA@JJ@Z");
//};

//public: void c_tag_file_heap_xsync_config::set_partition_prefix(char const *)
//{
//    mangled_ppc("?set_partition_prefix@c_tag_file_heap_xsync_config@@QAAXPBD@Z");
//};

//public: virtual bool c_tag_file_heap_xsync_config::get_partition_config(long, struct s_tag_resource_cache_file_config *) const
//{
//    mangled_ppc("?get_partition_config@c_tag_file_heap_xsync_config@@UBA_NJPAUs_tag_resource_cache_file_config@@@Z");
//};

//public: virtual bool c_tag_file_heap_xsync_config::can_create_partition(long)
//{
//    mangled_ppc("?can_create_partition@c_tag_file_heap_xsync_config@@UAA_NJ@Z");
//};

//public: virtual long c_tag_file_heap_xsync_config::get_partition_page_bits(long)
//{
//    mangled_ppc("?get_partition_page_bits@c_tag_file_heap_xsync_config@@UAAJJ@Z");
//};

//public: virtual long c_tag_file_heap_xsync_config::get_partition_maximum_page_count(long)
//{
//    mangled_ppc("?get_partition_maximum_page_count@c_tag_file_heap_xsync_config@@UAAJJ@Z");
//};

//public: virtual unsigned long c_tag_file_heap_xsync_config::get_persist_chunk_tag(void) const
//{
//    mangled_ppc("?get_persist_chunk_tag@c_tag_file_heap_xsync_config@@UBAKXZ");
//};

//public: virtual long c_tag_file_heap_xsync_config::get_persist_chunk_version(void) const
//{
//    mangled_ppc("?get_persist_chunk_version@c_tag_file_heap_xsync_config@@UBAJXZ");
//};

//public: virtual bool c_tag_file_heap_xsync_config::restore(class c_persist_stream *)
//{
//    mangled_ppc("?restore@c_tag_file_heap_xsync_config@@UAA_NPAVc_persist_stream@@@Z");
//};

//public: virtual bool c_tag_file_heap_xsync_config::persist(class c_persist_stream *)
//{
//    mangled_ppc("?persist@c_tag_file_heap_xsync_config@@UAA_NPAVc_persist_stream@@@Z");
//};

//public: virtual unsigned long c_monolithic_tag_file_layout_writer::get_layout_tag(void)
//{
//    mangled_ppc("?get_layout_tag@c_monolithic_tag_file_layout_writer@@UAAKXZ");
//};

//public: virtual long c_monolithic_tag_file_layout_writer::get_layout_version(void)
//{
//    mangled_ppc("?get_layout_version@c_monolithic_tag_file_layout_writer@@UAAJXZ");
//};

//public: virtual bool c_monolithic_tag_file_layout_writer::write_layout_to_stream(class c_persist_stream *, struct s_tag_block_definition const *)
//{
//    mangled_ppc("?write_layout_to_stream@c_monolithic_tag_file_layout_writer@@UAA_NPAVc_persist_stream@@PBUs_tag_block_definition@@@Z");
//};

//public: std::pair<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char> >::~pair<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char> >(void)
//{
//    mangled_ppc("??1?$pair@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@QAA@XZ");
//};

//public: c_copyable_array_template<unsigned char>::~c_copyable_array_template<unsigned char>(void)
//{
//    mangled_ppc("??1?$c_copyable_array_template@E@@QAA@XZ");
//};

//public: std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> >::~pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> >(void)
//{
//    mangled_ppc("??1?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@QAA@XZ");
//};

//public: std::pair<class std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::iterator, bool>::~pair<class std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::iterator, bool>(void)
//{
//    mangled_ppc("??1?$pair@Viterator@?$_Tree@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@std@@_N@std@@QAA@XZ");
//};

//public: std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::const_iterator::const_iterator(class std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::const_iterator const &)
//{
//    mangled_ppc("??0const_iterator@?$_Tree@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@std@@QAA@ABV012@@Z");
//};

//public: std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::iterator::~iterator(void)
//{
//    mangled_ppc("??1iterator@?$_Tree@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@std@@QAA@XZ");
//};

//public: std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::const_iterator::~const_iterator(void)
//{
//    mangled_ppc("??1const_iterator@?$_Tree@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@std@@QAA@XZ");
//};

//public: std::_Bidit<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> >, int, struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > const *, struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > const &>::_Bidit<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> >, int, struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > const *, struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > const &>(struct std::_Bidit<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> >, int, struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > const *, struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > const &> const &)
//{
//    mangled_ppc("??0?$_Bidit@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@HPBU12@ABU12@@std@@QAA@ABU01@@Z");
//};

//public: std::_Bidit<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> >, int, struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > const *, struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > const &>::~_Bidit<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> >, int, struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > const *, struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > const &>(void)
//{
//    mangled_ppc("??1?$_Bidit@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@HPBU12@ABU12@@std@@QAA@XZ");
//};

//public: std::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> >, int, struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > const *, struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > const &, class std::_Iterator_base>::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> >, int, struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > const *, struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > const &, class std::_Iterator_base>(struct std::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> >, int, struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > const *, struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > const &, class std::_Iterator_base> const &)
//{
//    mangled_ppc("??0?$_Iterator_with_base@Ubidirectional_iterator_tag@std@@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@2@HPBU32@ABU32@V_Iterator_base@2@@std@@QAA@ABU01@@Z");
//};

//public: std::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> >, int, struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > const *, struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > const &, class std::_Iterator_base>::~_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> >, int, struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > const *, struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > const &, class std::_Iterator_base>(void)
//{
//    mangled_ppc("??1?$_Iterator_with_base@Ubidirectional_iterator_tag@std@@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@2@HPBU32@ABU32@V_Iterator_base@2@@std@@QAA@XZ");
//};

//public: unsigned long c_monolithic_tag_file_layout_writer::get_block_definition_size(struct s_tag_block_definition const *) const
//{
//    mangled_ppc("?get_block_definition_size@c_monolithic_tag_file_layout_writer@@QBAKPBUs_tag_block_definition@@@Z");
//};

//public: c_monolithic_tag_file_write_cache::c_monolithic_tag_file_write_cache(unsigned long, unsigned long)
//{
//    mangled_ppc("??0c_monolithic_tag_file_write_cache@@QAA@KK@Z");
//};

//private: unsigned long c_monolithic_tag_file_write_cache::get_next_write_offset(void) const
//{
//    mangled_ppc("?get_next_write_offset@c_monolithic_tag_file_write_cache@@ABAKXZ");
//};

//private: unsigned long c_monolithic_tag_file_write_cache::get_aligned_write_cache_size(void) const
//{
//    mangled_ppc("?get_aligned_write_cache_size@c_monolithic_tag_file_write_cache@@ABAKXZ");
//};

//public: bool c_monolithic_tag_file_write_cache::write(class c_tag_file_persistent_heap const *, class c_target_file_system *, long, unsigned long, unsigned long, void const *)
//{
//    mangled_ppc("?write@c_monolithic_tag_file_write_cache@@QAA_NPBVc_tag_file_persistent_heap@@PAVc_target_file_system@@JKKPBX@Z");
//};

//public: bool c_monolithic_tag_file_write_cache::flush(class c_tag_file_persistent_heap const *, class c_target_file_system *)
//{
//    mangled_ppc("?flush@c_monolithic_tag_file_write_cache@@QAA_NPBVc_tag_file_persistent_heap@@PAVc_target_file_system@@@Z");
//};

//private: static bool c_monolithic_tag_file_write_cache::write_to_target(class c_tag_file_persistent_heap const *, class c_target_file_system *, long, unsigned long, unsigned long, void const *)
//{
//    mangled_ppc("?write_to_target@c_monolithic_tag_file_write_cache@@CA_NPBVc_tag_file_persistent_heap@@PAVc_target_file_system@@JKKPBX@Z");
//};

//public: c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor::c_monolithic_tag_reference_editor(class c_monolithic_tag_field_editor_manager *, class c_tag_field_editor *)
//{
//    mangled_ppc("??0c_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@QAA@PAV1@PAVc_tag_field_editor@@@Z");
//};

//public: virtual bool c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor::write(void *, void *, void const *, class c_persist_chunk_writer *, class c_tag_persist_context *)
//{
//    mangled_ppc("?write@c_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@UAA_NPAX0PBXPAVc_persist_chunk_writer@@PAVc_tag_persist_context@@@Z");
//};

//public: void c_monolithic_tag_field_editor_manager::s_tag_dependency_set::add_dependency(__int64)
//{
//    mangled_ppc("?add_dependency@s_tag_dependency_set@c_monolithic_tag_field_editor_manager@@QAAX_J@Z");
//};

//public: std::pair<class std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::iterator, bool>::~pair<class std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::iterator, bool>(void)
//{
//    mangled_ppc("??1?$pair@Viterator@?$_Tree@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@std@@_N@std@@QAA@XZ");
//};

//public: std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::iterator::~iterator(void)
//{
//    mangled_ppc("??1iterator@?$_Tree@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@std@@QAA@XZ");
//};

//public: std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::const_iterator::~const_iterator(void)
//{
//    mangled_ppc("??1const_iterator@?$_Tree@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@std@@QAA@XZ");
//};

//public: std::_Bidit<__int64, int, __int64const *, __int64const &>::~_Bidit<__int64, int, __int64const *, __int64const &>(void)
//{
//    mangled_ppc("??1?$_Bidit@_JHPB_JAB_J@std@@QAA@XZ");
//};

//public: std::_Iterator_with_base<struct std::bidirectional_iterator_tag, __int64, int, __int64const *, __int64const &, class std::_Iterator_base>::~_Iterator_with_base<struct std::bidirectional_iterator_tag, __int64, int, __int64const *, __int64const &, class std::_Iterator_base>(void)
//{
//    mangled_ppc("??1?$_Iterator_with_base@Ubidirectional_iterator_tag@std@@_JHPB_JAB_JV_Iterator_base@2@@std@@QAA@XZ");
//};

//public: virtual bool c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor::create(void *, void const *, class c_tag_persist_context *)
//{
//    mangled_ppc("?create@c_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@UAA_NPAXPBXPAVc_tag_persist_context@@@Z");
//};

//public: virtual void c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor::dispose(void *, void const *, class c_tag_persist_context *)
//{
//    mangled_ppc("?dispose@c_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@UAAXPAXPBXPAVc_tag_persist_context@@@Z");
//};

//public: virtual bool c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor::read(void *, struct s_tag_struct_definition const *, void *, void const *, struct s_persist_chunk_header const *, class c_persist_stream *, class c_tag_persist_context *)
//{
//    mangled_ppc("?read@c_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@UAA_NPAXPBUs_tag_struct_definition@@0PBXPBUs_persist_chunk_header@@PAVc_persist_stream@@PAVc_tag_persist_context@@@Z");
//};

//public: c_monolithic_tag_field_editor_manager::c_monolithic_tag_field_editor_manager(class c_tag_dependency_index_editor *, class c_tag_field_editor_manager *)
//{
//    mangled_ppc("??0c_monolithic_tag_field_editor_manager@@QAA@PAVc_tag_dependency_index_editor@@PAVc_tag_field_editor_manager@@@Z");
//};

//public: c_monolithic_tag_field_editor_manager::s_tag_dependency_set::s_tag_dependency_set(void)
//{
//    mangled_ppc("??0s_tag_dependency_set@c_monolithic_tag_field_editor_manager@@QAA@XZ");
//};

//public: virtual class c_tag_field_editor * c_monolithic_tag_field_editor_manager::tag_field_editor_get(enum e_tag_field, void const *)
//{
//    mangled_ppc("?tag_field_editor_get@c_monolithic_tag_field_editor_manager@@UAAPAVc_tag_field_editor@@W4e_tag_field@@PBX@Z");
//};

//public: std::pair<class std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::iterator, bool>::~pair<class std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::iterator, bool>(void)
//{
//    mangled_ppc("??1?$pair@Viterator@?$_Tree@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@std@@_N@std@@QAA@XZ");
//};

//public: std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::iterator::~iterator(void)
//{
//    mangled_ppc("??1iterator@?$_Tree@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@std@@QAA@XZ");
//};

//public: std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::const_iterator::~const_iterator(void)
//{
//    mangled_ppc("??1const_iterator@?$_Tree@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@std@@QAA@XZ");
//};

//public: std::_Bidit<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor>, int, struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> const *, struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> const &>::~_Bidit<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor>, int, struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> const *, struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> const &>(void)
//{
//    mangled_ppc("??1?$_Bidit@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@HPBU12@ABU12@@std@@QAA@XZ");
//};

//public: std::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor>, int, struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> const *, struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> const &, class std::_Iterator_base>::~_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor>, int, struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> const *, struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> const &, class std::_Iterator_base>(void)
//{
//    mangled_ppc("??1?$_Iterator_with_base@Ubidirectional_iterator_tag@std@@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@2@HPBU32@ABU32@V_Iterator_base@2@@std@@QAA@XZ");
//};

//public: virtual class c_tag_field_editor * c_monolithic_tag_field_editor_manager::tag_struct_editor_get(struct s_tag_struct_definition const *)
//{
//    mangled_ppc("?tag_struct_editor_get@c_monolithic_tag_field_editor_manager@@UAAPAVc_tag_field_editor@@PBUs_tag_struct_definition@@@Z");
//};

//public: virtual void c_monolithic_tag_field_editor_manager::set_tag_field_scanner_fields(struct tag_field_scan_state *)
//{
//    mangled_ppc("?set_tag_field_scanner_fields@c_monolithic_tag_field_editor_manager@@UAAXPAUtag_field_scan_state@@@Z");
//};

//public: virtual struct s_tag_struct_definition const * c_monolithic_tag_field_editor_manager::get_struct_from_block_definition(struct s_tag_block_definition const *)
//{
//    mangled_ppc("?get_struct_from_block_definition@c_monolithic_tag_field_editor_manager@@UAAPBUs_tag_struct_definition@@PBUs_tag_block_definition@@@Z");
//};

//public: virtual struct s_tag_struct_definition const * c_monolithic_tag_field_editor_manager::get_struct_from_resource_definition(struct s_tag_resource_definition const *)
//{
//    mangled_ppc("?get_struct_from_resource_definition@c_monolithic_tag_field_editor_manager@@UAAPBUs_tag_struct_definition@@PBUs_tag_resource_definition@@@Z");
//};

//public: virtual struct s_tag_struct_definition const * c_monolithic_tag_field_editor_manager::get_struct_from_interop_definition(struct s_tag_interop_definition const *)
//{
//    mangled_ppc("?get_struct_from_interop_definition@c_monolithic_tag_field_editor_manager@@UAAPBUs_tag_struct_definition@@PBUs_tag_interop_definition@@@Z");
//};

//public: void c_monolithic_tag_field_editor_manager::update_dependencies(struct s_tag_group const *, char const *)
//{
//    mangled_ppc("?update_dependencies@c_monolithic_tag_field_editor_manager@@QAAXPBUs_tag_group@@PBD@Z");
//};

//public: void c_monolithic_tag_field_editor_manager::dump_dependencies(void)
//{
//    mangled_ppc("?dump_dependencies@c_monolithic_tag_field_editor_manager@@QAAXXZ");
//};

//public: c_monolithic_tag_dependency_index_editor_loader::c_monolithic_tag_dependency_index_editor_loader(class c_monolithic_tag_file_index *, class c_tag_dependency_index_editor *)
//{
//    mangled_ppc("??0c_monolithic_tag_dependency_index_editor_loader@@QAA@PAVc_monolithic_tag_file_index@@PAVc_tag_dependency_index_editor@@@Z");
//};

//public: c_tag_dependency_index_loader_default::c_tag_dependency_index_loader_default(void)
//{
//    mangled_ppc("??0c_tag_dependency_index_loader_default@@QAA@XZ");
//};

//public: c_tag_dependency_index_loader::c_tag_dependency_index_loader(void)
//{
//    mangled_ppc("??0c_tag_dependency_index_loader@@QAA@XZ");
//};

//private: virtual bool c_monolithic_tag_dependency_index_editor_loader::load_optimized_dependencies(class c_persist_stream *)
//{
//    mangled_ppc("?load_optimized_dependencies@c_monolithic_tag_dependency_index_editor_loader@@EAA_NPAVc_persist_stream@@@Z");
//};

//private: virtual bool c_monolithic_tag_dependency_index_editor_loader::save_optimized_dependencies(class c_persist_stream *)
//{
//    mangled_ppc("?save_optimized_dependencies@c_monolithic_tag_dependency_index_editor_loader@@EAA_NPAVc_persist_stream@@@Z");
//};

//private: virtual bool c_monolithic_tag_dependency_index_editor_loader::load_exploded_dependencies(class c_persist_stream *)
//{
//    mangled_ppc("?load_exploded_dependencies@c_monolithic_tag_dependency_index_editor_loader@@EAA_NPAVc_persist_stream@@@Z");
//};

//private: virtual bool c_monolithic_tag_dependency_index_editor_loader::save_exploded_dependencies(class c_persist_stream *)
//{
//    mangled_ppc("?save_exploded_dependencies@c_monolithic_tag_dependency_index_editor_loader@@EAA_NPAVc_persist_stream@@@Z");
//};

//void build_remote_tag_file_from_tag_file_index_entry(struct s_tag_file_index_entry const *, long, class c_tag_group_dictionary *, struct s_remote_tag_file *)
//{
//    mangled_ppc("?build_remote_tag_file_from_tag_file_index_entry@@YAXPBUs_tag_file_index_entry@@JPAVc_tag_group_dictionary@@PAUs_remote_tag_file@@@Z");
//};

//public: c_xsync_monolithic_remote_backend_config::c_xsync_monolithic_remote_backend_config(struct s_remote_tag_file_backend_setup const *)
//{
//    mangled_ppc("??0c_xsync_monolithic_remote_backend_config@@QAA@PBUs_remote_tag_file_backend_setup@@@Z");
//};

//public: c_xsync_monolithic_remote_backend_config::c_xsync_monolithic_remote_backend_config(char const *)
//{
//    mangled_ppc("??0c_xsync_monolithic_remote_backend_config@@QAA@PBD@Z");
//};

//protected: class c_xsync_monolithic_remote_backend_config * c_xsync_monolithic_remote_backend_config::get_config(void)
//{
//    mangled_ppc("?get_config@c_xsync_monolithic_remote_backend_config@@IAAPAV1@XZ");
//};

//public: virtual bool c_xsync_monolithic_remote_backend_config::truncate_target_files(void)
//{
//    mangled_ppc("?truncate_target_files@c_xsync_monolithic_remote_backend_config@@UAA_NXZ");
//};

//public: virtual char const * c_xsync_monolithic_remote_backend_config::get_state_filename(void)
//{
//    mangled_ppc("?get_state_filename@c_xsync_monolithic_remote_backend_config@@UAAPBDXZ");
//};

//public: virtual char const * c_xsync_monolithic_remote_backend_config::get_backup_state_filename(void)
//{
//    mangled_ppc("?get_backup_state_filename@c_xsync_monolithic_remote_backend_config@@UAAPBDXZ");
//};

//public: virtual class c_tag_file_heap_partition_config * c_xsync_monolithic_remote_backend_config::get_tag_heap_config(void)
//{
//    mangled_ppc("?get_tag_heap_config@c_xsync_monolithic_remote_backend_config@@UAAPAVc_tag_file_heap_partition_config@@XZ");
//};

//public: virtual class c_tag_file_heap_partition_config * c_xsync_monolithic_remote_backend_config::get_cache_heap_config(void)
//{
//    mangled_ppc("?get_cache_heap_config@c_xsync_monolithic_remote_backend_config@@UAAPAVc_tag_file_heap_partition_config@@XZ");
//};

//public: c_xsync_monolithic_tag_file_remote_backend::c_xsync_monolithic_tag_file_remote_backend(struct s_remote_tag_file_backend_setup const *, class c_allocation_interface *, enum e_runtime_platform_type, class c_target_file_system *, unsigned long, class c_tag_group_dictionary *)
//{
//    mangled_ppc("??0c_xsync_monolithic_tag_file_remote_backend@@QAA@PBUs_remote_tag_file_backend_setup@@PAVc_allocation_interface@@W4e_runtime_platform_type@@PAVc_target_file_system@@KPAVc_tag_group_dictionary@@@Z");
//};

//public: std::map<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > > >::map<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > > >(void)
//{
//    mangled_ppc("??0?$map@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@@std@@QAA@XZ");
//};

//public: std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::~_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >(void)
//{
//    mangled_ppc("??1?$_Tree@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@std@@QAA@XZ");
//};

//public: class std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::const_iterator std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::end(void) const
//{
//    mangled_ppc("?end@?$_Tree@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@std@@QBA?AVconst_iterator@12@XZ");
//};

//public: struct std::pair<class std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::iterator, bool> std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::insert(struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > const &)
//{
//    mangled_ppc("?insert@?$_Tree@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@std@@QAA?AU?$pair@Viterator@?$_Tree@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@std@@_N@2@ABU?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@2@@Z");
//};

//public: class std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::iterator std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::erase(class std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::const_iterator)
//{
//    mangled_ppc("?erase@?$_Tree@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@std@@QAA?AViterator@12@Vconst_iterator@12@@Z");
//};

//public: class std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::const_iterator std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::find(struct std::pair<struct s_tag_block_definition const *, bool> const &) const
//{
//    mangled_ppc("?find@?$_Tree@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@std@@QBA?AVconst_iterator@12@ABU?$pair@PBUs_tag_block_definition@@_N@2@@Z");
//};

//public: std::set<__int64, struct std::less<__int64>, class std::allocator<__int64> >::set<__int64, struct std::less<__int64>, class std::allocator<__int64> >(void)
//{
//    mangled_ppc("??0?$set@_JU?$less@_J@std@@V?$allocator@_J@2@@std@@QAA@XZ");
//};

//public: std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::~_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >(void)
//{
//    mangled_ppc("??1?$_Tree@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@std@@QAA@XZ");
//};

//public: struct std::pair<class std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::iterator, bool> std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::insert(__int64const &)
//{
//    mangled_ppc("?insert@?$_Tree@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@std@@QAA?AU?$pair@Viterator@?$_Tree@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@std@@_N@2@AB_J@Z");
//};

//public: std::deque<__int64, class std::allocator<__int64> >::deque<__int64, class std::allocator<__int64> >(void)
//{
//    mangled_ppc("??0?$deque@_JV?$allocator@_J@std@@@std@@QAA@XZ");
//};

//public: std::deque<__int64, class std::allocator<__int64> >::~deque<__int64, class std::allocator<__int64> >(void)
//{
//    mangled_ppc("??1?$deque@_JV?$allocator@_J@std@@@std@@QAA@XZ");
//};

//public: unsigned int std::deque<__int64, class std::allocator<__int64> >::size(void) const
//{
//    mangled_ppc("?size@?$deque@_JV?$allocator@_J@std@@@std@@QBAIXZ");
//};

//public: __int64& std::deque<__int64, class std::allocator<__int64> >::operator[](unsigned int)
//{
//    mangled_ppc("??A?$deque@_JV?$allocator@_J@std@@@std@@QAAAA_JI@Z");
//};

//public: void std::deque<__int64, class std::allocator<__int64> >::push_back(__int64const &)
//{
//    mangled_ppc("?push_back@?$deque@_JV?$allocator@_J@std@@@std@@QAAXAB_J@Z");
//};

//public: std::map<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> > >::map<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> > >(void)
//{
//    mangled_ppc("??0?$map@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@@std@@QAA@XZ");
//};

//public: std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::~_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >(void)
//{
//    mangled_ppc("??1?$_Tree@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@std@@QAA@XZ");
//};

//public: struct std::pair<class std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::iterator, bool> std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::insert(struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> const &)
//{
//    mangled_ppc("?insert@?$_Tree@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@std@@QAA?AU?$pair@Viterator@?$_Tree@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@std@@_N@2@ABU?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@2@@Z");
//};

//public: struct s_tag_file_index_entry & array_template<struct s_tag_file_index_entry>::new_element(void)
//{
//    mangled_ppc("?new_element@?$array_template@Us_tag_file_index_entry@@@@QAAAAUs_tag_file_index_entry@@XZ");
//};

//public: c_free_chunk_section_archiver<class c_monolithic_tag_file_index>::c_free_chunk_section_archiver<class c_monolithic_tag_file_index>(class c_monolithic_tag_file_index *, char const *, unsigned long, long, bool (c_monolithic_tag_file_index::*)(class c_persist_stream *), bool (c_monolithic_tag_file_index::*)(class c_persist_stream *))
//{
//    mangled_ppc("??0?$c_free_chunk_section_archiver@Vc_monolithic_tag_file_index@@@@QAA@PAVc_monolithic_tag_file_index@@PBDKJP81@AA_NPAVc_persist_stream@@@Z3@Z");
//};

//public: virtual char const * c_free_chunk_section_archiver<class c_monolithic_tag_file_index>::get_description(void) const
//{
//    mangled_ppc("?get_description@?$c_free_chunk_section_archiver@Vc_monolithic_tag_file_index@@@@UBAPBDXZ");
//};

//public: virtual unsigned long c_free_chunk_section_archiver<class c_monolithic_tag_file_index>::get_chunk_tag(void) const
//{
//    mangled_ppc("?get_chunk_tag@?$c_free_chunk_section_archiver@Vc_monolithic_tag_file_index@@@@UBAKXZ");
//};

//public: virtual long c_free_chunk_section_archiver<class c_monolithic_tag_file_index>::get_chunk_version(void) const
//{
//    mangled_ppc("?get_chunk_version@?$c_free_chunk_section_archiver@Vc_monolithic_tag_file_index@@@@UBAJXZ");
//};

//public: virtual bool c_free_chunk_section_archiver<class c_monolithic_tag_file_index>::can_handle_chunk(unsigned long, long) const
//{
//    mangled_ppc("?can_handle_chunk@?$c_free_chunk_section_archiver@Vc_monolithic_tag_file_index@@@@UBA_NKJ@Z");
//};

//public: virtual bool c_free_chunk_section_archiver<class c_monolithic_tag_file_index>::persist(class c_typed_pointer_holder &, class c_persist_stream *) const
//{
//    mangled_ppc("?persist@?$c_free_chunk_section_archiver@Vc_monolithic_tag_file_index@@@@UBA_NAAVc_typed_pointer_holder@@PAVc_persist_stream@@@Z");
//};

//public: virtual bool c_free_chunk_section_archiver<class c_monolithic_tag_file_index>::restore(struct s_persist_chunk_header const *, class c_typed_pointer_holder &, class c_persist_stream *) const
//{
//    mangled_ppc("?restore@?$c_free_chunk_section_archiver@Vc_monolithic_tag_file_index@@@@UBA_NPBUs_persist_chunk_header@@AAVc_typed_pointer_holder@@PAVc_persist_stream@@@Z");
//};

//public: c_free_chunk_section_archiver<class c_tag_dependency_index_loader>::c_free_chunk_section_archiver<class c_tag_dependency_index_loader>(class c_tag_dependency_index_loader *, char const *, unsigned long, long, bool (c_tag_dependency_index_loader::*)(class c_persist_stream *), bool (c_tag_dependency_index_loader::*)(class c_persist_stream *))
//{
//    mangled_ppc("??0?$c_free_chunk_section_archiver@Vc_tag_dependency_index_loader@@@@QAA@PAVc_tag_dependency_index_loader@@PBDKJP81@AA_NPAVc_persist_stream@@@Z3@Z");
//};

//public: virtual char const * c_free_chunk_section_archiver<class c_tag_dependency_index_loader>::get_description(void) const
//{
//    mangled_ppc("?get_description@?$c_free_chunk_section_archiver@Vc_tag_dependency_index_loader@@@@UBAPBDXZ");
//};

//public: virtual unsigned long c_free_chunk_section_archiver<class c_tag_dependency_index_loader>::get_chunk_tag(void) const
//{
//    mangled_ppc("?get_chunk_tag@?$c_free_chunk_section_archiver@Vc_tag_dependency_index_loader@@@@UBAKXZ");
//};

//public: virtual long c_free_chunk_section_archiver<class c_tag_dependency_index_loader>::get_chunk_version(void) const
//{
//    mangled_ppc("?get_chunk_version@?$c_free_chunk_section_archiver@Vc_tag_dependency_index_loader@@@@UBAJXZ");
//};

//public: virtual bool c_free_chunk_section_archiver<class c_tag_dependency_index_loader>::can_handle_chunk(unsigned long, long) const
//{
//    mangled_ppc("?can_handle_chunk@?$c_free_chunk_section_archiver@Vc_tag_dependency_index_loader@@@@UBA_NKJ@Z");
//};

//public: virtual bool c_free_chunk_section_archiver<class c_tag_dependency_index_loader>::persist(class c_typed_pointer_holder &, class c_persist_stream *) const
//{
//    mangled_ppc("?persist@?$c_free_chunk_section_archiver@Vc_tag_dependency_index_loader@@@@UBA_NAAVc_typed_pointer_holder@@PAVc_persist_stream@@@Z");
//};

//public: virtual bool c_free_chunk_section_archiver<class c_tag_dependency_index_loader>::restore(struct s_persist_chunk_header const *, class c_typed_pointer_holder &, class c_persist_stream *) const
//{
//    mangled_ppc("?restore@?$c_free_chunk_section_archiver@Vc_tag_dependency_index_loader@@@@UBA_NPBUs_persist_chunk_header@@AAVc_typed_pointer_holder@@PAVc_persist_stream@@@Z");
//};

//public: c_try_free_chunk_section_archiver<class c_monolithic_tag_file_archiver>::c_try_free_chunk_section_archiver<class c_monolithic_tag_file_archiver>(class c_monolithic_tag_file_archiver *, char const *, unsigned long, long, bool (c_monolithic_tag_file_archiver::*)(class c_persist_stream *), bool (c_monolithic_tag_file_archiver::*)(class c_persist_stream *))
//{
//    mangled_ppc("??0?$c_try_free_chunk_section_archiver@Vc_monolithic_tag_file_archiver@@@@QAA@PAVc_monolithic_tag_file_archiver@@PBDKJP81@AA_NPAVc_persist_stream@@@Z3@Z");
//};

//public: virtual char const * c_try_free_chunk_section_archiver<class c_monolithic_tag_file_archiver>::get_description(void) const
//{
//    mangled_ppc("?get_description@?$c_try_free_chunk_section_archiver@Vc_monolithic_tag_file_archiver@@@@UBAPBDXZ");
//};

//public: virtual unsigned long c_try_free_chunk_section_archiver<class c_monolithic_tag_file_archiver>::get_chunk_tag(void) const
//{
//    mangled_ppc("?get_chunk_tag@?$c_try_free_chunk_section_archiver@Vc_monolithic_tag_file_archiver@@@@UBAKXZ");
//};

//public: virtual long c_try_free_chunk_section_archiver<class c_monolithic_tag_file_archiver>::get_chunk_version(void) const
//{
//    mangled_ppc("?get_chunk_version@?$c_try_free_chunk_section_archiver@Vc_monolithic_tag_file_archiver@@@@UBAJXZ");
//};

//public: virtual bool c_try_free_chunk_section_archiver<class c_monolithic_tag_file_archiver>::can_handle_chunk(unsigned long, long) const
//{
//    mangled_ppc("?can_handle_chunk@?$c_try_free_chunk_section_archiver@Vc_monolithic_tag_file_archiver@@@@UBA_NKJ@Z");
//};

//public: virtual bool c_try_free_chunk_section_archiver<class c_monolithic_tag_file_archiver>::persist(class c_typed_pointer_holder &, class c_persist_stream *) const
//{
//    mangled_ppc("?persist@?$c_try_free_chunk_section_archiver@Vc_monolithic_tag_file_archiver@@@@UBA_NAAVc_typed_pointer_holder@@PAVc_persist_stream@@@Z");
//};

//public: virtual bool c_try_free_chunk_section_archiver<class c_monolithic_tag_file_archiver>::restore(struct s_persist_chunk_header const *, class c_typed_pointer_holder &, class c_persist_stream *) const
//{
//    mangled_ppc("?restore@?$c_try_free_chunk_section_archiver@Vc_monolithic_tag_file_archiver@@@@UBA_NPBUs_persist_chunk_header@@AAVc_typed_pointer_holder@@PAVc_persist_stream@@@Z");
//};

//public: struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > * std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::iterator::operator->(void) const
//{
//    mangled_ppc("??Citerator@?$_Tree@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@std@@QBAPAU?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@2@XZ");
//};

//public: struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > const * std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::const_iterator::operator->(void) const
//{
//    mangled_ppc("??Cconst_iterator@?$_Tree@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@std@@QBAPBU?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@2@XZ");
//};

//public: bool std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::const_iterator::operator!=(class std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::const_iterator const &) const
//{
//    mangled_ppc("??9const_iterator@?$_Tree@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@std@@QBA_NABV012@@Z");
//};

//public: c_copyable_array_template<unsigned char>::c_copyable_array_template<unsigned char>(void)
//{
//    mangled_ppc("??0?$c_copyable_array_template@E@@QAA@XZ");
//};

//public: struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> * std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::iterator::operator->(void) const
//{
//    mangled_ppc("??Citerator@?$_Tree@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@std@@QBAPAU?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@2@XZ");
//};

//public: std::_Tree_val<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::~_Tree_val<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >(void)
//{
//    mangled_ppc("??1?$_Tree_val@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@std@@QAA@XZ");
//};

//public: std::_Tree_val<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::~_Tree_val<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >(void)
//{
//    mangled_ppc("??1?$_Tree_val@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@std@@QAA@XZ");
//};

//public: std::_Deque_val<__int64, class std::allocator<__int64> >::~_Deque_val<__int64, class std::allocator<__int64> >(void)
//{
//    mangled_ppc("??1?$_Deque_val@_JV?$allocator@_J@std@@@std@@QAA@XZ");
//};

//public: std::_Deque_iterator<__int64, class std::allocator<__int64>, 1>::~_Deque_iterator<__int64, class std::allocator<__int64>, 1>(void)
//{
//    mangled_ppc("??1?$_Deque_iterator@_JV?$allocator@_J@std@@$00@std@@QAA@XZ");
//};

//public: std::_Tree_val<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::~_Tree_val<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >(void)
//{
//    mangled_ppc("??1?$_Tree_val@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@std@@QAA@XZ");
//};

//public: std::_Tree_ptr<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::~_Tree_ptr<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >(void)
//{
//    mangled_ppc("??1?$_Tree_ptr@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@std@@QAA@XZ");
//};

//public: std::_Tree_ptr<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::~_Tree_ptr<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >(void)
//{
//    mangled_ppc("??1?$_Tree_ptr@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@std@@QAA@XZ");
//};

//public: std::_Deque_map<__int64, class std::allocator<__int64> >::~_Deque_map<__int64, class std::allocator<__int64> >(void)
//{
//    mangled_ppc("??1?$_Deque_map@_JV?$allocator@_J@std@@@std@@QAA@XZ");
//};

//public: std::_Deque_const_iterator<__int64, class std::allocator<__int64>, 1>::~_Deque_const_iterator<__int64, class std::allocator<__int64>, 1>(void)
//{
//    mangled_ppc("??1?$_Deque_const_iterator@_JV?$allocator@_J@std@@$00@std@@QAA@XZ");
//};

//public: std::_Tree_ptr<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::~_Tree_ptr<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >(void)
//{
//    mangled_ppc("??1?$_Tree_ptr@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@std@@QAA@XZ");
//};

//public: std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::~_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >(void)
//{
//    mangled_ppc("??1?$_Tree_nod@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@std@@QAA@XZ");
//};

//public: std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::~_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >(void)
//{
//    mangled_ppc("??1?$_Tree_nod@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@std@@QAA@XZ");
//};

//public: std::_Ranit<__int64, int, __int64const *, __int64const &>::~_Ranit<__int64, int, __int64const *, __int64const &>(void)
//{
//    mangled_ppc("??1?$_Ranit@_JHPB_JAB_J@std@@QAA@XZ");
//};

//public: std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::~_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >(void)
//{
//    mangled_ppc("??1?$_Tree_nod@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@std@@QAA@XZ");
//};

//public: std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0>::~_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0>(void)
//{
//    mangled_ppc("??1?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@QAA@XZ");
//};

//public: std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0>::~_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0>(void)
//{
//    mangled_ppc("??1?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@QAA@XZ");
//};

//public: std::_Iterator_with_base<struct std::random_access_iterator_tag, __int64, int, __int64const *, __int64const &, class std::_Iterator_base>::~_Iterator_with_base<struct std::random_access_iterator_tag, __int64, int, __int64const *, __int64const &, class std::_Iterator_base>(void)
//{
//    mangled_ppc("??1?$_Iterator_with_base@Urandom_access_iterator_tag@std@@_JHPB_JAB_JV_Iterator_base@2@@std@@QAA@XZ");
//};

//public: std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0>::~_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0>(void)
//{
//    mangled_ppc("??1?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@QAA@XZ");
//};

//public: std::allocator<__int64>::allocator<__int64>(void)
//{
//    mangled_ppc("??0?$allocator@_J@std@@QAA@XZ");
//};

//public: __int64* std::allocator<__int64>::allocate(unsigned int)
//{
//    mangled_ppc("?allocate@?$allocator@_J@std@@QAAPA_JI@Z");
//};

//public: void std::allocator<__int64>::construct(__int64*, __int64const &)
//{
//    mangled_ppc("?construct@?$allocator@_J@std@@QAAXPA_JAB_J@Z");
//};

//protected: static char & std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Color(struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node *)
//{
//    mangled_ppc("?_Color@?$_Tree@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@std@@KAAADPAU_Node@?$_Tree_nod@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@2@@Z");
//};

//protected: static char & std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Isnil(struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node *)
//{
//    mangled_ppc("?_Isnil@?$_Tree@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@std@@KAAADPAU_Node@?$_Tree_nod@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@2@@Z");
//};

//protected: static struct std::pair<struct s_tag_block_definition const *, bool> const & std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Key(struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node *)
//{
//    mangled_ppc("?_Key@?$_Tree@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@std@@KAABU?$pair@PBUs_tag_block_definition@@_N@2@PAU_Node@?$_Tree_nod@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@2@@Z");
//};

//protected: static struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node *& std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Left(struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node *)
//{
//    mangled_ppc("?_Left@?$_Tree@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@std@@KAAAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@2@PAU342@@Z");
//};

//protected: static struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node *& std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Parent(struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node *)
//{
//    mangled_ppc("?_Parent@?$_Tree@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@std@@KAAAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@2@PAU342@@Z");
//};

//protected: static struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node *& std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Right(struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node *)
//{
//    mangled_ppc("?_Right@?$_Tree@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@std@@KAAAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@2@PAU342@@Z");
//};

//public: std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >(struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> > const &, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > > const &)
//{
//    mangled_ppc("??0?$_Tree@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@std@@QAA@ABU?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@1@ABV?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@1@@Z");
//};

//public: class std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::iterator std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::begin(void)
//{
//    mangled_ppc("?begin@?$_Tree@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@std@@QAA?AViterator@12@XZ");
//};

//public: class std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::iterator std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Make_iter(class std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::const_iterator) const
//{
//    mangled_ppc("?_Make_iter@?$_Tree@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@std@@QBA?AViterator@12@Vconst_iterator@12@@Z");
//};

//public: class std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::const_iterator std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::lower_bound(struct std::pair<struct s_tag_block_definition const *, bool> const &) const
//{
//    mangled_ppc("?lower_bound@?$_Tree@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@std@@QBA?AVconst_iterator@12@ABU?$pair@PBUs_tag_block_definition@@_N@2@@Z");
//};

//protected: class std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::iterator std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Insert(bool, struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node *, struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > const &)
//{
//    mangled_ppc("?_Insert@?$_Tree@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@std@@IAA?AViterator@12@_NPAU_Node@?$_Tree_nod@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@2@ABU?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@2@@Z");
//};

//protected: struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node *& std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Lmost(void) const
//{
//    mangled_ppc("?_Lmost@?$_Tree@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@std@@IBAAAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@2@XZ");
//};

//protected: void std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Lrotate(struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node *)
//{
//    mangled_ppc("?_Lrotate@?$_Tree@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@std@@IAAXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@2@@Z");
//};

//protected: static struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node * std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Max(struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node *)
//{
//    mangled_ppc("?_Max@?$_Tree@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@std@@KAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@2@PAU342@@Z");
//};

//protected: static struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node * std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Min(struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node *)
//{
//    mangled_ppc("?_Min@?$_Tree@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@std@@KAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@2@PAU342@@Z");
//};

//protected: struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node *& std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Rmost(void) const
//{
//    mangled_ppc("?_Rmost@?$_Tree@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@std@@IBAAAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@2@XZ");
//};

//protected: struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node *& std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Root(void) const
//{
//    mangled_ppc("?_Root@?$_Tree@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@std@@IBAAAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@2@XZ");
//};

//protected: void std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Rrotate(struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node *)
//{
//    mangled_ppc("?_Rrotate@?$_Tree@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@std@@IAAXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@2@@Z");
//};

//protected: void std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Orphan_ptr(class std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> > &, struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node *) const
//{
//    mangled_ppc("?_Orphan_ptr@?$_Tree@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@std@@IBAXAAV12@PAU_Node@?$_Tree_nod@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@2@@Z");
//};

//protected: void std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Tidy(void)
//{
//    mangled_ppc("?_Tidy@?$_Tree@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@std@@IAAXXZ");
//};

//public: static struct std::pair<struct s_tag_block_definition const *, bool> const & std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0>::_Kfn(struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > const &)
//{
//    mangled_ppc("?_Kfn@?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@SAABU?$pair@PBUs_tag_block_definition@@_N@2@ABU?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@2@@Z");
//};

//protected: std::_Container_base_aux_alloc_empty<class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > > >::~_Container_base_aux_alloc_empty<class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > > >(void)
//{
//    mangled_ppc("??1?$_Container_base_aux_alloc_empty@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@std@@@std@@IAA@XZ");
//};

//public: std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >(void)
//{
//    mangled_ppc("??0?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@std@@QAA@XZ");
//};

//public: void std::allocator<struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node>::deallocate(struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node *, unsigned int)
//{
//    mangled_ppc("?deallocate@?$allocator@U_Node@?$_Tree_nod@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@std@@@std@@QAAXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@2@I@Z");
//};

//public: void std::allocator<struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node>::destroy(struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node *)
//{
//    mangled_ppc("?destroy@?$allocator@U_Node@?$_Tree_nod@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@std@@@std@@QAAXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@2@@Z");
//};

//protected: static char & std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Isnil(struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node *)
//{
//    mangled_ppc("?_Isnil@?$_Tree@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@std@@KAAADPAU_Node@?$_Tree_nod@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@2@@Z");
//};

//protected: static __int64const & std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Key(struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node *)
//{
//    mangled_ppc("?_Key@?$_Tree@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@std@@KAAB_JPAU_Node@?$_Tree_nod@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@2@@Z");
//};

//protected: static struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node *& std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Left(struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node *)
//{
//    mangled_ppc("?_Left@?$_Tree@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@std@@KAAAPAU_Node@?$_Tree_nod@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@2@PAU342@@Z");
//};

//protected: static struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node *& std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Right(struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node *)
//{
//    mangled_ppc("?_Right@?$_Tree@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@std@@KAAAPAU_Node@?$_Tree_nod@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@2@PAU342@@Z");
//};

//public: std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >(struct std::less<__int64> const &, class std::allocator<__int64> const &)
//{
//    mangled_ppc("??0?$_Tree@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@std@@QAA@ABU?$less@_J@1@ABV?$allocator@_J@1@@Z");
//};

//public: class std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::iterator std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::begin(void)
//{
//    mangled_ppc("?begin@?$_Tree@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@std@@QAA?AViterator@12@XZ");
//};

//protected: class std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::iterator std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Insert(bool, struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node *, __int64const &)
//{
//    mangled_ppc("?_Insert@?$_Tree@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@std@@IAA?AViterator@12@_NPAU_Node@?$_Tree_nod@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@2@AB_J@Z");
//};

//protected: struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node *& std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Root(void) const
//{
//    mangled_ppc("?_Root@?$_Tree@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@std@@IBAAAPAU_Node@?$_Tree_nod@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@2@XZ");
//};

//protected: void std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Tidy(void)
//{
//    mangled_ppc("?_Tidy@?$_Tree@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@std@@IAAXXZ");
//};

//public: static __int64const & std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0>::_Kfn(__int64const &)
//{
//    mangled_ppc("?_Kfn@?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@SAAB_JAB_J@Z");
//};

//protected: std::_Container_base_aux_alloc_empty<class std::allocator<__int64> >::~_Container_base_aux_alloc_empty<class std::allocator<__int64> >(void)
//{
//    mangled_ppc("??1?$_Container_base_aux_alloc_empty@V?$allocator@_J@std@@@std@@IAA@XZ");
//};

//public: class std::_Deque_iterator<__int64, class std::allocator<__int64>, 1> std::deque<__int64, class std::allocator<__int64> >::begin(void)
//{
//    mangled_ppc("?begin@?$deque@_JV?$allocator@_J@std@@@std@@QAA?AV?$_Deque_iterator@_JV?$allocator@_J@std@@$00@2@XZ");
//};

//protected: void std::deque<__int64, class std::allocator<__int64> >::_Growmap(unsigned int)
//{
//    mangled_ppc("?_Growmap@?$deque@_JV?$allocator@_J@std@@@std@@IAAXI@Z");
//};

//protected: void std::deque<__int64, class std::allocator<__int64> >::_Tidy(void)
//{
//    mangled_ppc("?_Tidy@?$deque@_JV?$allocator@_J@std@@@std@@IAAXXZ");
//};

//protected: std::_Deque_val<__int64, class std::allocator<__int64> >::_Deque_val<__int64, class std::allocator<__int64> >(class std::allocator<__int64>)
//{
//    mangled_ppc("??0?$_Deque_val@_JV?$allocator@_J@std@@@std@@IAA@V?$allocator@_J@1@@Z");
//};

//protected: static char & std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Isnil(struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node *)
//{
//    mangled_ppc("?_Isnil@?$_Tree@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@std@@KAAADPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@2@@Z");
//};

//protected: static class c_tag_field_editor *const & std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Key(struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node *)
//{
//    mangled_ppc("?_Key@?$_Tree@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@std@@KAABQAVc_tag_field_editor@@PAU_Node@?$_Tree_nod@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@2@@Z");
//};

//protected: static struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node *& std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Left(struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node *)
//{
//    mangled_ppc("?_Left@?$_Tree@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@std@@KAAAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@2@PAU342@@Z");
//};

//protected: static struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node *& std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Right(struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node *)
//{
//    mangled_ppc("?_Right@?$_Tree@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@std@@KAAAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@2@PAU342@@Z");
//};

//public: std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >(struct std::less<class c_tag_field_editor *> const &, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> > const &)
//{
//    mangled_ppc("??0?$_Tree@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@std@@QAA@ABU?$less@PAVc_tag_field_editor@@@1@ABV?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@1@@Z");
//};

//public: class std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::iterator std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::begin(void)
//{
//    mangled_ppc("?begin@?$_Tree@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@std@@QAA?AViterator@12@XZ");
//};

//protected: class std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::iterator std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Insert(bool, struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node *, struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> const &)
//{
//    mangled_ppc("?_Insert@?$_Tree@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@std@@IAA?AViterator@12@_NPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@2@ABU?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@2@@Z");
//};

//protected: struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node *& std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Root(void) const
//{
//    mangled_ppc("?_Root@?$_Tree@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@std@@IBAAAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@2@XZ");
//};

//protected: void std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Tidy(void)
//{
//    mangled_ppc("?_Tidy@?$_Tree@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@std@@IAAXXZ");
//};

//public: static class c_tag_field_editor *const & std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0>::_Kfn(struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> const &)
//{
//    mangled_ppc("?_Kfn@?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@SAABQAVc_tag_field_editor@@ABU?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@2@@Z");
//};

//protected: std::_Container_base_aux_alloc_empty<class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> > >::~_Container_base_aux_alloc_empty<class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> > >(void)
//{
//    mangled_ppc("??1?$_Container_base_aux_alloc_empty@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@std@@@std@@IAA@XZ");
//};

//public: std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >(void)
//{
//    mangled_ppc("??0?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@std@@QAA@XZ");
//};

//public: std::pair<class std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::iterator, bool>::pair<class std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::iterator, bool>(class std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::iterator const &, bool const &)
//{
//    mangled_ppc("??0?$pair@Viterator@?$_Tree@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@std@@_N@std@@QAA@ABViterator@?$_Tree@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@1@AB_N@Z");
//};

//public: std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::iterator::iterator(struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node *, class std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> > const *)
//{
//    mangled_ppc("??0iterator@?$_Tree@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@std@@QAA@PAU_Node@?$_Tree_nod@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@2@PBV12@@Z");
//};

//public: class std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::iterator & std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::iterator::operator--(void)
//{
//    mangled_ppc("??Fiterator@?$_Tree@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@std@@QAAAAV012@XZ");
//};

//public: bool std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::const_iterator::operator==(class std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::const_iterator const &) const
//{
//    mangled_ppc("??8const_iterator@?$_Tree@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@std@@QBA_NABV012@@Z");
//};

//public: struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node * std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::const_iterator::_Mynode(void) const
//{
//    mangled_ppc("?_Mynode@const_iterator@?$_Tree@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@std@@QBAPAU_Node@?$_Tree_nod@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@3@XZ");
//};

//public: struct s_tag_file_index_entry & array_template<struct s_tag_file_index_entry>::element(long)
//{
//    mangled_ppc("?element@?$array_template@Us_tag_file_index_entry@@@@QAAAAUs_tag_file_index_entry@@J@Z");
//};

//public: long array_template<struct s_tag_file_index_entry>::new_element_index(void)
//{
//    mangled_ppc("?new_element_index@?$array_template@Us_tag_file_index_entry@@@@QAAJXZ");
//};

//public: std::pair<class std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::iterator, bool>::pair<class std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::iterator, bool>(class std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::iterator const &, bool const &)
//{
//    mangled_ppc("??0?$pair@Viterator@?$_Tree@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@std@@_N@std@@QAA@ABViterator@?$_Tree@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@1@AB_N@Z");
//};

//public: std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::iterator::iterator(struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node *, class std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> > const *)
//{
//    mangled_ppc("??0iterator@?$_Tree@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@std@@QAA@PAU_Node@?$_Tree_nod@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@2@PBV12@@Z");
//};

//public: struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > & std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::iterator::operator*(void) const
//{
//    mangled_ppc("??Diterator@?$_Tree@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@std@@QBAAAU?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@2@XZ");
//};

//public: class std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::iterator & std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::iterator::operator--(void)
//{
//    mangled_ppc("??Fiterator@?$_Tree@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@std@@QAAAAV012@XZ");
//};

//public: std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::const_iterator::const_iterator(struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node *, class std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> > const *)
//{
//    mangled_ppc("??0const_iterator@?$_Tree@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@std@@QAA@PAU_Node@?$_Tree_nod@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@2@PBV12@@Z");
//};

//public: struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > const & std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::const_iterator::operator*(void) const
//{
//    mangled_ppc("??Dconst_iterator@?$_Tree@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@std@@QBAABU?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@2@XZ");
//};

//public: class std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::const_iterator & std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::const_iterator::operator++(void)
//{
//    mangled_ppc("??Econst_iterator@?$_Tree@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@std@@QAAAAV012@XZ");
//};

//public: bool std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::const_iterator::operator==(class std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::const_iterator const &) const
//{
//    mangled_ppc("??8const_iterator@?$_Tree@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@std@@QBA_NABV012@@Z");
//};

//public: struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node * std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::const_iterator::_Mynode(void) const
//{
//    mangled_ppc("?_Mynode@const_iterator@?$_Tree@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@std@@QBAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@3@XZ");
//};

//public: std::pair<class std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::iterator, bool>::pair<class std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::iterator, bool>(class std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::iterator const &, bool const &)
//{
//    mangled_ppc("??0?$pair@Viterator@?$_Tree@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@std@@_N@std@@QAA@ABViterator@?$_Tree@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@1@AB_N@Z");
//};

//public: std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::iterator::iterator(struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node *, class std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> > const *)
//{
//    mangled_ppc("??0iterator@?$_Tree@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@std@@QAA@PAU_Node@?$_Tree_nod@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@2@PBV12@@Z");
//};

//public: struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> & std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::iterator::operator*(void) const
//{
//    mangled_ppc("??Diterator@?$_Tree@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@std@@QBAAAU?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@2@XZ");
//};

//public: class std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::iterator & std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::iterator::operator--(void)
//{
//    mangled_ppc("??Fiterator@?$_Tree@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@std@@QAAAAV012@XZ");
//};

//public: bool std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::const_iterator::operator==(class std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::const_iterator const &) const
//{
//    mangled_ppc("??8const_iterator@?$_Tree@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@std@@QBA_NABV012@@Z");
//};

//public: struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node * std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::const_iterator::_Mynode(void) const
//{
//    mangled_ppc("?_Mynode@const_iterator@?$_Tree@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@std@@QBAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@3@XZ");
//};

//public: __int64& std::_Deque_iterator<__int64, class std::allocator<__int64>, 1>::operator*(void) const
//{
//    mangled_ppc("??D?$_Deque_iterator@_JV?$allocator@_J@std@@$00@std@@QBAAA_JXZ");
//};

//public: class std::_Deque_iterator<__int64, class std::allocator<__int64>, 1> std::_Deque_iterator<__int64, class std::allocator<__int64>, 1>::operator+(int) const
//{
//    mangled_ppc("??H?$_Deque_iterator@_JV?$allocator@_J@std@@$00@std@@QBA?AV01@H@Z");
//};

//public: std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::iterator::iterator(class std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::iterator const &)
//{
//    mangled_ppc("??0iterator@?$_Tree@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@std@@QAA@ABV012@@Z");
//};

//public: std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::const_iterator::const_iterator(class std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::const_iterator const &)
//{
//    mangled_ppc("??0const_iterator@?$_Tree@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@std@@QAA@ABV012@@Z");
//};

//public: std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::const_iterator::const_iterator(class std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::const_iterator const &)
//{
//    mangled_ppc("??0const_iterator@?$_Tree@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@std@@QAA@ABV012@@Z");
//};

//public: std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::iterator::iterator(class std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::iterator const &)
//{
//    mangled_ppc("??0iterator@?$_Tree@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@std@@QAA@ABV012@@Z");
//};

//public: std::_Bidit<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> >, int, struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > const *, struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > const &>::_Bidit<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> >, int, struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > const *, struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > const &>(void)
//{
//    mangled_ppc("??0?$_Bidit@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@HPBU12@ABU12@@std@@QAA@XZ");
//};

//public: std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::iterator::iterator(class std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::iterator const &)
//{
//    mangled_ppc("??0iterator@?$_Tree@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@std@@QAA@ABV012@@Z");
//};

//public: std::_Deque_iterator<__int64, class std::allocator<__int64>, 1>::_Deque_iterator<__int64, class std::allocator<__int64>, 1>(class std::_Deque_iterator<__int64, class std::allocator<__int64>, 1> const &)
//{
//    mangled_ppc("??0?$_Deque_iterator@_JV?$allocator@_J@std@@$00@std@@QAA@ABV01@@Z");
//};

//public: std::_Bidit<__int64, int, __int64const *, __int64const &>::_Bidit<__int64, int, __int64const *, __int64const &>(struct std::_Bidit<__int64, int, __int64const *, __int64const &> const &)
//{
//    mangled_ppc("??0?$_Bidit@_JHPB_JAB_J@std@@QAA@ABU01@@Z");
//};

//public: std::_Bidit<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor>, int, struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> const *, struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> const &>::_Bidit<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor>, int, struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> const *, struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> const &>(struct std::_Bidit<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor>, int, struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> const *, struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> const &> const &)
//{
//    mangled_ppc("??0?$_Bidit@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@HPBU12@ABU12@@std@@QAA@ABU01@@Z");
//};

//public: std::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> >, int, struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > const *, struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > const &, class std::_Iterator_base>::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> >, int, struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > const *, struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > const &, class std::_Iterator_base>(void)
//{
//    mangled_ppc("??0?$_Iterator_with_base@Ubidirectional_iterator_tag@std@@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@2@HPBU32@ABU32@V_Iterator_base@2@@std@@QAA@XZ");
//};

//public: std::_Iterator_with_base<struct std::bidirectional_iterator_tag, __int64, int, __int64const *, __int64const &, class std::_Iterator_base>::_Iterator_with_base<struct std::bidirectional_iterator_tag, __int64, int, __int64const *, __int64const &, class std::_Iterator_base>(struct std::_Iterator_with_base<struct std::bidirectional_iterator_tag, __int64, int, __int64const *, __int64const &, class std::_Iterator_base> const &)
//{
//    mangled_ppc("??0?$_Iterator_with_base@Ubidirectional_iterator_tag@std@@_JHPB_JAB_JV_Iterator_base@2@@std@@QAA@ABU01@@Z");
//};

//public: std::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor>, int, struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> const *, struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> const &, class std::_Iterator_base>::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor>, int, struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> const *, struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> const &, class std::_Iterator_base>(struct std::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor>, int, struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> const *, struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> const &, class std::_Iterator_base> const &)
//{
//    mangled_ppc("??0?$_Iterator_with_base@Ubidirectional_iterator_tag@std@@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@2@HPBU32@ABU32@V_Iterator_base@2@@std@@QAA@ABU01@@Z");
//};

//public: std::allocator<__int64>::allocator<__int64>(class std::allocator<__int64> const &)
//{
//    mangled_ppc("??0?$allocator@_J@std@@QAA@ABV01@@Z");
//};

//public: void std::allocator<__int64>::deallocate(__int64*, unsigned int)
//{
//    mangled_ppc("?deallocate@?$allocator@_J@std@@QAAXPA_JI@Z");
//};

//protected: static struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > & std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Myval(struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node *)
//{
//    mangled_ppc("?_Myval@?$_Tree@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@std@@KAAAU?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@2@PAU_Node@?$_Tree_nod@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@2@@Z");
//};

//public: class std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::iterator std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::end(void)
//{
//    mangled_ppc("?end@?$_Tree@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@std@@QAA?AViterator@12@XZ");
//};

//public: unsigned int std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::max_size(void) const
//{
//    mangled_ppc("?max_size@?$_Tree@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@std@@QBAIXZ");
//};

//public: class std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::iterator std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::erase(class std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::const_iterator, class std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::const_iterator)
//{
//    mangled_ppc("?erase@?$_Tree@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@std@@QAA?AViterator@12@Vconst_iterator@12@0@Z");
//};

//protected: void std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Init(void)
//{
//    mangled_ppc("?_Init@?$_Tree@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@std@@IAAXXZ");
//};

//protected: struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node * std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Lbound(struct std::pair<struct s_tag_block_definition const *, bool> const &) const
//{
//    mangled_ppc("?_Lbound@?$_Tree@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@std@@IBAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@2@ABU?$pair@PBUs_tag_block_definition@@_N@2@@Z");
//};

//protected: struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node * std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Buynode(struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node *, struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node *, struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node *, struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > const &, char)
//{
//    mangled_ppc("?_Buynode@?$_Tree@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@std@@IAAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@2@PAU342@00ABU?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@2@D@Z");
//};

//protected: std::_Tree_val<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Tree_val<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >(struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> > const &, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >)
//{
//    mangled_ppc("??0?$_Tree_val@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@std@@IAA@ABU?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@1@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@1@@Z");
//};

//public: std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >(class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > > const &)
//{
//    mangled_ppc("??0?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@std@@QAA@ABV01@@Z");
//};

//public: void std::allocator<struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node *>::destroy(struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node **)
//{
//    mangled_ppc("?destroy@?$allocator@PAU_Node@?$_Tree_nod@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@std@@@std@@QAAXPAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@2@@Z");
//};

//protected: static char & std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Color(struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node *)
//{
//    mangled_ppc("?_Color@?$_Tree@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@std@@KAAADPAU_Node@?$_Tree_nod@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@2@@Z");
//};

//protected: static struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node *& std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Parent(struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node *)
//{
//    mangled_ppc("?_Parent@?$_Tree@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@std@@KAAAPAU_Node@?$_Tree_nod@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@2@PAU342@@Z");
//};

//protected: static __int64& std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Myval(struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node *)
//{
//    mangled_ppc("?_Myval@?$_Tree@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@std@@KAAA_JPAU_Node@?$_Tree_nod@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@2@@Z");
//};

//public: class std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::iterator std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::end(void)
//{
//    mangled_ppc("?end@?$_Tree@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@std@@QAA?AViterator@12@XZ");
//};

//public: unsigned int std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::max_size(void) const
//{
//    mangled_ppc("?max_size@?$_Tree@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@std@@QBAIXZ");
//};

//public: class std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::iterator std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::erase(class std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::const_iterator, class std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::const_iterator)
//{
//    mangled_ppc("?erase@?$_Tree@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@std@@QAA?AViterator@12@Vconst_iterator@12@0@Z");
//};

//protected: void std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Init(void)
//{
//    mangled_ppc("?_Init@?$_Tree@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@std@@IAAXXZ");
//};

//protected: struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node *& std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Lmost(void) const
//{
//    mangled_ppc("?_Lmost@?$_Tree@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@std@@IBAAAPAU_Node@?$_Tree_nod@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@2@XZ");
//};

//protected: void std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Lrotate(struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node *)
//{
//    mangled_ppc("?_Lrotate@?$_Tree@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@std@@IAAXPAU_Node@?$_Tree_nod@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@2@@Z");
//};

//protected: struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node *& std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Rmost(void) const
//{
//    mangled_ppc("?_Rmost@?$_Tree@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@std@@IBAAAPAU_Node@?$_Tree_nod@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@2@XZ");
//};

//protected: void std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Rrotate(struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node *)
//{
//    mangled_ppc("?_Rrotate@?$_Tree@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@std@@IAAXPAU_Node@?$_Tree_nod@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@2@@Z");
//};

//protected: struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node * std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Buynode(struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node *, struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node *, struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node *, __int64const &, char)
//{
//    mangled_ppc("?_Buynode@?$_Tree@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@std@@IAAPAU_Node@?$_Tree_nod@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@2@PAU342@00AB_JD@Z");
//};

//protected: std::_Tree_val<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Tree_val<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >(struct std::less<__int64> const &, class std::allocator<__int64>)
//{
//    mangled_ppc("??0?$_Tree_val@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@std@@IAA@ABU?$less@_J@1@V?$allocator@_J@1@@Z");
//};

//public: void std::allocator<struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node>::deallocate(struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node *, unsigned int)
//{
//    mangled_ppc("?deallocate@?$allocator@U_Node@?$_Tree_nod@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@std@@@std@@QAAXPAU_Node@?$_Tree_nod@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@2@I@Z");
//};

//public: void std::allocator<struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node *>::destroy(struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node **)
//{
//    mangled_ppc("?destroy@?$allocator@PAU_Node@?$_Tree_nod@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@std@@@std@@QAAXPAPAU_Node@?$_Tree_nod@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@2@@Z");
//};

//public: unsigned int std::deque<__int64, class std::allocator<__int64> >::max_size(void) const
//{
//    mangled_ppc("?max_size@?$deque@_JV?$allocator@_J@std@@@std@@QBAIXZ");
//};

//public: bool std::deque<__int64, class std::allocator<__int64> >::empty(void) const
//{
//    mangled_ppc("?empty@?$deque@_JV?$allocator@_J@std@@@std@@QBA_NXZ");
//};

//public: void std::deque<__int64, class std::allocator<__int64> >::pop_back(void)
//{
//    mangled_ppc("?pop_back@?$deque@_JV?$allocator@_J@std@@@std@@QAAXXZ");
//};

//protected: static void std::deque<__int64, class std::allocator<__int64> >::_Xlen(void)
//{
//    mangled_ppc("?_Xlen@?$deque@_JV?$allocator@_J@std@@@std@@KAXXZ");
//};

//protected: std::_Deque_map<__int64, class std::allocator<__int64> >::_Deque_map<__int64, class std::allocator<__int64> >(class std::allocator<__int64>)
//{
//    mangled_ppc("??0?$_Deque_map@_JV?$allocator@_J@std@@@std@@IAA@V?$allocator@_J@1@@Z");
//};

//public: void std::allocator<__int64*>::deallocate(__int64**, unsigned int)
//{
//    mangled_ppc("?deallocate@?$allocator@PA_J@std@@QAAXPAPA_JI@Z");
//};

//public: __int64** std::allocator<__int64*>::allocate(unsigned int)
//{
//    mangled_ppc("?allocate@?$allocator@PA_J@std@@QAAPAPA_JI@Z");
//};

//public: void std::allocator<__int64*>::destroy(__int64**)
//{
//    mangled_ppc("?destroy@?$allocator@PA_J@std@@QAAXPAPA_J@Z");
//};

//protected: static char & std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Color(struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node *)
//{
//    mangled_ppc("?_Color@?$_Tree@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@std@@KAAADPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@2@@Z");
//};

//protected: static struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node *& std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Parent(struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node *)
//{
//    mangled_ppc("?_Parent@?$_Tree@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@std@@KAAAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@2@PAU342@@Z");
//};

//protected: static struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> & std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Myval(struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node *)
//{
//    mangled_ppc("?_Myval@?$_Tree@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@std@@KAAAU?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@2@PAU_Node@?$_Tree_nod@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@2@@Z");
//};

//public: class std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::iterator std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::end(void)
//{
//    mangled_ppc("?end@?$_Tree@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@std@@QAA?AViterator@12@XZ");
//};

//public: unsigned int std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::max_size(void) const
//{
//    mangled_ppc("?max_size@?$_Tree@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@std@@QBAIXZ");
//};

//public: class std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::iterator std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::erase(class std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::const_iterator, class std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::const_iterator)
//{
//    mangled_ppc("?erase@?$_Tree@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@std@@QAA?AViterator@12@Vconst_iterator@12@0@Z");
//};

//protected: void std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Init(void)
//{
//    mangled_ppc("?_Init@?$_Tree@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@std@@IAAXXZ");
//};

//protected: struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node *& std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Lmost(void) const
//{
//    mangled_ppc("?_Lmost@?$_Tree@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@std@@IBAAAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@2@XZ");
//};

//protected: void std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Lrotate(struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node *)
//{
//    mangled_ppc("?_Lrotate@?$_Tree@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@std@@IAAXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@2@@Z");
//};

//protected: struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node *& std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Rmost(void) const
//{
//    mangled_ppc("?_Rmost@?$_Tree@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@std@@IBAAAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@2@XZ");
//};

//protected: void std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Rrotate(struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node *)
//{
//    mangled_ppc("?_Rrotate@?$_Tree@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@std@@IAAXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@2@@Z");
//};

//protected: struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node * std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Buynode(struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node *, struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node *, struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node *, struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> const &, char)
//{
//    mangled_ppc("?_Buynode@?$_Tree@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@std@@IAAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@2@PAU342@00ABU?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@2@D@Z");
//};

//protected: std::_Tree_val<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Tree_val<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >(struct std::less<class c_tag_field_editor *> const &, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >)
//{
//    mangled_ppc("??0?$_Tree_val@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@std@@IAA@ABU?$less@PAVc_tag_field_editor@@@1@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@1@@Z");
//};

//public: std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >(class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> > const &)
//{
//    mangled_ppc("??0?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@std@@QAA@ABV01@@Z");
//};

//public: void std::allocator<struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node>::deallocate(struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node *, unsigned int)
//{
//    mangled_ppc("?deallocate@?$allocator@U_Node@?$_Tree_nod@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@std@@@std@@QAAXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@2@I@Z");
//};

//public: void std::allocator<struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node *>::destroy(struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node **)
//{
//    mangled_ppc("?destroy@?$allocator@PAU_Node@?$_Tree_nod@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@std@@@std@@QAAXPAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@2@@Z");
//};

//public: std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::const_iterator::const_iterator(struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node *, class std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> > const *)
//{
//    mangled_ppc("??0const_iterator@?$_Tree@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@std@@QAA@PAU_Node@?$_Tree_nod@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@2@PBV12@@Z");
//};

//public: class std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::const_iterator & std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::const_iterator::operator--(void)
//{
//    mangled_ppc("??Fconst_iterator@?$_Tree@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@std@@QAAAAV012@XZ");
//};

//protected: void array_template<struct s_tag_file_index_entry>::signal_out_of_memory(void) const
//{
//    mangled_ppc("?signal_out_of_memory@?$array_template@Us_tag_file_index_entry@@@@IBAXXZ");
//};

//public: class std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::const_iterator & std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::const_iterator::operator--(void)
//{
//    mangled_ppc("??Fconst_iterator@?$_Tree@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@std@@QAAAAV012@XZ");
//};

//public: void std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::const_iterator::_Inc(void)
//{
//    mangled_ppc("?_Inc@const_iterator@?$_Tree@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@std@@QAAXXZ");
//};

//public: std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::const_iterator::const_iterator(struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node *, class std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> > const *)
//{
//    mangled_ppc("??0const_iterator@?$_Tree@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@std@@QAA@PAU_Node@?$_Tree_nod@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@2@PBV12@@Z");
//};

//public: struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> const & std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::const_iterator::operator*(void) const
//{
//    mangled_ppc("??Dconst_iterator@?$_Tree@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@std@@QBAABU?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@2@XZ");
//};

//public: class std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::const_iterator & std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::const_iterator::operator--(void)
//{
//    mangled_ppc("??Fconst_iterator@?$_Tree@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@std@@QAAAAV012@XZ");
//};

//public: std::_Deque_iterator<__int64, class std::allocator<__int64>, 1>::_Deque_iterator<__int64, class std::allocator<__int64>, 1>(unsigned int, class std::_Container_base_secure const *)
//{
//    mangled_ppc("??0?$_Deque_iterator@_JV?$allocator@_J@std@@$00@std@@QAA@IPBV_Container_base_secure@1@@Z");
//};

//public: class std::_Deque_iterator<__int64, class std::allocator<__int64>, 1> & std::_Deque_iterator<__int64, class std::allocator<__int64>, 1>::operator+=(int)
//{
//    mangled_ppc("??Y?$_Deque_iterator@_JV?$allocator@_J@std@@$00@std@@QAAAAV01@H@Z");
//};

//public: std::_Deque_const_iterator<__int64, class std::allocator<__int64>, 1>::_Deque_const_iterator<__int64, class std::allocator<__int64>, 1>(class std::_Deque_const_iterator<__int64, class std::allocator<__int64>, 1> const &)
//{
//    mangled_ppc("??0?$_Deque_const_iterator@_JV?$allocator@_J@std@@$00@std@@QAA@ABV01@@Z");
//};

//public: __int64const & std::_Deque_const_iterator<__int64, class std::allocator<__int64>, 1>::operator*(void) const
//{
//    mangled_ppc("??D?$_Deque_const_iterator@_JV?$allocator@_J@std@@$00@std@@QBAAB_JXZ");
//};

//public: std::_Bidit<__int64, int, __int64const *, __int64const &>::_Bidit<__int64, int, __int64const *, __int64const &>(void)
//{
//    mangled_ppc("??0?$_Bidit@_JHPB_JAB_J@std@@QAA@XZ");
//};

//public: std::_Bidit<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor>, int, struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> const *, struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> const &>::_Bidit<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor>, int, struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> const *, struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> const &>(void)
//{
//    mangled_ppc("??0?$_Bidit@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@HPBU12@ABU12@@std@@QAA@XZ");
//};

//public: std::_Ranit<__int64, int, __int64const *, __int64const &>::_Ranit<__int64, int, __int64const *, __int64const &>(void)
//{
//    mangled_ppc("??0?$_Ranit@_JHPB_JAB_J@std@@QAA@XZ");
//};

//public: std::_Iterator_with_base<struct std::bidirectional_iterator_tag, __int64, int, __int64const *, __int64const &, class std::_Iterator_base>::_Iterator_with_base<struct std::bidirectional_iterator_tag, __int64, int, __int64const *, __int64const &, class std::_Iterator_base>(void)
//{
//    mangled_ppc("??0?$_Iterator_with_base@Ubidirectional_iterator_tag@std@@_JHPB_JAB_JV_Iterator_base@2@@std@@QAA@XZ");
//};

//public: std::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor>, int, struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> const *, struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> const &, class std::_Iterator_base>::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor>, int, struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> const *, struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> const &, class std::_Iterator_base>(void)
//{
//    mangled_ppc("??0?$_Iterator_with_base@Ubidirectional_iterator_tag@std@@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@2@HPBU32@ABU32@V_Iterator_base@2@@std@@QAA@XZ");
//};

//public: std::_Iterator_with_base<struct std::random_access_iterator_tag, __int64, int, __int64const *, __int64const &, class std::_Iterator_base>::_Iterator_with_base<struct std::random_access_iterator_tag, __int64, int, __int64const *, __int64const &, class std::_Iterator_base>(void)
//{
//    mangled_ppc("??0?$_Iterator_with_base@Urandom_access_iterator_tag@std@@_JHPB_JAB_JV_Iterator_base@2@@std@@QAA@XZ");
//};

//public: void std::allocator<__int64>::destroy(__int64*)
//{
//    mangled_ppc("?destroy@?$allocator@_J@std@@QAAXPA_J@Z");
//};

//public: unsigned int std::allocator<__int64>::max_size(void) const
//{
//    mangled_ppc("?max_size@?$allocator@_J@std@@QBAIXZ");
//};

//public: void std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::clear(void)
//{
//    mangled_ppc("?clear@?$_Tree@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@std@@QAAXXZ");
//};

//protected: struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node * std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Buynode(void)
//{
//    mangled_ppc("?_Buynode@?$_Tree@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@std@@IAAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@2@XZ");
//};

//public: std::_Tree_ptr<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Tree_ptr<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >(struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> > const &, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >)
//{
//    mangled_ppc("??0?$_Tree_ptr@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@std@@QAA@ABU?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@1@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@1@@Z");
//};

//public: unsigned int std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >::max_size(void) const
//{
//    mangled_ppc("?max_size@?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@std@@QBAIXZ");
//};

//public: struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node * std::allocator<struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node>::allocate(unsigned int)
//{
//    mangled_ppc("?allocate@?$allocator@U_Node@?$_Tree_nod@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@std@@@std@@QAAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@2@I@Z");
//};

//public: class std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::iterator std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Make_iter(class std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::const_iterator) const
//{
//    mangled_ppc("?_Make_iter@?$_Tree@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@std@@QBA?AViterator@12@Vconst_iterator@12@@Z");
//};

//public: class std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::iterator std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::erase(class std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::const_iterator)
//{
//    mangled_ppc("?erase@?$_Tree@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@std@@QAA?AViterator@12@Vconst_iterator@12@@Z");
//};

//public: void std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::clear(void)
//{
//    mangled_ppc("?clear@?$_Tree@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@std@@QAAXXZ");
//};

//protected: struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node * std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Buynode(void)
//{
//    mangled_ppc("?_Buynode@?$_Tree@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@std@@IAAPAU_Node@?$_Tree_nod@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@2@XZ");
//};

//public: std::_Tree_ptr<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Tree_ptr<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >(struct std::less<__int64> const &, class std::allocator<__int64>)
//{
//    mangled_ppc("??0?$_Tree_ptr@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@std@@QAA@ABU?$less@_J@1@V?$allocator@_J@1@@Z");
//};

//protected: std::_Container_base_aux_alloc_empty<class std::allocator<__int64> >::_Container_base_aux_alloc_empty<class std::allocator<__int64> >(class std::allocator<__int64>)
//{
//    mangled_ppc("??0?$_Container_base_aux_alloc_empty@V?$allocator@_J@std@@@std@@IAA@V?$allocator@_J@1@@Z");
//};

//public: struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node * std::allocator<struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node>::allocate(unsigned int)
//{
//    mangled_ppc("?allocate@?$allocator@U_Node@?$_Tree_nod@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@std@@@std@@QAAPAU_Node@?$_Tree_nod@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@2@I@Z");
//};

//protected: void std::deque<__int64, class std::allocator<__int64> >::_Orphan_off(unsigned int) const
//{
//    mangled_ppc("?_Orphan_off@?$deque@_JV?$allocator@_J@std@@@std@@IBAXI@Z");
//};

//public: class std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::iterator std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Make_iter(class std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::const_iterator) const
//{
//    mangled_ppc("?_Make_iter@?$_Tree@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@std@@QBA?AViterator@12@Vconst_iterator@12@@Z");
//};

//public: class std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::iterator std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::erase(class std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::const_iterator)
//{
//    mangled_ppc("?erase@?$_Tree@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@std@@QAA?AViterator@12@Vconst_iterator@12@@Z");
//};

//public: void std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::clear(void)
//{
//    mangled_ppc("?clear@?$_Tree@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@std@@QAAXXZ");
//};

//protected: struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node * std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Buynode(void)
//{
//    mangled_ppc("?_Buynode@?$_Tree@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@std@@IAAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@2@XZ");
//};

//public: std::_Tree_ptr<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Tree_ptr<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >(struct std::less<class c_tag_field_editor *> const &, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >)
//{
//    mangled_ppc("??0?$_Tree_ptr@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@std@@QAA@ABU?$less@PAVc_tag_field_editor@@@1@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@1@@Z");
//};

//public: unsigned int std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >::max_size(void) const
//{
//    mangled_ppc("?max_size@?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@std@@QBAIXZ");
//};

//public: struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node * std::allocator<struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node>::allocate(unsigned int)
//{
//    mangled_ppc("?allocate@?$allocator@U_Node@?$_Tree_nod@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@std@@@std@@QAAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@2@I@Z");
//};

//public: class std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::const_iterator std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::const_iterator::operator++(int)
//{
//    mangled_ppc("??Econst_iterator@?$_Tree@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@std@@QAA?AV012@H@Z");
//};

//public: bool std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::const_iterator::operator!=(class std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::const_iterator const &) const
//{
//    mangled_ppc("??9const_iterator@?$_Tree@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@std@@QBA_NABV012@@Z");
//};

//public: void std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::const_iterator::_Dec(void)
//{
//    mangled_ppc("?_Dec@const_iterator@?$_Tree@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@std@@QAAXXZ");
//};

//public: class std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::const_iterator std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::const_iterator::operator++(int)
//{
//    mangled_ppc("??Econst_iterator@?$_Tree@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@std@@QAA?AV012@H@Z");
//};

//public: void std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::const_iterator::_Dec(void)
//{
//    mangled_ppc("?_Dec@const_iterator@?$_Tree@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@std@@QAAXXZ");
//};

//public: class std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::const_iterator std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::const_iterator::operator++(int)
//{
//    mangled_ppc("??Econst_iterator@?$_Tree@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@std@@QAA?AV012@H@Z");
//};

//public: bool std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::const_iterator::operator!=(class std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::const_iterator const &) const
//{
//    mangled_ppc("??9const_iterator@?$_Tree@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@std@@QBA_NABV012@@Z");
//};

//public: void std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::const_iterator::_Dec(void)
//{
//    mangled_ppc("?_Dec@const_iterator@?$_Tree@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@std@@QAAXXZ");
//};

//public: std::_Deque_const_iterator<__int64, class std::allocator<__int64>, 1>::_Deque_const_iterator<__int64, class std::allocator<__int64>, 1>(unsigned int, class std::_Container_base_secure const *)
//{
//    mangled_ppc("??0?$_Deque_const_iterator@_JV?$allocator@_J@std@@$00@std@@QAA@IPBV_Container_base_secure@1@@Z");
//};

//public: class std::_Deque_const_iterator<__int64, class std::allocator<__int64>, 1> & std::_Deque_const_iterator<__int64, class std::allocator<__int64>, 1>::operator+=(int)
//{
//    mangled_ppc("??Y?$_Deque_const_iterator@_JV?$allocator@_J@std@@$00@std@@QAAAAV01@H@Z");
//};

//public: std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node::_Node(struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node *, struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node *, struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node *, struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > const &, char)
//{
//    mangled_ppc("??0_Node@?$_Tree_nod@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@std@@QAA@PAU012@00ABU?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@2@D@Z");
//};

//public: std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node::_Node(struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node *, struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node *, struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node *, __int64const &, char)
//{
//    mangled_ppc("??0_Node@?$_Tree_nod@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@std@@QAA@PAU012@00AB_JD@Z");
//};

//public: std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node::_Node(struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node *, struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node *, struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node *, struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> const &, char)
//{
//    mangled_ppc("??0_Node@?$_Tree_nod@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@std@@QAA@PAU012@00ABU?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@2@D@Z");
//};

//public: std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> >::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> >(struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > const &)
//{
//    mangled_ppc("??0?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@QAA@ABU01@@Z");
//};

//public: std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor>::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor>(struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> const &)
//{
//    mangled_ppc("??0?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@QAA@ABU01@@Z");
//};

//public: c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor::c_monolithic_tag_reference_editor(class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor const &)
//{
//    mangled_ppc("??0c_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@QAA@ABV01@@Z");
//};

//public: c_tag_field_editor::c_tag_field_editor(class c_tag_field_editor const &)
//{
//    mangled_ppc("??0c_tag_field_editor@@QAA@ABV0@@Z");
//};

//protected: void std::_Tree<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Erase(struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node *)
//{
//    mangled_ppc("?_Erase@?$_Tree@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@std@@IAAXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@2@@Z");
//};

//protected: std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >(struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> > const &, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >)
//{
//    mangled_ppc("??0?$_Tree_nod@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@std@@IAA@ABU?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@1@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@1@@Z");
//};

//public: void std::allocator<struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node *>::construct(struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node **, struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node *const &)
//{
//    mangled_ppc("?construct@?$allocator@PAU_Node@?$_Tree_nod@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@std@@@std@@QAAXPAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@2@ABQAU342@@Z");
//};

//protected: void std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Erase(struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node *)
//{
//    mangled_ppc("?_Erase@?$_Tree@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@std@@IAAXPAU_Node@?$_Tree_nod@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@2@@Z");
//};

//protected: static struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node * std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Max(struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node *)
//{
//    mangled_ppc("?_Max@?$_Tree@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@std@@KAPAU_Node@?$_Tree_nod@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@2@PAU342@@Z");
//};

//protected: static struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node * std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Min(struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node *)
//{
//    mangled_ppc("?_Min@?$_Tree@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@std@@KAPAU_Node@?$_Tree_nod@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@2@PAU342@@Z");
//};

//protected: void std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Orphan_ptr(class std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> > &, struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node *) const
//{
//    mangled_ppc("?_Orphan_ptr@?$_Tree@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@std@@IBAXAAV12@PAU_Node@?$_Tree_nod@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@2@@Z");
//};

//protected: std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >(struct std::less<__int64> const &, class std::allocator<__int64>)
//{
//    mangled_ppc("??0?$_Tree_nod@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@std@@IAA@ABU?$less@_J@1@V?$allocator@_J@1@@Z");
//};

//public: void std::allocator<struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node>::destroy(struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node *)
//{
//    mangled_ppc("?destroy@?$allocator@U_Node@?$_Tree_nod@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@std@@@std@@QAAXPAU_Node@?$_Tree_nod@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@2@@Z");
//};

//public: void std::allocator<struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node *>::construct(struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node **, struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node *const &)
//{
//    mangled_ppc("?construct@?$allocator@PAU_Node@?$_Tree_nod@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@std@@@std@@QAAXPAPAU_Node@?$_Tree_nod@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@2@ABQAU342@@Z");
//};

//protected: void std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Erase(struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node *)
//{
//    mangled_ppc("?_Erase@?$_Tree@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@std@@IAAXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@2@@Z");
//};

//protected: static struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node * std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Max(struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node *)
//{
//    mangled_ppc("?_Max@?$_Tree@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@std@@KAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@2@PAU342@@Z");
//};

//protected: static struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node * std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Min(struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node *)
//{
//    mangled_ppc("?_Min@?$_Tree@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@std@@KAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@2@PAU342@@Z");
//};

//protected: void std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Orphan_ptr(class std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> > &, struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node *) const
//{
//    mangled_ppc("?_Orphan_ptr@?$_Tree@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@std@@IBAXAAV12@PAU_Node@?$_Tree_nod@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@2@@Z");
//};

//protected: std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >(struct std::less<class c_tag_field_editor *> const &, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >)
//{
//    mangled_ppc("??0?$_Tree_nod@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@std@@IAA@ABU?$less@PAVc_tag_field_editor@@@1@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@1@@Z");
//};

//public: void std::allocator<struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node>::destroy(struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node *)
//{
//    mangled_ppc("?destroy@?$allocator@U_Node@?$_Tree_nod@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@std@@@std@@QAAXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@2@@Z");
//};

//public: void std::allocator<struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node *>::construct(struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node **, struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node *const &)
//{
//    mangled_ppc("?construct@?$allocator@PAU_Node@?$_Tree_nod@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@std@@@std@@QAAXPAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@2@ABQAU342@@Z");
//};

//public: class std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::const_iterator & std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::const_iterator::operator++(void)
//{
//    mangled_ppc("??Econst_iterator@?$_Tree@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@std@@QAAAAV012@XZ");
//};

//public: c_copyable_array_template<unsigned char>::c_copyable_array_template<unsigned char>(class c_copyable_array_template<unsigned char> const &)
//{
//    mangled_ppc("??0?$c_copyable_array_template@E@@QAA@ABV0@@Z");
//};

//public: class std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::const_iterator & std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::const_iterator::operator++(void)
//{
//    mangled_ppc("??Econst_iterator@?$_Tree@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@std@@QAAAAV012@XZ");
//};

//public: std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0>::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0>(struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >)
//{
//    mangled_ppc("??0?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@QAA@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@1@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@1@@Z");
//};

//public: std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0>::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0>(struct std::less<__int64>, class std::allocator<__int64>)
//{
//    mangled_ppc("??0?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@QAA@U?$less@_J@1@V?$allocator@_J@1@@Z");
//};

//public: std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0>::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0>(struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >)
//{
//    mangled_ppc("??0?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@QAA@U?$less@PAVc_tag_field_editor@@@1@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@1@@Z");
//};

//public: void std::_Tree<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::const_iterator::_Inc(void)
//{
//    mangled_ppc("?_Inc@const_iterator@?$_Tree@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@std@@QAAXXZ");
//};

//public: void std::_Tree<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::const_iterator::_Inc(void)
//{
//    mangled_ppc("?_Inc@const_iterator@?$_Tree@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@std@@QAAXXZ");
//};

//protected: std::_Container_base_aux_alloc_empty<class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > > >::_Container_base_aux_alloc_empty<class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > > >(class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >)
//{
//    mangled_ppc("??0?$_Container_base_aux_alloc_empty@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@std@@@std@@IAA@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@1@@Z");
//};

//protected: std::_Container_base_aux_alloc_empty<class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> > >::_Container_base_aux_alloc_empty<class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> > >(class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >)
//{
//    mangled_ppc("??0?$_Container_base_aux_alloc_empty@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@std@@@std@@IAA@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@1@@Z");
//};

//public: bool c_persist_stream::write_typed<struct s_system_global_unique_identifier>(struct s_system_global_unique_identifier *, long)
//{
//    mangled_ppc("??$write_typed@Us_system_global_unique_identifier@@@c_persist_stream@@QAA_NPAUs_system_global_unique_identifier@@J@Z");
//};

//public: bool c_persist_stream::read_typed<struct s_system_global_unique_identifier>(struct s_system_global_unique_identifier *, long)
//{
//    mangled_ppc("??$read_typed@Us_system_global_unique_identifier@@@c_persist_stream@@QAA_NPAUs_system_global_unique_identifier@@J@Z");
//};

//public: static struct s_persist_archiver_holder s_persist_archiver_holder::make<class c_free_chunk_section_archiver<class c_monolithic_tag_file_index> >(class c_free_chunk_section_archiver<class c_monolithic_tag_file_index>)
//{
//    mangled_ppc("??$make@V?$c_free_chunk_section_archiver@Vc_monolithic_tag_file_index@@@@@s_persist_archiver_holder@@SA?AU0@V?$c_free_chunk_section_archiver@Vc_monolithic_tag_file_index@@@@@Z");
//};

//public: static struct s_persist_archiver_holder s_persist_archiver_holder::make<class c_free_chunk_section_archiver<class c_tag_dependency_index_loader> >(class c_free_chunk_section_archiver<class c_tag_dependency_index_loader>)
//{
//    mangled_ppc("??$make@V?$c_free_chunk_section_archiver@Vc_tag_dependency_index_loader@@@@@s_persist_archiver_holder@@SA?AU0@V?$c_free_chunk_section_archiver@Vc_tag_dependency_index_loader@@@@@Z");
//};

//public: static struct s_persist_archiver_holder s_persist_archiver_holder::make<class c_try_free_chunk_section_archiver<class c_monolithic_tag_file_archiver> >(class c_try_free_chunk_section_archiver<class c_monolithic_tag_file_archiver>)
//{
//    mangled_ppc("??$make@V?$c_try_free_chunk_section_archiver@Vc_monolithic_tag_file_archiver@@@@@s_persist_archiver_holder@@SA?AU0@V?$c_try_free_chunk_section_archiver@Vc_monolithic_tag_file_archiver@@@@@Z");
//};

//public: static struct s_persist_archiver_holder s_persist_archiver_holder::make<class c_chunk_with_sections_archiver>(class c_chunk_with_sections_archiver)
//{
//    mangled_ppc("??$make@Vc_chunk_with_sections_archiver@@@s_persist_archiver_holder@@SA?AU0@Vc_chunk_with_sections_archiver@@@Z");
//};

//class c_simple_chunk_with_context_section_archiver<class c_tag_file_persistent_heap, enum e_monolithic_tag_file_index_usage> make_section_with_context_archiver<class c_tag_file_persistent_heap, enum e_monolithic_tag_file_index_usage>(char const *, unsigned long, long, enum e_monolithic_tag_file_index_usage, bool (c_tag_file_persistent_heap::*)(enum e_monolithic_tag_file_index_usage, class c_persist_stream *), bool (c_tag_file_persistent_heap::*)(enum e_monolithic_tag_file_index_usage, class c_persist_stream *))
//{
//    mangled_ppc("??$make_section_with_context_archiver@Vc_tag_file_persistent_heap@@W4e_monolithic_tag_file_index_usage@@@@YA?AV?$c_simple_chunk_with_context_section_archiver@Vc_tag_file_persistent_heap@@W4e_monolithic_tag_file_index_usage@@@@PBDKJW4e_monolithic_tag_file_index_usage@@P8c_tag_file_persistent_heap@@AA_N1PAVc_persist_stream@@@Z3@Z");
//};

//public: static struct s_persist_archiver_holder s_persist_archiver_holder::make<class c_simple_chunk_with_context_section_archiver<class c_tag_file_persistent_heap, enum e_monolithic_tag_file_index_usage> >(class c_simple_chunk_with_context_section_archiver<class c_tag_file_persistent_heap, enum e_monolithic_tag_file_index_usage>)
//{
//    mangled_ppc("??$make@V?$c_simple_chunk_with_context_section_archiver@Vc_tag_file_persistent_heap@@W4e_monolithic_tag_file_index_usage@@@@@s_persist_archiver_holder@@SA?AU0@V?$c_simple_chunk_with_context_section_archiver@Vc_tag_file_persistent_heap@@W4e_monolithic_tag_file_index_usage@@@@@Z");
//};

//class c_handler_chunk_section_archiver<class c_tag_file_heap_partition_config, class c_tag_file_heap_partition_config> create_handler_chunk_archiver<class c_tag_file_heap_partition_config, class c_tag_file_heap_partition_config>(char const *, unsigned long, long, class c_tag_file_heap_partition_config *, class c_tag_file_heap_partition_config *)
//{
//    mangled_ppc("??$create_handler_chunk_archiver@Vc_tag_file_heap_partition_config@@V1@@@YA?AV?$c_handler_chunk_section_archiver@Vc_tag_file_heap_partition_config@@V1@@@PBDKJPAVc_tag_file_heap_partition_config@@1@Z");
//};

//public: static struct s_persist_archiver_holder s_persist_archiver_holder::make<class c_handler_chunk_section_archiver<class c_tag_file_heap_partition_config, class c_tag_file_heap_partition_config> >(class c_handler_chunk_section_archiver<class c_tag_file_heap_partition_config, class c_tag_file_heap_partition_config>)
//{
//    mangled_ppc("??$make@V?$c_handler_chunk_section_archiver@Vc_tag_file_heap_partition_config@@V1@@@@s_persist_archiver_holder@@SA?AU0@V?$c_handler_chunk_section_archiver@Vc_tag_file_heap_partition_config@@V1@@@@Z");
//};

//public: c_typed_pointer_holder::ctor<class c_tag_file_persistent_heap>(class c_tag_file_persistent_heap *)
//{
//    mangled_ppc("??$?0Vc_tag_file_persistent_heap@@@c_typed_pointer_holder@@QAA@PAVc_tag_file_persistent_heap@@@Z");
//};

//struct std::pair<struct s_tag_block_definition const *, bool> std::make_pair<struct s_tag_block_definition const *, bool>(struct s_tag_block_definition const *, bool)
//{
//    mangled_ppc("??$make_pair@PBUs_tag_block_definition@@_N@std@@YA?AU?$pair@PBUs_tag_block_definition@@_N@0@PBUs_tag_block_definition@@_N@Z");
//};

//struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char> > std::make_pair<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char> >(struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>)
//{
//    mangled_ppc("??$make_pair@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@YA?AU?$pair@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@0@U?$pair@PBUs_tag_block_definition@@_N@0@V?$c_copyable_array_template@E@@@Z");
//};

//public: std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> >::ctor<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char> >(struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char> > const &)
//{
//    mangled_ppc("??$?0U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@QAA@ABU?$pair@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@1@@Z");
//};

//struct std::pair<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> std::make_pair<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor>(class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor)
//{
//    mangled_ppc("??$make_pair@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@YA?AU?$pair@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@0@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@Z");
//};

//public: std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor>::ctor<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor>(struct std::pair<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> const &)
//{
//    mangled_ppc("??$?0PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@QAA@ABU?$pair@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@1@@Z");
//};

//bool std::_Debug_lt_pred<struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, struct std::pair<struct s_tag_block_definition const *, bool>, struct std::pair<struct s_tag_block_definition const *, bool> >(struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, struct std::pair<struct s_tag_block_definition const *, bool> const &, struct std::pair<struct s_tag_block_definition const *, bool> const &, wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_lt_pred@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@std@@U?$pair@PBUs_tag_block_definition@@_N@2@U32@@std@@YA_NU?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@0@ABU?$pair@PBUs_tag_block_definition@@_N@0@1PB_WI@Z");
//};

//bool std::_Debug_lt_pred<struct std::less<__int64>, __int64, __int64>(struct std::less<__int64>, __int64const &, __int64const &, wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_lt_pred@U?$less@_J@std@@_J_J@std@@YA_NU?$less@_J@0@AB_J1PB_WI@Z");
//};

//bool std::_Debug_lt_pred<struct std::less<class c_tag_field_editor *>, class c_tag_field_editor *, class c_tag_field_editor *>(struct std::less<class c_tag_field_editor *>, class c_tag_field_editor *const &, class c_tag_field_editor *const &, wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_lt_pred@U?$less@PAVc_tag_field_editor@@@std@@PAVc_tag_field_editor@@PAV3@@std@@YA_NU?$less@PAVc_tag_field_editor@@@0@ABQAVc_tag_field_editor@@1PB_WI@Z");
//};

//__int64* std::_Allocate<__int64>(unsigned int, __int64*)
//{
//    mangled_ppc("??$_Allocate@_J@std@@YAPA_JIPA_J@Z");
//};

//void std::_Construct<__int64, __int64>(__int64*, __int64const &)
//{
//    mangled_ppc("??$_Construct@_J_J@std@@YAXPA_JAB_J@Z");
//};

//void std::_Destroy<struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node>(struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node *)
//{
//    mangled_ppc("??$_Destroy@U_Node@?$_Tree_nod@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@std@@@std@@YAXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@0@@Z");
//};

//__int64** stdext::unchecked_uninitialized_copy<__int64**, __int64**, class std::allocator<__int64*> >(__int64**, __int64**, __int64**, class std::allocator<__int64*> &)
//{
//    mangled_ppc("??$unchecked_uninitialized_copy@PAPA_JPAPA_JV?$allocator@PA_J@std@@@stdext@@YAPAPA_JPAPA_J00AAV?$allocator@PA_J@std@@@Z");
//};

//void stdext::unchecked_uninitialized_fill_n<__int64**, unsigned int, __int64*, class std::allocator<__int64*> >(__int64**, unsigned int, __int64*const &, class std::allocator<__int64*> &)
//{
//    mangled_ppc("??$unchecked_uninitialized_fill_n@PAPA_JIPA_JV?$allocator@PA_J@std@@@stdext@@YAXPAPA_JIABQA_JAAV?$allocator@PA_J@std@@@Z");
//};

//void std::_Destroy_range<class std::allocator<__int64*> >(__int64**, __int64**, class std::allocator<__int64*> &)
//{
//    mangled_ppc("??$_Destroy_range@V?$allocator@PA_J@std@@@std@@YAXPAPA_J0AAV?$allocator@PA_J@0@@Z");
//};

//void std::_Destroy<struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node *>(struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node **)
//{
//    mangled_ppc("??$_Destroy@PAU_Node@?$_Tree_nod@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@std@@@std@@YAXPAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@0@@Z");
//};

//void std::_Destroy<struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node *>(struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node **)
//{
//    mangled_ppc("??$_Destroy@PAU_Node@?$_Tree_nod@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@std@@@std@@YAXPAPAU_Node@?$_Tree_nod@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@0@@Z");
//};

//public: std::allocator<__int64*>::ctor<__int64>(class std::allocator<__int64> const &)
//{
//    mangled_ppc("??$?0_J@?$allocator@PA_J@std@@QAA@ABV?$allocator@_J@1@@Z");
//};

//__int64** std::_Allocate<__int64*>(unsigned int, __int64**)
//{
//    mangled_ppc("??$_Allocate@PA_J@std@@YAPAPA_JIPAPA_J@Z");
//};

//void std::_Destroy<__int64*>(__int64**)
//{
//    mangled_ppc("??$_Destroy@PA_J@std@@YAXPAPA_J@Z");
//};

//void std::_Destroy<struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node *>(struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node **)
//{
//    mangled_ppc("??$_Destroy@PAU_Node@?$_Tree_nod@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@std@@@std@@YAXPAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@0@@Z");
//};

//void std::_Destroy<__int64>(__int64*)
//{
//    mangled_ppc("??$_Destroy@_J@std@@YAXPA_J@Z");
//};

//public: std::allocator<struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node *>::ctor<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >(class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > > const &)
//{
//    mangled_ppc("??$?0U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@?$allocator@PAU_Node@?$_Tree_nod@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@std@@@std@@QAA@ABV?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@1@@Z");
//};

//struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node * std::_Allocate<struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node>(unsigned int, struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node *)
//{
//    mangled_ppc("??$_Allocate@U_Node@?$_Tree_nod@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@std@@@std@@YAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@0@IPAU120@@Z");
//};

//public: std::allocator<struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node *>::ctor<__int64>(class std::allocator<__int64> const &)
//{
//    mangled_ppc("??$?0_J@?$allocator@PAU_Node@?$_Tree_nod@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@std@@@std@@QAA@ABV?$allocator@_J@1@@Z");
//};

//struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node * std::_Allocate<struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node>(unsigned int, struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node *)
//{
//    mangled_ppc("??$_Allocate@U_Node@?$_Tree_nod@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@std@@@std@@YAPAU_Node@?$_Tree_nod@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@0@IPAU120@@Z");
//};

//public: std::allocator<struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node *>::ctor<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >(class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> > const &)
//{
//    mangled_ppc("??$?0U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@?$allocator@PAU_Node@?$_Tree_nod@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@std@@@std@@QAA@ABV?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@1@@Z");
//};

//struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node * std::_Allocate<struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node>(unsigned int, struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node *)
//{
//    mangled_ppc("??$_Allocate@U_Node@?$_Tree_nod@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@std@@@std@@YAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@0@IPAU120@@Z");
//};

//public: std::allocator<struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node>::ctor<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >(class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > > const &)
//{
//    mangled_ppc("??$?0U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@?$allocator@U_Node@?$_Tree_nod@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@std@@@std@@QAA@ABV?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@1@@Z");
//};

//void std::_Construct<struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node *, struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node *>(struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node **, struct std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node *const &)
//{
//    mangled_ppc("??$_Construct@PAU_Node@?$_Tree_nod@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@std@@PAU123@@std@@YAXPAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@0@ABQAU120@@Z");
//};

//public: std::allocator<struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node>::ctor<__int64>(class std::allocator<__int64> const &)
//{
//    mangled_ppc("??$?0_J@?$allocator@U_Node@?$_Tree_nod@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@std@@@std@@QAA@ABV?$allocator@_J@1@@Z");
//};

//void std::_Destroy<struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node>(struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node *)
//{
//    mangled_ppc("??$_Destroy@U_Node@?$_Tree_nod@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@std@@@std@@YAXPAU_Node@?$_Tree_nod@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@0@@Z");
//};

//void std::_Construct<struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node *, struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node *>(struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node **, struct std::_Tree_nod<class std::_Tset_traits<__int64, struct std::less<__int64>, class std::allocator<__int64>, 0> >::_Node *const &)
//{
//    mangled_ppc("??$_Construct@PAU_Node@?$_Tree_nod@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@std@@PAU123@@std@@YAXPAPAU_Node@?$_Tree_nod@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@0@ABQAU120@@Z");
//};

//public: std::allocator<struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node>::ctor<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >(class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> > const &)
//{
//    mangled_ppc("??$?0U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@?$allocator@U_Node@?$_Tree_nod@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@std@@@std@@QAA@ABV?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@1@@Z");
//};

//void std::_Destroy<struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node>(struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node *)
//{
//    mangled_ppc("??$_Destroy@U_Node@?$_Tree_nod@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@std@@@std@@YAXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@0@@Z");
//};

//void std::_Construct<struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node *, struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node *>(struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node **, struct std::_Tree_nod<class std::_Tmap_traits<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor, struct std::less<class c_tag_field_editor *>, class std::allocator<struct std::pair<class c_tag_field_editor *const, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor> >, 0> >::_Node *const &)
//{
//    mangled_ppc("??$_Construct@PAU_Node@?$_Tree_nod@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@std@@PAU123@@std@@YAXPAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@U?$less@PAVc_tag_field_editor@@@std@@V?$allocator@U?$pair@QAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@@5@$0A@@std@@@0@ABQAU120@@Z");
//};

//public: void * std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_G_Node@?$_Tree_nod@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@std@@QAAPAXI@Z");
//};

//public: std::_Tree_nod<class std::_Tmap_traits<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char>, struct std::less<struct std::pair<struct s_tag_block_definition const *, bool> >, class std::allocator<struct std::pair<struct std::pair<struct s_tag_block_definition const *, bool> const, class c_copyable_array_template<unsigned char> > >, 0> >::_Node::~_Node(void)
//{
//    mangled_ppc("??1_Node@?$_Tree_nod@V?$_Tmap_traits@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@U?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@@2@$0A@@std@@@std@@QAA@XZ");
//};

//public: bool std::less<__int64>::operator()(__int64const &, __int64const &) const
//{
//    mangled_ppc("??R?$less@_J@std@@QBA_NAB_J0@Z");
//};

//public: bool std::less<struct std::pair<struct s_tag_block_definition const *, bool> >::operator()(struct std::pair<struct s_tag_block_definition const *, bool> const &, struct std::pair<struct s_tag_block_definition const *, bool> const &) const
//{
//    mangled_ppc("??R?$less@U?$pair@PBUs_tag_block_definition@@_N@std@@@std@@QBA_NABU?$pair@PBUs_tag_block_definition@@_N@1@0@Z");
//};

//public: bool std::less<class c_tag_field_editor *>::operator()(class c_tag_field_editor *const &, class c_tag_field_editor *const &) const
//{
//    mangled_ppc("??R?$less@PAVc_tag_field_editor@@@std@@QBA_NABQAVc_tag_field_editor@@0@Z");
//};

//public: c_simple_chunk_with_context_section_archiver<class c_tag_file_persistent_heap, enum e_monolithic_tag_file_index_usage>::c_simple_chunk_with_context_section_archiver<class c_tag_file_persistent_heap, enum e_monolithic_tag_file_index_usage>(char const *, unsigned long, long, enum e_monolithic_tag_file_index_usage, bool (c_tag_file_persistent_heap::*)(enum e_monolithic_tag_file_index_usage, class c_persist_stream *), bool (c_tag_file_persistent_heap::*)(enum e_monolithic_tag_file_index_usage, class c_persist_stream *))
//{
//    mangled_ppc("??0?$c_simple_chunk_with_context_section_archiver@Vc_tag_file_persistent_heap@@W4e_monolithic_tag_file_index_usage@@@@QAA@PBDKJW4e_monolithic_tag_file_index_usage@@P8c_tag_file_persistent_heap@@AA_N1PAVc_persist_stream@@@Z3@Z");
//};

//public: virtual char const * c_simple_chunk_with_context_section_archiver<class c_tag_file_persistent_heap, enum e_monolithic_tag_file_index_usage>::get_description(void) const
//{
//    mangled_ppc("?get_description@?$c_simple_chunk_with_context_section_archiver@Vc_tag_file_persistent_heap@@W4e_monolithic_tag_file_index_usage@@@@UBAPBDXZ");
//};

//public: virtual unsigned long c_simple_chunk_with_context_section_archiver<class c_tag_file_persistent_heap, enum e_monolithic_tag_file_index_usage>::get_chunk_tag(void) const
//{
//    mangled_ppc("?get_chunk_tag@?$c_simple_chunk_with_context_section_archiver@Vc_tag_file_persistent_heap@@W4e_monolithic_tag_file_index_usage@@@@UBAKXZ");
//};

//public: virtual long c_simple_chunk_with_context_section_archiver<class c_tag_file_persistent_heap, enum e_monolithic_tag_file_index_usage>::get_chunk_version(void) const
//{
//    mangled_ppc("?get_chunk_version@?$c_simple_chunk_with_context_section_archiver@Vc_tag_file_persistent_heap@@W4e_monolithic_tag_file_index_usage@@@@UBAJXZ");
//};

//public: virtual bool c_simple_chunk_with_context_section_archiver<class c_tag_file_persistent_heap, enum e_monolithic_tag_file_index_usage>::can_handle_chunk(unsigned long, long) const
//{
//    mangled_ppc("?can_handle_chunk@?$c_simple_chunk_with_context_section_archiver@Vc_tag_file_persistent_heap@@W4e_monolithic_tag_file_index_usage@@@@UBA_NKJ@Z");
//};

//public: virtual bool c_simple_chunk_with_context_section_archiver<class c_tag_file_persistent_heap, enum e_monolithic_tag_file_index_usage>::persist(class c_typed_pointer_holder &, class c_persist_stream *) const
//{
//    mangled_ppc("?persist@?$c_simple_chunk_with_context_section_archiver@Vc_tag_file_persistent_heap@@W4e_monolithic_tag_file_index_usage@@@@UBA_NAAVc_typed_pointer_holder@@PAVc_persist_stream@@@Z");
//};

//public: virtual bool c_simple_chunk_with_context_section_archiver<class c_tag_file_persistent_heap, enum e_monolithic_tag_file_index_usage>::restore(struct s_persist_chunk_header const *, class c_typed_pointer_holder &, class c_persist_stream *) const
//{
//    mangled_ppc("?restore@?$c_simple_chunk_with_context_section_archiver@Vc_tag_file_persistent_heap@@W4e_monolithic_tag_file_index_usage@@@@UBA_NPBUs_persist_chunk_header@@AAVc_typed_pointer_holder@@PAVc_persist_stream@@@Z");
//};

//public: class c_tag_file_persistent_heap * c_typed_pointer_holder::operatorcast<class c_tag_file_persistent_heap>(void)
//{
//    mangled_ppc("??$?BVc_tag_file_persistent_heap@@@c_typed_pointer_holder@@QAAPAVc_tag_file_persistent_heap@@XZ");
//};

//public: c_handler_chunk_section_archiver<class c_tag_file_heap_partition_config, class c_tag_file_heap_partition_config>::c_handler_chunk_section_archiver<class c_tag_file_heap_partition_config, class c_tag_file_heap_partition_config>(char const *, unsigned long, long, class c_tag_file_heap_partition_config *, class c_tag_file_heap_partition_config *)
//{
//    mangled_ppc("??0?$c_handler_chunk_section_archiver@Vc_tag_file_heap_partition_config@@V1@@@QAA@PBDKJPAVc_tag_file_heap_partition_config@@1@Z");
//};

//public: virtual char const * c_handler_chunk_section_archiver<class c_tag_file_heap_partition_config, class c_tag_file_heap_partition_config>::get_description(void) const
//{
//    mangled_ppc("?get_description@?$c_handler_chunk_section_archiver@Vc_tag_file_heap_partition_config@@V1@@@UBAPBDXZ");
//};

//public: virtual unsigned long c_handler_chunk_section_archiver<class c_tag_file_heap_partition_config, class c_tag_file_heap_partition_config>::get_chunk_tag(void) const
//{
//    mangled_ppc("?get_chunk_tag@?$c_handler_chunk_section_archiver@Vc_tag_file_heap_partition_config@@V1@@@UBAKXZ");
//};

//public: virtual long c_handler_chunk_section_archiver<class c_tag_file_heap_partition_config, class c_tag_file_heap_partition_config>::get_chunk_version(void) const
//{
//    mangled_ppc("?get_chunk_version@?$c_handler_chunk_section_archiver@Vc_tag_file_heap_partition_config@@V1@@@UBAJXZ");
//};

//public: virtual bool c_handler_chunk_section_archiver<class c_tag_file_heap_partition_config, class c_tag_file_heap_partition_config>::can_handle_chunk(unsigned long, long) const
//{
//    mangled_ppc("?can_handle_chunk@?$c_handler_chunk_section_archiver@Vc_tag_file_heap_partition_config@@V1@@@UBA_NKJ@Z");
//};

//public: virtual bool c_handler_chunk_section_archiver<class c_tag_file_heap_partition_config, class c_tag_file_heap_partition_config>::persist(class c_typed_pointer_holder &, class c_persist_stream *) const
//{
//    mangled_ppc("?persist@?$c_handler_chunk_section_archiver@Vc_tag_file_heap_partition_config@@V1@@@UBA_NAAVc_typed_pointer_holder@@PAVc_persist_stream@@@Z");
//};

//public: virtual bool c_handler_chunk_section_archiver<class c_tag_file_heap_partition_config, class c_tag_file_heap_partition_config>::restore(struct s_persist_chunk_header const *, class c_typed_pointer_holder &, class c_persist_stream *) const
//{
//    mangled_ppc("?restore@?$c_handler_chunk_section_archiver@Vc_tag_file_heap_partition_config@@V1@@@UBA_NPBUs_persist_chunk_header@@AAVc_typed_pointer_holder@@PAVc_persist_stream@@@Z");
//};

//public: std::pair<struct s_tag_block_definition const *, bool>::pair<struct s_tag_block_definition const *, bool>(struct s_tag_block_definition const *const &, bool const &)
//{
//    mangled_ppc("??0?$pair@PBUs_tag_block_definition@@_N@std@@QAA@ABQBUs_tag_block_definition@@AB_N@Z");
//};

//public: std::pair<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char> >::pair<struct std::pair<struct s_tag_block_definition const *, bool>, class c_copyable_array_template<unsigned char> >(struct std::pair<struct s_tag_block_definition const *, bool> const &, class c_copyable_array_template<unsigned char> const &)
//{
//    mangled_ppc("??0?$pair@U?$pair@PBUs_tag_block_definition@@_N@std@@V?$c_copyable_array_template@E@@@std@@QAA@ABU?$pair@PBUs_tag_block_definition@@_N@1@ABV?$c_copyable_array_template@E@@@Z");
//};

//public: std::pair<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor>::pair<class c_tag_field_editor *, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor>(class c_tag_field_editor *const &, class c_monolithic_tag_field_editor_manager::c_monolithic_tag_reference_editor const &)
//{
//    mangled_ppc("??0?$pair@PAVc_tag_field_editor@@Vc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@std@@QAA@ABQAVc_tag_field_editor@@ABVc_monolithic_tag_reference_editor@c_monolithic_tag_field_editor_manager@@@Z");
//};

//__int64** std::_Checked_base<__int64**>(__int64**&)
//{
//    mangled_ppc("??$_Checked_base@PAPA_J@std@@YAPAPA_JAAPAPA_J@Z");
//};

//struct std::_Scalar_ptr_iterator_tag std::_Ptr_cat<__int64**, __int64**>(__int64**&, __int64**&)
//{
//    mangled_ppc("??$_Ptr_cat@PAPA_JPAPA_J@std@@YA?AU_Scalar_ptr_iterator_tag@0@AAPAPA_J0@Z");
//};

//__int64** std::_Uninit_copy<__int64**, __int64**, class std::allocator<__int64*> >(__int64**, __int64**, __int64**, class std::allocator<__int64*> &, struct std::_Scalar_ptr_iterator_tag, struct std::_Range_checked_iterator_tag)
//{
//    mangled_ppc("??$_Uninit_copy@PAPA_JPAPA_JV?$allocator@PA_J@std@@@std@@YAPAPA_JPAPA_J00AAV?$allocator@PA_J@0@U_Scalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z");
//};

//void std::_Uninit_fill_n<__int64**, unsigned int, __int64*, class std::allocator<__int64*> >(__int64**, unsigned int, __int64*const &, class std::allocator<__int64*> &, struct std::_Scalar_ptr_iterator_tag, struct std::_Range_checked_iterator_tag)
//{
//    mangled_ppc("??$_Uninit_fill_n@PAPA_JIPA_JV?$allocator@PA_J@std@@@std@@YAXPAPA_JIABQA_JAAV?$allocator@PA_J@0@U_Scalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z");
//};

//void std::_Destroy_range<class std::allocator<__int64*> >(__int64**, __int64**, class std::allocator<__int64*> &, struct std::_Scalar_ptr_iterator_tag)
//{
//    mangled_ppc("??$_Destroy_range@V?$allocator@PA_J@std@@@std@@YAXPAPA_J0AAV?$allocator@PA_J@0@U_Scalar_ptr_iterator_tag@0@@Z");
//};

//bool std::operator<<struct s_tag_block_definition const *, bool>(struct std::pair<struct s_tag_block_definition const *, bool> const &, struct std::pair<struct s_tag_block_definition const *, bool> const &)
//{
//    mangled_ppc("??$?MPBUs_tag_block_definition@@_N@std@@YA_NABU?$pair@PBUs_tag_block_definition@@_N@0@0@Z");
//};

//__int64** std::_Checked_base<__int64**>(__int64**&, struct std::_Unchanged_checked_iterator_base_type_tag)
//{
//    mangled_ppc("??$_Checked_base@PAPA_J@std@@YAPAPA_JAAPAPA_JU_Unchanged_checked_iterator_base_type_tag@0@@Z");
//};

//void std::_Debug_range<__int64**>(__int64**, __int64**, wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_range@PAPA_J@std@@YAXPAPA_J0PB_WI@Z");
//};

//void std::_Debug_pointer<__int64*>(__int64**, wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_pointer@PA_J@std@@YAXPAPA_JPB_WI@Z");
//};

//void stdext::unchecked_fill_n<__int64**, unsigned int, __int64*>(__int64**, unsigned int, __int64*const &)
//{
//    mangled_ppc("??$unchecked_fill_n@PAPA_JIPA_J@stdext@@YAXPAPA_JIABQA_J@Z");
//};

//struct std::random_access_iterator_tag std::_Iter_cat<__int64**>(__int64**const &)
//{
//    mangled_ppc("??$_Iter_cat@PAPA_J@std@@YA?AUrandom_access_iterator_tag@0@ABQAPA_J@Z");
//};

//void std::_Debug_range2<__int64**>(__int64**, __int64**, wchar_t const *, unsigned int, struct std::random_access_iterator_tag)
//{
//    mangled_ppc("??$_Debug_range2@PAPA_J@std@@YAXPAPA_J0PB_WIUrandom_access_iterator_tag@0@@Z");
//};

//void std::_Fill_n<__int64**, unsigned int, __int64*>(__int64**, unsigned int, __int64*const &, struct std::random_access_iterator_tag, struct std::_Range_checked_iterator_tag)
//{
//    mangled_ppc("??$_Fill_n@PAPA_JIPA_J@std@@YAXPAPA_JIABQA_JUrandom_access_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z");
//};

//void std::_Fill_n<__int64**, unsigned int, __int64*>(__int64**, unsigned int, __int64*const &, struct std::_Range_checked_iterator_tag)
//{
//    mangled_ppc("??$_Fill_n@PAPA_JIPA_J@std@@YAXPAPA_JIABQA_JU_Range_checked_iterator_tag@0@@Z");
//};

//[thunk]: c_tag_dependency_index_loader::`vcall'{12, {flat}}
//{
//    mangled_ppc("??_9c_tag_dependency_index_loader@@$BM@AA");
//};

//[thunk]: c_tag_dependency_index_loader::`vcall'{0, {flat}}
//{
//    mangled_ppc("??_9c_tag_dependency_index_loader@@$BA@AA");
//};

//[thunk]: c_tag_dependency_index_loader::`vcall'{4, {flat}}
//{
//    mangled_ppc("??_9c_tag_dependency_index_loader@@$B3AA");
//};

//[thunk]: c_tag_dependency_index_loader::`vcall'{8, {flat}}
//{
//    mangled_ppc("??_9c_tag_dependency_index_loader@@$B7AA");
//};

//[thunk]: public: virtual void * c_xsync_monolithic_tag_file_remote_backend::`vector deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_Ec_xsync_monolithic_tag_file_remote_backend@@WECI@AAPAXI@Z");
//};

//merged_836A1E40
//{
//    mangled_ppc("merged_836A1E40");
//};

//public: virtual c_xsync_monolithic_tag_file_remote_backend::~c_xsync_monolithic_tag_file_remote_backend(void)
//{
//    mangled_ppc("??1c_xsync_monolithic_tag_file_remote_backend@@UAA@XZ");
//};

