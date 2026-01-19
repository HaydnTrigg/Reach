/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static enum e_tag_resource_page_datum_bit const c_flags_no_init<enum e_tag_resource_page_datum_bit, unsigned char, 7, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_tag_resource_page_datum_bit@@E$06Us_default_enum_string_resolver@@@@2W4e_tag_resource_page_datum_bit@@B"
// public: static int const c_enum_no_init<enum e_tag_resource_page_datum_state, unsigned char, 0, 5, struct s_default_enum_string_resolver>::k_minimum_value; // "?k_minimum_value@?$c_enum_no_init@W4e_tag_resource_page_datum_state@@E$0A@$04Us_default_enum_string_resolver@@@@2HB"
// public: static enum e_tag_resource_page_datum_state const c_enum_no_init<enum e_tag_resource_page_datum_state, unsigned char, 0, 5, struct s_default_enum_string_resolver>::k_maximum_value_plus_one; // "?k_maximum_value_plus_one@?$c_enum_no_init@W4e_tag_resource_page_datum_state@@E$0A@$04Us_default_enum_string_resolver@@@@2W4e_tag_resource_page_datum_state@@B"
// public: static int const c_enum_no_init<enum e_tag_resource_page_reservation, short, 0, 4, struct s_default_enum_string_resolver>::k_minimum_value; // "?k_minimum_value@?$c_enum_no_init@W4e_tag_resource_page_reservation@@F$0A@$03Us_default_enum_string_resolver@@@@2HB"
// public: static enum e_tag_resource_page_reservation const c_enum_no_init<enum e_tag_resource_page_reservation, short, 0, 4, struct s_default_enum_string_resolver>::k_maximum_value_plus_one; // "?k_maximum_value_plus_one@?$c_enum_no_init@W4e_tag_resource_page_reservation@@F$0A@$03Us_default_enum_string_resolver@@@@2W4e_tag_resource_page_reservation@@B"
// public: static long const s_static_array<unsigned __int64, 1500>::k_element_count; // "?k_element_count@?$s_static_array@_K$0FNM@@@2JB"
// public: static long const s_static_array<struct s_indirect_cache_file_read_request, 1500>::k_element_count; // "?k_element_count@?$s_static_array@Us_indirect_cache_file_read_request@@$0FNM@@@2JB"
// public: static long const s_static_array<struct s_tag_resource_location_handle_struct *, 1500>::k_element_count; // "?k_element_count@?$s_static_array@PAUs_tag_resource_location_handle_struct@@$0FNM@@@2JB"
// public: static long const s_static_array<enum e_indirect_cache_file_read_result, 1500>::k_element_count; // "?k_element_count@?$s_static_array@W4e_indirect_cache_file_read_result@@$0FNM@@@2JB"
// const c_synchronous_resource_io::`vftable'{for `c_indirect_cache_file_bulk_read_iterator'}; // "??_7c_synchronous_resource_io@@6Bc_indirect_cache_file_bulk_read_iterator@@@"
// const c_synchronous_resource_io::`vftable'{for `c_tag_resource_page_table::c_page_io_interface'}; // "??_7c_synchronous_resource_io@@6Bc_page_io_interface@c_tag_resource_page_table@@@"
// long g_debug_index_text; // "?g_debug_index_text@@3JA"

