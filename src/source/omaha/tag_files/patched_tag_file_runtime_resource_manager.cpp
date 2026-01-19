/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// const c_tag_resource_handle_datum_persister<struct c_patched_tag_file_resource_datum_handler::s_patched_resource_datum, 4>::`vftable'{for `c_datum_restorer'}; // "??_7?$c_tag_resource_handle_datum_persister@Us_patched_resource_datum@c_patched_tag_file_resource_datum_handler@@$03@@6Bc_datum_restorer@@@"
// const c_tag_resource_handle_datum_persister<struct c_patched_tag_file_resource_datum_handler::s_patched_resource_datum, 4>::`vftable'{for `c_datum_persister'}; // "??_7?$c_tag_resource_handle_datum_persister@Us_patched_resource_datum@c_patched_tag_file_resource_datum_handler@@$03@@6Bc_datum_persister@@@"

// public: void c_patched_tag_file_resource_datum_handler::setup(class c_allocation_interface *, class c_tag_allocator *, unsigned long, long, long);
// public: void c_patched_tag_file_resource_datum_handler::unsetup(void);
// public: class c_tag_file_backend_resource_manager_interface * c_patched_tag_file_resource_datum_handler::get_resource_handler_manager(long);
// class c_tag_resource_fixup get_default_control_fixup(void);
// public: virtual class c_basic_buffer<void> c_patched_tag_file_resource_datum_handler::get_control_data(long, bool);
// public: virtual class c_tag_resource_fixup c_patched_tag_file_resource_datum_handler::get_root_address_fixup(long);
// public: virtual bool c_patched_tag_file_resource_datum_handler::is_streamed(long);
// public: virtual bool c_patched_tag_file_resource_datum_handler::get_pageable_sub_location(long, struct s_indirect_cache_file_sub_location *);
// public: virtual unsigned long c_patched_tag_file_resource_datum_handler::get_pageable_memory_size(long);
// public: virtual bool c_patched_tag_file_resource_datum_handler::try_to_get_pageable_checksum(long, struct s_cache_file_resource_checksum *);
// public: virtual bool c_patched_tag_file_resource_datum_handler::get_optional_sub_location(long, struct s_indirect_cache_file_sub_location *);
// public: virtual unsigned long c_patched_tag_file_resource_datum_handler::get_optional_memory_size(long);
// public: virtual bool c_patched_tag_file_resource_datum_handler::try_to_get_optional_checksum(long, struct s_cache_file_resource_checksum *);
// public: virtual long c_patched_tag_file_resource_datum_handler::get_resource_owner(long);
// public: virtual class c_wrapped_array<struct s_tag_resource_fixup_location const> c_patched_tag_file_resource_datum_handler::get_control_fixups(long);
// public: virtual long c_patched_tag_file_resource_datum_handler::get_control_data_alignment(long);
// public: virtual bool c_patched_tag_file_resource_datum_handler::has_valid_interop_locations(long);
// public: virtual bool c_patched_tag_file_resource_datum_handler::describe_resource_cache_location(long, enum e_tag_resource_lod, struct s_tag_resource_cache_file_location *);
// public: virtual class c_basic_buffer<void> c_patched_tag_file_resource_datum_handler::get_interop_buffer(long, bool);
// public: virtual class c_wrapped_array<struct s_tag_resource_interop_location const> c_patched_tag_file_resource_datum_handler::get_interop_locations(long);
// public: virtual bool c_patched_tag_file_resource_datum_handler::describe_resource(long, class c_wrapped_array<char>);
// public: virtual unsigned long c_patched_tag_file_resource_datum_handler::get_resource_file_sort_key(long, enum e_tag_resource_lod);
// public: virtual void * c_patched_tag_file_resource_datum_handler::get_permanent_resource_root_address(long, bool);
// public: virtual bool c_patched_tag_file_resource_datum_handler::any_pageable_data(long);
// public: virtual bool c_patched_tag_file_resource_datum_handler::any_optional_data(long);
// public: virtual struct s_tag_resource_definition const * c_patched_tag_file_resource_datum_handler::get_resource_definition(long);
// public: virtual void c_patched_tag_file_resource_datum_handler::initialize(class c_tag_resource_runtime_listener *, class c_tag_file_backend_resource_datum_reference_tracker *);
// public: virtual void c_patched_tag_file_resource_datum_handler::dispose(void);
// public: virtual bool c_patched_tag_file_resource_datum_handler::resource_is_tracked(long);
// public: virtual bool c_patched_tag_file_resource_datum_handler::untracked_resource_available(long);
// public: virtual void * c_patched_tag_file_resource_datum_handler::get_untracked_resource_data(long);
// public: virtual unsigned long c_patched_tag_file_resource_datum_handler::get_resource_tracked_size(long);
// public: virtual void c_patched_tag_file_resource_datum_handler::free_resource(long, struct s_tag_resource_definition const *);
// public: virtual void c_patched_tag_file_resource_datum_handler::commit_resource(long, long, struct s_tag_resource_definition const *);
// public: virtual void c_patched_tag_file_resource_datum_handler::set_resource_owner(long, struct s_tag_resource_definition const *, long);
// public: virtual unsigned long c_patched_tag_file_resource_datum_handler::get_maximum_possible_resource_count(void);
// public: virtual unsigned __int64 c_patched_tag_file_resource_datum_handler::get_cache_location_identifier(long, enum e_tag_resource_lod);
// public: virtual bool c_patched_tag_file_resource_datum_handler::get_resource_location(unsigned __int64, struct s_indirect_cache_file_location *);
// public: virtual class c_cache_file_decompressor_service * c_patched_tag_file_resource_datum_handler::get_decompressor_service(unsigned __int64, long);
// public: virtual bool c_patched_tag_file_resource_datum_handler::save_tracked_state(class c_persist_stream *, class c_tag_resource_definition_dictionary *);
// public: virtual bool c_patched_tag_file_resource_datum_handler::restore_tracked_state(class c_persist_stream *, class c_tag_resource_definition_dictionary *);
// public: virtual void c_patched_tag_file_resource_datum_handler::report_tracked_state(class c_formatted_output *);
// public: virtual class c_tag_resource_runtime_global_handle_allocator * c_patched_tag_file_resource_datum_handler::set_handle_allocator(class c_tag_resource_runtime_global_handle_allocator *);
// public: virtual class c_tag_file_backend_resource_cache_file_datum_handler * c_patched_tag_file_resource_datum_handler::get_cache_file_datum_handler(void);
// public: virtual long c_patched_tag_file_resource_datum_handler::allocate_uninitialized_resource(struct s_tag_resource_definition const *);
// private: class c_tag_file_backend_resource_datum_handler_base * c_patched_tag_file_resource_datum_handler::find_resource_datum_handler(long);
// private: class c_tag_file_backend_resource_datum_handler_base * c_patched_tag_file_resource_datum_handler::get_primary_datum_handler(void);
// private: long c_patched_tag_file_resource_datum_handler::allocate_editable_resource_handle(long, struct s_tag_resource_definition const *);
// private: void * c_patched_tag_file_resource_datum_handler::get_resource_pointer(long);
// private: void c_patched_tag_file_resource_datum_handler::free_resource_handle(long, struct s_tag_resource_definition const *);
// private: long c_patched_tag_file_resource_datum_handler::allocate_data_array_resource_handle(long, struct s_tag_resource_definition const *, long);
// private: void c_patched_tag_file_resource_datum_handler::convert_untracked_resource_to_tracked(long, long, struct s_tag_resource_definition const *);
// public: c_patched_tag_file_resource_datum_handler::c_patched_tag_file_resource_handle_allocator::c_patched_tag_file_resource_handle_allocator(long, class c_patched_tag_file_resource_datum_handler *);
// public: virtual long c_patched_tag_file_resource_datum_handler::c_patched_tag_file_resource_handle_allocator::allocate_editable_resource_handle(struct s_tag_resource_definition const *);
// public: virtual void * c_patched_tag_file_resource_datum_handler::c_patched_tag_file_resource_handle_allocator::get_resource_pointer(long);
// public: virtual void c_patched_tag_file_resource_datum_handler::c_patched_tag_file_resource_handle_allocator::free_resource_handle(long, struct s_tag_resource_definition const *);
// public: virtual long c_patched_tag_file_resource_datum_handler::c_patched_tag_file_resource_handle_allocator::allocate_data_array_resource_handle(struct s_tag_resource_definition const *, long);
// public: virtual void c_patched_tag_file_resource_datum_handler::c_patched_tag_file_resource_handle_allocator::convert_untracked_resource_to_tracked(long, struct s_tag_resource_definition const *);
// public: struct s_tag_resource_definition const * c_patched_tag_file_resource_datum_handler::c_patched_tag_file_resource_handle_allocator::get_resource_definition(long);
// public: c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler::c_patched_resource_datum_handler(long, class c_patched_tag_file_resource_datum_handler *);
// public: virtual void c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler::set_datum_handler(class c_tag_file_backend_resource_datum_handler_base *);
// public: virtual void c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler::clear_datum_handler(class c_tag_file_backend_resource_datum_handler_base *);
// public: class c_tag_file_backend_resource_datum_handler_base * c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler::get_resource_datum_handler(void);
// public: c_wrapped_array<struct s_tag_resource_fixup_location const>::c_wrapped_array<struct s_tag_resource_fixup_location const>(void);
// public: void c_wrapped_array_no_init<class c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler>::clear(void);
// public: long c_wrapped_array_no_init<class c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler>::count(void) const;
// public: class c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler & c_array_operator_interface<class c_wrapped_array_no_init<class c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler>, class c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler>::operator[](long);
// public: class c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler * c_array_operator_interface<class c_wrapped_array_no_init<class c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler>, class c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler>::get_element(long);
// public: void c_wrapped_data_array<struct c_patched_tag_file_resource_datum_handler::s_patched_resource_datum>::initialize(struct s_data_array *);
// public: void c_wrapped_data_array<struct c_patched_tag_file_resource_datum_handler::s_patched_resource_datum>::dispose(void);
// public: struct c_patched_tag_file_resource_datum_handler::s_patched_resource_datum * c_wrapped_data_array<struct c_patched_tag_file_resource_datum_handler::s_patched_resource_datum>::get_mutable(long);
// public: struct c_patched_tag_file_resource_datum_handler::s_patched_resource_datum const * c_wrapped_data_array<struct c_patched_tag_file_resource_datum_handler::s_patched_resource_datum>::get(long) const;
// public: struct s_data_array * c_wrapped_data_array<struct c_patched_tag_file_resource_datum_handler::s_patched_resource_datum>::operator struct s_data_array *(void);
// public: struct s_data_array const * c_wrapped_data_array<struct c_patched_tag_file_resource_datum_handler::s_patched_resource_datum>::get_data(void) const;
// public: void c_data_iterator<struct c_patched_tag_file_resource_datum_handler::s_patched_resource_datum>::begin(struct s_data_array *);
// public: bool c_data_iterator<struct c_patched_tag_file_resource_datum_handler::s_patched_resource_datum>::next(void);
// public: struct c_patched_tag_file_resource_datum_handler::s_patched_resource_datum * c_data_iterator<struct c_patched_tag_file_resource_datum_handler::s_patched_resource_datum>::get_datum(void) const;
// public: long c_data_iterator<struct c_patched_tag_file_resource_datum_handler::s_patched_resource_datum>::get_index(void) const;
// public: c_tag_resource_handle_datum_persister<struct c_patched_tag_file_resource_datum_handler::s_patched_resource_datum, 4>::c_tag_resource_handle_datum_persister<struct c_patched_tag_file_resource_datum_handler::s_patched_resource_datum, 4>(class c_tag_resource_definition_dictionary *);
// public: virtual bool c_tag_resource_handle_datum_persister<struct c_patched_tag_file_resource_datum_handler::s_patched_resource_datum, 4>::write_datum_for_save(class c_basic_buffer<void const> const &, class c_persist_stream *);
// public: virtual bool c_tag_resource_handle_datum_persister<struct c_patched_tag_file_resource_datum_handler::s_patched_resource_datum, 4>::restore_datum_from_load(class c_basic_buffer<void> &, class c_persist_stream *);
// public: virtual bool c_tag_resource_handle_datum_persister<struct c_patched_tag_file_resource_datum_handler::s_patched_resource_datum, 4>::is_supported_datum_size(unsigned long);
// public: class c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler * c_wrapped_array_no_init<class c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler>::begin(void);
// public: class c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler * c_array_operator_interface<class c_wrapped_array_no_init<class c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler>, class c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler>::begin(void);
// public: bool c_array_operator_interface<class c_wrapped_array_no_init<class c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler>, class c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler>::valid_index(long) const;
// public: class c_wrapped_array_no_init<class c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler> * c_recursive_template_pattern<class c_wrapped_array_no_init<class c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler> >::get_super_class(void);
// public: struct s_data_array * c_smart_data_array<struct c_patched_tag_file_resource_datum_handler::s_patched_resource_datum>::operator struct s_data_array *(void) const;
// public: struct s_data_array * c_smart_data_array<struct c_patched_tag_file_resource_datum_handler::s_patched_resource_datum>::operator->(void);
// public: class c_smart_data_array<struct c_patched_tag_file_resource_datum_handler::s_patched_resource_datum> & c_smart_data_array<struct c_patched_tag_file_resource_datum_handler::s_patched_resource_datum>::operator=(struct s_data_array *);
// public: long c_array_operator_interface<class c_wrapped_array_no_init<class c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler>, class c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler>::count(void) const;
// public: class c_wrapped_array_no_init<class c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler> const * c_recursive_template_pattern<class c_wrapped_array_no_init<class c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler> >::get_super_class(void) const;
// struct s_allocation_description_holder make_allocation_description<class c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler>(class c_wrapped_array<class c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler> &, unsigned long);
// public: c_wrapped_array<struct s_allocation_description_holder>::ctor<1>(struct s_allocation_description_holder (&)[1]);
// public: c_wrapped_array<struct s_tag_resource_interop_location const>::ctor<struct s_tag_resource_interop_location const>(class c_wrapped_array<struct s_tag_resource_interop_location const> &);
// public: struct c_patched_tag_file_resource_datum_handler::s_patched_resource_datum const * c_basic_buffer<void const>::c_basic_buffer_checked_caster_const::operatorcast<struct c_patched_tag_file_resource_datum_handler::s_patched_resource_datum>(void);
// public: struct c_patched_tag_file_resource_datum_handler::s_patched_resource_datum * c_basic_buffer<void>::c_basic_buffer_checked_caster::operatorcast<struct c_patched_tag_file_resource_datum_handler::s_patched_resource_datum>(void);
// public: struct s_tag_resource_interop_location const * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_resource_interop_location const>, struct s_tag_resource_interop_location const>::get_elements(void);
// public: c_wrapped_array_allocation_description<class c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler>::c_wrapped_array_allocation_description<class c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler>(class c_wrapped_array<class c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler> &, unsigned long);
// public: virtual unsigned long c_wrapped_array_allocation_description<class c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler>::get_unaligned_size(void) const;
// public: virtual unsigned long c_wrapped_array_allocation_description<class c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler>::get_alignment_bits(void) const;
// public: virtual void c_wrapped_array_allocation_description<class c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler>::assign_storage(class c_raw_storage_buffer_iterator &) const;
// struct s_allocation_description_holder make_into_description_holder<class c_wrapped_array_allocation_description<class c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler> >(class c_wrapped_array_allocation_description<class c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler>);
// public: struct c_patched_tag_file_resource_datum_handler::s_patched_resource_datum const * c_basic_buffer<void const>::get_as_type<struct c_patched_tag_file_resource_datum_handler::s_patched_resource_datum const>(void) const;
// public: struct c_patched_tag_file_resource_datum_handler::s_patched_resource_datum * c_basic_buffer<void>::get_as_type<struct c_patched_tag_file_resource_datum_handler::s_patched_resource_datum>(void);
// unsigned long get_total_unaligned_raw_size<class c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler>(long);
// public: void c_raw_storage_buffer_iterator::set_wrapped_array<class c_wrapped_array, class c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler>(class c_wrapped_array<class c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler> &, long);
// public: struct c_patched_tag_file_resource_datum_handler::s_patched_resource_datum const * c_basic_buffer<void const>::get_as_type_from_offset<struct c_patched_tag_file_resource_datum_handler::s_patched_resource_datum const>(unsigned long) const;
// public: struct c_patched_tag_file_resource_datum_handler::s_patched_resource_datum * c_basic_buffer<void>::get_as_type_from_offset<struct c_patched_tag_file_resource_datum_handler::s_patched_resource_datum>(unsigned long);
// public: class c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler * c_raw_storage_buffer_iterator::get_array_elements<class c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler>(long);

