/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: c_tag_file_group_instance_cache::c_tag_file_group_instance_cache(class c_allocation_interface *, unsigned long, void const *, struct s_tag_file_index_accelerator const *);
// public: c_tag_file_group_instance_cache::~c_tag_file_group_instance_cache(void);
// public: void c_tag_file_group_instance_cache::add_group_instance_simple(struct s_tag_read_parameters *, class c_tag_file_read_backend *, class c_tag_file_resource_backend *, long, struct s_tag_group const *, char const *);
// public: void c_tag_file_group_instance_cache::add_group_instance(struct s_tag_persist_parameters *, class c_tag_file_read_interface *, long, enum e_tag_file_open_result, bool, unsigned long);
// public: void c_tag_file_group_instance_cache::finished_prefetching(void);
// public: bool c_tag_file_group_instance_cache::get_group_instance(long, struct s_tag_file_group_cached_instance *);
// public: c_fixed_sized_dynamic_array<struct c_tag_file_group_instance_cache::s_cache_entry>::c_fixed_sized_dynamic_array<struct c_tag_file_group_instance_cache::s_cache_entry>(void);
// public: void c_fixed_sized_dynamic_array<struct c_tag_file_group_instance_cache::s_cache_entry>::initialize(class c_wrapped_array<struct c_tag_file_group_instance_cache::s_cache_entry> const &, long);
// public: struct c_tag_file_group_instance_cache::s_cache_entry * c_fixed_sized_dynamic_array<struct c_tag_file_group_instance_cache::s_cache_entry>::begin(void);
// public: struct c_tag_file_group_instance_cache::s_cache_entry * c_fixed_sized_dynamic_array<struct c_tag_file_group_instance_cache::s_cache_entry>::end(void);
// public: long c_fixed_sized_dynamic_array<struct c_tag_file_group_instance_cache::s_cache_entry>::get_maximum_count(void) const;
// public: bool c_fixed_sized_dynamic_array<struct c_tag_file_group_instance_cache::s_cache_entry>::full(void) const;
// public: long c_fixed_sized_dynamic_array<struct c_tag_file_group_instance_cache::s_cache_entry>::count(void) const;
// public: struct c_tag_file_group_instance_cache::s_cache_entry & c_resizeable_array_operator_interface<class c_fixed_sized_dynamic_array<struct c_tag_file_group_instance_cache::s_cache_entry>, struct c_tag_file_group_instance_cache::s_cache_entry>::new_element(void);
// public: struct c_tag_file_group_instance_cache::s_cache_entry * c_array_operator_interface<class c_fixed_sized_dynamic_array<struct c_tag_file_group_instance_cache::s_cache_entry>, struct c_tag_file_group_instance_cache::s_cache_entry>::get_element(long);
// public: struct c_tag_file_group_instance_cache::s_cache_entry & c_resizeable_array_operator_interface<class c_fixed_sized_dynamic_array<struct c_tag_file_group_instance_cache::s_cache_entry>, struct c_tag_file_group_instance_cache::s_cache_entry>::add_element(void);
// public: struct c_tag_file_group_instance_cache::s_cache_entry * c_array_operator_interface<class c_fixed_sized_dynamic_array<struct c_tag_file_group_instance_cache::s_cache_entry>, struct c_tag_file_group_instance_cache::s_cache_entry>::begin(void);
// public: bool c_array_operator_interface<class c_fixed_sized_dynamic_array<struct c_tag_file_group_instance_cache::s_cache_entry>, struct c_tag_file_group_instance_cache::s_cache_entry>::valid_index(long) const;
// public: c_wrapped_array<struct c_tag_file_group_instance_cache::s_cache_entry>::c_wrapped_array<struct c_tag_file_group_instance_cache::s_cache_entry>(void);
// public: struct c_tag_file_group_instance_cache::s_cache_entry * c_wrapped_array_no_init<struct c_tag_file_group_instance_cache::s_cache_entry>::begin(void);
// public: long c_wrapped_array_no_init<struct c_tag_file_group_instance_cache::s_cache_entry>::count(void) const;
// public: long c_resizeable_array_operator_interface<class c_fixed_sized_dynamic_array<struct c_tag_file_group_instance_cache::s_cache_entry>, struct c_tag_file_group_instance_cache::s_cache_entry>::new_element_index(void);
// public: long c_array_operator_interface<class c_fixed_sized_dynamic_array<struct c_tag_file_group_instance_cache::s_cache_entry>, struct c_tag_file_group_instance_cache::s_cache_entry>::count(void) const;
// public: class c_fixed_sized_dynamic_array<struct c_tag_file_group_instance_cache::s_cache_entry> * c_recursive_template_pattern<class c_fixed_sized_dynamic_array<struct c_tag_file_group_instance_cache::s_cache_entry> >::get_super_class(void);
// public: void c_wrapped_array_no_init<struct c_tag_file_group_instance_cache::s_cache_entry>::set_elements(struct c_tag_file_group_instance_cache::s_cache_entry *, long);
// public: long c_fixed_sized_dynamic_array<struct c_tag_file_group_instance_cache::s_cache_entry>::new_element_index(void);
// private: class c_fixed_sized_dynamic_array<struct c_tag_file_group_instance_cache::s_cache_entry> * c_resizeable_array_operator_interface<class c_fixed_sized_dynamic_array<struct c_tag_file_group_instance_cache::s_cache_entry>, struct c_tag_file_group_instance_cache::s_cache_entry>::get_super_class(void);
// public: class c_fixed_sized_dynamic_array<struct c_tag_file_group_instance_cache::s_cache_entry> const * c_recursive_template_pattern<class c_fixed_sized_dynamic_array<struct c_tag_file_group_instance_cache::s_cache_entry> >::get_super_class(void) const;
// public: bool c_array_operator_interface<class c_wrapped_array_no_init<struct c_tag_file_group_instance_cache::s_cache_entry>, struct c_tag_file_group_instance_cache::s_cache_entry>::valid_index(long) const;
// public: long c_array_operator_interface<class c_wrapped_array_no_init<struct c_tag_file_group_instance_cache::s_cache_entry>, struct c_tag_file_group_instance_cache::s_cache_entry>::count(void) const;
// public: class c_wrapped_array_no_init<struct c_tag_file_group_instance_cache::s_cache_entry> const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct c_tag_file_group_instance_cache::s_cache_entry> >::get_super_class(void) const;
// class c_wrapped_array<struct c_tag_file_group_instance_cache::s_cache_entry> allocate_wrapped_array<struct c_tag_file_group_instance_cache::s_cache_entry>(class c_allocation_interface *, unsigned long);
// class c_wrapped_array<struct c_tag_file_group_instance_cache::s_cache_entry> make_wrapped_array<struct c_tag_file_group_instance_cache::s_cache_entry>(struct c_tag_file_group_instance_cache::s_cache_entry *, long);
// void free_wrapped_array<struct c_tag_file_group_instance_cache::s_cache_entry>(class c_allocation_interface *, class c_wrapped_array<struct c_tag_file_group_instance_cache::s_cache_entry> *);
// void std::sort<struct c_tag_file_group_instance_cache::s_cache_entry *, class c_tag_file_group_instance_cache::c_cache_entry_compare>(struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *, class c_tag_file_group_instance_cache::c_cache_entry_compare);
// struct c_tag_file_group_instance_cache::s_cache_entry * std::lower_bound<struct c_tag_file_group_instance_cache::s_cache_entry *, long, class c_tag_file_group_instance_cache::c_cache_entry_compare>(struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *, long const &, class c_tag_file_group_instance_cache::c_cache_entry_compare);
// public: c_wrapped_array<struct c_tag_file_group_instance_cache::s_cache_entry>::c_wrapped_array<struct c_tag_file_group_instance_cache::s_cache_entry>(struct c_tag_file_group_instance_cache::s_cache_entry *, long);
// public: void c_wrapped_array_no_init<struct c_tag_file_group_instance_cache::s_cache_entry>::clear(void);
// public: struct c_tag_file_group_instance_cache::s_cache_entry * c_wrapped_array_no_init<struct c_tag_file_group_instance_cache::s_cache_entry>::end(void);
// public: struct c_tag_file_group_instance_cache::s_cache_entry * c_basic_buffer<void>::get_as_type_array<struct c_tag_file_group_instance_cache::s_cache_entry>(unsigned long);
// void std::_Debug_range<struct c_tag_file_group_instance_cache::s_cache_entry *>(struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *, wchar_t const *, unsigned int);
// void std::_Debug_pointer<class c_tag_file_group_instance_cache::c_cache_entry_compare>(class c_tag_file_group_instance_cache::c_cache_entry_compare &, wchar_t const *, unsigned int);
// struct c_tag_file_group_instance_cache::s_cache_entry * std::_Checked_base<struct c_tag_file_group_instance_cache::s_cache_entry *>(struct c_tag_file_group_instance_cache::s_cache_entry *&);
// void std::_Sort<struct c_tag_file_group_instance_cache::s_cache_entry *, int, class c_tag_file_group_instance_cache::c_cache_entry_compare>(struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *, int, class c_tag_file_group_instance_cache::c_cache_entry_compare);
// int * std::_Dist_type<struct c_tag_file_group_instance_cache::s_cache_entry *>(struct c_tag_file_group_instance_cache::s_cache_entry *);
// struct c_tag_file_group_instance_cache::s_cache_entry * std::_Lower_bound<struct c_tag_file_group_instance_cache::s_cache_entry *, long, int, class c_tag_file_group_instance_cache::c_cache_entry_compare>(struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *, long const &, class c_tag_file_group_instance_cache::c_cache_entry_compare, int *);
// void std::_Checked_assign_from_base<struct c_tag_file_group_instance_cache::s_cache_entry *>(struct c_tag_file_group_instance_cache::s_cache_entry *&, struct c_tag_file_group_instance_cache::s_cache_entry *const &);
// struct std::random_access_iterator_tag std::_Iter_cat<struct c_tag_file_group_instance_cache::s_cache_entry *>(struct c_tag_file_group_instance_cache::s_cache_entry *const &);
// void std::_Debug_range2<struct c_tag_file_group_instance_cache::s_cache_entry *>(struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *, wchar_t const *, unsigned int, struct std::random_access_iterator_tag);
// struct c_tag_file_group_instance_cache::s_cache_entry * std::_Checked_base<struct c_tag_file_group_instance_cache::s_cache_entry *>(struct c_tag_file_group_instance_cache::s_cache_entry *&, struct std::_Unchanged_checked_iterator_base_type_tag);
// struct std::pair<struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *> std::_Unguarded_partition<struct c_tag_file_group_instance_cache::s_cache_entry *, class c_tag_file_group_instance_cache::c_cache_entry_compare>(struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *, class c_tag_file_group_instance_cache::c_cache_entry_compare);
// public: bool c_tag_file_group_instance_cache::c_cache_entry_compare::operator()(struct c_tag_file_group_instance_cache::s_cache_entry const &, struct c_tag_file_group_instance_cache::s_cache_entry const &) const;
// void std::make_heap<struct c_tag_file_group_instance_cache::s_cache_entry *, class c_tag_file_group_instance_cache::c_cache_entry_compare>(struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *, class c_tag_file_group_instance_cache::c_cache_entry_compare);
// void std::sort_heap<struct c_tag_file_group_instance_cache::s_cache_entry *, class c_tag_file_group_instance_cache::c_cache_entry_compare>(struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *, class c_tag_file_group_instance_cache::c_cache_entry_compare);
// void std::_Insertion_sort<struct c_tag_file_group_instance_cache::s_cache_entry *, class c_tag_file_group_instance_cache::c_cache_entry_compare>(struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *, class c_tag_file_group_instance_cache::c_cache_entry_compare);
// void std::_Debug_order_single<struct c_tag_file_group_instance_cache::s_cache_entry *, class c_tag_file_group_instance_cache::c_cache_entry_compare>(struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *, class c_tag_file_group_instance_cache::c_cache_entry_compare, bool, wchar_t const *, unsigned int);
// void std::_Distance<struct c_tag_file_group_instance_cache::s_cache_entry *, int>(struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *, int &);
// void std::advance<struct c_tag_file_group_instance_cache::s_cache_entry *, int>(struct c_tag_file_group_instance_cache::s_cache_entry *&, int);
// bool std::_Debug_lt_pred<class c_tag_file_group_instance_cache::c_cache_entry_compare, struct c_tag_file_group_instance_cache::s_cache_entry, long>(class c_tag_file_group_instance_cache::c_cache_entry_compare, struct c_tag_file_group_instance_cache::s_cache_entry &, long const &, wchar_t const *, unsigned int);
// public: bool c_tag_file_group_instance_cache::c_cache_entry_compare::operator()(long, struct c_tag_file_group_instance_cache::s_cache_entry const &) const;
// public: bool c_tag_file_group_instance_cache::c_cache_entry_compare::operator()(struct c_tag_file_group_instance_cache::s_cache_entry const &, long) const;
// public: std::pair<struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *>::pair<struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *>(struct c_tag_file_group_instance_cache::s_cache_entry *const &, struct c_tag_file_group_instance_cache::s_cache_entry *const &);
// void std::_Debug_pointer<struct c_tag_file_group_instance_cache::s_cache_entry>(struct c_tag_file_group_instance_cache::s_cache_entry *, wchar_t const *, unsigned int);
// void std::_Median<struct c_tag_file_group_instance_cache::s_cache_entry *, class c_tag_file_group_instance_cache::c_cache_entry_compare>(struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *, class c_tag_file_group_instance_cache::c_cache_entry_compare);
// bool std::_Debug_lt_pred<class c_tag_file_group_instance_cache::c_cache_entry_compare, struct c_tag_file_group_instance_cache::s_cache_entry, struct c_tag_file_group_instance_cache::s_cache_entry>(class c_tag_file_group_instance_cache::c_cache_entry_compare, struct c_tag_file_group_instance_cache::s_cache_entry &, struct c_tag_file_group_instance_cache::s_cache_entry &, wchar_t const *, unsigned int);
// void std::iter_swap<struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *>(struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *);
// struct c_tag_file_group_instance_cache::s_cache_entry * std::_Val_type<struct c_tag_file_group_instance_cache::s_cache_entry *>(struct c_tag_file_group_instance_cache::s_cache_entry *);
// void std::_Make_heap<struct c_tag_file_group_instance_cache::s_cache_entry *, int, struct c_tag_file_group_instance_cache::s_cache_entry, class c_tag_file_group_instance_cache::c_cache_entry_compare>(struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *, class c_tag_file_group_instance_cache::c_cache_entry_compare, int *, struct c_tag_file_group_instance_cache::s_cache_entry *);
// void std::_Debug_heap<struct c_tag_file_group_instance_cache::s_cache_entry *, class c_tag_file_group_instance_cache::c_cache_entry_compare>(struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *, class c_tag_file_group_instance_cache::c_cache_entry_compare);
// void std::_Sort_heap<struct c_tag_file_group_instance_cache::s_cache_entry *, class c_tag_file_group_instance_cache::c_cache_entry_compare>(struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *, class c_tag_file_group_instance_cache::c_cache_entry_compare);
// void std::_Insertion_sort1<struct c_tag_file_group_instance_cache::s_cache_entry *, class c_tag_file_group_instance_cache::c_cache_entry_compare, struct c_tag_file_group_instance_cache::s_cache_entry>(struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *, class c_tag_file_group_instance_cache::c_cache_entry_compare, struct c_tag_file_group_instance_cache::s_cache_entry *);
// void std::_Debug_order_single2<struct c_tag_file_group_instance_cache::s_cache_entry *, class c_tag_file_group_instance_cache::c_cache_entry_compare>(struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *, class c_tag_file_group_instance_cache::c_cache_entry_compare, bool, wchar_t const *, unsigned int, struct std::forward_iterator_tag);
// void std::_Distance2<struct c_tag_file_group_instance_cache::s_cache_entry *, int>(struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *, int &, struct std::random_access_iterator_tag);
// void std::_Advance<struct c_tag_file_group_instance_cache::s_cache_entry *, int>(struct c_tag_file_group_instance_cache::s_cache_entry *&, int, struct std::random_access_iterator_tag);
// void std::_Med3<struct c_tag_file_group_instance_cache::s_cache_entry *, class c_tag_file_group_instance_cache::c_cache_entry_compare>(struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *, class c_tag_file_group_instance_cache::c_cache_entry_compare);
// void std::swap<struct c_tag_file_group_instance_cache::s_cache_entry>(struct c_tag_file_group_instance_cache::s_cache_entry &, struct c_tag_file_group_instance_cache::s_cache_entry &);
// void std::_Adjust_heap<struct c_tag_file_group_instance_cache::s_cache_entry *, int, struct c_tag_file_group_instance_cache::s_cache_entry, class c_tag_file_group_instance_cache::c_cache_entry_compare>(struct c_tag_file_group_instance_cache::s_cache_entry *, int, int, struct c_tag_file_group_instance_cache::s_cache_entry, class c_tag_file_group_instance_cache::c_cache_entry_compare);
// void std::pop_heap<struct c_tag_file_group_instance_cache::s_cache_entry *, class c_tag_file_group_instance_cache::c_cache_entry_compare>(struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *, class c_tag_file_group_instance_cache::c_cache_entry_compare);
// struct c_tag_file_group_instance_cache::s_cache_entry * stdext::unchecked_copy_backward<struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *>(struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *);
// void std::_Push_heap<struct c_tag_file_group_instance_cache::s_cache_entry *, int, struct c_tag_file_group_instance_cache::s_cache_entry, class c_tag_file_group_instance_cache::c_cache_entry_compare>(struct c_tag_file_group_instance_cache::s_cache_entry *, int, int, struct c_tag_file_group_instance_cache::s_cache_entry, class c_tag_file_group_instance_cache::c_cache_entry_compare);
// void std::_Pop_heap_0<struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry, class c_tag_file_group_instance_cache::c_cache_entry_compare>(struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *, class c_tag_file_group_instance_cache::c_cache_entry_compare, struct c_tag_file_group_instance_cache::s_cache_entry *);
// struct std::random_access_iterator_tag std::_Iter_random<struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *>(struct c_tag_file_group_instance_cache::s_cache_entry *const &, struct c_tag_file_group_instance_cache::s_cache_entry *const &);
// struct std::_Nonscalar_ptr_iterator_tag std::_Ptr_cat<struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *>(struct c_tag_file_group_instance_cache::s_cache_entry *&, struct c_tag_file_group_instance_cache::s_cache_entry *&);
// struct c_tag_file_group_instance_cache::s_cache_entry * std::_Copy_backward_opt<struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *>(struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *, struct std::random_access_iterator_tag, struct std::_Nonscalar_ptr_iterator_tag, struct std::_Range_checked_iterator_tag);
// void std::_Pop_heap<struct c_tag_file_group_instance_cache::s_cache_entry *, int, struct c_tag_file_group_instance_cache::s_cache_entry, class c_tag_file_group_instance_cache::c_cache_entry_compare>(struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry, class c_tag_file_group_instance_cache::c_cache_entry_compare, int *);
// struct c_tag_file_group_instance_cache::s_cache_entry * std::_Copy_backward_opt<struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *, struct std::forward_iterator_tag>(struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *, struct std::forward_iterator_tag, struct std::_Nonscalar_ptr_iterator_tag, struct std::_Range_checked_iterator_tag);

