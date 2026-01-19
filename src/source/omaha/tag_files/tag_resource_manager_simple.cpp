/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: c_tag_resource_runtime_manager_simple::c_tag_resource_runtime_manager_simple(class c_tag_resource_runtime_global_handle_allocator *, class c_tag_file_backend_resource_manager_interface *, class c_tag_file_backend_resource_io_arena_interface *);
// public: c_tag_resource_runtime_manager::c_tag_resource_runtime_manager(void);
// public: virtual class c_tag_resource_runtime_global_handle_allocator * c_tag_resource_runtime_manager_simple::set_handle_allocator(class c_tag_resource_runtime_global_handle_allocator *);
// public: virtual void c_tag_resource_runtime_manager_simple::initialize(class c_tag_resource_runtime_listener *, class c_tag_resource_prediction_atom_generator *);
// public: virtual void c_tag_resource_runtime_manager_simple::dispose(void);
// public: virtual void c_tag_resource_runtime_manager_simple::idle(void);
// public: virtual void c_tag_resource_runtime_manager_simple::pump_io(void);
// public: virtual void c_tag_resource_runtime_manager_simple::report_memory_usage(class c_formatted_output *);
// public: virtual void c_tag_resource_runtime_manager_simple::report_memory_brief(class c_wrapped_array<char>, class c_tag_group_dictionary *);
// public: virtual void c_tag_resource_runtime_manager_simple::stagnate_deferred_resources(void);
// public: virtual void c_tag_resource_runtime_manager_simple::refresh_deferred_resources(void);
// public: virtual void c_tag_resource_runtime_manager_simple::set_runtime_toggle(enum e_tag_resource_runtime_toggle, bool);
// public: virtual void c_tag_resource_runtime_manager_simple::fire_signal(enum e_tag_resource_runtime_signal);
// public: virtual void c_tag_resource_runtime_manager_simple::begin_zone_set_change(void);
// public: virtual void c_tag_resource_runtime_manager_simple::commit_zone_set_change(void);
// public: virtual void c_tag_resource_runtime_manager_simple::load_required_data_only_blocking(void);
// public: virtual void c_tag_resource_runtime_manager_simple::update_required_data_assuming_incremental_changes(void);
// public: virtual void c_tag_resource_runtime_manager_simple::unload_all_tracked_resources(void);
// public: virtual void c_tag_resource_runtime_manager_simple::prepare_for_tag_reload(void);
// public: virtual void c_tag_resource_runtime_manager_simple::prepare_for_zone_set_tag_reload(void);
// public: virtual void c_tag_resource_runtime_manager_simple::try_to_buyback_memory(unsigned long);
// public: virtual void c_tag_resource_runtime_manager_simple::unload_everything(void);
// public: virtual bool c_tag_resource_runtime_manager_simple::need_to_predict_resources(void);
// public: virtual bool c_tag_resource_runtime_manager_simple::untracked_resource_available(long);
// public: virtual class c_tag_file_backend_resource_cache_file_datum_handler * c_tag_resource_runtime_manager_simple::get_cache_file_datum_handler(void);
// public: virtual bool c_tag_resource_runtime_manager_simple::resource_is_tracked(long);
// public: virtual void * c_tag_resource_runtime_manager_simple::get_untracked_resource_data(long);
// public: virtual unsigned long c_tag_resource_runtime_manager_simple::get_resource_tracked_size(long);
// public: virtual void const * c_tag_resource_runtime_manager_simple::lock_for_query(long, class c_basic_buffer<void>);
// public: virtual void c_tag_resource_runtime_manager_simple::unlock_from_query(long, void const *);
// public: virtual bool c_tag_resource_runtime_manager_simple::resource_available(long);
// public: virtual bool c_tag_resource_runtime_manager_simple::resource_has_any_optional_data(long);
// public: virtual bool c_tag_resource_runtime_manager_simple::resource_test_access_state(long, enum e_tag_resource_access_state_bit);
// public: virtual void * c_tag_resource_runtime_manager_simple::get_resource_data(long);
// public: virtual long c_tag_resource_runtime_manager_simple::allocate_uninitialized_resource(struct s_tag_resource_definition const *);
// public: virtual void c_tag_resource_runtime_manager_simple::free_resource(long, struct s_tag_resource_definition const *);
// public: virtual void c_tag_resource_runtime_manager_simple::commit_resource(long, long, struct s_tag_resource_definition const *);
// public: virtual void c_tag_resource_runtime_manager_simple::set_resource_owner(long, struct s_tag_resource_definition const *, long);
// public: virtual bool c_tag_resource_runtime_manager_simple::resource_stream_async(long, unsigned long, unsigned long, class c_basic_buffer<void>, class c_asynchronous_io_marker *);
// public: virtual void c_tag_resource_runtime_manager_simple::prepare_for_new_map(void);
// public: virtual void c_tag_resource_runtime_manager_simple::demand_resource(long);
// public: virtual void c_tag_resource_runtime_manager_simple::resource_unload(long);
// public: virtual long c_tag_resource_runtime_manager_simple::get_global_prediction_owner(void);
// public: virtual long c_tag_resource_runtime_manager_simple::allocate_prediction_owner(void);
// public: virtual void c_tag_resource_runtime_manager_simple::demand_optional_resources(class c_tag_resource_demand_callback *, bool);
// public: virtual void c_tag_resource_runtime_manager_simple::lock_for_game(void);
// public: virtual void c_tag_resource_runtime_manager_simple::unlock_for_game(void);
// public: virtual bool c_tag_resource_runtime_manager_simple::locked_for_game_UGLY(void);
// public: virtual void c_tag_resource_runtime_manager_simple::lock_for_render(void);
// public: virtual struct s_resource_access_cookie * c_tag_resource_runtime_manager_simple::unlock_for_render_access(void);
// public: virtual void c_tag_resource_runtime_manager_simple::unlock_for_render_gpu_usage(struct s_resource_access_cookie *);
// public: virtual bool c_tag_resource_runtime_manager_simple::current_thread_has_access_UGLY(void);
// public: virtual class c_tag_resource_runtime_collector * c_tag_resource_runtime_manager_simple::begin_prediction_collection(void);
// public: virtual long c_tag_resource_runtime_manager_simple::end_prediction_collection(class c_tag_resource_runtime_collector *);
// public: virtual unsigned __int64 c_tag_resource_runtime_manager_simple::get_resource_snapshot(long);
// public: virtual bool c_tag_resource_runtime_manager_simple::all_resource_snapshots_valid(class c_wrapped_array<unsigned __int64const>);
// public: virtual class c_basic_buffer<void> c_tag_resource_runtime_manager_simple::try_to_steal_memory(unsigned long);
// public: virtual void c_tag_resource_runtime_manager_simple::return_memory(class c_basic_buffer<void>);
// public: void c_tag_resource_runtime_manager_simple::set_cache_file_output(class c_allocation_interface *, class c_cache_file_builder_tag_resource_output *);
// public: void c_tag_resource_runtime_manager_simple::close_cache_file_output(void);
// public: virtual bool c_tag_resource_runtime_manager_simple::save_tracked_state(class c_persist_stream *, class c_tag_resource_definition_dictionary *);
// public: virtual bool c_tag_resource_runtime_manager_simple::restore_tracked_state(class c_persist_stream *, class c_tag_resource_definition_dictionary *);
// public: virtual void c_tag_resource_runtime_manager_simple::report_tracked_state(class c_formatted_output *);
// public: c_tag_file_backend_resource_datum_handler_simple::c_tag_file_backend_resource_datum_handler_simple(class c_tag_resource_runtime_global_handle_allocator *, class c_tag_file_backend_resource_manager_interface *, class c_tag_file_backend_resource_io_arena_interface *);
// public: virtual void c_tag_file_backend_resource_datum_handler_simple::initialize(class c_tag_resource_runtime_listener *, class c_tag_file_backend_resource_datum_reference_tracker *);
// public: virtual void c_tag_file_backend_resource_datum_handler_simple::dispose(void);
// public: virtual class c_tag_resource_runtime_global_handle_allocator * c_tag_file_backend_resource_datum_handler_simple::set_handle_allocator(class c_tag_resource_runtime_global_handle_allocator *);
// public: virtual class c_tag_file_backend_resource_cache_file_datum_handler * c_tag_file_backend_resource_datum_handler_simple::get_cache_file_datum_handler(void);
// public: virtual unsigned long c_tag_file_backend_resource_datum_handler_simple::get_maximum_possible_resource_count(void);
// public: virtual bool c_tag_file_backend_resource_datum_handler_simple::resource_is_tracked(long);
// public: virtual bool c_tag_file_backend_resource_datum_handler_simple::untracked_resource_available(long);
// public: virtual void * c_tag_file_backend_resource_datum_handler_simple::get_untracked_resource_data(long);
// public: virtual unsigned long c_tag_file_backend_resource_datum_handler_simple::get_resource_tracked_size(long);
// public: virtual long c_tag_file_backend_resource_datum_handler_simple::allocate_uninitialized_resource(struct s_tag_resource_definition const *);
// public: virtual void c_tag_file_backend_resource_datum_handler_simple::free_resource(long, struct s_tag_resource_definition const *);
// public: virtual void c_tag_file_backend_resource_datum_handler_simple::commit_resource(long, long, struct s_tag_resource_definition const *);
// public: virtual void c_tag_file_backend_resource_datum_handler_simple::set_resource_owner(long, struct s_tag_resource_definition const *, long);
// public: void c_tag_file_backend_resource_datum_handler_simple::set_cache_file_output(class c_allocation_interface *, class c_cache_file_builder_tag_resource_output *);
// public: void c_tag_file_backend_resource_datum_handler_simple::close_cache_file_output(void);
// public: virtual bool c_tag_file_backend_resource_datum_handler_simple::save_tracked_state(class c_persist_stream *, class c_tag_resource_definition_dictionary *);
// public: virtual bool c_tag_file_backend_resource_datum_handler_simple::restore_tracked_state(class c_persist_stream *, class c_tag_resource_definition_dictionary *);
// public: virtual void c_tag_file_backend_resource_datum_handler_simple::report_tracked_state(class c_formatted_output *);
// public: virtual unsigned long c_tag_resource_persist_manager_simple::get_xsync_state_version(void);
// public: virtual bool c_tag_resource_persist_manager_simple::resource_is_cached_for_xsync(struct s_tag_resource const *);
// public: virtual bool c_tag_resource_persist_manager_simple::save_xsync_state(class c_allocation_interface *, struct s_tag_resource const *, class c_persist_stream *);
// public: virtual bool c_tag_resource_persist_manager_simple::restore_xsync_state_and_register(unsigned long, struct s_tag_resource *, class c_persist_stream *);
// public: virtual bool c_tag_resource_persist_manager_simple::reassign_xsync_state(struct s_tag_resource *, struct s_tag_resource *);
// public: virtual bool c_tag_resource_persist_manager_simple::resource_available(struct s_tag_resource const *);
// public: virtual void * c_tag_resource_persist_manager_simple::get_mutable_resource_data(struct s_tag_resource const *);
// public: virtual void * c_tag_resource_persist_manager_simple::get_resource_data(struct s_tag_resource const *);
// public: virtual bool c_tag_resource_persist_manager_simple::allocate_resource(struct s_tag_resource *);
// public: virtual void c_tag_resource_persist_manager_simple::free_resource(struct s_tag_resource *);
// public: virtual bool c_tag_resource_persist_manager_simple::matches_tag_allocator(class c_tag_allocator *);
// public: virtual long c_default_tag_resource_simple_runtime_allocator::allocate_editable_resource_handle(struct s_tag_resource_definition const *);
// public: virtual long c_default_tag_resource_simple_runtime_allocator::allocate_data_array_resource_handle(struct s_tag_resource_definition const *, long);
// public: virtual void * c_default_tag_resource_simple_runtime_allocator::get_resource_pointer(long);
// public: virtual void c_default_tag_resource_simple_runtime_allocator::free_resource_handle(long, struct s_tag_resource_definition const *);
// public: virtual void c_default_tag_resource_simple_runtime_allocator::convert_untracked_resource_to_tracked(long, struct s_tag_resource_definition const *);
// public: c_typed_opaque_data<class c_tag_file_backend_resource_cache_file_datum_handler_simple, 1060, 4>::c_typed_opaque_data<class c_tag_file_backend_resource_cache_file_datum_handler_simple, 1060, 4>(void);
// public: class c_tag_file_backend_resource_cache_file_datum_handler_simple * c_typed_opaque_data<class c_tag_file_backend_resource_cache_file_datum_handler_simple, 1060, 4>::get(void);
// public: class c_tag_file_backend_resource_cache_file_datum_handler_simple * c_typed_opaque_data<class c_tag_file_backend_resource_cache_file_datum_handler_simple, 1060, 4>::try_and_get(void);
// public: bool c_typed_opaque_data<class c_tag_file_backend_resource_cache_file_datum_handler_simple, 1060, 4>::alive(void) const;
// public: long c_wrapped_array_no_init<unsigned __int64const>::count(void) const;
// public: unsigned __int64const & c_array_operator_interface<class c_wrapped_array_no_init<unsigned __int64const>, unsigned __int64const>::operator[](long) const;
// public: unsigned __int64const * c_wrapped_array_no_init<unsigned __int64const>::begin(void) const;
// public: bool c_array_operator_interface<class c_wrapped_array_no_init<unsigned __int64const>, unsigned __int64const>::valid_index(long) const;
// public: class c_wrapped_array_no_init<unsigned __int64const> const * c_recursive_template_pattern<class c_wrapped_array_no_init<unsigned __int64const> >::get_super_class(void) const;
// public: long c_array_operator_interface<class c_wrapped_array_no_init<unsigned __int64const>, unsigned __int64const>::count(void) const;
// public: class c_tag_file_backend_resource_cache_file_datum_handler_simple * c_typed_opaque_data<class c_tag_file_backend_resource_cache_file_datum_handler_simple, 1060, 4>::construct<class c_allocation_interface *, class c_tag_resource_runtime_listener *, class c_cache_file_builder_tag_resource_output *, class c_tag_file_backend_resource_io_arena_interface *>(class c_allocation_interface *, class c_tag_resource_runtime_listener *, class c_cache_file_builder_tag_resource_output *, class c_tag_file_backend_resource_io_arena_interface *);
// public: class c_tag_file_backend_resource_cache_file_datum_handler_simple * c_opaque_data<class c_tag_file_backend_resource_cache_file_datum_handler_simple, 1060, 4>::get(void);

