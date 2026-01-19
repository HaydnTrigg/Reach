/* ---------- headers */

#include "omaha\tag_files\single_tag_file_backend.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// const c_single_tag_file_read_backend::`vftable'{for `c_tag_file_layout_cache_backend'}; // "??_7c_single_tag_file_read_backend@@6Bc_tag_file_layout_cache_backend@@@"
// const c_single_tag_file_read_backend::`vftable'{for `c_tag_file_read_backend'}; // "??_7c_single_tag_file_read_backend@@6Bc_tag_file_read_backend@@@"
// const c_single_tag_file_resource_and_cache_builder_backend::`vftable'{for `c_tag_file_cache_builder_backend'}; // "??_7c_single_tag_file_resource_and_cache_builder_backend@@6Bc_tag_file_cache_builder_backend@@@"
// const c_single_tag_file_resource_and_cache_builder_backend::`vftable'{for `c_tag_file_resource_backend'}; // "??_7c_single_tag_file_resource_and_cache_builder_backend@@6Bc_tag_file_resource_backend@@@"
// long volatile `public: bool __cdecl c_single_tag_file_read_stream<class c_buffered_file_stream>::open(class c_allocation_interface *, struct s_tag_group const *, char const *, class c_single_tag_file_layout_reader *, unsigned __int64*, bool *)'::`47'::x_event_category_index; // "?x_event_category_index@?CP@??open@?$c_single_tag_file_read_stream@Vc_buffered_file_stream@@@@QAA_NPAVc_allocation_interface@@PBUs_tag_group@@PBDPAVc_single_tag_file_layout_reader@@PA_KPA_N@Z@4JC"
// long volatile `public: bool __cdecl c_single_tag_file_read_stream<class c_buffered_file_stream>::open(class c_allocation_interface *, struct s_tag_group const *, char const *, class c_single_tag_file_layout_reader *, unsigned __int64*, bool *)'::`38'::x_event_category_index; // "?x_event_category_index@?CG@??open@?$c_single_tag_file_read_stream@Vc_buffered_file_stream@@@@QAA_NPAVc_allocation_interface@@PBUs_tag_group@@PBDPAVc_single_tag_file_layout_reader@@PA_KPA_N@Z@4JC"
// long volatile `public: bool __cdecl c_single_tag_file_read_stream<class c_simple_file_persist_stream>::open(class c_allocation_interface *, struct s_tag_group const *, char const *, class c_single_tag_file_layout_reader *, unsigned __int64*, bool *)'::`47'::x_event_category_index; // "?x_event_category_index@?CP@??open@?$c_single_tag_file_read_stream@Vc_simple_file_persist_stream@@@@QAA_NPAVc_allocation_interface@@PBUs_tag_group@@PBDPAVc_single_tag_file_layout_reader@@PA_KPA_N@Z@4JC"
// long volatile `public: bool __cdecl c_single_tag_file_read_stream<class c_simple_file_persist_stream>::open(class c_allocation_interface *, struct s_tag_group const *, char const *, class c_single_tag_file_layout_reader *, unsigned __int64*, bool *)'::`38'::x_event_category_index; // "?x_event_category_index@?CG@??open@?$c_single_tag_file_read_stream@Vc_simple_file_persist_stream@@@@QAA_NPAVc_allocation_interface@@PBUs_tag_group@@PBDPAVc_single_tag_file_layout_reader@@PA_KPA_N@Z@4JC"

