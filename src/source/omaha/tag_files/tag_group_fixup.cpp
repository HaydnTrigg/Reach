/* ---------- headers */

#include "omaha\tag_files\tag_group_fixup.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const s_static_array<struct s_tag_field, 2>::k_element_count; // "?k_element_count@?$s_static_array@Us_tag_field@@$01@@2JB"
// public: static bool const c_tag_struct_fixup_builder::k_dump_find_status; // "?k_dump_find_status@c_tag_struct_fixup_builder@@2_NB"
// long volatile `private: bool __cdecl c_tag_struct_fixup_builder::find_fixups_recursive(struct s_stack_list_node<long> const &, struct s_tag_field const *, long, bool *)'::`208'::x_event_category_index; // "?x_event_category_index@?NA@??find_fixups_recursive@c_tag_struct_fixup_builder@@AAA_NABU?$s_stack_list_node@J@@PBUs_tag_field@@JPA_N@Z@4JC"
// long volatile `private: void __cdecl c_tag_struct_fixup_builder::optimize_aggregate_fixup(long, long, bool, enum e_tag_field_fixup_optimization_type *)'::`225'::x_event_category_index; // "?x_event_category_index@?OB@??optimize_aggregate_fixup@c_tag_struct_fixup_builder@@AAAXJJ_NPAW4e_tag_field_fixup_optimization_type@@@Z@4JC"
// long volatile `private: void __cdecl c_tag_struct_fixup_builder::optimize_aggregate_fixup(long, long, bool, enum e_tag_field_fixup_optimization_type *)'::`210'::x_event_category_index; // "?x_event_category_index@?NC@??optimize_aggregate_fixup@c_tag_struct_fixup_builder@@AAAXJJ_NPAW4e_tag_field_fixup_optimization_type@@@Z@4JC"
// long volatile `private: void __cdecl c_tag_struct_fixup_builder::optimize_aggregate_fixup(long, long, bool, enum e_tag_field_fixup_optimization_type *)'::`84'::x_event_category_index; // "?x_event_category_index@?FE@??optimize_aggregate_fixup@c_tag_struct_fixup_builder@@AAAXJJ_NPAW4e_tag_field_fixup_optimization_type@@@Z@4JC"
// long volatile `private: void __cdecl c_tag_struct_fixup_builder::update_source_field_definition(long, struct s_tag_field const *)'::`21'::x_event_category_index; // "?x_event_category_index@?BF@??update_source_field_definition@c_tag_struct_fixup_builder@@AAAXJPBUs_tag_field@@@Z@4JC"
// long volatile `private: void __cdecl c_tag_struct_fixup_builder::dump_fixup_codes_recursive(long, long)'::`28'::x_event_category_index; // "?x_event_category_index@?BM@??dump_fixup_codes_recursive@c_tag_struct_fixup_builder@@AAAXJJ@Z@4JC"
// long volatile `private: void __cdecl c_tag_struct_fixup_builder::dump_fixup_codes_recursive(long, long)'::`21'::x_event_category_index; // "?x_event_category_index@?BF@??dump_fixup_codes_recursive@c_tag_struct_fixup_builder@@AAAXJJ@Z@4JC"
// long volatile `private: void __cdecl c_tag_struct_fixup_builder::dump_fixup_codes_recursive(long, long)'::`6'::x_event_category_index; // "?x_event_category_index@?5??dump_fixup_codes_recursive@c_tag_struct_fixup_builder@@AAAXJJ@Z@4JC"