//public: c_tag_resource_runtime_manager_simple::c_tag_resource_runtime_manager_simple(class c_tag_resource_runtime_global_handle_allocator *, class c_tag_file_backend_resource_manager_interface *, class c_tag_file_backend_resource_io_arena_interface *)
//{
//    mangled_ppc("??0c_tag_resource_runtime_manager_simple@@QAA@PAVc_tag_resource_runtime_global_handle_allocator@@PAVc_tag_file_backend_resource_manager_interface@@PAVc_tag_file_backend_resource_io_arena_interface@@@Z");
//};

//public: c_tag_resource_runtime_manager::c_tag_resource_runtime_manager(void)
//{
//    mangled_ppc("??0c_tag_resource_runtime_manager@@QAA@XZ");
//};

//public: virtual class c_tag_resource_runtime_global_handle_allocator * c_tag_resource_runtime_manager_simple::set_handle_allocator(class c_tag_resource_runtime_global_handle_allocator *)
//{
//    mangled_ppc("?set_handle_allocator@c_tag_resource_runtime_manager_simple@@UAAPAVc_tag_resource_runtime_global_handle_allocator@@PAV2@@Z");
//};

//public: virtual void c_tag_resource_runtime_manager_simple::initialize(class c_tag_resource_runtime_listener *, class c_tag_resource_prediction_atom_generator *)
//{
//    mangled_ppc("?initialize@c_tag_resource_runtime_manager_simple@@UAAXPAVc_tag_resource_runtime_listener@@PAVc_tag_resource_prediction_atom_generator@@@Z");
//};

