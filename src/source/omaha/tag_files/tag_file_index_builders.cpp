/* ---------- headers */

#include "omaha\tag_files\tag_file_index_builders.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// void * tag_file_index_build_new_internal(void *, bool, class c_tag_file_attribute_backend *, struct s_tag_file_list_index_builder_state *, class c_allocation_interface *);
// public: static bool s_tag_file_list_index_builder_state::next(void *, class c_static_string<256> *, struct s_tag_group const **, struct s_file_last_modification_date *);
// public: c_tag_file_reference::c_tag_file_reference(unsigned long, char const *);
// public: static void s_tag_file_list_index_builder_state::reset(void *);
// void * tag_file_index_build_new_from_file_path_array(void *, bool, class c_wrapped_array<class c_static_string<256> >, class c_allocation_interface *);
// public: s_tag_file_list_index_builder_state::s_tag_file_list_index_builder_state(void);
// public: s_tag_file_list_index_builder_state::~s_tag_file_list_index_builder_state(void);
// void * tag_file_index_build_new_from_list(void *, bool, class c_tag_file_attribute_backend *, char const *, class c_allocation_interface *);
// void * tag_file_index_build_new_from_index(void const *, void const *, bool, class c_allocation_interface *, char const *, bool, class c_tag_file_index_builder_filter *);
// public: static bool s_tag_file_index_from_index_builder_state::next(void *, class c_static_string<256> *, struct s_tag_group const **, struct s_file_last_modification_date *);
// public: static void s_tag_file_index_from_index_builder_state::reset(void *);
// public: array_template<struct s_tag_file_description>::array_template<struct s_tag_file_description>(void);
// public: array_template<struct s_tag_file_description>::~array_template<struct s_tag_file_description>(void);
// public: struct s_tag_file_description * array_template<struct s_tag_file_description>::get_element(long);
// public: struct s_tag_file_description * array_template<struct s_tag_file_description>::get_new_element(void);
// public: void array_template<struct s_tag_file_description>::resize(long);
// public: struct s_tag_file_description * array_template<struct s_tag_file_description>::begin(void);
// public: struct s_tag_file_description * array_template<struct s_tag_file_description>::end(void);
// public: unsigned int array_template<struct s_tag_file_description>::size(void) const;
// public: long c_wrapped_array_no_init<class c_static_string<256> >::count(void) const;
// public: class c_static_string<256> & c_array_operator_interface<class c_wrapped_array_no_init<class c_static_string<256> >, class c_static_string<256> >::operator[](long);
// public: long array_template<struct s_tag_file_description>::new_element_index(void);
// public: void array_template<struct s_tag_file_description>::resize_fill(long, long);
// public: class c_static_string<256> * c_wrapped_array_no_init<class c_static_string<256> >::begin(void);
// public: bool c_array_operator_interface<class c_wrapped_array_no_init<class c_static_string<256> >, class c_static_string<256> >::valid_index(long) const;
// public: class c_wrapped_array_no_init<class c_static_string<256> > * c_recursive_template_pattern<class c_wrapped_array_no_init<class c_static_string<256> > >::get_super_class(void);
// public: s_tag_file_description::s_tag_file_description(void);
// protected: void array_template<struct s_tag_file_description>::signal_out_of_memory(void) const;
// public: long c_array_operator_interface<class c_wrapped_array_no_init<class c_static_string<256> >, class c_static_string<256> >::count(void) const;
// public: class c_wrapped_array_no_init<class c_static_string<256> > const * c_recursive_template_pattern<class c_wrapped_array_no_init<class c_static_string<256> > >::get_super_class(void) const;
// void std::sort<struct s_tag_file_description *, class c_memcmp_compare>(struct s_tag_file_description *, struct s_tag_file_description *, class c_memcmp_compare);
// struct s_tag_file_description * std::unique<struct s_tag_file_description *, class c_memcmp_equals>(struct s_tag_file_description *, struct s_tag_file_description *, class c_memcmp_equals);
// int std::distance<struct s_tag_file_description *>(struct s_tag_file_description *, struct s_tag_file_description *);
// void std::_Debug_range<struct s_tag_file_description *>(struct s_tag_file_description *, struct s_tag_file_description *, wchar_t const *, unsigned int);
// void std::_Debug_pointer<class c_memcmp_compare>(class c_memcmp_compare &, wchar_t const *, unsigned int);
// struct s_tag_file_description * std::_Checked_base<struct s_tag_file_description *>(struct s_tag_file_description *&);
// void std::_Sort<struct s_tag_file_description *, int, class c_memcmp_compare>(struct s_tag_file_description *, struct s_tag_file_description *, int, class c_memcmp_compare);
// struct s_tag_file_description * std::_Unique<struct s_tag_file_description *, class c_memcmp_equals>(struct s_tag_file_description *, struct s_tag_file_description *, class c_memcmp_equals);
// void std::_Checked_assign_from_base<struct s_tag_file_description *>(struct s_tag_file_description *&, struct s_tag_file_description *const &);
// struct std::random_access_iterator_tag std::_Iter_cat<struct s_tag_file_description *>(struct s_tag_file_description *const &);
// void std::_Distance2<struct s_tag_file_description *, int>(struct s_tag_file_description *, struct s_tag_file_description *, int &, struct std::random_access_iterator_tag);
// void std::_Debug_range2<struct s_tag_file_description *>(struct s_tag_file_description *, struct s_tag_file_description *, wchar_t const *, unsigned int, struct std::random_access_iterator_tag);
// struct s_tag_file_description * std::_Checked_base<struct s_tag_file_description *>(struct s_tag_file_description *&, struct std::_Unchanged_checked_iterator_base_type_tag);
// struct std::pair<struct s_tag_file_description *, struct s_tag_file_description *> std::_Unguarded_partition<struct s_tag_file_description *, class c_memcmp_compare>(struct s_tag_file_description *, struct s_tag_file_description *, class c_memcmp_compare);
// void std::make_heap<struct s_tag_file_description *, class c_memcmp_compare>(struct s_tag_file_description *, struct s_tag_file_description *, class c_memcmp_compare);
// void std::sort_heap<struct s_tag_file_description *, class c_memcmp_compare>(struct s_tag_file_description *, struct s_tag_file_description *, class c_memcmp_compare);
// void std::_Insertion_sort<struct s_tag_file_description *, class c_memcmp_compare>(struct s_tag_file_description *, struct s_tag_file_description *, class c_memcmp_compare);
// void std::_Debug_pointer<class c_memcmp_equals>(class c_memcmp_equals &, wchar_t const *, unsigned int);
// public: bool c_memcmp_equals::operator()<struct s_tag_file_description>(struct s_tag_file_description const &, struct s_tag_file_description const &) const;
// void std::_Debug_pointer<struct s_tag_file_description>(struct s_tag_file_description *, wchar_t const *, unsigned int);
// public: std::pair<struct s_tag_file_description *, struct s_tag_file_description *>::pair<struct s_tag_file_description *, struct s_tag_file_description *>(struct s_tag_file_description *const &, struct s_tag_file_description *const &);
// void std::_Median<struct s_tag_file_description *, class c_memcmp_compare>(struct s_tag_file_description *, struct s_tag_file_description *, struct s_tag_file_description *, class c_memcmp_compare);
// bool std::_Debug_lt_pred<class c_memcmp_compare, struct s_tag_file_description, struct s_tag_file_description>(class c_memcmp_compare, struct s_tag_file_description &, struct s_tag_file_description &, wchar_t const *, unsigned int);
// public: bool c_memcmp_compare::operator()<struct s_tag_file_description>(struct s_tag_file_description const &, struct s_tag_file_description const &) const;
// void std::iter_swap<struct s_tag_file_description *, struct s_tag_file_description *>(struct s_tag_file_description *, struct s_tag_file_description *);
// int * std::_Dist_type<struct s_tag_file_description *>(struct s_tag_file_description *);
// struct s_tag_file_description * std::_Val_type<struct s_tag_file_description *>(struct s_tag_file_description *);
// void std::_Make_heap<struct s_tag_file_description *, int, struct s_tag_file_description, class c_memcmp_compare>(struct s_tag_file_description *, struct s_tag_file_description *, class c_memcmp_compare, int *, struct s_tag_file_description *);
// void std::_Debug_heap<struct s_tag_file_description *, class c_memcmp_compare>(struct s_tag_file_description *, struct s_tag_file_description *, class c_memcmp_compare);
// void std::_Sort_heap<struct s_tag_file_description *, class c_memcmp_compare>(struct s_tag_file_description *, struct s_tag_file_description *, class c_memcmp_compare);
// void std::_Insertion_sort1<struct s_tag_file_description *, class c_memcmp_compare, struct s_tag_file_description>(struct s_tag_file_description *, struct s_tag_file_description *, class c_memcmp_compare, struct s_tag_file_description *);
// void std::_Med3<struct s_tag_file_description *, class c_memcmp_compare>(struct s_tag_file_description *, struct s_tag_file_description *, struct s_tag_file_description *, class c_memcmp_compare);
// void std::swap<struct s_tag_file_description>(struct s_tag_file_description &, struct s_tag_file_description &);
// void std::_Adjust_heap<struct s_tag_file_description *, int, struct s_tag_file_description, class c_memcmp_compare>(struct s_tag_file_description *, int, int, struct s_tag_file_description, class c_memcmp_compare);
// void std::pop_heap<struct s_tag_file_description *, class c_memcmp_compare>(struct s_tag_file_description *, struct s_tag_file_description *, class c_memcmp_compare);
// struct s_tag_file_description * stdext::unchecked_copy_backward<struct s_tag_file_description *, struct s_tag_file_description *>(struct s_tag_file_description *, struct s_tag_file_description *, struct s_tag_file_description *);
// void std::_Push_heap<struct s_tag_file_description *, int, struct s_tag_file_description, class c_memcmp_compare>(struct s_tag_file_description *, int, int, struct s_tag_file_description, class c_memcmp_compare);
// void std::_Pop_heap_0<struct s_tag_file_description *, struct s_tag_file_description, class c_memcmp_compare>(struct s_tag_file_description *, struct s_tag_file_description *, class c_memcmp_compare, struct s_tag_file_description *);
// struct std::random_access_iterator_tag std::_Iter_random<struct s_tag_file_description *, struct s_tag_file_description *>(struct s_tag_file_description *const &, struct s_tag_file_description *const &);
// struct std::_Nonscalar_ptr_iterator_tag std::_Ptr_cat<struct s_tag_file_description *, struct s_tag_file_description *>(struct s_tag_file_description *&, struct s_tag_file_description *&);
// struct s_tag_file_description * std::_Copy_backward_opt<struct s_tag_file_description *, struct s_tag_file_description *>(struct s_tag_file_description *, struct s_tag_file_description *, struct s_tag_file_description *, struct std::random_access_iterator_tag, struct std::_Nonscalar_ptr_iterator_tag, struct std::_Range_checked_iterator_tag);
// void std::_Pop_heap<struct s_tag_file_description *, int, struct s_tag_file_description, class c_memcmp_compare>(struct s_tag_file_description *, struct s_tag_file_description *, struct s_tag_file_description *, struct s_tag_file_description, class c_memcmp_compare, int *);
// struct s_tag_file_description * std::_Copy_backward_opt<struct s_tag_file_description *, struct s_tag_file_description *, struct std::forward_iterator_tag>(struct s_tag_file_description *, struct s_tag_file_description *, struct s_tag_file_description *, struct std::forward_iterator_tag, struct std::_Nonscalar_ptr_iterator_tag, struct std::_Range_checked_iterator_tag);

