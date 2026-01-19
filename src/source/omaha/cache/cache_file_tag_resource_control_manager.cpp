/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: void c_cache_file_tag_resource_data_access::initialize(struct s_cache_file_loaded_tags_header const *);
// public: void c_cache_file_tag_resource_data_access::dispose(struct s_cache_file_loaded_tags_header const *);
// public: struct s_cache_file_loaded_tags_header const * c_cache_file_tag_resource_data_access::get_tags_header(void) const;
// public: struct s_cache_file_resource_gestalt const * c_cache_file_tag_resource_data_access::get_gestalt(void) const;
// public: long c_cache_file_tag_resource_data_access::try_to_get_resource_handle_from_absolute_index(long) const;
// public: long c_cache_file_tag_resource_data_access::get_resource_count(void) const;
// public: struct s_cache_file_tag_resource_data const * c_cache_file_tag_resource_data_access::get_resource_data(long) const;
// public: struct s_cache_file_tag_resource_data const * c_cache_file_tag_resource_data_access::try_to_get_resource_data(long) const;
// public: void c_cache_file_tag_resource_data_combined_access::initialize(class c_allocation_interface *, class c_cache_file_tag_resource_handle_remapper const *, long);
// public: void c_cache_file_tag_resource_data_combined_access::dispose(class c_allocation_interface *);
// public: void c_cache_file_tag_resource_data_combined_access::add_cache_file(long, struct s_cache_file_loaded_tags_header const *, class c_output_stream<struct s_cache_file_fixup_remap<long> > *);
// private: void c_cache_file_tag_resource_data_combined_access::dump_resource_handle_fixups(long, struct s_cache_file_loaded_tags_header const *, class c_output_stream<struct s_cache_file_fixup_remap<long> > *) const;
// public: void c_cache_file_tag_resource_data_combined_access::remove_cache_file(long, struct s_cache_file_loaded_tags_header const *);
// public: struct s_cache_file_loaded_tags_header const * c_cache_file_tag_resource_data_combined_access::get_tags_header(long) const;
// public: struct s_cache_file_tag_resource_data const * c_cache_file_tag_resource_data_combined_access::get_resource_data(long) const;
// public: struct s_cache_file_tag_resource_data const * c_cache_file_tag_resource_data_combined_access::try_to_get_resource_data(long) const;
// public: struct s_cache_file_resource_gestalt const * c_cache_file_tag_resource_data_combined_access::get_gestalt(long) const;
// public: long c_cache_file_tag_resource_data_combined_access::get_resource_container_count(void) const;
// public: bool c_cache_file_tag_resource_data_combined_access::verify_resource_and_owner(long, long) const;
// public: void c_cache_file_tag_resource_combined_set::initialize(class c_cache_file_tag_resource_handle_remapper const *);
// public: class c_wrapped_flags c_cache_file_tag_resource_combined_set::get_local_resource_set_mutable(long);
// public: bool c_cache_file_tag_resource_combined_set::test_resource(long) const;
// public: c_const_wrapped_flags::c_const_wrapped_flags(void const *, unsigned long);
// private: unsigned long c_cache_file_tag_resource_combined_set::get_local_resource_set_dword_offset(long) const;
// public: static void c_cache_file_tag_resource_collector::collect_active_resources(class c_cache_file_tag_resource_data_combined_access const *, struct s_scenario_zone_state const *, bool, class c_cache_file_tag_resource_combined_set *, class c_wrapped_flags);
// public: c_cache_file_zone_resource_collector::~c_cache_file_zone_resource_collector(void);
// public: static void c_cache_file_tag_resource_collector::collect_pending_resources(class c_cache_file_tag_resource_data_combined_access const *, struct s_scenario_zone_state const *, bool, class c_cache_file_tag_resource_combined_set *);
// public: static void c_cache_file_tag_resource_collector::mark_available_tags(class c_cache_file_tag_resource_data_combined_access const *, bool, unsigned long, unsigned long, unsigned long, unsigned long, bool, class c_wrapped_flags);
// public: class c_cache_file_tag_resource_data_access const & c_array_operator_interface<class c_wrapped_array_no_init<class c_cache_file_tag_resource_data_access>, class c_cache_file_tag_resource_data_access>::operator[](long) const;
// public: class c_cache_file_tag_resource_data_access * c_array_operator_interface<class c_wrapped_array_no_init<class c_cache_file_tag_resource_data_access>, class c_cache_file_tag_resource_data_access>::get_element(long);
// public: class c_cache_file_tag_resource_data_access const * c_array_operator_interface<class c_wrapped_array_no_init<class c_cache_file_tag_resource_data_access>, class c_cache_file_tag_resource_data_access>::get_element(long) const;
// public: unsigned long const * s_static_array<unsigned long, 1024>::get_elements(void) const;
// public: unsigned long * s_static_array<unsigned long, 1024>::get_elements(void);
// public: c_typed_opaque_data<class c_wrapped_flags, 8, 4>::~c_typed_opaque_data<class c_wrapped_flags, 8, 4>(void);
// public: c_counting_output_stream<struct s_cache_file_fixup_remap<long> >::c_counting_output_stream<struct s_cache_file_fixup_remap<long> >(void);
// public: virtual bool c_counting_output_stream<struct s_cache_file_fixup_remap<long> >::check_capacity(unsigned long);
// public: virtual void c_counting_output_stream<struct s_cache_file_fixup_remap<long> >::write(struct s_cache_file_fixup_remap<long> const &);
// public: unsigned long c_counting_output_stream<struct s_cache_file_fixup_remap<long> >::get_count(void) const;
// public: virtual void c_output_stream<struct s_cache_file_fixup_remap<long> >::ensure_capacity(unsigned long);
// public: c_output_stream<struct s_cache_file_fixup_remap<long> >::c_output_stream<struct s_cache_file_fixup_remap<long> >(void);
// public: class c_cache_file_tag_resource_data_access const * c_wrapped_array_no_init<class c_cache_file_tag_resource_data_access>::begin(void) const;
// public: class c_cache_file_tag_resource_data_access * c_array_operator_interface<class c_wrapped_array_no_init<class c_cache_file_tag_resource_data_access>, class c_cache_file_tag_resource_data_access>::begin(void);
// public: class c_cache_file_tag_resource_data_access const * c_array_operator_interface<class c_wrapped_array_no_init<class c_cache_file_tag_resource_data_access>, class c_cache_file_tag_resource_data_access>::begin(void) const;
// public: bool c_array_operator_interface<class c_wrapped_array_no_init<class c_cache_file_tag_resource_data_access>, class c_cache_file_tag_resource_data_access>::valid_index(long) const;
// public: class c_wrapped_array_no_init<class c_cache_file_tag_resource_data_access> const * c_recursive_template_pattern<class c_wrapped_array_no_init<class c_cache_file_tag_resource_data_access> >::get_super_class(void) const;
// public: void c_typed_opaque_data<class c_wrapped_flags, 8, 4>::destruct(void);
// public: class c_cache_file_tag_resource_data_access * c_wrapped_array_no_init<class c_cache_file_tag_resource_data_access>::begin(void);
// public: long c_array_operator_interface<class c_wrapped_array_no_init<class c_cache_file_tag_resource_data_access>, class c_cache_file_tag_resource_data_access>::count(void) const;
// public: class c_wrapped_array_no_init<class c_cache_file_tag_resource_data_access> * c_recursive_template_pattern<class c_wrapped_array_no_init<class c_cache_file_tag_resource_data_access> >::get_super_class(void);
// public: long c_wrapped_array_no_init<class c_cache_file_tag_resource_data_access>::count(void) const;
// class c_wrapped_array<class c_cache_file_tag_resource_data_access> allocate_tracked_wrapped_array<class c_cache_file_tag_resource_data_access>(class c_allocation_interface *, unsigned long, char const *);
// void free_wrapped_array<class c_cache_file_tag_resource_data_access>(class c_allocation_interface *, class c_wrapped_array<class c_cache_file_tag_resource_data_access> *);
// struct s_cache_file_fixup_remap<long> make_cache_file_fixup<long>(long const &, long const &);
// public: void c_wrapped_array_no_init<class c_cache_file_tag_resource_data_access>::clear(void);
// public: class c_cache_file_tag_resource_data_access * c_wrapped_array_no_init<class c_cache_file_tag_resource_data_access>::end(void);
// public: class c_cache_file_tag_resource_data_access * c_basic_buffer<void>::get_as_type_array<class c_cache_file_tag_resource_data_access>(unsigned long);
// class c_wrapped_array<class c_cache_file_tag_resource_data_access> make_wrapped_array<class c_cache_file_tag_resource_data_access>(class c_cache_file_tag_resource_data_access *, long);
// public: c_wrapped_array<class c_cache_file_tag_resource_data_access>::c_wrapped_array<class c_cache_file_tag_resource_data_access>(class c_cache_file_tag_resource_data_access *, long);

