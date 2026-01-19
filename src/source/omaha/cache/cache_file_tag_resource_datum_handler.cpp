/* ---------- headers */

#include "omaha\cache\cache_file_tag_resource_datum_handler.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: void c_cache_file_tag_resource_datum_handler::initialize_for_new_map(class c_allocation_interface *, struct s_cache_file_loaded_tags_header const *, long, class c_wrapped_array<struct s_cache_file_resource_sections_location const>, class c_wrapped_array<struct s_cache_file_tag_resource_vtable const *>, bool, class c_cache_file_resource_file_location_table const *);
// public: static bool `public: void c_cache_file_tag_resource_datum_handler::initialize_for_new_map(class c_allocation_interface *, struct s_cache_file_loaded_tags_header const *, long, class c_wrapped_array<struct s_cache_file_resource_sections_location const>, class c_wrapped_array<struct s_cache_file_tag_resource_vtable const *>, bool, class c_cache_file_resource_file_location_table const *)'::`24'::c_helper::accumulate_interop_types(struct s_cache_file_tag_resource_data const *, class c_cache_file_tag_interop_bulk_sizer *, unsigned long *, unsigned long *);
// public: void c_cache_file_tag_resource_datum_handler::dispose_from_old_map(void);
// public: long c_cache_file_tag_resource_datum_handler::get_maximum_resource_count(void) const;
// public: long c_cache_file_tag_resource_datum_handler::try_to_get_resource_handle(long) const;
// public: class c_basic_buffer<void> c_cache_file_tag_resource_datum_handler::get_control_data(long, bool) const;
// public: c_datum_index::c_datum_index(long);
// public: long c_datum_index::get_absolute_index(void) const;
// public: class c_tag_resource_fixup c_cache_file_tag_resource_datum_handler::get_root_address_fixup(long) const;
// public: bool c_cache_file_tag_resource_datum_handler::is_streamed(long) const;
// public: bool c_cache_file_tag_resource_datum_handler::is_optional(long) const;
// public: bool c_cache_file_tag_resource_datum_handler::any_pageable_data(long) const;
// struct s_tag_resource_table_location_handle_struct * datum_index_to_table_handle(long);
// public: struct s_tag_resource_table_location_handle_struct * c_cache_file_tag_resource_datum_handler::get_pageable_location_handle(long) const;
// public: struct s_tag_resource_table_location_handle_struct * c_cache_file_tag_resource_datum_handler::get_optional_location_handle(long) const;
// public: unsigned long c_cache_file_tag_resource_datum_handler::get_pageable_location_offset(long) const;
// public: bool c_cache_file_tag_resource_datum_handler::any_optional_data(long) const;
// public: unsigned long c_cache_file_tag_resource_datum_handler::get_optional_location_offset(long) const;
// public: long c_cache_file_tag_resource_datum_handler::get_resource_owner(long) const;
// public: class c_wrapped_array<struct s_tag_resource_fixup_location const> c_cache_file_tag_resource_datum_handler::get_control_fixups(long) const;
// public: class c_basic_buffer<void> c_cache_file_tag_resource_datum_handler::get_interop_buffer(long, bool) const;
// public: class c_wrapped_array<struct s_tag_resource_interop_location const> c_cache_file_tag_resource_datum_handler::get_interop_locations(long) const;
// public: bool c_cache_file_tag_resource_datum_handler::describe_resource(long, class c_wrapped_array<char>) const;
// public: struct s_tag_resource_definition const * c_cache_file_tag_resource_datum_handler::get_resource_definition(long) const;
// public: bool c_cache_file_tag_resource_datum_handler::register_resource(long, long, struct s_tag_resource_definition const *, void *) const;
// public: void c_cache_file_tag_resource_datum_handler::unregister_resource(long, long, struct s_tag_resource_definition const *, void *) const;
// public: bool c_cache_file_tag_resource_datum_handler::get_streaming_location(long, unsigned long, unsigned long, struct s_tag_resource_table_location_handle_struct **, unsigned long *, unsigned long *, bool *) const;
// class c_basic_buffer<void> cache_file_resource_gestalt_get_required_control_data(struct s_cache_file_resource_gestalt const *, struct s_cache_file_tag_resource_data const *);
// private: struct s_cache_file_resource_gestalt const * c_cache_file_tag_resource_datum_handler::get_gestalt(void) const;
// private: struct s_cache_file_tag_resource_data const * c_cache_file_tag_resource_datum_handler::get_resource_data(long) const;
// private: struct s_cache_file_tag_resource_data const * c_cache_file_tag_resource_datum_handler::try_to_get_resource_data_by_index(long) const;
// private: bool c_cache_file_tag_resource_datum_handler::valid_resource_handle(long) const;
// public: long c_datum_index::get_identifier(void) const;
// private: void c_cache_file_tag_resource_datum_handler::get_pageable_file_location(long, struct s_cache_file_resource_file_location const **, unsigned long *) const;
// private: void c_cache_file_tag_resource_datum_handler::get_optional_file_location(long, struct s_cache_file_resource_file_location const **, unsigned long *) const;
// public: void c_cache_file_combined_tag_resource_datum_handler::initialize_for_new_map(class c_allocation_interface *, class c_cache_file_tag_resource_handle_remapper const *, class c_cache_file_resource_uber_location_table *, unsigned long);
// public: void c_cache_file_combined_tag_resource_datum_handler::dispose_from_old_map(class c_allocation_interface *);
// public: void c_cache_file_combined_tag_resource_datum_handler::add_cache_file(long, class c_cache_file_tag_resource_datum_handler *, unsigned long);
// private: class c_cache_file_tag_resource_datum_handler const * c_cache_file_combined_tag_resource_datum_handler::get_datum_handler_from_handle(long) const;
// private: unsigned long c_cache_file_combined_tag_resource_datum_handler::get_location_table_name_resolution_identifier(long) const;
// private: class c_cache_file_tag_resource_datum_handler const * c_cache_file_combined_tag_resource_datum_handler::get_datum_handler_from_absolute_index(long) const;
// private: struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler const * c_cache_file_combined_tag_resource_datum_handler::get_datum_handler(long) const;
// private: long c_cache_file_combined_tag_resource_datum_handler::get_datum_handler_count(void) const;
// public: long c_cache_file_combined_tag_resource_datum_handler::get_maximum_resource_count(void) const;
// public: long c_cache_file_combined_tag_resource_datum_handler::try_to_get_resource_handle(long) const;
// public: virtual class c_basic_buffer<void> c_cache_file_combined_tag_resource_datum_handler::get_control_data(long, bool);
// public: virtual class c_tag_resource_fixup c_cache_file_combined_tag_resource_datum_handler::get_root_address_fixup(long);
// public: virtual bool c_cache_file_combined_tag_resource_datum_handler::is_streamed(long);
// public: virtual bool c_cache_file_combined_tag_resource_datum_handler::is_optional(long);
// public: virtual bool c_cache_file_combined_tag_resource_datum_handler::any_pageable_data(long);
// public: virtual bool c_cache_file_combined_tag_resource_datum_handler::any_optional_data(long);
// public: virtual struct s_tag_resource_location_handle_struct * c_cache_file_combined_tag_resource_datum_handler::get_pageable_location_handle(long);
// public: virtual struct s_tag_resource_location_handle_struct * c_cache_file_combined_tag_resource_datum_handler::get_optional_location_handle(long);
// public: virtual unsigned long c_cache_file_combined_tag_resource_datum_handler::get_pageable_location_offset(long);
// public: virtual unsigned long c_cache_file_combined_tag_resource_datum_handler::get_optional_location_offset(long);
// public: virtual struct s_tag_resource_definition const * c_cache_file_combined_tag_resource_datum_handler::get_resource_definition(long);
// public: virtual long c_cache_file_combined_tag_resource_datum_handler::get_resource_owner(long);
// public: virtual class c_wrapped_array<struct s_tag_resource_fixup_location const> c_cache_file_combined_tag_resource_datum_handler::get_control_fixups(long);
// public: virtual long c_cache_file_combined_tag_resource_datum_handler::get_control_data_alignment(long);
// public: virtual bool c_cache_file_combined_tag_resource_datum_handler::has_valid_interop_locations(long);
// public: virtual bool c_cache_file_combined_tag_resource_datum_handler::describe_resource_cache_location(long, enum e_tag_resource_lod, struct s_tag_resource_cache_file_location *);
// public: virtual class c_basic_buffer<void> c_cache_file_combined_tag_resource_datum_handler::get_interop_buffer(long, bool);
// public: virtual class c_wrapped_array<struct s_tag_resource_interop_location const> c_cache_file_combined_tag_resource_datum_handler::get_interop_locations(long);
// public: virtual bool c_cache_file_combined_tag_resource_datum_handler::describe_resource(long, class c_wrapped_array<char>);
// public: virtual long c_cache_file_combined_tag_resource_datum_handler::lookup_resource_owner(struct s_tag_group const *, char const *);
// public: virtual bool c_cache_file_combined_tag_resource_datum_handler::resource_owner_is_reloading(long);
// public: virtual bool c_cache_file_combined_tag_resource_datum_handler::describe_resource_owner(long, struct s_tag_group const **, class c_wrapped_array<char>);
// public: virtual class c_tag_resource_runtime_active_set * c_cache_file_combined_tag_resource_datum_handler::get_resource_active_set_dont_cache(void);
// public: virtual bool c_cache_file_combined_tag_resource_datum_handler::register_resource(long, long, struct s_tag_resource_definition const *, void *);
// public: virtual void c_cache_file_combined_tag_resource_datum_handler::unregister_resource(long, long, struct s_tag_resource_definition const *, void *);
// public: bool c_cache_file_combined_tag_resource_datum_handler::get_streaming_location(long, unsigned long, unsigned long, struct s_tag_resource_location_handle_struct **, unsigned long *, unsigned long *, bool *) const;
// public: long c_typed_tag_block<struct s_tag_resource_interop_location>::count(void) const;
// public: struct s_tag_resource_interop_location const & c_array_operator_interface<class c_typed_tag_block<struct s_tag_resource_interop_location>, struct s_tag_resource_interop_location>::operator[](long) const;
// public: struct s_tag_resource_interop_location const * c_array_operator_interface<class c_typed_tag_block<struct s_tag_resource_interop_location>, struct s_tag_resource_interop_location>::get_element(long) const;
// public: long c_typed_tag_block<struct s_cache_file_tag_resource_definition>::count(void) const;
// public: struct s_cache_file_tag_resource_definition const & c_array_operator_interface<class c_typed_tag_block<struct s_cache_file_tag_resource_definition>, struct s_cache_file_tag_resource_definition>::operator[](long) const;
// public: struct s_cache_file_tag_resource_definition const * c_array_operator_interface<class c_typed_tag_block<struct s_cache_file_tag_resource_definition>, struct s_cache_file_tag_resource_definition>::get_element(long) const;
// public: bool c_array_operator_interface<class c_typed_tag_block<struct s_cache_file_tag_resource_definition>, struct s_cache_file_tag_resource_definition>::valid_index(long) const;
// public: long c_typed_tag_block<struct s_cache_file_tag_interop_definition>::count(void) const;
// public: struct s_cache_file_tag_interop_definition const & c_array_operator_interface<class c_typed_tag_block<struct s_cache_file_tag_interop_definition>, struct s_cache_file_tag_interop_definition>::operator[](long) const;
// public: bool c_array_operator_interface<class c_typed_tag_block<struct s_cache_file_zone_manifest>, struct s_cache_file_zone_manifest>::empty(void) const;
// public: struct s_cache_file_resource_sections_location const & c_array_operator_interface<class c_wrapped_array_no_init<struct s_cache_file_resource_sections_location const>, struct s_cache_file_resource_sections_location const>::operator[](long) const;
// public: long c_wrapped_array_no_init<struct s_cache_file_resource_runtime_data_new>::count(void) const;
// public: struct s_cache_file_resource_runtime_data_new & c_array_operator_interface<class c_wrapped_array_no_init<struct s_cache_file_resource_runtime_data_new>, struct s_cache_file_resource_runtime_data_new>::operator[](long);
// public: struct s_cache_file_resource_runtime_data_new const & c_array_operator_interface<class c_wrapped_array_no_init<struct s_cache_file_resource_runtime_data_new>, struct s_cache_file_resource_runtime_data_new>::operator[](long) const;
// public: struct s_cache_file_resource_runtime_data_new * c_array_operator_interface<class c_wrapped_array_no_init<struct s_cache_file_resource_runtime_data_new>, struct s_cache_file_resource_runtime_data_new>::get_elements(void);
// public: long c_array_operator_interface<class c_wrapped_array_no_init<struct s_cache_file_resource_runtime_data_new>, struct s_cache_file_resource_runtime_data_new>::get_total_element_size(void) const;
// public: long c_wrapped_array_no_init<struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler>::count(void) const;
// public: struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler & c_array_operator_interface<class c_wrapped_array_no_init<struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler>, struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler>::operator[](long);
// public: struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler const * c_array_operator_interface<class c_wrapped_array_no_init<struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler>, struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler>::get_element(long) const;
// public: void c_array_operator_interface<class c_wrapped_array_no_init<struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler>, struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler>::set_all(struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler const &);
// public: struct s_tag_resource_interop_location const * c_typed_tag_block<struct s_tag_resource_interop_location>::begin(void) const;
// public: struct s_tag_resource_interop_location const * c_array_operator_interface<class c_typed_tag_block<struct s_tag_resource_interop_location>, struct s_tag_resource_interop_location>::begin(void) const;
// public: bool c_array_operator_interface<class c_typed_tag_block<struct s_tag_resource_interop_location>, struct s_tag_resource_interop_location>::valid_index(long) const;
// public: class c_typed_tag_block<struct s_tag_resource_interop_location> const * c_recursive_template_pattern<class c_typed_tag_block<struct s_tag_resource_interop_location> >::get_super_class(void) const;
// public: struct s_cache_file_tag_resource_definition const * c_typed_tag_block<struct s_cache_file_tag_resource_definition>::begin(void) const;
// public: struct s_cache_file_tag_resource_definition const * c_array_operator_interface<class c_typed_tag_block<struct s_cache_file_tag_resource_definition>, struct s_cache_file_tag_resource_definition>::begin(void) const;
// public: long c_array_operator_interface<class c_typed_tag_block<struct s_cache_file_tag_resource_definition>, struct s_cache_file_tag_resource_definition>::count(void) const;
// public: class c_typed_tag_block<struct s_cache_file_tag_resource_definition> const * c_recursive_template_pattern<class c_typed_tag_block<struct s_cache_file_tag_resource_definition> >::get_super_class(void) const;
// public: struct s_cache_file_tag_interop_definition const * c_typed_tag_block<struct s_cache_file_tag_interop_definition>::begin(void) const;
// public: bool c_array_operator_interface<class c_typed_tag_block<struct s_cache_file_tag_interop_definition>, struct s_cache_file_tag_interop_definition>::valid_index(long) const;
// public: class c_typed_tag_block<struct s_cache_file_tag_interop_definition> const * c_recursive_template_pattern<class c_typed_tag_block<struct s_cache_file_tag_interop_definition> >::get_super_class(void) const;
// public: struct s_cache_file_resource_sections_location const * c_wrapped_array_no_init<struct s_cache_file_resource_sections_location const>::begin(void) const;
// public: bool c_array_operator_interface<class c_wrapped_array_no_init<struct s_cache_file_resource_sections_location const>, struct s_cache_file_resource_sections_location const>::valid_index(long) const;
// public: class c_wrapped_array_no_init<struct s_cache_file_resource_sections_location const> const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_cache_file_resource_sections_location const> >::get_super_class(void) const;
// public: struct s_cache_file_resource_runtime_data_new * c_wrapped_array_no_init<struct s_cache_file_resource_runtime_data_new>::begin(void);
// public: struct s_cache_file_resource_runtime_data_new const * c_wrapped_array_no_init<struct s_cache_file_resource_runtime_data_new>::begin(void) const;
// public: struct s_cache_file_resource_runtime_data_new * c_array_operator_interface<class c_wrapped_array_no_init<struct s_cache_file_resource_runtime_data_new>, struct s_cache_file_resource_runtime_data_new>::begin(void);
// public: bool c_array_operator_interface<class c_wrapped_array_no_init<struct s_cache_file_resource_runtime_data_new>, struct s_cache_file_resource_runtime_data_new>::valid_index(long) const;
// public: long c_array_operator_interface<class c_wrapped_array_no_init<struct s_cache_file_resource_runtime_data_new>, struct s_cache_file_resource_runtime_data_new>::count(void) const;
// public: class c_wrapped_array_no_init<struct s_cache_file_resource_runtime_data_new> * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_cache_file_resource_runtime_data_new> >::get_super_class(void);
// public: class c_wrapped_array_no_init<struct s_cache_file_resource_runtime_data_new> const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_cache_file_resource_runtime_data_new> >::get_super_class(void) const;
// public: struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler * c_wrapped_array_no_init<struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler>::begin(void);
// public: struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler * c_array_operator_interface<class c_wrapped_array_no_init<struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler>, struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler>::begin(void);
// public: struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler const * c_array_operator_interface<class c_wrapped_array_no_init<struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler>, struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler>::begin(void) const;
// public: struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler * c_array_operator_interface<class c_wrapped_array_no_init<struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler>, struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler>::end(void);
// public: bool c_array_operator_interface<class c_wrapped_array_no_init<struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler>, struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler>::valid_index(long) const;
// public: class c_wrapped_array_no_init<struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler> * c_recursive_template_pattern<class c_wrapped_array_no_init<struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler> >::get_super_class(void);
// public: long c_array_operator_interface<class c_typed_tag_block<struct s_tag_resource_interop_location>, struct s_tag_resource_interop_location>::count(void) const;
// public: long c_array_operator_interface<class c_typed_tag_block<struct s_cache_file_tag_interop_definition>, struct s_cache_file_tag_interop_definition>::count(void) const;
// public: long c_array_operator_interface<class c_wrapped_array_no_init<struct s_cache_file_resource_sections_location const>, struct s_cache_file_resource_sections_location const>::count(void) const;
// public: struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler const * c_wrapped_array_no_init<struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler>::begin(void) const;
// public: struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler * c_wrapped_array_no_init<struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler>::end(void);
// public: long c_array_operator_interface<class c_wrapped_array_no_init<struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler>, struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler>::count(void) const;
// public: class c_wrapped_array_no_init<struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler> const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler> >::get_super_class(void) const;
// public: bool c_flags_no_init<enum e_cache_file_tag_resource_data_bit, unsigned short, 2, struct s_default_enum_string_resolver>::test(enum e_cache_file_tag_resource_data_bit) const;
// ??$member_compare_val@Us_cache_file_tag_resource_vtable@@Us_tag_persistent_identifier@@Vc_memcmp_equals@@@@YA?AV?$member_compare_val_t@Us_cache_file_tag_resource_vtable@@Us_tag_persistent_identifier@@Vc_memcmp_equals@@@@PQs_cache_file_tag_resource_vtable@@Us_tag_persistent_identifier@@ABU2@Vc_memcmp_equals@@@Z;
// bool find_if_container_value<class c_wrapped_array<struct s_cache_file_tag_resource_vtable const *>, class member_compare_val_t<struct s_cache_file_tag_resource_vtable, struct s_tag_persistent_identifier, class c_memcmp_equals>, struct s_cache_file_tag_resource_vtable const *const *>(class c_wrapped_array<struct s_cache_file_tag_resource_vtable const *> const &, class member_compare_val_t<struct s_cache_file_tag_resource_vtable, struct s_tag_persistent_identifier, class c_memcmp_equals>, struct s_cache_file_tag_resource_vtable const *const **);
// public: struct s_cache_file_tag_resource_vtable const *& s_static_array<struct s_cache_file_tag_resource_vtable const *, 16>::operator[]<long>(long);
// class c_wrapped_array<struct s_cache_file_resource_runtime_data_new> allocate_tracked_wrapped_array<struct s_cache_file_resource_runtime_data_new>(class c_allocation_interface *, unsigned long, char const *);
// void free_wrapped_array<struct s_cache_file_resource_runtime_data_new>(class c_allocation_interface *, class c_wrapped_array<struct s_cache_file_resource_runtime_data_new> *);
// public: c_wrapped_array<struct s_tag_resource_fixup_location const>::ctor<class c_typed_tag_block<struct s_tag_resource_fixup_location>, struct s_tag_resource_fixup_location>(class c_array_operator_interface<class c_typed_tag_block<struct s_tag_resource_fixup_location>, struct s_tag_resource_fixup_location> const &);
// public: c_wrapped_array<struct s_tag_resource_interop_location const>::ctor<class c_typed_tag_block<struct s_tag_resource_interop_location>, struct s_tag_resource_interop_location>(class c_array_operator_interface<class c_typed_tag_block<struct s_tag_resource_interop_location>, struct s_tag_resource_interop_location> const &);
// public: struct s_cache_file_tag_resource_vtable const *const & s_static_array<struct s_cache_file_tag_resource_vtable const *, 16>::operator[]<long>(long) const;
// class c_wrapped_array<struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler> allocate_tracked_wrapped_array<struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler>(class c_allocation_interface *, unsigned long, char const *);
// void free_wrapped_array<struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler>(class c_allocation_interface *, class c_wrapped_array<struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler> *);
// void std::fill<struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler *, struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler>(struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler *, struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler *, struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler const &);
// public: void c_wrapped_array_no_init<struct s_tag_resource_interop_location const>::set_elements(struct s_tag_resource_interop_location const *, long);
// public: struct s_tag_resource_fixup_location const * c_array_operator_interface<class c_typed_tag_block<struct s_tag_resource_fixup_location>, struct s_tag_resource_fixup_location>::get_elements(void) const;
// public: long c_array_operator_interface<class c_typed_tag_block<struct s_tag_resource_fixup_location>, struct s_tag_resource_fixup_location>::count(void) const;
// public: struct s_tag_resource_interop_location const * c_array_operator_interface<class c_typed_tag_block<struct s_tag_resource_interop_location>, struct s_tag_resource_interop_location>::get_elements(void) const;
// public: void c_wrapped_array_no_init<struct s_cache_file_resource_runtime_data_new>::clear(void);
// public: struct s_cache_file_resource_runtime_data_new * c_wrapped_array_no_init<struct s_cache_file_resource_runtime_data_new>::end(void);
// public: void c_wrapped_array_no_init<struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler>::clear(void);
// public: struct s_cache_file_tag_resource_vtable const *const * c_wrapped_array_no_init<struct s_cache_file_tag_resource_vtable const *>::begin(void) const;
// public: struct s_cache_file_tag_resource_vtable const *const * c_wrapped_array_no_init<struct s_cache_file_tag_resource_vtable const *>::end(void) const;
// ??0?$member_compare_val_t@Us_cache_file_tag_resource_vtable@@Us_tag_persistent_identifier@@Vc_memcmp_equals@@@@QAA@PQs_cache_file_tag_resource_vtable@@Us_tag_persistent_identifier@@ABU2@@Z;
// public: long c_typed_tag_block<struct s_tag_resource_fixup_location>::count(void) const;
// public: struct s_tag_resource_fixup_location const * c_array_operator_interface<class c_typed_tag_block<struct s_tag_resource_fixup_location>, struct s_tag_resource_fixup_location>::begin(void) const;
// public: class c_typed_tag_block<struct s_tag_resource_fixup_location> const * c_recursive_template_pattern<class c_typed_tag_block<struct s_tag_resource_fixup_location> >::get_super_class(void) const;
// public: void c_wrapped_array_no_init<struct s_cache_file_resource_runtime_data_new>::set_elements(struct s_cache_file_resource_runtime_data_new *, long);
// public: struct s_tag_resource_fixup_location const * c_typed_tag_block<struct s_tag_resource_fixup_location>::begin(void) const;
// public: static bool c_flags_no_init<enum e_cache_file_tag_resource_data_bit, unsigned short, 2, struct s_default_enum_string_resolver>::valid_bit(enum e_cache_file_tag_resource_data_bit);
// private: static unsigned short c_flags_no_init<enum e_cache_file_tag_resource_data_bit, unsigned short, 2, struct s_default_enum_string_resolver>::flag_size_type(enum e_cache_file_tag_resource_data_bit);
// struct s_cache_file_tag_resource_vtable const *const * std::find_if<struct s_cache_file_tag_resource_vtable const *const *, class member_compare_val_t<struct s_cache_file_tag_resource_vtable, struct s_tag_persistent_identifier, class c_memcmp_equals> >(struct s_cache_file_tag_resource_vtable const *const *, struct s_cache_file_tag_resource_vtable const *const *, class member_compare_val_t<struct s_cache_file_tag_resource_vtable, struct s_tag_persistent_identifier, class c_memcmp_equals>);
// public: static bool s_static_array<struct s_cache_file_tag_resource_vtable const *, 16>::valid<long>(long);
// public: struct s_cache_file_resource_runtime_data_new * c_basic_buffer<void>::get_as_type_array<struct s_cache_file_resource_runtime_data_new>(unsigned long);
// class c_wrapped_array<struct s_cache_file_resource_runtime_data_new> make_wrapped_array<struct s_cache_file_resource_runtime_data_new>(struct s_cache_file_resource_runtime_data_new *, long);
// public: struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler * c_basic_buffer<void>::get_as_type_array<struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler>(unsigned long);
// class c_wrapped_array<struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler> make_wrapped_array<struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler>(struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler *, long);
// struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler * std::_Checked_base<struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler *>(struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler *&);
// void std::_Fill<struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler *, struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler>(struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler *, struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler *, struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler const &);
// public: c_wrapped_array<struct s_cache_file_resource_runtime_data_new>::c_wrapped_array<struct s_cache_file_resource_runtime_data_new>(struct s_cache_file_resource_runtime_data_new *, long);
// public: c_wrapped_array<struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler>::c_wrapped_array<struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler>(struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler *, long);
// struct s_cache_file_tag_resource_vtable const *const * std::_Checked_base<struct s_cache_file_tag_resource_vtable const *const *>(struct s_cache_file_tag_resource_vtable const *const *&);
// struct s_cache_file_tag_resource_vtable const *const * std::_Find_if<struct s_cache_file_tag_resource_vtable const *const *, class member_compare_val_t<struct s_cache_file_tag_resource_vtable, struct s_tag_persistent_identifier, class c_memcmp_equals> >(struct s_cache_file_tag_resource_vtable const *const *, struct s_cache_file_tag_resource_vtable const *const *, class member_compare_val_t<struct s_cache_file_tag_resource_vtable, struct s_tag_persistent_identifier, class c_memcmp_equals>);
// void std::_Checked_assign_from_base<struct s_cache_file_tag_resource_vtable const *const *>(struct s_cache_file_tag_resource_vtable const *const *&, struct s_cache_file_tag_resource_vtable const *const *const &);
// struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler * std::_Checked_base<struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler *>(struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler *&, struct std::_Unchanged_checked_iterator_base_type_tag);
// void std::_Debug_range<struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler *>(struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler *, struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler *, wchar_t const *, unsigned int);
// public: bool member_compare_val_t<struct s_cache_file_tag_resource_vtable, struct s_tag_persistent_identifier, class c_memcmp_equals>::operator()(struct s_cache_file_tag_resource_vtable const *) const;
// struct s_cache_file_tag_resource_vtable const *const * std::_Checked_base<struct s_cache_file_tag_resource_vtable const *const *>(struct s_cache_file_tag_resource_vtable const *const *&, struct std::_Unchanged_checked_iterator_base_type_tag);
// void std::_Debug_range<struct s_cache_file_tag_resource_vtable const *const *>(struct s_cache_file_tag_resource_vtable const *const *, struct s_cache_file_tag_resource_vtable const *const *, wchar_t const *, unsigned int);
// void std::_Debug_pointer<class member_compare_val_t<struct s_cache_file_tag_resource_vtable, struct s_tag_persistent_identifier, class c_memcmp_equals> >(class member_compare_val_t<struct s_cache_file_tag_resource_vtable, struct s_tag_persistent_identifier, class c_memcmp_equals> &, wchar_t const *, unsigned int);
// struct std::random_access_iterator_tag std::_Iter_cat<struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler *>(struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler *const &);
// void std::_Debug_range2<struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler *>(struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler *, struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler *, wchar_t const *, unsigned int, struct std::random_access_iterator_tag);
// public: bool c_memcmp_equals::operator()<struct s_tag_persistent_identifier>(struct s_tag_persistent_identifier const &, struct s_tag_persistent_identifier const &) const;
// struct std::random_access_iterator_tag std::_Iter_cat<struct s_cache_file_tag_resource_vtable const *const *>(struct s_cache_file_tag_resource_vtable const *const *const &);
// void std::_Debug_range2<struct s_cache_file_tag_resource_vtable const *const *>(struct s_cache_file_tag_resource_vtable const *const *, struct s_cache_file_tag_resource_vtable const *const *, wchar_t const *, unsigned int, struct std::random_access_iterator_tag);
// void std::_Debug_pointer<struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler>(struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler *, wchar_t const *, unsigned int);
// void std::_Debug_pointer<struct s_cache_file_tag_resource_vtable const *>(struct s_cache_file_tag_resource_vtable const *const *, wchar_t const *, unsigned int);