//void * tag_file_index_build_new_internal(void *, bool, class c_tag_file_attribute_backend *, struct s_tag_file_list_index_builder_state *, class c_allocation_interface *)
//{
//    mangled_ppc("?tag_file_index_build_new_internal@@YAPAXPAX_NPAVc_tag_file_attribute_backend@@PAUs_tag_file_list_index_builder_state@@PAVc_allocation_interface@@@Z");
//};

//public: static bool s_tag_file_list_index_builder_state::next(void *, class c_static_string<256> *, struct s_tag_group const **, struct s_file_last_modification_date *)
//{
//    mangled_ppc("?next@s_tag_file_list_index_builder_state@@SA_NPAXPAV?$c_static_string@$0BAA@@@PAPBUs_tag_group@@PAUs_file_last_modification_date@@@Z");
//};

//public: c_tag_file_reference::c_tag_file_reference(unsigned long, char const *)
//{
//    mangled_ppc("??0c_tag_file_reference@@QAA@KPBD@Z");
//};

//public: static void s_tag_file_list_index_builder_state::reset(void *)
//{
//    mangled_ppc("?reset@s_tag_file_list_index_builder_state@@SAXPAX@Z");
//};

//void * tag_file_index_build_new_from_file_path_array(void *, bool, class c_wrapped_array<class c_static_string<256> >, class c_allocation_interface *)
//{
//    mangled_ppc("?tag_file_index_build_new_from_file_path_array@@YAPAXPAX_NV?$c_wrapped_array@V?$c_static_string@$0BAA@@@@@PAVc_allocation_interface@@@Z");
//};

