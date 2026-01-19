/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// const c_tag_file_backend_resource_manager_base::`vftable'{for `c_indirect_cache_file_decompressor_service'}; // "??_7c_tag_file_backend_resource_manager_base@@6Bc_indirect_cache_file_decompressor_service@@@"
// const c_tag_file_backend_resource_manager_base::`vftable'{for `c_indirect_cache_file_location_atlas'}; // "??_7c_tag_file_backend_resource_manager_base@@6Bc_indirect_cache_file_location_atlas@@@"
// const c_tag_file_backend_resource_manager_base::`vftable'{for `c_tag_file_backend_resource_manager_interface'}; // "??_7c_tag_file_backend_resource_manager_base@@6Bc_tag_file_backend_resource_manager_interface@@@"
// const c_tag_file_backend_resource_manager_base::`vftable'{for `c_tag_resource_runtime_manager'}; // "??_7c_tag_file_backend_resource_manager_base@@6Bc_tag_resource_runtime_manager@@@"
// const c_tag_file_backend_indirect_cache_file_interface::`vftable'{for `c_indirect_cache_file_decompressor_service'}; // "??_7c_tag_file_backend_indirect_cache_file_interface@@6Bc_indirect_cache_file_decompressor_service@@@"
// const c_tag_file_backend_indirect_cache_file_interface::`vftable'{for `c_indirect_cache_file_location_atlas'}; // "??_7c_tag_file_backend_indirect_cache_file_interface@@6Bc_indirect_cache_file_location_atlas@@@"