// public: c_single_tag_file_read_backend::c_single_tag_file_read_backend(void);
// merged_835DBDA8;
// public: c_tag_file_read_backend::c_tag_file_read_backend(void);
// merged_835DBE10;
// public: virtual c_tag_file_read_backend::~c_tag_file_read_backend(void);
// public: c_tag_file_layout_cache_backend::c_tag_file_layout_cache_backend(void);
// merged_835DBE90;
// public: virtual c_tag_file_layout_cache_backend::~c_tag_file_layout_cache_backend(void);
// public: c_single_tag_file_read_stream<class c_buffered_file_stream>::c_single_tag_file_read_stream<class c_buffered_file_stream>(void);
// public: virtual c_single_tag_file_read_backend::~c_single_tag_file_read_backend(void);
// public: c_single_tag_file_read_stream<class c_buffered_file_stream>::~c_single_tag_file_read_stream<class c_buffered_file_stream>(void);
// public: virtual bool c_single_tag_file_read_backend::can_load_tags(void);
// public: virtual bool c_single_tag_file_read_backend::tag_file_exists(struct s_tag_group const *, char const *);
// public: virtual bool c_single_tag_file_read_backend::tag_file_get_checksum(struct s_tag_group const *, char const *, unsigned long *);
// public: virtual class c_tag_file_read_interface * c_single_tag_file_read_backend::load_tag_file(class c_allocation_interface *, struct s_tag_group const *, char const *, bool *, unsigned long *, enum e_tag_file_open_result *, class c_tag_file_alternate_stream_read_iterator **);
// public: virtual void c_single_tag_file_read_backend::release_tag_file(struct s_tag_group const *, char const *, class c_tag_file_read_interface *);
// public: virtual bool c_single_tag_file_read_backend::get_total_bytes_read(unsigned __int64*);
// public: virtual bool c_single_tag_file_read_backend::try_to_read_from_tag_file(struct s_tag_group const *, char const *, unsigned long, class c_basic_buffer<void>);
// ?pin@?Ic_tag_file_layout_cache_backend@c_single_tag_file_read_backend@@UAAXXZ;
// ?unpin@?Ic_tag_file_layout_cache_backend@c_single_tag_file_read_backend@@UAAXXZ;
// public: virtual void c_single_tag_file_synchronous_read_backend::hint_read(struct s_tag_group const *, char const *);
// public: virtual bool c_single_tag_file_synchronous_read_backend::tag_file_read(struct s_tag_group const *, char const *, unsigned long, unsigned long, bool, void *);
// public: c_single_tag_file_read_stream<class c_simple_file_persist_stream>::c_single_tag_file_read_stream<class c_simple_file_persist_stream>(void);
// public: c_single_tag_file_read_stream<class c_simple_file_persist_stream>::~c_single_tag_file_read_stream<class c_simple_file_persist_stream>(void);
// public: virtual void c_single_tag_file_synchronous_read_backend::unhint_read(struct s_tag_group const *, char const *);
// public: c_single_tag_file_create_backend::c_single_tag_file_create_backend(class c_allocation_interface *, unsigned long);
// merged_835DC918;
// public: c_tag_file_create_backend::c_tag_file_create_backend(void);
// merged_835DC980;
// public: virtual c_tag_file_create_backend::~c_tag_file_create_backend(void);
// public: virtual c_single_tag_file_create_backend::~c_single_tag_file_create_backend(void);
// public: virtual class c_tag_file_write_interface * c_single_tag_file_create_backend::create_tag_file(struct s_tag_group const *, bool);
// public: virtual bool c_single_tag_file_create_backend::save_tag_file(class c_tag_file_write_interface *, char const *, unsigned long *);
// public: virtual void c_single_tag_file_create_backend::cancel_save_tag_file(class c_tag_file_write_interface *);
// char const * single_tag_file_get_directory_path(void);
// void single_tag_file_get_file_reference(struct s_tag_group const *, char const *, struct s_file_reference *);
// public: virtual void * c_single_tag_file_index_backend::build_complete_tag_file_index(void const *, char const *, char const *, class c_tag_group_dictionary *, class c_allocation_interface *, bool);
// public: static bool s_single_tag_file_index_builder::next_new(void *, class c_static_string<256> *, struct s_tag_group const **, struct s_file_last_modification_date *);
// bool file_reference_is_single_tag_file(struct s_file_reference const *, class c_tag_group_dictionary *, struct s_tag_group const **, class c_static_string<256> *);
// public: static void s_single_tag_file_index_builder::reset(void *);
// public: virtual void const * c_single_tag_file_index_backend::try_to_get_master_tag_file_index_DONT_CACHE_DONT_MODIFY(void);
// public: virtual char const * c_single_tag_file_directory_backend::get_root_directory(void);
// public: virtual bool c_single_tag_file_directory_backend::tag_file_get_file_reference(struct s_tag_group const *, char const *, struct s_file_reference *);
// public: virtual bool c_single_tag_file_directory_backend::file_reference_is_tag_file(struct s_file_reference const *, class c_tag_group_dictionary *, struct s_tag_group const **, class c_static_string<256> *);
// public: virtual bool c_single_tag_file_attribute_backend::tag_file_read_only(struct s_tag_group const *, char const *);
// public: virtual bool c_single_tag_file_directory_backend::tag_file_set_writeable(struct s_tag_group const *, char const *, bool);
// public: virtual bool c_single_tag_file_attribute_backend::tag_file_get_last_modification_date(struct s_tag_group const *, char const *, struct s_file_last_modification_date *);
// public: c_single_tag_file_resource_and_cache_builder_backend::c_single_tag_file_resource_and_cache_builder_backend(class c_tag_file_backend_setup *);
// merged_835DDB10;
// public: c_tag_file_resource_backend::c_tag_file_resource_backend(void);
// merged_835DDB78;
// public: virtual c_tag_file_resource_backend::~c_tag_file_resource_backend(void);
// public: c_tag_file_cache_builder_backend::c_tag_file_cache_builder_backend(void);
// merged_835DDBF8;
// public: virtual c_tag_file_cache_builder_backend::~c_tag_file_cache_builder_backend(void);
// public: c_default_tag_resource_simple_runtime_allocator::c_default_tag_resource_simple_runtime_allocator(void);
// public: virtual bool c_tag_resource_runtime_global_handle_allocator::save_tracked_state(class c_persist_stream *, class c_tag_resource_definition_dictionary *);
// public: virtual bool c_tag_resource_runtime_global_handle_allocator::load_tracked_state(class c_persist_stream *, class c_tag_resource_definition_dictionary *);
// public: virtual c_single_tag_file_resource_and_cache_builder_backend::~c_single_tag_file_resource_and_cache_builder_backend(void);
// public: c_tag_resource_runtime_manager_simple::~c_tag_resource_runtime_manager_simple(void);
// public: c_tag_resource_runtime_global_handle_allocator::c_tag_resource_runtime_global_handle_allocator(void);
// public: c_tag_file_backend_resource_datum_handler_simple::~c_tag_file_backend_resource_datum_handler_simple(void);
// public: virtual class c_tag_resource_runtime_manager * c_single_tag_file_resource_and_cache_builder_backend::get_runtime_manager(void);
// public: virtual class c_tag_resource_persist_reader * c_single_tag_file_resource_and_cache_builder_backend::get_persist_reader(struct s_tag_group const *, char const *);
// public: virtual void c_single_tag_file_resource_and_cache_builder_backend::release_persist_reader(struct s_tag_group const *, char const *, class c_tag_resource_persist_reader *);
// public: virtual class c_tag_resource_persist_writer * c_single_tag_file_resource_and_cache_builder_backend::get_persist_writer(void);
// public: virtual void c_single_tag_file_resource_and_cache_builder_backend::set_cache_file_output(class c_allocation_interface *, class c_cache_file_builder_tag_resource_output *);
// public: virtual void c_single_tag_file_resource_and_cache_builder_backend::close_cache_file_output(void);
// public: c_single_tag_file_instance_read_backend::c_single_tag_file_instance_read_backend(class c_tag_file_read_backend *, class c_tag_file_resource_backend *);
// public: c_tag_file_instance_read_backend::c_tag_file_instance_read_backend(void);
// public: virtual bool c_single_tag_file_instance_read_backend::read_tag_instance(struct s_tag_read_parameters const *, bool, enum e_tag_file_open_result *, bool *, unsigned long *, struct s_tag_group const *, char const *, struct s_tag_block *, class c_tag_alternate_stream_consumer *);
// bool create_single_tag_file_backend(class c_allocation_interface *, class c_tag_file_backend_setup *, struct s_tag_file_backend **);
// public: s_tag_file_backend::s_tag_file_backend(class c_tag_file_read_backend *, class c_tag_file_synchronous_read_interface *, class c_tag_file_asynchronous_read_interface *, class c_tag_file_create_backend *, class c_tag_file_index_backend *, class c_tag_file_attribute_backend *, class c_tag_file_directory_backend *, class c_tag_file_prefetch_backend *, class c_tag_file_xsync_backend *, class c_tag_file_layout_cache_backend *, class c_tag_file_resource_backend *, class c_tag_file_cache_builder_backend *, class c_tag_file_instance_read_backend *, void *);
// public: c_single_tag_file_synchronous_read_backend::c_single_tag_file_synchronous_read_backend(void);
// public: c_single_tag_file_index_backend::c_single_tag_file_index_backend(void);
// public: c_single_tag_file_attribute_backend::c_single_tag_file_attribute_backend(void);
// public: c_single_tag_file_directory_backend::c_single_tag_file_directory_backend(void);
// merged_835DE778;
// public: c_tag_file_synchronous_read_interface::c_tag_file_synchronous_read_interface(void);
// merged_835DE7E0;
// public: virtual c_tag_file_synchronous_read_interface::~c_tag_file_synchronous_read_interface(void);
// merged_835DE840;
// public: c_tag_file_index_backend::c_tag_file_index_backend(void);
// merged_835DE8A8;
// public: virtual c_tag_file_index_backend::~c_tag_file_index_backend(void);
// merged_835DE908;
// public: c_tag_file_attribute_backend::c_tag_file_attribute_backend(void);
// merged_835DE970;
// public: virtual c_tag_file_attribute_backend::~c_tag_file_attribute_backend(void);
// merged_835DE9D0;
// public: c_tag_file_directory_backend::c_tag_file_directory_backend(void);
// merged_835DEA38;
// public: virtual c_tag_file_directory_backend::~c_tag_file_directory_backend(void);
// public: virtual c_single_tag_file_synchronous_read_backend::~c_single_tag_file_synchronous_read_backend(void);
// public: virtual c_single_tag_file_index_backend::~c_single_tag_file_index_backend(void);
// public: virtual c_single_tag_file_attribute_backend::~c_single_tag_file_attribute_backend(void);
// public: virtual c_single_tag_file_directory_backend::~c_single_tag_file_directory_backend(void);
// void dispose_single_tag_file_backend(class c_allocation_interface *, struct s_tag_file_backend **);
// public: c_typed_opaque_data<class c_single_tag_file_writer, 228, 4>::c_typed_opaque_data<class c_single_tag_file_writer, 228, 4>(void);
// public: c_typed_opaque_data<class c_single_tag_file_writer, 228, 4>::~c_typed_opaque_data<class c_single_tag_file_writer, 228, 4>(void);
// public: void c_typed_opaque_data<class c_single_tag_file_writer, 228, 4>::destruct(void);
// public: class c_single_tag_file_writer * c_typed_opaque_data<class c_single_tag_file_writer, 228, 4>::get(void);
// public: class c_single_tag_file_writer * c_typed_opaque_data<class c_single_tag_file_writer, 228, 4>::try_and_get(void);
// public: bool c_typed_opaque_data<class c_single_tag_file_writer, 228, 4>::alive(void) const;
// public: c_typed_opaque_data<class c_tag_file_backend_resource_cache_file_datum_handler_simple, 1060, 4>::~c_typed_opaque_data<class c_tag_file_backend_resource_cache_file_datum_handler_simple, 1060, 4>(void);
// public: c_typed_opaque_data<class c_single_tag_file_reader, 224, 4>::c_typed_opaque_data<class c_single_tag_file_reader, 224, 4>(void);
// public: c_typed_opaque_data<class c_single_tag_file_reader, 224, 4>::~c_typed_opaque_data<class c_single_tag_file_reader, 224, 4>(void);
// public: bool c_single_tag_file_read_stream<class c_buffered_file_stream>::open(class c_allocation_interface *, struct s_tag_group const *, char const *, class c_single_tag_file_layout_reader *, unsigned __int64*, bool *);
// public: class c_single_tag_file_reader * c_single_tag_file_read_stream<class c_buffered_file_stream>::get_read_interface(void);
// public: void c_single_tag_file_read_stream<class c_buffered_file_stream>::close(void);
// public: c_typed_opaque_data<class c_buffered_file_stream, 16720, 8>::c_typed_opaque_data<class c_buffered_file_stream, 16720, 8>(void);
// public: c_typed_opaque_data<class c_buffered_file_stream, 16720, 8>::~c_typed_opaque_data<class c_buffered_file_stream, 16720, 8>(void);
// public: bool c_single_tag_file_read_stream<class c_simple_file_persist_stream>::open(class c_allocation_interface *, struct s_tag_group const *, char const *, class c_single_tag_file_layout_reader *, unsigned __int64*, bool *);
// public: bool c_single_tag_file_read_stream<class c_simple_file_persist_stream>::is_open(void);
// public: class c_single_tag_file_reader * c_single_tag_file_read_stream<class c_simple_file_persist_stream>::get_read_interface(void);
// public: void c_single_tag_file_read_stream<class c_simple_file_persist_stream>::close(void);
// public: c_typed_opaque_data<class c_simple_file_persist_stream, 292, 4>::c_typed_opaque_data<class c_simple_file_persist_stream, 292, 4>(void);
// public: c_typed_opaque_data<class c_simple_file_persist_stream, 292, 4>::~c_typed_opaque_data<class c_simple_file_persist_stream, 292, 4>(void);
// public: void c_typed_opaque_data<class c_simple_file_persist_stream, 292, 4>::destruct(void);
// public: class c_simple_file_persist_stream * c_typed_opaque_data<class c_simple_file_persist_stream, 292, 4>::get(void);
// public: bool c_typed_opaque_data<class c_simple_file_persist_stream, 292, 4>::alive(void) const;
// public: c_typed_opaque_data<class c_buffered_write_stream, 80, 8>::c_typed_opaque_data<class c_buffered_write_stream, 80, 8>(void);
// public: c_typed_opaque_data<class c_buffered_write_stream, 80, 8>::~c_typed_opaque_data<class c_buffered_write_stream, 80, 8>(void);
// public: void c_typed_opaque_data<class c_buffered_write_stream, 80, 8>::destruct(void);
// public: class c_buffered_write_stream * c_typed_opaque_data<class c_buffered_write_stream, 80, 8>::get(void);
// public: bool c_typed_opaque_data<class c_buffered_write_stream, 80, 8>::alive(void) const;
// public: void * c_single_tag_file_writer::`scalar deleting destructor'(unsigned int);
// public: c_single_tag_file_writer::~c_single_tag_file_writer(void);
// public: c_typed_opaque_data<class c_persist_chunk_writer, 44, 4>::~c_typed_opaque_data<class c_persist_chunk_writer, 44, 4>(void);
// public: c_typed_opaque_data<class c_single_tag_file_block_stream_writer, 88, 4>::~c_typed_opaque_data<class c_single_tag_file_block_stream_writer, 88, 4>(void);
// public: void c_typed_opaque_data<class c_tag_file_backend_resource_cache_file_datum_handler_simple, 1060, 4>::destruct(void);
// public: void c_typed_opaque_data<class c_single_tag_file_reader, 224, 4>::destruct(void);
// public: class c_single_tag_file_reader * c_typed_opaque_data<class c_single_tag_file_reader, 224, 4>::get(void);
// public: class c_single_tag_file_reader * c_typed_opaque_data<class c_single_tag_file_reader, 224, 4>::try_and_get(void);
// public: bool c_typed_opaque_data<class c_single_tag_file_reader, 224, 4>::alive(void) const;
// public: void c_typed_opaque_data<class c_buffered_file_stream, 16720, 8>::destruct(void);
// public: class c_buffered_file_stream * c_typed_opaque_data<class c_buffered_file_stream, 16720, 8>::get(void);
// public: bool c_typed_opaque_data<class c_buffered_file_stream, 16720, 8>::alive(void) const;
// public: void * c_tag_file_backend_resource_cache_file_datum_handler_simple::`scalar deleting destructor'(unsigned int);
// public: void c_typed_opaque_data<class c_persist_chunk_writer, 44, 4>::destruct(void);
// public: void c_typed_opaque_data<class c_single_tag_file_block_stream_writer, 88, 4>::destruct(void);
// public: void * c_persist_chunk_writer::`scalar deleting destructor'(unsigned int);
// public: void * c_single_tag_file_block_stream_writer::`scalar deleting destructor'(unsigned int);
// public: c_single_tag_file_block_stream_writer::~c_single_tag_file_block_stream_writer(void);
// public: c_typed_opaque_data<class c_checksumed_unbounded_relative_persist_stream, 32, 4>::~c_typed_opaque_data<class c_checksumed_unbounded_relative_persist_stream, 32, 4>(void);
// public: void c_typed_opaque_data<class c_checksumed_unbounded_relative_persist_stream, 32, 4>::destruct(void);
// public: class c_simple_file_persist_stream * c_typed_opaque_data<class c_simple_file_persist_stream, 292, 4>::construct<struct s_file_reference *, int>(struct s_file_reference *, int);
// public: class c_buffered_write_stream * c_typed_opaque_data<class c_buffered_write_stream, 80, 8>::construct<class c_simple_file_persist_stream *, class c_basic_buffer<void>, struct s_buffered_write_stream_stats *>(class c_simple_file_persist_stream *, class c_basic_buffer<void>, struct s_buffered_write_stream_stats *);
// public: class c_single_tag_file_writer * c_typed_opaque_data<class c_single_tag_file_writer, 228, 4>::construct<struct s_tag_group const *, class c_buffered_write_stream *, class c_default_single_tag_file_layout_writer *>(struct s_tag_group const *, class c_buffered_write_stream *, class c_default_single_tag_file_layout_writer *);
// struct s_allocation_description_holder make_allocation_description<class c_single_tag_file_read_backend>(class c_single_tag_file_read_backend *&);
// struct s_allocation_description_holder make_allocation_description<class c_single_tag_file_synchronous_read_backend>(class c_single_tag_file_synchronous_read_backend *&);
// struct s_allocation_description_holder make_allocation_description<class c_single_tag_file_index_backend>(class c_single_tag_file_index_backend *&);
// struct s_allocation_description_holder make_allocation_description<class c_single_tag_file_attribute_backend>(class c_single_tag_file_attribute_backend *&);
// struct s_allocation_description_holder make_allocation_description<class c_single_tag_file_directory_backend>(class c_single_tag_file_directory_backend *&);
// struct s_allocation_description_holder make_allocation_description<class c_single_tag_file_resource_and_cache_builder_backend>(class c_single_tag_file_resource_and_cache_builder_backend *&);
// struct s_allocation_description_holder make_allocation_description<class c_single_tag_file_instance_read_backend>(class c_single_tag_file_instance_read_backend *&);
// struct s_allocation_description_holder make_allocation_description<struct s_tag_file_backend>(struct s_tag_file_backend *&);
// public: c_wrapped_array<struct s_allocation_description_holder>::ctor<8>(struct s_allocation_description_holder (&)[8]);
// void destruct_in_place<class c_tag_file_instance_read_backend>(class c_tag_file_instance_read_backend *);
// void destruct_in_place<class c_tag_file_read_backend>(class c_tag_file_read_backend *);
// void destruct_in_place<class c_tag_file_synchronous_read_interface>(class c_tag_file_synchronous_read_interface *);
// void destruct_in_place<class c_tag_file_index_backend>(class c_tag_file_index_backend *);
// void destruct_in_place<class c_tag_file_attribute_backend>(class c_tag_file_attribute_backend *);
// void destruct_in_place<class c_tag_file_directory_backend>(class c_tag_file_directory_backend *);
// void try_and_destruct_in_place<class c_tag_file_create_backend>(class c_tag_file_create_backend *);
// void try_and_destruct_in_place<class c_tag_file_xsync_backend>(class c_tag_file_xsync_backend *);
// void destruct_in_place<class c_tag_file_resource_backend>(class c_tag_file_resource_backend *);
// public: class c_buffered_file_stream * c_typed_opaque_data<class c_buffered_file_stream, 16720, 8>::construct<struct s_file_reference *, int, unsigned __int64*>(struct s_file_reference *, int, unsigned __int64*);
// public: class c_single_tag_file_reader * c_typed_opaque_data<class c_single_tag_file_reader, 224, 4>::construct<class c_allocation_interface *, struct s_tag_group const *, class c_single_tag_file_layout_reader *, class c_buffered_file_stream *>(class c_allocation_interface *, struct s_tag_group const *, class c_single_tag_file_layout_reader *, class c_buffered_file_stream *);
// public: class c_simple_file_persist_stream * c_typed_opaque_data<class c_simple_file_persist_stream, 292, 4>::construct<struct s_file_reference *, int, unsigned __int64*>(struct s_file_reference *, int, unsigned __int64*);
// public: class c_single_tag_file_reader * c_typed_opaque_data<class c_single_tag_file_reader, 224, 4>::construct<class c_allocation_interface *, struct s_tag_group const *, class c_single_tag_file_layout_reader *, class c_simple_file_persist_stream *>(class c_allocation_interface *, struct s_tag_group const *, class c_single_tag_file_layout_reader *, class c_simple_file_persist_stream *);
// public: c_typed_allocation_description<class c_single_tag_file_read_backend>::c_typed_allocation_description<class c_single_tag_file_read_backend>(class c_single_tag_file_read_backend *&);
// public: virtual unsigned long c_typed_allocation_description<class c_single_tag_file_read_backend>::get_unaligned_size(void) const;
// public: virtual unsigned long c_typed_allocation_description<class c_single_tag_file_read_backend>::get_alignment_bits(void) const;
// public: virtual void c_typed_allocation_description<class c_single_tag_file_read_backend>::assign_storage(class c_raw_storage_buffer_iterator &) const;
// public: c_typed_allocation_description<class c_single_tag_file_synchronous_read_backend>::c_typed_allocation_description<class c_single_tag_file_synchronous_read_backend>(class c_single_tag_file_synchronous_read_backend *&);
// public: virtual unsigned long c_typed_allocation_description<class c_single_tag_file_synchronous_read_backend>::get_unaligned_size(void) const;
// public: virtual unsigned long c_typed_allocation_description<class c_single_tag_file_synchronous_read_backend>::get_alignment_bits(void) const;
// public: virtual void c_typed_allocation_description<class c_single_tag_file_synchronous_read_backend>::assign_storage(class c_raw_storage_buffer_iterator &) const;
// public: c_typed_allocation_description<class c_single_tag_file_index_backend>::c_typed_allocation_description<class c_single_tag_file_index_backend>(class c_single_tag_file_index_backend *&);
// public: virtual unsigned long c_typed_allocation_description<class c_single_tag_file_index_backend>::get_unaligned_size(void) const;
// public: virtual unsigned long c_typed_allocation_description<class c_single_tag_file_index_backend>::get_alignment_bits(void) const;
// public: virtual void c_typed_allocation_description<class c_single_tag_file_index_backend>::assign_storage(class c_raw_storage_buffer_iterator &) const;
// public: c_typed_allocation_description<class c_single_tag_file_attribute_backend>::c_typed_allocation_description<class c_single_tag_file_attribute_backend>(class c_single_tag_file_attribute_backend *&);
// public: virtual unsigned long c_typed_allocation_description<class c_single_tag_file_attribute_backend>::get_unaligned_size(void) const;
// public: virtual unsigned long c_typed_allocation_description<class c_single_tag_file_attribute_backend>::get_alignment_bits(void) const;
// public: virtual void c_typed_allocation_description<class c_single_tag_file_attribute_backend>::assign_storage(class c_raw_storage_buffer_iterator &) const;
// public: c_typed_allocation_description<class c_single_tag_file_directory_backend>::c_typed_allocation_description<class c_single_tag_file_directory_backend>(class c_single_tag_file_directory_backend *&);
// public: virtual unsigned long c_typed_allocation_description<class c_single_tag_file_directory_backend>::get_unaligned_size(void) const;
// public: virtual unsigned long c_typed_allocation_description<class c_single_tag_file_directory_backend>::get_alignment_bits(void) const;
// public: virtual void c_typed_allocation_description<class c_single_tag_file_directory_backend>::assign_storage(class c_raw_storage_buffer_iterator &) const;
// public: c_typed_allocation_description<class c_single_tag_file_resource_and_cache_builder_backend>::c_typed_allocation_description<class c_single_tag_file_resource_and_cache_builder_backend>(class c_single_tag_file_resource_and_cache_builder_backend *&);
// public: virtual unsigned long c_typed_allocation_description<class c_single_tag_file_resource_and_cache_builder_backend>::get_unaligned_size(void) const;
// public: virtual unsigned long c_typed_allocation_description<class c_single_tag_file_resource_and_cache_builder_backend>::get_alignment_bits(void) const;
// public: virtual void c_typed_allocation_description<class c_single_tag_file_resource_and_cache_builder_backend>::assign_storage(class c_raw_storage_buffer_iterator &) const;
// public: c_typed_allocation_description<class c_single_tag_file_instance_read_backend>::c_typed_allocation_description<class c_single_tag_file_instance_read_backend>(class c_single_tag_file_instance_read_backend *&);
// public: virtual unsigned long c_typed_allocation_description<class c_single_tag_file_instance_read_backend>::get_unaligned_size(void) const;
// public: virtual unsigned long c_typed_allocation_description<class c_single_tag_file_instance_read_backend>::get_alignment_bits(void) const;
// public: virtual void c_typed_allocation_description<class c_single_tag_file_instance_read_backend>::assign_storage(class c_raw_storage_buffer_iterator &) const;
// public: c_typed_allocation_description<struct s_tag_file_backend>::c_typed_allocation_description<struct s_tag_file_backend>(struct s_tag_file_backend *&);
// public: virtual unsigned long c_typed_allocation_description<struct s_tag_file_backend>::get_unaligned_size(void) const;
// public: virtual unsigned long c_typed_allocation_description<struct s_tag_file_backend>::get_alignment_bits(void) const;
// public: virtual void c_typed_allocation_description<struct s_tag_file_backend>::assign_storage(class c_raw_storage_buffer_iterator &) const;
// public: class c_simple_file_persist_stream * c_opaque_data<class c_simple_file_persist_stream, 292, 4>::get(void);
// public: class c_buffered_write_stream * c_opaque_data<class c_buffered_write_stream, 80, 8>::get(void);
// public: class c_single_tag_file_writer * c_opaque_data<class c_single_tag_file_writer, 228, 4>::get(void);
// struct s_allocation_description_holder make_into_description_holder<class c_typed_allocation_description<class c_single_tag_file_read_backend> >(class c_typed_allocation_description<class c_single_tag_file_read_backend>);
// struct s_allocation_description_holder make_into_description_holder<class c_typed_allocation_description<class c_single_tag_file_synchronous_read_backend> >(class c_typed_allocation_description<class c_single_tag_file_synchronous_read_backend>);
// struct s_allocation_description_holder make_into_description_holder<class c_typed_allocation_description<class c_single_tag_file_index_backend> >(class c_typed_allocation_description<class c_single_tag_file_index_backend>);
// struct s_allocation_description_holder make_into_description_holder<class c_typed_allocation_description<class c_single_tag_file_attribute_backend> >(class c_typed_allocation_description<class c_single_tag_file_attribute_backend>);
// struct s_allocation_description_holder make_into_description_holder<class c_typed_allocation_description<class c_single_tag_file_directory_backend> >(class c_typed_allocation_description<class c_single_tag_file_directory_backend>);
// struct s_allocation_description_holder make_into_description_holder<class c_typed_allocation_description<class c_single_tag_file_resource_and_cache_builder_backend> >(class c_typed_allocation_description<class c_single_tag_file_resource_and_cache_builder_backend>);
// struct s_allocation_description_holder make_into_description_holder<class c_typed_allocation_description<class c_single_tag_file_instance_read_backend> >(class c_typed_allocation_description<class c_single_tag_file_instance_read_backend>);
// struct s_allocation_description_holder make_into_description_holder<class c_typed_allocation_description<struct s_tag_file_backend> >(class c_typed_allocation_description<struct s_tag_file_backend>);
// void destruct_in_place<class c_tag_file_create_backend>(class c_tag_file_create_backend *);
// void destruct_in_place<class c_tag_file_xsync_backend>(class c_tag_file_xsync_backend *);
// public: class c_buffered_file_stream * c_opaque_data<class c_buffered_file_stream, 16720, 8>::get(void);
// public: class c_single_tag_file_reader * c_opaque_data<class c_single_tag_file_reader, 224, 4>::get(void);
// unsigned long get_total_unaligned_raw_size<class c_single_tag_file_read_backend>(long);
// public: class c_single_tag_file_read_backend * c_raw_storage_buffer_iterator::get_array_elements<class c_single_tag_file_read_backend>(long);
// unsigned long get_total_unaligned_raw_size<class c_single_tag_file_synchronous_read_backend>(long);
// public: class c_single_tag_file_synchronous_read_backend * c_raw_storage_buffer_iterator::get_array_elements<class c_single_tag_file_synchronous_read_backend>(long);
// unsigned long get_total_unaligned_raw_size<class c_single_tag_file_index_backend>(long);
// public: class c_single_tag_file_index_backend * c_raw_storage_buffer_iterator::get_array_elements<class c_single_tag_file_index_backend>(long);
// unsigned long get_total_unaligned_raw_size<class c_single_tag_file_attribute_backend>(long);
// public: class c_single_tag_file_attribute_backend * c_raw_storage_buffer_iterator::get_array_elements<class c_single_tag_file_attribute_backend>(long);
// unsigned long get_total_unaligned_raw_size<class c_single_tag_file_directory_backend>(long);
// public: class c_single_tag_file_directory_backend * c_raw_storage_buffer_iterator::get_array_elements<class c_single_tag_file_directory_backend>(long);
// unsigned long get_total_unaligned_raw_size<class c_single_tag_file_resource_and_cache_builder_backend>(long);
// public: class c_single_tag_file_resource_and_cache_builder_backend * c_raw_storage_buffer_iterator::get_array_elements<class c_single_tag_file_resource_and_cache_builder_backend>(long);
// unsigned long get_total_unaligned_raw_size<class c_single_tag_file_instance_read_backend>(long);
// public: class c_single_tag_file_instance_read_backend * c_raw_storage_buffer_iterator::get_array_elements<class c_single_tag_file_instance_read_backend>(long);
// unsigned long get_total_unaligned_raw_size<struct s_tag_file_backend>(long);
// public: struct s_tag_file_backend * c_raw_storage_buffer_iterator::get_array_elements<struct s_tag_file_backend>(long);
// [thunk]: public: virtual void * c_single_tag_file_read_backend::`vector deleting destructor'(unsigned int);
// [thunk]: public: virtual void * c_single_tag_file_resource_and_cache_builder_backend::`vector deleting destructor'(unsigned int);

