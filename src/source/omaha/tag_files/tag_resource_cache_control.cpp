/* ---------- headers */

#include "omaha\tag_files\tag_resource_cache_control.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static enum e_tag_resource_control_datum_bit const c_flags_no_init<enum e_tag_resource_control_datum_bit, unsigned char, 8, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_tag_resource_control_datum_bit@@E$07Us_default_enum_string_resolver@@@@2W4e_tag_resource_control_datum_bit@@B"
// public: static int const c_enum_no_init<enum e_tag_resource_control_datum_state, unsigned char, 0, 5, struct s_default_enum_string_resolver>::k_minimum_value; // "?k_minimum_value@?$c_enum_no_init@W4e_tag_resource_control_datum_state@@E$0A@$04Us_default_enum_string_resolver@@@@2HB"
// public: static enum e_tag_resource_control_datum_state const c_enum_no_init<enum e_tag_resource_control_datum_state, unsigned char, 0, 5, struct s_default_enum_string_resolver>::k_maximum_value_plus_one; // "?k_maximum_value_plus_one@?$c_enum_no_init@W4e_tag_resource_control_datum_state@@E$0A@$04Us_default_enum_string_resolver@@@@2W4e_tag_resource_control_datum_state@@B"

// class c_wrapped_array<unsigned long const> get_flag_bits(class c_wrapped_flags);
// public: void c_tag_resource_cache_controller::initialize(void);
// public: void c_tag_resource_cache_controller::allocate_storage(unsigned long, class c_allocation_interface *);
// struct s_allocation_description_holder make_allocation_description(class c_wrapped_flags &, unsigned long);
// public: c_wrapped_flags_allocation_description::c_wrapped_flags_allocation_description(class c_wrapped_flags &, unsigned long);
// public: void c_tag_resource_cache_controller::initialize_for_new_map(unsigned long, class c_tag_resource_page_table_control_interface *, class c_tag_resource_runtime_listener *, class c_tag_resource_cache_file_datum_handler *, class c_allocation_interface *);
// public: void c_tag_resource_cache_controller::free_storage(void);
// public: void c_tag_resource_cache_controller::dispose_from_old_map(void);
// public: void c_tag_resource_cache_controller::prepare_for_disposal_from_old_map(class c_tag_resource_address_cache_control_interface *);
// public: void c_tag_resource_cache_controller::set_can_load_all_desired_optional_resources(bool);
// public: void c_tag_resource_cache_controller::enable_optional_caching(bool);
// public: void c_tag_resource_cache_controller::enable_demand_throttle_to_io(bool);
// public: bool c_tag_resource_cache_controller::can_predict_optional_resources(void) const;
// private: bool c_tag_resource_cache_controller::load_resources_in_order(class c_wrapped_flags, class c_tag_resource_page_table_io_listener *);
// public: c_load_in_order_next_op::c_load_in_order_next_op(class c_wrapped_flags, class c_wrapped_flags);
// public: void c_tag_resource_cache_controller::stagnate_deferred_resources(class c_tag_resource_address_cache_control_interface *);
// public: void c_tag_resource_cache_controller::demand_resource_list(class c_wrapped_flags const &, unsigned long, class c_tag_resource_address_cache_control_interface *, class c_tag_resource_page_table_io_listener *, bool *, bool *, bool *, unsigned long *, unsigned long *, class c_fixed_sized_dynamic_array<long> *);
// public: c_bit_vector_nand_and::c_bit_vector_nand_and(class c_wrapped_flags, class c_wrapped_flags, class c_wrapped_flags);
// public: void c_tag_resource_cache_controller::demand_cached_resource_list(class c_wrapped_array<long>, unsigned long, class c_tag_resource_address_cache_control_interface *, class c_tag_resource_page_table_io_listener *, bool *);
// private: bool c_tag_resource_cache_controller::demand_resource(long, unsigned long, class c_tag_resource_address_cache_control_interface *, class c_tag_resource_page_table_io_listener *, bool *, bool *, bool *, unsigned long *, unsigned long *);
// public: void c_tag_resource_cache_controller::resource_control_datum_visit(class c_tag_resource_control_datum_visitor *);
// public: void c_tag_resource_cache_controller::refresh_deferred_resources(bool *);
// public: bool c_tag_resource_cache_controller::incremental_updates_pending(void) const;
// public: void c_tag_resource_cache_controller::mark_necessary_resources(class c_tag_resource_runtime_active_set const *, class c_tag_resource_address_cache_control_interface *, bool *);
// public: void c_tag_resource_cache_controller::verify_reservation_state(void);
// public: void c_tag_resource_cache_controller::orphan_unnecessary_unlocked_resources(class c_tag_resource_address_cache_control_interface *);
// public: void c_tag_resource_cache_controller::adopt_necessary_resources(void);
// private: bool c_tag_resource_cache_controller::all_pages_loaded(long);
// private: void c_tag_resource_cache_controller::pin_resource_pages(long);
// private: void c_tag_resource_cache_controller::unpin_resource_pages(long);
// private: void c_tag_resource_cache_controller::verify_resource_external_state(long, class c_tag_resource_address_cache_control_interface *);
// private: void c_tag_resource_cache_controller::record_new_resource_state(long, enum e_tag_resource_control_datum_state, enum e_tag_resource_control_datum_state);
// private: void c_tag_resource_cache_controller::fixup_resource(bool, long, bool *, class c_tag_resource_address_cache_control_interface *);
// private: void c_tag_resource_cache_controller::fixup_available_and_necessary_resources(bool *, class c_tag_resource_address_cache_control_interface *);
// public: c_stale_optional_resource_op::c_stale_optional_resource_op(bool, class c_wrapped_flags, class c_wrapped_flags, class c_wrapped_flags, class c_wrapped_flags);
// public: c_newly_published_optional_resource_op::c_newly_published_optional_resource_op(bool, class c_wrapped_flags, class c_wrapped_flags, class c_wrapped_flags, class c_wrapped_flags);
// public: c_newly_published_pending_resource_op::c_newly_published_pending_resource_op(class c_wrapped_flags, class c_wrapped_flags, class c_wrapped_flags);
// public: c_verify_published_optional_resource_op::c_verify_published_optional_resource_op(bool, class c_wrapped_flags, class c_wrapped_flags, class c_wrapped_flags, class c_wrapped_flags);
// public: void c_tag_resource_cache_controller::update_active_resources(bool *, class c_tag_resource_address_cache_control_interface *);
// public: void c_tag_resource_cache_controller::update_required_resources(class c_tag_resource_address_cache_control_interface *);
// public: void c_tag_resource_cache_controller::verify_published_state(class c_tag_resource_address_cache_control_interface *);
// public: c_verify_published_state_op::c_verify_published_state_op(class c_wrapped_flags, class c_wrapped_flags, class c_wrapped_flags, class c_wrapped_flags, class c_wrapped_flags, class c_wrapped_flags);
// public: unsigned long c_verify_published_state_op::get_dword(long) const;
// private: void c_tag_resource_cache_controller::resource_update_state_to_valid(long);
// private: void c_tag_resource_cache_controller::resource_prepare_for_unloading(long);
// public: bool c_tag_resource_cache_controller::resource_available(long);
// private: bool c_tag_resource_cache_controller::resource_rebuild_references(long);
// private: void c_tag_resource_cache_controller::resource_tear_down_references(long);
// private: void c_tag_resource_cache_controller::resource_decommit(long);
// private: void c_tag_resource_cache_controller::resource_unpin(long);
// private: static void c_tag_resource_cache_controller::try_to_unpin_unlocked_deferred_resource(long);
// public: void c_tag_resource_cache_controller::begin_tracking_resource(long, bool);
// public: void c_tag_resource_cache_controller::unload_resource(long);
// public: bool c_tag_resource_cache_controller::tracking_any_optional_data(long);
// public: void c_tag_resource_cache_controller::end_tracking_resource(long);
// public: void * c_tag_resource_cache_controller::get_permanent_resource_root_address(long);
// public: bool c_tag_resource_cache_controller::should_have_page_handle(long);
// public: struct s_tag_resource_location_handle_struct * c_tag_resource_cache_controller::resource_get_internal_page_handle(long);
// public: void c_tag_resource_cache_controller::verify_resource_unlocked(long);
// public: bool c_tag_resource_cache_controller::resource_is_desired_this_frame(long);
// public: void c_tag_resource_cache_controller::prepare_resource_for_page_deletion(long, class c_tag_resource_address_cache_control_interface *);
// public: void c_tag_resource_cache_controller::prepare_resource_for_page_move(long, class c_tag_resource_address_cache_control_interface *);
// public: void c_tag_resource_cache_controller::prepare_resource_for_page_read_success(long);
// private: void c_tag_resource_cache_controller::release_resource_page_references(long, class c_tag_resource_address_cache_control_interface *);
// private: void c_tag_resource_cache_controller::acquire_page_reservation(long);
// private: void c_tag_resource_cache_controller::release_page_reservation(long);
// private: void c_tag_resource_cache_controller::release_page_reservation_force(long);
// private: void c_tag_resource_cache_controller::adopt_resource_data(long);
// private: void c_tag_resource_cache_controller::orphan_resource_data(long);
// private: class c_basic_buffer<void> c_tag_resource_cache_controller::resource_get_pageable_data(long);
// private: class c_basic_buffer<void> c_tag_resource_cache_controller::optional_resource_get_pageable_data(long);
// private: class c_basic_buffer<void> c_tag_resource_cache_controller::optional_resource_get_optional_data(long);
// private: long c_tag_resource_cache_controller::optional_resource_get_optional_data_snapshot(long);
// private: long c_tag_resource_cache_controller::optional_resource_get_pageable_data_snapshot(long);
// private: long c_tag_resource_cache_controller::required_resource_get_pageable_data_snapshot(long);
// private: bool c_tag_resource_cache_controller::pageable_data_needs_byteswapping(long);
// private: void c_tag_resource_cache_controller::pageable_data_set_needs_byteswapping(long, bool);
// private: class c_tag_resource_control_datum c_tag_resource_cache_controller::get_resource_control_from_handle(long);
// private: void c_tag_resource_cache_control_datum_info::initialize_for_new_map(class c_tag_resource_cache_controller *);
// private: void c_tag_resource_cache_control_datum_info::dispose_from_old_map(void);
// public: class c_basic_buffer<void> c_tag_resource_cache_control_datum_info::get_pageable_data(long, bool);
// public: class c_basic_buffer<void> c_tag_resource_cache_control_datum_info::get_optional_data(long);
// public: long c_tag_resource_cache_control_datum_info::required_resource_get_pageable_data_snapshot(long);
// public: long c_tag_resource_cache_control_datum_info::optional_resource_get_pageable_data_snapshot(long);
// public: long c_tag_resource_cache_control_datum_info::optional_resource_get_optional_data_snapshot(long);
// public: void c_tag_resource_cache_control_datum_info::record_new_state(long, enum e_tag_resource_control_datum_state, enum e_tag_resource_control_datum_state);
// public: void c_tag_resource_cache_controller::prepare_for_tag_reload(class c_tag_resource_address_cache_control_interface *);
// public: void c_tag_resource_cache_controller::prepare_for_full_defragmentation(class c_tag_resource_address_cache_control_interface *);
// public: void c_tag_resource_cache_controller::prepare_for_memory_stealing(class c_tag_resource_address_cache_control_interface *);
// public: c_tag_resource_control_datum::c_tag_resource_control_datum(bool, long, class c_tag_resource_cache_control_datum_info *, struct s_tag_resource_control_datum *, class c_tag_resource_cache_file_datum_handler *);
// public: bool c_tag_resource_control_datum::test_flag(enum e_tag_resource_control_datum_bit) const;
// public: bool s_tag_resource_control_datum::test_flag(enum e_tag_resource_control_datum_bit) const;
// public: void c_tag_resource_control_datum::set_flag(enum e_tag_resource_control_datum_bit, bool);
// public: void s_tag_resource_control_datum::set_flag(enum e_tag_resource_control_datum_bit, bool);
// public: enum e_tag_resource_control_datum_state c_tag_resource_control_datum::get_state(void) const;
// public: enum e_tag_resource_control_datum_state s_tag_resource_control_datum::get_state(void) const;
// public: void c_tag_resource_control_datum::set_state(enum e_tag_resource_control_datum_state);
// public: void s_tag_resource_control_datum::set_state(enum e_tag_resource_control_datum_state);
// public: class c_basic_buffer<void> c_tag_resource_control_datum::get_control_data(void);
// public: class c_basic_buffer<void> c_tag_resource_control_datum::get_cache_data(void);
// public: class c_basic_buffer<void> c_tag_resource_control_datum::get_optional_data(void);
// public: class c_basic_buffer<void> c_tag_resource_control_datum::try_to_get_optional_data(void);
// public: void * c_tag_resource_control_datum::get_root_address(void);
// public: unsigned __int64 c_tag_resource_control_datum::get_state_snapshot_slowish(void) const;
// public: bool c_tag_resource_control_datum::is_streamed(void) const;
// public: bool c_tag_resource_control_datum::is_optional(void) const;
// public: struct s_tag_resource_location_handle_struct * c_tag_resource_control_datum::get_page_handle(void) const;
// public: void c_tag_resource_control_datum::set_page_handle(struct s_tag_resource_location_handle_struct *);
// public: struct s_tag_resource_definition const * c_tag_resource_control_datum::get_resource_definition(void) const;
// public: long c_tag_resource_control_datum::get_resource_owner(void) const;
// public: long c_tag_resource_control_datum::get_external_resource_handle(void) const;
// public: long c_tag_resource_control_datum::get_absolute_internal_index(void) const;
// public: class c_wrapped_array<struct s_tag_resource_fixup_location const> c_tag_resource_control_datum::get_control_fixups(void);
// public: class c_wrapped_array<struct s_tag_resource_interop_location const> c_tag_resource_control_datum::get_interop_locations(void);
// public: bool c_tag_resource_control_datum::can_modify(void) const;
// public: bool c_tag_resource_control_datum::should_try_to_fixup(void) const;
// public: bool c_tag_resource_control_datum::should_have_page_data(void) const;
// public: bool c_tag_resource_control_datum::should_have_page_data_slow(void) const;
// public: bool c_tag_resource_control_datum::usable(void) const;
// public: bool c_tag_resource_control_datum::active(void) const;
// public: bool c_tag_resource_control_datum::deferred(void) const;
// public: bool c_tag_resource_control_datum::pending(void) const;
// public: enum e_tag_resource_page_reservation c_tag_resource_control_datum::get_desired_page_reservation(void) const;
// public: bool c_tag_resource_control_datum::always_required(void) const;
// public: bool c_tag_resource_control_datum::has_valid_interop_locations(void);
// public: class c_basic_buffer<void> c_tag_resource_control_datum::get_interop_buffer(void);
// public: class c_static_string<512> c_tag_resource_control_datum::describe_resource(void) const;
// public: struct s_data_array * c_smart_data_array<struct s_tag_resource_control_datum>::operator struct s_data_array *(void) const;
// public: struct s_data_array * c_smart_data_array<struct s_tag_resource_control_datum>::operator->(void);
// public: c_enum<enum e_tag_resource_control_datum_state, unsigned char, 0, 5, struct s_default_enum_string_resolver>::c_enum<enum e_tag_resource_control_datum_state, unsigned char, 0, 5, struct s_default_enum_string_resolver>(enum e_tag_resource_control_datum_state);
// public: enum e_tag_resource_control_datum_state c_enum_no_init<enum e_tag_resource_control_datum_state, unsigned char, 0, 5, struct s_default_enum_string_resolver>::operator enum e_tag_resource_control_datum_state(void) const;
// public: c_wrapped_array<unsigned long const>::c_wrapped_array<unsigned long const>(unsigned long const *, long);
// public: void c_data_iterator<struct s_tag_resource_control_datum>::begin(struct s_data_array *);
// public: bool c_data_iterator<struct s_tag_resource_control_datum>::next(void);
// public: long c_data_iterator<struct s_tag_resource_control_datum>::get_index(void) const;
// struct s_allocation_description_holder make_into_description_holder<class c_wrapped_flags_allocation_description>(class c_wrapped_flags_allocation_description);
// public: bool c_flags_no_init<enum e_tag_resource_control_datum_bit, unsigned char, 8, struct s_default_enum_string_resolver>::test(enum e_tag_resource_control_datum_bit) const;
// public: void c_flags_no_init<enum e_tag_resource_control_datum_bit, unsigned char, 8, struct s_default_enum_string_resolver>::set(enum e_tag_resource_control_datum_bit, bool);
// struct s_allocation_description_holder make_allocation_description<struct s_tag_resource_control_datum>(class c_smart_data_array<struct s_tag_resource_control_datum> &, char const *, long, char const *, long);
// public: bool c_bit_vector_operator_iterator::next_index<class c_load_in_order_next_op>(class c_load_in_order_next_op const *, long *);
// public: unsigned long c_load_in_order_next_op::get_dword(long) const;
// public: bool c_bit_vector_operator_iterator::next_index<class c_bit_vector_nand_and>(class c_bit_vector_nand_and const *, long *);
// public: unsigned long c_bit_vector_nand_and::get_dword(long) const;
// public: c_wrapped_array<char>::ctor<64>(char (&)[64]);
// public: bool c_bit_vector_operator_iterator::next_index<class c_stale_optional_resource_op>(class c_stale_optional_resource_op const *, long *);
// public: unsigned long c_stale_optional_resource_op::get_dword(long) const;
// public: bool c_bit_vector_operator_iterator::next_index<class c_newly_published_optional_resource_op>(class c_newly_published_optional_resource_op const *, long *);
// public: unsigned long c_newly_published_optional_resource_op::get_dword(long) const;
// public: bool c_bit_vector_operator_iterator::next_index<class c_newly_published_pending_resource_op>(class c_newly_published_pending_resource_op const *, long *);
// public: unsigned long c_newly_published_pending_resource_op::get_dword(long) const;
// public: bool c_bit_vector_operator_iterator::next_index<class c_verify_published_optional_resource_op>(class c_verify_published_optional_resource_op const *, long *);
// public: unsigned long c_verify_published_optional_resource_op::get_dword(long) const;
// public: bool c_bit_vector_operator_iterator::next_index<class c_verify_published_state_op>(class c_verify_published_state_op const *, long *);
// public: struct s_data_array *& c_smart_data_array<struct s_tag_resource_control_datum>::get_restricted_data_array_address(void);
// public: static bool c_flags_no_init<enum e_tag_resource_control_datum_bit, unsigned char, 8, struct s_default_enum_string_resolver>::valid_bit(enum e_tag_resource_control_datum_bit);
// private: static unsigned char c_flags_no_init<enum e_tag_resource_control_datum_bit, unsigned char, 8, struct s_default_enum_string_resolver>::flag_size_type(enum e_tag_resource_control_datum_bit);