//public: void c_cache_file_tag_resource_data_access::initialize(struct s_cache_file_loaded_tags_header const *)
//{
//    mangled_ppc("?initialize@c_cache_file_tag_resource_data_access@@QAAXPBUs_cache_file_loaded_tags_header@@@Z");
//};

//public: void c_cache_file_tag_resource_data_access::dispose(struct s_cache_file_loaded_tags_header const *)
//{
//    mangled_ppc("?dispose@c_cache_file_tag_resource_data_access@@QAAXPBUs_cache_file_loaded_tags_header@@@Z");
//};

//public: struct s_cache_file_loaded_tags_header const * c_cache_file_tag_resource_data_access::get_tags_header(void) const
//{
//    mangled_ppc("?get_tags_header@c_cache_file_tag_resource_data_access@@QBAPBUs_cache_file_loaded_tags_header@@XZ");
//};

//public: struct s_cache_file_resource_gestalt const * c_cache_file_tag_resource_data_access::get_gestalt(void) const
//{
//    mangled_ppc("?get_gestalt@c_cache_file_tag_resource_data_access@@QBAPBUs_cache_file_resource_gestalt@@XZ");
//};

//public: long c_cache_file_tag_resource_data_access::try_to_get_resource_handle_from_absolute_index(long) const
//{
//    mangled_ppc("?try_to_get_resource_handle_from_absolute_index@c_cache_file_tag_resource_data_access@@QBAJJ@Z");
//};