//public: c_single_tag_file_read_backend::c_single_tag_file_read_backend(void)
//{
//    mangled_ppc("??0c_single_tag_file_read_backend@@QAA@XZ");
//};

//merged_835DBDA8
//{
//    mangled_ppc("merged_835DBDA8");
//};

//public: c_tag_file_read_backend::c_tag_file_read_backend(void)
//{
//    mangled_ppc("??0c_tag_file_read_backend@@QAA@XZ");
//};

//merged_835DBE10
//{
//    mangled_ppc("merged_835DBE10");
//};

//public: virtual c_tag_file_read_backend::~c_tag_file_read_backend(void)
//{
//    mangled_ppc("??1c_tag_file_read_backend@@UAA@XZ");
//};

//public: c_tag_file_layout_cache_backend::c_tag_file_layout_cache_backend(void)
//{
//    mangled_ppc("??0c_tag_file_layout_cache_backend@@QAA@XZ");
//};

//merged_835DBE90
//{
//    mangled_ppc("merged_835DBE90");
//};

//public: virtual c_tag_file_layout_cache_backend::~c_tag_file_layout_cache_backend(void)
//{
//    mangled_ppc("??1c_tag_file_layout_cache_backend@@UAA@XZ");
//};

//public: c_single_tag_file_read_stream<class c_buffered_file_stream>::c_single_tag_file_read_stream<class c_buffered_file_stream>(void)
//{
//    mangled_ppc("??0?$c_single_tag_file_read_stream@Vc_buffered_file_stream@@@@QAA@XZ");
//};

//public: virtual c_single_tag_file_read_backend::~c_single_tag_file_read_backend(void)
//{
//    mangled_ppc("??1c_single_tag_file_read_backend@@UAA@XZ");
//};

//public: c_single_tag_file_read_stream<class c_buffered_file_stream>::~c_single_tag_file_read_stream<class c_buffered_file_stream>(void)
//{
//    mangled_ppc("??1?$c_single_tag_file_read_stream@Vc_buffered_file_stream@@@@QAA@XZ");
//};

//public: virtual bool c_single_tag_file_read_backend::can_load_tags(void)
//{
//    mangled_ppc("?can_load_tags@c_single_tag_file_read_backend@@UAA_NXZ");
//};

//public: virtual bool c_single_tag_file_read_backend::tag_file_exists(struct s_tag_group const *, char const *)
//{
//    mangled_ppc("?tag_file_exists@c_single_tag_file_read_backend@@UAA_NPBUs_tag_group@@PBD@Z");
//};

//public: virtual bool c_single_tag_file_read_backend::tag_file_get_checksum(struct s_tag_group const *, char const *, unsigned long *)
//{
//    mangled_ppc("?tag_file_get_checksum@c_single_tag_file_read_backend@@UAA_NPBUs_tag_group@@PBDPAK@Z");
//};

//public: virtual class c_tag_file_read_interface * c_single_tag_file_read_backend::load_tag_file(class c_allocation_interface *, struct s_tag_group const *, char const *, bool *, unsigned long *, enum e_tag_file_open_result *, class c_tag_file_alternate_stream_read_iterator **)
//{
//    mangled_ppc("?load_tag_file@c_single_tag_file_read_backend@@UAAPAVc_tag_file_read_interface@@PAVc_allocation_interface@@PBUs_tag_group@@PBDPA_NPAKPAW4e_tag_file_open_result@@PAPAVc_tag_file_alternate_stream_read_iterator@@@Z");
//};

//public: virtual void c_single_tag_file_read_backend::release_tag_file(struct s_tag_group const *, char const *, class c_tag_file_read_interface *)
//{
//    mangled_ppc("?release_tag_file@c_single_tag_file_read_backend@@UAAXPBUs_tag_group@@PBDPAVc_tag_file_read_interface@@@Z");
//};

//public: virtual bool c_single_tag_file_read_backend::get_total_bytes_read(unsigned __int64*)
//{
//    mangled_ppc("?get_total_bytes_read@c_single_tag_file_read_backend@@UAA_NPA_K@Z");
//};

//public: virtual bool c_single_tag_file_read_backend::try_to_read_from_tag_file(struct s_tag_group const *, char const *, unsigned long, class c_basic_buffer<void>)
//{
//    mangled_ppc("?try_to_read_from_tag_file@c_single_tag_file_read_backend@@UAA_NPBUs_tag_group@@PBDKV?$c_basic_buffer@X@@@Z");
//};

//?pin@?Ic_tag_file_layout_cache_backend@c_single_tag_file_read_backend@@UAAXXZ
//{
//    mangled_ppc("?pin@?Ic_tag_file_layout_cache_backend@c_single_tag_file_read_backend@@UAAXXZ");
//};

//?unpin@?Ic_tag_file_layout_cache_backend@c_single_tag_file_read_backend@@UAAXXZ
//{
//    mangled_ppc("?unpin@?Ic_tag_file_layout_cache_backend@c_single_tag_file_read_backend@@UAAXXZ");
//};

//public: virtual void c_single_tag_file_synchronous_read_backend::hint_read(struct s_tag_group const *, char const *)
//{
//    mangled_ppc("?hint_read@c_single_tag_file_synchronous_read_backend@@UAAXPBUs_tag_group@@PBD@Z");
//};