//class c_wrapped_array<unsigned long const> get_flag_bits(class c_wrapped_flags)
//{
//    mangled_ppc("?get_flag_bits@@YA?AV?$c_wrapped_array@$$CBK@@Vc_wrapped_flags@@@Z");
//};

//public: void c_tag_resource_cache_controller::initialize(void)
//{
//    mangled_ppc("?initialize@c_tag_resource_cache_controller@@QAAXXZ");
//};

//public: void c_tag_resource_cache_controller::allocate_storage(unsigned long, class c_allocation_interface *)
//{
//    mangled_ppc("?allocate_storage@c_tag_resource_cache_controller@@QAAXKPAVc_allocation_interface@@@Z");
//};

//struct s_allocation_description_holder make_allocation_description(class c_wrapped_flags &, unsigned long)
//{
//    mangled_ppc("?make_allocation_description@@YA?AUs_allocation_description_holder@@AAVc_wrapped_flags@@K@Z");
//};

//public: c_wrapped_flags_allocation_description::c_wrapped_flags_allocation_description(class c_wrapped_flags &, unsigned long)
//{
//    mangled_ppc("??0c_wrapped_flags_allocation_description@@QAA@AAVc_wrapped_flags@@K@Z");
//};

//public: void c_tag_resource_cache_controller::initialize_for_new_map(unsigned long, class c_tag_resource_page_table_control_interface *, class c_tag_resource_runtime_listener *, class c_tag_resource_cache_file_datum_handler *, class c_allocation_interface *)
//{
//    mangled_ppc("?initialize_for_new_map@c_tag_resource_cache_controller@@QAAXKPAVc_tag_resource_page_table_control_interface@@PAVc_tag_resource_runtime_listener@@PAVc_tag_resource_cache_file_datum_handler@@PAVc_allocation_interface@@@Z");
//};

