/* ---------- headers */

#include "omaha\tag_files\tag_group_editing.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// bool display_colors_in_banded_gamma; // "?display_colors_in_banded_gamma@@3_NA"

// struct s_tag_block * tag_block_index_resolve_top_level_block(long, struct s_tag_field const *, void const *, void const *);
// struct s_tag_block * tag_block_index_resolve_slow(long, struct s_tag_field const *, void const *, void const *);
// struct s_tag_block * tag_block_resolve_custom_index_kludge(long, struct s_tag_field const *, void const *, void const *, __int64, __int64*);
// struct s_tag_block * tag_block_index_resolve_with_reference(long, struct s_tag_field const *, void const *, void const *, struct s_tag_block *);
// struct s_tag_block * tag_block_index_resolve_with_locator(long, struct s_tag_field const *, void const *, __int64, __int64*);
// struct s_tag_block * tag_block_index_resolve_with_definition_and_locator(long, struct s_tag_block_definition const *, __int64, __int64*);
// struct s_tag_block * tag_block_index_resolve_relative_to_block_element_with_definition_and_locator(struct s_tag_block const *, long, struct s_tag_block_definition const *, __int64, __int64*);
// public: c_tag_block_resolver::c_tag_block_resolver(struct s_tag_block_definition const *, __int64);
// public: bool c_tag_block_resolver::find_block(class c_tag_aggregate_wrapper const &);
// public: __int64 c_tag_block_resolver::get_block_offset(void) const;
// public: struct s_tag_block * c_tag_block_resolver::get_block(void) const;
// private: bool c_tag_block_resolver::find_block_recursive(class c_tag_aggregate_wrapper const &, class c_tag_aggregate_wrapper const &, __int64, __int64);
// private: bool c_tag_block_resolver::find_block_in_element(class c_tag_aggregate_wrapper const &, class c_tag_aggregate_wrapper const &, __int64);
// public: s_tag_locator_next_link::s_tag_locator_next_link(void);
// void tag_block_indexes_adjust(long, struct s_tag_block *, long const *, long);
// void tag_process_block_references(long, struct s_tag_block *, void (*)(struct s_tag_field const *, void *, struct s_tag_block *, long, void *), void *);
// bool tag_block_remap_elements(struct s_tag_block *, long const *, long);
// long tag_insert_block_element(long, struct s_tag_block *, long);
// void tag_remove_block_indices(long, struct s_tag_block *, unsigned long const *);
// void tag_remove_block_element(long, struct s_tag_block *, long);
// void tag_remove_all_block_elements(long, struct s_tag_block *);
// void tag_process_block_references_recursive(struct s_tag_block *, long, __int64, struct s_tag_block *, void (*)(struct s_tag_field const *, void *, struct s_tag_block *, long, void *), void *, bool, bool *, bool *);
// void tag_field_adjust_block_index(struct s_tag_field const *, void *, struct s_tag_block *, long, void *);
// struct s_tag_block * tag_block_index_resolve_recursive(struct s_tag_block *, struct s_tag_field const *, void const *);
// struct s_tag_block * tag_block_index_resolve_recursive_with_reference(struct s_tag_block *, struct s_tag_field const *, void const *, struct s_tag_block *, long, long *, long *, bool *);
// bool tag_field_copy(struct s_tag_field const *, void *, void const *);
// bool tag_field_initialize(struct s_tag_field const *, class c_basic_buffer<void> &);
// bool tag_field_matches_block_definition(struct s_tag_field const *, struct s_tag_block_definition const *);
// bool tag_field_custom_search_matches_block_definition(struct s_tag_field const *, struct s_block_index_custom_search_definition const *, struct s_tag_block_definition const *);
// long tag_field_get_block_index(struct s_tag_field const *, void const *);
// bool tag_field_try_to_set_block_index(struct s_tag_field const *, void *, long);
// void tag_field_set_block_index(struct s_tag_field const *, void *, long);
// long tag_field_get_enum(struct s_tag_field const *, void const *);
// void tag_field_set_enum(struct s_tag_field const *, void *, long);
// long tag_field_max_string_size(struct s_tag_field const *);
// void tag_field_get_string(struct s_tag_field const *, void const *, char *, long);
// void tag_field_set_string(struct s_tag_field const *, void *, char const *);
// char const * tag_field_get_string_const(struct s_tag_field const *, void const *);
// unsigned long tag_field_get_flag_bits(struct s_tag_field const *, void const *);
// void tag_field_set_flag_bits(struct s_tag_field const *, void *, unsigned long);
// bool tag_field_get_flag(struct s_tag_field const *, void const *, long);
// void tag_field_set_flag(struct s_tag_field const *, void *, long, bool);
// long tag_field_get_component_count(struct s_tag_field const *);
// long tag_field_get_integer(struct s_tag_field const *, void const *, long);
// void tag_field_set_integer(struct s_tag_field const *, void *, long, long);
// void tag_field_set_integer_and_check_precision(struct s_tag_field const *, void *, long, long, bool *);
// float tag_field_get_real(struct s_tag_field const *, void const *, long);
// void tag_field_set_real(struct s_tag_field const *, void *, long, float);
// void tag_field_set_real_and_check_precision(struct s_tag_field const *, void *, long, float, bool *);
// void tag_field_get_color(struct s_tag_field const *, void const *, union argb_color *);
// void tag_field_set_color(struct s_tag_field const *, void *, union argb_color const *);
// void tag_field_convert_color_to_native(enum e_tag_field, void *);
// void tag_field_convert_color_from_native(enum e_tag_field, void *);
// void tag_field_convert_color_for_display_from_native(enum e_tag_field, void *);
// enum e_tag_field_base_type tag_field_get_base_type(struct s_tag_field const *);
// enum e_tag_field_base_type tag_field_type_get_base_type(enum e_tag_field);
// long tag_field_get_long(struct s_tag_field const *, void const *);
// __int64 tag_field_get_int64(enum e_tag_field, void const *);
// void tag_field_set_int64(enum e_tag_field, void *, __int64);
// __int64 tag_field_get_int64_from_array(enum e_tag_field, void const *, long);
// void tag_field_set_int64_from_array(enum e_tag_field, void *, long, __int64);
// long tag_block_find_named_element(struct s_tag_block const *, long);
// long tag_block_find_or_create_named_element(struct s_tag_block *, long);
// void * tag_block_get_element_unchecked(struct s_tag_block const *, long);
// void dump_loaded_tags(void);
// bool tag_valid_for_tag_reference(struct s_tag_reference_definition const *, unsigned long);
// bool tag_references_match(struct s_tag_reference const *, struct s_tag_reference const *);
// long find_tag_string_end(char const *);
// char const * find_tag_string_end_explicit(char const *, char const *);
// bool string_compare_exact(class c_wrapped_array<char const> const &, class c_wrapped_array<char const> const &);
// bool strings_match_with_delimiters(char const *, char const *, char const *, char const *);
// char const * get_field_name_delimiters(void);
// char const * tag_field_name_find_end(char const *);
// bool tag_field_name_strings_match(char const *, char const *);
// bool string_is_null_or_empty(char const *);
// char * append_tag_field_name(char *, char const *, long);
// class c_wrapped_array<char const> get_bounded_tag_field_name(char const *);
// long tag_block_find_element_with_name(struct s_tag_block const *, char const *);
// long tag_field_get_external_element_count(struct s_tag_field const *, void const *);
// long tag_field_get_external_maximum_element_count(struct s_tag_field const *);
// long tag_field_get_maximum_element_count(struct s_tag_field const *);
// void * tag_field_get_external_element(struct s_tag_field const *, void *, long);
// void const * tag_field_get_external_element_const(struct s_tag_field const *, void const *, long);
// __int64 tag_field_get_locator_adjustment(struct s_tag_field const *);
// bool tag_blocks_match_slow(struct s_tag_block const *, struct s_tag_block const *, bool);
// long tag_block_find_element(struct s_tag_block const *, struct s_tag_block const *, long, bool (*)(void *, void *));
// long tag_block_find_element_in_range(struct s_tag_block const *, long, long, struct s_tag_block const *, long, bool (*)(void *, void *));
// bool tag_block_match_element_recursive(struct s_tag_struct_definition const *, void *, void *);
// bool tag_field_scanner_extract_field_path(class c_tag_field_scanner const *, class c_wrapped_array<char>, char);
// public: long c_tag_field_scanner::get_state_index(void) const;
// long tag_get_distance_to_tag(unsigned long, unsigned long);
// long tag_get_distance_to_tag_list(unsigned long, class c_wrapped_array<unsigned long const>);
// bool tag_fix_word_to_dword_or_long_backward_comaptibility(long *);
// public: long c_wrapped_array_no_init<unsigned long const>::count(void) const;
// public: unsigned long const & c_array_operator_interface<class c_wrapped_array_no_init<unsigned long const>, unsigned long const>::operator[](long) const;
// public: unsigned long const * c_wrapped_array_no_init<unsigned long const>::begin(void) const;
// public: bool c_array_operator_interface<class c_wrapped_array_no_init<unsigned long const>, unsigned long const>::valid_index(long) const;
// public: class c_wrapped_array_no_init<unsigned long const> const * c_recursive_template_pattern<class c_wrapped_array_no_init<unsigned long const> >::get_super_class(void) const;
// public: long c_array_operator_interface<class c_wrapped_array_no_init<unsigned long const>, unsigned long const>::count(void) const;
// bool operator!=<__int64>(__int64const &, enum e_none_sentinel const &);
// struct s_tag_struct_definition * get_field_definition<57>(struct s_tag_field const *);
// struct s_tag_array_definition * get_field_definition<58>(struct s_tag_field const *);
// class c_wrapped_array<char const> make_wrapped_array<char const>(char const *, char const *);
// class c_wrapped_array<char const> make_wrapped_array<char const>(char const *, long);
// public: c_wrapped_array<char const>::c_wrapped_array<char const>(char const *, long);
// bool operator==<__int64>(__int64const &, enum e_none_sentinel const &);