// struct s_tag_field const * get_first_tag_field(struct s_tag_field const *);
// struct s_tag_field * get_first_mutable_tag_field(struct s_tag_field *);
// struct s_tag_field const * get_next_tag_field(struct s_tag_field const *);
// struct s_tag_field * get_next_mutable_tag_field(struct s_tag_field *);
// long count_fields_recursive(struct s_tag_field const *);
// public: c_tag_field_iterator::c_tag_field_iterator(struct s_tag_field const *);
// public: struct s_tag_field const * c_tag_field_iterator::operator struct s_tag_field const *(void) const;
// public: bool c_tag_field_iterator::next(void);
// bool field_tree_node_less_than(struct s_tag_field_tree_node const &, struct s_tag_field_tree_node const &);
// void dump_field_tree_path(class c_wrapped_array<struct s_tag_field_tree_node> const &, class c_wrapped_array<long const> const &, class c_wrapped_array<char>);
// char const * tag_field_get_definition_name_for_debugging(struct s_tag_field const *);
// long tag_field_get_aggregate_size(struct s_tag_field const *);
// public: `private: static void c_tag_struct_fixup_builder::dump_tree_path_without_parent_reference(class c_wrapped_array<struct s_tag_field_tree_node const> const &, long, class c_wrapped_array<char>)'::`5'::c_name_visitor::c_name_visitor(class c_wrapped_array<char>);
// public: virtual void `private: static void c_tag_struct_fixup_builder::dump_tree_path_without_parent_reference(class c_wrapped_array<struct s_tag_field_tree_node const> const &, long, class c_wrapped_array<char>)'::`5'::c_name_visitor::visit(struct s_tag_field_tree_node const *);
// public: virtual void `private: static void c_tag_struct_fixup_builder::dump_tree_path_without_parent_reference(class c_wrapped_array<struct s_tag_field_tree_node const> const &, long, class c_wrapped_array<char>)'::`5'::c_name_visitor::visit_last_node(struct s_tag_field_tree_node const *);
// public: c_tag_struct_fixup_builder::c_tree_path_visitor::c_tree_path_visitor(void);
// class c_tag_group_fixupper * build_tag_group_fixupper(struct s_tag_block_definition *, class c_wrapped_array<struct s_tag_field>, struct s_tag_block_definition const *, class c_allocation_interface *, struct s_tag_group_fixup_build_result **, bool *);
// public: c_tag_root_definition::c_tag_root_definition(struct s_tag_block_definition const *);
// public: struct s_tag_field * c_tag_root_definition::get_mutable_root_field(void);
// public: static long c_tag_memory_layout_builder::get_total_field_tree_node_count(struct s_tag_block_definition const *);
// public: c_tag_struct_fixup_stream::c_tag_struct_fixup_stream(class c_raw_storage_buffer_iterator &, long);
// public: static long c_tag_struct_fixup_stream::get_additional_storage_size(long);
// public: static long c_tag_struct_fixup_builder::get_scratch_size(long, struct s_tag_block_definition const *);
// public: static long c_tag_struct_fixup_builder::get_fixup_stream_maximum_count(struct s_tag_block_definition const *);
// public: c_tag_struct_fixup_builder::c_tag_struct_fixup_builder(struct s_tag_block_definition const *, struct s_tag_field *, struct s_tag_block_definition const *, class c_wrapped_array<struct s_tag_field_tree_node const> const &, class c_wrapped_array<struct s_tag_field>, class c_raw_storage_buffer_iterator &);
// public: bool c_tag_struct_fixup_builder::create_fixups(bool *);
// public: struct s_tag_field const * c_tag_root_definition::get_fields(void) const;
// public: void c_tag_struct_fixup_builder::dump(void);
// public: struct s_tag_block_definition const * c_tag_struct_fixup_builder::get_fixup_source_definition(void);
// public: long c_tag_struct_fixup_builder::get_fixup_stream_count(void) const;
// public: bool c_tag_struct_fixup_builder::get_fixup_stream(class c_tag_struct_fixup_stream *) const;
// public: bool c_tag_struct_fixup_stream::set_fixup_stream(class c_wrapped_array<struct s_tag_field_fixup_datum const> const &);
// private: bool c_tag_struct_fixup_builder::find_fixups_recursive(struct s_stack_list_node<long> const &, struct s_tag_field const *, long, bool *);
// public: c_top_level_scope_field_iterator::c_top_level_scope_field_iterator(struct s_tag_field const *);
// public: long c_top_level_scope_field_iterator::find_field_node_index(class c_wrapped_array<struct s_tag_field_tree_node const> const &, struct s_stack_list_node<long> const &, class c_static_stack<struct s_stack_list_node<long>, 17> &, struct s_stack_list_node<long> *, class c_wrapped_array<char const> *, struct s_tag_field_fixup_datum *, enum e_tag_field_fixup_optimization_type *) const;
// public: c_tag_field_name_qualifier_iterator::c_tag_field_name_qualifier_iterator(class c_wrapped_array<char const> const &);
// public: c_non_destructive_string_tokenizer::c_non_destructive_string_tokenizer(class c_wrapped_array<char const> const &, class c_wrapped_array<char const> const &, enum e_string_tokenizer_mode);
// public: bool c_tag_field_name_qualifier_iterator::next(void);
// public: bool c_non_destructive_string_tokenizer::next(void);
// private: bool c_non_destructive_string_tokenizer::char_is_delimiter(char) const;
// public: class c_wrapped_array<char const> c_tag_field_name_qualifier_iterator::get_scope_qualifier(void) const;
// public: class c_wrapped_array<char const> c_non_destructive_string_tokenizer::get_token(void) const;
// public: c_tag_field_name_scope_iterator::c_tag_field_name_scope_iterator(class c_wrapped_array<char const> const &, struct s_tag_field const *);
// public: bool c_tag_field_name_scope_iterator::next(void);
// public: bool c_tag_field_name_scope_iterator::is_same_scope(void) const;
// public: bool c_tag_field_name_scope_iterator::is_scope_wildcard_match(void) const;
// public: bool c_tag_field_name_scope_iterator::is_parent_scope(void) const;
// public: class c_wrapped_array<char const> c_tag_field_name_scope_iterator::get_scope_part_name(void) const;
// public: bool c_tag_field_name_scope_iterator::scope_part_is_last_part(void) const;
// private: static bool c_tag_field_name_scope_iterator::string_is_parent_scope_string(class c_wrapped_array<char const> const &);
// private: static bool c_tag_field_name_scope_iterator::string_is_same_scope_string(class c_wrapped_array<char const> const &);
// private: static bool c_tag_field_name_scope_iterator::string_is_wildcard_match(class c_wrapped_array<char const> const &);
// public: class c_wrapped_array<char const> const & c_tag_field_name_splitter::get_qualifiers(void) const;
// public: bool c_tag_field_name_splitter::has_qualifiers(void) const;
// public: struct s_tag_field const * c_top_level_scope_field_iterator::get_field(void) const;
// public: unsigned long c_top_level_scope_field_iterator::get_base_offset(void) const;
// public: bool c_top_level_scope_field_iterator::next(void);
// public: bool c_top_level_scope_field_iterator::field_is_scope(void) const;
// public: bool c_top_level_scope_field_iterator::field_is_struct_scope(void) const;
// public: bool c_top_level_scope_field_iterator::field_is_resource(void) const;
// private: long c_top_level_scope_field_iterator::find_field_node_at_scope(class c_wrapped_array<struct s_tag_field_tree_node const> const &, long, class c_wrapped_array<char const> const &, bool, bool, struct s_tag_field_fixup_datum *, enum e_tag_field_fixup_optimization_type *) const;
// private: void c_tag_struct_fixup_builder::verify_source_path(class c_wrapped_array<struct s_tag_field_tree_node const> const &, struct s_stack_list_node<long> const &);
// private: static void c_tag_struct_fixup_builder::dump_tree_path_recursive(class c_wrapped_array<struct s_tag_field_tree_node const> const &, struct s_stack_list_node<long> const &, class c_wrapped_array<char>);
// private: static void c_tag_struct_fixup_builder::get_tree_path_offset(class c_wrapped_array<struct s_tag_field_tree_node const> const &, struct s_stack_list_node<long> const &, unsigned long *);
// private: static unsigned long c_tag_struct_fixup_builder::get_tree_path_root_size(class c_wrapped_array<struct s_tag_field_tree_node const> const &, struct s_stack_list_node<long> const &);
// private: void c_tag_struct_fixup_builder::optimize_aggregate_fixup(long, long, bool, enum e_tag_field_fixup_optimization_type *);
// private: void c_tag_struct_fixup_builder::build_path_to_fixup_datum(long, class c_wrapped_array<char>);
// private: void c_tag_struct_fixup_builder::update_source_field_definition(long, struct s_tag_field const *);
// private: void c_tag_struct_fixup_builder::update_source_aggregate_definition(long, struct s_tag_struct_definition *);
// private: static struct s_tag_struct_definition ** c_tag_struct_fixup_builder::get_field_aggregate_definition_reference(struct s_tag_field *);
// private: bool c_tag_struct_fixup_builder::field_tree_node_is_unmatched(long);
// private: void c_tag_struct_fixup_builder::set_node_and_fixup_mapping(long, long);
// private: void c_tag_struct_fixup_builder::dump_fixup_codes_recursive(long, long);
// private: static void c_tag_struct_fixup_builder::dump_tree_path_without_parent_reference(class c_wrapped_array<struct s_tag_field_tree_node const> const &, long, class c_wrapped_array<char>);
// private: static void c_tag_struct_fixup_builder::visit_tree_path_without_parent_references(class c_wrapped_array<struct s_tag_field_tree_node const> const &, long, class c_tag_struct_fixup_builder::c_tree_path_visitor *);
// private: long c_tag_struct_fixup_builder::get_next_fixup_index(long) const;
// bool build_tag_field_tree(class c_tag_root_definition *, class c_wrapped_array<struct s_tag_field_tree_node>);
// public: c_tag_memory_layout_builder::c_tag_memory_layout_builder(class c_tag_root_definition *, class c_wrapped_array<struct s_tag_field_tree_node>);
// public: bool c_tag_memory_layout_builder::build_field_tree(void);
// private: struct s_tag_field_tree_node & c_tag_memory_layout_builder::add_field_tree_node(void);
// private: void c_tag_memory_layout_builder::build_field_tree_recursive(struct s_tag_field const *, unsigned long *, long *, bool *);
// private: long c_tag_memory_layout_builder::get_field_tree_count(void) const;
// public: c_tag_group_fixupper_default::c_tag_group_fixupper_default(struct s_tag_block_definition const *, struct s_tag_block_definition const *, class c_tag_struct_fixup_stream *, bool);
// public: virtual bool c_tag_group_fixupper_default::fixup_tag(struct s_tag_block *, struct s_tag_block *, struct s_tag_fixup_context const *);
// public: bool c_tag_struct_fixup_stream::do_fixup(class c_basic_buffer<void> &, class c_basic_buffer<void> &, struct s_tag_fixup_context const *);
// public: virtual struct s_tag_block_definition const * c_tag_group_fixupper_default::get_source_block_definition(void);
// public: virtual struct s_tag_block_definition const * c_tag_group_fixupper_default::get_destination_block_definition(void);
// public: virtual bool c_tag_group_fixupper_default::xsynced_resources_still_valid(void);
// public: c_tag_group_fixupper::c_tag_group_fixupper(void);
// void dispose_tag_group_fixupper(class c_allocation_interface *, struct s_tag_group_fixup_build_result *);
// bool tag_group_test_fixup_codes(struct s_tag_block_definition *, class c_wrapped_array<struct s_tag_field>, class c_tag_persist_context *, struct s_tag_block *, struct s_tag_fixup_context const *);
// bool tag_definition_names_match(char const *, char const *);
// bool tag_struct_definitions_can_match_exactly(struct s_tag_struct_definition const *, struct s_tag_struct_definition const *);
// bool tag_string_list_definitions_match(struct s_string_list_definition const *, struct s_string_list_definition const *);
// bool tag_field_name_strings_match_for_fixup(char const *, char const *);
// bool tag_block_definitions_match(struct s_tag_block_definition const *, struct s_tag_block_definition const *, bool);
// bool tag_interop_definitions_match(struct s_tag_interop_definition const *, struct s_tag_interop_definition const *, bool);
// bool tag_resource_definitions_match(struct s_tag_resource_definition const *, struct s_tag_resource_definition const *, bool);
// bool tag_struct_definitions_match(struct s_tag_struct_definition const *, struct s_tag_struct_definition const *, bool);
// public: bool c_tag_definition_matcher::string_list_definitions_match_with_remapping(struct s_string_list_definition const *, struct s_string_list_definition const *);
// public: bool c_tag_definition_matcher::block_reference_definitions_match(struct s_tag_block_definition const *, struct s_tag_block_definition const *);
// public: bool c_tag_definition_matcher::string_list_definitions_match_exactly(struct s_string_list_definition const *, struct s_string_list_definition const *);
// public: bool c_tag_definition_matcher::data_definitions_match(struct s_tag_data_definition const *, struct s_tag_data_definition const *);
// public: bool c_tag_definition_matcher::custom_block_reference_definitions_match(struct s_block_index_custom_search_definition const *, struct s_block_index_custom_search_definition const *);
// public: char const & c_array_operator_interface<class c_wrapped_array_no_init<char const>, char const>::operator[](long) const;
// public: struct s_tag_field * c_wrapped_array_no_init<struct s_tag_field>::end(void);
// public: struct s_tag_field & c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_field>, struct s_tag_field>::operator[](long);
// public: struct s_tag_field const * s_static_array<struct s_tag_field, 2>::get_elements(void) const;
// public: c_wrapped_array<struct s_tag_field_tree_node>::c_wrapped_array<struct s_tag_field_tree_node>(void);
// public: long c_wrapped_array_no_init<struct s_tag_field_tree_node>::count(void) const;
// public: struct s_tag_field_tree_node const & c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_field_tree_node>, struct s_tag_field_tree_node>::operator[](long) const;
// public: struct s_tag_field_tree_node * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_field_tree_node>, struct s_tag_field_tree_node>::get_elements(void);
// public: c_fixed_sized_dynamic_array<struct s_tag_field_tree_node>::c_fixed_sized_dynamic_array<struct s_tag_field_tree_node>(struct s_tag_field_tree_node *, long, long);
// public: long c_fixed_sized_dynamic_array<struct s_tag_field_tree_node>::count(void) const;
// public: struct s_tag_field_tree_node & c_resizeable_array_operator_interface<class c_fixed_sized_dynamic_array<struct s_tag_field_tree_node>, struct s_tag_field_tree_node>::add_element(void);
// public: struct s_tag_field_tree_node & c_array_operator_interface<class c_fixed_sized_dynamic_array<struct s_tag_field_tree_node>, struct s_tag_field_tree_node>::operator[](long);
// public: long & c_array_operator_interface<class c_wrapped_array_no_init<long>, long>::operator[](long);
// public: void c_array_operator_interface<class c_wrapped_array_no_init<long>, long>::set_all(long const &);
// public: bool c_static_stack<struct s_stack_list_node<long>, 17>::empty(void) const;
// public: void c_static_stack<struct s_stack_list_node<long>, 17>::clear(void);
// public: long c_static_stack<struct s_stack_list_node<long>, 17>::push(void);
// public: void c_static_stack<struct s_stack_list_node<long>, 17>::pop(void);
// public: struct s_stack_list_node<long> * c_static_stack<struct s_stack_list_node<long>, 17>::get_top(void);
// public: c_static_stack<struct s_stack_list_node<long>, 17>::c_static_stack<struct s_stack_list_node<long>, 17>(void);
// public: struct s_tag_field_tree_node const * c_wrapped_array_no_init<struct s_tag_field_tree_node const>::begin(void) const;
// public: long c_wrapped_array_no_init<struct s_tag_field_tree_node const>::count(void) const;
// public: struct s_tag_field_tree_node const & c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_field_tree_node const>, struct s_tag_field_tree_node const>::operator[](long);
// public: struct s_tag_field_tree_node const & c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_field_tree_node const>, struct s_tag_field_tree_node const>::operator[](long) const;
// public: long c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_field_tree_node const>, struct s_tag_field_tree_node const>::get_total_element_size(void) const;
// public: bool c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_field_tree_node const>, struct s_tag_field_tree_node const>::valid_index(long) const;
// public: c_wrapped_array<struct s_tag_field_fixup_datum>::c_wrapped_array<struct s_tag_field_fixup_datum>(void);
// public: struct s_tag_field_fixup_datum * c_wrapped_array_no_init<struct s_tag_field_fixup_datum>::begin(void);
// public: long c_wrapped_array_no_init<struct s_tag_field_fixup_datum>::count(void) const;
// public: struct s_tag_field_fixup_datum & c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_field_fixup_datum>, struct s_tag_field_fixup_datum>::operator[](long);
// public: struct s_tag_field_fixup_datum const * c_wrapped_array_no_init<struct s_tag_field_fixup_datum const>::begin(void) const;
// public: struct s_tag_field_fixup_datum const * c_wrapped_array_no_init<struct s_tag_field_fixup_datum const>::end(void) const;
// public: long c_wrapped_array_no_init<struct s_tag_field_fixup_datum const>::count(void) const;
// public: struct s_tag_field_fixup_datum const & c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_field_fixup_datum const>, struct s_tag_field_fixup_datum const>::operator[](long) const;
// public: c_fixed_sized_dynamic_array<struct s_tag_field_fixup_datum>::c_fixed_sized_dynamic_array<struct s_tag_field_fixup_datum>(class c_raw_storage_buffer_iterator &, long);
// public: long c_fixed_sized_dynamic_array<struct s_tag_field_fixup_datum>::new_element_index(void);
// public: long c_fixed_sized_dynamic_array<struct s_tag_field_fixup_datum>::get_maximum_count(void) const;
// public: void c_fixed_sized_dynamic_array<struct s_tag_field_fixup_datum>::resize_cant_fail(long);
// public: long c_fixed_sized_dynamic_array<struct s_tag_field_fixup_datum>::count(void) const;
// public: struct s_tag_field_fixup_datum * c_array_operator_interface<class c_fixed_sized_dynamic_array<struct s_tag_field_fixup_datum>, struct s_tag_field_fixup_datum>::get_element(long);
// public: struct s_tag_field_fixup_datum const * c_array_operator_interface<class c_fixed_sized_dynamic_array<struct s_tag_field_fixup_datum>, struct s_tag_field_fixup_datum>::get_element(long) const;
// public: void c_self_destruct_dont_deallocate_pointer<class c_tag_struct_fixup_stream>::set_pointer_dont_destruct_old_pointer(class c_tag_struct_fixup_stream *);
// public: void c_self_destruct_dont_deallocate_pointer<class c_tag_group_fixupper_default>::set_pointer_dont_destruct_old_pointer(class c_tag_group_fixupper_default *);
// public: bool c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_field>, struct s_tag_field>::valid_index(long) const;
// public: c_wrapped_array<struct s_tag_field_tree_node>::c_wrapped_array<struct s_tag_field_tree_node>(struct s_tag_field_tree_node *, long);
// public: void c_wrapped_array_no_init<struct s_tag_field_tree_node>::set_elements(struct s_tag_field_tree_node *, long);
// public: struct s_tag_field_tree_node const * c_wrapped_array_no_init<struct s_tag_field_tree_node>::begin(void) const;
// public: struct s_tag_field_tree_node * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_field_tree_node>, struct s_tag_field_tree_node>::begin(void);
// public: bool c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_field_tree_node>, struct s_tag_field_tree_node>::valid_index(long) const;
// public: class c_wrapped_array_no_init<struct s_tag_field_tree_node> const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_field_tree_node> >::get_super_class(void) const;
// public: struct s_tag_field_tree_node * c_fixed_sized_dynamic_array<struct s_tag_field_tree_node>::begin(void);
// public: long c_resizeable_array_operator_interface<class c_fixed_sized_dynamic_array<struct s_tag_field_tree_node>, struct s_tag_field_tree_node>::new_element_index(void);
// public: struct s_tag_field_tree_node * c_array_operator_interface<class c_fixed_sized_dynamic_array<struct s_tag_field_tree_node>, struct s_tag_field_tree_node>::get_element(long);
// public: bool c_array_operator_interface<class c_fixed_sized_dynamic_array<struct s_tag_field_tree_node>, struct s_tag_field_tree_node>::valid_index(long) const;
// public: class c_fixed_sized_dynamic_array<struct s_tag_field_tree_node> * c_recursive_template_pattern<class c_fixed_sized_dynamic_array<struct s_tag_field_tree_node> >::get_super_class(void);
// public: long * c_array_operator_interface<class c_wrapped_array_no_init<long>, long>::begin(void);
// public: long * c_array_operator_interface<class c_wrapped_array_no_init<long>, long>::end(void);
// public: bool c_array_operator_interface<class c_wrapped_array_no_init<long>, long>::valid_index(long) const;
// public: class c_wrapped_array_no_init<long> * c_recursive_template_pattern<class c_wrapped_array_no_init<long> >::get_super_class(void);
// public: bool c_static_stack<struct s_stack_list_node<long>, 17>::valid(void) const;
// public: bool c_static_stack<struct s_stack_list_node<long>, 17>::full(void) const;
// public: long c_static_stack<struct s_stack_list_node<long>, 17>::top(void) const;
// public: struct s_stack_list_node<long> * c_static_stack<struct s_stack_list_node<long>, 17>::get(long);
// public: struct s_tag_field_tree_node const * c_wrapped_array_no_init<struct s_tag_field_tree_node const>::begin(void);
// public: long c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_field_tree_node const>, struct s_tag_field_tree_node const>::count(void) const;
// public: class c_wrapped_array_no_init<struct s_tag_field_tree_node const> * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_field_tree_node const> >::get_super_class(void);
// public: class c_wrapped_array_no_init<struct s_tag_field_tree_node const> const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_field_tree_node const> >::get_super_class(void) const;
// public: c_wrapped_array<struct s_tag_field_fixup_datum>::c_wrapped_array<struct s_tag_field_fixup_datum>(struct s_tag_field_fixup_datum *, long);
// public: void c_wrapped_array_no_init<struct s_tag_field_fixup_datum>::set_elements(struct s_tag_field_fixup_datum *, long);
// public: bool c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_field_fixup_datum>, struct s_tag_field_fixup_datum>::valid_index(long) const;
// public: class c_wrapped_array_no_init<struct s_tag_field_fixup_datum> * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_field_fixup_datum> >::get_super_class(void);
// public: bool c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_field_fixup_datum const>, struct s_tag_field_fixup_datum const>::valid_index(long) const;
// public: class c_wrapped_array_no_init<struct s_tag_field_fixup_datum const> const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_field_fixup_datum const> >::get_super_class(void) const;
// public: bool c_fixed_sized_dynamic_array<struct s_tag_field_fixup_datum>::resize(long);
// public: struct s_tag_field_fixup_datum * c_array_operator_interface<class c_fixed_sized_dynamic_array<struct s_tag_field_fixup_datum>, struct s_tag_field_fixup_datum>::begin(void);
// public: struct s_tag_field_fixup_datum const * c_array_operator_interface<class c_fixed_sized_dynamic_array<struct s_tag_field_fixup_datum>, struct s_tag_field_fixup_datum>::begin(void) const;
// public: bool c_array_operator_interface<class c_fixed_sized_dynamic_array<struct s_tag_field_fixup_datum>, struct s_tag_field_fixup_datum>::valid_index(long) const;
// public: long c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_field>, struct s_tag_field>::count(void) const;
// public: struct s_tag_field_tree_node * c_wrapped_array_no_init<struct s_tag_field_tree_node>::begin(void);
// public: long c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_field_tree_node>, struct s_tag_field_tree_node>::count(void) const;
// public: class c_wrapped_array_no_init<struct s_tag_field_tree_node> * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_field_tree_node> >::get_super_class(void);
// public: long c_fixed_sized_dynamic_array<struct s_tag_field_tree_node>::new_element_index(void);
// private: class c_fixed_sized_dynamic_array<struct s_tag_field_tree_node> * c_resizeable_array_operator_interface<class c_fixed_sized_dynamic_array<struct s_tag_field_tree_node>, struct s_tag_field_tree_node>::get_super_class(void);
// public: struct s_tag_field_tree_node * c_array_operator_interface<class c_fixed_sized_dynamic_array<struct s_tag_field_tree_node>, struct s_tag_field_tree_node>::begin(void);
// public: long c_array_operator_interface<class c_fixed_sized_dynamic_array<struct s_tag_field_tree_node>, struct s_tag_field_tree_node>::count(void) const;
// public: long c_array_operator_interface<class c_wrapped_array_no_init<long>, long>::count(void) const;
// public: bool c_static_stack<struct s_stack_list_node<long>, 17>::valid(long) const;
// public: long c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_field_fixup_datum>, struct s_tag_field_fixup_datum>::count(void) const;
// public: long c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_field_fixup_datum const>, struct s_tag_field_fixup_datum const>::count(void) const;
// public: struct s_tag_field_fixup_datum * c_fixed_sized_dynamic_array<struct s_tag_field_fixup_datum>::begin(void);
// public: struct s_tag_field_fixup_datum const * c_fixed_sized_dynamic_array<struct s_tag_field_fixup_datum>::begin(void) const;
// public: long c_array_operator_interface<class c_fixed_sized_dynamic_array<struct s_tag_field_fixup_datum>, struct s_tag_field_fixup_datum>::count(void) const;
// public: class c_fixed_sized_dynamic_array<struct s_tag_field_fixup_datum> * c_recursive_template_pattern<class c_fixed_sized_dynamic_array<struct s_tag_field_fixup_datum> >::get_super_class(void);
// public: class c_fixed_sized_dynamic_array<struct s_tag_field_fixup_datum> const * c_recursive_template_pattern<class c_fixed_sized_dynamic_array<struct s_tag_field_fixup_datum> >::get_super_class(void) const;
// public: class c_wrapped_array_no_init<struct s_tag_field> const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_field> >::get_super_class(void) const;
// public: class c_fixed_sized_dynamic_array<struct s_tag_field_tree_node> const * c_recursive_template_pattern<class c_fixed_sized_dynamic_array<struct s_tag_field_tree_node> >::get_super_class(void) const;
// public: struct s_tag_field_fixup_datum const * c_wrapped_array_no_init<struct s_tag_field_fixup_datum>::begin(void) const;
// public: class c_wrapped_array_no_init<struct s_tag_field_fixup_datum> const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_field_fixup_datum> >::get_super_class(void) const;
// public: c_wrapped_array<char const>::ctor<2>(char const (&)[2]);
// public: struct s_tag_field & s_static_array<struct s_tag_field, 2>::operator[]<int>(int);
// bool std::lexicographical_compare<char const *, char const *>(char const *, char const *, char const *, char const *);
// public: c_wrapped_array<char>::ctor<1024>(char (&)[1024]);
// unsigned long compute_wrapped_array_hash<char const>(class c_wrapped_array<char const> const &);
// public: void c_raw_storage_buffer_iterator::set_wrapped_array<class c_wrapped_array, struct s_tag_field_fixup_datum>(class c_wrapped_array<struct s_tag_field_fixup_datum> &, long);
// struct s_tag_field_fixup_datum * std::copy<struct s_tag_field_fixup_datum const *, struct s_tag_field_fixup_datum *>(struct s_tag_field_fixup_datum const *, struct s_tag_field_fixup_datum const *, struct s_tag_field_fixup_datum *);
// public: c_wrapped_array<struct s_tag_field_fixup_datum const>::ctor<struct s_tag_field_fixup_datum>(class c_wrapped_array<struct s_tag_field_fixup_datum> &);
// unsigned long get_total_unaligned_raw_size<struct s_tag_field_fixup_datum>(long);
// unsigned long get_total_unaligned_raw_size<long>(long);
// public: c_wrapped_array<struct s_tag_field>::ctor<struct s_tag_field>(class c_wrapped_array<struct s_tag_field> &);
// public: void c_raw_storage_buffer_iterator::set_wrapped_array<class c_wrapped_array, long>(class c_wrapped_array<long> &, long);
// public: c_wrapped_array<struct s_tag_field_fixup_datum const>::ctor<class c_fixed_sized_dynamic_array<struct s_tag_field_fixup_datum>, struct s_tag_field_fixup_datum>(class c_array_operator_interface<class c_fixed_sized_dynamic_array<struct s_tag_field_fixup_datum>, struct s_tag_field_fixup_datum> const &);
// public: c_wrapped_array<struct s_tag_field_tree_node>::ctor<struct s_tag_field_tree_node>(class c_wrapped_array<struct s_tag_field_tree_node> &);
// public: void c_raw_storage_buffer_iterator::set_wrapped_array<class c_wrapped_array, struct s_tag_field_tree_node>(class c_wrapped_array<struct s_tag_field_tree_node> &, long);
// public: c_wrapped_array<struct s_tag_field_tree_node const>::ctor<struct s_tag_field_tree_node>(class c_wrapped_array<struct s_tag_field_tree_node> &);
// unsigned long get_total_unaligned_raw_size<struct s_tag_group_fixup_build_result>(long);
// unsigned long get_total_unaligned_raw_size<class c_tag_struct_fixup_stream>(long);
// unsigned long get_total_unaligned_raw_size<class c_tag_group_fixupper_default>(long);
// public: struct s_tag_group_fixup_build_result * c_raw_storage_buffer_iterator::get_array_elements<struct s_tag_group_fixup_build_result>(long);
// public: class c_tag_struct_fixup_stream * c_raw_storage_buffer_iterator::get_array_elements<class c_tag_struct_fixup_stream>(long);
// public: class c_tag_group_fixupper_default * c_raw_storage_buffer_iterator::get_array_elements<class c_tag_group_fixupper_default>(long);
// void destruct_in_place<struct s_tag_group_fixup_build_result>(struct s_tag_group_fixup_build_result *);
// bool std::equal<char const **, char const **, bool (*)(char const *, char const **)>(char const **, char const **, char const **, bool (*)(char const *, char const *));
// struct s_block_index_custom_search_definition const * get_field_definition<2>(struct s_tag_field const *);
// public: struct s_tag_field_fixup_datum * c_raw_storage_buffer_iterator::get_array_elements<struct s_tag_field_fixup_datum>(long);
// public: void * s_tag_group_fixup_build_result::`scalar deleting destructor'(unsigned int);
// public: s_tag_group_fixup_build_result::~s_tag_group_fixup_build_result(void);
// public: long c_array_operator_interface<class c_wrapped_array_no_init<char const>, char const>::get_total_element_size(void) const;
// public: void c_wrapped_array_no_init<struct s_tag_field_tree_node const>::set_elements(struct s_tag_field_tree_node const *, long);
// public: struct s_tag_field_fixup_datum * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_field_fixup_datum>, struct s_tag_field_fixup_datum>::get_elements(void);
// public: void c_wrapped_array_no_init<struct s_tag_field_fixup_datum const>::set_elements(struct s_tag_field_fixup_datum const *, long);
// public: struct s_tag_field_fixup_datum const * c_array_operator_interface<class c_fixed_sized_dynamic_array<struct s_tag_field_fixup_datum>, struct s_tag_field_fixup_datum>::get_elements(void) const;
// public: c_self_destruct_dont_deallocate_pointer<class c_tag_struct_fixup_stream>::~c_self_destruct_dont_deallocate_pointer<class c_tag_struct_fixup_stream>(void);
// public: c_self_destruct_dont_deallocate_pointer<class c_tag_group_fixupper_default>::~c_self_destruct_dont_deallocate_pointer<class c_tag_group_fixupper_default>(void);
// public: struct s_tag_field_fixup_datum * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_field_fixup_datum>, struct s_tag_field_fixup_datum>::begin(void);
// public: static bool s_static_array<struct s_tag_field, 2>::valid<int>(int);
// bool std::_Lexicographical_compare<char const *, char const *>(char const *, char const *, char const *, char const *);
// struct s_tag_field_fixup_datum const * std::_Checked_base<struct s_tag_field_fixup_datum const *>(struct s_tag_field_fixup_datum const *&);
// struct std::random_access_iterator_tag std::_Iter_random<struct s_tag_field_fixup_datum const *, struct s_tag_field_fixup_datum *>(struct s_tag_field_fixup_datum const *const &, struct s_tag_field_fixup_datum *const &);
// struct std::_Nonscalar_ptr_iterator_tag std::_Ptr_cat<struct s_tag_field_fixup_datum const *, struct s_tag_field_fixup_datum *>(struct s_tag_field_fixup_datum const *&, struct s_tag_field_fixup_datum *&);
// struct s_tag_field_fixup_datum * std::_Copy_opt<struct s_tag_field_fixup_datum const *, struct s_tag_field_fixup_datum *>(struct s_tag_field_fixup_datum const *, struct s_tag_field_fixup_datum const *, struct s_tag_field_fixup_datum *, struct std::random_access_iterator_tag, struct std::_Nonscalar_ptr_iterator_tag, struct std::_Range_checked_iterator_tag);
// public: long * c_raw_storage_buffer_iterator::get_array_elements<long>(long);
// public: struct s_tag_field_tree_node * c_raw_storage_buffer_iterator::get_array_elements<struct s_tag_field_tree_node>(long);
// char const ** std::_Checked_base<char const **>(char const **&);
// struct std::random_access_iterator_tag std::_Iter_random<char const **, char const **>(char const **const &, char const **const &);
// bool std::_Equal<char const **, char const **, bool (*)(char const *, char const **)>(char const **, char const **, char const **, bool (*)(char const *, char const *), struct std::random_access_iterator_tag, struct std::_Range_checked_iterator_tag);
// void destruct_in_place<class c_tag_struct_fixup_stream>(class c_tag_struct_fixup_stream *);
// void destruct_in_place<class c_tag_group_fixupper_default>(class c_tag_group_fixupper_default *);
// bool std::_Debug_lt<char, char>(char const &, char const &, wchar_t const *, unsigned int);
// struct s_tag_field_fixup_datum const * std::_Checked_base<struct s_tag_field_fixup_datum const *>(struct s_tag_field_fixup_datum const *&, struct std::_Unchanged_checked_iterator_base_type_tag);
// struct s_tag_field_fixup_datum * std::_Checked_base<struct s_tag_field_fixup_datum *>(struct s_tag_field_fixup_datum *&);
// struct s_tag_field_fixup_datum * std::_Copy_opt<struct s_tag_field_fixup_datum const *, struct s_tag_field_fixup_datum *, struct std::forward_iterator_tag>(struct s_tag_field_fixup_datum const *, struct s_tag_field_fixup_datum const *, struct s_tag_field_fixup_datum *, struct std::forward_iterator_tag, struct std::_Nonscalar_ptr_iterator_tag, struct std::_Range_checked_iterator_tag);
// char const ** std::_Checked_base<char const **>(char const **&, struct std::_Unchanged_checked_iterator_base_type_tag);
// bool std::_Equal<char const **, char const **, bool (*)(char const *, char const **), struct std::forward_iterator_tag>(char const **, char const **, char const **, bool (*)(char const *, char const *), struct std::forward_iterator_tag, struct std::_Range_checked_iterator_tag);
// struct s_tag_field_fixup_datum * std::_Checked_base<struct s_tag_field_fixup_datum *>(struct s_tag_field_fixup_datum *&, struct std::_Unchanged_checked_iterator_base_type_tag);
// void std::_Debug_range<struct s_tag_field_fixup_datum const *>(struct s_tag_field_fixup_datum const *, struct s_tag_field_fixup_datum const *, wchar_t const *, unsigned int);
// struct std::random_access_iterator_tag std::_Iter_cat<struct s_tag_field_fixup_datum const *>(struct s_tag_field_fixup_datum const *const &);
// void std::_Debug_range2<struct s_tag_field_fixup_datum const *>(struct s_tag_field_fixup_datum const *, struct s_tag_field_fixup_datum const *, wchar_t const *, unsigned int, struct std::random_access_iterator_tag);
// void std::_Debug_pointer<struct s_tag_field_fixup_datum>(struct s_tag_field_fixup_datum const *, wchar_t const *, unsigned int);

