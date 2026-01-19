/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: void c_tag_resource_address_cache::allocate_storage(unsigned long, unsigned long, unsigned long, class c_allocation_interface *);
// public: void c_wrapped_flags::set_bits(class c_basic_buffer<void>, unsigned long);
// public: void c_tag_resource_address_cache::initialize_for_new_map(unsigned long, unsigned long, unsigned long, class c_allocation_interface *);
// public: void c_tag_resource_address_cache::free_storage(void);
// public: void c_tag_resource_address_cache::dispose_from_old_map(void);
// public: void c_tag_resource_address_cache::initialize_resource_address(long, void *);
// public: void c_tag_resource_address_cache::dispose_resource_address(long, void const *);
// public: void c_tag_resource_address_cache::activate_resource_address(long, unsigned __int64, void const *);
// public: void c_tag_resource_address_cache::staleify_resource_address(long);
// public: bool c_tag_resource_address_cache::any_unlocked_resources_possibly_published(void) const;
// public: bool c_tag_resource_address_cache::is_block_published(long) const;
// public: bool c_tag_resource_address_cache::is_resource_published(long) const;
// public: class c_wrapped_flags const & c_tag_resource_address_cache::get_available_resource_flags(void) const;
// public: bool c_tag_resource_address_cache::is_resource_address_ready(long) const;
// private: bool c_tag_resource_address_cache::is_block_index_locked(long) const;
// private: bool c_tag_resource_address_cache::is_resource_address_locked(long) const;
// public: void c_tag_resource_address_cache::mark_required_resource(long);
// public: void c_tag_resource_address_cache::mark_unrequired_resource(long);
// public: void c_tag_resource_address_cache::clear_demanded_flags(void);
// public: void c_tag_resource_address_cache::mark_demanded_resource(long);
// public: bool c_tag_resource_address_cache::is_external_resource_demanded(long) const;
// public: void c_tag_resource_address_cache::populate_access_cache(class c_tag_resource_cache_file_access_cache *, bool);
// public: void c_tag_resource_address_cache::verify_all_required_resources_are_available(class c_tag_resource_cache_file_access_cache const *);
// public: void c_tag_resource_address_cache::purge_access_cache(class c_tag_resource_cache_file_access_cache const *);
// private: struct c_tag_resource_address_cache::s_published_resources_state * c_tag_resource_address_cache::find_or_add_cached_published_state(class c_tag_resource_cache_file_access_cache const *);
// private: struct c_tag_resource_address_cache::s_published_resources_state * c_tag_resource_address_cache::find_cached_published_state(class c_tag_resource_cache_file_access_cache const *);
// private: struct c_tag_resource_address_cache::s_published_resources_state * c_tag_resource_address_cache::find_cached_published_state_internal(class c_tag_resource_cache_file_access_cache const *);
// public: class c_tag_resource_address_cache_control_interface * c_tag_resource_address_cache::get_controller_interface(void);
// private: void c_tag_resource_address_cache_control_interface::initialize_for_new_map(class c_tag_resource_address_cache *);
// private: void c_tag_resource_address_cache_control_interface::dispose_from_old_map(void);
// public: void c_tag_resource_address_cache_control_interface::publish_resource_address(long, unsigned __int64, void *);
// public: void c_tag_resource_address_cache_control_interface::staleify_resource_address(long);
// public: bool c_tag_resource_address_cache_control_interface::resource_address_published(long);
// public: void c_tag_resource_address_cache_control_interface::clear_demanded_flags(void);
// public: void c_tag_resource_address_cache_control_interface::mark_demanded_resource(long);
// public: bool c_tag_resource_address_cache_control_interface::is_resource_demanded(long);
// public: void c_tag_resource_address_cache_control_interface::mark_required_resource(long);
// public: void c_tag_resource_address_cache_control_interface::mark_unrequired_resource(long);
// public: class c_wrapped_flags const & c_tag_resource_address_cache_control_interface::get_published_resource_flags(void);
// public: struct c_tag_resource_address_cache::s_cached_resource_state * c_wrapped_array_no_init<struct c_tag_resource_address_cache::s_cached_resource_state>::begin(void);
// public: struct c_tag_resource_address_cache::s_cached_resource_state * c_wrapped_array_no_init<struct c_tag_resource_address_cache::s_cached_resource_state>::end(void);
// public: struct c_tag_resource_address_cache::s_cached_resource_state & c_array_operator_interface<class c_wrapped_array_no_init<struct c_tag_resource_address_cache::s_cached_resource_state>, struct c_tag_resource_address_cache::s_cached_resource_state>::operator[](long);
// public: void c_array_operator_interface<class c_wrapped_array_no_init<struct c_tag_resource_address_cache::s_cached_resource_state>, struct c_tag_resource_address_cache::s_cached_resource_state>::set_all(struct c_tag_resource_address_cache::s_cached_resource_state const &);
// public: long c_wrapped_array_no_init<struct c_tag_resource_address_cache::s_published_resources_state>::count(void) const;
// public: struct c_tag_resource_address_cache::s_published_resources_state & c_array_operator_interface<class c_wrapped_array_no_init<struct c_tag_resource_address_cache::s_published_resources_state>, struct c_tag_resource_address_cache::s_published_resources_state>::operator[](long);
// public: struct c_tag_resource_address_cache::s_published_resources_state const & c_array_operator_interface<class c_wrapped_array_no_init<struct c_tag_resource_address_cache::s_published_resources_state>, struct c_tag_resource_address_cache::s_published_resources_state>::operator[](long) const;
// public: struct c_tag_resource_address_cache::s_published_resources_state * c_array_operator_interface<class c_wrapped_array_no_init<struct c_tag_resource_address_cache::s_published_resources_state>, struct c_tag_resource_address_cache::s_published_resources_state>::get_element(long);
// public: struct c_tag_resource_address_cache::s_cached_resource_state * c_array_operator_interface<class c_wrapped_array_no_init<struct c_tag_resource_address_cache::s_cached_resource_state>, struct c_tag_resource_address_cache::s_cached_resource_state>::begin(void);
// public: struct c_tag_resource_address_cache::s_cached_resource_state * c_array_operator_interface<class c_wrapped_array_no_init<struct c_tag_resource_address_cache::s_cached_resource_state>, struct c_tag_resource_address_cache::s_cached_resource_state>::end(void);
// public: bool c_array_operator_interface<class c_wrapped_array_no_init<struct c_tag_resource_address_cache::s_cached_resource_state>, struct c_tag_resource_address_cache::s_cached_resource_state>::valid_index(long) const;
// public: class c_wrapped_array_no_init<struct c_tag_resource_address_cache::s_cached_resource_state> * c_recursive_template_pattern<class c_wrapped_array_no_init<struct c_tag_resource_address_cache::s_cached_resource_state> >::get_super_class(void);
// public: struct c_tag_resource_address_cache::s_published_resources_state * c_wrapped_array_no_init<struct c_tag_resource_address_cache::s_published_resources_state>::begin(void);
// public: struct c_tag_resource_address_cache::s_published_resources_state const * c_wrapped_array_no_init<struct c_tag_resource_address_cache::s_published_resources_state>::begin(void) const;
// public: struct c_tag_resource_address_cache::s_published_resources_state * c_array_operator_interface<class c_wrapped_array_no_init<struct c_tag_resource_address_cache::s_published_resources_state>, struct c_tag_resource_address_cache::s_published_resources_state>::begin(void);
// public: bool c_array_operator_interface<class c_wrapped_array_no_init<struct c_tag_resource_address_cache::s_published_resources_state>, struct c_tag_resource_address_cache::s_published_resources_state>::valid_index(long) const;
// public: class c_wrapped_array_no_init<struct c_tag_resource_address_cache::s_published_resources_state> * c_recursive_template_pattern<class c_wrapped_array_no_init<struct c_tag_resource_address_cache::s_published_resources_state> >::get_super_class(void);
// public: class c_wrapped_array_no_init<struct c_tag_resource_address_cache::s_published_resources_state> const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct c_tag_resource_address_cache::s_published_resources_state> >::get_super_class(void) const;
// public: long c_array_operator_interface<class c_wrapped_array_no_init<struct c_tag_resource_address_cache::s_cached_resource_state>, struct c_tag_resource_address_cache::s_cached_resource_state>::count(void) const;
// public: long c_array_operator_interface<class c_wrapped_array_no_init<struct c_tag_resource_address_cache::s_published_resources_state>, struct c_tag_resource_address_cache::s_published_resources_state>::count(void) const;
// public: long c_wrapped_array_no_init<struct c_tag_resource_address_cache::s_cached_resource_state>::count(void) const;
// public: class c_wrapped_array_no_init<struct c_tag_resource_address_cache::s_cached_resource_state> const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct c_tag_resource_address_cache::s_cached_resource_state> >::get_super_class(void) const;
// struct s_allocation_description_holder make_allocation_description<struct c_tag_resource_address_cache::s_cached_resource_state>(class c_wrapped_array<struct c_tag_resource_address_cache::s_cached_resource_state> &, unsigned long);
// struct s_allocation_description_holder make_allocation_description<struct c_tag_resource_address_cache::s_published_resources_state>(class c_wrapped_array<struct c_tag_resource_address_cache::s_published_resources_state> &, unsigned long);
// void std::fill<struct c_tag_resource_address_cache::s_cached_resource_state *, struct c_tag_resource_address_cache::s_cached_resource_state>(struct c_tag_resource_address_cache::s_cached_resource_state *, struct c_tag_resource_address_cache::s_cached_resource_state *, struct c_tag_resource_address_cache::s_cached_resource_state const &);
// public: c_wrapped_array_allocation_description<struct c_tag_resource_address_cache::s_cached_resource_state>::c_wrapped_array_allocation_description<struct c_tag_resource_address_cache::s_cached_resource_state>(class c_wrapped_array<struct c_tag_resource_address_cache::s_cached_resource_state> &, unsigned long);
// public: virtual unsigned long c_wrapped_array_allocation_description<struct c_tag_resource_address_cache::s_cached_resource_state>::get_unaligned_size(void) const;
// public: virtual unsigned long c_wrapped_array_allocation_description<struct c_tag_resource_address_cache::s_cached_resource_state>::get_alignment_bits(void) const;
// public: virtual void c_wrapped_array_allocation_description<struct c_tag_resource_address_cache::s_cached_resource_state>::assign_storage(class c_raw_storage_buffer_iterator &) const;
// public: c_wrapped_array_allocation_description<struct c_tag_resource_address_cache::s_published_resources_state>::c_wrapped_array_allocation_description<struct c_tag_resource_address_cache::s_published_resources_state>(class c_wrapped_array<struct c_tag_resource_address_cache::s_published_resources_state> &, unsigned long);
// public: virtual unsigned long c_wrapped_array_allocation_description<struct c_tag_resource_address_cache::s_published_resources_state>::get_unaligned_size(void) const;
// public: virtual unsigned long c_wrapped_array_allocation_description<struct c_tag_resource_address_cache::s_published_resources_state>::get_alignment_bits(void) const;
// public: virtual void c_wrapped_array_allocation_description<struct c_tag_resource_address_cache::s_published_resources_state>::assign_storage(class c_raw_storage_buffer_iterator &) const;
// struct s_allocation_description_holder make_into_description_holder<class c_wrapped_array_allocation_description<struct c_tag_resource_address_cache::s_cached_resource_state> >(class c_wrapped_array_allocation_description<struct c_tag_resource_address_cache::s_cached_resource_state>);
// struct s_allocation_description_holder make_into_description_holder<class c_wrapped_array_allocation_description<struct c_tag_resource_address_cache::s_published_resources_state> >(class c_wrapped_array_allocation_description<struct c_tag_resource_address_cache::s_published_resources_state>);
// struct c_tag_resource_address_cache::s_cached_resource_state * std::_Checked_base<struct c_tag_resource_address_cache::s_cached_resource_state *>(struct c_tag_resource_address_cache::s_cached_resource_state *&);
// void std::_Fill<struct c_tag_resource_address_cache::s_cached_resource_state *, struct c_tag_resource_address_cache::s_cached_resource_state>(struct c_tag_resource_address_cache::s_cached_resource_state *, struct c_tag_resource_address_cache::s_cached_resource_state *, struct c_tag_resource_address_cache::s_cached_resource_state const &);
// unsigned long get_total_unaligned_raw_size<struct c_tag_resource_address_cache::s_cached_resource_state>(long);
// public: void c_raw_storage_buffer_iterator::set_wrapped_array<class c_wrapped_array, struct c_tag_resource_address_cache::s_cached_resource_state>(class c_wrapped_array<struct c_tag_resource_address_cache::s_cached_resource_state> &, long);
// unsigned long get_total_unaligned_raw_size<struct c_tag_resource_address_cache::s_published_resources_state>(long);
// public: void c_raw_storage_buffer_iterator::set_wrapped_array<class c_wrapped_array, struct c_tag_resource_address_cache::s_published_resources_state>(class c_wrapped_array<struct c_tag_resource_address_cache::s_published_resources_state> &, long);
// struct c_tag_resource_address_cache::s_cached_resource_state * std::_Checked_base<struct c_tag_resource_address_cache::s_cached_resource_state *>(struct c_tag_resource_address_cache::s_cached_resource_state *&, struct std::_Unchanged_checked_iterator_base_type_tag);
// void std::_Debug_range<struct c_tag_resource_address_cache::s_cached_resource_state *>(struct c_tag_resource_address_cache::s_cached_resource_state *, struct c_tag_resource_address_cache::s_cached_resource_state *, wchar_t const *, unsigned int);
// public: struct c_tag_resource_address_cache::s_cached_resource_state * c_raw_storage_buffer_iterator::get_array_elements<struct c_tag_resource_address_cache::s_cached_resource_state>(long);
// public: struct c_tag_resource_address_cache::s_published_resources_state * c_raw_storage_buffer_iterator::get_array_elements<struct c_tag_resource_address_cache::s_published_resources_state>(long);
// struct std::random_access_iterator_tag std::_Iter_cat<struct c_tag_resource_address_cache::s_cached_resource_state *>(struct c_tag_resource_address_cache::s_cached_resource_state *const &);
// void std::_Debug_range2<struct c_tag_resource_address_cache::s_cached_resource_state *>(struct c_tag_resource_address_cache::s_cached_resource_state *, struct c_tag_resource_address_cache::s_cached_resource_state *, wchar_t const *, unsigned int, struct std::random_access_iterator_tag);
// void std::_Debug_pointer<struct c_tag_resource_address_cache::s_cached_resource_state>(struct c_tag_resource_address_cache::s_cached_resource_state *, wchar_t const *, unsigned int);