//public: void c_patched_tag_file_resource_datum_handler::setup(class c_allocation_interface *, class c_tag_allocator *, unsigned long, long, long)
//{
//    mangled_ppc("?setup@c_patched_tag_file_resource_datum_handler@@QAAXPAVc_allocation_interface@@PAVc_tag_allocator@@KJJ@Z");
//};

//public: void c_patched_tag_file_resource_datum_handler::unsetup(void)
//{
//    mangled_ppc("?unsetup@c_patched_tag_file_resource_datum_handler@@QAAXXZ");
//};

//public: class c_tag_file_backend_resource_manager_interface * c_patched_tag_file_resource_datum_handler::get_resource_handler_manager(long)
//{
//    mangled_ppc("?get_resource_handler_manager@c_patched_tag_file_resource_datum_handler@@QAAPAVc_tag_file_backend_resource_manager_interface@@J@Z");
//};

//class c_tag_resource_fixup get_default_control_fixup(void)
//{
//    mangled_ppc("?get_default_control_fixup@@YA?AVc_tag_resource_fixup@@XZ");
//};

//public: virtual class c_basic_buffer<void> c_patched_tag_file_resource_datum_handler::get_control_data(long, bool)
//{
//    mangled_ppc("?get_control_data@c_patched_tag_file_resource_datum_handler@@UAA?AV?$c_basic_buffer@X@@J_N@Z");
//};