//public: void c_cache_file_tag_resource_datum_handler::initialize_for_new_map(class c_allocation_interface *, struct s_cache_file_loaded_tags_header const *, long, class c_wrapped_array<struct s_cache_file_resource_sections_location const>, class c_wrapped_array<struct s_cache_file_tag_resource_vtable const *>, bool, class c_cache_file_resource_file_location_table const *)
//{
//    mangled_ppc("?initialize_for_new_map@c_cache_file_tag_resource_datum_handler@@QAAXPAVc_allocation_interface@@PBUs_cache_file_loaded_tags_header@@JV?$c_wrapped_array@$$CBUs_cache_file_resource_sections_location@@@@V?$c_wrapped_array@PBUs_cache_file_tag_resource_vtable@@@@_NPBVc_cache_file_resource_file_location_table@@@Z");
//};

//public: static bool `public: void c_cache_file_tag_resource_datum_handler::initialize_for_new_map(class c_allocation_interface *, struct s_cache_file_loaded_tags_header const *, long, class c_wrapped_array<struct s_cache_file_resource_sections_location const>, class c_wrapped_array<struct s_cache_file_tag_resource_vtable const *>, bool, class c_cache_file_resource_file_location_table const *)'::`24'::c_helper::accumulate_interop_types(struct s_cache_file_tag_resource_data const *, class c_cache_file_tag_interop_bulk_sizer *, unsigned long *, unsigned long *)
//{
//    mangled_ppc("?accumulate_interop_types@c_helper@?BI@??initialize_for_new_map@c_cache_file_tag_resource_datum_handler@@QAAXPAVc_allocation_interface@@PBUs_cache_file_loaded_tags_header@@JV?$c_wrapped_array@$$CBUs_cache_file_resource_sections_location@@@@V?$c_wrapped_array@PBUs_cache_file_tag_resource_vtable@@@@_NPBVc_cache_file_resource_file_location_table@@@Z@SA_NPBUs_cache_file_tag_resource_data@@PAVc_cache_file_tag_interop_bulk_sizer@@PAK8@Z");
//};

