/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// bool enable_partial_cache_flush; // "?enable_partial_cache_flush@@3_NA"

// public: void c_tag_resource_cache_new::initialize(void);
// public: void c_tag_resource_cache_new::dispose(void);
// public: void c_tag_resource_cache_new::allocate_storage(unsigned long, unsigned long, bool, class c_allocation_interface *);
// public: bool c_tag_resource_cache_new::initialize_for_new_map(unsigned long, unsigned long, bool, class c_tag_resource_runtime_listener *, class c_tag_resource_cache_file_reader *, class c_tag_resource_cache_file_datum_handler *, class c_tag_resource_cache_file_location_handler *, class c_tag_resource_runtime_active_set *, class c_tag_resource_cache_file_prefetch_set *, class c_allocation_interface *, class c_tag_resource_page_range_allocator *);
// public: void c_tag_resource_cache_new::free_storage(void);
// public: void c_tag_resource_cache_new::dispose_from_old_map(void);
// public: void c_tag_resource_cache_new::prepare_for_disposal_from_old_map(void);
// public: void c_tag_resource_cache_new::setup_bulk_tracked_pages(class c_tag_resource_cache_file_location_setup_iterator *);
// public: void c_tag_resource_cache_new::unsetup_bulk_tracked_pages(class c_tag_resource_cache_file_location_setup_iterator *);
// public: void c_tag_resource_cache_new::setup_bulk_tracked_resources(class c_tag_resource_cache_file_datum_setup_iterator *);
// public: void c_tag_resource_cache_new::unsetup_bulk_tracked_resources(class c_tag_resource_cache_file_datum_setup_iterator *);
// public: void c_tag_resource_cache_new::setup_bulk_tracked_resources_no_explicit_location(class c_tag_resource_cache_file_datum_setup_iterator *);
// public: void c_tag_resource_cache_new::unsetup_bulk_tracked_resources_no_explicit_location(class c_tag_resource_cache_file_datum_setup_iterator *);
// public: void c_tag_resource_cache_new::persist_pages(class c_tag_resource_cache_file_page_persister *);
// public: void c_tag_resource_cache_new::restore_pages(class c_tag_resource_cache_file_page_restorer *);
// private: void c_tag_resource_cache_new::lock_thread_access_for_async_update(void);
// private: void c_tag_resource_cache_new::unlock_thread_access_for_async_update(void);
// private: void c_tag_resource_cache_new::lock_thread_access_for_blocking_update(void);
// private: void c_tag_resource_cache_new::unlock_thread_access_for_blocking_update(void);
// private: void c_tag_resource_cache_new::publish_necessary_resources(bool, bool);
// private: void c_tag_resource_cache_new::revoke_active_access_cache(void);
// private: void c_tag_resource_cache_new::release_unlocked_resources(bool);
// public: void c_tag_resource_cache_new::idle(void);
// private: void c_tag_resource_cache_new::demand_optional_resources_internal(class c_fixed_or_dynamic_resource_predictor *, class c_tag_resource_demand_callback *, bool);
// public: c_tag_resource_cache_controller_demand_collector::c_tag_resource_cache_controller_demand_collector(class c_fixed_or_dynamic_resource_predictor *);
// public: void c_tag_resource_cache_controller_demand_collector::reset_collectors(bool);
// public: virtual long c_tag_resource_cache_controller_demand_collector::find_or_add_resource_molecule(long, long, long);
// public: long c_fixed_or_dynamic_resource_predictor::find_or_add_resource_molecule(long, long, long);
// public: virtual bool c_tag_resource_cache_controller_demand_collector::predict_molecule(long);
// public: bool c_fixed_or_dynamic_resource_predictor::predict_molecule(long, class c_wrapped_flags, class c_wrapped_flags);
// public: virtual void c_tag_resource_cache_controller_demand_collector::begin_resource_molecule(long);
// public: bool c_fixed_or_dynamic_resource_predictor::begin_prediction_molecule(long);
// public: virtual void c_tag_resource_cache_controller_demand_collector::end_resource_molecule(void);
// public: void c_fixed_or_dynamic_resource_predictor::end_prediction_molecule(long);
// public: virtual void c_tag_resource_cache_controller_demand_collector::demand_resource(struct s_tag_resource const *);
// public: virtual void c_tag_resource_cache_controller_demand_collector::demand_required_resource(struct s_tag_resource const *);
// public: virtual void c_tag_resource_cache_controller_demand_collector::demand_tag(long);
// public: void c_fixed_or_dynamic_resource_predictor::add_tag(long, long, class c_wrapped_flags);
// public: class c_wrapped_flags c_tag_resource_cache_controller_demand_collector::get_demanded_resources(void);
// public: bool c_tag_resource_cache_controller_demand_collector::any_demanded_resources(void) const;
// public: unsigned long c_tag_resource_cache_controller_demand_collector::get_unique_prediction_count(void) const;
// public: unsigned long c_tag_resource_cache_controller_demand_collector::get_prediction_count(void) const;
// private: void c_tag_resource_cache_controller_demand_collector::predict_resource(long, enum e_tag_resource_lod);
// public: void c_fixed_or_dynamic_resource_predictor::add_resource(long, long, long, enum e_tag_resource_lod);
// public: void c_tag_resource_cache_new::demand_optional_resources_precomputed(class c_tag_resource_cache_precompiled_predictor *, class c_tag_resource_demand_callback *, bool);
// public: c_fixed_or_dynamic_resource_predictor::c_fixed_or_dynamic_resource_predictor(class c_tag_resource_cache_precompiled_predictor *, class c_tag_resource_cache_dynamic_predictor *);
// public: void c_tag_resource_cache_new::demand_optional_resources(class c_tag_resource_cache_dynamic_predictor *, class c_tag_resource_demand_callback *, bool);
// public: bool c_tag_resource_cache_new::verify_all_optional_loaded(void);
// public: void c_tag_resource_cache_new::stagnate_deferred_resources(void);
// public: void c_tag_resource_cache_new::refresh_deferred_resources(void);
// private: bool c_tag_resource_cache_new::need_resources_loaded(void) const;
// private: bool c_tag_resource_cache_new::can_load_optional_resources(void) const;
// private: void c_tag_resource_cache_new::attempt_to_resize(bool, unsigned long, unsigned long);
// public: void c_tag_resource_cache_new::begin_tracking_page(struct s_tag_resource_location_handle_struct *, unsigned long);
// public: void c_tag_resource_cache_new::end_tracking_page(struct s_tag_resource_location_handle_struct *);
// public: void c_tag_resource_cache_new::begin_tracking_resource_no_explicit_location(long, bool);
// public: void c_tag_resource_cache_new::end_tracking_resource_no_explicit_location(long);
// public: void c_tag_resource_cache_new::begin_tracking_resource(long, bool);
// public: void c_tag_resource_cache_new::set_resource_needs_byteswapping(long, bool);
// public: void c_tag_resource_cache_new::unload_resource(long);
// public: void c_tag_resource_cache_new::end_tracking_resource(long);
// public: bool c_tag_resource_cache_new::page_is_desired(struct s_tag_resource_location_handle_struct *);
// public: bool c_tag_resource_cache_new::block_is_locked_externally(long);
// public: bool c_tag_resource_cache_new::page_is_locked_externally(struct s_tag_resource_location_handle_struct *) const;
// public: void c_tag_resource_cache_new::prepare_page_for_delete(struct s_tag_resource_location_handle_struct *);
// public: void c_tag_resource_cache_new::prepare_page_for_move(struct s_tag_resource_location_handle_struct *);
// public: void c_tag_resource_cache_new::prepare_page_for_clone(struct s_tag_resource_location_handle_struct *);
// public: void c_tag_resource_cache_new::page_read_success(struct s_tag_resource_location_handle_struct *);
// private: void c_tag_resource_cache_new::prepare_resource_for_delete(long);
// private: void c_tag_resource_cache_new::prepare_resource_for_delete_internal(long);
// private: void c_tag_resource_cache_new::prepare_resource_for_move(long);
// private: void c_tag_resource_cache_new::prepare_resource_for_move_internal(long);
// public: bool c_tag_resource_cache_new::copy_resource_data(long, enum e_tag_resource_lod, unsigned long, unsigned long, class c_basic_buffer<void>);
// public: bool c_tag_resource_cache_new::copy_location_data(struct s_tag_resource_location_handle_struct *, unsigned long, unsigned long, class c_basic_buffer<void>);
// private: void c_tag_resource_cache_new::verify_resource_unlockable(long);
// public: bool c_tag_resource_cache_new::describe_page_last_resort(struct s_tag_resource_location_handle_struct *, class c_wrapped_array<char>);
// public: class c_static_string<256> c_tag_resource_cache_new::describe_active_resource_set(void) const;
// public: void c_tag_resource_cache_new::notify_resources_required_state_change(void);
// public: void c_tag_resource_cache_new::cancel_async_and_block_until_async_done(void);
// public: void c_tag_resource_cache_new::load_required_data_only_blocking(class c_io_result *);
// public: void c_tag_resource_cache_new::load_pending_data_only_blocking(class c_io_result *);
// public: void c_tag_resource_cache_new::unload_everything(void);
// public: void c_tag_resource_cache_new::update_required_data_assuming_incremental_changes(class c_io_result *);
// public: float c_tag_resource_cache_new::prefetch_progress(void);
// public: bool c_tag_resource_cache_new::prefetch_requests_finished(void);
// public: void c_tag_resource_cache_new::signal_stop_prefetching(void);
// public: void c_tag_resource_cache_new::restart_prefetching(void);
// public: bool c_tag_resource_cache_new::prefetching_is_idle(void);
// public: bool c_tag_resource_cache_new::can_gobble_up_memory_without_blocking(void);
// public: void c_tag_resource_cache_new::gobble_up_memory(void);
// private: unsigned long c_tag_resource_cache_new::flush_optional_pages_internal(unsigned long, bool);
// private: unsigned long c_tag_resource_cache_new::flush_all_optional_pages_internal(bool);
// private: void c_tag_resource_cache_new::allocate_necessary_space(bool);
// private: void c_tag_resource_cache_new::load_required_data_blocking_internal(bool, bool, class c_io_result *);
// public: void c_tag_resource_cache_new::fall_on_sword(void);
// public: bool c_tag_resource_cache_new::need_to_predict_resources(void) const;
// private: bool c_tag_resource_cache_new::can_predict_optional_resources(void) const;
// public: void c_tag_resource_cache_new::set_runtime_toggle(enum e_tag_resource_runtime_toggle, bool);
// public: void c_tag_resource_cache_new::fire_signal(enum e_tag_resource_runtime_signal);
// public: void c_tag_resource_cache_new::report_memory_usage(class c_formatted_output *);
// public: void c_tag_resource_cache_new::report_memory_brief(class c_wrapped_array<char>, class c_tag_group_dictionary *);
// public: c_resource_control_visit_resources::c_resource_control_visit_resources(class c_tag_resource_page_table *, class c_tag_group_dictionary *);
// public: void c_resource_control_visit_resources::reset_accumulator(void);
// public: long c_resource_control_visit_resources::get_accumulator(void);
// public: void c_resource_control_visit_resources::set_group_tag(unsigned long);
// public: c_tag_resource_control_datum_visitor::c_tag_resource_control_datum_visitor(void);
// public: virtual void c_resource_control_visit_resources::visit(struct s_tag_resource_location_handle_struct *, unsigned long, long, struct s_tag_group const *);
// public: void c_tag_resource_cache_new::enable_optional_resources(bool);
// public: bool c_tag_resource_cache_new::describe_resource(long, class c_wrapped_array<char>);
// public: class c_tag_resource_cache_thread_lock_lock_freeish * c_tag_resource_cache_new::get_thread_access_lock(void);
// private: void c_tag_resource_cache_new::verify_all_required_resources_available(void);
// private: bool c_tag_resource_cache_new::update_active_resources(void);
// public: void c_tag_resource_cache_new::prepare_for_tag_reload(void);
// public: void c_tag_resource_cache_new::prepare_for_zone_set_tag_reload(void);
// public: void c_tag_resource_cache_new::try_to_buyback_memory_blocking(unsigned long);
// public: class c_basic_buffer<void> c_tag_resource_cache_new::try_to_steal_memory(unsigned long);
// public: void c_tag_resource_cache_new::return_memory(class c_basic_buffer<void>);
// public: void c_tag_resource_cache_new::try_to_buyback_memory_nondestructive(unsigned long);
// public: void c_tag_resource_cache_new::try_to_reclaim_memory(void);
// private: class c_tag_resource_page_table_io_listener * c_tag_resource_cache_new::get_page_io_listener(void);
// long tag_resource_cache_make_internal_handle(long, bool);
// public: c_tag_resource_cache_internal_handle::c_tag_resource_cache_internal_handle(long);
// public: bool c_tag_resource_cache_internal_handle::is_optional(void) const;
// public: long c_tag_resource_cache_internal_handle::get_external_resource_handle(void) const;
// long tag_resource_cache_handle_get_external_handle(long);
// bool tag_resource_cache_handle_is_optional(long);
// long tag_resource_cache_optional_handle_get_required_handle(long);
// bool bit_vector_is_subset_of(class c_wrapped_flags const &, class c_wrapped_flags const &);
// public: void c_tag_resource_cache_published_location_interface::initialize_for_new_map(class c_tag_resource_cache_new *);
// public: void c_tag_resource_cache_published_location_interface::dispose_from_old_map(void);
// public: bool c_tag_resource_cache_published_location_interface::page_is_desired(struct s_tag_resource_location_handle_struct *);
// public: bool c_tag_resource_cache_published_location_interface::block_index_is_locked_externally(long);
// public: bool c_tag_resource_cache_published_location_interface::address_is_locked_externally(struct s_tag_resource_location_handle_struct *);
// public: void c_tag_resource_cache_published_location_interface::prepare_for_delete(struct s_tag_resource_location_handle_struct *);
// public: void c_tag_resource_cache_published_location_interface::prepare_for_move(struct s_tag_resource_location_handle_struct *);
// public: void c_tag_resource_cache_published_location_interface::prepare_for_clone(struct s_tag_resource_location_handle_struct *);
// public: bool c_tag_resource_cache_published_location_interface::describe_page_last_resort(struct s_tag_resource_location_handle_struct *, class c_wrapped_array<char>);
// public: void c_tag_resource_page_table_io_listener::initialize_for_new_map(class c_tag_resource_cache_new *);
// public: void c_tag_resource_page_table_io_listener::dispose_from_old_map(void);
// public: void c_tag_resource_page_table_io_listener::page_read_success(struct s_tag_resource_location_handle_struct *);
// public: void c_static_sized_dynamic_array<long, 16>::clear(void);
// public: bool c_array_operator_interface<class c_static_sized_dynamic_array<long, 16>, long>::empty(void) const;
// public: c_fixed_sized_dynamic_array<long>::c_fixed_sized_dynamic_array<long>(class c_wrapped_array<long> const &, long);
// public: long * c_fixed_sized_dynamic_array<long>::begin(void);
// public: long * c_fixed_sized_dynamic_array<long>::end(void);
// public: bool c_array_operator_interface<class c_fixed_sized_dynamic_array<long>, long>::empty(void) const;
// public: long c_array_operator_interface<class c_fixed_sized_dynamic_array<long>, long>::count(void) const;
// public: class c_fixed_sized_dynamic_array<long> const * c_recursive_template_pattern<class c_fixed_sized_dynamic_array<long> >::get_super_class(void) const;
// public: struct c_status_line & s_static_array<struct c_status_line, 1>::operator[]<int>(int);
// public: long c_big_flags_typed_no_init<long, 65535>::get_lowest_bit_set(void) const;
// public: c_wrapped_flags::ctor<65535>(class c_big_flags_typed_no_init<long, 65535> *);
// public: c_wrapped_array<long>::ctor<class c_static_sized_dynamic_array<long, 16>, long>(class c_array_operator_interface<class c_static_sized_dynamic_array<long, 16>, long> &);
// public: c_wrapped_array<long>::ctor<16>(long (&)[16]);
// long * std::copy<long *, long *>(long *, long *, long *);
// public: static bool s_static_array<struct c_status_line, 16>::valid<unsigned long>(unsigned long);
// public: struct c_status_line & s_static_array<struct c_status_line, 16>::operator[]<unsigned long>(unsigned long);
// public: static bool s_static_array<struct c_status_line, 1>::valid<int>(int);
// public: unsigned long * c_big_flags_typed_no_init<long, 65535>::get_writeable_bits_direct(void);