//struct s_tag_block * tag_block_index_resolve_top_level_block(long, struct s_tag_field const *, void const *, void const *)
//{
//    mangled_ppc("?tag_block_index_resolve_top_level_block@@YAPAUs_tag_block@@JPBUs_tag_field@@PBX1@Z");
//};

//struct s_tag_block * tag_block_index_resolve_slow(long, struct s_tag_field const *, void const *, void const *)
//{
//    mangled_ppc("?tag_block_index_resolve_slow@@YAPAUs_tag_block@@JPBUs_tag_field@@PBX1@Z");
//};

//struct s_tag_block * tag_block_resolve_custom_index_kludge(long, struct s_tag_field const *, void const *, void const *, __int64, __int64*)
//{
//    mangled_ppc("?tag_block_resolve_custom_index_kludge@@YAPAUs_tag_block@@JPBUs_tag_field@@PBX1_JPA_J@Z");
//};

//struct s_tag_block * tag_block_index_resolve_with_reference(long, struct s_tag_field const *, void const *, void const *, struct s_tag_block *)
//{
//    mangled_ppc("?tag_block_index_resolve_with_reference@@YAPAUs_tag_block@@JPBUs_tag_field@@PBX1PAU1@@Z");
//};

//struct s_tag_block * tag_block_index_resolve_with_locator(long, struct s_tag_field const *, void const *, __int64, __int64*)
//{
//    mangled_ppc("?tag_block_index_resolve_with_locator@@YAPAUs_tag_block@@JPBUs_tag_field@@PBX_JPA_J@Z");
//};

