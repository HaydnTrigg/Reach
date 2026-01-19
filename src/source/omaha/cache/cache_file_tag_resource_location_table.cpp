/* ---------- headers */

#include "omaha\cache\cache_file_tag_resource_location_table.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: void c_cache_file_location_table_runtime_file_library::initialize(class c_allocation_interface *, class c_cache_file_io_library *, struct s_cache_file_io_identifier const &, class c_wrapped_array<struct s_cache_file_resource_shared_file const>);
// private: void c_cache_file_location_table_runtime_file_library::open_file(long, class c_cache_file_io_library *);
// public: void c_cache_file_location_table_runtime_file_library::dispose(class c_allocation_interface *, class c_cache_file_io_library *);
// public: void c_cache_file_location_table_runtime_file_library::try_to_open_optional_files(class c_cache_file_io_library *);
// public: struct s_cache_file_io_identifier c_cache_file_location_table_runtime_file_library::get_io_identifier(long) const;
// public: unsigned long c_cache_file_location_table_runtime_file_library::get_io_sort_key(long) const;
// public: unsigned long c_cache_file_location_table_runtime_file_library::get_io_offset(long) const;
// public: bool c_cache_file_location_table_runtime_file_library::is_usable_shared_file(long) const;
// private: struct c_cache_file_location_table_runtime_file_library::s_io_runtime_definition const * c_cache_file_location_table_runtime_file_library::get_io_definition(long) const;
// public: void c_cache_file_resource_file_location_table::initialize_for_new_map(class c_allocation_interface *, class c_cache_file_tag_resource_codec_library const *, class c_wrapped_array<struct s_cache_file_codec_definition const>, class c_cache_file_io_library *, struct s_cache_file_io_identifier const &, class c_wrapped_array<struct s_cache_file_resource_shared_file const>, class c_wrapped_array<struct s_cache_file_resource_streaming_sublocation_table const>, class c_wrapped_array<struct s_cache_file_resource_file_location const>, class c_wrapped_array<struct s_cache_file_resource_sections_location const>);
// public: void c_cache_file_resource_file_location_table::dispose_from_old_map(class c_allocation_interface *, class c_cache_file_io_library *);
// public: void c_cache_file_resource_file_location_table::try_to_open_optional_files(class c_cache_file_io_library *);
// public: long c_cache_file_resource_file_location_table::get_location_count(void) const;
// public: bool c_cache_file_resource_file_location_table::is_usable_location(long) const;
// public: bool c_cache_file_resource_file_location_table::is_usable_for_prefetch_restore_location(long) const;
// public: long c_cache_file_resource_file_location_table::get_location_resource_reference_count(long) const;
// private: struct s_cache_file_resource_file_location const * c_cache_file_resource_file_location_table::get_location(long) const;
// public: struct s_tag_resource_table_location_handle_struct * c_cache_file_resource_file_location_table::get_location_handle(long) const;
// public: long c_cache_file_resource_file_location_table::get_location_index(struct s_tag_resource_table_location_handle_struct *) const;
// long table_handle_to_datum_index(struct s_tag_resource_table_location_handle_struct *);
// private: short c_cache_file_resource_file_location_table::get_location_identifier_salt(long) const;
// private: long c_cache_file_resource_file_location_table::get_codec_decompressor_identifier(long) const;
// public: struct s_tag_resource_table_location_handle_struct * c_cache_file_resource_file_location_table::get_pageable_location_handle(long) const;
// public: struct s_tag_resource_table_location_handle_struct * c_cache_file_resource_file_location_table::get_optional_location_handle(long) const;
// public: bool c_cache_file_resource_file_location_table::get_streaming_sublocation_location_offset(long, unsigned long, unsigned long, bool *, unsigned long *, unsigned long *) const;
// private: bool c_cache_file_resource_file_location_table::map_streaming_sublocation_disk_offset_to_location_offset(long, unsigned long, unsigned long, unsigned long *) const;
// public: long c_cache_file_resource_file_location_table::get_location_decompressor_identifier(struct s_tag_resource_table_location_handle_struct *) const;
// public: bool c_cache_file_resource_file_location_table::should_prefetch_location(struct s_tag_resource_table_location_handle_struct *, struct s_cache_file_resource_location_prefetch_state const *) const;
// public: bool s_cache_file_io_identifier::operator==(struct s_cache_file_io_identifier const &) const;
// public: bool c_cache_file_resource_file_location_table::describe_location(struct s_tag_resource_table_location_handle_struct *, class c_wrapped_array<char>) const;
// public: bool c_cache_file_resource_file_location_table::get_physical_location(long, struct s_cache_file_resource_physical_location *) const;
// public: bool c_cache_file_resource_file_location_table::get_physical_location_from_handle(struct s_tag_resource_table_location_handle_struct *, struct s_cache_file_resource_physical_location *) const;
// public: bool c_cache_file_resource_file_location_table::get_streaming_sublocation_table_from_handle(struct s_tag_resource_table_location_handle_struct *, struct s_cache_file_resource_streaming_sublocation_table const **) const;
// public: struct s_network_http_request_hash const * c_cache_file_resource_file_location_table::try_to_get_location_checksum(long) const;
// public: struct s_network_http_request_hash const * c_cache_file_resource_file_location_table::try_to_get_location_checksum_from_handle(struct s_tag_resource_table_location_handle_struct *) const;
// public: struct s_cache_file_resource_checksum const * c_cache_file_resource_file_location_table::try_to_get_location_full_checksum_from_handle(struct s_tag_resource_table_location_handle_struct *) const;
// private: unsigned long c_cache_file_resource_file_location_table::location_get_actual_memory_size(long) const;
// public: unsigned long c_cache_file_resource_file_location_table::get_location_sort_key(struct s_tag_resource_table_location_handle_struct *) const;
// private: struct s_cache_file_resource_file_location const * c_cache_file_resource_file_location_table::get_location_from_handle(struct s_tag_resource_table_location_handle_struct *) const;
// private: struct s_cache_file_resource_streaming_sublocation_table const * c_cache_file_resource_file_location_table::get_streaming_sublocation_table(long) const;
// protected: void c_cache_file_resource_header_location_table::initialize_for_new_map(class c_allocation_interface *, bool);
// public: void c_cache_file_resource_header_location_table::dispose_from_old_map(void);
// public: bool c_cache_file_resource_header_location_table::opened(void) const;
// protected: void c_cache_file_resource_header_location_table::initialize_shared_usage(class c_cache_file_tag_resource_codec_library const *, class c_cache_file_io_library *, char const *, long);
// public: void c_cache_file_resource_header_location_table::dispose_shared_usage(class c_cache_file_io_library *);
// public: long c_cache_file_resource_header_location_table::get_maximum_location_count(void) const;
// public: long c_cache_file_resource_header_location_table::get_location_count(void) const;
// public: bool c_cache_file_resource_header_location_table::is_usable_location(long) const;
// public: bool c_cache_file_resource_header_location_table::is_usable_for_prefetch_restore_location(long) const;
// public: long c_cache_file_resource_header_location_table::get_location_resource_reference_count(long) const;
// private: struct c_cache_file_resource_header_location_table::s_header_file_location const * c_cache_file_resource_header_location_table::get_location(long) const;
// public: struct s_tag_resource_table_location_handle_struct * c_cache_file_resource_header_location_table::get_location_handle(long) const;
// public: unsigned long c_cache_file_resource_header_location_table::get_location_sort_key(struct s_tag_resource_table_location_handle_struct *) const;
// private: struct c_cache_file_resource_header_location_table::s_header_file_location const * c_cache_file_resource_header_location_table::get_location_from_handle(struct s_tag_resource_table_location_handle_struct *) const;
// private: long c_cache_file_resource_header_location_table::get_header_location_index_from_handle(struct s_tag_resource_table_location_handle_struct *) const;
// public: long c_cache_file_resource_header_location_table::get_location_decompressor_identifier(struct s_tag_resource_table_location_handle_struct *) const;
// public: bool c_cache_file_resource_header_location_table::should_prefetch_location(struct s_tag_resource_table_location_handle_struct *, struct s_cache_file_resource_location_prefetch_state const *) const;
// public: bool c_cache_file_resource_header_location_table::describe_location(struct s_tag_resource_table_location_handle_struct *, class c_wrapped_array<char>) const;
// public: bool c_cache_file_resource_header_location_table::get_physical_location(long, struct s_cache_file_resource_physical_location *) const;
// public: bool c_cache_file_resource_header_location_table::get_physical_location_from_handle(struct s_tag_resource_table_location_handle_struct *, struct s_cache_file_resource_physical_location *) const;
// public: struct s_network_http_request_hash const * c_cache_file_resource_header_location_table::try_to_get_location_checksum(long) const;
// public: struct s_network_http_request_hash const * c_cache_file_resource_header_location_table::try_to_get_location_checksum_from_handle(struct s_tag_resource_table_location_handle_struct *) const;
// public: void c_cache_file_resource_shared_file_location_table::initialize_for_new_map(class c_allocation_interface *, struct s_cache_file_resource_shared_file const *);
// public: void c_cache_file_resource_shared_file_location_table::dispose_from_old_map(void);
// public: bool c_cache_file_resource_shared_file_location_table::try_to_open_shared_file(class c_cache_file_tag_resource_codec_library const *, class c_cache_file_io_library *);
// public: void c_cache_file_resource_prefetch_location_table::initialize_for_new_map(class c_allocation_interface *);
// public: void c_cache_file_resource_prefetch_location_table::open_prefetch_file(class c_cache_file_tag_resource_codec_library const *, class c_cache_file_io_library *, char const *);
// public: void c_cache_file_resource_uber_location_table::initialize_for_new_map(class c_cache_file_resource_header_location_table const *, class c_cache_file_resource_header_location_table const *);
// public: void c_cache_file_resource_uber_location_table::dispose_from_old_map(void);
// public: long c_cache_file_resource_uber_location_table::get_maximum_location_count(void) const;
// public: long c_cache_file_resource_uber_location_table::get_location_count(void) const;
// public: long c_cache_file_resource_uber_location_table::get_first_shared_location_index(void) const;
// public: long c_cache_file_resource_uber_location_table::get_one_past_last_shared_location_index(void) const;
// public: long c_cache_file_resource_uber_location_table::get_first_prefetch_location_index(void) const;
// public: long c_cache_file_resource_uber_location_table::get_one_past_last_prefetch_location_index(void) const;
// public: bool c_cache_file_resource_uber_location_table::is_usable_location(long) const;
// public: bool c_cache_file_resource_uber_location_table::is_usable_for_prefetch_restore_location(long) const;
// public: long c_cache_file_resource_uber_location_table::get_location_resource_reference_count(long) const;
// public: struct s_tag_resource_location_handle_struct * c_cache_file_resource_uber_location_table::get_location_handle(long) const;
// struct s_tag_resource_location_handle_struct * datum_index_to_location_handle(long);
// public: unsigned long c_cache_file_resource_uber_location_table::get_location_sort_key(struct s_tag_resource_location_handle_struct *) const;
// public: long c_cache_file_resource_uber_location_table::get_location_decompressor_identifier(struct s_tag_resource_location_handle_struct *) const;
// public: bool c_cache_file_resource_uber_location_table::should_prefetch_location(struct s_tag_resource_location_handle_struct *, struct s_cache_file_resource_location_prefetch_state const *) const;
// public: bool c_cache_file_resource_uber_location_table::get_physical_location(long, struct s_cache_file_resource_physical_location *) const;
// public: bool c_cache_file_resource_uber_location_table::get_physical_location_from_handle(struct s_tag_resource_location_handle_struct *, struct s_cache_file_resource_physical_location *) const;
// public: bool c_cache_file_resource_uber_location_table::get_streaming_sublocation_table_from_handle(struct s_tag_resource_location_handle_struct *, struct s_cache_file_resource_streaming_sublocation_table const **) const;
// public: struct s_network_http_request_hash const * c_cache_file_resource_uber_location_table::try_to_get_location_checksum(long) const;
// public: struct s_network_http_request_hash const * c_cache_file_resource_uber_location_table::try_to_get_location_checksum_from_handle(struct s_tag_resource_location_handle_struct *) const;
// public: struct s_cache_file_resource_checksum const * c_cache_file_resource_uber_location_table::try_to_get_location_full_checksum_from_handle(struct s_tag_resource_location_handle_struct *) const;
// private: bool c_cache_file_resource_uber_location_table::location_is_file(struct s_tag_resource_location_handle_struct *) const;
// private: bool c_cache_file_resource_uber_location_table::location_index_is_file(long) const;
// private: long c_cache_file_resource_uber_location_table::get_shared_location_offset(void) const;
// private: bool c_cache_file_resource_uber_location_table::location_is_shared(struct s_tag_resource_location_handle_struct *) const;
// private: struct s_tag_resource_table_location_handle_struct * c_cache_file_resource_uber_location_table::location_handle_to_shared_location_handle(struct s_tag_resource_location_handle_struct *) const;
// private: struct s_tag_resource_location_handle_struct * c_cache_file_resource_uber_location_table::shared_location_handle_to_location_handle(struct s_tag_resource_table_location_handle_struct *) const;
// private: bool c_cache_file_resource_uber_location_table::location_index_is_shared(long) const;
// private: long c_cache_file_resource_uber_location_table::location_index_to_shared_location_index(long) const;
// private: long c_cache_file_resource_uber_location_table::get_prefetch_location_offset(void) const;
// private: bool c_cache_file_resource_uber_location_table::location_is_prefetch(struct s_tag_resource_location_handle_struct *) const;
// private: struct s_tag_resource_table_location_handle_struct * c_cache_file_resource_uber_location_table::location_handle_to_prefetch_location_handle(struct s_tag_resource_location_handle_struct *) const;
// private: struct s_tag_resource_location_handle_struct * c_cache_file_resource_uber_location_table::prefetch_location_handle_to_location_handle(struct s_tag_resource_table_location_handle_struct *) const;
// private: bool c_cache_file_resource_uber_location_table::location_index_is_prefetch(long) const;
// private: long c_cache_file_resource_uber_location_table::location_index_to_prefetch_location_index(long) const;
// private: bool c_cache_file_resource_uber_location_table::location_in_range(struct s_tag_resource_location_handle_struct *, long, long) const;
// private: struct s_tag_resource_table_location_handle_struct * c_cache_file_resource_uber_location_table::location_handle_decode(struct s_tag_resource_location_handle_struct *, long, long) const;
// private: struct s_tag_resource_location_handle_struct * c_cache_file_resource_uber_location_table::location_handle_encode(struct s_tag_resource_table_location_handle_struct *, long, long) const;
// private: bool c_cache_file_resource_uber_location_table::location_index_in_range(long, long, long) const;
// private: long c_cache_file_resource_uber_location_table::location_index_decode(long, long, long) const;
// private: long c_cache_file_resource_uber_location_table::location_index_encode(long, long, long) const;
// private: long c_cache_file_resource_uber_location_table::get_table_index_from_handle(struct s_tag_resource_location_handle_struct *) const;
// private: long c_cache_file_resource_uber_location_table::get_table_index(long) const;
// private: struct s_tag_resource_table_location_handle_struct * c_cache_file_resource_uber_location_table::location_handle_to_table_location_handle(long, struct s_tag_resource_location_handle_struct *) const;
// private: struct s_tag_resource_location_handle_struct * c_cache_file_resource_uber_location_table::table_location_handle_to_location_handle(long, struct s_tag_resource_table_location_handle_struct *) const;
// private: long c_cache_file_resource_uber_location_table::location_index_to_table_location_index(long, long) const;
// public: void c_cache_file_resource_uber_location_table::initialize(class c_allocation_interface *, long);
// public: void c_cache_file_resource_uber_location_table::dispose(class c_allocation_interface *);
// public: void c_cache_file_resource_uber_location_table::add_location_table(long, class c_cache_file_resource_file_location_table const *, unsigned long *);
// public: void c_cache_file_resource_uber_location_table::remove_location_table(long, class c_cache_file_resource_file_location_table const *, unsigned long);
// private: class c_cache_file_resource_file_location_table const * c_cache_file_resource_uber_location_table::get_file_location_table(long) const;
// public: struct s_tag_resource_location_handle_struct * c_cache_file_resource_uber_location_table::resolve_table_location_handle_to_location_handle(unsigned long, struct s_tag_resource_table_location_handle_struct *) const;
// public: bool c_cache_file_resource_uber_location_table::describe_location(struct s_tag_resource_location_handle_struct *, class c_wrapped_array<char>) const;
// public: bool c_bit_vector_operator_interface<class c_wrapped_flags>::valid_bit(unsigned long) const;
// public: void c_wrapped_array_no_init<struct s_cache_file_codec_definition const>::clear(void);
// public: struct s_cache_file_codec_definition const & c_array_operator_interface<class c_wrapped_array_no_init<struct s_cache_file_codec_definition const>, struct s_cache_file_codec_definition const>::operator[](long) const;
// public: long c_wrapped_array_no_init<struct c_cache_file_location_table_runtime_file_library::s_io_runtime_definition>::count(void) const;
// public: struct c_cache_file_location_table_runtime_file_library::s_io_runtime_definition & c_array_operator_interface<class c_wrapped_array_no_init<struct c_cache_file_location_table_runtime_file_library::s_io_runtime_definition>, struct c_cache_file_location_table_runtime_file_library::s_io_runtime_definition>::operator[](long);
// public: struct c_cache_file_location_table_runtime_file_library::s_io_runtime_definition const * c_array_operator_interface<class c_wrapped_array_no_init<struct c_cache_file_location_table_runtime_file_library::s_io_runtime_definition>, struct c_cache_file_location_table_runtime_file_library::s_io_runtime_definition>::get_element(long) const;
// public: void c_wrapped_array_no_init<struct s_cache_file_resource_streaming_sublocation_table const>::clear(void);
// public: struct s_cache_file_resource_streaming_sublocation_table const * c_array_operator_interface<class c_wrapped_array_no_init<struct s_cache_file_resource_streaming_sublocation_table const>, struct s_cache_file_resource_streaming_sublocation_table const>::get_element(long) const;
// public: void c_wrapped_array_no_init<struct s_cache_file_resource_file_location const>::clear(void);
// public: struct s_cache_file_resource_file_location const * c_wrapped_array_no_init<struct s_cache_file_resource_file_location const>::end(void) const;
// public: struct s_cache_file_resource_file_location const * c_array_operator_interface<class c_wrapped_array_no_init<struct s_cache_file_resource_file_location const>, struct s_cache_file_resource_file_location const>::get_element(long) const;
// public: void c_wrapped_array_no_init<struct s_cache_file_resource_sections_location const>::clear(void);
// public: struct s_cache_file_resource_sections_location const * c_array_operator_interface<class c_wrapped_array_no_init<struct s_cache_file_resource_sections_location const>, struct s_cache_file_resource_sections_location const>::get_element(long) const;
// public: void c_wrapped_data_array<struct c_cache_file_resource_header_location_table::s_header_file_location>::initialize(struct s_data_array *);
// public: void c_wrapped_data_array<struct c_cache_file_resource_header_location_table::s_header_file_location>::dispose(void);
// public: struct c_cache_file_resource_header_location_table::s_header_file_location const * c_wrapped_data_array<struct c_cache_file_resource_header_location_table::s_header_file_location>::try_to_get(long) const;
// public: struct c_cache_file_resource_header_location_table::s_header_file_location * c_wrapped_data_array<struct c_cache_file_resource_header_location_table::s_header_file_location>::get_mutable(long);
// public: struct c_cache_file_resource_header_location_table::s_header_file_location const * c_wrapped_data_array<struct c_cache_file_resource_header_location_table::s_header_file_location>::get(long) const;
// public: struct s_data_array * c_wrapped_data_array<struct c_cache_file_resource_header_location_table::s_header_file_location>::operator struct s_data_array *(void);
// public: struct s_data_array const * c_wrapped_data_array<struct c_cache_file_resource_header_location_table::s_header_file_location>::get_data(void) const;
// public: class c_cache_file_resource_file_location_table const *& c_array_operator_interface<class c_wrapped_array_no_init<class c_cache_file_resource_file_location_table const *>, class c_cache_file_resource_file_location_table const *>::operator[](long);
// public: class c_cache_file_resource_file_location_table const *const & c_array_operator_interface<class c_wrapped_array_no_init<class c_cache_file_resource_file_location_table const *>, class c_cache_file_resource_file_location_table const *>::operator[](long) const;
// public: struct s_cache_file_codec_definition const * c_wrapped_array_no_init<struct s_cache_file_codec_definition const>::begin(void) const;
// public: bool c_array_operator_interface<class c_wrapped_array_no_init<struct s_cache_file_codec_definition const>, struct s_cache_file_codec_definition const>::valid_index(long) const;
// public: class c_wrapped_array_no_init<struct s_cache_file_codec_definition const> const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_cache_file_codec_definition const> >::get_super_class(void) const;
// public: struct c_cache_file_location_table_runtime_file_library::s_io_runtime_definition * c_wrapped_array_no_init<struct c_cache_file_location_table_runtime_file_library::s_io_runtime_definition>::begin(void);
// public: struct c_cache_file_location_table_runtime_file_library::s_io_runtime_definition const * c_array_operator_interface<class c_wrapped_array_no_init<struct c_cache_file_location_table_runtime_file_library::s_io_runtime_definition>, struct c_cache_file_location_table_runtime_file_library::s_io_runtime_definition>::begin(void) const;
// public: bool c_array_operator_interface<class c_wrapped_array_no_init<struct c_cache_file_location_table_runtime_file_library::s_io_runtime_definition>, struct c_cache_file_location_table_runtime_file_library::s_io_runtime_definition>::valid_index(long) const;
// public: class c_wrapped_array_no_init<struct c_cache_file_location_table_runtime_file_library::s_io_runtime_definition> * c_recursive_template_pattern<class c_wrapped_array_no_init<struct c_cache_file_location_table_runtime_file_library::s_io_runtime_definition> >::get_super_class(void);
// public: struct s_cache_file_resource_streaming_sublocation_table const * c_array_operator_interface<class c_wrapped_array_no_init<struct s_cache_file_resource_streaming_sublocation_table const>, struct s_cache_file_resource_streaming_sublocation_table const>::begin(void) const;
// public: bool c_array_operator_interface<class c_wrapped_array_no_init<struct s_cache_file_resource_streaming_sublocation_table const>, struct s_cache_file_resource_streaming_sublocation_table const>::valid_index(long) const;
// public: struct s_cache_file_resource_file_location const * c_array_operator_interface<class c_wrapped_array_no_init<struct s_cache_file_resource_file_location const>, struct s_cache_file_resource_file_location const>::begin(void) const;
// public: bool c_array_operator_interface<class c_wrapped_array_no_init<struct s_cache_file_resource_file_location const>, struct s_cache_file_resource_file_location const>::valid_index(long) const;
// public: struct s_cache_file_resource_sections_location const * c_array_operator_interface<class c_wrapped_array_no_init<struct s_cache_file_resource_sections_location const>, struct s_cache_file_resource_sections_location const>::begin(void) const;
// public: struct s_data_array * c_smart_data_array<struct c_cache_file_resource_header_location_table::s_header_file_location>::operator struct s_data_array *(void) const;
// public: struct s_data_array * c_smart_data_array<struct c_cache_file_resource_header_location_table::s_header_file_location>::operator->(void);
// public: class c_smart_data_array<struct c_cache_file_resource_header_location_table::s_header_file_location> & c_smart_data_array<struct c_cache_file_resource_header_location_table::s_header_file_location>::operator=(struct s_data_array *);
// public: class c_cache_file_resource_file_location_table const ** c_wrapped_array_no_init<class c_cache_file_resource_file_location_table const *>::begin(void);
// public: class c_cache_file_resource_file_location_table const *const * c_wrapped_array_no_init<class c_cache_file_resource_file_location_table const *>::begin(void) const;
// public: bool c_array_operator_interface<class c_wrapped_array_no_init<class c_cache_file_resource_file_location_table const *>, class c_cache_file_resource_file_location_table const *>::valid_index(long) const;
// public: class c_wrapped_array_no_init<class c_cache_file_resource_file_location_table const *> * c_recursive_template_pattern<class c_wrapped_array_no_init<class c_cache_file_resource_file_location_table const *> >::get_super_class(void);
// public: class c_wrapped_array_no_init<class c_cache_file_resource_file_location_table const *> const * c_recursive_template_pattern<class c_wrapped_array_no_init<class c_cache_file_resource_file_location_table const *> >::get_super_class(void) const;
// public: long c_array_operator_interface<class c_wrapped_array_no_init<struct s_cache_file_codec_definition const>, struct s_cache_file_codec_definition const>::count(void) const;
// public: struct c_cache_file_location_table_runtime_file_library::s_io_runtime_definition const * c_wrapped_array_no_init<struct c_cache_file_location_table_runtime_file_library::s_io_runtime_definition>::begin(void) const;
// public: long c_array_operator_interface<class c_wrapped_array_no_init<struct c_cache_file_location_table_runtime_file_library::s_io_runtime_definition>, struct c_cache_file_location_table_runtime_file_library::s_io_runtime_definition>::count(void) const;
// public: class c_wrapped_array_no_init<struct c_cache_file_location_table_runtime_file_library::s_io_runtime_definition> const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct c_cache_file_location_table_runtime_file_library::s_io_runtime_definition> >::get_super_class(void) const;
// public: struct s_cache_file_resource_streaming_sublocation_table const * c_wrapped_array_no_init<struct s_cache_file_resource_streaming_sublocation_table const>::begin(void) const;
// public: long c_array_operator_interface<class c_wrapped_array_no_init<struct s_cache_file_resource_streaming_sublocation_table const>, struct s_cache_file_resource_streaming_sublocation_table const>::count(void) const;
// public: class c_wrapped_array_no_init<struct s_cache_file_resource_streaming_sublocation_table const> const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_cache_file_resource_streaming_sublocation_table const> >::get_super_class(void) const;
// public: struct s_cache_file_resource_file_location const * c_wrapped_array_no_init<struct s_cache_file_resource_file_location const>::begin(void) const;
// public: long c_array_operator_interface<class c_wrapped_array_no_init<struct s_cache_file_resource_file_location const>, struct s_cache_file_resource_file_location const>::count(void) const;
// public: class c_wrapped_array_no_init<struct s_cache_file_resource_file_location const> const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_cache_file_resource_file_location const> >::get_super_class(void) const;
// public: long c_array_operator_interface<class c_wrapped_array_no_init<class c_cache_file_resource_file_location_table const *>, class c_cache_file_resource_file_location_table const *>::count(void) const;
// public: long c_wrapped_array_no_init<class c_cache_file_resource_file_location_table const *>::count(void) const;
// public: bool c_flags_no_init<enum e_cache_file_tag_resource_location_bit, unsigned char, 6, struct s_default_enum_string_resolver>::test(enum e_cache_file_tag_resource_location_bit) const;
// public: bool c_flags_no_init<enum c_cache_file_resource_header_location_table::e_header_file_location_bit, unsigned short, 2, struct s_default_enum_string_resolver>::test(enum c_cache_file_resource_header_location_table::e_header_file_location_bit) const;
// public: void c_flags_no_init<enum c_cache_file_resource_header_location_table::e_header_file_location_bit, unsigned short, 2, struct s_default_enum_string_resolver>::set(enum c_cache_file_resource_header_location_table::e_header_file_location_bit, bool);
// class c_wrapped_array<struct c_cache_file_location_table_runtime_file_library::s_io_runtime_definition> allocate_tracked_wrapped_array<struct c_cache_file_location_table_runtime_file_library::s_io_runtime_definition>(class c_allocation_interface *, unsigned long, char const *);
// void free_wrapped_array<struct c_cache_file_location_table_runtime_file_library::s_io_runtime_definition>(class c_allocation_interface *, class c_wrapped_array<struct c_cache_file_location_table_runtime_file_library::s_io_runtime_definition> *);
// public: struct s_cache_file_local_resource_location const & s_static_array<struct s_cache_file_local_resource_location, 1200>::operator[]<long>(long) const;
// class c_wrapped_array<class c_cache_file_resource_file_location_table const *> allocate_tracked_wrapped_array<class c_cache_file_resource_file_location_table const *>(class c_allocation_interface *, unsigned long, char const *);
// void free_wrapped_array<class c_cache_file_resource_file_location_table const *>(class c_allocation_interface *, class c_wrapped_array<class c_cache_file_resource_file_location_table const *> *);
// public: void c_wrapped_array_no_init<struct c_cache_file_location_table_runtime_file_library::s_io_runtime_definition>::clear(void);
// public: struct c_cache_file_location_table_runtime_file_library::s_io_runtime_definition * c_wrapped_array_no_init<struct c_cache_file_location_table_runtime_file_library::s_io_runtime_definition>::end(void);
// public: void c_wrapped_array_no_init<class c_cache_file_resource_file_location_table const *>::clear(void);
// public: class c_cache_file_resource_file_location_table const ** c_wrapped_array_no_init<class c_cache_file_resource_file_location_table const *>::end(void);
// public: void c_wrapped_array_no_init<struct c_cache_file_location_table_runtime_file_library::s_io_runtime_definition>::set_elements(struct c_cache_file_location_table_runtime_file_library::s_io_runtime_definition *, long);
// public: static bool c_flags_no_init<enum e_cache_file_tag_resource_location_bit, unsigned char, 6, struct s_default_enum_string_resolver>::valid_bit(enum e_cache_file_tag_resource_location_bit);
// private: static unsigned char c_flags_no_init<enum e_cache_file_tag_resource_location_bit, unsigned char, 6, struct s_default_enum_string_resolver>::flag_size_type(enum e_cache_file_tag_resource_location_bit);
// public: static bool c_flags_no_init<enum c_cache_file_resource_header_location_table::e_header_file_location_bit, unsigned short, 2, struct s_default_enum_string_resolver>::valid_bit(enum c_cache_file_resource_header_location_table::e_header_file_location_bit);
// private: static unsigned short c_flags_no_init<enum c_cache_file_resource_header_location_table::e_header_file_location_bit, unsigned short, 2, struct s_default_enum_string_resolver>::flag_size_type(enum c_cache_file_resource_header_location_table::e_header_file_location_bit);
// public: struct c_cache_file_location_table_runtime_file_library::s_io_runtime_definition * c_basic_buffer<void>::get_as_type_array<struct c_cache_file_location_table_runtime_file_library::s_io_runtime_definition>(unsigned long);
// class c_wrapped_array<struct c_cache_file_location_table_runtime_file_library::s_io_runtime_definition> make_wrapped_array<struct c_cache_file_location_table_runtime_file_library::s_io_runtime_definition>(struct c_cache_file_location_table_runtime_file_library::s_io_runtime_definition *, long);
// public: static bool s_static_array<struct s_cache_file_local_resource_location, 1200>::valid<long>(long);
// public: class c_cache_file_resource_file_location_table const ** c_basic_buffer<void>::get_as_type_array<class c_cache_file_resource_file_location_table const *>(unsigned long);
// class c_wrapped_array<class c_cache_file_resource_file_location_table const *> make_wrapped_array<class c_cache_file_resource_file_location_table const *>(class c_cache_file_resource_file_location_table const **, long);
// public: c_wrapped_array<struct c_cache_file_location_table_runtime_file_library::s_io_runtime_definition>::c_wrapped_array<struct c_cache_file_location_table_runtime_file_library::s_io_runtime_definition>(struct c_cache_file_location_table_runtime_file_library::s_io_runtime_definition *, long);
// public: c_wrapped_array<class c_cache_file_resource_file_location_table const *>::c_wrapped_array<class c_cache_file_resource_file_location_table const *>(class c_cache_file_resource_file_location_table const **, long);