//public: void c_tag_resource_address_cache::allocate_storage(unsigned long, unsigned long, unsigned long, class c_allocation_interface *)
//{
//    mangled_ppc("?allocate_storage@c_tag_resource_address_cache@@QAAXKKKPAVc_allocation_interface@@@Z");
//};

//public: void c_wrapped_flags::set_bits(class c_basic_buffer<void>, unsigned long)
//{
//    mangled_ppc("?set_bits@c_wrapped_flags@@QAAXV?$c_basic_buffer@X@@K@Z");
//};

//public: void c_tag_resource_address_cache::initialize_for_new_map(unsigned long, unsigned long, unsigned long, class c_allocation_interface *)
//{
//    mangled_ppc("?initialize_for_new_map@c_tag_resource_address_cache@@QAAXKKKPAVc_allocation_interface@@@Z");
//};

//public: void c_tag_resource_address_cache::free_storage(void)
//{
//    mangled_ppc("?free_storage@c_tag_resource_address_cache@@QAAXXZ");
//};

//public: void c_tag_resource_address_cache::dispose_from_old_map(void)
//{
//    mangled_ppc("?dispose_from_old_map@c_tag_resource_address_cache@@QAAXXZ");
//};

//public: void c_tag_resource_address_cache::initialize_resource_address(long, void *)
//{
//    mangled_ppc("?initialize_resource_address@c_tag_resource_address_cache@@QAAXJPAX@Z");
//};