//public: c_tag_file_group_instance_cache::c_tag_file_group_instance_cache(class c_allocation_interface *, unsigned long, void const *, struct s_tag_file_index_accelerator const *)
//{
//    mangled_ppc("??0c_tag_file_group_instance_cache@@QAA@PAVc_allocation_interface@@KPBXPBUs_tag_file_index_accelerator@@@Z");
//};

//public: c_tag_file_group_instance_cache::~c_tag_file_group_instance_cache(void)
//{
//    mangled_ppc("??1c_tag_file_group_instance_cache@@QAA@XZ");
//};

//public: void c_tag_file_group_instance_cache::add_group_instance_simple(struct s_tag_read_parameters *, class c_tag_file_read_backend *, class c_tag_file_resource_backend *, long, struct s_tag_group const *, char const *)
//{
//    mangled_ppc("?add_group_instance_simple@c_tag_file_group_instance_cache@@QAAXPAUs_tag_read_parameters@@PAVc_tag_file_read_backend@@PAVc_tag_file_resource_backend@@JPBUs_tag_group@@PBD@Z");
//};

//public: void c_tag_file_group_instance_cache::add_group_instance(struct s_tag_persist_parameters *, class c_tag_file_read_interface *, long, enum e_tag_file_open_result, bool, unsigned long)
//{
//    mangled_ppc("?add_group_instance@c_tag_file_group_instance_cache@@QAAXPAUs_tag_persist_parameters@@PAVc_tag_file_read_interface@@JW4e_tag_file_open_result@@_NK@Z");
//};