//public: s_tag_file_list_index_builder_state::s_tag_file_list_index_builder_state(void)
//{
//    mangled_ppc("??0s_tag_file_list_index_builder_state@@QAA@XZ");
//};

//public: s_tag_file_list_index_builder_state::~s_tag_file_list_index_builder_state(void)
//{
//    mangled_ppc("??1s_tag_file_list_index_builder_state@@QAA@XZ");
//};

//void * tag_file_index_build_new_from_list(void *, bool, class c_tag_file_attribute_backend *, char const *, class c_allocation_interface *)
//{
//    mangled_ppc("?tag_file_index_build_new_from_list@@YAPAXPAX_NPAVc_tag_file_attribute_backend@@PBDPAVc_allocation_interface@@@Z");
//};

//void * tag_file_index_build_new_from_index(void const *, void const *, bool, class c_allocation_interface *, char const *, bool, class c_tag_file_index_builder_filter *)
//{
//    mangled_ppc("?tag_file_index_build_new_from_index@@YAPAXPBX0_NPAVc_allocation_interface@@PBD1PAVc_tag_file_index_builder_filter@@@Z");
//};

//public: static bool s_tag_file_index_from_index_builder_state::next(void *, class c_static_string<256> *, struct s_tag_group const **, struct s_file_last_modification_date *)
//{
//    mangled_ppc("?next@s_tag_file_index_from_index_builder_state@@SA_NPAXPAV?$c_static_string@$0BAA@@@PAPBUs_tag_group@@PAUs_file_last_modification_date@@@Z");
//};