// public: void c_tag_resource_page_table::initialize(void);
// public: void c_tag_resource_page_table::dispose(void);
// public: void c_tag_resource_page_table::allocate_storage(unsigned long, class c_allocation_interface *);
// public: void c_tag_resource_page_table::initialize_for_new_map(unsigned long, class c_tag_resource_cache_file_reader *, class c_tag_resource_cache_file_datum_handler *, class c_tag_resource_cache_file_location_handler *, class c_tag_resource_cache_published_location_interface *, class c_allocation_interface *, class c_tag_resource_page_range_allocator *);
// public: void c_tag_resource_page_table::free_storage(void);
// public: void c_tag_resource_page_table::dispose_from_old_map(void);
// public: void c_tag_resource_page_table::prepare_for_disposal_from_old_map(class c_tag_resource_page_table_io_listener *);
// public: void c_tag_resource_page_table::begin_tracking_resource_page(struct s_tag_resource_location_handle_struct *);
// public: void c_tag_resource_page_table::end_tracking_resource_page(struct s_tag_resource_location_handle_struct *);
// public: void c_tag_resource_page_table::add_resource_page_control_reference(struct s_tag_resource_location_handle_struct *);
// public: void c_tag_resource_page_table::remove_resource_page_control_reference(struct s_tag_resource_location_handle_struct *);
// public: void c_tag_resource_page_table::report_memory_usage(class c_formatted_output *);
// public: static void `public: void c_tag_resource_page_table::report_memory_usage(class c_formatted_output *)'::`12'::c_lruv_debug_dump_procs::lruv_header_proc(void *, class c_formatted_output *);
// public: static char const * `public: void c_tag_resource_page_table::report_memory_usage(class c_formatted_output *)'::`12'::c_lruv_debug_dump_procs::lruv_name_block_proc(void *, void *, char *, long, long);
// public: void c_tag_resource_page_table::report_memory_brief(class c_wrapped_array<char>);
// public: unsigned long c_tag_resource_page_table::get_used_memory_size_from_handle(struct s_tag_resource_location_handle_struct *);
// public: void c_tag_resource_page_table::persist_pages(class c_tag_resource_cache_file_page_persister *);
// public: void c_tag_resource_page_table::restore_pages(class c_tag_resource_cache_file_page_restorer *, class c_tag_resource_page_table_io_listener *);
// private: void c_tag_resource_page_table::restore_page(struct s_tag_resource_location_handle_struct *, class c_basic_buffer<void>, bool, class c_tag_resource_page_table_io_listener *);
// void io_result_update_from_page(class c_io_result *, class c_tag_resource_page_table::c_tag_resource_page_datum);
// private: bool c_tag_resource_page_table::load_required_pages_synchronous_io(class c_tag_resource_page_table_io_listener *, bool, bool, class c_io_result *);
// public: c_synchronous_resource_io::c_synchronous_resource_io(class c_tag_resource_page_table *, class c_tag_resource_cache_file_reader *, class c_tag_resource_cache_file_location_handler *);
// public: virtual bool c_synchronous_resource_io::request_data(struct s_tag_resource_location_handle_struct *, struct s_indirect_cache_file_read_request const *);
// public: bool c_synchronous_resource_io::block_until_done(void);
// public: bool c_synchronous_resource_io::any_outstanding_requests(void);
// public: unsigned long c_synchronous_resource_io::get_request_count(void) const;
// public: struct s_tag_resource_location_handle_struct * c_synchronous_resource_io::get_page_handle(unsigned long);
// public: enum e_indirect_cache_file_read_result c_synchronous_resource_io::get_request_result(unsigned long) const;
// private: virtual void c_synchronous_resource_io::reset(void);
// private: virtual bool c_synchronous_resource_io::next(struct s_indirect_cache_file_read_request *, unsigned long *);
// private: virtual void c_synchronous_resource_io::read_progress(unsigned long, bool);
// private: virtual void c_synchronous_resource_io::finished(unsigned long, enum e_indirect_cache_file_read_result);
// private: unsigned long c_synchronous_resource_io::get_actual_request_index(unsigned long) const;
// unsigned long extract_low_dword(unsigned __int64);
// public: c_tag_resource_page_table::c_page_io_interface::c_page_io_interface(void);
// public: c_indirect_cache_file_bulk_read_iterator::c_indirect_cache_file_bulk_read_iterator(void);
// private: bool c_tag_resource_page_table::load_required_pages_nonblocking_io(class c_tag_resource_page_table_io_listener *, bool, bool, class c_io_result *);
// public: bool c_tag_resource_page_table::load_required_pages(class c_tag_resource_page_table_io_listener *, bool, bool, class c_io_result *);
// public: bool c_tag_resource_page_table::resize(unsigned long, unsigned long, unsigned long, bool, bool *);
// public: void c_tag_resource_page_table::ensure_required_space(void);
// public: unsigned long c_tag_resource_page_table::get_total_available_size(void);
// public: class c_tag_resource_page_table_control_interface * c_tag_resource_page_table::get_control_interface(void);
// private: void c_tag_resource_page_table::request_page_internal(struct s_tag_resource_location_handle_struct *, class c_tag_resource_page_table::c_page_io_interface *, class c_tag_resource_page_table_io_listener *);
// public: void c_tag_resource_page_table::update_status_lines(void);
// public: void c_tag_resource_page_table::idle(void);
// public: bool c_tag_resource_page_table::run_defrag_loop(void);
// public: void c_tag_resource_page_table::verify_internal_state(void);
// public: void c_tag_resource_page_table::validate_all_pages(void);
// private: bool c_tag_resource_page_table::request_page_async(struct s_tag_resource_location_handle_struct *, struct s_indirect_cache_file_read_request const *);
// public: void c_tag_resource_page_table::demand_page(struct s_tag_resource_location_handle_struct *, unsigned long, class c_tag_resource_page_table_io_listener *);
// public: void c_tag_resource_page_table::touch_page(struct s_tag_resource_location_handle_struct *);
// public: bool c_tag_resource_page_table::page_failed_to_load(struct s_tag_resource_location_handle_struct *);
// public: long c_tag_resource_page_table::get_resource_page_lruv_block_index(struct s_tag_resource_location_handle_struct *);
// public: void c_tag_resource_page_table::get_necessary_and_allocated_resource_space(unsigned long *, unsigned long *, unsigned long *, unsigned long *);
// public: void c_tag_resource_page_table::get_necessary_resource_space(unsigned long *, unsigned long *, unsigned long *, unsigned long *);
// public: bool c_tag_resource_page_table::can_demand_more_pages_for_io(void);
// public: bool c_tag_resource_page_table::can_demand_more_pages(void);
// public: bool c_tag_resource_page_table::lock_prefetch_pages(bool);
// public: void c_tag_resource_page_table::reset_due_to_zone_state_changes(void);
// public: void c_tag_resource_page_table::try_to_load_more_pending_pages(class c_tag_resource_page_table_io_listener *);
// public: unsigned long c_tag_resource_page_table::get_prefetch_paging_size(void);
// public: float c_tag_resource_page_table::prefetch_paging_progress(void);
// public: bool c_tag_resource_page_table::all_pending_pages_processed(void);
// private: void c_tag_resource_page_table::advance_to_next_unread_allocated_pending_page(void);
// public: void c_tag_resource_page_table::signal_stop_prefetching(void);
// public: void c_tag_resource_page_table::restart_prefetching(void);
// public: bool c_tag_resource_page_table::prefetching_is_idle(void);
// public: void c_tag_resource_page_table::update_async_requests(class c_tag_resource_page_table_io_listener *);
// private: void c_tag_resource_page_table::set_page_state(struct s_tag_resource_location_handle_struct *, enum e_tag_resource_page_datum_state);
// private: void c_tag_resource_page_table::mark_valid_page(struct s_tag_resource_location_handle_struct *, class c_tag_resource_page_table_io_listener *);
// private: void c_tag_resource_page_table::mark_valid_page_internal(struct s_tag_resource_location_handle_struct *, bool, class c_tag_resource_page_table_io_listener *);
// public: void c_tag_resource_page_table::mark_prefetch_pages(class c_tag_resource_cache_file_prefetch_set *);
// public: bool c_tag_resource_page_table::async_requests_are_done(void);
// private: void c_tag_resource_page_table::block_until_async_requests_done(class c_tag_resource_page_table_io_listener *);
// private: bool c_tag_resource_page_table::build_page_read_request(struct s_tag_resource_location_handle_struct *, struct s_indirect_cache_file_read_request *);
// public: void c_tag_resource_page_table::flush_all_unnecessary_pages(void);
// public: unsigned long c_tag_resource_page_table::flush_optional_pages(unsigned long, bool);
// public: void c_tag_resource_page_table::flush_unlocked_pages(void);
// public: void c_tag_resource_page_table::try_to_buyback_memory_from_optional_pages(unsigned long);
// public: void c_tag_resource_page_table::try_to_buyback_memory_from_unused_pages(unsigned long);
// public: void c_tag_resource_page_table::try_to_reclaim_memory(void);
// public: class c_basic_buffer<void> c_tag_resource_page_table::try_to_steal_memory(unsigned long);
// public: void c_tag_resource_page_table::return_memory(class c_basic_buffer<void>);
// public: void c_tag_resource_page_table::defragment_pages(void);
// public: void c_tag_resource_page_table::defragment_pages_keep_optional_up(long);
// public: void c_tag_resource_page_table::shrink_to_used_size(void);
// public: void c_tag_resource_page_table::release_physical_allocation(void);
// private: void c_tag_resource_page_table::move_page_data(struct s_tag_resource_location_handle_struct *, class c_basic_buffer<void>, class c_basic_buffer<void>);
// private: void c_tag_resource_page_table::clone_page_data(struct s_tag_resource_location_handle_struct *, class c_basic_buffer<void>, class c_basic_buffer<void>);
// private: class c_tag_resource_page_table::c_tag_resource_page_datum c_tag_resource_page_table::get_resource_page_from_handle(struct s_tag_resource_location_handle_struct *) const;
// private: class c_tag_resource_page_table::c_tag_resource_page_datum c_tag_resource_page_table::get_resource_page_from_page_iterator(class c_data_iterator<void> const &) const;
// public: void c_tag_resource_page_table::cancel_async_and_block_until_async_done(class c_tag_resource_page_table_io_listener *);
// public: unsigned long c_tag_resource_page_table::align_to_page_size(unsigned long);
// public: bool c_tag_resource_page_table::can_get_page_data(struct s_tag_resource_location_handle_struct *);
// public: class c_basic_buffer<void> c_tag_resource_page_table::get_page_data_slow(struct s_tag_resource_location_handle_struct *);
// public: long c_tag_resource_page_table::get_page_snapshot(struct s_tag_resource_location_handle_struct *);
// public: unsigned long c_tag_resource_page_table::get_page_size(struct s_tag_resource_location_handle_struct *);
// public: bool c_tag_resource_page_table::page_needs_byteswapping(struct s_tag_resource_location_handle_struct *);
// public: void c_tag_resource_page_table::set_page_always_needs_byteswapping(struct s_tag_resource_location_handle_struct *, bool);
// public: void c_tag_resource_page_table::set_page_currently_needs_byteswapping(struct s_tag_resource_location_handle_struct *, bool);
// public: class c_wrapped_flags const & c_tag_resource_page_table::get_ready_pages(void) const;
// public: void c_tag_resource_page_table::advance_cache_frame(void);
// private: bool c_tag_resource_page_table::reserve_page_data(struct s_tag_resource_location_handle_struct *, class c_tag_resource_page_table_io_listener *);
// private: bool c_tag_resource_page_table::allocate_page_data(struct s_tag_resource_location_handle_struct *);
// private: void c_tag_resource_page_table::flush_page_data(struct s_tag_resource_location_handle_struct *);
// private: void c_tag_resource_page_table::flush_page_data_no_notification(struct s_tag_resource_location_handle_struct *);
// private: void c_tag_resource_page_table::set_page_reservation(struct s_tag_resource_location_handle_struct *, enum e_tag_resource_page_reservation);
// private: bool c_tag_resource_page_table::page_reservation_is_at_least(struct s_tag_resource_location_handle_struct *, enum e_tag_resource_page_reservation);
// private: bool c_tag_resource_page_table::page_reservation_is_at_most(struct s_tag_resource_location_handle_struct *, enum e_tag_resource_page_reservation);
// private: void c_tag_resource_page_table::pin_page(struct s_tag_resource_location_handle_struct *);
// private: void c_tag_resource_page_table::unpin_page(struct s_tag_resource_location_handle_struct *);
// private: bool c_tag_resource_page_table::page_is_usable(struct s_tag_resource_location_handle_struct *);
// private: bool c_tag_resource_page_table::page_is_pinned(struct s_tag_resource_location_handle_struct *);
// private: bool c_tag_resource_page_table::page_is_valid_but_not_loaded(struct s_tag_resource_location_handle_struct *);
// private: bool c_tag_resource_page_table::page_is_loading(struct s_tag_resource_location_handle_struct *);
// private: void c_tag_resource_page_table::lruv_delete_tag_resource_page(struct s_tag_resource_location_handle_struct *, bool);
// private: bool c_tag_resource_page_table::lruv_is_tag_resource_page_locked(struct s_tag_resource_location_handle_struct *);
// private: void c_tag_resource_page_table::lruv_move_tag_resource_page(struct s_tag_resource_location_handle_struct *, unsigned long, unsigned long);
// private: bool c_tag_resource_page_table::lruv_clone_tag_resource_page(struct s_tag_resource_location_handle_struct *, long, unsigned long, unsigned long);
// private: void c_tag_resource_page_table_control_interface::initialize_for_new_map(class c_tag_resource_page_table *);
// private: void c_tag_resource_page_table_control_interface::dispose_from_old_map(void);
// public: unsigned long c_tag_resource_page_table_control_interface::align_page_size(unsigned long);
// public: void c_tag_resource_page_table_control_interface::set_page_reservation(struct s_tag_resource_location_handle_struct *, enum e_tag_resource_page_reservation);
// public: bool c_tag_resource_page_table_control_interface::page_reservation_is_at_least(struct s_tag_resource_location_handle_struct *, enum e_tag_resource_page_reservation);
// public: bool c_tag_resource_page_table_control_interface::page_reservation_is_at_most(struct s_tag_resource_location_handle_struct *, enum e_tag_resource_page_reservation);
// public: void c_tag_resource_page_table_control_interface::pin_page(struct s_tag_resource_location_handle_struct *);
// public: void c_tag_resource_page_table_control_interface::unpin_page(struct s_tag_resource_location_handle_struct *);
// public: bool c_tag_resource_page_table_control_interface::verify_page_is_pinned(struct s_tag_resource_location_handle_struct *);
// public: void c_tag_resource_page_table_control_interface::demand_page(struct s_tag_resource_location_handle_struct *, unsigned long, class c_tag_resource_page_table_io_listener *);
// public: void c_tag_resource_page_table_control_interface::touch_page(struct s_tag_resource_location_handle_struct *);
// public: bool c_tag_resource_page_table_control_interface::page_failed_to_load(struct s_tag_resource_location_handle_struct *);
// public: bool c_tag_resource_page_table_control_interface::can_demand_more_pages(void);
// public: bool c_tag_resource_page_table_control_interface::valid_page_not_loaded(struct s_tag_resource_location_handle_struct *);
// public: bool c_tag_resource_page_table_control_interface::page_is_loading(struct s_tag_resource_location_handle_struct *);
// public: bool c_tag_resource_page_table_control_interface::page_loaded(struct s_tag_resource_location_handle_struct *);
// public: class c_basic_buffer<void> c_tag_resource_page_table_control_interface::get_page_buffer_slow(struct s_tag_resource_location_handle_struct *);
// public: long c_tag_resource_page_table_control_interface::get_page_snapshot(struct s_tag_resource_location_handle_struct *);
// public: unsigned long c_tag_resource_page_table_control_interface::get_page_size(struct s_tag_resource_location_handle_struct *);
// public: bool c_tag_resource_page_table_control_interface::page_needs_byteswapping(struct s_tag_resource_location_handle_struct *);
// public: void c_tag_resource_page_table_control_interface::set_page_needs_byteswapping(struct s_tag_resource_location_handle_struct *, bool);
// public: class c_wrapped_flags const & c_tag_resource_page_table_control_interface::get_ready_pages(void);
// public: void c_tag_resource_page_table_control_interface::advance_cache_frame(void);
// private: static bool c_tag_resource_page_table::page_handle_is_valid_handle(struct s_tag_resource_location_handle_struct *);
// private: void c_tag_resource_page_table::c_tag_resource_page_table_lruv_handler::initialize_for_new_map(class c_tag_resource_page_table *);
// private: void c_tag_resource_page_table::c_tag_resource_page_table_lruv_handler::dispose_from_old_map(void);
// public: void c_tag_resource_page_table::c_tag_resource_page_table_lruv_handler::on_delete_tag_resource_page(long, bool);
// public: bool c_tag_resource_page_table::c_tag_resource_page_table_lruv_handler::on_is_tag_resource_page_locked(long);
// public: void c_tag_resource_page_table::c_tag_resource_page_table_lruv_handler::on_move_tag_resource_page(long, unsigned long, unsigned long);
// public: bool c_tag_resource_page_table::c_tag_resource_page_table_lruv_handler::on_clone_tag_resource_page(long, long, unsigned long, unsigned long);
// public: void c_tag_resource_page_table::c_tag_resource_lruv_cache::initialize(void);
// public: void c_tag_resource_page_table::c_tag_resource_lruv_cache::dispose(void);
// public: void c_tag_resource_page_table::c_tag_resource_lruv_cache::allocate_storage(long, unsigned long, class c_allocation_interface *);
// public: void c_tag_resource_page_table::c_tag_resource_lruv_cache::initialize_for_new_map(long, unsigned long, class c_tag_resource_page_range_allocator *, class c_allocation_interface *);
// public: void c_tag_resource_page_table::c_tag_resource_lruv_cache::free_storage(void);
// public: void c_tag_resource_page_table::c_tag_resource_lruv_cache::dispose_from_old_map(void);
// public: unsigned long c_tag_resource_page_table::c_tag_resource_lruv_cache::get_total_available_size(void) const;
// public: unsigned long c_tag_resource_page_table::c_tag_resource_lruv_cache::align_allocation_size(unsigned long);
// public: long c_tag_resource_page_table::c_tag_resource_lruv_cache::restore_page(class c_tag_resource_page_table::c_tag_resource_page_table_lruv_handler *, long, class c_basic_buffer<void>);
// public: long c_tag_resource_page_table::c_tag_resource_lruv_cache::allocate_page(class c_tag_resource_page_table::c_tag_resource_page_table_lruv_handler *, long, unsigned long, bool);
// private: long c_tag_resource_page_table::c_tag_resource_lruv_cache::allocate_block_at_index(long, long, long);
// private: long c_tag_resource_page_table::c_tag_resource_lruv_cache::restore_page_at_index(long, long, long);
// public: void c_tag_resource_page_table::c_tag_resource_lruv_cache::deallocate(long);
// private: void c_tag_resource_page_table::c_tag_resource_lruv_cache::connect_page_to_handler(long, class c_tag_resource_page_table::c_tag_resource_page_table_lruv_handler *, long);
// private: void c_tag_resource_page_table::c_tag_resource_lruv_cache::disconnect_page_from_handler(long);
// private: static void c_tag_resource_page_table::c_tag_resource_lruv_cache::lruv_delete_block_thunk(void *, long, bool, bool);
// private: void c_tag_resource_page_table::c_tag_resource_lruv_cache::lruv_delete_block(long, bool, bool);
// private: static bool c_tag_resource_page_table::c_tag_resource_lruv_cache::lruv_is_block_locked_thunk(void *, long);
// private: bool c_tag_resource_page_table::c_tag_resource_lruv_cache::lruv_is_block_locked(long);
// private: static void c_tag_resource_page_table::c_tag_resource_lruv_cache::lruv_move_block_thunk(void *, long, unsigned long, unsigned long);
// private: void c_tag_resource_page_table::c_tag_resource_lruv_cache::lruv_move_block(long, unsigned long, unsigned long);
// private: static bool c_tag_resource_page_table::c_tag_resource_lruv_cache::lruv_clone_block_thunk(void *, long, long, unsigned long, unsigned long);
// private: bool c_tag_resource_page_table::c_tag_resource_lruv_cache::lruv_clone_block(long, long, unsigned long, unsigned long);
// public: void c_tag_resource_page_table::c_tag_resource_lruv_cache::compact(void);
// public: void c_tag_resource_page_table::c_tag_resource_lruv_cache::compact_keep_optional_up(long);
// public: void c_tag_resource_page_table::c_tag_resource_lruv_cache::idle(void);
// public: bool c_tag_resource_page_table::c_tag_resource_lruv_cache::defrag(class c_tag_resource_cache_published_location_interface *);
// public: bool c_tag_resource_page_table::c_tag_resource_lruv_cache::is_defrag_busy(void);
// public: void c_tag_resource_page_table::c_tag_resource_lruv_cache::update_status_lines(void);
// public: void c_tag_resource_page_table::c_tag_resource_lruv_cache::touch_page(long);
// public: void c_tag_resource_page_table::c_tag_resource_lruv_cache::mark_page_always_locked(long, bool);
// public: void c_tag_resource_page_table::c_tag_resource_lruv_cache::release_physical_allocation(void);
// public: void c_tag_resource_page_table::c_tag_resource_lruv_cache::make_entire_range_writeable(void);
// public: void c_tag_resource_page_table::c_tag_resource_lruv_cache::make_entire_range_read_only(void);
// public: void c_tag_resource_page_table::c_tag_resource_lruv_cache::make_page_writeable(long);
// public: void c_tag_resource_page_table::c_tag_resource_lruv_cache::make_page_read_only(long);
// public: unsigned long c_tag_resource_page_table::c_tag_resource_lruv_cache::get_used_size(void);
// public: unsigned long c_tag_resource_page_table::c_tag_resource_lruv_cache::get_potentially_available_extra_memory_size(void);
// public: void c_tag_resource_page_table::c_tag_resource_lruv_cache::try_to_buyback_unused_pages(unsigned long);
// public: void c_tag_resource_page_table::c_tag_resource_lruv_cache::try_to_reclaim_pages(void);
// public: void c_tag_resource_page_table::c_tag_resource_lruv_cache::shrink(unsigned long);
// public: bool c_tag_resource_page_table::c_tag_resource_lruv_cache::resize(unsigned long, unsigned long, unsigned long, bool, bool *);
// public: bool c_tag_resource_page_table::c_tag_resource_lruv_cache::grab_restore_buffer(class c_basic_buffer<void>);
// public: unsigned long c_tag_resource_page_table::c_tag_resource_lruv_cache::get_page_index(long) const;
// public: unsigned long c_tag_resource_page_table::c_tag_resource_lruv_cache::get_block_size(long) const;
// public: class c_basic_buffer<void> c_tag_resource_page_table::c_tag_resource_lruv_cache::get_page_buffer(unsigned long, unsigned long) const;
// public: class c_basic_buffer<void> c_tag_resource_page_table::c_tag_resource_lruv_cache::get_block_page_buffer(long) const;
// public: struct s_lruv_cache * c_tag_resource_page_table::c_tag_resource_lruv_cache::get_lruv_cache_for_lock(void);
// public: class c_basic_buffer<void> c_tag_resource_page_table::c_tag_resource_lruv_cache::try_to_steal_memory(unsigned long);
// public: void c_tag_resource_page_table::c_tag_resource_lruv_cache::return_memory(class c_basic_buffer<void>);
// public: bool c_tag_resource_page_table::c_tag_resource_lruv_cache::reverse_map_block_index(long, class c_tag_resource_page_table::c_tag_resource_page_table_lruv_handler **, long *) const;
// private: class c_tag_resource_page_range_allocator * c_tag_resource_page_table::c_tag_resource_lruv_cache::get_storage_allocator(void);
// public: struct s_lruv_cache * c_tag_resource_page_table::c_tag_resource_lruv_cache::get_lruv_cache_for_reporting(void);
// public: c_tag_resource_page_table::c_tag_resource_page_datum::c_tag_resource_page_datum(struct s_tag_resource_location_handle_struct *, struct s_tag_resource_page_datum *, class c_tag_resource_cache_file_location_handler *, class c_tag_resource_cache_published_location_interface *, class c_tag_resource_page_table::c_tag_resource_lruv_cache const *);
// public: bool c_tag_resource_page_table::c_tag_resource_page_datum::test_flag(enum e_tag_resource_page_datum_bit) const;
// public: bool s_tag_resource_page_datum::test_flag(enum e_tag_resource_page_datum_bit) const;
// public: void c_tag_resource_page_table::c_tag_resource_page_datum::set_flag(enum e_tag_resource_page_datum_bit, bool);
// public: void s_tag_resource_page_datum::set_flag(enum e_tag_resource_page_datum_bit, bool);
// public: enum e_tag_resource_page_datum_state c_tag_resource_page_table::c_tag_resource_page_datum::get_state(void) const;
// public: enum e_tag_resource_page_datum_state s_tag_resource_page_datum::get_state(void) const;
// public: void c_tag_resource_page_table::c_tag_resource_page_datum::set_state(enum e_tag_resource_page_datum_state);
// public: void s_tag_resource_page_datum::set_state(enum e_tag_resource_page_datum_state);
// public: void c_tag_resource_page_table::c_tag_resource_page_datum::set_priority(unsigned long);
// public: unsigned long c_tag_resource_page_table::c_tag_resource_page_datum::get_priority(void);
// public: class c_basic_buffer<void> const c_tag_resource_page_table::c_tag_resource_page_datum::get_buffer(void) const;
// public: class c_basic_buffer<void> const c_tag_resource_page_table::c_tag_resource_page_datum::get_allocated_buffer(void) const;
// private: class c_basic_buffer<void> const c_tag_resource_page_table::c_tag_resource_page_datum::get_lruv_page_buffer(void) const;
// public: void c_tag_resource_page_table::c_tag_resource_page_datum::set_page_buffer(class c_basic_buffer<void>);
// public: void c_tag_resource_page_table::c_tag_resource_page_datum::update_page_buffer_on_move(class c_basic_buffer<void>);
// public: void c_tag_resource_page_table::c_tag_resource_page_datum::update_page_buffer_on_clone(class c_basic_buffer<void>, long);
// public: void c_tag_resource_page_table::c_tag_resource_page_datum::clear_page_buffer(void);
// public: void c_tag_resource_page_table::c_tag_resource_page_datum::set_lruv_page_handle(long);
// public: void c_tag_resource_page_table::c_tag_resource_page_datum::clear_lruv_page_handle(void);
// public: bool c_tag_resource_page_table::c_tag_resource_page_datum::is_usable(void) const;
// public: bool c_tag_resource_page_table::c_tag_resource_page_datum::is_pending(void) const;
// public: enum e_tag_resource_page_reservation s_tag_resource_page_datum::get_reservation(void) const;
// public: bool c_tag_resource_page_table::c_tag_resource_page_datum::is_optional(void) const;
// public: bool c_tag_resource_page_table::c_tag_resource_page_datum::get_sub_location(struct s_indirect_cache_file_sub_location *) const;
// public: unsigned long c_tag_resource_page_table::c_tag_resource_page_datum::get_file_size(void) const;
// public: unsigned long c_tag_resource_page_table::c_tag_resource_page_datum::get_used_memory_size(void) const;
// public: bool c_tag_resource_page_table::c_tag_resource_page_datum::try_to_get_checksum(struct s_cache_file_resource_checksum *) const;
// public: unsigned __int64 c_tag_resource_page_table::c_tag_resource_page_datum::get_cache_location_identifier(void);
// public: bool c_tag_resource_page_table::c_tag_resource_page_datum::is_always_locked(void) const;
// public: bool c_tag_resource_page_table::c_tag_resource_page_datum::can_free_for_required_memory(void) const;
// public: bool c_tag_resource_page_table::c_tag_resource_page_datum::is_necessary(void) const;
// public: bool c_tag_resource_page_table::c_tag_resource_page_datum::is_potentially_active(void) const;
// public: bool c_tag_resource_page_table::c_tag_resource_page_datum::should_actually_prefetch(void) const;
// public: bool c_tag_resource_page_table::c_tag_resource_page_datum::address_is_pinned(void) const;
// public: bool c_tag_resource_page_table::c_tag_resource_page_datum::address_is_locked(void) const;
// public: bool c_tag_resource_page_table::c_tag_resource_page_datum::address_is_published(void) const;
// public: enum e_tag_resource_page_reservation c_tag_resource_page_table::c_tag_resource_page_datum::get_reservation(void) const;
// public: void c_tag_resource_page_table::c_tag_resource_page_datum::set_reservation(enum e_tag_resource_page_reservation);
// public: void s_tag_resource_page_datum::set_reservation(enum e_tag_resource_page_reservation);
// public: void c_tag_resource_page_table::c_tag_resource_page_datum::pin(void);
// public: void c_tag_resource_page_table::c_tag_resource_page_datum::unpin(void);
// public: void c_tag_resource_page_table::c_tag_resource_page_datum::add_control_reference(void);
// public: void c_tag_resource_page_table::c_tag_resource_page_datum::remove_control_reference(void);
// public: bool c_tag_resource_page_table::c_tag_resource_page_datum::any_control_references(void) const;
// public: struct s_tag_resource_location_handle_struct * c_tag_resource_page_table::c_tag_resource_page_datum::get_location_handle(void) const;
// public: long c_tag_resource_page_table::c_tag_resource_page_datum::get_page_handle_for_lruv_mapping(void) const;
// public: long c_tag_resource_page_table::c_tag_resource_page_datum::get_lruv_block_index(void) const;
// public: long c_tag_resource_page_table::c_tag_resource_page_datum::get_absolute_internal_index(void) const;
// public: bool c_tag_resource_page_table::c_tag_resource_page_datum::validate_buffer(void);
// public: bool c_tag_resource_page_table::c_tag_resource_page_datum::failed(void) const;
// public: void c_tag_resource_page_table::c_tag_resource_page_datum::clear_failures(void);
// public: class c_static_string<512> c_tag_resource_page_table::c_tag_resource_page_datum::describe_page(void);
// public: void c_wrapped_data_array<struct c_tag_resource_page_table::c_tag_resource_lruv_cache::s_lruv_block_reverse_mapping>::initialize(struct s_data_array *);
// public: void c_wrapped_data_array<struct c_tag_resource_page_table::c_tag_resource_lruv_cache::s_lruv_block_reverse_mapping>::dispose(void);
// public: struct c_tag_resource_page_table::c_tag_resource_lruv_cache::s_lruv_block_reverse_mapping const * c_wrapped_data_array<struct c_tag_resource_page_table::c_tag_resource_lruv_cache::s_lruv_block_reverse_mapping>::try_to_get(long) const;
// public: struct c_tag_resource_page_table::c_tag_resource_lruv_cache::s_lruv_block_reverse_mapping * c_wrapped_data_array<struct c_tag_resource_page_table::c_tag_resource_lruv_cache::s_lruv_block_reverse_mapping>::get_mutable(long);
// public: struct c_tag_resource_page_table::c_tag_resource_lruv_cache::s_lruv_block_reverse_mapping const * c_wrapped_data_array<struct c_tag_resource_page_table::c_tag_resource_lruv_cache::s_lruv_block_reverse_mapping>::get(long) const;
// public: struct s_data_array * c_wrapped_data_array<struct c_tag_resource_page_table::c_tag_resource_lruv_cache::s_lruv_block_reverse_mapping>::operator struct s_data_array *(void);
// public: struct s_data_array const * c_wrapped_data_array<struct c_tag_resource_page_table::c_tag_resource_lruv_cache::s_lruv_block_reverse_mapping>::get_data(void) const;
// public: struct s_data_array * c_smart_data_array<struct s_tag_resource_page_datum>::operator struct s_data_array *(void) const;
// public: struct s_data_array * c_smart_data_array<struct s_tag_resource_page_datum>::operator->(void);
// public: struct s_tag_resource_cache_file_async_read_datum * c_wrapped_data_array<struct s_tag_resource_cache_file_async_read_datum>::get_mutable(long);
// public: struct s_data_array * c_wrapped_data_array<struct s_tag_resource_cache_file_async_read_datum>::operator struct s_data_array *(void);
// public: struct s_data_array const * c_wrapped_data_array<struct s_tag_resource_cache_file_async_read_datum>::get_data(void) const;
// public: struct c_status_line * s_static_array<struct c_status_line, 7>::get_elements(void);
// public: static long s_static_array<struct c_status_line, 7>::get_count(void);
// public: c_enum<enum e_tag_resource_page_datum_state, unsigned char, 0, 5, struct s_default_enum_string_resolver>::c_enum<enum e_tag_resource_page_datum_state, unsigned char, 0, 5, struct s_default_enum_string_resolver>(enum e_tag_resource_page_datum_state);
// public: enum e_tag_resource_page_datum_state c_enum_no_init<enum e_tag_resource_page_datum_state, unsigned char, 0, 5, struct s_default_enum_string_resolver>::operator enum e_tag_resource_page_datum_state(void) const;
// public: void c_reference_count<short>::acquire(void);
// public: void c_reference_count<short>::release(void);
// public: bool c_reference_count<short>::locked(void) const;
// public: c_enum<enum e_tag_resource_page_reservation, short, 0, 4, struct s_default_enum_string_resolver>::c_enum<enum e_tag_resource_page_reservation, short, 0, 4, struct s_default_enum_string_resolver>(enum e_tag_resource_page_reservation);
// public: enum e_tag_resource_page_reservation c_enum_no_init<enum e_tag_resource_page_reservation, short, 0, 4, struct s_default_enum_string_resolver>::operator enum e_tag_resource_page_reservation(void) const;
// public: bool c_enum_no_init<enum e_tag_resource_page_reservation, short, 0, 4, struct s_default_enum_string_resolver>::operator==(enum e_tag_resource_page_reservation) const;
// public: c_static_sized_dynamic_array<unsigned __int64, 1500>::c_static_sized_dynamic_array<unsigned __int64, 1500>(void);
// public: unsigned __int64* c_static_sized_dynamic_array<unsigned __int64, 1500>::begin(void);
// public: unsigned __int64* c_static_sized_dynamic_array<unsigned __int64, 1500>::end(void);
// public: long c_static_sized_dynamic_array<unsigned __int64, 1500>::count(void) const;
// public: unsigned __int64& c_resizeable_array_operator_interface<class c_static_sized_dynamic_array<unsigned __int64, 1500>, unsigned __int64>::add_element(void);
// public: unsigned __int64const & c_array_operator_interface<class c_static_sized_dynamic_array<unsigned __int64, 1500>, unsigned __int64>::operator[](long) const;
// public: c_static_sized_dynamic_array<struct s_indirect_cache_file_read_request, 1500>::c_static_sized_dynamic_array<struct s_indirect_cache_file_read_request, 1500>(void);
// public: bool c_static_sized_dynamic_array<struct s_indirect_cache_file_read_request, 1500>::full(void) const;
// public: long c_static_sized_dynamic_array<struct s_indirect_cache_file_read_request, 1500>::count(void) const;
// public: struct s_indirect_cache_file_read_request & c_resizeable_array_operator_interface<class c_static_sized_dynamic_array<struct s_indirect_cache_file_read_request, 1500>, struct s_indirect_cache_file_read_request>::add_element(void);
// public: struct s_indirect_cache_file_read_request & c_array_operator_interface<class c_static_sized_dynamic_array<struct s_indirect_cache_file_read_request, 1500>, struct s_indirect_cache_file_read_request>::operator[](long);
// public: c_static_sized_dynamic_array<struct s_tag_resource_location_handle_struct *, 1500>::c_static_sized_dynamic_array<struct s_tag_resource_location_handle_struct *, 1500>(void);
// public: long c_static_sized_dynamic_array<struct s_tag_resource_location_handle_struct *, 1500>::count(void) const;
// public: struct s_tag_resource_location_handle_struct *& c_resizeable_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_resource_location_handle_struct *, 1500>, struct s_tag_resource_location_handle_struct *>::add_element(void);
// public: struct s_tag_resource_location_handle_struct *& c_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_resource_location_handle_struct *, 1500>, struct s_tag_resource_location_handle_struct *>::operator[](long);
// public: c_static_sized_dynamic_array<enum e_indirect_cache_file_read_result, 1500>::c_static_sized_dynamic_array<enum e_indirect_cache_file_read_result, 1500>(void);
// public: enum e_indirect_cache_file_read_result & c_resizeable_array_operator_interface<class c_static_sized_dynamic_array<enum e_indirect_cache_file_read_result, 1500>, enum e_indirect_cache_file_read_result>::add_element(void);
// public: enum e_indirect_cache_file_read_result & c_array_operator_interface<class c_static_sized_dynamic_array<enum e_indirect_cache_file_read_result, 1500>, enum e_indirect_cache_file_read_result>::operator[](long);
// public: enum e_indirect_cache_file_read_result const & c_array_operator_interface<class c_static_sized_dynamic_array<enum e_indirect_cache_file_read_result, 1500>, enum e_indirect_cache_file_read_result>::operator[](long) const;
// public: c_tag_resource_page_table_io_wrapper<bool & (c_tag_resource_page_table::request_page_async::*)(struct s_tag_resource_location_handle_struct *, struct s_indirect_cache_file_read_request const *)>::c_tag_resource_page_table_io_wrapper<bool & (c_tag_resource_page_table::request_page_async::*)(struct s_tag_resource_location_handle_struct *, struct s_indirect_cache_file_read_request const *)>(class c_tag_resource_page_table *);
// public: virtual bool c_tag_resource_page_table_io_wrapper<bool & (c_tag_resource_page_table::request_page_async::*)(struct s_tag_resource_location_handle_struct *, struct s_indirect_cache_file_read_request const *)>::request_data(struct s_tag_resource_location_handle_struct *, struct s_indirect_cache_file_read_request const *);
// public: void c_data_iterator<struct s_tag_resource_cache_file_async_read_datum>::begin(struct s_data_array *);
// public: bool c_data_iterator<struct s_tag_resource_cache_file_async_read_datum>::next(void);
// public: struct s_tag_resource_cache_file_async_read_datum * c_data_iterator<struct s_tag_resource_cache_file_async_read_datum>::get_datum(void) const;
// public: long c_data_iterator<struct s_tag_resource_cache_file_async_read_datum>::get_index(void) const;
// public: s_static_array<struct s_indirect_cache_file_read_request, 1500>::s_static_array<struct s_indirect_cache_file_read_request, 1500>(void);
// public: struct s_data_array * c_smart_data_array<struct c_tag_resource_page_table::c_tag_resource_lruv_cache::s_lruv_block_reverse_mapping>::operator struct s_data_array *(void) const;
// public: struct s_data_array * c_smart_data_array<struct c_tag_resource_page_table::c_tag_resource_lruv_cache::s_lruv_block_reverse_mapping>::operator->(void);
// public: class c_smart_data_array<struct c_tag_resource_page_table::c_tag_resource_lruv_cache::s_lruv_block_reverse_mapping> & c_smart_data_array<struct c_tag_resource_page_table::c_tag_resource_lruv_cache::s_lruv_block_reverse_mapping>::operator=(struct s_data_array *);
// public: struct s_data_array * c_smart_data_array<struct s_tag_resource_cache_file_async_read_datum>::operator struct s_data_array *(void) const;
// public: unsigned __int64const * c_static_sized_dynamic_array<unsigned __int64, 1500>::begin(void) const;
// public: long c_resizeable_array_operator_interface<class c_static_sized_dynamic_array<unsigned __int64, 1500>, unsigned __int64>::new_element_index(void);
// public: unsigned __int64* c_array_operator_interface<class c_static_sized_dynamic_array<unsigned __int64, 1500>, unsigned __int64>::get_element(long);
// public: bool c_array_operator_interface<class c_static_sized_dynamic_array<unsigned __int64, 1500>, unsigned __int64>::valid_index(long) const;
// public: class c_static_sized_dynamic_array<unsigned __int64, 1500> const * c_recursive_template_pattern<class c_static_sized_dynamic_array<unsigned __int64, 1500> >::get_super_class(void) const;
// public: unsigned __int64* s_static_array<unsigned __int64, 1500>::begin(void);
// public: struct s_indirect_cache_file_read_request * c_static_sized_dynamic_array<struct s_indirect_cache_file_read_request, 1500>::begin(void);
// public: long c_resizeable_array_operator_interface<class c_static_sized_dynamic_array<struct s_indirect_cache_file_read_request, 1500>, struct s_indirect_cache_file_read_request>::new_element_index(void);
// public: struct s_indirect_cache_file_read_request * c_array_operator_interface<class c_static_sized_dynamic_array<struct s_indirect_cache_file_read_request, 1500>, struct s_indirect_cache_file_read_request>::get_element(long);
// public: bool c_array_operator_interface<class c_static_sized_dynamic_array<struct s_indirect_cache_file_read_request, 1500>, struct s_indirect_cache_file_read_request>::valid_index(long) const;
// public: class c_static_sized_dynamic_array<struct s_indirect_cache_file_read_request, 1500> * c_recursive_template_pattern<class c_static_sized_dynamic_array<struct s_indirect_cache_file_read_request, 1500> >::get_super_class(void);
// public: static long s_static_array<struct s_indirect_cache_file_read_request, 1500>::get_count(void);
// public: struct s_tag_resource_location_handle_struct ** c_static_sized_dynamic_array<struct s_tag_resource_location_handle_struct *, 1500>::begin(void);
// public: long c_resizeable_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_resource_location_handle_struct *, 1500>, struct s_tag_resource_location_handle_struct *>::new_element_index(void);
// public: struct s_tag_resource_location_handle_struct ** c_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_resource_location_handle_struct *, 1500>, struct s_tag_resource_location_handle_struct *>::get_element(long);
// public: bool c_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_resource_location_handle_struct *, 1500>, struct s_tag_resource_location_handle_struct *>::valid_index(long) const;
// public: class c_static_sized_dynamic_array<struct s_tag_resource_location_handle_struct *, 1500> * c_recursive_template_pattern<class c_static_sized_dynamic_array<struct s_tag_resource_location_handle_struct *, 1500> >::get_super_class(void);
// public: enum e_indirect_cache_file_read_result * c_static_sized_dynamic_array<enum e_indirect_cache_file_read_result, 1500>::begin(void);
// public: enum e_indirect_cache_file_read_result const * c_static_sized_dynamic_array<enum e_indirect_cache_file_read_result, 1500>::begin(void) const;
// public: long c_resizeable_array_operator_interface<class c_static_sized_dynamic_array<enum e_indirect_cache_file_read_result, 1500>, enum e_indirect_cache_file_read_result>::new_element_index(void);
// public: enum e_indirect_cache_file_read_result * c_array_operator_interface<class c_static_sized_dynamic_array<enum e_indirect_cache_file_read_result, 1500>, enum e_indirect_cache_file_read_result>::get_element(long);
// public: bool c_array_operator_interface<class c_static_sized_dynamic_array<enum e_indirect_cache_file_read_result, 1500>, enum e_indirect_cache_file_read_result>::valid_index(long) const;
// public: class c_static_sized_dynamic_array<enum e_indirect_cache_file_read_result, 1500> * c_recursive_template_pattern<class c_static_sized_dynamic_array<enum e_indirect_cache_file_read_result, 1500> >::get_super_class(void);
// public: class c_static_sized_dynamic_array<enum e_indirect_cache_file_read_result, 1500> const * c_recursive_template_pattern<class c_static_sized_dynamic_array<enum e_indirect_cache_file_read_result, 1500> >::get_super_class(void) const;
// public: long c_static_sized_dynamic_array<unsigned __int64, 1500>::new_element_index(void);
// private: class c_static_sized_dynamic_array<unsigned __int64, 1500> * c_resizeable_array_operator_interface<class c_static_sized_dynamic_array<unsigned __int64, 1500>, unsigned __int64>::get_super_class(void);
// public: unsigned __int64* c_array_operator_interface<class c_static_sized_dynamic_array<unsigned __int64, 1500>, unsigned __int64>::begin(void);
// public: long c_array_operator_interface<class c_static_sized_dynamic_array<unsigned __int64, 1500>, unsigned __int64>::count(void) const;
// public: unsigned __int64const * s_static_array<unsigned __int64, 1500>::begin(void) const;
// public: long c_static_sized_dynamic_array<struct s_indirect_cache_file_read_request, 1500>::new_element_index(void);
// private: class c_static_sized_dynamic_array<struct s_indirect_cache_file_read_request, 1500> * c_resizeable_array_operator_interface<class c_static_sized_dynamic_array<struct s_indirect_cache_file_read_request, 1500>, struct s_indirect_cache_file_read_request>::get_super_class(void);
// public: struct s_indirect_cache_file_read_request * c_array_operator_interface<class c_static_sized_dynamic_array<struct s_indirect_cache_file_read_request, 1500>, struct s_indirect_cache_file_read_request>::begin(void);
// public: long c_array_operator_interface<class c_static_sized_dynamic_array<struct s_indirect_cache_file_read_request, 1500>, struct s_indirect_cache_file_read_request>::count(void) const;
// public: struct s_indirect_cache_file_read_request * s_static_array<struct s_indirect_cache_file_read_request, 1500>::begin(void);
// public: long c_static_sized_dynamic_array<struct s_tag_resource_location_handle_struct *, 1500>::new_element_index(void);
// private: class c_static_sized_dynamic_array<struct s_tag_resource_location_handle_struct *, 1500> * c_resizeable_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_resource_location_handle_struct *, 1500>, struct s_tag_resource_location_handle_struct *>::get_super_class(void);
// public: struct s_tag_resource_location_handle_struct ** c_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_resource_location_handle_struct *, 1500>, struct s_tag_resource_location_handle_struct *>::begin(void);
// public: long c_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_resource_location_handle_struct *, 1500>, struct s_tag_resource_location_handle_struct *>::count(void) const;
// public: struct s_tag_resource_location_handle_struct ** s_static_array<struct s_tag_resource_location_handle_struct *, 1500>::begin(void);
// public: long c_static_sized_dynamic_array<enum e_indirect_cache_file_read_result, 1500>::new_element_index(void);
// private: class c_static_sized_dynamic_array<enum e_indirect_cache_file_read_result, 1500> * c_resizeable_array_operator_interface<class c_static_sized_dynamic_array<enum e_indirect_cache_file_read_result, 1500>, enum e_indirect_cache_file_read_result>::get_super_class(void);
// public: enum e_indirect_cache_file_read_result * c_array_operator_interface<class c_static_sized_dynamic_array<enum e_indirect_cache_file_read_result, 1500>, enum e_indirect_cache_file_read_result>::begin(void);
// public: long c_array_operator_interface<class c_static_sized_dynamic_array<enum e_indirect_cache_file_read_result, 1500>, enum e_indirect_cache_file_read_result>::count(void) const;
// public: enum e_indirect_cache_file_read_result * s_static_array<enum e_indirect_cache_file_read_result, 1500>::begin(void);
// public: enum e_indirect_cache_file_read_result const * s_static_array<enum e_indirect_cache_file_read_result, 1500>::begin(void) const;
// public: class c_static_sized_dynamic_array<unsigned __int64, 1500> * c_recursive_template_pattern<class c_static_sized_dynamic_array<unsigned __int64, 1500> >::get_super_class(void);
// public: class c_static_sized_dynamic_array<struct s_indirect_cache_file_read_request, 1500> const * c_recursive_template_pattern<class c_static_sized_dynamic_array<struct s_indirect_cache_file_read_request, 1500> >::get_super_class(void) const;
// public: class c_static_sized_dynamic_array<struct s_tag_resource_location_handle_struct *, 1500> const * c_recursive_template_pattern<class c_static_sized_dynamic_array<struct s_tag_resource_location_handle_struct *, 1500> >::get_super_class(void) const;
// public: long c_static_sized_dynamic_array<enum e_indirect_cache_file_read_result, 1500>::count(void) const;
// public: bool c_flags_no_init<enum e_tag_resource_page_datum_bit, unsigned char, 7, struct s_default_enum_string_resolver>::test(enum e_tag_resource_page_datum_bit) const;
// public: void c_flags_no_init<enum e_tag_resource_page_datum_bit, unsigned char, 7, struct s_default_enum_string_resolver>::set(enum e_tag_resource_page_datum_bit, bool);
// struct s_allocation_description_holder make_allocation_description<struct s_tag_resource_page_datum>(class c_smart_data_array<struct s_tag_resource_page_datum> &, char const *, long, char const *, long);
// struct s_allocation_description_holder make_allocation_description<struct s_tag_resource_cache_file_async_read_datum>(class c_wrapped_data_array<struct s_tag_resource_cache_file_async_read_datum> &, char const *, long, char const *, long);
// void std::sort<unsigned __int64*>(unsigned __int64*, unsigned __int64*);
// public: struct c_status_line & s_static_array<struct c_status_line, 7>::operator[]<int>(int);
// public: static bool s_static_array<unsigned __int64, 1500>::valid<long>(long);
// public: static bool s_static_array<struct s_indirect_cache_file_read_request, 1500>::valid<long>(long);
// public: static bool s_static_array<struct s_tag_resource_location_handle_struct *, 1500>::valid<long>(long);
// public: static bool s_static_array<enum e_indirect_cache_file_read_result, 1500>::valid<long>(long);
// public: struct s_data_array *& c_smart_data_array<struct s_tag_resource_page_datum>::get_restricted_data_array_address(void);
// public: struct s_data_array *& c_wrapped_data_array<struct s_tag_resource_cache_file_async_read_datum>::get_data_array_reference(void);
// public: struct s_data_array *& c_smart_data_array<struct s_tag_resource_cache_file_async_read_datum>::get_restricted_data_array_address(void);
// public: static bool c_flags_no_init<enum e_tag_resource_page_datum_bit, unsigned char, 7, struct s_default_enum_string_resolver>::valid_bit(enum e_tag_resource_page_datum_bit);
// private: static unsigned char c_flags_no_init<enum e_tag_resource_page_datum_bit, unsigned char, 7, struct s_default_enum_string_resolver>::flag_size_type(enum e_tag_resource_page_datum_bit);
// void std::_Sort<unsigned __int64*, int>(unsigned __int64*, unsigned __int64*, int);
// public: static bool s_static_array<struct c_status_line, 7>::valid<int>(int);
// struct std::pair<unsigned __int64*, unsigned __int64*> std::_Unguarded_partition<unsigned __int64*>(unsigned __int64*, unsigned __int64*);
// void std::make_heap<unsigned __int64*>(unsigned __int64*, unsigned __int64*);
// void std::sort_heap<unsigned __int64*>(unsigned __int64*, unsigned __int64*);
// void std::_Insertion_sort<unsigned __int64*>(unsigned __int64*, unsigned __int64*);
// public: std::pair<unsigned __int64*, unsigned __int64*>::pair<unsigned __int64*, unsigned __int64*>(unsigned __int64*const &, unsigned __int64*const &);
// void std::_Median<unsigned __int64*>(unsigned __int64*, unsigned __int64*, unsigned __int64*);
// bool std::_Debug_lt<unsigned __int64, unsigned __int64>(unsigned __int64&, unsigned __int64&, wchar_t const *, unsigned int);
// void std::iter_swap<unsigned __int64*, unsigned __int64*>(unsigned __int64*, unsigned __int64*);
// int * std::_Dist_type<unsigned __int64*>(unsigned __int64*);
// unsigned __int64* std::_Val_type<unsigned __int64*>(unsigned __int64*);
// void std::_Make_heap<unsigned __int64*, int, unsigned __int64>(unsigned __int64*, unsigned __int64*, int *, unsigned __int64*);
// void std::_Debug_heap<unsigned __int64*>(unsigned __int64*, unsigned __int64*);
// void std::_Sort_heap<unsigned __int64*>(unsigned __int64*, unsigned __int64*);
// void std::_Insertion_sort1<unsigned __int64*, unsigned __int64>(unsigned __int64*, unsigned __int64*, unsigned __int64*);
// void std::_Med3<unsigned __int64*>(unsigned __int64*, unsigned __int64*, unsigned __int64*);
// void std::swap<unsigned __int64>(unsigned __int64&, unsigned __int64&);
// void std::_Adjust_heap<unsigned __int64*, int, unsigned __int64>(unsigned __int64*, int, int, unsigned __int64);
// void std::pop_heap<unsigned __int64*>(unsigned __int64*, unsigned __int64*);
// unsigned __int64* stdext::unchecked_copy_backward<unsigned __int64*, unsigned __int64*>(unsigned __int64*, unsigned __int64*, unsigned __int64*);
// void std::_Push_heap<unsigned __int64*, int, unsigned __int64>(unsigned __int64*, int, int, unsigned __int64);
// void std::_Pop_heap_0<unsigned __int64*, unsigned __int64>(unsigned __int64*, unsigned __int64*, unsigned __int64*);
// struct std::random_access_iterator_tag std::_Iter_random<unsigned __int64*, unsigned __int64*>(unsigned __int64*const &, unsigned __int64*const &);
// struct std::_Scalar_ptr_iterator_tag std::_Ptr_cat<unsigned __int64*, unsigned __int64*>(unsigned __int64*&, unsigned __int64*&);
// unsigned __int64* std::_Copy_backward_opt<unsigned __int64*, unsigned __int64*, struct std::random_access_iterator_tag>(unsigned __int64*, unsigned __int64*, unsigned __int64*, struct std::random_access_iterator_tag, struct std::_Scalar_ptr_iterator_tag, struct std::_Range_checked_iterator_tag);
// void std::_Pop_heap<unsigned __int64*, int, unsigned __int64>(unsigned __int64*, unsigned __int64*, unsigned __int64*, unsigned __int64, int *);