//public: void c_tag_file_group_instance_cache::finished_prefetching(void)
//{
//    mangled_ppc("?finished_prefetching@c_tag_file_group_instance_cache@@QAAXXZ");
//};

//public: bool c_tag_file_group_instance_cache::get_group_instance(long, struct s_tag_file_group_cached_instance *)
//{
//    mangled_ppc("?get_group_instance@c_tag_file_group_instance_cache@@QAA_NJPAUs_tag_file_group_cached_instance@@@Z");
//};

//public: c_fixed_sized_dynamic_array<struct c_tag_file_group_instance_cache::s_cache_entry>::c_fixed_sized_dynamic_array<struct c_tag_file_group_instance_cache::s_cache_entry>(void)
//{
//    mangled_ppc("??0?$c_fixed_sized_dynamic_array@Us_cache_entry@c_tag_file_group_instance_cache@@@@QAA@XZ");
//};

//public: void c_fixed_sized_dynamic_array<struct c_tag_file_group_instance_cache::s_cache_entry>::initialize(class c_wrapped_array<struct c_tag_file_group_instance_cache::s_cache_entry> const &, long)
//{
//    mangled_ppc("?initialize@?$c_fixed_sized_dynamic_array@Us_cache_entry@c_tag_file_group_instance_cache@@@@QAAXABV?$c_wrapped_array@Us_cache_entry@c_tag_file_group_instance_cache@@@@J@Z");
//};

//public: struct c_tag_file_group_instance_cache::s_cache_entry * c_fixed_sized_dynamic_array<struct c_tag_file_group_instance_cache::s_cache_entry>::begin(void)
//{
//    mangled_ppc("?begin@?$c_fixed_sized_dynamic_array@Us_cache_entry@c_tag_file_group_instance_cache@@@@QAAPAUs_cache_entry@c_tag_file_group_instance_cache@@XZ");
//};