//public: void c_tag_resource_cache_controller::free_storage(void)
//{
//    mangled_ppc("?free_storage@c_tag_resource_cache_controller@@QAAXXZ");
//};

//public: void c_tag_resource_cache_controller::dispose_from_old_map(void)
//{
//    mangled_ppc("?dispose_from_old_map@c_tag_resource_cache_controller@@QAAXXZ");
//};

//public: void c_tag_resource_cache_controller::prepare_for_disposal_from_old_map(class c_tag_resource_address_cache_control_interface *)
//{
//    mangled_ppc("?prepare_for_disposal_from_old_map@c_tag_resource_cache_controller@@QAAXPAVc_tag_resource_address_cache_control_interface@@@Z");
//};

//public: void c_tag_resource_cache_controller::set_can_load_all_desired_optional_resources(bool)
//{
//    mangled_ppc("?set_can_load_all_desired_optional_resources@c_tag_resource_cache_controller@@QAAX_N@Z");
//};

//public: void c_tag_resource_cache_controller::enable_optional_caching(bool)
//{
//    mangled_ppc("?enable_optional_caching@c_tag_resource_cache_controller@@QAAX_N@Z");
//};

//public: void c_tag_resource_cache_controller::enable_demand_throttle_to_io(bool)
//{
//    mangled_ppc("?enable_demand_throttle_to_io@c_tag_resource_cache_controller@@QAAX_N@Z");
//};

//public: bool c_tag_resource_cache_controller::can_predict_optional_resources(void) const
//{
//    mangled_ppc("?can_predict_optional_resources@c_tag_resource_cache_controller@@QBA_NXZ");
//};

//private: bool c_tag_resource_cache_controller::load_resources_in_order(class c_wrapped_flags, class c_tag_resource_page_table_io_listener *)
//{
//    mangled_ppc("?load_resources_in_order@c_tag_resource_cache_controller@@AAA_NVc_wrapped_flags@@PAVc_tag_resource_page_table_io_listener@@@Z");
//};

//public: c_load_in_order_next_op::c_load_in_order_next_op(class c_wrapped_flags, class c_wrapped_flags)
//{
//    mangled_ppc("??0c_load_in_order_next_op@@QAA@Vc_wrapped_flags@@0@Z");
//};

