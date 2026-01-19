/* ---------- headers */

#include "omaha\tag_files\tag_group_layout_reader.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const s_static_array<char const *, 62>::k_element_count; // "?k_element_count@?$s_static_array@PBD$0DO@@@2JB"

// public: c_tag_layout_rebuilder::c_tag_layout_rebuilder(enum e_tag_persist_layout_version, class c_tag_persist_layout_versioned_header const *);
// public: c_raw_storage_buffer_iterator::c_raw_storage_buffer_iterator(void);
// public: void c_tag_layout_rebuilder::add_scoped_temporary_storage(unsigned long);
// public: void c_tag_layout_rebuilder::add_persistent_temporary_storage(unsigned long);
// public: void c_tag_layout_rebuilder::add_permanent_storage(unsigned long);
// public: bool c_tag_layout_rebuilder::calculate_strings_size(void);
// public: bool c_tag_layout_rebuilder::initialize_strings(void);
// public: bool c_tag_layout_rebuilder::load_string_characters(class c_persist_stream *);
// public: bool c_tag_layout_rebuilder::calculate_string_list_indices_sizes(void);
// public: bool c_tag_layout_rebuilder::initialize_string_list_indices(void);
// public: bool c_tag_layout_rebuilder::load_string_list_indices(class c_persist_stream *);
// public: bool c_tag_layout_rebuilder::calculate_string_lists_sizes(void);
// public: bool c_tag_layout_rebuilder::initialize_string_lists(void);
// public: bool c_tag_layout_rebuilder::load_string_lists(class c_persist_stream *);
// public: bool c_tag_layout_rebuilder::calculate_custom_search_definitions_sizes(void);
// public: bool c_tag_layout_rebuilder::initialize_custom_search_defintions(void);
// public: bool c_tag_layout_rebuilder::load_custom_search_definitions(class c_persist_stream *);
// public: bool c_tag_layout_rebuilder::calculate_data_definitions_sizes(void);
// public: bool c_tag_layout_rebuilder::initialize_data_definitions(void);
// public: bool c_tag_layout_rebuilder::load_data_definitions(class c_persist_stream *);
// public: bool c_tag_layout_rebuilder::calculate_array_definitions_sizes(void);
// public: bool c_tag_layout_rebuilder::initialize_array_definitions(void);
// public: bool c_tag_layout_rebuilder::load_array_definitions(class c_persist_stream *);
// public: bool c_tag_layout_rebuilder::calculate_field_types_sizes(void);
// public: bool c_tag_layout_rebuilder::initialize_field_types(void);
// public: bool c_tag_layout_rebuilder::load_field_types(class c_persist_stream *);
// public: bool c_tag_layout_rebuilder::calculate_fields_sizes(void);
// public: bool c_tag_layout_rebuilder::initialize_fields(void);
// public: bool c_tag_layout_rebuilder::load_fields(class c_persist_stream *);
// public: bool c_tag_layout_rebuilder::calculate_aggregates_sizes_prechunk(void);
// public: bool c_tag_layout_rebuilder::initialize_aggregates_prechunk(void);
// public: bool c_tag_layout_rebuilder::load_aggregates_prechunk(class c_persist_stream *);
// public: bool c_tag_layout_rebuilder::calculate_struct_definitions_sizes_v2(void);
// public: bool c_tag_layout_rebuilder::initialize_struct_definitions_v2(void);
// public: bool c_tag_layout_rebuilder::load_struct_definitions_v2(class c_persist_stream *);
// public: bool c_tag_layout_rebuilder::calculate_block_definitions_sizes_v2(void);
// public: bool c_tag_layout_rebuilder::initialize_block_definitions_v2(void);
// public: bool c_tag_layout_rebuilder::load_block_definitions_v2(class c_persist_stream *);
// public: bool c_tag_layout_rebuilder::calculate_resource_definitions_sizes_v2(void);
// public: bool c_tag_layout_rebuilder::initialize_resource_definitions_v2(void);
// public: bool c_tag_layout_rebuilder::load_resource_definitions_v2(class c_persist_stream *);
// public: bool c_tag_layout_rebuilder::calculate_interop_definitions_sizes(void);
// public: bool c_tag_layout_rebuilder::initialize_interop_definitions(void);
// public: bool c_tag_layout_rebuilder::load_interop_definitions(class c_persist_stream *);
// public: unsigned long c_tag_layout_rebuilder::get_temporary_storage_size(void);
// public: unsigned long c_tag_layout_rebuilder::get_permanent_storage_size(void);
// public: bool c_tag_layout_rebuilder::dont_know_dont_care_but_dont_call(void);
// public: void c_tag_layout_rebuilder::initialize_storage(class c_wrapped_array<unsigned char> &, class c_wrapped_array<unsigned char> &);
// public: void c_raw_storage_buffer_iterator::initialize(void *, void *);
// public: struct s_tag_block_definition * c_tag_layout_rebuilder::get_root_block_definition(void);
// public: class c_wrapped_array<struct s_tag_struct_definition> & c_tag_layout_rebuilder::get_struct_definitions(void);
// public: class c_wrapped_array<struct s_tag_field> & c_tag_layout_rebuilder::get_all_fields(void);
// public: void c_tag_layout_rebuilder::get_character_storage(class c_wrapped_array_no_init<char const> *) const;
// public: unsigned long c_tag_layout_rebuilder::calculate_layout_checksum(void) const;
// private: void c_tag_layout_rebuilder::build_code_field_name_to_persisted_field_name_map(class s_static_array<char const *, 62> *) const;
// private: void c_tag_layout_rebuilder::match_persisted_types_to_code_types(class s_static_array<char const *, 62> const &);
// private: void c_tag_layout_rebuilder::build_field_types(void);
// private: void c_tag_layout_rebuilder::build_fields(struct s_tag_persist_field const *, long);
// private: void c_tag_layout_rebuilder::build_aggregates_prechunk(struct s_tag_persist_aggregate_prechunk const *, long);
// private: void c_tag_layout_rebuilder::build_string_lists(struct s_tag_persist_string_list const *, long);
// private: void c_tag_layout_rebuilder::build_struct_definitions(struct s_tag_persist_struct_definition const *, long);
// private: void c_tag_layout_rebuilder::build_block_definitions(struct s_tag_persist_block_definition const *, long);
// private: void c_tag_layout_rebuilder::build_resource_definitions(struct s_tag_persist_resource_definition const *, long);
// private: void c_tag_layout_rebuilder::build_interop_definitions(struct s_tag_persist_interop_definition const *, long);
// private: long c_tag_layout_rebuilder::get_tag_field_list_size(struct s_tag_struct_definition *);
// private: struct s_tag_field * c_tag_layout_rebuilder::get_mutable_fields(struct s_tag_struct_definition *);
// private: char const * c_tag_layout_rebuilder::get_string(struct s_tag_persist_index<0>) const;
// private: enum e_tag_field c_tag_layout_rebuilder::get_field_type(struct s_tag_persist_index<3>) const;
// private: void * c_tag_layout_rebuilder::get_field_definition(struct s_tag_persist_field const *);
// private: struct s_tag_field * c_tag_layout_rebuilder::get_fields(struct s_tag_persist_index<5>);
// private: char const ** c_tag_layout_rebuilder::get_string_array(struct s_tag_persist_index<1>, long);
// public: long s_tag_persist_index<0>::get_raw_index(void) const;
// public: long s_tag_persist_index<1>::get_raw_index(void) const;
// public: long s_tag_persist_index<5>::get_raw_index(void) const;
// public: struct s_tag_struct_definition * c_wrapped_array_no_init<struct s_tag_struct_definition>::end(void);
// public: struct s_tag_field const * c_wrapped_array_no_init<struct s_tag_field>::begin(void) const;
// public: struct s_tag_field const * c_wrapped_array_no_init<struct s_tag_field>::end(void) const;
// public: c_wrapped_array<enum e_tag_field>::c_wrapped_array<enum e_tag_field>(void);
// public: long c_wrapped_array_no_init<enum e_tag_field>::count(void) const;
// public: enum e_tag_field & c_array_operator_interface<class c_wrapped_array_no_init<enum e_tag_field>, enum e_tag_field>::operator[](long);
// public: enum e_tag_field const & c_array_operator_interface<class c_wrapped_array_no_init<enum e_tag_field>, enum e_tag_field>::operator[](long) const;
// public: c_wrapped_array<struct s_tag_persist_field_type>::c_wrapped_array<struct s_tag_persist_field_type>(void);
// public: long c_wrapped_array_no_init<struct s_tag_persist_field_type>::count(void) const;
// public: struct s_tag_persist_field_type & c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_persist_field_type>, struct s_tag_persist_field_type>::operator[](long);
// public: struct s_tag_persist_field_type const & c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_persist_field_type>, struct s_tag_persist_field_type>::operator[](long) const;
// public: struct s_tag_persist_field_type * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_persist_field_type>, struct s_tag_persist_field_type>::get_elements(void);
// public: c_wrapped_array<char>::c_wrapped_array<char>(void);
// public: char const & c_array_operator_interface<class c_wrapped_array_no_init<char>, char>::operator[](long) const;
// public: c_wrapped_array<struct s_block_index_custom_search_definition>::c_wrapped_array<struct s_block_index_custom_search_definition>(void);
// public: struct s_block_index_custom_search_definition * c_wrapped_array_no_init<struct s_block_index_custom_search_definition>::begin(void);
// public: struct s_block_index_custom_search_definition * c_wrapped_array_no_init<struct s_block_index_custom_search_definition>::end(void);
// public: struct s_block_index_custom_search_definition & c_array_operator_interface<class c_wrapped_array_no_init<struct s_block_index_custom_search_definition>, struct s_block_index_custom_search_definition>::operator[](long);
// public: c_wrapped_array<struct s_tag_data_definition>::c_wrapped_array<struct s_tag_data_definition>(void);
// public: struct s_tag_data_definition * c_wrapped_array_no_init<struct s_tag_data_definition>::begin(void);
// public: struct s_tag_data_definition * c_wrapped_array_no_init<struct s_tag_data_definition>::end(void);
// public: struct s_tag_data_definition & c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_data_definition>, struct s_tag_data_definition>::operator[](long);
// public: c_wrapped_array<struct s_tag_array_definition>::c_wrapped_array<struct s_tag_array_definition>(void);
// public: struct s_tag_array_definition & c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_array_definition>, struct s_tag_array_definition>::operator[](long);
// public: c_wrapped_array<struct s_tag_field>::c_wrapped_array<struct s_tag_field>(void);
// public: c_wrapped_array<struct s_tag_struct_definition>::c_wrapped_array<struct s_tag_struct_definition>(void);
// public: c_wrapped_array<struct s_tag_block_definition>::c_wrapped_array<struct s_tag_block_definition>(void);
// public: struct s_tag_block_definition & c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_block_definition>, struct s_tag_block_definition>::operator[](long);
// public: c_wrapped_array<struct s_tag_resource_definition>::c_wrapped_array<struct s_tag_resource_definition>(void);
// public: struct s_tag_resource_definition & c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_resource_definition>, struct s_tag_resource_definition>::operator[](long);
// public: c_wrapped_array<struct s_tag_interop_definition>::c_wrapped_array<struct s_tag_interop_definition>(void);
// public: struct s_tag_interop_definition & c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_interop_definition>, struct s_tag_interop_definition>::operator[](long);
// public: c_wrapped_array<struct s_string_list_definition>::c_wrapped_array<struct s_string_list_definition>(void);
// public: long c_wrapped_array_no_init<struct s_string_list_definition>::count(void) const;
// public: struct s_string_list_definition & c_array_operator_interface<class c_wrapped_array_no_init<struct s_string_list_definition>, struct s_string_list_definition>::operator[](long);
// public: c_wrapped_array<struct s_tag_persist_index<0> >::c_wrapped_array<struct s_tag_persist_index<0> >(void);
// public: long c_wrapped_array_no_init<struct s_tag_persist_index<0> >::count(void) const;
// public: struct s_tag_persist_index<0> & c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_persist_index<0> >, struct s_tag_persist_index<0> >::operator[](long);
// public: struct s_tag_persist_index<0> * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_persist_index<0> >, struct s_tag_persist_index<0> >::get_elements(void);
// public: c_wrapped_array<struct s_tag_persist_string_list>::c_wrapped_array<struct s_tag_persist_string_list>(void);
// public: long c_wrapped_array_no_init<struct s_tag_persist_string_list>::count(void) const;
// public: struct s_tag_persist_string_list * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_persist_string_list>, struct s_tag_persist_string_list>::get_elements(void);
// public: c_wrapped_array<struct s_tag_persist_array_definition>::c_wrapped_array<struct s_tag_persist_array_definition>(void);
// public: long c_wrapped_array_no_init<struct s_tag_persist_array_definition>::count(void) const;
// public: struct s_tag_persist_array_definition & c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_persist_array_definition>, struct s_tag_persist_array_definition>::operator[](long);
// public: struct s_tag_persist_array_definition * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_persist_array_definition>, struct s_tag_persist_array_definition>::get_elements(void);
// public: c_wrapped_array<struct s_tag_persist_field>::c_wrapped_array<struct s_tag_persist_field>(void);
// public: long c_wrapped_array_no_init<struct s_tag_persist_field>::count(void) const;
// public: struct s_tag_persist_field * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_persist_field>, struct s_tag_persist_field>::get_elements(void);
// public: c_wrapped_array<struct s_tag_persist_aggregate_prechunk>::c_wrapped_array<struct s_tag_persist_aggregate_prechunk>(void);
// public: long c_wrapped_array_no_init<struct s_tag_persist_aggregate_prechunk>::count(void) const;
// public: struct s_tag_persist_aggregate_prechunk * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_persist_aggregate_prechunk>, struct s_tag_persist_aggregate_prechunk>::get_elements(void);
// public: c_wrapped_array<struct s_tag_persist_struct_definition>::c_wrapped_array<struct s_tag_persist_struct_definition>(void);
// public: long c_wrapped_array_no_init<struct s_tag_persist_struct_definition>::count(void) const;
// public: struct s_tag_persist_struct_definition * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_persist_struct_definition>, struct s_tag_persist_struct_definition>::get_elements(void);
// public: c_wrapped_array<struct s_tag_persist_block_definition>::c_wrapped_array<struct s_tag_persist_block_definition>(void);
// public: long c_wrapped_array_no_init<struct s_tag_persist_block_definition>::count(void) const;
// public: struct s_tag_persist_block_definition * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_persist_block_definition>, struct s_tag_persist_block_definition>::get_elements(void);
// public: c_wrapped_array<struct s_tag_persist_resource_definition>::c_wrapped_array<struct s_tag_persist_resource_definition>(void);
// public: long c_wrapped_array_no_init<struct s_tag_persist_resource_definition>::count(void) const;
// public: struct s_tag_persist_resource_definition * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_persist_resource_definition>, struct s_tag_persist_resource_definition>::get_elements(void);
// public: c_wrapped_array<struct s_tag_persist_interop_definition>::c_wrapped_array<struct s_tag_persist_interop_definition>(void);
// public: long c_wrapped_array_no_init<struct s_tag_persist_interop_definition>::count(void) const;
// public: struct s_tag_persist_interop_definition * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_persist_interop_definition>, struct s_tag_persist_interop_definition>::get_elements(void);
// public: unsigned char * c_wrapped_array_no_init<unsigned char>::begin(void);
// public: unsigned char * c_wrapped_array_no_init<unsigned char>::end(void);
// public: char const *const * s_static_array<char const *, 62>::get_elements(void) const;
// public: static long s_static_array<char const *, 62>::get_count(void);
// public: c_big_flags<62>::c_big_flags<62>(void);
// public: void c_wrapped_array_no_init<struct s_tag_struct_definition>::set_elements(struct s_tag_struct_definition *, long);
// public: void c_wrapped_array_no_init<enum e_tag_field>::set_elements(enum e_tag_field *, long);
// public: enum e_tag_field * c_wrapped_array_no_init<enum e_tag_field>::begin(void);
// public: enum e_tag_field const * c_wrapped_array_no_init<enum e_tag_field>::begin(void) const;
// public: bool c_array_operator_interface<class c_wrapped_array_no_init<enum e_tag_field>, enum e_tag_field>::valid_index(long) const;
// public: class c_wrapped_array_no_init<enum e_tag_field> * c_recursive_template_pattern<class c_wrapped_array_no_init<enum e_tag_field> >::get_super_class(void);
// public: class c_wrapped_array_no_init<enum e_tag_field> const * c_recursive_template_pattern<class c_wrapped_array_no_init<enum e_tag_field> >::get_super_class(void) const;
// public: void c_wrapped_array_no_init<struct s_tag_persist_field_type>::set_elements(struct s_tag_persist_field_type *, long);
// public: struct s_tag_persist_field_type * c_wrapped_array_no_init<struct s_tag_persist_field_type>::begin(void);
// public: struct s_tag_persist_field_type const * c_wrapped_array_no_init<struct s_tag_persist_field_type>::begin(void) const;
// public: struct s_tag_persist_field_type * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_persist_field_type>, struct s_tag_persist_field_type>::begin(void);
// public: bool c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_persist_field_type>, struct s_tag_persist_field_type>::valid_index(long) const;
// public: class c_wrapped_array_no_init<struct s_tag_persist_field_type> * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_persist_field_type> >::get_super_class(void);
// public: class c_wrapped_array_no_init<struct s_tag_persist_field_type> const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_persist_field_type> >::get_super_class(void) const;
// public: void c_wrapped_array_no_init<struct s_block_index_custom_search_definition>::set_elements(struct s_block_index_custom_search_definition *, long);
// public: bool c_array_operator_interface<class c_wrapped_array_no_init<struct s_block_index_custom_search_definition>, struct s_block_index_custom_search_definition>::valid_index(long) const;
// public: class c_wrapped_array_no_init<struct s_block_index_custom_search_definition> * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_block_index_custom_search_definition> >::get_super_class(void);
// public: void c_wrapped_array_no_init<struct s_tag_data_definition>::set_elements(struct s_tag_data_definition *, long);
// public: bool c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_data_definition>, struct s_tag_data_definition>::valid_index(long) const;
// public: class c_wrapped_array_no_init<struct s_tag_data_definition> * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_data_definition> >::get_super_class(void);
// public: void c_wrapped_array_no_init<struct s_tag_array_definition>::set_elements(struct s_tag_array_definition *, long);
// public: struct s_tag_array_definition * c_wrapped_array_no_init<struct s_tag_array_definition>::begin(void);
// public: bool c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_array_definition>, struct s_tag_array_definition>::valid_index(long) const;
// public: class c_wrapped_array_no_init<struct s_tag_array_definition> * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_array_definition> >::get_super_class(void);
// public: void c_wrapped_array_no_init<struct s_tag_block_definition>::set_elements(struct s_tag_block_definition *, long);
// public: struct s_tag_block_definition * c_wrapped_array_no_init<struct s_tag_block_definition>::begin(void);
// public: bool c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_block_definition>, struct s_tag_block_definition>::valid_index(long) const;
// public: class c_wrapped_array_no_init<struct s_tag_block_definition> * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_block_definition> >::get_super_class(void);
// public: void c_wrapped_array_no_init<struct s_tag_resource_definition>::set_elements(struct s_tag_resource_definition *, long);
// public: struct s_tag_resource_definition * c_wrapped_array_no_init<struct s_tag_resource_definition>::begin(void);
// public: bool c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_resource_definition>, struct s_tag_resource_definition>::valid_index(long) const;
// public: class c_wrapped_array_no_init<struct s_tag_resource_definition> * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_resource_definition> >::get_super_class(void);
// public: void c_wrapped_array_no_init<struct s_tag_interop_definition>::set_elements(struct s_tag_interop_definition *, long);
// public: struct s_tag_interop_definition * c_wrapped_array_no_init<struct s_tag_interop_definition>::begin(void);
// public: bool c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_interop_definition>, struct s_tag_interop_definition>::valid_index(long) const;
// public: class c_wrapped_array_no_init<struct s_tag_interop_definition> * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_interop_definition> >::get_super_class(void);
// public: void c_wrapped_array_no_init<struct s_string_list_definition>::set_elements(struct s_string_list_definition *, long);
// public: struct s_string_list_definition * c_wrapped_array_no_init<struct s_string_list_definition>::begin(void);
// public: bool c_array_operator_interface<class c_wrapped_array_no_init<struct s_string_list_definition>, struct s_string_list_definition>::valid_index(long) const;
// public: class c_wrapped_array_no_init<struct s_string_list_definition> * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_string_list_definition> >::get_super_class(void);
// public: void c_wrapped_array_no_init<struct s_tag_persist_index<0> >::set_elements(struct s_tag_persist_index<0> *, long);
// public: struct s_tag_persist_index<0> * c_wrapped_array_no_init<struct s_tag_persist_index<0> >::begin(void);
// public: struct s_tag_persist_index<0> * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_persist_index<0> >, struct s_tag_persist_index<0> >::begin(void);
// public: bool c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_persist_index<0> >, struct s_tag_persist_index<0> >::valid_index(long) const;
// public: class c_wrapped_array_no_init<struct s_tag_persist_index<0> > * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_persist_index<0> > >::get_super_class(void);
// public: void c_wrapped_array_no_init<struct s_tag_persist_string_list>::set_elements(struct s_tag_persist_string_list *, long);
// public: struct s_tag_persist_string_list * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_persist_string_list>, struct s_tag_persist_string_list>::begin(void);
// public: void c_wrapped_array_no_init<struct s_tag_persist_array_definition>::set_elements(struct s_tag_persist_array_definition *, long);
// public: struct s_tag_persist_array_definition * c_wrapped_array_no_init<struct s_tag_persist_array_definition>::begin(void);
// public: struct s_tag_persist_array_definition * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_persist_array_definition>, struct s_tag_persist_array_definition>::begin(void);
// public: bool c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_persist_array_definition>, struct s_tag_persist_array_definition>::valid_index(long) const;
// public: class c_wrapped_array_no_init<struct s_tag_persist_array_definition> * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_persist_array_definition> >::get_super_class(void);
// public: void c_wrapped_array_no_init<struct s_tag_persist_field>::set_elements(struct s_tag_persist_field *, long);
// public: struct s_tag_persist_field * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_persist_field>, struct s_tag_persist_field>::begin(void);
// public: void c_wrapped_array_no_init<struct s_tag_persist_aggregate_prechunk>::set_elements(struct s_tag_persist_aggregate_prechunk *, long);
// public: struct s_tag_persist_aggregate_prechunk * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_persist_aggregate_prechunk>, struct s_tag_persist_aggregate_prechunk>::begin(void);
// public: void c_wrapped_array_no_init<struct s_tag_persist_struct_definition>::set_elements(struct s_tag_persist_struct_definition *, long);
// public: struct s_tag_persist_struct_definition * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_persist_struct_definition>, struct s_tag_persist_struct_definition>::begin(void);
// public: void c_wrapped_array_no_init<struct s_tag_persist_block_definition>::set_elements(struct s_tag_persist_block_definition *, long);
// public: struct s_tag_persist_block_definition * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_persist_block_definition>, struct s_tag_persist_block_definition>::begin(void);
// public: void c_wrapped_array_no_init<struct s_tag_persist_resource_definition>::set_elements(struct s_tag_persist_resource_definition *, long);
// public: struct s_tag_persist_resource_definition * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_persist_resource_definition>, struct s_tag_persist_resource_definition>::begin(void);
// public: void c_wrapped_array_no_init<struct s_tag_persist_interop_definition>::set_elements(struct s_tag_persist_interop_definition *, long);
// public: struct s_tag_persist_interop_definition * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_persist_interop_definition>, struct s_tag_persist_interop_definition>::begin(void);
// public: long c_array_operator_interface<class c_wrapped_array_no_init<enum e_tag_field>, enum e_tag_field>::count(void) const;
// public: long c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_persist_field_type>, struct s_tag_persist_field_type>::count(void) const;
// public: long c_array_operator_interface<class c_wrapped_array_no_init<struct s_block_index_custom_search_definition>, struct s_block_index_custom_search_definition>::count(void) const;
// public: long c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_data_definition>, struct s_tag_data_definition>::count(void) const;
// public: long c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_array_definition>, struct s_tag_array_definition>::count(void) const;
// public: long c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_block_definition>, struct s_tag_block_definition>::count(void) const;
// public: long c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_resource_definition>, struct s_tag_resource_definition>::count(void) const;
// public: long c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_interop_definition>, struct s_tag_interop_definition>::count(void) const;
// public: long c_array_operator_interface<class c_wrapped_array_no_init<struct s_string_list_definition>, struct s_string_list_definition>::count(void) const;
// public: long c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_persist_index<0> >, struct s_tag_persist_index<0> >::count(void) const;
// public: struct s_tag_persist_string_list * c_wrapped_array_no_init<struct s_tag_persist_string_list>::begin(void);
// public: class c_wrapped_array_no_init<struct s_tag_persist_string_list> * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_persist_string_list> >::get_super_class(void);
// public: long c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_persist_array_definition>, struct s_tag_persist_array_definition>::count(void) const;
// public: struct s_tag_persist_field * c_wrapped_array_no_init<struct s_tag_persist_field>::begin(void);
// public: class c_wrapped_array_no_init<struct s_tag_persist_field> * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_persist_field> >::get_super_class(void);
// public: struct s_tag_persist_aggregate_prechunk * c_wrapped_array_no_init<struct s_tag_persist_aggregate_prechunk>::begin(void);
// public: class c_wrapped_array_no_init<struct s_tag_persist_aggregate_prechunk> * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_persist_aggregate_prechunk> >::get_super_class(void);
// public: struct s_tag_persist_struct_definition * c_wrapped_array_no_init<struct s_tag_persist_struct_definition>::begin(void);
// public: class c_wrapped_array_no_init<struct s_tag_persist_struct_definition> * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_persist_struct_definition> >::get_super_class(void);
// public: struct s_tag_persist_block_definition * c_wrapped_array_no_init<struct s_tag_persist_block_definition>::begin(void);
// public: class c_wrapped_array_no_init<struct s_tag_persist_block_definition> * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_persist_block_definition> >::get_super_class(void);
// public: struct s_tag_persist_resource_definition * c_wrapped_array_no_init<struct s_tag_persist_resource_definition>::begin(void);
// public: class c_wrapped_array_no_init<struct s_tag_persist_resource_definition> * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_persist_resource_definition> >::get_super_class(void);
// public: struct s_tag_persist_interop_definition * c_wrapped_array_no_init<struct s_tag_persist_interop_definition>::begin(void);
// public: class c_wrapped_array_no_init<struct s_tag_persist_interop_definition> * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_persist_interop_definition> >::get_super_class(void);
// public: long c_wrapped_array_no_init<struct s_block_index_custom_search_definition>::count(void) const;
// public: class c_wrapped_array_no_init<struct s_block_index_custom_search_definition> const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_block_index_custom_search_definition> >::get_super_class(void) const;
// public: long c_wrapped_array_no_init<struct s_tag_data_definition>::count(void) const;
// public: class c_wrapped_array_no_init<struct s_tag_data_definition> const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_data_definition> >::get_super_class(void) const;
// public: long c_wrapped_array_no_init<struct s_tag_array_definition>::count(void) const;
// public: class c_wrapped_array_no_init<struct s_tag_array_definition> const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_array_definition> >::get_super_class(void) const;
// public: long c_wrapped_array_no_init<struct s_tag_block_definition>::count(void) const;
// public: class c_wrapped_array_no_init<struct s_tag_block_definition> const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_block_definition> >::get_super_class(void) const;
// public: long c_wrapped_array_no_init<struct s_tag_resource_definition>::count(void) const;
// public: class c_wrapped_array_no_init<struct s_tag_resource_definition> const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_resource_definition> >::get_super_class(void) const;
// public: long c_wrapped_array_no_init<struct s_tag_interop_definition>::count(void) const;
// public: class c_wrapped_array_no_init<struct s_tag_interop_definition> const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_interop_definition> >::get_super_class(void) const;
// public: class c_wrapped_array_no_init<struct s_string_list_definition> const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_string_list_definition> >::get_super_class(void) const;
// public: class c_wrapped_array_no_init<struct s_tag_persist_index<0> > const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_persist_index<0> > >::get_super_class(void) const;
// public: class c_wrapped_array_no_init<struct s_tag_persist_array_definition> const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_persist_array_definition> >::get_super_class(void) const;
// public: void c_big_flags_typed_no_init<long, 62>::set_all(void);
// unsigned long get_total_unaligned_raw_size<char>(long);
// public: void c_raw_storage_buffer_iterator::set_wrapped_array<class c_wrapped_array, char>(class c_wrapped_array<char> &, long);
// unsigned long get_total_unaligned_raw_size<struct s_tag_persist_index<1> >(long);
// unsigned long get_total_unaligned_raw_size<char const *>(long);
// public: void c_raw_storage_buffer_iterator::set_wrapped_array<class c_wrapped_array, char const *>(class c_wrapped_array<char const *> &, long);
// public: void c_raw_storage_buffer_iterator::set_wrapped_array<class c_wrapped_array, struct s_tag_persist_index<0> >(class c_wrapped_array<struct s_tag_persist_index<0> > &, long);
// public: bool c_persist_stream::read_typed<struct s_tag_persist_index<0> >(struct s_tag_persist_index<0> *, long);
// unsigned long get_total_unaligned_raw_size<struct s_tag_persist_string_list>(long);
// unsigned long get_total_unaligned_raw_size<struct s_string_list_definition>(long);
// public: void c_raw_storage_buffer_iterator::set_wrapped_array<class c_wrapped_array, struct s_string_list_definition>(class c_wrapped_array<struct s_string_list_definition> &, long);
// public: void c_raw_storage_buffer_iterator::set_wrapped_array<class c_wrapped_array, struct s_tag_persist_string_list>(class c_wrapped_array<struct s_tag_persist_string_list> &, long);
// public: bool c_persist_stream::read_typed<struct s_tag_persist_string_list>(struct s_tag_persist_string_list *, long);
// unsigned long get_total_unaligned_raw_size<struct s_tag_persist_index<6> >(long);
// unsigned long get_total_unaligned_raw_size<struct s_block_index_custom_search_definition>(long);
// public: void c_raw_storage_buffer_iterator::set_wrapped_array<class c_wrapped_array, struct s_block_index_custom_search_definition>(class c_wrapped_array<struct s_block_index_custom_search_definition> &, long);
// void std::fill<struct s_block_index_custom_search_definition *, struct s_block_index_custom_search_definition>(struct s_block_index_custom_search_definition *, struct s_block_index_custom_search_definition *, struct s_block_index_custom_search_definition const &);
// unsigned long get_total_unaligned_raw_size<struct s_tag_persist_index<7> >(long);
// unsigned long get_total_unaligned_raw_size<struct s_tag_data_definition>(long);
// public: void c_raw_storage_buffer_iterator::set_wrapped_array<class c_wrapped_array, struct s_tag_data_definition>(class c_wrapped_array<struct s_tag_data_definition> &, long);
// void std::fill<struct s_tag_data_definition *, struct s_tag_data_definition>(struct s_tag_data_definition *, struct s_tag_data_definition *, struct s_tag_data_definition const &);
// unsigned long get_total_unaligned_raw_size<struct s_tag_persist_index<8> >(long);
// unsigned long get_total_unaligned_raw_size<struct s_tag_array_definition>(long);
// public: void c_raw_storage_buffer_iterator::set_wrapped_array<class c_wrapped_array, struct s_tag_array_definition>(class c_wrapped_array<struct s_tag_array_definition> &, long);
// public: void c_raw_storage_buffer_iterator::set_wrapped_array<class c_wrapped_array, struct s_tag_persist_array_definition>(class c_wrapped_array<struct s_tag_persist_array_definition> &, long);
// public: bool c_persist_stream::read_typed<struct s_tag_persist_array_definition>(struct s_tag_persist_array_definition *, long);
// unsigned long get_total_unaligned_raw_size<enum e_tag_field>(long);
// unsigned long get_total_unaligned_raw_size<struct s_tag_persist_field_type>(long);
// public: void c_raw_storage_buffer_iterator::set_wrapped_array<class c_wrapped_array, enum e_tag_field>(class c_wrapped_array<enum e_tag_field> &, long);
// public: void c_raw_storage_buffer_iterator::set_wrapped_array<class c_wrapped_array, struct s_tag_persist_field_type>(class c_wrapped_array<struct s_tag_persist_field_type> &, long);
// public: bool c_persist_stream::read_typed<struct s_tag_persist_field_type>(struct s_tag_persist_field_type *, long);
// unsigned long get_total_unaligned_raw_size<struct s_tag_persist_field>(long);
// unsigned long get_total_unaligned_raw_size<struct s_tag_field>(long);
// public: void c_raw_storage_buffer_iterator::set_wrapped_array<class c_wrapped_array, struct s_tag_field>(class c_wrapped_array<struct s_tag_field> &, long);
// public: void c_raw_storage_buffer_iterator::set_wrapped_array<class c_wrapped_array, struct s_tag_persist_field>(class c_wrapped_array<struct s_tag_persist_field> &, long);
// public: bool c_persist_stream::read_typed<struct s_tag_persist_field>(struct s_tag_persist_field *, long);
// unsigned long get_total_unaligned_raw_size<struct s_tag_persist_aggregate_prechunk>(long);
// unsigned long get_total_unaligned_raw_size<struct s_tag_struct_definition>(long);
// unsigned long get_total_unaligned_raw_size<struct s_tag_block_definition>(long);
// unsigned long get_total_unaligned_raw_size<struct s_tag_resource_definition>(long);
// public: void c_raw_storage_buffer_iterator::set_wrapped_array<class c_wrapped_array, struct s_tag_struct_definition>(class c_wrapped_array<struct s_tag_struct_definition> &, long);
// public: void c_raw_storage_buffer_iterator::set_wrapped_array<class c_wrapped_array, struct s_tag_block_definition>(class c_wrapped_array<struct s_tag_block_definition> &, long);
// public: void c_raw_storage_buffer_iterator::set_wrapped_array<class c_wrapped_array, struct s_tag_resource_definition>(class c_wrapped_array<struct s_tag_resource_definition> &, long);
// public: void c_raw_storage_buffer_iterator::set_wrapped_array<class c_wrapped_array, struct s_tag_persist_aggregate_prechunk>(class c_wrapped_array<struct s_tag_persist_aggregate_prechunk> &, long);
// public: bool c_persist_stream::read_typed<struct s_tag_persist_aggregate_prechunk>(struct s_tag_persist_aggregate_prechunk *, long);
// unsigned long get_total_unaligned_raw_size<struct s_tag_persist_struct_definition>(long);
// public: void c_raw_storage_buffer_iterator::set_wrapped_array<class c_wrapped_array, struct s_tag_persist_struct_definition>(class c_wrapped_array<struct s_tag_persist_struct_definition> &, long);
// public: bool c_persist_stream::read_typed<struct s_tag_persist_struct_definition>(struct s_tag_persist_struct_definition *, long);
// unsigned long get_total_unaligned_raw_size<struct s_tag_persist_block_definition>(long);
// public: void c_raw_storage_buffer_iterator::set_wrapped_array<class c_wrapped_array, struct s_tag_persist_block_definition>(class c_wrapped_array<struct s_tag_persist_block_definition> &, long);
// public: bool c_persist_stream::read_typed<struct s_tag_persist_block_definition>(struct s_tag_persist_block_definition *, long);
// unsigned long get_total_unaligned_raw_size<struct s_tag_persist_resource_definition>(long);
// public: void c_raw_storage_buffer_iterator::set_wrapped_array<class c_wrapped_array, struct s_tag_persist_resource_definition>(class c_wrapped_array<struct s_tag_persist_resource_definition> &, long);
// public: bool c_persist_stream::read_typed<struct s_tag_persist_resource_definition>(struct s_tag_persist_resource_definition *, long);
// unsigned long get_total_unaligned_raw_size<struct s_tag_persist_interop_definition>(long);
// unsigned long get_total_unaligned_raw_size<struct s_tag_interop_definition>(long);
// public: void c_raw_storage_buffer_iterator::set_wrapped_array<class c_wrapped_array, struct s_tag_interop_definition>(class c_wrapped_array<struct s_tag_interop_definition> &, long);
// public: void c_raw_storage_buffer_iterator::set_wrapped_array<class c_wrapped_array, struct s_tag_persist_interop_definition>(class c_wrapped_array<struct s_tag_persist_interop_definition> &, long);
// public: bool c_persist_stream::read_typed<struct s_tag_persist_interop_definition>(struct s_tag_persist_interop_definition *, long);
// public: char const *& s_static_array<char const *, 62>::operator[]<long>(long);
// public: c_big_flags_typed<long, 62>::c_big_flags_typed<long, 62>(void);
// char const *const * std::find<char const *const *, char const *>(char const *const *, char const *const *, char const *const &);
// public: char * c_raw_storage_buffer_iterator::get_array_elements<char>(long);
// public: char const ** c_raw_storage_buffer_iterator::get_array_elements<char const *>(long);
// public: struct s_tag_persist_index<0> * c_raw_storage_buffer_iterator::get_array_elements<struct s_tag_persist_index<0> >(long);
// public: struct s_string_list_definition * c_raw_storage_buffer_iterator::get_array_elements<struct s_string_list_definition>(long);
// public: struct s_tag_persist_string_list * c_raw_storage_buffer_iterator::get_array_elements<struct s_tag_persist_string_list>(long);
// public: struct s_block_index_custom_search_definition * c_raw_storage_buffer_iterator::get_array_elements<struct s_block_index_custom_search_definition>(long);
// struct s_block_index_custom_search_definition * std::_Checked_base<struct s_block_index_custom_search_definition *>(struct s_block_index_custom_search_definition *&);
// void std::_Fill<struct s_block_index_custom_search_definition *, struct s_block_index_custom_search_definition>(struct s_block_index_custom_search_definition *, struct s_block_index_custom_search_definition *, struct s_block_index_custom_search_definition const &);
// public: struct s_tag_data_definition * c_raw_storage_buffer_iterator::get_array_elements<struct s_tag_data_definition>(long);
// struct s_tag_data_definition * std::_Checked_base<struct s_tag_data_definition *>(struct s_tag_data_definition *&);
// void std::_Fill<struct s_tag_data_definition *, struct s_tag_data_definition>(struct s_tag_data_definition *, struct s_tag_data_definition *, struct s_tag_data_definition const &);
// public: struct s_tag_array_definition * c_raw_storage_buffer_iterator::get_array_elements<struct s_tag_array_definition>(long);
// public: struct s_tag_persist_array_definition * c_raw_storage_buffer_iterator::get_array_elements<struct s_tag_persist_array_definition>(long);
// public: enum e_tag_field * c_raw_storage_buffer_iterator::get_array_elements<enum e_tag_field>(long);
// public: struct s_tag_persist_field_type * c_raw_storage_buffer_iterator::get_array_elements<struct s_tag_persist_field_type>(long);
// public: struct s_tag_field * c_raw_storage_buffer_iterator::get_array_elements<struct s_tag_field>(long);
// public: struct s_tag_persist_field * c_raw_storage_buffer_iterator::get_array_elements<struct s_tag_persist_field>(long);
// public: struct s_tag_struct_definition * c_raw_storage_buffer_iterator::get_array_elements<struct s_tag_struct_definition>(long);
// public: struct s_tag_block_definition * c_raw_storage_buffer_iterator::get_array_elements<struct s_tag_block_definition>(long);
// public: struct s_tag_resource_definition * c_raw_storage_buffer_iterator::get_array_elements<struct s_tag_resource_definition>(long);
// public: struct s_tag_persist_aggregate_prechunk * c_raw_storage_buffer_iterator::get_array_elements<struct s_tag_persist_aggregate_prechunk>(long);
// public: struct s_tag_persist_struct_definition * c_raw_storage_buffer_iterator::get_array_elements<struct s_tag_persist_struct_definition>(long);
// public: struct s_tag_persist_block_definition * c_raw_storage_buffer_iterator::get_array_elements<struct s_tag_persist_block_definition>(long);
// public: struct s_tag_persist_resource_definition * c_raw_storage_buffer_iterator::get_array_elements<struct s_tag_persist_resource_definition>(long);
// public: struct s_tag_interop_definition * c_raw_storage_buffer_iterator::get_array_elements<struct s_tag_interop_definition>(long);
// public: struct s_tag_persist_interop_definition * c_raw_storage_buffer_iterator::get_array_elements<struct s_tag_persist_interop_definition>(long);
// public: static bool s_static_array<char const *, 62>::valid<long>(long);
// char const *const * std::_Checked_base<char const *const *>(char const *const *&);
// char const *const * std::_Find<char const *const *, char const *>(char const *const *, char const *const *, char const *const &);
// void std::_Checked_assign_from_base<char const *const *>(char const *const *&, char const *const *const &);
// struct s_block_index_custom_search_definition * std::_Checked_base<struct s_block_index_custom_search_definition *>(struct s_block_index_custom_search_definition *&, struct std::_Unchanged_checked_iterator_base_type_tag);
// void std::_Debug_range<struct s_block_index_custom_search_definition *>(struct s_block_index_custom_search_definition *, struct s_block_index_custom_search_definition *, wchar_t const *, unsigned int);
// struct s_tag_data_definition * std::_Checked_base<struct s_tag_data_definition *>(struct s_tag_data_definition *&, struct std::_Unchanged_checked_iterator_base_type_tag);
// void std::_Debug_range<struct s_tag_data_definition *>(struct s_tag_data_definition *, struct s_tag_data_definition *, wchar_t const *, unsigned int);
// char const *const * std::_Checked_base<char const *const *>(char const *const *&, struct std::_Unchanged_checked_iterator_base_type_tag);
// void std::_Debug_range<char const *const *>(char const *const *, char const *const *, wchar_t const *, unsigned int);
// struct std::random_access_iterator_tag std::_Iter_cat<struct s_block_index_custom_search_definition *>(struct s_block_index_custom_search_definition *const &);
// void std::_Debug_range2<struct s_block_index_custom_search_definition *>(struct s_block_index_custom_search_definition *, struct s_block_index_custom_search_definition *, wchar_t const *, unsigned int, struct std::random_access_iterator_tag);
// struct std::random_access_iterator_tag std::_Iter_cat<struct s_tag_data_definition *>(struct s_tag_data_definition *const &);
// void std::_Debug_range2<struct s_tag_data_definition *>(struct s_tag_data_definition *, struct s_tag_data_definition *, wchar_t const *, unsigned int, struct std::random_access_iterator_tag);
// struct std::random_access_iterator_tag std::_Iter_cat<char const *const *>(char const *const *const &);
// void std::_Debug_range2<char const *const *>(char const *const *, char const *const *, wchar_t const *, unsigned int, struct std::random_access_iterator_tag);
// void std::_Debug_pointer<struct s_block_index_custom_search_definition>(struct s_block_index_custom_search_definition *, wchar_t const *, unsigned int);
// void std::_Debug_pointer<struct s_tag_data_definition>(struct s_tag_data_definition *, wchar_t const *, unsigned int);
// void std::_Debug_pointer<char const *>(char const *const *, wchar_t const *, unsigned int);