//public: void c_tag_resource_cache_new::initialize(void)
//{
//    mangled_ppc("?initialize@c_tag_resource_cache_new@@QAAXXZ");
//};

//public: void c_tag_resource_cache_new::dispose(void)
//{
//    mangled_ppc("?dispose@c_tag_resource_cache_new@@QAAXXZ");
//};

//public: void c_tag_resource_cache_new::allocate_storage(unsigned long, unsigned long, bool, class c_allocation_interface *)
//{
//    mangled_ppc("?allocate_storage@c_tag_resource_cache_new@@QAAXKK_NPAVc_allocation_interface@@@Z");
//};

//public: bool c_tag_resource_cache_new::initialize_for_new_map(unsigned long, unsigned long, bool, class c_tag_resource_runtime_listener *, class c_tag_resource_cache_file_reader *, class c_tag_resource_cache_file_datum_handler *, class c_tag_resource_cache_file_location_handler *, class c_tag_resource_runtime_active_set *, class c_tag_resource_cache_file_prefetch_set *, class c_allocation_interface *, class c_tag_resource_page_range_allocator *)
//{
//    mangled_ppc("?initialize_for_new_map@c_tag_resource_cache_new@@QAA_NKK_NPAVc_tag_resource_runtime_listener@@PAVc_tag_resource_cache_file_reader@@PAVc_tag_resource_cache_file_datum_handler@@PAVc_tag_resource_cache_file_location_handler@@PAVc_tag_resource_runtime_active_set@@PAVc_tag_resource_cache_file_prefetch_set@@PAVc_allocation_interface@@PAVc_tag_resource_page_range_allocator@@@Z");
//};