// public: c_tag_resource_cache_datum_reference_listener::c_tag_resource_cache_datum_reference_listener(class c_thread_safeish_tag_resource_cache *);
// public: c_tag_file_backend_resource_datum_reference_tracker::c_tag_file_backend_resource_datum_reference_tracker(void);
// public: virtual void c_tag_resource_cache_datum_reference_listener::begin_tracking_resource(long, bool);
// public: virtual void c_tag_resource_cache_datum_reference_listener::set_resource_needs_byteswapping(long, bool);
// public: virtual void c_tag_resource_cache_datum_reference_listener::unload_resource(long);
// public: virtual void c_tag_resource_cache_datum_reference_listener::end_tracking_resource(long);
// struct s_tag_resource_location_handle_struct * tag_resource_get_location_handle(long, enum e_tag_resource_lod);
// long tag_resource_get_handle_from_location_handle(struct s_tag_resource_location_handle_struct *);
// enum e_tag_resource_lod tag_resource_get_lod_from_location_handle(struct s_tag_resource_location_handle_struct *);
// public: virtual class c_cache_file_decompressor_service * c_tag_file_backend_resource_cache_file_datum_handler::get_decompressor_service(unsigned __int64, long);
// public: virtual struct s_tag_resource_location_handle_struct * c_tag_file_backend_resource_cache_file_datum_handler::get_pageable_location_handle(long);
// public: virtual struct s_tag_resource_location_handle_struct * c_tag_file_backend_resource_cache_file_datum_handler::get_optional_location_handle(long);
// public: virtual bool c_tag_file_backend_resource_cache_file_datum_handler::get_location_sub_location(struct s_tag_resource_location_handle_struct *, struct s_indirect_cache_file_sub_location *);
// public: virtual unsigned long c_tag_file_backend_resource_cache_file_datum_handler::get_location_memory_size(struct s_tag_resource_location_handle_struct *);
// public: virtual bool c_tag_file_backend_resource_cache_file_datum_handler::try_to_get_location_checksum(struct s_tag_resource_location_handle_struct *, struct s_cache_file_resource_checksum *);
// public: virtual unsigned __int64 c_tag_file_backend_resource_cache_file_datum_handler::get_location_indirect_identifier(struct s_tag_resource_location_handle_struct *);
// public: virtual unsigned long c_tag_file_backend_resource_cache_file_datum_handler::get_location_file_sort_key(struct s_tag_resource_location_handle_struct *);
// public: virtual bool c_tag_file_backend_resource_cache_file_datum_handler::describe_location(struct s_tag_resource_location_handle_struct *, class c_wrapped_array<char>);
// public: c_tag_file_backend_resource_manager_base::c_tag_file_backend_resource_manager_base(void);
// public: c_tag_file_backend_resource_manager_interface::c_tag_file_backend_resource_manager_interface(void);
// public: c_tag_file_backend_indirect_cache_file_interface::c_tag_file_backend_indirect_cache_file_interface(void);
// public: c_tag_file_backend_resource_resource_set::c_tag_file_backend_resource_resource_set(void);
// public: virtual bool c_tag_file_backend_resource_resource_set::any_resources_active(void) const;
// public: virtual bool c_tag_file_backend_resource_resource_set::is_resource_required(long, long) const;
// public: virtual bool c_tag_file_backend_resource_resource_set::is_resource_deferred(long, long) const;
// public: virtual bool c_tag_file_backend_resource_resource_set::is_resource_pending(long, long) const;
// public: virtual bool c_tag_file_backend_resource_resource_set::describe_active_set(class c_wrapped_array<char>) const;
// public: void c_tag_file_backend_resource_manager_base::setup(class c_tag_resource_cache_file_reader *, class c_tag_resource_page_range_allocator *, class c_allocation_interface *);
// public: void c_tag_file_backend_resource_manager_base::teardown(void);
// public: virtual void c_tag_file_backend_resource_manager_base::set_datum_handler(class c_tag_file_backend_resource_datum_handler_base *);
// public: virtual void c_tag_file_backend_resource_manager_base::clear_datum_handler(class c_tag_file_backend_resource_datum_handler_base *);
// private: void c_tag_file_backend_resource_manager_base::initialize_for_new_map(class c_tag_resource_runtime_listener *);
// public: void c_tag_file_backend_resource_resource_set::initialize(class c_tag_resource_runtime_listener *);
// private: void c_tag_file_backend_resource_manager_base::prepare_for_dispose_from_old_map(void);
// private: void c_tag_file_backend_resource_manager_base::dispose_from_old_map(void);
// public: virtual void c_tag_file_backend_resource_manager_base::initialize(class c_tag_resource_runtime_listener *, class c_tag_resource_prediction_atom_generator *);
// public: virtual void c_tag_file_backend_resource_manager_base::dispose(void);
// public: virtual void c_tag_file_backend_resource_manager_base::idle(void);
// public: virtual void c_tag_file_backend_resource_manager_base::pump_io(void);
// public: virtual class c_tag_resource_runtime_global_handle_allocator * c_tag_file_backend_resource_manager_base::set_handle_allocator(class c_tag_resource_runtime_global_handle_allocator *);
// public: virtual void c_tag_file_backend_resource_manager_base::report_memory_usage(class c_formatted_output *);
// public: virtual void c_tag_file_backend_resource_manager_base::report_memory_brief(class c_wrapped_array<char>, class c_tag_group_dictionary *);
// public: virtual void c_tag_file_backend_resource_manager_base::stagnate_deferred_resources(void);
// public: virtual void c_tag_file_backend_resource_manager_base::refresh_deferred_resources(void);
// public: virtual void c_tag_file_backend_resource_manager_base::set_runtime_toggle(enum e_tag_resource_runtime_toggle, bool);
// public: virtual void c_tag_file_backend_resource_manager_base::fire_signal(enum e_tag_resource_runtime_signal);
// public: virtual void c_tag_file_backend_resource_manager_base::begin_zone_set_change(void);
// public: virtual void c_tag_file_backend_resource_manager_base::commit_zone_set_change(void);
// public: virtual void c_tag_file_backend_resource_manager_base::load_required_data_only_blocking(void);
// public: virtual void c_tag_file_backend_resource_manager_base::update_required_data_assuming_incremental_changes(void);
// public: virtual void c_tag_file_backend_resource_manager_base::unload_everything(void);
// public: virtual void c_tag_file_backend_resource_manager_base::unload_all_tracked_resources(void);
// public: virtual void c_tag_file_backend_resource_manager_base::prepare_for_tag_reload(void);
// public: virtual void c_tag_file_backend_resource_manager_base::prepare_for_zone_set_tag_reload(void);
// public: virtual void c_tag_file_backend_resource_manager_base::try_to_buyback_memory(unsigned long);
// public: virtual bool c_tag_file_backend_resource_manager_base::need_to_predict_resources(void);
// public: virtual void const * c_tag_file_backend_resource_manager_base::lock_for_query(long, class c_basic_buffer<void>);
// public: virtual void c_tag_file_backend_resource_manager_base::unlock_from_query(long, void const *);
// public: virtual class c_tag_file_backend_resource_cache_file_datum_handler * c_tag_file_backend_resource_manager_base::get_cache_file_datum_handler(void);
// public: virtual bool c_tag_file_backend_resource_manager_base::resource_is_tracked(long);
// public: virtual unsigned long c_tag_file_backend_resource_manager_base::get_resource_tracked_size(long);
// public: virtual bool c_tag_file_backend_resource_manager_base::resource_stream_async(long, unsigned long, unsigned long, class c_basic_buffer<void>, class c_asynchronous_io_marker *);
// public: virtual void c_tag_file_backend_resource_manager_base::prepare_for_new_map(void);
// public: virtual bool c_tag_file_backend_resource_manager_base::untracked_resource_available(long);
// public: virtual void * c_tag_file_backend_resource_manager_base::get_untracked_resource_data(long);
// public: virtual bool c_tag_file_backend_resource_manager_base::resource_available(long);
// public: virtual void * c_tag_file_backend_resource_manager_base::get_resource_data(long);
// public: virtual bool c_tag_file_backend_resource_manager_base::resource_has_any_optional_data(long);
// public: virtual bool c_tag_file_backend_resource_manager_base::resource_test_access_state(long, enum e_tag_resource_access_state_bit);
// public: virtual long c_tag_file_backend_resource_manager_base::allocate_uninitialized_resource(struct s_tag_resource_definition const *);
// public: virtual void c_tag_file_backend_resource_manager_base::free_resource(long, struct s_tag_resource_definition const *);
// public: virtual void c_tag_file_backend_resource_manager_base::commit_resource(long, long, struct s_tag_resource_definition const *);
// public: virtual void c_tag_file_backend_resource_manager_base::set_resource_owner(long, struct s_tag_resource_definition const *, long);
// public: virtual long c_tag_file_backend_resource_manager_base::get_global_prediction_owner(void);
// public: virtual long c_tag_file_backend_resource_manager_base::allocate_prediction_owner(void);
// public: virtual void c_tag_file_backend_resource_manager_base::demand_optional_resources(class c_tag_resource_demand_callback *, bool);
// public: virtual class c_tag_resource_runtime_collector * c_tag_file_backend_resource_manager_base::begin_prediction_collection(void);
// public: virtual long c_tag_file_backend_resource_manager_base::end_prediction_collection(class c_tag_resource_runtime_collector *);
// public: virtual unsigned __int64 c_tag_file_backend_resource_manager_base::get_resource_snapshot(long);
// public: virtual bool c_tag_file_backend_resource_manager_base::all_resource_snapshots_valid(class c_wrapped_array<unsigned __int64const>);
// public: virtual bool c_tag_file_backend_resource_manager_base::save_tracked_state(class c_persist_stream *, class c_tag_resource_definition_dictionary *);
// public: virtual bool c_tag_file_backend_resource_manager_base::restore_tracked_state(class c_persist_stream *, class c_tag_resource_definition_dictionary *);
// public: virtual void c_tag_file_backend_resource_manager_base::report_tracked_state(class c_formatted_output *);
// public: virtual void c_tag_file_backend_resource_manager_base::resource_unload(long);
// public: virtual class c_basic_buffer<void> c_tag_file_backend_resource_manager_base::try_to_steal_memory(unsigned long);
// public: virtual void c_tag_file_backend_resource_manager_base::return_memory(class c_basic_buffer<void>);
// public: virtual void c_tag_file_backend_resource_manager_base::lock_for_game(void);
// public: virtual void c_tag_file_backend_resource_manager_base::unlock_for_game(void);
// public: virtual bool c_tag_file_backend_resource_manager_base::locked_for_game_UGLY(void);
// public: virtual void c_tag_file_backend_resource_manager_base::lock_for_render(void);
// public: virtual struct s_resource_access_cookie * c_tag_file_backend_resource_manager_base::unlock_for_render_access(void);
// public: virtual void c_tag_file_backend_resource_manager_base::unlock_for_render_gpu_usage(struct s_resource_access_cookie *);
// public: virtual bool c_tag_file_backend_resource_manager_base::current_thread_has_access_UGLY(void);
// public: class c_tag_file_backend_indirect_cache_file_interface * c_tag_file_backend_resource_manager_base::get_indirect_io_interface(void);
// private: virtual bool c_tag_file_backend_resource_manager_base::get_location(unsigned __int64, struct s_indirect_cache_file_location *);
// private: virtual class c_cache_file_decompressor * c_tag_file_backend_resource_manager_base::begin_decompression(unsigned __int64, long, class c_basic_buffer<void>);
// private: virtual void c_tag_file_backend_resource_manager_base::dispose_decompressor(unsigned __int64, long, class c_cache_file_decompressor *);
// public: virtual bool c_tag_file_backend_resource_io_arena::open_file(struct s_file_reference const *, struct s_tag_resource_cache_file_config const *, struct s_indirect_file **);
// public: virtual void c_tag_file_backend_resource_io_arena::close_file(struct s_indirect_file *);
// public: virtual unsigned long c_tag_file_backend_resource_io_arena::get_file_sort_key_base(struct s_indirect_file *);
// public: virtual void c_tag_file_backend_resource_io_arena::update_io_state(void);
// public: virtual void c_tag_file_backend_resource_io_arena::spinning_for_blocking_io(void);
// public: void c_tag_file_backend_resource_io_arena::set_indirect_io_interface(class c_tag_file_backend_indirect_cache_file_interface *);
// public: void c_tag_file_backend_resource_io_arena::clear_indirect_io_interface(void);
// public: void c_tag_file_backend_resource_io_arena::set_decompression_buffer(class c_basic_buffer<void>);
// public: void c_tag_file_backend_resource_io_arena::clear_decompression_buffer(void);
// public: virtual bool c_tag_file_backend_resource_io_arena::request_data(class c_indirect_cache_file_bulk_read_iterator *);
// public: virtual bool c_tag_file_backend_resource_io_arena::request_data_async(struct s_indirect_cache_file_read_request const *, class c_synchronized_int32*, class c_asynchronous_io_marker *);
// public: virtual bool c_tag_file_backend_resource_allocator::try_to_resize_contiguous_range(class c_basic_buffer<void> *, unsigned long, unsigned long, unsigned long);
// public: virtual void c_tag_file_backend_resource_allocator::release_allocation(class c_basic_buffer<void> *);