//public: void c_tag_resource_page_table::initialize(void)
//{
//    mangled_ppc("?initialize@c_tag_resource_page_table@@QAAXXZ");
//};

//public: void c_tag_resource_page_table::dispose(void)
//{
//    mangled_ppc("?dispose@c_tag_resource_page_table@@QAAXXZ");
//};

//public: void c_tag_resource_page_table::allocate_storage(unsigned long, class c_allocation_interface *)
//{
//    mangled_ppc("?allocate_storage@c_tag_resource_page_table@@QAAXKPAVc_allocation_interface@@@Z");
//};

//public: void c_tag_resource_page_table::initialize_for_new_map(unsigned long, class c_tag_resource_cache_file_reader *, class c_tag_resource_cache_file_datum_handler *, class c_tag_resource_cache_file_location_handler *, class c_tag_resource_cache_published_location_interface *, class c_allocation_interface *, class c_tag_resource_page_range_allocator *)
//{
//    mangled_ppc("?initialize_for_new_map@c_tag_resource_page_table@@QAAXKPAVc_tag_resource_cache_file_reader@@PAVc_tag_resource_cache_file_datum_handler@@PAVc_tag_resource_cache_file_location_handler@@PAVc_tag_resource_cache_published_location_interface@@PAVc_allocation_interface@@PAVc_tag_resource_page_range_allocator@@@Z");
//};

//public: void c_tag_resource_page_table::free_storage(void)
//{
//    mangled_ppc("?free_storage@c_tag_resource_page_table@@QAAXXZ");
//};

//public: void c_tag_resource_page_table::dispose_from_old_map(void)
//{
//    mangled_ppc("?dispose_from_old_map@c_tag_resource_page_table@@QAAXXZ");
//};

//public: void c_tag_resource_page_table::prepare_for_disposal_from_old_map(class c_tag_resource_page_table_io_listener *)
//{
//    mangled_ppc("?prepare_for_disposal_from_old_map@c_tag_resource_page_table@@QAAXPAVc_tag_resource_page_table_io_listener@@@Z");
//};

//public: void c_tag_resource_page_table::begin_tracking_resource_page(struct s_tag_resource_location_handle_struct *)
//{
//    mangled_ppc("?begin_tracking_resource_page@c_tag_resource_page_table@@QAAXPAUs_tag_resource_location_handle_struct@@@Z");
//};

//public: void c_tag_resource_page_table::end_tracking_resource_page(struct s_tag_resource_location_handle_struct *)
//{
//    mangled_ppc("?end_tracking_resource_page@c_tag_resource_page_table@@QAAXPAUs_tag_resource_location_handle_struct@@@Z");
//};

//public: void c_tag_resource_page_table::add_resource_page_control_reference(struct s_tag_resource_location_handle_struct *)
//{
//    mangled_ppc("?add_resource_page_control_reference@c_tag_resource_page_table@@QAAXPAUs_tag_resource_location_handle_struct@@@Z");
//};

//public: void c_tag_resource_page_table::remove_resource_page_control_reference(struct s_tag_resource_location_handle_struct *)
//{
//    mangled_ppc("?remove_resource_page_control_reference@c_tag_resource_page_table@@QAAXPAUs_tag_resource_location_handle_struct@@@Z");
//};

//public: void c_tag_resource_page_table::report_memory_usage(class c_formatted_output *)
//{
//    mangled_ppc("?report_memory_usage@c_tag_resource_page_table@@QAAXPAVc_formatted_output@@@Z");
//};

//public: static void `public: void c_tag_resource_page_table::report_memory_usage(class c_formatted_output *)'::`12'::c_lruv_debug_dump_procs::lruv_header_proc(void *, class c_formatted_output *)
//{
//    mangled_ppc("?lruv_header_proc@c_lruv_debug_dump_procs@?M@??report_memory_usage@c_tag_resource_page_table@@QAAXPAVc_formatted_output@@@Z@SAXPAX0@Z");
//};

//public: static char const * `public: void c_tag_resource_page_table::report_memory_usage(class c_formatted_output *)'::`12'::c_lruv_debug_dump_procs::lruv_name_block_proc(void *, void *, char *, long, long)
//{
//    mangled_ppc("?lruv_name_block_proc@c_lruv_debug_dump_procs@?M@??report_memory_usage@c_tag_resource_page_table@@QAAXPAVc_formatted_output@@@Z@SAPBDPAX1PADJJ@Z");
//};

//public: void c_tag_resource_page_table::report_memory_brief(class c_wrapped_array<char>)
//{
//    mangled_ppc("?report_memory_brief@c_tag_resource_page_table@@QAAXV?$c_wrapped_array@D@@@Z");
//};

//public: unsigned long c_tag_resource_page_table::get_used_memory_size_from_handle(struct s_tag_resource_location_handle_struct *)
//{
//    mangled_ppc("?get_used_memory_size_from_handle@c_tag_resource_page_table@@QAAKPAUs_tag_resource_location_handle_struct@@@Z");
//};

//public: void c_tag_resource_page_table::persist_pages(class c_tag_resource_cache_file_page_persister *)
//{
//    mangled_ppc("?persist_pages@c_tag_resource_page_table@@QAAXPAVc_tag_resource_cache_file_page_persister@@@Z");
//};

//public: void c_tag_resource_page_table::restore_pages(class c_tag_resource_cache_file_page_restorer *, class c_tag_resource_page_table_io_listener *)
//{
//    mangled_ppc("?restore_pages@c_tag_resource_page_table@@QAAXPAVc_tag_resource_cache_file_page_restorer@@PAVc_tag_resource_page_table_io_listener@@@Z");
//};

//private: void c_tag_resource_page_table::restore_page(struct s_tag_resource_location_handle_struct *, class c_basic_buffer<void>, bool, class c_tag_resource_page_table_io_listener *)
//{
//    mangled_ppc("?restore_page@c_tag_resource_page_table@@AAAXPAUs_tag_resource_location_handle_struct@@V?$c_basic_buffer@X@@_NPAVc_tag_resource_page_table_io_listener@@@Z");
//};

//void io_result_update_from_page(class c_io_result *, class c_tag_resource_page_table::c_tag_resource_page_datum)
//{
//    mangled_ppc("?io_result_update_from_page@@YAXPAVc_io_result@@Vc_tag_resource_page_datum@c_tag_resource_page_table@@@Z");
//};

//private: bool c_tag_resource_page_table::load_required_pages_synchronous_io(class c_tag_resource_page_table_io_listener *, bool, bool, class c_io_result *)
//{
//    mangled_ppc("?load_required_pages_synchronous_io@c_tag_resource_page_table@@AAA_NPAVc_tag_resource_page_table_io_listener@@_N1PAVc_io_result@@@Z");
//};

//public: c_synchronous_resource_io::c_synchronous_resource_io(class c_tag_resource_page_table *, class c_tag_resource_cache_file_reader *, class c_tag_resource_cache_file_location_handler *)
//{
//    mangled_ppc("??0c_synchronous_resource_io@@QAA@PAVc_tag_resource_page_table@@PAVc_tag_resource_cache_file_reader@@PAVc_tag_resource_cache_file_location_handler@@@Z");
//};

//public: virtual bool c_synchronous_resource_io::request_data(struct s_tag_resource_location_handle_struct *, struct s_indirect_cache_file_read_request const *)
//{
//    mangled_ppc("?request_data@c_synchronous_resource_io@@UAA_NPAUs_tag_resource_location_handle_struct@@PBUs_indirect_cache_file_read_request@@@Z");
//};

//public: bool c_synchronous_resource_io::block_until_done(void)
//{
//    mangled_ppc("?block_until_done@c_synchronous_resource_io@@QAA_NXZ");
//};

//public: bool c_synchronous_resource_io::any_outstanding_requests(void)
//{
//    mangled_ppc("?any_outstanding_requests@c_synchronous_resource_io@@QAA_NXZ");
//};

//public: unsigned long c_synchronous_resource_io::get_request_count(void) const
//{
//    mangled_ppc("?get_request_count@c_synchronous_resource_io@@QBAKXZ");
//};

//public: struct s_tag_resource_location_handle_struct * c_synchronous_resource_io::get_page_handle(unsigned long)
//{
//    mangled_ppc("?get_page_handle@c_synchronous_resource_io@@QAAPAUs_tag_resource_location_handle_struct@@K@Z");
//};

//public: enum e_indirect_cache_file_read_result c_synchronous_resource_io::get_request_result(unsigned long) const
//{
//    mangled_ppc("?get_request_result@c_synchronous_resource_io@@QBA?AW4e_indirect_cache_file_read_result@@K@Z");
//};

//private: virtual void c_synchronous_resource_io::reset(void)
//{
//    mangled_ppc("?reset@c_synchronous_resource_io@@EAAXXZ");
//};

//private: virtual bool c_synchronous_resource_io::next(struct s_indirect_cache_file_read_request *, unsigned long *)
//{
//    mangled_ppc("?next@c_synchronous_resource_io@@EAA_NPAUs_indirect_cache_file_read_request@@PAK@Z");
//};

//private: virtual void c_synchronous_resource_io::read_progress(unsigned long, bool)
//{
//    mangled_ppc("?read_progress@c_synchronous_resource_io@@EAAXK_N@Z");
//};

//private: virtual void c_synchronous_resource_io::finished(unsigned long, enum e_indirect_cache_file_read_result)
//{
//    mangled_ppc("?finished@c_synchronous_resource_io@@EAAXKW4e_indirect_cache_file_read_result@@@Z");
//};

//private: unsigned long c_synchronous_resource_io::get_actual_request_index(unsigned long) const
//{
//    mangled_ppc("?get_actual_request_index@c_synchronous_resource_io@@ABAKK@Z");
//};

//unsigned long extract_low_dword(unsigned __int64)
//{
//    mangled_ppc("?extract_low_dword@@YAK_K@Z");
//};

//public: c_tag_resource_page_table::c_page_io_interface::c_page_io_interface(void)
//{
//    mangled_ppc("??0c_page_io_interface@c_tag_resource_page_table@@QAA@XZ");
//};

//public: c_indirect_cache_file_bulk_read_iterator::c_indirect_cache_file_bulk_read_iterator(void)
//{
//    mangled_ppc("??0c_indirect_cache_file_bulk_read_iterator@@QAA@XZ");
//};

//private: bool c_tag_resource_page_table::load_required_pages_nonblocking_io(class c_tag_resource_page_table_io_listener *, bool, bool, class c_io_result *)
//{
//    mangled_ppc("?load_required_pages_nonblocking_io@c_tag_resource_page_table@@AAA_NPAVc_tag_resource_page_table_io_listener@@_N1PAVc_io_result@@@Z");
//};