//public: c_tag_layout_rebuilder::c_tag_layout_rebuilder(enum e_tag_persist_layout_version, class c_tag_persist_layout_versioned_header const *)
//{
//    mangled_ppc("??0c_tag_layout_rebuilder@@QAA@W4e_tag_persist_layout_version@@PBVc_tag_persist_layout_versioned_header@@@Z");
//};

//public: c_raw_storage_buffer_iterator::c_raw_storage_buffer_iterator(void)
//{
//    mangled_ppc("??0c_raw_storage_buffer_iterator@@QAA@XZ");
//};

//public: void c_tag_layout_rebuilder::add_scoped_temporary_storage(unsigned long)
//{
//    mangled_ppc("?add_scoped_temporary_storage@c_tag_layout_rebuilder@@QAAXK@Z");
//};

//public: void c_tag_layout_rebuilder::add_persistent_temporary_storage(unsigned long)
//{
//    mangled_ppc("?add_persistent_temporary_storage@c_tag_layout_rebuilder@@QAAXK@Z");
//};

//public: void c_tag_layout_rebuilder::add_permanent_storage(unsigned long)
//{
//    mangled_ppc("?add_permanent_storage@c_tag_layout_rebuilder@@QAAXK@Z");
//};

//public: bool c_tag_layout_rebuilder::calculate_strings_size(void)
//{
//    mangled_ppc("?calculate_strings_size@c_tag_layout_rebuilder@@QAA_NXZ");
//};

