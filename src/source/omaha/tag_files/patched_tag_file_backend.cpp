/* ---------- headers */

#include "omaha\tag_files\patched_tag_file_backend.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// const c_patchable_tag_file_backend::`vftable'{for `c_tag_file_instance_read_backend'}; // "??_7c_patchable_tag_file_backend@@6Bc_tag_file_instance_read_backend@@@"
// const c_patchable_tag_file_backend::`vftable'{for `c_tag_file_cache_builder_backend'}; // "??_7c_patchable_tag_file_backend@@6Bc_tag_file_cache_builder_backend@@@"
// const c_patchable_tag_file_backend::`vftable'{for `c_tag_file_resource_backend'}; // "??_7c_patchable_tag_file_backend@@6Bc_tag_file_resource_backend@@@"
// const c_patchable_tag_file_backend::`vftable'{for `c_tag_file_prefetch_backend'}; // "??_7c_patchable_tag_file_backend@@6Bc_tag_file_prefetch_backend@@@"
// const c_patchable_tag_file_backend::`vftable'{for `c_tag_file_attribute_backend'}; // "??_7c_patchable_tag_file_backend@@6Bc_tag_file_attribute_backend@@@"
// const c_patchable_tag_file_backend::`vftable'{for `c_tag_file_index_backend'}; // "??_7c_patchable_tag_file_backend@@6Bc_tag_file_index_backend@@@"
// const c_patchable_tag_file_backend::`vftable'{for `c_tag_file_create_backend'}; // "??_7c_patchable_tag_file_backend@@6Bc_tag_file_create_backend@@@"
// const c_patchable_tag_file_backend::`vftable'{for `c_tag_file_layout_cache_backend'}; // "??_7c_patchable_tag_file_backend@@6Bc_tag_file_layout_cache_backend@@@"
// const c_patchable_tag_file_backend::`vftable'{for `c_tag_file_read_backend'}; // "??_7c_patchable_tag_file_backend@@6Bc_tag_file_read_backend@@@"
// const c_patched_tag_file_resource_datum_handler::`vftable'{for `c_tag_resource_cache_file_location_handler'}; // "??_7c_patched_tag_file_resource_datum_handler@@6Bc_tag_resource_cache_file_location_handler@@@"
// const c_patched_tag_file_resource_datum_handler::`vftable'{for `c_tag_resource_cache_file_datum_handler'}; // "??_7c_patched_tag_file_resource_datum_handler@@6Bc_tag_resource_cache_file_datum_handler@@@"
// const c_tag_file_backend_resource_cache_file_datum_handler::`vftable'{for `c_tag_resource_cache_file_location_handler'}; // "??_7c_tag_file_backend_resource_cache_file_datum_handler@@6Bc_tag_resource_cache_file_location_handler@@@"
// const c_tag_file_backend_resource_cache_file_datum_handler::`vftable'{for `c_tag_resource_cache_file_datum_handler'}; // "??_7c_tag_file_backend_resource_cache_file_datum_handler@@6Bc_tag_resource_cache_file_datum_handler@@@"