//public: static void s_tag_file_index_from_index_builder_state::reset(void *)
//{
//    mangled_ppc("?reset@s_tag_file_index_from_index_builder_state@@SAXPAX@Z");
//};

//public: array_template<struct s_tag_file_description>::array_template<struct s_tag_file_description>(void)
//{
//    mangled_ppc("??0?$array_template@Us_tag_file_description@@@@QAA@XZ");
//};

//public: array_template<struct s_tag_file_description>::~array_template<struct s_tag_file_description>(void)
//{
//    mangled_ppc("??1?$array_template@Us_tag_file_description@@@@QAA@XZ");
//};

//public: struct s_tag_file_description * array_template<struct s_tag_file_description>::get_element(long)
//{
//    mangled_ppc("?get_element@?$array_template@Us_tag_file_description@@@@QAAPAUs_tag_file_description@@J@Z");
//};

//public: struct s_tag_file_description * array_template<struct s_tag_file_description>::get_new_element(void)
//{
//    mangled_ppc("?get_new_element@?$array_template@Us_tag_file_description@@@@QAAPAUs_tag_file_description@@XZ");
//};

//public: void array_template<struct s_tag_file_description>::resize(long)
//{
//    mangled_ppc("?resize@?$array_template@Us_tag_file_description@@@@QAAXJ@Z");
//};

//public: struct s_tag_file_description * array_template<struct s_tag_file_description>::begin(void)
//{
//    mangled_ppc("?begin@?$array_template@Us_tag_file_description@@@@QAAPAUs_tag_file_description@@XZ");
//};

//public: struct s_tag_file_description * array_template<struct s_tag_file_description>::end(void)
//{
//    mangled_ppc("?end@?$array_template@Us_tag_file_description@@@@QAAPAUs_tag_file_description@@XZ");
//};

//public: unsigned int array_template<struct s_tag_file_description>::size(void) const
//{
//    mangled_ppc("?size@?$array_template@Us_tag_file_description@@@@QBAIXZ");
//};

//public: long c_wrapped_array_no_init<class c_static_string<256> >::count(void) const
//{
//    mangled_ppc("?count@?$c_wrapped_array_no_init@V?$c_static_string@$0BAA@@@@@QBAJXZ");
//};

//public: class c_static_string<256> & c_array_operator_interface<class c_wrapped_array_no_init<class c_static_string<256> >, class c_static_string<256> >::operator[](long)
//{
//    mangled_ppc("??A?$c_array_operator_interface@V?$c_wrapped_array_no_init@V?$c_static_string@$0BAA@@@@@V?$c_static_string@$0BAA@@@@@QAAAAV?$c_static_string@$0BAA@@@J@Z");
//};

//public: long array_template<struct s_tag_file_description>::new_element_index(void)
//{
//    mangled_ppc("?new_element_index@?$array_template@Us_tag_file_description@@@@QAAJXZ");
//};

//public: void array_template<struct s_tag_file_description>::resize_fill(long, long)
//{
//    mangled_ppc("?resize_fill@?$array_template@Us_tag_file_description@@@@QAAXJJ@Z");
//};

//public: class c_static_string<256> * c_wrapped_array_no_init<class c_static_string<256> >::begin(void)
//{
//    mangled_ppc("?begin@?$c_wrapped_array_no_init@V?$c_static_string@$0BAA@@@@@QAAPAV?$c_static_string@$0BAA@@@XZ");
//};

//public: bool c_array_operator_interface<class c_wrapped_array_no_init<class c_static_string<256> >, class c_static_string<256> >::valid_index(long) const
//{
//    mangled_ppc("?valid_index@?$c_array_operator_interface@V?$c_wrapped_array_no_init@V?$c_static_string@$0BAA@@@@@V?$c_static_string@$0BAA@@@@@QBA_NJ@Z");
//};