//struct s_tag_field const * get_first_tag_field(struct s_tag_field const *)
//{
//    mangled_ppc("?get_first_tag_field@@YAPBUs_tag_field@@PBU1@@Z");
//};

//struct s_tag_field * get_first_mutable_tag_field(struct s_tag_field *)
//{
//    mangled_ppc("?get_first_mutable_tag_field@@YAPAUs_tag_field@@PAU1@@Z");
//};

//struct s_tag_field const * get_next_tag_field(struct s_tag_field const *)
//{
//    mangled_ppc("?get_next_tag_field@@YAPBUs_tag_field@@PBU1@@Z");
//};

//struct s_tag_field * get_next_mutable_tag_field(struct s_tag_field *)
//{
//    mangled_ppc("?get_next_mutable_tag_field@@YAPAUs_tag_field@@PAU1@@Z");
//};

//long count_fields_recursive(struct s_tag_field const *)
//{
//    mangled_ppc("?count_fields_recursive@@YAJPBUs_tag_field@@@Z");
//};

//public: c_tag_field_iterator::c_tag_field_iterator(struct s_tag_field const *)
//{
//    mangled_ppc("??0c_tag_field_iterator@@QAA@PBUs_tag_field@@@Z");
//};

//public: struct s_tag_field const * c_tag_field_iterator::operator struct s_tag_field const *(void) const
//{
//    mangled_ppc("??Bc_tag_field_iterator@@QBAPBUs_tag_field@@XZ");
//};

//public: bool c_tag_field_iterator::next(void)
//{
//    mangled_ppc("?next@c_tag_field_iterator@@QAA_NXZ");
//};

//bool field_tree_node_less_than(struct s_tag_field_tree_node const &, struct s_tag_field_tree_node const &)
//{
//    mangled_ppc("?field_tree_node_less_than@@YA_NABUs_tag_field_tree_node@@0@Z");
//};

//void dump_field_tree_path(class c_wrapped_array<struct s_tag_field_tree_node> const &, class c_wrapped_array<long const> const &, class c_wrapped_array<char>)
//{
//    mangled_ppc("?dump_field_tree_path@@YAXABV?$c_wrapped_array@Us_tag_field_tree_node@@@@ABV?$c_wrapped_array@$$CBJ@@V?$c_wrapped_array@D@@@Z");
//};

//char const * tag_field_get_definition_name_for_debugging(struct s_tag_field const *)
//{
//    mangled_ppc("?tag_field_get_definition_name_for_debugging@@YAPBDPBUs_tag_field@@@Z");
//};

//long tag_field_get_aggregate_size(struct s_tag_field const *)
//{
//    mangled_ppc("?tag_field_get_aggregate_size@@YAJPBUs_tag_field@@@Z");
//};

//public: `private: static void c_tag_struct_fixup_builder::dump_tree_path_without_parent_reference(class c_wrapped_array<struct s_tag_field_tree_node const> const &, long, class c_wrapped_array<char>)'::`5'::c_name_visitor::c_name_visitor(class c_wrapped_array<char>)
//{
//    mangled_ppc("??0c_name_visitor@?4??dump_tree_path_without_parent_reference@c_tag_struct_fixup_builder@@CAXABV?$c_wrapped_array@$$CBUs_tag_field_tree_node@@@@JV?$c_wrapped_array@D@@@Z@QAA@1@Z");
//};

//public: virtual void `private: static void c_tag_struct_fixup_builder::dump_tree_path_without_parent_reference(class c_wrapped_array<struct s_tag_field_tree_node const> const &, long, class c_wrapped_array<char>)'::`5'::c_name_visitor::visit(struct s_tag_field_tree_node const *)
//{
//    mangled_ppc("?visit@c_name_visitor@?4??dump_tree_path_without_parent_reference@c_tag_struct_fixup_builder@@CAXABV?$c_wrapped_array@$$CBUs_tag_field_tree_node@@@@JV?$c_wrapped_array@D@@@Z@UAAXPBUs_tag_field_tree_node@@@Z");
//};

//public: virtual void `private: static void c_tag_struct_fixup_builder::dump_tree_path_without_parent_reference(class c_wrapped_array<struct s_tag_field_tree_node const> const &, long, class c_wrapped_array<char>)'::`5'::c_name_visitor::visit_last_node(struct s_tag_field_tree_node const *)
//{
//    mangled_ppc("?visit_last_node@c_name_visitor@?4??dump_tree_path_without_parent_reference@c_tag_struct_fixup_builder@@CAXABV?$c_wrapped_array@$$CBUs_tag_field_tree_node@@@@JV?$c_wrapped_array@D@@@Z@UAAXPBUs_tag_field_tree_node@@@Z");
//};

//public: c_tag_struct_fixup_builder::c_tree_path_visitor::c_tree_path_visitor(void)
//{
//    mangled_ppc("??0c_tree_path_visitor@c_tag_struct_fixup_builder@@QAA@XZ");
//};

//class c_tag_group_fixupper * build_tag_group_fixupper(struct s_tag_block_definition *, class c_wrapped_array<struct s_tag_field>, struct s_tag_block_definition const *, class c_allocation_interface *, struct s_tag_group_fixup_build_result **, bool *)
//{
//    mangled_ppc("?build_tag_group_fixupper@@YAPAVc_tag_group_fixupper@@PAUs_tag_block_definition@@V?$c_wrapped_array@Us_tag_field@@@@PBU2@PAVc_allocation_interface@@PAPAUs_tag_group_fixup_build_result@@PA_N@Z");
//};

//public: c_tag_root_definition::c_tag_root_definition(struct s_tag_block_definition const *)
//{
//    mangled_ppc("??0c_tag_root_definition@@QAA@PBUs_tag_block_definition@@@Z");
//};

//public: struct s_tag_field * c_tag_root_definition::get_mutable_root_field(void)
//{
//    mangled_ppc("?get_mutable_root_field@c_tag_root_definition@@QAAPAUs_tag_field@@XZ");
//};

//public: static long c_tag_memory_layout_builder::get_total_field_tree_node_count(struct s_tag_block_definition const *)
//{
//    mangled_ppc("?get_total_field_tree_node_count@c_tag_memory_layout_builder@@SAJPBUs_tag_block_definition@@@Z");
//};

//public: c_tag_struct_fixup_stream::c_tag_struct_fixup_stream(class c_raw_storage_buffer_iterator &, long)
//{
//    mangled_ppc("??0c_tag_struct_fixup_stream@@QAA@AAVc_raw_storage_buffer_iterator@@J@Z");
//};