//public: void c_tag_resource_cache_new::free_storage(void)
//{
//    mangled_ppc("?free_storage@c_tag_resource_cache_new@@QAAXXZ");
//};

//public: void c_tag_resource_cache_new::dispose_from_old_map(void)
//{
//    mangled_ppc("?dispose_from_old_map@c_tag_resource_cache_new@@QAAXXZ");
//};

//public: void c_tag_resource_cache_new::prepare_for_disposal_from_old_map(void)
//{
//    mangled_ppc("?prepare_for_disposal_from_old_map@c_tag_resource_cache_new@@QAAXXZ");
//};

//public: void c_tag_resource_cache_new::setup_bulk_tracked_pages(class c_tag_resource_cache_file_location_setup_iterator *)
//{
//    mangled_ppc("?setup_bulk_tracked_pages@c_tag_resource_cache_new@@QAAXPAVc_tag_resource_cache_file_location_setup_iterator@@@Z");
//};

//public: void c_tag_resource_cache_new::unsetup_bulk_tracked_pages(class c_tag_resource_cache_file_location_setup_iterator *)
//{
//    mangled_ppc("?unsetup_bulk_tracked_pages@c_tag_resource_cache_new@@QAAXPAVc_tag_resource_cache_file_location_setup_iterator@@@Z");
//};

//public: void c_tag_resource_cache_new::setup_bulk_tracked_resources(class c_tag_resource_cache_file_datum_setup_iterator *)
//{
//    mangled_ppc("?setup_bulk_tracked_resources@c_tag_resource_cache_new@@QAAXPAVc_tag_resource_cache_file_datum_setup_iterator@@@Z");
//};

//public: void c_tag_resource_cache_new::unsetup_bulk_tracked_resources(class c_tag_resource_cache_file_datum_setup_iterator *)
//{
//    mangled_ppc("?unsetup_bulk_tracked_resources@c_tag_resource_cache_new@@QAAXPAVc_tag_resource_cache_file_datum_setup_iterator@@@Z");
//};

//public: void c_tag_resource_cache_new::setup_bulk_tracked_resources_no_explicit_location(class c_tag_resource_cache_file_datum_setup_iterator *)
//{
//    mangled_ppc("?setup_bulk_tracked_resources_no_explicit_location@c_tag_resource_cache_new@@QAAXPAVc_tag_resource_cache_file_datum_setup_iterator@@@Z");
//};

//public: void c_tag_resource_cache_new::unsetup_bulk_tracked_resources_no_explicit_location(class c_tag_resource_cache_file_datum_setup_iterator *)
//{
//    mangled_ppc("?unsetup_bulk_tracked_resources_no_explicit_location@c_tag_resource_cache_new@@QAAXPAVc_tag_resource_cache_file_datum_setup_iterator@@@Z");
//};

//public: void c_tag_resource_cache_new::persist_pages(class c_tag_resource_cache_file_page_persister *)
//{
//    mangled_ppc("?persist_pages@c_tag_resource_cache_new@@QAAXPAVc_tag_resource_cache_file_page_persister@@@Z");
//};

//public: void c_tag_resource_cache_new::restore_pages(class c_tag_resource_cache_file_page_restorer *)
//{
//    mangled_ppc("?restore_pages@c_tag_resource_cache_new@@QAAXPAVc_tag_resource_cache_file_page_restorer@@@Z");
//};

