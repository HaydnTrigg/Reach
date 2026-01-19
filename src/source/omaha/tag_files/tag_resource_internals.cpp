/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const *const const c_byte_swap_traits<struct s_tag_resource_fixup_location>::g_bs_codes_internal; // "?g_bs_codes_internal@?$c_byte_swap_traits@Us_tag_resource_fixup_location@@@@2QBJB"
// public: static struct byte_swap_definition c_byte_swap_traits<struct s_tag_resource_fixup_location>::g_bs_definition_internal; // "?g_bs_definition_internal@?$c_byte_swap_traits@Us_tag_resource_fixup_location@@@@2Ubyte_swap_definition@@A"
// public: static struct byte_swap_definition *c_byte_swap_traits<struct s_tag_resource_fixup_location>::g_bs_definition; // "?g_bs_definition@?$c_byte_swap_traits@Us_tag_resource_fixup_location@@@@2PAUbyte_swap_definition@@A"

// unsigned long get_value_from_fixup(class c_tag_resource_fixup, class c_basic_buffer<void>, class c_basic_buffer<void> *, class c_basic_buffer<void> *);
// public: unsigned long c_tag_resource_fixup::get_fixup_value(void) const;
// public: enum e_tag_resource_fixup_type c_tag_resource_fixup::get_type(void) const;
// void * get_address_from_fixup(class c_tag_resource_fixup, class c_basic_buffer<void>, class c_basic_buffer<void> *, class c_basic_buffer<void> *);
// void tag_resource_fixup_data_references(class c_basic_buffer<void>, class c_basic_buffer<void>, class c_basic_buffer<void> *, class c_basic_buffer<void> *, class c_wrapped_array<struct s_tag_resource_fixup_location const>);
// void tag_resource_fixup_cache_data_references(struct s_tag_resource_fixup_setup *, class c_basic_buffer<void> *);
// class c_tag_resource_fixup get_fixup_from_address(void const *, class c_basic_buffer<void const>, class c_basic_buffer<void const>, class c_basic_buffer<void const>);
// public: c_tag_resource_fixup::c_tag_resource_fixup(void);
// public: void c_tag_resource_fixup::set_fixup_value(unsigned long);
// public: void c_tag_resource_fixup::set_type(enum e_tag_resource_fixup_type);
// void tag_resource_tear_down_data_references(class c_basic_buffer<void>, class c_wrapped_array<struct s_tag_resource_fixup_location const>);
// void tag_resource_tear_down_cache_data_references(struct s_tag_resource_fixup_setup const *);
// bool tag_resource_not_empty(struct s_tag_resource const *);
// void tag_resource_fixup_interops(struct s_tag_resource_interop_fixup_setup *);
// public: c_tag_resource_fixup_aligned_allocator::c_tag_resource_fixup_aligned_allocator(class c_basic_buffer<void>);
// public: virtual void * c_tag_resource_fixup_aligned_allocator::allocate(unsigned long, unsigned long);
// public: virtual void c_tag_resource_fixup_aligned_allocator::deallocate(void *, unsigned long);
// public: c_aligned_allocator::c_aligned_allocator(void);
// public: c_tag_resource_interop_verifier::c_tag_resource_interop_verifier(class c_basic_buffer<void>, class c_basic_buffer<void>, class c_basic_buffer<void>);
// public: virtual bool c_tag_resource_interop_verifier::valid_buffer(class c_basic_buffer<void const>);
// public: c_tag_interop_verifier::c_tag_interop_verifier(void);
// void tag_resource_teardown_interops(struct s_tag_resource_interop_fixup_setup *);
// void tag_resource_verify_not_locked(struct s_tag_resource_interop_fixup_setup *);
// public: void c_tag_resource_scaffold::rebuild_resource(void *, struct s_tag_resource_definition const *);
// private: void c_tag_resource_scaffold::tag_struct_rebuild(void *, struct s_tag_struct_definition const *);
// private: void c_tag_resource_scaffold::tag_block_rebuild(struct s_tag_block *, struct s_tag_block_definition const *);
// private: void c_tag_resource_scaffold::tag_interop_rebuild(struct s_tag_interop *, struct s_tag_interop_definition const *);
// public: void c_tag_resource_scaffold::teardown_resource(void *, struct s_tag_resource_definition const *);
// private: void c_tag_resource_scaffold::tag_struct_teardown(void *, struct s_tag_struct_definition const *);
// private: void c_tag_resource_scaffold::tag_block_teardown(struct s_tag_block *, struct s_tag_block_definition const *);
// private: void c_tag_resource_scaffold::tag_interop_teardown(struct s_tag_interop *, struct s_tag_interop_definition const *);
// void tag_resource_rebuild(struct s_tag_resource_interop_rebuild_setup const *, void *, class c_basic_buffer<void>, bool, struct s_tag_resource_definition const *);
// public: c_tag_resource_scaffold::c_tag_resource_scaffold(struct s_tag_resource_interop_rebuild_setup const *, class c_basic_buffer<void>, bool);
// void tag_resource_teardown(void *, class c_basic_buffer<void>, bool, struct s_tag_resource_definition const *);
// public: c_tag_resource_scaffold::c_tag_resource_scaffold(class c_basic_buffer<void>, bool, enum e_disallow_allocations);
// public: c_tag_resource_fixup_aligned_allocator::c_tag_resource_fixup_aligned_allocator(class c_basic_buffer<void>, enum e_disallow_allocations);
// void * tag_resource_fixup_for_query(class c_basic_buffer<void>, class c_wrapped_array<struct s_tag_resource_fixup_location const>, class c_tag_resource_fixup, struct s_tag_resource_definition const *);
// void tag_resource_teardown_from_query(class c_basic_buffer<void>, class c_wrapped_array<struct s_tag_resource_fixup_location const>, class c_tag_resource_fixup, struct s_tag_resource_definition const *);
// void tag_resource_invalidate_persisted_references(class c_basic_buffer<void>, class c_wrapped_array<struct s_tag_resource_fixup_location const>, class c_tag_resource_fixup, struct s_tag_resource_definition const *);
// public: c_tag_resource_scaffold::c_tag_resource_scaffold(enum e_purge_persisted_references);
// void * tag_resource_fixup_for_byteswap(class c_basic_buffer<void>, class c_wrapped_array<struct s_tag_resource_fixup_location const>, class c_tag_resource_fixup, struct s_tag_resource_definition const *);
// void tag_resource_teardown_from_byteswap(class c_basic_buffer<void>, class c_wrapped_array<struct s_tag_resource_fixup_location const>, class c_tag_resource_fixup, struct s_tag_resource_definition const *);
// void tag_struct_byteswap(void *, long, struct s_tag_struct_definition const *, class c_basic_buffer<void const>, bool);
// void tag_resource_byteswap(void *, struct s_tag_resource_definition const *, class c_basic_buffer<void const>, bool);
// void tag_resource_byteswap_control_data(class c_basic_buffer<void>, class c_wrapped_array<struct s_tag_resource_fixup_location const>, class c_tag_resource_fixup, struct s_tag_resource_definition const *, bool);
// void tag_resource_verify_not_locked_for_tags_build(void *, struct s_tag_resource_definition const *);
// public: c_interop_lock_checker::c_interop_lock_checker(void);
// public: virtual void c_interop_lock_checker::initialize_tag_scanner(class c_tag_field_scanner *);
// public: virtual bool c_interop_lock_checker::visit_field(struct s_tag_field const *, class c_basic_buffer<void> &);
// public: void * c_basic_buffer<void>::end(void) const;
// public: c_basic_buffer<void const>::c_basic_buffer<void const>(void const *, unsigned long);
// public: void const * c_basic_buffer<void const>::begin(void) const;
// public: void const * c_basic_buffer<void const>::end(void) const;
// public: bool c_basic_buffer<void const>::empty(void) const;
// public: void c_long_designator<3, 0>::set_raw_designator(long);
// public: long c_long_designator<3, 0>::get_primary_index(void) const;
// public: long c_long_designator<3, 0>::get_secondary_index(void) const;
// public: void c_long_designator<3, 0>::set_primary_index(long);
// public: void c_long_designator<3, 0>::set_secondary_index(long);
// public: long c_wrapped_array_no_init<struct s_tag_resource_fixup_location const>::count(void) const;
// public: struct s_tag_resource_fixup_location const & c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_resource_fixup_location const>, struct s_tag_resource_fixup_location const>::operator[](long);
// public: long c_wrapped_array_no_init<struct s_tag_resource_interop_location const>::count(void) const;
// public: struct s_tag_resource_interop_location const * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_resource_interop_location const>, struct s_tag_resource_interop_location const>::get_element(long);
// private: long c_long_designator<3, 0>::get_secondary_index_internal(void) const;
// private: bool c_long_designator<3, 0>::get_flag_internal(void) const;
// private: void c_long_designator<3, 0>::set_designator_internal(long, long, bool);
// public: struct s_tag_resource_fixup_location const * c_wrapped_array_no_init<struct s_tag_resource_fixup_location const>::begin(void);
// public: bool c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_resource_fixup_location const>, struct s_tag_resource_fixup_location const>::valid_index(long) const;
// public: class c_wrapped_array_no_init<struct s_tag_resource_fixup_location const> * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_resource_fixup_location const> >::get_super_class(void);
// public: struct s_tag_resource_interop_location const * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_resource_interop_location const>, struct s_tag_resource_interop_location const>::begin(void);
// public: bool c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_resource_interop_location const>, struct s_tag_resource_interop_location const>::valid_index(long) const;
// public: long c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_resource_fixup_location const>, struct s_tag_resource_fixup_location const>::count(void) const;
// public: struct s_tag_resource_interop_location const * c_wrapped_array_no_init<struct s_tag_resource_interop_location const>::begin(void);
// public: long c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_resource_interop_location const>, struct s_tag_resource_interop_location const>::count(void) const;
// public: class c_wrapped_array_no_init<struct s_tag_resource_interop_location const> * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_resource_interop_location const> >::get_super_class(void);
// public: class c_wrapped_array_no_init<struct s_tag_resource_fixup_location const> const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_resource_fixup_location const> >::get_super_class(void) const;
// public: class c_wrapped_array_no_init<struct s_tag_resource_interop_location const> const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_resource_interop_location const> >::get_super_class(void) const;
// public: unsigned long * c_basic_buffer<void>::get_as_type_from_offset<unsigned long>(unsigned long);
// public: c_wrapped_array<struct s_tag_resource_fixup_location const>::ctor<struct s_tag_resource_fixup_location const>(class c_wrapped_array<struct s_tag_resource_fixup_location const> &);
// public: c_basic_buffer<void const>::ctor<void>(class c_basic_buffer<void> const &);
// public: void c_wrapped_array_no_init<struct s_tag_resource_fixup_location const>::set_elements(struct s_tag_resource_fixup_location const *, long);
// public: struct s_tag_resource_fixup_location const * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_resource_fixup_location const>, struct s_tag_resource_fixup_location const>::get_elements(void);
// public: struct s_tag_resource_fixup_location const * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_resource_fixup_location const>, struct s_tag_resource_fixup_location const>::begin(void);
// public: static struct byte_swap_definition * c_byte_swap_traits<struct s_tag_resource_fixup_location>::get_bs_definition(void);