//public: void c_cache_file_location_table_runtime_file_library::initialize(class c_allocation_interface *, class c_cache_file_io_library *, struct s_cache_file_io_identifier const &, class c_wrapped_array<struct s_cache_file_resource_shared_file const>)
//{
//    mangled_ppc("?initialize@c_cache_file_location_table_runtime_file_library@@QAAXPAVc_allocation_interface@@PAVc_cache_file_io_library@@ABUs_cache_file_io_identifier@@V?$c_wrapped_array@$$CBUs_cache_file_resource_shared_file@@@@@Z");
//};

//private: void c_cache_file_location_table_runtime_file_library::open_file(long, class c_cache_file_io_library *)
//{
//    mangled_ppc("?open_file@c_cache_file_location_table_runtime_file_library@@AAAXJPAVc_cache_file_io_library@@@Z");
//};

//public: void c_cache_file_location_table_runtime_file_library::dispose(class c_allocation_interface *, class c_cache_file_io_library *)
//{
//    mangled_ppc("?dispose@c_cache_file_location_table_runtime_file_library@@QAAXPAVc_allocation_interface@@PAVc_cache_file_io_library@@@Z");
//};

//public: void c_cache_file_location_table_runtime_file_library::try_to_open_optional_files(class c_cache_file_io_library *)
//{
//    mangled_ppc("?try_to_open_optional_files@c_cache_file_location_table_runtime_file_library@@QAAXPAVc_cache_file_io_library@@@Z");
//};