//public: bool c_tag_layout_rebuilder::initialize_strings(void)
//{
//    mangled_ppc("?initialize_strings@c_tag_layout_rebuilder@@QAA_NXZ");
//};

//public: bool c_tag_layout_rebuilder::load_string_characters(class c_persist_stream *)
//{
//    mangled_ppc("?load_string_characters@c_tag_layout_rebuilder@@QAA_NPAVc_persist_stream@@@Z");
//};

//public: bool c_tag_layout_rebuilder::calculate_string_list_indices_sizes(void)
//{
//    mangled_ppc("?calculate_string_list_indices_sizes@c_tag_layout_rebuilder@@QAA_NXZ");
//};

//public: bool c_tag_layout_rebuilder::initialize_string_list_indices(void)
//{
//    mangled_ppc("?initialize_string_list_indices@c_tag_layout_rebuilder@@QAA_NXZ");
//};

//public: bool c_tag_layout_rebuilder::load_string_list_indices(class c_persist_stream *)
//{
//    mangled_ppc("?load_string_list_indices@c_tag_layout_rebuilder@@QAA_NPAVc_persist_stream@@@Z");
//};

//public: bool c_tag_layout_rebuilder::calculate_string_lists_sizes(void)
//{
//    mangled_ppc("?calculate_string_lists_sizes@c_tag_layout_rebuilder@@QAA_NXZ");
//};

//public: bool c_tag_layout_rebuilder::initialize_string_lists(void)
//{
//    mangled_ppc("?initialize_string_lists@c_tag_layout_rebuilder@@QAA_NXZ");
//};

//public: bool c_tag_layout_rebuilder::load_string_lists(class c_persist_stream *)
//{
//    mangled_ppc("?load_string_lists@c_tag_layout_rebuilder@@QAA_NPAVc_persist_stream@@@Z");
//};

//public: bool c_tag_layout_rebuilder::calculate_custom_search_definitions_sizes(void)
//{
//    mangled_ppc("?calculate_custom_search_definitions_sizes@c_tag_layout_rebuilder@@QAA_NXZ");
//};

//public: bool c_tag_layout_rebuilder::initialize_custom_search_defintions(void)
//{
//    mangled_ppc("?initialize_custom_search_defintions@c_tag_layout_rebuilder@@QAA_NXZ");
//};

//public: bool c_tag_layout_rebuilder::load_custom_search_definitions(class c_persist_stream *)
//{
//    mangled_ppc("?load_custom_search_definitions@c_tag_layout_rebuilder@@QAA_NPAVc_persist_stream@@@Z");
//};

//public: bool c_tag_layout_rebuilder::calculate_data_definitions_sizes(void)
//{
//    mangled_ppc("?calculate_data_definitions_sizes@c_tag_layout_rebuilder@@QAA_NXZ");
//};

//public: bool c_tag_layout_rebuilder::initialize_data_definitions(void)
//{
//    mangled_ppc("?initialize_data_definitions@c_tag_layout_rebuilder@@QAA_NXZ");
//};

//public: bool c_tag_layout_rebuilder::load_data_definitions(class c_persist_stream *)
//{
//    mangled_ppc("?load_data_definitions@c_tag_layout_rebuilder@@QAA_NPAVc_persist_stream@@@Z");
//};

//public: bool c_tag_layout_rebuilder::calculate_array_definitions_sizes(void)
//{
//    mangled_ppc("?calculate_array_definitions_sizes@c_tag_layout_rebuilder@@QAA_NXZ");
//};

//public: bool c_tag_layout_rebuilder::initialize_array_definitions(void)
//{
//    mangled_ppc("?initialize_array_definitions@c_tag_layout_rebuilder@@QAA_NXZ");
//};

//public: bool c_tag_layout_rebuilder::load_array_definitions(class c_persist_stream *)
//{
//    mangled_ppc("?load_array_definitions@c_tag_layout_rebuilder@@QAA_NPAVc_persist_stream@@@Z");
//};

//public: bool c_tag_layout_rebuilder::calculate_field_types_sizes(void)
//{
//    mangled_ppc("?calculate_field_types_sizes@c_tag_layout_rebuilder@@QAA_NXZ");
//};

//public: bool c_tag_layout_rebuilder::initialize_field_types(void)
//{
//    mangled_ppc("?initialize_field_types@c_tag_layout_rebuilder@@QAA_NXZ");
//};

//public: bool c_tag_layout_rebuilder::load_field_types(class c_persist_stream *)
//{
//    mangled_ppc("?load_field_types@c_tag_layout_rebuilder@@QAA_NPAVc_persist_stream@@@Z");
//};

//public: bool c_tag_layout_rebuilder::calculate_fields_sizes(void)
//{
//    mangled_ppc("?calculate_fields_sizes@c_tag_layout_rebuilder@@QAA_NXZ");
//};

//public: bool c_tag_layout_rebuilder::initialize_fields(void)
//{
//    mangled_ppc("?initialize_fields@c_tag_layout_rebuilder@@QAA_NXZ");
//};

//public: bool c_tag_layout_rebuilder::load_fields(class c_persist_stream *)
//{
//    mangled_ppc("?load_fields@c_tag_layout_rebuilder@@QAA_NPAVc_persist_stream@@@Z");
//};

//public: bool c_tag_layout_rebuilder::calculate_aggregates_sizes_prechunk(void)
//{
//    mangled_ppc("?calculate_aggregates_sizes_prechunk@c_tag_layout_rebuilder@@QAA_NXZ");
//};

//public: bool c_tag_layout_rebuilder::initialize_aggregates_prechunk(void)
//{
//    mangled_ppc("?initialize_aggregates_prechunk@c_tag_layout_rebuilder@@QAA_NXZ");
//};

//public: bool c_tag_layout_rebuilder::load_aggregates_prechunk(class c_persist_stream *)
//{
//    mangled_ppc("?load_aggregates_prechunk@c_tag_layout_rebuilder@@QAA_NPAVc_persist_stream@@@Z");
//};

//public: bool c_tag_layout_rebuilder::calculate_struct_definitions_sizes_v2(void)
//{
//    mangled_ppc("?calculate_struct_definitions_sizes_v2@c_tag_layout_rebuilder@@QAA_NXZ");
//};

//public: bool c_tag_layout_rebuilder::initialize_struct_definitions_v2(void)
//{
//    mangled_ppc("?initialize_struct_definitions_v2@c_tag_layout_rebuilder@@QAA_NXZ");
//};

//public: bool c_tag_layout_rebuilder::load_struct_definitions_v2(class c_persist_stream *)
//{
//    mangled_ppc("?load_struct_definitions_v2@c_tag_layout_rebuilder@@QAA_NPAVc_persist_stream@@@Z");
//};

//public: bool c_tag_layout_rebuilder::calculate_block_definitions_sizes_v2(void)
//{
//    mangled_ppc("?calculate_block_definitions_sizes_v2@c_tag_layout_rebuilder@@QAA_NXZ");
//};

//public: bool c_tag_layout_rebuilder::initialize_block_definitions_v2(void)
//{
//    mangled_ppc("?initialize_block_definitions_v2@c_tag_layout_rebuilder@@QAA_NXZ");
//};

//public: bool c_tag_layout_rebuilder::load_block_definitions_v2(class c_persist_stream *)
//{
//    mangled_ppc("?load_block_definitions_v2@c_tag_layout_rebuilder@@QAA_NPAVc_persist_stream@@@Z");
//};

//public: bool c_tag_layout_rebuilder::calculate_resource_definitions_sizes_v2(void)
//{
//    mangled_ppc("?calculate_resource_definitions_sizes_v2@c_tag_layout_rebuilder@@QAA_NXZ");
//};

//public: bool c_tag_layout_rebuilder::initialize_resource_definitions_v2(void)
//{
//    mangled_ppc("?initialize_resource_definitions_v2@c_tag_layout_rebuilder@@QAA_NXZ");
//};

//public: bool c_tag_layout_rebuilder::load_resource_definitions_v2(class c_persist_stream *)
//{
//    mangled_ppc("?load_resource_definitions_v2@c_tag_layout_rebuilder@@QAA_NPAVc_persist_stream@@@Z");
//};

//public: bool c_tag_layout_rebuilder::calculate_interop_definitions_sizes(void)
//{
//    mangled_ppc("?calculate_interop_definitions_sizes@c_tag_layout_rebuilder@@QAA_NXZ");
//};

//public: bool c_tag_layout_rebuilder::initialize_interop_definitions(void)
//{
//    mangled_ppc("?initialize_interop_definitions@c_tag_layout_rebuilder@@QAA_NXZ");
//};

//public: bool c_tag_layout_rebuilder::load_interop_definitions(class c_persist_stream *)
//{
//    mangled_ppc("?load_interop_definitions@c_tag_layout_rebuilder@@QAA_NPAVc_persist_stream@@@Z");
//};

//public: unsigned long c_tag_layout_rebuilder::get_temporary_storage_size(void)
//{
//    mangled_ppc("?get_temporary_storage_size@c_tag_layout_rebuilder@@QAAKXZ");
//};

//public: unsigned long c_tag_layout_rebuilder::get_permanent_storage_size(void)
//{
//    mangled_ppc("?get_permanent_storage_size@c_tag_layout_rebuilder@@QAAKXZ");
//};

//public: bool c_tag_layout_rebuilder::dont_know_dont_care_but_dont_call(void)
//{
//    mangled_ppc("?dont_know_dont_care_but_dont_call@c_tag_layout_rebuilder@@QAA_NXZ");
//};

//public: void c_tag_layout_rebuilder::initialize_storage(class c_wrapped_array<unsigned char> &, class c_wrapped_array<unsigned char> &)
//{
//    mangled_ppc("?initialize_storage@c_tag_layout_rebuilder@@QAAXAAV?$c_wrapped_array@E@@0@Z");
//};