//public: virtual void c_tag_resource_runtime_manager_simple::dispose(void)
//{
//    mangled_ppc("?dispose@c_tag_resource_runtime_manager_simple@@UAAXXZ");
//};

//public: virtual void c_tag_resource_runtime_manager_simple::idle(void)
//{
//    mangled_ppc("?idle@c_tag_resource_runtime_manager_simple@@UAAXXZ");
//};

//public: virtual void c_tag_resource_runtime_manager_simple::pump_io(void)
//{
//    mangled_ppc("?pump_io@c_tag_resource_runtime_manager_simple@@UAAXXZ");
//};

//public: virtual void c_tag_resource_runtime_manager_simple::report_memory_usage(class c_formatted_output *)
//{
//    mangled_ppc("?report_memory_usage@c_tag_resource_runtime_manager_simple@@UAAXPAVc_formatted_output@@@Z");
//};

//public: virtual void c_tag_resource_runtime_manager_simple::report_memory_brief(class c_wrapped_array<char>, class c_tag_group_dictionary *)
//{
//    mangled_ppc("?report_memory_brief@c_tag_resource_runtime_manager_simple@@UAAXV?$c_wrapped_array@D@@PAVc_tag_group_dictionary@@@Z");
//};

//public: virtual void c_tag_resource_runtime_manager_simple::stagnate_deferred_resources(void)
//{
//    mangled_ppc("?stagnate_deferred_resources@c_tag_resource_runtime_manager_simple@@UAAXXZ");
//};

//public: virtual void c_tag_resource_runtime_manager_simple::refresh_deferred_resources(void)
//{
//    mangled_ppc("?refresh_deferred_resources@c_tag_resource_runtime_manager_simple@@UAAXXZ");
//};

//public: virtual void c_tag_resource_runtime_manager_simple::set_runtime_toggle(enum e_tag_resource_runtime_toggle, bool)
//{
//    mangled_ppc("?set_runtime_toggle@c_tag_resource_runtime_manager_simple@@UAAXW4e_tag_resource_runtime_toggle@@_N@Z");
//};