//public: virtual bool c_single_tag_file_synchronous_read_backend::tag_file_read(struct s_tag_group const *, char const *, unsigned long, unsigned long, bool, void *)
//{
//    mangled_ppc("?tag_file_read@c_single_tag_file_synchronous_read_backend@@UAA_NPBUs_tag_group@@PBDKK_NPAX@Z");
//};

//public: c_single_tag_file_read_stream<class c_simple_file_persist_stream>::c_single_tag_file_read_stream<class c_simple_file_persist_stream>(void)
//{
//    mangled_ppc("??0?$c_single_tag_file_read_stream@Vc_simple_file_persist_stream@@@@QAA@XZ");
//};

//public: c_single_tag_file_read_stream<class c_simple_file_persist_stream>::~c_single_tag_file_read_stream<class c_simple_file_persist_stream>(void)
//{
//    mangled_ppc("??1?$c_single_tag_file_read_stream@Vc_simple_file_persist_stream@@@@QAA@XZ");
//};

//public: virtual void c_single_tag_file_synchronous_read_backend::unhint_read(struct s_tag_group const *, char const *)
//{
//    mangled_ppc("?unhint_read@c_single_tag_file_synchronous_read_backend@@UAAXPBUs_tag_group@@PBD@Z");
//};

//public: c_single_tag_file_create_backend::c_single_tag_file_create_backend(class c_allocation_interface *, unsigned long)
//{
//    mangled_ppc("??0c_single_tag_file_create_backend@@QAA@PAVc_allocation_interface@@K@Z");
//};

//merged_835DC918
//{
//    mangled_ppc("merged_835DC918");
//};

//public: c_tag_file_create_backend::c_tag_file_create_backend(void)
//{
//    mangled_ppc("??0c_tag_file_create_backend@@QAA@XZ");
//};

//merged_835DC980
//{
//    mangled_ppc("merged_835DC980");
//};

//public: virtual c_tag_file_create_backend::~c_tag_file_create_backend(void)
//{
//    mangled_ppc("??1c_tag_file_create_backend@@UAA@XZ");
//};

//public: virtual c_single_tag_file_create_backend::~c_single_tag_file_create_backend(void)
//{
//    mangled_ppc("??1c_single_tag_file_create_backend@@UAA@XZ");
//};

//public: virtual class c_tag_file_write_interface * c_single_tag_file_create_backend::create_tag_file(struct s_tag_group const *, bool)
//{
//    mangled_ppc("?create_tag_file@c_single_tag_file_create_backend@@UAAPAVc_tag_file_write_interface@@PBUs_tag_group@@_N@Z");
//};

//public: virtual bool c_single_tag_file_create_backend::save_tag_file(class c_tag_file_write_interface *, char const *, unsigned long *)
//{
//    mangled_ppc("?save_tag_file@c_single_tag_file_create_backend@@UAA_NPAVc_tag_file_write_interface@@PBDPAK@Z");
//};

//public: virtual void c_single_tag_file_create_backend::cancel_save_tag_file(class c_tag_file_write_interface *)
//{
//    mangled_ppc("?cancel_save_tag_file@c_single_tag_file_create_backend@@UAAXPAVc_tag_file_write_interface@@@Z");
//};

//char const * single_tag_file_get_directory_path(void)
//{
//    mangled_ppc("?single_tag_file_get_directory_path@@YAPBDXZ");
//};

//void single_tag_file_get_file_reference(struct s_tag_group const *, char const *, struct s_file_reference *)
//{
//    mangled_ppc("?single_tag_file_get_file_reference@@YAXPBUs_tag_group@@PBDPAUs_file_reference@@@Z");
//};

//public: virtual void * c_single_tag_file_index_backend::build_complete_tag_file_index(void const *, char const *, char const *, class c_tag_group_dictionary *, class c_allocation_interface *, bool)
//{
//    mangled_ppc("?build_complete_tag_file_index@c_single_tag_file_index_backend@@UAAPAXPBXPBD1PAVc_tag_group_dictionary@@PAVc_allocation_interface@@_N@Z");
//};

//public: static bool s_single_tag_file_index_builder::next_new(void *, class c_static_string<256> *, struct s_tag_group const **, struct s_file_last_modification_date *)
//{
//    mangled_ppc("?next_new@s_single_tag_file_index_builder@@SA_NPAXPAV?$c_static_string@$0BAA@@@PAPBUs_tag_group@@PAUs_file_last_modification_date@@@Z");
//};

//bool file_reference_is_single_tag_file(struct s_file_reference const *, class c_tag_group_dictionary *, struct s_tag_group const **, class c_static_string<256> *)
//{
//    mangled_ppc("?file_reference_is_single_tag_file@@YA_NPBUs_file_reference@@PAVc_tag_group_dictionary@@PAPBUs_tag_group@@PAV?$c_static_string@$0BAA@@@@Z");
//};

//public: static void s_single_tag_file_index_builder::reset(void *)
//{
//    mangled_ppc("?reset@s_single_tag_file_index_builder@@SAXPAX@Z");
//};

//public: virtual void const * c_single_tag_file_index_backend::try_to_get_master_tag_file_index_DONT_CACHE_DONT_MODIFY(void)
//{
//    mangled_ppc("?try_to_get_master_tag_file_index_DONT_CACHE_DONT_MODIFY@c_single_tag_file_index_backend@@UAAPBXXZ");
//};

//public: virtual char const * c_single_tag_file_directory_backend::get_root_directory(void)
//{
//    mangled_ppc("?get_root_directory@c_single_tag_file_directory_backend@@UAAPBDXZ");
//};

//public: virtual bool c_single_tag_file_directory_backend::tag_file_get_file_reference(struct s_tag_group const *, char const *, struct s_file_reference *)
//{
//    mangled_ppc("?tag_file_get_file_reference@c_single_tag_file_directory_backend@@UAA_NPBUs_tag_group@@PBDPAUs_file_reference@@@Z");
//};

//public: virtual bool c_single_tag_file_directory_backend::file_reference_is_tag_file(struct s_file_reference const *, class c_tag_group_dictionary *, struct s_tag_group const **, class c_static_string<256> *)
//{
//    mangled_ppc("?file_reference_is_tag_file@c_single_tag_file_directory_backend@@UAA_NPBUs_file_reference@@PAVc_tag_group_dictionary@@PAPBUs_tag_group@@PAV?$c_static_string@$0BAA@@@@Z");
//};

//public: virtual bool c_single_tag_file_attribute_backend::tag_file_read_only(struct s_tag_group const *, char const *)
//{
//    mangled_ppc("?tag_file_read_only@c_single_tag_file_attribute_backend@@UAA_NPBUs_tag_group@@PBD@Z");
//};

//public: virtual bool c_single_tag_file_directory_backend::tag_file_set_writeable(struct s_tag_group const *, char const *, bool)
//{
//    mangled_ppc("?tag_file_set_writeable@c_single_tag_file_directory_backend@@UAA_NPBUs_tag_group@@PBD_N@Z");
//};

//public: virtual bool c_single_tag_file_attribute_backend::tag_file_get_last_modification_date(struct s_tag_group const *, char const *, struct s_file_last_modification_date *)
//{
//    mangled_ppc("?tag_file_get_last_modification_date@c_single_tag_file_attribute_backend@@UAA_NPBUs_tag_group@@PBDPAUs_file_last_modification_date@@@Z");
//};

//public: c_single_tag_file_resource_and_cache_builder_backend::c_single_tag_file_resource_and_cache_builder_backend(class c_tag_file_backend_setup *)
//{
//    mangled_ppc("??0c_single_tag_file_resource_and_cache_builder_backend@@QAA@PAVc_tag_file_backend_setup@@@Z");
//};

//merged_835DDB10
//{
//    mangled_ppc("merged_835DDB10");
//};

//public: c_tag_file_resource_backend::c_tag_file_resource_backend(void)
//{
//    mangled_ppc("??0c_tag_file_resource_backend@@QAA@XZ");
//};

//merged_835DDB78
//{
//    mangled_ppc("merged_835DDB78");
//};

//public: virtual c_tag_file_resource_backend::~c_tag_file_resource_backend(void)
//{
//    mangled_ppc("??1c_tag_file_resource_backend@@UAA@XZ");
//};

//public: c_tag_file_cache_builder_backend::c_tag_file_cache_builder_backend(void)
//{
//    mangled_ppc("??0c_tag_file_cache_builder_backend@@QAA@XZ");
//};

//merged_835DDBF8
//{
//    mangled_ppc("merged_835DDBF8");
//};

//public: virtual c_tag_file_cache_builder_backend::~c_tag_file_cache_builder_backend(void)
//{
//    mangled_ppc("??1c_tag_file_cache_builder_backend@@UAA@XZ");
//};

//public: c_default_tag_resource_simple_runtime_allocator::c_default_tag_resource_simple_runtime_allocator(void)
//{
//    mangled_ppc("??0c_default_tag_resource_simple_runtime_allocator@@QAA@XZ");
//};

//public: virtual bool c_tag_resource_runtime_global_handle_allocator::save_tracked_state(class c_persist_stream *, class c_tag_resource_definition_dictionary *)
//{
//    mangled_ppc("?save_tracked_state@c_tag_resource_runtime_global_handle_allocator@@UAA_NPAVc_persist_stream@@PAVc_tag_resource_definition_dictionary@@@Z");
//};

//public: virtual bool c_tag_resource_runtime_global_handle_allocator::load_tracked_state(class c_persist_stream *, class c_tag_resource_definition_dictionary *)
//{
//    mangled_ppc("?load_tracked_state@c_tag_resource_runtime_global_handle_allocator@@UAA_NPAVc_persist_stream@@PAVc_tag_resource_definition_dictionary@@@Z");
//};

//public: virtual c_single_tag_file_resource_and_cache_builder_backend::~c_single_tag_file_resource_and_cache_builder_backend(void)
//{
//    mangled_ppc("??1c_single_tag_file_resource_and_cache_builder_backend@@UAA@XZ");
//};

//public: c_tag_resource_runtime_manager_simple::~c_tag_resource_runtime_manager_simple(void)
//{
//    mangled_ppc("??1c_tag_resource_runtime_manager_simple@@QAA@XZ");
//};

//public: c_tag_resource_runtime_global_handle_allocator::c_tag_resource_runtime_global_handle_allocator(void)
//{
//    mangled_ppc("??0c_tag_resource_runtime_global_handle_allocator@@QAA@XZ");
//};

//public: c_tag_file_backend_resource_datum_handler_simple::~c_tag_file_backend_resource_datum_handler_simple(void)
//{
//    mangled_ppc("??1c_tag_file_backend_resource_datum_handler_simple@@QAA@XZ");
//};

//public: virtual class c_tag_resource_runtime_manager * c_single_tag_file_resource_and_cache_builder_backend::get_runtime_manager(void)
//{
//    mangled_ppc("?get_runtime_manager@c_single_tag_file_resource_and_cache_builder_backend@@UAAPAVc_tag_resource_runtime_manager@@XZ");
//};

//public: virtual class c_tag_resource_persist_reader * c_single_tag_file_resource_and_cache_builder_backend::get_persist_reader(struct s_tag_group const *, char const *)
//{
//    mangled_ppc("?get_persist_reader@c_single_tag_file_resource_and_cache_builder_backend@@UAAPAVc_tag_resource_persist_reader@@PBUs_tag_group@@PBD@Z");
//};

//public: virtual void c_single_tag_file_resource_and_cache_builder_backend::release_persist_reader(struct s_tag_group const *, char const *, class c_tag_resource_persist_reader *)
//{
//    mangled_ppc("?release_persist_reader@c_single_tag_file_resource_and_cache_builder_backend@@UAAXPBUs_tag_group@@PBDPAVc_tag_resource_persist_reader@@@Z");
//};

//public: virtual class c_tag_resource_persist_writer * c_single_tag_file_resource_and_cache_builder_backend::get_persist_writer(void)
//{
//    mangled_ppc("?get_persist_writer@c_single_tag_file_resource_and_cache_builder_backend@@UAAPAVc_tag_resource_persist_writer@@XZ");
//};

//public: virtual void c_single_tag_file_resource_and_cache_builder_backend::set_cache_file_output(class c_allocation_interface *, class c_cache_file_builder_tag_resource_output *)
//{
//    mangled_ppc("?set_cache_file_output@c_single_tag_file_resource_and_cache_builder_backend@@UAAXPAVc_allocation_interface@@PAVc_cache_file_builder_tag_resource_output@@@Z");
//};

//public: virtual void c_single_tag_file_resource_and_cache_builder_backend::close_cache_file_output(void)
//{
//    mangled_ppc("?close_cache_file_output@c_single_tag_file_resource_and_cache_builder_backend@@UAAXXZ");
//};

//public: c_single_tag_file_instance_read_backend::c_single_tag_file_instance_read_backend(class c_tag_file_read_backend *, class c_tag_file_resource_backend *)
//{
//    mangled_ppc("??0c_single_tag_file_instance_read_backend@@QAA@PAVc_tag_file_read_backend@@PAVc_tag_file_resource_backend@@@Z");
//};

//public: c_tag_file_instance_read_backend::c_tag_file_instance_read_backend(void)
//{
//    mangled_ppc("??0c_tag_file_instance_read_backend@@QAA@XZ");
//};