//public: virtual class c_tag_resource_fixup c_patched_tag_file_resource_datum_handler::get_root_address_fixup(long)
//{
//    mangled_ppc("?get_root_address_fixup@c_patched_tag_file_resource_datum_handler@@UAA?AVc_tag_resource_fixup@@J@Z");
//};

//public: virtual bool c_patched_tag_file_resource_datum_handler::is_streamed(long)
//{
//    mangled_ppc("?is_streamed@c_patched_tag_file_resource_datum_handler@@UAA_NJ@Z");
//};

//public: virtual bool c_patched_tag_file_resource_datum_handler::get_pageable_sub_location(long, struct s_indirect_cache_file_sub_location *)
//{
//    mangled_ppc("?get_pageable_sub_location@c_patched_tag_file_resource_datum_handler@@UAA_NJPAUs_indirect_cache_file_sub_location@@@Z");
//};

//public: virtual unsigned long c_patched_tag_file_resource_datum_handler::get_pageable_memory_size(long)
//{
//    mangled_ppc("?get_pageable_memory_size@c_patched_tag_file_resource_datum_handler@@UAAKJ@Z");
//};

//public: virtual bool c_patched_tag_file_resource_datum_handler::try_to_get_pageable_checksum(long, struct s_cache_file_resource_checksum *)
//{
//    mangled_ppc("?try_to_get_pageable_checksum@c_patched_tag_file_resource_datum_handler@@UAA_NJPAUs_cache_file_resource_checksum@@@Z");
//};

//public: virtual bool c_patched_tag_file_resource_datum_handler::get_optional_sub_location(long, struct s_indirect_cache_file_sub_location *)
//{
//    mangled_ppc("?get_optional_sub_location@c_patched_tag_file_resource_datum_handler@@UAA_NJPAUs_indirect_cache_file_sub_location@@@Z");
//};

//public: virtual unsigned long c_patched_tag_file_resource_datum_handler::get_optional_memory_size(long)
//{
//    mangled_ppc("?get_optional_memory_size@c_patched_tag_file_resource_datum_handler@@UAAKJ@Z");
//};

//public: virtual bool c_patched_tag_file_resource_datum_handler::try_to_get_optional_checksum(long, struct s_cache_file_resource_checksum *)
//{
//    mangled_ppc("?try_to_get_optional_checksum@c_patched_tag_file_resource_datum_handler@@UAA_NJPAUs_cache_file_resource_checksum@@@Z");
//};

//public: virtual long c_patched_tag_file_resource_datum_handler::get_resource_owner(long)
//{
//    mangled_ppc("?get_resource_owner@c_patched_tag_file_resource_datum_handler@@UAAJJ@Z");
//};

//public: virtual class c_wrapped_array<struct s_tag_resource_fixup_location const> c_patched_tag_file_resource_datum_handler::get_control_fixups(long)
//{
//    mangled_ppc("?get_control_fixups@c_patched_tag_file_resource_datum_handler@@UAA?AV?$c_wrapped_array@$$CBUs_tag_resource_fixup_location@@@@J@Z");
//};