//struct s_tag_block * tag_block_index_resolve_with_definition_and_locator(long, struct s_tag_block_definition const *, __int64, __int64*)
//{
//    mangled_ppc("?tag_block_index_resolve_with_definition_and_locator@@YAPAUs_tag_block@@JPBUs_tag_block_definition@@_JPA_J@Z");
//};

//struct s_tag_block * tag_block_index_resolve_relative_to_block_element_with_definition_and_locator(struct s_tag_block const *, long, struct s_tag_block_definition const *, __int64, __int64*)
//{
//    mangled_ppc("?tag_block_index_resolve_relative_to_block_element_with_definition_and_locator@@YAPAUs_tag_block@@PBU1@JPBUs_tag_block_definition@@_JPA_J@Z");
//};

//public: c_tag_block_resolver::c_tag_block_resolver(struct s_tag_block_definition const *, __int64)
//{
//    mangled_ppc("??0c_tag_block_resolver@@QAA@PBUs_tag_block_definition@@_J@Z");
//};

//public: bool c_tag_block_resolver::find_block(class c_tag_aggregate_wrapper const &)
//{
//    mangled_ppc("?find_block@c_tag_block_resolver@@QAA_NABVc_tag_aggregate_wrapper@@@Z");
//};

//public: __int64 c_tag_block_resolver::get_block_offset(void) const
//{
//    mangled_ppc("?get_block_offset@c_tag_block_resolver@@QBA_JXZ");
//};