//unsigned long get_value_from_fixup(class c_tag_resource_fixup, class c_basic_buffer<void>, class c_basic_buffer<void> *, class c_basic_buffer<void> *)
//{
//    mangled_ppc("?get_value_from_fixup@@YAKVc_tag_resource_fixup@@V?$c_basic_buffer@X@@PAV2@2@Z");
//};

//public: unsigned long c_tag_resource_fixup::get_fixup_value(void) const
//{
//    mangled_ppc("?get_fixup_value@c_tag_resource_fixup@@QBAKXZ");
//};

//public: enum e_tag_resource_fixup_type c_tag_resource_fixup::get_type(void) const
//{
//    mangled_ppc("?get_type@c_tag_resource_fixup@@QBA?AW4e_tag_resource_fixup_type@@XZ");
//};

//void * get_address_from_fixup(class c_tag_resource_fixup, class c_basic_buffer<void>, class c_basic_buffer<void> *, class c_basic_buffer<void> *)
//{
//    mangled_ppc("?get_address_from_fixup@@YAPAXVc_tag_resource_fixup@@V?$c_basic_buffer@X@@PAV2@2@Z");
//};

//void tag_resource_fixup_data_references(class c_basic_buffer<void>, class c_basic_buffer<void>, class c_basic_buffer<void> *, class c_basic_buffer<void> *, class c_wrapped_array<struct s_tag_resource_fixup_location const>)
//{
//    mangled_ppc("?tag_resource_fixup_data_references@@YAXV?$c_basic_buffer@X@@0PAV1@1V?$c_wrapped_array@$$CBUs_tag_resource_fixup_location@@@@@Z");
//};