// bool tag_file_index_merge_less_than(class c_tag_file_index_forward_iterator const &, class c_tag_file_index_forward_iterator const &);
// public: struct s_tag_file_index_entry const & c_tag_file_index_forward_iterator::get_index_entry(void) const;
// public: long c_tag_file_index_forward_iterator::get_cache_block_value(void) const;
// public: c_patchable_tag_file_backend::c_patchable_tag_file_backend(char const *, class c_wrapped_array<struct s_patched_backend_setup const>, long, class c_allocation_interface *, class c_tag_allocator *, class c_tag_group_dictionary *);
// merged_835EDC38;
// public: c_patched_tag_file_resource_datum_handler::c_patched_tag_file_resource_datum_handler(void);
// public: c_tag_file_backend_resource_datum_handler_base::c_tag_file_backend_resource_datum_handler_base(void);
// public: c_tag_file_backend_resource_cache_file_datum_handler::c_tag_file_backend_resource_cache_file_datum_handler(void);
// public: c_patchable_tag_file_backend::c_patchable_tag_file_backend(enum e_cache_file_builder_tag, class c_wrapped_array<struct s_patched_backend_setup const>, long, class c_allocation_interface *, class c_tag_allocator *, class c_tag_group_dictionary *);
// private: void c_patchable_tag_file_backend::initialize_backends(class c_wrapped_array<struct s_patched_backend_setup const>, long, class c_allocation_interface *, class c_tag_allocator *);
// public: c_simple_tag_file_backend_setup::c_simple_tag_file_backend_setup(class c_tag_file_backend_resource_io_arena_interface *, class c_tag_file_backend_resource_manager_interface *, class c_tag_resource_runtime_manager *);
// public: virtual class c_tag_file_backend_resource_io_arena_interface * c_simple_tag_file_backend_setup::get_resource_io_arena(void);
// public: virtual class c_tag_file_backend_resource_manager_interface * c_simple_tag_file_backend_setup::get_backend_resource_manager(void);
// public: virtual class c_tag_resource_runtime_manager * c_simple_tag_file_backend_setup::get_external_resource_manager(void);
// private: void c_patchable_tag_file_backend::initialize_backend_mappings(void);
// public: c_tag_file_index_forward_iterator::c_tag_file_index_forward_iterator(void *, bool);
// public: c_tag_file_index_forward_iterator::c_tag_file_index_forward_iterator(void *);
// public: class c_tag_file_index_forward_iterator & c_tag_file_index_forward_iterator::operator++(void);
// public: c_tag_file_index_merge_output_iterator::c_tag_file_index_merge_output_iterator(void *, long);
// public: virtual c_patchable_tag_file_backend::~c_patchable_tag_file_backend(void);
// public: virtual bool c_patchable_tag_file_backend::can_load_tags(void);
// public: virtual bool c_patchable_tag_file_backend::tag_file_exists(struct s_tag_group const *, char const *);
// public: virtual bool c_patchable_tag_file_backend::tag_file_get_checksum(struct s_tag_group const *, char const *, unsigned long *);
// public: virtual class c_tag_file_read_interface * c_patchable_tag_file_backend::load_tag_file(class c_allocation_interface *, struct s_tag_group const *, char const *, bool *, unsigned long *, enum e_tag_file_open_result *, class c_tag_file_alternate_stream_read_iterator **);
// public: virtual void c_patchable_tag_file_backend::release_tag_file(struct s_tag_group const *, char const *, class c_tag_file_read_interface *);
// public: virtual bool c_patchable_tag_file_backend::try_to_read_from_tag_file(struct s_tag_group const *, char const *, unsigned long, class c_basic_buffer<void>);
// public: virtual bool c_patchable_tag_file_backend::get_total_bytes_read(unsigned __int64*);
// private: class c_tag_file_read_backend * c_patchable_tag_file_backend::find_read_backend(struct s_tag_group const *, char const *);
// private: class c_tag_file_attribute_backend * c_patchable_tag_file_backend::find_attribute_backend(struct s_tag_group const *, char const *);
// public: virtual class c_tag_file_write_interface * c_patchable_tag_file_backend::create_tag_file(struct s_tag_group const *, bool);
// public: virtual bool c_patchable_tag_file_backend::save_tag_file(class c_tag_file_write_interface *, char const *, unsigned long *);
// public: virtual void c_patchable_tag_file_backend::cancel_save_tag_file(class c_tag_file_write_interface *);
// private: class c_tag_file_create_backend * c_patchable_tag_file_backend::find_create_backend(void);
// public: virtual void c_patchable_tag_file_backend::pin(void);
// public: virtual void c_patchable_tag_file_backend::unpin(void);
// public: virtual void * c_patchable_tag_file_backend::build_complete_tag_file_index(void const *, char const *, char const *, class c_tag_group_dictionary *, class c_allocation_interface *, bool);
// public: virtual void const * c_patchable_tag_file_backend::try_to_get_master_tag_file_index_DONT_CACHE_DONT_MODIFY(void);
// public: virtual bool c_patchable_tag_file_backend::tag_file_read_only(struct s_tag_group const *, char const *);
// public: virtual bool c_patchable_tag_file_backend::tag_file_get_last_modification_date(struct s_tag_group const *, char const *, struct s_file_last_modification_date *);
// public: virtual void c_patchable_tag_file_backend::predict_tag_load(class c_tag_files_prediction_manager *, class c_tag_file_prefetch_tag_read_context *, struct s_tag_group const *, char const *);
// public: virtual void c_patchable_tag_file_backend::predict_tag_load_from_block(class c_tag_files_prediction_manager *, class c_tag_file_prefetch_tag_read_context *, struct s_tag_block const *);
// public: virtual void c_patchable_tag_file_backend::finished_predict_tag_load(void);
// public: virtual class c_tag_resource_runtime_manager * c_patchable_tag_file_backend::get_runtime_manager(void);
// public: virtual class c_tag_resource_persist_writer * c_patchable_tag_file_backend::get_persist_writer(void);
// public: virtual class c_tag_resource_persist_reader * c_patchable_tag_file_backend::get_persist_reader(struct s_tag_group const *, char const *);
// public: virtual void c_patchable_tag_file_backend::release_persist_reader(struct s_tag_group const *, char const *, class c_tag_resource_persist_reader *);
// public: virtual void c_patchable_tag_file_backend::set_cache_file_output(class c_allocation_interface *, class c_cache_file_builder_tag_resource_output *);
// public: virtual void c_patchable_tag_file_backend::close_cache_file_output(void);
// public: virtual bool c_patchable_tag_file_backend::read_tag_instance(struct s_tag_read_parameters const *, bool, enum e_tag_file_open_result *, bool *, unsigned long *, struct s_tag_group const *, char const *, struct s_tag_block *, class c_tag_alternate_stream_consumer *);
// private: class c_tag_file_instance_read_backend * c_patchable_tag_file_backend::find_instance_backend(struct s_tag_group const *, char const *);
// private: class c_tag_file_resource_backend * c_patchable_tag_file_backend::find_resource_backend(struct s_tag_group const *, char const *);
// private: long c_patchable_tag_file_backend::lookup_backend_index(struct s_tag_group const *, char const *);
// bool create_patched_tag_file_backend(struct s_tag_file_backend *, struct s_tag_file_backend *, class c_allocation_interface *, struct s_tag_file_backend **);
// void setup_cache_file_cache(bool);
// public: c_monolithic_tag_file_backend_factory::c_monolithic_tag_file_backend_factory(char const *, char const *, bool);
// public: virtual struct s_tag_file_backend * c_monolithic_tag_file_backend_factory::create_backend(class c_allocation_interface *, class c_tag_file_backend_setup *) const;
// public: virtual void (* c_monolithic_tag_file_backend_factory::get_free_proc(void) const)(class c_allocation_interface *, struct s_tag_file_backend **);
// public: c_tag_file_backend_factory::c_tag_file_backend_factory(void);
// public: c_single_tag_file_backend_factory::c_single_tag_file_backend_factory(void);
// public: virtual struct s_tag_file_backend * c_single_tag_file_backend_factory::create_backend(class c_allocation_interface *, class c_tag_file_backend_setup *) const;
// public: virtual void (* c_single_tag_file_backend_factory::get_free_proc(void) const)(class c_allocation_interface *, struct s_tag_file_backend **);
// public: c_cache_file_builder_partition_heap_config::c_cache_file_builder_partition_heap_config(char const *, long, long, unsigned long);
// public: c_tag_file_heap_partition_config::c_tag_file_heap_partition_config(void);
// public: virtual bool c_cache_file_builder_partition_heap_config::get_partition_config(long, struct s_tag_resource_cache_file_config *) const;
// public: virtual bool c_cache_file_builder_partition_heap_config::can_create_partition(long);
// public: virtual long c_cache_file_builder_partition_heap_config::get_partition_page_bits(long);
// public: virtual long c_cache_file_builder_partition_heap_config::get_partition_maximum_page_count(long);
// public: virtual unsigned long c_cache_file_builder_partition_heap_config::get_persist_chunk_tag(void) const;
// public: virtual long c_cache_file_builder_partition_heap_config::get_persist_chunk_version(void) const;
// public: virtual bool c_cache_file_builder_partition_heap_config::persist(class c_persist_stream *);
// public: virtual bool c_cache_file_builder_partition_heap_config::restore(class c_persist_stream *);
// public: c_cache_file_builder_remote_backend_config::c_cache_file_builder_remote_backend_config(char const *, char const *, char const *);
// public: c_monolithic_remote_backend_config::c_monolithic_remote_backend_config(void);
// public: c_cache_file_builder_remote_backend_config::c_cache_file_builder_remote_backend_config(char const *);
// public: virtual bool c_cache_file_builder_remote_backend_config::truncate_target_files(void);
// public: virtual char const * c_cache_file_builder_remote_backend_config::get_state_filename(void);
// public: virtual char const * c_cache_file_builder_remote_backend_config::get_backup_state_filename(void);
// public: virtual class c_tag_file_heap_partition_config * c_cache_file_builder_remote_backend_config::get_tag_heap_config(void);
// public: virtual class c_tag_file_heap_partition_config * c_cache_file_builder_remote_backend_config::get_cache_heap_config(void);
// bool create_cache_file_builder_cache_backend(class c_allocation_interface *, class c_tag_allocator *, class c_tag_group_dictionary *, enum e_cache_file_cache_type, class c_tag_file_backend_setup *, struct s_tag_file_backend **);
// public: c_cache_file_builder_shared_backend_factory::c_cache_file_builder_shared_backend_factory(class c_tag_allocator *, class c_tag_group_dictionary *, char const *, class c_monolithic_remote_backend_config *, bool);
// public: virtual struct s_tag_file_backend * c_cache_file_builder_shared_backend_factory::create_backend(class c_allocation_interface *, class c_tag_file_backend_setup *) const;
// public: virtual void (* c_cache_file_builder_shared_backend_factory::get_free_proc(void) const)(class c_allocation_interface *, struct s_tag_file_backend **);
// void dispose_cache_file_builder_cache_backend(class c_allocation_interface *, struct s_tag_file_backend **);
// bool create_simple_patched_backend(class c_allocation_interface *, class c_tag_allocator *, class c_tag_group_dictionary *, class c_tag_file_backend_setup *, struct s_tag_file_backend **);
// public: c_simple_resource_output_writer::c_simple_resource_output_writer(void);
// public: virtual bool c_simple_resource_output_writer::add_blob(enum e_cache_file_section, class c_basic_buffer<void const>, unsigned long *);
// public: virtual bool c_simple_resource_output_writer::get_file_location_from_identifier(struct s_tag_persistent_identifier const &, struct s_tag_resource_cache_file_config *);
// public: virtual struct s_tag_persistent_identifier c_simple_resource_output_writer::get_output_file_identifier(enum e_cache_file_section);
// public: virtual class c_static_string<256> c_simple_resource_output_writer::get_output_file_path(enum e_cache_file_section);
// public: c_cache_file_writer::c_cache_file_writer(void);
// void dispose_simple_patched_backend(class c_allocation_interface *, struct s_tag_file_backend **);
// public: c_wrapped_array<class c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler>::c_wrapped_array<class c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler>(void);
// public: c_wrapped_array<struct s_patched_backend_instance>::c_wrapped_array<struct s_patched_backend_instance>(void);
// public: void c_wrapped_array_no_init<struct s_patched_backend_instance>::set_elements(struct s_patched_backend_instance *, long);
// public: long c_wrapped_array_no_init<struct s_patched_backend_instance>::count(void) const;
// public: struct s_patched_backend_instance & c_array_operator_interface<class c_wrapped_array_no_init<struct s_patched_backend_instance>, struct s_patched_backend_instance>::operator[](long);
// public: struct s_patched_backend_instance * c_array_operator_interface<class c_wrapped_array_no_init<struct s_patched_backend_instance>, struct s_patched_backend_instance>::get_element(long);
// public: struct s_patched_backend_instance * c_array_operator_interface<class c_wrapped_array_no_init<struct s_patched_backend_instance>, struct s_patched_backend_instance>::get_elements(void);
// public: bool c_array_operator_interface<class c_wrapped_array_no_init<struct s_patched_backend_instance>, struct s_patched_backend_instance>::valid_index(long) const;
// public: long c_wrapped_array_no_init<struct s_patched_backend_setup const>::count(void) const;
// public: struct s_patched_backend_setup const & c_array_operator_interface<class c_wrapped_array_no_init<struct s_patched_backend_setup const>, struct s_patched_backend_setup const>::operator[](long);
// public: bool c_array_operator_interface<class c_wrapped_array_no_init<struct s_patched_backend_setup const>, struct s_patched_backend_setup const>::valid_index(long) const;
// public: void c_wrapped_array_no_init<class c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler>::set_elements(class c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler *, long);
// public: struct s_patched_backend_instance * c_wrapped_array_no_init<struct s_patched_backend_instance>::begin(void);
// public: struct s_patched_backend_instance * c_array_operator_interface<class c_wrapped_array_no_init<struct s_patched_backend_instance>, struct s_patched_backend_instance>::begin(void);
// public: long c_array_operator_interface<class c_wrapped_array_no_init<struct s_patched_backend_instance>, struct s_patched_backend_instance>::count(void) const;
// public: class c_wrapped_array_no_init<struct s_patched_backend_instance> * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_patched_backend_instance> >::get_super_class(void);
// public: struct s_patched_backend_setup const * c_wrapped_array_no_init<struct s_patched_backend_setup const>::begin(void);
// public: long c_array_operator_interface<class c_wrapped_array_no_init<struct s_patched_backend_setup const>, struct s_patched_backend_setup const>::count(void) const;
// public: class c_wrapped_array_no_init<struct s_patched_backend_setup const> * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_patched_backend_setup const> >::get_super_class(void);
// public: class c_wrapped_array_no_init<struct s_patched_backend_instance> const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_patched_backend_instance> >::get_super_class(void) const;
// public: class c_wrapped_array_no_init<struct s_patched_backend_setup const> const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_patched_backend_setup const> >::get_super_class(void) const;
// public: c_wrapped_array<struct s_patched_backend_setup const>::ctor<struct s_patched_backend_setup const>(class c_wrapped_array<struct s_patched_backend_setup const> &);
// class c_tag_file_index_merge_output_iterator std::set_intersection<class c_tag_file_index_forward_iterator, class c_tag_file_index_forward_iterator, class c_tag_file_index_merge_output_iterator, bool (*)(class c_tag_file_index_forward_iterator const &, class c_tag_file_index_forward_iterator)>(class c_tag_file_index_forward_iterator, class c_tag_file_index_forward_iterator, class c_tag_file_index_forward_iterator, class c_tag_file_index_forward_iterator, class c_tag_file_index_merge_output_iterator, bool (*)(class c_tag_file_index_forward_iterator const &, class c_tag_file_index_forward_iterator const &));
// struct s_allocation_description_holder make_allocation_description<class c_patchable_tag_file_backend>(class c_patchable_tag_file_backend *&, unsigned long);
// public: c_wrapped_array<struct s_allocation_description_holder>::ctor<2>(struct s_allocation_description_holder (&)[2]);
// public: c_wrapped_array<struct s_patched_backend_setup const>::ctor<2>(struct s_patched_backend_setup const (&)[2]);
// struct s_allocation_description_holder make_allocation_description<class c_cache_file_builder_remote_backend_config>(class c_cache_file_builder_remote_backend_config *&, unsigned long);
// struct s_allocation_description_holder make_allocation_description<struct s_cache_file_cache_backend_allocation>(struct s_cache_file_cache_backend_allocation *&, unsigned long);
// class c_wrapped_array<struct s_patched_backend_setup> make_wrapped_array<struct s_patched_backend_setup>(struct s_patched_backend_setup *, long);
// public: c_wrapped_array<struct s_patched_backend_setup const>::ctor<struct s_patched_backend_setup>(class c_wrapped_array<struct s_patched_backend_setup> const &);
// void destruct_in_place<class c_patchable_tag_file_backend>(class c_patchable_tag_file_backend *);
// void destruct_in_place<class c_cache_file_builder_remote_backend_config>(class c_cache_file_builder_remote_backend_config *);
// struct s_allocation_description_holder make_allocation_description<class c_simple_resource_output_writer>(class c_simple_resource_output_writer *&, unsigned long);
// struct s_allocation_description_holder make_allocation_description<class c_cache_file_builder_tag_resource_output_simple>(class c_cache_file_builder_tag_resource_output_simple *&, unsigned long);
// struct s_allocation_description_holder make_allocation_description<struct s_runtime_patched_backend_allocation>(struct s_runtime_patched_backend_allocation *&, unsigned long);
// public: c_wrapped_array<struct s_patched_backend_setup const>::ctor<1>(struct s_patched_backend_setup const (&)[1]);
// void destruct_in_place<class c_cache_file_builder_tag_resource_output_simple>(class c_cache_file_builder_tag_resource_output_simple *);
// void destruct_in_place<class c_simple_resource_output_writer>(class c_simple_resource_output_writer *);
// public: void * c_simple_resource_output_writer::`scalar deleting destructor'(unsigned int);
// public: c_simple_resource_output_writer::~c_simple_resource_output_writer(void);
// public: void c_wrapped_array_no_init<struct s_patched_backend_setup const>::set_elements(struct s_patched_backend_setup const *, long);
// public: struct s_patched_backend_setup const * c_array_operator_interface<class c_wrapped_array_no_init<struct s_patched_backend_setup const>, struct s_patched_backend_setup const>::get_elements(void);
// public: c_wrapped_array<struct s_patched_backend_setup>::c_wrapped_array<struct s_patched_backend_setup>(struct s_patched_backend_setup *, long);
// public: long c_wrapped_array_no_init<struct s_patched_backend_setup>::count(void) const;
// public: struct s_patched_backend_setup const * c_array_operator_interface<class c_wrapped_array_no_init<struct s_patched_backend_setup>, struct s_patched_backend_setup>::get_elements(void) const;
// public: c_typed_allocation_description<class c_patchable_tag_file_backend>::c_typed_allocation_description<class c_patchable_tag_file_backend>(class c_patchable_tag_file_backend *&, unsigned long);
// public: virtual unsigned long c_typed_allocation_description<class c_patchable_tag_file_backend>::get_unaligned_size(void) const;
// public: virtual unsigned long c_typed_allocation_description<class c_patchable_tag_file_backend>::get_alignment_bits(void) const;
// public: virtual void c_typed_allocation_description<class c_patchable_tag_file_backend>::assign_storage(class c_raw_storage_buffer_iterator &) const;
// public: c_typed_allocation_description<class c_cache_file_builder_remote_backend_config>::c_typed_allocation_description<class c_cache_file_builder_remote_backend_config>(class c_cache_file_builder_remote_backend_config *&, unsigned long);
// public: virtual unsigned long c_typed_allocation_description<class c_cache_file_builder_remote_backend_config>::get_unaligned_size(void) const;
// public: virtual unsigned long c_typed_allocation_description<class c_cache_file_builder_remote_backend_config>::get_alignment_bits(void) const;
// public: virtual void c_typed_allocation_description<class c_cache_file_builder_remote_backend_config>::assign_storage(class c_raw_storage_buffer_iterator &) const;
// public: c_typed_allocation_description<struct s_cache_file_cache_backend_allocation>::c_typed_allocation_description<struct s_cache_file_cache_backend_allocation>(struct s_cache_file_cache_backend_allocation *&, unsigned long);
// public: virtual unsigned long c_typed_allocation_description<struct s_cache_file_cache_backend_allocation>::get_unaligned_size(void) const;
// public: virtual unsigned long c_typed_allocation_description<struct s_cache_file_cache_backend_allocation>::get_alignment_bits(void) const;
// public: virtual void c_typed_allocation_description<struct s_cache_file_cache_backend_allocation>::assign_storage(class c_raw_storage_buffer_iterator &) const;
// public: c_typed_allocation_description<class c_simple_resource_output_writer>::c_typed_allocation_description<class c_simple_resource_output_writer>(class c_simple_resource_output_writer *&, unsigned long);
// public: virtual unsigned long c_typed_allocation_description<class c_simple_resource_output_writer>::get_unaligned_size(void) const;
// public: virtual unsigned long c_typed_allocation_description<class c_simple_resource_output_writer>::get_alignment_bits(void) const;
// public: virtual void c_typed_allocation_description<class c_simple_resource_output_writer>::assign_storage(class c_raw_storage_buffer_iterator &) const;
// public: c_typed_allocation_description<class c_cache_file_builder_tag_resource_output_simple>::c_typed_allocation_description<class c_cache_file_builder_tag_resource_output_simple>(class c_cache_file_builder_tag_resource_output_simple *&, unsigned long);
// public: virtual unsigned long c_typed_allocation_description<class c_cache_file_builder_tag_resource_output_simple>::get_unaligned_size(void) const;
// public: virtual unsigned long c_typed_allocation_description<class c_cache_file_builder_tag_resource_output_simple>::get_alignment_bits(void) const;
// public: virtual void c_typed_allocation_description<class c_cache_file_builder_tag_resource_output_simple>::assign_storage(class c_raw_storage_buffer_iterator &) const;
// public: c_typed_allocation_description<struct s_runtime_patched_backend_allocation>::c_typed_allocation_description<struct s_runtime_patched_backend_allocation>(struct s_runtime_patched_backend_allocation *&, unsigned long);
// public: virtual unsigned long c_typed_allocation_description<struct s_runtime_patched_backend_allocation>::get_unaligned_size(void) const;
// public: virtual unsigned long c_typed_allocation_description<struct s_runtime_patched_backend_allocation>::get_alignment_bits(void) const;
// public: virtual void c_typed_allocation_description<struct s_runtime_patched_backend_allocation>::assign_storage(class c_raw_storage_buffer_iterator &) const;
// public: struct s_patched_backend_setup const * c_array_operator_interface<class c_wrapped_array_no_init<struct s_patched_backend_setup const>, struct s_patched_backend_setup const>::begin(void);
// public: void c_wrapped_array_no_init<struct s_patched_backend_setup>::set_elements(struct s_patched_backend_setup *, long);
// public: struct s_patched_backend_setup const * c_array_operator_interface<class c_wrapped_array_no_init<struct s_patched_backend_setup>, struct s_patched_backend_setup>::begin(void) const;
// public: struct s_patched_backend_setup const * c_wrapped_array_no_init<struct s_patched_backend_setup>::begin(void) const;
// public: class c_wrapped_array_no_init<struct s_patched_backend_setup> const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_patched_backend_setup> >::get_super_class(void) const;
// class c_tag_file_index_forward_iterator std::_Checked_base<class c_tag_file_index_forward_iterator>(class c_tag_file_index_forward_iterator &);
// class c_tag_file_index_merge_output_iterator std::_Set_intersection<class c_tag_file_index_forward_iterator, class c_tag_file_index_forward_iterator, class c_tag_file_index_merge_output_iterator, bool (*)(class c_tag_file_index_forward_iterator const &, class c_tag_file_index_forward_iterator)>(class c_tag_file_index_forward_iterator, class c_tag_file_index_forward_iterator, class c_tag_file_index_forward_iterator, class c_tag_file_index_forward_iterator, class c_tag_file_index_merge_output_iterator, bool (*)(class c_tag_file_index_forward_iterator const &, class c_tag_file_index_forward_iterator const &), struct std::_Range_checked_iterator_tag);
// public: class c_tag_file_index_forward_iterator const & c_tag_file_index_forward_iterator::operator*(void) const;
// public: bool c_tag_file_index_forward_iterator::operator!=(class c_tag_file_index_forward_iterator const &);
// public: class c_tag_file_index_forward_iterator c_tag_file_index_forward_iterator::operator++(int);
// public: class c_tag_file_index_merge_output_iterator & c_tag_file_index_merge_output_iterator::operator*(void);
// public: class c_tag_file_index_merge_output_iterator & c_tag_file_index_merge_output_iterator::operator=(class c_tag_file_index_forward_iterator const &);
// public: bool c_tag_file_index_forward_iterator::get_next_success(void) const;
// public: class c_tag_file_index_merge_output_iterator & c_tag_file_index_merge_output_iterator::operator++(int);
// struct s_allocation_description_holder make_into_description_holder<class c_typed_allocation_description<class c_patchable_tag_file_backend> >(class c_typed_allocation_description<class c_patchable_tag_file_backend>);
// struct s_allocation_description_holder make_into_description_holder<class c_typed_allocation_description<class c_cache_file_builder_remote_backend_config> >(class c_typed_allocation_description<class c_cache_file_builder_remote_backend_config>);
// struct s_allocation_description_holder make_into_description_holder<class c_typed_allocation_description<struct s_cache_file_cache_backend_allocation> >(class c_typed_allocation_description<struct s_cache_file_cache_backend_allocation>);
// struct s_allocation_description_holder make_into_description_holder<class c_typed_allocation_description<class c_simple_resource_output_writer> >(class c_typed_allocation_description<class c_simple_resource_output_writer>);
// struct s_allocation_description_holder make_into_description_holder<class c_typed_allocation_description<class c_cache_file_builder_tag_resource_output_simple> >(class c_typed_allocation_description<class c_cache_file_builder_tag_resource_output_simple>);
// struct s_allocation_description_holder make_into_description_holder<class c_typed_allocation_description<struct s_runtime_patched_backend_allocation> >(class c_typed_allocation_description<struct s_runtime_patched_backend_allocation>);
// unsigned long get_total_unaligned_raw_size<class c_patchable_tag_file_backend>(long);
// public: class c_patchable_tag_file_backend * c_raw_storage_buffer_iterator::get_array_elements<class c_patchable_tag_file_backend>(long);
// unsigned long get_total_unaligned_raw_size<class c_cache_file_builder_remote_backend_config>(long);
// public: class c_cache_file_builder_remote_backend_config * c_raw_storage_buffer_iterator::get_array_elements<class c_cache_file_builder_remote_backend_config>(long);
// unsigned long get_total_unaligned_raw_size<struct s_cache_file_cache_backend_allocation>(long);
// public: struct s_cache_file_cache_backend_allocation * c_raw_storage_buffer_iterator::get_array_elements<struct s_cache_file_cache_backend_allocation>(long);
// unsigned long get_total_unaligned_raw_size<class c_simple_resource_output_writer>(long);
// public: class c_simple_resource_output_writer * c_raw_storage_buffer_iterator::get_array_elements<class c_simple_resource_output_writer>(long);
// unsigned long get_total_unaligned_raw_size<class c_cache_file_builder_tag_resource_output_simple>(long);
// public: class c_cache_file_builder_tag_resource_output_simple * c_raw_storage_buffer_iterator::get_array_elements<class c_cache_file_builder_tag_resource_output_simple>(long);
// unsigned long get_total_unaligned_raw_size<struct s_runtime_patched_backend_allocation>(long);
// public: struct s_runtime_patched_backend_allocation * c_raw_storage_buffer_iterator::get_array_elements<struct s_runtime_patched_backend_allocation>(long);
// class c_tag_file_index_forward_iterator std::_Checked_base<class c_tag_file_index_forward_iterator>(class c_tag_file_index_forward_iterator &, struct std::_Unchanged_checked_iterator_base_type_tag);
// void std::_Debug_order<class c_tag_file_index_forward_iterator, bool (*)(class c_tag_file_index_forward_iterator const &, class c_tag_file_index_forward_iterator)>(class c_tag_file_index_forward_iterator, class c_tag_file_index_forward_iterator, bool (*)(class c_tag_file_index_forward_iterator const &, class c_tag_file_index_forward_iterator const &), wchar_t const *, unsigned int);
// void std::_Debug_pointer<class c_tag_file_index_merge_output_iterator>(class c_tag_file_index_merge_output_iterator &, wchar_t const *, unsigned int);
// bool std::_Debug_lt_pred<bool (*)(class c_tag_file_index_forward_iterator const &, class c_tag_file_index_forward_iterator const &), class c_tag_file_index_forward_iterator, class c_tag_file_index_forward_iterator>(bool (*)(class c_tag_file_index_forward_iterator const &, class c_tag_file_index_forward_iterator const &), class c_tag_file_index_forward_iterator const &, class c_tag_file_index_forward_iterator const &, wchar_t const *, unsigned int);
// void std::_Debug_range<class c_tag_file_index_forward_iterator>(class c_tag_file_index_forward_iterator, class c_tag_file_index_forward_iterator, wchar_t const *, unsigned int);
// void std::_Debug_pointer<bool (class c_tag_file_index_forward_iterator const &, class c_tag_file_index_forward_iterator const &)>(bool (*)(class c_tag_file_index_forward_iterator const &, class c_tag_file_index_forward_iterator const &), wchar_t const *, unsigned int);
// struct std::forward_iterator_tag std::_Iter_cat<class c_tag_file_index_forward_iterator>(class c_tag_file_index_forward_iterator const &);
// void std::_Debug_order2<class c_tag_file_index_forward_iterator, bool (*)(class c_tag_file_index_forward_iterator const &, class c_tag_file_index_forward_iterator)>(class c_tag_file_index_forward_iterator, class c_tag_file_index_forward_iterator, bool (*)(class c_tag_file_index_forward_iterator const &, class c_tag_file_index_forward_iterator const &), wchar_t const *, unsigned int, struct std::forward_iterator_tag);
// void std::_Debug_range2<class c_tag_file_index_forward_iterator>(class c_tag_file_index_forward_iterator, class c_tag_file_index_forward_iterator, wchar_t const *, unsigned int, struct std::input_iterator_tag);
// [thunk]: public: virtual void * c_patchable_tag_file_backend::`vector deleting destructor'(unsigned int);
// [thunk]: public: virtual void * c_patchable_tag_file_backend::`vector deleting destructor'(unsigned int);
// [thunk]: public: virtual void * c_patchable_tag_file_backend::`vector deleting destructor'(unsigned int);
// [thunk]: public: virtual void * c_patchable_tag_file_backend::`vector deleting destructor'(unsigned int);
// [thunk]: public: virtual void * c_patchable_tag_file_backend::`vector deleting destructor'(unsigned int);
// [thunk]: public: virtual void * c_patchable_tag_file_backend::`vector deleting destructor'(unsigned int);
// [thunk]: public: virtual void * c_patchable_tag_file_backend::`vector deleting destructor'(unsigned int);