//public: struct s_tag_block * c_tag_block_resolver::get_block(void) const
//{
//    mangled_ppc("?get_block@c_tag_block_resolver@@QBAPAUs_tag_block@@XZ");
//};

//private: bool c_tag_block_resolver::find_block_recursive(class c_tag_aggregate_wrapper const &, class c_tag_aggregate_wrapper const &, __int64, __int64)
//{
//    mangled_ppc("?find_block_recursive@c_tag_block_resolver@@AAA_NABVc_tag_aggregate_wrapper@@0_J1@Z");
//};

//private: bool c_tag_block_resolver::find_block_in_element(class c_tag_aggregate_wrapper const &, class c_tag_aggregate_wrapper const &, __int64)
//{
//    mangled_ppc("?find_block_in_element@c_tag_block_resolver@@AAA_NABVc_tag_aggregate_wrapper@@0_J@Z");
//};

//public: s_tag_locator_next_link::s_tag_locator_next_link(void)
//{
//    mangled_ppc("??0s_tag_locator_next_link@@QAA@XZ");
//};

//void tag_block_indexes_adjust(long, struct s_tag_block *, long const *, long)
//{
//    mangled_ppc("?tag_block_indexes_adjust@@YAXJPAUs_tag_block@@PBJJ@Z");
//};

//void tag_process_block_references(long, struct s_tag_block *, void (*)(struct s_tag_field const *, void *, struct s_tag_block *, long, void *), void *)
//{
//    mangled_ppc("?tag_process_block_references@@YAXJPAUs_tag_block@@P6AXPBUs_tag_field@@PAX0J2@Z2@Z");
//};

//bool tag_block_remap_elements(struct s_tag_block *, long const *, long)
//{
//    mangled_ppc("?tag_block_remap_elements@@YA_NPAUs_tag_block@@PBJJ@Z");
//};

//long tag_insert_block_element(long, struct s_tag_block *, long)
//{
//    mangled_ppc("?tag_insert_block_element@@YAJJPAUs_tag_block@@J@Z");
//};

//void tag_remove_block_indices(long, struct s_tag_block *, unsigned long const *)
//{
//    mangled_ppc("?tag_remove_block_indices@@YAXJPAUs_tag_block@@PBK@Z");
//};

//void tag_remove_block_element(long, struct s_tag_block *, long)
//{
//    mangled_ppc("?tag_remove_block_element@@YAXJPAUs_tag_block@@J@Z");
//};

//void tag_remove_all_block_elements(long, struct s_tag_block *)
//{
//    mangled_ppc("?tag_remove_all_block_elements@@YAXJPAUs_tag_block@@@Z");
//};

//void tag_process_block_references_recursive(struct s_tag_block *, long, __int64, struct s_tag_block *, void (*)(struct s_tag_field const *, void *, struct s_tag_block *, long, void *), void *, bool, bool *, bool *)
//{
//    mangled_ppc("?tag_process_block_references_recursive@@YAXPAUs_tag_block@@J_J0P6AXPBUs_tag_field@@PAX0J3@Z3_NPA_N6@Z");
//};

//void tag_field_adjust_block_index(struct s_tag_field const *, void *, struct s_tag_block *, long, void *)
//{
//    mangled_ppc("?tag_field_adjust_block_index@@YAXPBUs_tag_field@@PAXPAUs_tag_block@@J1@Z");
//};

//struct s_tag_block * tag_block_index_resolve_recursive(struct s_tag_block *, struct s_tag_field const *, void const *)
//{
//    mangled_ppc("?tag_block_index_resolve_recursive@@YAPAUs_tag_block@@PAU1@PBUs_tag_field@@PBX@Z");
//};

//struct s_tag_block * tag_block_index_resolve_recursive_with_reference(struct s_tag_block *, struct s_tag_field const *, void const *, struct s_tag_block *, long, long *, long *, bool *)
//{
//    mangled_ppc("?tag_block_index_resolve_recursive_with_reference@@YAPAUs_tag_block@@PAU1@PBUs_tag_field@@PBX0JPAJ3PA_N@Z");
//};

//bool tag_field_copy(struct s_tag_field const *, void *, void const *)
//{
//    mangled_ppc("?tag_field_copy@@YA_NPBUs_tag_field@@PAXPBX@Z");
//};