//public: void c_cache_file_tag_resource_datum_handler::dispose_from_old_map(void)
//{
//    mangled_ppc("?dispose_from_old_map@c_cache_file_tag_resource_datum_handler@@QAAXXZ");
//};

//public: long c_cache_file_tag_resource_datum_handler::get_maximum_resource_count(void) const
//{
//    mangled_ppc("?get_maximum_resource_count@c_cache_file_tag_resource_datum_handler@@QBAJXZ");
//};

//public: long c_cache_file_tag_resource_datum_handler::try_to_get_resource_handle(long) const
//{
//    mangled_ppc("?try_to_get_resource_handle@c_cache_file_tag_resource_datum_handler@@QBAJJ@Z");
//};

//public: class c_basic_buffer<void> c_cache_file_tag_resource_datum_handler::get_control_data(long, bool) const
//{
//    mangled_ppc("?get_control_data@c_cache_file_tag_resource_datum_handler@@QBA?AV?$c_basic_buffer@X@@J_N@Z");
//};

//public: c_datum_index::c_datum_index(long)
//{
//    mangled_ppc("??0c_datum_index@@QAA@J@Z");
//};

//public: long c_datum_index::get_absolute_index(void) const
//{
//    mangled_ppc("?get_absolute_index@c_datum_index@@QBAJXZ");
//};

//public: class c_tag_resource_fixup c_cache_file_tag_resource_datum_handler::get_root_address_fixup(long) const
//{
//    mangled_ppc("?get_root_address_fixup@c_cache_file_tag_resource_datum_handler@@QBA?AVc_tag_resource_fixup@@J@Z");
//};

//public: bool c_cache_file_tag_resource_datum_handler::is_streamed(long) const
//{
//    mangled_ppc("?is_streamed@c_cache_file_tag_resource_datum_handler@@QBA_NJ@Z");
//};

//public: bool c_cache_file_tag_resource_datum_handler::is_optional(long) const
//{
//    mangled_ppc("?is_optional@c_cache_file_tag_resource_datum_handler@@QBA_NJ@Z");
//};

//public: bool c_cache_file_tag_resource_datum_handler::any_pageable_data(long) const
//{
//    mangled_ppc("?any_pageable_data@c_cache_file_tag_resource_datum_handler@@QBA_NJ@Z");
//};

//struct s_tag_resource_table_location_handle_struct * datum_index_to_table_handle(long)
//{
//    mangled_ppc("?datum_index_to_table_handle@@YAPAUs_tag_resource_table_location_handle_struct@@J@Z");
//};

//public: struct s_tag_resource_table_location_handle_struct * c_cache_file_tag_resource_datum_handler::get_pageable_location_handle(long) const
//{
//    mangled_ppc("?get_pageable_location_handle@c_cache_file_tag_resource_datum_handler@@QBAPAUs_tag_resource_table_location_handle_struct@@J@Z");
//};

//public: struct s_tag_resource_table_location_handle_struct * c_cache_file_tag_resource_datum_handler::get_optional_location_handle(long) const
//{
//    mangled_ppc("?get_optional_location_handle@c_cache_file_tag_resource_datum_handler@@QBAPAUs_tag_resource_table_location_handle_struct@@J@Z");
//};

//public: unsigned long c_cache_file_tag_resource_datum_handler::get_pageable_location_offset(long) const
//{
//    mangled_ppc("?get_pageable_location_offset@c_cache_file_tag_resource_datum_handler@@QBAKJ@Z");
//};

//public: bool c_cache_file_tag_resource_datum_handler::any_optional_data(long) const
//{
//    mangled_ppc("?any_optional_data@c_cache_file_tag_resource_datum_handler@@QBA_NJ@Z");
//};

//public: unsigned long c_cache_file_tag_resource_datum_handler::get_optional_location_offset(long) const
//{
//    mangled_ppc("?get_optional_location_offset@c_cache_file_tag_resource_datum_handler@@QBAKJ@Z");
//};

//public: long c_cache_file_tag_resource_datum_handler::get_resource_owner(long) const
//{
//    mangled_ppc("?get_resource_owner@c_cache_file_tag_resource_datum_handler@@QBAJJ@Z");
//};

//public: class c_wrapped_array<struct s_tag_resource_fixup_location const> c_cache_file_tag_resource_datum_handler::get_control_fixups(long) const
//{
//    mangled_ppc("?get_control_fixups@c_cache_file_tag_resource_datum_handler@@QBA?AV?$c_wrapped_array@$$CBUs_tag_resource_fixup_location@@@@J@Z");
//};

//public: class c_basic_buffer<void> c_cache_file_tag_resource_datum_handler::get_interop_buffer(long, bool) const
//{
//    mangled_ppc("?get_interop_buffer@c_cache_file_tag_resource_datum_handler@@QBA?AV?$c_basic_buffer@X@@J_N@Z");
//};

//public: class c_wrapped_array<struct s_tag_resource_interop_location const> c_cache_file_tag_resource_datum_handler::get_interop_locations(long) const
//{
//    mangled_ppc("?get_interop_locations@c_cache_file_tag_resource_datum_handler@@QBA?AV?$c_wrapped_array@$$CBUs_tag_resource_interop_location@@@@J@Z");
//};

//public: bool c_cache_file_tag_resource_datum_handler::describe_resource(long, class c_wrapped_array<char>) const
//{
//    mangled_ppc("?describe_resource@c_cache_file_tag_resource_datum_handler@@QBA_NJV?$c_wrapped_array@D@@@Z");
//};