//private: void c_tag_resource_cache_new::lock_thread_access_for_async_update(void)
//{
//    mangled_ppc("?lock_thread_access_for_async_update@c_tag_resource_cache_new@@AAAXXZ");
//};

//private: void c_tag_resource_cache_new::unlock_thread_access_for_async_update(void)
//{
//    mangled_ppc("?unlock_thread_access_for_async_update@c_tag_resource_cache_new@@AAAXXZ");
//};

//private: void c_tag_resource_cache_new::lock_thread_access_for_blocking_update(void)
//{
//    mangled_ppc("?lock_thread_access_for_blocking_update@c_tag_resource_cache_new@@AAAXXZ");
//};

//private: void c_tag_resource_cache_new::unlock_thread_access_for_blocking_update(void)
//{
//    mangled_ppc("?unlock_thread_access_for_blocking_update@c_tag_resource_cache_new@@AAAXXZ");
//};

//private: void c_tag_resource_cache_new::publish_necessary_resources(bool, bool)
//{
//    mangled_ppc("?publish_necessary_resources@c_tag_resource_cache_new@@AAAX_N0@Z");
//};

//private: void c_tag_resource_cache_new::revoke_active_access_cache(void)
//{
//    mangled_ppc("?revoke_active_access_cache@c_tag_resource_cache_new@@AAAXXZ");
//};

//private: void c_tag_resource_cache_new::release_unlocked_resources(bool)
//{
//    mangled_ppc("?release_unlocked_resources@c_tag_resource_cache_new@@AAAX_N@Z");
//};

//public: void c_tag_resource_cache_new::idle(void)
//{
//    mangled_ppc("?idle@c_tag_resource_cache_new@@QAAXXZ");
//};

//private: void c_tag_resource_cache_new::demand_optional_resources_internal(class c_fixed_or_dynamic_resource_predictor *, class c_tag_resource_demand_callback *, bool)
//{
//    mangled_ppc("?demand_optional_resources_internal@c_tag_resource_cache_new@@AAAXPAVc_fixed_or_dynamic_resource_predictor@@PAVc_tag_resource_demand_callback@@_N@Z");
//};

//public: c_tag_resource_cache_controller_demand_collector::c_tag_resource_cache_controller_demand_collector(class c_fixed_or_dynamic_resource_predictor *)
//{
//    mangled_ppc("??0c_tag_resource_cache_controller_demand_collector@@QAA@PAVc_fixed_or_dynamic_resource_predictor@@@Z");
//};

//public: void c_tag_resource_cache_controller_demand_collector::reset_collectors(bool)
//{
//    mangled_ppc("?reset_collectors@c_tag_resource_cache_controller_demand_collector@@QAAX_N@Z");
//};

//public: virtual long c_tag_resource_cache_controller_demand_collector::find_or_add_resource_molecule(long, long, long)
//{
//    mangled_ppc("?find_or_add_resource_molecule@c_tag_resource_cache_controller_demand_collector@@UAAJJJJ@Z");
//};

//public: long c_fixed_or_dynamic_resource_predictor::find_or_add_resource_molecule(long, long, long)
//{
//    mangled_ppc("?find_or_add_resource_molecule@c_fixed_or_dynamic_resource_predictor@@QAAJJJJ@Z");
//};

//public: virtual bool c_tag_resource_cache_controller_demand_collector::predict_molecule(long)
//{
//    mangled_ppc("?predict_molecule@c_tag_resource_cache_controller_demand_collector@@UAA_NJ@Z");
//};

//public: bool c_fixed_or_dynamic_resource_predictor::predict_molecule(long, class c_wrapped_flags, class c_wrapped_flags)
//{
//    mangled_ppc("?predict_molecule@c_fixed_or_dynamic_resource_predictor@@QAA_NJVc_wrapped_flags@@0@Z");
//};

//public: virtual void c_tag_resource_cache_controller_demand_collector::begin_resource_molecule(long)
//{
//    mangled_ppc("?begin_resource_molecule@c_tag_resource_cache_controller_demand_collector@@UAAXJ@Z");
//};

//public: bool c_fixed_or_dynamic_resource_predictor::begin_prediction_molecule(long)
//{
//    mangled_ppc("?begin_prediction_molecule@c_fixed_or_dynamic_resource_predictor@@QAA_NJ@Z");
//};

//public: virtual void c_tag_resource_cache_controller_demand_collector::end_resource_molecule(void)
//{
//    mangled_ppc("?end_resource_molecule@c_tag_resource_cache_controller_demand_collector@@UAAXXZ");
//};

//public: void c_fixed_or_dynamic_resource_predictor::end_prediction_molecule(long)
//{
//    mangled_ppc("?end_prediction_molecule@c_fixed_or_dynamic_resource_predictor@@QAAXJ@Z");
//};

//public: virtual void c_tag_resource_cache_controller_demand_collector::demand_resource(struct s_tag_resource const *)
//{
//    mangled_ppc("?demand_resource@c_tag_resource_cache_controller_demand_collector@@UAAXPBUs_tag_resource@@@Z");
//};

//public: virtual void c_tag_resource_cache_controller_demand_collector::demand_required_resource(struct s_tag_resource const *)
//{
//    mangled_ppc("?demand_required_resource@c_tag_resource_cache_controller_demand_collector@@UAAXPBUs_tag_resource@@@Z");
//};

//public: virtual void c_tag_resource_cache_controller_demand_collector::demand_tag(long)
//{
//    mangled_ppc("?demand_tag@c_tag_resource_cache_controller_demand_collector@@UAAXJ@Z");
//};

//public: void c_fixed_or_dynamic_resource_predictor::add_tag(long, long, class c_wrapped_flags)
//{
//    mangled_ppc("?add_tag@c_fixed_or_dynamic_resource_predictor@@QAAXJJVc_wrapped_flags@@@Z");
//};

//public: class c_wrapped_flags c_tag_resource_cache_controller_demand_collector::get_demanded_resources(void)
//{
//    mangled_ppc("?get_demanded_resources@c_tag_resource_cache_controller_demand_collector@@QAA?AVc_wrapped_flags@@XZ");
//};

//public: bool c_tag_resource_cache_controller_demand_collector::any_demanded_resources(void) const
//{
//    mangled_ppc("?any_demanded_resources@c_tag_resource_cache_controller_demand_collector@@QBA_NXZ");
//};

//public: unsigned long c_tag_resource_cache_controller_demand_collector::get_unique_prediction_count(void) const
//{
//    mangled_ppc("?get_unique_prediction_count@c_tag_resource_cache_controller_demand_collector@@QBAKXZ");
//};

//public: unsigned long c_tag_resource_cache_controller_demand_collector::get_prediction_count(void) const
//{
//    mangled_ppc("?get_prediction_count@c_tag_resource_cache_controller_demand_collector@@QBAKXZ");
//};

//private: void c_tag_resource_cache_controller_demand_collector::predict_resource(long, enum e_tag_resource_lod)
//{
//    mangled_ppc("?predict_resource@c_tag_resource_cache_controller_demand_collector@@AAAXJW4e_tag_resource_lod@@@Z");
//};

//public: void c_fixed_or_dynamic_resource_predictor::add_resource(long, long, long, enum e_tag_resource_lod)
//{
//    mangled_ppc("?add_resource@c_fixed_or_dynamic_resource_predictor@@QAAXJJJW4e_tag_resource_lod@@@Z");
//};