//public: c_tag_resource_cache_datum_reference_listener::c_tag_resource_cache_datum_reference_listener(class c_thread_safeish_tag_resource_cache *)
//{
//    mangled_ppc("??0c_tag_resource_cache_datum_reference_listener@@QAA@PAVc_thread_safeish_tag_resource_cache@@@Z");
//};

//public: c_tag_file_backend_resource_datum_reference_tracker::c_tag_file_backend_resource_datum_reference_tracker(void)
//{
//    mangled_ppc("??0c_tag_file_backend_resource_datum_reference_tracker@@QAA@XZ");
//};

//public: virtual void c_tag_resource_cache_datum_reference_listener::begin_tracking_resource(long, bool)
//{
//    mangled_ppc("?begin_tracking_resource@c_tag_resource_cache_datum_reference_listener@@UAAXJ_N@Z");
//};

//public: virtual void c_tag_resource_cache_datum_reference_listener::set_resource_needs_byteswapping(long, bool)
//{
//    mangled_ppc("?set_resource_needs_byteswapping@c_tag_resource_cache_datum_reference_listener@@UAAXJ_N@Z");
//};

//public: virtual void c_tag_resource_cache_datum_reference_listener::unload_resource(long)
//{
//    mangled_ppc("?unload_resource@c_tag_resource_cache_datum_reference_listener@@UAAXJ@Z");
//};

//public: virtual void c_tag_resource_cache_datum_reference_listener::end_tracking_resource(long)
//{
//    mangled_ppc("?end_tracking_resource@c_tag_resource_cache_datum_reference_listener@@UAAXJ@Z");
//};

//struct s_tag_resource_location_handle_struct * tag_resource_get_location_handle(long, enum e_tag_resource_lod)
//{
//    mangled_ppc("?tag_resource_get_location_handle@@YAPAUs_tag_resource_location_handle_struct@@JW4e_tag_resource_lod@@@Z");
//};

//long tag_resource_get_handle_from_location_handle(struct s_tag_resource_location_handle_struct *)
//{
//    mangled_ppc("?tag_resource_get_handle_from_location_handle@@YAJPAUs_tag_resource_location_handle_struct@@@Z");
//};

//enum e_tag_resource_lod tag_resource_get_lod_from_location_handle(struct s_tag_resource_location_handle_struct *)
//{
//    mangled_ppc("?tag_resource_get_lod_from_location_handle@@YA?AW4e_tag_resource_lod@@PAUs_tag_resource_location_handle_struct@@@Z");
//};