//public: void c_tag_resource_address_cache::dispose_resource_address(long, void const *)
//{
//    mangled_ppc("?dispose_resource_address@c_tag_resource_address_cache@@QAAXJPBX@Z");
//};

//public: void c_tag_resource_address_cache::activate_resource_address(long, unsigned __int64, void const *)
//{
//    mangled_ppc("?activate_resource_address@c_tag_resource_address_cache@@QAAXJ_KPBX@Z");
//};

//public: void c_tag_resource_address_cache::staleify_resource_address(long)
//{
//    mangled_ppc("?staleify_resource_address@c_tag_resource_address_cache@@QAAXJ@Z");
//};

//public: bool c_tag_resource_address_cache::any_unlocked_resources_possibly_published(void) const
//{
//    mangled_ppc("?any_unlocked_resources_possibly_published@c_tag_resource_address_cache@@QBA_NXZ");
//};

//public: bool c_tag_resource_address_cache::is_block_published(long) const
//{
//    mangled_ppc("?is_block_published@c_tag_resource_address_cache@@QBA_NJ@Z");
//};

//public: bool c_tag_resource_address_cache::is_resource_published(long) const
//{
//    mangled_ppc("?is_resource_published@c_tag_resource_address_cache@@QBA_NJ@Z");
//};