//public: virtual void c_tag_resource_runtime_manager_simple::fire_signal(enum e_tag_resource_runtime_signal)
//{
//    mangled_ppc("?fire_signal@c_tag_resource_runtime_manager_simple@@UAAXW4e_tag_resource_runtime_signal@@@Z");
//};

//public: virtual void c_tag_resource_runtime_manager_simple::begin_zone_set_change(void)
//{
//    mangled_ppc("?begin_zone_set_change@c_tag_resource_runtime_manager_simple@@UAAXXZ");
//};

//public: virtual void c_tag_resource_runtime_manager_simple::commit_zone_set_change(void)
//{
//    mangled_ppc("?commit_zone_set_change@c_tag_resource_runtime_manager_simple@@UAAXXZ");
//};

//public: virtual void c_tag_resource_runtime_manager_simple::load_required_data_only_blocking(void)
//{
//    mangled_ppc("?load_required_data_only_blocking@c_tag_resource_runtime_manager_simple@@UAAXXZ");
//};

//public: virtual void c_tag_resource_runtime_manager_simple::update_required_data_assuming_incremental_changes(void)
//{
//    mangled_ppc("?update_required_data_assuming_incremental_changes@c_tag_resource_runtime_manager_simple@@UAAXXZ");
//};

//public: virtual void c_tag_resource_runtime_manager_simple::unload_all_tracked_resources(void)
//{
//    mangled_ppc("?unload_all_tracked_resources@c_tag_resource_runtime_manager_simple@@UAAXXZ");
//};

//public: virtual void c_tag_resource_runtime_manager_simple::prepare_for_tag_reload(void)
//{
//    mangled_ppc("?prepare_for_tag_reload@c_tag_resource_runtime_manager_simple@@UAAXXZ");
//};

//public: virtual void c_tag_resource_runtime_manager_simple::prepare_for_zone_set_tag_reload(void)
//{
//    mangled_ppc("?prepare_for_zone_set_tag_reload@c_tag_resource_runtime_manager_simple@@UAAXXZ");
//};

//public: virtual void c_tag_resource_runtime_manager_simple::try_to_buyback_memory(unsigned long)
//{
//    mangled_ppc("?try_to_buyback_memory@c_tag_resource_runtime_manager_simple@@UAAXK@Z");
//};

//public: virtual void c_tag_resource_runtime_manager_simple::unload_everything(void)
//{
//    mangled_ppc("?unload_everything@c_tag_resource_runtime_manager_simple@@UAAXXZ");
//};

//public: virtual bool c_tag_resource_runtime_manager_simple::need_to_predict_resources(void)
//{
//    mangled_ppc("?need_to_predict_resources@c_tag_resource_runtime_manager_simple@@UAA_NXZ");
//};

//public: virtual bool c_tag_resource_runtime_manager_simple::untracked_resource_available(long)
//{
//    mangled_ppc("?untracked_resource_available@c_tag_resource_runtime_manager_simple@@UAA_NJ@Z");
//};

//public: virtual class c_tag_file_backend_resource_cache_file_datum_handler * c_tag_resource_runtime_manager_simple::get_cache_file_datum_handler(void)
//{
//    mangled_ppc("?get_cache_file_datum_handler@c_tag_resource_runtime_manager_simple@@UAAPAVc_tag_file_backend_resource_cache_file_datum_handler@@XZ");
//};

//public: virtual bool c_tag_resource_runtime_manager_simple::resource_is_tracked(long)
//{
//    mangled_ppc("?resource_is_tracked@c_tag_resource_runtime_manager_simple@@UAA_NJ@Z");
//};

//public: virtual void * c_tag_resource_runtime_manager_simple::get_untracked_resource_data(long)
//{
//    mangled_ppc("?get_untracked_resource_data@c_tag_resource_runtime_manager_simple@@UAAPAXJ@Z");
//};

//public: virtual unsigned long c_tag_resource_runtime_manager_simple::get_resource_tracked_size(long)
//{
//    mangled_ppc("?get_resource_tracked_size@c_tag_resource_runtime_manager_simple@@UAAKJ@Z");
//};

//public: virtual void const * c_tag_resource_runtime_manager_simple::lock_for_query(long, class c_basic_buffer<void>)
//{
//    mangled_ppc("?lock_for_query@c_tag_resource_runtime_manager_simple@@UAAPBXJV?$c_basic_buffer@X@@@Z");
//};

//public: virtual void c_tag_resource_runtime_manager_simple::unlock_from_query(long, void const *)
//{
//    mangled_ppc("?unlock_from_query@c_tag_resource_runtime_manager_simple@@UAAXJPBX@Z");
//};

//public: virtual bool c_tag_resource_runtime_manager_simple::resource_available(long)
//{
//    mangled_ppc("?resource_available@c_tag_resource_runtime_manager_simple@@UAA_NJ@Z");
//};

//public: virtual bool c_tag_resource_runtime_manager_simple::resource_has_any_optional_data(long)
//{
//    mangled_ppc("?resource_has_any_optional_data@c_tag_resource_runtime_manager_simple@@UAA_NJ@Z");
//};

//public: virtual bool c_tag_resource_runtime_manager_simple::resource_test_access_state(long, enum e_tag_resource_access_state_bit)
//{
//    mangled_ppc("?resource_test_access_state@c_tag_resource_runtime_manager_simple@@UAA_NJW4e_tag_resource_access_state_bit@@@Z");
//};

//public: virtual void * c_tag_resource_runtime_manager_simple::get_resource_data(long)
//{
//    mangled_ppc("?get_resource_data@c_tag_resource_runtime_manager_simple@@UAAPAXJ@Z");
//};

//public: virtual long c_tag_resource_runtime_manager_simple::allocate_uninitialized_resource(struct s_tag_resource_definition const *)
//{
//    mangled_ppc("?allocate_uninitialized_resource@c_tag_resource_runtime_manager_simple@@UAAJPBUs_tag_resource_definition@@@Z");
//};