//public: void c_tag_resource_cache_controller::stagnate_deferred_resources(class c_tag_resource_address_cache_control_interface *)
//{
//    mangled_ppc("?stagnate_deferred_resources@c_tag_resource_cache_controller@@QAAXPAVc_tag_resource_address_cache_control_interface@@@Z");
//};

//public: void c_tag_resource_cache_controller::demand_resource_list(class c_wrapped_flags const &, unsigned long, class c_tag_resource_address_cache_control_interface *, class c_tag_resource_page_table_io_listener *, bool *, bool *, bool *, unsigned long *, unsigned long *, class c_fixed_sized_dynamic_array<long> *)
//{
//    mangled_ppc("?demand_resource_list@c_tag_resource_cache_controller@@QAAXABVc_wrapped_flags@@KPAVc_tag_resource_address_cache_control_interface@@PAVc_tag_resource_page_table_io_listener@@PA_N33PAK4PAV?$c_fixed_sized_dynamic_array@J@@@Z");
//};

//public: c_bit_vector_nand_and::c_bit_vector_nand_and(class c_wrapped_flags, class c_wrapped_flags, class c_wrapped_flags)
//{
//    mangled_ppc("??0c_bit_vector_nand_and@@QAA@Vc_wrapped_flags@@00@Z");
//};

//public: void c_tag_resource_cache_controller::demand_cached_resource_list(class c_wrapped_array<long>, unsigned long, class c_tag_resource_address_cache_control_interface *, class c_tag_resource_page_table_io_listener *, bool *)
//{
//    mangled_ppc("?demand_cached_resource_list@c_tag_resource_cache_controller@@QAAXV?$c_wrapped_array@J@@KPAVc_tag_resource_address_cache_control_interface@@PAVc_tag_resource_page_table_io_listener@@PA_N@Z");
//};

//private: bool c_tag_resource_cache_controller::demand_resource(long, unsigned long, class c_tag_resource_address_cache_control_interface *, class c_tag_resource_page_table_io_listener *, bool *, bool *, bool *, unsigned long *, unsigned long *)
//{
//    mangled_ppc("?demand_resource@c_tag_resource_cache_controller@@AAA_NJKPAVc_tag_resource_address_cache_control_interface@@PAVc_tag_resource_page_table_io_listener@@PA_N22PAK3@Z");
//};

//public: void c_tag_resource_cache_controller::resource_control_datum_visit(class c_tag_resource_control_datum_visitor *)
//{
//    mangled_ppc("?resource_control_datum_visit@c_tag_resource_cache_controller@@QAAXPAVc_tag_resource_control_datum_visitor@@@Z");
//};

//public: void c_tag_resource_cache_controller::refresh_deferred_resources(bool *)
//{
//    mangled_ppc("?refresh_deferred_resources@c_tag_resource_cache_controller@@QAAXPA_N@Z");
//};

//public: bool c_tag_resource_cache_controller::incremental_updates_pending(void) const
//{
//    mangled_ppc("?incremental_updates_pending@c_tag_resource_cache_controller@@QBA_NXZ");
//};

//public: void c_tag_resource_cache_controller::mark_necessary_resources(class c_tag_resource_runtime_active_set const *, class c_tag_resource_address_cache_control_interface *, bool *)
//{
//    mangled_ppc("?mark_necessary_resources@c_tag_resource_cache_controller@@QAAXPBVc_tag_resource_runtime_active_set@@PAVc_tag_resource_address_cache_control_interface@@PA_N@Z");
//};

//public: void c_tag_resource_cache_controller::verify_reservation_state(void)
//{
//    mangled_ppc("?verify_reservation_state@c_tag_resource_cache_controller@@QAAXXZ");
//};

//public: void c_tag_resource_cache_controller::orphan_unnecessary_unlocked_resources(class c_tag_resource_address_cache_control_interface *)
//{
//    mangled_ppc("?orphan_unnecessary_unlocked_resources@c_tag_resource_cache_controller@@QAAXPAVc_tag_resource_address_cache_control_interface@@@Z");
//};

//public: void c_tag_resource_cache_controller::adopt_necessary_resources(void)
//{
//    mangled_ppc("?adopt_necessary_resources@c_tag_resource_cache_controller@@QAAXXZ");
//};

//private: bool c_tag_resource_cache_controller::all_pages_loaded(long)
//{
//    mangled_ppc("?all_pages_loaded@c_tag_resource_cache_controller@@AAA_NJ@Z");
//};

//private: void c_tag_resource_cache_controller::pin_resource_pages(long)
//{
//    mangled_ppc("?pin_resource_pages@c_tag_resource_cache_controller@@AAAXJ@Z");
//};

//private: void c_tag_resource_cache_controller::unpin_resource_pages(long)
//{
//    mangled_ppc("?unpin_resource_pages@c_tag_resource_cache_controller@@AAAXJ@Z");
//};

//private: void c_tag_resource_cache_controller::verify_resource_external_state(long, class c_tag_resource_address_cache_control_interface *)
//{
//    mangled_ppc("?verify_resource_external_state@c_tag_resource_cache_controller@@AAAXJPAVc_tag_resource_address_cache_control_interface@@@Z");
//};

//private: void c_tag_resource_cache_controller::record_new_resource_state(long, enum e_tag_resource_control_datum_state, enum e_tag_resource_control_datum_state)
//{
//    mangled_ppc("?record_new_resource_state@c_tag_resource_cache_controller@@AAAXJW4e_tag_resource_control_datum_state@@0@Z");
//};

//private: void c_tag_resource_cache_controller::fixup_resource(bool, long, bool *, class c_tag_resource_address_cache_control_interface *)
//{
//    mangled_ppc("?fixup_resource@c_tag_resource_cache_controller@@AAAX_NJPA_NPAVc_tag_resource_address_cache_control_interface@@@Z");
//};

//private: void c_tag_resource_cache_controller::fixup_available_and_necessary_resources(bool *, class c_tag_resource_address_cache_control_interface *)
//{
//    mangled_ppc("?fixup_available_and_necessary_resources@c_tag_resource_cache_controller@@AAAXPA_NPAVc_tag_resource_address_cache_control_interface@@@Z");
//};

//public: c_stale_optional_resource_op::c_stale_optional_resource_op(bool, class c_wrapped_flags, class c_wrapped_flags, class c_wrapped_flags, class c_wrapped_flags)
//{
//    mangled_ppc("??0c_stale_optional_resource_op@@QAA@_NVc_wrapped_flags@@111@Z");
//};

//public: c_newly_published_optional_resource_op::c_newly_published_optional_resource_op(bool, class c_wrapped_flags, class c_wrapped_flags, class c_wrapped_flags, class c_wrapped_flags)
//{
//    mangled_ppc("??0c_newly_published_optional_resource_op@@QAA@_NVc_wrapped_flags@@111@Z");
//};

//public: c_newly_published_pending_resource_op::c_newly_published_pending_resource_op(class c_wrapped_flags, class c_wrapped_flags, class c_wrapped_flags)
//{
//    mangled_ppc("??0c_newly_published_pending_resource_op@@QAA@Vc_wrapped_flags@@00@Z");
//};

//public: c_verify_published_optional_resource_op::c_verify_published_optional_resource_op(bool, class c_wrapped_flags, class c_wrapped_flags, class c_wrapped_flags, class c_wrapped_flags)
//{
//    mangled_ppc("??0c_verify_published_optional_resource_op@@QAA@_NVc_wrapped_flags@@111@Z");
//};

//public: void c_tag_resource_cache_controller::update_active_resources(bool *, class c_tag_resource_address_cache_control_interface *)
//{
//    mangled_ppc("?update_active_resources@c_tag_resource_cache_controller@@QAAXPA_NPAVc_tag_resource_address_cache_control_interface@@@Z");
//};