//public: class c_wrapped_flags const & c_tag_resource_address_cache::get_available_resource_flags(void) const
//{
//    mangled_ppc("?get_available_resource_flags@c_tag_resource_address_cache@@QBAABVc_wrapped_flags@@XZ");
//};

//public: bool c_tag_resource_address_cache::is_resource_address_ready(long) const
//{
//    mangled_ppc("?is_resource_address_ready@c_tag_resource_address_cache@@QBA_NJ@Z");
//};

//private: bool c_tag_resource_address_cache::is_block_index_locked(long) const
//{
//    mangled_ppc("?is_block_index_locked@c_tag_resource_address_cache@@ABA_NJ@Z");
//};

//private: bool c_tag_resource_address_cache::is_resource_address_locked(long) const
//{
//    mangled_ppc("?is_resource_address_locked@c_tag_resource_address_cache@@ABA_NJ@Z");
//};

//public: void c_tag_resource_address_cache::mark_required_resource(long)
//{
//    mangled_ppc("?mark_required_resource@c_tag_resource_address_cache@@QAAXJ@Z");
//};

//public: void c_tag_resource_address_cache::mark_unrequired_resource(long)
//{
//    mangled_ppc("?mark_unrequired_resource@c_tag_resource_address_cache@@QAAXJ@Z");
//};

//public: void c_tag_resource_address_cache::clear_demanded_flags(void)
//{
//    mangled_ppc("?clear_demanded_flags@c_tag_resource_address_cache@@QAAXXZ");
//};

//public: void c_tag_resource_address_cache::mark_demanded_resource(long)
//{
//    mangled_ppc("?mark_demanded_resource@c_tag_resource_address_cache@@QAAXJ@Z");
//};

//public: bool c_tag_resource_address_cache::is_external_resource_demanded(long) const
//{
//    mangled_ppc("?is_external_resource_demanded@c_tag_resource_address_cache@@QBA_NJ@Z");
//};

//public: void c_tag_resource_address_cache::populate_access_cache(class c_tag_resource_cache_file_access_cache *, bool)
//{
//    mangled_ppc("?populate_access_cache@c_tag_resource_address_cache@@QAAXPAVc_tag_resource_cache_file_access_cache@@_N@Z");
//};

//public: void c_tag_resource_address_cache::verify_all_required_resources_are_available(class c_tag_resource_cache_file_access_cache const *)
//{
//    mangled_ppc("?verify_all_required_resources_are_available@c_tag_resource_address_cache@@QAAXPBVc_tag_resource_cache_file_access_cache@@@Z");
//};

//public: void c_tag_resource_address_cache::purge_access_cache(class c_tag_resource_cache_file_access_cache const *)
//{
//    mangled_ppc("?purge_access_cache@c_tag_resource_address_cache@@QAAXPBVc_tag_resource_cache_file_access_cache@@@Z");
//};

//private: struct c_tag_resource_address_cache::s_published_resources_state * c_tag_resource_address_cache::find_or_add_cached_published_state(class c_tag_resource_cache_file_access_cache const *)
//{
//    mangled_ppc("?find_or_add_cached_published_state@c_tag_resource_address_cache@@AAAPAUs_published_resources_state@1@PBVc_tag_resource_cache_file_access_cache@@@Z");
//};

//private: struct c_tag_resource_address_cache::s_published_resources_state * c_tag_resource_address_cache::find_cached_published_state(class c_tag_resource_cache_file_access_cache const *)
//{
//    mangled_ppc("?find_cached_published_state@c_tag_resource_address_cache@@AAAPAUs_published_resources_state@1@PBVc_tag_resource_cache_file_access_cache@@@Z");
//};

//private: struct c_tag_resource_address_cache::s_published_resources_state * c_tag_resource_address_cache::find_cached_published_state_internal(class c_tag_resource_cache_file_access_cache const *)
//{
//    mangled_ppc("?find_cached_published_state_internal@c_tag_resource_address_cache@@AAAPAUs_published_resources_state@1@PBVc_tag_resource_cache_file_access_cache@@@Z");
//};

//public: class c_tag_resource_address_cache_control_interface * c_tag_resource_address_cache::get_controller_interface(void)
//{
//    mangled_ppc("?get_controller_interface@c_tag_resource_address_cache@@QAAPAVc_tag_resource_address_cache_control_interface@@XZ");
//};

//private: void c_tag_resource_address_cache_control_interface::initialize_for_new_map(class c_tag_resource_address_cache *)
//{
//    mangled_ppc("?initialize_for_new_map@c_tag_resource_address_cache_control_interface@@AAAXPAVc_tag_resource_address_cache@@@Z");
//};

//private: void c_tag_resource_address_cache_control_interface::dispose_from_old_map(void)
//{
//    mangled_ppc("?dispose_from_old_map@c_tag_resource_address_cache_control_interface@@AAAXXZ");
//};

//public: void c_tag_resource_address_cache_control_interface::publish_resource_address(long, unsigned __int64, void *)
//{
//    mangled_ppc("?publish_resource_address@c_tag_resource_address_cache_control_interface@@QAAXJ_KPAX@Z");
//};

//public: void c_tag_resource_address_cache_control_interface::staleify_resource_address(long)
//{
//    mangled_ppc("?staleify_resource_address@c_tag_resource_address_cache_control_interface@@QAAXJ@Z");
//};

//public: bool c_tag_resource_address_cache_control_interface::resource_address_published(long)
//{
//    mangled_ppc("?resource_address_published@c_tag_resource_address_cache_control_interface@@QAA_NJ@Z");
//};

//public: void c_tag_resource_address_cache_control_interface::clear_demanded_flags(void)
//{
//    mangled_ppc("?clear_demanded_flags@c_tag_resource_address_cache_control_interface@@QAAXXZ");
//};

//public: void c_tag_resource_address_cache_control_interface::mark_demanded_resource(long)
//{
//    mangled_ppc("?mark_demanded_resource@c_tag_resource_address_cache_control_interface@@QAAXJ@Z");
//};