//public: bool c_tag_resource_page_table::load_required_pages(class c_tag_resource_page_table_io_listener *, bool, bool, class c_io_result *)
//{
//    mangled_ppc("?load_required_pages@c_tag_resource_page_table@@QAA_NPAVc_tag_resource_page_table_io_listener@@_N1PAVc_io_result@@@Z");
//};

//public: bool c_tag_resource_page_table::resize(unsigned long, unsigned long, unsigned long, bool, bool *)
//{
//    mangled_ppc("?resize@c_tag_resource_page_table@@QAA_NKKK_NPA_N@Z");
//};

//public: void c_tag_resource_page_table::ensure_required_space(void)
//{
//    mangled_ppc("?ensure_required_space@c_tag_resource_page_table@@QAAXXZ");
//};

//public: unsigned long c_tag_resource_page_table::get_total_available_size(void)
//{
//    mangled_ppc("?get_total_available_size@c_tag_resource_page_table@@QAAKXZ");
//};

//public: class c_tag_resource_page_table_control_interface * c_tag_resource_page_table::get_control_interface(void)
//{
//    mangled_ppc("?get_control_interface@c_tag_resource_page_table@@QAAPAVc_tag_resource_page_table_control_interface@@XZ");
//};

//private: void c_tag_resource_page_table::request_page_internal(struct s_tag_resource_location_handle_struct *, class c_tag_resource_page_table::c_page_io_interface *, class c_tag_resource_page_table_io_listener *)
//{
//    mangled_ppc("?request_page_internal@c_tag_resource_page_table@@AAAXPAUs_tag_resource_location_handle_struct@@PAVc_page_io_interface@1@PAVc_tag_resource_page_table_io_listener@@@Z");
//};

//public: void c_tag_resource_page_table::update_status_lines(void)
//{
//    mangled_ppc("?update_status_lines@c_tag_resource_page_table@@QAAXXZ");
//};

//public: void c_tag_resource_page_table::idle(void)
//{
//    mangled_ppc("?idle@c_tag_resource_page_table@@QAAXXZ");
//};

//public: bool c_tag_resource_page_table::run_defrag_loop(void)
//{
//    mangled_ppc("?run_defrag_loop@c_tag_resource_page_table@@QAA_NXZ");
//};

//public: void c_tag_resource_page_table::verify_internal_state(void)
//{
//    mangled_ppc("?verify_internal_state@c_tag_resource_page_table@@QAAXXZ");
//};

//public: void c_tag_resource_page_table::validate_all_pages(void)
//{
//    mangled_ppc("?validate_all_pages@c_tag_resource_page_table@@QAAXXZ");
//};

//private: bool c_tag_resource_page_table::request_page_async(struct s_tag_resource_location_handle_struct *, struct s_indirect_cache_file_read_request const *)
//{
//    mangled_ppc("?request_page_async@c_tag_resource_page_table@@AAA_NPAUs_tag_resource_location_handle_struct@@PBUs_indirect_cache_file_read_request@@@Z");
//};

//public: void c_tag_resource_page_table::demand_page(struct s_tag_resource_location_handle_struct *, unsigned long, class c_tag_resource_page_table_io_listener *)
//{
//    mangled_ppc("?demand_page@c_tag_resource_page_table@@QAAXPAUs_tag_resource_location_handle_struct@@KPAVc_tag_resource_page_table_io_listener@@@Z");
//};

//public: void c_tag_resource_page_table::touch_page(struct s_tag_resource_location_handle_struct *)
//{
//    mangled_ppc("?touch_page@c_tag_resource_page_table@@QAAXPAUs_tag_resource_location_handle_struct@@@Z");
//};

//public: bool c_tag_resource_page_table::page_failed_to_load(struct s_tag_resource_location_handle_struct *)
//{
//    mangled_ppc("?page_failed_to_load@c_tag_resource_page_table@@QAA_NPAUs_tag_resource_location_handle_struct@@@Z");
//};

//public: long c_tag_resource_page_table::get_resource_page_lruv_block_index(struct s_tag_resource_location_handle_struct *)
//{
//    mangled_ppc("?get_resource_page_lruv_block_index@c_tag_resource_page_table@@QAAJPAUs_tag_resource_location_handle_struct@@@Z");
//};

//public: void c_tag_resource_page_table::get_necessary_and_allocated_resource_space(unsigned long *, unsigned long *, unsigned long *, unsigned long *)
//{
//    mangled_ppc("?get_necessary_and_allocated_resource_space@c_tag_resource_page_table@@QAAXPAK000@Z");
//};

//public: void c_tag_resource_page_table::get_necessary_resource_space(unsigned long *, unsigned long *, unsigned long *, unsigned long *)
//{
//    mangled_ppc("?get_necessary_resource_space@c_tag_resource_page_table@@QAAXPAK000@Z");
//};

//public: bool c_tag_resource_page_table::can_demand_more_pages_for_io(void)
//{
//    mangled_ppc("?can_demand_more_pages_for_io@c_tag_resource_page_table@@QAA_NXZ");
//};

//public: bool c_tag_resource_page_table::can_demand_more_pages(void)
//{
//    mangled_ppc("?can_demand_more_pages@c_tag_resource_page_table@@QAA_NXZ");
//};

//public: bool c_tag_resource_page_table::lock_prefetch_pages(bool)
//{
//    mangled_ppc("?lock_prefetch_pages@c_tag_resource_page_table@@QAA_N_N@Z");
//};

//public: void c_tag_resource_page_table::reset_due_to_zone_state_changes(void)
//{
//    mangled_ppc("?reset_due_to_zone_state_changes@c_tag_resource_page_table@@QAAXXZ");
//};

//public: void c_tag_resource_page_table::try_to_load_more_pending_pages(class c_tag_resource_page_table_io_listener *)
//{
//    mangled_ppc("?try_to_load_more_pending_pages@c_tag_resource_page_table@@QAAXPAVc_tag_resource_page_table_io_listener@@@Z");
//};

//public: unsigned long c_tag_resource_page_table::get_prefetch_paging_size(void)
//{
//    mangled_ppc("?get_prefetch_paging_size@c_tag_resource_page_table@@QAAKXZ");
//};

//public: float c_tag_resource_page_table::prefetch_paging_progress(void)
//{
//    mangled_ppc("?prefetch_paging_progress@c_tag_resource_page_table@@QAAMXZ");
//};

//public: bool c_tag_resource_page_table::all_pending_pages_processed(void)
//{
//    mangled_ppc("?all_pending_pages_processed@c_tag_resource_page_table@@QAA_NXZ");
//};

//private: void c_tag_resource_page_table::advance_to_next_unread_allocated_pending_page(void)
//{
//    mangled_ppc("?advance_to_next_unread_allocated_pending_page@c_tag_resource_page_table@@AAAXXZ");
//};

//public: void c_tag_resource_page_table::signal_stop_prefetching(void)
//{
//    mangled_ppc("?signal_stop_prefetching@c_tag_resource_page_table@@QAAXXZ");
//};

//public: void c_tag_resource_page_table::restart_prefetching(void)
//{
//    mangled_ppc("?restart_prefetching@c_tag_resource_page_table@@QAAXXZ");
//};

//public: bool c_tag_resource_page_table::prefetching_is_idle(void)
//{
//    mangled_ppc("?prefetching_is_idle@c_tag_resource_page_table@@QAA_NXZ");
//};

//public: void c_tag_resource_page_table::update_async_requests(class c_tag_resource_page_table_io_listener *)
//{
//    mangled_ppc("?update_async_requests@c_tag_resource_page_table@@QAAXPAVc_tag_resource_page_table_io_listener@@@Z");
//};

//private: void c_tag_resource_page_table::set_page_state(struct s_tag_resource_location_handle_struct *, enum e_tag_resource_page_datum_state)
//{
//    mangled_ppc("?set_page_state@c_tag_resource_page_table@@AAAXPAUs_tag_resource_location_handle_struct@@W4e_tag_resource_page_datum_state@@@Z");
//};

//private: void c_tag_resource_page_table::mark_valid_page(struct s_tag_resource_location_handle_struct *, class c_tag_resource_page_table_io_listener *)
//{
//    mangled_ppc("?mark_valid_page@c_tag_resource_page_table@@AAAXPAUs_tag_resource_location_handle_struct@@PAVc_tag_resource_page_table_io_listener@@@Z");
//};

//private: void c_tag_resource_page_table::mark_valid_page_internal(struct s_tag_resource_location_handle_struct *, bool, class c_tag_resource_page_table_io_listener *)
//{
//    mangled_ppc("?mark_valid_page_internal@c_tag_resource_page_table@@AAAXPAUs_tag_resource_location_handle_struct@@_NPAVc_tag_resource_page_table_io_listener@@@Z");
//};

//public: void c_tag_resource_page_table::mark_prefetch_pages(class c_tag_resource_cache_file_prefetch_set *)
//{
//    mangled_ppc("?mark_prefetch_pages@c_tag_resource_page_table@@QAAXPAVc_tag_resource_cache_file_prefetch_set@@@Z");
//};

//public: bool c_tag_resource_page_table::async_requests_are_done(void)
//{
//    mangled_ppc("?async_requests_are_done@c_tag_resource_page_table@@QAA_NXZ");
//};

//private: void c_tag_resource_page_table::block_until_async_requests_done(class c_tag_resource_page_table_io_listener *)
//{
//    mangled_ppc("?block_until_async_requests_done@c_tag_resource_page_table@@AAAXPAVc_tag_resource_page_table_io_listener@@@Z");
//};

//private: bool c_tag_resource_page_table::build_page_read_request(struct s_tag_resource_location_handle_struct *, struct s_indirect_cache_file_read_request *)
//{
//    mangled_ppc("?build_page_read_request@c_tag_resource_page_table@@AAA_NPAUs_tag_resource_location_handle_struct@@PAUs_indirect_cache_file_read_request@@@Z");
//};

//public: void c_tag_resource_page_table::flush_all_unnecessary_pages(void)
//{
//    mangled_ppc("?flush_all_unnecessary_pages@c_tag_resource_page_table@@QAAXXZ");
//};

//public: unsigned long c_tag_resource_page_table::flush_optional_pages(unsigned long, bool)
//{
//    mangled_ppc("?flush_optional_pages@c_tag_resource_page_table@@QAAKK_N@Z");
//};

//public: void c_tag_resource_page_table::flush_unlocked_pages(void)
//{
//    mangled_ppc("?flush_unlocked_pages@c_tag_resource_page_table@@QAAXXZ");
//};

//public: void c_tag_resource_page_table::try_to_buyback_memory_from_optional_pages(unsigned long)
//{
//    mangled_ppc("?try_to_buyback_memory_from_optional_pages@c_tag_resource_page_table@@QAAXK@Z");
//};

//public: void c_tag_resource_page_table::try_to_buyback_memory_from_unused_pages(unsigned long)
//{
//    mangled_ppc("?try_to_buyback_memory_from_unused_pages@c_tag_resource_page_table@@QAAXK@Z");
//};

//public: void c_tag_resource_page_table::try_to_reclaim_memory(void)
//{
//    mangled_ppc("?try_to_reclaim_memory@c_tag_resource_page_table@@QAAXXZ");
//};

//public: class c_basic_buffer<void> c_tag_resource_page_table::try_to_steal_memory(unsigned long)
//{
//    mangled_ppc("?try_to_steal_memory@c_tag_resource_page_table@@QAA?AV?$c_basic_buffer@X@@K@Z");
//};

//public: void c_tag_resource_page_table::return_memory(class c_basic_buffer<void>)
//{
//    mangled_ppc("?return_memory@c_tag_resource_page_table@@QAAXV?$c_basic_buffer@X@@@Z");
//};

//public: void c_tag_resource_page_table::defragment_pages(void)
//{
//    mangled_ppc("?defragment_pages@c_tag_resource_page_table@@QAAXXZ");
//};

//public: void c_tag_resource_page_table::defragment_pages_keep_optional_up(long)
//{
//    mangled_ppc("?defragment_pages_keep_optional_up@c_tag_resource_page_table@@QAAXJ@Z");
//};

//public: void c_tag_resource_page_table::shrink_to_used_size(void)
//{
//    mangled_ppc("?shrink_to_used_size@c_tag_resource_page_table@@QAAXXZ");
//};

//public: void c_tag_resource_page_table::release_physical_allocation(void)
//{
//    mangled_ppc("?release_physical_allocation@c_tag_resource_page_table@@QAAXXZ");
//};

//private: void c_tag_resource_page_table::move_page_data(struct s_tag_resource_location_handle_struct *, class c_basic_buffer<void>, class c_basic_buffer<void>)
//{
//    mangled_ppc("?move_page_data@c_tag_resource_page_table@@AAAXPAUs_tag_resource_location_handle_struct@@V?$c_basic_buffer@X@@1@Z");
//};

//private: void c_tag_resource_page_table::clone_page_data(struct s_tag_resource_location_handle_struct *, class c_basic_buffer<void>, class c_basic_buffer<void>)
//{
//    mangled_ppc("?clone_page_data@c_tag_resource_page_table@@AAAXPAUs_tag_resource_location_handle_struct@@V?$c_basic_buffer@X@@1@Z");
//};

//private: class c_tag_resource_page_table::c_tag_resource_page_datum c_tag_resource_page_table::get_resource_page_from_handle(struct s_tag_resource_location_handle_struct *) const
//{
//    mangled_ppc("?get_resource_page_from_handle@c_tag_resource_page_table@@ABA?AVc_tag_resource_page_datum@1@PAUs_tag_resource_location_handle_struct@@@Z");
//};

//private: class c_tag_resource_page_table::c_tag_resource_page_datum c_tag_resource_page_table::get_resource_page_from_page_iterator(class c_data_iterator<void> const &) const
//{
//    mangled_ppc("?get_resource_page_from_page_iterator@c_tag_resource_page_table@@ABA?AVc_tag_resource_page_datum@1@ABV?$c_data_iterator@X@@@Z");
//};

//public: void c_tag_resource_page_table::cancel_async_and_block_until_async_done(class c_tag_resource_page_table_io_listener *)
//{
//    mangled_ppc("?cancel_async_and_block_until_async_done@c_tag_resource_page_table@@QAAXPAVc_tag_resource_page_table_io_listener@@@Z");
//};

//public: unsigned long c_tag_resource_page_table::align_to_page_size(unsigned long)
//{
//    mangled_ppc("?align_to_page_size@c_tag_resource_page_table@@QAAKK@Z");
//};

//public: bool c_tag_resource_page_table::can_get_page_data(struct s_tag_resource_location_handle_struct *)
//{
//    mangled_ppc("?can_get_page_data@c_tag_resource_page_table@@QAA_NPAUs_tag_resource_location_handle_struct@@@Z");
//};

//public: class c_basic_buffer<void> c_tag_resource_page_table::get_page_data_slow(struct s_tag_resource_location_handle_struct *)
//{
//    mangled_ppc("?get_page_data_slow@c_tag_resource_page_table@@QAA?AV?$c_basic_buffer@X@@PAUs_tag_resource_location_handle_struct@@@Z");
//};

//public: long c_tag_resource_page_table::get_page_snapshot(struct s_tag_resource_location_handle_struct *)
//{
//    mangled_ppc("?get_page_snapshot@c_tag_resource_page_table@@QAAJPAUs_tag_resource_location_handle_struct@@@Z");
//};

//public: unsigned long c_tag_resource_page_table::get_page_size(struct s_tag_resource_location_handle_struct *)
//{
//    mangled_ppc("?get_page_size@c_tag_resource_page_table@@QAAKPAUs_tag_resource_location_handle_struct@@@Z");
//};

//public: bool c_tag_resource_page_table::page_needs_byteswapping(struct s_tag_resource_location_handle_struct *)
//{
//    mangled_ppc("?page_needs_byteswapping@c_tag_resource_page_table@@QAA_NPAUs_tag_resource_location_handle_struct@@@Z");
//};

//public: void c_tag_resource_page_table::set_page_always_needs_byteswapping(struct s_tag_resource_location_handle_struct *, bool)
//{
//    mangled_ppc("?set_page_always_needs_byteswapping@c_tag_resource_page_table@@QAAXPAUs_tag_resource_location_handle_struct@@_N@Z");
//};

//public: void c_tag_resource_page_table::set_page_currently_needs_byteswapping(struct s_tag_resource_location_handle_struct *, bool)
//{
//    mangled_ppc("?set_page_currently_needs_byteswapping@c_tag_resource_page_table@@QAAXPAUs_tag_resource_location_handle_struct@@_N@Z");
//};

//public: class c_wrapped_flags const & c_tag_resource_page_table::get_ready_pages(void) const
//{
//    mangled_ppc("?get_ready_pages@c_tag_resource_page_table@@QBAABVc_wrapped_flags@@XZ");
//};

//public: void c_tag_resource_page_table::advance_cache_frame(void)
//{
//    mangled_ppc("?advance_cache_frame@c_tag_resource_page_table@@QAAXXZ");
//};

//private: bool c_tag_resource_page_table::reserve_page_data(struct s_tag_resource_location_handle_struct *, class c_tag_resource_page_table_io_listener *)
//{
//    mangled_ppc("?reserve_page_data@c_tag_resource_page_table@@AAA_NPAUs_tag_resource_location_handle_struct@@PAVc_tag_resource_page_table_io_listener@@@Z");
//};

//private: bool c_tag_resource_page_table::allocate_page_data(struct s_tag_resource_location_handle_struct *)
//{
//    mangled_ppc("?allocate_page_data@c_tag_resource_page_table@@AAA_NPAUs_tag_resource_location_handle_struct@@@Z");
//};

//private: void c_tag_resource_page_table::flush_page_data(struct s_tag_resource_location_handle_struct *)
//{
//    mangled_ppc("?flush_page_data@c_tag_resource_page_table@@AAAXPAUs_tag_resource_location_handle_struct@@@Z");
//};

//private: void c_tag_resource_page_table::flush_page_data_no_notification(struct s_tag_resource_location_handle_struct *)
//{
//    mangled_ppc("?flush_page_data_no_notification@c_tag_resource_page_table@@AAAXPAUs_tag_resource_location_handle_struct@@@Z");
//};

//private: void c_tag_resource_page_table::set_page_reservation(struct s_tag_resource_location_handle_struct *, enum e_tag_resource_page_reservation)
//{
//    mangled_ppc("?set_page_reservation@c_tag_resource_page_table@@AAAXPAUs_tag_resource_location_handle_struct@@W4e_tag_resource_page_reservation@@@Z");
//};

//private: bool c_tag_resource_page_table::page_reservation_is_at_least(struct s_tag_resource_location_handle_struct *, enum e_tag_resource_page_reservation)
//{
//    mangled_ppc("?page_reservation_is_at_least@c_tag_resource_page_table@@AAA_NPAUs_tag_resource_location_handle_struct@@W4e_tag_resource_page_reservation@@@Z");
//};

//private: bool c_tag_resource_page_table::page_reservation_is_at_most(struct s_tag_resource_location_handle_struct *, enum e_tag_resource_page_reservation)
//{
//    mangled_ppc("?page_reservation_is_at_most@c_tag_resource_page_table@@AAA_NPAUs_tag_resource_location_handle_struct@@W4e_tag_resource_page_reservation@@@Z");
//};

//private: void c_tag_resource_page_table::pin_page(struct s_tag_resource_location_handle_struct *)
//{
//    mangled_ppc("?pin_page@c_tag_resource_page_table@@AAAXPAUs_tag_resource_location_handle_struct@@@Z");
//};

//private: void c_tag_resource_page_table::unpin_page(struct s_tag_resource_location_handle_struct *)
//{
//    mangled_ppc("?unpin_page@c_tag_resource_page_table@@AAAXPAUs_tag_resource_location_handle_struct@@@Z");
//};

//private: bool c_tag_resource_page_table::page_is_usable(struct s_tag_resource_location_handle_struct *)
//{
//    mangled_ppc("?page_is_usable@c_tag_resource_page_table@@AAA_NPAUs_tag_resource_location_handle_struct@@@Z");
//};

//private: bool c_tag_resource_page_table::page_is_pinned(struct s_tag_resource_location_handle_struct *)
//{
//    mangled_ppc("?page_is_pinned@c_tag_resource_page_table@@AAA_NPAUs_tag_resource_location_handle_struct@@@Z");
//};

//private: bool c_tag_resource_page_table::page_is_valid_but_not_loaded(struct s_tag_resource_location_handle_struct *)
//{
//    mangled_ppc("?page_is_valid_but_not_loaded@c_tag_resource_page_table@@AAA_NPAUs_tag_resource_location_handle_struct@@@Z");
//};

//private: bool c_tag_resource_page_table::page_is_loading(struct s_tag_resource_location_handle_struct *)
//{
//    mangled_ppc("?page_is_loading@c_tag_resource_page_table@@AAA_NPAUs_tag_resource_location_handle_struct@@@Z");
//};

//private: void c_tag_resource_page_table::lruv_delete_tag_resource_page(struct s_tag_resource_location_handle_struct *, bool)
//{
//    mangled_ppc("?lruv_delete_tag_resource_page@c_tag_resource_page_table@@AAAXPAUs_tag_resource_location_handle_struct@@_N@Z");
//};

//private: bool c_tag_resource_page_table::lruv_is_tag_resource_page_locked(struct s_tag_resource_location_handle_struct *)
//{
//    mangled_ppc("?lruv_is_tag_resource_page_locked@c_tag_resource_page_table@@AAA_NPAUs_tag_resource_location_handle_struct@@@Z");
//};

//private: void c_tag_resource_page_table::lruv_move_tag_resource_page(struct s_tag_resource_location_handle_struct *, unsigned long, unsigned long)
//{
//    mangled_ppc("?lruv_move_tag_resource_page@c_tag_resource_page_table@@AAAXPAUs_tag_resource_location_handle_struct@@KK@Z");
//};

//private: bool c_tag_resource_page_table::lruv_clone_tag_resource_page(struct s_tag_resource_location_handle_struct *, long, unsigned long, unsigned long)
//{
//    mangled_ppc("?lruv_clone_tag_resource_page@c_tag_resource_page_table@@AAA_NPAUs_tag_resource_location_handle_struct@@JKK@Z");
//};

//private: void c_tag_resource_page_table_control_interface::initialize_for_new_map(class c_tag_resource_page_table *)
//{
//    mangled_ppc("?initialize_for_new_map@c_tag_resource_page_table_control_interface@@AAAXPAVc_tag_resource_page_table@@@Z");
//};

//private: void c_tag_resource_page_table_control_interface::dispose_from_old_map(void)
//{
//    mangled_ppc("?dispose_from_old_map@c_tag_resource_page_table_control_interface@@AAAXXZ");
//};