//public: void c_tag_resource_cache_controller::update_required_resources(class c_tag_resource_address_cache_control_interface *)
//{
//    mangled_ppc("?update_required_resources@c_tag_resource_cache_controller@@QAAXPAVc_tag_resource_address_cache_control_interface@@@Z");
//};

//public: void c_tag_resource_cache_controller::verify_published_state(class c_tag_resource_address_cache_control_interface *)
//{
//    mangled_ppc("?verify_published_state@c_tag_resource_cache_controller@@QAAXPAVc_tag_resource_address_cache_control_interface@@@Z");
//};

//public: c_verify_published_state_op::c_verify_published_state_op(class c_wrapped_flags, class c_wrapped_flags, class c_wrapped_flags, class c_wrapped_flags, class c_wrapped_flags, class c_wrapped_flags)
//{
//    mangled_ppc("??0c_verify_published_state_op@@QAA@Vc_wrapped_flags@@00000@Z");
//};

//public: unsigned long c_verify_published_state_op::get_dword(long) const
//{
//    mangled_ppc("?get_dword@c_verify_published_state_op@@QBAKJ@Z");
//};

//private: void c_tag_resource_cache_controller::resource_update_state_to_valid(long)
//{
//    mangled_ppc("?resource_update_state_to_valid@c_tag_resource_cache_controller@@AAAXJ@Z");
//};

//private: void c_tag_resource_cache_controller::resource_prepare_for_unloading(long)
//{
//    mangled_ppc("?resource_prepare_for_unloading@c_tag_resource_cache_controller@@AAAXJ@Z");
//};

//public: bool c_tag_resource_cache_controller::resource_available(long)
//{
//    mangled_ppc("?resource_available@c_tag_resource_cache_controller@@QAA_NJ@Z");
//};

//private: bool c_tag_resource_cache_controller::resource_rebuild_references(long)
//{
//    mangled_ppc("?resource_rebuild_references@c_tag_resource_cache_controller@@AAA_NJ@Z");
//};

//private: void c_tag_resource_cache_controller::resource_tear_down_references(long)
//{
//    mangled_ppc("?resource_tear_down_references@c_tag_resource_cache_controller@@AAAXJ@Z");
//};

//private: void c_tag_resource_cache_controller::resource_decommit(long)
//{
//    mangled_ppc("?resource_decommit@c_tag_resource_cache_controller@@AAAXJ@Z");
//};

//private: void c_tag_resource_cache_controller::resource_unpin(long)
//{
//    mangled_ppc("?resource_unpin@c_tag_resource_cache_controller@@AAAXJ@Z");
//};

//private: static void c_tag_resource_cache_controller::try_to_unpin_unlocked_deferred_resource(long)
//{
//    mangled_ppc("?try_to_unpin_unlocked_deferred_resource@c_tag_resource_cache_controller@@CAXJ@Z");
//};

//public: void c_tag_resource_cache_controller::begin_tracking_resource(long, bool)
//{
//    mangled_ppc("?begin_tracking_resource@c_tag_resource_cache_controller@@QAAXJ_N@Z");
//};

//public: void c_tag_resource_cache_controller::unload_resource(long)
//{
//    mangled_ppc("?unload_resource@c_tag_resource_cache_controller@@QAAXJ@Z");
//};

//public: bool c_tag_resource_cache_controller::tracking_any_optional_data(long)
//{
//    mangled_ppc("?tracking_any_optional_data@c_tag_resource_cache_controller@@QAA_NJ@Z");
//};

//public: void c_tag_resource_cache_controller::end_tracking_resource(long)
//{
//    mangled_ppc("?end_tracking_resource@c_tag_resource_cache_controller@@QAAXJ@Z");
//};

//public: void * c_tag_resource_cache_controller::get_permanent_resource_root_address(long)
//{
//    mangled_ppc("?get_permanent_resource_root_address@c_tag_resource_cache_controller@@QAAPAXJ@Z");
//};

//public: bool c_tag_resource_cache_controller::should_have_page_handle(long)
//{
//    mangled_ppc("?should_have_page_handle@c_tag_resource_cache_controller@@QAA_NJ@Z");
//};

//public: struct s_tag_resource_location_handle_struct * c_tag_resource_cache_controller::resource_get_internal_page_handle(long)
//{
//    mangled_ppc("?resource_get_internal_page_handle@c_tag_resource_cache_controller@@QAAPAUs_tag_resource_location_handle_struct@@J@Z");
//};

//public: void c_tag_resource_cache_controller::verify_resource_unlocked(long)
//{
//    mangled_ppc("?verify_resource_unlocked@c_tag_resource_cache_controller@@QAAXJ@Z");
//};

//public: bool c_tag_resource_cache_controller::resource_is_desired_this_frame(long)
//{
//    mangled_ppc("?resource_is_desired_this_frame@c_tag_resource_cache_controller@@QAA_NJ@Z");
//};

//public: void c_tag_resource_cache_controller::prepare_resource_for_page_deletion(long, class c_tag_resource_address_cache_control_interface *)
//{
//    mangled_ppc("?prepare_resource_for_page_deletion@c_tag_resource_cache_controller@@QAAXJPAVc_tag_resource_address_cache_control_interface@@@Z");
//};

//public: void c_tag_resource_cache_controller::prepare_resource_for_page_move(long, class c_tag_resource_address_cache_control_interface *)
//{
//    mangled_ppc("?prepare_resource_for_page_move@c_tag_resource_cache_controller@@QAAXJPAVc_tag_resource_address_cache_control_interface@@@Z");
//};

//public: void c_tag_resource_cache_controller::prepare_resource_for_page_read_success(long)
//{
//    mangled_ppc("?prepare_resource_for_page_read_success@c_tag_resource_cache_controller@@QAAXJ@Z");
//};

//private: void c_tag_resource_cache_controller::release_resource_page_references(long, class c_tag_resource_address_cache_control_interface *)
//{
//    mangled_ppc("?release_resource_page_references@c_tag_resource_cache_controller@@AAAXJPAVc_tag_resource_address_cache_control_interface@@@Z");
//};

//private: void c_tag_resource_cache_controller::acquire_page_reservation(long)
//{
//    mangled_ppc("?acquire_page_reservation@c_tag_resource_cache_controller@@AAAXJ@Z");
//};

//private: void c_tag_resource_cache_controller::release_page_reservation(long)
//{
//    mangled_ppc("?release_page_reservation@c_tag_resource_cache_controller@@AAAXJ@Z");
//};

//private: void c_tag_resource_cache_controller::release_page_reservation_force(long)
//{
//    mangled_ppc("?release_page_reservation_force@c_tag_resource_cache_controller@@AAAXJ@Z");
//};

//private: void c_tag_resource_cache_controller::adopt_resource_data(long)
//{
//    mangled_ppc("?adopt_resource_data@c_tag_resource_cache_controller@@AAAXJ@Z");
//};

//private: void c_tag_resource_cache_controller::orphan_resource_data(long)
//{
//    mangled_ppc("?orphan_resource_data@c_tag_resource_cache_controller@@AAAXJ@Z");
//};

//private: class c_basic_buffer<void> c_tag_resource_cache_controller::resource_get_pageable_data(long)
//{
//    mangled_ppc("?resource_get_pageable_data@c_tag_resource_cache_controller@@AAA?AV?$c_basic_buffer@X@@J@Z");
//};

//private: class c_basic_buffer<void> c_tag_resource_cache_controller::optional_resource_get_pageable_data(long)
//{
//    mangled_ppc("?optional_resource_get_pageable_data@c_tag_resource_cache_controller@@AAA?AV?$c_basic_buffer@X@@J@Z");
//};