//public: bool c_tag_resource_address_cache_control_interface::is_resource_demanded(long)
//{
//    mangled_ppc("?is_resource_demanded@c_tag_resource_address_cache_control_interface@@QAA_NJ@Z");
//};

//public: void c_tag_resource_address_cache_control_interface::mark_required_resource(long)
//{
//    mangled_ppc("?mark_required_resource@c_tag_resource_address_cache_control_interface@@QAAXJ@Z");
//};

//public: void c_tag_resource_address_cache_control_interface::mark_unrequired_resource(long)
//{
//    mangled_ppc("?mark_unrequired_resource@c_tag_resource_address_cache_control_interface@@QAAXJ@Z");
//};

//public: class c_wrapped_flags const & c_tag_resource_address_cache_control_interface::get_published_resource_flags(void)
//{
//    mangled_ppc("?get_published_resource_flags@c_tag_resource_address_cache_control_interface@@QAAABVc_wrapped_flags@@XZ");
//};

//public: struct c_tag_resource_address_cache::s_cached_resource_state * c_wrapped_array_no_init<struct c_tag_resource_address_cache::s_cached_resource_state>::begin(void)
//{
//    mangled_ppc("?begin@?$c_wrapped_array_no_init@Us_cached_resource_state@c_tag_resource_address_cache@@@@QAAPAUs_cached_resource_state@c_tag_resource_address_cache@@XZ");
//};

//public: struct c_tag_resource_address_cache::s_cached_resource_state * c_wrapped_array_no_init<struct c_tag_resource_address_cache::s_cached_resource_state>::end(void)
//{
//    mangled_ppc("?end@?$c_wrapped_array_no_init@Us_cached_resource_state@c_tag_resource_address_cache@@@@QAAPAUs_cached_resource_state@c_tag_resource_address_cache@@XZ");
//};

//public: struct c_tag_resource_address_cache::s_cached_resource_state & c_array_operator_interface<class c_wrapped_array_no_init<struct c_tag_resource_address_cache::s_cached_resource_state>, struct c_tag_resource_address_cache::s_cached_resource_state>::operator[](long)
//{
//    mangled_ppc("??A?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_cached_resource_state@c_tag_resource_address_cache@@@@Us_cached_resource_state@c_tag_resource_address_cache@@@@QAAAAUs_cached_resource_state@c_tag_resource_address_cache@@J@Z");
//};

//public: void c_array_operator_interface<class c_wrapped_array_no_init<struct c_tag_resource_address_cache::s_cached_resource_state>, struct c_tag_resource_address_cache::s_cached_resource_state>::set_all(struct c_tag_resource_address_cache::s_cached_resource_state const &)
//{
//    mangled_ppc("?set_all@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_cached_resource_state@c_tag_resource_address_cache@@@@Us_cached_resource_state@c_tag_resource_address_cache@@@@QAAXABUs_cached_resource_state@c_tag_resource_address_cache@@@Z");
//};

//public: long c_wrapped_array_no_init<struct c_tag_resource_address_cache::s_published_resources_state>::count(void) const
//{
//    mangled_ppc("?count@?$c_wrapped_array_no_init@Us_published_resources_state@c_tag_resource_address_cache@@@@QBAJXZ");
//};

//public: struct c_tag_resource_address_cache::s_published_resources_state & c_array_operator_interface<class c_wrapped_array_no_init<struct c_tag_resource_address_cache::s_published_resources_state>, struct c_tag_resource_address_cache::s_published_resources_state>::operator[](long)
//{
//    mangled_ppc("??A?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_published_resources_state@c_tag_resource_address_cache@@@@Us_published_resources_state@c_tag_resource_address_cache@@@@QAAAAUs_published_resources_state@c_tag_resource_address_cache@@J@Z");
//};

//public: struct c_tag_resource_address_cache::s_published_resources_state const & c_array_operator_interface<class c_wrapped_array_no_init<struct c_tag_resource_address_cache::s_published_resources_state>, struct c_tag_resource_address_cache::s_published_resources_state>::operator[](long) const
//{
//    mangled_ppc("??A?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_published_resources_state@c_tag_resource_address_cache@@@@Us_published_resources_state@c_tag_resource_address_cache@@@@QBAABUs_published_resources_state@c_tag_resource_address_cache@@J@Z");
//};

//public: struct c_tag_resource_address_cache::s_published_resources_state * c_array_operator_interface<class c_wrapped_array_no_init<struct c_tag_resource_address_cache::s_published_resources_state>, struct c_tag_resource_address_cache::s_published_resources_state>::get_element(long)
//{
//    mangled_ppc("?get_element@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_published_resources_state@c_tag_resource_address_cache@@@@Us_published_resources_state@c_tag_resource_address_cache@@@@QAAPAUs_published_resources_state@c_tag_resource_address_cache@@J@Z");
//};

//public: struct c_tag_resource_address_cache::s_cached_resource_state * c_array_operator_interface<class c_wrapped_array_no_init<struct c_tag_resource_address_cache::s_cached_resource_state>, struct c_tag_resource_address_cache::s_cached_resource_state>::begin(void)
//{
//    mangled_ppc("?begin@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_cached_resource_state@c_tag_resource_address_cache@@@@Us_cached_resource_state@c_tag_resource_address_cache@@@@QAAPAUs_cached_resource_state@c_tag_resource_address_cache@@XZ");
//};

//public: struct c_tag_resource_address_cache::s_cached_resource_state * c_array_operator_interface<class c_wrapped_array_no_init<struct c_tag_resource_address_cache::s_cached_resource_state>, struct c_tag_resource_address_cache::s_cached_resource_state>::end(void)
//{
//    mangled_ppc("?end@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_cached_resource_state@c_tag_resource_address_cache@@@@Us_cached_resource_state@c_tag_resource_address_cache@@@@QAAPAUs_cached_resource_state@c_tag_resource_address_cache@@XZ");
//};