//public: virtual class c_cache_file_decompressor_service * c_tag_file_backend_resource_cache_file_datum_handler::get_decompressor_service(unsigned __int64, long)
//{
//    mangled_ppc("?get_decompressor_service@c_tag_file_backend_resource_cache_file_datum_handler@@UAAPAVc_cache_file_decompressor_service@@_KJ@Z");
//};

//public: virtual struct s_tag_resource_location_handle_struct * c_tag_file_backend_resource_cache_file_datum_handler::get_pageable_location_handle(long)
//{
//    mangled_ppc("?get_pageable_location_handle@c_tag_file_backend_resource_cache_file_datum_handler@@UAAPAUs_tag_resource_location_handle_struct@@J@Z");
//};

//public: virtual struct s_tag_resource_location_handle_struct * c_tag_file_backend_resource_cache_file_datum_handler::get_optional_location_handle(long)
//{
//    mangled_ppc("?get_optional_location_handle@c_tag_file_backend_resource_cache_file_datum_handler@@UAAPAUs_tag_resource_location_handle_struct@@J@Z");
//};

//public: virtual bool c_tag_file_backend_resource_cache_file_datum_handler::get_location_sub_location(struct s_tag_resource_location_handle_struct *, struct s_indirect_cache_file_sub_location *)
//{
//    mangled_ppc("?get_location_sub_location@c_tag_file_backend_resource_cache_file_datum_handler@@UAA_NPAUs_tag_resource_location_handle_struct@@PAUs_indirect_cache_file_sub_location@@@Z");
//};

//public: virtual unsigned long c_tag_file_backend_resource_cache_file_datum_handler::get_location_memory_size(struct s_tag_resource_location_handle_struct *)
//{
//    mangled_ppc("?get_location_memory_size@c_tag_file_backend_resource_cache_file_datum_handler@@UAAKPAUs_tag_resource_location_handle_struct@@@Z");
//};

//public: virtual bool c_tag_file_backend_resource_cache_file_datum_handler::try_to_get_location_checksum(struct s_tag_resource_location_handle_struct *, struct s_cache_file_resource_checksum *)
//{
//    mangled_ppc("?try_to_get_location_checksum@c_tag_file_backend_resource_cache_file_datum_handler@@UAA_NPAUs_tag_resource_location_handle_struct@@PAUs_cache_file_resource_checksum@@@Z");
//};

//public: virtual unsigned __int64 c_tag_file_backend_resource_cache_file_datum_handler::get_location_indirect_identifier(struct s_tag_resource_location_handle_struct *)
//{
//    mangled_ppc("?get_location_indirect_identifier@c_tag_file_backend_resource_cache_file_datum_handler@@UAA_KPAUs_tag_resource_location_handle_struct@@@Z");
//};

//public: virtual unsigned long c_tag_file_backend_resource_cache_file_datum_handler::get_location_file_sort_key(struct s_tag_resource_location_handle_struct *)
//{
//    mangled_ppc("?get_location_file_sort_key@c_tag_file_backend_resource_cache_file_datum_handler@@UAAKPAUs_tag_resource_location_handle_struct@@@Z");
//};

//public: virtual bool c_tag_file_backend_resource_cache_file_datum_handler::describe_location(struct s_tag_resource_location_handle_struct *, class c_wrapped_array<char>)
//{
//    mangled_ppc("?describe_location@c_tag_file_backend_resource_cache_file_datum_handler@@UAA_NPAUs_tag_resource_location_handle_struct@@V?$c_wrapped_array@D@@@Z");
//};

//public: c_tag_file_backend_resource_manager_base::c_tag_file_backend_resource_manager_base(void)
//{
//    mangled_ppc("??0c_tag_file_backend_resource_manager_base@@QAA@XZ");
//};

//public: c_tag_file_backend_resource_manager_interface::c_tag_file_backend_resource_manager_interface(void)
//{
//    mangled_ppc("??0c_tag_file_backend_resource_manager_interface@@QAA@XZ");
//};

//public: c_tag_file_backend_indirect_cache_file_interface::c_tag_file_backend_indirect_cache_file_interface(void)
//{
//    mangled_ppc("??0c_tag_file_backend_indirect_cache_file_interface@@QAA@XZ");
//};

//public: c_tag_file_backend_resource_resource_set::c_tag_file_backend_resource_resource_set(void)
//{
//    mangled_ppc("??0c_tag_file_backend_resource_resource_set@@QAA@XZ");
//};

//public: virtual bool c_tag_file_backend_resource_resource_set::any_resources_active(void) const
//{
//    mangled_ppc("?any_resources_active@c_tag_file_backend_resource_resource_set@@UBA_NXZ");
//};

//public: virtual bool c_tag_file_backend_resource_resource_set::is_resource_required(long, long) const
//{
//    mangled_ppc("?is_resource_required@c_tag_file_backend_resource_resource_set@@UBA_NJJ@Z");
//};

//public: virtual bool c_tag_file_backend_resource_resource_set::is_resource_deferred(long, long) const
//{
//    mangled_ppc("?is_resource_deferred@c_tag_file_backend_resource_resource_set@@UBA_NJJ@Z");
//};

//public: virtual bool c_tag_file_backend_resource_resource_set::is_resource_pending(long, long) const
//{
//    mangled_ppc("?is_resource_pending@c_tag_file_backend_resource_resource_set@@UBA_NJJ@Z");
//};

//public: virtual bool c_tag_file_backend_resource_resource_set::describe_active_set(class c_wrapped_array<char>) const
//{
//    mangled_ppc("?describe_active_set@c_tag_file_backend_resource_resource_set@@UBA_NV?$c_wrapped_array@D@@@Z");
//};

//public: void c_tag_file_backend_resource_manager_base::setup(class c_tag_resource_cache_file_reader *, class c_tag_resource_page_range_allocator *, class c_allocation_interface *)
//{
//    mangled_ppc("?setup@c_tag_file_backend_resource_manager_base@@QAAXPAVc_tag_resource_cache_file_reader@@PAVc_tag_resource_page_range_allocator@@PAVc_allocation_interface@@@Z");
//};