//public: void c_tag_resource_cache_new::demand_optional_resources_precomputed(class c_tag_resource_cache_precompiled_predictor *, class c_tag_resource_demand_callback *, bool)
//{
//    mangled_ppc("?demand_optional_resources_precomputed@c_tag_resource_cache_new@@QAAXPAVc_tag_resource_cache_precompiled_predictor@@PAVc_tag_resource_demand_callback@@_N@Z");
//};

//public: c_fixed_or_dynamic_resource_predictor::c_fixed_or_dynamic_resource_predictor(class c_tag_resource_cache_precompiled_predictor *, class c_tag_resource_cache_dynamic_predictor *)
//{
//    mangled_ppc("??0c_fixed_or_dynamic_resource_predictor@@QAA@PAVc_tag_resource_cache_precompiled_predictor@@PAVc_tag_resource_cache_dynamic_predictor@@@Z");
//};

//public: void c_tag_resource_cache_new::demand_optional_resources(class c_tag_resource_cache_dynamic_predictor *, class c_tag_resource_demand_callback *, bool)
//{
//    mangled_ppc("?demand_optional_resources@c_tag_resource_cache_new@@QAAXPAVc_tag_resource_cache_dynamic_predictor@@PAVc_tag_resource_demand_callback@@_N@Z");
//};

//public: bool c_tag_resource_cache_new::verify_all_optional_loaded(void)
//{
//    mangled_ppc("?verify_all_optional_loaded@c_tag_resource_cache_new@@QAA_NXZ");
//};

//public: void c_tag_resource_cache_new::stagnate_deferred_resources(void)
//{
//    mangled_ppc("?stagnate_deferred_resources@c_tag_resource_cache_new@@QAAXXZ");
//};

//public: void c_tag_resource_cache_new::refresh_deferred_resources(void)
//{
//    mangled_ppc("?refresh_deferred_resources@c_tag_resource_cache_new@@QAAXXZ");
//};

//private: bool c_tag_resource_cache_new::need_resources_loaded(void) const
//{
//    mangled_ppc("?need_resources_loaded@c_tag_resource_cache_new@@ABA_NXZ");
//};

//private: bool c_tag_resource_cache_new::can_load_optional_resources(void) const
//{
//    mangled_ppc("?can_load_optional_resources@c_tag_resource_cache_new@@ABA_NXZ");
//};

//private: void c_tag_resource_cache_new::attempt_to_resize(bool, unsigned long, unsigned long)
//{
//    mangled_ppc("?attempt_to_resize@c_tag_resource_cache_new@@AAAX_NKK@Z");
//};

//public: void c_tag_resource_cache_new::begin_tracking_page(struct s_tag_resource_location_handle_struct *, unsigned long)
//{
//    mangled_ppc("?begin_tracking_page@c_tag_resource_cache_new@@QAAXPAUs_tag_resource_location_handle_struct@@K@Z");
//};

//public: void c_tag_resource_cache_new::end_tracking_page(struct s_tag_resource_location_handle_struct *)
//{
//    mangled_ppc("?end_tracking_page@c_tag_resource_cache_new@@QAAXPAUs_tag_resource_location_handle_struct@@@Z");
//};

//public: void c_tag_resource_cache_new::begin_tracking_resource_no_explicit_location(long, bool)
//{
//    mangled_ppc("?begin_tracking_resource_no_explicit_location@c_tag_resource_cache_new@@QAAXJ_N@Z");
//};

//public: void c_tag_resource_cache_new::end_tracking_resource_no_explicit_location(long)
//{
//    mangled_ppc("?end_tracking_resource_no_explicit_location@c_tag_resource_cache_new@@QAAXJ@Z");
//};

//public: void c_tag_resource_cache_new::begin_tracking_resource(long, bool)
//{
//    mangled_ppc("?begin_tracking_resource@c_tag_resource_cache_new@@QAAXJ_N@Z");
//};

//public: void c_tag_resource_cache_new::set_resource_needs_byteswapping(long, bool)
//{
//    mangled_ppc("?set_resource_needs_byteswapping@c_tag_resource_cache_new@@QAAXJ_N@Z");
//};

//public: void c_tag_resource_cache_new::unload_resource(long)
//{
//    mangled_ppc("?unload_resource@c_tag_resource_cache_new@@QAAXJ@Z");
//};

//public: void c_tag_resource_cache_new::end_tracking_resource(long)
//{
//    mangled_ppc("?end_tracking_resource@c_tag_resource_cache_new@@QAAXJ@Z");
//};

//public: bool c_tag_resource_cache_new::page_is_desired(struct s_tag_resource_location_handle_struct *)
//{
//    mangled_ppc("?page_is_desired@c_tag_resource_cache_new@@QAA_NPAUs_tag_resource_location_handle_struct@@@Z");
//};

//public: bool c_tag_resource_cache_new::block_is_locked_externally(long)
//{
//    mangled_ppc("?block_is_locked_externally@c_tag_resource_cache_new@@QAA_NJ@Z");
//};

//public: bool c_tag_resource_cache_new::page_is_locked_externally(struct s_tag_resource_location_handle_struct *) const
//{
//    mangled_ppc("?page_is_locked_externally@c_tag_resource_cache_new@@QBA_NPAUs_tag_resource_location_handle_struct@@@Z");
//};

//public: void c_tag_resource_cache_new::prepare_page_for_delete(struct s_tag_resource_location_handle_struct *)
//{
//    mangled_ppc("?prepare_page_for_delete@c_tag_resource_cache_new@@QAAXPAUs_tag_resource_location_handle_struct@@@Z");
//};

//public: void c_tag_resource_cache_new::prepare_page_for_move(struct s_tag_resource_location_handle_struct *)
//{
//    mangled_ppc("?prepare_page_for_move@c_tag_resource_cache_new@@QAAXPAUs_tag_resource_location_handle_struct@@@Z");
//};

//public: void c_tag_resource_cache_new::prepare_page_for_clone(struct s_tag_resource_location_handle_struct *)
//{
//    mangled_ppc("?prepare_page_for_clone@c_tag_resource_cache_new@@QAAXPAUs_tag_resource_location_handle_struct@@@Z");
//};

//public: void c_tag_resource_cache_new::page_read_success(struct s_tag_resource_location_handle_struct *)
//{
//    mangled_ppc("?page_read_success@c_tag_resource_cache_new@@QAAXPAUs_tag_resource_location_handle_struct@@@Z");
//};

//private: void c_tag_resource_cache_new::prepare_resource_for_delete(long)
//{
//    mangled_ppc("?prepare_resource_for_delete@c_tag_resource_cache_new@@AAAXJ@Z");
//};

//private: void c_tag_resource_cache_new::prepare_resource_for_delete_internal(long)
//{
//    mangled_ppc("?prepare_resource_for_delete_internal@c_tag_resource_cache_new@@AAAXJ@Z");
//};

//private: void c_tag_resource_cache_new::prepare_resource_for_move(long)
//{
//    mangled_ppc("?prepare_resource_for_move@c_tag_resource_cache_new@@AAAXJ@Z");
//};