//public: virtual void c_tag_resource_runtime_manager_simple::free_resource(long, struct s_tag_resource_definition const *)
//{
//    mangled_ppc("?free_resource@c_tag_resource_runtime_manager_simple@@UAAXJPBUs_tag_resource_definition@@@Z");
//};

//public: virtual void c_tag_resource_runtime_manager_simple::commit_resource(long, long, struct s_tag_resource_definition const *)
//{
//    mangled_ppc("?commit_resource@c_tag_resource_runtime_manager_simple@@UAAXJJPBUs_tag_resource_definition@@@Z");
//};

//public: virtual void c_tag_resource_runtime_manager_simple::set_resource_owner(long, struct s_tag_resource_definition const *, long)
//{
//    mangled_ppc("?set_resource_owner@c_tag_resource_runtime_manager_simple@@UAAXJPBUs_tag_resource_definition@@J@Z");
//};

//public: virtual bool c_tag_resource_runtime_manager_simple::resource_stream_async(long, unsigned long, unsigned long, class c_basic_buffer<void>, class c_asynchronous_io_marker *)
//{
//    mangled_ppc("?resource_stream_async@c_tag_resource_runtime_manager_simple@@UAA_NJKKV?$c_basic_buffer@X@@PAVc_asynchronous_io_marker@@@Z");
//};

//public: virtual void c_tag_resource_runtime_manager_simple::prepare_for_new_map(void)
//{
//    mangled_ppc("?prepare_for_new_map@c_tag_resource_runtime_manager_simple@@UAAXXZ");
//};

//public: virtual void c_tag_resource_runtime_manager_simple::demand_resource(long)
//{
//    mangled_ppc("?demand_resource@c_tag_resource_runtime_manager_simple@@UAAXJ@Z");
//};

//public: virtual void c_tag_resource_runtime_manager_simple::resource_unload(long)
//{
//    mangled_ppc("?resource_unload@c_tag_resource_runtime_manager_simple@@UAAXJ@Z");
//};

//public: virtual long c_tag_resource_runtime_manager_simple::get_global_prediction_owner(void)
//{
//    mangled_ppc("?get_global_prediction_owner@c_tag_resource_runtime_manager_simple@@UAAJXZ");
//};

//public: virtual long c_tag_resource_runtime_manager_simple::allocate_prediction_owner(void)
//{
//    mangled_ppc("?allocate_prediction_owner@c_tag_resource_runtime_manager_simple@@UAAJXZ");
//};

//public: virtual void c_tag_resource_runtime_manager_simple::demand_optional_resources(class c_tag_resource_demand_callback *, bool)
//{
//    mangled_ppc("?demand_optional_resources@c_tag_resource_runtime_manager_simple@@UAAXPAVc_tag_resource_demand_callback@@_N@Z");
//};

//public: virtual void c_tag_resource_runtime_manager_simple::lock_for_game(void)
//{
//    mangled_ppc("?lock_for_game@c_tag_resource_runtime_manager_simple@@UAAXXZ");
//};

//public: virtual void c_tag_resource_runtime_manager_simple::unlock_for_game(void)
//{
//    mangled_ppc("?unlock_for_game@c_tag_resource_runtime_manager_simple@@UAAXXZ");
//};

//public: virtual bool c_tag_resource_runtime_manager_simple::locked_for_game_UGLY(void)
//{
//    mangled_ppc("?locked_for_game_UGLY@c_tag_resource_runtime_manager_simple@@UAA_NXZ");
//};

//public: virtual void c_tag_resource_runtime_manager_simple::lock_for_render(void)
//{
//    mangled_ppc("?lock_for_render@c_tag_resource_runtime_manager_simple@@UAAXXZ");
//};

//public: virtual struct s_resource_access_cookie * c_tag_resource_runtime_manager_simple::unlock_for_render_access(void)
//{
//    mangled_ppc("?unlock_for_render_access@c_tag_resource_runtime_manager_simple@@UAAPAUs_resource_access_cookie@@XZ");
//};

//public: virtual void c_tag_resource_runtime_manager_simple::unlock_for_render_gpu_usage(struct s_resource_access_cookie *)
//{
//    mangled_ppc("?unlock_for_render_gpu_usage@c_tag_resource_runtime_manager_simple@@UAAXPAUs_resource_access_cookie@@@Z");
//};

//public: virtual bool c_tag_resource_runtime_manager_simple::current_thread_has_access_UGLY(void)
//{
//    mangled_ppc("?current_thread_has_access_UGLY@c_tag_resource_runtime_manager_simple@@UAA_NXZ");
//};

//public: virtual class c_tag_resource_runtime_collector * c_tag_resource_runtime_manager_simple::begin_prediction_collection(void)
//{
//    mangled_ppc("?begin_prediction_collection@c_tag_resource_runtime_manager_simple@@UAAPAVc_tag_resource_runtime_collector@@XZ");
//};

//public: virtual long c_tag_resource_runtime_manager_simple::end_prediction_collection(class c_tag_resource_runtime_collector *)
//{
//    mangled_ppc("?end_prediction_collection@c_tag_resource_runtime_manager_simple@@UAAJPAVc_tag_resource_runtime_collector@@@Z");
//};

//public: virtual unsigned __int64 c_tag_resource_runtime_manager_simple::get_resource_snapshot(long)
//{
//    mangled_ppc("?get_resource_snapshot@c_tag_resource_runtime_manager_simple@@UAA_KJ@Z");
//};

//public: virtual bool c_tag_resource_runtime_manager_simple::all_resource_snapshots_valid(class c_wrapped_array<unsigned __int64const>)
//{
//    mangled_ppc("?all_resource_snapshots_valid@c_tag_resource_runtime_manager_simple@@UAA_NV?$c_wrapped_array@$$CB_K@@@Z");
//};

//public: virtual class c_basic_buffer<void> c_tag_resource_runtime_manager_simple::try_to_steal_memory(unsigned long)
//{
//    mangled_ppc("?try_to_steal_memory@c_tag_resource_runtime_manager_simple@@UAA?AV?$c_basic_buffer@X@@K@Z");
//};