//public: bool c_array_operator_interface<class c_wrapped_array_no_init<struct c_tag_resource_address_cache::s_cached_resource_state>, struct c_tag_resource_address_cache::s_cached_resource_state>::valid_index(long) const
//{
//    mangled_ppc("?valid_index@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_cached_resource_state@c_tag_resource_address_cache@@@@Us_cached_resource_state@c_tag_resource_address_cache@@@@QBA_NJ@Z");
//};

//public: class c_wrapped_array_no_init<struct c_tag_resource_address_cache::s_cached_resource_state> * c_recursive_template_pattern<class c_wrapped_array_no_init<struct c_tag_resource_address_cache::s_cached_resource_state> >::get_super_class(void)
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@Us_cached_resource_state@c_tag_resource_address_cache@@@@@@QAAPAV?$c_wrapped_array_no_init@Us_cached_resource_state@c_tag_resource_address_cache@@@@XZ");
//};

//public: struct c_tag_resource_address_cache::s_published_resources_state * c_wrapped_array_no_init<struct c_tag_resource_address_cache::s_published_resources_state>::begin(void)
//{
//    mangled_ppc("?begin@?$c_wrapped_array_no_init@Us_published_resources_state@c_tag_resource_address_cache@@@@QAAPAUs_published_resources_state@c_tag_resource_address_cache@@XZ");
//};

//public: struct c_tag_resource_address_cache::s_published_resources_state const * c_wrapped_array_no_init<struct c_tag_resource_address_cache::s_published_resources_state>::begin(void) const
//{
//    mangled_ppc("?begin@?$c_wrapped_array_no_init@Us_published_resources_state@c_tag_resource_address_cache@@@@QBAPBUs_published_resources_state@c_tag_resource_address_cache@@XZ");
//};

//public: struct c_tag_resource_address_cache::s_published_resources_state * c_array_operator_interface<class c_wrapped_array_no_init<struct c_tag_resource_address_cache::s_published_resources_state>, struct c_tag_resource_address_cache::s_published_resources_state>::begin(void)
//{
//    mangled_ppc("?begin@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_published_resources_state@c_tag_resource_address_cache@@@@Us_published_resources_state@c_tag_resource_address_cache@@@@QAAPAUs_published_resources_state@c_tag_resource_address_cache@@XZ");
//};

//public: bool c_array_operator_interface<class c_wrapped_array_no_init<struct c_tag_resource_address_cache::s_published_resources_state>, struct c_tag_resource_address_cache::s_published_resources_state>::valid_index(long) const
//{
//    mangled_ppc("?valid_index@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_published_resources_state@c_tag_resource_address_cache@@@@Us_published_resources_state@c_tag_resource_address_cache@@@@QBA_NJ@Z");
//};

//public: class c_wrapped_array_no_init<struct c_tag_resource_address_cache::s_published_resources_state> * c_recursive_template_pattern<class c_wrapped_array_no_init<struct c_tag_resource_address_cache::s_published_resources_state> >::get_super_class(void)
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@Us_published_resources_state@c_tag_resource_address_cache@@@@@@QAAPAV?$c_wrapped_array_no_init@Us_published_resources_state@c_tag_resource_address_cache@@@@XZ");
//};

//public: class c_wrapped_array_no_init<struct c_tag_resource_address_cache::s_published_resources_state> const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct c_tag_resource_address_cache::s_published_resources_state> >::get_super_class(void) const
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@Us_published_resources_state@c_tag_resource_address_cache@@@@@@QBAPBV?$c_wrapped_array_no_init@Us_published_resources_state@c_tag_resource_address_cache@@@@XZ");
//};

//public: long c_array_operator_interface<class c_wrapped_array_no_init<struct c_tag_resource_address_cache::s_cached_resource_state>, struct c_tag_resource_address_cache::s_cached_resource_state>::count(void) const
//{
//    mangled_ppc("?count@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_cached_resource_state@c_tag_resource_address_cache@@@@Us_cached_resource_state@c_tag_resource_address_cache@@@@QBAJXZ");
//};

//public: long c_array_operator_interface<class c_wrapped_array_no_init<struct c_tag_resource_address_cache::s_published_resources_state>, struct c_tag_resource_address_cache::s_published_resources_state>::count(void) const
//{
//    mangled_ppc("?count@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_published_resources_state@c_tag_resource_address_cache@@@@Us_published_resources_state@c_tag_resource_address_cache@@@@QBAJXZ");
//};

//public: long c_wrapped_array_no_init<struct c_tag_resource_address_cache::s_cached_resource_state>::count(void) const
//{
//    mangled_ppc("?count@?$c_wrapped_array_no_init@Us_cached_resource_state@c_tag_resource_address_cache@@@@QBAJXZ");
//};

//public: class c_wrapped_array_no_init<struct c_tag_resource_address_cache::s_cached_resource_state> const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct c_tag_resource_address_cache::s_cached_resource_state> >::get_super_class(void) const
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@Us_cached_resource_state@c_tag_resource_address_cache@@@@@@QBAPBV?$c_wrapped_array_no_init@Us_cached_resource_state@c_tag_resource_address_cache@@@@XZ");
//};

//struct s_allocation_description_holder make_allocation_description<struct c_tag_resource_address_cache::s_cached_resource_state>(class c_wrapped_array<struct c_tag_resource_address_cache::s_cached_resource_state> &, unsigned long)
//{
//    mangled_ppc("??$make_allocation_description@Us_cached_resource_state@c_tag_resource_address_cache@@@@YA?AUs_allocation_description_holder@@AAV?$c_wrapped_array@Us_cached_resource_state@c_tag_resource_address_cache@@@@K@Z");
//};