//private: void c_tag_resource_cache_new::prepare_resource_for_move_internal(long)
//{
//    mangled_ppc("?prepare_resource_for_move_internal@c_tag_resource_cache_new@@AAAXJ@Z");
//};

//public: bool c_tag_resource_cache_new::copy_resource_data(long, enum e_tag_resource_lod, unsigned long, unsigned long, class c_basic_buffer<void>)
//{
//    mangled_ppc("?copy_resource_data@c_tag_resource_cache_new@@QAA_NJW4e_tag_resource_lod@@KKV?$c_basic_buffer@X@@@Z");
//};

//public: bool c_tag_resource_cache_new::copy_location_data(struct s_tag_resource_location_handle_struct *, unsigned long, unsigned long, class c_basic_buffer<void>)
//{
//    mangled_ppc("?copy_location_data@c_tag_resource_cache_new@@QAA_NPAUs_tag_resource_location_handle_struct@@KKV?$c_basic_buffer@X@@@Z");
//};

//private: void c_tag_resource_cache_new::verify_resource_unlockable(long)
//{
//    mangled_ppc("?verify_resource_unlockable@c_tag_resource_cache_new@@AAAXJ@Z");
//};

//public: bool c_tag_resource_cache_new::describe_page_last_resort(struct s_tag_resource_location_handle_struct *, class c_wrapped_array<char>)
//{
//    mangled_ppc("?describe_page_last_resort@c_tag_resource_cache_new@@QAA_NPAUs_tag_resource_location_handle_struct@@V?$c_wrapped_array@D@@@Z");
//};

//public: class c_static_string<256> c_tag_resource_cache_new::describe_active_resource_set(void) const
//{
//    mangled_ppc("?describe_active_resource_set@c_tag_resource_cache_new@@QBA?AV?$c_static_string@$0BAA@@@XZ");
//};

//public: void c_tag_resource_cache_new::notify_resources_required_state_change(void)
//{
//    mangled_ppc("?notify_resources_required_state_change@c_tag_resource_cache_new@@QAAXXZ");
//};

//public: void c_tag_resource_cache_new::cancel_async_and_block_until_async_done(void)
//{
//    mangled_ppc("?cancel_async_and_block_until_async_done@c_tag_resource_cache_new@@QAAXXZ");
//};

//public: void c_tag_resource_cache_new::load_required_data_only_blocking(class c_io_result *)
//{
//    mangled_ppc("?load_required_data_only_blocking@c_tag_resource_cache_new@@QAAXPAVc_io_result@@@Z");
//};

//public: void c_tag_resource_cache_new::load_pending_data_only_blocking(class c_io_result *)
//{
//    mangled_ppc("?load_pending_data_only_blocking@c_tag_resource_cache_new@@QAAXPAVc_io_result@@@Z");
//};

//public: void c_tag_resource_cache_new::unload_everything(void)
//{
//    mangled_ppc("?unload_everything@c_tag_resource_cache_new@@QAAXXZ");
//};

//public: void c_tag_resource_cache_new::update_required_data_assuming_incremental_changes(class c_io_result *)
//{
//    mangled_ppc("?update_required_data_assuming_incremental_changes@c_tag_resource_cache_new@@QAAXPAVc_io_result@@@Z");
//};

//public: float c_tag_resource_cache_new::prefetch_progress(void)
//{
//    mangled_ppc("?prefetch_progress@c_tag_resource_cache_new@@QAAMXZ");
//};

//public: bool c_tag_resource_cache_new::prefetch_requests_finished(void)
//{
//    mangled_ppc("?prefetch_requests_finished@c_tag_resource_cache_new@@QAA_NXZ");
//};

//public: void c_tag_resource_cache_new::signal_stop_prefetching(void)
//{
//    mangled_ppc("?signal_stop_prefetching@c_tag_resource_cache_new@@QAAXXZ");
//};

//public: void c_tag_resource_cache_new::restart_prefetching(void)
//{
//    mangled_ppc("?restart_prefetching@c_tag_resource_cache_new@@QAAXXZ");
//};

//public: bool c_tag_resource_cache_new::prefetching_is_idle(void)
//{
//    mangled_ppc("?prefetching_is_idle@c_tag_resource_cache_new@@QAA_NXZ");
//};

//public: bool c_tag_resource_cache_new::can_gobble_up_memory_without_blocking(void)
//{
//    mangled_ppc("?can_gobble_up_memory_without_blocking@c_tag_resource_cache_new@@QAA_NXZ");
//};

//public: void c_tag_resource_cache_new::gobble_up_memory(void)
//{
//    mangled_ppc("?gobble_up_memory@c_tag_resource_cache_new@@QAAXXZ");
//};

//private: unsigned long c_tag_resource_cache_new::flush_optional_pages_internal(unsigned long, bool)
//{
//    mangled_ppc("?flush_optional_pages_internal@c_tag_resource_cache_new@@AAAKK_N@Z");
//};

//private: unsigned long c_tag_resource_cache_new::flush_all_optional_pages_internal(bool)
//{
//    mangled_ppc("?flush_all_optional_pages_internal@c_tag_resource_cache_new@@AAAK_N@Z");
//};

//private: void c_tag_resource_cache_new::allocate_necessary_space(bool)
//{
//    mangled_ppc("?allocate_necessary_space@c_tag_resource_cache_new@@AAAX_N@Z");
//};

//private: void c_tag_resource_cache_new::load_required_data_blocking_internal(bool, bool, class c_io_result *)
//{
//    mangled_ppc("?load_required_data_blocking_internal@c_tag_resource_cache_new@@AAAX_N0PAVc_io_result@@@Z");
//};

//public: void c_tag_resource_cache_new::fall_on_sword(void)
//{
//    mangled_ppc("?fall_on_sword@c_tag_resource_cache_new@@QAAXXZ");
//};

//public: bool c_tag_resource_cache_new::need_to_predict_resources(void) const
//{
//    mangled_ppc("?need_to_predict_resources@c_tag_resource_cache_new@@QBA_NXZ");
//};

//private: bool c_tag_resource_cache_new::can_predict_optional_resources(void) const
//{
//    mangled_ppc("?can_predict_optional_resources@c_tag_resource_cache_new@@ABA_NXZ");
//};

//public: void c_tag_resource_cache_new::set_runtime_toggle(enum e_tag_resource_runtime_toggle, bool)
//{
//    mangled_ppc("?set_runtime_toggle@c_tag_resource_cache_new@@QAAXW4e_tag_resource_runtime_toggle@@_N@Z");
//};

//public: void c_tag_resource_cache_new::fire_signal(enum e_tag_resource_runtime_signal)
//{
//    mangled_ppc("?fire_signal@c_tag_resource_cache_new@@QAAXW4e_tag_resource_runtime_signal@@@Z");
//};

//public: void c_tag_resource_cache_new::report_memory_usage(class c_formatted_output *)
//{
//    mangled_ppc("?report_memory_usage@c_tag_resource_cache_new@@QAAXPAVc_formatted_output@@@Z");
//};

//public: void c_tag_resource_cache_new::report_memory_brief(class c_wrapped_array<char>, class c_tag_group_dictionary *)
//{
//    mangled_ppc("?report_memory_brief@c_tag_resource_cache_new@@QAAXV?$c_wrapped_array@D@@PAVc_tag_group_dictionary@@@Z");
//};