//public: class c_wrapped_array_no_init<class c_static_string<256> > * c_recursive_template_pattern<class c_wrapped_array_no_init<class c_static_string<256> > >::get_super_class(void)
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@V?$c_static_string@$0BAA@@@@@@@QAAPAV?$c_wrapped_array_no_init@V?$c_static_string@$0BAA@@@@@XZ");
//};

//public: s_tag_file_description::s_tag_file_description(void)
//{
//    mangled_ppc("??0s_tag_file_description@@QAA@XZ");
//};

//protected: void array_template<struct s_tag_file_description>::signal_out_of_memory(void) const
//{
//    mangled_ppc("?signal_out_of_memory@?$array_template@Us_tag_file_description@@@@IBAXXZ");
//};

//public: long c_array_operator_interface<class c_wrapped_array_no_init<class c_static_string<256> >, class c_static_string<256> >::count(void) const
//{
//    mangled_ppc("?count@?$c_array_operator_interface@V?$c_wrapped_array_no_init@V?$c_static_string@$0BAA@@@@@V?$c_static_string@$0BAA@@@@@QBAJXZ");
//};

//public: class c_wrapped_array_no_init<class c_static_string<256> > const * c_recursive_template_pattern<class c_wrapped_array_no_init<class c_static_string<256> > >::get_super_class(void) const
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@V?$c_static_string@$0BAA@@@@@@@QBAPBV?$c_wrapped_array_no_init@V?$c_static_string@$0BAA@@@@@XZ");
//};

//void std::sort<struct s_tag_file_description *, class c_memcmp_compare>(struct s_tag_file_description *, struct s_tag_file_description *, class c_memcmp_compare)
//{
//    mangled_ppc("??$sort@PAUs_tag_file_description@@Vc_memcmp_compare@@@std@@YAXPAUs_tag_file_description@@0Vc_memcmp_compare@@@Z");
//};

//struct s_tag_file_description * std::unique<struct s_tag_file_description *, class c_memcmp_equals>(struct s_tag_file_description *, struct s_tag_file_description *, class c_memcmp_equals)
//{
//    mangled_ppc("??$unique@PAUs_tag_file_description@@Vc_memcmp_equals@@@std@@YAPAUs_tag_file_description@@PAU1@0Vc_memcmp_equals@@@Z");
//};

//int std::distance<struct s_tag_file_description *>(struct s_tag_file_description *, struct s_tag_file_description *)
//{
//    mangled_ppc("??$distance@PAUs_tag_file_description@@@std@@YAHPAUs_tag_file_description@@0@Z");
//};

//void std::_Debug_range<struct s_tag_file_description *>(struct s_tag_file_description *, struct s_tag_file_description *, wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_range@PAUs_tag_file_description@@@std@@YAXPAUs_tag_file_description@@0PB_WI@Z");
//};

//void std::_Debug_pointer<class c_memcmp_compare>(class c_memcmp_compare &, wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_pointer@Vc_memcmp_compare@@@std@@YAXAAVc_memcmp_compare@@PB_WI@Z");
//};

//struct s_tag_file_description * std::_Checked_base<struct s_tag_file_description *>(struct s_tag_file_description *&)
//{
//    mangled_ppc("??$_Checked_base@PAUs_tag_file_description@@@std@@YAPAUs_tag_file_description@@AAPAU1@@Z");
//};

//void std::_Sort<struct s_tag_file_description *, int, class c_memcmp_compare>(struct s_tag_file_description *, struct s_tag_file_description *, int, class c_memcmp_compare)
//{
//    mangled_ppc("??$_Sort@PAUs_tag_file_description@@HVc_memcmp_compare@@@std@@YAXPAUs_tag_file_description@@0HVc_memcmp_compare@@@Z");
//};

//struct s_tag_file_description * std::_Unique<struct s_tag_file_description *, class c_memcmp_equals>(struct s_tag_file_description *, struct s_tag_file_description *, class c_memcmp_equals)
//{
//    mangled_ppc("??$_Unique@PAUs_tag_file_description@@Vc_memcmp_equals@@@std@@YAPAUs_tag_file_description@@PAU1@0Vc_memcmp_equals@@@Z");
//};

//void std::_Checked_assign_from_base<struct s_tag_file_description *>(struct s_tag_file_description *&, struct s_tag_file_description *const &)
//{
//    mangled_ppc("??$_Checked_assign_from_base@PAUs_tag_file_description@@@std@@YAXAAPAUs_tag_file_description@@ABQAU1@@Z");
//};