//public: struct s_tag_resource_definition const * c_cache_file_tag_resource_datum_handler::get_resource_definition(long) const
//{
//    mangled_ppc("?get_resource_definition@c_cache_file_tag_resource_datum_handler@@QBAPBUs_tag_resource_definition@@J@Z");
//};

//public: bool c_cache_file_tag_resource_datum_handler::register_resource(long, long, struct s_tag_resource_definition const *, void *) const
//{
//    mangled_ppc("?register_resource@c_cache_file_tag_resource_datum_handler@@QBA_NJJPBUs_tag_resource_definition@@PAX@Z");
//};

//public: void c_cache_file_tag_resource_datum_handler::unregister_resource(long, long, struct s_tag_resource_definition const *, void *) const
//{
//    mangled_ppc("?unregister_resource@c_cache_file_tag_resource_datum_handler@@QBAXJJPBUs_tag_resource_definition@@PAX@Z");
//};

//public: bool c_cache_file_tag_resource_datum_handler::get_streaming_location(long, unsigned long, unsigned long, struct s_tag_resource_table_location_handle_struct **, unsigned long *, unsigned long *, bool *) const
//{
//    mangled_ppc("?get_streaming_location@c_cache_file_tag_resource_datum_handler@@QBA_NJKKPAPAUs_tag_resource_table_location_handle_struct@@PAK1PA_N@Z");
//};

//class c_basic_buffer<void> cache_file_resource_gestalt_get_required_control_data(struct s_cache_file_resource_gestalt const *, struct s_cache_file_tag_resource_data const *)
//{
//    mangled_ppc("?cache_file_resource_gestalt_get_required_control_data@@YA?AV?$c_basic_buffer@X@@PBUs_cache_file_resource_gestalt@@PBUs_cache_file_tag_resource_data@@@Z");
//};

//private: struct s_cache_file_resource_gestalt const * c_cache_file_tag_resource_datum_handler::get_gestalt(void) const
//{
//    mangled_ppc("?get_gestalt@c_cache_file_tag_resource_datum_handler@@ABAPBUs_cache_file_resource_gestalt@@XZ");
//};

//private: struct s_cache_file_tag_resource_data const * c_cache_file_tag_resource_datum_handler::get_resource_data(long) const
//{
//    mangled_ppc("?get_resource_data@c_cache_file_tag_resource_datum_handler@@ABAPBUs_cache_file_tag_resource_data@@J@Z");
//};

//private: struct s_cache_file_tag_resource_data const * c_cache_file_tag_resource_datum_handler::try_to_get_resource_data_by_index(long) const
//{
//    mangled_ppc("?try_to_get_resource_data_by_index@c_cache_file_tag_resource_datum_handler@@ABAPBUs_cache_file_tag_resource_data@@J@Z");
//};

//private: bool c_cache_file_tag_resource_datum_handler::valid_resource_handle(long) const
//{
//    mangled_ppc("?valid_resource_handle@c_cache_file_tag_resource_datum_handler@@ABA_NJ@Z");
//};

//public: long c_datum_index::get_identifier(void) const
//{
//    mangled_ppc("?get_identifier@c_datum_index@@QBAJXZ");
//};

//private: void c_cache_file_tag_resource_datum_handler::get_pageable_file_location(long, struct s_cache_file_resource_file_location const **, unsigned long *) const
//{
//    mangled_ppc("?get_pageable_file_location@c_cache_file_tag_resource_datum_handler@@ABAXJPAPBUs_cache_file_resource_file_location@@PAK@Z");
//};

//private: void c_cache_file_tag_resource_datum_handler::get_optional_file_location(long, struct s_cache_file_resource_file_location const **, unsigned long *) const
//{
//    mangled_ppc("?get_optional_file_location@c_cache_file_tag_resource_datum_handler@@ABAXJPAPBUs_cache_file_resource_file_location@@PAK@Z");
//};

//public: void c_cache_file_combined_tag_resource_datum_handler::initialize_for_new_map(class c_allocation_interface *, class c_cache_file_tag_resource_handle_remapper const *, class c_cache_file_resource_uber_location_table *, unsigned long)
//{
//    mangled_ppc("?initialize_for_new_map@c_cache_file_combined_tag_resource_datum_handler@@QAAXPAVc_allocation_interface@@PBVc_cache_file_tag_resource_handle_remapper@@PAVc_cache_file_resource_uber_location_table@@K@Z");
//};

//public: void c_cache_file_combined_tag_resource_datum_handler::dispose_from_old_map(class c_allocation_interface *)
//{
//    mangled_ppc("?dispose_from_old_map@c_cache_file_combined_tag_resource_datum_handler@@QAAXPAVc_allocation_interface@@@Z");
//};

//public: void c_cache_file_combined_tag_resource_datum_handler::add_cache_file(long, class c_cache_file_tag_resource_datum_handler *, unsigned long)
//{
//    mangled_ppc("?add_cache_file@c_cache_file_combined_tag_resource_datum_handler@@QAAXJPAVc_cache_file_tag_resource_datum_handler@@K@Z");
//};

//private: class c_cache_file_tag_resource_datum_handler const * c_cache_file_combined_tag_resource_datum_handler::get_datum_handler_from_handle(long) const
//{
//    mangled_ppc("?get_datum_handler_from_handle@c_cache_file_combined_tag_resource_datum_handler@@ABAPBVc_cache_file_tag_resource_datum_handler@@J@Z");
//};

//private: unsigned long c_cache_file_combined_tag_resource_datum_handler::get_location_table_name_resolution_identifier(long) const
//{
//    mangled_ppc("?get_location_table_name_resolution_identifier@c_cache_file_combined_tag_resource_datum_handler@@ABAKJ@Z");
//};

//private: class c_cache_file_tag_resource_datum_handler const * c_cache_file_combined_tag_resource_datum_handler::get_datum_handler_from_absolute_index(long) const
//{
//    mangled_ppc("?get_datum_handler_from_absolute_index@c_cache_file_combined_tag_resource_datum_handler@@ABAPBVc_cache_file_tag_resource_datum_handler@@J@Z");
//};

//private: struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler const * c_cache_file_combined_tag_resource_datum_handler::get_datum_handler(long) const
//{
//    mangled_ppc("?get_datum_handler@c_cache_file_combined_tag_resource_datum_handler@@ABAPBUs_resource_handler@1@J@Z");
//};

//private: long c_cache_file_combined_tag_resource_datum_handler::get_datum_handler_count(void) const
//{
//    mangled_ppc("?get_datum_handler_count@c_cache_file_combined_tag_resource_datum_handler@@ABAJXZ");
//};

//public: long c_cache_file_combined_tag_resource_datum_handler::get_maximum_resource_count(void) const
//{
//    mangled_ppc("?get_maximum_resource_count@c_cache_file_combined_tag_resource_datum_handler@@QBAJXZ");
//};

//public: long c_cache_file_combined_tag_resource_datum_handler::try_to_get_resource_handle(long) const
//{
//    mangled_ppc("?try_to_get_resource_handle@c_cache_file_combined_tag_resource_datum_handler@@QBAJJ@Z");
//};

//public: virtual class c_basic_buffer<void> c_cache_file_combined_tag_resource_datum_handler::get_control_data(long, bool)
//{
//    mangled_ppc("?get_control_data@c_cache_file_combined_tag_resource_datum_handler@@UAA?AV?$c_basic_buffer@X@@J_N@Z");
//};

//public: virtual class c_tag_resource_fixup c_cache_file_combined_tag_resource_datum_handler::get_root_address_fixup(long)
//{
//    mangled_ppc("?get_root_address_fixup@c_cache_file_combined_tag_resource_datum_handler@@UAA?AVc_tag_resource_fixup@@J@Z");
//};

//public: virtual bool c_cache_file_combined_tag_resource_datum_handler::is_streamed(long)
//{
//    mangled_ppc("?is_streamed@c_cache_file_combined_tag_resource_datum_handler@@UAA_NJ@Z");
//};

//public: virtual bool c_cache_file_combined_tag_resource_datum_handler::is_optional(long)
//{
//    mangled_ppc("?is_optional@c_cache_file_combined_tag_resource_datum_handler@@UAA_NJ@Z");
//};

//public: virtual bool c_cache_file_combined_tag_resource_datum_handler::any_pageable_data(long)
//{
//    mangled_ppc("?any_pageable_data@c_cache_file_combined_tag_resource_datum_handler@@UAA_NJ@Z");
//};

//public: virtual bool c_cache_file_combined_tag_resource_datum_handler::any_optional_data(long)
//{
//    mangled_ppc("?any_optional_data@c_cache_file_combined_tag_resource_datum_handler@@UAA_NJ@Z");
//};

//public: virtual struct s_tag_resource_location_handle_struct * c_cache_file_combined_tag_resource_datum_handler::get_pageable_location_handle(long)
//{
//    mangled_ppc("?get_pageable_location_handle@c_cache_file_combined_tag_resource_datum_handler@@UAAPAUs_tag_resource_location_handle_struct@@J@Z");
//};

//public: virtual struct s_tag_resource_location_handle_struct * c_cache_file_combined_tag_resource_datum_handler::get_optional_location_handle(long)
//{
//    mangled_ppc("?get_optional_location_handle@c_cache_file_combined_tag_resource_datum_handler@@UAAPAUs_tag_resource_location_handle_struct@@J@Z");
//};

//public: virtual unsigned long c_cache_file_combined_tag_resource_datum_handler::get_pageable_location_offset(long)
//{
//    mangled_ppc("?get_pageable_location_offset@c_cache_file_combined_tag_resource_datum_handler@@UAAKJ@Z");
//};

//public: virtual unsigned long c_cache_file_combined_tag_resource_datum_handler::get_optional_location_offset(long)
//{
//    mangled_ppc("?get_optional_location_offset@c_cache_file_combined_tag_resource_datum_handler@@UAAKJ@Z");
//};

//public: virtual struct s_tag_resource_definition const * c_cache_file_combined_tag_resource_datum_handler::get_resource_definition(long)
//{
//    mangled_ppc("?get_resource_definition@c_cache_file_combined_tag_resource_datum_handler@@UAAPBUs_tag_resource_definition@@J@Z");
//};

//public: virtual long c_cache_file_combined_tag_resource_datum_handler::get_resource_owner(long)
//{
//    mangled_ppc("?get_resource_owner@c_cache_file_combined_tag_resource_datum_handler@@UAAJJ@Z");
//};

//public: virtual class c_wrapped_array<struct s_tag_resource_fixup_location const> c_cache_file_combined_tag_resource_datum_handler::get_control_fixups(long)
//{
//    mangled_ppc("?get_control_fixups@c_cache_file_combined_tag_resource_datum_handler@@UAA?AV?$c_wrapped_array@$$CBUs_tag_resource_fixup_location@@@@J@Z");
//};

//public: virtual long c_cache_file_combined_tag_resource_datum_handler::get_control_data_alignment(long)
//{
//    mangled_ppc("?get_control_data_alignment@c_cache_file_combined_tag_resource_datum_handler@@UAAJJ@Z");
//};

//public: virtual bool c_cache_file_combined_tag_resource_datum_handler::has_valid_interop_locations(long)
//{
//    mangled_ppc("?has_valid_interop_locations@c_cache_file_combined_tag_resource_datum_handler@@UAA_NJ@Z");
//};

//public: virtual bool c_cache_file_combined_tag_resource_datum_handler::describe_resource_cache_location(long, enum e_tag_resource_lod, struct s_tag_resource_cache_file_location *)
//{
//    mangled_ppc("?describe_resource_cache_location@c_cache_file_combined_tag_resource_datum_handler@@UAA_NJW4e_tag_resource_lod@@PAUs_tag_resource_cache_file_location@@@Z");
//};

//public: virtual class c_basic_buffer<void> c_cache_file_combined_tag_resource_datum_handler::get_interop_buffer(long, bool)
//{
//    mangled_ppc("?get_interop_buffer@c_cache_file_combined_tag_resource_datum_handler@@UAA?AV?$c_basic_buffer@X@@J_N@Z");
//};

//public: virtual class c_wrapped_array<struct s_tag_resource_interop_location const> c_cache_file_combined_tag_resource_datum_handler::get_interop_locations(long)
//{
//    mangled_ppc("?get_interop_locations@c_cache_file_combined_tag_resource_datum_handler@@UAA?AV?$c_wrapped_array@$$CBUs_tag_resource_interop_location@@@@J@Z");
//};