//public: virtual long c_patched_tag_file_resource_datum_handler::get_control_data_alignment(long)
//{
//    mangled_ppc("?get_control_data_alignment@c_patched_tag_file_resource_datum_handler@@UAAJJ@Z");
//};

//public: virtual bool c_patched_tag_file_resource_datum_handler::has_valid_interop_locations(long)
//{
//    mangled_ppc("?has_valid_interop_locations@c_patched_tag_file_resource_datum_handler@@UAA_NJ@Z");
//};

//public: virtual bool c_patched_tag_file_resource_datum_handler::describe_resource_cache_location(long, enum e_tag_resource_lod, struct s_tag_resource_cache_file_location *)
//{
//    mangled_ppc("?describe_resource_cache_location@c_patched_tag_file_resource_datum_handler@@UAA_NJW4e_tag_resource_lod@@PAUs_tag_resource_cache_file_location@@@Z");
//};

//public: virtual class c_basic_buffer<void> c_patched_tag_file_resource_datum_handler::get_interop_buffer(long, bool)
//{
//    mangled_ppc("?get_interop_buffer@c_patched_tag_file_resource_datum_handler@@UAA?AV?$c_basic_buffer@X@@J_N@Z");
//};

//public: virtual class c_wrapped_array<struct s_tag_resource_interop_location const> c_patched_tag_file_resource_datum_handler::get_interop_locations(long)
//{
//    mangled_ppc("?get_interop_locations@c_patched_tag_file_resource_datum_handler@@UAA?AV?$c_wrapped_array@$$CBUs_tag_resource_interop_location@@@@J@Z");
//};

//public: virtual bool c_patched_tag_file_resource_datum_handler::describe_resource(long, class c_wrapped_array<char>)
//{
//    mangled_ppc("?describe_resource@c_patched_tag_file_resource_datum_handler@@UAA_NJV?$c_wrapped_array@D@@@Z");
//};

//public: virtual unsigned long c_patched_tag_file_resource_datum_handler::get_resource_file_sort_key(long, enum e_tag_resource_lod)
//{
//    mangled_ppc("?get_resource_file_sort_key@c_patched_tag_file_resource_datum_handler@@UAAKJW4e_tag_resource_lod@@@Z");
//};

//public: virtual void * c_patched_tag_file_resource_datum_handler::get_permanent_resource_root_address(long, bool)
//{
//    mangled_ppc("?get_permanent_resource_root_address@c_patched_tag_file_resource_datum_handler@@UAAPAXJ_N@Z");
//};

//public: virtual bool c_patched_tag_file_resource_datum_handler::any_pageable_data(long)
//{
//    mangled_ppc("?any_pageable_data@c_patched_tag_file_resource_datum_handler@@UAA_NJ@Z");
//};

//public: virtual bool c_patched_tag_file_resource_datum_handler::any_optional_data(long)
//{
//    mangled_ppc("?any_optional_data@c_patched_tag_file_resource_datum_handler@@UAA_NJ@Z");
//};

//public: virtual struct s_tag_resource_definition const * c_patched_tag_file_resource_datum_handler::get_resource_definition(long)
//{
//    mangled_ppc("?get_resource_definition@c_patched_tag_file_resource_datum_handler@@UAAPBUs_tag_resource_definition@@J@Z");
//};

//public: virtual void c_patched_tag_file_resource_datum_handler::initialize(class c_tag_resource_runtime_listener *, class c_tag_file_backend_resource_datum_reference_tracker *)
//{
//    mangled_ppc("?initialize@c_patched_tag_file_resource_datum_handler@@UAAXPAVc_tag_resource_runtime_listener@@PAVc_tag_file_backend_resource_datum_reference_tracker@@@Z");
//};

//public: virtual void c_patched_tag_file_resource_datum_handler::dispose(void)
//{
//    mangled_ppc("?dispose@c_patched_tag_file_resource_datum_handler@@UAAXXZ");
//};

//public: virtual bool c_patched_tag_file_resource_datum_handler::resource_is_tracked(long)
//{
//    mangled_ppc("?resource_is_tracked@c_patched_tag_file_resource_datum_handler@@UAA_NJ@Z");
//};

//public: virtual bool c_patched_tag_file_resource_datum_handler::untracked_resource_available(long)
//{
//    mangled_ppc("?untracked_resource_available@c_patched_tag_file_resource_datum_handler@@UAA_NJ@Z");
//};

//public: virtual void * c_patched_tag_file_resource_datum_handler::get_untracked_resource_data(long)
//{
//    mangled_ppc("?get_untracked_resource_data@c_patched_tag_file_resource_datum_handler@@UAAPAXJ@Z");
//};

//public: virtual unsigned long c_patched_tag_file_resource_datum_handler::get_resource_tracked_size(long)
//{
//    mangled_ppc("?get_resource_tracked_size@c_patched_tag_file_resource_datum_handler@@UAAKJ@Z");
//};

//public: virtual void c_patched_tag_file_resource_datum_handler::free_resource(long, struct s_tag_resource_definition const *)
//{
//    mangled_ppc("?free_resource@c_patched_tag_file_resource_datum_handler@@UAAXJPBUs_tag_resource_definition@@@Z");
//};

//public: virtual void c_patched_tag_file_resource_datum_handler::commit_resource(long, long, struct s_tag_resource_definition const *)
//{
//    mangled_ppc("?commit_resource@c_patched_tag_file_resource_datum_handler@@UAAXJJPBUs_tag_resource_definition@@@Z");
//};

//public: virtual void c_patched_tag_file_resource_datum_handler::set_resource_owner(long, struct s_tag_resource_definition const *, long)
//{
//    mangled_ppc("?set_resource_owner@c_patched_tag_file_resource_datum_handler@@UAAXJPBUs_tag_resource_definition@@J@Z");
//};

//public: virtual unsigned long c_patched_tag_file_resource_datum_handler::get_maximum_possible_resource_count(void)
//{
//    mangled_ppc("?get_maximum_possible_resource_count@c_patched_tag_file_resource_datum_handler@@UAAKXZ");
//};

//public: virtual unsigned __int64 c_patched_tag_file_resource_datum_handler::get_cache_location_identifier(long, enum e_tag_resource_lod)
//{
//    mangled_ppc("?get_cache_location_identifier@c_patched_tag_file_resource_datum_handler@@UAA_KJW4e_tag_resource_lod@@@Z");
//};

//public: virtual bool c_patched_tag_file_resource_datum_handler::get_resource_location(unsigned __int64, struct s_indirect_cache_file_location *)
//{
//    mangled_ppc("?get_resource_location@c_patched_tag_file_resource_datum_handler@@UAA_N_KPAUs_indirect_cache_file_location@@@Z");
//};

//public: virtual class c_cache_file_decompressor_service * c_patched_tag_file_resource_datum_handler::get_decompressor_service(unsigned __int64, long)
//{
//    mangled_ppc("?get_decompressor_service@c_patched_tag_file_resource_datum_handler@@UAAPAVc_cache_file_decompressor_service@@_KJ@Z");
//};