//public: void c_raw_storage_buffer_iterator::initialize(void *, void *)
//{
//    mangled_ppc("?initialize@c_raw_storage_buffer_iterator@@QAAXPAX0@Z");
//};

//public: struct s_tag_block_definition * c_tag_layout_rebuilder::get_root_block_definition(void)
//{
//    mangled_ppc("?get_root_block_definition@c_tag_layout_rebuilder@@QAAPAUs_tag_block_definition@@XZ");
//};

//public: class c_wrapped_array<struct s_tag_struct_definition> & c_tag_layout_rebuilder::get_struct_definitions(void)
//{
//    mangled_ppc("?get_struct_definitions@c_tag_layout_rebuilder@@QAAAAV?$c_wrapped_array@Us_tag_struct_definition@@@@XZ");
//};

//public: class c_wrapped_array<struct s_tag_field> & c_tag_layout_rebuilder::get_all_fields(void)
//{
//    mangled_ppc("?get_all_fields@c_tag_layout_rebuilder@@QAAAAV?$c_wrapped_array@Us_tag_field@@@@XZ");
//};

//public: void c_tag_layout_rebuilder::get_character_storage(class c_wrapped_array_no_init<char const> *) const
//{
//    mangled_ppc("?get_character_storage@c_tag_layout_rebuilder@@QBAXPAV?$c_wrapped_array_no_init@$$CBD@@@Z");
//};

//public: unsigned long c_tag_layout_rebuilder::calculate_layout_checksum(void) const
//{
//    mangled_ppc("?calculate_layout_checksum@c_tag_layout_rebuilder@@QBAKXZ");
//};

//private: void c_tag_layout_rebuilder::build_code_field_name_to_persisted_field_name_map(class s_static_array<char const *, 62> *) const
//{
//    mangled_ppc("?build_code_field_name_to_persisted_field_name_map@c_tag_layout_rebuilder@@ABAXPAV?$s_static_array@PBD$0DO@@@@Z");
//};

//private: void c_tag_layout_rebuilder::match_persisted_types_to_code_types(class s_static_array<char const *, 62> const &)
//{
//    mangled_ppc("?match_persisted_types_to_code_types@c_tag_layout_rebuilder@@AAAXABV?$s_static_array@PBD$0DO@@@@Z");
//};

//private: void c_tag_layout_rebuilder::build_field_types(void)
//{
//    mangled_ppc("?build_field_types@c_tag_layout_rebuilder@@AAAXXZ");
//};

//private: void c_tag_layout_rebuilder::build_fields(struct s_tag_persist_field const *, long)
//{
//    mangled_ppc("?build_fields@c_tag_layout_rebuilder@@AAAXPBUs_tag_persist_field@@J@Z");
//};

//private: void c_tag_layout_rebuilder::build_aggregates_prechunk(struct s_tag_persist_aggregate_prechunk const *, long)
//{
//    mangled_ppc("?build_aggregates_prechunk@c_tag_layout_rebuilder@@AAAXPBUs_tag_persist_aggregate_prechunk@@J@Z");
//};

//private: void c_tag_layout_rebuilder::build_string_lists(struct s_tag_persist_string_list const *, long)
//{
//    mangled_ppc("?build_string_lists@c_tag_layout_rebuilder@@AAAXPBUs_tag_persist_string_list@@J@Z");
//};

//private: void c_tag_layout_rebuilder::build_struct_definitions(struct s_tag_persist_struct_definition const *, long)
//{
//    mangled_ppc("?build_struct_definitions@c_tag_layout_rebuilder@@AAAXPBUs_tag_persist_struct_definition@@J@Z");
//};

//private: void c_tag_layout_rebuilder::build_block_definitions(struct s_tag_persist_block_definition const *, long)
//{
//    mangled_ppc("?build_block_definitions@c_tag_layout_rebuilder@@AAAXPBUs_tag_persist_block_definition@@J@Z");
//};

//private: void c_tag_layout_rebuilder::build_resource_definitions(struct s_tag_persist_resource_definition const *, long)
//{
//    mangled_ppc("?build_resource_definitions@c_tag_layout_rebuilder@@AAAXPBUs_tag_persist_resource_definition@@J@Z");
//};

//private: void c_tag_layout_rebuilder::build_interop_definitions(struct s_tag_persist_interop_definition const *, long)
//{
//    mangled_ppc("?build_interop_definitions@c_tag_layout_rebuilder@@AAAXPBUs_tag_persist_interop_definition@@J@Z");
//};

//private: long c_tag_layout_rebuilder::get_tag_field_list_size(struct s_tag_struct_definition *)
//{
//    mangled_ppc("?get_tag_field_list_size@c_tag_layout_rebuilder@@AAAJPAUs_tag_struct_definition@@@Z");
//};

//private: struct s_tag_field * c_tag_layout_rebuilder::get_mutable_fields(struct s_tag_struct_definition *)
//{
//    mangled_ppc("?get_mutable_fields@c_tag_layout_rebuilder@@AAAPAUs_tag_field@@PAUs_tag_struct_definition@@@Z");
//};

//private: char const * c_tag_layout_rebuilder::get_string(struct s_tag_persist_index<0>) const
//{
//    mangled_ppc("?get_string@c_tag_layout_rebuilder@@ABAPBDU?$s_tag_persist_index@$0A@@@@Z");
//};

//private: enum e_tag_field c_tag_layout_rebuilder::get_field_type(struct s_tag_persist_index<3>) const
//{
//    mangled_ppc("?get_field_type@c_tag_layout_rebuilder@@ABA?AW4e_tag_field@@U?$s_tag_persist_index@$02@@@Z");
//};

//private: void * c_tag_layout_rebuilder::get_field_definition(struct s_tag_persist_field const *)
//{
//    mangled_ppc("?get_field_definition@c_tag_layout_rebuilder@@AAAPAXPBUs_tag_persist_field@@@Z");
//};

//private: struct s_tag_field * c_tag_layout_rebuilder::get_fields(struct s_tag_persist_index<5>)
//{
//    mangled_ppc("?get_fields@c_tag_layout_rebuilder@@AAAPAUs_tag_field@@U?$s_tag_persist_index@$04@@@Z");
//};

//private: char const ** c_tag_layout_rebuilder::get_string_array(struct s_tag_persist_index<1>, long)
//{
//    mangled_ppc("?get_string_array@c_tag_layout_rebuilder@@AAAPAPBDU?$s_tag_persist_index@$00@@J@Z");
//};

//public: long s_tag_persist_index<0>::get_raw_index(void) const
//{
//    mangled_ppc("?get_raw_index@?$s_tag_persist_index@$0A@@@QBAJXZ");
//};

//public: long s_tag_persist_index<1>::get_raw_index(void) const
//{
//    mangled_ppc("?get_raw_index@?$s_tag_persist_index@$00@@QBAJXZ");
//};

//public: long s_tag_persist_index<5>::get_raw_index(void) const
//{
//    mangled_ppc("?get_raw_index@?$s_tag_persist_index@$04@@QBAJXZ");
//};

//public: struct s_tag_struct_definition * c_wrapped_array_no_init<struct s_tag_struct_definition>::end(void)
//{
//    mangled_ppc("?end@?$c_wrapped_array_no_init@Us_tag_struct_definition@@@@QAAPAUs_tag_struct_definition@@XZ");
//};

//public: struct s_tag_field const * c_wrapped_array_no_init<struct s_tag_field>::begin(void) const
//{
//    mangled_ppc("?begin@?$c_wrapped_array_no_init@Us_tag_field@@@@QBAPBUs_tag_field@@XZ");
//};

//public: struct s_tag_field const * c_wrapped_array_no_init<struct s_tag_field>::end(void) const
//{
//    mangled_ppc("?end@?$c_wrapped_array_no_init@Us_tag_field@@@@QBAPBUs_tag_field@@XZ");
//};

//public: c_wrapped_array<enum e_tag_field>::c_wrapped_array<enum e_tag_field>(void)
//{
//    mangled_ppc("??0?$c_wrapped_array@W4e_tag_field@@@@QAA@XZ");
//};

//public: long c_wrapped_array_no_init<enum e_tag_field>::count(void) const
//{
//    mangled_ppc("?count@?$c_wrapped_array_no_init@W4e_tag_field@@@@QBAJXZ");
//};

//public: enum e_tag_field & c_array_operator_interface<class c_wrapped_array_no_init<enum e_tag_field>, enum e_tag_field>::operator[](long)
//{
//    mangled_ppc("??A?$c_array_operator_interface@V?$c_wrapped_array_no_init@W4e_tag_field@@@@W4e_tag_field@@@@QAAAAW4e_tag_field@@J@Z");
//};

//public: enum e_tag_field const & c_array_operator_interface<class c_wrapped_array_no_init<enum e_tag_field>, enum e_tag_field>::operator[](long) const
//{
//    mangled_ppc("??A?$c_array_operator_interface@V?$c_wrapped_array_no_init@W4e_tag_field@@@@W4e_tag_field@@@@QBAABW4e_tag_field@@J@Z");
//};

//public: c_wrapped_array<struct s_tag_persist_field_type>::c_wrapped_array<struct s_tag_persist_field_type>(void)
//{
//    mangled_ppc("??0?$c_wrapped_array@Us_tag_persist_field_type@@@@QAA@XZ");
//};

//public: long c_wrapped_array_no_init<struct s_tag_persist_field_type>::count(void) const
//{
//    mangled_ppc("?count@?$c_wrapped_array_no_init@Us_tag_persist_field_type@@@@QBAJXZ");
//};

//public: struct s_tag_persist_field_type & c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_persist_field_type>, struct s_tag_persist_field_type>::operator[](long)
//{
//    mangled_ppc("??A?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_tag_persist_field_type@@@@Us_tag_persist_field_type@@@@QAAAAUs_tag_persist_field_type@@J@Z");
//};

//public: struct s_tag_persist_field_type const & c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_persist_field_type>, struct s_tag_persist_field_type>::operator[](long) const
//{
//    mangled_ppc("??A?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_tag_persist_field_type@@@@Us_tag_persist_field_type@@@@QBAABUs_tag_persist_field_type@@J@Z");
//};

//public: struct s_tag_persist_field_type * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_persist_field_type>, struct s_tag_persist_field_type>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_tag_persist_field_type@@@@Us_tag_persist_field_type@@@@QAAPAUs_tag_persist_field_type@@XZ");
//};

//public: c_wrapped_array<char>::c_wrapped_array<char>(void)
//{
//    mangled_ppc("??0?$c_wrapped_array@D@@QAA@XZ");
//};

//public: char const & c_array_operator_interface<class c_wrapped_array_no_init<char>, char>::operator[](long) const
//{
//    mangled_ppc("??A?$c_array_operator_interface@V?$c_wrapped_array_no_init@D@@D@@QBAABDJ@Z");
//};

//public: c_wrapped_array<struct s_block_index_custom_search_definition>::c_wrapped_array<struct s_block_index_custom_search_definition>(void)
//{
//    mangled_ppc("??0?$c_wrapped_array@Us_block_index_custom_search_definition@@@@QAA@XZ");
//};

//public: struct s_block_index_custom_search_definition * c_wrapped_array_no_init<struct s_block_index_custom_search_definition>::begin(void)
//{
//    mangled_ppc("?begin@?$c_wrapped_array_no_init@Us_block_index_custom_search_definition@@@@QAAPAUs_block_index_custom_search_definition@@XZ");
//};

//public: struct s_block_index_custom_search_definition * c_wrapped_array_no_init<struct s_block_index_custom_search_definition>::end(void)
//{
//    mangled_ppc("?end@?$c_wrapped_array_no_init@Us_block_index_custom_search_definition@@@@QAAPAUs_block_index_custom_search_definition@@XZ");
//};

//public: struct s_block_index_custom_search_definition & c_array_operator_interface<class c_wrapped_array_no_init<struct s_block_index_custom_search_definition>, struct s_block_index_custom_search_definition>::operator[](long)
//{
//    mangled_ppc("??A?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_block_index_custom_search_definition@@@@Us_block_index_custom_search_definition@@@@QAAAAUs_block_index_custom_search_definition@@J@Z");
//};

//public: c_wrapped_array<struct s_tag_data_definition>::c_wrapped_array<struct s_tag_data_definition>(void)
//{
//    mangled_ppc("??0?$c_wrapped_array@Us_tag_data_definition@@@@QAA@XZ");
//};

//public: struct s_tag_data_definition * c_wrapped_array_no_init<struct s_tag_data_definition>::begin(void)
//{
//    mangled_ppc("?begin@?$c_wrapped_array_no_init@Us_tag_data_definition@@@@QAAPAUs_tag_data_definition@@XZ");
//};

//public: struct s_tag_data_definition * c_wrapped_array_no_init<struct s_tag_data_definition>::end(void)
//{
//    mangled_ppc("?end@?$c_wrapped_array_no_init@Us_tag_data_definition@@@@QAAPAUs_tag_data_definition@@XZ");
//};

//public: struct s_tag_data_definition & c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_data_definition>, struct s_tag_data_definition>::operator[](long)
//{
//    mangled_ppc("??A?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_tag_data_definition@@@@Us_tag_data_definition@@@@QAAAAUs_tag_data_definition@@J@Z");
//};

//public: c_wrapped_array<struct s_tag_array_definition>::c_wrapped_array<struct s_tag_array_definition>(void)
//{
//    mangled_ppc("??0?$c_wrapped_array@Us_tag_array_definition@@@@QAA@XZ");
//};

//public: struct s_tag_array_definition & c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_array_definition>, struct s_tag_array_definition>::operator[](long)
//{
//    mangled_ppc("??A?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_tag_array_definition@@@@Us_tag_array_definition@@@@QAAAAUs_tag_array_definition@@J@Z");
//};

//public: c_wrapped_array<struct s_tag_field>::c_wrapped_array<struct s_tag_field>(void)
//{
//    mangled_ppc("??0?$c_wrapped_array@Us_tag_field@@@@QAA@XZ");
//};

//public: c_wrapped_array<struct s_tag_struct_definition>::c_wrapped_array<struct s_tag_struct_definition>(void)
//{
//    mangled_ppc("??0?$c_wrapped_array@Us_tag_struct_definition@@@@QAA@XZ");
//};

//public: c_wrapped_array<struct s_tag_block_definition>::c_wrapped_array<struct s_tag_block_definition>(void)
//{
//    mangled_ppc("??0?$c_wrapped_array@Us_tag_block_definition@@@@QAA@XZ");
//};

//public: struct s_tag_block_definition & c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_block_definition>, struct s_tag_block_definition>::operator[](long)
//{
//    mangled_ppc("??A?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_tag_block_definition@@@@Us_tag_block_definition@@@@QAAAAUs_tag_block_definition@@J@Z");
//};

//public: c_wrapped_array<struct s_tag_resource_definition>::c_wrapped_array<struct s_tag_resource_definition>(void)
//{
//    mangled_ppc("??0?$c_wrapped_array@Us_tag_resource_definition@@@@QAA@XZ");
//};

//public: struct s_tag_resource_definition & c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_resource_definition>, struct s_tag_resource_definition>::operator[](long)
//{
//    mangled_ppc("??A?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_tag_resource_definition@@@@Us_tag_resource_definition@@@@QAAAAUs_tag_resource_definition@@J@Z");
//};

//public: c_wrapped_array<struct s_tag_interop_definition>::c_wrapped_array<struct s_tag_interop_definition>(void)
//{
//    mangled_ppc("??0?$c_wrapped_array@Us_tag_interop_definition@@@@QAA@XZ");
//};

//public: struct s_tag_interop_definition & c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_interop_definition>, struct s_tag_interop_definition>::operator[](long)
//{
//    mangled_ppc("??A?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_tag_interop_definition@@@@Us_tag_interop_definition@@@@QAAAAUs_tag_interop_definition@@J@Z");
//};

//public: c_wrapped_array<struct s_string_list_definition>::c_wrapped_array<struct s_string_list_definition>(void)
//{
//    mangled_ppc("??0?$c_wrapped_array@Us_string_list_definition@@@@QAA@XZ");
//};

//public: long c_wrapped_array_no_init<struct s_string_list_definition>::count(void) const
//{
//    mangled_ppc("?count@?$c_wrapped_array_no_init@Us_string_list_definition@@@@QBAJXZ");
//};

//public: struct s_string_list_definition & c_array_operator_interface<class c_wrapped_array_no_init<struct s_string_list_definition>, struct s_string_list_definition>::operator[](long)
//{
//    mangled_ppc("??A?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_string_list_definition@@@@Us_string_list_definition@@@@QAAAAUs_string_list_definition@@J@Z");
//};

//public: c_wrapped_array<struct s_tag_persist_index<0> >::c_wrapped_array<struct s_tag_persist_index<0> >(void)
//{
//    mangled_ppc("??0?$c_wrapped_array@U?$s_tag_persist_index@$0A@@@@@QAA@XZ");
//};

//public: long c_wrapped_array_no_init<struct s_tag_persist_index<0> >::count(void) const
//{
//    mangled_ppc("?count@?$c_wrapped_array_no_init@U?$s_tag_persist_index@$0A@@@@@QBAJXZ");
//};

//public: struct s_tag_persist_index<0> & c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_persist_index<0> >, struct s_tag_persist_index<0> >::operator[](long)
//{
//    mangled_ppc("??A?$c_array_operator_interface@V?$c_wrapped_array_no_init@U?$s_tag_persist_index@$0A@@@@@U?$s_tag_persist_index@$0A@@@@@QAAAAU?$s_tag_persist_index@$0A@@@J@Z");
//};

//public: struct s_tag_persist_index<0> * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_persist_index<0> >, struct s_tag_persist_index<0> >::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$c_array_operator_interface@V?$c_wrapped_array_no_init@U?$s_tag_persist_index@$0A@@@@@U?$s_tag_persist_index@$0A@@@@@QAAPAU?$s_tag_persist_index@$0A@@@XZ");
//};

//public: c_wrapped_array<struct s_tag_persist_string_list>::c_wrapped_array<struct s_tag_persist_string_list>(void)
//{
//    mangled_ppc("??0?$c_wrapped_array@Us_tag_persist_string_list@@@@QAA@XZ");
//};