//bool tag_file_index_merge_less_than(class c_tag_file_index_forward_iterator const &, class c_tag_file_index_forward_iterator const &)
//{
//    mangled_ppc("?tag_file_index_merge_less_than@@YA_NABVc_tag_file_index_forward_iterator@@0@Z");
//};

//public: struct s_tag_file_index_entry const & c_tag_file_index_forward_iterator::get_index_entry(void) const
//{
//    mangled_ppc("?get_index_entry@c_tag_file_index_forward_iterator@@QBAABUs_tag_file_index_entry@@XZ");
//};

//public: long c_tag_file_index_forward_iterator::get_cache_block_value(void) const
//{
//    mangled_ppc("?get_cache_block_value@c_tag_file_index_forward_iterator@@QBAJXZ");
//};

//public: c_patchable_tag_file_backend::c_patchable_tag_file_backend(char const *, class c_wrapped_array<struct s_patched_backend_setup const>, long, class c_allocation_interface *, class c_tag_allocator *, class c_tag_group_dictionary *)
//{
//    mangled_ppc("??0c_patchable_tag_file_backend@@QAA@PBDV?$c_wrapped_array@$$CBUs_patched_backend_setup@@@@JPAVc_allocation_interface@@PAVc_tag_allocator@@PAVc_tag_group_dictionary@@@Z");
//};

//merged_835EDC38
//{
//    mangled_ppc("merged_835EDC38");
//};

//public: c_patched_tag_file_resource_datum_handler::c_patched_tag_file_resource_datum_handler(void)
//{
//    mangled_ppc("??0c_patched_tag_file_resource_datum_handler@@QAA@XZ");
//};

//public: c_tag_file_backend_resource_datum_handler_base::c_tag_file_backend_resource_datum_handler_base(void)
//{
//    mangled_ppc("??0c_tag_file_backend_resource_datum_handler_base@@QAA@XZ");
//};

//public: c_tag_file_backend_resource_cache_file_datum_handler::c_tag_file_backend_resource_cache_file_datum_handler(void)
//{
//    mangled_ppc("??0c_tag_file_backend_resource_cache_file_datum_handler@@QAA@XZ");
//};

//public: c_patchable_tag_file_backend::c_patchable_tag_file_backend(enum e_cache_file_builder_tag, class c_wrapped_array<struct s_patched_backend_setup const>, long, class c_allocation_interface *, class c_tag_allocator *, class c_tag_group_dictionary *)
//{
//    mangled_ppc("??0c_patchable_tag_file_backend@@QAA@W4e_cache_file_builder_tag@@V?$c_wrapped_array@$$CBUs_patched_backend_setup@@@@JPAVc_allocation_interface@@PAVc_tag_allocator@@PAVc_tag_group_dictionary@@@Z");
//};

//private: void c_patchable_tag_file_backend::initialize_backends(class c_wrapped_array<struct s_patched_backend_setup const>, long, class c_allocation_interface *, class c_tag_allocator *)
//{
//    mangled_ppc("?initialize_backends@c_patchable_tag_file_backend@@AAAXV?$c_wrapped_array@$$CBUs_patched_backend_setup@@@@JPAVc_allocation_interface@@PAVc_tag_allocator@@@Z");
//};

//public: c_simple_tag_file_backend_setup::c_simple_tag_file_backend_setup(class c_tag_file_backend_resource_io_arena_interface *, class c_tag_file_backend_resource_manager_interface *, class c_tag_resource_runtime_manager *)
//{
//    mangled_ppc("??0c_simple_tag_file_backend_setup@@QAA@PAVc_tag_file_backend_resource_io_arena_interface@@PAVc_tag_file_backend_resource_manager_interface@@PAVc_tag_resource_runtime_manager@@@Z");
//};

//public: virtual class c_tag_file_backend_resource_io_arena_interface * c_simple_tag_file_backend_setup::get_resource_io_arena(void)
//{
//    mangled_ppc("?get_resource_io_arena@c_simple_tag_file_backend_setup@@UAAPAVc_tag_file_backend_resource_io_arena_interface@@XZ");
//};

//public: virtual class c_tag_file_backend_resource_manager_interface * c_simple_tag_file_backend_setup::get_backend_resource_manager(void)
//{
//    mangled_ppc("?get_backend_resource_manager@c_simple_tag_file_backend_setup@@UAAPAVc_tag_file_backend_resource_manager_interface@@XZ");
//};