//struct std::random_access_iterator_tag std::_Iter_cat<struct s_tag_file_description *>(struct s_tag_file_description *const &)
//{
//    mangled_ppc("??$_Iter_cat@PAUs_tag_file_description@@@std@@YA?AUrandom_access_iterator_tag@0@ABQAUs_tag_file_description@@@Z");
//};

//void std::_Distance2<struct s_tag_file_description *, int>(struct s_tag_file_description *, struct s_tag_file_description *, int &, struct std::random_access_iterator_tag)
//{
//    mangled_ppc("??$_Distance2@PAUs_tag_file_description@@H@std@@YAXPAUs_tag_file_description@@0AAHUrandom_access_iterator_tag@0@@Z");
//};

//void std::_Debug_range2<struct s_tag_file_description *>(struct s_tag_file_description *, struct s_tag_file_description *, wchar_t const *, unsigned int, struct std::random_access_iterator_tag)
//{
//    mangled_ppc("??$_Debug_range2@PAUs_tag_file_description@@@std@@YAXPAUs_tag_file_description@@0PB_WIUrandom_access_iterator_tag@0@@Z");
//};

//struct s_tag_file_description * std::_Checked_base<struct s_tag_file_description *>(struct s_tag_file_description *&, struct std::_Unchanged_checked_iterator_base_type_tag)
//{
//    mangled_ppc("??$_Checked_base@PAUs_tag_file_description@@@std@@YAPAUs_tag_file_description@@AAPAU1@U_Unchanged_checked_iterator_base_type_tag@0@@Z");
//};

//struct std::pair<struct s_tag_file_description *, struct s_tag_file_description *> std::_Unguarded_partition<struct s_tag_file_description *, class c_memcmp_compare>(struct s_tag_file_description *, struct s_tag_file_description *, class c_memcmp_compare)
//{
//    mangled_ppc("??$_Unguarded_partition@PAUs_tag_file_description@@Vc_memcmp_compare@@@std@@YA?AU?$pair@PAUs_tag_file_description@@PAU1@@0@PAUs_tag_file_description@@0Vc_memcmp_compare@@@Z");
//};

//void std::make_heap<struct s_tag_file_description *, class c_memcmp_compare>(struct s_tag_file_description *, struct s_tag_file_description *, class c_memcmp_compare)
//{
//    mangled_ppc("??$make_heap@PAUs_tag_file_description@@Vc_memcmp_compare@@@std@@YAXPAUs_tag_file_description@@0Vc_memcmp_compare@@@Z");
//};

//void std::sort_heap<struct s_tag_file_description *, class c_memcmp_compare>(struct s_tag_file_description *, struct s_tag_file_description *, class c_memcmp_compare)
//{
//    mangled_ppc("??$sort_heap@PAUs_tag_file_description@@Vc_memcmp_compare@@@std@@YAXPAUs_tag_file_description@@0Vc_memcmp_compare@@@Z");
//};

//void std::_Insertion_sort<struct s_tag_file_description *, class c_memcmp_compare>(struct s_tag_file_description *, struct s_tag_file_description *, class c_memcmp_compare)
//{
//    mangled_ppc("??$_Insertion_sort@PAUs_tag_file_description@@Vc_memcmp_compare@@@std@@YAXPAUs_tag_file_description@@0Vc_memcmp_compare@@@Z");
//};

//void std::_Debug_pointer<class c_memcmp_equals>(class c_memcmp_equals &, wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_pointer@Vc_memcmp_equals@@@std@@YAXAAVc_memcmp_equals@@PB_WI@Z");
//};

//public: bool c_memcmp_equals::operator()<struct s_tag_file_description>(struct s_tag_file_description const &, struct s_tag_file_description const &) const
//{
//    mangled_ppc("??$?RUs_tag_file_description@@@c_memcmp_equals@@QBA_NABUs_tag_file_description@@0@Z");
//};

//void std::_Debug_pointer<struct s_tag_file_description>(struct s_tag_file_description *, wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_pointer@Us_tag_file_description@@@std@@YAXPAUs_tag_file_description@@PB_WI@Z");
//};

//public: std::pair<struct s_tag_file_description *, struct s_tag_file_description *>::pair<struct s_tag_file_description *, struct s_tag_file_description *>(struct s_tag_file_description *const &, struct s_tag_file_description *const &)
//{
//    mangled_ppc("??0?$pair@PAUs_tag_file_description@@PAU1@@std@@QAA@ABQAUs_tag_file_description@@0@Z");
//};