//public: virtual bool c_single_tag_file_instance_read_backend::read_tag_instance(struct s_tag_read_parameters const *, bool, enum e_tag_file_open_result *, bool *, unsigned long *, struct s_tag_group const *, char const *, struct s_tag_block *, class c_tag_alternate_stream_consumer *)
//{
//    mangled_ppc("?read_tag_instance@c_single_tag_file_instance_read_backend@@UAA_NPBUs_tag_read_parameters@@_NPAW4e_tag_file_open_result@@PA_NPAKPBUs_tag_group@@PBDPAUs_tag_block@@PAVc_tag_alternate_stream_consumer@@@Z");
//};

//bool create_single_tag_file_backend(class c_allocation_interface *, class c_tag_file_backend_setup *, struct s_tag_file_backend **)
//{
//    mangled_ppc("?create_single_tag_file_backend@@YA_NPAVc_allocation_interface@@PAVc_tag_file_backend_setup@@PAPAUs_tag_file_backend@@@Z");
//};

//public: s_tag_file_backend::s_tag_file_backend(class c_tag_file_read_backend *, class c_tag_file_synchronous_read_interface *, class c_tag_file_asynchronous_read_interface *, class c_tag_file_create_backend *, class c_tag_file_index_backend *, class c_tag_file_attribute_backend *, class c_tag_file_directory_backend *, class c_tag_file_prefetch_backend *, class c_tag_file_xsync_backend *, class c_tag_file_layout_cache_backend *, class c_tag_file_resource_backend *, class c_tag_file_cache_builder_backend *, class c_tag_file_instance_read_backend *, void *)
//{
//    mangled_ppc("??0s_tag_file_backend@@QAA@PAVc_tag_file_read_backend@@PAVc_tag_file_synchronous_read_interface@@PAVc_tag_file_asynchronous_read_interface@@PAVc_tag_file_create_backend@@PAVc_tag_file_index_backend@@PAVc_tag_file_attribute_backend@@PAVc_tag_file_directory_backend@@PAVc_tag_file_prefetch_backend@@PAVc_tag_file_xsync_backend@@PAVc_tag_file_layout_cache_backend@@PAVc_tag_file_resource_backend@@PAVc_tag_file_cache_builder_backend@@PAVc_tag_file_instance_read_backend@@PAX@Z");
//};

//public: c_single_tag_file_synchronous_read_backend::c_single_tag_file_synchronous_read_backend(void)
//{
//    mangled_ppc("??0c_single_tag_file_synchronous_read_backend@@QAA@XZ");
//};

//public: c_single_tag_file_index_backend::c_single_tag_file_index_backend(void)
//{
//    mangled_ppc("??0c_single_tag_file_index_backend@@QAA@XZ");
//};

//public: c_single_tag_file_attribute_backend::c_single_tag_file_attribute_backend(void)
//{
//    mangled_ppc("??0c_single_tag_file_attribute_backend@@QAA@XZ");
//};

//public: c_single_tag_file_directory_backend::c_single_tag_file_directory_backend(void)
//{
//    mangled_ppc("??0c_single_tag_file_directory_backend@@QAA@XZ");
//};

//merged_835DE778
//{
//    mangled_ppc("merged_835DE778");
//};

//public: c_tag_file_synchronous_read_interface::c_tag_file_synchronous_read_interface(void)
//{
//    mangled_ppc("??0c_tag_file_synchronous_read_interface@@QAA@XZ");
//};

//merged_835DE7E0
//{
//    mangled_ppc("merged_835DE7E0");
//};

//public: virtual c_tag_file_synchronous_read_interface::~c_tag_file_synchronous_read_interface(void)
//{
//    mangled_ppc("??1c_tag_file_synchronous_read_interface@@UAA@XZ");
//};

//merged_835DE840
//{
//    mangled_ppc("merged_835DE840");
//};

//public: c_tag_file_index_backend::c_tag_file_index_backend(void)
//{
//    mangled_ppc("??0c_tag_file_index_backend@@QAA@XZ");
//};

//merged_835DE8A8
//{
//    mangled_ppc("merged_835DE8A8");
//};

//public: virtual c_tag_file_index_backend::~c_tag_file_index_backend(void)
//{
//    mangled_ppc("??1c_tag_file_index_backend@@UAA@XZ");
//};

//merged_835DE908
//{
//    mangled_ppc("merged_835DE908");
//};

//public: c_tag_file_attribute_backend::c_tag_file_attribute_backend(void)
//{
//    mangled_ppc("??0c_tag_file_attribute_backend@@QAA@XZ");
//};

//merged_835DE970
//{
//    mangled_ppc("merged_835DE970");
//};

//public: virtual c_tag_file_attribute_backend::~c_tag_file_attribute_backend(void)
//{
//    mangled_ppc("??1c_tag_file_attribute_backend@@UAA@XZ");
//};

//merged_835DE9D0
//{
//    mangled_ppc("merged_835DE9D0");
//};

//public: c_tag_file_directory_backend::c_tag_file_directory_backend(void)
//{
//    mangled_ppc("??0c_tag_file_directory_backend@@QAA@XZ");
//};

//merged_835DEA38
//{
//    mangled_ppc("merged_835DEA38");
//};

//public: virtual c_tag_file_directory_backend::~c_tag_file_directory_backend(void)
//{
//    mangled_ppc("??1c_tag_file_directory_backend@@UAA@XZ");
//};

//public: virtual c_single_tag_file_synchronous_read_backend::~c_single_tag_file_synchronous_read_backend(void)
//{
//    mangled_ppc("??1c_single_tag_file_synchronous_read_backend@@UAA@XZ");
//};

//public: virtual c_single_tag_file_index_backend::~c_single_tag_file_index_backend(void)
//{
//    mangled_ppc("??1c_single_tag_file_index_backend@@UAA@XZ");
//};

//public: virtual c_single_tag_file_attribute_backend::~c_single_tag_file_attribute_backend(void)
//{
//    mangled_ppc("??1c_single_tag_file_attribute_backend@@UAA@XZ");
//};

//public: virtual c_single_tag_file_directory_backend::~c_single_tag_file_directory_backend(void)
//{
//    mangled_ppc("??1c_single_tag_file_directory_backend@@UAA@XZ");
//};

//void dispose_single_tag_file_backend(class c_allocation_interface *, struct s_tag_file_backend **)
//{
//    mangled_ppc("?dispose_single_tag_file_backend@@YAXPAVc_allocation_interface@@PAPAUs_tag_file_backend@@@Z");
//};

//public: c_typed_opaque_data<class c_single_tag_file_writer, 228, 4>::c_typed_opaque_data<class c_single_tag_file_writer, 228, 4>(void)
//{
//    mangled_ppc("??0?$c_typed_opaque_data@Vc_single_tag_file_writer@@$0OE@$03@@QAA@XZ");
//};

//public: c_typed_opaque_data<class c_single_tag_file_writer, 228, 4>::~c_typed_opaque_data<class c_single_tag_file_writer, 228, 4>(void)
//{
//    mangled_ppc("??1?$c_typed_opaque_data@Vc_single_tag_file_writer@@$0OE@$03@@QAA@XZ");
//};

//public: void c_typed_opaque_data<class c_single_tag_file_writer, 228, 4>::destruct(void)
//{
//    mangled_ppc("?destruct@?$c_typed_opaque_data@Vc_single_tag_file_writer@@$0OE@$03@@QAAXXZ");
//};

//public: class c_single_tag_file_writer * c_typed_opaque_data<class c_single_tag_file_writer, 228, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_typed_opaque_data@Vc_single_tag_file_writer@@$0OE@$03@@QAAPAVc_single_tag_file_writer@@XZ");
//};

//public: class c_single_tag_file_writer * c_typed_opaque_data<class c_single_tag_file_writer, 228, 4>::try_and_get(void)
//{
//    mangled_ppc("?try_and_get@?$c_typed_opaque_data@Vc_single_tag_file_writer@@$0OE@$03@@QAAPAVc_single_tag_file_writer@@XZ");
//};

//public: bool c_typed_opaque_data<class c_single_tag_file_writer, 228, 4>::alive(void) const
//{
//    mangled_ppc("?alive@?$c_typed_opaque_data@Vc_single_tag_file_writer@@$0OE@$03@@QBA_NXZ");
//};

//public: c_typed_opaque_data<class c_tag_file_backend_resource_cache_file_datum_handler_simple, 1060, 4>::~c_typed_opaque_data<class c_tag_file_backend_resource_cache_file_datum_handler_simple, 1060, 4>(void)
//{
//    mangled_ppc("??1?$c_typed_opaque_data@Vc_tag_file_backend_resource_cache_file_datum_handler_simple@@$0ECE@$03@@QAA@XZ");
//};

//public: c_typed_opaque_data<class c_single_tag_file_reader, 224, 4>::c_typed_opaque_data<class c_single_tag_file_reader, 224, 4>(void)
//{
//    mangled_ppc("??0?$c_typed_opaque_data@Vc_single_tag_file_reader@@$0OA@$03@@QAA@XZ");
//};

//public: c_typed_opaque_data<class c_single_tag_file_reader, 224, 4>::~c_typed_opaque_data<class c_single_tag_file_reader, 224, 4>(void)
//{
//    mangled_ppc("??1?$c_typed_opaque_data@Vc_single_tag_file_reader@@$0OA@$03@@QAA@XZ");
//};

//public: bool c_single_tag_file_read_stream<class c_buffered_file_stream>::open(class c_allocation_interface *, struct s_tag_group const *, char const *, class c_single_tag_file_layout_reader *, unsigned __int64*, bool *)
//{
//    mangled_ppc("?open@?$c_single_tag_file_read_stream@Vc_buffered_file_stream@@@@QAA_NPAVc_allocation_interface@@PBUs_tag_group@@PBDPAVc_single_tag_file_layout_reader@@PA_KPA_N@Z");
//};

//public: class c_single_tag_file_reader * c_single_tag_file_read_stream<class c_buffered_file_stream>::get_read_interface(void)
//{
//    mangled_ppc("?get_read_interface@?$c_single_tag_file_read_stream@Vc_buffered_file_stream@@@@QAAPAVc_single_tag_file_reader@@XZ");
//};

//public: void c_single_tag_file_read_stream<class c_buffered_file_stream>::close(void)
//{
//    mangled_ppc("?close@?$c_single_tag_file_read_stream@Vc_buffered_file_stream@@@@QAAXXZ");
//};

//public: c_typed_opaque_data<class c_buffered_file_stream, 16720, 8>::c_typed_opaque_data<class c_buffered_file_stream, 16720, 8>(void)
//{
//    mangled_ppc("??0?$c_typed_opaque_data@Vc_buffered_file_stream@@$0EBFA@$07@@QAA@XZ");
//};

//public: c_typed_opaque_data<class c_buffered_file_stream, 16720, 8>::~c_typed_opaque_data<class c_buffered_file_stream, 16720, 8>(void)
//{
//    mangled_ppc("??1?$c_typed_opaque_data@Vc_buffered_file_stream@@$0EBFA@$07@@QAA@XZ");
//};

//public: bool c_single_tag_file_read_stream<class c_simple_file_persist_stream>::open(class c_allocation_interface *, struct s_tag_group const *, char const *, class c_single_tag_file_layout_reader *, unsigned __int64*, bool *)
//{
//    mangled_ppc("?open@?$c_single_tag_file_read_stream@Vc_simple_file_persist_stream@@@@QAA_NPAVc_allocation_interface@@PBUs_tag_group@@PBDPAVc_single_tag_file_layout_reader@@PA_KPA_N@Z");
//};

//public: bool c_single_tag_file_read_stream<class c_simple_file_persist_stream>::is_open(void)
//{
//    mangled_ppc("?is_open@?$c_single_tag_file_read_stream@Vc_simple_file_persist_stream@@@@QAA_NXZ");
//};

//public: class c_single_tag_file_reader * c_single_tag_file_read_stream<class c_simple_file_persist_stream>::get_read_interface(void)
//{
//    mangled_ppc("?get_read_interface@?$c_single_tag_file_read_stream@Vc_simple_file_persist_stream@@@@QAAPAVc_single_tag_file_reader@@XZ");
//};

//public: void c_single_tag_file_read_stream<class c_simple_file_persist_stream>::close(void)
//{
//    mangled_ppc("?close@?$c_single_tag_file_read_stream@Vc_simple_file_persist_stream@@@@QAAXXZ");
//};

//public: c_typed_opaque_data<class c_simple_file_persist_stream, 292, 4>::c_typed_opaque_data<class c_simple_file_persist_stream, 292, 4>(void)
//{
//    mangled_ppc("??0?$c_typed_opaque_data@Vc_simple_file_persist_stream@@$0BCE@$03@@QAA@XZ");
//};

//public: c_typed_opaque_data<class c_simple_file_persist_stream, 292, 4>::~c_typed_opaque_data<class c_simple_file_persist_stream, 292, 4>(void)
//{
//    mangled_ppc("??1?$c_typed_opaque_data@Vc_simple_file_persist_stream@@$0BCE@$03@@QAA@XZ");
//};

//public: void c_typed_opaque_data<class c_simple_file_persist_stream, 292, 4>::destruct(void)
//{
//    mangled_ppc("?destruct@?$c_typed_opaque_data@Vc_simple_file_persist_stream@@$0BCE@$03@@QAAXXZ");
//};