//public: struct s_cache_file_io_identifier c_cache_file_location_table_runtime_file_library::get_io_identifier(long) const
//{
//    mangled_ppc("?get_io_identifier@c_cache_file_location_table_runtime_file_library@@QBA?AUs_cache_file_io_identifier@@J@Z");
//};

//public: unsigned long c_cache_file_location_table_runtime_file_library::get_io_sort_key(long) const
//{
//    mangled_ppc("?get_io_sort_key@c_cache_file_location_table_runtime_file_library@@QBAKJ@Z");
//};

//public: unsigned long c_cache_file_location_table_runtime_file_library::get_io_offset(long) const
//{
//    mangled_ppc("?get_io_offset@c_cache_file_location_table_runtime_file_library@@QBAKJ@Z");
//};

//public: bool c_cache_file_location_table_runtime_file_library::is_usable_shared_file(long) const
//{
//    mangled_ppc("?is_usable_shared_file@c_cache_file_location_table_runtime_file_library@@QBA_NJ@Z");
//};

//private: struct c_cache_file_location_table_runtime_file_library::s_io_runtime_definition const * c_cache_file_location_table_runtime_file_library::get_io_definition(long) const
//{
//    mangled_ppc("?get_io_definition@c_cache_file_location_table_runtime_file_library@@ABAPBUs_io_runtime_definition@1@J@Z");
//};

//public: void c_cache_file_resource_file_location_table::initialize_for_new_map(class c_allocation_interface *, class c_cache_file_tag_resource_codec_library const *, class c_wrapped_array<struct s_cache_file_codec_definition const>, class c_cache_file_io_library *, struct s_cache_file_io_identifier const &, class c_wrapped_array<struct s_cache_file_resource_shared_file const>, class c_wrapped_array<struct s_cache_file_resource_streaming_sublocation_table const>, class c_wrapped_array<struct s_cache_file_resource_file_location const>, class c_wrapped_array<struct s_cache_file_resource_sections_location const>)
//{
//    mangled_ppc("?initialize_for_new_map@c_cache_file_resource_file_location_table@@QAAXPAVc_allocation_interface@@PBVc_cache_file_tag_resource_codec_library@@V?$c_wrapped_array@$$CBUs_cache_file_codec_definition@@@@PAVc_cache_file_io_library@@ABUs_cache_file_io_identifier@@V?$c_wrapped_array@$$CBUs_cache_file_resource_shared_file@@@@V?$c_wrapped_array@$$CBUs_cache_file_resource_streaming_sublocation_table@@@@V?$c_wrapped_array@$$CBUs_cache_file_resource_file_location@@@@V?$c_wrapped_array@$$CBUs_cache_file_resource_sections_location@@@@@Z");
//};

//public: void c_cache_file_resource_file_location_table::dispose_from_old_map(class c_allocation_interface *, class c_cache_file_io_library *)
//{
//    mangled_ppc("?dispose_from_old_map@c_cache_file_resource_file_location_table@@QAAXPAVc_allocation_interface@@PAVc_cache_file_io_library@@@Z");
//};

//public: void c_cache_file_resource_file_location_table::try_to_open_optional_files(class c_cache_file_io_library *)
//{
//    mangled_ppc("?try_to_open_optional_files@c_cache_file_resource_file_location_table@@QAAXPAVc_cache_file_io_library@@@Z");
//};

//public: long c_cache_file_resource_file_location_table::get_location_count(void) const
//{
//    mangled_ppc("?get_location_count@c_cache_file_resource_file_location_table@@QBAJXZ");
//};

//public: bool c_cache_file_resource_file_location_table::is_usable_location(long) const
//{
//    mangled_ppc("?is_usable_location@c_cache_file_resource_file_location_table@@QBA_NJ@Z");
//};

//public: bool c_cache_file_resource_file_location_table::is_usable_for_prefetch_restore_location(long) const
//{
//    mangled_ppc("?is_usable_for_prefetch_restore_location@c_cache_file_resource_file_location_table@@QBA_NJ@Z");
//};

//public: long c_cache_file_resource_file_location_table::get_location_resource_reference_count(long) const
//{
//    mangled_ppc("?get_location_resource_reference_count@c_cache_file_resource_file_location_table@@QBAJJ@Z");
//};

//private: struct s_cache_file_resource_file_location const * c_cache_file_resource_file_location_table::get_location(long) const
//{
//    mangled_ppc("?get_location@c_cache_file_resource_file_location_table@@ABAPBUs_cache_file_resource_file_location@@J@Z");
//};

//public: struct s_tag_resource_table_location_handle_struct * c_cache_file_resource_file_location_table::get_location_handle(long) const
//{
//    mangled_ppc("?get_location_handle@c_cache_file_resource_file_location_table@@QBAPAUs_tag_resource_table_location_handle_struct@@J@Z");
//};

//public: long c_cache_file_resource_file_location_table::get_location_index(struct s_tag_resource_table_location_handle_struct *) const
//{
//    mangled_ppc("?get_location_index@c_cache_file_resource_file_location_table@@QBAJPAUs_tag_resource_table_location_handle_struct@@@Z");
//};

//long table_handle_to_datum_index(struct s_tag_resource_table_location_handle_struct *)
//{
//    mangled_ppc("?table_handle_to_datum_index@@YAJPAUs_tag_resource_table_location_handle_struct@@@Z");
//};