//void std::_Median<struct s_tag_file_description *, class c_memcmp_compare>(struct s_tag_file_description *, struct s_tag_file_description *, struct s_tag_file_description *, class c_memcmp_compare)
//{
//    mangled_ppc("??$_Median@PAUs_tag_file_description@@Vc_memcmp_compare@@@std@@YAXPAUs_tag_file_description@@00Vc_memcmp_compare@@@Z");
//};

//bool std::_Debug_lt_pred<class c_memcmp_compare, struct s_tag_file_description, struct s_tag_file_description>(class c_memcmp_compare, struct s_tag_file_description &, struct s_tag_file_description &, wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_lt_pred@Vc_memcmp_compare@@Us_tag_file_description@@U2@@std@@YA_NVc_memcmp_compare@@AAUs_tag_file_description@@1PB_WI@Z");
//};

//public: bool c_memcmp_compare::operator()<struct s_tag_file_description>(struct s_tag_file_description const &, struct s_tag_file_description const &) const
//{
//    mangled_ppc("??$?RUs_tag_file_description@@@c_memcmp_compare@@QBA_NABUs_tag_file_description@@0@Z");
//};

//void std::iter_swap<struct s_tag_file_description *, struct s_tag_file_description *>(struct s_tag_file_description *, struct s_tag_file_description *)
//{
//    mangled_ppc("??$iter_swap@PAUs_tag_file_description@@PAU1@@std@@YAXPAUs_tag_file_description@@0@Z");
//};

//int * std::_Dist_type<struct s_tag_file_description *>(struct s_tag_file_description *)
//{
//    mangled_ppc("??$_Dist_type@PAUs_tag_file_description@@@std@@YAPAHPAUs_tag_file_description@@@Z");
//};

//struct s_tag_file_description * std::_Val_type<struct s_tag_file_description *>(struct s_tag_file_description *)
//{
//    mangled_ppc("??$_Val_type@PAUs_tag_file_description@@@std@@YAPAUs_tag_file_description@@PAU1@@Z");
//};

//void std::_Make_heap<struct s_tag_file_description *, int, struct s_tag_file_description, class c_memcmp_compare>(struct s_tag_file_description *, struct s_tag_file_description *, class c_memcmp_compare, int *, struct s_tag_file_description *)
//{
//    mangled_ppc("??$_Make_heap@PAUs_tag_file_description@@HU1@Vc_memcmp_compare@@@std@@YAXPAUs_tag_file_description@@0Vc_memcmp_compare@@PAH0@Z");
//};

//void std::_Debug_heap<struct s_tag_file_description *, class c_memcmp_compare>(struct s_tag_file_description *, struct s_tag_file_description *, class c_memcmp_compare)
//{
//    mangled_ppc("??$_Debug_heap@PAUs_tag_file_description@@Vc_memcmp_compare@@@std@@YAXPAUs_tag_file_description@@0Vc_memcmp_compare@@@Z");
//};

//void std::_Sort_heap<struct s_tag_file_description *, class c_memcmp_compare>(struct s_tag_file_description *, struct s_tag_file_description *, class c_memcmp_compare)
//{
//    mangled_ppc("??$_Sort_heap@PAUs_tag_file_description@@Vc_memcmp_compare@@@std@@YAXPAUs_tag_file_description@@0Vc_memcmp_compare@@@Z");
//};

//void std::_Insertion_sort1<struct s_tag_file_description *, class c_memcmp_compare, struct s_tag_file_description>(struct s_tag_file_description *, struct s_tag_file_description *, class c_memcmp_compare, struct s_tag_file_description *)
//{
//    mangled_ppc("??$_Insertion_sort1@PAUs_tag_file_description@@Vc_memcmp_compare@@U1@@std@@YAXPAUs_tag_file_description@@0Vc_memcmp_compare@@0@Z");
//};

//void std::_Med3<struct s_tag_file_description *, class c_memcmp_compare>(struct s_tag_file_description *, struct s_tag_file_description *, struct s_tag_file_description *, class c_memcmp_compare)
//{
//    mangled_ppc("??$_Med3@PAUs_tag_file_description@@Vc_memcmp_compare@@@std@@YAXPAUs_tag_file_description@@00Vc_memcmp_compare@@@Z");
//};

//void std::swap<struct s_tag_file_description>(struct s_tag_file_description &, struct s_tag_file_description &)
//{
//    mangled_ppc("??$swap@Us_tag_file_description@@@std@@YAXAAUs_tag_file_description@@0@Z");
//};

