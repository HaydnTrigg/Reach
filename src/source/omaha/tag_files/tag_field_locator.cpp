/* ---------- headers */

#include "omaha\tag_files\tag_field_locator.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// bool tag_get_next_link_in_definition_from_locator_offset(struct s_tag_struct_definition const *, __int64, struct s_tag_locator_next_link_in_definition *);
// bool tag_get_next_link_from_locator_offset(class c_tag_aggregate_wrapper const &, __int64, struct s_tag_locator_next_link *);
// bool tag_get_block_from_offset(long, __int64, struct s_tag_block_from_offset_result *);
// bool tag_get_block_from_aggregate_and_offset(class c_tag_aggregate_wrapper const &, __int64, struct s_tag_block_from_offset_result *);
// bool tag_field_locator_exists(long, __int64);
// bool address_in_tag_struct(void const *, struct s_tag_struct_definition const *, void const *);
// __int64 offset_to_element_field(class c_tag_aggregate_wrapper const &, void const *);
// __int64 tag_block_get_locator_offset_to_child_block_element(void const *, struct s_tag_struct_definition const *, void const *, long);
// __int64 offset_to_first_field_of_external_memory_aggregate(struct s_tag_field const *, void const *, long);
// __int64 tag_update_locator_offset_for_index_resolve(__int64, void const *, struct s_tag_struct_definition const *, class c_tag_aggregate_wrapper const *, long, struct s_tag_block const *);
// __int64 tag_get_locator_offset_to_block_with_parent_block_chain(long, class c_tag_aggregate_wrapper const *, long, struct s_tag_block const *);
// __int64 tag_get_locator_offset_to_block(long, struct s_tag_block const *);
// __int64 tag_aggregate_get_locator_to_element_field(class c_tag_aggregate_wrapper const &, void const *);
// __int64 offset_to_first_field_of_element_of_aggregate(class c_tag_aggregate_wrapper const &);
// bool tag_is_field_locator_valid(long, __int64, void const *);
// bool tag_is_field_locator_valid_relative_to_aggregate(class c_tag_aggregate_wrapper const &, __int64, void const *);
// char * build_path_from_locator_offset(struct s_tag_struct_definition const *, __int64, char *, long, struct s_tag_field const **);
// public: c_tag_aggregate_wrapper::c_tag_aggregate_wrapper(void);
// public: c_tag_aggregate_wrapper::c_tag_aggregate_wrapper(struct s_tag_field const *, void const *, long);
// public: c_tag_aggregate_wrapper::c_tag_aggregate_wrapper(void const *, struct s_tag_struct_definition const *);
// public: c_tag_aggregate_wrapper::c_tag_aggregate_wrapper(struct s_tag_block const *, long);
// public: c_tag_aggregate_wrapper::c_tag_aggregate_wrapper(struct s_tag_resource const *);
// public: c_tag_aggregate_wrapper::c_tag_aggregate_wrapper(struct s_tag_interop const *);
// public: c_tag_aggregate_wrapper::c_tag_aggregate_wrapper(class c_tag_aggregate_wrapper const &);
// public: bool c_tag_aggregate_wrapper::valid(void) const;
// public: void const * c_tag_aggregate_wrapper::get_external_aggregate(void) const;
// public: void const * c_tag_aggregate_wrapper::get_element_address(void) const;
// public: struct s_tag_struct_definition const * c_tag_aggregate_wrapper::get_element_definition(void) const;
// public: long c_tag_aggregate_wrapper::get_element_index(void) const;
// public: __int64 c_tag_aggregate_wrapper::get_element_locator_offset(void) const;
// __int64 tag_group_get_locator_upper_bound(unsigned long);
// __int64 tag_stream_get_locator_upper_bound(unsigned long);
// __int64 tag_group_get_stream_locator_offset(unsigned long, unsigned long);
// bool tag_get_root_block_containing_locator_offset(long, __int64, struct s_tag_block **, __int64*);
// public: c_wrapped_array<unsigned long>::ctor<16>(unsigned long (&)[16]);
// public: void c_wrapped_array_no_init<unsigned long>::set_elements(unsigned long *, long);

//bool tag_get_next_link_in_definition_from_locator_offset(struct s_tag_struct_definition const *, __int64, struct s_tag_locator_next_link_in_definition *)
//{
//    mangled_ppc("?tag_get_next_link_in_definition_from_locator_offset@@YA_NPBUs_tag_struct_definition@@_JPAUs_tag_locator_next_link_in_definition@@@Z");
//};