//private: short c_cache_file_resource_file_location_table::get_location_identifier_salt(long) const
//{
//    mangled_ppc("?get_location_identifier_salt@c_cache_file_resource_file_location_table@@ABAFJ@Z");
//};

//private: long c_cache_file_resource_file_location_table::get_codec_decompressor_identifier(long) const
//{
//    mangled_ppc("?get_codec_decompressor_identifier@c_cache_file_resource_file_location_table@@ABAJJ@Z");
//};

//public: struct s_tag_resource_table_location_handle_struct * c_cache_file_resource_file_location_table::get_pageable_location_handle(long) const
//{
//    mangled_ppc("?get_pageable_location_handle@c_cache_file_resource_file_location_table@@QBAPAUs_tag_resource_table_location_handle_struct@@J@Z");
//};

//public: struct s_tag_resource_table_location_handle_struct * c_cache_file_resource_file_location_table::get_optional_location_handle(long) const
//{
//    mangled_ppc("?get_optional_location_handle@c_cache_file_resource_file_location_table@@QBAPAUs_tag_resource_table_location_handle_struct@@J@Z");
//};

//public: bool c_cache_file_resource_file_location_table::get_streaming_sublocation_location_offset(long, unsigned long, unsigned long, bool *, unsigned long *, unsigned long *) const
//{
//    mangled_ppc("?get_streaming_sublocation_location_offset@c_cache_file_resource_file_location_table@@QBA_NJKKPA_NPAK1@Z");
//};

//private: bool c_cache_file_resource_file_location_table::map_streaming_sublocation_disk_offset_to_location_offset(long, unsigned long, unsigned long, unsigned long *) const
//{
//    mangled_ppc("?map_streaming_sublocation_disk_offset_to_location_offset@c_cache_file_resource_file_location_table@@ABA_NJKKPAK@Z");
//};

//public: long c_cache_file_resource_file_location_table::get_location_decompressor_identifier(struct s_tag_resource_table_location_handle_struct *) const
//{
//    mangled_ppc("?get_location_decompressor_identifier@c_cache_file_resource_file_location_table@@QBAJPAUs_tag_resource_table_location_handle_struct@@@Z");
//};

//public: bool c_cache_file_resource_file_location_table::should_prefetch_location(struct s_tag_resource_table_location_handle_struct *, struct s_cache_file_resource_location_prefetch_state const *) const
//{
//    mangled_ppc("?should_prefetch_location@c_cache_file_resource_file_location_table@@QBA_NPAUs_tag_resource_table_location_handle_struct@@PBUs_cache_file_resource_location_prefetch_state@@@Z");
//};

//public: bool s_cache_file_io_identifier::operator==(struct s_cache_file_io_identifier const &) const
//{
//    mangled_ppc("??8s_cache_file_io_identifier@@QBA_NABU0@@Z");
//};

//public: bool c_cache_file_resource_file_location_table::describe_location(struct s_tag_resource_table_location_handle_struct *, class c_wrapped_array<char>) const
//{
//    mangled_ppc("?describe_location@c_cache_file_resource_file_location_table@@QBA_NPAUs_tag_resource_table_location_handle_struct@@V?$c_wrapped_array@D@@@Z");
//};

//public: bool c_cache_file_resource_file_location_table::get_physical_location(long, struct s_cache_file_resource_physical_location *) const
//{
//    mangled_ppc("?get_physical_location@c_cache_file_resource_file_location_table@@QBA_NJPAUs_cache_file_resource_physical_location@@@Z");
//};

//public: bool c_cache_file_resource_file_location_table::get_physical_location_from_handle(struct s_tag_resource_table_location_handle_struct *, struct s_cache_file_resource_physical_location *) const
//{
//    mangled_ppc("?get_physical_location_from_handle@c_cache_file_resource_file_location_table@@QBA_NPAUs_tag_resource_table_location_handle_struct@@PAUs_cache_file_resource_physical_location@@@Z");
//};

//public: bool c_cache_file_resource_file_location_table::get_streaming_sublocation_table_from_handle(struct s_tag_resource_table_location_handle_struct *, struct s_cache_file_resource_streaming_sublocation_table const **) const
//{
//    mangled_ppc("?get_streaming_sublocation_table_from_handle@c_cache_file_resource_file_location_table@@QBA_NPAUs_tag_resource_table_location_handle_struct@@PAPBUs_cache_file_resource_streaming_sublocation_table@@@Z");
//};

//public: struct s_network_http_request_hash const * c_cache_file_resource_file_location_table::try_to_get_location_checksum(long) const
//{
//    mangled_ppc("?try_to_get_location_checksum@c_cache_file_resource_file_location_table@@QBAPBUs_network_http_request_hash@@J@Z");
//};

//public: struct s_network_http_request_hash const * c_cache_file_resource_file_location_table::try_to_get_location_checksum_from_handle(struct s_tag_resource_table_location_handle_struct *) const
//{
//    mangled_ppc("?try_to_get_location_checksum_from_handle@c_cache_file_resource_file_location_table@@QBAPBUs_network_http_request_hash@@PAUs_tag_resource_table_location_handle_struct@@@Z");
//};

//public: struct s_cache_file_resource_checksum const * c_cache_file_resource_file_location_table::try_to_get_location_full_checksum_from_handle(struct s_tag_resource_table_location_handle_struct *) const
//{
//    mangled_ppc("?try_to_get_location_full_checksum_from_handle@c_cache_file_resource_file_location_table@@QBAPBUs_cache_file_resource_checksum@@PAUs_tag_resource_table_location_handle_struct@@@Z");
//};

//private: unsigned long c_cache_file_resource_file_location_table::location_get_actual_memory_size(long) const
//{
//    mangled_ppc("?location_get_actual_memory_size@c_cache_file_resource_file_location_table@@ABAKJ@Z");
//};

//public: unsigned long c_cache_file_resource_file_location_table::get_location_sort_key(struct s_tag_resource_table_location_handle_struct *) const
//{
//    mangled_ppc("?get_location_sort_key@c_cache_file_resource_file_location_table@@QBAKPAUs_tag_resource_table_location_handle_struct@@@Z");
//};

//private: struct s_cache_file_resource_file_location const * c_cache_file_resource_file_location_table::get_location_from_handle(struct s_tag_resource_table_location_handle_struct *) const
//{
//    mangled_ppc("?get_location_from_handle@c_cache_file_resource_file_location_table@@ABAPBUs_cache_file_resource_file_location@@PAUs_tag_resource_table_location_handle_struct@@@Z");
//};

//private: struct s_cache_file_resource_streaming_sublocation_table const * c_cache_file_resource_file_location_table::get_streaming_sublocation_table(long) const
//{
//    mangled_ppc("?get_streaming_sublocation_table@c_cache_file_resource_file_location_table@@ABAPBUs_cache_file_resource_streaming_sublocation_table@@J@Z");
//};

//protected: void c_cache_file_resource_header_location_table::initialize_for_new_map(class c_allocation_interface *, bool)
//{
//    mangled_ppc("?initialize_for_new_map@c_cache_file_resource_header_location_table@@IAAXPAVc_allocation_interface@@_N@Z");
//};

//public: void c_cache_file_resource_header_location_table::dispose_from_old_map(void)
//{
//    mangled_ppc("?dispose_from_old_map@c_cache_file_resource_header_location_table@@QAAXXZ");
//};

//public: bool c_cache_file_resource_header_location_table::opened(void) const
//{
//    mangled_ppc("?opened@c_cache_file_resource_header_location_table@@QBA_NXZ");
//};

//protected: void c_cache_file_resource_header_location_table::initialize_shared_usage(class c_cache_file_tag_resource_codec_library const *, class c_cache_file_io_library *, char const *, long)
//{
//    mangled_ppc("?initialize_shared_usage@c_cache_file_resource_header_location_table@@IAAXPBVc_cache_file_tag_resource_codec_library@@PAVc_cache_file_io_library@@PBDJ@Z");
//};

//public: void c_cache_file_resource_header_location_table::dispose_shared_usage(class c_cache_file_io_library *)
//{
//    mangled_ppc("?dispose_shared_usage@c_cache_file_resource_header_location_table@@QAAXPAVc_cache_file_io_library@@@Z");
//};

//public: long c_cache_file_resource_header_location_table::get_maximum_location_count(void) const
//{
//    mangled_ppc("?get_maximum_location_count@c_cache_file_resource_header_location_table@@QBAJXZ");
//};

//public: long c_cache_file_resource_header_location_table::get_location_count(void) const
//{
//    mangled_ppc("?get_location_count@c_cache_file_resource_header_location_table@@QBAJXZ");
//};

//public: bool c_cache_file_resource_header_location_table::is_usable_location(long) const
//{
//    mangled_ppc("?is_usable_location@c_cache_file_resource_header_location_table@@QBA_NJ@Z");
//};

//public: bool c_cache_file_resource_header_location_table::is_usable_for_prefetch_restore_location(long) const
//{
//    mangled_ppc("?is_usable_for_prefetch_restore_location@c_cache_file_resource_header_location_table@@QBA_NJ@Z");
//};

//public: long c_cache_file_resource_header_location_table::get_location_resource_reference_count(long) const
//{
//    mangled_ppc("?get_location_resource_reference_count@c_cache_file_resource_header_location_table@@QBAJJ@Z");
//};

//private: struct c_cache_file_resource_header_location_table::s_header_file_location const * c_cache_file_resource_header_location_table::get_location(long) const
//{
//    mangled_ppc("?get_location@c_cache_file_resource_header_location_table@@ABAPBUs_header_file_location@1@J@Z");
//};

//public: struct s_tag_resource_table_location_handle_struct * c_cache_file_resource_header_location_table::get_location_handle(long) const
//{
//    mangled_ppc("?get_location_handle@c_cache_file_resource_header_location_table@@QBAPAUs_tag_resource_table_location_handle_struct@@J@Z");
//};

//public: unsigned long c_cache_file_resource_header_location_table::get_location_sort_key(struct s_tag_resource_table_location_handle_struct *) const
//{
//    mangled_ppc("?get_location_sort_key@c_cache_file_resource_header_location_table@@QBAKPAUs_tag_resource_table_location_handle_struct@@@Z");
//};

//private: struct c_cache_file_resource_header_location_table::s_header_file_location const * c_cache_file_resource_header_location_table::get_location_from_handle(struct s_tag_resource_table_location_handle_struct *) const
//{
//    mangled_ppc("?get_location_from_handle@c_cache_file_resource_header_location_table@@ABAPBUs_header_file_location@1@PAUs_tag_resource_table_location_handle_struct@@@Z");
//};

//private: long c_cache_file_resource_header_location_table::get_header_location_index_from_handle(struct s_tag_resource_table_location_handle_struct *) const
//{
//    mangled_ppc("?get_header_location_index_from_handle@c_cache_file_resource_header_location_table@@ABAJPAUs_tag_resource_table_location_handle_struct@@@Z");
//};

//public: long c_cache_file_resource_header_location_table::get_location_decompressor_identifier(struct s_tag_resource_table_location_handle_struct *) const
//{
//    mangled_ppc("?get_location_decompressor_identifier@c_cache_file_resource_header_location_table@@QBAJPAUs_tag_resource_table_location_handle_struct@@@Z");
//};

//public: bool c_cache_file_resource_header_location_table::should_prefetch_location(struct s_tag_resource_table_location_handle_struct *, struct s_cache_file_resource_location_prefetch_state const *) const
//{
//    mangled_ppc("?should_prefetch_location@c_cache_file_resource_header_location_table@@QBA_NPAUs_tag_resource_table_location_handle_struct@@PBUs_cache_file_resource_location_prefetch_state@@@Z");
//};

//public: bool c_cache_file_resource_header_location_table::describe_location(struct s_tag_resource_table_location_handle_struct *, class c_wrapped_array<char>) const
//{
//    mangled_ppc("?describe_location@c_cache_file_resource_header_location_table@@QBA_NPAUs_tag_resource_table_location_handle_struct@@V?$c_wrapped_array@D@@@Z");
//};

//public: bool c_cache_file_resource_header_location_table::get_physical_location(long, struct s_cache_file_resource_physical_location *) const
//{
//    mangled_ppc("?get_physical_location@c_cache_file_resource_header_location_table@@QBA_NJPAUs_cache_file_resource_physical_location@@@Z");
//};

//public: bool c_cache_file_resource_header_location_table::get_physical_location_from_handle(struct s_tag_resource_table_location_handle_struct *, struct s_cache_file_resource_physical_location *) const
//{
//    mangled_ppc("?get_physical_location_from_handle@c_cache_file_resource_header_location_table@@QBA_NPAUs_tag_resource_table_location_handle_struct@@PAUs_cache_file_resource_physical_location@@@Z");
//};