//public: virtual bool c_patched_tag_file_resource_datum_handler::save_tracked_state(class c_persist_stream *, class c_tag_resource_definition_dictionary *)
//{
//    mangled_ppc("?save_tracked_state@c_patched_tag_file_resource_datum_handler@@UAA_NPAVc_persist_stream@@PAVc_tag_resource_definition_dictionary@@@Z");
//};

//public: virtual bool c_patched_tag_file_resource_datum_handler::restore_tracked_state(class c_persist_stream *, class c_tag_resource_definition_dictionary *)
//{
//    mangled_ppc("?restore_tracked_state@c_patched_tag_file_resource_datum_handler@@UAA_NPAVc_persist_stream@@PAVc_tag_resource_definition_dictionary@@@Z");
//};

//public: virtual void c_patched_tag_file_resource_datum_handler::report_tracked_state(class c_formatted_output *)
//{
//    mangled_ppc("?report_tracked_state@c_patched_tag_file_resource_datum_handler@@UAAXPAVc_formatted_output@@@Z");
//};

//public: virtual class c_tag_resource_runtime_global_handle_allocator * c_patched_tag_file_resource_datum_handler::set_handle_allocator(class c_tag_resource_runtime_global_handle_allocator *)
//{
//    mangled_ppc("?set_handle_allocator@c_patched_tag_file_resource_datum_handler@@UAAPAVc_tag_resource_runtime_global_handle_allocator@@PAV2@@Z");
//};

//public: virtual class c_tag_file_backend_resource_cache_file_datum_handler * c_patched_tag_file_resource_datum_handler::get_cache_file_datum_handler(void)
//{
//    mangled_ppc("?get_cache_file_datum_handler@c_patched_tag_file_resource_datum_handler@@UAAPAVc_tag_file_backend_resource_cache_file_datum_handler@@XZ");
//};

//public: virtual long c_patched_tag_file_resource_datum_handler::allocate_uninitialized_resource(struct s_tag_resource_definition const *)
//{
//    mangled_ppc("?allocate_uninitialized_resource@c_patched_tag_file_resource_datum_handler@@UAAJPBUs_tag_resource_definition@@@Z");
//};

//private: class c_tag_file_backend_resource_datum_handler_base * c_patched_tag_file_resource_datum_handler::find_resource_datum_handler(long)
//{
//    mangled_ppc("?find_resource_datum_handler@c_patched_tag_file_resource_datum_handler@@AAAPAVc_tag_file_backend_resource_datum_handler_base@@J@Z");
//};

//private: class c_tag_file_backend_resource_datum_handler_base * c_patched_tag_file_resource_datum_handler::get_primary_datum_handler(void)
//{
//    mangled_ppc("?get_primary_datum_handler@c_patched_tag_file_resource_datum_handler@@AAAPAVc_tag_file_backend_resource_datum_handler_base@@XZ");
//};

//private: long c_patched_tag_file_resource_datum_handler::allocate_editable_resource_handle(long, struct s_tag_resource_definition const *)
//{
//    mangled_ppc("?allocate_editable_resource_handle@c_patched_tag_file_resource_datum_handler@@AAAJJPBUs_tag_resource_definition@@@Z");
//};

//private: void * c_patched_tag_file_resource_datum_handler::get_resource_pointer(long)
//{
//    mangled_ppc("?get_resource_pointer@c_patched_tag_file_resource_datum_handler@@AAAPAXJ@Z");
//};

//private: void c_patched_tag_file_resource_datum_handler::free_resource_handle(long, struct s_tag_resource_definition const *)
//{
//    mangled_ppc("?free_resource_handle@c_patched_tag_file_resource_datum_handler@@AAAXJPBUs_tag_resource_definition@@@Z");
//};

//private: long c_patched_tag_file_resource_datum_handler::allocate_data_array_resource_handle(long, struct s_tag_resource_definition const *, long)
//{
//    mangled_ppc("?allocate_data_array_resource_handle@c_patched_tag_file_resource_datum_handler@@AAAJJPBUs_tag_resource_definition@@J@Z");
//};

//private: void c_patched_tag_file_resource_datum_handler::convert_untracked_resource_to_tracked(long, long, struct s_tag_resource_definition const *)
//{
//    mangled_ppc("?convert_untracked_resource_to_tracked@c_patched_tag_file_resource_datum_handler@@AAAXJJPBUs_tag_resource_definition@@@Z");
//};

//public: c_patched_tag_file_resource_datum_handler::c_patched_tag_file_resource_handle_allocator::c_patched_tag_file_resource_handle_allocator(long, class c_patched_tag_file_resource_datum_handler *)
//{
//    mangled_ppc("??0c_patched_tag_file_resource_handle_allocator@c_patched_tag_file_resource_datum_handler@@QAA@JPAV1@@Z");
//};

//public: virtual long c_patched_tag_file_resource_datum_handler::c_patched_tag_file_resource_handle_allocator::allocate_editable_resource_handle(struct s_tag_resource_definition const *)
//{
//    mangled_ppc("?allocate_editable_resource_handle@c_patched_tag_file_resource_handle_allocator@c_patched_tag_file_resource_datum_handler@@UAAJPBUs_tag_resource_definition@@@Z");
//};

//public: virtual void * c_patched_tag_file_resource_datum_handler::c_patched_tag_file_resource_handle_allocator::get_resource_pointer(long)
//{
//    mangled_ppc("?get_resource_pointer@c_patched_tag_file_resource_handle_allocator@c_patched_tag_file_resource_datum_handler@@UAAPAXJ@Z");
//};

//public: virtual void c_patched_tag_file_resource_datum_handler::c_patched_tag_file_resource_handle_allocator::free_resource_handle(long, struct s_tag_resource_definition const *)
//{
//    mangled_ppc("?free_resource_handle@c_patched_tag_file_resource_handle_allocator@c_patched_tag_file_resource_datum_handler@@UAAXJPBUs_tag_resource_definition@@@Z");
//};

//public: virtual long c_patched_tag_file_resource_datum_handler::c_patched_tag_file_resource_handle_allocator::allocate_data_array_resource_handle(struct s_tag_resource_definition const *, long)
//{
//    mangled_ppc("?allocate_data_array_resource_handle@c_patched_tag_file_resource_handle_allocator@c_patched_tag_file_resource_datum_handler@@UAAJPBUs_tag_resource_definition@@J@Z");
//};

//public: virtual void c_patched_tag_file_resource_datum_handler::c_patched_tag_file_resource_handle_allocator::convert_untracked_resource_to_tracked(long, struct s_tag_resource_definition const *)
//{
//    mangled_ppc("?convert_untracked_resource_to_tracked@c_patched_tag_file_resource_handle_allocator@c_patched_tag_file_resource_datum_handler@@UAAXJPBUs_tag_resource_definition@@@Z");
//};

//public: struct s_tag_resource_definition const * c_patched_tag_file_resource_datum_handler::c_patched_tag_file_resource_handle_allocator::get_resource_definition(long)
//{
//    mangled_ppc("?get_resource_definition@c_patched_tag_file_resource_handle_allocator@c_patched_tag_file_resource_datum_handler@@QAAPBUs_tag_resource_definition@@J@Z");
//};