//public: class c_simple_file_persist_stream * c_typed_opaque_data<class c_simple_file_persist_stream, 292, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_typed_opaque_data@Vc_simple_file_persist_stream@@$0BCE@$03@@QAAPAVc_simple_file_persist_stream@@XZ");
//};

//public: bool c_typed_opaque_data<class c_simple_file_persist_stream, 292, 4>::alive(void) const
//{
//    mangled_ppc("?alive@?$c_typed_opaque_data@Vc_simple_file_persist_stream@@$0BCE@$03@@QBA_NXZ");
//};

//public: c_typed_opaque_data<class c_buffered_write_stream, 80, 8>::c_typed_opaque_data<class c_buffered_write_stream, 80, 8>(void)
//{
//    mangled_ppc("??0?$c_typed_opaque_data@Vc_buffered_write_stream@@$0FA@$07@@QAA@XZ");
//};

//public: c_typed_opaque_data<class c_buffered_write_stream, 80, 8>::~c_typed_opaque_data<class c_buffered_write_stream, 80, 8>(void)
//{
//    mangled_ppc("??1?$c_typed_opaque_data@Vc_buffered_write_stream@@$0FA@$07@@QAA@XZ");
//};

//public: void c_typed_opaque_data<class c_buffered_write_stream, 80, 8>::destruct(void)
//{
//    mangled_ppc("?destruct@?$c_typed_opaque_data@Vc_buffered_write_stream@@$0FA@$07@@QAAXXZ");
//};

//public: class c_buffered_write_stream * c_typed_opaque_data<class c_buffered_write_stream, 80, 8>::get(void)
//{
//    mangled_ppc("?get@?$c_typed_opaque_data@Vc_buffered_write_stream@@$0FA@$07@@QAAPAVc_buffered_write_stream@@XZ");
//};

//public: bool c_typed_opaque_data<class c_buffered_write_stream, 80, 8>::alive(void) const
//{
//    mangled_ppc("?alive@?$c_typed_opaque_data@Vc_buffered_write_stream@@$0FA@$07@@QBA_NXZ");
//};

//public: void * c_single_tag_file_writer::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_Gc_single_tag_file_writer@@QAAPAXI@Z");
//};

//public: c_single_tag_file_writer::~c_single_tag_file_writer(void)
//{
//    mangled_ppc("??1c_single_tag_file_writer@@QAA@XZ");
//};

//public: c_typed_opaque_data<class c_persist_chunk_writer, 44, 4>::~c_typed_opaque_data<class c_persist_chunk_writer, 44, 4>(void)
//{
//    mangled_ppc("??1?$c_typed_opaque_data@Vc_persist_chunk_writer@@$0CM@$03@@QAA@XZ");
//};

//public: c_typed_opaque_data<class c_single_tag_file_block_stream_writer, 88, 4>::~c_typed_opaque_data<class c_single_tag_file_block_stream_writer, 88, 4>(void)
//{
//    mangled_ppc("??1?$c_typed_opaque_data@Vc_single_tag_file_block_stream_writer@@$0FI@$03@@QAA@XZ");
//};

//public: void c_typed_opaque_data<class c_tag_file_backend_resource_cache_file_datum_handler_simple, 1060, 4>::destruct(void)
//{
//    mangled_ppc("?destruct@?$c_typed_opaque_data@Vc_tag_file_backend_resource_cache_file_datum_handler_simple@@$0ECE@$03@@QAAXXZ");
//};

//public: void c_typed_opaque_data<class c_single_tag_file_reader, 224, 4>::destruct(void)
//{
//    mangled_ppc("?destruct@?$c_typed_opaque_data@Vc_single_tag_file_reader@@$0OA@$03@@QAAXXZ");
//};

//public: class c_single_tag_file_reader * c_typed_opaque_data<class c_single_tag_file_reader, 224, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_typed_opaque_data@Vc_single_tag_file_reader@@$0OA@$03@@QAAPAVc_single_tag_file_reader@@XZ");
//};

//public: class c_single_tag_file_reader * c_typed_opaque_data<class c_single_tag_file_reader, 224, 4>::try_and_get(void)
//{
//    mangled_ppc("?try_and_get@?$c_typed_opaque_data@Vc_single_tag_file_reader@@$0OA@$03@@QAAPAVc_single_tag_file_reader@@XZ");
//};

//public: bool c_typed_opaque_data<class c_single_tag_file_reader, 224, 4>::alive(void) const
//{
//    mangled_ppc("?alive@?$c_typed_opaque_data@Vc_single_tag_file_reader@@$0OA@$03@@QBA_NXZ");
//};

//public: void c_typed_opaque_data<class c_buffered_file_stream, 16720, 8>::destruct(void)
//{
//    mangled_ppc("?destruct@?$c_typed_opaque_data@Vc_buffered_file_stream@@$0EBFA@$07@@QAAXXZ");
//};

//public: class c_buffered_file_stream * c_typed_opaque_data<class c_buffered_file_stream, 16720, 8>::get(void)
//{
//    mangled_ppc("?get@?$c_typed_opaque_data@Vc_buffered_file_stream@@$0EBFA@$07@@QAAPAVc_buffered_file_stream@@XZ");
//};

//public: bool c_typed_opaque_data<class c_buffered_file_stream, 16720, 8>::alive(void) const
//{
//    mangled_ppc("?alive@?$c_typed_opaque_data@Vc_buffered_file_stream@@$0EBFA@$07@@QBA_NXZ");
//};

//public: void * c_tag_file_backend_resource_cache_file_datum_handler_simple::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_Gc_tag_file_backend_resource_cache_file_datum_handler_simple@@QAAPAXI@Z");
//};

//public: void c_typed_opaque_data<class c_persist_chunk_writer, 44, 4>::destruct(void)
//{
//    mangled_ppc("?destruct@?$c_typed_opaque_data@Vc_persist_chunk_writer@@$0CM@$03@@QAAXXZ");
//};

//public: void c_typed_opaque_data<class c_single_tag_file_block_stream_writer, 88, 4>::destruct(void)
//{
//    mangled_ppc("?destruct@?$c_typed_opaque_data@Vc_single_tag_file_block_stream_writer@@$0FI@$03@@QAAXXZ");
//};

//public: void * c_persist_chunk_writer::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_Gc_persist_chunk_writer@@QAAPAXI@Z");
//};

//public: void * c_single_tag_file_block_stream_writer::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_Gc_single_tag_file_block_stream_writer@@QAAPAXI@Z");
//};

//public: c_single_tag_file_block_stream_writer::~c_single_tag_file_block_stream_writer(void)
//{
//    mangled_ppc("??1c_single_tag_file_block_stream_writer@@QAA@XZ");
//};

//public: c_typed_opaque_data<class c_checksumed_unbounded_relative_persist_stream, 32, 4>::~c_typed_opaque_data<class c_checksumed_unbounded_relative_persist_stream, 32, 4>(void)
//{
//    mangled_ppc("??1?$c_typed_opaque_data@Vc_checksumed_unbounded_relative_persist_stream@@$0CA@$03@@QAA@XZ");
//};

//public: void c_typed_opaque_data<class c_checksumed_unbounded_relative_persist_stream, 32, 4>::destruct(void)
//{
//    mangled_ppc("?destruct@?$c_typed_opaque_data@Vc_checksumed_unbounded_relative_persist_stream@@$0CA@$03@@QAAXXZ");
//};

//public: class c_simple_file_persist_stream * c_typed_opaque_data<class c_simple_file_persist_stream, 292, 4>::construct<struct s_file_reference *, int>(struct s_file_reference *, int)
//{
//    mangled_ppc("??$construct@PAUs_file_reference@@H@?$c_typed_opaque_data@Vc_simple_file_persist_stream@@$0BCE@$03@@QAAPAVc_simple_file_persist_stream@@PAUs_file_reference@@H@Z");
//};

//public: class c_buffered_write_stream * c_typed_opaque_data<class c_buffered_write_stream, 80, 8>::construct<class c_simple_file_persist_stream *, class c_basic_buffer<void>, struct s_buffered_write_stream_stats *>(class c_simple_file_persist_stream *, class c_basic_buffer<void>, struct s_buffered_write_stream_stats *)
//{
//    mangled_ppc("??$construct@PAVc_simple_file_persist_stream@@V?$c_basic_buffer@X@@PAUs_buffered_write_stream_stats@@@?$c_typed_opaque_data@Vc_buffered_write_stream@@$0FA@$07@@QAAPAVc_buffered_write_stream@@PAVc_simple_file_persist_stream@@V?$c_basic_buffer@X@@PAUs_buffered_write_stream_stats@@@Z");
//};

//public: class c_single_tag_file_writer * c_typed_opaque_data<class c_single_tag_file_writer, 228, 4>::construct<struct s_tag_group const *, class c_buffered_write_stream *, class c_default_single_tag_file_layout_writer *>(struct s_tag_group const *, class c_buffered_write_stream *, class c_default_single_tag_file_layout_writer *)
//{
//    mangled_ppc("??$construct@PBUs_tag_group@@PAVc_buffered_write_stream@@PAVc_default_single_tag_file_layout_writer@@@?$c_typed_opaque_data@Vc_single_tag_file_writer@@$0OE@$03@@QAAPAVc_single_tag_file_writer@@PBUs_tag_group@@PAVc_buffered_write_stream@@PAVc_default_single_tag_file_layout_writer@@@Z");
//};

//struct s_allocation_description_holder make_allocation_description<class c_single_tag_file_read_backend>(class c_single_tag_file_read_backend *&)
//{
//    mangled_ppc("??$make_allocation_description@Vc_single_tag_file_read_backend@@@@YA?AUs_allocation_description_holder@@AAPAVc_single_tag_file_read_backend@@@Z");
//};

//struct s_allocation_description_holder make_allocation_description<class c_single_tag_file_synchronous_read_backend>(class c_single_tag_file_synchronous_read_backend *&)
//{
//    mangled_ppc("??$make_allocation_description@Vc_single_tag_file_synchronous_read_backend@@@@YA?AUs_allocation_description_holder@@AAPAVc_single_tag_file_synchronous_read_backend@@@Z");
//};

//struct s_allocation_description_holder make_allocation_description<class c_single_tag_file_index_backend>(class c_single_tag_file_index_backend *&)
//{
//    mangled_ppc("??$make_allocation_description@Vc_single_tag_file_index_backend@@@@YA?AUs_allocation_description_holder@@AAPAVc_single_tag_file_index_backend@@@Z");
//};

//struct s_allocation_description_holder make_allocation_description<class c_single_tag_file_attribute_backend>(class c_single_tag_file_attribute_backend *&)
//{
//    mangled_ppc("??$make_allocation_description@Vc_single_tag_file_attribute_backend@@@@YA?AUs_allocation_description_holder@@AAPAVc_single_tag_file_attribute_backend@@@Z");
//};

//struct s_allocation_description_holder make_allocation_description<class c_single_tag_file_directory_backend>(class c_single_tag_file_directory_backend *&)
//{
//    mangled_ppc("??$make_allocation_description@Vc_single_tag_file_directory_backend@@@@YA?AUs_allocation_description_holder@@AAPAVc_single_tag_file_directory_backend@@@Z");
//};

//struct s_allocation_description_holder make_allocation_description<class c_single_tag_file_resource_and_cache_builder_backend>(class c_single_tag_file_resource_and_cache_builder_backend *&)
//{
//    mangled_ppc("??$make_allocation_description@Vc_single_tag_file_resource_and_cache_builder_backend@@@@YA?AUs_allocation_description_holder@@AAPAVc_single_tag_file_resource_and_cache_builder_backend@@@Z");
//};

//struct s_allocation_description_holder make_allocation_description<class c_single_tag_file_instance_read_backend>(class c_single_tag_file_instance_read_backend *&)
//{
//    mangled_ppc("??$make_allocation_description@Vc_single_tag_file_instance_read_backend@@@@YA?AUs_allocation_description_holder@@AAPAVc_single_tag_file_instance_read_backend@@@Z");
//};

//struct s_allocation_description_holder make_allocation_description<struct s_tag_file_backend>(struct s_tag_file_backend *&)
//{
//    mangled_ppc("??$make_allocation_description@Us_tag_file_backend@@@@YA?AUs_allocation_description_holder@@AAPAUs_tag_file_backend@@@Z");
//};

//public: c_wrapped_array<struct s_allocation_description_holder>::ctor<8>(struct s_allocation_description_holder (&)[8])
//{
//    mangled_ppc("??$?0$07@?$c_wrapped_array@Us_allocation_description_holder@@@@QAA@AAY07Us_allocation_description_holder@@@Z");
//};

//void destruct_in_place<class c_tag_file_instance_read_backend>(class c_tag_file_instance_read_backend *)
//{
//    mangled_ppc("??$destruct_in_place@Vc_tag_file_instance_read_backend@@@@YAXPAVc_tag_file_instance_read_backend@@@Z");
//};

//void destruct_in_place<class c_tag_file_read_backend>(class c_tag_file_read_backend *)
//{
//    mangled_ppc("??$destruct_in_place@Vc_tag_file_read_backend@@@@YAXPAVc_tag_file_read_backend@@@Z");
//};

//void destruct_in_place<class c_tag_file_synchronous_read_interface>(class c_tag_file_synchronous_read_interface *)
//{
//    mangled_ppc("??$destruct_in_place@Vc_tag_file_synchronous_read_interface@@@@YAXPAVc_tag_file_synchronous_read_interface@@@Z");
//};