//public: virtual class c_tag_resource_runtime_manager * c_simple_tag_file_backend_setup::get_external_resource_manager(void)
//{
//    mangled_ppc("?get_external_resource_manager@c_simple_tag_file_backend_setup@@UAAPAVc_tag_resource_runtime_manager@@XZ");
//};

//private: void c_patchable_tag_file_backend::initialize_backend_mappings(void)
//{
//    mangled_ppc("?initialize_backend_mappings@c_patchable_tag_file_backend@@AAAXXZ");
//};

//public: c_tag_file_index_forward_iterator::c_tag_file_index_forward_iterator(void *, bool)
//{
//    mangled_ppc("??0c_tag_file_index_forward_iterator@@QAA@PAX_N@Z");
//};

//public: c_tag_file_index_forward_iterator::c_tag_file_index_forward_iterator(void *)
//{
//    mangled_ppc("??0c_tag_file_index_forward_iterator@@QAA@PAX@Z");
//};

//public: class c_tag_file_index_forward_iterator & c_tag_file_index_forward_iterator::operator++(void)
//{
//    mangled_ppc("??Ec_tag_file_index_forward_iterator@@QAAAAV0@XZ");
//};

//public: c_tag_file_index_merge_output_iterator::c_tag_file_index_merge_output_iterator(void *, long)
//{
//    mangled_ppc("??0c_tag_file_index_merge_output_iterator@@QAA@PAXJ@Z");
//};

//public: virtual c_patchable_tag_file_backend::~c_patchable_tag_file_backend(void)
//{
//    mangled_ppc("??1c_patchable_tag_file_backend@@UAA@XZ");
//};

//public: virtual bool c_patchable_tag_file_backend::can_load_tags(void)
//{
//    mangled_ppc("?can_load_tags@c_patchable_tag_file_backend@@UAA_NXZ");
//};

//public: virtual bool c_patchable_tag_file_backend::tag_file_exists(struct s_tag_group const *, char const *)
//{
//    mangled_ppc("?tag_file_exists@c_patchable_tag_file_backend@@UAA_NPBUs_tag_group@@PBD@Z");
//};

//public: virtual bool c_patchable_tag_file_backend::tag_file_get_checksum(struct s_tag_group const *, char const *, unsigned long *)
//{
//    mangled_ppc("?tag_file_get_checksum@c_patchable_tag_file_backend@@UAA_NPBUs_tag_group@@PBDPAK@Z");
//};

//public: virtual class c_tag_file_read_interface * c_patchable_tag_file_backend::load_tag_file(class c_allocation_interface *, struct s_tag_group const *, char const *, bool *, unsigned long *, enum e_tag_file_open_result *, class c_tag_file_alternate_stream_read_iterator **)
//{
//    mangled_ppc("?load_tag_file@c_patchable_tag_file_backend@@UAAPAVc_tag_file_read_interface@@PAVc_allocation_interface@@PBUs_tag_group@@PBDPA_NPAKPAW4e_tag_file_open_result@@PAPAVc_tag_file_alternate_stream_read_iterator@@@Z");
//};

//public: virtual void c_patchable_tag_file_backend::release_tag_file(struct s_tag_group const *, char const *, class c_tag_file_read_interface *)
//{
//    mangled_ppc("?release_tag_file@c_patchable_tag_file_backend@@UAAXPBUs_tag_group@@PBDPAVc_tag_file_read_interface@@@Z");
//};

//public: virtual bool c_patchable_tag_file_backend::try_to_read_from_tag_file(struct s_tag_group const *, char const *, unsigned long, class c_basic_buffer<void>)
//{
//    mangled_ppc("?try_to_read_from_tag_file@c_patchable_tag_file_backend@@UAA_NPBUs_tag_group@@PBDKV?$c_basic_buffer@X@@@Z");
//};

//public: virtual bool c_patchable_tag_file_backend::get_total_bytes_read(unsigned __int64*)
//{
//    mangled_ppc("?get_total_bytes_read@c_patchable_tag_file_backend@@UAA_NPA_K@Z");
//};

//private: class c_tag_file_read_backend * c_patchable_tag_file_backend::find_read_backend(struct s_tag_group const *, char const *)
//{
//    mangled_ppc("?find_read_backend@c_patchable_tag_file_backend@@AAAPAVc_tag_file_read_backend@@PBUs_tag_group@@PBD@Z");
//};

//private: class c_tag_file_attribute_backend * c_patchable_tag_file_backend::find_attribute_backend(struct s_tag_group const *, char const *)
//{
//    mangled_ppc("?find_attribute_backend@c_patchable_tag_file_backend@@AAAPAVc_tag_file_attribute_backend@@PBUs_tag_group@@PBD@Z");
//};

//public: virtual class c_tag_file_write_interface * c_patchable_tag_file_backend::create_tag_file(struct s_tag_group const *, bool)
//{
//    mangled_ppc("?create_tag_file@c_patchable_tag_file_backend@@UAAPAVc_tag_file_write_interface@@PBUs_tag_group@@_N@Z");
//};

//public: virtual bool c_patchable_tag_file_backend::save_tag_file(class c_tag_file_write_interface *, char const *, unsigned long *)
//{
//    mangled_ppc("?save_tag_file@c_patchable_tag_file_backend@@UAA_NPAVc_tag_file_write_interface@@PBDPAK@Z");
//};

//public: virtual void c_patchable_tag_file_backend::cancel_save_tag_file(class c_tag_file_write_interface *)
//{
//    mangled_ppc("?cancel_save_tag_file@c_patchable_tag_file_backend@@UAAXPAVc_tag_file_write_interface@@@Z");
//};

//private: class c_tag_file_create_backend * c_patchable_tag_file_backend::find_create_backend(void)
//{
//    mangled_ppc("?find_create_backend@c_patchable_tag_file_backend@@AAAPAVc_tag_file_create_backend@@XZ");
//};

//public: virtual void c_patchable_tag_file_backend::pin(void)
//{
//    mangled_ppc("?pin@c_patchable_tag_file_backend@@UAAXXZ");
//};

//public: virtual void c_patchable_tag_file_backend::unpin(void)
//{
//    mangled_ppc("?unpin@c_patchable_tag_file_backend@@UAAXXZ");
//};

//public: virtual void * c_patchable_tag_file_backend::build_complete_tag_file_index(void const *, char const *, char const *, class c_tag_group_dictionary *, class c_allocation_interface *, bool)
//{
//    mangled_ppc("?build_complete_tag_file_index@c_patchable_tag_file_backend@@UAAPAXPBXPBD1PAVc_tag_group_dictionary@@PAVc_allocation_interface@@_N@Z");
//};

//public: virtual void const * c_patchable_tag_file_backend::try_to_get_master_tag_file_index_DONT_CACHE_DONT_MODIFY(void)
//{
//    mangled_ppc("?try_to_get_master_tag_file_index_DONT_CACHE_DONT_MODIFY@c_patchable_tag_file_backend@@UAAPBXXZ");
//};

//public: virtual bool c_patchable_tag_file_backend::tag_file_read_only(struct s_tag_group const *, char const *)
//{
//    mangled_ppc("?tag_file_read_only@c_patchable_tag_file_backend@@UAA_NPBUs_tag_group@@PBD@Z");
//};

//public: virtual bool c_patchable_tag_file_backend::tag_file_get_last_modification_date(struct s_tag_group const *, char const *, struct s_file_last_modification_date *)
//{
//    mangled_ppc("?tag_file_get_last_modification_date@c_patchable_tag_file_backend@@UAA_NPBUs_tag_group@@PBDPAUs_file_last_modification_date@@@Z");
//};

//public: virtual void c_patchable_tag_file_backend::predict_tag_load(class c_tag_files_prediction_manager *, class c_tag_file_prefetch_tag_read_context *, struct s_tag_group const *, char const *)
//{
//    mangled_ppc("?predict_tag_load@c_patchable_tag_file_backend@@UAAXPAVc_tag_files_prediction_manager@@PAVc_tag_file_prefetch_tag_read_context@@PBUs_tag_group@@PBD@Z");
//};

//public: virtual void c_patchable_tag_file_backend::predict_tag_load_from_block(class c_tag_files_prediction_manager *, class c_tag_file_prefetch_tag_read_context *, struct s_tag_block const *)
//{
//    mangled_ppc("?predict_tag_load_from_block@c_patchable_tag_file_backend@@UAAXPAVc_tag_files_prediction_manager@@PAVc_tag_file_prefetch_tag_read_context@@PBUs_tag_block@@@Z");
//};

//public: virtual void c_patchable_tag_file_backend::finished_predict_tag_load(void)
//{
//    mangled_ppc("?finished_predict_tag_load@c_patchable_tag_file_backend@@UAAXXZ");
//};

//public: virtual class c_tag_resource_runtime_manager * c_patchable_tag_file_backend::get_runtime_manager(void)
//{
//    mangled_ppc("?get_runtime_manager@c_patchable_tag_file_backend@@UAAPAVc_tag_resource_runtime_manager@@XZ");
//};

//public: virtual class c_tag_resource_persist_writer * c_patchable_tag_file_backend::get_persist_writer(void)
//{
//    mangled_ppc("?get_persist_writer@c_patchable_tag_file_backend@@UAAPAVc_tag_resource_persist_writer@@XZ");
//};

//public: virtual class c_tag_resource_persist_reader * c_patchable_tag_file_backend::get_persist_reader(struct s_tag_group const *, char const *)
//{
//    mangled_ppc("?get_persist_reader@c_patchable_tag_file_backend@@UAAPAVc_tag_resource_persist_reader@@PBUs_tag_group@@PBD@Z");
//};

//public: virtual void c_patchable_tag_file_backend::release_persist_reader(struct s_tag_group const *, char const *, class c_tag_resource_persist_reader *)
//{
//    mangled_ppc("?release_persist_reader@c_patchable_tag_file_backend@@UAAXPBUs_tag_group@@PBDPAVc_tag_resource_persist_reader@@@Z");
//};

//public: virtual void c_patchable_tag_file_backend::set_cache_file_output(class c_allocation_interface *, class c_cache_file_builder_tag_resource_output *)
//{
//    mangled_ppc("?set_cache_file_output@c_patchable_tag_file_backend@@UAAXPAVc_allocation_interface@@PAVc_cache_file_builder_tag_resource_output@@@Z");
//};

//public: virtual void c_patchable_tag_file_backend::close_cache_file_output(void)
//{
//    mangled_ppc("?close_cache_file_output@c_patchable_tag_file_backend@@UAAXXZ");
//};

//public: virtual bool c_patchable_tag_file_backend::read_tag_instance(struct s_tag_read_parameters const *, bool, enum e_tag_file_open_result *, bool *, unsigned long *, struct s_tag_group const *, char const *, struct s_tag_block *, class c_tag_alternate_stream_consumer *)
//{
//    mangled_ppc("?read_tag_instance@c_patchable_tag_file_backend@@UAA_NPBUs_tag_read_parameters@@_NPAW4e_tag_file_open_result@@PA_NPAKPBUs_tag_group@@PBDPAUs_tag_block@@PAVc_tag_alternate_stream_consumer@@@Z");
//};

//private: class c_tag_file_instance_read_backend * c_patchable_tag_file_backend::find_instance_backend(struct s_tag_group const *, char const *)
//{
//    mangled_ppc("?find_instance_backend@c_patchable_tag_file_backend@@AAAPAVc_tag_file_instance_read_backend@@PBUs_tag_group@@PBD@Z");
//};

//private: class c_tag_file_resource_backend * c_patchable_tag_file_backend::find_resource_backend(struct s_tag_group const *, char const *)
//{
//    mangled_ppc("?find_resource_backend@c_patchable_tag_file_backend@@AAAPAVc_tag_file_resource_backend@@PBUs_tag_group@@PBD@Z");
//};

//private: long c_patchable_tag_file_backend::lookup_backend_index(struct s_tag_group const *, char const *)
//{
//    mangled_ppc("?lookup_backend_index@c_patchable_tag_file_backend@@AAAJPBUs_tag_group@@PBD@Z");
//};

//bool create_patched_tag_file_backend(struct s_tag_file_backend *, struct s_tag_file_backend *, class c_allocation_interface *, struct s_tag_file_backend **)
//{
//    mangled_ppc("?create_patched_tag_file_backend@@YA_NPAUs_tag_file_backend@@0PAVc_allocation_interface@@PAPAU1@@Z");
//};

//void setup_cache_file_cache(bool)
//{
//    mangled_ppc("?setup_cache_file_cache@@YAX_N@Z");
//};

//public: c_monolithic_tag_file_backend_factory::c_monolithic_tag_file_backend_factory(char const *, char const *, bool)
//{
//    mangled_ppc("??0c_monolithic_tag_file_backend_factory@@QAA@PBD0_N@Z");
//};