//struct s_allocation_description_holder make_allocation_description<struct c_tag_resource_address_cache::s_published_resources_state>(class c_wrapped_array<struct c_tag_resource_address_cache::s_published_resources_state> &, unsigned long)
//{
//    mangled_ppc("??$make_allocation_description@Us_published_resources_state@c_tag_resource_address_cache@@@@YA?AUs_allocation_description_holder@@AAV?$c_wrapped_array@Us_published_resources_state@c_tag_resource_address_cache@@@@K@Z");
//};

//void std::fill<struct c_tag_resource_address_cache::s_cached_resource_state *, struct c_tag_resource_address_cache::s_cached_resource_state>(struct c_tag_resource_address_cache::s_cached_resource_state *, struct c_tag_resource_address_cache::s_cached_resource_state *, struct c_tag_resource_address_cache::s_cached_resource_state const &)
//{
//    mangled_ppc("??$fill@PAUs_cached_resource_state@c_tag_resource_address_cache@@U12@@std@@YAXPAUs_cached_resource_state@c_tag_resource_address_cache@@0ABU12@@Z");
//};

//public: c_wrapped_array_allocation_description<struct c_tag_resource_address_cache::s_cached_resource_state>::c_wrapped_array_allocation_description<struct c_tag_resource_address_cache::s_cached_resource_state>(class c_wrapped_array<struct c_tag_resource_address_cache::s_cached_resource_state> &, unsigned long)
//{
//    mangled_ppc("??0?$c_wrapped_array_allocation_description@Us_cached_resource_state@c_tag_resource_address_cache@@@@QAA@AAV?$c_wrapped_array@Us_cached_resource_state@c_tag_resource_address_cache@@@@K@Z");
//};

//public: virtual unsigned long c_wrapped_array_allocation_description<struct c_tag_resource_address_cache::s_cached_resource_state>::get_unaligned_size(void) const
//{
//    mangled_ppc("?get_unaligned_size@?$c_wrapped_array_allocation_description@Us_cached_resource_state@c_tag_resource_address_cache@@@@UBAKXZ");
//};

//public: virtual unsigned long c_wrapped_array_allocation_description<struct c_tag_resource_address_cache::s_cached_resource_state>::get_alignment_bits(void) const
//{
//    mangled_ppc("?get_alignment_bits@?$c_wrapped_array_allocation_description@Us_cached_resource_state@c_tag_resource_address_cache@@@@UBAKXZ");
//};

//public: virtual void c_wrapped_array_allocation_description<struct c_tag_resource_address_cache::s_cached_resource_state>::assign_storage(class c_raw_storage_buffer_iterator &) const
//{
//    mangled_ppc("?assign_storage@?$c_wrapped_array_allocation_description@Us_cached_resource_state@c_tag_resource_address_cache@@@@UBAXAAVc_raw_storage_buffer_iterator@@@Z");
//};

//public: c_wrapped_array_allocation_description<struct c_tag_resource_address_cache::s_published_resources_state>::c_wrapped_array_allocation_description<struct c_tag_resource_address_cache::s_published_resources_state>(class c_wrapped_array<struct c_tag_resource_address_cache::s_published_resources_state> &, unsigned long)
//{
//    mangled_ppc("??0?$c_wrapped_array_allocation_description@Us_published_resources_state@c_tag_resource_address_cache@@@@QAA@AAV?$c_wrapped_array@Us_published_resources_state@c_tag_resource_address_cache@@@@K@Z");
//};

//public: virtual unsigned long c_wrapped_array_allocation_description<struct c_tag_resource_address_cache::s_published_resources_state>::get_unaligned_size(void) const
//{
//    mangled_ppc("?get_unaligned_size@?$c_wrapped_array_allocation_description@Us_published_resources_state@c_tag_resource_address_cache@@@@UBAKXZ");
//};

//public: virtual unsigned long c_wrapped_array_allocation_description<struct c_tag_resource_address_cache::s_published_resources_state>::get_alignment_bits(void) const
//{
//    mangled_ppc("?get_alignment_bits@?$c_wrapped_array_allocation_description@Us_published_resources_state@c_tag_resource_address_cache@@@@UBAKXZ");
//};

//public: virtual void c_wrapped_array_allocation_description<struct c_tag_resource_address_cache::s_published_resources_state>::assign_storage(class c_raw_storage_buffer_iterator &) const
//{
//    mangled_ppc("?assign_storage@?$c_wrapped_array_allocation_description@Us_published_resources_state@c_tag_resource_address_cache@@@@UBAXAAVc_raw_storage_buffer_iterator@@@Z");
//};

//struct s_allocation_description_holder make_into_description_holder<class c_wrapped_array_allocation_description<struct c_tag_resource_address_cache::s_cached_resource_state> >(class c_wrapped_array_allocation_description<struct c_tag_resource_address_cache::s_cached_resource_state>)
//{
//    mangled_ppc("??$make_into_description_holder@V?$c_wrapped_array_allocation_description@Us_cached_resource_state@c_tag_resource_address_cache@@@@@@YA?AUs_allocation_description_holder@@V?$c_wrapped_array_allocation_description@Us_cached_resource_state@c_tag_resource_address_cache@@@@@Z");
//};

//struct s_allocation_description_holder make_into_description_holder<class c_wrapped_array_allocation_description<struct c_tag_resource_address_cache::s_published_resources_state> >(class c_wrapped_array_allocation_description<struct c_tag_resource_address_cache::s_published_resources_state>)
//{
//    mangled_ppc("??$make_into_description_holder@V?$c_wrapped_array_allocation_description@Us_published_resources_state@c_tag_resource_address_cache@@@@@@YA?AUs_allocation_description_holder@@V?$c_wrapped_array_allocation_description@Us_published_resources_state@c_tag_resource_address_cache@@@@@Z");
//};

//struct c_tag_resource_address_cache::s_cached_resource_state * std::_Checked_base<struct c_tag_resource_address_cache::s_cached_resource_state *>(struct c_tag_resource_address_cache::s_cached_resource_state *&)
//{
//    mangled_ppc("??$_Checked_base@PAUs_cached_resource_state@c_tag_resource_address_cache@@@std@@YAPAUs_cached_resource_state@c_tag_resource_address_cache@@AAPAU12@@Z");
//};