//public: c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler::c_patched_resource_datum_handler(long, class c_patched_tag_file_resource_datum_handler *)
//{
//    mangled_ppc("??0c_patched_resource_datum_handler@c_patched_tag_file_resource_datum_handler@@QAA@JPAV1@@Z");
//};

//public: virtual void c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler::set_datum_handler(class c_tag_file_backend_resource_datum_handler_base *)
//{
//    mangled_ppc("?set_datum_handler@c_patched_resource_datum_handler@c_patched_tag_file_resource_datum_handler@@UAAXPAVc_tag_file_backend_resource_datum_handler_base@@@Z");
//};

//public: virtual void c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler::clear_datum_handler(class c_tag_file_backend_resource_datum_handler_base *)
//{
//    mangled_ppc("?clear_datum_handler@c_patched_resource_datum_handler@c_patched_tag_file_resource_datum_handler@@UAAXPAVc_tag_file_backend_resource_datum_handler_base@@@Z");
//};

//public: class c_tag_file_backend_resource_datum_handler_base * c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler::get_resource_datum_handler(void)
//{
//    mangled_ppc("?get_resource_datum_handler@c_patched_resource_datum_handler@c_patched_tag_file_resource_datum_handler@@QAAPAVc_tag_file_backend_resource_datum_handler_base@@XZ");
//};

//public: c_wrapped_array<struct s_tag_resource_fixup_location const>::c_wrapped_array<struct s_tag_resource_fixup_location const>(void)
//{
//    mangled_ppc("??0?$c_wrapped_array@$$CBUs_tag_resource_fixup_location@@@@QAA@XZ");
//};

//public: void c_wrapped_array_no_init<class c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler>::clear(void)
//{
//    mangled_ppc("?clear@?$c_wrapped_array_no_init@Vc_patched_resource_datum_handler@c_patched_tag_file_resource_datum_handler@@@@QAAXXZ");
//};

//public: long c_wrapped_array_no_init<class c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler>::count(void) const
//{
//    mangled_ppc("?count@?$c_wrapped_array_no_init@Vc_patched_resource_datum_handler@c_patched_tag_file_resource_datum_handler@@@@QBAJXZ");
//};

//public: class c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler & c_array_operator_interface<class c_wrapped_array_no_init<class c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler>, class c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler>::operator[](long)
//{
//    mangled_ppc("??A?$c_array_operator_interface@V?$c_wrapped_array_no_init@Vc_patched_resource_datum_handler@c_patched_tag_file_resource_datum_handler@@@@Vc_patched_resource_datum_handler@c_patched_tag_file_resource_datum_handler@@@@QAAAAVc_patched_resource_datum_handler@c_patched_tag_file_resource_datum_handler@@J@Z");
//};

//public: class c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler * c_array_operator_interface<class c_wrapped_array_no_init<class c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler>, class c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler>::get_element(long)
//{
//    mangled_ppc("?get_element@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Vc_patched_resource_datum_handler@c_patched_tag_file_resource_datum_handler@@@@Vc_patched_resource_datum_handler@c_patched_tag_file_resource_datum_handler@@@@QAAPAVc_patched_resource_datum_handler@c_patched_tag_file_resource_datum_handler@@J@Z");
//};

//public: void c_wrapped_data_array<struct c_patched_tag_file_resource_datum_handler::s_patched_resource_datum>::initialize(struct s_data_array *)
//{
//    mangled_ppc("?initialize@?$c_wrapped_data_array@Us_patched_resource_datum@c_patched_tag_file_resource_datum_handler@@@@QAAXPAUs_data_array@@@Z");
//};

//public: void c_wrapped_data_array<struct c_patched_tag_file_resource_datum_handler::s_patched_resource_datum>::dispose(void)
//{
//    mangled_ppc("?dispose@?$c_wrapped_data_array@Us_patched_resource_datum@c_patched_tag_file_resource_datum_handler@@@@QAAXXZ");
//};

//public: struct c_patched_tag_file_resource_datum_handler::s_patched_resource_datum * c_wrapped_data_array<struct c_patched_tag_file_resource_datum_handler::s_patched_resource_datum>::get_mutable(long)
//{
//    mangled_ppc("?get_mutable@?$c_wrapped_data_array@Us_patched_resource_datum@c_patched_tag_file_resource_datum_handler@@@@QAAPAUs_patched_resource_datum@c_patched_tag_file_resource_datum_handler@@J@Z");
//};

//public: struct c_patched_tag_file_resource_datum_handler::s_patched_resource_datum const * c_wrapped_data_array<struct c_patched_tag_file_resource_datum_handler::s_patched_resource_datum>::get(long) const
//{
//    mangled_ppc("?get@?$c_wrapped_data_array@Us_patched_resource_datum@c_patched_tag_file_resource_datum_handler@@@@QBAPBUs_patched_resource_datum@c_patched_tag_file_resource_datum_handler@@J@Z");
//};

//public: struct s_data_array * c_wrapped_data_array<struct c_patched_tag_file_resource_datum_handler::s_patched_resource_datum>::operator struct s_data_array *(void)
//{
//    mangled_ppc("??B?$c_wrapped_data_array@Us_patched_resource_datum@c_patched_tag_file_resource_datum_handler@@@@QAAPAUs_data_array@@XZ");
//};

//public: struct s_data_array const * c_wrapped_data_array<struct c_patched_tag_file_resource_datum_handler::s_patched_resource_datum>::get_data(void) const
//{
//    mangled_ppc("?get_data@?$c_wrapped_data_array@Us_patched_resource_datum@c_patched_tag_file_resource_datum_handler@@@@QBAPBUs_data_array@@XZ");
//};

//public: void c_data_iterator<struct c_patched_tag_file_resource_datum_handler::s_patched_resource_datum>::begin(struct s_data_array *)
//{
//    mangled_ppc("?begin@?$c_data_iterator@Us_patched_resource_datum@c_patched_tag_file_resource_datum_handler@@@@QAAXPAUs_data_array@@@Z");
//};

//public: bool c_data_iterator<struct c_patched_tag_file_resource_datum_handler::s_patched_resource_datum>::next(void)
//{
//    mangled_ppc("?next@?$c_data_iterator@Us_patched_resource_datum@c_patched_tag_file_resource_datum_handler@@@@QAA_NXZ");
//};

//public: struct c_patched_tag_file_resource_datum_handler::s_patched_resource_datum * c_data_iterator<struct c_patched_tag_file_resource_datum_handler::s_patched_resource_datum>::get_datum(void) const
//{
//    mangled_ppc("?get_datum@?$c_data_iterator@Us_patched_resource_datum@c_patched_tag_file_resource_datum_handler@@@@QBAPAUs_patched_resource_datum@c_patched_tag_file_resource_datum_handler@@XZ");
//};

//public: long c_data_iterator<struct c_patched_tag_file_resource_datum_handler::s_patched_resource_datum>::get_index(void) const
//{
//    mangled_ppc("?get_index@?$c_data_iterator@Us_patched_resource_datum@c_patched_tag_file_resource_datum_handler@@@@QBAJXZ");
//};