//public: unsigned long c_tag_resource_page_table_control_interface::align_page_size(unsigned long)
//{
//    mangled_ppc("?align_page_size@c_tag_resource_page_table_control_interface@@QAAKK@Z");
//};

//public: void c_tag_resource_page_table_control_interface::set_page_reservation(struct s_tag_resource_location_handle_struct *, enum e_tag_resource_page_reservation)
//{
//    mangled_ppc("?set_page_reservation@c_tag_resource_page_table_control_interface@@QAAXPAUs_tag_resource_location_handle_struct@@W4e_tag_resource_page_reservation@@@Z");
//};

//public: bool c_tag_resource_page_table_control_interface::page_reservation_is_at_least(struct s_tag_resource_location_handle_struct *, enum e_tag_resource_page_reservation)
//{
//    mangled_ppc("?page_reservation_is_at_least@c_tag_resource_page_table_control_interface@@QAA_NPAUs_tag_resource_location_handle_struct@@W4e_tag_resource_page_reservation@@@Z");
//};

//public: bool c_tag_resource_page_table_control_interface::page_reservation_is_at_most(struct s_tag_resource_location_handle_struct *, enum e_tag_resource_page_reservation)
//{
//    mangled_ppc("?page_reservation_is_at_most@c_tag_resource_page_table_control_interface@@QAA_NPAUs_tag_resource_location_handle_struct@@W4e_tag_resource_page_reservation@@@Z");
//};

//public: void c_tag_resource_page_table_control_interface::pin_page(struct s_tag_resource_location_handle_struct *)
//{
//    mangled_ppc("?pin_page@c_tag_resource_page_table_control_interface@@QAAXPAUs_tag_resource_location_handle_struct@@@Z");
//};

//public: void c_tag_resource_page_table_control_interface::unpin_page(struct s_tag_resource_location_handle_struct *)
//{
//    mangled_ppc("?unpin_page@c_tag_resource_page_table_control_interface@@QAAXPAUs_tag_resource_location_handle_struct@@@Z");
//};

//public: bool c_tag_resource_page_table_control_interface::verify_page_is_pinned(struct s_tag_resource_location_handle_struct *)
//{
//    mangled_ppc("?verify_page_is_pinned@c_tag_resource_page_table_control_interface@@QAA_NPAUs_tag_resource_location_handle_struct@@@Z");
//};

//public: void c_tag_resource_page_table_control_interface::demand_page(struct s_tag_resource_location_handle_struct *, unsigned long, class c_tag_resource_page_table_io_listener *)
//{
//    mangled_ppc("?demand_page@c_tag_resource_page_table_control_interface@@QAAXPAUs_tag_resource_location_handle_struct@@KPAVc_tag_resource_page_table_io_listener@@@Z");
//};

//public: void c_tag_resource_page_table_control_interface::touch_page(struct s_tag_resource_location_handle_struct *)
//{
//    mangled_ppc("?touch_page@c_tag_resource_page_table_control_interface@@QAAXPAUs_tag_resource_location_handle_struct@@@Z");
//};

//public: bool c_tag_resource_page_table_control_interface::page_failed_to_load(struct s_tag_resource_location_handle_struct *)
//{
//    mangled_ppc("?page_failed_to_load@c_tag_resource_page_table_control_interface@@QAA_NPAUs_tag_resource_location_handle_struct@@@Z");
//};

//public: bool c_tag_resource_page_table_control_interface::can_demand_more_pages(void)
//{
//    mangled_ppc("?can_demand_more_pages@c_tag_resource_page_table_control_interface@@QAA_NXZ");
//};

//public: bool c_tag_resource_page_table_control_interface::valid_page_not_loaded(struct s_tag_resource_location_handle_struct *)
//{
//    mangled_ppc("?valid_page_not_loaded@c_tag_resource_page_table_control_interface@@QAA_NPAUs_tag_resource_location_handle_struct@@@Z");
//};

//public: bool c_tag_resource_page_table_control_interface::page_is_loading(struct s_tag_resource_location_handle_struct *)
//{
//    mangled_ppc("?page_is_loading@c_tag_resource_page_table_control_interface@@QAA_NPAUs_tag_resource_location_handle_struct@@@Z");
//};

//public: bool c_tag_resource_page_table_control_interface::page_loaded(struct s_tag_resource_location_handle_struct *)
//{
//    mangled_ppc("?page_loaded@c_tag_resource_page_table_control_interface@@QAA_NPAUs_tag_resource_location_handle_struct@@@Z");
//};

//public: class c_basic_buffer<void> c_tag_resource_page_table_control_interface::get_page_buffer_slow(struct s_tag_resource_location_handle_struct *)
//{
//    mangled_ppc("?get_page_buffer_slow@c_tag_resource_page_table_control_interface@@QAA?AV?$c_basic_buffer@X@@PAUs_tag_resource_location_handle_struct@@@Z");
//};

//public: long c_tag_resource_page_table_control_interface::get_page_snapshot(struct s_tag_resource_location_handle_struct *)
//{
//    mangled_ppc("?get_page_snapshot@c_tag_resource_page_table_control_interface@@QAAJPAUs_tag_resource_location_handle_struct@@@Z");
//};

//public: unsigned long c_tag_resource_page_table_control_interface::get_page_size(struct s_tag_resource_location_handle_struct *)
//{
//    mangled_ppc("?get_page_size@c_tag_resource_page_table_control_interface@@QAAKPAUs_tag_resource_location_handle_struct@@@Z");
//};

//public: bool c_tag_resource_page_table_control_interface::page_needs_byteswapping(struct s_tag_resource_location_handle_struct *)
//{
//    mangled_ppc("?page_needs_byteswapping@c_tag_resource_page_table_control_interface@@QAA_NPAUs_tag_resource_location_handle_struct@@@Z");
//};

//public: void c_tag_resource_page_table_control_interface::set_page_needs_byteswapping(struct s_tag_resource_location_handle_struct *, bool)
//{
//    mangled_ppc("?set_page_needs_byteswapping@c_tag_resource_page_table_control_interface@@QAAXPAUs_tag_resource_location_handle_struct@@_N@Z");
//};

//public: class c_wrapped_flags const & c_tag_resource_page_table_control_interface::get_ready_pages(void)
//{
//    mangled_ppc("?get_ready_pages@c_tag_resource_page_table_control_interface@@QAAABVc_wrapped_flags@@XZ");
//};

//public: void c_tag_resource_page_table_control_interface::advance_cache_frame(void)
//{
//    mangled_ppc("?advance_cache_frame@c_tag_resource_page_table_control_interface@@QAAXXZ");
//};

//private: static bool c_tag_resource_page_table::page_handle_is_valid_handle(struct s_tag_resource_location_handle_struct *)
//{
//    mangled_ppc("?page_handle_is_valid_handle@c_tag_resource_page_table@@CA_NPAUs_tag_resource_location_handle_struct@@@Z");
//};

//private: void c_tag_resource_page_table::c_tag_resource_page_table_lruv_handler::initialize_for_new_map(class c_tag_resource_page_table *)
//{
//    mangled_ppc("?initialize_for_new_map@c_tag_resource_page_table_lruv_handler@c_tag_resource_page_table@@AAAXPAV2@@Z");
//};

//private: void c_tag_resource_page_table::c_tag_resource_page_table_lruv_handler::dispose_from_old_map(void)
//{
//    mangled_ppc("?dispose_from_old_map@c_tag_resource_page_table_lruv_handler@c_tag_resource_page_table@@AAAXXZ");
//};

//public: void c_tag_resource_page_table::c_tag_resource_page_table_lruv_handler::on_delete_tag_resource_page(long, bool)
//{
//    mangled_ppc("?on_delete_tag_resource_page@c_tag_resource_page_table_lruv_handler@c_tag_resource_page_table@@QAAXJ_N@Z");
//};

//public: bool c_tag_resource_page_table::c_tag_resource_page_table_lruv_handler::on_is_tag_resource_page_locked(long)
//{
//    mangled_ppc("?on_is_tag_resource_page_locked@c_tag_resource_page_table_lruv_handler@c_tag_resource_page_table@@QAA_NJ@Z");
//};

//public: void c_tag_resource_page_table::c_tag_resource_page_table_lruv_handler::on_move_tag_resource_page(long, unsigned long, unsigned long)
//{
//    mangled_ppc("?on_move_tag_resource_page@c_tag_resource_page_table_lruv_handler@c_tag_resource_page_table@@QAAXJKK@Z");
//};

//public: bool c_tag_resource_page_table::c_tag_resource_page_table_lruv_handler::on_clone_tag_resource_page(long, long, unsigned long, unsigned long)
//{
//    mangled_ppc("?on_clone_tag_resource_page@c_tag_resource_page_table_lruv_handler@c_tag_resource_page_table@@QAA_NJJKK@Z");
//};

//public: void c_tag_resource_page_table::c_tag_resource_lruv_cache::initialize(void)
//{
//    mangled_ppc("?initialize@c_tag_resource_lruv_cache@c_tag_resource_page_table@@QAAXXZ");
//};

//public: void c_tag_resource_page_table::c_tag_resource_lruv_cache::dispose(void)
//{
//    mangled_ppc("?dispose@c_tag_resource_lruv_cache@c_tag_resource_page_table@@QAAXXZ");
//};

//public: void c_tag_resource_page_table::c_tag_resource_lruv_cache::allocate_storage(long, unsigned long, class c_allocation_interface *)
//{
//    mangled_ppc("?allocate_storage@c_tag_resource_lruv_cache@c_tag_resource_page_table@@QAAXJKPAVc_allocation_interface@@@Z");
//};

//public: void c_tag_resource_page_table::c_tag_resource_lruv_cache::initialize_for_new_map(long, unsigned long, class c_tag_resource_page_range_allocator *, class c_allocation_interface *)
//{
//    mangled_ppc("?initialize_for_new_map@c_tag_resource_lruv_cache@c_tag_resource_page_table@@QAAXJKPAVc_tag_resource_page_range_allocator@@PAVc_allocation_interface@@@Z");
//};

//public: void c_tag_resource_page_table::c_tag_resource_lruv_cache::free_storage(void)
//{
//    mangled_ppc("?free_storage@c_tag_resource_lruv_cache@c_tag_resource_page_table@@QAAXXZ");
//};

//public: void c_tag_resource_page_table::c_tag_resource_lruv_cache::dispose_from_old_map(void)
//{
//    mangled_ppc("?dispose_from_old_map@c_tag_resource_lruv_cache@c_tag_resource_page_table@@QAAXXZ");
//};

//public: unsigned long c_tag_resource_page_table::c_tag_resource_lruv_cache::get_total_available_size(void) const
//{
//    mangled_ppc("?get_total_available_size@c_tag_resource_lruv_cache@c_tag_resource_page_table@@QBAKXZ");
//};

//public: unsigned long c_tag_resource_page_table::c_tag_resource_lruv_cache::align_allocation_size(unsigned long)
//{
//    mangled_ppc("?align_allocation_size@c_tag_resource_lruv_cache@c_tag_resource_page_table@@QAAKK@Z");
//};

//public: long c_tag_resource_page_table::c_tag_resource_lruv_cache::restore_page(class c_tag_resource_page_table::c_tag_resource_page_table_lruv_handler *, long, class c_basic_buffer<void>)
//{
//    mangled_ppc("?restore_page@c_tag_resource_lruv_cache@c_tag_resource_page_table@@QAAJPAVc_tag_resource_page_table_lruv_handler@2@JV?$c_basic_buffer@X@@@Z");
//};

//public: long c_tag_resource_page_table::c_tag_resource_lruv_cache::allocate_page(class c_tag_resource_page_table::c_tag_resource_page_table_lruv_handler *, long, unsigned long, bool)
//{
//    mangled_ppc("?allocate_page@c_tag_resource_lruv_cache@c_tag_resource_page_table@@QAAJPAVc_tag_resource_page_table_lruv_handler@2@JK_N@Z");
//};

//private: long c_tag_resource_page_table::c_tag_resource_lruv_cache::allocate_block_at_index(long, long, long)
//{
//    mangled_ppc("?allocate_block_at_index@c_tag_resource_lruv_cache@c_tag_resource_page_table@@AAAJJJJ@Z");
//};

//private: long c_tag_resource_page_table::c_tag_resource_lruv_cache::restore_page_at_index(long, long, long)
//{
//    mangled_ppc("?restore_page_at_index@c_tag_resource_lruv_cache@c_tag_resource_page_table@@AAAJJJJ@Z");
//};

//public: void c_tag_resource_page_table::c_tag_resource_lruv_cache::deallocate(long)
//{
//    mangled_ppc("?deallocate@c_tag_resource_lruv_cache@c_tag_resource_page_table@@QAAXJ@Z");
//};

//private: void c_tag_resource_page_table::c_tag_resource_lruv_cache::connect_page_to_handler(long, class c_tag_resource_page_table::c_tag_resource_page_table_lruv_handler *, long)
//{
//    mangled_ppc("?connect_page_to_handler@c_tag_resource_lruv_cache@c_tag_resource_page_table@@AAAXJPAVc_tag_resource_page_table_lruv_handler@2@J@Z");
//};

//private: void c_tag_resource_page_table::c_tag_resource_lruv_cache::disconnect_page_from_handler(long)
//{
//    mangled_ppc("?disconnect_page_from_handler@c_tag_resource_lruv_cache@c_tag_resource_page_table@@AAAXJ@Z");
//};

//private: static void c_tag_resource_page_table::c_tag_resource_lruv_cache::lruv_delete_block_thunk(void *, long, bool, bool)
//{
//    mangled_ppc("?lruv_delete_block_thunk@c_tag_resource_lruv_cache@c_tag_resource_page_table@@CAXPAXJ_N1@Z");
//};

//private: void c_tag_resource_page_table::c_tag_resource_lruv_cache::lruv_delete_block(long, bool, bool)
//{
//    mangled_ppc("?lruv_delete_block@c_tag_resource_lruv_cache@c_tag_resource_page_table@@AAAXJ_N0@Z");
//};

//private: static bool c_tag_resource_page_table::c_tag_resource_lruv_cache::lruv_is_block_locked_thunk(void *, long)
//{
//    mangled_ppc("?lruv_is_block_locked_thunk@c_tag_resource_lruv_cache@c_tag_resource_page_table@@CA_NPAXJ@Z");
//};

//private: bool c_tag_resource_page_table::c_tag_resource_lruv_cache::lruv_is_block_locked(long)
//{
//    mangled_ppc("?lruv_is_block_locked@c_tag_resource_lruv_cache@c_tag_resource_page_table@@AAA_NJ@Z");
//};

//private: static void c_tag_resource_page_table::c_tag_resource_lruv_cache::lruv_move_block_thunk(void *, long, unsigned long, unsigned long)
//{
//    mangled_ppc("?lruv_move_block_thunk@c_tag_resource_lruv_cache@c_tag_resource_page_table@@CAXPAXJKK@Z");
//};

//private: void c_tag_resource_page_table::c_tag_resource_lruv_cache::lruv_move_block(long, unsigned long, unsigned long)
//{
//    mangled_ppc("?lruv_move_block@c_tag_resource_lruv_cache@c_tag_resource_page_table@@AAAXJKK@Z");
//};

//private: static bool c_tag_resource_page_table::c_tag_resource_lruv_cache::lruv_clone_block_thunk(void *, long, long, unsigned long, unsigned long)
//{
//    mangled_ppc("?lruv_clone_block_thunk@c_tag_resource_lruv_cache@c_tag_resource_page_table@@CA_NPAXJJKK@Z");
//};

//private: bool c_tag_resource_page_table::c_tag_resource_lruv_cache::lruv_clone_block(long, long, unsigned long, unsigned long)
//{
//    mangled_ppc("?lruv_clone_block@c_tag_resource_lruv_cache@c_tag_resource_page_table@@AAA_NJJKK@Z");
//};

//public: void c_tag_resource_page_table::c_tag_resource_lruv_cache::compact(void)
//{
//    mangled_ppc("?compact@c_tag_resource_lruv_cache@c_tag_resource_page_table@@QAAXXZ");
//};

//public: void c_tag_resource_page_table::c_tag_resource_lruv_cache::compact_keep_optional_up(long)
//{
//    mangled_ppc("?compact_keep_optional_up@c_tag_resource_lruv_cache@c_tag_resource_page_table@@QAAXJ@Z");
//};

//public: void c_tag_resource_page_table::c_tag_resource_lruv_cache::idle(void)
//{
//    mangled_ppc("?idle@c_tag_resource_lruv_cache@c_tag_resource_page_table@@QAAXXZ");
//};

//public: bool c_tag_resource_page_table::c_tag_resource_lruv_cache::defrag(class c_tag_resource_cache_published_location_interface *)
//{
//    mangled_ppc("?defrag@c_tag_resource_lruv_cache@c_tag_resource_page_table@@QAA_NPAVc_tag_resource_cache_published_location_interface@@@Z");
//};

//public: bool c_tag_resource_page_table::c_tag_resource_lruv_cache::is_defrag_busy(void)
//{
//    mangled_ppc("?is_defrag_busy@c_tag_resource_lruv_cache@c_tag_resource_page_table@@QAA_NXZ");
//};

//public: void c_tag_resource_page_table::c_tag_resource_lruv_cache::update_status_lines(void)
//{
//    mangled_ppc("?update_status_lines@c_tag_resource_lruv_cache@c_tag_resource_page_table@@QAAXXZ");
//};

//public: void c_tag_resource_page_table::c_tag_resource_lruv_cache::touch_page(long)
//{
//    mangled_ppc("?touch_page@c_tag_resource_lruv_cache@c_tag_resource_page_table@@QAAXJ@Z");
//};

//public: void c_tag_resource_page_table::c_tag_resource_lruv_cache::mark_page_always_locked(long, bool)
//{
//    mangled_ppc("?mark_page_always_locked@c_tag_resource_lruv_cache@c_tag_resource_page_table@@QAAXJ_N@Z");
//};

//public: void c_tag_resource_page_table::c_tag_resource_lruv_cache::release_physical_allocation(void)
//{
//    mangled_ppc("?release_physical_allocation@c_tag_resource_lruv_cache@c_tag_resource_page_table@@QAAXXZ");
//};

//public: void c_tag_resource_page_table::c_tag_resource_lruv_cache::make_entire_range_writeable(void)
//{
//    mangled_ppc("?make_entire_range_writeable@c_tag_resource_lruv_cache@c_tag_resource_page_table@@QAAXXZ");
//};

//public: void c_tag_resource_page_table::c_tag_resource_lruv_cache::make_entire_range_read_only(void)
//{
//    mangled_ppc("?make_entire_range_read_only@c_tag_resource_lruv_cache@c_tag_resource_page_table@@QAAXXZ");
//};

//public: void c_tag_resource_page_table::c_tag_resource_lruv_cache::make_page_writeable(long)
//{
//    mangled_ppc("?make_page_writeable@c_tag_resource_lruv_cache@c_tag_resource_page_table@@QAAXJ@Z");
//};

//public: void c_tag_resource_page_table::c_tag_resource_lruv_cache::make_page_read_only(long)
//{
//    mangled_ppc("?make_page_read_only@c_tag_resource_lruv_cache@c_tag_resource_page_table@@QAAXJ@Z");
//};

//public: unsigned long c_tag_resource_page_table::c_tag_resource_lruv_cache::get_used_size(void)
//{
//    mangled_ppc("?get_used_size@c_tag_resource_lruv_cache@c_tag_resource_page_table@@QAAKXZ");
//};

//public: unsigned long c_tag_resource_page_table::c_tag_resource_lruv_cache::get_potentially_available_extra_memory_size(void)
//{
//    mangled_ppc("?get_potentially_available_extra_memory_size@c_tag_resource_lruv_cache@c_tag_resource_page_table@@QAAKXZ");
//};

//public: void c_tag_resource_page_table::c_tag_resource_lruv_cache::try_to_buyback_unused_pages(unsigned long)
//{
//    mangled_ppc("?try_to_buyback_unused_pages@c_tag_resource_lruv_cache@c_tag_resource_page_table@@QAAXK@Z");
//};

//public: void c_tag_resource_page_table::c_tag_resource_lruv_cache::try_to_reclaim_pages(void)
//{
//    mangled_ppc("?try_to_reclaim_pages@c_tag_resource_lruv_cache@c_tag_resource_page_table@@QAAXXZ");
//};

//public: void c_tag_resource_page_table::c_tag_resource_lruv_cache::shrink(unsigned long)
//{
//    mangled_ppc("?shrink@c_tag_resource_lruv_cache@c_tag_resource_page_table@@QAAXK@Z");
//};

//public: bool c_tag_resource_page_table::c_tag_resource_lruv_cache::resize(unsigned long, unsigned long, unsigned long, bool, bool *)
//{
//    mangled_ppc("?resize@c_tag_resource_lruv_cache@c_tag_resource_page_table@@QAA_NKKK_NPA_N@Z");
//};

//public: bool c_tag_resource_page_table::c_tag_resource_lruv_cache::grab_restore_buffer(class c_basic_buffer<void>)
//{
//    mangled_ppc("?grab_restore_buffer@c_tag_resource_lruv_cache@c_tag_resource_page_table@@QAA_NV?$c_basic_buffer@X@@@Z");
//};

//public: unsigned long c_tag_resource_page_table::c_tag_resource_lruv_cache::get_page_index(long) const
//{
//    mangled_ppc("?get_page_index@c_tag_resource_lruv_cache@c_tag_resource_page_table@@QBAKJ@Z");
//};

//public: unsigned long c_tag_resource_page_table::c_tag_resource_lruv_cache::get_block_size(long) const
//{
//    mangled_ppc("?get_block_size@c_tag_resource_lruv_cache@c_tag_resource_page_table@@QBAKJ@Z");
//};

//public: class c_basic_buffer<void> c_tag_resource_page_table::c_tag_resource_lruv_cache::get_page_buffer(unsigned long, unsigned long) const
//{
//    mangled_ppc("?get_page_buffer@c_tag_resource_lruv_cache@c_tag_resource_page_table@@QBA?AV?$c_basic_buffer@X@@KK@Z");
//};

//public: class c_basic_buffer<void> c_tag_resource_page_table::c_tag_resource_lruv_cache::get_block_page_buffer(long) const
//{
//    mangled_ppc("?get_block_page_buffer@c_tag_resource_lruv_cache@c_tag_resource_page_table@@QBA?AV?$c_basic_buffer@X@@J@Z");
//};

//public: struct s_lruv_cache * c_tag_resource_page_table::c_tag_resource_lruv_cache::get_lruv_cache_for_lock(void)
//{
//    mangled_ppc("?get_lruv_cache_for_lock@c_tag_resource_lruv_cache@c_tag_resource_page_table@@QAAPAUs_lruv_cache@@XZ");
//};