//public: long c_wrapped_array_no_init<struct s_tag_persist_string_list>::count(void) const
//{
//    mangled_ppc("?count@?$c_wrapped_array_no_init@Us_tag_persist_string_list@@@@QBAJXZ");
//};

//public: struct s_tag_persist_string_list * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_persist_string_list>, struct s_tag_persist_string_list>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_tag_persist_string_list@@@@Us_tag_persist_string_list@@@@QAAPAUs_tag_persist_string_list@@XZ");
//};

//public: c_wrapped_array<struct s_tag_persist_array_definition>::c_wrapped_array<struct s_tag_persist_array_definition>(void)
//{
//    mangled_ppc("??0?$c_wrapped_array@Us_tag_persist_array_definition@@@@QAA@XZ");
//};

//public: long c_wrapped_array_no_init<struct s_tag_persist_array_definition>::count(void) const
//{
//    mangled_ppc("?count@?$c_wrapped_array_no_init@Us_tag_persist_array_definition@@@@QBAJXZ");
//};

//public: struct s_tag_persist_array_definition & c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_persist_array_definition>, struct s_tag_persist_array_definition>::operator[](long)
//{
//    mangled_ppc("??A?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_tag_persist_array_definition@@@@Us_tag_persist_array_definition@@@@QAAAAUs_tag_persist_array_definition@@J@Z");
//};

//public: struct s_tag_persist_array_definition * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_persist_array_definition>, struct s_tag_persist_array_definition>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_tag_persist_array_definition@@@@Us_tag_persist_array_definition@@@@QAAPAUs_tag_persist_array_definition@@XZ");
//};

//public: c_wrapped_array<struct s_tag_persist_field>::c_wrapped_array<struct s_tag_persist_field>(void)
//{
//    mangled_ppc("??0?$c_wrapped_array@Us_tag_persist_field@@@@QAA@XZ");
//};

//public: long c_wrapped_array_no_init<struct s_tag_persist_field>::count(void) const
//{
//    mangled_ppc("?count@?$c_wrapped_array_no_init@Us_tag_persist_field@@@@QBAJXZ");
//};

//public: struct s_tag_persist_field * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_persist_field>, struct s_tag_persist_field>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_tag_persist_field@@@@Us_tag_persist_field@@@@QAAPAUs_tag_persist_field@@XZ");
//};

//public: c_wrapped_array<struct s_tag_persist_aggregate_prechunk>::c_wrapped_array<struct s_tag_persist_aggregate_prechunk>(void)
//{
//    mangled_ppc("??0?$c_wrapped_array@Us_tag_persist_aggregate_prechunk@@@@QAA@XZ");
//};

//public: long c_wrapped_array_no_init<struct s_tag_persist_aggregate_prechunk>::count(void) const
//{
//    mangled_ppc("?count@?$c_wrapped_array_no_init@Us_tag_persist_aggregate_prechunk@@@@QBAJXZ");
//};

//public: struct s_tag_persist_aggregate_prechunk * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_persist_aggregate_prechunk>, struct s_tag_persist_aggregate_prechunk>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_tag_persist_aggregate_prechunk@@@@Us_tag_persist_aggregate_prechunk@@@@QAAPAUs_tag_persist_aggregate_prechunk@@XZ");
//};

//public: c_wrapped_array<struct s_tag_persist_struct_definition>::c_wrapped_array<struct s_tag_persist_struct_definition>(void)
//{
//    mangled_ppc("??0?$c_wrapped_array@Us_tag_persist_struct_definition@@@@QAA@XZ");
//};

//public: long c_wrapped_array_no_init<struct s_tag_persist_struct_definition>::count(void) const
//{
//    mangled_ppc("?count@?$c_wrapped_array_no_init@Us_tag_persist_struct_definition@@@@QBAJXZ");
//};

//public: struct s_tag_persist_struct_definition * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_persist_struct_definition>, struct s_tag_persist_struct_definition>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_tag_persist_struct_definition@@@@Us_tag_persist_struct_definition@@@@QAAPAUs_tag_persist_struct_definition@@XZ");
//};

//public: c_wrapped_array<struct s_tag_persist_block_definition>::c_wrapped_array<struct s_tag_persist_block_definition>(void)
//{
//    mangled_ppc("??0?$c_wrapped_array@Us_tag_persist_block_definition@@@@QAA@XZ");
//};

//public: long c_wrapped_array_no_init<struct s_tag_persist_block_definition>::count(void) const
//{
//    mangled_ppc("?count@?$c_wrapped_array_no_init@Us_tag_persist_block_definition@@@@QBAJXZ");
//};

//public: struct s_tag_persist_block_definition * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_persist_block_definition>, struct s_tag_persist_block_definition>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_tag_persist_block_definition@@@@Us_tag_persist_block_definition@@@@QAAPAUs_tag_persist_block_definition@@XZ");
//};

//public: c_wrapped_array<struct s_tag_persist_resource_definition>::c_wrapped_array<struct s_tag_persist_resource_definition>(void)
//{
//    mangled_ppc("??0?$c_wrapped_array@Us_tag_persist_resource_definition@@@@QAA@XZ");
//};

//public: long c_wrapped_array_no_init<struct s_tag_persist_resource_definition>::count(void) const
//{
//    mangled_ppc("?count@?$c_wrapped_array_no_init@Us_tag_persist_resource_definition@@@@QBAJXZ");
//};

//public: struct s_tag_persist_resource_definition * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_persist_resource_definition>, struct s_tag_persist_resource_definition>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_tag_persist_resource_definition@@@@Us_tag_persist_resource_definition@@@@QAAPAUs_tag_persist_resource_definition@@XZ");
//};

//public: c_wrapped_array<struct s_tag_persist_interop_definition>::c_wrapped_array<struct s_tag_persist_interop_definition>(void)
//{
//    mangled_ppc("??0?$c_wrapped_array@Us_tag_persist_interop_definition@@@@QAA@XZ");
//};

//public: long c_wrapped_array_no_init<struct s_tag_persist_interop_definition>::count(void) const
//{
//    mangled_ppc("?count@?$c_wrapped_array_no_init@Us_tag_persist_interop_definition@@@@QBAJXZ");
//};

//public: struct s_tag_persist_interop_definition * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_persist_interop_definition>, struct s_tag_persist_interop_definition>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_tag_persist_interop_definition@@@@Us_tag_persist_interop_definition@@@@QAAPAUs_tag_persist_interop_definition@@XZ");
//};

//public: unsigned char * c_wrapped_array_no_init<unsigned char>::begin(void)
//{
//    mangled_ppc("?begin@?$c_wrapped_array_no_init@E@@QAAPAEXZ");
//};

//public: unsigned char * c_wrapped_array_no_init<unsigned char>::end(void)
//{
//    mangled_ppc("?end@?$c_wrapped_array_no_init@E@@QAAPAEXZ");
//};

//public: char const *const * s_static_array<char const *, 62>::get_elements(void) const
//{
//    mangled_ppc("?get_elements@?$s_static_array@PBD$0DO@@@QBAPBQBDXZ");
//};

//public: static long s_static_array<char const *, 62>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@PBD$0DO@@@SAJXZ");
//};

//public: c_big_flags<62>::c_big_flags<62>(void)
//{
//    mangled_ppc("??0?$c_big_flags@$0DO@@@QAA@XZ");
//};

//public: void c_wrapped_array_no_init<struct s_tag_struct_definition>::set_elements(struct s_tag_struct_definition *, long)
//{
//    mangled_ppc("?set_elements@?$c_wrapped_array_no_init@Us_tag_struct_definition@@@@QAAXPAUs_tag_struct_definition@@J@Z");
//};

//public: void c_wrapped_array_no_init<enum e_tag_field>::set_elements(enum e_tag_field *, long)
//{
//    mangled_ppc("?set_elements@?$c_wrapped_array_no_init@W4e_tag_field@@@@QAAXPAW4e_tag_field@@J@Z");
//};

//public: enum e_tag_field * c_wrapped_array_no_init<enum e_tag_field>::begin(void)
//{
//    mangled_ppc("?begin@?$c_wrapped_array_no_init@W4e_tag_field@@@@QAAPAW4e_tag_field@@XZ");
//};

//public: enum e_tag_field const * c_wrapped_array_no_init<enum e_tag_field>::begin(void) const
//{
//    mangled_ppc("?begin@?$c_wrapped_array_no_init@W4e_tag_field@@@@QBAPBW4e_tag_field@@XZ");
//};

//public: bool c_array_operator_interface<class c_wrapped_array_no_init<enum e_tag_field>, enum e_tag_field>::valid_index(long) const
//{
//    mangled_ppc("?valid_index@?$c_array_operator_interface@V?$c_wrapped_array_no_init@W4e_tag_field@@@@W4e_tag_field@@@@QBA_NJ@Z");
//};

//public: class c_wrapped_array_no_init<enum e_tag_field> * c_recursive_template_pattern<class c_wrapped_array_no_init<enum e_tag_field> >::get_super_class(void)
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@W4e_tag_field@@@@@@QAAPAV?$c_wrapped_array_no_init@W4e_tag_field@@@@XZ");
//};

//public: class c_wrapped_array_no_init<enum e_tag_field> const * c_recursive_template_pattern<class c_wrapped_array_no_init<enum e_tag_field> >::get_super_class(void) const
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@W4e_tag_field@@@@@@QBAPBV?$c_wrapped_array_no_init@W4e_tag_field@@@@XZ");
//};

//public: void c_wrapped_array_no_init<struct s_tag_persist_field_type>::set_elements(struct s_tag_persist_field_type *, long)
//{
//    mangled_ppc("?set_elements@?$c_wrapped_array_no_init@Us_tag_persist_field_type@@@@QAAXPAUs_tag_persist_field_type@@J@Z");
//};

//public: struct s_tag_persist_field_type * c_wrapped_array_no_init<struct s_tag_persist_field_type>::begin(void)
//{
//    mangled_ppc("?begin@?$c_wrapped_array_no_init@Us_tag_persist_field_type@@@@QAAPAUs_tag_persist_field_type@@XZ");
//};

//public: struct s_tag_persist_field_type const * c_wrapped_array_no_init<struct s_tag_persist_field_type>::begin(void) const
//{
//    mangled_ppc("?begin@?$c_wrapped_array_no_init@Us_tag_persist_field_type@@@@QBAPBUs_tag_persist_field_type@@XZ");
//};

//public: struct s_tag_persist_field_type * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_persist_field_type>, struct s_tag_persist_field_type>::begin(void)
//{
//    mangled_ppc("?begin@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_tag_persist_field_type@@@@Us_tag_persist_field_type@@@@QAAPAUs_tag_persist_field_type@@XZ");
//};

//public: bool c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_persist_field_type>, struct s_tag_persist_field_type>::valid_index(long) const
//{
//    mangled_ppc("?valid_index@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_tag_persist_field_type@@@@Us_tag_persist_field_type@@@@QBA_NJ@Z");
//};

//public: class c_wrapped_array_no_init<struct s_tag_persist_field_type> * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_persist_field_type> >::get_super_class(void)
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@Us_tag_persist_field_type@@@@@@QAAPAV?$c_wrapped_array_no_init@Us_tag_persist_field_type@@@@XZ");
//};

//public: class c_wrapped_array_no_init<struct s_tag_persist_field_type> const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_persist_field_type> >::get_super_class(void) const
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@Us_tag_persist_field_type@@@@@@QBAPBV?$c_wrapped_array_no_init@Us_tag_persist_field_type@@@@XZ");
//};

//public: void c_wrapped_array_no_init<struct s_block_index_custom_search_definition>::set_elements(struct s_block_index_custom_search_definition *, long)
//{
//    mangled_ppc("?set_elements@?$c_wrapped_array_no_init@Us_block_index_custom_search_definition@@@@QAAXPAUs_block_index_custom_search_definition@@J@Z");
//};

//public: bool c_array_operator_interface<class c_wrapped_array_no_init<struct s_block_index_custom_search_definition>, struct s_block_index_custom_search_definition>::valid_index(long) const
//{
//    mangled_ppc("?valid_index@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_block_index_custom_search_definition@@@@Us_block_index_custom_search_definition@@@@QBA_NJ@Z");
//};

//public: class c_wrapped_array_no_init<struct s_block_index_custom_search_definition> * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_block_index_custom_search_definition> >::get_super_class(void)
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@Us_block_index_custom_search_definition@@@@@@QAAPAV?$c_wrapped_array_no_init@Us_block_index_custom_search_definition@@@@XZ");
//};

//public: void c_wrapped_array_no_init<struct s_tag_data_definition>::set_elements(struct s_tag_data_definition *, long)
//{
//    mangled_ppc("?set_elements@?$c_wrapped_array_no_init@Us_tag_data_definition@@@@QAAXPAUs_tag_data_definition@@J@Z");
//};

//public: bool c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_data_definition>, struct s_tag_data_definition>::valid_index(long) const
//{
//    mangled_ppc("?valid_index@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_tag_data_definition@@@@Us_tag_data_definition@@@@QBA_NJ@Z");
//};

//public: class c_wrapped_array_no_init<struct s_tag_data_definition> * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_data_definition> >::get_super_class(void)
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@Us_tag_data_definition@@@@@@QAAPAV?$c_wrapped_array_no_init@Us_tag_data_definition@@@@XZ");
//};

//public: void c_wrapped_array_no_init<struct s_tag_array_definition>::set_elements(struct s_tag_array_definition *, long)
//{
//    mangled_ppc("?set_elements@?$c_wrapped_array_no_init@Us_tag_array_definition@@@@QAAXPAUs_tag_array_definition@@J@Z");
//};

//public: struct s_tag_array_definition * c_wrapped_array_no_init<struct s_tag_array_definition>::begin(void)
//{
//    mangled_ppc("?begin@?$c_wrapped_array_no_init@Us_tag_array_definition@@@@QAAPAUs_tag_array_definition@@XZ");
//};

//public: bool c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_array_definition>, struct s_tag_array_definition>::valid_index(long) const
//{
//    mangled_ppc("?valid_index@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_tag_array_definition@@@@Us_tag_array_definition@@@@QBA_NJ@Z");
//};

//public: class c_wrapped_array_no_init<struct s_tag_array_definition> * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_array_definition> >::get_super_class(void)
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@Us_tag_array_definition@@@@@@QAAPAV?$c_wrapped_array_no_init@Us_tag_array_definition@@@@XZ");
//};

//public: void c_wrapped_array_no_init<struct s_tag_block_definition>::set_elements(struct s_tag_block_definition *, long)
//{
//    mangled_ppc("?set_elements@?$c_wrapped_array_no_init@Us_tag_block_definition@@@@QAAXPAUs_tag_block_definition@@J@Z");
//};

//public: struct s_tag_block_definition * c_wrapped_array_no_init<struct s_tag_block_definition>::begin(void)
//{
//    mangled_ppc("?begin@?$c_wrapped_array_no_init@Us_tag_block_definition@@@@QAAPAUs_tag_block_definition@@XZ");
//};

//public: bool c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_block_definition>, struct s_tag_block_definition>::valid_index(long) const
//{
//    mangled_ppc("?valid_index@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_tag_block_definition@@@@Us_tag_block_definition@@@@QBA_NJ@Z");
//};

//public: class c_wrapped_array_no_init<struct s_tag_block_definition> * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_block_definition> >::get_super_class(void)
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@Us_tag_block_definition@@@@@@QAAPAV?$c_wrapped_array_no_init@Us_tag_block_definition@@@@XZ");
//};

//public: void c_wrapped_array_no_init<struct s_tag_resource_definition>::set_elements(struct s_tag_resource_definition *, long)
//{
//    mangled_ppc("?set_elements@?$c_wrapped_array_no_init@Us_tag_resource_definition@@@@QAAXPAUs_tag_resource_definition@@J@Z");
//};

//public: struct s_tag_resource_definition * c_wrapped_array_no_init<struct s_tag_resource_definition>::begin(void)
//{
//    mangled_ppc("?begin@?$c_wrapped_array_no_init@Us_tag_resource_definition@@@@QAAPAUs_tag_resource_definition@@XZ");
//};

//public: bool c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_resource_definition>, struct s_tag_resource_definition>::valid_index(long) const
//{
//    mangled_ppc("?valid_index@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_tag_resource_definition@@@@Us_tag_resource_definition@@@@QBA_NJ@Z");
//};

//public: class c_wrapped_array_no_init<struct s_tag_resource_definition> * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_resource_definition> >::get_super_class(void)
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@Us_tag_resource_definition@@@@@@QAAPAV?$c_wrapped_array_no_init@Us_tag_resource_definition@@@@XZ");
//};

//public: void c_wrapped_array_no_init<struct s_tag_interop_definition>::set_elements(struct s_tag_interop_definition *, long)
//{
//    mangled_ppc("?set_elements@?$c_wrapped_array_no_init@Us_tag_interop_definition@@@@QAAXPAUs_tag_interop_definition@@J@Z");
//};

//public: struct s_tag_interop_definition * c_wrapped_array_no_init<struct s_tag_interop_definition>::begin(void)
//{
//    mangled_ppc("?begin@?$c_wrapped_array_no_init@Us_tag_interop_definition@@@@QAAPAUs_tag_interop_definition@@XZ");
//};

//public: bool c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_interop_definition>, struct s_tag_interop_definition>::valid_index(long) const
//{
//    mangled_ppc("?valid_index@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_tag_interop_definition@@@@Us_tag_interop_definition@@@@QBA_NJ@Z");
//};

//public: class c_wrapped_array_no_init<struct s_tag_interop_definition> * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_interop_definition> >::get_super_class(void)
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@Us_tag_interop_definition@@@@@@QAAPAV?$c_wrapped_array_no_init@Us_tag_interop_definition@@@@XZ");
//};

//public: void c_wrapped_array_no_init<struct s_string_list_definition>::set_elements(struct s_string_list_definition *, long)
//{
//    mangled_ppc("?set_elements@?$c_wrapped_array_no_init@Us_string_list_definition@@@@QAAXPAUs_string_list_definition@@J@Z");
//};

//public: struct s_string_list_definition * c_wrapped_array_no_init<struct s_string_list_definition>::begin(void)
//{
//    mangled_ppc("?begin@?$c_wrapped_array_no_init@Us_string_list_definition@@@@QAAPAUs_string_list_definition@@XZ");
//};