//public: virtual struct s_tag_file_backend * c_monolithic_tag_file_backend_factory::create_backend(class c_allocation_interface *, class c_tag_file_backend_setup *) const
//{
//    mangled_ppc("?create_backend@c_monolithic_tag_file_backend_factory@@UBAPAUs_tag_file_backend@@PAVc_allocation_interface@@PAVc_tag_file_backend_setup@@@Z");
//};

//public: virtual void (* c_monolithic_tag_file_backend_factory::get_free_proc(void) const)(class c_allocation_interface *, struct s_tag_file_backend **)
//{
//    mangled_ppc("?get_free_proc@c_monolithic_tag_file_backend_factory@@UBAP6AXPAVc_allocation_interface@@PAPAUs_tag_file_backend@@@ZXZ");
//};

//public: c_tag_file_backend_factory::c_tag_file_backend_factory(void)
//{
//    mangled_ppc("??0c_tag_file_backend_factory@@QAA@XZ");
//};

//public: c_single_tag_file_backend_factory::c_single_tag_file_backend_factory(void)
//{
//    mangled_ppc("??0c_single_tag_file_backend_factory@@QAA@XZ");
//};

//public: virtual struct s_tag_file_backend * c_single_tag_file_backend_factory::create_backend(class c_allocation_interface *, class c_tag_file_backend_setup *) const
//{
//    mangled_ppc("?create_backend@c_single_tag_file_backend_factory@@UBAPAUs_tag_file_backend@@PAVc_allocation_interface@@PAVc_tag_file_backend_setup@@@Z");
//};

//public: virtual void (* c_single_tag_file_backend_factory::get_free_proc(void) const)(class c_allocation_interface *, struct s_tag_file_backend **)
//{
//    mangled_ppc("?get_free_proc@c_single_tag_file_backend_factory@@UBAP6AXPAVc_allocation_interface@@PAPAUs_tag_file_backend@@@ZXZ");
//};

//public: c_cache_file_builder_partition_heap_config::c_cache_file_builder_partition_heap_config(char const *, long, long, unsigned long)
//{
//    mangled_ppc("??0c_cache_file_builder_partition_heap_config@@QAA@PBDJJK@Z");
//};

//public: c_tag_file_heap_partition_config::c_tag_file_heap_partition_config(void)
//{
//    mangled_ppc("??0c_tag_file_heap_partition_config@@QAA@XZ");
//};

//public: virtual bool c_cache_file_builder_partition_heap_config::get_partition_config(long, struct s_tag_resource_cache_file_config *) const
//{
//    mangled_ppc("?get_partition_config@c_cache_file_builder_partition_heap_config@@UBA_NJPAUs_tag_resource_cache_file_config@@@Z");
//};

//public: virtual bool c_cache_file_builder_partition_heap_config::can_create_partition(long)
//{
//    mangled_ppc("?can_create_partition@c_cache_file_builder_partition_heap_config@@UAA_NJ@Z");
//};

//public: virtual long c_cache_file_builder_partition_heap_config::get_partition_page_bits(long)
//{
//    mangled_ppc("?get_partition_page_bits@c_cache_file_builder_partition_heap_config@@UAAJJ@Z");
//};

//public: virtual long c_cache_file_builder_partition_heap_config::get_partition_maximum_page_count(long)
//{
//    mangled_ppc("?get_partition_maximum_page_count@c_cache_file_builder_partition_heap_config@@UAAJJ@Z");
//};

//public: virtual unsigned long c_cache_file_builder_partition_heap_config::get_persist_chunk_tag(void) const
//{
//    mangled_ppc("?get_persist_chunk_tag@c_cache_file_builder_partition_heap_config@@UBAKXZ");
//};

//public: virtual long c_cache_file_builder_partition_heap_config::get_persist_chunk_version(void) const
//{
//    mangled_ppc("?get_persist_chunk_version@c_cache_file_builder_partition_heap_config@@UBAJXZ");
//};

//public: virtual bool c_cache_file_builder_partition_heap_config::persist(class c_persist_stream *)
//{
//    mangled_ppc("?persist@c_cache_file_builder_partition_heap_config@@UAA_NPAVc_persist_stream@@@Z");
//};

//public: virtual bool c_cache_file_builder_partition_heap_config::restore(class c_persist_stream *)
//{
//    mangled_ppc("?restore@c_cache_file_builder_partition_heap_config@@UAA_NPAVc_persist_stream@@@Z");
//};

//public: c_cache_file_builder_remote_backend_config::c_cache_file_builder_remote_backend_config(char const *, char const *, char const *)
//{
//    mangled_ppc("??0c_cache_file_builder_remote_backend_config@@QAA@PBD00@Z");
//};

//public: c_monolithic_remote_backend_config::c_monolithic_remote_backend_config(void)
//{
//    mangled_ppc("??0c_monolithic_remote_backend_config@@QAA@XZ");
//};

//public: c_cache_file_builder_remote_backend_config::c_cache_file_builder_remote_backend_config(char const *)
//{
//    mangled_ppc("??0c_cache_file_builder_remote_backend_config@@QAA@PBD@Z");
//};

//public: virtual bool c_cache_file_builder_remote_backend_config::truncate_target_files(void)
//{
//    mangled_ppc("?truncate_target_files@c_cache_file_builder_remote_backend_config@@UAA_NXZ");
//};

//public: virtual char const * c_cache_file_builder_remote_backend_config::get_state_filename(void)
//{
//    mangled_ppc("?get_state_filename@c_cache_file_builder_remote_backend_config@@UAAPBDXZ");
//};

//public: virtual char const * c_cache_file_builder_remote_backend_config::get_backup_state_filename(void)
//{
//    mangled_ppc("?get_backup_state_filename@c_cache_file_builder_remote_backend_config@@UAAPBDXZ");
//};

//public: virtual class c_tag_file_heap_partition_config * c_cache_file_builder_remote_backend_config::get_tag_heap_config(void)
//{
//    mangled_ppc("?get_tag_heap_config@c_cache_file_builder_remote_backend_config@@UAAPAVc_tag_file_heap_partition_config@@XZ");
//};

//public: virtual class c_tag_file_heap_partition_config * c_cache_file_builder_remote_backend_config::get_cache_heap_config(void)
//{
//    mangled_ppc("?get_cache_heap_config@c_cache_file_builder_remote_backend_config@@UAAPAVc_tag_file_heap_partition_config@@XZ");
//};

//bool create_cache_file_builder_cache_backend(class c_allocation_interface *, class c_tag_allocator *, class c_tag_group_dictionary *, enum e_cache_file_cache_type, class c_tag_file_backend_setup *, struct s_tag_file_backend **)
//{
//    mangled_ppc("?create_cache_file_builder_cache_backend@@YA_NPAVc_allocation_interface@@PAVc_tag_allocator@@PAVc_tag_group_dictionary@@W4e_cache_file_cache_type@@PAVc_tag_file_backend_setup@@PAPAUs_tag_file_backend@@@Z");
//};

//public: c_cache_file_builder_shared_backend_factory::c_cache_file_builder_shared_backend_factory(class c_tag_allocator *, class c_tag_group_dictionary *, char const *, class c_monolithic_remote_backend_config *, bool)
//{
//    mangled_ppc("??0c_cache_file_builder_shared_backend_factory@@QAA@PAVc_tag_allocator@@PAVc_tag_group_dictionary@@PBDPAVc_monolithic_remote_backend_config@@_N@Z");
//};

//public: virtual struct s_tag_file_backend * c_cache_file_builder_shared_backend_factory::create_backend(class c_allocation_interface *, class c_tag_file_backend_setup *) const
//{
//    mangled_ppc("?create_backend@c_cache_file_builder_shared_backend_factory@@UBAPAUs_tag_file_backend@@PAVc_allocation_interface@@PAVc_tag_file_backend_setup@@@Z");
//};

//public: virtual void (* c_cache_file_builder_shared_backend_factory::get_free_proc(void) const)(class c_allocation_interface *, struct s_tag_file_backend **)
//{
//    mangled_ppc("?get_free_proc@c_cache_file_builder_shared_backend_factory@@UBAP6AXPAVc_allocation_interface@@PAPAUs_tag_file_backend@@@ZXZ");
//};

//void dispose_cache_file_builder_cache_backend(class c_allocation_interface *, struct s_tag_file_backend **)
//{
//    mangled_ppc("?dispose_cache_file_builder_cache_backend@@YAXPAVc_allocation_interface@@PAPAUs_tag_file_backend@@@Z");
//};

//bool create_simple_patched_backend(class c_allocation_interface *, class c_tag_allocator *, class c_tag_group_dictionary *, class c_tag_file_backend_setup *, struct s_tag_file_backend **)
//{
//    mangled_ppc("?create_simple_patched_backend@@YA_NPAVc_allocation_interface@@PAVc_tag_allocator@@PAVc_tag_group_dictionary@@PAVc_tag_file_backend_setup@@PAPAUs_tag_file_backend@@@Z");
//};

//public: c_simple_resource_output_writer::c_simple_resource_output_writer(void)
//{
//    mangled_ppc("??0c_simple_resource_output_writer@@QAA@XZ");
//};

//public: virtual bool c_simple_resource_output_writer::add_blob(enum e_cache_file_section, class c_basic_buffer<void const>, unsigned long *)
//{
//    mangled_ppc("?add_blob@c_simple_resource_output_writer@@UAA_NW4e_cache_file_section@@V?$c_basic_buffer@$$CBX@@PAK@Z");
//};

//public: virtual bool c_simple_resource_output_writer::get_file_location_from_identifier(struct s_tag_persistent_identifier const &, struct s_tag_resource_cache_file_config *)
//{
//    mangled_ppc("?get_file_location_from_identifier@c_simple_resource_output_writer@@UAA_NABUs_tag_persistent_identifier@@PAUs_tag_resource_cache_file_config@@@Z");
//};

//public: virtual struct s_tag_persistent_identifier c_simple_resource_output_writer::get_output_file_identifier(enum e_cache_file_section)
//{
//    mangled_ppc("?get_output_file_identifier@c_simple_resource_output_writer@@UAA?AUs_tag_persistent_identifier@@W4e_cache_file_section@@@Z");
//};

//public: virtual class c_static_string<256> c_simple_resource_output_writer::get_output_file_path(enum e_cache_file_section)
//{
//    mangled_ppc("?get_output_file_path@c_simple_resource_output_writer@@UAA?AV?$c_static_string@$0BAA@@@W4e_cache_file_section@@@Z");
//};

//public: c_cache_file_writer::c_cache_file_writer(void)
//{
//    mangled_ppc("??0c_cache_file_writer@@QAA@XZ");
//};

//void dispose_simple_patched_backend(class c_allocation_interface *, struct s_tag_file_backend **)
//{
//    mangled_ppc("?dispose_simple_patched_backend@@YAXPAVc_allocation_interface@@PAPAUs_tag_file_backend@@@Z");
//};

//public: c_wrapped_array<class c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler>::c_wrapped_array<class c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler>(void)
//{
//    mangled_ppc("??0?$c_wrapped_array@Vc_patched_resource_datum_handler@c_patched_tag_file_resource_datum_handler@@@@QAA@XZ");
//};

//public: c_wrapped_array<struct s_patched_backend_instance>::c_wrapped_array<struct s_patched_backend_instance>(void)
//{
//    mangled_ppc("??0?$c_wrapped_array@Us_patched_backend_instance@@@@QAA@XZ");
//};

//public: void c_wrapped_array_no_init<struct s_patched_backend_instance>::set_elements(struct s_patched_backend_instance *, long)
//{
//    mangled_ppc("?set_elements@?$c_wrapped_array_no_init@Us_patched_backend_instance@@@@QAAXPAUs_patched_backend_instance@@J@Z");
//};

//public: long c_wrapped_array_no_init<struct s_patched_backend_instance>::count(void) const
//{
//    mangled_ppc("?count@?$c_wrapped_array_no_init@Us_patched_backend_instance@@@@QBAJXZ");
//};

//public: struct s_patched_backend_instance & c_array_operator_interface<class c_wrapped_array_no_init<struct s_patched_backend_instance>, struct s_patched_backend_instance>::operator[](long)
//{
//    mangled_ppc("??A?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_patched_backend_instance@@@@Us_patched_backend_instance@@@@QAAAAUs_patched_backend_instance@@J@Z");
//};

//public: struct s_patched_backend_instance * c_array_operator_interface<class c_wrapped_array_no_init<struct s_patched_backend_instance>, struct s_patched_backend_instance>::get_element(long)
//{
//    mangled_ppc("?get_element@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_patched_backend_instance@@@@Us_patched_backend_instance@@@@QAAPAUs_patched_backend_instance@@J@Z");
//};

//public: struct s_patched_backend_instance * c_array_operator_interface<class c_wrapped_array_no_init<struct s_patched_backend_instance>, struct s_patched_backend_instance>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_patched_backend_instance@@@@Us_patched_backend_instance@@@@QAAPAUs_patched_backend_instance@@XZ");
//};