//public: struct s_network_http_request_hash const * c_cache_file_resource_header_location_table::try_to_get_location_checksum(long) const
//{
//    mangled_ppc("?try_to_get_location_checksum@c_cache_file_resource_header_location_table@@QBAPBUs_network_http_request_hash@@J@Z");
//};

//public: struct s_network_http_request_hash const * c_cache_file_resource_header_location_table::try_to_get_location_checksum_from_handle(struct s_tag_resource_table_location_handle_struct *) const
//{
//    mangled_ppc("?try_to_get_location_checksum_from_handle@c_cache_file_resource_header_location_table@@QBAPBUs_network_http_request_hash@@PAUs_tag_resource_table_location_handle_struct@@@Z");
//};

//public: void c_cache_file_resource_shared_file_location_table::initialize_for_new_map(class c_allocation_interface *, struct s_cache_file_resource_shared_file const *)
//{
//    mangled_ppc("?initialize_for_new_map@c_cache_file_resource_shared_file_location_table@@QAAXPAVc_allocation_interface@@PBUs_cache_file_resource_shared_file@@@Z");
//};

//public: void c_cache_file_resource_shared_file_location_table::dispose_from_old_map(void)
//{
//    mangled_ppc("?dispose_from_old_map@c_cache_file_resource_shared_file_location_table@@QAAXXZ");
//};

//public: bool c_cache_file_resource_shared_file_location_table::try_to_open_shared_file(class c_cache_file_tag_resource_codec_library const *, class c_cache_file_io_library *)
//{
//    mangled_ppc("?try_to_open_shared_file@c_cache_file_resource_shared_file_location_table@@QAA_NPBVc_cache_file_tag_resource_codec_library@@PAVc_cache_file_io_library@@@Z");
//};

//public: void c_cache_file_resource_prefetch_location_table::initialize_for_new_map(class c_allocation_interface *)
//{
//    mangled_ppc("?initialize_for_new_map@c_cache_file_resource_prefetch_location_table@@QAAXPAVc_allocation_interface@@@Z");
//};

//public: void c_cache_file_resource_prefetch_location_table::open_prefetch_file(class c_cache_file_tag_resource_codec_library const *, class c_cache_file_io_library *, char const *)
//{
//    mangled_ppc("?open_prefetch_file@c_cache_file_resource_prefetch_location_table@@QAAXPBVc_cache_file_tag_resource_codec_library@@PAVc_cache_file_io_library@@PBD@Z");
//};

//public: void c_cache_file_resource_uber_location_table::initialize_for_new_map(class c_cache_file_resource_header_location_table const *, class c_cache_file_resource_header_location_table const *)
//{
//    mangled_ppc("?initialize_for_new_map@c_cache_file_resource_uber_location_table@@QAAXPBVc_cache_file_resource_header_location_table@@0@Z");
//};

//public: void c_cache_file_resource_uber_location_table::dispose_from_old_map(void)
//{
//    mangled_ppc("?dispose_from_old_map@c_cache_file_resource_uber_location_table@@QAAXXZ");
//};

//public: long c_cache_file_resource_uber_location_table::get_maximum_location_count(void) const
//{
//    mangled_ppc("?get_maximum_location_count@c_cache_file_resource_uber_location_table@@QBAJXZ");
//};

//public: long c_cache_file_resource_uber_location_table::get_location_count(void) const
//{
//    mangled_ppc("?get_location_count@c_cache_file_resource_uber_location_table@@QBAJXZ");
//};

//public: long c_cache_file_resource_uber_location_table::get_first_shared_location_index(void) const
//{
//    mangled_ppc("?get_first_shared_location_index@c_cache_file_resource_uber_location_table@@QBAJXZ");
//};

//public: long c_cache_file_resource_uber_location_table::get_one_past_last_shared_location_index(void) const
//{
//    mangled_ppc("?get_one_past_last_shared_location_index@c_cache_file_resource_uber_location_table@@QBAJXZ");
//};

//public: long c_cache_file_resource_uber_location_table::get_first_prefetch_location_index(void) const
//{
//    mangled_ppc("?get_first_prefetch_location_index@c_cache_file_resource_uber_location_table@@QBAJXZ");
//};

//public: long c_cache_file_resource_uber_location_table::get_one_past_last_prefetch_location_index(void) const
//{
//    mangled_ppc("?get_one_past_last_prefetch_location_index@c_cache_file_resource_uber_location_table@@QBAJXZ");
//};

//public: bool c_cache_file_resource_uber_location_table::is_usable_location(long) const
//{
//    mangled_ppc("?is_usable_location@c_cache_file_resource_uber_location_table@@QBA_NJ@Z");
//};

//public: bool c_cache_file_resource_uber_location_table::is_usable_for_prefetch_restore_location(long) const
//{
//    mangled_ppc("?is_usable_for_prefetch_restore_location@c_cache_file_resource_uber_location_table@@QBA_NJ@Z");
//};

//public: long c_cache_file_resource_uber_location_table::get_location_resource_reference_count(long) const
//{
//    mangled_ppc("?get_location_resource_reference_count@c_cache_file_resource_uber_location_table@@QBAJJ@Z");
//};

//public: struct s_tag_resource_location_handle_struct * c_cache_file_resource_uber_location_table::get_location_handle(long) const
//{
//    mangled_ppc("?get_location_handle@c_cache_file_resource_uber_location_table@@QBAPAUs_tag_resource_location_handle_struct@@J@Z");
//};

//struct s_tag_resource_location_handle_struct * datum_index_to_location_handle(long)
//{
//    mangled_ppc("?datum_index_to_location_handle@@YAPAUs_tag_resource_location_handle_struct@@J@Z");
//};

//public: unsigned long c_cache_file_resource_uber_location_table::get_location_sort_key(struct s_tag_resource_location_handle_struct *) const
//{
//    mangled_ppc("?get_location_sort_key@c_cache_file_resource_uber_location_table@@QBAKPAUs_tag_resource_location_handle_struct@@@Z");
//};

//public: long c_cache_file_resource_uber_location_table::get_location_decompressor_identifier(struct s_tag_resource_location_handle_struct *) const
//{
//    mangled_ppc("?get_location_decompressor_identifier@c_cache_file_resource_uber_location_table@@QBAJPAUs_tag_resource_location_handle_struct@@@Z");
//};

//public: bool c_cache_file_resource_uber_location_table::should_prefetch_location(struct s_tag_resource_location_handle_struct *, struct s_cache_file_resource_location_prefetch_state const *) const
//{
//    mangled_ppc("?should_prefetch_location@c_cache_file_resource_uber_location_table@@QBA_NPAUs_tag_resource_location_handle_struct@@PBUs_cache_file_resource_location_prefetch_state@@@Z");
//};

//public: bool c_cache_file_resource_uber_location_table::get_physical_location(long, struct s_cache_file_resource_physical_location *) const
//{
//    mangled_ppc("?get_physical_location@c_cache_file_resource_uber_location_table@@QBA_NJPAUs_cache_file_resource_physical_location@@@Z");
//};

//public: bool c_cache_file_resource_uber_location_table::get_physical_location_from_handle(struct s_tag_resource_location_handle_struct *, struct s_cache_file_resource_physical_location *) const
//{
//    mangled_ppc("?get_physical_location_from_handle@c_cache_file_resource_uber_location_table@@QBA_NPAUs_tag_resource_location_handle_struct@@PAUs_cache_file_resource_physical_location@@@Z");
//};

//public: bool c_cache_file_resource_uber_location_table::get_streaming_sublocation_table_from_handle(struct s_tag_resource_location_handle_struct *, struct s_cache_file_resource_streaming_sublocation_table const **) const
//{
//    mangled_ppc("?get_streaming_sublocation_table_from_handle@c_cache_file_resource_uber_location_table@@QBA_NPAUs_tag_resource_location_handle_struct@@PAPBUs_cache_file_resource_streaming_sublocation_table@@@Z");
//};

//public: struct s_network_http_request_hash const * c_cache_file_resource_uber_location_table::try_to_get_location_checksum(long) const
//{
//    mangled_ppc("?try_to_get_location_checksum@c_cache_file_resource_uber_location_table@@QBAPBUs_network_http_request_hash@@J@Z");
//};

//public: struct s_network_http_request_hash const * c_cache_file_resource_uber_location_table::try_to_get_location_checksum_from_handle(struct s_tag_resource_location_handle_struct *) const
//{
//    mangled_ppc("?try_to_get_location_checksum_from_handle@c_cache_file_resource_uber_location_table@@QBAPBUs_network_http_request_hash@@PAUs_tag_resource_location_handle_struct@@@Z");
//};

//public: struct s_cache_file_resource_checksum const * c_cache_file_resource_uber_location_table::try_to_get_location_full_checksum_from_handle(struct s_tag_resource_location_handle_struct *) const
//{
//    mangled_ppc("?try_to_get_location_full_checksum_from_handle@c_cache_file_resource_uber_location_table@@QBAPBUs_cache_file_resource_checksum@@PAUs_tag_resource_location_handle_struct@@@Z");
//};

//private: bool c_cache_file_resource_uber_location_table::location_is_file(struct s_tag_resource_location_handle_struct *) const
//{
//    mangled_ppc("?location_is_file@c_cache_file_resource_uber_location_table@@ABA_NPAUs_tag_resource_location_handle_struct@@@Z");
//};

//private: bool c_cache_file_resource_uber_location_table::location_index_is_file(long) const
//{
//    mangled_ppc("?location_index_is_file@c_cache_file_resource_uber_location_table@@ABA_NJ@Z");
//};

//private: long c_cache_file_resource_uber_location_table::get_shared_location_offset(void) const
//{
//    mangled_ppc("?get_shared_location_offset@c_cache_file_resource_uber_location_table@@ABAJXZ");
//};

//private: bool c_cache_file_resource_uber_location_table::location_is_shared(struct s_tag_resource_location_handle_struct *) const
//{
//    mangled_ppc("?location_is_shared@c_cache_file_resource_uber_location_table@@ABA_NPAUs_tag_resource_location_handle_struct@@@Z");
//};

//private: struct s_tag_resource_table_location_handle_struct * c_cache_file_resource_uber_location_table::location_handle_to_shared_location_handle(struct s_tag_resource_location_handle_struct *) const
//{
//    mangled_ppc("?location_handle_to_shared_location_handle@c_cache_file_resource_uber_location_table@@ABAPAUs_tag_resource_table_location_handle_struct@@PAUs_tag_resource_location_handle_struct@@@Z");
//};

//private: struct s_tag_resource_location_handle_struct * c_cache_file_resource_uber_location_table::shared_location_handle_to_location_handle(struct s_tag_resource_table_location_handle_struct *) const
//{
//    mangled_ppc("?shared_location_handle_to_location_handle@c_cache_file_resource_uber_location_table@@ABAPAUs_tag_resource_location_handle_struct@@PAUs_tag_resource_table_location_handle_struct@@@Z");
//};

//private: bool c_cache_file_resource_uber_location_table::location_index_is_shared(long) const
//{
//    mangled_ppc("?location_index_is_shared@c_cache_file_resource_uber_location_table@@ABA_NJ@Z");
//};

//private: long c_cache_file_resource_uber_location_table::location_index_to_shared_location_index(long) const
//{
//    mangled_ppc("?location_index_to_shared_location_index@c_cache_file_resource_uber_location_table@@ABAJJ@Z");
//};

//private: long c_cache_file_resource_uber_location_table::get_prefetch_location_offset(void) const
//{
//    mangled_ppc("?get_prefetch_location_offset@c_cache_file_resource_uber_location_table@@ABAJXZ");
//};

//private: bool c_cache_file_resource_uber_location_table::location_is_prefetch(struct s_tag_resource_location_handle_struct *) const
//{
//    mangled_ppc("?location_is_prefetch@c_cache_file_resource_uber_location_table@@ABA_NPAUs_tag_resource_location_handle_struct@@@Z");
//};

//private: struct s_tag_resource_table_location_handle_struct * c_cache_file_resource_uber_location_table::location_handle_to_prefetch_location_handle(struct s_tag_resource_location_handle_struct *) const
//{
//    mangled_ppc("?location_handle_to_prefetch_location_handle@c_cache_file_resource_uber_location_table@@ABAPAUs_tag_resource_table_location_handle_struct@@PAUs_tag_resource_location_handle_struct@@@Z");
//};

//private: struct s_tag_resource_location_handle_struct * c_cache_file_resource_uber_location_table::prefetch_location_handle_to_location_handle(struct s_tag_resource_table_location_handle_struct *) const
//{
//    mangled_ppc("?prefetch_location_handle_to_location_handle@c_cache_file_resource_uber_location_table@@ABAPAUs_tag_resource_location_handle_struct@@PAUs_tag_resource_table_location_handle_struct@@@Z");
//};

//private: bool c_cache_file_resource_uber_location_table::location_index_is_prefetch(long) const
//{
//    mangled_ppc("?location_index_is_prefetch@c_cache_file_resource_uber_location_table@@ABA_NJ@Z");
//};