//public: static long c_tag_struct_fixup_stream::get_additional_storage_size(long)
//{
//    mangled_ppc("?get_additional_storage_size@c_tag_struct_fixup_stream@@SAJJ@Z");
//};

//public: static long c_tag_struct_fixup_builder::get_scratch_size(long, struct s_tag_block_definition const *)
//{
//    mangled_ppc("?get_scratch_size@c_tag_struct_fixup_builder@@SAJJPBUs_tag_block_definition@@@Z");
//};

//public: static long c_tag_struct_fixup_builder::get_fixup_stream_maximum_count(struct s_tag_block_definition const *)
//{
//    mangled_ppc("?get_fixup_stream_maximum_count@c_tag_struct_fixup_builder@@SAJPBUs_tag_block_definition@@@Z");
//};

//public: c_tag_struct_fixup_builder::c_tag_struct_fixup_builder(struct s_tag_block_definition const *, struct s_tag_field *, struct s_tag_block_definition const *, class c_wrapped_array<struct s_tag_field_tree_node const> const &, class c_wrapped_array<struct s_tag_field>, class c_raw_storage_buffer_iterator &)
//{
//    mangled_ppc("??0c_tag_struct_fixup_builder@@QAA@PBUs_tag_block_definition@@PAUs_tag_field@@0ABV?$c_wrapped_array@$$CBUs_tag_field_tree_node@@@@V?$c_wrapped_array@Us_tag_field@@@@AAVc_raw_storage_buffer_iterator@@@Z");
//};

//public: bool c_tag_struct_fixup_builder::create_fixups(bool *)
//{
//    mangled_ppc("?create_fixups@c_tag_struct_fixup_builder@@QAA_NPA_N@Z");
//};

//public: struct s_tag_field const * c_tag_root_definition::get_fields(void) const
//{
//    mangled_ppc("?get_fields@c_tag_root_definition@@QBAPBUs_tag_field@@XZ");
//};

//public: void c_tag_struct_fixup_builder::dump(void)
//{
//    mangled_ppc("?dump@c_tag_struct_fixup_builder@@QAAXXZ");
//};

//public: struct s_tag_block_definition const * c_tag_struct_fixup_builder::get_fixup_source_definition(void)
//{
//    mangled_ppc("?get_fixup_source_definition@c_tag_struct_fixup_builder@@QAAPBUs_tag_block_definition@@XZ");
//};

//public: long c_tag_struct_fixup_builder::get_fixup_stream_count(void) const
//{
//    mangled_ppc("?get_fixup_stream_count@c_tag_struct_fixup_builder@@QBAJXZ");
//};

//public: bool c_tag_struct_fixup_builder::get_fixup_stream(class c_tag_struct_fixup_stream *) const
//{
//    mangled_ppc("?get_fixup_stream@c_tag_struct_fixup_builder@@QBA_NPAVc_tag_struct_fixup_stream@@@Z");
//};

//public: bool c_tag_struct_fixup_stream::set_fixup_stream(class c_wrapped_array<struct s_tag_field_fixup_datum const> const &)
//{
//    mangled_ppc("?set_fixup_stream@c_tag_struct_fixup_stream@@QAA_NABV?$c_wrapped_array@$$CBUs_tag_field_fixup_datum@@@@@Z");
//};

//private: bool c_tag_struct_fixup_builder::find_fixups_recursive(struct s_stack_list_node<long> const &, struct s_tag_field const *, long, bool *)
//{
//    mangled_ppc("?find_fixups_recursive@c_tag_struct_fixup_builder@@AAA_NABU?$s_stack_list_node@J@@PBUs_tag_field@@JPA_N@Z");
//};

//public: c_top_level_scope_field_iterator::c_top_level_scope_field_iterator(struct s_tag_field const *)
//{
//    mangled_ppc("??0c_top_level_scope_field_iterator@@QAA@PBUs_tag_field@@@Z");
//};

//public: long c_top_level_scope_field_iterator::find_field_node_index(class c_wrapped_array<struct s_tag_field_tree_node const> const &, struct s_stack_list_node<long> const &, class c_static_stack<struct s_stack_list_node<long>, 17> &, struct s_stack_list_node<long> *, class c_wrapped_array<char const> *, struct s_tag_field_fixup_datum *, enum e_tag_field_fixup_optimization_type *) const
//{
//    mangled_ppc("?find_field_node_index@c_top_level_scope_field_iterator@@QBAJABV?$c_wrapped_array@$$CBUs_tag_field_tree_node@@@@ABU?$s_stack_list_node@J@@AAV?$c_static_stack@U?$s_stack_list_node@J@@$0BB@@@PAU3@PAV?$c_wrapped_array@$$CBD@@PAUs_tag_field_fixup_datum@@PAW4e_tag_field_fixup_optimization_type@@@Z");
//};

//public: c_tag_field_name_qualifier_iterator::c_tag_field_name_qualifier_iterator(class c_wrapped_array<char const> const &)
//{
//    mangled_ppc("??0c_tag_field_name_qualifier_iterator@@QAA@ABV?$c_wrapped_array@$$CBD@@@Z");
//};

//public: c_non_destructive_string_tokenizer::c_non_destructive_string_tokenizer(class c_wrapped_array<char const> const &, class c_wrapped_array<char const> const &, enum e_string_tokenizer_mode)
//{
//    mangled_ppc("??0c_non_destructive_string_tokenizer@@QAA@ABV?$c_wrapped_array@$$CBD@@0W4e_string_tokenizer_mode@@@Z");
//};

//public: bool c_tag_field_name_qualifier_iterator::next(void)
//{
//    mangled_ppc("?next@c_tag_field_name_qualifier_iterator@@QAA_NXZ");
//};

//public: bool c_non_destructive_string_tokenizer::next(void)
//{
//    mangled_ppc("?next@c_non_destructive_string_tokenizer@@QAA_NXZ");
//};

//private: bool c_non_destructive_string_tokenizer::char_is_delimiter(char) const
//{
//    mangled_ppc("?char_is_delimiter@c_non_destructive_string_tokenizer@@ABA_ND@Z");
//};

//public: class c_wrapped_array<char const> c_tag_field_name_qualifier_iterator::get_scope_qualifier(void) const
//{
//    mangled_ppc("?get_scope_qualifier@c_tag_field_name_qualifier_iterator@@QBA?AV?$c_wrapped_array@$$CBD@@XZ");
//};

//public: class c_wrapped_array<char const> c_non_destructive_string_tokenizer::get_token(void) const
//{
//    mangled_ppc("?get_token@c_non_destructive_string_tokenizer@@QBA?AV?$c_wrapped_array@$$CBD@@XZ");
//};

//public: c_tag_field_name_scope_iterator::c_tag_field_name_scope_iterator(class c_wrapped_array<char const> const &, struct s_tag_field const *)
//{
//    mangled_ppc("??0c_tag_field_name_scope_iterator@@QAA@ABV?$c_wrapped_array@$$CBD@@PBUs_tag_field@@@Z");
//};

//public: bool c_tag_field_name_scope_iterator::next(void)
//{
//    mangled_ppc("?next@c_tag_field_name_scope_iterator@@QAA_NXZ");
//};

//public: bool c_tag_field_name_scope_iterator::is_same_scope(void) const
//{
//    mangled_ppc("?is_same_scope@c_tag_field_name_scope_iterator@@QBA_NXZ");
//};

//public: bool c_tag_field_name_scope_iterator::is_scope_wildcard_match(void) const
//{
//    mangled_ppc("?is_scope_wildcard_match@c_tag_field_name_scope_iterator@@QBA_NXZ");
//};

//public: bool c_tag_field_name_scope_iterator::is_parent_scope(void) const
//{
//    mangled_ppc("?is_parent_scope@c_tag_field_name_scope_iterator@@QBA_NXZ");
//};

//public: class c_wrapped_array<char const> c_tag_field_name_scope_iterator::get_scope_part_name(void) const
//{
//    mangled_ppc("?get_scope_part_name@c_tag_field_name_scope_iterator@@QBA?AV?$c_wrapped_array@$$CBD@@XZ");
//};

//public: bool c_tag_field_name_scope_iterator::scope_part_is_last_part(void) const
//{
//    mangled_ppc("?scope_part_is_last_part@c_tag_field_name_scope_iterator@@QBA_NXZ");
//};

//private: static bool c_tag_field_name_scope_iterator::string_is_parent_scope_string(class c_wrapped_array<char const> const &)
//{
//    mangled_ppc("?string_is_parent_scope_string@c_tag_field_name_scope_iterator@@CA_NABV?$c_wrapped_array@$$CBD@@@Z");
//};

//private: static bool c_tag_field_name_scope_iterator::string_is_same_scope_string(class c_wrapped_array<char const> const &)
//{
//    mangled_ppc("?string_is_same_scope_string@c_tag_field_name_scope_iterator@@CA_NABV?$c_wrapped_array@$$CBD@@@Z");
//};

//private: static bool c_tag_field_name_scope_iterator::string_is_wildcard_match(class c_wrapped_array<char const> const &)
//{
//    mangled_ppc("?string_is_wildcard_match@c_tag_field_name_scope_iterator@@CA_NABV?$c_wrapped_array@$$CBD@@@Z");
//};

//public: class c_wrapped_array<char const> const & c_tag_field_name_splitter::get_qualifiers(void) const
//{
//    mangled_ppc("?get_qualifiers@c_tag_field_name_splitter@@QBAABV?$c_wrapped_array@$$CBD@@XZ");
//};

//public: bool c_tag_field_name_splitter::has_qualifiers(void) const
//{
//    mangled_ppc("?has_qualifiers@c_tag_field_name_splitter@@QBA_NXZ");
//};

//public: struct s_tag_field const * c_top_level_scope_field_iterator::get_field(void) const
//{
//    mangled_ppc("?get_field@c_top_level_scope_field_iterator@@QBAPBUs_tag_field@@XZ");
//};

//public: unsigned long c_top_level_scope_field_iterator::get_base_offset(void) const
//{
//    mangled_ppc("?get_base_offset@c_top_level_scope_field_iterator@@QBAKXZ");
//};

//public: bool c_top_level_scope_field_iterator::next(void)
//{
//    mangled_ppc("?next@c_top_level_scope_field_iterator@@QAA_NXZ");
//};

//public: bool c_top_level_scope_field_iterator::field_is_scope(void) const
//{
//    mangled_ppc("?field_is_scope@c_top_level_scope_field_iterator@@QBA_NXZ");
//};

//public: bool c_top_level_scope_field_iterator::field_is_struct_scope(void) const
//{
//    mangled_ppc("?field_is_struct_scope@c_top_level_scope_field_iterator@@QBA_NXZ");
//};

//public: bool c_top_level_scope_field_iterator::field_is_resource(void) const
//{
//    mangled_ppc("?field_is_resource@c_top_level_scope_field_iterator@@QBA_NXZ");
//};

//private: long c_top_level_scope_field_iterator::find_field_node_at_scope(class c_wrapped_array<struct s_tag_field_tree_node const> const &, long, class c_wrapped_array<char const> const &, bool, bool, struct s_tag_field_fixup_datum *, enum e_tag_field_fixup_optimization_type *) const
//{
//    mangled_ppc("?find_field_node_at_scope@c_top_level_scope_field_iterator@@ABAJABV?$c_wrapped_array@$$CBUs_tag_field_tree_node@@@@JABV?$c_wrapped_array@$$CBD@@_N2PAUs_tag_field_fixup_datum@@PAW4e_tag_field_fixup_optimization_type@@@Z");
//};

//private: void c_tag_struct_fixup_builder::verify_source_path(class c_wrapped_array<struct s_tag_field_tree_node const> const &, struct s_stack_list_node<long> const &)
//{
//    mangled_ppc("?verify_source_path@c_tag_struct_fixup_builder@@AAAXABV?$c_wrapped_array@$$CBUs_tag_field_tree_node@@@@ABU?$s_stack_list_node@J@@@Z");
//};

//private: static void c_tag_struct_fixup_builder::dump_tree_path_recursive(class c_wrapped_array<struct s_tag_field_tree_node const> const &, struct s_stack_list_node<long> const &, class c_wrapped_array<char>)
//{
//    mangled_ppc("?dump_tree_path_recursive@c_tag_struct_fixup_builder@@CAXABV?$c_wrapped_array@$$CBUs_tag_field_tree_node@@@@ABU?$s_stack_list_node@J@@V?$c_wrapped_array@D@@@Z");
//};

//private: static void c_tag_struct_fixup_builder::get_tree_path_offset(class c_wrapped_array<struct s_tag_field_tree_node const> const &, struct s_stack_list_node<long> const &, unsigned long *)
//{
//    mangled_ppc("?get_tree_path_offset@c_tag_struct_fixup_builder@@CAXABV?$c_wrapped_array@$$CBUs_tag_field_tree_node@@@@ABU?$s_stack_list_node@J@@PAK@Z");
//};

//private: static unsigned long c_tag_struct_fixup_builder::get_tree_path_root_size(class c_wrapped_array<struct s_tag_field_tree_node const> const &, struct s_stack_list_node<long> const &)
//{
//    mangled_ppc("?get_tree_path_root_size@c_tag_struct_fixup_builder@@CAKABV?$c_wrapped_array@$$CBUs_tag_field_tree_node@@@@ABU?$s_stack_list_node@J@@@Z");
//};

//private: void c_tag_struct_fixup_builder::optimize_aggregate_fixup(long, long, bool, enum e_tag_field_fixup_optimization_type *)
//{
//    mangled_ppc("?optimize_aggregate_fixup@c_tag_struct_fixup_builder@@AAAXJJ_NPAW4e_tag_field_fixup_optimization_type@@@Z");
//};

//private: void c_tag_struct_fixup_builder::build_path_to_fixup_datum(long, class c_wrapped_array<char>)
//{
//    mangled_ppc("?build_path_to_fixup_datum@c_tag_struct_fixup_builder@@AAAXJV?$c_wrapped_array@D@@@Z");
//};

//private: void c_tag_struct_fixup_builder::update_source_field_definition(long, struct s_tag_field const *)
//{
//    mangled_ppc("?update_source_field_definition@c_tag_struct_fixup_builder@@AAAXJPBUs_tag_field@@@Z");
//};

//private: void c_tag_struct_fixup_builder::update_source_aggregate_definition(long, struct s_tag_struct_definition *)
//{
//    mangled_ppc("?update_source_aggregate_definition@c_tag_struct_fixup_builder@@AAAXJPAUs_tag_struct_definition@@@Z");
//};

//private: static struct s_tag_struct_definition ** c_tag_struct_fixup_builder::get_field_aggregate_definition_reference(struct s_tag_field *)
//{
//    mangled_ppc("?get_field_aggregate_definition_reference@c_tag_struct_fixup_builder@@CAPAPAUs_tag_struct_definition@@PAUs_tag_field@@@Z");
//};

//private: bool c_tag_struct_fixup_builder::field_tree_node_is_unmatched(long)
//{
//    mangled_ppc("?field_tree_node_is_unmatched@c_tag_struct_fixup_builder@@AAA_NJ@Z");
//};

//private: void c_tag_struct_fixup_builder::set_node_and_fixup_mapping(long, long)
//{
//    mangled_ppc("?set_node_and_fixup_mapping@c_tag_struct_fixup_builder@@AAAXJJ@Z");
//};