//public: struct c_tag_file_group_instance_cache::s_cache_entry * c_fixed_sized_dynamic_array<struct c_tag_file_group_instance_cache::s_cache_entry>::end(void)
//{
//    mangled_ppc("?end@?$c_fixed_sized_dynamic_array@Us_cache_entry@c_tag_file_group_instance_cache@@@@QAAPAUs_cache_entry@c_tag_file_group_instance_cache@@XZ");
//};

//public: long c_fixed_sized_dynamic_array<struct c_tag_file_group_instance_cache::s_cache_entry>::get_maximum_count(void) const
//{
//    mangled_ppc("?get_maximum_count@?$c_fixed_sized_dynamic_array@Us_cache_entry@c_tag_file_group_instance_cache@@@@QBAJXZ");
//};

//public: bool c_fixed_sized_dynamic_array<struct c_tag_file_group_instance_cache::s_cache_entry>::full(void) const
//{
//    mangled_ppc("?full@?$c_fixed_sized_dynamic_array@Us_cache_entry@c_tag_file_group_instance_cache@@@@QBA_NXZ");
//};

//public: long c_fixed_sized_dynamic_array<struct c_tag_file_group_instance_cache::s_cache_entry>::count(void) const
//{
//    mangled_ppc("?count@?$c_fixed_sized_dynamic_array@Us_cache_entry@c_tag_file_group_instance_cache@@@@QBAJXZ");
//};

//public: struct c_tag_file_group_instance_cache::s_cache_entry & c_resizeable_array_operator_interface<class c_fixed_sized_dynamic_array<struct c_tag_file_group_instance_cache::s_cache_entry>, struct c_tag_file_group_instance_cache::s_cache_entry>::new_element(void)
//{
//    mangled_ppc("?new_element@?$c_resizeable_array_operator_interface@V?$c_fixed_sized_dynamic_array@Us_cache_entry@c_tag_file_group_instance_cache@@@@Us_cache_entry@c_tag_file_group_instance_cache@@@@QAAAAUs_cache_entry@c_tag_file_group_instance_cache@@XZ");
//};

//public: struct c_tag_file_group_instance_cache::s_cache_entry * c_array_operator_interface<class c_fixed_sized_dynamic_array<struct c_tag_file_group_instance_cache::s_cache_entry>, struct c_tag_file_group_instance_cache::s_cache_entry>::get_element(long)
//{
//    mangled_ppc("?get_element@?$c_array_operator_interface@V?$c_fixed_sized_dynamic_array@Us_cache_entry@c_tag_file_group_instance_cache@@@@Us_cache_entry@c_tag_file_group_instance_cache@@@@QAAPAUs_cache_entry@c_tag_file_group_instance_cache@@J@Z");
//};

//public: struct c_tag_file_group_instance_cache::s_cache_entry & c_resizeable_array_operator_interface<class c_fixed_sized_dynamic_array<struct c_tag_file_group_instance_cache::s_cache_entry>, struct c_tag_file_group_instance_cache::s_cache_entry>::add_element(void)
//{
//    mangled_ppc("?add_element@?$c_resizeable_array_operator_interface@V?$c_fixed_sized_dynamic_array@Us_cache_entry@c_tag_file_group_instance_cache@@@@Us_cache_entry@c_tag_file_group_instance_cache@@@@QAAAAUs_cache_entry@c_tag_file_group_instance_cache@@XZ");
//};

//public: struct c_tag_file_group_instance_cache::s_cache_entry * c_array_operator_interface<class c_fixed_sized_dynamic_array<struct c_tag_file_group_instance_cache::s_cache_entry>, struct c_tag_file_group_instance_cache::s_cache_entry>::begin(void)
//{
//    mangled_ppc("?begin@?$c_array_operator_interface@V?$c_fixed_sized_dynamic_array@Us_cache_entry@c_tag_file_group_instance_cache@@@@Us_cache_entry@c_tag_file_group_instance_cache@@@@QAAPAUs_cache_entry@c_tag_file_group_instance_cache@@XZ");
//};

//public: bool c_array_operator_interface<class c_fixed_sized_dynamic_array<struct c_tag_file_group_instance_cache::s_cache_entry>, struct c_tag_file_group_instance_cache::s_cache_entry>::valid_index(long) const
//{
//    mangled_ppc("?valid_index@?$c_array_operator_interface@V?$c_fixed_sized_dynamic_array@Us_cache_entry@c_tag_file_group_instance_cache@@@@Us_cache_entry@c_tag_file_group_instance_cache@@@@QBA_NJ@Z");
//};

//public: c_wrapped_array<struct c_tag_file_group_instance_cache::s_cache_entry>::c_wrapped_array<struct c_tag_file_group_instance_cache::s_cache_entry>(void)
//{
//    mangled_ppc("??0?$c_wrapped_array@Us_cache_entry@c_tag_file_group_instance_cache@@@@QAA@XZ");
//};

//public: struct c_tag_file_group_instance_cache::s_cache_entry * c_wrapped_array_no_init<struct c_tag_file_group_instance_cache::s_cache_entry>::begin(void)
//{
//    mangled_ppc("?begin@?$c_wrapped_array_no_init@Us_cache_entry@c_tag_file_group_instance_cache@@@@QAAPAUs_cache_entry@c_tag_file_group_instance_cache@@XZ");
//};

//public: long c_wrapped_array_no_init<struct c_tag_file_group_instance_cache::s_cache_entry>::count(void) const
//{
//    mangled_ppc("?count@?$c_wrapped_array_no_init@Us_cache_entry@c_tag_file_group_instance_cache@@@@QBAJXZ");
//};

//public: long c_resizeable_array_operator_interface<class c_fixed_sized_dynamic_array<struct c_tag_file_group_instance_cache::s_cache_entry>, struct c_tag_file_group_instance_cache::s_cache_entry>::new_element_index(void)
//{
//    mangled_ppc("?new_element_index@?$c_resizeable_array_operator_interface@V?$c_fixed_sized_dynamic_array@Us_cache_entry@c_tag_file_group_instance_cache@@@@Us_cache_entry@c_tag_file_group_instance_cache@@@@QAAJXZ");
//};

//public: long c_array_operator_interface<class c_fixed_sized_dynamic_array<struct c_tag_file_group_instance_cache::s_cache_entry>, struct c_tag_file_group_instance_cache::s_cache_entry>::count(void) const
//{
//    mangled_ppc("?count@?$c_array_operator_interface@V?$c_fixed_sized_dynamic_array@Us_cache_entry@c_tag_file_group_instance_cache@@@@Us_cache_entry@c_tag_file_group_instance_cache@@@@QBAJXZ");
//};

//public: class c_fixed_sized_dynamic_array<struct c_tag_file_group_instance_cache::s_cache_entry> * c_recursive_template_pattern<class c_fixed_sized_dynamic_array<struct c_tag_file_group_instance_cache::s_cache_entry> >::get_super_class(void)
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_fixed_sized_dynamic_array@Us_cache_entry@c_tag_file_group_instance_cache@@@@@@QAAPAV?$c_fixed_sized_dynamic_array@Us_cache_entry@c_tag_file_group_instance_cache@@@@XZ");
//};

//public: void c_wrapped_array_no_init<struct c_tag_file_group_instance_cache::s_cache_entry>::set_elements(struct c_tag_file_group_instance_cache::s_cache_entry *, long)
//{
//    mangled_ppc("?set_elements@?$c_wrapped_array_no_init@Us_cache_entry@c_tag_file_group_instance_cache@@@@QAAXPAUs_cache_entry@c_tag_file_group_instance_cache@@J@Z");
//};

//public: long c_fixed_sized_dynamic_array<struct c_tag_file_group_instance_cache::s_cache_entry>::new_element_index(void)
//{
//    mangled_ppc("?new_element_index@?$c_fixed_sized_dynamic_array@Us_cache_entry@c_tag_file_group_instance_cache@@@@QAAJXZ");
//};