//private: long c_cache_file_resource_uber_location_table::location_index_to_prefetch_location_index(long) const
//{
//    mangled_ppc("?location_index_to_prefetch_location_index@c_cache_file_resource_uber_location_table@@ABAJJ@Z");
//};

//private: bool c_cache_file_resource_uber_location_table::location_in_range(struct s_tag_resource_location_handle_struct *, long, long) const
//{
//    mangled_ppc("?location_in_range@c_cache_file_resource_uber_location_table@@ABA_NPAUs_tag_resource_location_handle_struct@@JJ@Z");
//};

//private: struct s_tag_resource_table_location_handle_struct * c_cache_file_resource_uber_location_table::location_handle_decode(struct s_tag_resource_location_handle_struct *, long, long) const
//{
//    mangled_ppc("?location_handle_decode@c_cache_file_resource_uber_location_table@@ABAPAUs_tag_resource_table_location_handle_struct@@PAUs_tag_resource_location_handle_struct@@JJ@Z");
//};

//private: struct s_tag_resource_location_handle_struct * c_cache_file_resource_uber_location_table::location_handle_encode(struct s_tag_resource_table_location_handle_struct *, long, long) const
//{
//    mangled_ppc("?location_handle_encode@c_cache_file_resource_uber_location_table@@ABAPAUs_tag_resource_location_handle_struct@@PAUs_tag_resource_table_location_handle_struct@@JJ@Z");
//};

//private: bool c_cache_file_resource_uber_location_table::location_index_in_range(long, long, long) const
//{
//    mangled_ppc("?location_index_in_range@c_cache_file_resource_uber_location_table@@ABA_NJJJ@Z");
//};

//private: long c_cache_file_resource_uber_location_table::location_index_decode(long, long, long) const
//{
//    mangled_ppc("?location_index_decode@c_cache_file_resource_uber_location_table@@ABAJJJJ@Z");
//};

//private: long c_cache_file_resource_uber_location_table::location_index_encode(long, long, long) const
//{
//    mangled_ppc("?location_index_encode@c_cache_file_resource_uber_location_table@@ABAJJJJ@Z");
//};

//private: long c_cache_file_resource_uber_location_table::get_table_index_from_handle(struct s_tag_resource_location_handle_struct *) const
//{
//    mangled_ppc("?get_table_index_from_handle@c_cache_file_resource_uber_location_table@@ABAJPAUs_tag_resource_location_handle_struct@@@Z");
//};

//private: long c_cache_file_resource_uber_location_table::get_table_index(long) const
//{
//    mangled_ppc("?get_table_index@c_cache_file_resource_uber_location_table@@ABAJJ@Z");
//};

//private: struct s_tag_resource_table_location_handle_struct * c_cache_file_resource_uber_location_table::location_handle_to_table_location_handle(long, struct s_tag_resource_location_handle_struct *) const
//{
//    mangled_ppc("?location_handle_to_table_location_handle@c_cache_file_resource_uber_location_table@@ABAPAUs_tag_resource_table_location_handle_struct@@JPAUs_tag_resource_location_handle_struct@@@Z");
//};

//private: struct s_tag_resource_location_handle_struct * c_cache_file_resource_uber_location_table::table_location_handle_to_location_handle(long, struct s_tag_resource_table_location_handle_struct *) const
//{
//    mangled_ppc("?table_location_handle_to_location_handle@c_cache_file_resource_uber_location_table@@ABAPAUs_tag_resource_location_handle_struct@@JPAUs_tag_resource_table_location_handle_struct@@@Z");
//};

//private: long c_cache_file_resource_uber_location_table::location_index_to_table_location_index(long, long) const
//{
//    mangled_ppc("?location_index_to_table_location_index@c_cache_file_resource_uber_location_table@@ABAJJJ@Z");
//};

//public: void c_cache_file_resource_uber_location_table::initialize(class c_allocation_interface *, long)
//{
//    mangled_ppc("?initialize@c_cache_file_resource_uber_location_table@@QAAXPAVc_allocation_interface@@J@Z");
//};

//public: void c_cache_file_resource_uber_location_table::dispose(class c_allocation_interface *)
//{
//    mangled_ppc("?dispose@c_cache_file_resource_uber_location_table@@QAAXPAVc_allocation_interface@@@Z");
//};

//public: void c_cache_file_resource_uber_location_table::add_location_table(long, class c_cache_file_resource_file_location_table const *, unsigned long *)
//{
//    mangled_ppc("?add_location_table@c_cache_file_resource_uber_location_table@@QAAXJPBVc_cache_file_resource_file_location_table@@PAK@Z");
//};

//public: void c_cache_file_resource_uber_location_table::remove_location_table(long, class c_cache_file_resource_file_location_table const *, unsigned long)
//{
//    mangled_ppc("?remove_location_table@c_cache_file_resource_uber_location_table@@QAAXJPBVc_cache_file_resource_file_location_table@@K@Z");
//};

//private: class c_cache_file_resource_file_location_table const * c_cache_file_resource_uber_location_table::get_file_location_table(long) const
//{
//    mangled_ppc("?get_file_location_table@c_cache_file_resource_uber_location_table@@ABAPBVc_cache_file_resource_file_location_table@@J@Z");
//};

//public: struct s_tag_resource_location_handle_struct * c_cache_file_resource_uber_location_table::resolve_table_location_handle_to_location_handle(unsigned long, struct s_tag_resource_table_location_handle_struct *) const
//{
//    mangled_ppc("?resolve_table_location_handle_to_location_handle@c_cache_file_resource_uber_location_table@@QBAPAUs_tag_resource_location_handle_struct@@KPAUs_tag_resource_table_location_handle_struct@@@Z");
//};

//public: bool c_cache_file_resource_uber_location_table::describe_location(struct s_tag_resource_location_handle_struct *, class c_wrapped_array<char>) const
//{
//    mangled_ppc("?describe_location@c_cache_file_resource_uber_location_table@@QBA_NPAUs_tag_resource_location_handle_struct@@V?$c_wrapped_array@D@@@Z");
//};

//public: bool c_bit_vector_operator_interface<class c_wrapped_flags>::valid_bit(unsigned long) const
//{
//    mangled_ppc("?valid_bit@?$c_bit_vector_operator_interface@Vc_wrapped_flags@@@@QBA_NK@Z");
//};

//public: void c_wrapped_array_no_init<struct s_cache_file_codec_definition const>::clear(void)
//{
//    mangled_ppc("?clear@?$c_wrapped_array_no_init@$$CBUs_cache_file_codec_definition@@@@QAAXXZ");
//};

//public: struct s_cache_file_codec_definition const & c_array_operator_interface<class c_wrapped_array_no_init<struct s_cache_file_codec_definition const>, struct s_cache_file_codec_definition const>::operator[](long) const
//{
//    mangled_ppc("??A?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CBUs_cache_file_codec_definition@@@@$$CBUs_cache_file_codec_definition@@@@QBAABUs_cache_file_codec_definition@@J@Z");
//};

//public: long c_wrapped_array_no_init<struct c_cache_file_location_table_runtime_file_library::s_io_runtime_definition>::count(void) const
//{
//    mangled_ppc("?count@?$c_wrapped_array_no_init@Us_io_runtime_definition@c_cache_file_location_table_runtime_file_library@@@@QBAJXZ");
//};

//public: struct c_cache_file_location_table_runtime_file_library::s_io_runtime_definition & c_array_operator_interface<class c_wrapped_array_no_init<struct c_cache_file_location_table_runtime_file_library::s_io_runtime_definition>, struct c_cache_file_location_table_runtime_file_library::s_io_runtime_definition>::operator[](long)
//{
//    mangled_ppc("??A?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_io_runtime_definition@c_cache_file_location_table_runtime_file_library@@@@Us_io_runtime_definition@c_cache_file_location_table_runtime_file_library@@@@QAAAAUs_io_runtime_definition@c_cache_file_location_table_runtime_file_library@@J@Z");
//};

//public: struct c_cache_file_location_table_runtime_file_library::s_io_runtime_definition const * c_array_operator_interface<class c_wrapped_array_no_init<struct c_cache_file_location_table_runtime_file_library::s_io_runtime_definition>, struct c_cache_file_location_table_runtime_file_library::s_io_runtime_definition>::get_element(long) const
//{
//    mangled_ppc("?get_element@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_io_runtime_definition@c_cache_file_location_table_runtime_file_library@@@@Us_io_runtime_definition@c_cache_file_location_table_runtime_file_library@@@@QBAPBUs_io_runtime_definition@c_cache_file_location_table_runtime_file_library@@J@Z");
//};

//public: void c_wrapped_array_no_init<struct s_cache_file_resource_streaming_sublocation_table const>::clear(void)
//{
//    mangled_ppc("?clear@?$c_wrapped_array_no_init@$$CBUs_cache_file_resource_streaming_sublocation_table@@@@QAAXXZ");
//};

//public: struct s_cache_file_resource_streaming_sublocation_table const * c_array_operator_interface<class c_wrapped_array_no_init<struct s_cache_file_resource_streaming_sublocation_table const>, struct s_cache_file_resource_streaming_sublocation_table const>::get_element(long) const
//{
//    mangled_ppc("?get_element@?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CBUs_cache_file_resource_streaming_sublocation_table@@@@$$CBUs_cache_file_resource_streaming_sublocation_table@@@@QBAPBUs_cache_file_resource_streaming_sublocation_table@@J@Z");
//};

//public: void c_wrapped_array_no_init<struct s_cache_file_resource_file_location const>::clear(void)
//{
//    mangled_ppc("?clear@?$c_wrapped_array_no_init@$$CBUs_cache_file_resource_file_location@@@@QAAXXZ");
//};

//public: struct s_cache_file_resource_file_location const * c_wrapped_array_no_init<struct s_cache_file_resource_file_location const>::end(void) const
//{
//    mangled_ppc("?end@?$c_wrapped_array_no_init@$$CBUs_cache_file_resource_file_location@@@@QBAPBUs_cache_file_resource_file_location@@XZ");
//};

//public: struct s_cache_file_resource_file_location const * c_array_operator_interface<class c_wrapped_array_no_init<struct s_cache_file_resource_file_location const>, struct s_cache_file_resource_file_location const>::get_element(long) const
//{
//    mangled_ppc("?get_element@?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CBUs_cache_file_resource_file_location@@@@$$CBUs_cache_file_resource_file_location@@@@QBAPBUs_cache_file_resource_file_location@@J@Z");
//};

//public: void c_wrapped_array_no_init<struct s_cache_file_resource_sections_location const>::clear(void)
//{
//    mangled_ppc("?clear@?$c_wrapped_array_no_init@$$CBUs_cache_file_resource_sections_location@@@@QAAXXZ");
//};

//public: struct s_cache_file_resource_sections_location const * c_array_operator_interface<class c_wrapped_array_no_init<struct s_cache_file_resource_sections_location const>, struct s_cache_file_resource_sections_location const>::get_element(long) const
//{
//    mangled_ppc("?get_element@?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CBUs_cache_file_resource_sections_location@@@@$$CBUs_cache_file_resource_sections_location@@@@QBAPBUs_cache_file_resource_sections_location@@J@Z");
//};

//public: void c_wrapped_data_array<struct c_cache_file_resource_header_location_table::s_header_file_location>::initialize(struct s_data_array *)
//{
//    mangled_ppc("?initialize@?$c_wrapped_data_array@Us_header_file_location@c_cache_file_resource_header_location_table@@@@QAAXPAUs_data_array@@@Z");
//};

//public: void c_wrapped_data_array<struct c_cache_file_resource_header_location_table::s_header_file_location>::dispose(void)
//{
//    mangled_ppc("?dispose@?$c_wrapped_data_array@Us_header_file_location@c_cache_file_resource_header_location_table@@@@QAAXXZ");
//};

//public: struct c_cache_file_resource_header_location_table::s_header_file_location const * c_wrapped_data_array<struct c_cache_file_resource_header_location_table::s_header_file_location>::try_to_get(long) const
//{
//    mangled_ppc("?try_to_get@?$c_wrapped_data_array@Us_header_file_location@c_cache_file_resource_header_location_table@@@@QBAPBUs_header_file_location@c_cache_file_resource_header_location_table@@J@Z");
//};

//public: struct c_cache_file_resource_header_location_table::s_header_file_location * c_wrapped_data_array<struct c_cache_file_resource_header_location_table::s_header_file_location>::get_mutable(long)
//{
//    mangled_ppc("?get_mutable@?$c_wrapped_data_array@Us_header_file_location@c_cache_file_resource_header_location_table@@@@QAAPAUs_header_file_location@c_cache_file_resource_header_location_table@@J@Z");
//};

//public: struct c_cache_file_resource_header_location_table::s_header_file_location const * c_wrapped_data_array<struct c_cache_file_resource_header_location_table::s_header_file_location>::get(long) const
//{
//    mangled_ppc("?get@?$c_wrapped_data_array@Us_header_file_location@c_cache_file_resource_header_location_table@@@@QBAPBUs_header_file_location@c_cache_file_resource_header_location_table@@J@Z");
//};