//public: long c_cache_file_tag_resource_data_access::get_resource_count(void) const
//{
//    mangled_ppc("?get_resource_count@c_cache_file_tag_resource_data_access@@QBAJXZ");
//};

//public: struct s_cache_file_tag_resource_data const * c_cache_file_tag_resource_data_access::get_resource_data(long) const
//{
//    mangled_ppc("?get_resource_data@c_cache_file_tag_resource_data_access@@QBAPBUs_cache_file_tag_resource_data@@J@Z");
//};

//public: struct s_cache_file_tag_resource_data const * c_cache_file_tag_resource_data_access::try_to_get_resource_data(long) const
//{
//    mangled_ppc("?try_to_get_resource_data@c_cache_file_tag_resource_data_access@@QBAPBUs_cache_file_tag_resource_data@@J@Z");
//};

//public: void c_cache_file_tag_resource_data_combined_access::initialize(class c_allocation_interface *, class c_cache_file_tag_resource_handle_remapper const *, long)
//{
//    mangled_ppc("?initialize@c_cache_file_tag_resource_data_combined_access@@QAAXPAVc_allocation_interface@@PBVc_cache_file_tag_resource_handle_remapper@@J@Z");
//};

//public: void c_cache_file_tag_resource_data_combined_access::dispose(class c_allocation_interface *)
//{
//    mangled_ppc("?dispose@c_cache_file_tag_resource_data_combined_access@@QAAXPAVc_allocation_interface@@@Z");
//};

//public: void c_cache_file_tag_resource_data_combined_access::add_cache_file(long, struct s_cache_file_loaded_tags_header const *, class c_output_stream<struct s_cache_file_fixup_remap<long> > *)
//{
//    mangled_ppc("?add_cache_file@c_cache_file_tag_resource_data_combined_access@@QAAXJPBUs_cache_file_loaded_tags_header@@PAV?$c_output_stream@U?$s_cache_file_fixup_remap@J@@@@@Z");
//};