//public: class c_basic_buffer<void> c_tag_resource_page_table::c_tag_resource_lruv_cache::try_to_steal_memory(unsigned long)
//{
//    mangled_ppc("?try_to_steal_memory@c_tag_resource_lruv_cache@c_tag_resource_page_table@@QAA?AV?$c_basic_buffer@X@@K@Z");
//};

//public: void c_tag_resource_page_table::c_tag_resource_lruv_cache::return_memory(class c_basic_buffer<void>)
//{
//    mangled_ppc("?return_memory@c_tag_resource_lruv_cache@c_tag_resource_page_table@@QAAXV?$c_basic_buffer@X@@@Z");
//};

//public: bool c_tag_resource_page_table::c_tag_resource_lruv_cache::reverse_map_block_index(long, class c_tag_resource_page_table::c_tag_resource_page_table_lruv_handler **, long *) const
//{
//    mangled_ppc("?reverse_map_block_index@c_tag_resource_lruv_cache@c_tag_resource_page_table@@QBA_NJPAPAVc_tag_resource_page_table_lruv_handler@2@PAJ@Z");
//};

//private: class c_tag_resource_page_range_allocator * c_tag_resource_page_table::c_tag_resource_lruv_cache::get_storage_allocator(void)
//{
//    mangled_ppc("?get_storage_allocator@c_tag_resource_lruv_cache@c_tag_resource_page_table@@AAAPAVc_tag_resource_page_range_allocator@@XZ");
//};

//public: struct s_lruv_cache * c_tag_resource_page_table::c_tag_resource_lruv_cache::get_lruv_cache_for_reporting(void)
//{
//    mangled_ppc("?get_lruv_cache_for_reporting@c_tag_resource_lruv_cache@c_tag_resource_page_table@@QAAPAUs_lruv_cache@@XZ");
//};

//public: c_tag_resource_page_table::c_tag_resource_page_datum::c_tag_resource_page_datum(struct s_tag_resource_location_handle_struct *, struct s_tag_resource_page_datum *, class c_tag_resource_cache_file_location_handler *, class c_tag_resource_cache_published_location_interface *, class c_tag_resource_page_table::c_tag_resource_lruv_cache const *)
//{
//    mangled_ppc("??0c_tag_resource_page_datum@c_tag_resource_page_table@@QAA@PAUs_tag_resource_location_handle_struct@@PAUs_tag_resource_page_datum@@PAVc_tag_resource_cache_file_location_handler@@PAVc_tag_resource_cache_published_location_interface@@PBVc_tag_resource_lruv_cache@1@@Z");
//};

//public: bool c_tag_resource_page_table::c_tag_resource_page_datum::test_flag(enum e_tag_resource_page_datum_bit) const
//{
//    mangled_ppc("?test_flag@c_tag_resource_page_datum@c_tag_resource_page_table@@QBA_NW4e_tag_resource_page_datum_bit@@@Z");
//};

//public: bool s_tag_resource_page_datum::test_flag(enum e_tag_resource_page_datum_bit) const
//{
//    mangled_ppc("?test_flag@s_tag_resource_page_datum@@QBA_NW4e_tag_resource_page_datum_bit@@@Z");
//};

//public: void c_tag_resource_page_table::c_tag_resource_page_datum::set_flag(enum e_tag_resource_page_datum_bit, bool)
//{
//    mangled_ppc("?set_flag@c_tag_resource_page_datum@c_tag_resource_page_table@@QAAXW4e_tag_resource_page_datum_bit@@_N@Z");
//};

//public: void s_tag_resource_page_datum::set_flag(enum e_tag_resource_page_datum_bit, bool)
//{
//    mangled_ppc("?set_flag@s_tag_resource_page_datum@@QAAXW4e_tag_resource_page_datum_bit@@_N@Z");
//};

//public: enum e_tag_resource_page_datum_state c_tag_resource_page_table::c_tag_resource_page_datum::get_state(void) const
//{
//    mangled_ppc("?get_state@c_tag_resource_page_datum@c_tag_resource_page_table@@QBA?AW4e_tag_resource_page_datum_state@@XZ");
//};

//public: enum e_tag_resource_page_datum_state s_tag_resource_page_datum::get_state(void) const
//{
//    mangled_ppc("?get_state@s_tag_resource_page_datum@@QBA?AW4e_tag_resource_page_datum_state@@XZ");
//};

//public: void c_tag_resource_page_table::c_tag_resource_page_datum::set_state(enum e_tag_resource_page_datum_state)
//{
//    mangled_ppc("?set_state@c_tag_resource_page_datum@c_tag_resource_page_table@@QAAXW4e_tag_resource_page_datum_state@@@Z");
//};

//public: void s_tag_resource_page_datum::set_state(enum e_tag_resource_page_datum_state)
//{
//    mangled_ppc("?set_state@s_tag_resource_page_datum@@QAAXW4e_tag_resource_page_datum_state@@@Z");
//};

//public: void c_tag_resource_page_table::c_tag_resource_page_datum::set_priority(unsigned long)
//{
//    mangled_ppc("?set_priority@c_tag_resource_page_datum@c_tag_resource_page_table@@QAAXK@Z");
//};

//public: unsigned long c_tag_resource_page_table::c_tag_resource_page_datum::get_priority(void)
//{
//    mangled_ppc("?get_priority@c_tag_resource_page_datum@c_tag_resource_page_table@@QAAKXZ");
//};

//public: class c_basic_buffer<void> const c_tag_resource_page_table::c_tag_resource_page_datum::get_buffer(void) const
//{
//    mangled_ppc("?get_buffer@c_tag_resource_page_datum@c_tag_resource_page_table@@QBA?BV?$c_basic_buffer@X@@XZ");
//};

//public: class c_basic_buffer<void> const c_tag_resource_page_table::c_tag_resource_page_datum::get_allocated_buffer(void) const
//{
//    mangled_ppc("?get_allocated_buffer@c_tag_resource_page_datum@c_tag_resource_page_table@@QBA?BV?$c_basic_buffer@X@@XZ");
//};

//private: class c_basic_buffer<void> const c_tag_resource_page_table::c_tag_resource_page_datum::get_lruv_page_buffer(void) const
//{
//    mangled_ppc("?get_lruv_page_buffer@c_tag_resource_page_datum@c_tag_resource_page_table@@ABA?BV?$c_basic_buffer@X@@XZ");
//};

//public: void c_tag_resource_page_table::c_tag_resource_page_datum::set_page_buffer(class c_basic_buffer<void>)
//{
//    mangled_ppc("?set_page_buffer@c_tag_resource_page_datum@c_tag_resource_page_table@@QAAXV?$c_basic_buffer@X@@@Z");
//};

//public: void c_tag_resource_page_table::c_tag_resource_page_datum::update_page_buffer_on_move(class c_basic_buffer<void>)
//{
//    mangled_ppc("?update_page_buffer_on_move@c_tag_resource_page_datum@c_tag_resource_page_table@@QAAXV?$c_basic_buffer@X@@@Z");
//};

//public: void c_tag_resource_page_table::c_tag_resource_page_datum::update_page_buffer_on_clone(class c_basic_buffer<void>, long)
//{
//    mangled_ppc("?update_page_buffer_on_clone@c_tag_resource_page_datum@c_tag_resource_page_table@@QAAXV?$c_basic_buffer@X@@J@Z");
//};

//public: void c_tag_resource_page_table::c_tag_resource_page_datum::clear_page_buffer(void)
//{
//    mangled_ppc("?clear_page_buffer@c_tag_resource_page_datum@c_tag_resource_page_table@@QAAXXZ");
//};

//public: void c_tag_resource_page_table::c_tag_resource_page_datum::set_lruv_page_handle(long)
//{
//    mangled_ppc("?set_lruv_page_handle@c_tag_resource_page_datum@c_tag_resource_page_table@@QAAXJ@Z");
//};

//public: void c_tag_resource_page_table::c_tag_resource_page_datum::clear_lruv_page_handle(void)
//{
//    mangled_ppc("?clear_lruv_page_handle@c_tag_resource_page_datum@c_tag_resource_page_table@@QAAXXZ");
//};

//public: bool c_tag_resource_page_table::c_tag_resource_page_datum::is_usable(void) const
//{
//    mangled_ppc("?is_usable@c_tag_resource_page_datum@c_tag_resource_page_table@@QBA_NXZ");
//};

//public: bool c_tag_resource_page_table::c_tag_resource_page_datum::is_pending(void) const
//{
//    mangled_ppc("?is_pending@c_tag_resource_page_datum@c_tag_resource_page_table@@QBA_NXZ");
//};

//public: enum e_tag_resource_page_reservation s_tag_resource_page_datum::get_reservation(void) const
//{
//    mangled_ppc("?get_reservation@s_tag_resource_page_datum@@QBA?AW4e_tag_resource_page_reservation@@XZ");
//};

//public: bool c_tag_resource_page_table::c_tag_resource_page_datum::is_optional(void) const
//{
//    mangled_ppc("?is_optional@c_tag_resource_page_datum@c_tag_resource_page_table@@QBA_NXZ");
//};

//public: bool c_tag_resource_page_table::c_tag_resource_page_datum::get_sub_location(struct s_indirect_cache_file_sub_location *) const
//{
//    mangled_ppc("?get_sub_location@c_tag_resource_page_datum@c_tag_resource_page_table@@QBA_NPAUs_indirect_cache_file_sub_location@@@Z");
//};

//public: unsigned long c_tag_resource_page_table::c_tag_resource_page_datum::get_file_size(void) const
//{
//    mangled_ppc("?get_file_size@c_tag_resource_page_datum@c_tag_resource_page_table@@QBAKXZ");
//};

//public: unsigned long c_tag_resource_page_table::c_tag_resource_page_datum::get_used_memory_size(void) const
//{
//    mangled_ppc("?get_used_memory_size@c_tag_resource_page_datum@c_tag_resource_page_table@@QBAKXZ");
//};

//public: bool c_tag_resource_page_table::c_tag_resource_page_datum::try_to_get_checksum(struct s_cache_file_resource_checksum *) const
//{
//    mangled_ppc("?try_to_get_checksum@c_tag_resource_page_datum@c_tag_resource_page_table@@QBA_NPAUs_cache_file_resource_checksum@@@Z");
//};

//public: unsigned __int64 c_tag_resource_page_table::c_tag_resource_page_datum::get_cache_location_identifier(void)
//{
//    mangled_ppc("?get_cache_location_identifier@c_tag_resource_page_datum@c_tag_resource_page_table@@QAA_KXZ");
//};

//public: bool c_tag_resource_page_table::c_tag_resource_page_datum::is_always_locked(void) const
//{
//    mangled_ppc("?is_always_locked@c_tag_resource_page_datum@c_tag_resource_page_table@@QBA_NXZ");
//};

//public: bool c_tag_resource_page_table::c_tag_resource_page_datum::can_free_for_required_memory(void) const
//{
//    mangled_ppc("?can_free_for_required_memory@c_tag_resource_page_datum@c_tag_resource_page_table@@QBA_NXZ");
//};

//public: bool c_tag_resource_page_table::c_tag_resource_page_datum::is_necessary(void) const
//{
//    mangled_ppc("?is_necessary@c_tag_resource_page_datum@c_tag_resource_page_table@@QBA_NXZ");
//};

//public: bool c_tag_resource_page_table::c_tag_resource_page_datum::is_potentially_active(void) const
//{
//    mangled_ppc("?is_potentially_active@c_tag_resource_page_datum@c_tag_resource_page_table@@QBA_NXZ");
//};

//public: bool c_tag_resource_page_table::c_tag_resource_page_datum::should_actually_prefetch(void) const
//{
//    mangled_ppc("?should_actually_prefetch@c_tag_resource_page_datum@c_tag_resource_page_table@@QBA_NXZ");
//};

//public: bool c_tag_resource_page_table::c_tag_resource_page_datum::address_is_pinned(void) const
//{
//    mangled_ppc("?address_is_pinned@c_tag_resource_page_datum@c_tag_resource_page_table@@QBA_NXZ");
//};

//public: bool c_tag_resource_page_table::c_tag_resource_page_datum::address_is_locked(void) const
//{
//    mangled_ppc("?address_is_locked@c_tag_resource_page_datum@c_tag_resource_page_table@@QBA_NXZ");
//};

//public: bool c_tag_resource_page_table::c_tag_resource_page_datum::address_is_published(void) const
//{
//    mangled_ppc("?address_is_published@c_tag_resource_page_datum@c_tag_resource_page_table@@QBA_NXZ");
//};

//public: enum e_tag_resource_page_reservation c_tag_resource_page_table::c_tag_resource_page_datum::get_reservation(void) const
//{
//    mangled_ppc("?get_reservation@c_tag_resource_page_datum@c_tag_resource_page_table@@QBA?AW4e_tag_resource_page_reservation@@XZ");
//};

//public: void c_tag_resource_page_table::c_tag_resource_page_datum::set_reservation(enum e_tag_resource_page_reservation)
//{
//    mangled_ppc("?set_reservation@c_tag_resource_page_datum@c_tag_resource_page_table@@QAAXW4e_tag_resource_page_reservation@@@Z");
//};

//public: void s_tag_resource_page_datum::set_reservation(enum e_tag_resource_page_reservation)
//{
//    mangled_ppc("?set_reservation@s_tag_resource_page_datum@@QAAXW4e_tag_resource_page_reservation@@@Z");
//};

//public: void c_tag_resource_page_table::c_tag_resource_page_datum::pin(void)
//{
//    mangled_ppc("?pin@c_tag_resource_page_datum@c_tag_resource_page_table@@QAAXXZ");
//};

//public: void c_tag_resource_page_table::c_tag_resource_page_datum::unpin(void)
//{
//    mangled_ppc("?unpin@c_tag_resource_page_datum@c_tag_resource_page_table@@QAAXXZ");
//};

//public: void c_tag_resource_page_table::c_tag_resource_page_datum::add_control_reference(void)
//{
//    mangled_ppc("?add_control_reference@c_tag_resource_page_datum@c_tag_resource_page_table@@QAAXXZ");
//};

//public: void c_tag_resource_page_table::c_tag_resource_page_datum::remove_control_reference(void)
//{
//    mangled_ppc("?remove_control_reference@c_tag_resource_page_datum@c_tag_resource_page_table@@QAAXXZ");
//};

//public: bool c_tag_resource_page_table::c_tag_resource_page_datum::any_control_references(void) const
//{
//    mangled_ppc("?any_control_references@c_tag_resource_page_datum@c_tag_resource_page_table@@QBA_NXZ");
//};

//public: struct s_tag_resource_location_handle_struct * c_tag_resource_page_table::c_tag_resource_page_datum::get_location_handle(void) const
//{
//    mangled_ppc("?get_location_handle@c_tag_resource_page_datum@c_tag_resource_page_table@@QBAPAUs_tag_resource_location_handle_struct@@XZ");
//};

//public: long c_tag_resource_page_table::c_tag_resource_page_datum::get_page_handle_for_lruv_mapping(void) const
//{
//    mangled_ppc("?get_page_handle_for_lruv_mapping@c_tag_resource_page_datum@c_tag_resource_page_table@@QBAJXZ");
//};

//public: long c_tag_resource_page_table::c_tag_resource_page_datum::get_lruv_block_index(void) const
//{
//    mangled_ppc("?get_lruv_block_index@c_tag_resource_page_datum@c_tag_resource_page_table@@QBAJXZ");
//};

//public: long c_tag_resource_page_table::c_tag_resource_page_datum::get_absolute_internal_index(void) const
//{
//    mangled_ppc("?get_absolute_internal_index@c_tag_resource_page_datum@c_tag_resource_page_table@@QBAJXZ");
//};

//public: bool c_tag_resource_page_table::c_tag_resource_page_datum::validate_buffer(void)
//{
//    mangled_ppc("?validate_buffer@c_tag_resource_page_datum@c_tag_resource_page_table@@QAA_NXZ");
//};

//public: bool c_tag_resource_page_table::c_tag_resource_page_datum::failed(void) const
//{
//    mangled_ppc("?failed@c_tag_resource_page_datum@c_tag_resource_page_table@@QBA_NXZ");
//};

//public: void c_tag_resource_page_table::c_tag_resource_page_datum::clear_failures(void)
//{
//    mangled_ppc("?clear_failures@c_tag_resource_page_datum@c_tag_resource_page_table@@QAAXXZ");
//};

//public: class c_static_string<512> c_tag_resource_page_table::c_tag_resource_page_datum::describe_page(void)
//{
//    mangled_ppc("?describe_page@c_tag_resource_page_datum@c_tag_resource_page_table@@QAA?AV?$c_static_string@$0CAA@@@XZ");
//};

//public: void c_wrapped_data_array<struct c_tag_resource_page_table::c_tag_resource_lruv_cache::s_lruv_block_reverse_mapping>::initialize(struct s_data_array *)
//{
//    mangled_ppc("?initialize@?$c_wrapped_data_array@Us_lruv_block_reverse_mapping@c_tag_resource_lruv_cache@c_tag_resource_page_table@@@@QAAXPAUs_data_array@@@Z");
//};

//public: void c_wrapped_data_array<struct c_tag_resource_page_table::c_tag_resource_lruv_cache::s_lruv_block_reverse_mapping>::dispose(void)
//{
//    mangled_ppc("?dispose@?$c_wrapped_data_array@Us_lruv_block_reverse_mapping@c_tag_resource_lruv_cache@c_tag_resource_page_table@@@@QAAXXZ");
//};

//public: struct c_tag_resource_page_table::c_tag_resource_lruv_cache::s_lruv_block_reverse_mapping const * c_wrapped_data_array<struct c_tag_resource_page_table::c_tag_resource_lruv_cache::s_lruv_block_reverse_mapping>::try_to_get(long) const
//{
//    mangled_ppc("?try_to_get@?$c_wrapped_data_array@Us_lruv_block_reverse_mapping@c_tag_resource_lruv_cache@c_tag_resource_page_table@@@@QBAPBUs_lruv_block_reverse_mapping@c_tag_resource_lruv_cache@c_tag_resource_page_table@@J@Z");
//};

//public: struct c_tag_resource_page_table::c_tag_resource_lruv_cache::s_lruv_block_reverse_mapping * c_wrapped_data_array<struct c_tag_resource_page_table::c_tag_resource_lruv_cache::s_lruv_block_reverse_mapping>::get_mutable(long)
//{
//    mangled_ppc("?get_mutable@?$c_wrapped_data_array@Us_lruv_block_reverse_mapping@c_tag_resource_lruv_cache@c_tag_resource_page_table@@@@QAAPAUs_lruv_block_reverse_mapping@c_tag_resource_lruv_cache@c_tag_resource_page_table@@J@Z");
//};

//public: struct c_tag_resource_page_table::c_tag_resource_lruv_cache::s_lruv_block_reverse_mapping const * c_wrapped_data_array<struct c_tag_resource_page_table::c_tag_resource_lruv_cache::s_lruv_block_reverse_mapping>::get(long) const
//{
//    mangled_ppc("?get@?$c_wrapped_data_array@Us_lruv_block_reverse_mapping@c_tag_resource_lruv_cache@c_tag_resource_page_table@@@@QBAPBUs_lruv_block_reverse_mapping@c_tag_resource_lruv_cache@c_tag_resource_page_table@@J@Z");
//};

//public: struct s_data_array * c_wrapped_data_array<struct c_tag_resource_page_table::c_tag_resource_lruv_cache::s_lruv_block_reverse_mapping>::operator struct s_data_array *(void)
//{
//    mangled_ppc("??B?$c_wrapped_data_array@Us_lruv_block_reverse_mapping@c_tag_resource_lruv_cache@c_tag_resource_page_table@@@@QAAPAUs_data_array@@XZ");
//};

//public: struct s_data_array const * c_wrapped_data_array<struct c_tag_resource_page_table::c_tag_resource_lruv_cache::s_lruv_block_reverse_mapping>::get_data(void) const
//{
//    mangled_ppc("?get_data@?$c_wrapped_data_array@Us_lruv_block_reverse_mapping@c_tag_resource_lruv_cache@c_tag_resource_page_table@@@@QBAPBUs_data_array@@XZ");
//};

//public: struct s_data_array * c_smart_data_array<struct s_tag_resource_page_datum>::operator struct s_data_array *(void) const
//{
//    mangled_ppc("??B?$c_smart_data_array@Us_tag_resource_page_datum@@@@QBAPAUs_data_array@@XZ");
//};

//public: struct s_data_array * c_smart_data_array<struct s_tag_resource_page_datum>::operator->(void)
//{
//    mangled_ppc("??C?$c_smart_data_array@Us_tag_resource_page_datum@@@@QAAPAUs_data_array@@XZ");
//};

//public: struct s_tag_resource_cache_file_async_read_datum * c_wrapped_data_array<struct s_tag_resource_cache_file_async_read_datum>::get_mutable(long)
//{
//    mangled_ppc("?get_mutable@?$c_wrapped_data_array@Us_tag_resource_cache_file_async_read_datum@@@@QAAPAUs_tag_resource_cache_file_async_read_datum@@J@Z");
//};

//public: struct s_data_array * c_wrapped_data_array<struct s_tag_resource_cache_file_async_read_datum>::operator struct s_data_array *(void)
//{
//    mangled_ppc("??B?$c_wrapped_data_array@Us_tag_resource_cache_file_async_read_datum@@@@QAAPAUs_data_array@@XZ");
//};

//public: struct s_data_array const * c_wrapped_data_array<struct s_tag_resource_cache_file_async_read_datum>::get_data(void) const
//{
//    mangled_ppc("?get_data@?$c_wrapped_data_array@Us_tag_resource_cache_file_async_read_datum@@@@QBAPBUs_data_array@@XZ");
//};

//public: struct c_status_line * s_static_array<struct c_status_line, 7>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$s_static_array@Uc_status_line@@$06@@QAAPAUc_status_line@@XZ");
//};

//public: static long s_static_array<struct c_status_line, 7>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Uc_status_line@@$06@@SAJXZ");
//};

//public: c_enum<enum e_tag_resource_page_datum_state, unsigned char, 0, 5, struct s_default_enum_string_resolver>::c_enum<enum e_tag_resource_page_datum_state, unsigned char, 0, 5, struct s_default_enum_string_resolver>(enum e_tag_resource_page_datum_state)
//{
//    mangled_ppc("??0?$c_enum@W4e_tag_resource_page_datum_state@@E$0A@$04Us_default_enum_string_resolver@@@@QAA@W4e_tag_resource_page_datum_state@@@Z");
//};