//void tag_resource_fixup_cache_data_references(struct s_tag_resource_fixup_setup *, class c_basic_buffer<void> *)
//{
//    mangled_ppc("?tag_resource_fixup_cache_data_references@@YAXPAUs_tag_resource_fixup_setup@@PAV?$c_basic_buffer@X@@@Z");
//};

//class c_tag_resource_fixup get_fixup_from_address(void const *, class c_basic_buffer<void const>, class c_basic_buffer<void const>, class c_basic_buffer<void const>)
//{
//    mangled_ppc("?get_fixup_from_address@@YA?AVc_tag_resource_fixup@@PBXV?$c_basic_buffer@$$CBX@@11@Z");
//};

//public: c_tag_resource_fixup::c_tag_resource_fixup(void)
//{
//    mangled_ppc("??0c_tag_resource_fixup@@QAA@XZ");
//};

//public: void c_tag_resource_fixup::set_fixup_value(unsigned long)
//{
//    mangled_ppc("?set_fixup_value@c_tag_resource_fixup@@QAAXK@Z");
//};

//public: void c_tag_resource_fixup::set_type(enum e_tag_resource_fixup_type)
//{
//    mangled_ppc("?set_type@c_tag_resource_fixup@@QAAXW4e_tag_resource_fixup_type@@@Z");
//};