//private: void c_cache_file_tag_resource_data_combined_access::dump_resource_handle_fixups(long, struct s_cache_file_loaded_tags_header const *, class c_output_stream<struct s_cache_file_fixup_remap<long> > *) const
//{
//    mangled_ppc("?dump_resource_handle_fixups@c_cache_file_tag_resource_data_combined_access@@ABAXJPBUs_cache_file_loaded_tags_header@@PAV?$c_output_stream@U?$s_cache_file_fixup_remap@J@@@@@Z");
//};

//public: void c_cache_file_tag_resource_data_combined_access::remove_cache_file(long, struct s_cache_file_loaded_tags_header const *)
//{
//    mangled_ppc("?remove_cache_file@c_cache_file_tag_resource_data_combined_access@@QAAXJPBUs_cache_file_loaded_tags_header@@@Z");
//};

//public: struct s_cache_file_loaded_tags_header const * c_cache_file_tag_resource_data_combined_access::get_tags_header(long) const
//{
//    mangled_ppc("?get_tags_header@c_cache_file_tag_resource_data_combined_access@@QBAPBUs_cache_file_loaded_tags_header@@J@Z");
//};

//public: struct s_cache_file_tag_resource_data const * c_cache_file_tag_resource_data_combined_access::get_resource_data(long) const
//{
//    mangled_ppc("?get_resource_data@c_cache_file_tag_resource_data_combined_access@@QBAPBUs_cache_file_tag_resource_data@@J@Z");
//};

//public: struct s_cache_file_tag_resource_data const * c_cache_file_tag_resource_data_combined_access::try_to_get_resource_data(long) const
//{
//    mangled_ppc("?try_to_get_resource_data@c_cache_file_tag_resource_data_combined_access@@QBAPBUs_cache_file_tag_resource_data@@J@Z");
//};

//public: struct s_cache_file_resource_gestalt const * c_cache_file_tag_resource_data_combined_access::get_gestalt(long) const
//{
//    mangled_ppc("?get_gestalt@c_cache_file_tag_resource_data_combined_access@@QBAPBUs_cache_file_resource_gestalt@@J@Z");
//};

//public: long c_cache_file_tag_resource_data_combined_access::get_resource_container_count(void) const
//{
//    mangled_ppc("?get_resource_container_count@c_cache_file_tag_resource_data_combined_access@@QBAJXZ");
//};

//public: bool c_cache_file_tag_resource_data_combined_access::verify_resource_and_owner(long, long) const
//{
//    mangled_ppc("?verify_resource_and_owner@c_cache_file_tag_resource_data_combined_access@@QBA_NJJ@Z");
//};

//public: void c_cache_file_tag_resource_combined_set::initialize(class c_cache_file_tag_resource_handle_remapper const *)
//{
//    mangled_ppc("?initialize@c_cache_file_tag_resource_combined_set@@QAAXPBVc_cache_file_tag_resource_handle_remapper@@@Z");
//};

//public: class c_wrapped_flags c_cache_file_tag_resource_combined_set::get_local_resource_set_mutable(long)
//{
//    mangled_ppc("?get_local_resource_set_mutable@c_cache_file_tag_resource_combined_set@@QAA?AVc_wrapped_flags@@J@Z");
//};

//public: bool c_cache_file_tag_resource_combined_set::test_resource(long) const
//{
//    mangled_ppc("?test_resource@c_cache_file_tag_resource_combined_set@@QBA_NJ@Z");
//};

//public: c_const_wrapped_flags::c_const_wrapped_flags(void const *, unsigned long)
//{
//    mangled_ppc("??0c_const_wrapped_flags@@QAA@PBXK@Z");
//};

//private: unsigned long c_cache_file_tag_resource_combined_set::get_local_resource_set_dword_offset(long) const
//{
//    mangled_ppc("?get_local_resource_set_dword_offset@c_cache_file_tag_resource_combined_set@@ABAKJ@Z");
//};