//public: void c_tag_file_backend_resource_manager_base::teardown(void)
//{
//    mangled_ppc("?teardown@c_tag_file_backend_resource_manager_base@@QAAXXZ");
//};

//public: virtual void c_tag_file_backend_resource_manager_base::set_datum_handler(class c_tag_file_backend_resource_datum_handler_base *)
//{
//    mangled_ppc("?set_datum_handler@c_tag_file_backend_resource_manager_base@@UAAXPAVc_tag_file_backend_resource_datum_handler_base@@@Z");
//};

//public: virtual void c_tag_file_backend_resource_manager_base::clear_datum_handler(class c_tag_file_backend_resource_datum_handler_base *)
//{
//    mangled_ppc("?clear_datum_handler@c_tag_file_backend_resource_manager_base@@UAAXPAVc_tag_file_backend_resource_datum_handler_base@@@Z");
//};

//private: void c_tag_file_backend_resource_manager_base::initialize_for_new_map(class c_tag_resource_runtime_listener *)
//{
//    mangled_ppc("?initialize_for_new_map@c_tag_file_backend_resource_manager_base@@AAAXPAVc_tag_resource_runtime_listener@@@Z");
//};

//public: void c_tag_file_backend_resource_resource_set::initialize(class c_tag_resource_runtime_listener *)
//{
//    mangled_ppc("?initialize@c_tag_file_backend_resource_resource_set@@QAAXPAVc_tag_resource_runtime_listener@@@Z");
//};

//private: void c_tag_file_backend_resource_manager_base::prepare_for_dispose_from_old_map(void)
//{
//    mangled_ppc("?prepare_for_dispose_from_old_map@c_tag_file_backend_resource_manager_base@@AAAXXZ");
//};

//private: void c_tag_file_backend_resource_manager_base::dispose_from_old_map(void)
//{
//    mangled_ppc("?dispose_from_old_map@c_tag_file_backend_resource_manager_base@@AAAXXZ");
//};

//public: virtual void c_tag_file_backend_resource_manager_base::initialize(class c_tag_resource_runtime_listener *, class c_tag_resource_prediction_atom_generator *)
//{
//    mangled_ppc("?initialize@c_tag_file_backend_resource_manager_base@@UAAXPAVc_tag_resource_runtime_listener@@PAVc_tag_resource_prediction_atom_generator@@@Z");
//};

//public: virtual void c_tag_file_backend_resource_manager_base::dispose(void)
//{
//    mangled_ppc("?dispose@c_tag_file_backend_resource_manager_base@@UAAXXZ");
//};

//public: virtual void c_tag_file_backend_resource_manager_base::idle(void)
//{
//    mangled_ppc("?idle@c_tag_file_backend_resource_manager_base@@UAAXXZ");
//};

//public: virtual void c_tag_file_backend_resource_manager_base::pump_io(void)
//{
//    mangled_ppc("?pump_io@c_tag_file_backend_resource_manager_base@@UAAXXZ");
//};

//public: virtual class c_tag_resource_runtime_global_handle_allocator * c_tag_file_backend_resource_manager_base::set_handle_allocator(class c_tag_resource_runtime_global_handle_allocator *)
//{
//    mangled_ppc("?set_handle_allocator@c_tag_file_backend_resource_manager_base@@UAAPAVc_tag_resource_runtime_global_handle_allocator@@PAV2@@Z");
//};

//public: virtual void c_tag_file_backend_resource_manager_base::report_memory_usage(class c_formatted_output *)
//{
//    mangled_ppc("?report_memory_usage@c_tag_file_backend_resource_manager_base@@UAAXPAVc_formatted_output@@@Z");
//};

//public: virtual void c_tag_file_backend_resource_manager_base::report_memory_brief(class c_wrapped_array<char>, class c_tag_group_dictionary *)
//{
//    mangled_ppc("?report_memory_brief@c_tag_file_backend_resource_manager_base@@UAAXV?$c_wrapped_array@D@@PAVc_tag_group_dictionary@@@Z");
//};

//public: virtual void c_tag_file_backend_resource_manager_base::stagnate_deferred_resources(void)
//{
//    mangled_ppc("?stagnate_deferred_resources@c_tag_file_backend_resource_manager_base@@UAAXXZ");
//};

//public: virtual void c_tag_file_backend_resource_manager_base::refresh_deferred_resources(void)
//{
//    mangled_ppc("?refresh_deferred_resources@c_tag_file_backend_resource_manager_base@@UAAXXZ");
//};

//public: virtual void c_tag_file_backend_resource_manager_base::set_runtime_toggle(enum e_tag_resource_runtime_toggle, bool)
//{
//    mangled_ppc("?set_runtime_toggle@c_tag_file_backend_resource_manager_base@@UAAXW4e_tag_resource_runtime_toggle@@_N@Z");
//};

//public: virtual void c_tag_file_backend_resource_manager_base::fire_signal(enum e_tag_resource_runtime_signal)
//{
//    mangled_ppc("?fire_signal@c_tag_file_backend_resource_manager_base@@UAAXW4e_tag_resource_runtime_signal@@@Z");
//};

//public: virtual void c_tag_file_backend_resource_manager_base::begin_zone_set_change(void)
//{
//    mangled_ppc("?begin_zone_set_change@c_tag_file_backend_resource_manager_base@@UAAXXZ");
//};

//public: virtual void c_tag_file_backend_resource_manager_base::commit_zone_set_change(void)
//{
//    mangled_ppc("?commit_zone_set_change@c_tag_file_backend_resource_manager_base@@UAAXXZ");
//};

//public: virtual void c_tag_file_backend_resource_manager_base::load_required_data_only_blocking(void)
//{
//    mangled_ppc("?load_required_data_only_blocking@c_tag_file_backend_resource_manager_base@@UAAXXZ");
//};