//void tag_resource_tear_down_data_references(class c_basic_buffer<void>, class c_wrapped_array<struct s_tag_resource_fixup_location const>)
//{
//    mangled_ppc("?tag_resource_tear_down_data_references@@YAXV?$c_basic_buffer@X@@V?$c_wrapped_array@$$CBUs_tag_resource_fixup_location@@@@@Z");
//};

//void tag_resource_tear_down_cache_data_references(struct s_tag_resource_fixup_setup const *)
//{
//    mangled_ppc("?tag_resource_tear_down_cache_data_references@@YAXPBUs_tag_resource_fixup_setup@@@Z");
//};

//bool tag_resource_not_empty(struct s_tag_resource const *)
//{
//    mangled_ppc("?tag_resource_not_empty@@YA_NPBUs_tag_resource@@@Z");
//};

//void tag_resource_fixup_interops(struct s_tag_resource_interop_fixup_setup *)
//{
//    mangled_ppc("?tag_resource_fixup_interops@@YAXPAUs_tag_resource_interop_fixup_setup@@@Z");
//};

//public: c_tag_resource_fixup_aligned_allocator::c_tag_resource_fixup_aligned_allocator(class c_basic_buffer<void>)
//{
//    mangled_ppc("??0c_tag_resource_fixup_aligned_allocator@@QAA@V?$c_basic_buffer@X@@@Z");
//};

//public: virtual void * c_tag_resource_fixup_aligned_allocator::allocate(unsigned long, unsigned long)
//{
//    mangled_ppc("?allocate@c_tag_resource_fixup_aligned_allocator@@UAAPAXKK@Z");
//};

//public: virtual void c_tag_resource_fixup_aligned_allocator::deallocate(void *, unsigned long)
//{
//    mangled_ppc("?deallocate@c_tag_resource_fixup_aligned_allocator@@UAAXPAXK@Z");
//};

//public: c_aligned_allocator::c_aligned_allocator(void)
//{
//    mangled_ppc("??0c_aligned_allocator@@QAA@XZ");
//};

//public: c_tag_resource_interop_verifier::c_tag_resource_interop_verifier(class c_basic_buffer<void>, class c_basic_buffer<void>, class c_basic_buffer<void>)
//{
//    mangled_ppc("??0c_tag_resource_interop_verifier@@QAA@V?$c_basic_buffer@X@@00@Z");
//};

//public: virtual bool c_tag_resource_interop_verifier::valid_buffer(class c_basic_buffer<void const>)
//{
//    mangled_ppc("?valid_buffer@c_tag_resource_interop_verifier@@UAA_NV?$c_basic_buffer@$$CBX@@@Z");
//};

//public: c_tag_interop_verifier::c_tag_interop_verifier(void)
//{
//    mangled_ppc("??0c_tag_interop_verifier@@QAA@XZ");
//};

//void tag_resource_teardown_interops(struct s_tag_resource_interop_fixup_setup *)
//{
//    mangled_ppc("?tag_resource_teardown_interops@@YAXPAUs_tag_resource_interop_fixup_setup@@@Z");
//};

//void tag_resource_verify_not_locked(struct s_tag_resource_interop_fixup_setup *)
//{
//    mangled_ppc("?tag_resource_verify_not_locked@@YAXPAUs_tag_resource_interop_fixup_setup@@@Z");
//};

//public: void c_tag_resource_scaffold::rebuild_resource(void *, struct s_tag_resource_definition const *)
//{
//    mangled_ppc("?rebuild_resource@c_tag_resource_scaffold@@QAAXPAXPBUs_tag_resource_definition@@@Z");
//};

//private: void c_tag_resource_scaffold::tag_struct_rebuild(void *, struct s_tag_struct_definition const *)
//{
//    mangled_ppc("?tag_struct_rebuild@c_tag_resource_scaffold@@AAAXPAXPBUs_tag_struct_definition@@@Z");
//};