//bool tag_field_initialize(struct s_tag_field const *, class c_basic_buffer<void> &)
//{
//    mangled_ppc("?tag_field_initialize@@YA_NPBUs_tag_field@@AAV?$c_basic_buffer@X@@@Z");
//};

//bool tag_field_matches_block_definition(struct s_tag_field const *, struct s_tag_block_definition const *)
//{
//    mangled_ppc("?tag_field_matches_block_definition@@YA_NPBUs_tag_field@@PBUs_tag_block_definition@@@Z");
//};

//bool tag_field_custom_search_matches_block_definition(struct s_tag_field const *, struct s_block_index_custom_search_definition const *, struct s_tag_block_definition const *)
//{
//    mangled_ppc("?tag_field_custom_search_matches_block_definition@@YA_NPBUs_tag_field@@PBUs_block_index_custom_search_definition@@PBUs_tag_block_definition@@@Z");
//};

//long tag_field_get_block_index(struct s_tag_field const *, void const *)
//{
//    mangled_ppc("?tag_field_get_block_index@@YAJPBUs_tag_field@@PBX@Z");
//};

//bool tag_field_try_to_set_block_index(struct s_tag_field const *, void *, long)
//{
//    mangled_ppc("?tag_field_try_to_set_block_index@@YA_NPBUs_tag_field@@PAXJ@Z");
//};

//void tag_field_set_block_index(struct s_tag_field const *, void *, long)
//{
//    mangled_ppc("?tag_field_set_block_index@@YAXPBUs_tag_field@@PAXJ@Z");
//};

//long tag_field_get_enum(struct s_tag_field const *, void const *)
//{
//    mangled_ppc("?tag_field_get_enum@@YAJPBUs_tag_field@@PBX@Z");
//};

//void tag_field_set_enum(struct s_tag_field const *, void *, long)
//{
//    mangled_ppc("?tag_field_set_enum@@YAXPBUs_tag_field@@PAXJ@Z");
//};

//long tag_field_max_string_size(struct s_tag_field const *)
//{
//    mangled_ppc("?tag_field_max_string_size@@YAJPBUs_tag_field@@@Z");
//};

//void tag_field_get_string(struct s_tag_field const *, void const *, char *, long)
//{
//    mangled_ppc("?tag_field_get_string@@YAXPBUs_tag_field@@PBXPADJ@Z");
//};

//void tag_field_set_string(struct s_tag_field const *, void *, char const *)
//{
//    mangled_ppc("?tag_field_set_string@@YAXPBUs_tag_field@@PAXPBD@Z");
//};

//char const * tag_field_get_string_const(struct s_tag_field const *, void const *)
//{
//    mangled_ppc("?tag_field_get_string_const@@YAPBDPBUs_tag_field@@PBX@Z");
//};

//unsigned long tag_field_get_flag_bits(struct s_tag_field const *, void const *)
//{
//    mangled_ppc("?tag_field_get_flag_bits@@YAKPBUs_tag_field@@PBX@Z");
//};

//void tag_field_set_flag_bits(struct s_tag_field const *, void *, unsigned long)
//{
//    mangled_ppc("?tag_field_set_flag_bits@@YAXPBUs_tag_field@@PAXK@Z");
//};

//bool tag_field_get_flag(struct s_tag_field const *, void const *, long)
//{
//    mangled_ppc("?tag_field_get_flag@@YA_NPBUs_tag_field@@PBXJ@Z");
//};

//void tag_field_set_flag(struct s_tag_field const *, void *, long, bool)
//{
//    mangled_ppc("?tag_field_set_flag@@YAXPBUs_tag_field@@PAXJ_N@Z");
//};

//long tag_field_get_component_count(struct s_tag_field const *)
//{
//    mangled_ppc("?tag_field_get_component_count@@YAJPBUs_tag_field@@@Z");
//};

//long tag_field_get_integer(struct s_tag_field const *, void const *, long)
//{
//    mangled_ppc("?tag_field_get_integer@@YAJPBUs_tag_field@@PBXJ@Z");
//};

//void tag_field_set_integer(struct s_tag_field const *, void *, long, long)
//{
//    mangled_ppc("?tag_field_set_integer@@YAXPBUs_tag_field@@PAXJJ@Z");
//};

//void tag_field_set_integer_and_check_precision(struct s_tag_field const *, void *, long, long, bool *)
//{
//    mangled_ppc("?tag_field_set_integer_and_check_precision@@YAXPBUs_tag_field@@PAXJJPA_N@Z");
//};