//public: bool c_array_operator_interface<class c_wrapped_array_no_init<struct s_string_list_definition>, struct s_string_list_definition>::valid_index(long) const
//{
//    mangled_ppc("?valid_index@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_string_list_definition@@@@Us_string_list_definition@@@@QBA_NJ@Z");
//};

//public: class c_wrapped_array_no_init<struct s_string_list_definition> * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_string_list_definition> >::get_super_class(void)
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@Us_string_list_definition@@@@@@QAAPAV?$c_wrapped_array_no_init@Us_string_list_definition@@@@XZ");
//};

//public: void c_wrapped_array_no_init<struct s_tag_persist_index<0> >::set_elements(struct s_tag_persist_index<0> *, long)
//{
//    mangled_ppc("?set_elements@?$c_wrapped_array_no_init@U?$s_tag_persist_index@$0A@@@@@QAAXPAU?$s_tag_persist_index@$0A@@@J@Z");
//};

//public: struct s_tag_persist_index<0> * c_wrapped_array_no_init<struct s_tag_persist_index<0> >::begin(void)
//{
//    mangled_ppc("?begin@?$c_wrapped_array_no_init@U?$s_tag_persist_index@$0A@@@@@QAAPAU?$s_tag_persist_index@$0A@@@XZ");
//};

//public: struct s_tag_persist_index<0> * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_persist_index<0> >, struct s_tag_persist_index<0> >::begin(void)
//{
//    mangled_ppc("?begin@?$c_array_operator_interface@V?$c_wrapped_array_no_init@U?$s_tag_persist_index@$0A@@@@@U?$s_tag_persist_index@$0A@@@@@QAAPAU?$s_tag_persist_index@$0A@@@XZ");
//};

//public: bool c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_persist_index<0> >, struct s_tag_persist_index<0> >::valid_index(long) const
//{
//    mangled_ppc("?valid_index@?$c_array_operator_interface@V?$c_wrapped_array_no_init@U?$s_tag_persist_index@$0A@@@@@U?$s_tag_persist_index@$0A@@@@@QBA_NJ@Z");
//};

//public: class c_wrapped_array_no_init<struct s_tag_persist_index<0> > * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_persist_index<0> > >::get_super_class(void)
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@U?$s_tag_persist_index@$0A@@@@@@@QAAPAV?$c_wrapped_array_no_init@U?$s_tag_persist_index@$0A@@@@@XZ");
//};

//public: void c_wrapped_array_no_init<struct s_tag_persist_string_list>::set_elements(struct s_tag_persist_string_list *, long)
//{
//    mangled_ppc("?set_elements@?$c_wrapped_array_no_init@Us_tag_persist_string_list@@@@QAAXPAUs_tag_persist_string_list@@J@Z");
//};

//public: struct s_tag_persist_string_list * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_persist_string_list>, struct s_tag_persist_string_list>::begin(void)
//{
//    mangled_ppc("?begin@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_tag_persist_string_list@@@@Us_tag_persist_string_list@@@@QAAPAUs_tag_persist_string_list@@XZ");
//};

//public: void c_wrapped_array_no_init<struct s_tag_persist_array_definition>::set_elements(struct s_tag_persist_array_definition *, long)
//{
//    mangled_ppc("?set_elements@?$c_wrapped_array_no_init@Us_tag_persist_array_definition@@@@QAAXPAUs_tag_persist_array_definition@@J@Z");
//};

//public: struct s_tag_persist_array_definition * c_wrapped_array_no_init<struct s_tag_persist_array_definition>::begin(void)
//{
//    mangled_ppc("?begin@?$c_wrapped_array_no_init@Us_tag_persist_array_definition@@@@QAAPAUs_tag_persist_array_definition@@XZ");
//};

//public: struct s_tag_persist_array_definition * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_persist_array_definition>, struct s_tag_persist_array_definition>::begin(void)
//{
//    mangled_ppc("?begin@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_tag_persist_array_definition@@@@Us_tag_persist_array_definition@@@@QAAPAUs_tag_persist_array_definition@@XZ");
//};

//public: bool c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_persist_array_definition>, struct s_tag_persist_array_definition>::valid_index(long) const
//{
//    mangled_ppc("?valid_index@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_tag_persist_array_definition@@@@Us_tag_persist_array_definition@@@@QBA_NJ@Z");
//};

//public: class c_wrapped_array_no_init<struct s_tag_persist_array_definition> * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_persist_array_definition> >::get_super_class(void)
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@Us_tag_persist_array_definition@@@@@@QAAPAV?$c_wrapped_array_no_init@Us_tag_persist_array_definition@@@@XZ");
//};

//public: void c_wrapped_array_no_init<struct s_tag_persist_field>::set_elements(struct s_tag_persist_field *, long)
//{
//    mangled_ppc("?set_elements@?$c_wrapped_array_no_init@Us_tag_persist_field@@@@QAAXPAUs_tag_persist_field@@J@Z");
//};

//public: struct s_tag_persist_field * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_persist_field>, struct s_tag_persist_field>::begin(void)
//{
//    mangled_ppc("?begin@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_tag_persist_field@@@@Us_tag_persist_field@@@@QAAPAUs_tag_persist_field@@XZ");
//};

//public: void c_wrapped_array_no_init<struct s_tag_persist_aggregate_prechunk>::set_elements(struct s_tag_persist_aggregate_prechunk *, long)
//{
//    mangled_ppc("?set_elements@?$c_wrapped_array_no_init@Us_tag_persist_aggregate_prechunk@@@@QAAXPAUs_tag_persist_aggregate_prechunk@@J@Z");
//};

//public: struct s_tag_persist_aggregate_prechunk * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_persist_aggregate_prechunk>, struct s_tag_persist_aggregate_prechunk>::begin(void)
//{
//    mangled_ppc("?begin@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_tag_persist_aggregate_prechunk@@@@Us_tag_persist_aggregate_prechunk@@@@QAAPAUs_tag_persist_aggregate_prechunk@@XZ");
//};

//public: void c_wrapped_array_no_init<struct s_tag_persist_struct_definition>::set_elements(struct s_tag_persist_struct_definition *, long)
//{
//    mangled_ppc("?set_elements@?$c_wrapped_array_no_init@Us_tag_persist_struct_definition@@@@QAAXPAUs_tag_persist_struct_definition@@J@Z");
//};

//public: struct s_tag_persist_struct_definition * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_persist_struct_definition>, struct s_tag_persist_struct_definition>::begin(void)
//{
//    mangled_ppc("?begin@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_tag_persist_struct_definition@@@@Us_tag_persist_struct_definition@@@@QAAPAUs_tag_persist_struct_definition@@XZ");
//};

//public: void c_wrapped_array_no_init<struct s_tag_persist_block_definition>::set_elements(struct s_tag_persist_block_definition *, long)
//{
//    mangled_ppc("?set_elements@?$c_wrapped_array_no_init@Us_tag_persist_block_definition@@@@QAAXPAUs_tag_persist_block_definition@@J@Z");
//};

//public: struct s_tag_persist_block_definition * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_persist_block_definition>, struct s_tag_persist_block_definition>::begin(void)
//{
//    mangled_ppc("?begin@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_tag_persist_block_definition@@@@Us_tag_persist_block_definition@@@@QAAPAUs_tag_persist_block_definition@@XZ");
//};

//public: void c_wrapped_array_no_init<struct s_tag_persist_resource_definition>::set_elements(struct s_tag_persist_resource_definition *, long)
//{
//    mangled_ppc("?set_elements@?$c_wrapped_array_no_init@Us_tag_persist_resource_definition@@@@QAAXPAUs_tag_persist_resource_definition@@J@Z");
//};

//public: struct s_tag_persist_resource_definition * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_persist_resource_definition>, struct s_tag_persist_resource_definition>::begin(void)
//{
//    mangled_ppc("?begin@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_tag_persist_resource_definition@@@@Us_tag_persist_resource_definition@@@@QAAPAUs_tag_persist_resource_definition@@XZ");
//};

//public: void c_wrapped_array_no_init<struct s_tag_persist_interop_definition>::set_elements(struct s_tag_persist_interop_definition *, long)
//{
//    mangled_ppc("?set_elements@?$c_wrapped_array_no_init@Us_tag_persist_interop_definition@@@@QAAXPAUs_tag_persist_interop_definition@@J@Z");
//};

//public: struct s_tag_persist_interop_definition * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_persist_interop_definition>, struct s_tag_persist_interop_definition>::begin(void)
//{
//    mangled_ppc("?begin@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_tag_persist_interop_definition@@@@Us_tag_persist_interop_definition@@@@QAAPAUs_tag_persist_interop_definition@@XZ");
//};

//public: long c_array_operator_interface<class c_wrapped_array_no_init<enum e_tag_field>, enum e_tag_field>::count(void) const
//{
//    mangled_ppc("?count@?$c_array_operator_interface@V?$c_wrapped_array_no_init@W4e_tag_field@@@@W4e_tag_field@@@@QBAJXZ");
//};

//public: long c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_persist_field_type>, struct s_tag_persist_field_type>::count(void) const
//{
//    mangled_ppc("?count@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_tag_persist_field_type@@@@Us_tag_persist_field_type@@@@QBAJXZ");
//};

//public: long c_array_operator_interface<class c_wrapped_array_no_init<struct s_block_index_custom_search_definition>, struct s_block_index_custom_search_definition>::count(void) const
//{
//    mangled_ppc("?count@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_block_index_custom_search_definition@@@@Us_block_index_custom_search_definition@@@@QBAJXZ");
//};

//public: long c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_data_definition>, struct s_tag_data_definition>::count(void) const
//{
//    mangled_ppc("?count@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_tag_data_definition@@@@Us_tag_data_definition@@@@QBAJXZ");
//};

//public: long c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_array_definition>, struct s_tag_array_definition>::count(void) const
//{
//    mangled_ppc("?count@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_tag_array_definition@@@@Us_tag_array_definition@@@@QBAJXZ");
//};

//public: long c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_block_definition>, struct s_tag_block_definition>::count(void) const
//{
//    mangled_ppc("?count@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_tag_block_definition@@@@Us_tag_block_definition@@@@QBAJXZ");
//};

//public: long c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_resource_definition>, struct s_tag_resource_definition>::count(void) const
//{
//    mangled_ppc("?count@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_tag_resource_definition@@@@Us_tag_resource_definition@@@@QBAJXZ");
//};

//public: long c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_interop_definition>, struct s_tag_interop_definition>::count(void) const
//{
//    mangled_ppc("?count@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_tag_interop_definition@@@@Us_tag_interop_definition@@@@QBAJXZ");
//};

//public: long c_array_operator_interface<class c_wrapped_array_no_init<struct s_string_list_definition>, struct s_string_list_definition>::count(void) const
//{
//    mangled_ppc("?count@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_string_list_definition@@@@Us_string_list_definition@@@@QBAJXZ");
//};

//public: long c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_persist_index<0> >, struct s_tag_persist_index<0> >::count(void) const
//{
//    mangled_ppc("?count@?$c_array_operator_interface@V?$c_wrapped_array_no_init@U?$s_tag_persist_index@$0A@@@@@U?$s_tag_persist_index@$0A@@@@@QBAJXZ");
//};

//public: struct s_tag_persist_string_list * c_wrapped_array_no_init<struct s_tag_persist_string_list>::begin(void)
//{
//    mangled_ppc("?begin@?$c_wrapped_array_no_init@Us_tag_persist_string_list@@@@QAAPAUs_tag_persist_string_list@@XZ");
//};

//public: class c_wrapped_array_no_init<struct s_tag_persist_string_list> * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_persist_string_list> >::get_super_class(void)
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@Us_tag_persist_string_list@@@@@@QAAPAV?$c_wrapped_array_no_init@Us_tag_persist_string_list@@@@XZ");
//};

//public: long c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_persist_array_definition>, struct s_tag_persist_array_definition>::count(void) const
//{
//    mangled_ppc("?count@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_tag_persist_array_definition@@@@Us_tag_persist_array_definition@@@@QBAJXZ");
//};

//public: struct s_tag_persist_field * c_wrapped_array_no_init<struct s_tag_persist_field>::begin(void)
//{
//    mangled_ppc("?begin@?$c_wrapped_array_no_init@Us_tag_persist_field@@@@QAAPAUs_tag_persist_field@@XZ");
//};

//public: class c_wrapped_array_no_init<struct s_tag_persist_field> * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_persist_field> >::get_super_class(void)
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@Us_tag_persist_field@@@@@@QAAPAV?$c_wrapped_array_no_init@Us_tag_persist_field@@@@XZ");
//};

//public: struct s_tag_persist_aggregate_prechunk * c_wrapped_array_no_init<struct s_tag_persist_aggregate_prechunk>::begin(void)
//{
//    mangled_ppc("?begin@?$c_wrapped_array_no_init@Us_tag_persist_aggregate_prechunk@@@@QAAPAUs_tag_persist_aggregate_prechunk@@XZ");
//};

//public: class c_wrapped_array_no_init<struct s_tag_persist_aggregate_prechunk> * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_persist_aggregate_prechunk> >::get_super_class(void)
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@Us_tag_persist_aggregate_prechunk@@@@@@QAAPAV?$c_wrapped_array_no_init@Us_tag_persist_aggregate_prechunk@@@@XZ");
//};

//public: struct s_tag_persist_struct_definition * c_wrapped_array_no_init<struct s_tag_persist_struct_definition>::begin(void)
//{
//    mangled_ppc("?begin@?$c_wrapped_array_no_init@Us_tag_persist_struct_definition@@@@QAAPAUs_tag_persist_struct_definition@@XZ");
//};

//public: class c_wrapped_array_no_init<struct s_tag_persist_struct_definition> * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_persist_struct_definition> >::get_super_class(void)
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@Us_tag_persist_struct_definition@@@@@@QAAPAV?$c_wrapped_array_no_init@Us_tag_persist_struct_definition@@@@XZ");
//};

//public: struct s_tag_persist_block_definition * c_wrapped_array_no_init<struct s_tag_persist_block_definition>::begin(void)
//{
//    mangled_ppc("?begin@?$c_wrapped_array_no_init@Us_tag_persist_block_definition@@@@QAAPAUs_tag_persist_block_definition@@XZ");
//};

//public: class c_wrapped_array_no_init<struct s_tag_persist_block_definition> * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_persist_block_definition> >::get_super_class(void)
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@Us_tag_persist_block_definition@@@@@@QAAPAV?$c_wrapped_array_no_init@Us_tag_persist_block_definition@@@@XZ");
//};

//public: struct s_tag_persist_resource_definition * c_wrapped_array_no_init<struct s_tag_persist_resource_definition>::begin(void)
//{
//    mangled_ppc("?begin@?$c_wrapped_array_no_init@Us_tag_persist_resource_definition@@@@QAAPAUs_tag_persist_resource_definition@@XZ");
//};

//public: class c_wrapped_array_no_init<struct s_tag_persist_resource_definition> * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_persist_resource_definition> >::get_super_class(void)
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@Us_tag_persist_resource_definition@@@@@@QAAPAV?$c_wrapped_array_no_init@Us_tag_persist_resource_definition@@@@XZ");
//};

//public: struct s_tag_persist_interop_definition * c_wrapped_array_no_init<struct s_tag_persist_interop_definition>::begin(void)
//{
//    mangled_ppc("?begin@?$c_wrapped_array_no_init@Us_tag_persist_interop_definition@@@@QAAPAUs_tag_persist_interop_definition@@XZ");
//};

//public: class c_wrapped_array_no_init<struct s_tag_persist_interop_definition> * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_persist_interop_definition> >::get_super_class(void)
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@Us_tag_persist_interop_definition@@@@@@QAAPAV?$c_wrapped_array_no_init@Us_tag_persist_interop_definition@@@@XZ");
//};

//public: long c_wrapped_array_no_init<struct s_block_index_custom_search_definition>::count(void) const
//{
//    mangled_ppc("?count@?$c_wrapped_array_no_init@Us_block_index_custom_search_definition@@@@QBAJXZ");
//};

//public: class c_wrapped_array_no_init<struct s_block_index_custom_search_definition> const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_block_index_custom_search_definition> >::get_super_class(void) const
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@Us_block_index_custom_search_definition@@@@@@QBAPBV?$c_wrapped_array_no_init@Us_block_index_custom_search_definition@@@@XZ");
//};

//public: long c_wrapped_array_no_init<struct s_tag_data_definition>::count(void) const
//{
//    mangled_ppc("?count@?$c_wrapped_array_no_init@Us_tag_data_definition@@@@QBAJXZ");
//};

//public: class c_wrapped_array_no_init<struct s_tag_data_definition> const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_data_definition> >::get_super_class(void) const
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@Us_tag_data_definition@@@@@@QBAPBV?$c_wrapped_array_no_init@Us_tag_data_definition@@@@XZ");
//};

//public: long c_wrapped_array_no_init<struct s_tag_array_definition>::count(void) const
//{
//    mangled_ppc("?count@?$c_wrapped_array_no_init@Us_tag_array_definition@@@@QBAJXZ");
//};

//public: class c_wrapped_array_no_init<struct s_tag_array_definition> const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_array_definition> >::get_super_class(void) const
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@Us_tag_array_definition@@@@@@QBAPBV?$c_wrapped_array_no_init@Us_tag_array_definition@@@@XZ");
//};

//public: long c_wrapped_array_no_init<struct s_tag_block_definition>::count(void) const
//{
//    mangled_ppc("?count@?$c_wrapped_array_no_init@Us_tag_block_definition@@@@QBAJXZ");
//};

//public: class c_wrapped_array_no_init<struct s_tag_block_definition> const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_block_definition> >::get_super_class(void) const
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@Us_tag_block_definition@@@@@@QBAPBV?$c_wrapped_array_no_init@Us_tag_block_definition@@@@XZ");
//};

//public: long c_wrapped_array_no_init<struct s_tag_resource_definition>::count(void) const
//{
//    mangled_ppc("?count@?$c_wrapped_array_no_init@Us_tag_resource_definition@@@@QBAJXZ");
//};