//public: static void c_cache_file_tag_resource_collector::collect_active_resources(class c_cache_file_tag_resource_data_combined_access const *, struct s_scenario_zone_state const *, bool, class c_cache_file_tag_resource_combined_set *, class c_wrapped_flags)
//{
//    mangled_ppc("?collect_active_resources@c_cache_file_tag_resource_collector@@SAXPBVc_cache_file_tag_resource_data_combined_access@@PBUs_scenario_zone_state@@_NPAVc_cache_file_tag_resource_combined_set@@Vc_wrapped_flags@@@Z");
//};

//public: c_cache_file_zone_resource_collector::~c_cache_file_zone_resource_collector(void)
//{
//    mangled_ppc("??1c_cache_file_zone_resource_collector@@QAA@XZ");
//};

//public: static void c_cache_file_tag_resource_collector::collect_pending_resources(class c_cache_file_tag_resource_data_combined_access const *, struct s_scenario_zone_state const *, bool, class c_cache_file_tag_resource_combined_set *)
//{
//    mangled_ppc("?collect_pending_resources@c_cache_file_tag_resource_collector@@SAXPBVc_cache_file_tag_resource_data_combined_access@@PBUs_scenario_zone_state@@_NPAVc_cache_file_tag_resource_combined_set@@@Z");
//};

//public: static void c_cache_file_tag_resource_collector::mark_available_tags(class c_cache_file_tag_resource_data_combined_access const *, bool, unsigned long, unsigned long, unsigned long, unsigned long, bool, class c_wrapped_flags)
//{
//    mangled_ppc("?mark_available_tags@c_cache_file_tag_resource_collector@@SAXPBVc_cache_file_tag_resource_data_combined_access@@_NKKKK1Vc_wrapped_flags@@@Z");
//};

//public: class c_cache_file_tag_resource_data_access const & c_array_operator_interface<class c_wrapped_array_no_init<class c_cache_file_tag_resource_data_access>, class c_cache_file_tag_resource_data_access>::operator[](long) const
//{
//    mangled_ppc("??A?$c_array_operator_interface@V?$c_wrapped_array_no_init@Vc_cache_file_tag_resource_data_access@@@@Vc_cache_file_tag_resource_data_access@@@@QBAABVc_cache_file_tag_resource_data_access@@J@Z");
//};

//public: class c_cache_file_tag_resource_data_access * c_array_operator_interface<class c_wrapped_array_no_init<class c_cache_file_tag_resource_data_access>, class c_cache_file_tag_resource_data_access>::get_element(long)
//{
//    mangled_ppc("?get_element@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Vc_cache_file_tag_resource_data_access@@@@Vc_cache_file_tag_resource_data_access@@@@QAAPAVc_cache_file_tag_resource_data_access@@J@Z");
//};

//public: class c_cache_file_tag_resource_data_access const * c_array_operator_interface<class c_wrapped_array_no_init<class c_cache_file_tag_resource_data_access>, class c_cache_file_tag_resource_data_access>::get_element(long) const
//{
//    mangled_ppc("?get_element@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Vc_cache_file_tag_resource_data_access@@@@Vc_cache_file_tag_resource_data_access@@@@QBAPBVc_cache_file_tag_resource_data_access@@J@Z");
//};

//public: unsigned long const * s_static_array<unsigned long, 1024>::get_elements(void) const
//{
//    mangled_ppc("?get_elements@?$s_static_array@K$0EAA@@@QBAPBKXZ");
//};

//public: unsigned long * s_static_array<unsigned long, 1024>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$s_static_array@K$0EAA@@@QAAPAKXZ");
//};

//public: c_typed_opaque_data<class c_wrapped_flags, 8, 4>::~c_typed_opaque_data<class c_wrapped_flags, 8, 4>(void)
//{
//    mangled_ppc("??1?$c_typed_opaque_data@Vc_wrapped_flags@@$07$03@@QAA@XZ");
//};

//public: c_counting_output_stream<struct s_cache_file_fixup_remap<long> >::c_counting_output_stream<struct s_cache_file_fixup_remap<long> >(void)
//{
//    mangled_ppc("??0?$c_counting_output_stream@U?$s_cache_file_fixup_remap@J@@@@QAA@XZ");
//};

//public: virtual bool c_counting_output_stream<struct s_cache_file_fixup_remap<long> >::check_capacity(unsigned long)
//{
//    mangled_ppc("?check_capacity@?$c_counting_output_stream@U?$s_cache_file_fixup_remap@J@@@@UAA_NK@Z");
//};