//void std::_Fill<struct c_tag_resource_address_cache::s_cached_resource_state *, struct c_tag_resource_address_cache::s_cached_resource_state>(struct c_tag_resource_address_cache::s_cached_resource_state *, struct c_tag_resource_address_cache::s_cached_resource_state *, struct c_tag_resource_address_cache::s_cached_resource_state const &)
//{
//    mangled_ppc("??$_Fill@PAUs_cached_resource_state@c_tag_resource_address_cache@@U12@@std@@YAXPAUs_cached_resource_state@c_tag_resource_address_cache@@0ABU12@@Z");
//};

//unsigned long get_total_unaligned_raw_size<struct c_tag_resource_address_cache::s_cached_resource_state>(long)
//{
//    mangled_ppc("??$get_total_unaligned_raw_size@Us_cached_resource_state@c_tag_resource_address_cache@@@@YAKJ@Z");
//};

//public: void c_raw_storage_buffer_iterator::set_wrapped_array<class c_wrapped_array, struct c_tag_resource_address_cache::s_cached_resource_state>(class c_wrapped_array<struct c_tag_resource_address_cache::s_cached_resource_state> &, long)
//{
//    mangled_ppc("??$set_wrapped_array@Vc_wrapped_array@@Us_cached_resource_state@c_tag_resource_address_cache@@@c_raw_storage_buffer_iterator@@QAAXAAV?$c_wrapped_array@Us_cached_resource_state@c_tag_resource_address_cache@@@@J@Z");
//};

//unsigned long get_total_unaligned_raw_size<struct c_tag_resource_address_cache::s_published_resources_state>(long)
//{
//    mangled_ppc("??$get_total_unaligned_raw_size@Us_published_resources_state@c_tag_resource_address_cache@@@@YAKJ@Z");
//};

//public: void c_raw_storage_buffer_iterator::set_wrapped_array<class c_wrapped_array, struct c_tag_resource_address_cache::s_published_resources_state>(class c_wrapped_array<struct c_tag_resource_address_cache::s_published_resources_state> &, long)
//{
//    mangled_ppc("??$set_wrapped_array@Vc_wrapped_array@@Us_published_resources_state@c_tag_resource_address_cache@@@c_raw_storage_buffer_iterator@@QAAXAAV?$c_wrapped_array@Us_published_resources_state@c_tag_resource_address_cache@@@@J@Z");
//};

//struct c_tag_resource_address_cache::s_cached_resource_state * std::_Checked_base<struct c_tag_resource_address_cache::s_cached_resource_state *>(struct c_tag_resource_address_cache::s_cached_resource_state *&, struct std::_Unchanged_checked_iterator_base_type_tag)
//{
//    mangled_ppc("??$_Checked_base@PAUs_cached_resource_state@c_tag_resource_address_cache@@@std@@YAPAUs_cached_resource_state@c_tag_resource_address_cache@@AAPAU12@U_Unchanged_checked_iterator_base_type_tag@0@@Z");
//};

//void std::_Debug_range<struct c_tag_resource_address_cache::s_cached_resource_state *>(struct c_tag_resource_address_cache::s_cached_resource_state *, struct c_tag_resource_address_cache::s_cached_resource_state *, wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_range@PAUs_cached_resource_state@c_tag_resource_address_cache@@@std@@YAXPAUs_cached_resource_state@c_tag_resource_address_cache@@0PB_WI@Z");
//};

//public: struct c_tag_resource_address_cache::s_cached_resource_state * c_raw_storage_buffer_iterator::get_array_elements<struct c_tag_resource_address_cache::s_cached_resource_state>(long)
//{
//    mangled_ppc("??$get_array_elements@Us_cached_resource_state@c_tag_resource_address_cache@@@c_raw_storage_buffer_iterator@@QAAPAUs_cached_resource_state@c_tag_resource_address_cache@@J@Z");
//};

//public: struct c_tag_resource_address_cache::s_published_resources_state * c_raw_storage_buffer_iterator::get_array_elements<struct c_tag_resource_address_cache::s_published_resources_state>(long)
//{
//    mangled_ppc("??$get_array_elements@Us_published_resources_state@c_tag_resource_address_cache@@@c_raw_storage_buffer_iterator@@QAAPAUs_published_resources_state@c_tag_resource_address_cache@@J@Z");
//};

//struct std::random_access_iterator_tag std::_Iter_cat<struct c_tag_resource_address_cache::s_cached_resource_state *>(struct c_tag_resource_address_cache::s_cached_resource_state *const &)
//{
//    mangled_ppc("??$_Iter_cat@PAUs_cached_resource_state@c_tag_resource_address_cache@@@std@@YA?AUrandom_access_iterator_tag@0@ABQAUs_cached_resource_state@c_tag_resource_address_cache@@@Z");
//};

//void std::_Debug_range2<struct c_tag_resource_address_cache::s_cached_resource_state *>(struct c_tag_resource_address_cache::s_cached_resource_state *, struct c_tag_resource_address_cache::s_cached_resource_state *, wchar_t const *, unsigned int, struct std::random_access_iterator_tag)
//{
//    mangled_ppc("??$_Debug_range2@PAUs_cached_resource_state@c_tag_resource_address_cache@@@std@@YAXPAUs_cached_resource_state@c_tag_resource_address_cache@@0PB_WIUrandom_access_iterator_tag@0@@Z");
//};

//void std::_Debug_pointer<struct c_tag_resource_address_cache::s_cached_resource_state>(struct c_tag_resource_address_cache::s_cached_resource_state *, wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_pointer@Us_cached_resource_state@c_tag_resource_address_cache@@@std@@YAXPAUs_cached_resource_state@c_tag_resource_address_cache@@PB_WI@Z");
//};