//private: class c_fixed_sized_dynamic_array<struct c_tag_file_group_instance_cache::s_cache_entry> * c_resizeable_array_operator_interface<class c_fixed_sized_dynamic_array<struct c_tag_file_group_instance_cache::s_cache_entry>, struct c_tag_file_group_instance_cache::s_cache_entry>::get_super_class(void)
//{
//    mangled_ppc("?get_super_class@?$c_resizeable_array_operator_interface@V?$c_fixed_sized_dynamic_array@Us_cache_entry@c_tag_file_group_instance_cache@@@@Us_cache_entry@c_tag_file_group_instance_cache@@@@AAAPAV?$c_fixed_sized_dynamic_array@Us_cache_entry@c_tag_file_group_instance_cache@@@@XZ");
//};

//public: class c_fixed_sized_dynamic_array<struct c_tag_file_group_instance_cache::s_cache_entry> const * c_recursive_template_pattern<class c_fixed_sized_dynamic_array<struct c_tag_file_group_instance_cache::s_cache_entry> >::get_super_class(void) const
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_fixed_sized_dynamic_array@Us_cache_entry@c_tag_file_group_instance_cache@@@@@@QBAPBV?$c_fixed_sized_dynamic_array@Us_cache_entry@c_tag_file_group_instance_cache@@@@XZ");
//};

//public: bool c_array_operator_interface<class c_wrapped_array_no_init<struct c_tag_file_group_instance_cache::s_cache_entry>, struct c_tag_file_group_instance_cache::s_cache_entry>::valid_index(long) const
//{
//    mangled_ppc("?valid_index@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_cache_entry@c_tag_file_group_instance_cache@@@@Us_cache_entry@c_tag_file_group_instance_cache@@@@QBA_NJ@Z");
//};

//public: long c_array_operator_interface<class c_wrapped_array_no_init<struct c_tag_file_group_instance_cache::s_cache_entry>, struct c_tag_file_group_instance_cache::s_cache_entry>::count(void) const
//{
//    mangled_ppc("?count@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_cache_entry@c_tag_file_group_instance_cache@@@@Us_cache_entry@c_tag_file_group_instance_cache@@@@QBAJXZ");
//};

//public: class c_wrapped_array_no_init<struct c_tag_file_group_instance_cache::s_cache_entry> const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct c_tag_file_group_instance_cache::s_cache_entry> >::get_super_class(void) const
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@Us_cache_entry@c_tag_file_group_instance_cache@@@@@@QBAPBV?$c_wrapped_array_no_init@Us_cache_entry@c_tag_file_group_instance_cache@@@@XZ");
//};

//class c_wrapped_array<struct c_tag_file_group_instance_cache::s_cache_entry> allocate_wrapped_array<struct c_tag_file_group_instance_cache::s_cache_entry>(class c_allocation_interface *, unsigned long)
//{
//    mangled_ppc("??$allocate_wrapped_array@Us_cache_entry@c_tag_file_group_instance_cache@@@@YA?AV?$c_wrapped_array@Us_cache_entry@c_tag_file_group_instance_cache@@@@PAVc_allocation_interface@@K@Z");
//};

//class c_wrapped_array<struct c_tag_file_group_instance_cache::s_cache_entry> make_wrapped_array<struct c_tag_file_group_instance_cache::s_cache_entry>(struct c_tag_file_group_instance_cache::s_cache_entry *, long)
//{
//    mangled_ppc("??$make_wrapped_array@Us_cache_entry@c_tag_file_group_instance_cache@@@@YA?AV?$c_wrapped_array@Us_cache_entry@c_tag_file_group_instance_cache@@@@PAUs_cache_entry@c_tag_file_group_instance_cache@@J@Z");
//};

//void free_wrapped_array<struct c_tag_file_group_instance_cache::s_cache_entry>(class c_allocation_interface *, class c_wrapped_array<struct c_tag_file_group_instance_cache::s_cache_entry> *)
//{
//    mangled_ppc("??$free_wrapped_array@Us_cache_entry@c_tag_file_group_instance_cache@@@@YAXPAVc_allocation_interface@@PAV?$c_wrapped_array@Us_cache_entry@c_tag_file_group_instance_cache@@@@@Z");
//};

//void std::sort<struct c_tag_file_group_instance_cache::s_cache_entry *, class c_tag_file_group_instance_cache::c_cache_entry_compare>(struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *, class c_tag_file_group_instance_cache::c_cache_entry_compare)
//{
//    mangled_ppc("??$sort@PAUs_cache_entry@c_tag_file_group_instance_cache@@Vc_cache_entry_compare@2@@std@@YAXPAUs_cache_entry@c_tag_file_group_instance_cache@@0Vc_cache_entry_compare@2@@Z");
//};

//struct c_tag_file_group_instance_cache::s_cache_entry * std::lower_bound<struct c_tag_file_group_instance_cache::s_cache_entry *, long, class c_tag_file_group_instance_cache::c_cache_entry_compare>(struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *, long const &, class c_tag_file_group_instance_cache::c_cache_entry_compare)
//{
//    mangled_ppc("??$lower_bound@PAUs_cache_entry@c_tag_file_group_instance_cache@@JVc_cache_entry_compare@2@@std@@YAPAUs_cache_entry@c_tag_file_group_instance_cache@@PAU12@0ABJVc_cache_entry_compare@2@@Z");
//};

//public: c_wrapped_array<struct c_tag_file_group_instance_cache::s_cache_entry>::c_wrapped_array<struct c_tag_file_group_instance_cache::s_cache_entry>(struct c_tag_file_group_instance_cache::s_cache_entry *, long)
//{
//    mangled_ppc("??0?$c_wrapped_array@Us_cache_entry@c_tag_file_group_instance_cache@@@@QAA@PAUs_cache_entry@c_tag_file_group_instance_cache@@J@Z");
//};

//public: void c_wrapped_array_no_init<struct c_tag_file_group_instance_cache::s_cache_entry>::clear(void)
//{
//    mangled_ppc("?clear@?$c_wrapped_array_no_init@Us_cache_entry@c_tag_file_group_instance_cache@@@@QAAXXZ");
//};

//public: struct c_tag_file_group_instance_cache::s_cache_entry * c_wrapped_array_no_init<struct c_tag_file_group_instance_cache::s_cache_entry>::end(void)
//{
//    mangled_ppc("?end@?$c_wrapped_array_no_init@Us_cache_entry@c_tag_file_group_instance_cache@@@@QAAPAUs_cache_entry@c_tag_file_group_instance_cache@@XZ");
//};

//public: struct c_tag_file_group_instance_cache::s_cache_entry * c_basic_buffer<void>::get_as_type_array<struct c_tag_file_group_instance_cache::s_cache_entry>(unsigned long)
//{
//    mangled_ppc("??$get_as_type_array@Us_cache_entry@c_tag_file_group_instance_cache@@@?$c_basic_buffer@X@@QAAPAUs_cache_entry@c_tag_file_group_instance_cache@@K@Z");
//};

//void std::_Debug_range<struct c_tag_file_group_instance_cache::s_cache_entry *>(struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *, wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_range@PAUs_cache_entry@c_tag_file_group_instance_cache@@@std@@YAXPAUs_cache_entry@c_tag_file_group_instance_cache@@0PB_WI@Z");
//};

//void std::_Debug_pointer<class c_tag_file_group_instance_cache::c_cache_entry_compare>(class c_tag_file_group_instance_cache::c_cache_entry_compare &, wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_pointer@Vc_cache_entry_compare@c_tag_file_group_instance_cache@@@std@@YAXAAVc_cache_entry_compare@c_tag_file_group_instance_cache@@PB_WI@Z");
//};