//public: struct s_data_array * c_wrapped_data_array<struct c_cache_file_resource_header_location_table::s_header_file_location>::operator struct s_data_array *(void)
//{
//    mangled_ppc("??B?$c_wrapped_data_array@Us_header_file_location@c_cache_file_resource_header_location_table@@@@QAAPAUs_data_array@@XZ");
//};

//public: struct s_data_array const * c_wrapped_data_array<struct c_cache_file_resource_header_location_table::s_header_file_location>::get_data(void) const
//{
//    mangled_ppc("?get_data@?$c_wrapped_data_array@Us_header_file_location@c_cache_file_resource_header_location_table@@@@QBAPBUs_data_array@@XZ");
//};

//public: class c_cache_file_resource_file_location_table const *& c_array_operator_interface<class c_wrapped_array_no_init<class c_cache_file_resource_file_location_table const *>, class c_cache_file_resource_file_location_table const *>::operator[](long)
//{
//    mangled_ppc("??A?$c_array_operator_interface@V?$c_wrapped_array_no_init@PBVc_cache_file_resource_file_location_table@@@@PBVc_cache_file_resource_file_location_table@@@@QAAAAPBVc_cache_file_resource_file_location_table@@J@Z");
//};

//public: class c_cache_file_resource_file_location_table const *const & c_array_operator_interface<class c_wrapped_array_no_init<class c_cache_file_resource_file_location_table const *>, class c_cache_file_resource_file_location_table const *>::operator[](long) const
//{
//    mangled_ppc("??A?$c_array_operator_interface@V?$c_wrapped_array_no_init@PBVc_cache_file_resource_file_location_table@@@@PBVc_cache_file_resource_file_location_table@@@@QBAABQBVc_cache_file_resource_file_location_table@@J@Z");
//};

//public: struct s_cache_file_codec_definition const * c_wrapped_array_no_init<struct s_cache_file_codec_definition const>::begin(void) const
//{
//    mangled_ppc("?begin@?$c_wrapped_array_no_init@$$CBUs_cache_file_codec_definition@@@@QBAPBUs_cache_file_codec_definition@@XZ");
//};

//public: bool c_array_operator_interface<class c_wrapped_array_no_init<struct s_cache_file_codec_definition const>, struct s_cache_file_codec_definition const>::valid_index(long) const
//{
//    mangled_ppc("?valid_index@?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CBUs_cache_file_codec_definition@@@@$$CBUs_cache_file_codec_definition@@@@QBA_NJ@Z");
//};

//public: class c_wrapped_array_no_init<struct s_cache_file_codec_definition const> const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_cache_file_codec_definition const> >::get_super_class(void) const
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@$$CBUs_cache_file_codec_definition@@@@@@QBAPBV?$c_wrapped_array_no_init@$$CBUs_cache_file_codec_definition@@@@XZ");
//};

//public: struct c_cache_file_location_table_runtime_file_library::s_io_runtime_definition * c_wrapped_array_no_init<struct c_cache_file_location_table_runtime_file_library::s_io_runtime_definition>::begin(void)
//{
//    mangled_ppc("?begin@?$c_wrapped_array_no_init@Us_io_runtime_definition@c_cache_file_location_table_runtime_file_library@@@@QAAPAUs_io_runtime_definition@c_cache_file_location_table_runtime_file_library@@XZ");
//};

//public: struct c_cache_file_location_table_runtime_file_library::s_io_runtime_definition const * c_array_operator_interface<class c_wrapped_array_no_init<struct c_cache_file_location_table_runtime_file_library::s_io_runtime_definition>, struct c_cache_file_location_table_runtime_file_library::s_io_runtime_definition>::begin(void) const
//{
//    mangled_ppc("?begin@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_io_runtime_definition@c_cache_file_location_table_runtime_file_library@@@@Us_io_runtime_definition@c_cache_file_location_table_runtime_file_library@@@@QBAPBUs_io_runtime_definition@c_cache_file_location_table_runtime_file_library@@XZ");
//};

//public: bool c_array_operator_interface<class c_wrapped_array_no_init<struct c_cache_file_location_table_runtime_file_library::s_io_runtime_definition>, struct c_cache_file_location_table_runtime_file_library::s_io_runtime_definition>::valid_index(long) const
//{
//    mangled_ppc("?valid_index@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_io_runtime_definition@c_cache_file_location_table_runtime_file_library@@@@Us_io_runtime_definition@c_cache_file_location_table_runtime_file_library@@@@QBA_NJ@Z");
//};

//public: class c_wrapped_array_no_init<struct c_cache_file_location_table_runtime_file_library::s_io_runtime_definition> * c_recursive_template_pattern<class c_wrapped_array_no_init<struct c_cache_file_location_table_runtime_file_library::s_io_runtime_definition> >::get_super_class(void)
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@Us_io_runtime_definition@c_cache_file_location_table_runtime_file_library@@@@@@QAAPAV?$c_wrapped_array_no_init@Us_io_runtime_definition@c_cache_file_location_table_runtime_file_library@@@@XZ");
//};

//public: struct s_cache_file_resource_streaming_sublocation_table const * c_array_operator_interface<class c_wrapped_array_no_init<struct s_cache_file_resource_streaming_sublocation_table const>, struct s_cache_file_resource_streaming_sublocation_table const>::begin(void) const
//{
//    mangled_ppc("?begin@?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CBUs_cache_file_resource_streaming_sublocation_table@@@@$$CBUs_cache_file_resource_streaming_sublocation_table@@@@QBAPBUs_cache_file_resource_streaming_sublocation_table@@XZ");
//};

//public: bool c_array_operator_interface<class c_wrapped_array_no_init<struct s_cache_file_resource_streaming_sublocation_table const>, struct s_cache_file_resource_streaming_sublocation_table const>::valid_index(long) const
//{
//    mangled_ppc("?valid_index@?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CBUs_cache_file_resource_streaming_sublocation_table@@@@$$CBUs_cache_file_resource_streaming_sublocation_table@@@@QBA_NJ@Z");
//};

//public: struct s_cache_file_resource_file_location const * c_array_operator_interface<class c_wrapped_array_no_init<struct s_cache_file_resource_file_location const>, struct s_cache_file_resource_file_location const>::begin(void) const
//{
//    mangled_ppc("?begin@?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CBUs_cache_file_resource_file_location@@@@$$CBUs_cache_file_resource_file_location@@@@QBAPBUs_cache_file_resource_file_location@@XZ");
//};

//public: bool c_array_operator_interface<class c_wrapped_array_no_init<struct s_cache_file_resource_file_location const>, struct s_cache_file_resource_file_location const>::valid_index(long) const
//{
//    mangled_ppc("?valid_index@?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CBUs_cache_file_resource_file_location@@@@$$CBUs_cache_file_resource_file_location@@@@QBA_NJ@Z");
//};

//public: struct s_cache_file_resource_sections_location const * c_array_operator_interface<class c_wrapped_array_no_init<struct s_cache_file_resource_sections_location const>, struct s_cache_file_resource_sections_location const>::begin(void) const
//{
//    mangled_ppc("?begin@?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CBUs_cache_file_resource_sections_location@@@@$$CBUs_cache_file_resource_sections_location@@@@QBAPBUs_cache_file_resource_sections_location@@XZ");
//};

//public: struct s_data_array * c_smart_data_array<struct c_cache_file_resource_header_location_table::s_header_file_location>::operator struct s_data_array *(void) const
//{
//    mangled_ppc("??B?$c_smart_data_array@Us_header_file_location@c_cache_file_resource_header_location_table@@@@QBAPAUs_data_array@@XZ");
//};

//public: struct s_data_array * c_smart_data_array<struct c_cache_file_resource_header_location_table::s_header_file_location>::operator->(void)
//{
//    mangled_ppc("??C?$c_smart_data_array@Us_header_file_location@c_cache_file_resource_header_location_table@@@@QAAPAUs_data_array@@XZ");
//};

//public: class c_smart_data_array<struct c_cache_file_resource_header_location_table::s_header_file_location> & c_smart_data_array<struct c_cache_file_resource_header_location_table::s_header_file_location>::operator=(struct s_data_array *)
//{
//    mangled_ppc("??4?$c_smart_data_array@Us_header_file_location@c_cache_file_resource_header_location_table@@@@QAAAAV0@PAUs_data_array@@@Z");
//};

//public: class c_cache_file_resource_file_location_table const ** c_wrapped_array_no_init<class c_cache_file_resource_file_location_table const *>::begin(void)
//{
//    mangled_ppc("?begin@?$c_wrapped_array_no_init@PBVc_cache_file_resource_file_location_table@@@@QAAPAPBVc_cache_file_resource_file_location_table@@XZ");
//};

//public: class c_cache_file_resource_file_location_table const *const * c_wrapped_array_no_init<class c_cache_file_resource_file_location_table const *>::begin(void) const
//{
//    mangled_ppc("?begin@?$c_wrapped_array_no_init@PBVc_cache_file_resource_file_location_table@@@@QBAPBQBVc_cache_file_resource_file_location_table@@XZ");
//};

//public: bool c_array_operator_interface<class c_wrapped_array_no_init<class c_cache_file_resource_file_location_table const *>, class c_cache_file_resource_file_location_table const *>::valid_index(long) const
//{
//    mangled_ppc("?valid_index@?$c_array_operator_interface@V?$c_wrapped_array_no_init@PBVc_cache_file_resource_file_location_table@@@@PBVc_cache_file_resource_file_location_table@@@@QBA_NJ@Z");
//};

//public: class c_wrapped_array_no_init<class c_cache_file_resource_file_location_table const *> * c_recursive_template_pattern<class c_wrapped_array_no_init<class c_cache_file_resource_file_location_table const *> >::get_super_class(void)
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@PBVc_cache_file_resource_file_location_table@@@@@@QAAPAV?$c_wrapped_array_no_init@PBVc_cache_file_resource_file_location_table@@@@XZ");
//};

//public: class c_wrapped_array_no_init<class c_cache_file_resource_file_location_table const *> const * c_recursive_template_pattern<class c_wrapped_array_no_init<class c_cache_file_resource_file_location_table const *> >::get_super_class(void) const
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@PBVc_cache_file_resource_file_location_table@@@@@@QBAPBV?$c_wrapped_array_no_init@PBVc_cache_file_resource_file_location_table@@@@XZ");
//};

//public: long c_array_operator_interface<class c_wrapped_array_no_init<struct s_cache_file_codec_definition const>, struct s_cache_file_codec_definition const>::count(void) const
//{
//    mangled_ppc("?count@?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CBUs_cache_file_codec_definition@@@@$$CBUs_cache_file_codec_definition@@@@QBAJXZ");
//};

//public: struct c_cache_file_location_table_runtime_file_library::s_io_runtime_definition const * c_wrapped_array_no_init<struct c_cache_file_location_table_runtime_file_library::s_io_runtime_definition>::begin(void) const
//{
//    mangled_ppc("?begin@?$c_wrapped_array_no_init@Us_io_runtime_definition@c_cache_file_location_table_runtime_file_library@@@@QBAPBUs_io_runtime_definition@c_cache_file_location_table_runtime_file_library@@XZ");
//};

//public: long c_array_operator_interface<class c_wrapped_array_no_init<struct c_cache_file_location_table_runtime_file_library::s_io_runtime_definition>, struct c_cache_file_location_table_runtime_file_library::s_io_runtime_definition>::count(void) const
//{
//    mangled_ppc("?count@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_io_runtime_definition@c_cache_file_location_table_runtime_file_library@@@@Us_io_runtime_definition@c_cache_file_location_table_runtime_file_library@@@@QBAJXZ");
//};

//public: class c_wrapped_array_no_init<struct c_cache_file_location_table_runtime_file_library::s_io_runtime_definition> const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct c_cache_file_location_table_runtime_file_library::s_io_runtime_definition> >::get_super_class(void) const
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@Us_io_runtime_definition@c_cache_file_location_table_runtime_file_library@@@@@@QBAPBV?$c_wrapped_array_no_init@Us_io_runtime_definition@c_cache_file_location_table_runtime_file_library@@@@XZ");
//};

//public: struct s_cache_file_resource_streaming_sublocation_table const * c_wrapped_array_no_init<struct s_cache_file_resource_streaming_sublocation_table const>::begin(void) const
//{
//    mangled_ppc("?begin@?$c_wrapped_array_no_init@$$CBUs_cache_file_resource_streaming_sublocation_table@@@@QBAPBUs_cache_file_resource_streaming_sublocation_table@@XZ");
//};