//void destruct_in_place<class c_tag_file_index_backend>(class c_tag_file_index_backend *)
//{
//    mangled_ppc("??$destruct_in_place@Vc_tag_file_index_backend@@@@YAXPAVc_tag_file_index_backend@@@Z");
//};

//void destruct_in_place<class c_tag_file_attribute_backend>(class c_tag_file_attribute_backend *)
//{
//    mangled_ppc("??$destruct_in_place@Vc_tag_file_attribute_backend@@@@YAXPAVc_tag_file_attribute_backend@@@Z");
//};

//void destruct_in_place<class c_tag_file_directory_backend>(class c_tag_file_directory_backend *)
//{
//    mangled_ppc("??$destruct_in_place@Vc_tag_file_directory_backend@@@@YAXPAVc_tag_file_directory_backend@@@Z");
//};

//void try_and_destruct_in_place<class c_tag_file_create_backend>(class c_tag_file_create_backend *)
//{
//    mangled_ppc("??$try_and_destruct_in_place@Vc_tag_file_create_backend@@@@YAXPAVc_tag_file_create_backend@@@Z");
//};

//void try_and_destruct_in_place<class c_tag_file_xsync_backend>(class c_tag_file_xsync_backend *)
//{
//    mangled_ppc("??$try_and_destruct_in_place@Vc_tag_file_xsync_backend@@@@YAXPAVc_tag_file_xsync_backend@@@Z");
//};

//void destruct_in_place<class c_tag_file_resource_backend>(class c_tag_file_resource_backend *)
//{
//    mangled_ppc("??$destruct_in_place@Vc_tag_file_resource_backend@@@@YAXPAVc_tag_file_resource_backend@@@Z");
//};

//public: class c_buffered_file_stream * c_typed_opaque_data<class c_buffered_file_stream, 16720, 8>::construct<struct s_file_reference *, int, unsigned __int64*>(struct s_file_reference *, int, unsigned __int64*)
//{
//    mangled_ppc("??$construct@PAUs_file_reference@@HPA_K@?$c_typed_opaque_data@Vc_buffered_file_stream@@$0EBFA@$07@@QAAPAVc_buffered_file_stream@@PAUs_file_reference@@HPA_K@Z");
//};

//public: class c_single_tag_file_reader * c_typed_opaque_data<class c_single_tag_file_reader, 224, 4>::construct<class c_allocation_interface *, struct s_tag_group const *, class c_single_tag_file_layout_reader *, class c_buffered_file_stream *>(class c_allocation_interface *, struct s_tag_group const *, class c_single_tag_file_layout_reader *, class c_buffered_file_stream *)
//{
//    mangled_ppc("??$construct@PAVc_allocation_interface@@PBUs_tag_group@@PAVc_single_tag_file_layout_reader@@PAVc_buffered_file_stream@@@?$c_typed_opaque_data@Vc_single_tag_file_reader@@$0OA@$03@@QAAPAVc_single_tag_file_reader@@PAVc_allocation_interface@@PBUs_tag_group@@PAVc_single_tag_file_layout_reader@@PAVc_buffered_file_stream@@@Z");
//};

//public: class c_simple_file_persist_stream * c_typed_opaque_data<class c_simple_file_persist_stream, 292, 4>::construct<struct s_file_reference *, int, unsigned __int64*>(struct s_file_reference *, int, unsigned __int64*)
//{
//    mangled_ppc("??$construct@PAUs_file_reference@@HPA_K@?$c_typed_opaque_data@Vc_simple_file_persist_stream@@$0BCE@$03@@QAAPAVc_simple_file_persist_stream@@PAUs_file_reference@@HPA_K@Z");
//};

//public: class c_single_tag_file_reader * c_typed_opaque_data<class c_single_tag_file_reader, 224, 4>::construct<class c_allocation_interface *, struct s_tag_group const *, class c_single_tag_file_layout_reader *, class c_simple_file_persist_stream *>(class c_allocation_interface *, struct s_tag_group const *, class c_single_tag_file_layout_reader *, class c_simple_file_persist_stream *)
//{
//    mangled_ppc("??$construct@PAVc_allocation_interface@@PBUs_tag_group@@PAVc_single_tag_file_layout_reader@@PAVc_simple_file_persist_stream@@@?$c_typed_opaque_data@Vc_single_tag_file_reader@@$0OA@$03@@QAAPAVc_single_tag_file_reader@@PAVc_allocation_interface@@PBUs_tag_group@@PAVc_single_tag_file_layout_reader@@PAVc_simple_file_persist_stream@@@Z");
//};

//public: c_typed_allocation_description<class c_single_tag_file_read_backend>::c_typed_allocation_description<class c_single_tag_file_read_backend>(class c_single_tag_file_read_backend *&)
//{
//    mangled_ppc("??0?$c_typed_allocation_description@Vc_single_tag_file_read_backend@@@@QAA@AAPAVc_single_tag_file_read_backend@@@Z");
//};

//public: virtual unsigned long c_typed_allocation_description<class c_single_tag_file_read_backend>::get_unaligned_size(void) const
//{
//    mangled_ppc("?get_unaligned_size@?$c_typed_allocation_description@Vc_single_tag_file_read_backend@@@@UBAKXZ");
//};

//public: virtual unsigned long c_typed_allocation_description<class c_single_tag_file_read_backend>::get_alignment_bits(void) const
//{
//    mangled_ppc("?get_alignment_bits@?$c_typed_allocation_description@Vc_single_tag_file_read_backend@@@@UBAKXZ");
//};

//public: virtual void c_typed_allocation_description<class c_single_tag_file_read_backend>::assign_storage(class c_raw_storage_buffer_iterator &) const
//{
//    mangled_ppc("?assign_storage@?$c_typed_allocation_description@Vc_single_tag_file_read_backend@@@@UBAXAAVc_raw_storage_buffer_iterator@@@Z");
//};

//public: c_typed_allocation_description<class c_single_tag_file_synchronous_read_backend>::c_typed_allocation_description<class c_single_tag_file_synchronous_read_backend>(class c_single_tag_file_synchronous_read_backend *&)
//{
//    mangled_ppc("??0?$c_typed_allocation_description@Vc_single_tag_file_synchronous_read_backend@@@@QAA@AAPAVc_single_tag_file_synchronous_read_backend@@@Z");
//};

//public: virtual unsigned long c_typed_allocation_description<class c_single_tag_file_synchronous_read_backend>::get_unaligned_size(void) const
//{
//    mangled_ppc("?get_unaligned_size@?$c_typed_allocation_description@Vc_single_tag_file_synchronous_read_backend@@@@UBAKXZ");
//};

//public: virtual unsigned long c_typed_allocation_description<class c_single_tag_file_synchronous_read_backend>::get_alignment_bits(void) const
//{
//    mangled_ppc("?get_alignment_bits@?$c_typed_allocation_description@Vc_single_tag_file_synchronous_read_backend@@@@UBAKXZ");
//};

//public: virtual void c_typed_allocation_description<class c_single_tag_file_synchronous_read_backend>::assign_storage(class c_raw_storage_buffer_iterator &) const
//{
//    mangled_ppc("?assign_storage@?$c_typed_allocation_description@Vc_single_tag_file_synchronous_read_backend@@@@UBAXAAVc_raw_storage_buffer_iterator@@@Z");
//};

//public: c_typed_allocation_description<class c_single_tag_file_index_backend>::c_typed_allocation_description<class c_single_tag_file_index_backend>(class c_single_tag_file_index_backend *&)
//{
//    mangled_ppc("??0?$c_typed_allocation_description@Vc_single_tag_file_index_backend@@@@QAA@AAPAVc_single_tag_file_index_backend@@@Z");
//};

//public: virtual unsigned long c_typed_allocation_description<class c_single_tag_file_index_backend>::get_unaligned_size(void) const
//{
//    mangled_ppc("?get_unaligned_size@?$c_typed_allocation_description@Vc_single_tag_file_index_backend@@@@UBAKXZ");
//};

//public: virtual unsigned long c_typed_allocation_description<class c_single_tag_file_index_backend>::get_alignment_bits(void) const
//{
//    mangled_ppc("?get_alignment_bits@?$c_typed_allocation_description@Vc_single_tag_file_index_backend@@@@UBAKXZ");
//};

//public: virtual void c_typed_allocation_description<class c_single_tag_file_index_backend>::assign_storage(class c_raw_storage_buffer_iterator &) const
//{
//    mangled_ppc("?assign_storage@?$c_typed_allocation_description@Vc_single_tag_file_index_backend@@@@UBAXAAVc_raw_storage_buffer_iterator@@@Z");
//};

//public: c_typed_allocation_description<class c_single_tag_file_attribute_backend>::c_typed_allocation_description<class c_single_tag_file_attribute_backend>(class c_single_tag_file_attribute_backend *&)
//{
//    mangled_ppc("??0?$c_typed_allocation_description@Vc_single_tag_file_attribute_backend@@@@QAA@AAPAVc_single_tag_file_attribute_backend@@@Z");
//};

//public: virtual unsigned long c_typed_allocation_description<class c_single_tag_file_attribute_backend>::get_unaligned_size(void) const
//{
//    mangled_ppc("?get_unaligned_size@?$c_typed_allocation_description@Vc_single_tag_file_attribute_backend@@@@UBAKXZ");
//};

//public: virtual unsigned long c_typed_allocation_description<class c_single_tag_file_attribute_backend>::get_alignment_bits(void) const
//{
//    mangled_ppc("?get_alignment_bits@?$c_typed_allocation_description@Vc_single_tag_file_attribute_backend@@@@UBAKXZ");
//};

//public: virtual void c_typed_allocation_description<class c_single_tag_file_attribute_backend>::assign_storage(class c_raw_storage_buffer_iterator &) const
//{
//    mangled_ppc("?assign_storage@?$c_typed_allocation_description@Vc_single_tag_file_attribute_backend@@@@UBAXAAVc_raw_storage_buffer_iterator@@@Z");
//};

//public: c_typed_allocation_description<class c_single_tag_file_directory_backend>::c_typed_allocation_description<class c_single_tag_file_directory_backend>(class c_single_tag_file_directory_backend *&)
//{
//    mangled_ppc("??0?$c_typed_allocation_description@Vc_single_tag_file_directory_backend@@@@QAA@AAPAVc_single_tag_file_directory_backend@@@Z");
//};

//public: virtual unsigned long c_typed_allocation_description<class c_single_tag_file_directory_backend>::get_unaligned_size(void) const
//{
//    mangled_ppc("?get_unaligned_size@?$c_typed_allocation_description@Vc_single_tag_file_directory_backend@@@@UBAKXZ");
//};

//public: virtual unsigned long c_typed_allocation_description<class c_single_tag_file_directory_backend>::get_alignment_bits(void) const
//{
//    mangled_ppc("?get_alignment_bits@?$c_typed_allocation_description@Vc_single_tag_file_directory_backend@@@@UBAKXZ");
//};

//public: virtual void c_typed_allocation_description<class c_single_tag_file_directory_backend>::assign_storage(class c_raw_storage_buffer_iterator &) const
//{
//    mangled_ppc("?assign_storage@?$c_typed_allocation_description@Vc_single_tag_file_directory_backend@@@@UBAXAAVc_raw_storage_buffer_iterator@@@Z");
//};

//public: c_typed_allocation_description<class c_single_tag_file_resource_and_cache_builder_backend>::c_typed_allocation_description<class c_single_tag_file_resource_and_cache_builder_backend>(class c_single_tag_file_resource_and_cache_builder_backend *&)
//{
//    mangled_ppc("??0?$c_typed_allocation_description@Vc_single_tag_file_resource_and_cache_builder_backend@@@@QAA@AAPAVc_single_tag_file_resource_and_cache_builder_backend@@@Z");
//};

//public: virtual unsigned long c_typed_allocation_description<class c_single_tag_file_resource_and_cache_builder_backend>::get_unaligned_size(void) const
//{
//    mangled_ppc("?get_unaligned_size@?$c_typed_allocation_description@Vc_single_tag_file_resource_and_cache_builder_backend@@@@UBAKXZ");
//};

//public: virtual unsigned long c_typed_allocation_description<class c_single_tag_file_resource_and_cache_builder_backend>::get_alignment_bits(void) const
//{
//    mangled_ppc("?get_alignment_bits@?$c_typed_allocation_description@Vc_single_tag_file_resource_and_cache_builder_backend@@@@UBAKXZ");
//};

//public: virtual void c_typed_allocation_description<class c_single_tag_file_resource_and_cache_builder_backend>::assign_storage(class c_raw_storage_buffer_iterator &) const
//{
//    mangled_ppc("?assign_storage@?$c_typed_allocation_description@Vc_single_tag_file_resource_and_cache_builder_backend@@@@UBAXAAVc_raw_storage_buffer_iterator@@@Z");
//};

//public: c_typed_allocation_description<class c_single_tag_file_instance_read_backend>::c_typed_allocation_description<class c_single_tag_file_instance_read_backend>(class c_single_tag_file_instance_read_backend *&)
//{
//    mangled_ppc("??0?$c_typed_allocation_description@Vc_single_tag_file_instance_read_backend@@@@QAA@AAPAVc_single_tag_file_instance_read_backend@@@Z");
//};

//public: virtual unsigned long c_typed_allocation_description<class c_single_tag_file_instance_read_backend>::get_unaligned_size(void) const
//{
//    mangled_ppc("?get_unaligned_size@?$c_typed_allocation_description@Vc_single_tag_file_instance_read_backend@@@@UBAKXZ");
//};