//struct c_tag_file_group_instance_cache::s_cache_entry * std::_Checked_base<struct c_tag_file_group_instance_cache::s_cache_entry *>(struct c_tag_file_group_instance_cache::s_cache_entry *&)
//{
//    mangled_ppc("??$_Checked_base@PAUs_cache_entry@c_tag_file_group_instance_cache@@@std@@YAPAUs_cache_entry@c_tag_file_group_instance_cache@@AAPAU12@@Z");
//};

//void std::_Sort<struct c_tag_file_group_instance_cache::s_cache_entry *, int, class c_tag_file_group_instance_cache::c_cache_entry_compare>(struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *, int, class c_tag_file_group_instance_cache::c_cache_entry_compare)
//{
//    mangled_ppc("??$_Sort@PAUs_cache_entry@c_tag_file_group_instance_cache@@HVc_cache_entry_compare@2@@std@@YAXPAUs_cache_entry@c_tag_file_group_instance_cache@@0HVc_cache_entry_compare@2@@Z");
//};

//int * std::_Dist_type<struct c_tag_file_group_instance_cache::s_cache_entry *>(struct c_tag_file_group_instance_cache::s_cache_entry *)
//{
//    mangled_ppc("??$_Dist_type@PAUs_cache_entry@c_tag_file_group_instance_cache@@@std@@YAPAHPAUs_cache_entry@c_tag_file_group_instance_cache@@@Z");
//};

//struct c_tag_file_group_instance_cache::s_cache_entry * std::_Lower_bound<struct c_tag_file_group_instance_cache::s_cache_entry *, long, int, class c_tag_file_group_instance_cache::c_cache_entry_compare>(struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *, long const &, class c_tag_file_group_instance_cache::c_cache_entry_compare, int *)
//{
//    mangled_ppc("??$_Lower_bound@PAUs_cache_entry@c_tag_file_group_instance_cache@@JHVc_cache_entry_compare@2@@std@@YAPAUs_cache_entry@c_tag_file_group_instance_cache@@PAU12@0ABJVc_cache_entry_compare@2@PAH@Z");
//};

//void std::_Checked_assign_from_base<struct c_tag_file_group_instance_cache::s_cache_entry *>(struct c_tag_file_group_instance_cache::s_cache_entry *&, struct c_tag_file_group_instance_cache::s_cache_entry *const &)
//{
//    mangled_ppc("??$_Checked_assign_from_base@PAUs_cache_entry@c_tag_file_group_instance_cache@@@std@@YAXAAPAUs_cache_entry@c_tag_file_group_instance_cache@@ABQAU12@@Z");
//};

//struct std::random_access_iterator_tag std::_Iter_cat<struct c_tag_file_group_instance_cache::s_cache_entry *>(struct c_tag_file_group_instance_cache::s_cache_entry *const &)
//{
//    mangled_ppc("??$_Iter_cat@PAUs_cache_entry@c_tag_file_group_instance_cache@@@std@@YA?AUrandom_access_iterator_tag@0@ABQAUs_cache_entry@c_tag_file_group_instance_cache@@@Z");
//};

//void std::_Debug_range2<struct c_tag_file_group_instance_cache::s_cache_entry *>(struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *, wchar_t const *, unsigned int, struct std::random_access_iterator_tag)
//{
//    mangled_ppc("??$_Debug_range2@PAUs_cache_entry@c_tag_file_group_instance_cache@@@std@@YAXPAUs_cache_entry@c_tag_file_group_instance_cache@@0PB_WIUrandom_access_iterator_tag@0@@Z");
//};

//struct c_tag_file_group_instance_cache::s_cache_entry * std::_Checked_base<struct c_tag_file_group_instance_cache::s_cache_entry *>(struct c_tag_file_group_instance_cache::s_cache_entry *&, struct std::_Unchanged_checked_iterator_base_type_tag)
//{
//    mangled_ppc("??$_Checked_base@PAUs_cache_entry@c_tag_file_group_instance_cache@@@std@@YAPAUs_cache_entry@c_tag_file_group_instance_cache@@AAPAU12@U_Unchanged_checked_iterator_base_type_tag@0@@Z");
//};

//struct std::pair<struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *> std::_Unguarded_partition<struct c_tag_file_group_instance_cache::s_cache_entry *, class c_tag_file_group_instance_cache::c_cache_entry_compare>(struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *, class c_tag_file_group_instance_cache::c_cache_entry_compare)
//{
//    mangled_ppc("??$_Unguarded_partition@PAUs_cache_entry@c_tag_file_group_instance_cache@@Vc_cache_entry_compare@2@@std@@YA?AU?$pair@PAUs_cache_entry@c_tag_file_group_instance_cache@@PAU12@@0@PAUs_cache_entry@c_tag_file_group_instance_cache@@0Vc_cache_entry_compare@3@@Z");
//};

//public: bool c_tag_file_group_instance_cache::c_cache_entry_compare::operator()(struct c_tag_file_group_instance_cache::s_cache_entry const &, struct c_tag_file_group_instance_cache::s_cache_entry const &) const
//{
//    mangled_ppc("??Rc_cache_entry_compare@c_tag_file_group_instance_cache@@QBA_NABUs_cache_entry@1@0@Z");
//};

//void std::make_heap<struct c_tag_file_group_instance_cache::s_cache_entry *, class c_tag_file_group_instance_cache::c_cache_entry_compare>(struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *, class c_tag_file_group_instance_cache::c_cache_entry_compare)
//{
//    mangled_ppc("??$make_heap@PAUs_cache_entry@c_tag_file_group_instance_cache@@Vc_cache_entry_compare@2@@std@@YAXPAUs_cache_entry@c_tag_file_group_instance_cache@@0Vc_cache_entry_compare@2@@Z");
//};

//void std::sort_heap<struct c_tag_file_group_instance_cache::s_cache_entry *, class c_tag_file_group_instance_cache::c_cache_entry_compare>(struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *, class c_tag_file_group_instance_cache::c_cache_entry_compare)
//{
//    mangled_ppc("??$sort_heap@PAUs_cache_entry@c_tag_file_group_instance_cache@@Vc_cache_entry_compare@2@@std@@YAXPAUs_cache_entry@c_tag_file_group_instance_cache@@0Vc_cache_entry_compare@2@@Z");
//};

//void std::_Insertion_sort<struct c_tag_file_group_instance_cache::s_cache_entry *, class c_tag_file_group_instance_cache::c_cache_entry_compare>(struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *, class c_tag_file_group_instance_cache::c_cache_entry_compare)
//{
//    mangled_ppc("??$_Insertion_sort@PAUs_cache_entry@c_tag_file_group_instance_cache@@Vc_cache_entry_compare@2@@std@@YAXPAUs_cache_entry@c_tag_file_group_instance_cache@@0Vc_cache_entry_compare@2@@Z");
//};

//void std::_Debug_order_single<struct c_tag_file_group_instance_cache::s_cache_entry *, class c_tag_file_group_instance_cache::c_cache_entry_compare>(struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *, class c_tag_file_group_instance_cache::c_cache_entry_compare, bool, wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_order_single@PAUs_cache_entry@c_tag_file_group_instance_cache@@Vc_cache_entry_compare@2@@std@@YAXPAUs_cache_entry@c_tag_file_group_instance_cache@@0Vc_cache_entry_compare@2@_NPB_WI@Z");
//};

//void std::_Distance<struct c_tag_file_group_instance_cache::s_cache_entry *, int>(struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *, int &)
//{
//    mangled_ppc("??$_Distance@PAUs_cache_entry@c_tag_file_group_instance_cache@@H@std@@YAXPAUs_cache_entry@c_tag_file_group_instance_cache@@0AAH@Z");
//};