//public: c_resource_control_visit_resources::c_resource_control_visit_resources(class c_tag_resource_page_table *, class c_tag_group_dictionary *)
//{
//    mangled_ppc("??0c_resource_control_visit_resources@@QAA@PAVc_tag_resource_page_table@@PAVc_tag_group_dictionary@@@Z");
//};

//public: void c_resource_control_visit_resources::reset_accumulator(void)
//{
//    mangled_ppc("?reset_accumulator@c_resource_control_visit_resources@@QAAXXZ");
//};

//public: long c_resource_control_visit_resources::get_accumulator(void)
//{
//    mangled_ppc("?get_accumulator@c_resource_control_visit_resources@@QAAJXZ");
//};

//public: void c_resource_control_visit_resources::set_group_tag(unsigned long)
//{
//    mangled_ppc("?set_group_tag@c_resource_control_visit_resources@@QAAXK@Z");
//};

//public: c_tag_resource_control_datum_visitor::c_tag_resource_control_datum_visitor(void)
//{
//    mangled_ppc("??0c_tag_resource_control_datum_visitor@@QAA@XZ");
//};

//public: virtual void c_resource_control_visit_resources::visit(struct s_tag_resource_location_handle_struct *, unsigned long, long, struct s_tag_group const *)
//{
//    mangled_ppc("?visit@c_resource_control_visit_resources@@UAAXPAUs_tag_resource_location_handle_struct@@KJPBUs_tag_group@@@Z");
//};

//public: void c_tag_resource_cache_new::enable_optional_resources(bool)
//{
//    mangled_ppc("?enable_optional_resources@c_tag_resource_cache_new@@QAAX_N@Z");
//};

//public: bool c_tag_resource_cache_new::describe_resource(long, class c_wrapped_array<char>)
//{
//    mangled_ppc("?describe_resource@c_tag_resource_cache_new@@QAA_NJV?$c_wrapped_array@D@@@Z");
//};

//public: class c_tag_resource_cache_thread_lock_lock_freeish * c_tag_resource_cache_new::get_thread_access_lock(void)
//{
//    mangled_ppc("?get_thread_access_lock@c_tag_resource_cache_new@@QAAPAVc_tag_resource_cache_thread_lock_lock_freeish@@XZ");
//};

//private: void c_tag_resource_cache_new::verify_all_required_resources_available(void)
//{
//    mangled_ppc("?verify_all_required_resources_available@c_tag_resource_cache_new@@AAAXXZ");
//};

//private: bool c_tag_resource_cache_new::update_active_resources(void)
//{
//    mangled_ppc("?update_active_resources@c_tag_resource_cache_new@@AAA_NXZ");
//};

//public: void c_tag_resource_cache_new::prepare_for_tag_reload(void)
//{
//    mangled_ppc("?prepare_for_tag_reload@c_tag_resource_cache_new@@QAAXXZ");
//};

//public: void c_tag_resource_cache_new::prepare_for_zone_set_tag_reload(void)
//{
//    mangled_ppc("?prepare_for_zone_set_tag_reload@c_tag_resource_cache_new@@QAAXXZ");
//};

//public: void c_tag_resource_cache_new::try_to_buyback_memory_blocking(unsigned long)
//{
//    mangled_ppc("?try_to_buyback_memory_blocking@c_tag_resource_cache_new@@QAAXK@Z");
//};

//public: class c_basic_buffer<void> c_tag_resource_cache_new::try_to_steal_memory(unsigned long)
//{
//    mangled_ppc("?try_to_steal_memory@c_tag_resource_cache_new@@QAA?AV?$c_basic_buffer@X@@K@Z");
//};

//public: void c_tag_resource_cache_new::return_memory(class c_basic_buffer<void>)
//{
//    mangled_ppc("?return_memory@c_tag_resource_cache_new@@QAAXV?$c_basic_buffer@X@@@Z");
//};

//public: void c_tag_resource_cache_new::try_to_buyback_memory_nondestructive(unsigned long)
//{
//    mangled_ppc("?try_to_buyback_memory_nondestructive@c_tag_resource_cache_new@@QAAXK@Z");
//};

//public: void c_tag_resource_cache_new::try_to_reclaim_memory(void)
//{
//    mangled_ppc("?try_to_reclaim_memory@c_tag_resource_cache_new@@QAAXXZ");
//};

//private: class c_tag_resource_page_table_io_listener * c_tag_resource_cache_new::get_page_io_listener(void)
//{
//    mangled_ppc("?get_page_io_listener@c_tag_resource_cache_new@@AAAPAVc_tag_resource_page_table_io_listener@@XZ");
//};

//long tag_resource_cache_make_internal_handle(long, bool)
//{
//    mangled_ppc("?tag_resource_cache_make_internal_handle@@YAJJ_N@Z");
//};

//public: c_tag_resource_cache_internal_handle::c_tag_resource_cache_internal_handle(long)
//{
//    mangled_ppc("??0c_tag_resource_cache_internal_handle@@QAA@J@Z");
//};

//public: bool c_tag_resource_cache_internal_handle::is_optional(void) const
//{
//    mangled_ppc("?is_optional@c_tag_resource_cache_internal_handle@@QBA_NXZ");
//};

//public: long c_tag_resource_cache_internal_handle::get_external_resource_handle(void) const
//{
//    mangled_ppc("?get_external_resource_handle@c_tag_resource_cache_internal_handle@@QBAJXZ");
//};

//long tag_resource_cache_handle_get_external_handle(long)
//{
//    mangled_ppc("?tag_resource_cache_handle_get_external_handle@@YAJJ@Z");
//};

//bool tag_resource_cache_handle_is_optional(long)
//{
//    mangled_ppc("?tag_resource_cache_handle_is_optional@@YA_NJ@Z");
//};

//long tag_resource_cache_optional_handle_get_required_handle(long)
//{
//    mangled_ppc("?tag_resource_cache_optional_handle_get_required_handle@@YAJJ@Z");
//};

//bool bit_vector_is_subset_of(class c_wrapped_flags const &, class c_wrapped_flags const &)
//{
//    mangled_ppc("?bit_vector_is_subset_of@@YA_NABVc_wrapped_flags@@0@Z");
//};

//public: void c_tag_resource_cache_published_location_interface::initialize_for_new_map(class c_tag_resource_cache_new *)
//{
//    mangled_ppc("?initialize_for_new_map@c_tag_resource_cache_published_location_interface@@QAAXPAVc_tag_resource_cache_new@@@Z");
//};

//public: void c_tag_resource_cache_published_location_interface::dispose_from_old_map(void)
//{
//    mangled_ppc("?dispose_from_old_map@c_tag_resource_cache_published_location_interface@@QAAXXZ");
//};

//public: bool c_tag_resource_cache_published_location_interface::page_is_desired(struct s_tag_resource_location_handle_struct *)
//{
//    mangled_ppc("?page_is_desired@c_tag_resource_cache_published_location_interface@@QAA_NPAUs_tag_resource_location_handle_struct@@@Z");
//};

//public: bool c_tag_resource_cache_published_location_interface::block_index_is_locked_externally(long)
//{
//    mangled_ppc("?block_index_is_locked_externally@c_tag_resource_cache_published_location_interface@@QAA_NJ@Z");
//};