//public: virtual void c_tag_file_backend_resource_manager_base::update_required_data_assuming_incremental_changes(void)
//{
//    mangled_ppc("?update_required_data_assuming_incremental_changes@c_tag_file_backend_resource_manager_base@@UAAXXZ");
//};

//public: virtual void c_tag_file_backend_resource_manager_base::unload_everything(void)
//{
//    mangled_ppc("?unload_everything@c_tag_file_backend_resource_manager_base@@UAAXXZ");
//};

//public: virtual void c_tag_file_backend_resource_manager_base::unload_all_tracked_resources(void)
//{
//    mangled_ppc("?unload_all_tracked_resources@c_tag_file_backend_resource_manager_base@@UAAXXZ");
//};

//public: virtual void c_tag_file_backend_resource_manager_base::prepare_for_tag_reload(void)
//{
//    mangled_ppc("?prepare_for_tag_reload@c_tag_file_backend_resource_manager_base@@UAAXXZ");
//};

//public: virtual void c_tag_file_backend_resource_manager_base::prepare_for_zone_set_tag_reload(void)
//{
//    mangled_ppc("?prepare_for_zone_set_tag_reload@c_tag_file_backend_resource_manager_base@@UAAXXZ");
//};

//public: virtual void c_tag_file_backend_resource_manager_base::try_to_buyback_memory(unsigned long)
//{
//    mangled_ppc("?try_to_buyback_memory@c_tag_file_backend_resource_manager_base@@UAAXK@Z");
//};

//public: virtual bool c_tag_file_backend_resource_manager_base::need_to_predict_resources(void)
//{
//    mangled_ppc("?need_to_predict_resources@c_tag_file_backend_resource_manager_base@@UAA_NXZ");
//};

//public: virtual void const * c_tag_file_backend_resource_manager_base::lock_for_query(long, class c_basic_buffer<void>)
//{
//    mangled_ppc("?lock_for_query@c_tag_file_backend_resource_manager_base@@UAAPBXJV?$c_basic_buffer@X@@@Z");
//};

//public: virtual void c_tag_file_backend_resource_manager_base::unlock_from_query(long, void const *)
//{
//    mangled_ppc("?unlock_from_query@c_tag_file_backend_resource_manager_base@@UAAXJPBX@Z");
//};

//public: virtual class c_tag_file_backend_resource_cache_file_datum_handler * c_tag_file_backend_resource_manager_base::get_cache_file_datum_handler(void)
//{
//    mangled_ppc("?get_cache_file_datum_handler@c_tag_file_backend_resource_manager_base@@UAAPAVc_tag_file_backend_resource_cache_file_datum_handler@@XZ");
//};

//public: virtual bool c_tag_file_backend_resource_manager_base::resource_is_tracked(long)
//{
//    mangled_ppc("?resource_is_tracked@c_tag_file_backend_resource_manager_base@@UAA_NJ@Z");
//};

//public: virtual unsigned long c_tag_file_backend_resource_manager_base::get_resource_tracked_size(long)
//{
//    mangled_ppc("?get_resource_tracked_size@c_tag_file_backend_resource_manager_base@@UAAKJ@Z");
//};

//public: virtual bool c_tag_file_backend_resource_manager_base::resource_stream_async(long, unsigned long, unsigned long, class c_basic_buffer<void>, class c_asynchronous_io_marker *)
//{
//    mangled_ppc("?resource_stream_async@c_tag_file_backend_resource_manager_base@@UAA_NJKKV?$c_basic_buffer@X@@PAVc_asynchronous_io_marker@@@Z");
//};

//public: virtual void c_tag_file_backend_resource_manager_base::prepare_for_new_map(void)
//{
//    mangled_ppc("?prepare_for_new_map@c_tag_file_backend_resource_manager_base@@UAAXXZ");
//};

//public: virtual bool c_tag_file_backend_resource_manager_base::untracked_resource_available(long)
//{
//    mangled_ppc("?untracked_resource_available@c_tag_file_backend_resource_manager_base@@UAA_NJ@Z");
//};

//public: virtual void * c_tag_file_backend_resource_manager_base::get_untracked_resource_data(long)
//{
//    mangled_ppc("?get_untracked_resource_data@c_tag_file_backend_resource_manager_base@@UAAPAXJ@Z");
//};

//public: virtual bool c_tag_file_backend_resource_manager_base::resource_available(long)
//{
//    mangled_ppc("?resource_available@c_tag_file_backend_resource_manager_base@@UAA_NJ@Z");
//};

//public: virtual void * c_tag_file_backend_resource_manager_base::get_resource_data(long)
//{
//    mangled_ppc("?get_resource_data@c_tag_file_backend_resource_manager_base@@UAAPAXJ@Z");
//};

//public: virtual bool c_tag_file_backend_resource_manager_base::resource_has_any_optional_data(long)
//{
//    mangled_ppc("?resource_has_any_optional_data@c_tag_file_backend_resource_manager_base@@UAA_NJ@Z");
//};

//public: virtual bool c_tag_file_backend_resource_manager_base::resource_test_access_state(long, enum e_tag_resource_access_state_bit)
//{
//    mangled_ppc("?resource_test_access_state@c_tag_file_backend_resource_manager_base@@UAA_NJW4e_tag_resource_access_state_bit@@@Z");
//};

//public: virtual long c_tag_file_backend_resource_manager_base::allocate_uninitialized_resource(struct s_tag_resource_definition const *)
//{
//    mangled_ppc("?allocate_uninitialized_resource@c_tag_file_backend_resource_manager_base@@UAAJPBUs_tag_resource_definition@@@Z");
//};

//public: virtual void c_tag_file_backend_resource_manager_base::free_resource(long, struct s_tag_resource_definition const *)
//{
//    mangled_ppc("?free_resource@c_tag_file_backend_resource_manager_base@@UAAXJPBUs_tag_resource_definition@@@Z");
//};