//private: class c_basic_buffer<void> c_tag_resource_cache_controller::optional_resource_get_optional_data(long)
//{
//    mangled_ppc("?optional_resource_get_optional_data@c_tag_resource_cache_controller@@AAA?AV?$c_basic_buffer@X@@J@Z");
//};

//private: long c_tag_resource_cache_controller::optional_resource_get_optional_data_snapshot(long)
//{
//    mangled_ppc("?optional_resource_get_optional_data_snapshot@c_tag_resource_cache_controller@@AAAJJ@Z");
//};

//private: long c_tag_resource_cache_controller::optional_resource_get_pageable_data_snapshot(long)
//{
//    mangled_ppc("?optional_resource_get_pageable_data_snapshot@c_tag_resource_cache_controller@@AAAJJ@Z");
//};

//private: long c_tag_resource_cache_controller::required_resource_get_pageable_data_snapshot(long)
//{
//    mangled_ppc("?required_resource_get_pageable_data_snapshot@c_tag_resource_cache_controller@@AAAJJ@Z");
//};

//private: bool c_tag_resource_cache_controller::pageable_data_needs_byteswapping(long)
//{
//    mangled_ppc("?pageable_data_needs_byteswapping@c_tag_resource_cache_controller@@AAA_NJ@Z");
//};

//private: void c_tag_resource_cache_controller::pageable_data_set_needs_byteswapping(long, bool)
//{
//    mangled_ppc("?pageable_data_set_needs_byteswapping@c_tag_resource_cache_controller@@AAAXJ_N@Z");
//};

//private: class c_tag_resource_control_datum c_tag_resource_cache_controller::get_resource_control_from_handle(long)
//{
//    mangled_ppc("?get_resource_control_from_handle@c_tag_resource_cache_controller@@AAA?AVc_tag_resource_control_datum@@J@Z");
//};

//private: void c_tag_resource_cache_control_datum_info::initialize_for_new_map(class c_tag_resource_cache_controller *)
//{
//    mangled_ppc("?initialize_for_new_map@c_tag_resource_cache_control_datum_info@@AAAXPAVc_tag_resource_cache_controller@@@Z");
//};

//private: void c_tag_resource_cache_control_datum_info::dispose_from_old_map(void)
//{
//    mangled_ppc("?dispose_from_old_map@c_tag_resource_cache_control_datum_info@@AAAXXZ");
//};

//public: class c_basic_buffer<void> c_tag_resource_cache_control_datum_info::get_pageable_data(long, bool)
//{
//    mangled_ppc("?get_pageable_data@c_tag_resource_cache_control_datum_info@@QAA?AV?$c_basic_buffer@X@@J_N@Z");
//};

//public: class c_basic_buffer<void> c_tag_resource_cache_control_datum_info::get_optional_data(long)
//{
//    mangled_ppc("?get_optional_data@c_tag_resource_cache_control_datum_info@@QAA?AV?$c_basic_buffer@X@@J@Z");
//};

//public: long c_tag_resource_cache_control_datum_info::required_resource_get_pageable_data_snapshot(long)
//{
//    mangled_ppc("?required_resource_get_pageable_data_snapshot@c_tag_resource_cache_control_datum_info@@QAAJJ@Z");
//};

//public: long c_tag_resource_cache_control_datum_info::optional_resource_get_pageable_data_snapshot(long)
//{
//    mangled_ppc("?optional_resource_get_pageable_data_snapshot@c_tag_resource_cache_control_datum_info@@QAAJJ@Z");
//};

//public: long c_tag_resource_cache_control_datum_info::optional_resource_get_optional_data_snapshot(long)
//{
//    mangled_ppc("?optional_resource_get_optional_data_snapshot@c_tag_resource_cache_control_datum_info@@QAAJJ@Z");
//};

//public: void c_tag_resource_cache_control_datum_info::record_new_state(long, enum e_tag_resource_control_datum_state, enum e_tag_resource_control_datum_state)
//{
//    mangled_ppc("?record_new_state@c_tag_resource_cache_control_datum_info@@QAAXJW4e_tag_resource_control_datum_state@@0@Z");
//};

//public: void c_tag_resource_cache_controller::prepare_for_tag_reload(class c_tag_resource_address_cache_control_interface *)
//{
//    mangled_ppc("?prepare_for_tag_reload@c_tag_resource_cache_controller@@QAAXPAVc_tag_resource_address_cache_control_interface@@@Z");
//};

//public: void c_tag_resource_cache_controller::prepare_for_full_defragmentation(class c_tag_resource_address_cache_control_interface *)
//{
//    mangled_ppc("?prepare_for_full_defragmentation@c_tag_resource_cache_controller@@QAAXPAVc_tag_resource_address_cache_control_interface@@@Z");
//};

//public: void c_tag_resource_cache_controller::prepare_for_memory_stealing(class c_tag_resource_address_cache_control_interface *)
//{
//    mangled_ppc("?prepare_for_memory_stealing@c_tag_resource_cache_controller@@QAAXPAVc_tag_resource_address_cache_control_interface@@@Z");
//};

//public: c_tag_resource_control_datum::c_tag_resource_control_datum(bool, long, class c_tag_resource_cache_control_datum_info *, struct s_tag_resource_control_datum *, class c_tag_resource_cache_file_datum_handler *)
//{
//    mangled_ppc("??0c_tag_resource_control_datum@@QAA@_NJPAVc_tag_resource_cache_control_datum_info@@PAUs_tag_resource_control_datum@@PAVc_tag_resource_cache_file_datum_handler@@@Z");
//};

//public: bool c_tag_resource_control_datum::test_flag(enum e_tag_resource_control_datum_bit) const
//{
//    mangled_ppc("?test_flag@c_tag_resource_control_datum@@QBA_NW4e_tag_resource_control_datum_bit@@@Z");
//};

//public: bool s_tag_resource_control_datum::test_flag(enum e_tag_resource_control_datum_bit) const
//{
//    mangled_ppc("?test_flag@s_tag_resource_control_datum@@QBA_NW4e_tag_resource_control_datum_bit@@@Z");
//};

//public: void c_tag_resource_control_datum::set_flag(enum e_tag_resource_control_datum_bit, bool)
//{
//    mangled_ppc("?set_flag@c_tag_resource_control_datum@@QAAXW4e_tag_resource_control_datum_bit@@_N@Z");
//};

//public: void s_tag_resource_control_datum::set_flag(enum e_tag_resource_control_datum_bit, bool)
//{
//    mangled_ppc("?set_flag@s_tag_resource_control_datum@@QAAXW4e_tag_resource_control_datum_bit@@_N@Z");
//};

//public: enum e_tag_resource_control_datum_state c_tag_resource_control_datum::get_state(void) const
//{
//    mangled_ppc("?get_state@c_tag_resource_control_datum@@QBA?AW4e_tag_resource_control_datum_state@@XZ");
//};

//public: enum e_tag_resource_control_datum_state s_tag_resource_control_datum::get_state(void) const
//{
//    mangled_ppc("?get_state@s_tag_resource_control_datum@@QBA?AW4e_tag_resource_control_datum_state@@XZ");
//};

//public: void c_tag_resource_control_datum::set_state(enum e_tag_resource_control_datum_state)
//{
//    mangled_ppc("?set_state@c_tag_resource_control_datum@@QAAXW4e_tag_resource_control_datum_state@@@Z");
//};

//public: void s_tag_resource_control_datum::set_state(enum e_tag_resource_control_datum_state)
//{
//    mangled_ppc("?set_state@s_tag_resource_control_datum@@QAAXW4e_tag_resource_control_datum_state@@@Z");
//};