//private: void c_tag_struct_fixup_builder::dump_fixup_codes_recursive(long, long)
//{
//    mangled_ppc("?dump_fixup_codes_recursive@c_tag_struct_fixup_builder@@AAAXJJ@Z");
//};

//private: static void c_tag_struct_fixup_builder::dump_tree_path_without_parent_reference(class c_wrapped_array<struct s_tag_field_tree_node const> const &, long, class c_wrapped_array<char>)
//{
//    mangled_ppc("?dump_tree_path_without_parent_reference@c_tag_struct_fixup_builder@@CAXABV?$c_wrapped_array@$$CBUs_tag_field_tree_node@@@@JV?$c_wrapped_array@D@@@Z");
//};

//private: static void c_tag_struct_fixup_builder::visit_tree_path_without_parent_references(class c_wrapped_array<struct s_tag_field_tree_node const> const &, long, class c_tag_struct_fixup_builder::c_tree_path_visitor *)
//{
//    mangled_ppc("?visit_tree_path_without_parent_references@c_tag_struct_fixup_builder@@CAXABV?$c_wrapped_array@$$CBUs_tag_field_tree_node@@@@JPAVc_tree_path_visitor@1@@Z");
//};

//private: long c_tag_struct_fixup_builder::get_next_fixup_index(long) const
//{
//    mangled_ppc("?get_next_fixup_index@c_tag_struct_fixup_builder@@ABAJJ@Z");
//};

//bool build_tag_field_tree(class c_tag_root_definition *, class c_wrapped_array<struct s_tag_field_tree_node>)
//{
//    mangled_ppc("?build_tag_field_tree@@YA_NPAVc_tag_root_definition@@V?$c_wrapped_array@Us_tag_field_tree_node@@@@@Z");
//};

//public: c_tag_memory_layout_builder::c_tag_memory_layout_builder(class c_tag_root_definition *, class c_wrapped_array<struct s_tag_field_tree_node>)
//{
//    mangled_ppc("??0c_tag_memory_layout_builder@@QAA@PAVc_tag_root_definition@@V?$c_wrapped_array@Us_tag_field_tree_node@@@@@Z");
//};

//public: bool c_tag_memory_layout_builder::build_field_tree(void)
//{
//    mangled_ppc("?build_field_tree@c_tag_memory_layout_builder@@QAA_NXZ");
//};

//private: struct s_tag_field_tree_node & c_tag_memory_layout_builder::add_field_tree_node(void)
//{
//    mangled_ppc("?add_field_tree_node@c_tag_memory_layout_builder@@AAAAAUs_tag_field_tree_node@@XZ");
//};

//private: void c_tag_memory_layout_builder::build_field_tree_recursive(struct s_tag_field const *, unsigned long *, long *, bool *)
//{
//    mangled_ppc("?build_field_tree_recursive@c_tag_memory_layout_builder@@AAAXPBUs_tag_field@@PAKPAJPA_N@Z");
//};

//private: long c_tag_memory_layout_builder::get_field_tree_count(void) const
//{
//    mangled_ppc("?get_field_tree_count@c_tag_memory_layout_builder@@ABAJXZ");
//};

//public: c_tag_group_fixupper_default::c_tag_group_fixupper_default(struct s_tag_block_definition const *, struct s_tag_block_definition const *, class c_tag_struct_fixup_stream *, bool)
//{
//    mangled_ppc("??0c_tag_group_fixupper_default@@QAA@PBUs_tag_block_definition@@0PAVc_tag_struct_fixup_stream@@_N@Z");
//};

//public: virtual bool c_tag_group_fixupper_default::fixup_tag(struct s_tag_block *, struct s_tag_block *, struct s_tag_fixup_context const *)
//{
//    mangled_ppc("?fixup_tag@c_tag_group_fixupper_default@@UAA_NPAUs_tag_block@@0PBUs_tag_fixup_context@@@Z");
//};

//public: bool c_tag_struct_fixup_stream::do_fixup(class c_basic_buffer<void> &, class c_basic_buffer<void> &, struct s_tag_fixup_context const *)
//{
//    mangled_ppc("?do_fixup@c_tag_struct_fixup_stream@@QAA_NAAV?$c_basic_buffer@X@@0PBUs_tag_fixup_context@@@Z");
//};

//public: virtual struct s_tag_block_definition const * c_tag_group_fixupper_default::get_source_block_definition(void)
//{
//    mangled_ppc("?get_source_block_definition@c_tag_group_fixupper_default@@UAAPBUs_tag_block_definition@@XZ");
//};

//public: virtual struct s_tag_block_definition const * c_tag_group_fixupper_default::get_destination_block_definition(void)
//{
//    mangled_ppc("?get_destination_block_definition@c_tag_group_fixupper_default@@UAAPBUs_tag_block_definition@@XZ");
//};

//public: virtual bool c_tag_group_fixupper_default::xsynced_resources_still_valid(void)
//{
//    mangled_ppc("?xsynced_resources_still_valid@c_tag_group_fixupper_default@@UAA_NXZ");
//};

//public: c_tag_group_fixupper::c_tag_group_fixupper(void)
//{
//    mangled_ppc("??0c_tag_group_fixupper@@QAA@XZ");
//};

//void dispose_tag_group_fixupper(class c_allocation_interface *, struct s_tag_group_fixup_build_result *)
//{
//    mangled_ppc("?dispose_tag_group_fixupper@@YAXPAVc_allocation_interface@@PAUs_tag_group_fixup_build_result@@@Z");
//};

//bool tag_group_test_fixup_codes(struct s_tag_block_definition *, class c_wrapped_array<struct s_tag_field>, class c_tag_persist_context *, struct s_tag_block *, struct s_tag_fixup_context const *)
//{
//    mangled_ppc("?tag_group_test_fixup_codes@@YA_NPAUs_tag_block_definition@@V?$c_wrapped_array@Us_tag_field@@@@PAVc_tag_persist_context@@PAUs_tag_block@@PBUs_tag_fixup_context@@@Z");
//};

//bool tag_definition_names_match(char const *, char const *)
//{
//    mangled_ppc("?tag_definition_names_match@@YA_NPBD0@Z");
//};

//bool tag_struct_definitions_can_match_exactly(struct s_tag_struct_definition const *, struct s_tag_struct_definition const *)
//{
//    mangled_ppc("?tag_struct_definitions_can_match_exactly@@YA_NPBUs_tag_struct_definition@@0@Z");
//};

//bool tag_string_list_definitions_match(struct s_string_list_definition const *, struct s_string_list_definition const *)
//{
//    mangled_ppc("?tag_string_list_definitions_match@@YA_NPBUs_string_list_definition@@0@Z");
//};

//bool tag_field_name_strings_match_for_fixup(char const *, char const *)
//{
//    mangled_ppc("?tag_field_name_strings_match_for_fixup@@YA_NPBD0@Z");
//};

//bool tag_block_definitions_match(struct s_tag_block_definition const *, struct s_tag_block_definition const *, bool)
//{
//    mangled_ppc("?tag_block_definitions_match@@YA_NPBUs_tag_block_definition@@0_N@Z");
//};

//bool tag_interop_definitions_match(struct s_tag_interop_definition const *, struct s_tag_interop_definition const *, bool)
//{
//    mangled_ppc("?tag_interop_definitions_match@@YA_NPBUs_tag_interop_definition@@0_N@Z");
//};

//bool tag_resource_definitions_match(struct s_tag_resource_definition const *, struct s_tag_resource_definition const *, bool)
//{
//    mangled_ppc("?tag_resource_definitions_match@@YA_NPBUs_tag_resource_definition@@0_N@Z");
//};

//bool tag_struct_definitions_match(struct s_tag_struct_definition const *, struct s_tag_struct_definition const *, bool)
//{
//    mangled_ppc("?tag_struct_definitions_match@@YA_NPBUs_tag_struct_definition@@0_N@Z");
//};

//public: bool c_tag_definition_matcher::string_list_definitions_match_with_remapping(struct s_string_list_definition const *, struct s_string_list_definition const *)
//{
//    mangled_ppc("?string_list_definitions_match_with_remapping@c_tag_definition_matcher@@QAA_NPBUs_string_list_definition@@0@Z");
//};

//public: bool c_tag_definition_matcher::block_reference_definitions_match(struct s_tag_block_definition const *, struct s_tag_block_definition const *)
//{
//    mangled_ppc("?block_reference_definitions_match@c_tag_definition_matcher@@QAA_NPBUs_tag_block_definition@@0@Z");
//};

//public: bool c_tag_definition_matcher::string_list_definitions_match_exactly(struct s_string_list_definition const *, struct s_string_list_definition const *)
//{
//    mangled_ppc("?string_list_definitions_match_exactly@c_tag_definition_matcher@@QAA_NPBUs_string_list_definition@@0@Z");
//};

//public: bool c_tag_definition_matcher::data_definitions_match(struct s_tag_data_definition const *, struct s_tag_data_definition const *)
//{
//    mangled_ppc("?data_definitions_match@c_tag_definition_matcher@@QAA_NPBUs_tag_data_definition@@0@Z");
//};

//public: bool c_tag_definition_matcher::custom_block_reference_definitions_match(struct s_block_index_custom_search_definition const *, struct s_block_index_custom_search_definition const *)
//{
//    mangled_ppc("?custom_block_reference_definitions_match@c_tag_definition_matcher@@QAA_NPBUs_block_index_custom_search_definition@@0@Z");
//};

//public: char const & c_array_operator_interface<class c_wrapped_array_no_init<char const>, char const>::operator[](long) const
//{
//    mangled_ppc("??A?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CBD@@$$CBD@@QBAABDJ@Z");
//};

//public: struct s_tag_field * c_wrapped_array_no_init<struct s_tag_field>::end(void)
//{
//    mangled_ppc("?end@?$c_wrapped_array_no_init@Us_tag_field@@@@QAAPAUs_tag_field@@XZ");
//};

//public: struct s_tag_field & c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_field>, struct s_tag_field>::operator[](long)
//{
//    mangled_ppc("??A?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_tag_field@@@@Us_tag_field@@@@QAAAAUs_tag_field@@J@Z");
//};

//public: struct s_tag_field const * s_static_array<struct s_tag_field, 2>::get_elements(void) const
//{
//    mangled_ppc("?get_elements@?$s_static_array@Us_tag_field@@$01@@QBAPBUs_tag_field@@XZ");
//};

//public: c_wrapped_array<struct s_tag_field_tree_node>::c_wrapped_array<struct s_tag_field_tree_node>(void)
//{
//    mangled_ppc("??0?$c_wrapped_array@Us_tag_field_tree_node@@@@QAA@XZ");
//};

//public: long c_wrapped_array_no_init<struct s_tag_field_tree_node>::count(void) const
//{
//    mangled_ppc("?count@?$c_wrapped_array_no_init@Us_tag_field_tree_node@@@@QBAJXZ");
//};

//public: struct s_tag_field_tree_node const & c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_field_tree_node>, struct s_tag_field_tree_node>::operator[](long) const
//{
//    mangled_ppc("??A?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_tag_field_tree_node@@@@Us_tag_field_tree_node@@@@QBAABUs_tag_field_tree_node@@J@Z");
//};

//public: struct s_tag_field_tree_node * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_field_tree_node>, struct s_tag_field_tree_node>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_tag_field_tree_node@@@@Us_tag_field_tree_node@@@@QAAPAUs_tag_field_tree_node@@XZ");
//};

//public: c_fixed_sized_dynamic_array<struct s_tag_field_tree_node>::c_fixed_sized_dynamic_array<struct s_tag_field_tree_node>(struct s_tag_field_tree_node *, long, long)
//{
//    mangled_ppc("??0?$c_fixed_sized_dynamic_array@Us_tag_field_tree_node@@@@QAA@PAUs_tag_field_tree_node@@JJ@Z");
//};

//public: long c_fixed_sized_dynamic_array<struct s_tag_field_tree_node>::count(void) const
//{
//    mangled_ppc("?count@?$c_fixed_sized_dynamic_array@Us_tag_field_tree_node@@@@QBAJXZ");
//};

//public: struct s_tag_field_tree_node & c_resizeable_array_operator_interface<class c_fixed_sized_dynamic_array<struct s_tag_field_tree_node>, struct s_tag_field_tree_node>::add_element(void)
//{
//    mangled_ppc("?add_element@?$c_resizeable_array_operator_interface@V?$c_fixed_sized_dynamic_array@Us_tag_field_tree_node@@@@Us_tag_field_tree_node@@@@QAAAAUs_tag_field_tree_node@@XZ");
//};

//public: struct s_tag_field_tree_node & c_array_operator_interface<class c_fixed_sized_dynamic_array<struct s_tag_field_tree_node>, struct s_tag_field_tree_node>::operator[](long)
//{
//    mangled_ppc("??A?$c_array_operator_interface@V?$c_fixed_sized_dynamic_array@Us_tag_field_tree_node@@@@Us_tag_field_tree_node@@@@QAAAAUs_tag_field_tree_node@@J@Z");
//};

//public: long & c_array_operator_interface<class c_wrapped_array_no_init<long>, long>::operator[](long)
//{
//    mangled_ppc("??A?$c_array_operator_interface@V?$c_wrapped_array_no_init@J@@J@@QAAAAJJ@Z");
//};

//public: void c_array_operator_interface<class c_wrapped_array_no_init<long>, long>::set_all(long const &)
//{
//    mangled_ppc("?set_all@?$c_array_operator_interface@V?$c_wrapped_array_no_init@J@@J@@QAAXABJ@Z");
//};

//public: bool c_static_stack<struct s_stack_list_node<long>, 17>::empty(void) const
//{
//    mangled_ppc("?empty@?$c_static_stack@U?$s_stack_list_node@J@@$0BB@@@QBA_NXZ");
//};

//public: void c_static_stack<struct s_stack_list_node<long>, 17>::clear(void)
//{
//    mangled_ppc("?clear@?$c_static_stack@U?$s_stack_list_node@J@@$0BB@@@QAAXXZ");
//};

//public: long c_static_stack<struct s_stack_list_node<long>, 17>::push(void)
//{
//    mangled_ppc("?push@?$c_static_stack@U?$s_stack_list_node@J@@$0BB@@@QAAJXZ");
//};

//public: void c_static_stack<struct s_stack_list_node<long>, 17>::pop(void)
//{
//    mangled_ppc("?pop@?$c_static_stack@U?$s_stack_list_node@J@@$0BB@@@QAAXXZ");
//};

//public: struct s_stack_list_node<long> * c_static_stack<struct s_stack_list_node<long>, 17>::get_top(void)
//{
//    mangled_ppc("?get_top@?$c_static_stack@U?$s_stack_list_node@J@@$0BB@@@QAAPAU?$s_stack_list_node@J@@XZ");
//};

//public: c_static_stack<struct s_stack_list_node<long>, 17>::c_static_stack<struct s_stack_list_node<long>, 17>(void)
//{
//    mangled_ppc("??0?$c_static_stack@U?$s_stack_list_node@J@@$0BB@@@QAA@XZ");
//};

//public: struct s_tag_field_tree_node const * c_wrapped_array_no_init<struct s_tag_field_tree_node const>::begin(void) const
//{
//    mangled_ppc("?begin@?$c_wrapped_array_no_init@$$CBUs_tag_field_tree_node@@@@QBAPBUs_tag_field_tree_node@@XZ");
//};