//public: virtual void c_tag_file_backend_resource_manager_base::commit_resource(long, long, struct s_tag_resource_definition const *)
//{
//    mangled_ppc("?commit_resource@c_tag_file_backend_resource_manager_base@@UAAXJJPBUs_tag_resource_definition@@@Z");
//};

//public: virtual void c_tag_file_backend_resource_manager_base::set_resource_owner(long, struct s_tag_resource_definition const *, long)
//{
//    mangled_ppc("?set_resource_owner@c_tag_file_backend_resource_manager_base@@UAAXJPBUs_tag_resource_definition@@J@Z");
//};

//public: virtual long c_tag_file_backend_resource_manager_base::get_global_prediction_owner(void)
//{
//    mangled_ppc("?get_global_prediction_owner@c_tag_file_backend_resource_manager_base@@UAAJXZ");
//};

//public: virtual long c_tag_file_backend_resource_manager_base::allocate_prediction_owner(void)
//{
//    mangled_ppc("?allocate_prediction_owner@c_tag_file_backend_resource_manager_base@@UAAJXZ");
//};

//public: virtual void c_tag_file_backend_resource_manager_base::demand_optional_resources(class c_tag_resource_demand_callback *, bool)
//{
//    mangled_ppc("?demand_optional_resources@c_tag_file_backend_resource_manager_base@@UAAXPAVc_tag_resource_demand_callback@@_N@Z");
//};

//public: virtual class c_tag_resource_runtime_collector * c_tag_file_backend_resource_manager_base::begin_prediction_collection(void)
//{
//    mangled_ppc("?begin_prediction_collection@c_tag_file_backend_resource_manager_base@@UAAPAVc_tag_resource_runtime_collector@@XZ");
//};

//public: virtual long c_tag_file_backend_resource_manager_base::end_prediction_collection(class c_tag_resource_runtime_collector *)
//{
//    mangled_ppc("?end_prediction_collection@c_tag_file_backend_resource_manager_base@@UAAJPAVc_tag_resource_runtime_collector@@@Z");
//};

//public: virtual unsigned __int64 c_tag_file_backend_resource_manager_base::get_resource_snapshot(long)
//{
//    mangled_ppc("?get_resource_snapshot@c_tag_file_backend_resource_manager_base@@UAA_KJ@Z");
//};

//public: virtual bool c_tag_file_backend_resource_manager_base::all_resource_snapshots_valid(class c_wrapped_array<unsigned __int64const>)
//{
//    mangled_ppc("?all_resource_snapshots_valid@c_tag_file_backend_resource_manager_base@@UAA_NV?$c_wrapped_array@$$CB_K@@@Z");
//};

//public: virtual bool c_tag_file_backend_resource_manager_base::save_tracked_state(class c_persist_stream *, class c_tag_resource_definition_dictionary *)
//{
//    mangled_ppc("?save_tracked_state@c_tag_file_backend_resource_manager_base@@UAA_NPAVc_persist_stream@@PAVc_tag_resource_definition_dictionary@@@Z");
//};

//public: virtual bool c_tag_file_backend_resource_manager_base::restore_tracked_state(class c_persist_stream *, class c_tag_resource_definition_dictionary *)
//{
//    mangled_ppc("?restore_tracked_state@c_tag_file_backend_resource_manager_base@@UAA_NPAVc_persist_stream@@PAVc_tag_resource_definition_dictionary@@@Z");
//};

//public: virtual void c_tag_file_backend_resource_manager_base::report_tracked_state(class c_formatted_output *)
//{
//    mangled_ppc("?report_tracked_state@c_tag_file_backend_resource_manager_base@@UAAXPAVc_formatted_output@@@Z");
//};

//public: virtual void c_tag_file_backend_resource_manager_base::resource_unload(long)
//{
//    mangled_ppc("?resource_unload@c_tag_file_backend_resource_manager_base@@UAAXJ@Z");
//};

//public: virtual class c_basic_buffer<void> c_tag_file_backend_resource_manager_base::try_to_steal_memory(unsigned long)
//{
//    mangled_ppc("?try_to_steal_memory@c_tag_file_backend_resource_manager_base@@UAA?AV?$c_basic_buffer@X@@K@Z");
//};

//public: virtual void c_tag_file_backend_resource_manager_base::return_memory(class c_basic_buffer<void>)
//{
//    mangled_ppc("?return_memory@c_tag_file_backend_resource_manager_base@@UAAXV?$c_basic_buffer@X@@@Z");
//};

//public: virtual void c_tag_file_backend_resource_manager_base::lock_for_game(void)
//{
//    mangled_ppc("?lock_for_game@c_tag_file_backend_resource_manager_base@@UAAXXZ");
//};

//public: virtual void c_tag_file_backend_resource_manager_base::unlock_for_game(void)
//{
//    mangled_ppc("?unlock_for_game@c_tag_file_backend_resource_manager_base@@UAAXXZ");
//};

//public: virtual bool c_tag_file_backend_resource_manager_base::locked_for_game_UGLY(void)
//{
//    mangled_ppc("?locked_for_game_UGLY@c_tag_file_backend_resource_manager_base@@UAA_NXZ");
//};

//public: virtual void c_tag_file_backend_resource_manager_base::lock_for_render(void)
//{
//    mangled_ppc("?lock_for_render@c_tag_file_backend_resource_manager_base@@UAAXXZ");
//};

//public: virtual struct s_resource_access_cookie * c_tag_file_backend_resource_manager_base::unlock_for_render_access(void)
//{
//    mangled_ppc("?unlock_for_render_access@c_tag_file_backend_resource_manager_base@@UAAPAUs_resource_access_cookie@@XZ");
//};