//public: class c_basic_buffer<void> c_tag_resource_control_datum::get_control_data(void)
//{
//    mangled_ppc("?get_control_data@c_tag_resource_control_datum@@QAA?AV?$c_basic_buffer@X@@XZ");
//};

//public: class c_basic_buffer<void> c_tag_resource_control_datum::get_cache_data(void)
//{
//    mangled_ppc("?get_cache_data@c_tag_resource_control_datum@@QAA?AV?$c_basic_buffer@X@@XZ");
//};

//public: class c_basic_buffer<void> c_tag_resource_control_datum::get_optional_data(void)
//{
//    mangled_ppc("?get_optional_data@c_tag_resource_control_datum@@QAA?AV?$c_basic_buffer@X@@XZ");
//};

//public: class c_basic_buffer<void> c_tag_resource_control_datum::try_to_get_optional_data(void)
//{
//    mangled_ppc("?try_to_get_optional_data@c_tag_resource_control_datum@@QAA?AV?$c_basic_buffer@X@@XZ");
//};

//public: void * c_tag_resource_control_datum::get_root_address(void)
//{
//    mangled_ppc("?get_root_address@c_tag_resource_control_datum@@QAAPAXXZ");
//};

//public: unsigned __int64 c_tag_resource_control_datum::get_state_snapshot_slowish(void) const
//{
//    mangled_ppc("?get_state_snapshot_slowish@c_tag_resource_control_datum@@QBA_KXZ");
//};

//public: bool c_tag_resource_control_datum::is_streamed(void) const
//{
//    mangled_ppc("?is_streamed@c_tag_resource_control_datum@@QBA_NXZ");
//};

//public: bool c_tag_resource_control_datum::is_optional(void) const
//{
//    mangled_ppc("?is_optional@c_tag_resource_control_datum@@QBA_NXZ");
//};

//public: struct s_tag_resource_location_handle_struct * c_tag_resource_control_datum::get_page_handle(void) const
//{
//    mangled_ppc("?get_page_handle@c_tag_resource_control_datum@@QBAPAUs_tag_resource_location_handle_struct@@XZ");
//};

//public: void c_tag_resource_control_datum::set_page_handle(struct s_tag_resource_location_handle_struct *)
//{
//    mangled_ppc("?set_page_handle@c_tag_resource_control_datum@@QAAXPAUs_tag_resource_location_handle_struct@@@Z");
//};

//public: struct s_tag_resource_definition const * c_tag_resource_control_datum::get_resource_definition(void) const
//{
//    mangled_ppc("?get_resource_definition@c_tag_resource_control_datum@@QBAPBUs_tag_resource_definition@@XZ");
//};

//public: long c_tag_resource_control_datum::get_resource_owner(void) const
//{
//    mangled_ppc("?get_resource_owner@c_tag_resource_control_datum@@QBAJXZ");
//};

//public: long c_tag_resource_control_datum::get_external_resource_handle(void) const
//{
//    mangled_ppc("?get_external_resource_handle@c_tag_resource_control_datum@@QBAJXZ");
//};

//public: long c_tag_resource_control_datum::get_absolute_internal_index(void) const
//{
//    mangled_ppc("?get_absolute_internal_index@c_tag_resource_control_datum@@QBAJXZ");
//};

//public: class c_wrapped_array<struct s_tag_resource_fixup_location const> c_tag_resource_control_datum::get_control_fixups(void)
//{
//    mangled_ppc("?get_control_fixups@c_tag_resource_control_datum@@QAA?AV?$c_wrapped_array@$$CBUs_tag_resource_fixup_location@@@@XZ");
//};

//public: class c_wrapped_array<struct s_tag_resource_interop_location const> c_tag_resource_control_datum::get_interop_locations(void)
//{
//    mangled_ppc("?get_interop_locations@c_tag_resource_control_datum@@QAA?AV?$c_wrapped_array@$$CBUs_tag_resource_interop_location@@@@XZ");
//};

//public: bool c_tag_resource_control_datum::can_modify(void) const
//{
//    mangled_ppc("?can_modify@c_tag_resource_control_datum@@QBA_NXZ");
//};

//public: bool c_tag_resource_control_datum::should_try_to_fixup(void) const
//{
//    mangled_ppc("?should_try_to_fixup@c_tag_resource_control_datum@@QBA_NXZ");
//};

//public: bool c_tag_resource_control_datum::should_have_page_data(void) const
//{
//    mangled_ppc("?should_have_page_data@c_tag_resource_control_datum@@QBA_NXZ");
//};

//public: bool c_tag_resource_control_datum::should_have_page_data_slow(void) const
//{
//    mangled_ppc("?should_have_page_data_slow@c_tag_resource_control_datum@@QBA_NXZ");
//};

//public: bool c_tag_resource_control_datum::usable(void) const
//{
//    mangled_ppc("?usable@c_tag_resource_control_datum@@QBA_NXZ");
//};

//public: bool c_tag_resource_control_datum::active(void) const
//{
//    mangled_ppc("?active@c_tag_resource_control_datum@@QBA_NXZ");
//};

//public: bool c_tag_resource_control_datum::deferred(void) const
//{
//    mangled_ppc("?deferred@c_tag_resource_control_datum@@QBA_NXZ");
//};

//public: bool c_tag_resource_control_datum::pending(void) const
//{
//    mangled_ppc("?pending@c_tag_resource_control_datum@@QBA_NXZ");
//};

//public: enum e_tag_resource_page_reservation c_tag_resource_control_datum::get_desired_page_reservation(void) const
//{
//    mangled_ppc("?get_desired_page_reservation@c_tag_resource_control_datum@@QBA?AW4e_tag_resource_page_reservation@@XZ");
//};

//public: bool c_tag_resource_control_datum::always_required(void) const
//{
//    mangled_ppc("?always_required@c_tag_resource_control_datum@@QBA_NXZ");
//};

//public: bool c_tag_resource_control_datum::has_valid_interop_locations(void)
//{
//    mangled_ppc("?has_valid_interop_locations@c_tag_resource_control_datum@@QAA_NXZ");
//};

//public: class c_basic_buffer<void> c_tag_resource_control_datum::get_interop_buffer(void)
//{
//    mangled_ppc("?get_interop_buffer@c_tag_resource_control_datum@@QAA?AV?$c_basic_buffer@X@@XZ");
//};

//public: class c_static_string<512> c_tag_resource_control_datum::describe_resource(void) const
//{
//    mangled_ppc("?describe_resource@c_tag_resource_control_datum@@QBA?AV?$c_static_string@$0CAA@@@XZ");
//};

//public: struct s_data_array * c_smart_data_array<struct s_tag_resource_control_datum>::operator struct s_data_array *(void) const
//{
//    mangled_ppc("??B?$c_smart_data_array@Us_tag_resource_control_datum@@@@QBAPAUs_data_array@@XZ");
//};

//public: struct s_data_array * c_smart_data_array<struct s_tag_resource_control_datum>::operator->(void)
//{
//    mangled_ppc("??C?$c_smart_data_array@Us_tag_resource_control_datum@@@@QAAPAUs_data_array@@XZ");
//};

//public: c_enum<enum e_tag_resource_control_datum_state, unsigned char, 0, 5, struct s_default_enum_string_resolver>::c_enum<enum e_tag_resource_control_datum_state, unsigned char, 0, 5, struct s_default_enum_string_resolver>(enum e_tag_resource_control_datum_state)
//{
//    mangled_ppc("??0?$c_enum@W4e_tag_resource_control_datum_state@@E$0A@$04Us_default_enum_string_resolver@@@@QAA@W4e_tag_resource_control_datum_state@@@Z");
//};