//public: virtual void c_tag_resource_runtime_manager_simple::return_memory(class c_basic_buffer<void>)
//{
//    mangled_ppc("?return_memory@c_tag_resource_runtime_manager_simple@@UAAXV?$c_basic_buffer@X@@@Z");
//};

//public: void c_tag_resource_runtime_manager_simple::set_cache_file_output(class c_allocation_interface *, class c_cache_file_builder_tag_resource_output *)
//{
//    mangled_ppc("?set_cache_file_output@c_tag_resource_runtime_manager_simple@@QAAXPAVc_allocation_interface@@PAVc_cache_file_builder_tag_resource_output@@@Z");
//};

//public: void c_tag_resource_runtime_manager_simple::close_cache_file_output(void)
//{
//    mangled_ppc("?close_cache_file_output@c_tag_resource_runtime_manager_simple@@QAAXXZ");
//};

//public: virtual bool c_tag_resource_runtime_manager_simple::save_tracked_state(class c_persist_stream *, class c_tag_resource_definition_dictionary *)
//{
//    mangled_ppc("?save_tracked_state@c_tag_resource_runtime_manager_simple@@UAA_NPAVc_persist_stream@@PAVc_tag_resource_definition_dictionary@@@Z");
//};

//public: virtual bool c_tag_resource_runtime_manager_simple::restore_tracked_state(class c_persist_stream *, class c_tag_resource_definition_dictionary *)
//{
//    mangled_ppc("?restore_tracked_state@c_tag_resource_runtime_manager_simple@@UAA_NPAVc_persist_stream@@PAVc_tag_resource_definition_dictionary@@@Z");
//};

//public: virtual void c_tag_resource_runtime_manager_simple::report_tracked_state(class c_formatted_output *)
//{
//    mangled_ppc("?report_tracked_state@c_tag_resource_runtime_manager_simple@@UAAXPAVc_formatted_output@@@Z");
//};

//public: c_tag_file_backend_resource_datum_handler_simple::c_tag_file_backend_resource_datum_handler_simple(class c_tag_resource_runtime_global_handle_allocator *, class c_tag_file_backend_resource_manager_interface *, class c_tag_file_backend_resource_io_arena_interface *)
//{
//    mangled_ppc("??0c_tag_file_backend_resource_datum_handler_simple@@QAA@PAVc_tag_resource_runtime_global_handle_allocator@@PAVc_tag_file_backend_resource_manager_interface@@PAVc_tag_file_backend_resource_io_arena_interface@@@Z");
//};

//public: virtual void c_tag_file_backend_resource_datum_handler_simple::initialize(class c_tag_resource_runtime_listener *, class c_tag_file_backend_resource_datum_reference_tracker *)
//{
//    mangled_ppc("?initialize@c_tag_file_backend_resource_datum_handler_simple@@UAAXPAVc_tag_resource_runtime_listener@@PAVc_tag_file_backend_resource_datum_reference_tracker@@@Z");
//};

//public: virtual void c_tag_file_backend_resource_datum_handler_simple::dispose(void)
//{
//    mangled_ppc("?dispose@c_tag_file_backend_resource_datum_handler_simple@@UAAXXZ");
//};

//public: virtual class c_tag_resource_runtime_global_handle_allocator * c_tag_file_backend_resource_datum_handler_simple::set_handle_allocator(class c_tag_resource_runtime_global_handle_allocator *)
//{
//    mangled_ppc("?set_handle_allocator@c_tag_file_backend_resource_datum_handler_simple@@UAAPAVc_tag_resource_runtime_global_handle_allocator@@PAV2@@Z");
//};

//public: virtual class c_tag_file_backend_resource_cache_file_datum_handler * c_tag_file_backend_resource_datum_handler_simple::get_cache_file_datum_handler(void)
//{
//    mangled_ppc("?get_cache_file_datum_handler@c_tag_file_backend_resource_datum_handler_simple@@UAAPAVc_tag_file_backend_resource_cache_file_datum_handler@@XZ");
//};

//public: virtual unsigned long c_tag_file_backend_resource_datum_handler_simple::get_maximum_possible_resource_count(void)
//{
//    mangled_ppc("?get_maximum_possible_resource_count@c_tag_file_backend_resource_datum_handler_simple@@UAAKXZ");
//};

//public: virtual bool c_tag_file_backend_resource_datum_handler_simple::resource_is_tracked(long)
//{
//    mangled_ppc("?resource_is_tracked@c_tag_file_backend_resource_datum_handler_simple@@UAA_NJ@Z");
//};

//public: virtual bool c_tag_file_backend_resource_datum_handler_simple::untracked_resource_available(long)
//{
//    mangled_ppc("?untracked_resource_available@c_tag_file_backend_resource_datum_handler_simple@@UAA_NJ@Z");
//};

//public: virtual void * c_tag_file_backend_resource_datum_handler_simple::get_untracked_resource_data(long)
//{
//    mangled_ppc("?get_untracked_resource_data@c_tag_file_backend_resource_datum_handler_simple@@UAAPAXJ@Z");
//};

//public: virtual unsigned long c_tag_file_backend_resource_datum_handler_simple::get_resource_tracked_size(long)
//{
//    mangled_ppc("?get_resource_tracked_size@c_tag_file_backend_resource_datum_handler_simple@@UAAKJ@Z");
//};

//public: virtual long c_tag_file_backend_resource_datum_handler_simple::allocate_uninitialized_resource(struct s_tag_resource_definition const *)
//{
//    mangled_ppc("?allocate_uninitialized_resource@c_tag_file_backend_resource_datum_handler_simple@@UAAJPBUs_tag_resource_definition@@@Z");
//};

//public: virtual void c_tag_file_backend_resource_datum_handler_simple::free_resource(long, struct s_tag_resource_definition const *)
//{
//    mangled_ppc("?free_resource@c_tag_file_backend_resource_datum_handler_simple@@UAAXJPBUs_tag_resource_definition@@@Z");
//};