//public: bool c_tag_resource_cache_published_location_interface::address_is_locked_externally(struct s_tag_resource_location_handle_struct *)
//{
//    mangled_ppc("?address_is_locked_externally@c_tag_resource_cache_published_location_interface@@QAA_NPAUs_tag_resource_location_handle_struct@@@Z");
//};

//public: void c_tag_resource_cache_published_location_interface::prepare_for_delete(struct s_tag_resource_location_handle_struct *)
//{
//    mangled_ppc("?prepare_for_delete@c_tag_resource_cache_published_location_interface@@QAAXPAUs_tag_resource_location_handle_struct@@@Z");
//};

//public: void c_tag_resource_cache_published_location_interface::prepare_for_move(struct s_tag_resource_location_handle_struct *)
//{
//    mangled_ppc("?prepare_for_move@c_tag_resource_cache_published_location_interface@@QAAXPAUs_tag_resource_location_handle_struct@@@Z");
//};

//public: void c_tag_resource_cache_published_location_interface::prepare_for_clone(struct s_tag_resource_location_handle_struct *)
//{
//    mangled_ppc("?prepare_for_clone@c_tag_resource_cache_published_location_interface@@QAAXPAUs_tag_resource_location_handle_struct@@@Z");
//};

//public: bool c_tag_resource_cache_published_location_interface::describe_page_last_resort(struct s_tag_resource_location_handle_struct *, class c_wrapped_array<char>)
//{
//    mangled_ppc("?describe_page_last_resort@c_tag_resource_cache_published_location_interface@@QAA_NPAUs_tag_resource_location_handle_struct@@V?$c_wrapped_array@D@@@Z");
//};

//public: void c_tag_resource_page_table_io_listener::initialize_for_new_map(class c_tag_resource_cache_new *)
//{
//    mangled_ppc("?initialize_for_new_map@c_tag_resource_page_table_io_listener@@QAAXPAVc_tag_resource_cache_new@@@Z");
//};

//public: void c_tag_resource_page_table_io_listener::dispose_from_old_map(void)
//{
//    mangled_ppc("?dispose_from_old_map@c_tag_resource_page_table_io_listener@@QAAXXZ");
//};

//public: void c_tag_resource_page_table_io_listener::page_read_success(struct s_tag_resource_location_handle_struct *)
//{
//    mangled_ppc("?page_read_success@c_tag_resource_page_table_io_listener@@QAAXPAUs_tag_resource_location_handle_struct@@@Z");
//};

//public: void c_static_sized_dynamic_array<long, 16>::clear(void)
//{
//    mangled_ppc("?clear@?$c_static_sized_dynamic_array@J$0BA@@@QAAXXZ");
//};

//public: bool c_array_operator_interface<class c_static_sized_dynamic_array<long, 16>, long>::empty(void) const
//{
//    mangled_ppc("?empty@?$c_array_operator_interface@V?$c_static_sized_dynamic_array@J$0BA@@@J@@QBA_NXZ");
//};

//public: c_fixed_sized_dynamic_array<long>::c_fixed_sized_dynamic_array<long>(class c_wrapped_array<long> const &, long)
//{
//    mangled_ppc("??0?$c_fixed_sized_dynamic_array@J@@QAA@ABV?$c_wrapped_array@J@@J@Z");
//};

//public: long * c_fixed_sized_dynamic_array<long>::begin(void)
//{
//    mangled_ppc("?begin@?$c_fixed_sized_dynamic_array@J@@QAAPAJXZ");
//};

//public: long * c_fixed_sized_dynamic_array<long>::end(void)
//{
//    mangled_ppc("?end@?$c_fixed_sized_dynamic_array@J@@QAAPAJXZ");
//};

//public: bool c_array_operator_interface<class c_fixed_sized_dynamic_array<long>, long>::empty(void) const
//{
//    mangled_ppc("?empty@?$c_array_operator_interface@V?$c_fixed_sized_dynamic_array@J@@J@@QBA_NXZ");
//};

//public: long c_array_operator_interface<class c_fixed_sized_dynamic_array<long>, long>::count(void) const
//{
//    mangled_ppc("?count@?$c_array_operator_interface@V?$c_fixed_sized_dynamic_array@J@@J@@QBAJXZ");
//};

//public: class c_fixed_sized_dynamic_array<long> const * c_recursive_template_pattern<class c_fixed_sized_dynamic_array<long> >::get_super_class(void) const
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_fixed_sized_dynamic_array@J@@@@QBAPBV?$c_fixed_sized_dynamic_array@J@@XZ");
//};

//public: struct c_status_line & s_static_array<struct c_status_line, 1>::operator[]<int>(int)
//{
//    mangled_ppc("??$?AH@?$s_static_array@Uc_status_line@@$00@@QAAAAUc_status_line@@H@Z");
//};

//public: long c_big_flags_typed_no_init<long, 65535>::get_lowest_bit_set(void) const
//{
//    mangled_ppc("?get_lowest_bit_set@?$c_big_flags_typed_no_init@J$0PPPP@@@QBAJXZ");
//};

//public: c_wrapped_flags::ctor<65535>(class c_big_flags_typed_no_init<long, 65535> *)
//{
//    mangled_ppc("??$?0$0PPPP@@c_wrapped_flags@@QAA@PAV?$c_big_flags_typed_no_init@J$0PPPP@@@@Z");
//};

//public: c_wrapped_array<long>::ctor<class c_static_sized_dynamic_array<long, 16>, long>(class c_array_operator_interface<class c_static_sized_dynamic_array<long, 16>, long> &)
//{
//    mangled_ppc("??$?0V?$c_static_sized_dynamic_array@J$0BA@@@J@?$c_wrapped_array@J@@QAA@AAV?$c_array_operator_interface@V?$c_static_sized_dynamic_array@J$0BA@@@J@@@Z");
//};

//public: c_wrapped_array<long>::ctor<16>(long (&)[16])
//{
//    mangled_ppc("??$?0$0BA@@?$c_wrapped_array@J@@QAA@AAY0BA@J@Z");
//};

//long * std::copy<long *, long *>(long *, long *, long *)
//{
//    mangled_ppc("??$copy@PAJPAJ@std@@YAPAJPAJ00@Z");
//};

//public: static bool s_static_array<struct c_status_line, 16>::valid<unsigned long>(unsigned long)
//{
//    mangled_ppc("??$valid@K@?$s_static_array@Uc_status_line@@$0BA@@@SA_NK@Z");
//};

//public: struct c_status_line & s_static_array<struct c_status_line, 16>::operator[]<unsigned long>(unsigned long)
//{
//    mangled_ppc("??$?AK@?$s_static_array@Uc_status_line@@$0BA@@@QAAAAUc_status_line@@K@Z");
//};

//public: static bool s_static_array<struct c_status_line, 1>::valid<int>(int)
//{
//    mangled_ppc("??$valid@H@?$s_static_array@Uc_status_line@@$00@@SA_NH@Z");
//};

//public: unsigned long * c_big_flags_typed_no_init<long, 65535>::get_writeable_bits_direct(void)
//{
//    mangled_ppc("?get_writeable_bits_direct@?$c_big_flags_typed_no_init@J$0PPPP@@@QAAPAKXZ");
//};