//float tag_field_get_real(struct s_tag_field const *, void const *, long)
//{
//    mangled_ppc("?tag_field_get_real@@YAMPBUs_tag_field@@PBXJ@Z");
//};

//void tag_field_set_real(struct s_tag_field const *, void *, long, float)
//{
//    mangled_ppc("?tag_field_set_real@@YAXPBUs_tag_field@@PAXJM@Z");
//};

//void tag_field_set_real_and_check_precision(struct s_tag_field const *, void *, long, float, bool *)
//{
//    mangled_ppc("?tag_field_set_real_and_check_precision@@YAXPBUs_tag_field@@PAXJMPA_N@Z");
//};

//void tag_field_get_color(struct s_tag_field const *, void const *, union argb_color *)
//{
//    mangled_ppc("?tag_field_get_color@@YAXPBUs_tag_field@@PBXPATargb_color@@@Z");
//};

//void tag_field_set_color(struct s_tag_field const *, void *, union argb_color const *)
//{
//    mangled_ppc("?tag_field_set_color@@YAXPBUs_tag_field@@PAXPBTargb_color@@@Z");
//};

//void tag_field_convert_color_to_native(enum e_tag_field, void *)
//{
//    mangled_ppc("?tag_field_convert_color_to_native@@YAXW4e_tag_field@@PAX@Z");
//};

//void tag_field_convert_color_from_native(enum e_tag_field, void *)
//{
//    mangled_ppc("?tag_field_convert_color_from_native@@YAXW4e_tag_field@@PAX@Z");
//};

//void tag_field_convert_color_for_display_from_native(enum e_tag_field, void *)
//{
//    mangled_ppc("?tag_field_convert_color_for_display_from_native@@YAXW4e_tag_field@@PAX@Z");
//};

//enum e_tag_field_base_type tag_field_get_base_type(struct s_tag_field const *)
//{
//    mangled_ppc("?tag_field_get_base_type@@YA?AW4e_tag_field_base_type@@PBUs_tag_field@@@Z");
//};

//enum e_tag_field_base_type tag_field_type_get_base_type(enum e_tag_field)
//{
//    mangled_ppc("?tag_field_type_get_base_type@@YA?AW4e_tag_field_base_type@@W4e_tag_field@@@Z");
//};

//long tag_field_get_long(struct s_tag_field const *, void const *)
//{
//    mangled_ppc("?tag_field_get_long@@YAJPBUs_tag_field@@PBX@Z");
//};

//__int64 tag_field_get_int64(enum e_tag_field, void const *)
//{
//    mangled_ppc("?tag_field_get_int64@@YA_JW4e_tag_field@@PBX@Z");
//};

//void tag_field_set_int64(enum e_tag_field, void *, __int64)
//{
//    mangled_ppc("?tag_field_set_int64@@YAXW4e_tag_field@@PAX_J@Z");
//};

//__int64 tag_field_get_int64_from_array(enum e_tag_field, void const *, long)
//{
//    mangled_ppc("?tag_field_get_int64_from_array@@YA_JW4e_tag_field@@PBXJ@Z");
//};

//void tag_field_set_int64_from_array(enum e_tag_field, void *, long, __int64)
//{
//    mangled_ppc("?tag_field_set_int64_from_array@@YAXW4e_tag_field@@PAXJ_J@Z");
//};

//long tag_block_find_named_element(struct s_tag_block const *, long)
//{
//    mangled_ppc("?tag_block_find_named_element@@YAJPBUs_tag_block@@J@Z");
//};

//long tag_block_find_or_create_named_element(struct s_tag_block *, long)
//{
//    mangled_ppc("?tag_block_find_or_create_named_element@@YAJPAUs_tag_block@@J@Z");
//};

//void * tag_block_get_element_unchecked(struct s_tag_block const *, long)
//{
//    mangled_ppc("?tag_block_get_element_unchecked@@YAPAXPBUs_tag_block@@J@Z");
//};

//void dump_loaded_tags(void)
//{
//    mangled_ppc("?dump_loaded_tags@@YAXXZ");
//};

//bool tag_valid_for_tag_reference(struct s_tag_reference_definition const *, unsigned long)
//{
//    mangled_ppc("?tag_valid_for_tag_reference@@YA_NPBUs_tag_reference_definition@@K@Z");
//};