//public: virtual void c_tag_file_backend_resource_datum_handler_simple::commit_resource(long, long, struct s_tag_resource_definition const *)
//{
//    mangled_ppc("?commit_resource@c_tag_file_backend_resource_datum_handler_simple@@UAAXJJPBUs_tag_resource_definition@@@Z");
//};

//public: virtual void c_tag_file_backend_resource_datum_handler_simple::set_resource_owner(long, struct s_tag_resource_definition const *, long)
//{
//    mangled_ppc("?set_resource_owner@c_tag_file_backend_resource_datum_handler_simple@@UAAXJPBUs_tag_resource_definition@@J@Z");
//};

//public: void c_tag_file_backend_resource_datum_handler_simple::set_cache_file_output(class c_allocation_interface *, class c_cache_file_builder_tag_resource_output *)
//{
//    mangled_ppc("?set_cache_file_output@c_tag_file_backend_resource_datum_handler_simple@@QAAXPAVc_allocation_interface@@PAVc_cache_file_builder_tag_resource_output@@@Z");
//};

//public: void c_tag_file_backend_resource_datum_handler_simple::close_cache_file_output(void)
//{
//    mangled_ppc("?close_cache_file_output@c_tag_file_backend_resource_datum_handler_simple@@QAAXXZ");
//};

//public: virtual bool c_tag_file_backend_resource_datum_handler_simple::save_tracked_state(class c_persist_stream *, class c_tag_resource_definition_dictionary *)
//{
//    mangled_ppc("?save_tracked_state@c_tag_file_backend_resource_datum_handler_simple@@UAA_NPAVc_persist_stream@@PAVc_tag_resource_definition_dictionary@@@Z");
//};

//public: virtual bool c_tag_file_backend_resource_datum_handler_simple::restore_tracked_state(class c_persist_stream *, class c_tag_resource_definition_dictionary *)
//{
//    mangled_ppc("?restore_tracked_state@c_tag_file_backend_resource_datum_handler_simple@@UAA_NPAVc_persist_stream@@PAVc_tag_resource_definition_dictionary@@@Z");
//};

//public: virtual void c_tag_file_backend_resource_datum_handler_simple::report_tracked_state(class c_formatted_output *)
//{
//    mangled_ppc("?report_tracked_state@c_tag_file_backend_resource_datum_handler_simple@@UAAXPAVc_formatted_output@@@Z");
//};

//public: virtual unsigned long c_tag_resource_persist_manager_simple::get_xsync_state_version(void)
//{
//    mangled_ppc("?get_xsync_state_version@c_tag_resource_persist_manager_simple@@UAAKXZ");
//};

//public: virtual bool c_tag_resource_persist_manager_simple::resource_is_cached_for_xsync(struct s_tag_resource const *)
//{
//    mangled_ppc("?resource_is_cached_for_xsync@c_tag_resource_persist_manager_simple@@UAA_NPBUs_tag_resource@@@Z");
//};

//public: virtual bool c_tag_resource_persist_manager_simple::save_xsync_state(class c_allocation_interface *, struct s_tag_resource const *, class c_persist_stream *)
//{
//    mangled_ppc("?save_xsync_state@c_tag_resource_persist_manager_simple@@UAA_NPAVc_allocation_interface@@PBUs_tag_resource@@PAVc_persist_stream@@@Z");
//};

//public: virtual bool c_tag_resource_persist_manager_simple::restore_xsync_state_and_register(unsigned long, struct s_tag_resource *, class c_persist_stream *)
//{
//    mangled_ppc("?restore_xsync_state_and_register@c_tag_resource_persist_manager_simple@@UAA_NKPAUs_tag_resource@@PAVc_persist_stream@@@Z");
//};

//public: virtual bool c_tag_resource_persist_manager_simple::reassign_xsync_state(struct s_tag_resource *, struct s_tag_resource *)
//{
//    mangled_ppc("?reassign_xsync_state@c_tag_resource_persist_manager_simple@@UAA_NPAUs_tag_resource@@0@Z");
//};

//public: virtual bool c_tag_resource_persist_manager_simple::resource_available(struct s_tag_resource const *)
//{
//    mangled_ppc("?resource_available@c_tag_resource_persist_manager_simple@@UAA_NPBUs_tag_resource@@@Z");
//};

//public: virtual void * c_tag_resource_persist_manager_simple::get_mutable_resource_data(struct s_tag_resource const *)
//{
//    mangled_ppc("?get_mutable_resource_data@c_tag_resource_persist_manager_simple@@UAAPAXPBUs_tag_resource@@@Z");
//};

//public: virtual void * c_tag_resource_persist_manager_simple::get_resource_data(struct s_tag_resource const *)
//{
//    mangled_ppc("?get_resource_data@c_tag_resource_persist_manager_simple@@UAAPAXPBUs_tag_resource@@@Z");
//};

//public: virtual bool c_tag_resource_persist_manager_simple::allocate_resource(struct s_tag_resource *)
//{
//    mangled_ppc("?allocate_resource@c_tag_resource_persist_manager_simple@@UAA_NPAUs_tag_resource@@@Z");
//};

//public: virtual void c_tag_resource_persist_manager_simple::free_resource(struct s_tag_resource *)
//{
//    mangled_ppc("?free_resource@c_tag_resource_persist_manager_simple@@UAAXPAUs_tag_resource@@@Z");
//};

//public: virtual bool c_tag_resource_persist_manager_simple::matches_tag_allocator(class c_tag_allocator *)
//{
//    mangled_ppc("?matches_tag_allocator@c_tag_resource_persist_manager_simple@@UAA_NPAVc_tag_allocator@@@Z");
//};

//public: virtual long c_default_tag_resource_simple_runtime_allocator::allocate_editable_resource_handle(struct s_tag_resource_definition const *)
//{
//    mangled_ppc("?allocate_editable_resource_handle@c_default_tag_resource_simple_runtime_allocator@@UAAJPBUs_tag_resource_definition@@@Z");
//};