//public: enum e_tag_resource_page_datum_state c_enum_no_init<enum e_tag_resource_page_datum_state, unsigned char, 0, 5, struct s_default_enum_string_resolver>::operator enum e_tag_resource_page_datum_state(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_tag_resource_page_datum_state@@E$0A@$04Us_default_enum_string_resolver@@@@QBA?AW4e_tag_resource_page_datum_state@@XZ");
//};

//public: void c_reference_count<short>::acquire(void)
//{
//    mangled_ppc("?acquire@?$c_reference_count@F@@QAAXXZ");
//};

//public: void c_reference_count<short>::release(void)
//{
//    mangled_ppc("?release@?$c_reference_count@F@@QAAXXZ");
//};

//public: bool c_reference_count<short>::locked(void) const
//{
//    mangled_ppc("?locked@?$c_reference_count@F@@QBA_NXZ");
//};

//public: c_enum<enum e_tag_resource_page_reservation, short, 0, 4, struct s_default_enum_string_resolver>::c_enum<enum e_tag_resource_page_reservation, short, 0, 4, struct s_default_enum_string_resolver>(enum e_tag_resource_page_reservation)
//{
//    mangled_ppc("??0?$c_enum@W4e_tag_resource_page_reservation@@F$0A@$03Us_default_enum_string_resolver@@@@QAA@W4e_tag_resource_page_reservation@@@Z");
//};

//public: enum e_tag_resource_page_reservation c_enum_no_init<enum e_tag_resource_page_reservation, short, 0, 4, struct s_default_enum_string_resolver>::operator enum e_tag_resource_page_reservation(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_tag_resource_page_reservation@@F$0A@$03Us_default_enum_string_resolver@@@@QBA?AW4e_tag_resource_page_reservation@@XZ");
//};

//public: bool c_enum_no_init<enum e_tag_resource_page_reservation, short, 0, 4, struct s_default_enum_string_resolver>::operator==(enum e_tag_resource_page_reservation) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_tag_resource_page_reservation@@F$0A@$03Us_default_enum_string_resolver@@@@QBA_NW4e_tag_resource_page_reservation@@@Z");
//};

//public: c_static_sized_dynamic_array<unsigned __int64, 1500>::c_static_sized_dynamic_array<unsigned __int64, 1500>(void)
//{
//    mangled_ppc("??0?$c_static_sized_dynamic_array@_K$0FNM@@@QAA@XZ");
//};

//public: unsigned __int64* c_static_sized_dynamic_array<unsigned __int64, 1500>::begin(void)
//{
//    mangled_ppc("?begin@?$c_static_sized_dynamic_array@_K$0FNM@@@QAAPA_KXZ");
//};

//public: unsigned __int64* c_static_sized_dynamic_array<unsigned __int64, 1500>::end(void)
//{
//    mangled_ppc("?end@?$c_static_sized_dynamic_array@_K$0FNM@@@QAAPA_KXZ");
//};

//public: long c_static_sized_dynamic_array<unsigned __int64, 1500>::count(void) const
//{
//    mangled_ppc("?count@?$c_static_sized_dynamic_array@_K$0FNM@@@QBAJXZ");
//};

//public: unsigned __int64& c_resizeable_array_operator_interface<class c_static_sized_dynamic_array<unsigned __int64, 1500>, unsigned __int64>::add_element(void)
//{
//    mangled_ppc("?add_element@?$c_resizeable_array_operator_interface@V?$c_static_sized_dynamic_array@_K$0FNM@@@_K@@QAAAA_KXZ");
//};

//public: unsigned __int64const & c_array_operator_interface<class c_static_sized_dynamic_array<unsigned __int64, 1500>, unsigned __int64>::operator[](long) const
//{
//    mangled_ppc("??A?$c_array_operator_interface@V?$c_static_sized_dynamic_array@_K$0FNM@@@_K@@QBAAB_KJ@Z");
//};

//public: c_static_sized_dynamic_array<struct s_indirect_cache_file_read_request, 1500>::c_static_sized_dynamic_array<struct s_indirect_cache_file_read_request, 1500>(void)
//{
//    mangled_ppc("??0?$c_static_sized_dynamic_array@Us_indirect_cache_file_read_request@@$0FNM@@@QAA@XZ");
//};

//public: bool c_static_sized_dynamic_array<struct s_indirect_cache_file_read_request, 1500>::full(void) const
//{
//    mangled_ppc("?full@?$c_static_sized_dynamic_array@Us_indirect_cache_file_read_request@@$0FNM@@@QBA_NXZ");
//};

//public: long c_static_sized_dynamic_array<struct s_indirect_cache_file_read_request, 1500>::count(void) const
//{
//    mangled_ppc("?count@?$c_static_sized_dynamic_array@Us_indirect_cache_file_read_request@@$0FNM@@@QBAJXZ");
//};

//public: struct s_indirect_cache_file_read_request & c_resizeable_array_operator_interface<class c_static_sized_dynamic_array<struct s_indirect_cache_file_read_request, 1500>, struct s_indirect_cache_file_read_request>::add_element(void)
//{
//    mangled_ppc("?add_element@?$c_resizeable_array_operator_interface@V?$c_static_sized_dynamic_array@Us_indirect_cache_file_read_request@@$0FNM@@@Us_indirect_cache_file_read_request@@@@QAAAAUs_indirect_cache_file_read_request@@XZ");
//};

//public: struct s_indirect_cache_file_read_request & c_array_operator_interface<class c_static_sized_dynamic_array<struct s_indirect_cache_file_read_request, 1500>, struct s_indirect_cache_file_read_request>::operator[](long)
//{
//    mangled_ppc("??A?$c_array_operator_interface@V?$c_static_sized_dynamic_array@Us_indirect_cache_file_read_request@@$0FNM@@@Us_indirect_cache_file_read_request@@@@QAAAAUs_indirect_cache_file_read_request@@J@Z");
//};

//public: c_static_sized_dynamic_array<struct s_tag_resource_location_handle_struct *, 1500>::c_static_sized_dynamic_array<struct s_tag_resource_location_handle_struct *, 1500>(void)
//{
//    mangled_ppc("??0?$c_static_sized_dynamic_array@PAUs_tag_resource_location_handle_struct@@$0FNM@@@QAA@XZ");
//};

//public: long c_static_sized_dynamic_array<struct s_tag_resource_location_handle_struct *, 1500>::count(void) const
//{
//    mangled_ppc("?count@?$c_static_sized_dynamic_array@PAUs_tag_resource_location_handle_struct@@$0FNM@@@QBAJXZ");
//};

//public: struct s_tag_resource_location_handle_struct *& c_resizeable_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_resource_location_handle_struct *, 1500>, struct s_tag_resource_location_handle_struct *>::add_element(void)
//{
//    mangled_ppc("?add_element@?$c_resizeable_array_operator_interface@V?$c_static_sized_dynamic_array@PAUs_tag_resource_location_handle_struct@@$0FNM@@@PAUs_tag_resource_location_handle_struct@@@@QAAAAPAUs_tag_resource_location_handle_struct@@XZ");
//};

//public: struct s_tag_resource_location_handle_struct *& c_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_resource_location_handle_struct *, 1500>, struct s_tag_resource_location_handle_struct *>::operator[](long)
//{
//    mangled_ppc("??A?$c_array_operator_interface@V?$c_static_sized_dynamic_array@PAUs_tag_resource_location_handle_struct@@$0FNM@@@PAUs_tag_resource_location_handle_struct@@@@QAAAAPAUs_tag_resource_location_handle_struct@@J@Z");
//};

//public: c_static_sized_dynamic_array<enum e_indirect_cache_file_read_result, 1500>::c_static_sized_dynamic_array<enum e_indirect_cache_file_read_result, 1500>(void)
//{
//    mangled_ppc("??0?$c_static_sized_dynamic_array@W4e_indirect_cache_file_read_result@@$0FNM@@@QAA@XZ");
//};

//public: enum e_indirect_cache_file_read_result & c_resizeable_array_operator_interface<class c_static_sized_dynamic_array<enum e_indirect_cache_file_read_result, 1500>, enum e_indirect_cache_file_read_result>::add_element(void)
//{
//    mangled_ppc("?add_element@?$c_resizeable_array_operator_interface@V?$c_static_sized_dynamic_array@W4e_indirect_cache_file_read_result@@$0FNM@@@W4e_indirect_cache_file_read_result@@@@QAAAAW4e_indirect_cache_file_read_result@@XZ");
//};

//public: enum e_indirect_cache_file_read_result & c_array_operator_interface<class c_static_sized_dynamic_array<enum e_indirect_cache_file_read_result, 1500>, enum e_indirect_cache_file_read_result>::operator[](long)
//{
//    mangled_ppc("??A?$c_array_operator_interface@V?$c_static_sized_dynamic_array@W4e_indirect_cache_file_read_result@@$0FNM@@@W4e_indirect_cache_file_read_result@@@@QAAAAW4e_indirect_cache_file_read_result@@J@Z");
//};

//public: enum e_indirect_cache_file_read_result const & c_array_operator_interface<class c_static_sized_dynamic_array<enum e_indirect_cache_file_read_result, 1500>, enum e_indirect_cache_file_read_result>::operator[](long) const
//{
//    mangled_ppc("??A?$c_array_operator_interface@V?$c_static_sized_dynamic_array@W4e_indirect_cache_file_read_result@@$0FNM@@@W4e_indirect_cache_file_read_result@@@@QBAABW4e_indirect_cache_file_read_result@@J@Z");
//};

//public: c_tag_resource_page_table_io_wrapper<bool & (c_tag_resource_page_table::request_page_async::*)(struct s_tag_resource_location_handle_struct *, struct s_indirect_cache_file_read_request const *)>::c_tag_resource_page_table_io_wrapper<bool & (c_tag_resource_page_table::request_page_async::*)(struct s_tag_resource_location_handle_struct *, struct s_indirect_cache_file_read_request const *)>(class c_tag_resource_page_table *)
//{
//    mangled_ppc("??0?$c_tag_resource_page_table_io_wrapper@$1?request_page_async@c_tag_resource_page_table@@AAA_NPAUs_tag_resource_location_handle_struct@@PBUs_indirect_cache_file_read_request@@@Z@@QAA@PAVc_tag_resource_page_table@@@Z");
//};

//public: virtual bool c_tag_resource_page_table_io_wrapper<bool & (c_tag_resource_page_table::request_page_async::*)(struct s_tag_resource_location_handle_struct *, struct s_indirect_cache_file_read_request const *)>::request_data(struct s_tag_resource_location_handle_struct *, struct s_indirect_cache_file_read_request const *)
//{
//    mangled_ppc("?request_data@?$c_tag_resource_page_table_io_wrapper@$1?request_page_async@c_tag_resource_page_table@@AAA_NPAUs_tag_resource_location_handle_struct@@PBUs_indirect_cache_file_read_request@@@Z@@UAA_NPAUs_tag_resource_location_handle_struct@@PBUs_indirect_cache_file_read_request@@@Z");
//};

//public: void c_data_iterator<struct s_tag_resource_cache_file_async_read_datum>::begin(struct s_data_array *)
//{
//    mangled_ppc("?begin@?$c_data_iterator@Us_tag_resource_cache_file_async_read_datum@@@@QAAXPAUs_data_array@@@Z");
//};

//public: bool c_data_iterator<struct s_tag_resource_cache_file_async_read_datum>::next(void)
//{
//    mangled_ppc("?next@?$c_data_iterator@Us_tag_resource_cache_file_async_read_datum@@@@QAA_NXZ");
//};

//public: struct s_tag_resource_cache_file_async_read_datum * c_data_iterator<struct s_tag_resource_cache_file_async_read_datum>::get_datum(void) const
//{
//    mangled_ppc("?get_datum@?$c_data_iterator@Us_tag_resource_cache_file_async_read_datum@@@@QBAPAUs_tag_resource_cache_file_async_read_datum@@XZ");
//};

//public: long c_data_iterator<struct s_tag_resource_cache_file_async_read_datum>::get_index(void) const
//{
//    mangled_ppc("?get_index@?$c_data_iterator@Us_tag_resource_cache_file_async_read_datum@@@@QBAJXZ");
//};

//public: s_static_array<struct s_indirect_cache_file_read_request, 1500>::s_static_array<struct s_indirect_cache_file_read_request, 1500>(void)
//{
//    mangled_ppc("??0?$s_static_array@Us_indirect_cache_file_read_request@@$0FNM@@@QAA@XZ");
//};

//public: struct s_data_array * c_smart_data_array<struct c_tag_resource_page_table::c_tag_resource_lruv_cache::s_lruv_block_reverse_mapping>::operator struct s_data_array *(void) const
//{
//    mangled_ppc("??B?$c_smart_data_array@Us_lruv_block_reverse_mapping@c_tag_resource_lruv_cache@c_tag_resource_page_table@@@@QBAPAUs_data_array@@XZ");
//};

//public: struct s_data_array * c_smart_data_array<struct c_tag_resource_page_table::c_tag_resource_lruv_cache::s_lruv_block_reverse_mapping>::operator->(void)
//{
//    mangled_ppc("??C?$c_smart_data_array@Us_lruv_block_reverse_mapping@c_tag_resource_lruv_cache@c_tag_resource_page_table@@@@QAAPAUs_data_array@@XZ");
//};

//public: class c_smart_data_array<struct c_tag_resource_page_table::c_tag_resource_lruv_cache::s_lruv_block_reverse_mapping> & c_smart_data_array<struct c_tag_resource_page_table::c_tag_resource_lruv_cache::s_lruv_block_reverse_mapping>::operator=(struct s_data_array *)
//{
//    mangled_ppc("??4?$c_smart_data_array@Us_lruv_block_reverse_mapping@c_tag_resource_lruv_cache@c_tag_resource_page_table@@@@QAAAAV0@PAUs_data_array@@@Z");
//};

//public: struct s_data_array * c_smart_data_array<struct s_tag_resource_cache_file_async_read_datum>::operator struct s_data_array *(void) const
//{
//    mangled_ppc("??B?$c_smart_data_array@Us_tag_resource_cache_file_async_read_datum@@@@QBAPAUs_data_array@@XZ");
//};

//public: unsigned __int64const * c_static_sized_dynamic_array<unsigned __int64, 1500>::begin(void) const
//{
//    mangled_ppc("?begin@?$c_static_sized_dynamic_array@_K$0FNM@@@QBAPB_KXZ");
//};

//public: long c_resizeable_array_operator_interface<class c_static_sized_dynamic_array<unsigned __int64, 1500>, unsigned __int64>::new_element_index(void)
//{
//    mangled_ppc("?new_element_index@?$c_resizeable_array_operator_interface@V?$c_static_sized_dynamic_array@_K$0FNM@@@_K@@QAAJXZ");
//};

//public: unsigned __int64* c_array_operator_interface<class c_static_sized_dynamic_array<unsigned __int64, 1500>, unsigned __int64>::get_element(long)
//{
//    mangled_ppc("?get_element@?$c_array_operator_interface@V?$c_static_sized_dynamic_array@_K$0FNM@@@_K@@QAAPA_KJ@Z");
//};

//public: bool c_array_operator_interface<class c_static_sized_dynamic_array<unsigned __int64, 1500>, unsigned __int64>::valid_index(long) const
//{
//    mangled_ppc("?valid_index@?$c_array_operator_interface@V?$c_static_sized_dynamic_array@_K$0FNM@@@_K@@QBA_NJ@Z");
//};

//public: class c_static_sized_dynamic_array<unsigned __int64, 1500> const * c_recursive_template_pattern<class c_static_sized_dynamic_array<unsigned __int64, 1500> >::get_super_class(void) const
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_static_sized_dynamic_array@_K$0FNM@@@@@QBAPBV?$c_static_sized_dynamic_array@_K$0FNM@@@XZ");
//};

//public: unsigned __int64* s_static_array<unsigned __int64, 1500>::begin(void)
//{
//    mangled_ppc("?begin@?$s_static_array@_K$0FNM@@@QAAPA_KXZ");
//};

//public: struct s_indirect_cache_file_read_request * c_static_sized_dynamic_array<struct s_indirect_cache_file_read_request, 1500>::begin(void)
//{
//    mangled_ppc("?begin@?$c_static_sized_dynamic_array@Us_indirect_cache_file_read_request@@$0FNM@@@QAAPAUs_indirect_cache_file_read_request@@XZ");
//};

//public: long c_resizeable_array_operator_interface<class c_static_sized_dynamic_array<struct s_indirect_cache_file_read_request, 1500>, struct s_indirect_cache_file_read_request>::new_element_index(void)
//{
//    mangled_ppc("?new_element_index@?$c_resizeable_array_operator_interface@V?$c_static_sized_dynamic_array@Us_indirect_cache_file_read_request@@$0FNM@@@Us_indirect_cache_file_read_request@@@@QAAJXZ");
//};

//public: struct s_indirect_cache_file_read_request * c_array_operator_interface<class c_static_sized_dynamic_array<struct s_indirect_cache_file_read_request, 1500>, struct s_indirect_cache_file_read_request>::get_element(long)
//{
//    mangled_ppc("?get_element@?$c_array_operator_interface@V?$c_static_sized_dynamic_array@Us_indirect_cache_file_read_request@@$0FNM@@@Us_indirect_cache_file_read_request@@@@QAAPAUs_indirect_cache_file_read_request@@J@Z");
//};

//public: bool c_array_operator_interface<class c_static_sized_dynamic_array<struct s_indirect_cache_file_read_request, 1500>, struct s_indirect_cache_file_read_request>::valid_index(long) const
//{
//    mangled_ppc("?valid_index@?$c_array_operator_interface@V?$c_static_sized_dynamic_array@Us_indirect_cache_file_read_request@@$0FNM@@@Us_indirect_cache_file_read_request@@@@QBA_NJ@Z");
//};

//public: class c_static_sized_dynamic_array<struct s_indirect_cache_file_read_request, 1500> * c_recursive_template_pattern<class c_static_sized_dynamic_array<struct s_indirect_cache_file_read_request, 1500> >::get_super_class(void)
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_static_sized_dynamic_array@Us_indirect_cache_file_read_request@@$0FNM@@@@@QAAPAV?$c_static_sized_dynamic_array@Us_indirect_cache_file_read_request@@$0FNM@@@XZ");
//};

//public: static long s_static_array<struct s_indirect_cache_file_read_request, 1500>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Us_indirect_cache_file_read_request@@$0FNM@@@SAJXZ");
//};

//public: struct s_tag_resource_location_handle_struct ** c_static_sized_dynamic_array<struct s_tag_resource_location_handle_struct *, 1500>::begin(void)
//{
//    mangled_ppc("?begin@?$c_static_sized_dynamic_array@PAUs_tag_resource_location_handle_struct@@$0FNM@@@QAAPAPAUs_tag_resource_location_handle_struct@@XZ");
//};

//public: long c_resizeable_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_resource_location_handle_struct *, 1500>, struct s_tag_resource_location_handle_struct *>::new_element_index(void)
//{
//    mangled_ppc("?new_element_index@?$c_resizeable_array_operator_interface@V?$c_static_sized_dynamic_array@PAUs_tag_resource_location_handle_struct@@$0FNM@@@PAUs_tag_resource_location_handle_struct@@@@QAAJXZ");
//};

//public: struct s_tag_resource_location_handle_struct ** c_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_resource_location_handle_struct *, 1500>, struct s_tag_resource_location_handle_struct *>::get_element(long)
//{
//    mangled_ppc("?get_element@?$c_array_operator_interface@V?$c_static_sized_dynamic_array@PAUs_tag_resource_location_handle_struct@@$0FNM@@@PAUs_tag_resource_location_handle_struct@@@@QAAPAPAUs_tag_resource_location_handle_struct@@J@Z");
//};

//public: bool c_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_resource_location_handle_struct *, 1500>, struct s_tag_resource_location_handle_struct *>::valid_index(long) const
//{
//    mangled_ppc("?valid_index@?$c_array_operator_interface@V?$c_static_sized_dynamic_array@PAUs_tag_resource_location_handle_struct@@$0FNM@@@PAUs_tag_resource_location_handle_struct@@@@QBA_NJ@Z");
//};

//public: class c_static_sized_dynamic_array<struct s_tag_resource_location_handle_struct *, 1500> * c_recursive_template_pattern<class c_static_sized_dynamic_array<struct s_tag_resource_location_handle_struct *, 1500> >::get_super_class(void)
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_static_sized_dynamic_array@PAUs_tag_resource_location_handle_struct@@$0FNM@@@@@QAAPAV?$c_static_sized_dynamic_array@PAUs_tag_resource_location_handle_struct@@$0FNM@@@XZ");
//};

//public: enum e_indirect_cache_file_read_result * c_static_sized_dynamic_array<enum e_indirect_cache_file_read_result, 1500>::begin(void)
//{
//    mangled_ppc("?begin@?$c_static_sized_dynamic_array@W4e_indirect_cache_file_read_result@@$0FNM@@@QAAPAW4e_indirect_cache_file_read_result@@XZ");
//};

//public: enum e_indirect_cache_file_read_result const * c_static_sized_dynamic_array<enum e_indirect_cache_file_read_result, 1500>::begin(void) const
//{
//    mangled_ppc("?begin@?$c_static_sized_dynamic_array@W4e_indirect_cache_file_read_result@@$0FNM@@@QBAPBW4e_indirect_cache_file_read_result@@XZ");
//};

//public: long c_resizeable_array_operator_interface<class c_static_sized_dynamic_array<enum e_indirect_cache_file_read_result, 1500>, enum e_indirect_cache_file_read_result>::new_element_index(void)
//{
//    mangled_ppc("?new_element_index@?$c_resizeable_array_operator_interface@V?$c_static_sized_dynamic_array@W4e_indirect_cache_file_read_result@@$0FNM@@@W4e_indirect_cache_file_read_result@@@@QAAJXZ");
//};

//public: enum e_indirect_cache_file_read_result * c_array_operator_interface<class c_static_sized_dynamic_array<enum e_indirect_cache_file_read_result, 1500>, enum e_indirect_cache_file_read_result>::get_element(long)
//{
//    mangled_ppc("?get_element@?$c_array_operator_interface@V?$c_static_sized_dynamic_array@W4e_indirect_cache_file_read_result@@$0FNM@@@W4e_indirect_cache_file_read_result@@@@QAAPAW4e_indirect_cache_file_read_result@@J@Z");
//};

//public: bool c_array_operator_interface<class c_static_sized_dynamic_array<enum e_indirect_cache_file_read_result, 1500>, enum e_indirect_cache_file_read_result>::valid_index(long) const
//{
//    mangled_ppc("?valid_index@?$c_array_operator_interface@V?$c_static_sized_dynamic_array@W4e_indirect_cache_file_read_result@@$0FNM@@@W4e_indirect_cache_file_read_result@@@@QBA_NJ@Z");
//};