//public: class c_wrapped_array_no_init<struct s_tag_resource_definition> const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_resource_definition> >::get_super_class(void) const
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@Us_tag_resource_definition@@@@@@QBAPBV?$c_wrapped_array_no_init@Us_tag_resource_definition@@@@XZ");
//};

//public: long c_wrapped_array_no_init<struct s_tag_interop_definition>::count(void) const
//{
//    mangled_ppc("?count@?$c_wrapped_array_no_init@Us_tag_interop_definition@@@@QBAJXZ");
//};

//public: class c_wrapped_array_no_init<struct s_tag_interop_definition> const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_interop_definition> >::get_super_class(void) const
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@Us_tag_interop_definition@@@@@@QBAPBV?$c_wrapped_array_no_init@Us_tag_interop_definition@@@@XZ");
//};

//public: class c_wrapped_array_no_init<struct s_string_list_definition> const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_string_list_definition> >::get_super_class(void) const
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@Us_string_list_definition@@@@@@QBAPBV?$c_wrapped_array_no_init@Us_string_list_definition@@@@XZ");
//};

//public: class c_wrapped_array_no_init<struct s_tag_persist_index<0> > const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_persist_index<0> > >::get_super_class(void) const
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@U?$s_tag_persist_index@$0A@@@@@@@QBAPBV?$c_wrapped_array_no_init@U?$s_tag_persist_index@$0A@@@@@XZ");
//};

//public: class c_wrapped_array_no_init<struct s_tag_persist_array_definition> const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_persist_array_definition> >::get_super_class(void) const
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@Us_tag_persist_array_definition@@@@@@QBAPBV?$c_wrapped_array_no_init@Us_tag_persist_array_definition@@@@XZ");
//};

//public: void c_big_flags_typed_no_init<long, 62>::set_all(void)
//{
//    mangled_ppc("?set_all@?$c_big_flags_typed_no_init@J$0DO@@@QAAXXZ");
//};

//unsigned long get_total_unaligned_raw_size<char>(long)
//{
//    mangled_ppc("??$get_total_unaligned_raw_size@D@@YAKJ@Z");
//};

//public: void c_raw_storage_buffer_iterator::set_wrapped_array<class c_wrapped_array, char>(class c_wrapped_array<char> &, long)
//{
//    mangled_ppc("??$set_wrapped_array@Vc_wrapped_array@@D@c_raw_storage_buffer_iterator@@QAAXAAV?$c_wrapped_array@D@@J@Z");
//};

//unsigned long get_total_unaligned_raw_size<struct s_tag_persist_index<1> >(long)
//{
//    mangled_ppc("??$get_total_unaligned_raw_size@U?$s_tag_persist_index@$00@@@@YAKJ@Z");
//};

//unsigned long get_total_unaligned_raw_size<char const *>(long)
//{
//    mangled_ppc("??$get_total_unaligned_raw_size@PBD@@YAKJ@Z");
//};

//public: void c_raw_storage_buffer_iterator::set_wrapped_array<class c_wrapped_array, char const *>(class c_wrapped_array<char const *> &, long)
//{
//    mangled_ppc("??$set_wrapped_array@Vc_wrapped_array@@PBD@c_raw_storage_buffer_iterator@@QAAXAAV?$c_wrapped_array@PBD@@J@Z");
//};

//public: void c_raw_storage_buffer_iterator::set_wrapped_array<class c_wrapped_array, struct s_tag_persist_index<0> >(class c_wrapped_array<struct s_tag_persist_index<0> > &, long)
//{
//    mangled_ppc("??$set_wrapped_array@Vc_wrapped_array@@U?$s_tag_persist_index@$0A@@@@c_raw_storage_buffer_iterator@@QAAXAAV?$c_wrapped_array@U?$s_tag_persist_index@$0A@@@@@J@Z");
//};

//public: bool c_persist_stream::read_typed<struct s_tag_persist_index<0> >(struct s_tag_persist_index<0> *, long)
//{
//    mangled_ppc("??$read_typed@U?$s_tag_persist_index@$0A@@@@c_persist_stream@@QAA_NPAU?$s_tag_persist_index@$0A@@@J@Z");
//};

//unsigned long get_total_unaligned_raw_size<struct s_tag_persist_string_list>(long)
//{
//    mangled_ppc("??$get_total_unaligned_raw_size@Us_tag_persist_string_list@@@@YAKJ@Z");
//};

//unsigned long get_total_unaligned_raw_size<struct s_string_list_definition>(long)
//{
//    mangled_ppc("??$get_total_unaligned_raw_size@Us_string_list_definition@@@@YAKJ@Z");
//};

//public: void c_raw_storage_buffer_iterator::set_wrapped_array<class c_wrapped_array, struct s_string_list_definition>(class c_wrapped_array<struct s_string_list_definition> &, long)
//{
//    mangled_ppc("??$set_wrapped_array@Vc_wrapped_array@@Us_string_list_definition@@@c_raw_storage_buffer_iterator@@QAAXAAV?$c_wrapped_array@Us_string_list_definition@@@@J@Z");
//};

//public: void c_raw_storage_buffer_iterator::set_wrapped_array<class c_wrapped_array, struct s_tag_persist_string_list>(class c_wrapped_array<struct s_tag_persist_string_list> &, long)
//{
//    mangled_ppc("??$set_wrapped_array@Vc_wrapped_array@@Us_tag_persist_string_list@@@c_raw_storage_buffer_iterator@@QAAXAAV?$c_wrapped_array@Us_tag_persist_string_list@@@@J@Z");
//};

//public: bool c_persist_stream::read_typed<struct s_tag_persist_string_list>(struct s_tag_persist_string_list *, long)
//{
//    mangled_ppc("??$read_typed@Us_tag_persist_string_list@@@c_persist_stream@@QAA_NPAUs_tag_persist_string_list@@J@Z");
//};

//unsigned long get_total_unaligned_raw_size<struct s_tag_persist_index<6> >(long)
//{
//    mangled_ppc("??$get_total_unaligned_raw_size@U?$s_tag_persist_index@$05@@@@YAKJ@Z");
//};

//unsigned long get_total_unaligned_raw_size<struct s_block_index_custom_search_definition>(long)
//{
//    mangled_ppc("??$get_total_unaligned_raw_size@Us_block_index_custom_search_definition@@@@YAKJ@Z");
//};

//public: void c_raw_storage_buffer_iterator::set_wrapped_array<class c_wrapped_array, struct s_block_index_custom_search_definition>(class c_wrapped_array<struct s_block_index_custom_search_definition> &, long)
//{
//    mangled_ppc("??$set_wrapped_array@Vc_wrapped_array@@Us_block_index_custom_search_definition@@@c_raw_storage_buffer_iterator@@QAAXAAV?$c_wrapped_array@Us_block_index_custom_search_definition@@@@J@Z");
//};

//void std::fill<struct s_block_index_custom_search_definition *, struct s_block_index_custom_search_definition>(struct s_block_index_custom_search_definition *, struct s_block_index_custom_search_definition *, struct s_block_index_custom_search_definition const &)
//{
//    mangled_ppc("??$fill@PAUs_block_index_custom_search_definition@@U1@@std@@YAXPAUs_block_index_custom_search_definition@@0ABU1@@Z");
//};

//unsigned long get_total_unaligned_raw_size<struct s_tag_persist_index<7> >(long)
//{
//    mangled_ppc("??$get_total_unaligned_raw_size@U?$s_tag_persist_index@$06@@@@YAKJ@Z");
//};

//unsigned long get_total_unaligned_raw_size<struct s_tag_data_definition>(long)
//{
//    mangled_ppc("??$get_total_unaligned_raw_size@Us_tag_data_definition@@@@YAKJ@Z");
//};

//public: void c_raw_storage_buffer_iterator::set_wrapped_array<class c_wrapped_array, struct s_tag_data_definition>(class c_wrapped_array<struct s_tag_data_definition> &, long)
//{
//    mangled_ppc("??$set_wrapped_array@Vc_wrapped_array@@Us_tag_data_definition@@@c_raw_storage_buffer_iterator@@QAAXAAV?$c_wrapped_array@Us_tag_data_definition@@@@J@Z");
//};

//void std::fill<struct s_tag_data_definition *, struct s_tag_data_definition>(struct s_tag_data_definition *, struct s_tag_data_definition *, struct s_tag_data_definition const &)
//{
//    mangled_ppc("??$fill@PAUs_tag_data_definition@@U1@@std@@YAXPAUs_tag_data_definition@@0ABU1@@Z");
//};

//unsigned long get_total_unaligned_raw_size<struct s_tag_persist_index<8> >(long)
//{
//    mangled_ppc("??$get_total_unaligned_raw_size@U?$s_tag_persist_index@$07@@@@YAKJ@Z");
//};

//unsigned long get_total_unaligned_raw_size<struct s_tag_array_definition>(long)
//{
//    mangled_ppc("??$get_total_unaligned_raw_size@Us_tag_array_definition@@@@YAKJ@Z");
//};

//public: void c_raw_storage_buffer_iterator::set_wrapped_array<class c_wrapped_array, struct s_tag_array_definition>(class c_wrapped_array<struct s_tag_array_definition> &, long)
//{
//    mangled_ppc("??$set_wrapped_array@Vc_wrapped_array@@Us_tag_array_definition@@@c_raw_storage_buffer_iterator@@QAAXAAV?$c_wrapped_array@Us_tag_array_definition@@@@J@Z");
//};

//public: void c_raw_storage_buffer_iterator::set_wrapped_array<class c_wrapped_array, struct s_tag_persist_array_definition>(class c_wrapped_array<struct s_tag_persist_array_definition> &, long)
//{
//    mangled_ppc("??$set_wrapped_array@Vc_wrapped_array@@Us_tag_persist_array_definition@@@c_raw_storage_buffer_iterator@@QAAXAAV?$c_wrapped_array@Us_tag_persist_array_definition@@@@J@Z");
//};

//public: bool c_persist_stream::read_typed<struct s_tag_persist_array_definition>(struct s_tag_persist_array_definition *, long)
//{
//    mangled_ppc("??$read_typed@Us_tag_persist_array_definition@@@c_persist_stream@@QAA_NPAUs_tag_persist_array_definition@@J@Z");
//};

//unsigned long get_total_unaligned_raw_size<enum e_tag_field>(long)
//{
//    mangled_ppc("??$get_total_unaligned_raw_size@W4e_tag_field@@@@YAKJ@Z");
//};

//unsigned long get_total_unaligned_raw_size<struct s_tag_persist_field_type>(long)
//{
//    mangled_ppc("??$get_total_unaligned_raw_size@Us_tag_persist_field_type@@@@YAKJ@Z");
//};

//public: void c_raw_storage_buffer_iterator::set_wrapped_array<class c_wrapped_array, enum e_tag_field>(class c_wrapped_array<enum e_tag_field> &, long)
//{
//    mangled_ppc("??$set_wrapped_array@Vc_wrapped_array@@W4e_tag_field@@@c_raw_storage_buffer_iterator@@QAAXAAV?$c_wrapped_array@W4e_tag_field@@@@J@Z");
//};

//public: void c_raw_storage_buffer_iterator::set_wrapped_array<class c_wrapped_array, struct s_tag_persist_field_type>(class c_wrapped_array<struct s_tag_persist_field_type> &, long)
//{
//    mangled_ppc("??$set_wrapped_array@Vc_wrapped_array@@Us_tag_persist_field_type@@@c_raw_storage_buffer_iterator@@QAAXAAV?$c_wrapped_array@Us_tag_persist_field_type@@@@J@Z");
//};

//public: bool c_persist_stream::read_typed<struct s_tag_persist_field_type>(struct s_tag_persist_field_type *, long)
//{
//    mangled_ppc("??$read_typed@Us_tag_persist_field_type@@@c_persist_stream@@QAA_NPAUs_tag_persist_field_type@@J@Z");
//};

//unsigned long get_total_unaligned_raw_size<struct s_tag_persist_field>(long)
//{
//    mangled_ppc("??$get_total_unaligned_raw_size@Us_tag_persist_field@@@@YAKJ@Z");
//};

//unsigned long get_total_unaligned_raw_size<struct s_tag_field>(long)
//{
//    mangled_ppc("??$get_total_unaligned_raw_size@Us_tag_field@@@@YAKJ@Z");
//};

//public: void c_raw_storage_buffer_iterator::set_wrapped_array<class c_wrapped_array, struct s_tag_field>(class c_wrapped_array<struct s_tag_field> &, long)
//{
//    mangled_ppc("??$set_wrapped_array@Vc_wrapped_array@@Us_tag_field@@@c_raw_storage_buffer_iterator@@QAAXAAV?$c_wrapped_array@Us_tag_field@@@@J@Z");
//};

//public: void c_raw_storage_buffer_iterator::set_wrapped_array<class c_wrapped_array, struct s_tag_persist_field>(class c_wrapped_array<struct s_tag_persist_field> &, long)
//{
//    mangled_ppc("??$set_wrapped_array@Vc_wrapped_array@@Us_tag_persist_field@@@c_raw_storage_buffer_iterator@@QAAXAAV?$c_wrapped_array@Us_tag_persist_field@@@@J@Z");
//};

//public: bool c_persist_stream::read_typed<struct s_tag_persist_field>(struct s_tag_persist_field *, long)
//{
//    mangled_ppc("??$read_typed@Us_tag_persist_field@@@c_persist_stream@@QAA_NPAUs_tag_persist_field@@J@Z");
//};

//unsigned long get_total_unaligned_raw_size<struct s_tag_persist_aggregate_prechunk>(long)
//{
//    mangled_ppc("??$get_total_unaligned_raw_size@Us_tag_persist_aggregate_prechunk@@@@YAKJ@Z");
//};

//unsigned long get_total_unaligned_raw_size<struct s_tag_struct_definition>(long)
//{
//    mangled_ppc("??$get_total_unaligned_raw_size@Us_tag_struct_definition@@@@YAKJ@Z");
//};

//unsigned long get_total_unaligned_raw_size<struct s_tag_block_definition>(long)
//{
//    mangled_ppc("??$get_total_unaligned_raw_size@Us_tag_block_definition@@@@YAKJ@Z");
//};

//unsigned long get_total_unaligned_raw_size<struct s_tag_resource_definition>(long)
//{
//    mangled_ppc("??$get_total_unaligned_raw_size@Us_tag_resource_definition@@@@YAKJ@Z");
//};

//public: void c_raw_storage_buffer_iterator::set_wrapped_array<class c_wrapped_array, struct s_tag_struct_definition>(class c_wrapped_array<struct s_tag_struct_definition> &, long)
//{
//    mangled_ppc("??$set_wrapped_array@Vc_wrapped_array@@Us_tag_struct_definition@@@c_raw_storage_buffer_iterator@@QAAXAAV?$c_wrapped_array@Us_tag_struct_definition@@@@J@Z");
//};

//public: void c_raw_storage_buffer_iterator::set_wrapped_array<class c_wrapped_array, struct s_tag_block_definition>(class c_wrapped_array<struct s_tag_block_definition> &, long)
//{
//    mangled_ppc("??$set_wrapped_array@Vc_wrapped_array@@Us_tag_block_definition@@@c_raw_storage_buffer_iterator@@QAAXAAV?$c_wrapped_array@Us_tag_block_definition@@@@J@Z");
//};

//public: void c_raw_storage_buffer_iterator::set_wrapped_array<class c_wrapped_array, struct s_tag_resource_definition>(class c_wrapped_array<struct s_tag_resource_definition> &, long)
//{
//    mangled_ppc("??$set_wrapped_array@Vc_wrapped_array@@Us_tag_resource_definition@@@c_raw_storage_buffer_iterator@@QAAXAAV?$c_wrapped_array@Us_tag_resource_definition@@@@J@Z");
//};

//public: void c_raw_storage_buffer_iterator::set_wrapped_array<class c_wrapped_array, struct s_tag_persist_aggregate_prechunk>(class c_wrapped_array<struct s_tag_persist_aggregate_prechunk> &, long)
//{
//    mangled_ppc("??$set_wrapped_array@Vc_wrapped_array@@Us_tag_persist_aggregate_prechunk@@@c_raw_storage_buffer_iterator@@QAAXAAV?$c_wrapped_array@Us_tag_persist_aggregate_prechunk@@@@J@Z");
//};

//public: bool c_persist_stream::read_typed<struct s_tag_persist_aggregate_prechunk>(struct s_tag_persist_aggregate_prechunk *, long)
//{
//    mangled_ppc("??$read_typed@Us_tag_persist_aggregate_prechunk@@@c_persist_stream@@QAA_NPAUs_tag_persist_aggregate_prechunk@@J@Z");
//};

//unsigned long get_total_unaligned_raw_size<struct s_tag_persist_struct_definition>(long)
//{
//    mangled_ppc("??$get_total_unaligned_raw_size@Us_tag_persist_struct_definition@@@@YAKJ@Z");
//};

//public: void c_raw_storage_buffer_iterator::set_wrapped_array<class c_wrapped_array, struct s_tag_persist_struct_definition>(class c_wrapped_array<struct s_tag_persist_struct_definition> &, long)
//{
//    mangled_ppc("??$set_wrapped_array@Vc_wrapped_array@@Us_tag_persist_struct_definition@@@c_raw_storage_buffer_iterator@@QAAXAAV?$c_wrapped_array@Us_tag_persist_struct_definition@@@@J@Z");
//};

//public: bool c_persist_stream::read_typed<struct s_tag_persist_struct_definition>(struct s_tag_persist_struct_definition *, long)
//{
//    mangled_ppc("??$read_typed@Us_tag_persist_struct_definition@@@c_persist_stream@@QAA_NPAUs_tag_persist_struct_definition@@J@Z");
//};

//unsigned long get_total_unaligned_raw_size<struct s_tag_persist_block_definition>(long)
//{
//    mangled_ppc("??$get_total_unaligned_raw_size@Us_tag_persist_block_definition@@@@YAKJ@Z");
//};

//public: void c_raw_storage_buffer_iterator::set_wrapped_array<class c_wrapped_array, struct s_tag_persist_block_definition>(class c_wrapped_array<struct s_tag_persist_block_definition> &, long)
//{
//    mangled_ppc("??$set_wrapped_array@Vc_wrapped_array@@Us_tag_persist_block_definition@@@c_raw_storage_buffer_iterator@@QAAXAAV?$c_wrapped_array@Us_tag_persist_block_definition@@@@J@Z");
//};