//private: void c_tag_resource_scaffold::tag_block_rebuild(struct s_tag_block *, struct s_tag_block_definition const *)
//{
//    mangled_ppc("?tag_block_rebuild@c_tag_resource_scaffold@@AAAXPAUs_tag_block@@PBUs_tag_block_definition@@@Z");
//};

//private: void c_tag_resource_scaffold::tag_interop_rebuild(struct s_tag_interop *, struct s_tag_interop_definition const *)
//{
//    mangled_ppc("?tag_interop_rebuild@c_tag_resource_scaffold@@AAAXPAUs_tag_interop@@PBUs_tag_interop_definition@@@Z");
//};

//public: void c_tag_resource_scaffold::teardown_resource(void *, struct s_tag_resource_definition const *)
//{
//    mangled_ppc("?teardown_resource@c_tag_resource_scaffold@@QAAXPAXPBUs_tag_resource_definition@@@Z");
//};

//private: void c_tag_resource_scaffold::tag_struct_teardown(void *, struct s_tag_struct_definition const *)
//{
//    mangled_ppc("?tag_struct_teardown@c_tag_resource_scaffold@@AAAXPAXPBUs_tag_struct_definition@@@Z");
//};

//private: void c_tag_resource_scaffold::tag_block_teardown(struct s_tag_block *, struct s_tag_block_definition const *)
//{
//    mangled_ppc("?tag_block_teardown@c_tag_resource_scaffold@@AAAXPAUs_tag_block@@PBUs_tag_block_definition@@@Z");
//};

//private: void c_tag_resource_scaffold::tag_interop_teardown(struct s_tag_interop *, struct s_tag_interop_definition const *)
//{
//    mangled_ppc("?tag_interop_teardown@c_tag_resource_scaffold@@AAAXPAUs_tag_interop@@PBUs_tag_interop_definition@@@Z");
//};

//void tag_resource_rebuild(struct s_tag_resource_interop_rebuild_setup const *, void *, class c_basic_buffer<void>, bool, struct s_tag_resource_definition const *)
//{
//    mangled_ppc("?tag_resource_rebuild@@YAXPBUs_tag_resource_interop_rebuild_setup@@PAXV?$c_basic_buffer@X@@_NPBUs_tag_resource_definition@@@Z");
//};

//public: c_tag_resource_scaffold::c_tag_resource_scaffold(struct s_tag_resource_interop_rebuild_setup const *, class c_basic_buffer<void>, bool)
//{
//    mangled_ppc("??0c_tag_resource_scaffold@@QAA@PBUs_tag_resource_interop_rebuild_setup@@V?$c_basic_buffer@X@@_N@Z");
//};

//void tag_resource_teardown(void *, class c_basic_buffer<void>, bool, struct s_tag_resource_definition const *)
//{
//    mangled_ppc("?tag_resource_teardown@@YAXPAXV?$c_basic_buffer@X@@_NPBUs_tag_resource_definition@@@Z");
//};

//public: c_tag_resource_scaffold::c_tag_resource_scaffold(class c_basic_buffer<void>, bool, enum e_disallow_allocations)
//{
//    mangled_ppc("??0c_tag_resource_scaffold@@QAA@V?$c_basic_buffer@X@@_NW4e_disallow_allocations@@@Z");
//};

//public: c_tag_resource_fixup_aligned_allocator::c_tag_resource_fixup_aligned_allocator(class c_basic_buffer<void>, enum e_disallow_allocations)
//{
//    mangled_ppc("??0c_tag_resource_fixup_aligned_allocator@@QAA@V?$c_basic_buffer@X@@W4e_disallow_allocations@@@Z");
//};

//void * tag_resource_fixup_for_query(class c_basic_buffer<void>, class c_wrapped_array<struct s_tag_resource_fixup_location const>, class c_tag_resource_fixup, struct s_tag_resource_definition const *)
//{
//    mangled_ppc("?tag_resource_fixup_for_query@@YAPAXV?$c_basic_buffer@X@@V?$c_wrapped_array@$$CBUs_tag_resource_fixup_location@@@@Vc_tag_resource_fixup@@PBUs_tag_resource_definition@@@Z");
//};

//void tag_resource_teardown_from_query(class c_basic_buffer<void>, class c_wrapped_array<struct s_tag_resource_fixup_location const>, class c_tag_resource_fixup, struct s_tag_resource_definition const *)
//{
//    mangled_ppc("?tag_resource_teardown_from_query@@YAXV?$c_basic_buffer@X@@V?$c_wrapped_array@$$CBUs_tag_resource_fixup_location@@@@Vc_tag_resource_fixup@@PBUs_tag_resource_definition@@@Z");
//};