//bool tag_get_next_link_from_locator_offset(class c_tag_aggregate_wrapper const &, __int64, struct s_tag_locator_next_link *)
//{
//    mangled_ppc("?tag_get_next_link_from_locator_offset@@YA_NABVc_tag_aggregate_wrapper@@_JPAUs_tag_locator_next_link@@@Z");
//};

//bool tag_get_block_from_offset(long, __int64, struct s_tag_block_from_offset_result *)
//{
//    mangled_ppc("?tag_get_block_from_offset@@YA_NJ_JPAUs_tag_block_from_offset_result@@@Z");
//};

//bool tag_get_block_from_aggregate_and_offset(class c_tag_aggregate_wrapper const &, __int64, struct s_tag_block_from_offset_result *)
//{
//    mangled_ppc("?tag_get_block_from_aggregate_and_offset@@YA_NABVc_tag_aggregate_wrapper@@_JPAUs_tag_block_from_offset_result@@@Z");
//};

//bool tag_field_locator_exists(long, __int64)
//{
//    mangled_ppc("?tag_field_locator_exists@@YA_NJ_J@Z");
//};

//bool address_in_tag_struct(void const *, struct s_tag_struct_definition const *, void const *)
//{
//    mangled_ppc("?address_in_tag_struct@@YA_NPBXPBUs_tag_struct_definition@@0@Z");
//};

//__int64 offset_to_element_field(class c_tag_aggregate_wrapper const &, void const *)
//{
//    mangled_ppc("?offset_to_element_field@@YA_JABVc_tag_aggregate_wrapper@@PBX@Z");
//};

//__int64 tag_block_get_locator_offset_to_child_block_element(void const *, struct s_tag_struct_definition const *, void const *, long)
//{
//    mangled_ppc("?tag_block_get_locator_offset_to_child_block_element@@YA_JPBXPBUs_tag_struct_definition@@0J@Z");
//};

//__int64 offset_to_first_field_of_external_memory_aggregate(struct s_tag_field const *, void const *, long)
//{
//    mangled_ppc("?offset_to_first_field_of_external_memory_aggregate@@YA_JPBUs_tag_field@@PBXJ@Z");
//};

//__int64 tag_update_locator_offset_for_index_resolve(__int64, void const *, struct s_tag_struct_definition const *, class c_tag_aggregate_wrapper const *, long, struct s_tag_block const *)
//{
//    mangled_ppc("?tag_update_locator_offset_for_index_resolve@@YA_J_JPBXPBUs_tag_struct_definition@@PBVc_tag_aggregate_wrapper@@JPBUs_tag_block@@@Z");
//};

//__int64 tag_get_locator_offset_to_block_with_parent_block_chain(long, class c_tag_aggregate_wrapper const *, long, struct s_tag_block const *)
//{
//    mangled_ppc("?tag_get_locator_offset_to_block_with_parent_block_chain@@YA_JJPBVc_tag_aggregate_wrapper@@JPBUs_tag_block@@@Z");
//};

//__int64 tag_get_locator_offset_to_block(long, struct s_tag_block const *)
//{
//    mangled_ppc("?tag_get_locator_offset_to_block@@YA_JJPBUs_tag_block@@@Z");
//};

//__int64 tag_aggregate_get_locator_to_element_field(class c_tag_aggregate_wrapper const &, void const *)
//{
//    mangled_ppc("?tag_aggregate_get_locator_to_element_field@@YA_JABVc_tag_aggregate_wrapper@@PBX@Z");
//};

//__int64 offset_to_first_field_of_element_of_aggregate(class c_tag_aggregate_wrapper const &)
//{
//    mangled_ppc("?offset_to_first_field_of_element_of_aggregate@@YA_JABVc_tag_aggregate_wrapper@@@Z");
//};

//bool tag_is_field_locator_valid(long, __int64, void const *)
//{
//    mangled_ppc("?tag_is_field_locator_valid@@YA_NJ_JPBX@Z");
//};

//bool tag_is_field_locator_valid_relative_to_aggregate(class c_tag_aggregate_wrapper const &, __int64, void const *)
//{
//    mangled_ppc("?tag_is_field_locator_valid_relative_to_aggregate@@YA_NABVc_tag_aggregate_wrapper@@_JPBX@Z");
//};

//char * build_path_from_locator_offset(struct s_tag_struct_definition const *, __int64, char *, long, struct s_tag_field const **)
//{
//    mangled_ppc("?build_path_from_locator_offset@@YAPADPBUs_tag_struct_definition@@_JPADJPAPBUs_tag_field@@@Z");
//};