//public: virtual void c_counting_output_stream<struct s_cache_file_fixup_remap<long> >::write(struct s_cache_file_fixup_remap<long> const &)
//{
//    mangled_ppc("?write@?$c_counting_output_stream@U?$s_cache_file_fixup_remap@J@@@@UAAXABU?$s_cache_file_fixup_remap@J@@@Z");
//};

//public: unsigned long c_counting_output_stream<struct s_cache_file_fixup_remap<long> >::get_count(void) const
//{
//    mangled_ppc("?get_count@?$c_counting_output_stream@U?$s_cache_file_fixup_remap@J@@@@QBAKXZ");
//};

//public: virtual void c_output_stream<struct s_cache_file_fixup_remap<long> >::ensure_capacity(unsigned long)
//{
//    mangled_ppc("?ensure_capacity@?$c_output_stream@U?$s_cache_file_fixup_remap@J@@@@UAAXK@Z");
//};

//public: c_output_stream<struct s_cache_file_fixup_remap<long> >::c_output_stream<struct s_cache_file_fixup_remap<long> >(void)
//{
//    mangled_ppc("??0?$c_output_stream@U?$s_cache_file_fixup_remap@J@@@@QAA@XZ");
//};

//public: class c_cache_file_tag_resource_data_access const * c_wrapped_array_no_init<class c_cache_file_tag_resource_data_access>::begin(void) const
//{
//    mangled_ppc("?begin@?$c_wrapped_array_no_init@Vc_cache_file_tag_resource_data_access@@@@QBAPBVc_cache_file_tag_resource_data_access@@XZ");
//};

//public: class c_cache_file_tag_resource_data_access * c_array_operator_interface<class c_wrapped_array_no_init<class c_cache_file_tag_resource_data_access>, class c_cache_file_tag_resource_data_access>::begin(void)
//{
//    mangled_ppc("?begin@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Vc_cache_file_tag_resource_data_access@@@@Vc_cache_file_tag_resource_data_access@@@@QAAPAVc_cache_file_tag_resource_data_access@@XZ");
//};

//public: class c_cache_file_tag_resource_data_access const * c_array_operator_interface<class c_wrapped_array_no_init<class c_cache_file_tag_resource_data_access>, class c_cache_file_tag_resource_data_access>::begin(void) const
//{
//    mangled_ppc("?begin@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Vc_cache_file_tag_resource_data_access@@@@Vc_cache_file_tag_resource_data_access@@@@QBAPBVc_cache_file_tag_resource_data_access@@XZ");
//};

//public: bool c_array_operator_interface<class c_wrapped_array_no_init<class c_cache_file_tag_resource_data_access>, class c_cache_file_tag_resource_data_access>::valid_index(long) const
//{
//    mangled_ppc("?valid_index@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Vc_cache_file_tag_resource_data_access@@@@Vc_cache_file_tag_resource_data_access@@@@QBA_NJ@Z");
//};

//public: class c_wrapped_array_no_init<class c_cache_file_tag_resource_data_access> const * c_recursive_template_pattern<class c_wrapped_array_no_init<class c_cache_file_tag_resource_data_access> >::get_super_class(void) const
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@Vc_cache_file_tag_resource_data_access@@@@@@QBAPBV?$c_wrapped_array_no_init@Vc_cache_file_tag_resource_data_access@@@@XZ");
//};

//public: void c_typed_opaque_data<class c_wrapped_flags, 8, 4>::destruct(void)
//{
//    mangled_ppc("?destruct@?$c_typed_opaque_data@Vc_wrapped_flags@@$07$03@@QAAXXZ");
//};

//public: class c_cache_file_tag_resource_data_access * c_wrapped_array_no_init<class c_cache_file_tag_resource_data_access>::begin(void)
//{
//    mangled_ppc("?begin@?$c_wrapped_array_no_init@Vc_cache_file_tag_resource_data_access@@@@QAAPAVc_cache_file_tag_resource_data_access@@XZ");
//};