//void tag_resource_invalidate_persisted_references(class c_basic_buffer<void>, class c_wrapped_array<struct s_tag_resource_fixup_location const>, class c_tag_resource_fixup, struct s_tag_resource_definition const *)
//{
//    mangled_ppc("?tag_resource_invalidate_persisted_references@@YAXV?$c_basic_buffer@X@@V?$c_wrapped_array@$$CBUs_tag_resource_fixup_location@@@@Vc_tag_resource_fixup@@PBUs_tag_resource_definition@@@Z");
//};

//public: c_tag_resource_scaffold::c_tag_resource_scaffold(enum e_purge_persisted_references)
//{
//    mangled_ppc("??0c_tag_resource_scaffold@@QAA@W4e_purge_persisted_references@@@Z");
//};

//void * tag_resource_fixup_for_byteswap(class c_basic_buffer<void>, class c_wrapped_array<struct s_tag_resource_fixup_location const>, class c_tag_resource_fixup, struct s_tag_resource_definition const *)
//{
//    mangled_ppc("?tag_resource_fixup_for_byteswap@@YAPAXV?$c_basic_buffer@X@@V?$c_wrapped_array@$$CBUs_tag_resource_fixup_location@@@@Vc_tag_resource_fixup@@PBUs_tag_resource_definition@@@Z");
//};

//void tag_resource_teardown_from_byteswap(class c_basic_buffer<void>, class c_wrapped_array<struct s_tag_resource_fixup_location const>, class c_tag_resource_fixup, struct s_tag_resource_definition const *)
//{
//    mangled_ppc("?tag_resource_teardown_from_byteswap@@YAXV?$c_basic_buffer@X@@V?$c_wrapped_array@$$CBUs_tag_resource_fixup_location@@@@Vc_tag_resource_fixup@@PBUs_tag_resource_definition@@@Z");
//};

//void tag_struct_byteswap(void *, long, struct s_tag_struct_definition const *, class c_basic_buffer<void const>, bool)
//{
//    mangled_ppc("?tag_struct_byteswap@@YAXPAXJPBUs_tag_struct_definition@@V?$c_basic_buffer@$$CBX@@_N@Z");
//};

//void tag_resource_byteswap(void *, struct s_tag_resource_definition const *, class c_basic_buffer<void const>, bool)
//{
//    mangled_ppc("?tag_resource_byteswap@@YAXPAXPBUs_tag_resource_definition@@V?$c_basic_buffer@$$CBX@@_N@Z");
//};

//void tag_resource_byteswap_control_data(class c_basic_buffer<void>, class c_wrapped_array<struct s_tag_resource_fixup_location const>, class c_tag_resource_fixup, struct s_tag_resource_definition const *, bool)
//{
//    mangled_ppc("?tag_resource_byteswap_control_data@@YAXV?$c_basic_buffer@X@@V?$c_wrapped_array@$$CBUs_tag_resource_fixup_location@@@@Vc_tag_resource_fixup@@PBUs_tag_resource_definition@@_N@Z");
//};

//void tag_resource_verify_not_locked_for_tags_build(void *, struct s_tag_resource_definition const *)
//{
//    mangled_ppc("?tag_resource_verify_not_locked_for_tags_build@@YAXPAXPBUs_tag_resource_definition@@@Z");
//};

//public: c_interop_lock_checker::c_interop_lock_checker(void)
//{
//    mangled_ppc("??0c_interop_lock_checker@@QAA@XZ");
//};

//public: virtual void c_interop_lock_checker::initialize_tag_scanner(class c_tag_field_scanner *)
//{
//    mangled_ppc("?initialize_tag_scanner@c_interop_lock_checker@@UAAXPAVc_tag_field_scanner@@@Z");
//};

//public: virtual bool c_interop_lock_checker::visit_field(struct s_tag_field const *, class c_basic_buffer<void> &)
//{
//    mangled_ppc("?visit_field@c_interop_lock_checker@@UAA_NPBUs_tag_field@@AAV?$c_basic_buffer@X@@@Z");
//};

//public: void * c_basic_buffer<void>::end(void) const
//{
//    mangled_ppc("?end@?$c_basic_buffer@X@@QBAPAXXZ");
//};

//public: c_basic_buffer<void const>::c_basic_buffer<void const>(void const *, unsigned long)
//{
//    mangled_ppc("??0?$c_basic_buffer@$$CBX@@QAA@PBXK@Z");
//};

//public: void const * c_basic_buffer<void const>::begin(void) const
//{
//    mangled_ppc("?begin@?$c_basic_buffer@$$CBX@@QBAPBXXZ");
//};