//public: bool c_array_operator_interface<class c_wrapped_array_no_init<struct s_patched_backend_instance>, struct s_patched_backend_instance>::valid_index(long) const
//{
//    mangled_ppc("?valid_index@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_patched_backend_instance@@@@Us_patched_backend_instance@@@@QBA_NJ@Z");
//};

//public: long c_wrapped_array_no_init<struct s_patched_backend_setup const>::count(void) const
//{
//    mangled_ppc("?count@?$c_wrapped_array_no_init@$$CBUs_patched_backend_setup@@@@QBAJXZ");
//};

//public: struct s_patched_backend_setup const & c_array_operator_interface<class c_wrapped_array_no_init<struct s_patched_backend_setup const>, struct s_patched_backend_setup const>::operator[](long)
//{
//    mangled_ppc("??A?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CBUs_patched_backend_setup@@@@$$CBUs_patched_backend_setup@@@@QAAABUs_patched_backend_setup@@J@Z");
//};

//public: bool c_array_operator_interface<class c_wrapped_array_no_init<struct s_patched_backend_setup const>, struct s_patched_backend_setup const>::valid_index(long) const
//{
//    mangled_ppc("?valid_index@?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CBUs_patched_backend_setup@@@@$$CBUs_patched_backend_setup@@@@QBA_NJ@Z");
//};

//public: void c_wrapped_array_no_init<class c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler>::set_elements(class c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler *, long)
//{
//    mangled_ppc("?set_elements@?$c_wrapped_array_no_init@Vc_patched_resource_datum_handler@c_patched_tag_file_resource_datum_handler@@@@QAAXPAVc_patched_resource_datum_handler@c_patched_tag_file_resource_datum_handler@@J@Z");
//};

//public: struct s_patched_backend_instance * c_wrapped_array_no_init<struct s_patched_backend_instance>::begin(void)
//{
//    mangled_ppc("?begin@?$c_wrapped_array_no_init@Us_patched_backend_instance@@@@QAAPAUs_patched_backend_instance@@XZ");
//};

//public: struct s_patched_backend_instance * c_array_operator_interface<class c_wrapped_array_no_init<struct s_patched_backend_instance>, struct s_patched_backend_instance>::begin(void)
//{
//    mangled_ppc("?begin@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_patched_backend_instance@@@@Us_patched_backend_instance@@@@QAAPAUs_patched_backend_instance@@XZ");
//};

//public: long c_array_operator_interface<class c_wrapped_array_no_init<struct s_patched_backend_instance>, struct s_patched_backend_instance>::count(void) const
//{
//    mangled_ppc("?count@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_patched_backend_instance@@@@Us_patched_backend_instance@@@@QBAJXZ");
//};

//public: class c_wrapped_array_no_init<struct s_patched_backend_instance> * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_patched_backend_instance> >::get_super_class(void)
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@Us_patched_backend_instance@@@@@@QAAPAV?$c_wrapped_array_no_init@Us_patched_backend_instance@@@@XZ");
//};

//public: struct s_patched_backend_setup const * c_wrapped_array_no_init<struct s_patched_backend_setup const>::begin(void)
//{
//    mangled_ppc("?begin@?$c_wrapped_array_no_init@$$CBUs_patched_backend_setup@@@@QAAPBUs_patched_backend_setup@@XZ");
//};

//public: long c_array_operator_interface<class c_wrapped_array_no_init<struct s_patched_backend_setup const>, struct s_patched_backend_setup const>::count(void) const
//{
//    mangled_ppc("?count@?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CBUs_patched_backend_setup@@@@$$CBUs_patched_backend_setup@@@@QBAJXZ");
//};

//public: class c_wrapped_array_no_init<struct s_patched_backend_setup const> * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_patched_backend_setup const> >::get_super_class(void)
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@$$CBUs_patched_backend_setup@@@@@@QAAPAV?$c_wrapped_array_no_init@$$CBUs_patched_backend_setup@@@@XZ");
//};

//public: class c_wrapped_array_no_init<struct s_patched_backend_instance> const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_patched_backend_instance> >::get_super_class(void) const
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@Us_patched_backend_instance@@@@@@QBAPBV?$c_wrapped_array_no_init@Us_patched_backend_instance@@@@XZ");
//};

//public: class c_wrapped_array_no_init<struct s_patched_backend_setup const> const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_patched_backend_setup const> >::get_super_class(void) const
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@$$CBUs_patched_backend_setup@@@@@@QBAPBV?$c_wrapped_array_no_init@$$CBUs_patched_backend_setup@@@@XZ");
//};

//public: c_wrapped_array<struct s_patched_backend_setup const>::ctor<struct s_patched_backend_setup const>(class c_wrapped_array<struct s_patched_backend_setup const> &)
//{
//    mangled_ppc("??$?0$$CBUs_patched_backend_setup@@@?$c_wrapped_array@$$CBUs_patched_backend_setup@@@@QAA@AAV0@@Z");
//};

//class c_tag_file_index_merge_output_iterator std::set_intersection<class c_tag_file_index_forward_iterator, class c_tag_file_index_forward_iterator, class c_tag_file_index_merge_output_iterator, bool (*)(class c_tag_file_index_forward_iterator const &, class c_tag_file_index_forward_iterator)>(class c_tag_file_index_forward_iterator, class c_tag_file_index_forward_iterator, class c_tag_file_index_forward_iterator, class c_tag_file_index_forward_iterator, class c_tag_file_index_merge_output_iterator, bool (*)(class c_tag_file_index_forward_iterator const &, class c_tag_file_index_forward_iterator const &))
//{
//    mangled_ppc("??$set_intersection@Vc_tag_file_index_forward_iterator@@V1@Vc_tag_file_index_merge_output_iterator@@P6A_NABV1@0@Z@std@@YA?AVc_tag_file_index_merge_output_iterator@@Vc_tag_file_index_forward_iterator@@000V1@P6A_NABV2@2@Z@Z");
//};

//struct s_allocation_description_holder make_allocation_description<class c_patchable_tag_file_backend>(class c_patchable_tag_file_backend *&, unsigned long)
//{
//    mangled_ppc("??$make_allocation_description@Vc_patchable_tag_file_backend@@@@YA?AUs_allocation_description_holder@@AAPAVc_patchable_tag_file_backend@@K@Z");
//};

//public: c_wrapped_array<struct s_allocation_description_holder>::ctor<2>(struct s_allocation_description_holder (&)[2])
//{
//    mangled_ppc("??$?0$01@?$c_wrapped_array@Us_allocation_description_holder@@@@QAA@AAY01Us_allocation_description_holder@@@Z");
//};

//public: c_wrapped_array<struct s_patched_backend_setup const>::ctor<2>(struct s_patched_backend_setup const (&)[2])
//{
//    mangled_ppc("??$?0$01@?$c_wrapped_array@$$CBUs_patched_backend_setup@@@@QAA@AAY01$$CBUs_patched_backend_setup@@@Z");
//};

//struct s_allocation_description_holder make_allocation_description<class c_cache_file_builder_remote_backend_config>(class c_cache_file_builder_remote_backend_config *&, unsigned long)
//{
//    mangled_ppc("??$make_allocation_description@Vc_cache_file_builder_remote_backend_config@@@@YA?AUs_allocation_description_holder@@AAPAVc_cache_file_builder_remote_backend_config@@K@Z");
//};

//struct s_allocation_description_holder make_allocation_description<struct s_cache_file_cache_backend_allocation>(struct s_cache_file_cache_backend_allocation *&, unsigned long)
//{
//    mangled_ppc("??$make_allocation_description@Us_cache_file_cache_backend_allocation@@@@YA?AUs_allocation_description_holder@@AAPAUs_cache_file_cache_backend_allocation@@K@Z");
//};

//class c_wrapped_array<struct s_patched_backend_setup> make_wrapped_array<struct s_patched_backend_setup>(struct s_patched_backend_setup *, long)
//{
//    mangled_ppc("??$make_wrapped_array@Us_patched_backend_setup@@@@YA?AV?$c_wrapped_array@Us_patched_backend_setup@@@@PAUs_patched_backend_setup@@J@Z");
//};

//public: c_wrapped_array<struct s_patched_backend_setup const>::ctor<struct s_patched_backend_setup>(class c_wrapped_array<struct s_patched_backend_setup> const &)
//{
//    mangled_ppc("??$?0Us_patched_backend_setup@@@?$c_wrapped_array@$$CBUs_patched_backend_setup@@@@QAA@ABV?$c_wrapped_array@Us_patched_backend_setup@@@@@Z");
//};

//void destruct_in_place<class c_patchable_tag_file_backend>(class c_patchable_tag_file_backend *)
//{
//    mangled_ppc("??$destruct_in_place@Vc_patchable_tag_file_backend@@@@YAXPAVc_patchable_tag_file_backend@@@Z");
//};

//void destruct_in_place<class c_cache_file_builder_remote_backend_config>(class c_cache_file_builder_remote_backend_config *)
//{
//    mangled_ppc("??$destruct_in_place@Vc_cache_file_builder_remote_backend_config@@@@YAXPAVc_cache_file_builder_remote_backend_config@@@Z");
//};

//struct s_allocation_description_holder make_allocation_description<class c_simple_resource_output_writer>(class c_simple_resource_output_writer *&, unsigned long)
//{
//    mangled_ppc("??$make_allocation_description@Vc_simple_resource_output_writer@@@@YA?AUs_allocation_description_holder@@AAPAVc_simple_resource_output_writer@@K@Z");
//};

//struct s_allocation_description_holder make_allocation_description<class c_cache_file_builder_tag_resource_output_simple>(class c_cache_file_builder_tag_resource_output_simple *&, unsigned long)
//{
//    mangled_ppc("??$make_allocation_description@Vc_cache_file_builder_tag_resource_output_simple@@@@YA?AUs_allocation_description_holder@@AAPAVc_cache_file_builder_tag_resource_output_simple@@K@Z");
//};

//struct s_allocation_description_holder make_allocation_description<struct s_runtime_patched_backend_allocation>(struct s_runtime_patched_backend_allocation *&, unsigned long)
//{
//    mangled_ppc("??$make_allocation_description@Us_runtime_patched_backend_allocation@@@@YA?AUs_allocation_description_holder@@AAPAUs_runtime_patched_backend_allocation@@K@Z");
//};

//public: c_wrapped_array<struct s_patched_backend_setup const>::ctor<1>(struct s_patched_backend_setup const (&)[1])
//{
//    mangled_ppc("??$?0$00@?$c_wrapped_array@$$CBUs_patched_backend_setup@@@@QAA@AAY00$$CBUs_patched_backend_setup@@@Z");
//};

//void destruct_in_place<class c_cache_file_builder_tag_resource_output_simple>(class c_cache_file_builder_tag_resource_output_simple *)
//{
//    mangled_ppc("??$destruct_in_place@Vc_cache_file_builder_tag_resource_output_simple@@@@YAXPAVc_cache_file_builder_tag_resource_output_simple@@@Z");
//};

//void destruct_in_place<class c_simple_resource_output_writer>(class c_simple_resource_output_writer *)
//{
//    mangled_ppc("??$destruct_in_place@Vc_simple_resource_output_writer@@@@YAXPAVc_simple_resource_output_writer@@@Z");
//};

//public: void * c_simple_resource_output_writer::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_Gc_simple_resource_output_writer@@QAAPAXI@Z");
//};

//public: c_simple_resource_output_writer::~c_simple_resource_output_writer(void)
//{
//    mangled_ppc("??1c_simple_resource_output_writer@@QAA@XZ");
//};

//public: void c_wrapped_array_no_init<struct s_patched_backend_setup const>::set_elements(struct s_patched_backend_setup const *, long)
//{
//    mangled_ppc("?set_elements@?$c_wrapped_array_no_init@$$CBUs_patched_backend_setup@@@@QAAXPBUs_patched_backend_setup@@J@Z");
//};

//public: struct s_patched_backend_setup const * c_array_operator_interface<class c_wrapped_array_no_init<struct s_patched_backend_setup const>, struct s_patched_backend_setup const>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CBUs_patched_backend_setup@@@@$$CBUs_patched_backend_setup@@@@QAAPBUs_patched_backend_setup@@XZ");
//};

//public: c_wrapped_array<struct s_patched_backend_setup>::c_wrapped_array<struct s_patched_backend_setup>(struct s_patched_backend_setup *, long)
//{
//    mangled_ppc("??0?$c_wrapped_array@Us_patched_backend_setup@@@@QAA@PAUs_patched_backend_setup@@J@Z");
//};

//public: long c_wrapped_array_no_init<struct s_patched_backend_setup>::count(void) const
//{
//    mangled_ppc("?count@?$c_wrapped_array_no_init@Us_patched_backend_setup@@@@QBAJXZ");
//};

//public: struct s_patched_backend_setup const * c_array_operator_interface<class c_wrapped_array_no_init<struct s_patched_backend_setup>, struct s_patched_backend_setup>::get_elements(void) const
//{
//    mangled_ppc("?get_elements@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_patched_backend_setup@@@@Us_patched_backend_setup@@@@QBAPBUs_patched_backend_setup@@XZ");
//};