//public: long c_array_operator_interface<class c_wrapped_array_no_init<class c_cache_file_tag_resource_data_access>, class c_cache_file_tag_resource_data_access>::count(void) const
//{
//    mangled_ppc("?count@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Vc_cache_file_tag_resource_data_access@@@@Vc_cache_file_tag_resource_data_access@@@@QBAJXZ");
//};

//public: class c_wrapped_array_no_init<class c_cache_file_tag_resource_data_access> * c_recursive_template_pattern<class c_wrapped_array_no_init<class c_cache_file_tag_resource_data_access> >::get_super_class(void)
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@Vc_cache_file_tag_resource_data_access@@@@@@QAAPAV?$c_wrapped_array_no_init@Vc_cache_file_tag_resource_data_access@@@@XZ");
//};

//public: long c_wrapped_array_no_init<class c_cache_file_tag_resource_data_access>::count(void) const
//{
//    mangled_ppc("?count@?$c_wrapped_array_no_init@Vc_cache_file_tag_resource_data_access@@@@QBAJXZ");
//};

//class c_wrapped_array<class c_cache_file_tag_resource_data_access> allocate_tracked_wrapped_array<class c_cache_file_tag_resource_data_access>(class c_allocation_interface *, unsigned long, char const *)
//{
//    mangled_ppc("??$allocate_tracked_wrapped_array@Vc_cache_file_tag_resource_data_access@@@@YA?AV?$c_wrapped_array@Vc_cache_file_tag_resource_data_access@@@@PAVc_allocation_interface@@KPBD@Z");
//};

//void free_wrapped_array<class c_cache_file_tag_resource_data_access>(class c_allocation_interface *, class c_wrapped_array<class c_cache_file_tag_resource_data_access> *)
//{
//    mangled_ppc("??$free_wrapped_array@Vc_cache_file_tag_resource_data_access@@@@YAXPAVc_allocation_interface@@PAV?$c_wrapped_array@Vc_cache_file_tag_resource_data_access@@@@@Z");
//};

//struct s_cache_file_fixup_remap<long> make_cache_file_fixup<long>(long const &, long const &)
//{
//    mangled_ppc("??$make_cache_file_fixup@J@@YA?AU?$s_cache_file_fixup_remap@J@@ABJ0@Z");
//};

//public: void c_wrapped_array_no_init<class c_cache_file_tag_resource_data_access>::clear(void)
//{
//    mangled_ppc("?clear@?$c_wrapped_array_no_init@Vc_cache_file_tag_resource_data_access@@@@QAAXXZ");
//};

//public: class c_cache_file_tag_resource_data_access * c_wrapped_array_no_init<class c_cache_file_tag_resource_data_access>::end(void)
//{
//    mangled_ppc("?end@?$c_wrapped_array_no_init@Vc_cache_file_tag_resource_data_access@@@@QAAPAVc_cache_file_tag_resource_data_access@@XZ");
//};

//public: class c_cache_file_tag_resource_data_access * c_basic_buffer<void>::get_as_type_array<class c_cache_file_tag_resource_data_access>(unsigned long)
//{
//    mangled_ppc("??$get_as_type_array@Vc_cache_file_tag_resource_data_access@@@?$c_basic_buffer@X@@QAAPAVc_cache_file_tag_resource_data_access@@K@Z");
//};

//class c_wrapped_array<class c_cache_file_tag_resource_data_access> make_wrapped_array<class c_cache_file_tag_resource_data_access>(class c_cache_file_tag_resource_data_access *, long)
//{
//    mangled_ppc("??$make_wrapped_array@Vc_cache_file_tag_resource_data_access@@@@YA?AV?$c_wrapped_array@Vc_cache_file_tag_resource_data_access@@@@PAVc_cache_file_tag_resource_data_access@@J@Z");
//};

//public: c_wrapped_array<class c_cache_file_tag_resource_data_access>::c_wrapped_array<class c_cache_file_tag_resource_data_access>(class c_cache_file_tag_resource_data_access *, long)
//{
//    mangled_ppc("??0?$c_wrapped_array@Vc_cache_file_tag_resource_data_access@@@@QAA@PAVc_cache_file_tag_resource_data_access@@J@Z");
//};