//void std::_Adjust_heap<struct s_tag_file_description *, int, struct s_tag_file_description, class c_memcmp_compare>(struct s_tag_file_description *, int, int, struct s_tag_file_description, class c_memcmp_compare)
//{
//    mangled_ppc("??$_Adjust_heap@PAUs_tag_file_description@@HU1@Vc_memcmp_compare@@@std@@YAXPAUs_tag_file_description@@HHU1@Vc_memcmp_compare@@@Z");
//};

//void std::pop_heap<struct s_tag_file_description *, class c_memcmp_compare>(struct s_tag_file_description *, struct s_tag_file_description *, class c_memcmp_compare)
//{
//    mangled_ppc("??$pop_heap@PAUs_tag_file_description@@Vc_memcmp_compare@@@std@@YAXPAUs_tag_file_description@@0Vc_memcmp_compare@@@Z");
//};

//struct s_tag_file_description * stdext::unchecked_copy_backward<struct s_tag_file_description *, struct s_tag_file_description *>(struct s_tag_file_description *, struct s_tag_file_description *, struct s_tag_file_description *)
//{
//    mangled_ppc("??$unchecked_copy_backward@PAUs_tag_file_description@@PAU1@@stdext@@YAPAUs_tag_file_description@@PAU1@00@Z");
//};

//void std::_Push_heap<struct s_tag_file_description *, int, struct s_tag_file_description, class c_memcmp_compare>(struct s_tag_file_description *, int, int, struct s_tag_file_description, class c_memcmp_compare)
//{
//    mangled_ppc("??$_Push_heap@PAUs_tag_file_description@@HU1@Vc_memcmp_compare@@@std@@YAXPAUs_tag_file_description@@HHU1@Vc_memcmp_compare@@@Z");
//};

//void std::_Pop_heap_0<struct s_tag_file_description *, struct s_tag_file_description, class c_memcmp_compare>(struct s_tag_file_description *, struct s_tag_file_description *, class c_memcmp_compare, struct s_tag_file_description *)
//{
//    mangled_ppc("??$_Pop_heap_0@PAUs_tag_file_description@@U1@Vc_memcmp_compare@@@std@@YAXPAUs_tag_file_description@@0Vc_memcmp_compare@@0@Z");
//};

//struct std::random_access_iterator_tag std::_Iter_random<struct s_tag_file_description *, struct s_tag_file_description *>(struct s_tag_file_description *const &, struct s_tag_file_description *const &)
//{
//    mangled_ppc("??$_Iter_random@PAUs_tag_file_description@@PAU1@@std@@YA?AUrandom_access_iterator_tag@0@ABQAUs_tag_file_description@@0@Z");
//};

//struct std::_Nonscalar_ptr_iterator_tag std::_Ptr_cat<struct s_tag_file_description *, struct s_tag_file_description *>(struct s_tag_file_description *&, struct s_tag_file_description *&)
//{
//    mangled_ppc("??$_Ptr_cat@PAUs_tag_file_description@@PAU1@@std@@YA?AU_Nonscalar_ptr_iterator_tag@0@AAPAUs_tag_file_description@@0@Z");
//};

//struct s_tag_file_description * std::_Copy_backward_opt<struct s_tag_file_description *, struct s_tag_file_description *>(struct s_tag_file_description *, struct s_tag_file_description *, struct s_tag_file_description *, struct std::random_access_iterator_tag, struct std::_Nonscalar_ptr_iterator_tag, struct std::_Range_checked_iterator_tag)
//{
//    mangled_ppc("??$_Copy_backward_opt@PAUs_tag_file_description@@PAU1@@std@@YAPAUs_tag_file_description@@PAU1@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z");
//};

//void std::_Pop_heap<struct s_tag_file_description *, int, struct s_tag_file_description, class c_memcmp_compare>(struct s_tag_file_description *, struct s_tag_file_description *, struct s_tag_file_description *, struct s_tag_file_description, class c_memcmp_compare, int *)
//{
//    mangled_ppc("??$_Pop_heap@PAUs_tag_file_description@@HU1@Vc_memcmp_compare@@@std@@YAXPAUs_tag_file_description@@00U1@Vc_memcmp_compare@@PAH@Z");
//};

//struct s_tag_file_description * std::_Copy_backward_opt<struct s_tag_file_description *, struct s_tag_file_description *, struct std::forward_iterator_tag>(struct s_tag_file_description *, struct s_tag_file_description *, struct s_tag_file_description *, struct std::forward_iterator_tag, struct std::_Nonscalar_ptr_iterator_tag, struct std::_Range_checked_iterator_tag)
//{
//    mangled_ppc("??$_Copy_backward_opt@PAUs_tag_file_description@@PAU1@Uforward_iterator_tag@std@@@std@@YAPAUs_tag_file_description@@PAU1@00Uforward_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z");
//};