//public: bool c_persist_stream::read_typed<struct s_tag_persist_block_definition>(struct s_tag_persist_block_definition *, long)
//{
//    mangled_ppc("??$read_typed@Us_tag_persist_block_definition@@@c_persist_stream@@QAA_NPAUs_tag_persist_block_definition@@J@Z");
//};

//unsigned long get_total_unaligned_raw_size<struct s_tag_persist_resource_definition>(long)
//{
//    mangled_ppc("??$get_total_unaligned_raw_size@Us_tag_persist_resource_definition@@@@YAKJ@Z");
//};

//public: void c_raw_storage_buffer_iterator::set_wrapped_array<class c_wrapped_array, struct s_tag_persist_resource_definition>(class c_wrapped_array<struct s_tag_persist_resource_definition> &, long)
//{
//    mangled_ppc("??$set_wrapped_array@Vc_wrapped_array@@Us_tag_persist_resource_definition@@@c_raw_storage_buffer_iterator@@QAAXAAV?$c_wrapped_array@Us_tag_persist_resource_definition@@@@J@Z");
//};

//public: bool c_persist_stream::read_typed<struct s_tag_persist_resource_definition>(struct s_tag_persist_resource_definition *, long)
//{
//    mangled_ppc("??$read_typed@Us_tag_persist_resource_definition@@@c_persist_stream@@QAA_NPAUs_tag_persist_resource_definition@@J@Z");
//};

//unsigned long get_total_unaligned_raw_size<struct s_tag_persist_interop_definition>(long)
//{
//    mangled_ppc("??$get_total_unaligned_raw_size@Us_tag_persist_interop_definition@@@@YAKJ@Z");
//};

//unsigned long get_total_unaligned_raw_size<struct s_tag_interop_definition>(long)
//{
//    mangled_ppc("??$get_total_unaligned_raw_size@Us_tag_interop_definition@@@@YAKJ@Z");
//};

//public: void c_raw_storage_buffer_iterator::set_wrapped_array<class c_wrapped_array, struct s_tag_interop_definition>(class c_wrapped_array<struct s_tag_interop_definition> &, long)
//{
//    mangled_ppc("??$set_wrapped_array@Vc_wrapped_array@@Us_tag_interop_definition@@@c_raw_storage_buffer_iterator@@QAAXAAV?$c_wrapped_array@Us_tag_interop_definition@@@@J@Z");
//};

//public: void c_raw_storage_buffer_iterator::set_wrapped_array<class c_wrapped_array, struct s_tag_persist_interop_definition>(class c_wrapped_array<struct s_tag_persist_interop_definition> &, long)
//{
//    mangled_ppc("??$set_wrapped_array@Vc_wrapped_array@@Us_tag_persist_interop_definition@@@c_raw_storage_buffer_iterator@@QAAXAAV?$c_wrapped_array@Us_tag_persist_interop_definition@@@@J@Z");
//};

//public: bool c_persist_stream::read_typed<struct s_tag_persist_interop_definition>(struct s_tag_persist_interop_definition *, long)
//{
//    mangled_ppc("??$read_typed@Us_tag_persist_interop_definition@@@c_persist_stream@@QAA_NPAUs_tag_persist_interop_definition@@J@Z");
//};

//public: char const *& s_static_array<char const *, 62>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@PBD$0DO@@@QAAAAPBDJ@Z");
//};

//public: c_big_flags_typed<long, 62>::c_big_flags_typed<long, 62>(void)
//{
//    mangled_ppc("??0?$c_big_flags_typed@J$0DO@@@QAA@XZ");
//};

//char const *const * std::find<char const *const *, char const *>(char const *const *, char const *const *, char const *const &)
//{
//    mangled_ppc("??$find@PBQBDPBD@std@@YAPBQBDPBQBD0ABQBD@Z");
//};

//public: char * c_raw_storage_buffer_iterator::get_array_elements<char>(long)
//{
//    mangled_ppc("??$get_array_elements@D@c_raw_storage_buffer_iterator@@QAAPADJ@Z");
//};

//public: char const ** c_raw_storage_buffer_iterator::get_array_elements<char const *>(long)
//{
//    mangled_ppc("??$get_array_elements@PBD@c_raw_storage_buffer_iterator@@QAAPAPBDJ@Z");
//};

//public: struct s_tag_persist_index<0> * c_raw_storage_buffer_iterator::get_array_elements<struct s_tag_persist_index<0> >(long)
//{
//    mangled_ppc("??$get_array_elements@U?$s_tag_persist_index@$0A@@@@c_raw_storage_buffer_iterator@@QAAPAU?$s_tag_persist_index@$0A@@@J@Z");
//};

//public: struct s_string_list_definition * c_raw_storage_buffer_iterator::get_array_elements<struct s_string_list_definition>(long)
//{
//    mangled_ppc("??$get_array_elements@Us_string_list_definition@@@c_raw_storage_buffer_iterator@@QAAPAUs_string_list_definition@@J@Z");
//};

//public: struct s_tag_persist_string_list * c_raw_storage_buffer_iterator::get_array_elements<struct s_tag_persist_string_list>(long)
//{
//    mangled_ppc("??$get_array_elements@Us_tag_persist_string_list@@@c_raw_storage_buffer_iterator@@QAAPAUs_tag_persist_string_list@@J@Z");
//};

//public: struct s_block_index_custom_search_definition * c_raw_storage_buffer_iterator::get_array_elements<struct s_block_index_custom_search_definition>(long)
//{
//    mangled_ppc("??$get_array_elements@Us_block_index_custom_search_definition@@@c_raw_storage_buffer_iterator@@QAAPAUs_block_index_custom_search_definition@@J@Z");
//};

//struct s_block_index_custom_search_definition * std::_Checked_base<struct s_block_index_custom_search_definition *>(struct s_block_index_custom_search_definition *&)
//{
//    mangled_ppc("??$_Checked_base@PAUs_block_index_custom_search_definition@@@std@@YAPAUs_block_index_custom_search_definition@@AAPAU1@@Z");
//};

//void std::_Fill<struct s_block_index_custom_search_definition *, struct s_block_index_custom_search_definition>(struct s_block_index_custom_search_definition *, struct s_block_index_custom_search_definition *, struct s_block_index_custom_search_definition const &)
//{
//    mangled_ppc("??$_Fill@PAUs_block_index_custom_search_definition@@U1@@std@@YAXPAUs_block_index_custom_search_definition@@0ABU1@@Z");
//};

//public: struct s_tag_data_definition * c_raw_storage_buffer_iterator::get_array_elements<struct s_tag_data_definition>(long)
//{
//    mangled_ppc("??$get_array_elements@Us_tag_data_definition@@@c_raw_storage_buffer_iterator@@QAAPAUs_tag_data_definition@@J@Z");
//};

//struct s_tag_data_definition * std::_Checked_base<struct s_tag_data_definition *>(struct s_tag_data_definition *&)
//{
//    mangled_ppc("??$_Checked_base@PAUs_tag_data_definition@@@std@@YAPAUs_tag_data_definition@@AAPAU1@@Z");
//};

//void std::_Fill<struct s_tag_data_definition *, struct s_tag_data_definition>(struct s_tag_data_definition *, struct s_tag_data_definition *, struct s_tag_data_definition const &)
//{
//    mangled_ppc("??$_Fill@PAUs_tag_data_definition@@U1@@std@@YAXPAUs_tag_data_definition@@0ABU1@@Z");
//};

//public: struct s_tag_array_definition * c_raw_storage_buffer_iterator::get_array_elements<struct s_tag_array_definition>(long)
//{
//    mangled_ppc("??$get_array_elements@Us_tag_array_definition@@@c_raw_storage_buffer_iterator@@QAAPAUs_tag_array_definition@@J@Z");
//};

//public: struct s_tag_persist_array_definition * c_raw_storage_buffer_iterator::get_array_elements<struct s_tag_persist_array_definition>(long)
//{
//    mangled_ppc("??$get_array_elements@Us_tag_persist_array_definition@@@c_raw_storage_buffer_iterator@@QAAPAUs_tag_persist_array_definition@@J@Z");
//};

//public: enum e_tag_field * c_raw_storage_buffer_iterator::get_array_elements<enum e_tag_field>(long)
//{
//    mangled_ppc("??$get_array_elements@W4e_tag_field@@@c_raw_storage_buffer_iterator@@QAAPAW4e_tag_field@@J@Z");
//};

//public: struct s_tag_persist_field_type * c_raw_storage_buffer_iterator::get_array_elements<struct s_tag_persist_field_type>(long)
//{
//    mangled_ppc("??$get_array_elements@Us_tag_persist_field_type@@@c_raw_storage_buffer_iterator@@QAAPAUs_tag_persist_field_type@@J@Z");
//};

//public: struct s_tag_field * c_raw_storage_buffer_iterator::get_array_elements<struct s_tag_field>(long)
//{
//    mangled_ppc("??$get_array_elements@Us_tag_field@@@c_raw_storage_buffer_iterator@@QAAPAUs_tag_field@@J@Z");
//};

//public: struct s_tag_persist_field * c_raw_storage_buffer_iterator::get_array_elements<struct s_tag_persist_field>(long)
//{
//    mangled_ppc("??$get_array_elements@Us_tag_persist_field@@@c_raw_storage_buffer_iterator@@QAAPAUs_tag_persist_field@@J@Z");
//};

//public: struct s_tag_struct_definition * c_raw_storage_buffer_iterator::get_array_elements<struct s_tag_struct_definition>(long)
//{
//    mangled_ppc("??$get_array_elements@Us_tag_struct_definition@@@c_raw_storage_buffer_iterator@@QAAPAUs_tag_struct_definition@@J@Z");
//};

//public: struct s_tag_block_definition * c_raw_storage_buffer_iterator::get_array_elements<struct s_tag_block_definition>(long)
//{
//    mangled_ppc("??$get_array_elements@Us_tag_block_definition@@@c_raw_storage_buffer_iterator@@QAAPAUs_tag_block_definition@@J@Z");
//};

//public: struct s_tag_resource_definition * c_raw_storage_buffer_iterator::get_array_elements<struct s_tag_resource_definition>(long)
//{
//    mangled_ppc("??$get_array_elements@Us_tag_resource_definition@@@c_raw_storage_buffer_iterator@@QAAPAUs_tag_resource_definition@@J@Z");
//};

//public: struct s_tag_persist_aggregate_prechunk * c_raw_storage_buffer_iterator::get_array_elements<struct s_tag_persist_aggregate_prechunk>(long)
//{
//    mangled_ppc("??$get_array_elements@Us_tag_persist_aggregate_prechunk@@@c_raw_storage_buffer_iterator@@QAAPAUs_tag_persist_aggregate_prechunk@@J@Z");
//};

//public: struct s_tag_persist_struct_definition * c_raw_storage_buffer_iterator::get_array_elements<struct s_tag_persist_struct_definition>(long)
//{
//    mangled_ppc("??$get_array_elements@Us_tag_persist_struct_definition@@@c_raw_storage_buffer_iterator@@QAAPAUs_tag_persist_struct_definition@@J@Z");
//};

//public: struct s_tag_persist_block_definition * c_raw_storage_buffer_iterator::get_array_elements<struct s_tag_persist_block_definition>(long)
//{
//    mangled_ppc("??$get_array_elements@Us_tag_persist_block_definition@@@c_raw_storage_buffer_iterator@@QAAPAUs_tag_persist_block_definition@@J@Z");
//};

//public: struct s_tag_persist_resource_definition * c_raw_storage_buffer_iterator::get_array_elements<struct s_tag_persist_resource_definition>(long)
//{
//    mangled_ppc("??$get_array_elements@Us_tag_persist_resource_definition@@@c_raw_storage_buffer_iterator@@QAAPAUs_tag_persist_resource_definition@@J@Z");
//};

//public: struct s_tag_interop_definition * c_raw_storage_buffer_iterator::get_array_elements<struct s_tag_interop_definition>(long)
//{
//    mangled_ppc("??$get_array_elements@Us_tag_interop_definition@@@c_raw_storage_buffer_iterator@@QAAPAUs_tag_interop_definition@@J@Z");
//};

//public: struct s_tag_persist_interop_definition * c_raw_storage_buffer_iterator::get_array_elements<struct s_tag_persist_interop_definition>(long)
//{
//    mangled_ppc("??$get_array_elements@Us_tag_persist_interop_definition@@@c_raw_storage_buffer_iterator@@QAAPAUs_tag_persist_interop_definition@@J@Z");
//};

//public: static bool s_static_array<char const *, 62>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@PBD$0DO@@@SA_NJ@Z");
//};

//char const *const * std::_Checked_base<char const *const *>(char const *const *&)
//{
//    mangled_ppc("??$_Checked_base@PBQBD@std@@YAPBQBDAAPBQBD@Z");
//};

//char const *const * std::_Find<char const *const *, char const *>(char const *const *, char const *const *, char const *const &)
//{
//    mangled_ppc("??$_Find@PBQBDPBD@std@@YAPBQBDPBQBD0ABQBD@Z");
//};

//void std::_Checked_assign_from_base<char const *const *>(char const *const *&, char const *const *const &)
//{
//    mangled_ppc("??$_Checked_assign_from_base@PBQBD@std@@YAXAAPBQBDABQBQBD@Z");
//};

//struct s_block_index_custom_search_definition * std::_Checked_base<struct s_block_index_custom_search_definition *>(struct s_block_index_custom_search_definition *&, struct std::_Unchanged_checked_iterator_base_type_tag)
//{
//    mangled_ppc("??$_Checked_base@PAUs_block_index_custom_search_definition@@@std@@YAPAUs_block_index_custom_search_definition@@AAPAU1@U_Unchanged_checked_iterator_base_type_tag@0@@Z");
//};

//void std::_Debug_range<struct s_block_index_custom_search_definition *>(struct s_block_index_custom_search_definition *, struct s_block_index_custom_search_definition *, wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_range@PAUs_block_index_custom_search_definition@@@std@@YAXPAUs_block_index_custom_search_definition@@0PB_WI@Z");
//};

//struct s_tag_data_definition * std::_Checked_base<struct s_tag_data_definition *>(struct s_tag_data_definition *&, struct std::_Unchanged_checked_iterator_base_type_tag)
//{
//    mangled_ppc("??$_Checked_base@PAUs_tag_data_definition@@@std@@YAPAUs_tag_data_definition@@AAPAU1@U_Unchanged_checked_iterator_base_type_tag@0@@Z");
//};

//void std::_Debug_range<struct s_tag_data_definition *>(struct s_tag_data_definition *, struct s_tag_data_definition *, wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_range@PAUs_tag_data_definition@@@std@@YAXPAUs_tag_data_definition@@0PB_WI@Z");
//};

//char const *const * std::_Checked_base<char const *const *>(char const *const *&, struct std::_Unchanged_checked_iterator_base_type_tag)
//{
//    mangled_ppc("??$_Checked_base@PBQBD@std@@YAPBQBDAAPBQBDU_Unchanged_checked_iterator_base_type_tag@0@@Z");
//};

//void std::_Debug_range<char const *const *>(char const *const *, char const *const *, wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_range@PBQBD@std@@YAXPBQBD0PB_WI@Z");
//};

//struct std::random_access_iterator_tag std::_Iter_cat<struct s_block_index_custom_search_definition *>(struct s_block_index_custom_search_definition *const &)
//{
//    mangled_ppc("??$_Iter_cat@PAUs_block_index_custom_search_definition@@@std@@YA?AUrandom_access_iterator_tag@0@ABQAUs_block_index_custom_search_definition@@@Z");
//};

//void std::_Debug_range2<struct s_block_index_custom_search_definition *>(struct s_block_index_custom_search_definition *, struct s_block_index_custom_search_definition *, wchar_t const *, unsigned int, struct std::random_access_iterator_tag)
//{
//    mangled_ppc("??$_Debug_range2@PAUs_block_index_custom_search_definition@@@std@@YAXPAUs_block_index_custom_search_definition@@0PB_WIUrandom_access_iterator_tag@0@@Z");
//};

//struct std::random_access_iterator_tag std::_Iter_cat<struct s_tag_data_definition *>(struct s_tag_data_definition *const &)
//{
//    mangled_ppc("??$_Iter_cat@PAUs_tag_data_definition@@@std@@YA?AUrandom_access_iterator_tag@0@ABQAUs_tag_data_definition@@@Z");
//};

//void std::_Debug_range2<struct s_tag_data_definition *>(struct s_tag_data_definition *, struct s_tag_data_definition *, wchar_t const *, unsigned int, struct std::random_access_iterator_tag)
//{
//    mangled_ppc("??$_Debug_range2@PAUs_tag_data_definition@@@std@@YAXPAUs_tag_data_definition@@0PB_WIUrandom_access_iterator_tag@0@@Z");
//};

//struct std::random_access_iterator_tag std::_Iter_cat<char const *const *>(char const *const *const &)
//{
//    mangled_ppc("??$_Iter_cat@PBQBD@std@@YA?AUrandom_access_iterator_tag@0@ABQBQBD@Z");
//};

//void std::_Debug_range2<char const *const *>(char const *const *, char const *const *, wchar_t const *, unsigned int, struct std::random_access_iterator_tag)
//{
//    mangled_ppc("??$_Debug_range2@PBQBD@std@@YAXPBQBD0PB_WIUrandom_access_iterator_tag@0@@Z");
//};

//void std::_Debug_pointer<struct s_block_index_custom_search_definition>(struct s_block_index_custom_search_definition *, wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_pointer@Us_block_index_custom_search_definition@@@std@@YAXPAUs_block_index_custom_search_definition@@PB_WI@Z");
//};

//void std::_Debug_pointer<struct s_tag_data_definition>(struct s_tag_data_definition *, wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_pointer@Us_tag_data_definition@@@std@@YAXPAUs_tag_data_definition@@PB_WI@Z");
//};

//void std::_Debug_pointer<char const *>(char const *const *, wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_pointer@PBD@std@@YAXPBQBDPB_WI@Z");
//};