//public: class c_static_sized_dynamic_array<enum e_indirect_cache_file_read_result, 1500> * c_recursive_template_pattern<class c_static_sized_dynamic_array<enum e_indirect_cache_file_read_result, 1500> >::get_super_class(void)
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_static_sized_dynamic_array@W4e_indirect_cache_file_read_result@@$0FNM@@@@@QAAPAV?$c_static_sized_dynamic_array@W4e_indirect_cache_file_read_result@@$0FNM@@@XZ");
//};

//public: class c_static_sized_dynamic_array<enum e_indirect_cache_file_read_result, 1500> const * c_recursive_template_pattern<class c_static_sized_dynamic_array<enum e_indirect_cache_file_read_result, 1500> >::get_super_class(void) const
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_static_sized_dynamic_array@W4e_indirect_cache_file_read_result@@$0FNM@@@@@QBAPBV?$c_static_sized_dynamic_array@W4e_indirect_cache_file_read_result@@$0FNM@@@XZ");
//};

//public: long c_static_sized_dynamic_array<unsigned __int64, 1500>::new_element_index(void)
//{
//    mangled_ppc("?new_element_index@?$c_static_sized_dynamic_array@_K$0FNM@@@QAAJXZ");
//};

//private: class c_static_sized_dynamic_array<unsigned __int64, 1500> * c_resizeable_array_operator_interface<class c_static_sized_dynamic_array<unsigned __int64, 1500>, unsigned __int64>::get_super_class(void)
//{
//    mangled_ppc("?get_super_class@?$c_resizeable_array_operator_interface@V?$c_static_sized_dynamic_array@_K$0FNM@@@_K@@AAAPAV?$c_static_sized_dynamic_array@_K$0FNM@@@XZ");
//};

//public: unsigned __int64* c_array_operator_interface<class c_static_sized_dynamic_array<unsigned __int64, 1500>, unsigned __int64>::begin(void)
//{
//    mangled_ppc("?begin@?$c_array_operator_interface@V?$c_static_sized_dynamic_array@_K$0FNM@@@_K@@QAAPA_KXZ");
//};

//public: long c_array_operator_interface<class c_static_sized_dynamic_array<unsigned __int64, 1500>, unsigned __int64>::count(void) const
//{
//    mangled_ppc("?count@?$c_array_operator_interface@V?$c_static_sized_dynamic_array@_K$0FNM@@@_K@@QBAJXZ");
//};

//public: unsigned __int64const * s_static_array<unsigned __int64, 1500>::begin(void) const
//{
//    mangled_ppc("?begin@?$s_static_array@_K$0FNM@@@QBAPB_KXZ");
//};

//public: long c_static_sized_dynamic_array<struct s_indirect_cache_file_read_request, 1500>::new_element_index(void)
//{
//    mangled_ppc("?new_element_index@?$c_static_sized_dynamic_array@Us_indirect_cache_file_read_request@@$0FNM@@@QAAJXZ");
//};

//private: class c_static_sized_dynamic_array<struct s_indirect_cache_file_read_request, 1500> * c_resizeable_array_operator_interface<class c_static_sized_dynamic_array<struct s_indirect_cache_file_read_request, 1500>, struct s_indirect_cache_file_read_request>::get_super_class(void)
//{
//    mangled_ppc("?get_super_class@?$c_resizeable_array_operator_interface@V?$c_static_sized_dynamic_array@Us_indirect_cache_file_read_request@@$0FNM@@@Us_indirect_cache_file_read_request@@@@AAAPAV?$c_static_sized_dynamic_array@Us_indirect_cache_file_read_request@@$0FNM@@@XZ");
//};

//public: struct s_indirect_cache_file_read_request * c_array_operator_interface<class c_static_sized_dynamic_array<struct s_indirect_cache_file_read_request, 1500>, struct s_indirect_cache_file_read_request>::begin(void)
//{
//    mangled_ppc("?begin@?$c_array_operator_interface@V?$c_static_sized_dynamic_array@Us_indirect_cache_file_read_request@@$0FNM@@@Us_indirect_cache_file_read_request@@@@QAAPAUs_indirect_cache_file_read_request@@XZ");
//};

//public: long c_array_operator_interface<class c_static_sized_dynamic_array<struct s_indirect_cache_file_read_request, 1500>, struct s_indirect_cache_file_read_request>::count(void) const
//{
//    mangled_ppc("?count@?$c_array_operator_interface@V?$c_static_sized_dynamic_array@Us_indirect_cache_file_read_request@@$0FNM@@@Us_indirect_cache_file_read_request@@@@QBAJXZ");
//};

//public: struct s_indirect_cache_file_read_request * s_static_array<struct s_indirect_cache_file_read_request, 1500>::begin(void)
//{
//    mangled_ppc("?begin@?$s_static_array@Us_indirect_cache_file_read_request@@$0FNM@@@QAAPAUs_indirect_cache_file_read_request@@XZ");
//};

//public: long c_static_sized_dynamic_array<struct s_tag_resource_location_handle_struct *, 1500>::new_element_index(void)
//{
//    mangled_ppc("?new_element_index@?$c_static_sized_dynamic_array@PAUs_tag_resource_location_handle_struct@@$0FNM@@@QAAJXZ");
//};

//private: class c_static_sized_dynamic_array<struct s_tag_resource_location_handle_struct *, 1500> * c_resizeable_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_resource_location_handle_struct *, 1500>, struct s_tag_resource_location_handle_struct *>::get_super_class(void)
//{
//    mangled_ppc("?get_super_class@?$c_resizeable_array_operator_interface@V?$c_static_sized_dynamic_array@PAUs_tag_resource_location_handle_struct@@$0FNM@@@PAUs_tag_resource_location_handle_struct@@@@AAAPAV?$c_static_sized_dynamic_array@PAUs_tag_resource_location_handle_struct@@$0FNM@@@XZ");
//};

//public: struct s_tag_resource_location_handle_struct ** c_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_resource_location_handle_struct *, 1500>, struct s_tag_resource_location_handle_struct *>::begin(void)
//{
//    mangled_ppc("?begin@?$c_array_operator_interface@V?$c_static_sized_dynamic_array@PAUs_tag_resource_location_handle_struct@@$0FNM@@@PAUs_tag_resource_location_handle_struct@@@@QAAPAPAUs_tag_resource_location_handle_struct@@XZ");
//};

//public: long c_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_resource_location_handle_struct *, 1500>, struct s_tag_resource_location_handle_struct *>::count(void) const
//{
//    mangled_ppc("?count@?$c_array_operator_interface@V?$c_static_sized_dynamic_array@PAUs_tag_resource_location_handle_struct@@$0FNM@@@PAUs_tag_resource_location_handle_struct@@@@QBAJXZ");
//};

//public: struct s_tag_resource_location_handle_struct ** s_static_array<struct s_tag_resource_location_handle_struct *, 1500>::begin(void)
//{
//    mangled_ppc("?begin@?$s_static_array@PAUs_tag_resource_location_handle_struct@@$0FNM@@@QAAPAPAUs_tag_resource_location_handle_struct@@XZ");
//};

//public: long c_static_sized_dynamic_array<enum e_indirect_cache_file_read_result, 1500>::new_element_index(void)
//{
//    mangled_ppc("?new_element_index@?$c_static_sized_dynamic_array@W4e_indirect_cache_file_read_result@@$0FNM@@@QAAJXZ");
//};

//private: class c_static_sized_dynamic_array<enum e_indirect_cache_file_read_result, 1500> * c_resizeable_array_operator_interface<class c_static_sized_dynamic_array<enum e_indirect_cache_file_read_result, 1500>, enum e_indirect_cache_file_read_result>::get_super_class(void)
//{
//    mangled_ppc("?get_super_class@?$c_resizeable_array_operator_interface@V?$c_static_sized_dynamic_array@W4e_indirect_cache_file_read_result@@$0FNM@@@W4e_indirect_cache_file_read_result@@@@AAAPAV?$c_static_sized_dynamic_array@W4e_indirect_cache_file_read_result@@$0FNM@@@XZ");
//};

//public: enum e_indirect_cache_file_read_result * c_array_operator_interface<class c_static_sized_dynamic_array<enum e_indirect_cache_file_read_result, 1500>, enum e_indirect_cache_file_read_result>::begin(void)
//{
//    mangled_ppc("?begin@?$c_array_operator_interface@V?$c_static_sized_dynamic_array@W4e_indirect_cache_file_read_result@@$0FNM@@@W4e_indirect_cache_file_read_result@@@@QAAPAW4e_indirect_cache_file_read_result@@XZ");
//};

//public: long c_array_operator_interface<class c_static_sized_dynamic_array<enum e_indirect_cache_file_read_result, 1500>, enum e_indirect_cache_file_read_result>::count(void) const
//{
//    mangled_ppc("?count@?$c_array_operator_interface@V?$c_static_sized_dynamic_array@W4e_indirect_cache_file_read_result@@$0FNM@@@W4e_indirect_cache_file_read_result@@@@QBAJXZ");
//};

//public: enum e_indirect_cache_file_read_result * s_static_array<enum e_indirect_cache_file_read_result, 1500>::begin(void)
//{
//    mangled_ppc("?begin@?$s_static_array@W4e_indirect_cache_file_read_result@@$0FNM@@@QAAPAW4e_indirect_cache_file_read_result@@XZ");
//};

//public: enum e_indirect_cache_file_read_result const * s_static_array<enum e_indirect_cache_file_read_result, 1500>::begin(void) const
//{
//    mangled_ppc("?begin@?$s_static_array@W4e_indirect_cache_file_read_result@@$0FNM@@@QBAPBW4e_indirect_cache_file_read_result@@XZ");
//};

//public: class c_static_sized_dynamic_array<unsigned __int64, 1500> * c_recursive_template_pattern<class c_static_sized_dynamic_array<unsigned __int64, 1500> >::get_super_class(void)
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_static_sized_dynamic_array@_K$0FNM@@@@@QAAPAV?$c_static_sized_dynamic_array@_K$0FNM@@@XZ");
//};

//public: class c_static_sized_dynamic_array<struct s_indirect_cache_file_read_request, 1500> const * c_recursive_template_pattern<class c_static_sized_dynamic_array<struct s_indirect_cache_file_read_request, 1500> >::get_super_class(void) const
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_static_sized_dynamic_array@Us_indirect_cache_file_read_request@@$0FNM@@@@@QBAPBV?$c_static_sized_dynamic_array@Us_indirect_cache_file_read_request@@$0FNM@@@XZ");
//};

//public: class c_static_sized_dynamic_array<struct s_tag_resource_location_handle_struct *, 1500> const * c_recursive_template_pattern<class c_static_sized_dynamic_array<struct s_tag_resource_location_handle_struct *, 1500> >::get_super_class(void) const
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_static_sized_dynamic_array@PAUs_tag_resource_location_handle_struct@@$0FNM@@@@@QBAPBV?$c_static_sized_dynamic_array@PAUs_tag_resource_location_handle_struct@@$0FNM@@@XZ");
//};

//public: long c_static_sized_dynamic_array<enum e_indirect_cache_file_read_result, 1500>::count(void) const
//{
//    mangled_ppc("?count@?$c_static_sized_dynamic_array@W4e_indirect_cache_file_read_result@@$0FNM@@@QBAJXZ");
//};

//public: bool c_flags_no_init<enum e_tag_resource_page_datum_bit, unsigned char, 7, struct s_default_enum_string_resolver>::test(enum e_tag_resource_page_datum_bit) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_tag_resource_page_datum_bit@@E$06Us_default_enum_string_resolver@@@@QBA_NW4e_tag_resource_page_datum_bit@@@Z");
//};

//public: void c_flags_no_init<enum e_tag_resource_page_datum_bit, unsigned char, 7, struct s_default_enum_string_resolver>::set(enum e_tag_resource_page_datum_bit, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_tag_resource_page_datum_bit@@E$06Us_default_enum_string_resolver@@@@QAAXW4e_tag_resource_page_datum_bit@@_N@Z");
//};

//struct s_allocation_description_holder make_allocation_description<struct s_tag_resource_page_datum>(class c_smart_data_array<struct s_tag_resource_page_datum> &, char const *, long, char const *, long)
//{
//    mangled_ppc("??$make_allocation_description@Us_tag_resource_page_datum@@@@YA?AUs_allocation_description_holder@@AAV?$c_smart_data_array@Us_tag_resource_page_datum@@@@PBDJ1J@Z");
//};

//struct s_allocation_description_holder make_allocation_description<struct s_tag_resource_cache_file_async_read_datum>(class c_wrapped_data_array<struct s_tag_resource_cache_file_async_read_datum> &, char const *, long, char const *, long)
//{
//    mangled_ppc("??$make_allocation_description@Us_tag_resource_cache_file_async_read_datum@@@@YA?AUs_allocation_description_holder@@AAV?$c_wrapped_data_array@Us_tag_resource_cache_file_async_read_datum@@@@PBDJ1J@Z");
//};

//void std::sort<unsigned __int64*>(unsigned __int64*, unsigned __int64*)
//{
//    mangled_ppc("??$sort@PA_K@std@@YAXPA_K0@Z");
//};

//public: struct c_status_line & s_static_array<struct c_status_line, 7>::operator[]<int>(int)
//{
//    mangled_ppc("??$?AH@?$s_static_array@Uc_status_line@@$06@@QAAAAUc_status_line@@H@Z");
//};

//public: static bool s_static_array<unsigned __int64, 1500>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@_K$0FNM@@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_indirect_cache_file_read_request, 1500>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_indirect_cache_file_read_request@@$0FNM@@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_tag_resource_location_handle_struct *, 1500>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@PAUs_tag_resource_location_handle_struct@@$0FNM@@@SA_NJ@Z");
//};

//public: static bool s_static_array<enum e_indirect_cache_file_read_result, 1500>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@W4e_indirect_cache_file_read_result@@$0FNM@@@SA_NJ@Z");
//};

//public: struct s_data_array *& c_smart_data_array<struct s_tag_resource_page_datum>::get_restricted_data_array_address(void)
//{
//    mangled_ppc("?get_restricted_data_array_address@?$c_smart_data_array@Us_tag_resource_page_datum@@@@QAAAAPAUs_data_array@@XZ");
//};

//public: struct s_data_array *& c_wrapped_data_array<struct s_tag_resource_cache_file_async_read_datum>::get_data_array_reference(void)
//{
//    mangled_ppc("?get_data_array_reference@?$c_wrapped_data_array@Us_tag_resource_cache_file_async_read_datum@@@@QAAAAPAUs_data_array@@XZ");
//};

//public: struct s_data_array *& c_smart_data_array<struct s_tag_resource_cache_file_async_read_datum>::get_restricted_data_array_address(void)
//{
//    mangled_ppc("?get_restricted_data_array_address@?$c_smart_data_array@Us_tag_resource_cache_file_async_read_datum@@@@QAAAAPAUs_data_array@@XZ");
//};

//public: static bool c_flags_no_init<enum e_tag_resource_page_datum_bit, unsigned char, 7, struct s_default_enum_string_resolver>::valid_bit(enum e_tag_resource_page_datum_bit)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_tag_resource_page_datum_bit@@E$06Us_default_enum_string_resolver@@@@SA_NW4e_tag_resource_page_datum_bit@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_tag_resource_page_datum_bit, unsigned char, 7, struct s_default_enum_string_resolver>::flag_size_type(enum e_tag_resource_page_datum_bit)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_tag_resource_page_datum_bit@@E$06Us_default_enum_string_resolver@@@@CAEW4e_tag_resource_page_datum_bit@@@Z");
//};

//void std::_Sort<unsigned __int64*, int>(unsigned __int64*, unsigned __int64*, int)
//{
//    mangled_ppc("??$_Sort@PA_KH@std@@YAXPA_K0H@Z");
//};

//public: static bool s_static_array<struct c_status_line, 7>::valid<int>(int)
//{
//    mangled_ppc("??$valid@H@?$s_static_array@Uc_status_line@@$06@@SA_NH@Z");
//};

//struct std::pair<unsigned __int64*, unsigned __int64*> std::_Unguarded_partition<unsigned __int64*>(unsigned __int64*, unsigned __int64*)
//{
//    mangled_ppc("??$_Unguarded_partition@PA_K@std@@YA?AU?$pair@PA_KPA_K@0@PA_K0@Z");
//};

//void std::make_heap<unsigned __int64*>(unsigned __int64*, unsigned __int64*)
//{
//    mangled_ppc("??$make_heap@PA_K@std@@YAXPA_K0@Z");
//};

//void std::sort_heap<unsigned __int64*>(unsigned __int64*, unsigned __int64*)
//{
//    mangled_ppc("??$sort_heap@PA_K@std@@YAXPA_K0@Z");
//};

//void std::_Insertion_sort<unsigned __int64*>(unsigned __int64*, unsigned __int64*)
//{
//    mangled_ppc("??$_Insertion_sort@PA_K@std@@YAXPA_K0@Z");
//};

//public: std::pair<unsigned __int64*, unsigned __int64*>::pair<unsigned __int64*, unsigned __int64*>(unsigned __int64*const &, unsigned __int64*const &)
//{
//    mangled_ppc("??0?$pair@PA_KPA_K@std@@QAA@ABQA_K0@Z");
//};

//void std::_Median<unsigned __int64*>(unsigned __int64*, unsigned __int64*, unsigned __int64*)
//{
//    mangled_ppc("??$_Median@PA_K@std@@YAXPA_K00@Z");
//};

//bool std::_Debug_lt<unsigned __int64, unsigned __int64>(unsigned __int64&, unsigned __int64&, wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_lt@_K_K@std@@YA_NAA_K0PB_WI@Z");
//};

//void std::iter_swap<unsigned __int64*, unsigned __int64*>(unsigned __int64*, unsigned __int64*)
//{
//    mangled_ppc("??$iter_swap@PA_KPA_K@std@@YAXPA_K0@Z");
//};

//int * std::_Dist_type<unsigned __int64*>(unsigned __int64*)
//{
//    mangled_ppc("??$_Dist_type@PA_K@std@@YAPAHPA_K@Z");
//};

//unsigned __int64* std::_Val_type<unsigned __int64*>(unsigned __int64*)
//{
//    mangled_ppc("??$_Val_type@PA_K@std@@YAPA_KPA_K@Z");
//};

//void std::_Make_heap<unsigned __int64*, int, unsigned __int64>(unsigned __int64*, unsigned __int64*, int *, unsigned __int64*)
//{
//    mangled_ppc("??$_Make_heap@PA_KH_K@std@@YAXPA_K0PAH0@Z");
//};

//void std::_Debug_heap<unsigned __int64*>(unsigned __int64*, unsigned __int64*)
//{
//    mangled_ppc("??$_Debug_heap@PA_K@std@@YAXPA_K0@Z");
//};

//void std::_Sort_heap<unsigned __int64*>(unsigned __int64*, unsigned __int64*)
//{
//    mangled_ppc("??$_Sort_heap@PA_K@std@@YAXPA_K0@Z");
//};

//void std::_Insertion_sort1<unsigned __int64*, unsigned __int64>(unsigned __int64*, unsigned __int64*, unsigned __int64*)
//{
//    mangled_ppc("??$_Insertion_sort1@PA_K_K@std@@YAXPA_K00@Z");
//};

//void std::_Med3<unsigned __int64*>(unsigned __int64*, unsigned __int64*, unsigned __int64*)
//{
//    mangled_ppc("??$_Med3@PA_K@std@@YAXPA_K00@Z");
//};

//void std::swap<unsigned __int64>(unsigned __int64&, unsigned __int64&)
//{
//    mangled_ppc("??$swap@_K@std@@YAXAA_K0@Z");
//};

//void std::_Adjust_heap<unsigned __int64*, int, unsigned __int64>(unsigned __int64*, int, int, unsigned __int64)
//{
//    mangled_ppc("??$_Adjust_heap@PA_KH_K@std@@YAXPA_KHH_K@Z");
//};

//void std::pop_heap<unsigned __int64*>(unsigned __int64*, unsigned __int64*)
//{
//    mangled_ppc("??$pop_heap@PA_K@std@@YAXPA_K0@Z");
//};

//unsigned __int64* stdext::unchecked_copy_backward<unsigned __int64*, unsigned __int64*>(unsigned __int64*, unsigned __int64*, unsigned __int64*)
//{
//    mangled_ppc("??$unchecked_copy_backward@PA_KPA_K@stdext@@YAPA_KPA_K00@Z");
//};

//void std::_Push_heap<unsigned __int64*, int, unsigned __int64>(unsigned __int64*, int, int, unsigned __int64)
//{
//    mangled_ppc("??$_Push_heap@PA_KH_K@std@@YAXPA_KHH_K@Z");
//};

//void std::_Pop_heap_0<unsigned __int64*, unsigned __int64>(unsigned __int64*, unsigned __int64*, unsigned __int64*)
//{
//    mangled_ppc("??$_Pop_heap_0@PA_K_K@std@@YAXPA_K00@Z");
//};

//struct std::random_access_iterator_tag std::_Iter_random<unsigned __int64*, unsigned __int64*>(unsigned __int64*const &, unsigned __int64*const &)
//{
//    mangled_ppc("??$_Iter_random@PA_KPA_K@std@@YA?AUrandom_access_iterator_tag@0@ABQA_K0@Z");
//};

//struct std::_Scalar_ptr_iterator_tag std::_Ptr_cat<unsigned __int64*, unsigned __int64*>(unsigned __int64*&, unsigned __int64*&)
//{
//    mangled_ppc("??$_Ptr_cat@PA_KPA_K@std@@YA?AU_Scalar_ptr_iterator_tag@0@AAPA_K0@Z");
//};

//unsigned __int64* std::_Copy_backward_opt<unsigned __int64*, unsigned __int64*, struct std::random_access_iterator_tag>(unsigned __int64*, unsigned __int64*, unsigned __int64*, struct std::random_access_iterator_tag, struct std::_Scalar_ptr_iterator_tag, struct std::_Range_checked_iterator_tag)
//{
//    mangled_ppc("??$_Copy_backward_opt@PA_KPA_KUrandom_access_iterator_tag@std@@@std@@YAPA_KPA_K00Urandom_access_iterator_tag@0@U_Scalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z");
//};

//void std::_Pop_heap<unsigned __int64*, int, unsigned __int64>(unsigned __int64*, unsigned __int64*, unsigned __int64*, unsigned __int64, int *)
//{
//    mangled_ppc("??$_Pop_heap@PA_KH_K@std@@YAXPA_K00_KPAH@Z");
//};