//public: c_typed_allocation_description<class c_patchable_tag_file_backend>::c_typed_allocation_description<class c_patchable_tag_file_backend>(class c_patchable_tag_file_backend *&, unsigned long)
//{
//    mangled_ppc("??0?$c_typed_allocation_description@Vc_patchable_tag_file_backend@@@@QAA@AAPAVc_patchable_tag_file_backend@@K@Z");
//};

//public: virtual unsigned long c_typed_allocation_description<class c_patchable_tag_file_backend>::get_unaligned_size(void) const
//{
//    mangled_ppc("?get_unaligned_size@?$c_typed_allocation_description@Vc_patchable_tag_file_backend@@@@UBAKXZ");
//};

//public: virtual unsigned long c_typed_allocation_description<class c_patchable_tag_file_backend>::get_alignment_bits(void) const
//{
//    mangled_ppc("?get_alignment_bits@?$c_typed_allocation_description@Vc_patchable_tag_file_backend@@@@UBAKXZ");
//};

//public: virtual void c_typed_allocation_description<class c_patchable_tag_file_backend>::assign_storage(class c_raw_storage_buffer_iterator &) const
//{
//    mangled_ppc("?assign_storage@?$c_typed_allocation_description@Vc_patchable_tag_file_backend@@@@UBAXAAVc_raw_storage_buffer_iterator@@@Z");
//};

//public: c_typed_allocation_description<class c_cache_file_builder_remote_backend_config>::c_typed_allocation_description<class c_cache_file_builder_remote_backend_config>(class c_cache_file_builder_remote_backend_config *&, unsigned long)
//{
//    mangled_ppc("??0?$c_typed_allocation_description@Vc_cache_file_builder_remote_backend_config@@@@QAA@AAPAVc_cache_file_builder_remote_backend_config@@K@Z");
//};

//public: virtual unsigned long c_typed_allocation_description<class c_cache_file_builder_remote_backend_config>::get_unaligned_size(void) const
//{
//    mangled_ppc("?get_unaligned_size@?$c_typed_allocation_description@Vc_cache_file_builder_remote_backend_config@@@@UBAKXZ");
//};

//public: virtual unsigned long c_typed_allocation_description<class c_cache_file_builder_remote_backend_config>::get_alignment_bits(void) const
//{
//    mangled_ppc("?get_alignment_bits@?$c_typed_allocation_description@Vc_cache_file_builder_remote_backend_config@@@@UBAKXZ");
//};

//public: virtual void c_typed_allocation_description<class c_cache_file_builder_remote_backend_config>::assign_storage(class c_raw_storage_buffer_iterator &) const
//{
//    mangled_ppc("?assign_storage@?$c_typed_allocation_description@Vc_cache_file_builder_remote_backend_config@@@@UBAXAAVc_raw_storage_buffer_iterator@@@Z");
//};

//public: c_typed_allocation_description<struct s_cache_file_cache_backend_allocation>::c_typed_allocation_description<struct s_cache_file_cache_backend_allocation>(struct s_cache_file_cache_backend_allocation *&, unsigned long)
//{
//    mangled_ppc("??0?$c_typed_allocation_description@Us_cache_file_cache_backend_allocation@@@@QAA@AAPAUs_cache_file_cache_backend_allocation@@K@Z");
//};

//public: virtual unsigned long c_typed_allocation_description<struct s_cache_file_cache_backend_allocation>::get_unaligned_size(void) const
//{
//    mangled_ppc("?get_unaligned_size@?$c_typed_allocation_description@Us_cache_file_cache_backend_allocation@@@@UBAKXZ");
//};

//public: virtual unsigned long c_typed_allocation_description<struct s_cache_file_cache_backend_allocation>::get_alignment_bits(void) const
//{
//    mangled_ppc("?get_alignment_bits@?$c_typed_allocation_description@Us_cache_file_cache_backend_allocation@@@@UBAKXZ");
//};

//public: virtual void c_typed_allocation_description<struct s_cache_file_cache_backend_allocation>::assign_storage(class c_raw_storage_buffer_iterator &) const
//{
//    mangled_ppc("?assign_storage@?$c_typed_allocation_description@Us_cache_file_cache_backend_allocation@@@@UBAXAAVc_raw_storage_buffer_iterator@@@Z");
//};

//public: c_typed_allocation_description<class c_simple_resource_output_writer>::c_typed_allocation_description<class c_simple_resource_output_writer>(class c_simple_resource_output_writer *&, unsigned long)
//{
//    mangled_ppc("??0?$c_typed_allocation_description@Vc_simple_resource_output_writer@@@@QAA@AAPAVc_simple_resource_output_writer@@K@Z");
//};

//public: virtual unsigned long c_typed_allocation_description<class c_simple_resource_output_writer>::get_unaligned_size(void) const
//{
//    mangled_ppc("?get_unaligned_size@?$c_typed_allocation_description@Vc_simple_resource_output_writer@@@@UBAKXZ");
//};

//public: virtual unsigned long c_typed_allocation_description<class c_simple_resource_output_writer>::get_alignment_bits(void) const
//{
//    mangled_ppc("?get_alignment_bits@?$c_typed_allocation_description@Vc_simple_resource_output_writer@@@@UBAKXZ");
//};

//public: virtual void c_typed_allocation_description<class c_simple_resource_output_writer>::assign_storage(class c_raw_storage_buffer_iterator &) const
//{
//    mangled_ppc("?assign_storage@?$c_typed_allocation_description@Vc_simple_resource_output_writer@@@@UBAXAAVc_raw_storage_buffer_iterator@@@Z");
//};

//public: c_typed_allocation_description<class c_cache_file_builder_tag_resource_output_simple>::c_typed_allocation_description<class c_cache_file_builder_tag_resource_output_simple>(class c_cache_file_builder_tag_resource_output_simple *&, unsigned long)
//{
//    mangled_ppc("??0?$c_typed_allocation_description@Vc_cache_file_builder_tag_resource_output_simple@@@@QAA@AAPAVc_cache_file_builder_tag_resource_output_simple@@K@Z");
//};

//public: virtual unsigned long c_typed_allocation_description<class c_cache_file_builder_tag_resource_output_simple>::get_unaligned_size(void) const
//{
//    mangled_ppc("?get_unaligned_size@?$c_typed_allocation_description@Vc_cache_file_builder_tag_resource_output_simple@@@@UBAKXZ");
//};

//public: virtual unsigned long c_typed_allocation_description<class c_cache_file_builder_tag_resource_output_simple>::get_alignment_bits(void) const
//{
//    mangled_ppc("?get_alignment_bits@?$c_typed_allocation_description@Vc_cache_file_builder_tag_resource_output_simple@@@@UBAKXZ");
//};

//public: virtual void c_typed_allocation_description<class c_cache_file_builder_tag_resource_output_simple>::assign_storage(class c_raw_storage_buffer_iterator &) const
//{
//    mangled_ppc("?assign_storage@?$c_typed_allocation_description@Vc_cache_file_builder_tag_resource_output_simple@@@@UBAXAAVc_raw_storage_buffer_iterator@@@Z");
//};

//public: c_typed_allocation_description<struct s_runtime_patched_backend_allocation>::c_typed_allocation_description<struct s_runtime_patched_backend_allocation>(struct s_runtime_patched_backend_allocation *&, unsigned long)
//{
//    mangled_ppc("??0?$c_typed_allocation_description@Us_runtime_patched_backend_allocation@@@@QAA@AAPAUs_runtime_patched_backend_allocation@@K@Z");
//};

//public: virtual unsigned long c_typed_allocation_description<struct s_runtime_patched_backend_allocation>::get_unaligned_size(void) const
//{
//    mangled_ppc("?get_unaligned_size@?$c_typed_allocation_description@Us_runtime_patched_backend_allocation@@@@UBAKXZ");
//};

//public: virtual unsigned long c_typed_allocation_description<struct s_runtime_patched_backend_allocation>::get_alignment_bits(void) const
//{
//    mangled_ppc("?get_alignment_bits@?$c_typed_allocation_description@Us_runtime_patched_backend_allocation@@@@UBAKXZ");
//};

//public: virtual void c_typed_allocation_description<struct s_runtime_patched_backend_allocation>::assign_storage(class c_raw_storage_buffer_iterator &) const
//{
//    mangled_ppc("?assign_storage@?$c_typed_allocation_description@Us_runtime_patched_backend_allocation@@@@UBAXAAVc_raw_storage_buffer_iterator@@@Z");
//};

//public: struct s_patched_backend_setup const * c_array_operator_interface<class c_wrapped_array_no_init<struct s_patched_backend_setup const>, struct s_patched_backend_setup const>::begin(void)
//{
//    mangled_ppc("?begin@?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CBUs_patched_backend_setup@@@@$$CBUs_patched_backend_setup@@@@QAAPBUs_patched_backend_setup@@XZ");
//};

//public: void c_wrapped_array_no_init<struct s_patched_backend_setup>::set_elements(struct s_patched_backend_setup *, long)
//{
//    mangled_ppc("?set_elements@?$c_wrapped_array_no_init@Us_patched_backend_setup@@@@QAAXPAUs_patched_backend_setup@@J@Z");
//};

//public: struct s_patched_backend_setup const * c_array_operator_interface<class c_wrapped_array_no_init<struct s_patched_backend_setup>, struct s_patched_backend_setup>::begin(void) const
//{
//    mangled_ppc("?begin@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_patched_backend_setup@@@@Us_patched_backend_setup@@@@QBAPBUs_patched_backend_setup@@XZ");
//};

//public: struct s_patched_backend_setup const * c_wrapped_array_no_init<struct s_patched_backend_setup>::begin(void) const
//{
//    mangled_ppc("?begin@?$c_wrapped_array_no_init@Us_patched_backend_setup@@@@QBAPBUs_patched_backend_setup@@XZ");
//};

//public: class c_wrapped_array_no_init<struct s_patched_backend_setup> const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_patched_backend_setup> >::get_super_class(void) const
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@Us_patched_backend_setup@@@@@@QBAPBV?$c_wrapped_array_no_init@Us_patched_backend_setup@@@@XZ");
//};

//class c_tag_file_index_forward_iterator std::_Checked_base<class c_tag_file_index_forward_iterator>(class c_tag_file_index_forward_iterator &)
//{
//    mangled_ppc("??$_Checked_base@Vc_tag_file_index_forward_iterator@@@std@@YA?AVc_tag_file_index_forward_iterator@@AAV1@@Z");
//};

//class c_tag_file_index_merge_output_iterator std::_Set_intersection<class c_tag_file_index_forward_iterator, class c_tag_file_index_forward_iterator, class c_tag_file_index_merge_output_iterator, bool (*)(class c_tag_file_index_forward_iterator const &, class c_tag_file_index_forward_iterator)>(class c_tag_file_index_forward_iterator, class c_tag_file_index_forward_iterator, class c_tag_file_index_forward_iterator, class c_tag_file_index_forward_iterator, class c_tag_file_index_merge_output_iterator, bool (*)(class c_tag_file_index_forward_iterator const &, class c_tag_file_index_forward_iterator const &), struct std::_Range_checked_iterator_tag)
//{
//    mangled_ppc("??$_Set_intersection@Vc_tag_file_index_forward_iterator@@V1@Vc_tag_file_index_merge_output_iterator@@P6A_NABV1@0@Z@std@@YA?AVc_tag_file_index_merge_output_iterator@@Vc_tag_file_index_forward_iterator@@000V1@P6A_NABV2@2@ZU_Range_checked_iterator_tag@0@@Z");
//};

//public: class c_tag_file_index_forward_iterator const & c_tag_file_index_forward_iterator::operator*(void) const
//{
//    mangled_ppc("??Dc_tag_file_index_forward_iterator@@QBAABV0@XZ");
//};

//public: bool c_tag_file_index_forward_iterator::operator!=(class c_tag_file_index_forward_iterator const &)
//{
//    mangled_ppc("??9c_tag_file_index_forward_iterator@@QAA_NABV0@@Z");
//};

//public: class c_tag_file_index_forward_iterator c_tag_file_index_forward_iterator::operator++(int)
//{
//    mangled_ppc("??Ec_tag_file_index_forward_iterator@@QAA?AV0@H@Z");
//};

//public: class c_tag_file_index_merge_output_iterator & c_tag_file_index_merge_output_iterator::operator*(void)
//{
//    mangled_ppc("??Dc_tag_file_index_merge_output_iterator@@QAAAAV0@XZ");
//};

//public: class c_tag_file_index_merge_output_iterator & c_tag_file_index_merge_output_iterator::operator=(class c_tag_file_index_forward_iterator const &)
//{
//    mangled_ppc("??4c_tag_file_index_merge_output_iterator@@QAAAAV0@ABVc_tag_file_index_forward_iterator@@@Z");
//};