//public: c_tag_aggregate_wrapper::c_tag_aggregate_wrapper(void)
//{
//    mangled_ppc("??0c_tag_aggregate_wrapper@@QAA@XZ");
//};

//public: c_tag_aggregate_wrapper::c_tag_aggregate_wrapper(struct s_tag_field const *, void const *, long)
//{
//    mangled_ppc("??0c_tag_aggregate_wrapper@@QAA@PBUs_tag_field@@PBXJ@Z");
//};

//public: c_tag_aggregate_wrapper::c_tag_aggregate_wrapper(void const *, struct s_tag_struct_definition const *)
//{
//    mangled_ppc("??0c_tag_aggregate_wrapper@@QAA@PBXPBUs_tag_struct_definition@@@Z");
//};

//public: c_tag_aggregate_wrapper::c_tag_aggregate_wrapper(struct s_tag_block const *, long)
//{
//    mangled_ppc("??0c_tag_aggregate_wrapper@@QAA@PBUs_tag_block@@J@Z");
//};

//public: c_tag_aggregate_wrapper::c_tag_aggregate_wrapper(struct s_tag_resource const *)
//{
//    mangled_ppc("??0c_tag_aggregate_wrapper@@QAA@PBUs_tag_resource@@@Z");
//};

//public: c_tag_aggregate_wrapper::c_tag_aggregate_wrapper(struct s_tag_interop const *)
//{
//    mangled_ppc("??0c_tag_aggregate_wrapper@@QAA@PBUs_tag_interop@@@Z");
//};

//public: c_tag_aggregate_wrapper::c_tag_aggregate_wrapper(class c_tag_aggregate_wrapper const &)
//{
//    mangled_ppc("??0c_tag_aggregate_wrapper@@QAA@ABV0@@Z");
//};

//public: bool c_tag_aggregate_wrapper::valid(void) const
//{
//    mangled_ppc("?valid@c_tag_aggregate_wrapper@@QBA_NXZ");
//};

//public: void const * c_tag_aggregate_wrapper::get_external_aggregate(void) const
//{
//    mangled_ppc("?get_external_aggregate@c_tag_aggregate_wrapper@@QBAPBXXZ");
//};

//public: void const * c_tag_aggregate_wrapper::get_element_address(void) const
//{
//    mangled_ppc("?get_element_address@c_tag_aggregate_wrapper@@QBAPBXXZ");
//};

//public: struct s_tag_struct_definition const * c_tag_aggregate_wrapper::get_element_definition(void) const
//{
//    mangled_ppc("?get_element_definition@c_tag_aggregate_wrapper@@QBAPBUs_tag_struct_definition@@XZ");
//};

//public: long c_tag_aggregate_wrapper::get_element_index(void) const
//{
//    mangled_ppc("?get_element_index@c_tag_aggregate_wrapper@@QBAJXZ");
//};

//public: __int64 c_tag_aggregate_wrapper::get_element_locator_offset(void) const
//{
//    mangled_ppc("?get_element_locator_offset@c_tag_aggregate_wrapper@@QBA_JXZ");
//};

//__int64 tag_group_get_locator_upper_bound(unsigned long)
//{
//    mangled_ppc("?tag_group_get_locator_upper_bound@@YA_JK@Z");
//};

//__int64 tag_stream_get_locator_upper_bound(unsigned long)
//{
//    mangled_ppc("?tag_stream_get_locator_upper_bound@@YA_JK@Z");
//};

//__int64 tag_group_get_stream_locator_offset(unsigned long, unsigned long)
//{
//    mangled_ppc("?tag_group_get_stream_locator_offset@@YA_JKK@Z");
//};

//bool tag_get_root_block_containing_locator_offset(long, __int64, struct s_tag_block **, __int64*)
//{
//    mangled_ppc("?tag_get_root_block_containing_locator_offset@@YA_NJ_JPAPAUs_tag_block@@PA_J@Z");
//};

//public: c_wrapped_array<unsigned long>::ctor<16>(unsigned long (&)[16])
//{
//    mangled_ppc("??$?0$0BA@@?$c_wrapped_array@K@@QAA@AAY0BA@K@Z");
//};

//public: void c_wrapped_array_no_init<unsigned long>::set_elements(unsigned long *, long)
//{
//    mangled_ppc("?set_elements@?$c_wrapped_array_no_init@K@@QAAXPAKJ@Z");
//};