//public: virtual long c_default_tag_resource_simple_runtime_allocator::allocate_data_array_resource_handle(struct s_tag_resource_definition const *, long)
//{
//    mangled_ppc("?allocate_data_array_resource_handle@c_default_tag_resource_simple_runtime_allocator@@UAAJPBUs_tag_resource_definition@@J@Z");
//};

//public: virtual void * c_default_tag_resource_simple_runtime_allocator::get_resource_pointer(long)
//{
//    mangled_ppc("?get_resource_pointer@c_default_tag_resource_simple_runtime_allocator@@UAAPAXJ@Z");
//};

//public: virtual void c_default_tag_resource_simple_runtime_allocator::free_resource_handle(long, struct s_tag_resource_definition const *)
//{
//    mangled_ppc("?free_resource_handle@c_default_tag_resource_simple_runtime_allocator@@UAAXJPBUs_tag_resource_definition@@@Z");
//};

//public: virtual void c_default_tag_resource_simple_runtime_allocator::convert_untracked_resource_to_tracked(long, struct s_tag_resource_definition const *)
//{
//    mangled_ppc("?convert_untracked_resource_to_tracked@c_default_tag_resource_simple_runtime_allocator@@UAAXJPBUs_tag_resource_definition@@@Z");
//};

//public: c_typed_opaque_data<class c_tag_file_backend_resource_cache_file_datum_handler_simple, 1060, 4>::c_typed_opaque_data<class c_tag_file_backend_resource_cache_file_datum_handler_simple, 1060, 4>(void)
//{
//    mangled_ppc("??0?$c_typed_opaque_data@Vc_tag_file_backend_resource_cache_file_datum_handler_simple@@$0ECE@$03@@QAA@XZ");
//};

//public: class c_tag_file_backend_resource_cache_file_datum_handler_simple * c_typed_opaque_data<class c_tag_file_backend_resource_cache_file_datum_handler_simple, 1060, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_typed_opaque_data@Vc_tag_file_backend_resource_cache_file_datum_handler_simple@@$0ECE@$03@@QAAPAVc_tag_file_backend_resource_cache_file_datum_handler_simple@@XZ");
//};

//public: class c_tag_file_backend_resource_cache_file_datum_handler_simple * c_typed_opaque_data<class c_tag_file_backend_resource_cache_file_datum_handler_simple, 1060, 4>::try_and_get(void)
//{
//    mangled_ppc("?try_and_get@?$c_typed_opaque_data@Vc_tag_file_backend_resource_cache_file_datum_handler_simple@@$0ECE@$03@@QAAPAVc_tag_file_backend_resource_cache_file_datum_handler_simple@@XZ");
//};

//public: bool c_typed_opaque_data<class c_tag_file_backend_resource_cache_file_datum_handler_simple, 1060, 4>::alive(void) const
//{
//    mangled_ppc("?alive@?$c_typed_opaque_data@Vc_tag_file_backend_resource_cache_file_datum_handler_simple@@$0ECE@$03@@QBA_NXZ");
//};

//public: long c_wrapped_array_no_init<unsigned __int64const>::count(void) const
//{
//    mangled_ppc("?count@?$c_wrapped_array_no_init@$$CB_K@@QBAJXZ");
//};

//public: unsigned __int64const & c_array_operator_interface<class c_wrapped_array_no_init<unsigned __int64const>, unsigned __int64const>::operator[](long) const
//{
//    mangled_ppc("??A?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CB_K@@$$CB_K@@QBAAB_KJ@Z");
//};

//public: unsigned __int64const * c_wrapped_array_no_init<unsigned __int64const>::begin(void) const
//{
//    mangled_ppc("?begin@?$c_wrapped_array_no_init@$$CB_K@@QBAPB_KXZ");
//};

//public: bool c_array_operator_interface<class c_wrapped_array_no_init<unsigned __int64const>, unsigned __int64const>::valid_index(long) const
//{
//    mangled_ppc("?valid_index@?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CB_K@@$$CB_K@@QBA_NJ@Z");
//};

//public: class c_wrapped_array_no_init<unsigned __int64const> const * c_recursive_template_pattern<class c_wrapped_array_no_init<unsigned __int64const> >::get_super_class(void) const
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@$$CB_K@@@@QBAPBV?$c_wrapped_array_no_init@$$CB_K@@XZ");
//};

//public: long c_array_operator_interface<class c_wrapped_array_no_init<unsigned __int64const>, unsigned __int64const>::count(void) const
//{
//    mangled_ppc("?count@?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CB_K@@$$CB_K@@QBAJXZ");
//};

//public: class c_tag_file_backend_resource_cache_file_datum_handler_simple * c_typed_opaque_data<class c_tag_file_backend_resource_cache_file_datum_handler_simple, 1060, 4>::construct<class c_allocation_interface *, class c_tag_resource_runtime_listener *, class c_cache_file_builder_tag_resource_output *, class c_tag_file_backend_resource_io_arena_interface *>(class c_allocation_interface *, class c_tag_resource_runtime_listener *, class c_cache_file_builder_tag_resource_output *, class c_tag_file_backend_resource_io_arena_interface *)
//{
//    mangled_ppc("??$construct@PAVc_allocation_interface@@PAVc_tag_resource_runtime_listener@@PAVc_cache_file_builder_tag_resource_output@@PAVc_tag_file_backend_resource_io_arena_interface@@@?$c_typed_opaque_data@Vc_tag_file_backend_resource_cache_file_datum_handler_simple@@$0ECE@$03@@QAAPAVc_tag_file_backend_resource_cache_file_datum_handler_simple@@PAVc_allocation_interface@@PAVc_tag_resource_runtime_listener@@PAVc_cache_file_builder_tag_resource_output@@PAVc_tag_file_backend_resource_io_arena_interface@@@Z");
//};

//public: class c_tag_file_backend_resource_cache_file_datum_handler_simple * c_opaque_data<class c_tag_file_backend_resource_cache_file_datum_handler_simple, 1060, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_opaque_data@Vc_tag_file_backend_resource_cache_file_datum_handler_simple@@$0ECE@$03@@QAAPAVc_tag_file_backend_resource_cache_file_datum_handler_simple@@XZ");
//};