//void std::advance<struct c_tag_file_group_instance_cache::s_cache_entry *, int>(struct c_tag_file_group_instance_cache::s_cache_entry *&, int)
//{
//    mangled_ppc("??$advance@PAUs_cache_entry@c_tag_file_group_instance_cache@@H@std@@YAXAAPAUs_cache_entry@c_tag_file_group_instance_cache@@H@Z");
//};

//bool std::_Debug_lt_pred<class c_tag_file_group_instance_cache::c_cache_entry_compare, struct c_tag_file_group_instance_cache::s_cache_entry, long>(class c_tag_file_group_instance_cache::c_cache_entry_compare, struct c_tag_file_group_instance_cache::s_cache_entry &, long const &, wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_lt_pred@Vc_cache_entry_compare@c_tag_file_group_instance_cache@@Us_cache_entry@2@J@std@@YA_NVc_cache_entry_compare@c_tag_file_group_instance_cache@@AAUs_cache_entry@2@ABJPB_WI@Z");
//};

//public: bool c_tag_file_group_instance_cache::c_cache_entry_compare::operator()(long, struct c_tag_file_group_instance_cache::s_cache_entry const &) const
//{
//    mangled_ppc("??Rc_cache_entry_compare@c_tag_file_group_instance_cache@@QBA_NJABUs_cache_entry@1@@Z");
//};

//public: bool c_tag_file_group_instance_cache::c_cache_entry_compare::operator()(struct c_tag_file_group_instance_cache::s_cache_entry const &, long) const
//{
//    mangled_ppc("??Rc_cache_entry_compare@c_tag_file_group_instance_cache@@QBA_NABUs_cache_entry@1@J@Z");
//};

//public: std::pair<struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *>::pair<struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *>(struct c_tag_file_group_instance_cache::s_cache_entry *const &, struct c_tag_file_group_instance_cache::s_cache_entry *const &)
//{
//    mangled_ppc("??0?$pair@PAUs_cache_entry@c_tag_file_group_instance_cache@@PAU12@@std@@QAA@ABQAUs_cache_entry@c_tag_file_group_instance_cache@@0@Z");
//};

//void std::_Debug_pointer<struct c_tag_file_group_instance_cache::s_cache_entry>(struct c_tag_file_group_instance_cache::s_cache_entry *, wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_pointer@Us_cache_entry@c_tag_file_group_instance_cache@@@std@@YAXPAUs_cache_entry@c_tag_file_group_instance_cache@@PB_WI@Z");
//};

//void std::_Median<struct c_tag_file_group_instance_cache::s_cache_entry *, class c_tag_file_group_instance_cache::c_cache_entry_compare>(struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *, class c_tag_file_group_instance_cache::c_cache_entry_compare)
//{
//    mangled_ppc("??$_Median@PAUs_cache_entry@c_tag_file_group_instance_cache@@Vc_cache_entry_compare@2@@std@@YAXPAUs_cache_entry@c_tag_file_group_instance_cache@@00Vc_cache_entry_compare@2@@Z");
//};

//bool std::_Debug_lt_pred<class c_tag_file_group_instance_cache::c_cache_entry_compare, struct c_tag_file_group_instance_cache::s_cache_entry, struct c_tag_file_group_instance_cache::s_cache_entry>(class c_tag_file_group_instance_cache::c_cache_entry_compare, struct c_tag_file_group_instance_cache::s_cache_entry &, struct c_tag_file_group_instance_cache::s_cache_entry &, wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_lt_pred@Vc_cache_entry_compare@c_tag_file_group_instance_cache@@Us_cache_entry@2@U32@@std@@YA_NVc_cache_entry_compare@c_tag_file_group_instance_cache@@AAUs_cache_entry@2@1PB_WI@Z");
//};

//void std::iter_swap<struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *>(struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *)
//{
//    mangled_ppc("??$iter_swap@PAUs_cache_entry@c_tag_file_group_instance_cache@@PAU12@@std@@YAXPAUs_cache_entry@c_tag_file_group_instance_cache@@0@Z");
//};

//struct c_tag_file_group_instance_cache::s_cache_entry * std::_Val_type<struct c_tag_file_group_instance_cache::s_cache_entry *>(struct c_tag_file_group_instance_cache::s_cache_entry *)
//{
//    mangled_ppc("??$_Val_type@PAUs_cache_entry@c_tag_file_group_instance_cache@@@std@@YAPAUs_cache_entry@c_tag_file_group_instance_cache@@PAU12@@Z");
//};

//void std::_Make_heap<struct c_tag_file_group_instance_cache::s_cache_entry *, int, struct c_tag_file_group_instance_cache::s_cache_entry, class c_tag_file_group_instance_cache::c_cache_entry_compare>(struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *, class c_tag_file_group_instance_cache::c_cache_entry_compare, int *, struct c_tag_file_group_instance_cache::s_cache_entry *)
//{
//    mangled_ppc("??$_Make_heap@PAUs_cache_entry@c_tag_file_group_instance_cache@@HU12@Vc_cache_entry_compare@2@@std@@YAXPAUs_cache_entry@c_tag_file_group_instance_cache@@0Vc_cache_entry_compare@2@PAH0@Z");
//};

//void std::_Debug_heap<struct c_tag_file_group_instance_cache::s_cache_entry *, class c_tag_file_group_instance_cache::c_cache_entry_compare>(struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *, class c_tag_file_group_instance_cache::c_cache_entry_compare)
//{
//    mangled_ppc("??$_Debug_heap@PAUs_cache_entry@c_tag_file_group_instance_cache@@Vc_cache_entry_compare@2@@std@@YAXPAUs_cache_entry@c_tag_file_group_instance_cache@@0Vc_cache_entry_compare@2@@Z");
//};

//void std::_Sort_heap<struct c_tag_file_group_instance_cache::s_cache_entry *, class c_tag_file_group_instance_cache::c_cache_entry_compare>(struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *, class c_tag_file_group_instance_cache::c_cache_entry_compare)
//{
//    mangled_ppc("??$_Sort_heap@PAUs_cache_entry@c_tag_file_group_instance_cache@@Vc_cache_entry_compare@2@@std@@YAXPAUs_cache_entry@c_tag_file_group_instance_cache@@0Vc_cache_entry_compare@2@@Z");
//};

//void std::_Insertion_sort1<struct c_tag_file_group_instance_cache::s_cache_entry *, class c_tag_file_group_instance_cache::c_cache_entry_compare, struct c_tag_file_group_instance_cache::s_cache_entry>(struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *, class c_tag_file_group_instance_cache::c_cache_entry_compare, struct c_tag_file_group_instance_cache::s_cache_entry *)
//{
//    mangled_ppc("??$_Insertion_sort1@PAUs_cache_entry@c_tag_file_group_instance_cache@@Vc_cache_entry_compare@2@U12@@std@@YAXPAUs_cache_entry@c_tag_file_group_instance_cache@@0Vc_cache_entry_compare@2@0@Z");
//};

//void std::_Debug_order_single2<struct c_tag_file_group_instance_cache::s_cache_entry *, class c_tag_file_group_instance_cache::c_cache_entry_compare>(struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *, class c_tag_file_group_instance_cache::c_cache_entry_compare, bool, wchar_t const *, unsigned int, struct std::forward_iterator_tag)
//{
//    mangled_ppc("??$_Debug_order_single2@PAUs_cache_entry@c_tag_file_group_instance_cache@@Vc_cache_entry_compare@2@@std@@YAXPAUs_cache_entry@c_tag_file_group_instance_cache@@0Vc_cache_entry_compare@2@_NPB_WIUforward_iterator_tag@0@@Z");
//};