//public: long c_array_operator_interface<class c_wrapped_array_no_init<struct s_cache_file_resource_streaming_sublocation_table const>, struct s_cache_file_resource_streaming_sublocation_table const>::count(void) const
//{
//    mangled_ppc("?count@?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CBUs_cache_file_resource_streaming_sublocation_table@@@@$$CBUs_cache_file_resource_streaming_sublocation_table@@@@QBAJXZ");
//};

//public: class c_wrapped_array_no_init<struct s_cache_file_resource_streaming_sublocation_table const> const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_cache_file_resource_streaming_sublocation_table const> >::get_super_class(void) const
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@$$CBUs_cache_file_resource_streaming_sublocation_table@@@@@@QBAPBV?$c_wrapped_array_no_init@$$CBUs_cache_file_resource_streaming_sublocation_table@@@@XZ");
//};

//public: struct s_cache_file_resource_file_location const * c_wrapped_array_no_init<struct s_cache_file_resource_file_location const>::begin(void) const
//{
//    mangled_ppc("?begin@?$c_wrapped_array_no_init@$$CBUs_cache_file_resource_file_location@@@@QBAPBUs_cache_file_resource_file_location@@XZ");
//};

//public: long c_array_operator_interface<class c_wrapped_array_no_init<struct s_cache_file_resource_file_location const>, struct s_cache_file_resource_file_location const>::count(void) const
//{
//    mangled_ppc("?count@?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CBUs_cache_file_resource_file_location@@@@$$CBUs_cache_file_resource_file_location@@@@QBAJXZ");
//};

//public: class c_wrapped_array_no_init<struct s_cache_file_resource_file_location const> const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_cache_file_resource_file_location const> >::get_super_class(void) const
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@$$CBUs_cache_file_resource_file_location@@@@@@QBAPBV?$c_wrapped_array_no_init@$$CBUs_cache_file_resource_file_location@@@@XZ");
//};

//public: long c_array_operator_interface<class c_wrapped_array_no_init<class c_cache_file_resource_file_location_table const *>, class c_cache_file_resource_file_location_table const *>::count(void) const
//{
//    mangled_ppc("?count@?$c_array_operator_interface@V?$c_wrapped_array_no_init@PBVc_cache_file_resource_file_location_table@@@@PBVc_cache_file_resource_file_location_table@@@@QBAJXZ");
//};

//public: long c_wrapped_array_no_init<class c_cache_file_resource_file_location_table const *>::count(void) const
//{
//    mangled_ppc("?count@?$c_wrapped_array_no_init@PBVc_cache_file_resource_file_location_table@@@@QBAJXZ");
//};

//public: bool c_flags_no_init<enum e_cache_file_tag_resource_location_bit, unsigned char, 6, struct s_default_enum_string_resolver>::test(enum e_cache_file_tag_resource_location_bit) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_cache_file_tag_resource_location_bit@@E$05Us_default_enum_string_resolver@@@@QBA_NW4e_cache_file_tag_resource_location_bit@@@Z");
//};

//public: bool c_flags_no_init<enum c_cache_file_resource_header_location_table::e_header_file_location_bit, unsigned short, 2, struct s_default_enum_string_resolver>::test(enum c_cache_file_resource_header_location_table::e_header_file_location_bit) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_header_file_location_bit@c_cache_file_resource_header_location_table@@G$01Us_default_enum_string_resolver@@@@QBA_NW4e_header_file_location_bit@c_cache_file_resource_header_location_table@@@Z");
//};

//public: void c_flags_no_init<enum c_cache_file_resource_header_location_table::e_header_file_location_bit, unsigned short, 2, struct s_default_enum_string_resolver>::set(enum c_cache_file_resource_header_location_table::e_header_file_location_bit, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_header_file_location_bit@c_cache_file_resource_header_location_table@@G$01Us_default_enum_string_resolver@@@@QAAXW4e_header_file_location_bit@c_cache_file_resource_header_location_table@@_N@Z");
//};

//class c_wrapped_array<struct c_cache_file_location_table_runtime_file_library::s_io_runtime_definition> allocate_tracked_wrapped_array<struct c_cache_file_location_table_runtime_file_library::s_io_runtime_definition>(class c_allocation_interface *, unsigned long, char const *)
//{
//    mangled_ppc("??$allocate_tracked_wrapped_array@Us_io_runtime_definition@c_cache_file_location_table_runtime_file_library@@@@YA?AV?$c_wrapped_array@Us_io_runtime_definition@c_cache_file_location_table_runtime_file_library@@@@PAVc_allocation_interface@@KPBD@Z");
//};

//void free_wrapped_array<struct c_cache_file_location_table_runtime_file_library::s_io_runtime_definition>(class c_allocation_interface *, class c_wrapped_array<struct c_cache_file_location_table_runtime_file_library::s_io_runtime_definition> *)
//{
//    mangled_ppc("??$free_wrapped_array@Us_io_runtime_definition@c_cache_file_location_table_runtime_file_library@@@@YAXPAVc_allocation_interface@@PAV?$c_wrapped_array@Us_io_runtime_definition@c_cache_file_location_table_runtime_file_library@@@@@Z");
//};

//public: struct s_cache_file_local_resource_location const & s_static_array<struct s_cache_file_local_resource_location, 1200>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_cache_file_local_resource_location@@$0ELA@@@QBAABUs_cache_file_local_resource_location@@J@Z");
//};

//class c_wrapped_array<class c_cache_file_resource_file_location_table const *> allocate_tracked_wrapped_array<class c_cache_file_resource_file_location_table const *>(class c_allocation_interface *, unsigned long, char const *)
//{
//    mangled_ppc("??$allocate_tracked_wrapped_array@PBVc_cache_file_resource_file_location_table@@@@YA?AV?$c_wrapped_array@PBVc_cache_file_resource_file_location_table@@@@PAVc_allocation_interface@@KPBD@Z");
//};

//void free_wrapped_array<class c_cache_file_resource_file_location_table const *>(class c_allocation_interface *, class c_wrapped_array<class c_cache_file_resource_file_location_table const *> *)
//{
//    mangled_ppc("??$free_wrapped_array@PBVc_cache_file_resource_file_location_table@@@@YAXPAVc_allocation_interface@@PAV?$c_wrapped_array@PBVc_cache_file_resource_file_location_table@@@@@Z");
//};

//public: void c_wrapped_array_no_init<struct c_cache_file_location_table_runtime_file_library::s_io_runtime_definition>::clear(void)
//{
//    mangled_ppc("?clear@?$c_wrapped_array_no_init@Us_io_runtime_definition@c_cache_file_location_table_runtime_file_library@@@@QAAXXZ");
//};

//public: struct c_cache_file_location_table_runtime_file_library::s_io_runtime_definition * c_wrapped_array_no_init<struct c_cache_file_location_table_runtime_file_library::s_io_runtime_definition>::end(void)
//{
//    mangled_ppc("?end@?$c_wrapped_array_no_init@Us_io_runtime_definition@c_cache_file_location_table_runtime_file_library@@@@QAAPAUs_io_runtime_definition@c_cache_file_location_table_runtime_file_library@@XZ");
//};

//public: void c_wrapped_array_no_init<class c_cache_file_resource_file_location_table const *>::clear(void)
//{
//    mangled_ppc("?clear@?$c_wrapped_array_no_init@PBVc_cache_file_resource_file_location_table@@@@QAAXXZ");
//};

//public: class c_cache_file_resource_file_location_table const ** c_wrapped_array_no_init<class c_cache_file_resource_file_location_table const *>::end(void)
//{
//    mangled_ppc("?end@?$c_wrapped_array_no_init@PBVc_cache_file_resource_file_location_table@@@@QAAPAPBVc_cache_file_resource_file_location_table@@XZ");
//};

//public: void c_wrapped_array_no_init<struct c_cache_file_location_table_runtime_file_library::s_io_runtime_definition>::set_elements(struct c_cache_file_location_table_runtime_file_library::s_io_runtime_definition *, long)
//{
//    mangled_ppc("?set_elements@?$c_wrapped_array_no_init@Us_io_runtime_definition@c_cache_file_location_table_runtime_file_library@@@@QAAXPAUs_io_runtime_definition@c_cache_file_location_table_runtime_file_library@@J@Z");
//};

//public: static bool c_flags_no_init<enum e_cache_file_tag_resource_location_bit, unsigned char, 6, struct s_default_enum_string_resolver>::valid_bit(enum e_cache_file_tag_resource_location_bit)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_cache_file_tag_resource_location_bit@@E$05Us_default_enum_string_resolver@@@@SA_NW4e_cache_file_tag_resource_location_bit@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_cache_file_tag_resource_location_bit, unsigned char, 6, struct s_default_enum_string_resolver>::flag_size_type(enum e_cache_file_tag_resource_location_bit)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_cache_file_tag_resource_location_bit@@E$05Us_default_enum_string_resolver@@@@CAEW4e_cache_file_tag_resource_location_bit@@@Z");
//};

//public: static bool c_flags_no_init<enum c_cache_file_resource_header_location_table::e_header_file_location_bit, unsigned short, 2, struct s_default_enum_string_resolver>::valid_bit(enum c_cache_file_resource_header_location_table::e_header_file_location_bit)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_header_file_location_bit@c_cache_file_resource_header_location_table@@G$01Us_default_enum_string_resolver@@@@SA_NW4e_header_file_location_bit@c_cache_file_resource_header_location_table@@@Z");
//};

//private: static unsigned short c_flags_no_init<enum c_cache_file_resource_header_location_table::e_header_file_location_bit, unsigned short, 2, struct s_default_enum_string_resolver>::flag_size_type(enum c_cache_file_resource_header_location_table::e_header_file_location_bit)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_header_file_location_bit@c_cache_file_resource_header_location_table@@G$01Us_default_enum_string_resolver@@@@CAGW4e_header_file_location_bit@c_cache_file_resource_header_location_table@@@Z");
//};

//public: struct c_cache_file_location_table_runtime_file_library::s_io_runtime_definition * c_basic_buffer<void>::get_as_type_array<struct c_cache_file_location_table_runtime_file_library::s_io_runtime_definition>(unsigned long)
//{
//    mangled_ppc("??$get_as_type_array@Us_io_runtime_definition@c_cache_file_location_table_runtime_file_library@@@?$c_basic_buffer@X@@QAAPAUs_io_runtime_definition@c_cache_file_location_table_runtime_file_library@@K@Z");
//};

//class c_wrapped_array<struct c_cache_file_location_table_runtime_file_library::s_io_runtime_definition> make_wrapped_array<struct c_cache_file_location_table_runtime_file_library::s_io_runtime_definition>(struct c_cache_file_location_table_runtime_file_library::s_io_runtime_definition *, long)
//{
//    mangled_ppc("??$make_wrapped_array@Us_io_runtime_definition@c_cache_file_location_table_runtime_file_library@@@@YA?AV?$c_wrapped_array@Us_io_runtime_definition@c_cache_file_location_table_runtime_file_library@@@@PAUs_io_runtime_definition@c_cache_file_location_table_runtime_file_library@@J@Z");
//};

//public: static bool s_static_array<struct s_cache_file_local_resource_location, 1200>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_cache_file_local_resource_location@@$0ELA@@@SA_NJ@Z");
//};

//public: class c_cache_file_resource_file_location_table const ** c_basic_buffer<void>::get_as_type_array<class c_cache_file_resource_file_location_table const *>(unsigned long)
//{
//    mangled_ppc("??$get_as_type_array@PBVc_cache_file_resource_file_location_table@@@?$c_basic_buffer@X@@QAAPAPBVc_cache_file_resource_file_location_table@@K@Z");
//};

//class c_wrapped_array<class c_cache_file_resource_file_location_table const *> make_wrapped_array<class c_cache_file_resource_file_location_table const *>(class c_cache_file_resource_file_location_table const **, long)
//{
//    mangled_ppc("??$make_wrapped_array@PBVc_cache_file_resource_file_location_table@@@@YA?AV?$c_wrapped_array@PBVc_cache_file_resource_file_location_table@@@@PAPBVc_cache_file_resource_file_location_table@@J@Z");
//};

//public: c_wrapped_array<struct c_cache_file_location_table_runtime_file_library::s_io_runtime_definition>::c_wrapped_array<struct c_cache_file_location_table_runtime_file_library::s_io_runtime_definition>(struct c_cache_file_location_table_runtime_file_library::s_io_runtime_definition *, long)
//{
//    mangled_ppc("??0?$c_wrapped_array@Us_io_runtime_definition@c_cache_file_location_table_runtime_file_library@@@@QAA@PAUs_io_runtime_definition@c_cache_file_location_table_runtime_file_library@@J@Z");
//};

//public: c_wrapped_array<class c_cache_file_resource_file_location_table const *>::c_wrapped_array<class c_cache_file_resource_file_location_table const *>(class c_cache_file_resource_file_location_table const **, long)
//{
//    mangled_ppc("??0?$c_wrapped_array@PBVc_cache_file_resource_file_location_table@@@@QAA@PAPBVc_cache_file_resource_file_location_table@@J@Z");
//};