//public: virtual bool c_cache_file_combined_tag_resource_datum_handler::describe_resource(long, class c_wrapped_array<char>)
//{
//    mangled_ppc("?describe_resource@c_cache_file_combined_tag_resource_datum_handler@@UAA_NJV?$c_wrapped_array@D@@@Z");
//};

//public: virtual long c_cache_file_combined_tag_resource_datum_handler::lookup_resource_owner(struct s_tag_group const *, char const *)
//{
//    mangled_ppc("?lookup_resource_owner@c_cache_file_combined_tag_resource_datum_handler@@UAAJPBUs_tag_group@@PBD@Z");
//};

//public: virtual bool c_cache_file_combined_tag_resource_datum_handler::resource_owner_is_reloading(long)
//{
//    mangled_ppc("?resource_owner_is_reloading@c_cache_file_combined_tag_resource_datum_handler@@UAA_NJ@Z");
//};

//public: virtual bool c_cache_file_combined_tag_resource_datum_handler::describe_resource_owner(long, struct s_tag_group const **, class c_wrapped_array<char>)
//{
//    mangled_ppc("?describe_resource_owner@c_cache_file_combined_tag_resource_datum_handler@@UAA_NJPAPBUs_tag_group@@V?$c_wrapped_array@D@@@Z");
//};

//public: virtual class c_tag_resource_runtime_active_set * c_cache_file_combined_tag_resource_datum_handler::get_resource_active_set_dont_cache(void)
//{
//    mangled_ppc("?get_resource_active_set_dont_cache@c_cache_file_combined_tag_resource_datum_handler@@UAAPAVc_tag_resource_runtime_active_set@@XZ");
//};

//public: virtual bool c_cache_file_combined_tag_resource_datum_handler::register_resource(long, long, struct s_tag_resource_definition const *, void *)
//{
//    mangled_ppc("?register_resource@c_cache_file_combined_tag_resource_datum_handler@@UAA_NJJPBUs_tag_resource_definition@@PAX@Z");
//};

//public: virtual void c_cache_file_combined_tag_resource_datum_handler::unregister_resource(long, long, struct s_tag_resource_definition const *, void *)
//{
//    mangled_ppc("?unregister_resource@c_cache_file_combined_tag_resource_datum_handler@@UAAXJJPBUs_tag_resource_definition@@PAX@Z");
//};

//public: bool c_cache_file_combined_tag_resource_datum_handler::get_streaming_location(long, unsigned long, unsigned long, struct s_tag_resource_location_handle_struct **, unsigned long *, unsigned long *, bool *) const
//{
//    mangled_ppc("?get_streaming_location@c_cache_file_combined_tag_resource_datum_handler@@QBA_NJKKPAPAUs_tag_resource_location_handle_struct@@PAK1PA_N@Z");
//};

//public: long c_typed_tag_block<struct s_tag_resource_interop_location>::count(void) const
//{
//    mangled_ppc("?count@?$c_typed_tag_block@Us_tag_resource_interop_location@@@@QBAJXZ");
//};

//public: struct s_tag_resource_interop_location const & c_array_operator_interface<class c_typed_tag_block<struct s_tag_resource_interop_location>, struct s_tag_resource_interop_location>::operator[](long) const
//{
//    mangled_ppc("??A?$c_array_operator_interface@V?$c_typed_tag_block@Us_tag_resource_interop_location@@@@Us_tag_resource_interop_location@@@@QBAABUs_tag_resource_interop_location@@J@Z");
//};

//public: struct s_tag_resource_interop_location const * c_array_operator_interface<class c_typed_tag_block<struct s_tag_resource_interop_location>, struct s_tag_resource_interop_location>::get_element(long) const
//{
//    mangled_ppc("?get_element@?$c_array_operator_interface@V?$c_typed_tag_block@Us_tag_resource_interop_location@@@@Us_tag_resource_interop_location@@@@QBAPBUs_tag_resource_interop_location@@J@Z");
//};

//public: long c_typed_tag_block<struct s_cache_file_tag_resource_definition>::count(void) const
//{
//    mangled_ppc("?count@?$c_typed_tag_block@Us_cache_file_tag_resource_definition@@@@QBAJXZ");
//};

//public: struct s_cache_file_tag_resource_definition const & c_array_operator_interface<class c_typed_tag_block<struct s_cache_file_tag_resource_definition>, struct s_cache_file_tag_resource_definition>::operator[](long) const
//{
//    mangled_ppc("??A?$c_array_operator_interface@V?$c_typed_tag_block@Us_cache_file_tag_resource_definition@@@@Us_cache_file_tag_resource_definition@@@@QBAABUs_cache_file_tag_resource_definition@@J@Z");
//};

//public: struct s_cache_file_tag_resource_definition const * c_array_operator_interface<class c_typed_tag_block<struct s_cache_file_tag_resource_definition>, struct s_cache_file_tag_resource_definition>::get_element(long) const
//{
//    mangled_ppc("?get_element@?$c_array_operator_interface@V?$c_typed_tag_block@Us_cache_file_tag_resource_definition@@@@Us_cache_file_tag_resource_definition@@@@QBAPBUs_cache_file_tag_resource_definition@@J@Z");
//};

//public: bool c_array_operator_interface<class c_typed_tag_block<struct s_cache_file_tag_resource_definition>, struct s_cache_file_tag_resource_definition>::valid_index(long) const
//{
//    mangled_ppc("?valid_index@?$c_array_operator_interface@V?$c_typed_tag_block@Us_cache_file_tag_resource_definition@@@@Us_cache_file_tag_resource_definition@@@@QBA_NJ@Z");
//};

//public: long c_typed_tag_block<struct s_cache_file_tag_interop_definition>::count(void) const
//{
//    mangled_ppc("?count@?$c_typed_tag_block@Us_cache_file_tag_interop_definition@@@@QBAJXZ");
//};

//public: struct s_cache_file_tag_interop_definition const & c_array_operator_interface<class c_typed_tag_block<struct s_cache_file_tag_interop_definition>, struct s_cache_file_tag_interop_definition>::operator[](long) const
//{
//    mangled_ppc("??A?$c_array_operator_interface@V?$c_typed_tag_block@Us_cache_file_tag_interop_definition@@@@Us_cache_file_tag_interop_definition@@@@QBAABUs_cache_file_tag_interop_definition@@J@Z");
//};

//public: bool c_array_operator_interface<class c_typed_tag_block<struct s_cache_file_zone_manifest>, struct s_cache_file_zone_manifest>::empty(void) const
//{
//    mangled_ppc("?empty@?$c_array_operator_interface@V?$c_typed_tag_block@Us_cache_file_zone_manifest@@@@Us_cache_file_zone_manifest@@@@QBA_NXZ");
//};

//public: struct s_cache_file_resource_sections_location const & c_array_operator_interface<class c_wrapped_array_no_init<struct s_cache_file_resource_sections_location const>, struct s_cache_file_resource_sections_location const>::operator[](long) const
//{
//    mangled_ppc("??A?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CBUs_cache_file_resource_sections_location@@@@$$CBUs_cache_file_resource_sections_location@@@@QBAABUs_cache_file_resource_sections_location@@J@Z");
//};

//public: long c_wrapped_array_no_init<struct s_cache_file_resource_runtime_data_new>::count(void) const
//{
//    mangled_ppc("?count@?$c_wrapped_array_no_init@Us_cache_file_resource_runtime_data_new@@@@QBAJXZ");
//};

//public: struct s_cache_file_resource_runtime_data_new & c_array_operator_interface<class c_wrapped_array_no_init<struct s_cache_file_resource_runtime_data_new>, struct s_cache_file_resource_runtime_data_new>::operator[](long)
//{
//    mangled_ppc("??A?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_cache_file_resource_runtime_data_new@@@@Us_cache_file_resource_runtime_data_new@@@@QAAAAUs_cache_file_resource_runtime_data_new@@J@Z");
//};

//public: struct s_cache_file_resource_runtime_data_new const & c_array_operator_interface<class c_wrapped_array_no_init<struct s_cache_file_resource_runtime_data_new>, struct s_cache_file_resource_runtime_data_new>::operator[](long) const
//{
//    mangled_ppc("??A?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_cache_file_resource_runtime_data_new@@@@Us_cache_file_resource_runtime_data_new@@@@QBAABUs_cache_file_resource_runtime_data_new@@J@Z");
//};

//public: struct s_cache_file_resource_runtime_data_new * c_array_operator_interface<class c_wrapped_array_no_init<struct s_cache_file_resource_runtime_data_new>, struct s_cache_file_resource_runtime_data_new>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_cache_file_resource_runtime_data_new@@@@Us_cache_file_resource_runtime_data_new@@@@QAAPAUs_cache_file_resource_runtime_data_new@@XZ");
//};

//public: long c_array_operator_interface<class c_wrapped_array_no_init<struct s_cache_file_resource_runtime_data_new>, struct s_cache_file_resource_runtime_data_new>::get_total_element_size(void) const
//{
//    mangled_ppc("?get_total_element_size@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_cache_file_resource_runtime_data_new@@@@Us_cache_file_resource_runtime_data_new@@@@QBAJXZ");
//};

//public: long c_wrapped_array_no_init<struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler>::count(void) const
//{
//    mangled_ppc("?count@?$c_wrapped_array_no_init@Us_resource_handler@c_cache_file_combined_tag_resource_datum_handler@@@@QBAJXZ");
//};

//public: struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler & c_array_operator_interface<class c_wrapped_array_no_init<struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler>, struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler>::operator[](long)
//{
//    mangled_ppc("??A?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_resource_handler@c_cache_file_combined_tag_resource_datum_handler@@@@Us_resource_handler@c_cache_file_combined_tag_resource_datum_handler@@@@QAAAAUs_resource_handler@c_cache_file_combined_tag_resource_datum_handler@@J@Z");
//};

//public: struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler const * c_array_operator_interface<class c_wrapped_array_no_init<struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler>, struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler>::get_element(long) const
//{
//    mangled_ppc("?get_element@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_resource_handler@c_cache_file_combined_tag_resource_datum_handler@@@@Us_resource_handler@c_cache_file_combined_tag_resource_datum_handler@@@@QBAPBUs_resource_handler@c_cache_file_combined_tag_resource_datum_handler@@J@Z");
//};

//public: void c_array_operator_interface<class c_wrapped_array_no_init<struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler>, struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler>::set_all(struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler const &)
//{
//    mangled_ppc("?set_all@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_resource_handler@c_cache_file_combined_tag_resource_datum_handler@@@@Us_resource_handler@c_cache_file_combined_tag_resource_datum_handler@@@@QAAXABUs_resource_handler@c_cache_file_combined_tag_resource_datum_handler@@@Z");
//};

//public: struct s_tag_resource_interop_location const * c_typed_tag_block<struct s_tag_resource_interop_location>::begin(void) const
//{
//    mangled_ppc("?begin@?$c_typed_tag_block@Us_tag_resource_interop_location@@@@QBAPBUs_tag_resource_interop_location@@XZ");
//};

//public: struct s_tag_resource_interop_location const * c_array_operator_interface<class c_typed_tag_block<struct s_tag_resource_interop_location>, struct s_tag_resource_interop_location>::begin(void) const
//{
//    mangled_ppc("?begin@?$c_array_operator_interface@V?$c_typed_tag_block@Us_tag_resource_interop_location@@@@Us_tag_resource_interop_location@@@@QBAPBUs_tag_resource_interop_location@@XZ");
//};

//public: bool c_array_operator_interface<class c_typed_tag_block<struct s_tag_resource_interop_location>, struct s_tag_resource_interop_location>::valid_index(long) const
//{
//    mangled_ppc("?valid_index@?$c_array_operator_interface@V?$c_typed_tag_block@Us_tag_resource_interop_location@@@@Us_tag_resource_interop_location@@@@QBA_NJ@Z");
//};

//public: class c_typed_tag_block<struct s_tag_resource_interop_location> const * c_recursive_template_pattern<class c_typed_tag_block<struct s_tag_resource_interop_location> >::get_super_class(void) const
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_typed_tag_block@Us_tag_resource_interop_location@@@@@@QBAPBV?$c_typed_tag_block@Us_tag_resource_interop_location@@@@XZ");
//};