//public: enum e_tag_resource_control_datum_state c_enum_no_init<enum e_tag_resource_control_datum_state, unsigned char, 0, 5, struct s_default_enum_string_resolver>::operator enum e_tag_resource_control_datum_state(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_tag_resource_control_datum_state@@E$0A@$04Us_default_enum_string_resolver@@@@QBA?AW4e_tag_resource_control_datum_state@@XZ");
//};

//public: c_wrapped_array<unsigned long const>::c_wrapped_array<unsigned long const>(unsigned long const *, long)
//{
//    mangled_ppc("??0?$c_wrapped_array@$$CBK@@QAA@PBKJ@Z");
//};

//public: void c_data_iterator<struct s_tag_resource_control_datum>::begin(struct s_data_array *)
//{
//    mangled_ppc("?begin@?$c_data_iterator@Us_tag_resource_control_datum@@@@QAAXPAUs_data_array@@@Z");
//};

//public: bool c_data_iterator<struct s_tag_resource_control_datum>::next(void)
//{
//    mangled_ppc("?next@?$c_data_iterator@Us_tag_resource_control_datum@@@@QAA_NXZ");
//};

//public: long c_data_iterator<struct s_tag_resource_control_datum>::get_index(void) const
//{
//    mangled_ppc("?get_index@?$c_data_iterator@Us_tag_resource_control_datum@@@@QBAJXZ");
//};

//struct s_allocation_description_holder make_into_description_holder<class c_wrapped_flags_allocation_description>(class c_wrapped_flags_allocation_description)
//{
//    mangled_ppc("??$make_into_description_holder@Vc_wrapped_flags_allocation_description@@@@YA?AUs_allocation_description_holder@@Vc_wrapped_flags_allocation_description@@@Z");
//};

//public: bool c_flags_no_init<enum e_tag_resource_control_datum_bit, unsigned char, 8, struct s_default_enum_string_resolver>::test(enum e_tag_resource_control_datum_bit) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_tag_resource_control_datum_bit@@E$07Us_default_enum_string_resolver@@@@QBA_NW4e_tag_resource_control_datum_bit@@@Z");
//};

//public: void c_flags_no_init<enum e_tag_resource_control_datum_bit, unsigned char, 8, struct s_default_enum_string_resolver>::set(enum e_tag_resource_control_datum_bit, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_tag_resource_control_datum_bit@@E$07Us_default_enum_string_resolver@@@@QAAXW4e_tag_resource_control_datum_bit@@_N@Z");
//};

//struct s_allocation_description_holder make_allocation_description<struct s_tag_resource_control_datum>(class c_smart_data_array<struct s_tag_resource_control_datum> &, char const *, long, char const *, long)
//{
//    mangled_ppc("??$make_allocation_description@Us_tag_resource_control_datum@@@@YA?AUs_allocation_description_holder@@AAV?$c_smart_data_array@Us_tag_resource_control_datum@@@@PBDJ1J@Z");
//};

//public: bool c_bit_vector_operator_iterator::next_index<class c_load_in_order_next_op>(class c_load_in_order_next_op const *, long *)
//{
//    mangled_ppc("??$next_index@Vc_load_in_order_next_op@@@c_bit_vector_operator_iterator@@QAA_NPBVc_load_in_order_next_op@@PAJ@Z");
//};

//public: unsigned long c_load_in_order_next_op::get_dword(long) const
//{
//    mangled_ppc("?get_dword@c_load_in_order_next_op@@QBAKJ@Z");
//};

//public: bool c_bit_vector_operator_iterator::next_index<class c_bit_vector_nand_and>(class c_bit_vector_nand_and const *, long *)
//{
//    mangled_ppc("??$next_index@Vc_bit_vector_nand_and@@@c_bit_vector_operator_iterator@@QAA_NPBVc_bit_vector_nand_and@@PAJ@Z");
//};

//public: unsigned long c_bit_vector_nand_and::get_dword(long) const
//{
//    mangled_ppc("?get_dword@c_bit_vector_nand_and@@QBAKJ@Z");
//};

//public: c_wrapped_array<char>::ctor<64>(char (&)[64])
//{
//    mangled_ppc("??$?0$0EA@@?$c_wrapped_array@D@@QAA@AAY0EA@D@Z");
//};

//public: bool c_bit_vector_operator_iterator::next_index<class c_stale_optional_resource_op>(class c_stale_optional_resource_op const *, long *)
//{
//    mangled_ppc("??$next_index@Vc_stale_optional_resource_op@@@c_bit_vector_operator_iterator@@QAA_NPBVc_stale_optional_resource_op@@PAJ@Z");
//};

//public: unsigned long c_stale_optional_resource_op::get_dword(long) const
//{
//    mangled_ppc("?get_dword@c_stale_optional_resource_op@@QBAKJ@Z");
//};

//public: bool c_bit_vector_operator_iterator::next_index<class c_newly_published_optional_resource_op>(class c_newly_published_optional_resource_op const *, long *)
//{
//    mangled_ppc("??$next_index@Vc_newly_published_optional_resource_op@@@c_bit_vector_operator_iterator@@QAA_NPBVc_newly_published_optional_resource_op@@PAJ@Z");
//};

//public: unsigned long c_newly_published_optional_resource_op::get_dword(long) const
//{
//    mangled_ppc("?get_dword@c_newly_published_optional_resource_op@@QBAKJ@Z");
//};

//public: bool c_bit_vector_operator_iterator::next_index<class c_newly_published_pending_resource_op>(class c_newly_published_pending_resource_op const *, long *)
//{
//    mangled_ppc("??$next_index@Vc_newly_published_pending_resource_op@@@c_bit_vector_operator_iterator@@QAA_NPBVc_newly_published_pending_resource_op@@PAJ@Z");
//};

//public: unsigned long c_newly_published_pending_resource_op::get_dword(long) const
//{
//    mangled_ppc("?get_dword@c_newly_published_pending_resource_op@@QBAKJ@Z");
//};

//public: bool c_bit_vector_operator_iterator::next_index<class c_verify_published_optional_resource_op>(class c_verify_published_optional_resource_op const *, long *)
//{
//    mangled_ppc("??$next_index@Vc_verify_published_optional_resource_op@@@c_bit_vector_operator_iterator@@QAA_NPBVc_verify_published_optional_resource_op@@PAJ@Z");
//};

//public: unsigned long c_verify_published_optional_resource_op::get_dword(long) const
//{
//    mangled_ppc("?get_dword@c_verify_published_optional_resource_op@@QBAKJ@Z");
//};

//public: bool c_bit_vector_operator_iterator::next_index<class c_verify_published_state_op>(class c_verify_published_state_op const *, long *)
//{
//    mangled_ppc("??$next_index@Vc_verify_published_state_op@@@c_bit_vector_operator_iterator@@QAA_NPBVc_verify_published_state_op@@PAJ@Z");
//};

//public: struct s_data_array *& c_smart_data_array<struct s_tag_resource_control_datum>::get_restricted_data_array_address(void)
//{
//    mangled_ppc("?get_restricted_data_array_address@?$c_smart_data_array@Us_tag_resource_control_datum@@@@QAAAAPAUs_data_array@@XZ");
//};

//public: static bool c_flags_no_init<enum e_tag_resource_control_datum_bit, unsigned char, 8, struct s_default_enum_string_resolver>::valid_bit(enum e_tag_resource_control_datum_bit)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_tag_resource_control_datum_bit@@E$07Us_default_enum_string_resolver@@@@SA_NW4e_tag_resource_control_datum_bit@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_tag_resource_control_datum_bit, unsigned char, 8, struct s_default_enum_string_resolver>::flag_size_type(enum e_tag_resource_control_datum_bit)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_tag_resource_control_datum_bit@@E$07Us_default_enum_string_resolver@@@@CAEW4e_tag_resource_control_datum_bit@@@Z");
//};