//public: bool c_tag_file_index_forward_iterator::get_next_success(void) const
//{
//    mangled_ppc("?get_next_success@c_tag_file_index_forward_iterator@@QBA_NXZ");
//};

//public: class c_tag_file_index_merge_output_iterator & c_tag_file_index_merge_output_iterator::operator++(int)
//{
//    mangled_ppc("??Ec_tag_file_index_merge_output_iterator@@QAAAAV0@H@Z");
//};

//struct s_allocation_description_holder make_into_description_holder<class c_typed_allocation_description<class c_patchable_tag_file_backend> >(class c_typed_allocation_description<class c_patchable_tag_file_backend>)
//{
//    mangled_ppc("??$make_into_description_holder@V?$c_typed_allocation_description@Vc_patchable_tag_file_backend@@@@@@YA?AUs_allocation_description_holder@@V?$c_typed_allocation_description@Vc_patchable_tag_file_backend@@@@@Z");
//};

//struct s_allocation_description_holder make_into_description_holder<class c_typed_allocation_description<class c_cache_file_builder_remote_backend_config> >(class c_typed_allocation_description<class c_cache_file_builder_remote_backend_config>)
//{
//    mangled_ppc("??$make_into_description_holder@V?$c_typed_allocation_description@Vc_cache_file_builder_remote_backend_config@@@@@@YA?AUs_allocation_description_holder@@V?$c_typed_allocation_description@Vc_cache_file_builder_remote_backend_config@@@@@Z");
//};

//struct s_allocation_description_holder make_into_description_holder<class c_typed_allocation_description<struct s_cache_file_cache_backend_allocation> >(class c_typed_allocation_description<struct s_cache_file_cache_backend_allocation>)
//{
//    mangled_ppc("??$make_into_description_holder@V?$c_typed_allocation_description@Us_cache_file_cache_backend_allocation@@@@@@YA?AUs_allocation_description_holder@@V?$c_typed_allocation_description@Us_cache_file_cache_backend_allocation@@@@@Z");
//};

//struct s_allocation_description_holder make_into_description_holder<class c_typed_allocation_description<class c_simple_resource_output_writer> >(class c_typed_allocation_description<class c_simple_resource_output_writer>)
//{
//    mangled_ppc("??$make_into_description_holder@V?$c_typed_allocation_description@Vc_simple_resource_output_writer@@@@@@YA?AUs_allocation_description_holder@@V?$c_typed_allocation_description@Vc_simple_resource_output_writer@@@@@Z");
//};

//struct s_allocation_description_holder make_into_description_holder<class c_typed_allocation_description<class c_cache_file_builder_tag_resource_output_simple> >(class c_typed_allocation_description<class c_cache_file_builder_tag_resource_output_simple>)
//{
//    mangled_ppc("??$make_into_description_holder@V?$c_typed_allocation_description@Vc_cache_file_builder_tag_resource_output_simple@@@@@@YA?AUs_allocation_description_holder@@V?$c_typed_allocation_description@Vc_cache_file_builder_tag_resource_output_simple@@@@@Z");
//};

//struct s_allocation_description_holder make_into_description_holder<class c_typed_allocation_description<struct s_runtime_patched_backend_allocation> >(class c_typed_allocation_description<struct s_runtime_patched_backend_allocation>)
//{
//    mangled_ppc("??$make_into_description_holder@V?$c_typed_allocation_description@Us_runtime_patched_backend_allocation@@@@@@YA?AUs_allocation_description_holder@@V?$c_typed_allocation_description@Us_runtime_patched_backend_allocation@@@@@Z");
//};

//unsigned long get_total_unaligned_raw_size<class c_patchable_tag_file_backend>(long)
//{
//    mangled_ppc("??$get_total_unaligned_raw_size@Vc_patchable_tag_file_backend@@@@YAKJ@Z");
//};

//public: class c_patchable_tag_file_backend * c_raw_storage_buffer_iterator::get_array_elements<class c_patchable_tag_file_backend>(long)
//{
//    mangled_ppc("??$get_array_elements@Vc_patchable_tag_file_backend@@@c_raw_storage_buffer_iterator@@QAAPAVc_patchable_tag_file_backend@@J@Z");
//};

//unsigned long get_total_unaligned_raw_size<class c_cache_file_builder_remote_backend_config>(long)
//{
//    mangled_ppc("??$get_total_unaligned_raw_size@Vc_cache_file_builder_remote_backend_config@@@@YAKJ@Z");
//};

//public: class c_cache_file_builder_remote_backend_config * c_raw_storage_buffer_iterator::get_array_elements<class c_cache_file_builder_remote_backend_config>(long)
//{
//    mangled_ppc("??$get_array_elements@Vc_cache_file_builder_remote_backend_config@@@c_raw_storage_buffer_iterator@@QAAPAVc_cache_file_builder_remote_backend_config@@J@Z");
//};

//unsigned long get_total_unaligned_raw_size<struct s_cache_file_cache_backend_allocation>(long)
//{
//    mangled_ppc("??$get_total_unaligned_raw_size@Us_cache_file_cache_backend_allocation@@@@YAKJ@Z");
//};

//public: struct s_cache_file_cache_backend_allocation * c_raw_storage_buffer_iterator::get_array_elements<struct s_cache_file_cache_backend_allocation>(long)
//{
//    mangled_ppc("??$get_array_elements@Us_cache_file_cache_backend_allocation@@@c_raw_storage_buffer_iterator@@QAAPAUs_cache_file_cache_backend_allocation@@J@Z");
//};

//unsigned long get_total_unaligned_raw_size<class c_simple_resource_output_writer>(long)
//{
//    mangled_ppc("??$get_total_unaligned_raw_size@Vc_simple_resource_output_writer@@@@YAKJ@Z");
//};

//public: class c_simple_resource_output_writer * c_raw_storage_buffer_iterator::get_array_elements<class c_simple_resource_output_writer>(long)
//{
//    mangled_ppc("??$get_array_elements@Vc_simple_resource_output_writer@@@c_raw_storage_buffer_iterator@@QAAPAVc_simple_resource_output_writer@@J@Z");
//};

//unsigned long get_total_unaligned_raw_size<class c_cache_file_builder_tag_resource_output_simple>(long)
//{
//    mangled_ppc("??$get_total_unaligned_raw_size@Vc_cache_file_builder_tag_resource_output_simple@@@@YAKJ@Z");
//};

//public: class c_cache_file_builder_tag_resource_output_simple * c_raw_storage_buffer_iterator::get_array_elements<class c_cache_file_builder_tag_resource_output_simple>(long)
//{
//    mangled_ppc("??$get_array_elements@Vc_cache_file_builder_tag_resource_output_simple@@@c_raw_storage_buffer_iterator@@QAAPAVc_cache_file_builder_tag_resource_output_simple@@J@Z");
//};

//unsigned long get_total_unaligned_raw_size<struct s_runtime_patched_backend_allocation>(long)
//{
//    mangled_ppc("??$get_total_unaligned_raw_size@Us_runtime_patched_backend_allocation@@@@YAKJ@Z");
//};

//public: struct s_runtime_patched_backend_allocation * c_raw_storage_buffer_iterator::get_array_elements<struct s_runtime_patched_backend_allocation>(long)
//{
//    mangled_ppc("??$get_array_elements@Us_runtime_patched_backend_allocation@@@c_raw_storage_buffer_iterator@@QAAPAUs_runtime_patched_backend_allocation@@J@Z");
//};

//class c_tag_file_index_forward_iterator std::_Checked_base<class c_tag_file_index_forward_iterator>(class c_tag_file_index_forward_iterator &, struct std::_Unchanged_checked_iterator_base_type_tag)
//{
//    mangled_ppc("??$_Checked_base@Vc_tag_file_index_forward_iterator@@@std@@YA?AVc_tag_file_index_forward_iterator@@AAV1@U_Unchanged_checked_iterator_base_type_tag@0@@Z");
//};

//void std::_Debug_order<class c_tag_file_index_forward_iterator, bool (*)(class c_tag_file_index_forward_iterator const &, class c_tag_file_index_forward_iterator)>(class c_tag_file_index_forward_iterator, class c_tag_file_index_forward_iterator, bool (*)(class c_tag_file_index_forward_iterator const &, class c_tag_file_index_forward_iterator const &), wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_order@Vc_tag_file_index_forward_iterator@@P6A_NABV1@0@Z@std@@YAXVc_tag_file_index_forward_iterator@@0P6A_NABV1@1@ZPB_WI@Z");
//};

//void std::_Debug_pointer<class c_tag_file_index_merge_output_iterator>(class c_tag_file_index_merge_output_iterator &, wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_pointer@Vc_tag_file_index_merge_output_iterator@@@std@@YAXAAVc_tag_file_index_merge_output_iterator@@PB_WI@Z");
//};

//bool std::_Debug_lt_pred<bool (*)(class c_tag_file_index_forward_iterator const &, class c_tag_file_index_forward_iterator const &), class c_tag_file_index_forward_iterator, class c_tag_file_index_forward_iterator>(bool (*)(class c_tag_file_index_forward_iterator const &, class c_tag_file_index_forward_iterator const &), class c_tag_file_index_forward_iterator const &, class c_tag_file_index_forward_iterator const &, wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_lt_pred@P6A_NABVc_tag_file_index_forward_iterator@@0@ZV1@V1@@std@@YA_NP6A_NABVc_tag_file_index_forward_iterator@@0@Z00PB_WI@Z");
//};

//void std::_Debug_range<class c_tag_file_index_forward_iterator>(class c_tag_file_index_forward_iterator, class c_tag_file_index_forward_iterator, wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_range@Vc_tag_file_index_forward_iterator@@@std@@YAXVc_tag_file_index_forward_iterator@@0PB_WI@Z");
//};

//void std::_Debug_pointer<bool (class c_tag_file_index_forward_iterator const &, class c_tag_file_index_forward_iterator const &)>(bool (*)(class c_tag_file_index_forward_iterator const &, class c_tag_file_index_forward_iterator const &), wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_pointer@$$A6A_NABVc_tag_file_index_forward_iterator@@0@Z@std@@YAXP6A_NABVc_tag_file_index_forward_iterator@@0@ZPB_WI@Z");
//};

//struct std::forward_iterator_tag std::_Iter_cat<class c_tag_file_index_forward_iterator>(class c_tag_file_index_forward_iterator const &)
//{
//    mangled_ppc("??$_Iter_cat@Vc_tag_file_index_forward_iterator@@@std@@YA?AUforward_iterator_tag@0@ABVc_tag_file_index_forward_iterator@@@Z");
//};

//void std::_Debug_order2<class c_tag_file_index_forward_iterator, bool (*)(class c_tag_file_index_forward_iterator const &, class c_tag_file_index_forward_iterator)>(class c_tag_file_index_forward_iterator, class c_tag_file_index_forward_iterator, bool (*)(class c_tag_file_index_forward_iterator const &, class c_tag_file_index_forward_iterator const &), wchar_t const *, unsigned int, struct std::forward_iterator_tag)
//{
//    mangled_ppc("??$_Debug_order2@Vc_tag_file_index_forward_iterator@@P6A_NABV1@0@Z@std@@YAXVc_tag_file_index_forward_iterator@@0P6A_NABV1@1@ZPB_WIUforward_iterator_tag@0@@Z");
//};

//void std::_Debug_range2<class c_tag_file_index_forward_iterator>(class c_tag_file_index_forward_iterator, class c_tag_file_index_forward_iterator, wchar_t const *, unsigned int, struct std::input_iterator_tag)
//{
//    mangled_ppc("??$_Debug_range2@Vc_tag_file_index_forward_iterator@@@std@@YAXVc_tag_file_index_forward_iterator@@0PB_WIUinput_iterator_tag@0@@Z");
//};

//[thunk]: public: virtual void * c_patchable_tag_file_backend::`vector deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_Ec_patchable_tag_file_backend@@WM@AAPAXI@Z");
//};

//[thunk]: public: virtual void * c_patchable_tag_file_backend::`vector deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_Ec_patchable_tag_file_backend@@WBA@AAPAXI@Z");
//};

//[thunk]: public: virtual void * c_patchable_tag_file_backend::`vector deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_Ec_patchable_tag_file_backend@@WBE@AAPAXI@Z");
//};

//[thunk]: public: virtual void * c_patchable_tag_file_backend::`vector deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_Ec_patchable_tag_file_backend@@WBI@AAPAXI@Z");
//};

//[thunk]: public: virtual void * c_patchable_tag_file_backend::`vector deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_Ec_patchable_tag_file_backend@@WBM@AAPAXI@Z");
//};

//[thunk]: public: virtual void * c_patchable_tag_file_backend::`vector deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_Ec_patchable_tag_file_backend@@W3AAPAXI@Z");
//};

//[thunk]: public: virtual void * c_patchable_tag_file_backend::`vector deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_Ec_patchable_tag_file_backend@@W7AAPAXI@Z");
//};