//public: virtual void c_tag_file_backend_resource_manager_base::unlock_for_render_gpu_usage(struct s_resource_access_cookie *)
//{
//    mangled_ppc("?unlock_for_render_gpu_usage@c_tag_file_backend_resource_manager_base@@UAAXPAUs_resource_access_cookie@@@Z");
//};

//public: virtual bool c_tag_file_backend_resource_manager_base::current_thread_has_access_UGLY(void)
//{
//    mangled_ppc("?current_thread_has_access_UGLY@c_tag_file_backend_resource_manager_base@@UAA_NXZ");
//};

//public: class c_tag_file_backend_indirect_cache_file_interface * c_tag_file_backend_resource_manager_base::get_indirect_io_interface(void)
//{
//    mangled_ppc("?get_indirect_io_interface@c_tag_file_backend_resource_manager_base@@QAAPAVc_tag_file_backend_indirect_cache_file_interface@@XZ");
//};

//private: virtual bool c_tag_file_backend_resource_manager_base::get_location(unsigned __int64, struct s_indirect_cache_file_location *)
//{
//    mangled_ppc("?get_location@c_tag_file_backend_resource_manager_base@@EAA_N_KPAUs_indirect_cache_file_location@@@Z");
//};

//private: virtual class c_cache_file_decompressor * c_tag_file_backend_resource_manager_base::begin_decompression(unsigned __int64, long, class c_basic_buffer<void>)
//{
//    mangled_ppc("?begin_decompression@c_tag_file_backend_resource_manager_base@@EAAPAVc_cache_file_decompressor@@_KJV?$c_basic_buffer@X@@@Z");
//};

//private: virtual void c_tag_file_backend_resource_manager_base::dispose_decompressor(unsigned __int64, long, class c_cache_file_decompressor *)
//{
//    mangled_ppc("?dispose_decompressor@c_tag_file_backend_resource_manager_base@@EAAX_KJPAVc_cache_file_decompressor@@@Z");
//};

//public: virtual bool c_tag_file_backend_resource_io_arena::open_file(struct s_file_reference const *, struct s_tag_resource_cache_file_config const *, struct s_indirect_file **)
//{
//    mangled_ppc("?open_file@c_tag_file_backend_resource_io_arena@@UAA_NPBUs_file_reference@@PBUs_tag_resource_cache_file_config@@PAPAUs_indirect_file@@@Z");
//};

//public: virtual void c_tag_file_backend_resource_io_arena::close_file(struct s_indirect_file *)
//{
//    mangled_ppc("?close_file@c_tag_file_backend_resource_io_arena@@UAAXPAUs_indirect_file@@@Z");
//};

//public: virtual unsigned long c_tag_file_backend_resource_io_arena::get_file_sort_key_base(struct s_indirect_file *)
//{
//    mangled_ppc("?get_file_sort_key_base@c_tag_file_backend_resource_io_arena@@UAAKPAUs_indirect_file@@@Z");
//};

//public: virtual void c_tag_file_backend_resource_io_arena::update_io_state(void)
//{
//    mangled_ppc("?update_io_state@c_tag_file_backend_resource_io_arena@@UAAXXZ");
//};

//public: virtual void c_tag_file_backend_resource_io_arena::spinning_for_blocking_io(void)
//{
//    mangled_ppc("?spinning_for_blocking_io@c_tag_file_backend_resource_io_arena@@UAAXXZ");
//};

//public: void c_tag_file_backend_resource_io_arena::set_indirect_io_interface(class c_tag_file_backend_indirect_cache_file_interface *)
//{
//    mangled_ppc("?set_indirect_io_interface@c_tag_file_backend_resource_io_arena@@QAAXPAVc_tag_file_backend_indirect_cache_file_interface@@@Z");
//};

//public: void c_tag_file_backend_resource_io_arena::clear_indirect_io_interface(void)
//{
//    mangled_ppc("?clear_indirect_io_interface@c_tag_file_backend_resource_io_arena@@QAAXXZ");
//};

//public: void c_tag_file_backend_resource_io_arena::set_decompression_buffer(class c_basic_buffer<void>)
//{
//    mangled_ppc("?set_decompression_buffer@c_tag_file_backend_resource_io_arena@@QAAXV?$c_basic_buffer@X@@@Z");
//};

//public: void c_tag_file_backend_resource_io_arena::clear_decompression_buffer(void)
//{
//    mangled_ppc("?clear_decompression_buffer@c_tag_file_backend_resource_io_arena@@QAAXXZ");
//};

//public: virtual bool c_tag_file_backend_resource_io_arena::request_data(class c_indirect_cache_file_bulk_read_iterator *)
//{
//    mangled_ppc("?request_data@c_tag_file_backend_resource_io_arena@@UAA_NPAVc_indirect_cache_file_bulk_read_iterator@@@Z");
//};

//public: virtual bool c_tag_file_backend_resource_io_arena::request_data_async(struct s_indirect_cache_file_read_request const *, class c_synchronized_int32*, class c_asynchronous_io_marker *)
//{
//    mangled_ppc("?request_data_async@c_tag_file_backend_resource_io_arena@@UAA_NPBUs_indirect_cache_file_read_request@@PAVc_synchronized_int32@@PAVc_asynchronous_io_marker@@@Z");
//};

//public: virtual bool c_tag_file_backend_resource_allocator::try_to_resize_contiguous_range(class c_basic_buffer<void> *, unsigned long, unsigned long, unsigned long)
//{
//    mangled_ppc("?try_to_resize_contiguous_range@c_tag_file_backend_resource_allocator@@UAA_NPAV?$c_basic_buffer@X@@KKK@Z");
//};

//public: virtual void c_tag_file_backend_resource_allocator::release_allocation(class c_basic_buffer<void> *)
//{
//    mangled_ppc("?release_allocation@c_tag_file_backend_resource_allocator@@UAAXPAV?$c_basic_buffer@X@@@Z");
//};