//public: c_tag_resource_handle_datum_persister<struct c_patched_tag_file_resource_datum_handler::s_patched_resource_datum, 4>::c_tag_resource_handle_datum_persister<struct c_patched_tag_file_resource_datum_handler::s_patched_resource_datum, 4>(class c_tag_resource_definition_dictionary *)
//{
//    mangled_ppc("??0?$c_tag_resource_handle_datum_persister@Us_patched_resource_datum@c_patched_tag_file_resource_datum_handler@@$03@@QAA@PAVc_tag_resource_definition_dictionary@@@Z");
//};

//public: virtual bool c_tag_resource_handle_datum_persister<struct c_patched_tag_file_resource_datum_handler::s_patched_resource_datum, 4>::write_datum_for_save(class c_basic_buffer<void const> const &, class c_persist_stream *)
//{
//    mangled_ppc("?write_datum_for_save@?$c_tag_resource_handle_datum_persister@Us_patched_resource_datum@c_patched_tag_file_resource_datum_handler@@$03@@UAA_NABV?$c_basic_buffer@$$CBX@@PAVc_persist_stream@@@Z");
//};

//public: virtual bool c_tag_resource_handle_datum_persister<struct c_patched_tag_file_resource_datum_handler::s_patched_resource_datum, 4>::restore_datum_from_load(class c_basic_buffer<void> &, class c_persist_stream *)
//{
//    mangled_ppc("?restore_datum_from_load@?$c_tag_resource_handle_datum_persister@Us_patched_resource_datum@c_patched_tag_file_resource_datum_handler@@$03@@UAA_NAAV?$c_basic_buffer@X@@PAVc_persist_stream@@@Z");
//};

//public: virtual bool c_tag_resource_handle_datum_persister<struct c_patched_tag_file_resource_datum_handler::s_patched_resource_datum, 4>::is_supported_datum_size(unsigned long)
//{
//    mangled_ppc("?is_supported_datum_size@?$c_tag_resource_handle_datum_persister@Us_patched_resource_datum@c_patched_tag_file_resource_datum_handler@@$03@@UAA_NK@Z");
//};

//public: class c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler * c_wrapped_array_no_init<class c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler>::begin(void)
//{
//    mangled_ppc("?begin@?$c_wrapped_array_no_init@Vc_patched_resource_datum_handler@c_patched_tag_file_resource_datum_handler@@@@QAAPAVc_patched_resource_datum_handler@c_patched_tag_file_resource_datum_handler@@XZ");
//};

//public: class c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler * c_array_operator_interface<class c_wrapped_array_no_init<class c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler>, class c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler>::begin(void)
//{
//    mangled_ppc("?begin@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Vc_patched_resource_datum_handler@c_patched_tag_file_resource_datum_handler@@@@Vc_patched_resource_datum_handler@c_patched_tag_file_resource_datum_handler@@@@QAAPAVc_patched_resource_datum_handler@c_patched_tag_file_resource_datum_handler@@XZ");
//};

//public: bool c_array_operator_interface<class c_wrapped_array_no_init<class c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler>, class c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler>::valid_index(long) const
//{
//    mangled_ppc("?valid_index@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Vc_patched_resource_datum_handler@c_patched_tag_file_resource_datum_handler@@@@Vc_patched_resource_datum_handler@c_patched_tag_file_resource_datum_handler@@@@QBA_NJ@Z");
//};

//public: class c_wrapped_array_no_init<class c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler> * c_recursive_template_pattern<class c_wrapped_array_no_init<class c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler> >::get_super_class(void)
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@Vc_patched_resource_datum_handler@c_patched_tag_file_resource_datum_handler@@@@@@QAAPAV?$c_wrapped_array_no_init@Vc_patched_resource_datum_handler@c_patched_tag_file_resource_datum_handler@@@@XZ");
//};

//public: struct s_data_array * c_smart_data_array<struct c_patched_tag_file_resource_datum_handler::s_patched_resource_datum>::operator struct s_data_array *(void) const
//{
//    mangled_ppc("??B?$c_smart_data_array@Us_patched_resource_datum@c_patched_tag_file_resource_datum_handler@@@@QBAPAUs_data_array@@XZ");
//};

//public: struct s_data_array * c_smart_data_array<struct c_patched_tag_file_resource_datum_handler::s_patched_resource_datum>::operator->(void)
//{
//    mangled_ppc("??C?$c_smart_data_array@Us_patched_resource_datum@c_patched_tag_file_resource_datum_handler@@@@QAAPAUs_data_array@@XZ");
//};

//public: class c_smart_data_array<struct c_patched_tag_file_resource_datum_handler::s_patched_resource_datum> & c_smart_data_array<struct c_patched_tag_file_resource_datum_handler::s_patched_resource_datum>::operator=(struct s_data_array *)
//{
//    mangled_ppc("??4?$c_smart_data_array@Us_patched_resource_datum@c_patched_tag_file_resource_datum_handler@@@@QAAAAV0@PAUs_data_array@@@Z");
//};

//public: long c_array_operator_interface<class c_wrapped_array_no_init<class c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler>, class c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler>::count(void) const
//{
//    mangled_ppc("?count@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Vc_patched_resource_datum_handler@c_patched_tag_file_resource_datum_handler@@@@Vc_patched_resource_datum_handler@c_patched_tag_file_resource_datum_handler@@@@QBAJXZ");
//};

//public: class c_wrapped_array_no_init<class c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler> const * c_recursive_template_pattern<class c_wrapped_array_no_init<class c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler> >::get_super_class(void) const
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@Vc_patched_resource_datum_handler@c_patched_tag_file_resource_datum_handler@@@@@@QBAPBV?$c_wrapped_array_no_init@Vc_patched_resource_datum_handler@c_patched_tag_file_resource_datum_handler@@@@XZ");
//};

//struct s_allocation_description_holder make_allocation_description<class c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler>(class c_wrapped_array<class c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler> &, unsigned long)
//{
//    mangled_ppc("??$make_allocation_description@Vc_patched_resource_datum_handler@c_patched_tag_file_resource_datum_handler@@@@YA?AUs_allocation_description_holder@@AAV?$c_wrapped_array@Vc_patched_resource_datum_handler@c_patched_tag_file_resource_datum_handler@@@@K@Z");
//};

//public: c_wrapped_array<struct s_allocation_description_holder>::ctor<1>(struct s_allocation_description_holder (&)[1])
//{
//    mangled_ppc("??$?0$00@?$c_wrapped_array@Us_allocation_description_holder@@@@QAA@AAY00Us_allocation_description_holder@@@Z");
//};

//public: c_wrapped_array<struct s_tag_resource_interop_location const>::ctor<struct s_tag_resource_interop_location const>(class c_wrapped_array<struct s_tag_resource_interop_location const> &)
//{
//    mangled_ppc("??$?0$$CBUs_tag_resource_interop_location@@@?$c_wrapped_array@$$CBUs_tag_resource_interop_location@@@@QAA@AAV0@@Z");
//};