//void std::_Distance2<struct c_tag_file_group_instance_cache::s_cache_entry *, int>(struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *, int &, struct std::random_access_iterator_tag)
//{
//    mangled_ppc("??$_Distance2@PAUs_cache_entry@c_tag_file_group_instance_cache@@H@std@@YAXPAUs_cache_entry@c_tag_file_group_instance_cache@@0AAHUrandom_access_iterator_tag@0@@Z");
//};

//void std::_Advance<struct c_tag_file_group_instance_cache::s_cache_entry *, int>(struct c_tag_file_group_instance_cache::s_cache_entry *&, int, struct std::random_access_iterator_tag)
//{
//    mangled_ppc("??$_Advance@PAUs_cache_entry@c_tag_file_group_instance_cache@@H@std@@YAXAAPAUs_cache_entry@c_tag_file_group_instance_cache@@HUrandom_access_iterator_tag@0@@Z");
//};

//void std::_Med3<struct c_tag_file_group_instance_cache::s_cache_entry *, class c_tag_file_group_instance_cache::c_cache_entry_compare>(struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *, class c_tag_file_group_instance_cache::c_cache_entry_compare)
//{
//    mangled_ppc("??$_Med3@PAUs_cache_entry@c_tag_file_group_instance_cache@@Vc_cache_entry_compare@2@@std@@YAXPAUs_cache_entry@c_tag_file_group_instance_cache@@00Vc_cache_entry_compare@2@@Z");
//};

//void std::swap<struct c_tag_file_group_instance_cache::s_cache_entry>(struct c_tag_file_group_instance_cache::s_cache_entry &, struct c_tag_file_group_instance_cache::s_cache_entry &)
//{
//    mangled_ppc("??$swap@Us_cache_entry@c_tag_file_group_instance_cache@@@std@@YAXAAUs_cache_entry@c_tag_file_group_instance_cache@@0@Z");
//};

//void std::_Adjust_heap<struct c_tag_file_group_instance_cache::s_cache_entry *, int, struct c_tag_file_group_instance_cache::s_cache_entry, class c_tag_file_group_instance_cache::c_cache_entry_compare>(struct c_tag_file_group_instance_cache::s_cache_entry *, int, int, struct c_tag_file_group_instance_cache::s_cache_entry, class c_tag_file_group_instance_cache::c_cache_entry_compare)
//{
//    mangled_ppc("??$_Adjust_heap@PAUs_cache_entry@c_tag_file_group_instance_cache@@HU12@Vc_cache_entry_compare@2@@std@@YAXPAUs_cache_entry@c_tag_file_group_instance_cache@@HHU12@Vc_cache_entry_compare@2@@Z");
//};

//void std::pop_heap<struct c_tag_file_group_instance_cache::s_cache_entry *, class c_tag_file_group_instance_cache::c_cache_entry_compare>(struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *, class c_tag_file_group_instance_cache::c_cache_entry_compare)
//{
//    mangled_ppc("??$pop_heap@PAUs_cache_entry@c_tag_file_group_instance_cache@@Vc_cache_entry_compare@2@@std@@YAXPAUs_cache_entry@c_tag_file_group_instance_cache@@0Vc_cache_entry_compare@2@@Z");
//};

//struct c_tag_file_group_instance_cache::s_cache_entry * stdext::unchecked_copy_backward<struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *>(struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *)
//{
//    mangled_ppc("??$unchecked_copy_backward@PAUs_cache_entry@c_tag_file_group_instance_cache@@PAU12@@stdext@@YAPAUs_cache_entry@c_tag_file_group_instance_cache@@PAU12@00@Z");
//};

//void std::_Push_heap<struct c_tag_file_group_instance_cache::s_cache_entry *, int, struct c_tag_file_group_instance_cache::s_cache_entry, class c_tag_file_group_instance_cache::c_cache_entry_compare>(struct c_tag_file_group_instance_cache::s_cache_entry *, int, int, struct c_tag_file_group_instance_cache::s_cache_entry, class c_tag_file_group_instance_cache::c_cache_entry_compare)
//{
//    mangled_ppc("??$_Push_heap@PAUs_cache_entry@c_tag_file_group_instance_cache@@HU12@Vc_cache_entry_compare@2@@std@@YAXPAUs_cache_entry@c_tag_file_group_instance_cache@@HHU12@Vc_cache_entry_compare@2@@Z");
//};

//void std::_Pop_heap_0<struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry, class c_tag_file_group_instance_cache::c_cache_entry_compare>(struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *, class c_tag_file_group_instance_cache::c_cache_entry_compare, struct c_tag_file_group_instance_cache::s_cache_entry *)
//{
//    mangled_ppc("??$_Pop_heap_0@PAUs_cache_entry@c_tag_file_group_instance_cache@@U12@Vc_cache_entry_compare@2@@std@@YAXPAUs_cache_entry@c_tag_file_group_instance_cache@@0Vc_cache_entry_compare@2@0@Z");
//};

//struct std::random_access_iterator_tag std::_Iter_random<struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *>(struct c_tag_file_group_instance_cache::s_cache_entry *const &, struct c_tag_file_group_instance_cache::s_cache_entry *const &)
//{
//    mangled_ppc("??$_Iter_random@PAUs_cache_entry@c_tag_file_group_instance_cache@@PAU12@@std@@YA?AUrandom_access_iterator_tag@0@ABQAUs_cache_entry@c_tag_file_group_instance_cache@@0@Z");
//};

//struct std::_Nonscalar_ptr_iterator_tag std::_Ptr_cat<struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *>(struct c_tag_file_group_instance_cache::s_cache_entry *&, struct c_tag_file_group_instance_cache::s_cache_entry *&)
//{
//    mangled_ppc("??$_Ptr_cat@PAUs_cache_entry@c_tag_file_group_instance_cache@@PAU12@@std@@YA?AU_Nonscalar_ptr_iterator_tag@0@AAPAUs_cache_entry@c_tag_file_group_instance_cache@@0@Z");
//};

//struct c_tag_file_group_instance_cache::s_cache_entry * std::_Copy_backward_opt<struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *>(struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *, struct std::random_access_iterator_tag, struct std::_Nonscalar_ptr_iterator_tag, struct std::_Range_checked_iterator_tag)
//{
//    mangled_ppc("??$_Copy_backward_opt@PAUs_cache_entry@c_tag_file_group_instance_cache@@PAU12@@std@@YAPAUs_cache_entry@c_tag_file_group_instance_cache@@PAU12@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z");
//};

//void std::_Pop_heap<struct c_tag_file_group_instance_cache::s_cache_entry *, int, struct c_tag_file_group_instance_cache::s_cache_entry, class c_tag_file_group_instance_cache::c_cache_entry_compare>(struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry, class c_tag_file_group_instance_cache::c_cache_entry_compare, int *)
//{
//    mangled_ppc("??$_Pop_heap@PAUs_cache_entry@c_tag_file_group_instance_cache@@HU12@Vc_cache_entry_compare@2@@std@@YAXPAUs_cache_entry@c_tag_file_group_instance_cache@@00U12@Vc_cache_entry_compare@2@PAH@Z");
//};

//struct c_tag_file_group_instance_cache::s_cache_entry * std::_Copy_backward_opt<struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *, struct std::forward_iterator_tag>(struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *, struct c_tag_file_group_instance_cache::s_cache_entry *, struct std::forward_iterator_tag, struct std::_Nonscalar_ptr_iterator_tag, struct std::_Range_checked_iterator_tag)
//{
//    mangled_ppc("??$_Copy_backward_opt@PAUs_cache_entry@c_tag_file_group_instance_cache@@PAU12@Uforward_iterator_tag@std@@@std@@YAPAUs_cache_entry@c_tag_file_group_instance_cache@@PAU12@00Uforward_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z");
//};