//public: struct s_cache_file_tag_resource_definition const * c_typed_tag_block<struct s_cache_file_tag_resource_definition>::begin(void) const
//{
//    mangled_ppc("?begin@?$c_typed_tag_block@Us_cache_file_tag_resource_definition@@@@QBAPBUs_cache_file_tag_resource_definition@@XZ");
//};

//public: struct s_cache_file_tag_resource_definition const * c_array_operator_interface<class c_typed_tag_block<struct s_cache_file_tag_resource_definition>, struct s_cache_file_tag_resource_definition>::begin(void) const
//{
//    mangled_ppc("?begin@?$c_array_operator_interface@V?$c_typed_tag_block@Us_cache_file_tag_resource_definition@@@@Us_cache_file_tag_resource_definition@@@@QBAPBUs_cache_file_tag_resource_definition@@XZ");
//};

//public: long c_array_operator_interface<class c_typed_tag_block<struct s_cache_file_tag_resource_definition>, struct s_cache_file_tag_resource_definition>::count(void) const
//{
//    mangled_ppc("?count@?$c_array_operator_interface@V?$c_typed_tag_block@Us_cache_file_tag_resource_definition@@@@Us_cache_file_tag_resource_definition@@@@QBAJXZ");
//};

//public: class c_typed_tag_block<struct s_cache_file_tag_resource_definition> const * c_recursive_template_pattern<class c_typed_tag_block<struct s_cache_file_tag_resource_definition> >::get_super_class(void) const
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_typed_tag_block@Us_cache_file_tag_resource_definition@@@@@@QBAPBV?$c_typed_tag_block@Us_cache_file_tag_resource_definition@@@@XZ");
//};

//public: struct s_cache_file_tag_interop_definition const * c_typed_tag_block<struct s_cache_file_tag_interop_definition>::begin(void) const
//{
//    mangled_ppc("?begin@?$c_typed_tag_block@Us_cache_file_tag_interop_definition@@@@QBAPBUs_cache_file_tag_interop_definition@@XZ");
//};

//public: bool c_array_operator_interface<class c_typed_tag_block<struct s_cache_file_tag_interop_definition>, struct s_cache_file_tag_interop_definition>::valid_index(long) const
//{
//    mangled_ppc("?valid_index@?$c_array_operator_interface@V?$c_typed_tag_block@Us_cache_file_tag_interop_definition@@@@Us_cache_file_tag_interop_definition@@@@QBA_NJ@Z");
//};

//public: class c_typed_tag_block<struct s_cache_file_tag_interop_definition> const * c_recursive_template_pattern<class c_typed_tag_block<struct s_cache_file_tag_interop_definition> >::get_super_class(void) const
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_typed_tag_block@Us_cache_file_tag_interop_definition@@@@@@QBAPBV?$c_typed_tag_block@Us_cache_file_tag_interop_definition@@@@XZ");
//};

//public: struct s_cache_file_resource_sections_location const * c_wrapped_array_no_init<struct s_cache_file_resource_sections_location const>::begin(void) const
//{
//    mangled_ppc("?begin@?$c_wrapped_array_no_init@$$CBUs_cache_file_resource_sections_location@@@@QBAPBUs_cache_file_resource_sections_location@@XZ");
//};

//public: bool c_array_operator_interface<class c_wrapped_array_no_init<struct s_cache_file_resource_sections_location const>, struct s_cache_file_resource_sections_location const>::valid_index(long) const
//{
//    mangled_ppc("?valid_index@?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CBUs_cache_file_resource_sections_location@@@@$$CBUs_cache_file_resource_sections_location@@@@QBA_NJ@Z");
//};

//public: class c_wrapped_array_no_init<struct s_cache_file_resource_sections_location const> const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_cache_file_resource_sections_location const> >::get_super_class(void) const
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@$$CBUs_cache_file_resource_sections_location@@@@@@QBAPBV?$c_wrapped_array_no_init@$$CBUs_cache_file_resource_sections_location@@@@XZ");
//};

//public: struct s_cache_file_resource_runtime_data_new * c_wrapped_array_no_init<struct s_cache_file_resource_runtime_data_new>::begin(void)
//{
//    mangled_ppc("?begin@?$c_wrapped_array_no_init@Us_cache_file_resource_runtime_data_new@@@@QAAPAUs_cache_file_resource_runtime_data_new@@XZ");
//};

//public: struct s_cache_file_resource_runtime_data_new const * c_wrapped_array_no_init<struct s_cache_file_resource_runtime_data_new>::begin(void) const
//{
//    mangled_ppc("?begin@?$c_wrapped_array_no_init@Us_cache_file_resource_runtime_data_new@@@@QBAPBUs_cache_file_resource_runtime_data_new@@XZ");
//};

//public: struct s_cache_file_resource_runtime_data_new * c_array_operator_interface<class c_wrapped_array_no_init<struct s_cache_file_resource_runtime_data_new>, struct s_cache_file_resource_runtime_data_new>::begin(void)
//{
//    mangled_ppc("?begin@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_cache_file_resource_runtime_data_new@@@@Us_cache_file_resource_runtime_data_new@@@@QAAPAUs_cache_file_resource_runtime_data_new@@XZ");
//};

//public: bool c_array_operator_interface<class c_wrapped_array_no_init<struct s_cache_file_resource_runtime_data_new>, struct s_cache_file_resource_runtime_data_new>::valid_index(long) const
//{
//    mangled_ppc("?valid_index@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_cache_file_resource_runtime_data_new@@@@Us_cache_file_resource_runtime_data_new@@@@QBA_NJ@Z");
//};

//public: long c_array_operator_interface<class c_wrapped_array_no_init<struct s_cache_file_resource_runtime_data_new>, struct s_cache_file_resource_runtime_data_new>::count(void) const
//{
//    mangled_ppc("?count@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_cache_file_resource_runtime_data_new@@@@Us_cache_file_resource_runtime_data_new@@@@QBAJXZ");
//};

//public: class c_wrapped_array_no_init<struct s_cache_file_resource_runtime_data_new> * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_cache_file_resource_runtime_data_new> >::get_super_class(void)
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@Us_cache_file_resource_runtime_data_new@@@@@@QAAPAV?$c_wrapped_array_no_init@Us_cache_file_resource_runtime_data_new@@@@XZ");
//};

//public: class c_wrapped_array_no_init<struct s_cache_file_resource_runtime_data_new> const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_cache_file_resource_runtime_data_new> >::get_super_class(void) const
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@Us_cache_file_resource_runtime_data_new@@@@@@QBAPBV?$c_wrapped_array_no_init@Us_cache_file_resource_runtime_data_new@@@@XZ");
//};

//public: struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler * c_wrapped_array_no_init<struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler>::begin(void)
//{
//    mangled_ppc("?begin@?$c_wrapped_array_no_init@Us_resource_handler@c_cache_file_combined_tag_resource_datum_handler@@@@QAAPAUs_resource_handler@c_cache_file_combined_tag_resource_datum_handler@@XZ");
//};

//public: struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler * c_array_operator_interface<class c_wrapped_array_no_init<struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler>, struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler>::begin(void)
//{
//    mangled_ppc("?begin@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_resource_handler@c_cache_file_combined_tag_resource_datum_handler@@@@Us_resource_handler@c_cache_file_combined_tag_resource_datum_handler@@@@QAAPAUs_resource_handler@c_cache_file_combined_tag_resource_datum_handler@@XZ");
//};

//public: struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler const * c_array_operator_interface<class c_wrapped_array_no_init<struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler>, struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler>::begin(void) const
//{
//    mangled_ppc("?begin@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_resource_handler@c_cache_file_combined_tag_resource_datum_handler@@@@Us_resource_handler@c_cache_file_combined_tag_resource_datum_handler@@@@QBAPBUs_resource_handler@c_cache_file_combined_tag_resource_datum_handler@@XZ");
//};

//public: struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler * c_array_operator_interface<class c_wrapped_array_no_init<struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler>, struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler>::end(void)
//{
//    mangled_ppc("?end@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_resource_handler@c_cache_file_combined_tag_resource_datum_handler@@@@Us_resource_handler@c_cache_file_combined_tag_resource_datum_handler@@@@QAAPAUs_resource_handler@c_cache_file_combined_tag_resource_datum_handler@@XZ");
//};

//public: bool c_array_operator_interface<class c_wrapped_array_no_init<struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler>, struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler>::valid_index(long) const
//{
//    mangled_ppc("?valid_index@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_resource_handler@c_cache_file_combined_tag_resource_datum_handler@@@@Us_resource_handler@c_cache_file_combined_tag_resource_datum_handler@@@@QBA_NJ@Z");
//};

//public: class c_wrapped_array_no_init<struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler> * c_recursive_template_pattern<class c_wrapped_array_no_init<struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler> >::get_super_class(void)
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@Us_resource_handler@c_cache_file_combined_tag_resource_datum_handler@@@@@@QAAPAV?$c_wrapped_array_no_init@Us_resource_handler@c_cache_file_combined_tag_resource_datum_handler@@@@XZ");
//};

//public: long c_array_operator_interface<class c_typed_tag_block<struct s_tag_resource_interop_location>, struct s_tag_resource_interop_location>::count(void) const
//{
//    mangled_ppc("?count@?$c_array_operator_interface@V?$c_typed_tag_block@Us_tag_resource_interop_location@@@@Us_tag_resource_interop_location@@@@QBAJXZ");
//};

//public: long c_array_operator_interface<class c_typed_tag_block<struct s_cache_file_tag_interop_definition>, struct s_cache_file_tag_interop_definition>::count(void) const
//{
//    mangled_ppc("?count@?$c_array_operator_interface@V?$c_typed_tag_block@Us_cache_file_tag_interop_definition@@@@Us_cache_file_tag_interop_definition@@@@QBAJXZ");
//};

//public: long c_array_operator_interface<class c_wrapped_array_no_init<struct s_cache_file_resource_sections_location const>, struct s_cache_file_resource_sections_location const>::count(void) const
//{
//    mangled_ppc("?count@?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CBUs_cache_file_resource_sections_location@@@@$$CBUs_cache_file_resource_sections_location@@@@QBAJXZ");
//};

//public: struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler const * c_wrapped_array_no_init<struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler>::begin(void) const
//{
//    mangled_ppc("?begin@?$c_wrapped_array_no_init@Us_resource_handler@c_cache_file_combined_tag_resource_datum_handler@@@@QBAPBUs_resource_handler@c_cache_file_combined_tag_resource_datum_handler@@XZ");
//};

//public: struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler * c_wrapped_array_no_init<struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler>::end(void)
//{
//    mangled_ppc("?end@?$c_wrapped_array_no_init@Us_resource_handler@c_cache_file_combined_tag_resource_datum_handler@@@@QAAPAUs_resource_handler@c_cache_file_combined_tag_resource_datum_handler@@XZ");
//};

//public: long c_array_operator_interface<class c_wrapped_array_no_init<struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler>, struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler>::count(void) const
//{
//    mangled_ppc("?count@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_resource_handler@c_cache_file_combined_tag_resource_datum_handler@@@@Us_resource_handler@c_cache_file_combined_tag_resource_datum_handler@@@@QBAJXZ");
//};

//public: class c_wrapped_array_no_init<struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler> const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler> >::get_super_class(void) const
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@Us_resource_handler@c_cache_file_combined_tag_resource_datum_handler@@@@@@QBAPBV?$c_wrapped_array_no_init@Us_resource_handler@c_cache_file_combined_tag_resource_datum_handler@@@@XZ");
//};

//public: bool c_flags_no_init<enum e_cache_file_tag_resource_data_bit, unsigned short, 2, struct s_default_enum_string_resolver>::test(enum e_cache_file_tag_resource_data_bit) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_cache_file_tag_resource_data_bit@@G$01Us_default_enum_string_resolver@@@@QBA_NW4e_cache_file_tag_resource_data_bit@@@Z");
//};

//??$member_compare_val@Us_cache_file_tag_resource_vtable@@Us_tag_persistent_identifier@@Vc_memcmp_equals@@@@YA?AV?$member_compare_val_t@Us_cache_file_tag_resource_vtable@@Us_tag_persistent_identifier@@Vc_memcmp_equals@@@@PQs_cache_file_tag_resource_vtable@@Us_tag_persistent_identifier@@ABU2@Vc_memcmp_equals@@@Z
//{
//    mangled_ppc("??$member_compare_val@Us_cache_file_tag_resource_vtable@@Us_tag_persistent_identifier@@Vc_memcmp_equals@@@@YA?AV?$member_compare_val_t@Us_cache_file_tag_resource_vtable@@Us_tag_persistent_identifier@@Vc_memcmp_equals@@@@PQs_cache_file_tag_resource_vtable@@Us_tag_persistent_identifier@@ABU2@Vc_memcmp_equals@@@Z");
//};