//public: virtual unsigned long c_typed_allocation_description<class c_single_tag_file_instance_read_backend>::get_alignment_bits(void) const
//{
//    mangled_ppc("?get_alignment_bits@?$c_typed_allocation_description@Vc_single_tag_file_instance_read_backend@@@@UBAKXZ");
//};

//public: virtual void c_typed_allocation_description<class c_single_tag_file_instance_read_backend>::assign_storage(class c_raw_storage_buffer_iterator &) const
//{
//    mangled_ppc("?assign_storage@?$c_typed_allocation_description@Vc_single_tag_file_instance_read_backend@@@@UBAXAAVc_raw_storage_buffer_iterator@@@Z");
//};

//public: c_typed_allocation_description<struct s_tag_file_backend>::c_typed_allocation_description<struct s_tag_file_backend>(struct s_tag_file_backend *&)
//{
//    mangled_ppc("??0?$c_typed_allocation_description@Us_tag_file_backend@@@@QAA@AAPAUs_tag_file_backend@@@Z");
//};

//public: virtual unsigned long c_typed_allocation_description<struct s_tag_file_backend>::get_unaligned_size(void) const
//{
//    mangled_ppc("?get_unaligned_size@?$c_typed_allocation_description@Us_tag_file_backend@@@@UBAKXZ");
//};

//public: virtual unsigned long c_typed_allocation_description<struct s_tag_file_backend>::get_alignment_bits(void) const
//{
//    mangled_ppc("?get_alignment_bits@?$c_typed_allocation_description@Us_tag_file_backend@@@@UBAKXZ");
//};

//public: virtual void c_typed_allocation_description<struct s_tag_file_backend>::assign_storage(class c_raw_storage_buffer_iterator &) const
//{
//    mangled_ppc("?assign_storage@?$c_typed_allocation_description@Us_tag_file_backend@@@@UBAXAAVc_raw_storage_buffer_iterator@@@Z");
//};

//public: class c_simple_file_persist_stream * c_opaque_data<class c_simple_file_persist_stream, 292, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_opaque_data@Vc_simple_file_persist_stream@@$0BCE@$03@@QAAPAVc_simple_file_persist_stream@@XZ");
//};

//public: class c_buffered_write_stream * c_opaque_data<class c_buffered_write_stream, 80, 8>::get(void)
//{
//    mangled_ppc("?get@?$c_opaque_data@Vc_buffered_write_stream@@$0FA@$07@@QAAPAVc_buffered_write_stream@@XZ");
//};

//public: class c_single_tag_file_writer * c_opaque_data<class c_single_tag_file_writer, 228, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_opaque_data@Vc_single_tag_file_writer@@$0OE@$03@@QAAPAVc_single_tag_file_writer@@XZ");
//};

//struct s_allocation_description_holder make_into_description_holder<class c_typed_allocation_description<class c_single_tag_file_read_backend> >(class c_typed_allocation_description<class c_single_tag_file_read_backend>)
//{
//    mangled_ppc("??$make_into_description_holder@V?$c_typed_allocation_description@Vc_single_tag_file_read_backend@@@@@@YA?AUs_allocation_description_holder@@V?$c_typed_allocation_description@Vc_single_tag_file_read_backend@@@@@Z");
//};

//struct s_allocation_description_holder make_into_description_holder<class c_typed_allocation_description<class c_single_tag_file_synchronous_read_backend> >(class c_typed_allocation_description<class c_single_tag_file_synchronous_read_backend>)
//{
//    mangled_ppc("??$make_into_description_holder@V?$c_typed_allocation_description@Vc_single_tag_file_synchronous_read_backend@@@@@@YA?AUs_allocation_description_holder@@V?$c_typed_allocation_description@Vc_single_tag_file_synchronous_read_backend@@@@@Z");
//};

//struct s_allocation_description_holder make_into_description_holder<class c_typed_allocation_description<class c_single_tag_file_index_backend> >(class c_typed_allocation_description<class c_single_tag_file_index_backend>)
//{
//    mangled_ppc("??$make_into_description_holder@V?$c_typed_allocation_description@Vc_single_tag_file_index_backend@@@@@@YA?AUs_allocation_description_holder@@V?$c_typed_allocation_description@Vc_single_tag_file_index_backend@@@@@Z");
//};

//struct s_allocation_description_holder make_into_description_holder<class c_typed_allocation_description<class c_single_tag_file_attribute_backend> >(class c_typed_allocation_description<class c_single_tag_file_attribute_backend>)
//{
//    mangled_ppc("??$make_into_description_holder@V?$c_typed_allocation_description@Vc_single_tag_file_attribute_backend@@@@@@YA?AUs_allocation_description_holder@@V?$c_typed_allocation_description@Vc_single_tag_file_attribute_backend@@@@@Z");
//};

//struct s_allocation_description_holder make_into_description_holder<class c_typed_allocation_description<class c_single_tag_file_directory_backend> >(class c_typed_allocation_description<class c_single_tag_file_directory_backend>)
//{
//    mangled_ppc("??$make_into_description_holder@V?$c_typed_allocation_description@Vc_single_tag_file_directory_backend@@@@@@YA?AUs_allocation_description_holder@@V?$c_typed_allocation_description@Vc_single_tag_file_directory_backend@@@@@Z");
//};

//struct s_allocation_description_holder make_into_description_holder<class c_typed_allocation_description<class c_single_tag_file_resource_and_cache_builder_backend> >(class c_typed_allocation_description<class c_single_tag_file_resource_and_cache_builder_backend>)
//{
//    mangled_ppc("??$make_into_description_holder@V?$c_typed_allocation_description@Vc_single_tag_file_resource_and_cache_builder_backend@@@@@@YA?AUs_allocation_description_holder@@V?$c_typed_allocation_description@Vc_single_tag_file_resource_and_cache_builder_backend@@@@@Z");
//};

//struct s_allocation_description_holder make_into_description_holder<class c_typed_allocation_description<class c_single_tag_file_instance_read_backend> >(class c_typed_allocation_description<class c_single_tag_file_instance_read_backend>)
//{
//    mangled_ppc("??$make_into_description_holder@V?$c_typed_allocation_description@Vc_single_tag_file_instance_read_backend@@@@@@YA?AUs_allocation_description_holder@@V?$c_typed_allocation_description@Vc_single_tag_file_instance_read_backend@@@@@Z");
//};

//struct s_allocation_description_holder make_into_description_holder<class c_typed_allocation_description<struct s_tag_file_backend> >(class c_typed_allocation_description<struct s_tag_file_backend>)
//{
//    mangled_ppc("??$make_into_description_holder@V?$c_typed_allocation_description@Us_tag_file_backend@@@@@@YA?AUs_allocation_description_holder@@V?$c_typed_allocation_description@Us_tag_file_backend@@@@@Z");
//};

//void destruct_in_place<class c_tag_file_create_backend>(class c_tag_file_create_backend *)
//{
//    mangled_ppc("??$destruct_in_place@Vc_tag_file_create_backend@@@@YAXPAVc_tag_file_create_backend@@@Z");
//};

//void destruct_in_place<class c_tag_file_xsync_backend>(class c_tag_file_xsync_backend *)
//{
//    mangled_ppc("??$destruct_in_place@Vc_tag_file_xsync_backend@@@@YAXPAVc_tag_file_xsync_backend@@@Z");
//};

//public: class c_buffered_file_stream * c_opaque_data<class c_buffered_file_stream, 16720, 8>::get(void)
//{
//    mangled_ppc("?get@?$c_opaque_data@Vc_buffered_file_stream@@$0EBFA@$07@@QAAPAVc_buffered_file_stream@@XZ");
//};

//public: class c_single_tag_file_reader * c_opaque_data<class c_single_tag_file_reader, 224, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_opaque_data@Vc_single_tag_file_reader@@$0OA@$03@@QAAPAVc_single_tag_file_reader@@XZ");
//};

//unsigned long get_total_unaligned_raw_size<class c_single_tag_file_read_backend>(long)
//{
//    mangled_ppc("??$get_total_unaligned_raw_size@Vc_single_tag_file_read_backend@@@@YAKJ@Z");
//};

//public: class c_single_tag_file_read_backend * c_raw_storage_buffer_iterator::get_array_elements<class c_single_tag_file_read_backend>(long)
//{
//    mangled_ppc("??$get_array_elements@Vc_single_tag_file_read_backend@@@c_raw_storage_buffer_iterator@@QAAPAVc_single_tag_file_read_backend@@J@Z");
//};

//unsigned long get_total_unaligned_raw_size<class c_single_tag_file_synchronous_read_backend>(long)
//{
//    mangled_ppc("??$get_total_unaligned_raw_size@Vc_single_tag_file_synchronous_read_backend@@@@YAKJ@Z");
//};

//public: class c_single_tag_file_synchronous_read_backend * c_raw_storage_buffer_iterator::get_array_elements<class c_single_tag_file_synchronous_read_backend>(long)
//{
//    mangled_ppc("??$get_array_elements@Vc_single_tag_file_synchronous_read_backend@@@c_raw_storage_buffer_iterator@@QAAPAVc_single_tag_file_synchronous_read_backend@@J@Z");
//};

//unsigned long get_total_unaligned_raw_size<class c_single_tag_file_index_backend>(long)
//{
//    mangled_ppc("??$get_total_unaligned_raw_size@Vc_single_tag_file_index_backend@@@@YAKJ@Z");
//};

//public: class c_single_tag_file_index_backend * c_raw_storage_buffer_iterator::get_array_elements<class c_single_tag_file_index_backend>(long)
//{
//    mangled_ppc("??$get_array_elements@Vc_single_tag_file_index_backend@@@c_raw_storage_buffer_iterator@@QAAPAVc_single_tag_file_index_backend@@J@Z");
//};

//unsigned long get_total_unaligned_raw_size<class c_single_tag_file_attribute_backend>(long)
//{
//    mangled_ppc("??$get_total_unaligned_raw_size@Vc_single_tag_file_attribute_backend@@@@YAKJ@Z");
//};

//public: class c_single_tag_file_attribute_backend * c_raw_storage_buffer_iterator::get_array_elements<class c_single_tag_file_attribute_backend>(long)
//{
//    mangled_ppc("??$get_array_elements@Vc_single_tag_file_attribute_backend@@@c_raw_storage_buffer_iterator@@QAAPAVc_single_tag_file_attribute_backend@@J@Z");
//};

//unsigned long get_total_unaligned_raw_size<class c_single_tag_file_directory_backend>(long)
//{
//    mangled_ppc("??$get_total_unaligned_raw_size@Vc_single_tag_file_directory_backend@@@@YAKJ@Z");
//};

//public: class c_single_tag_file_directory_backend * c_raw_storage_buffer_iterator::get_array_elements<class c_single_tag_file_directory_backend>(long)
//{
//    mangled_ppc("??$get_array_elements@Vc_single_tag_file_directory_backend@@@c_raw_storage_buffer_iterator@@QAAPAVc_single_tag_file_directory_backend@@J@Z");
//};

//unsigned long get_total_unaligned_raw_size<class c_single_tag_file_resource_and_cache_builder_backend>(long)
//{
//    mangled_ppc("??$get_total_unaligned_raw_size@Vc_single_tag_file_resource_and_cache_builder_backend@@@@YAKJ@Z");
//};

//public: class c_single_tag_file_resource_and_cache_builder_backend * c_raw_storage_buffer_iterator::get_array_elements<class c_single_tag_file_resource_and_cache_builder_backend>(long)
//{
//    mangled_ppc("??$get_array_elements@Vc_single_tag_file_resource_and_cache_builder_backend@@@c_raw_storage_buffer_iterator@@QAAPAVc_single_tag_file_resource_and_cache_builder_backend@@J@Z");
//};

//unsigned long get_total_unaligned_raw_size<class c_single_tag_file_instance_read_backend>(long)
//{
//    mangled_ppc("??$get_total_unaligned_raw_size@Vc_single_tag_file_instance_read_backend@@@@YAKJ@Z");
//};

//public: class c_single_tag_file_instance_read_backend * c_raw_storage_buffer_iterator::get_array_elements<class c_single_tag_file_instance_read_backend>(long)
//{
//    mangled_ppc("??$get_array_elements@Vc_single_tag_file_instance_read_backend@@@c_raw_storage_buffer_iterator@@QAAPAVc_single_tag_file_instance_read_backend@@J@Z");
//};

//unsigned long get_total_unaligned_raw_size<struct s_tag_file_backend>(long)
//{
//    mangled_ppc("??$get_total_unaligned_raw_size@Us_tag_file_backend@@@@YAKJ@Z");
//};

//public: struct s_tag_file_backend * c_raw_storage_buffer_iterator::get_array_elements<struct s_tag_file_backend>(long)
//{
//    mangled_ppc("??$get_array_elements@Us_tag_file_backend@@@c_raw_storage_buffer_iterator@@QAAPAUs_tag_file_backend@@J@Z");
//};

//[thunk]: public: virtual void * c_single_tag_file_read_backend::`vector deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_Ec_single_tag_file_read_backend@@W3AAPAXI@Z");
//};

//[thunk]: public: virtual void * c_single_tag_file_resource_and_cache_builder_backend::`vector deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_Ec_single_tag_file_resource_and_cache_builder_backend@@W3AAPAXI@Z");
//};