//public: long c_wrapped_array_no_init<struct s_tag_field_tree_node const>::count(void) const
//{
//    mangled_ppc("?count@?$c_wrapped_array_no_init@$$CBUs_tag_field_tree_node@@@@QBAJXZ");
//};

//public: struct s_tag_field_tree_node const & c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_field_tree_node const>, struct s_tag_field_tree_node const>::operator[](long)
//{
//    mangled_ppc("??A?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CBUs_tag_field_tree_node@@@@$$CBUs_tag_field_tree_node@@@@QAAABUs_tag_field_tree_node@@J@Z");
//};

//public: struct s_tag_field_tree_node const & c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_field_tree_node const>, struct s_tag_field_tree_node const>::operator[](long) const
//{
//    mangled_ppc("??A?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CBUs_tag_field_tree_node@@@@$$CBUs_tag_field_tree_node@@@@QBAABUs_tag_field_tree_node@@J@Z");
//};

//public: long c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_field_tree_node const>, struct s_tag_field_tree_node const>::get_total_element_size(void) const
//{
//    mangled_ppc("?get_total_element_size@?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CBUs_tag_field_tree_node@@@@$$CBUs_tag_field_tree_node@@@@QBAJXZ");
//};

//public: bool c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_field_tree_node const>, struct s_tag_field_tree_node const>::valid_index(long) const
//{
//    mangled_ppc("?valid_index@?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CBUs_tag_field_tree_node@@@@$$CBUs_tag_field_tree_node@@@@QBA_NJ@Z");
//};

//public: c_wrapped_array<struct s_tag_field_fixup_datum>::c_wrapped_array<struct s_tag_field_fixup_datum>(void)
//{
//    mangled_ppc("??0?$c_wrapped_array@Us_tag_field_fixup_datum@@@@QAA@XZ");
//};

//public: struct s_tag_field_fixup_datum * c_wrapped_array_no_init<struct s_tag_field_fixup_datum>::begin(void)
//{
//    mangled_ppc("?begin@?$c_wrapped_array_no_init@Us_tag_field_fixup_datum@@@@QAAPAUs_tag_field_fixup_datum@@XZ");
//};

//public: long c_wrapped_array_no_init<struct s_tag_field_fixup_datum>::count(void) const
//{
//    mangled_ppc("?count@?$c_wrapped_array_no_init@Us_tag_field_fixup_datum@@@@QBAJXZ");
//};

//public: struct s_tag_field_fixup_datum & c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_field_fixup_datum>, struct s_tag_field_fixup_datum>::operator[](long)
//{
//    mangled_ppc("??A?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_tag_field_fixup_datum@@@@Us_tag_field_fixup_datum@@@@QAAAAUs_tag_field_fixup_datum@@J@Z");
//};

//public: struct s_tag_field_fixup_datum const * c_wrapped_array_no_init<struct s_tag_field_fixup_datum const>::begin(void) const
//{
//    mangled_ppc("?begin@?$c_wrapped_array_no_init@$$CBUs_tag_field_fixup_datum@@@@QBAPBUs_tag_field_fixup_datum@@XZ");
//};

//public: struct s_tag_field_fixup_datum const * c_wrapped_array_no_init<struct s_tag_field_fixup_datum const>::end(void) const
//{
//    mangled_ppc("?end@?$c_wrapped_array_no_init@$$CBUs_tag_field_fixup_datum@@@@QBAPBUs_tag_field_fixup_datum@@XZ");
//};

//public: long c_wrapped_array_no_init<struct s_tag_field_fixup_datum const>::count(void) const
//{
//    mangled_ppc("?count@?$c_wrapped_array_no_init@$$CBUs_tag_field_fixup_datum@@@@QBAJXZ");
//};

//public: struct s_tag_field_fixup_datum const & c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_field_fixup_datum const>, struct s_tag_field_fixup_datum const>::operator[](long) const
//{
//    mangled_ppc("??A?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CBUs_tag_field_fixup_datum@@@@$$CBUs_tag_field_fixup_datum@@@@QBAABUs_tag_field_fixup_datum@@J@Z");
//};

//public: c_fixed_sized_dynamic_array<struct s_tag_field_fixup_datum>::c_fixed_sized_dynamic_array<struct s_tag_field_fixup_datum>(class c_raw_storage_buffer_iterator &, long)
//{
//    mangled_ppc("??0?$c_fixed_sized_dynamic_array@Us_tag_field_fixup_datum@@@@QAA@AAVc_raw_storage_buffer_iterator@@J@Z");
//};

//public: long c_fixed_sized_dynamic_array<struct s_tag_field_fixup_datum>::new_element_index(void)
//{
//    mangled_ppc("?new_element_index@?$c_fixed_sized_dynamic_array@Us_tag_field_fixup_datum@@@@QAAJXZ");
//};

//public: long c_fixed_sized_dynamic_array<struct s_tag_field_fixup_datum>::get_maximum_count(void) const
//{
//    mangled_ppc("?get_maximum_count@?$c_fixed_sized_dynamic_array@Us_tag_field_fixup_datum@@@@QBAJXZ");
//};

//public: void c_fixed_sized_dynamic_array<struct s_tag_field_fixup_datum>::resize_cant_fail(long)
//{
//    mangled_ppc("?resize_cant_fail@?$c_fixed_sized_dynamic_array@Us_tag_field_fixup_datum@@@@QAAXJ@Z");
//};

//public: long c_fixed_sized_dynamic_array<struct s_tag_field_fixup_datum>::count(void) const
//{
//    mangled_ppc("?count@?$c_fixed_sized_dynamic_array@Us_tag_field_fixup_datum@@@@QBAJXZ");
//};

//public: struct s_tag_field_fixup_datum * c_array_operator_interface<class c_fixed_sized_dynamic_array<struct s_tag_field_fixup_datum>, struct s_tag_field_fixup_datum>::get_element(long)
//{
//    mangled_ppc("?get_element@?$c_array_operator_interface@V?$c_fixed_sized_dynamic_array@Us_tag_field_fixup_datum@@@@Us_tag_field_fixup_datum@@@@QAAPAUs_tag_field_fixup_datum@@J@Z");
//};

//public: struct s_tag_field_fixup_datum const * c_array_operator_interface<class c_fixed_sized_dynamic_array<struct s_tag_field_fixup_datum>, struct s_tag_field_fixup_datum>::get_element(long) const
//{
//    mangled_ppc("?get_element@?$c_array_operator_interface@V?$c_fixed_sized_dynamic_array@Us_tag_field_fixup_datum@@@@Us_tag_field_fixup_datum@@@@QBAPBUs_tag_field_fixup_datum@@J@Z");
//};

//public: void c_self_destruct_dont_deallocate_pointer<class c_tag_struct_fixup_stream>::set_pointer_dont_destruct_old_pointer(class c_tag_struct_fixup_stream *)
//{
//    mangled_ppc("?set_pointer_dont_destruct_old_pointer@?$c_self_destruct_dont_deallocate_pointer@Vc_tag_struct_fixup_stream@@@@QAAXPAVc_tag_struct_fixup_stream@@@Z");
//};

//public: void c_self_destruct_dont_deallocate_pointer<class c_tag_group_fixupper_default>::set_pointer_dont_destruct_old_pointer(class c_tag_group_fixupper_default *)
//{
//    mangled_ppc("?set_pointer_dont_destruct_old_pointer@?$c_self_destruct_dont_deallocate_pointer@Vc_tag_group_fixupper_default@@@@QAAXPAVc_tag_group_fixupper_default@@@Z");
//};

//public: bool c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_field>, struct s_tag_field>::valid_index(long) const
//{
//    mangled_ppc("?valid_index@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_tag_field@@@@Us_tag_field@@@@QBA_NJ@Z");
//};

//public: c_wrapped_array<struct s_tag_field_tree_node>::c_wrapped_array<struct s_tag_field_tree_node>(struct s_tag_field_tree_node *, long)
//{
//    mangled_ppc("??0?$c_wrapped_array@Us_tag_field_tree_node@@@@QAA@PAUs_tag_field_tree_node@@J@Z");
//};

//public: void c_wrapped_array_no_init<struct s_tag_field_tree_node>::set_elements(struct s_tag_field_tree_node *, long)
//{
//    mangled_ppc("?set_elements@?$c_wrapped_array_no_init@Us_tag_field_tree_node@@@@QAAXPAUs_tag_field_tree_node@@J@Z");
//};

//public: struct s_tag_field_tree_node const * c_wrapped_array_no_init<struct s_tag_field_tree_node>::begin(void) const
//{
//    mangled_ppc("?begin@?$c_wrapped_array_no_init@Us_tag_field_tree_node@@@@QBAPBUs_tag_field_tree_node@@XZ");
//};

//public: struct s_tag_field_tree_node * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_field_tree_node>, struct s_tag_field_tree_node>::begin(void)
//{
//    mangled_ppc("?begin@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_tag_field_tree_node@@@@Us_tag_field_tree_node@@@@QAAPAUs_tag_field_tree_node@@XZ");
//};

//public: bool c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_field_tree_node>, struct s_tag_field_tree_node>::valid_index(long) const
//{
//    mangled_ppc("?valid_index@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_tag_field_tree_node@@@@Us_tag_field_tree_node@@@@QBA_NJ@Z");
//};

//public: class c_wrapped_array_no_init<struct s_tag_field_tree_node> const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_field_tree_node> >::get_super_class(void) const
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@Us_tag_field_tree_node@@@@@@QBAPBV?$c_wrapped_array_no_init@Us_tag_field_tree_node@@@@XZ");
//};

//public: struct s_tag_field_tree_node * c_fixed_sized_dynamic_array<struct s_tag_field_tree_node>::begin(void)
//{
//    mangled_ppc("?begin@?$c_fixed_sized_dynamic_array@Us_tag_field_tree_node@@@@QAAPAUs_tag_field_tree_node@@XZ");
//};

//public: long c_resizeable_array_operator_interface<class c_fixed_sized_dynamic_array<struct s_tag_field_tree_node>, struct s_tag_field_tree_node>::new_element_index(void)
//{
//    mangled_ppc("?new_element_index@?$c_resizeable_array_operator_interface@V?$c_fixed_sized_dynamic_array@Us_tag_field_tree_node@@@@Us_tag_field_tree_node@@@@QAAJXZ");
//};

//public: struct s_tag_field_tree_node * c_array_operator_interface<class c_fixed_sized_dynamic_array<struct s_tag_field_tree_node>, struct s_tag_field_tree_node>::get_element(long)
//{
//    mangled_ppc("?get_element@?$c_array_operator_interface@V?$c_fixed_sized_dynamic_array@Us_tag_field_tree_node@@@@Us_tag_field_tree_node@@@@QAAPAUs_tag_field_tree_node@@J@Z");
//};

//public: bool c_array_operator_interface<class c_fixed_sized_dynamic_array<struct s_tag_field_tree_node>, struct s_tag_field_tree_node>::valid_index(long) const
//{
//    mangled_ppc("?valid_index@?$c_array_operator_interface@V?$c_fixed_sized_dynamic_array@Us_tag_field_tree_node@@@@Us_tag_field_tree_node@@@@QBA_NJ@Z");
//};

//public: class c_fixed_sized_dynamic_array<struct s_tag_field_tree_node> * c_recursive_template_pattern<class c_fixed_sized_dynamic_array<struct s_tag_field_tree_node> >::get_super_class(void)
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_fixed_sized_dynamic_array@Us_tag_field_tree_node@@@@@@QAAPAV?$c_fixed_sized_dynamic_array@Us_tag_field_tree_node@@@@XZ");
//};

//public: long * c_array_operator_interface<class c_wrapped_array_no_init<long>, long>::begin(void)
//{
//    mangled_ppc("?begin@?$c_array_operator_interface@V?$c_wrapped_array_no_init@J@@J@@QAAPAJXZ");
//};

//public: long * c_array_operator_interface<class c_wrapped_array_no_init<long>, long>::end(void)
//{
//    mangled_ppc("?end@?$c_array_operator_interface@V?$c_wrapped_array_no_init@J@@J@@QAAPAJXZ");
//};

//public: bool c_array_operator_interface<class c_wrapped_array_no_init<long>, long>::valid_index(long) const
//{
//    mangled_ppc("?valid_index@?$c_array_operator_interface@V?$c_wrapped_array_no_init@J@@J@@QBA_NJ@Z");
//};

//public: class c_wrapped_array_no_init<long> * c_recursive_template_pattern<class c_wrapped_array_no_init<long> >::get_super_class(void)
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@J@@@@QAAPAV?$c_wrapped_array_no_init@J@@XZ");
//};

//public: bool c_static_stack<struct s_stack_list_node<long>, 17>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@U?$s_stack_list_node@J@@$0BB@@@QBA_NXZ");
//};

//public: bool c_static_stack<struct s_stack_list_node<long>, 17>::full(void) const
//{
//    mangled_ppc("?full@?$c_static_stack@U?$s_stack_list_node@J@@$0BB@@@QBA_NXZ");
//};

//public: long c_static_stack<struct s_stack_list_node<long>, 17>::top(void) const
//{
//    mangled_ppc("?top@?$c_static_stack@U?$s_stack_list_node@J@@$0BB@@@QBAJXZ");
//};

//public: struct s_stack_list_node<long> * c_static_stack<struct s_stack_list_node<long>, 17>::get(long)
//{
//    mangled_ppc("?get@?$c_static_stack@U?$s_stack_list_node@J@@$0BB@@@QAAPAU?$s_stack_list_node@J@@J@Z");
//};

//public: struct s_tag_field_tree_node const * c_wrapped_array_no_init<struct s_tag_field_tree_node const>::begin(void)
//{
//    mangled_ppc("?begin@?$c_wrapped_array_no_init@$$CBUs_tag_field_tree_node@@@@QAAPBUs_tag_field_tree_node@@XZ");
//};

//public: long c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_field_tree_node const>, struct s_tag_field_tree_node const>::count(void) const
//{
//    mangled_ppc("?count@?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CBUs_tag_field_tree_node@@@@$$CBUs_tag_field_tree_node@@@@QBAJXZ");
//};

//public: class c_wrapped_array_no_init<struct s_tag_field_tree_node const> * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_field_tree_node const> >::get_super_class(void)
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@$$CBUs_tag_field_tree_node@@@@@@QAAPAV?$c_wrapped_array_no_init@$$CBUs_tag_field_tree_node@@@@XZ");
//};

//public: class c_wrapped_array_no_init<struct s_tag_field_tree_node const> const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_field_tree_node const> >::get_super_class(void) const
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@$$CBUs_tag_field_tree_node@@@@@@QBAPBV?$c_wrapped_array_no_init@$$CBUs_tag_field_tree_node@@@@XZ");
//};

//public: c_wrapped_array<struct s_tag_field_fixup_datum>::c_wrapped_array<struct s_tag_field_fixup_datum>(struct s_tag_field_fixup_datum *, long)
//{
//    mangled_ppc("??0?$c_wrapped_array@Us_tag_field_fixup_datum@@@@QAA@PAUs_tag_field_fixup_datum@@J@Z");
//};

//public: void c_wrapped_array_no_init<struct s_tag_field_fixup_datum>::set_elements(struct s_tag_field_fixup_datum *, long)
//{
//    mangled_ppc("?set_elements@?$c_wrapped_array_no_init@Us_tag_field_fixup_datum@@@@QAAXPAUs_tag_field_fixup_datum@@J@Z");
//};