//bool find_if_container_value<class c_wrapped_array<struct s_cache_file_tag_resource_vtable const *>, class member_compare_val_t<struct s_cache_file_tag_resource_vtable, struct s_tag_persistent_identifier, class c_memcmp_equals>, struct s_cache_file_tag_resource_vtable const *const *>(class c_wrapped_array<struct s_cache_file_tag_resource_vtable const *> const &, class member_compare_val_t<struct s_cache_file_tag_resource_vtable, struct s_tag_persistent_identifier, class c_memcmp_equals>, struct s_cache_file_tag_resource_vtable const *const **)
//{
//    mangled_ppc("??$find_if_container_value@V?$c_wrapped_array@PBUs_cache_file_tag_resource_vtable@@@@V?$member_compare_val_t@Us_cache_file_tag_resource_vtable@@Us_tag_persistent_identifier@@Vc_memcmp_equals@@@@PBQBUs_cache_file_tag_resource_vtable@@@@YA_NABV?$c_wrapped_array@PBUs_cache_file_tag_resource_vtable@@@@V?$member_compare_val_t@Us_cache_file_tag_resource_vtable@@Us_tag_persistent_identifier@@Vc_memcmp_equals@@@@PAPBQBUs_cache_file_tag_resource_vtable@@@Z");
//};

//public: struct s_cache_file_tag_resource_vtable const *& s_static_array<struct s_cache_file_tag_resource_vtable const *, 16>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@PBUs_cache_file_tag_resource_vtable@@$0BA@@@QAAAAPBUs_cache_file_tag_resource_vtable@@J@Z");
//};

//class c_wrapped_array<struct s_cache_file_resource_runtime_data_new> allocate_tracked_wrapped_array<struct s_cache_file_resource_runtime_data_new>(class c_allocation_interface *, unsigned long, char const *)
//{
//    mangled_ppc("??$allocate_tracked_wrapped_array@Us_cache_file_resource_runtime_data_new@@@@YA?AV?$c_wrapped_array@Us_cache_file_resource_runtime_data_new@@@@PAVc_allocation_interface@@KPBD@Z");
//};

//void free_wrapped_array<struct s_cache_file_resource_runtime_data_new>(class c_allocation_interface *, class c_wrapped_array<struct s_cache_file_resource_runtime_data_new> *)
//{
//    mangled_ppc("??$free_wrapped_array@Us_cache_file_resource_runtime_data_new@@@@YAXPAVc_allocation_interface@@PAV?$c_wrapped_array@Us_cache_file_resource_runtime_data_new@@@@@Z");
//};

//public: c_wrapped_array<struct s_tag_resource_fixup_location const>::ctor<class c_typed_tag_block<struct s_tag_resource_fixup_location>, struct s_tag_resource_fixup_location>(class c_array_operator_interface<class c_typed_tag_block<struct s_tag_resource_fixup_location>, struct s_tag_resource_fixup_location> const &)
//{
//    mangled_ppc("??$?0V?$c_typed_tag_block@Us_tag_resource_fixup_location@@@@Us_tag_resource_fixup_location@@@?$c_wrapped_array@$$CBUs_tag_resource_fixup_location@@@@QAA@ABV?$c_array_operator_interface@V?$c_typed_tag_block@Us_tag_resource_fixup_location@@@@Us_tag_resource_fixup_location@@@@@Z");
//};

//public: c_wrapped_array<struct s_tag_resource_interop_location const>::ctor<class c_typed_tag_block<struct s_tag_resource_interop_location>, struct s_tag_resource_interop_location>(class c_array_operator_interface<class c_typed_tag_block<struct s_tag_resource_interop_location>, struct s_tag_resource_interop_location> const &)
//{
//    mangled_ppc("??$?0V?$c_typed_tag_block@Us_tag_resource_interop_location@@@@Us_tag_resource_interop_location@@@?$c_wrapped_array@$$CBUs_tag_resource_interop_location@@@@QAA@ABV?$c_array_operator_interface@V?$c_typed_tag_block@Us_tag_resource_interop_location@@@@Us_tag_resource_interop_location@@@@@Z");
//};

//public: struct s_cache_file_tag_resource_vtable const *const & s_static_array<struct s_cache_file_tag_resource_vtable const *, 16>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@PBUs_cache_file_tag_resource_vtable@@$0BA@@@QBAABQBUs_cache_file_tag_resource_vtable@@J@Z");
//};

//class c_wrapped_array<struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler> allocate_tracked_wrapped_array<struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler>(class c_allocation_interface *, unsigned long, char const *)
//{
//    mangled_ppc("??$allocate_tracked_wrapped_array@Us_resource_handler@c_cache_file_combined_tag_resource_datum_handler@@@@YA?AV?$c_wrapped_array@Us_resource_handler@c_cache_file_combined_tag_resource_datum_handler@@@@PAVc_allocation_interface@@KPBD@Z");
//};

//void free_wrapped_array<struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler>(class c_allocation_interface *, class c_wrapped_array<struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler> *)
//{
//    mangled_ppc("??$free_wrapped_array@Us_resource_handler@c_cache_file_combined_tag_resource_datum_handler@@@@YAXPAVc_allocation_interface@@PAV?$c_wrapped_array@Us_resource_handler@c_cache_file_combined_tag_resource_datum_handler@@@@@Z");
//};

//void std::fill<struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler *, struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler>(struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler *, struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler *, struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler const &)
//{
//    mangled_ppc("??$fill@PAUs_resource_handler@c_cache_file_combined_tag_resource_datum_handler@@U12@@std@@YAXPAUs_resource_handler@c_cache_file_combined_tag_resource_datum_handler@@0ABU12@@Z");
//};

//public: void c_wrapped_array_no_init<struct s_tag_resource_interop_location const>::set_elements(struct s_tag_resource_interop_location const *, long)
//{
//    mangled_ppc("?set_elements@?$c_wrapped_array_no_init@$$CBUs_tag_resource_interop_location@@@@QAAXPBUs_tag_resource_interop_location@@J@Z");
//};

//public: struct s_tag_resource_fixup_location const * c_array_operator_interface<class c_typed_tag_block<struct s_tag_resource_fixup_location>, struct s_tag_resource_fixup_location>::get_elements(void) const
//{
//    mangled_ppc("?get_elements@?$c_array_operator_interface@V?$c_typed_tag_block@Us_tag_resource_fixup_location@@@@Us_tag_resource_fixup_location@@@@QBAPBUs_tag_resource_fixup_location@@XZ");
//};

//public: long c_array_operator_interface<class c_typed_tag_block<struct s_tag_resource_fixup_location>, struct s_tag_resource_fixup_location>::count(void) const
//{
//    mangled_ppc("?count@?$c_array_operator_interface@V?$c_typed_tag_block@Us_tag_resource_fixup_location@@@@Us_tag_resource_fixup_location@@@@QBAJXZ");
//};

//public: struct s_tag_resource_interop_location const * c_array_operator_interface<class c_typed_tag_block<struct s_tag_resource_interop_location>, struct s_tag_resource_interop_location>::get_elements(void) const
//{
//    mangled_ppc("?get_elements@?$c_array_operator_interface@V?$c_typed_tag_block@Us_tag_resource_interop_location@@@@Us_tag_resource_interop_location@@@@QBAPBUs_tag_resource_interop_location@@XZ");
//};

//public: void c_wrapped_array_no_init<struct s_cache_file_resource_runtime_data_new>::clear(void)
//{
//    mangled_ppc("?clear@?$c_wrapped_array_no_init@Us_cache_file_resource_runtime_data_new@@@@QAAXXZ");
//};

//public: struct s_cache_file_resource_runtime_data_new * c_wrapped_array_no_init<struct s_cache_file_resource_runtime_data_new>::end(void)
//{
//    mangled_ppc("?end@?$c_wrapped_array_no_init@Us_cache_file_resource_runtime_data_new@@@@QAAPAUs_cache_file_resource_runtime_data_new@@XZ");
//};

//public: void c_wrapped_array_no_init<struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler>::clear(void)
//{
//    mangled_ppc("?clear@?$c_wrapped_array_no_init@Us_resource_handler@c_cache_file_combined_tag_resource_datum_handler@@@@QAAXXZ");
//};

//public: struct s_cache_file_tag_resource_vtable const *const * c_wrapped_array_no_init<struct s_cache_file_tag_resource_vtable const *>::begin(void) const
//{
//    mangled_ppc("?begin@?$c_wrapped_array_no_init@PBUs_cache_file_tag_resource_vtable@@@@QBAPBQBUs_cache_file_tag_resource_vtable@@XZ");
//};

//public: struct s_cache_file_tag_resource_vtable const *const * c_wrapped_array_no_init<struct s_cache_file_tag_resource_vtable const *>::end(void) const
//{
//    mangled_ppc("?end@?$c_wrapped_array_no_init@PBUs_cache_file_tag_resource_vtable@@@@QBAPBQBUs_cache_file_tag_resource_vtable@@XZ");
//};

//??0?$member_compare_val_t@Us_cache_file_tag_resource_vtable@@Us_tag_persistent_identifier@@Vc_memcmp_equals@@@@QAA@PQs_cache_file_tag_resource_vtable@@Us_tag_persistent_identifier@@ABU2@@Z
//{
//    mangled_ppc("??0?$member_compare_val_t@Us_cache_file_tag_resource_vtable@@Us_tag_persistent_identifier@@Vc_memcmp_equals@@@@QAA@PQs_cache_file_tag_resource_vtable@@Us_tag_persistent_identifier@@ABU2@@Z");
//};

//public: long c_typed_tag_block<struct s_tag_resource_fixup_location>::count(void) const
//{
//    mangled_ppc("?count@?$c_typed_tag_block@Us_tag_resource_fixup_location@@@@QBAJXZ");
//};

//public: struct s_tag_resource_fixup_location const * c_array_operator_interface<class c_typed_tag_block<struct s_tag_resource_fixup_location>, struct s_tag_resource_fixup_location>::begin(void) const
//{
//    mangled_ppc("?begin@?$c_array_operator_interface@V?$c_typed_tag_block@Us_tag_resource_fixup_location@@@@Us_tag_resource_fixup_location@@@@QBAPBUs_tag_resource_fixup_location@@XZ");
//};

//public: class c_typed_tag_block<struct s_tag_resource_fixup_location> const * c_recursive_template_pattern<class c_typed_tag_block<struct s_tag_resource_fixup_location> >::get_super_class(void) const
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_typed_tag_block@Us_tag_resource_fixup_location@@@@@@QBAPBV?$c_typed_tag_block@Us_tag_resource_fixup_location@@@@XZ");
//};

//public: void c_wrapped_array_no_init<struct s_cache_file_resource_runtime_data_new>::set_elements(struct s_cache_file_resource_runtime_data_new *, long)
//{
//    mangled_ppc("?set_elements@?$c_wrapped_array_no_init@Us_cache_file_resource_runtime_data_new@@@@QAAXPAUs_cache_file_resource_runtime_data_new@@J@Z");
//};

//public: struct s_tag_resource_fixup_location const * c_typed_tag_block<struct s_tag_resource_fixup_location>::begin(void) const
//{
//    mangled_ppc("?begin@?$c_typed_tag_block@Us_tag_resource_fixup_location@@@@QBAPBUs_tag_resource_fixup_location@@XZ");
//};

//public: static bool c_flags_no_init<enum e_cache_file_tag_resource_data_bit, unsigned short, 2, struct s_default_enum_string_resolver>::valid_bit(enum e_cache_file_tag_resource_data_bit)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_cache_file_tag_resource_data_bit@@G$01Us_default_enum_string_resolver@@@@SA_NW4e_cache_file_tag_resource_data_bit@@@Z");
//};

//private: static unsigned short c_flags_no_init<enum e_cache_file_tag_resource_data_bit, unsigned short, 2, struct s_default_enum_string_resolver>::flag_size_type(enum e_cache_file_tag_resource_data_bit)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_cache_file_tag_resource_data_bit@@G$01Us_default_enum_string_resolver@@@@CAGW4e_cache_file_tag_resource_data_bit@@@Z");
//};