//public: struct c_patched_tag_file_resource_datum_handler::s_patched_resource_datum const * c_basic_buffer<void const>::c_basic_buffer_checked_caster_const::operatorcast<struct c_patched_tag_file_resource_datum_handler::s_patched_resource_datum>(void)
//{
//    mangled_ppc("??$?BUs_patched_resource_datum@c_patched_tag_file_resource_datum_handler@@@c_basic_buffer_checked_caster_const@?$c_basic_buffer@$$CBX@@QAAPBUs_patched_resource_datum@c_patched_tag_file_resource_datum_handler@@XZ");
//};

//public: struct c_patched_tag_file_resource_datum_handler::s_patched_resource_datum * c_basic_buffer<void>::c_basic_buffer_checked_caster::operatorcast<struct c_patched_tag_file_resource_datum_handler::s_patched_resource_datum>(void)
//{
//    mangled_ppc("??$?BUs_patched_resource_datum@c_patched_tag_file_resource_datum_handler@@@c_basic_buffer_checked_caster@?$c_basic_buffer@X@@QAAPAUs_patched_resource_datum@c_patched_tag_file_resource_datum_handler@@XZ");
//};

//public: struct s_tag_resource_interop_location const * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_resource_interop_location const>, struct s_tag_resource_interop_location const>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CBUs_tag_resource_interop_location@@@@$$CBUs_tag_resource_interop_location@@@@QAAPBUs_tag_resource_interop_location@@XZ");
//};

//public: c_wrapped_array_allocation_description<class c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler>::c_wrapped_array_allocation_description<class c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler>(class c_wrapped_array<class c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler> &, unsigned long)
//{
//    mangled_ppc("??0?$c_wrapped_array_allocation_description@Vc_patched_resource_datum_handler@c_patched_tag_file_resource_datum_handler@@@@QAA@AAV?$c_wrapped_array@Vc_patched_resource_datum_handler@c_patched_tag_file_resource_datum_handler@@@@K@Z");
//};

//public: virtual unsigned long c_wrapped_array_allocation_description<class c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler>::get_unaligned_size(void) const
//{
//    mangled_ppc("?get_unaligned_size@?$c_wrapped_array_allocation_description@Vc_patched_resource_datum_handler@c_patched_tag_file_resource_datum_handler@@@@UBAKXZ");
//};

//public: virtual unsigned long c_wrapped_array_allocation_description<class c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler>::get_alignment_bits(void) const
//{
//    mangled_ppc("?get_alignment_bits@?$c_wrapped_array_allocation_description@Vc_patched_resource_datum_handler@c_patched_tag_file_resource_datum_handler@@@@UBAKXZ");
//};

//public: virtual void c_wrapped_array_allocation_description<class c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler>::assign_storage(class c_raw_storage_buffer_iterator &) const
//{
//    mangled_ppc("?assign_storage@?$c_wrapped_array_allocation_description@Vc_patched_resource_datum_handler@c_patched_tag_file_resource_datum_handler@@@@UBAXAAVc_raw_storage_buffer_iterator@@@Z");
//};

//struct s_allocation_description_holder make_into_description_holder<class c_wrapped_array_allocation_description<class c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler> >(class c_wrapped_array_allocation_description<class c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler>)
//{
//    mangled_ppc("??$make_into_description_holder@V?$c_wrapped_array_allocation_description@Vc_patched_resource_datum_handler@c_patched_tag_file_resource_datum_handler@@@@@@YA?AUs_allocation_description_holder@@V?$c_wrapped_array_allocation_description@Vc_patched_resource_datum_handler@c_patched_tag_file_resource_datum_handler@@@@@Z");
//};

//public: struct c_patched_tag_file_resource_datum_handler::s_patched_resource_datum const * c_basic_buffer<void const>::get_as_type<struct c_patched_tag_file_resource_datum_handler::s_patched_resource_datum const>(void) const
//{
//    mangled_ppc("??$get_as_type@$$CBUs_patched_resource_datum@c_patched_tag_file_resource_datum_handler@@@?$c_basic_buffer@$$CBX@@QBAPBUs_patched_resource_datum@c_patched_tag_file_resource_datum_handler@@XZ");
//};

//public: struct c_patched_tag_file_resource_datum_handler::s_patched_resource_datum * c_basic_buffer<void>::get_as_type<struct c_patched_tag_file_resource_datum_handler::s_patched_resource_datum>(void)
//{
//    mangled_ppc("??$get_as_type@Us_patched_resource_datum@c_patched_tag_file_resource_datum_handler@@@?$c_basic_buffer@X@@QAAPAUs_patched_resource_datum@c_patched_tag_file_resource_datum_handler@@XZ");
//};

//unsigned long get_total_unaligned_raw_size<class c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler>(long)
//{
//    mangled_ppc("??$get_total_unaligned_raw_size@Vc_patched_resource_datum_handler@c_patched_tag_file_resource_datum_handler@@@@YAKJ@Z");
//};

//public: void c_raw_storage_buffer_iterator::set_wrapped_array<class c_wrapped_array, class c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler>(class c_wrapped_array<class c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler> &, long)
//{
//    mangled_ppc("??$set_wrapped_array@Vc_wrapped_array@@Vc_patched_resource_datum_handler@c_patched_tag_file_resource_datum_handler@@@c_raw_storage_buffer_iterator@@QAAXAAV?$c_wrapped_array@Vc_patched_resource_datum_handler@c_patched_tag_file_resource_datum_handler@@@@J@Z");
//};

//public: struct c_patched_tag_file_resource_datum_handler::s_patched_resource_datum const * c_basic_buffer<void const>::get_as_type_from_offset<struct c_patched_tag_file_resource_datum_handler::s_patched_resource_datum const>(unsigned long) const
//{
//    mangled_ppc("??$get_as_type_from_offset@$$CBUs_patched_resource_datum@c_patched_tag_file_resource_datum_handler@@@?$c_basic_buffer@$$CBX@@QBAPBUs_patched_resource_datum@c_patched_tag_file_resource_datum_handler@@K@Z");
//};

//public: struct c_patched_tag_file_resource_datum_handler::s_patched_resource_datum * c_basic_buffer<void>::get_as_type_from_offset<struct c_patched_tag_file_resource_datum_handler::s_patched_resource_datum>(unsigned long)
//{
//    mangled_ppc("??$get_as_type_from_offset@Us_patched_resource_datum@c_patched_tag_file_resource_datum_handler@@@?$c_basic_buffer@X@@QAAPAUs_patched_resource_datum@c_patched_tag_file_resource_datum_handler@@K@Z");
//};

//public: class c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler * c_raw_storage_buffer_iterator::get_array_elements<class c_patched_tag_file_resource_datum_handler::c_patched_resource_datum_handler>(long)
//{
//    mangled_ppc("??$get_array_elements@Vc_patched_resource_datum_handler@c_patched_tag_file_resource_datum_handler@@@c_raw_storage_buffer_iterator@@QAAPAVc_patched_resource_datum_handler@c_patched_tag_file_resource_datum_handler@@J@Z");
//};