//public: void const * c_basic_buffer<void const>::end(void) const
//{
//    mangled_ppc("?end@?$c_basic_buffer@$$CBX@@QBAPBXXZ");
//};

//public: bool c_basic_buffer<void const>::empty(void) const
//{
//    mangled_ppc("?empty@?$c_basic_buffer@$$CBX@@QBA_NXZ");
//};

//public: void c_long_designator<3, 0>::set_raw_designator(long)
//{
//    mangled_ppc("?set_raw_designator@?$c_long_designator@$02$0A@@@QAAXJ@Z");
//};

//public: long c_long_designator<3, 0>::get_primary_index(void) const
//{
//    mangled_ppc("?get_primary_index@?$c_long_designator@$02$0A@@@QBAJXZ");
//};

//public: long c_long_designator<3, 0>::get_secondary_index(void) const
//{
//    mangled_ppc("?get_secondary_index@?$c_long_designator@$02$0A@@@QBAJXZ");
//};

//public: void c_long_designator<3, 0>::set_primary_index(long)
//{
//    mangled_ppc("?set_primary_index@?$c_long_designator@$02$0A@@@QAAXJ@Z");
//};

//public: void c_long_designator<3, 0>::set_secondary_index(long)
//{
//    mangled_ppc("?set_secondary_index@?$c_long_designator@$02$0A@@@QAAXJ@Z");
//};

//public: long c_wrapped_array_no_init<struct s_tag_resource_fixup_location const>::count(void) const
//{
//    mangled_ppc("?count@?$c_wrapped_array_no_init@$$CBUs_tag_resource_fixup_location@@@@QBAJXZ");
//};

//public: struct s_tag_resource_fixup_location const & c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_resource_fixup_location const>, struct s_tag_resource_fixup_location const>::operator[](long)
//{
//    mangled_ppc("??A?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CBUs_tag_resource_fixup_location@@@@$$CBUs_tag_resource_fixup_location@@@@QAAABUs_tag_resource_fixup_location@@J@Z");
//};

//public: long c_wrapped_array_no_init<struct s_tag_resource_interop_location const>::count(void) const
//{
//    mangled_ppc("?count@?$c_wrapped_array_no_init@$$CBUs_tag_resource_interop_location@@@@QBAJXZ");
//};

//public: struct s_tag_resource_interop_location const * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_resource_interop_location const>, struct s_tag_resource_interop_location const>::get_element(long)
//{
//    mangled_ppc("?get_element@?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CBUs_tag_resource_interop_location@@@@$$CBUs_tag_resource_interop_location@@@@QAAPBUs_tag_resource_interop_location@@J@Z");
//};

//private: long c_long_designator<3, 0>::get_secondary_index_internal(void) const
//{
//    mangled_ppc("?get_secondary_index_internal@?$c_long_designator@$02$0A@@@ABAJXZ");
//};

//private: bool c_long_designator<3, 0>::get_flag_internal(void) const
//{
//    mangled_ppc("?get_flag_internal@?$c_long_designator@$02$0A@@@ABA_NXZ");
//};

//private: void c_long_designator<3, 0>::set_designator_internal(long, long, bool)
//{
//    mangled_ppc("?set_designator_internal@?$c_long_designator@$02$0A@@@AAAXJJ_N@Z");
//};

//public: struct s_tag_resource_fixup_location const * c_wrapped_array_no_init<struct s_tag_resource_fixup_location const>::begin(void)
//{
//    mangled_ppc("?begin@?$c_wrapped_array_no_init@$$CBUs_tag_resource_fixup_location@@@@QAAPBUs_tag_resource_fixup_location@@XZ");
//};

//public: bool c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_resource_fixup_location const>, struct s_tag_resource_fixup_location const>::valid_index(long) const
//{
//    mangled_ppc("?valid_index@?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CBUs_tag_resource_fixup_location@@@@$$CBUs_tag_resource_fixup_location@@@@QBA_NJ@Z");
//};

//public: class c_wrapped_array_no_init<struct s_tag_resource_fixup_location const> * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_resource_fixup_location const> >::get_super_class(void)
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@$$CBUs_tag_resource_fixup_location@@@@@@QAAPAV?$c_wrapped_array_no_init@$$CBUs_tag_resource_fixup_location@@@@XZ");
//};

//public: struct s_tag_resource_interop_location const * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_resource_interop_location const>, struct s_tag_resource_interop_location const>::begin(void)
//{
//    mangled_ppc("?begin@?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CBUs_tag_resource_interop_location@@@@$$CBUs_tag_resource_interop_location@@@@QAAPBUs_tag_resource_interop_location@@XZ");
//};