//public: bool c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_field_fixup_datum>, struct s_tag_field_fixup_datum>::valid_index(long) const
//{
//    mangled_ppc("?valid_index@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_tag_field_fixup_datum@@@@Us_tag_field_fixup_datum@@@@QBA_NJ@Z");
//};

//public: class c_wrapped_array_no_init<struct s_tag_field_fixup_datum> * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_field_fixup_datum> >::get_super_class(void)
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@Us_tag_field_fixup_datum@@@@@@QAAPAV?$c_wrapped_array_no_init@Us_tag_field_fixup_datum@@@@XZ");
//};

//public: bool c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_field_fixup_datum const>, struct s_tag_field_fixup_datum const>::valid_index(long) const
//{
//    mangled_ppc("?valid_index@?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CBUs_tag_field_fixup_datum@@@@$$CBUs_tag_field_fixup_datum@@@@QBA_NJ@Z");
//};

//public: class c_wrapped_array_no_init<struct s_tag_field_fixup_datum const> const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_field_fixup_datum const> >::get_super_class(void) const
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@$$CBUs_tag_field_fixup_datum@@@@@@QBAPBV?$c_wrapped_array_no_init@$$CBUs_tag_field_fixup_datum@@@@XZ");
//};

//public: bool c_fixed_sized_dynamic_array<struct s_tag_field_fixup_datum>::resize(long)
//{
//    mangled_ppc("?resize@?$c_fixed_sized_dynamic_array@Us_tag_field_fixup_datum@@@@QAA_NJ@Z");
//};

//public: struct s_tag_field_fixup_datum * c_array_operator_interface<class c_fixed_sized_dynamic_array<struct s_tag_field_fixup_datum>, struct s_tag_field_fixup_datum>::begin(void)
//{
//    mangled_ppc("?begin@?$c_array_operator_interface@V?$c_fixed_sized_dynamic_array@Us_tag_field_fixup_datum@@@@Us_tag_field_fixup_datum@@@@QAAPAUs_tag_field_fixup_datum@@XZ");
//};

//public: struct s_tag_field_fixup_datum const * c_array_operator_interface<class c_fixed_sized_dynamic_array<struct s_tag_field_fixup_datum>, struct s_tag_field_fixup_datum>::begin(void) const
//{
//    mangled_ppc("?begin@?$c_array_operator_interface@V?$c_fixed_sized_dynamic_array@Us_tag_field_fixup_datum@@@@Us_tag_field_fixup_datum@@@@QBAPBUs_tag_field_fixup_datum@@XZ");
//};

//public: bool c_array_operator_interface<class c_fixed_sized_dynamic_array<struct s_tag_field_fixup_datum>, struct s_tag_field_fixup_datum>::valid_index(long) const
//{
//    mangled_ppc("?valid_index@?$c_array_operator_interface@V?$c_fixed_sized_dynamic_array@Us_tag_field_fixup_datum@@@@Us_tag_field_fixup_datum@@@@QBA_NJ@Z");
//};

//public: long c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_field>, struct s_tag_field>::count(void) const
//{
//    mangled_ppc("?count@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_tag_field@@@@Us_tag_field@@@@QBAJXZ");
//};

//public: struct s_tag_field_tree_node * c_wrapped_array_no_init<struct s_tag_field_tree_node>::begin(void)
//{
//    mangled_ppc("?begin@?$c_wrapped_array_no_init@Us_tag_field_tree_node@@@@QAAPAUs_tag_field_tree_node@@XZ");
//};

//public: long c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_field_tree_node>, struct s_tag_field_tree_node>::count(void) const
//{
//    mangled_ppc("?count@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_tag_field_tree_node@@@@Us_tag_field_tree_node@@@@QBAJXZ");
//};

//public: class c_wrapped_array_no_init<struct s_tag_field_tree_node> * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_field_tree_node> >::get_super_class(void)
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@Us_tag_field_tree_node@@@@@@QAAPAV?$c_wrapped_array_no_init@Us_tag_field_tree_node@@@@XZ");
//};

//public: long c_fixed_sized_dynamic_array<struct s_tag_field_tree_node>::new_element_index(void)
//{
//    mangled_ppc("?new_element_index@?$c_fixed_sized_dynamic_array@Us_tag_field_tree_node@@@@QAAJXZ");
//};

//private: class c_fixed_sized_dynamic_array<struct s_tag_field_tree_node> * c_resizeable_array_operator_interface<class c_fixed_sized_dynamic_array<struct s_tag_field_tree_node>, struct s_tag_field_tree_node>::get_super_class(void)
//{
//    mangled_ppc("?get_super_class@?$c_resizeable_array_operator_interface@V?$c_fixed_sized_dynamic_array@Us_tag_field_tree_node@@@@Us_tag_field_tree_node@@@@AAAPAV?$c_fixed_sized_dynamic_array@Us_tag_field_tree_node@@@@XZ");
//};

//public: struct s_tag_field_tree_node * c_array_operator_interface<class c_fixed_sized_dynamic_array<struct s_tag_field_tree_node>, struct s_tag_field_tree_node>::begin(void)
//{
//    mangled_ppc("?begin@?$c_array_operator_interface@V?$c_fixed_sized_dynamic_array@Us_tag_field_tree_node@@@@Us_tag_field_tree_node@@@@QAAPAUs_tag_field_tree_node@@XZ");
//};

//public: long c_array_operator_interface<class c_fixed_sized_dynamic_array<struct s_tag_field_tree_node>, struct s_tag_field_tree_node>::count(void) const
//{
//    mangled_ppc("?count@?$c_array_operator_interface@V?$c_fixed_sized_dynamic_array@Us_tag_field_tree_node@@@@Us_tag_field_tree_node@@@@QBAJXZ");
//};

//public: long c_array_operator_interface<class c_wrapped_array_no_init<long>, long>::count(void) const
//{
//    mangled_ppc("?count@?$c_array_operator_interface@V?$c_wrapped_array_no_init@J@@J@@QBAJXZ");
//};

//public: bool c_static_stack<struct s_stack_list_node<long>, 17>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@U?$s_stack_list_node@J@@$0BB@@@QBA_NJ@Z");
//};

//public: long c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_field_fixup_datum>, struct s_tag_field_fixup_datum>::count(void) const
//{
//    mangled_ppc("?count@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_tag_field_fixup_datum@@@@Us_tag_field_fixup_datum@@@@QBAJXZ");
//};

//public: long c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_field_fixup_datum const>, struct s_tag_field_fixup_datum const>::count(void) const
//{
//    mangled_ppc("?count@?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CBUs_tag_field_fixup_datum@@@@$$CBUs_tag_field_fixup_datum@@@@QBAJXZ");
//};

//public: struct s_tag_field_fixup_datum * c_fixed_sized_dynamic_array<struct s_tag_field_fixup_datum>::begin(void)
//{
//    mangled_ppc("?begin@?$c_fixed_sized_dynamic_array@Us_tag_field_fixup_datum@@@@QAAPAUs_tag_field_fixup_datum@@XZ");
//};

//public: struct s_tag_field_fixup_datum const * c_fixed_sized_dynamic_array<struct s_tag_field_fixup_datum>::begin(void) const
//{
//    mangled_ppc("?begin@?$c_fixed_sized_dynamic_array@Us_tag_field_fixup_datum@@@@QBAPBUs_tag_field_fixup_datum@@XZ");
//};

//public: long c_array_operator_interface<class c_fixed_sized_dynamic_array<struct s_tag_field_fixup_datum>, struct s_tag_field_fixup_datum>::count(void) const
//{
//    mangled_ppc("?count@?$c_array_operator_interface@V?$c_fixed_sized_dynamic_array@Us_tag_field_fixup_datum@@@@Us_tag_field_fixup_datum@@@@QBAJXZ");
//};

//public: class c_fixed_sized_dynamic_array<struct s_tag_field_fixup_datum> * c_recursive_template_pattern<class c_fixed_sized_dynamic_array<struct s_tag_field_fixup_datum> >::get_super_class(void)
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_fixed_sized_dynamic_array@Us_tag_field_fixup_datum@@@@@@QAAPAV?$c_fixed_sized_dynamic_array@Us_tag_field_fixup_datum@@@@XZ");
//};

//public: class c_fixed_sized_dynamic_array<struct s_tag_field_fixup_datum> const * c_recursive_template_pattern<class c_fixed_sized_dynamic_array<struct s_tag_field_fixup_datum> >::get_super_class(void) const
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_fixed_sized_dynamic_array@Us_tag_field_fixup_datum@@@@@@QBAPBV?$c_fixed_sized_dynamic_array@Us_tag_field_fixup_datum@@@@XZ");
//};

//public: class c_wrapped_array_no_init<struct s_tag_field> const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_field> >::get_super_class(void) const
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@Us_tag_field@@@@@@QBAPBV?$c_wrapped_array_no_init@Us_tag_field@@@@XZ");
//};

//public: class c_fixed_sized_dynamic_array<struct s_tag_field_tree_node> const * c_recursive_template_pattern<class c_fixed_sized_dynamic_array<struct s_tag_field_tree_node> >::get_super_class(void) const
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_fixed_sized_dynamic_array@Us_tag_field_tree_node@@@@@@QBAPBV?$c_fixed_sized_dynamic_array@Us_tag_field_tree_node@@@@XZ");
//};

//public: struct s_tag_field_fixup_datum const * c_wrapped_array_no_init<struct s_tag_field_fixup_datum>::begin(void) const
//{
//    mangled_ppc("?begin@?$c_wrapped_array_no_init@Us_tag_field_fixup_datum@@@@QBAPBUs_tag_field_fixup_datum@@XZ");
//};

//public: class c_wrapped_array_no_init<struct s_tag_field_fixup_datum> const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_field_fixup_datum> >::get_super_class(void) const
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@Us_tag_field_fixup_datum@@@@@@QBAPBV?$c_wrapped_array_no_init@Us_tag_field_fixup_datum@@@@XZ");
//};

//public: c_wrapped_array<char const>::ctor<2>(char const (&)[2])
//{
//    mangled_ppc("??$?0$01@?$c_wrapped_array@$$CBD@@QAA@AAY01$$CBD@Z");
//};

//public: struct s_tag_field & s_static_array<struct s_tag_field, 2>::operator[]<int>(int)
//{
//    mangled_ppc("??$?AH@?$s_static_array@Us_tag_field@@$01@@QAAAAUs_tag_field@@H@Z");
//};

//bool std::lexicographical_compare<char const *, char const *>(char const *, char const *, char const *, char const *)
//{
//    mangled_ppc("??$lexicographical_compare@PBDPBD@std@@YA_NPBD000@Z");
//};

//public: c_wrapped_array<char>::ctor<1024>(char (&)[1024])
//{
//    mangled_ppc("??$?0$0EAA@@?$c_wrapped_array@D@@QAA@AAY0EAA@D@Z");
//};

//unsigned long compute_wrapped_array_hash<char const>(class c_wrapped_array<char const> const &)
//{
//    mangled_ppc("??$compute_wrapped_array_hash@$$CBD@@YAKABV?$c_wrapped_array@$$CBD@@@Z");
//};

//public: void c_raw_storage_buffer_iterator::set_wrapped_array<class c_wrapped_array, struct s_tag_field_fixup_datum>(class c_wrapped_array<struct s_tag_field_fixup_datum> &, long)
//{
//    mangled_ppc("??$set_wrapped_array@Vc_wrapped_array@@Us_tag_field_fixup_datum@@@c_raw_storage_buffer_iterator@@QAAXAAV?$c_wrapped_array@Us_tag_field_fixup_datum@@@@J@Z");
//};

//struct s_tag_field_fixup_datum * std::copy<struct s_tag_field_fixup_datum const *, struct s_tag_field_fixup_datum *>(struct s_tag_field_fixup_datum const *, struct s_tag_field_fixup_datum const *, struct s_tag_field_fixup_datum *)
//{
//    mangled_ppc("??$copy@PBUs_tag_field_fixup_datum@@PAU1@@std@@YAPAUs_tag_field_fixup_datum@@PBU1@0PAU1@@Z");
//};

//public: c_wrapped_array<struct s_tag_field_fixup_datum const>::ctor<struct s_tag_field_fixup_datum>(class c_wrapped_array<struct s_tag_field_fixup_datum> &)
//{
//    mangled_ppc("??$?0Us_tag_field_fixup_datum@@@?$c_wrapped_array@$$CBUs_tag_field_fixup_datum@@@@QAA@AAV?$c_wrapped_array@Us_tag_field_fixup_datum@@@@@Z");
//};

//unsigned long get_total_unaligned_raw_size<struct s_tag_field_fixup_datum>(long)
//{
//    mangled_ppc("??$get_total_unaligned_raw_size@Us_tag_field_fixup_datum@@@@YAKJ@Z");
//};

//unsigned long get_total_unaligned_raw_size<long>(long)
//{
//    mangled_ppc("??$get_total_unaligned_raw_size@J@@YAKJ@Z");
//};

//public: c_wrapped_array<struct s_tag_field>::ctor<struct s_tag_field>(class c_wrapped_array<struct s_tag_field> &)
//{
//    mangled_ppc("??$?0Us_tag_field@@@?$c_wrapped_array@Us_tag_field@@@@QAA@AAV0@@Z");
//};

//public: void c_raw_storage_buffer_iterator::set_wrapped_array<class c_wrapped_array, long>(class c_wrapped_array<long> &, long)
//{
//    mangled_ppc("??$set_wrapped_array@Vc_wrapped_array@@J@c_raw_storage_buffer_iterator@@QAAXAAV?$c_wrapped_array@J@@J@Z");
//};

//public: c_wrapped_array<struct s_tag_field_fixup_datum const>::ctor<class c_fixed_sized_dynamic_array<struct s_tag_field_fixup_datum>, struct s_tag_field_fixup_datum>(class c_array_operator_interface<class c_fixed_sized_dynamic_array<struct s_tag_field_fixup_datum>, struct s_tag_field_fixup_datum> const &)
//{
//    mangled_ppc("??$?0V?$c_fixed_sized_dynamic_array@Us_tag_field_fixup_datum@@@@Us_tag_field_fixup_datum@@@?$c_wrapped_array@$$CBUs_tag_field_fixup_datum@@@@QAA@ABV?$c_array_operator_interface@V?$c_fixed_sized_dynamic_array@Us_tag_field_fixup_datum@@@@Us_tag_field_fixup_datum@@@@@Z");
//};

//public: c_wrapped_array<struct s_tag_field_tree_node>::ctor<struct s_tag_field_tree_node>(class c_wrapped_array<struct s_tag_field_tree_node> &)
//{
//    mangled_ppc("??$?0Us_tag_field_tree_node@@@?$c_wrapped_array@Us_tag_field_tree_node@@@@QAA@AAV0@@Z");
//};

//public: void c_raw_storage_buffer_iterator::set_wrapped_array<class c_wrapped_array, struct s_tag_field_tree_node>(class c_wrapped_array<struct s_tag_field_tree_node> &, long)
//{
//    mangled_ppc("??$set_wrapped_array@Vc_wrapped_array@@Us_tag_field_tree_node@@@c_raw_storage_buffer_iterator@@QAAXAAV?$c_wrapped_array@Us_tag_field_tree_node@@@@J@Z");
//};