//bool tag_references_match(struct s_tag_reference const *, struct s_tag_reference const *)
//{
//    mangled_ppc("?tag_references_match@@YA_NPBUs_tag_reference@@0@Z");
//};

//long find_tag_string_end(char const *)
//{
//    mangled_ppc("?find_tag_string_end@@YAJPBD@Z");
//};

//char const * find_tag_string_end_explicit(char const *, char const *)
//{
//    mangled_ppc("?find_tag_string_end_explicit@@YAPBDPBD0@Z");
//};

//bool string_compare_exact(class c_wrapped_array<char const> const &, class c_wrapped_array<char const> const &)
//{
//    mangled_ppc("?string_compare_exact@@YA_NABV?$c_wrapped_array@$$CBD@@0@Z");
//};

//bool strings_match_with_delimiters(char const *, char const *, char const *, char const *)
//{
//    mangled_ppc("?strings_match_with_delimiters@@YA_NPBD000@Z");
//};

//char const * get_field_name_delimiters(void)
//{
//    mangled_ppc("?get_field_name_delimiters@@YAPBDXZ");
//};

//char const * tag_field_name_find_end(char const *)
//{
//    mangled_ppc("?tag_field_name_find_end@@YAPBDPBD@Z");
//};

//bool tag_field_name_strings_match(char const *, char const *)
//{
//    mangled_ppc("?tag_field_name_strings_match@@YA_NPBD0@Z");
//};

//bool string_is_null_or_empty(char const *)
//{
//    mangled_ppc("?string_is_null_or_empty@@YA_NPBD@Z");
//};

//char * append_tag_field_name(char *, char const *, long)
//{
//    mangled_ppc("?append_tag_field_name@@YAPADPADPBDJ@Z");
//};

//class c_wrapped_array<char const> get_bounded_tag_field_name(char const *)
//{
//    mangled_ppc("?get_bounded_tag_field_name@@YA?AV?$c_wrapped_array@$$CBD@@PBD@Z");
//};

//long tag_block_find_element_with_name(struct s_tag_block const *, char const *)
//{
//    mangled_ppc("?tag_block_find_element_with_name@@YAJPBUs_tag_block@@PBD@Z");
//};

//long tag_field_get_external_element_count(struct s_tag_field const *, void const *)
//{
//    mangled_ppc("?tag_field_get_external_element_count@@YAJPBUs_tag_field@@PBX@Z");
//};

//long tag_field_get_external_maximum_element_count(struct s_tag_field const *)
//{
//    mangled_ppc("?tag_field_get_external_maximum_element_count@@YAJPBUs_tag_field@@@Z");
//};

//long tag_field_get_maximum_element_count(struct s_tag_field const *)
//{
//    mangled_ppc("?tag_field_get_maximum_element_count@@YAJPBUs_tag_field@@@Z");
//};

//void * tag_field_get_external_element(struct s_tag_field const *, void *, long)
//{
//    mangled_ppc("?tag_field_get_external_element@@YAPAXPBUs_tag_field@@PAXJ@Z");
//};

//void const * tag_field_get_external_element_const(struct s_tag_field const *, void const *, long)
//{
//    mangled_ppc("?tag_field_get_external_element_const@@YAPBXPBUs_tag_field@@PBXJ@Z");
//};

//__int64 tag_field_get_locator_adjustment(struct s_tag_field const *)
//{
//    mangled_ppc("?tag_field_get_locator_adjustment@@YA_JPBUs_tag_field@@@Z");
//};

//bool tag_blocks_match_slow(struct s_tag_block const *, struct s_tag_block const *, bool)
//{
//    mangled_ppc("?tag_blocks_match_slow@@YA_NPBUs_tag_block@@0_N@Z");
//};

//long tag_block_find_element(struct s_tag_block const *, struct s_tag_block const *, long, bool (*)(void *, void *))
//{
//    mangled_ppc("?tag_block_find_element@@YAJPBUs_tag_block@@0JP6A_NPAX1@Z@Z");
//};

//long tag_block_find_element_in_range(struct s_tag_block const *, long, long, struct s_tag_block const *, long, bool (*)(void *, void *))
//{
//    mangled_ppc("?tag_block_find_element_in_range@@YAJPBUs_tag_block@@JJ0JP6A_NPAX1@Z@Z");
//};

//bool tag_block_match_element_recursive(struct s_tag_struct_definition const *, void *, void *)
//{
//    mangled_ppc("?tag_block_match_element_recursive@@YA_NPBUs_tag_struct_definition@@PAX1@Z");
//};