//struct s_cache_file_tag_resource_vtable const *const * std::find_if<struct s_cache_file_tag_resource_vtable const *const *, class member_compare_val_t<struct s_cache_file_tag_resource_vtable, struct s_tag_persistent_identifier, class c_memcmp_equals> >(struct s_cache_file_tag_resource_vtable const *const *, struct s_cache_file_tag_resource_vtable const *const *, class member_compare_val_t<struct s_cache_file_tag_resource_vtable, struct s_tag_persistent_identifier, class c_memcmp_equals>)
//{
//    mangled_ppc("??$find_if@PBQBUs_cache_file_tag_resource_vtable@@V?$member_compare_val_t@Us_cache_file_tag_resource_vtable@@Us_tag_persistent_identifier@@Vc_memcmp_equals@@@@@std@@YAPBQBUs_cache_file_tag_resource_vtable@@PBQBU1@0V?$member_compare_val_t@Us_cache_file_tag_resource_vtable@@Us_tag_persistent_identifier@@Vc_memcmp_equals@@@@@Z");
//};

//public: static bool s_static_array<struct s_cache_file_tag_resource_vtable const *, 16>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@PBUs_cache_file_tag_resource_vtable@@$0BA@@@SA_NJ@Z");
//};

//public: struct s_cache_file_resource_runtime_data_new * c_basic_buffer<void>::get_as_type_array<struct s_cache_file_resource_runtime_data_new>(unsigned long)
//{
//    mangled_ppc("??$get_as_type_array@Us_cache_file_resource_runtime_data_new@@@?$c_basic_buffer@X@@QAAPAUs_cache_file_resource_runtime_data_new@@K@Z");
//};

//class c_wrapped_array<struct s_cache_file_resource_runtime_data_new> make_wrapped_array<struct s_cache_file_resource_runtime_data_new>(struct s_cache_file_resource_runtime_data_new *, long)
//{
//    mangled_ppc("??$make_wrapped_array@Us_cache_file_resource_runtime_data_new@@@@YA?AV?$c_wrapped_array@Us_cache_file_resource_runtime_data_new@@@@PAUs_cache_file_resource_runtime_data_new@@J@Z");
//};

//public: struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler * c_basic_buffer<void>::get_as_type_array<struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler>(unsigned long)
//{
//    mangled_ppc("??$get_as_type_array@Us_resource_handler@c_cache_file_combined_tag_resource_datum_handler@@@?$c_basic_buffer@X@@QAAPAUs_resource_handler@c_cache_file_combined_tag_resource_datum_handler@@K@Z");
//};

//class c_wrapped_array<struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler> make_wrapped_array<struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler>(struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler *, long)
//{
//    mangled_ppc("??$make_wrapped_array@Us_resource_handler@c_cache_file_combined_tag_resource_datum_handler@@@@YA?AV?$c_wrapped_array@Us_resource_handler@c_cache_file_combined_tag_resource_datum_handler@@@@PAUs_resource_handler@c_cache_file_combined_tag_resource_datum_handler@@J@Z");
//};

//struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler * std::_Checked_base<struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler *>(struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler *&)
//{
//    mangled_ppc("??$_Checked_base@PAUs_resource_handler@c_cache_file_combined_tag_resource_datum_handler@@@std@@YAPAUs_resource_handler@c_cache_file_combined_tag_resource_datum_handler@@AAPAU12@@Z");
//};

//void std::_Fill<struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler *, struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler>(struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler *, struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler *, struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler const &)
//{
//    mangled_ppc("??$_Fill@PAUs_resource_handler@c_cache_file_combined_tag_resource_datum_handler@@U12@@std@@YAXPAUs_resource_handler@c_cache_file_combined_tag_resource_datum_handler@@0ABU12@@Z");
//};

//public: c_wrapped_array<struct s_cache_file_resource_runtime_data_new>::c_wrapped_array<struct s_cache_file_resource_runtime_data_new>(struct s_cache_file_resource_runtime_data_new *, long)
//{
//    mangled_ppc("??0?$c_wrapped_array@Us_cache_file_resource_runtime_data_new@@@@QAA@PAUs_cache_file_resource_runtime_data_new@@J@Z");
//};

//public: c_wrapped_array<struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler>::c_wrapped_array<struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler>(struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler *, long)
//{
//    mangled_ppc("??0?$c_wrapped_array@Us_resource_handler@c_cache_file_combined_tag_resource_datum_handler@@@@QAA@PAUs_resource_handler@c_cache_file_combined_tag_resource_datum_handler@@J@Z");
//};

//struct s_cache_file_tag_resource_vtable const *const * std::_Checked_base<struct s_cache_file_tag_resource_vtable const *const *>(struct s_cache_file_tag_resource_vtable const *const *&)
//{
//    mangled_ppc("??$_Checked_base@PBQBUs_cache_file_tag_resource_vtable@@@std@@YAPBQBUs_cache_file_tag_resource_vtable@@AAPBQBU1@@Z");
//};

//struct s_cache_file_tag_resource_vtable const *const * std::_Find_if<struct s_cache_file_tag_resource_vtable const *const *, class member_compare_val_t<struct s_cache_file_tag_resource_vtable, struct s_tag_persistent_identifier, class c_memcmp_equals> >(struct s_cache_file_tag_resource_vtable const *const *, struct s_cache_file_tag_resource_vtable const *const *, class member_compare_val_t<struct s_cache_file_tag_resource_vtable, struct s_tag_persistent_identifier, class c_memcmp_equals>)
//{
//    mangled_ppc("??$_Find_if@PBQBUs_cache_file_tag_resource_vtable@@V?$member_compare_val_t@Us_cache_file_tag_resource_vtable@@Us_tag_persistent_identifier@@Vc_memcmp_equals@@@@@std@@YAPBQBUs_cache_file_tag_resource_vtable@@PBQBU1@0V?$member_compare_val_t@Us_cache_file_tag_resource_vtable@@Us_tag_persistent_identifier@@Vc_memcmp_equals@@@@@Z");
//};

//void std::_Checked_assign_from_base<struct s_cache_file_tag_resource_vtable const *const *>(struct s_cache_file_tag_resource_vtable const *const *&, struct s_cache_file_tag_resource_vtable const *const *const &)
//{
//    mangled_ppc("??$_Checked_assign_from_base@PBQBUs_cache_file_tag_resource_vtable@@@std@@YAXAAPBQBUs_cache_file_tag_resource_vtable@@ABQBQBU1@@Z");
//};

//struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler * std::_Checked_base<struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler *>(struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler *&, struct std::_Unchanged_checked_iterator_base_type_tag)
//{
//    mangled_ppc("??$_Checked_base@PAUs_resource_handler@c_cache_file_combined_tag_resource_datum_handler@@@std@@YAPAUs_resource_handler@c_cache_file_combined_tag_resource_datum_handler@@AAPAU12@U_Unchanged_checked_iterator_base_type_tag@0@@Z");
//};

//void std::_Debug_range<struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler *>(struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler *, struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler *, wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_range@PAUs_resource_handler@c_cache_file_combined_tag_resource_datum_handler@@@std@@YAXPAUs_resource_handler@c_cache_file_combined_tag_resource_datum_handler@@0PB_WI@Z");
//};

//public: bool member_compare_val_t<struct s_cache_file_tag_resource_vtable, struct s_tag_persistent_identifier, class c_memcmp_equals>::operator()(struct s_cache_file_tag_resource_vtable const *) const
//{
//    mangled_ppc("??R?$member_compare_val_t@Us_cache_file_tag_resource_vtable@@Us_tag_persistent_identifier@@Vc_memcmp_equals@@@@QBA_NPBUs_cache_file_tag_resource_vtable@@@Z");
//};

//struct s_cache_file_tag_resource_vtable const *const * std::_Checked_base<struct s_cache_file_tag_resource_vtable const *const *>(struct s_cache_file_tag_resource_vtable const *const *&, struct std::_Unchanged_checked_iterator_base_type_tag)
//{
//    mangled_ppc("??$_Checked_base@PBQBUs_cache_file_tag_resource_vtable@@@std@@YAPBQBUs_cache_file_tag_resource_vtable@@AAPBQBU1@U_Unchanged_checked_iterator_base_type_tag@0@@Z");
//};

//void std::_Debug_range<struct s_cache_file_tag_resource_vtable const *const *>(struct s_cache_file_tag_resource_vtable const *const *, struct s_cache_file_tag_resource_vtable const *const *, wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_range@PBQBUs_cache_file_tag_resource_vtable@@@std@@YAXPBQBUs_cache_file_tag_resource_vtable@@0PB_WI@Z");
//};

//void std::_Debug_pointer<class member_compare_val_t<struct s_cache_file_tag_resource_vtable, struct s_tag_persistent_identifier, class c_memcmp_equals> >(class member_compare_val_t<struct s_cache_file_tag_resource_vtable, struct s_tag_persistent_identifier, class c_memcmp_equals> &, wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_pointer@V?$member_compare_val_t@Us_cache_file_tag_resource_vtable@@Us_tag_persistent_identifier@@Vc_memcmp_equals@@@@@std@@YAXAAV?$member_compare_val_t@Us_cache_file_tag_resource_vtable@@Us_tag_persistent_identifier@@Vc_memcmp_equals@@@@PB_WI@Z");
//};

//struct std::random_access_iterator_tag std::_Iter_cat<struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler *>(struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler *const &)
//{
//    mangled_ppc("??$_Iter_cat@PAUs_resource_handler@c_cache_file_combined_tag_resource_datum_handler@@@std@@YA?AUrandom_access_iterator_tag@0@ABQAUs_resource_handler@c_cache_file_combined_tag_resource_datum_handler@@@Z");
//};

//void std::_Debug_range2<struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler *>(struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler *, struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler *, wchar_t const *, unsigned int, struct std::random_access_iterator_tag)
//{
//    mangled_ppc("??$_Debug_range2@PAUs_resource_handler@c_cache_file_combined_tag_resource_datum_handler@@@std@@YAXPAUs_resource_handler@c_cache_file_combined_tag_resource_datum_handler@@0PB_WIUrandom_access_iterator_tag@0@@Z");
//};

//public: bool c_memcmp_equals::operator()<struct s_tag_persistent_identifier>(struct s_tag_persistent_identifier const &, struct s_tag_persistent_identifier const &) const
//{
//    mangled_ppc("??$?RUs_tag_persistent_identifier@@@c_memcmp_equals@@QBA_NABUs_tag_persistent_identifier@@0@Z");
//};

//struct std::random_access_iterator_tag std::_Iter_cat<struct s_cache_file_tag_resource_vtable const *const *>(struct s_cache_file_tag_resource_vtable const *const *const &)
//{
//    mangled_ppc("??$_Iter_cat@PBQBUs_cache_file_tag_resource_vtable@@@std@@YA?AUrandom_access_iterator_tag@0@ABQBQBUs_cache_file_tag_resource_vtable@@@Z");
//};

//void std::_Debug_range2<struct s_cache_file_tag_resource_vtable const *const *>(struct s_cache_file_tag_resource_vtable const *const *, struct s_cache_file_tag_resource_vtable const *const *, wchar_t const *, unsigned int, struct std::random_access_iterator_tag)
//{
//    mangled_ppc("??$_Debug_range2@PBQBUs_cache_file_tag_resource_vtable@@@std@@YAXPBQBUs_cache_file_tag_resource_vtable@@0PB_WIUrandom_access_iterator_tag@0@@Z");
//};

//void std::_Debug_pointer<struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler>(struct c_cache_file_combined_tag_resource_datum_handler::s_resource_handler *, wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_pointer@Us_resource_handler@c_cache_file_combined_tag_resource_datum_handler@@@std@@YAXPAUs_resource_handler@c_cache_file_combined_tag_resource_datum_handler@@PB_WI@Z");
//};

//void std::_Debug_pointer<struct s_cache_file_tag_resource_vtable const *>(struct s_cache_file_tag_resource_vtable const *const *, wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_pointer@PBUs_cache_file_tag_resource_vtable@@@std@@YAXPBQBUs_cache_file_tag_resource_vtable@@PB_WI@Z");
//};