//public: c_wrapped_array<struct s_tag_field_tree_node const>::ctor<struct s_tag_field_tree_node>(class c_wrapped_array<struct s_tag_field_tree_node> &)
//{
//    mangled_ppc("??$?0Us_tag_field_tree_node@@@?$c_wrapped_array@$$CBUs_tag_field_tree_node@@@@QAA@AAV?$c_wrapped_array@Us_tag_field_tree_node@@@@@Z");
//};

//unsigned long get_total_unaligned_raw_size<struct s_tag_group_fixup_build_result>(long)
//{
//    mangled_ppc("??$get_total_unaligned_raw_size@Us_tag_group_fixup_build_result@@@@YAKJ@Z");
//};

//unsigned long get_total_unaligned_raw_size<class c_tag_struct_fixup_stream>(long)
//{
//    mangled_ppc("??$get_total_unaligned_raw_size@Vc_tag_struct_fixup_stream@@@@YAKJ@Z");
//};

//unsigned long get_total_unaligned_raw_size<class c_tag_group_fixupper_default>(long)
//{
//    mangled_ppc("??$get_total_unaligned_raw_size@Vc_tag_group_fixupper_default@@@@YAKJ@Z");
//};

//public: struct s_tag_group_fixup_build_result * c_raw_storage_buffer_iterator::get_array_elements<struct s_tag_group_fixup_build_result>(long)
//{
//    mangled_ppc("??$get_array_elements@Us_tag_group_fixup_build_result@@@c_raw_storage_buffer_iterator@@QAAPAUs_tag_group_fixup_build_result@@J@Z");
//};

//public: class c_tag_struct_fixup_stream * c_raw_storage_buffer_iterator::get_array_elements<class c_tag_struct_fixup_stream>(long)
//{
//    mangled_ppc("??$get_array_elements@Vc_tag_struct_fixup_stream@@@c_raw_storage_buffer_iterator@@QAAPAVc_tag_struct_fixup_stream@@J@Z");
//};

//public: class c_tag_group_fixupper_default * c_raw_storage_buffer_iterator::get_array_elements<class c_tag_group_fixupper_default>(long)
//{
//    mangled_ppc("??$get_array_elements@Vc_tag_group_fixupper_default@@@c_raw_storage_buffer_iterator@@QAAPAVc_tag_group_fixupper_default@@J@Z");
//};

//void destruct_in_place<struct s_tag_group_fixup_build_result>(struct s_tag_group_fixup_build_result *)
//{
//    mangled_ppc("??$destruct_in_place@Us_tag_group_fixup_build_result@@@@YAXPAUs_tag_group_fixup_build_result@@@Z");
//};

//bool std::equal<char const **, char const **, bool (*)(char const *, char const **)>(char const **, char const **, char const **, bool (*)(char const *, char const *))
//{
//    mangled_ppc("??$equal@PAPBDPAPBDP6A_NPBD0@Z@std@@YA_NPAPBD00P6A_NPBD1@Z@Z");
//};

//struct s_block_index_custom_search_definition const * get_field_definition<2>(struct s_tag_field const *)
//{
//    mangled_ppc("??$get_field_definition@$01@@YAPBUs_block_index_custom_search_definition@@PBUs_tag_field@@@Z");
//};

//public: struct s_tag_field_fixup_datum * c_raw_storage_buffer_iterator::get_array_elements<struct s_tag_field_fixup_datum>(long)
//{
//    mangled_ppc("??$get_array_elements@Us_tag_field_fixup_datum@@@c_raw_storage_buffer_iterator@@QAAPAUs_tag_field_fixup_datum@@J@Z");
//};

//public: void * s_tag_group_fixup_build_result::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_Gs_tag_group_fixup_build_result@@QAAPAXI@Z");
//};

//public: s_tag_group_fixup_build_result::~s_tag_group_fixup_build_result(void)
//{
//    mangled_ppc("??1s_tag_group_fixup_build_result@@QAA@XZ");
//};

//public: long c_array_operator_interface<class c_wrapped_array_no_init<char const>, char const>::get_total_element_size(void) const
//{
//    mangled_ppc("?get_total_element_size@?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CBD@@$$CBD@@QBAJXZ");
//};

//public: void c_wrapped_array_no_init<struct s_tag_field_tree_node const>::set_elements(struct s_tag_field_tree_node const *, long)
//{
//    mangled_ppc("?set_elements@?$c_wrapped_array_no_init@$$CBUs_tag_field_tree_node@@@@QAAXPBUs_tag_field_tree_node@@J@Z");
//};

//public: struct s_tag_field_fixup_datum * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_field_fixup_datum>, struct s_tag_field_fixup_datum>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_tag_field_fixup_datum@@@@Us_tag_field_fixup_datum@@@@QAAPAUs_tag_field_fixup_datum@@XZ");
//};

//public: void c_wrapped_array_no_init<struct s_tag_field_fixup_datum const>::set_elements(struct s_tag_field_fixup_datum const *, long)
//{
//    mangled_ppc("?set_elements@?$c_wrapped_array_no_init@$$CBUs_tag_field_fixup_datum@@@@QAAXPBUs_tag_field_fixup_datum@@J@Z");
//};

//public: struct s_tag_field_fixup_datum const * c_array_operator_interface<class c_fixed_sized_dynamic_array<struct s_tag_field_fixup_datum>, struct s_tag_field_fixup_datum>::get_elements(void) const
//{
//    mangled_ppc("?get_elements@?$c_array_operator_interface@V?$c_fixed_sized_dynamic_array@Us_tag_field_fixup_datum@@@@Us_tag_field_fixup_datum@@@@QBAPBUs_tag_field_fixup_datum@@XZ");
//};

//public: c_self_destruct_dont_deallocate_pointer<class c_tag_struct_fixup_stream>::~c_self_destruct_dont_deallocate_pointer<class c_tag_struct_fixup_stream>(void)
//{
//    mangled_ppc("??1?$c_self_destruct_dont_deallocate_pointer@Vc_tag_struct_fixup_stream@@@@QAA@XZ");
//};

//public: c_self_destruct_dont_deallocate_pointer<class c_tag_group_fixupper_default>::~c_self_destruct_dont_deallocate_pointer<class c_tag_group_fixupper_default>(void)
//{
//    mangled_ppc("??1?$c_self_destruct_dont_deallocate_pointer@Vc_tag_group_fixupper_default@@@@QAA@XZ");
//};

//public: struct s_tag_field_fixup_datum * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_field_fixup_datum>, struct s_tag_field_fixup_datum>::begin(void)
//{
//    mangled_ppc("?begin@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_tag_field_fixup_datum@@@@Us_tag_field_fixup_datum@@@@QAAPAUs_tag_field_fixup_datum@@XZ");
//};

//public: static bool s_static_array<struct s_tag_field, 2>::valid<int>(int)
//{
//    mangled_ppc("??$valid@H@?$s_static_array@Us_tag_field@@$01@@SA_NH@Z");
//};

//bool std::_Lexicographical_compare<char const *, char const *>(char const *, char const *, char const *, char const *)
//{
//    mangled_ppc("??$_Lexicographical_compare@PBDPBD@std@@YA_NPBD000@Z");
//};

//struct s_tag_field_fixup_datum const * std::_Checked_base<struct s_tag_field_fixup_datum const *>(struct s_tag_field_fixup_datum const *&)
//{
//    mangled_ppc("??$_Checked_base@PBUs_tag_field_fixup_datum@@@std@@YAPBUs_tag_field_fixup_datum@@AAPBU1@@Z");
//};

//struct std::random_access_iterator_tag std::_Iter_random<struct s_tag_field_fixup_datum const *, struct s_tag_field_fixup_datum *>(struct s_tag_field_fixup_datum const *const &, struct s_tag_field_fixup_datum *const &)
//{
//    mangled_ppc("??$_Iter_random@PBUs_tag_field_fixup_datum@@PAU1@@std@@YA?AUrandom_access_iterator_tag@0@ABQBUs_tag_field_fixup_datum@@ABQAU2@@Z");
//};

//struct std::_Nonscalar_ptr_iterator_tag std::_Ptr_cat<struct s_tag_field_fixup_datum const *, struct s_tag_field_fixup_datum *>(struct s_tag_field_fixup_datum const *&, struct s_tag_field_fixup_datum *&)
//{
//    mangled_ppc("??$_Ptr_cat@PBUs_tag_field_fixup_datum@@PAU1@@std@@YA?AU_Nonscalar_ptr_iterator_tag@0@AAPBUs_tag_field_fixup_datum@@AAPAU2@@Z");
//};

//struct s_tag_field_fixup_datum * std::_Copy_opt<struct s_tag_field_fixup_datum const *, struct s_tag_field_fixup_datum *>(struct s_tag_field_fixup_datum const *, struct s_tag_field_fixup_datum const *, struct s_tag_field_fixup_datum *, struct std::random_access_iterator_tag, struct std::_Nonscalar_ptr_iterator_tag, struct std::_Range_checked_iterator_tag)
//{
//    mangled_ppc("??$_Copy_opt@PBUs_tag_field_fixup_datum@@PAU1@@std@@YAPAUs_tag_field_fixup_datum@@PBU1@0PAU1@Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z");
//};

//public: long * c_raw_storage_buffer_iterator::get_array_elements<long>(long)
//{
//    mangled_ppc("??$get_array_elements@J@c_raw_storage_buffer_iterator@@QAAPAJJ@Z");
//};

//public: struct s_tag_field_tree_node * c_raw_storage_buffer_iterator::get_array_elements<struct s_tag_field_tree_node>(long)
//{
//    mangled_ppc("??$get_array_elements@Us_tag_field_tree_node@@@c_raw_storage_buffer_iterator@@QAAPAUs_tag_field_tree_node@@J@Z");
//};

//char const ** std::_Checked_base<char const **>(char const **&)
//{
//    mangled_ppc("??$_Checked_base@PAPBD@std@@YAPAPBDAAPAPBD@Z");
//};

//struct std::random_access_iterator_tag std::_Iter_random<char const **, char const **>(char const **const &, char const **const &)
//{
//    mangled_ppc("??$_Iter_random@PAPBDPAPBD@std@@YA?AUrandom_access_iterator_tag@0@ABQAPBD0@Z");
//};

//bool std::_Equal<char const **, char const **, bool (*)(char const *, char const **)>(char const **, char const **, char const **, bool (*)(char const *, char const *), struct std::random_access_iterator_tag, struct std::_Range_checked_iterator_tag)
//{
//    mangled_ppc("??$_Equal@PAPBDPAPBDP6A_NPBD0@Z@std@@YA_NPAPBD00P6A_NPBD1@ZUrandom_access_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z");
//};

//void destruct_in_place<class c_tag_struct_fixup_stream>(class c_tag_struct_fixup_stream *)
//{
//    mangled_ppc("??$destruct_in_place@Vc_tag_struct_fixup_stream@@@@YAXPAVc_tag_struct_fixup_stream@@@Z");
//};

//void destruct_in_place<class c_tag_group_fixupper_default>(class c_tag_group_fixupper_default *)
//{
//    mangled_ppc("??$destruct_in_place@Vc_tag_group_fixupper_default@@@@YAXPAVc_tag_group_fixupper_default@@@Z");
//};

//bool std::_Debug_lt<char, char>(char const &, char const &, wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_lt@DD@std@@YA_NABD0PB_WI@Z");
//};

//struct s_tag_field_fixup_datum const * std::_Checked_base<struct s_tag_field_fixup_datum const *>(struct s_tag_field_fixup_datum const *&, struct std::_Unchanged_checked_iterator_base_type_tag)
//{
//    mangled_ppc("??$_Checked_base@PBUs_tag_field_fixup_datum@@@std@@YAPBUs_tag_field_fixup_datum@@AAPBU1@U_Unchanged_checked_iterator_base_type_tag@0@@Z");
//};

//struct s_tag_field_fixup_datum * std::_Checked_base<struct s_tag_field_fixup_datum *>(struct s_tag_field_fixup_datum *&)
//{
//    mangled_ppc("??$_Checked_base@PAUs_tag_field_fixup_datum@@@std@@YAPAUs_tag_field_fixup_datum@@AAPAU1@@Z");
//};

//struct s_tag_field_fixup_datum * std::_Copy_opt<struct s_tag_field_fixup_datum const *, struct s_tag_field_fixup_datum *, struct std::forward_iterator_tag>(struct s_tag_field_fixup_datum const *, struct s_tag_field_fixup_datum const *, struct s_tag_field_fixup_datum *, struct std::forward_iterator_tag, struct std::_Nonscalar_ptr_iterator_tag, struct std::_Range_checked_iterator_tag)
//{
//    mangled_ppc("??$_Copy_opt@PBUs_tag_field_fixup_datum@@PAU1@Uforward_iterator_tag@std@@@std@@YAPAUs_tag_field_fixup_datum@@PBU1@0PAU1@Uforward_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z");
//};

//char const ** std::_Checked_base<char const **>(char const **&, struct std::_Unchanged_checked_iterator_base_type_tag)
//{
//    mangled_ppc("??$_Checked_base@PAPBD@std@@YAPAPBDAAPAPBDU_Unchanged_checked_iterator_base_type_tag@0@@Z");
//};

//bool std::_Equal<char const **, char const **, bool (*)(char const *, char const **), struct std::forward_iterator_tag>(char const **, char const **, char const **, bool (*)(char const *, char const *), struct std::forward_iterator_tag, struct std::_Range_checked_iterator_tag)
//{
//    mangled_ppc("??$_Equal@PAPBDPAPBDP6A_NPBD0@ZUforward_iterator_tag@std@@@std@@YA_NPAPBD00P6A_NPBD1@ZUforward_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z");
//};

//struct s_tag_field_fixup_datum * std::_Checked_base<struct s_tag_field_fixup_datum *>(struct s_tag_field_fixup_datum *&, struct std::_Unchanged_checked_iterator_base_type_tag)
//{
//    mangled_ppc("??$_Checked_base@PAUs_tag_field_fixup_datum@@@std@@YAPAUs_tag_field_fixup_datum@@AAPAU1@U_Unchanged_checked_iterator_base_type_tag@0@@Z");
//};

//void std::_Debug_range<struct s_tag_field_fixup_datum const *>(struct s_tag_field_fixup_datum const *, struct s_tag_field_fixup_datum const *, wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_range@PBUs_tag_field_fixup_datum@@@std@@YAXPBUs_tag_field_fixup_datum@@0PB_WI@Z");
//};

//struct std::random_access_iterator_tag std::_Iter_cat<struct s_tag_field_fixup_datum const *>(struct s_tag_field_fixup_datum const *const &)
//{
//    mangled_ppc("??$_Iter_cat@PBUs_tag_field_fixup_datum@@@std@@YA?AUrandom_access_iterator_tag@0@ABQBUs_tag_field_fixup_datum@@@Z");
//};

//void std::_Debug_range2<struct s_tag_field_fixup_datum const *>(struct s_tag_field_fixup_datum const *, struct s_tag_field_fixup_datum const *, wchar_t const *, unsigned int, struct std::random_access_iterator_tag)
//{
//    mangled_ppc("??$_Debug_range2@PBUs_tag_field_fixup_datum@@@std@@YAXPBUs_tag_field_fixup_datum@@0PB_WIUrandom_access_iterator_tag@0@@Z");
//};

//void std::_Debug_pointer<struct s_tag_field_fixup_datum>(struct s_tag_field_fixup_datum const *, wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_pointer@Us_tag_field_fixup_datum@@@std@@YAXPBUs_tag_field_fixup_datum@@PB_WI@Z");
//};