//bool tag_field_scanner_extract_field_path(class c_tag_field_scanner const *, class c_wrapped_array<char>, char)
//{
//    mangled_ppc("?tag_field_scanner_extract_field_path@@YA_NPBVc_tag_field_scanner@@V?$c_wrapped_array@D@@D@Z");
//};

//public: long c_tag_field_scanner::get_state_index(void) const
//{
//    mangled_ppc("?get_state_index@c_tag_field_scanner@@QBAJXZ");
//};

//long tag_get_distance_to_tag(unsigned long, unsigned long)
//{
//    mangled_ppc("?tag_get_distance_to_tag@@YAJKK@Z");
//};

//long tag_get_distance_to_tag_list(unsigned long, class c_wrapped_array<unsigned long const>)
//{
//    mangled_ppc("?tag_get_distance_to_tag_list@@YAJKV?$c_wrapped_array@$$CBK@@@Z");
//};

//bool tag_fix_word_to_dword_or_long_backward_comaptibility(long *)
//{
//    mangled_ppc("?tag_fix_word_to_dword_or_long_backward_comaptibility@@YA_NPAJ@Z");
//};

//public: long c_wrapped_array_no_init<unsigned long const>::count(void) const
//{
//    mangled_ppc("?count@?$c_wrapped_array_no_init@$$CBK@@QBAJXZ");
//};

//public: unsigned long const & c_array_operator_interface<class c_wrapped_array_no_init<unsigned long const>, unsigned long const>::operator[](long) const
//{
//    mangled_ppc("??A?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CBK@@$$CBK@@QBAABKJ@Z");
//};

//public: unsigned long const * c_wrapped_array_no_init<unsigned long const>::begin(void) const
//{
//    mangled_ppc("?begin@?$c_wrapped_array_no_init@$$CBK@@QBAPBKXZ");
//};

//public: bool c_array_operator_interface<class c_wrapped_array_no_init<unsigned long const>, unsigned long const>::valid_index(long) const
//{
//    mangled_ppc("?valid_index@?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CBK@@$$CBK@@QBA_NJ@Z");
//};

//public: class c_wrapped_array_no_init<unsigned long const> const * c_recursive_template_pattern<class c_wrapped_array_no_init<unsigned long const> >::get_super_class(void) const
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@$$CBK@@@@QBAPBV?$c_wrapped_array_no_init@$$CBK@@XZ");
//};

//public: long c_array_operator_interface<class c_wrapped_array_no_init<unsigned long const>, unsigned long const>::count(void) const
//{
//    mangled_ppc("?count@?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CBK@@$$CBK@@QBAJXZ");
//};

//bool operator!=<__int64>(__int64const &, enum e_none_sentinel const &)
//{
//    mangled_ppc("??$?9_J@@YA_NAB_JABW4e_none_sentinel@@@Z");
//};

//struct s_tag_struct_definition * get_field_definition<57>(struct s_tag_field const *)
//{
//    mangled_ppc("??$get_field_definition@$0DJ@@@YAPAUs_tag_struct_definition@@PBUs_tag_field@@@Z");
//};

//struct s_tag_array_definition * get_field_definition<58>(struct s_tag_field const *)
//{
//    mangled_ppc("??$get_field_definition@$0DK@@@YAPAUs_tag_array_definition@@PBUs_tag_field@@@Z");
//};

//class c_wrapped_array<char const> make_wrapped_array<char const>(char const *, char const *)
//{
//    mangled_ppc("??$make_wrapped_array@$$CBD@@YA?AV?$c_wrapped_array@$$CBD@@PBD0@Z");
//};

//class c_wrapped_array<char const> make_wrapped_array<char const>(char const *, long)
//{
//    mangled_ppc("??$make_wrapped_array@$$CBD@@YA?AV?$c_wrapped_array@$$CBD@@PBDJ@Z");
//};

//public: c_wrapped_array<char const>::c_wrapped_array<char const>(char const *, long)
//{
//    mangled_ppc("??0?$c_wrapped_array@$$CBD@@QAA@PBDJ@Z");
//};

//bool operator==<__int64>(__int64const &, enum e_none_sentinel const &)
//{
//    mangled_ppc("??$?8_J@@YA_NAB_JABW4e_none_sentinel@@@Z");
//};