//public: bool c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_resource_interop_location const>, struct s_tag_resource_interop_location const>::valid_index(long) const
//{
//    mangled_ppc("?valid_index@?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CBUs_tag_resource_interop_location@@@@$$CBUs_tag_resource_interop_location@@@@QBA_NJ@Z");
//};

//public: long c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_resource_fixup_location const>, struct s_tag_resource_fixup_location const>::count(void) const
//{
//    mangled_ppc("?count@?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CBUs_tag_resource_fixup_location@@@@$$CBUs_tag_resource_fixup_location@@@@QBAJXZ");
//};

//public: struct s_tag_resource_interop_location const * c_wrapped_array_no_init<struct s_tag_resource_interop_location const>::begin(void)
//{
//    mangled_ppc("?begin@?$c_wrapped_array_no_init@$$CBUs_tag_resource_interop_location@@@@QAAPBUs_tag_resource_interop_location@@XZ");
//};

//public: long c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_resource_interop_location const>, struct s_tag_resource_interop_location const>::count(void) const
//{
//    mangled_ppc("?count@?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CBUs_tag_resource_interop_location@@@@$$CBUs_tag_resource_interop_location@@@@QBAJXZ");
//};

//public: class c_wrapped_array_no_init<struct s_tag_resource_interop_location const> * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_resource_interop_location const> >::get_super_class(void)
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@$$CBUs_tag_resource_interop_location@@@@@@QAAPAV?$c_wrapped_array_no_init@$$CBUs_tag_resource_interop_location@@@@XZ");
//};

//public: class c_wrapped_array_no_init<struct s_tag_resource_fixup_location const> const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_resource_fixup_location const> >::get_super_class(void) const
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@$$CBUs_tag_resource_fixup_location@@@@@@QBAPBV?$c_wrapped_array_no_init@$$CBUs_tag_resource_fixup_location@@@@XZ");
//};

//public: class c_wrapped_array_no_init<struct s_tag_resource_interop_location const> const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_resource_interop_location const> >::get_super_class(void) const
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@$$CBUs_tag_resource_interop_location@@@@@@QBAPBV?$c_wrapped_array_no_init@$$CBUs_tag_resource_interop_location@@@@XZ");
//};

//public: unsigned long * c_basic_buffer<void>::get_as_type_from_offset<unsigned long>(unsigned long)
//{
//    mangled_ppc("??$get_as_type_from_offset@K@?$c_basic_buffer@X@@QAAPAKK@Z");
//};

//public: c_wrapped_array<struct s_tag_resource_fixup_location const>::ctor<struct s_tag_resource_fixup_location const>(class c_wrapped_array<struct s_tag_resource_fixup_location const> &)
//{
//    mangled_ppc("??$?0$$CBUs_tag_resource_fixup_location@@@?$c_wrapped_array@$$CBUs_tag_resource_fixup_location@@@@QAA@AAV0@@Z");
//};

//public: c_basic_buffer<void const>::ctor<void>(class c_basic_buffer<void> const &)
//{
//    mangled_ppc("??$?0X@?$c_basic_buffer@$$CBX@@QAA@ABV?$c_basic_buffer@X@@@Z");
//};

//public: void c_wrapped_array_no_init<struct s_tag_resource_fixup_location const>::set_elements(struct s_tag_resource_fixup_location const *, long)
//{
//    mangled_ppc("?set_elements@?$c_wrapped_array_no_init@$$CBUs_tag_resource_fixup_location@@@@QAAXPBUs_tag_resource_fixup_location@@J@Z");
//};

//public: struct s_tag_resource_fixup_location const * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_resource_fixup_location const>, struct s_tag_resource_fixup_location const>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CBUs_tag_resource_fixup_location@@@@$$CBUs_tag_resource_fixup_location@@@@QAAPBUs_tag_resource_fixup_location@@XZ");
//};

//public: struct s_tag_resource_fixup_location const * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_resource_fixup_location const>, struct s_tag_resource_fixup_location const>::begin(void)
//{
//    mangled_ppc("?begin@?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CBUs_tag_resource_fixup_location@@@@$$CBUs_tag_resource_fixup_location@@@@QAAPBUs_tag_resource_fixup_location@@XZ");
//};

//public: static struct byte_swap_definition * c_byte_swap_traits<struct s_tag_resource_fixup_location>::get_bs_definition(void)
//{
//    mangled_ppc("?get_bs_definition@?$c_byte_swap_traits@Us_tag_resource_fixup_location@@@@SAPAUbyte_swap_definition@@XZ");
//};

