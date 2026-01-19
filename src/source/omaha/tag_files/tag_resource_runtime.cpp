/* ---------- headers */

#include "omaha\tag_files\tag_resource_runtime.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// const c_tag_resource_prediction_atom_generator_simple::c_tag_resource_prediction_visitor::`vftable'{for `c_tag_resource_visit_itinerary'}; // "??_7c_tag_resource_prediction_visitor@c_tag_resource_prediction_atom_generator_simple@@6Bc_tag_resource_visit_itinerary@@@"
// const c_tag_resource_prediction_atom_generator_simple::c_tag_resource_prediction_visitor::`vftable'{for `c_tag_resource_visitor'}; // "??_7c_tag_resource_prediction_visitor@c_tag_resource_prediction_atom_generator_simple@@6Bc_tag_resource_visitor@@@"
// bool g_enable_tag_resources_on_xsync; // "?g_enable_tag_resources_on_xsync@@3_NA"
// class c_tag_resource_runtime_manager *g_resource_manager; // "?g_resource_manager@@3PAVc_tag_resource_runtime_manager@@A"
// class c_tag_resource_runtime_listener_simple g_simple_resource_listener; // "?g_simple_resource_listener@@3Vc_tag_resource_runtime_listener_simple@@A"
// class c_tag_resource_prediction_atom_generator_simple g_simple_resource_prediction_atom_generator; // "?g_simple_resource_prediction_atom_generator@@3Vc_tag_resource_prediction_atom_generator_simple@@A"
// class c_tag_resource_debug_memory_usage g_resource_debug_memory_usage; // "?g_resource_debug_memory_usage@@3Vc_tag_resource_debug_memory_usage@@A"

// public: virtual bool c_tag_resource_prediction_atom_generator_simple::collect_tag_resources(long, long, class c_tag_resource_prediction_atom_collector *);
// public: c_tag_resource_prediction_atom_generator_simple::c_tag_resource_prediction_visitor::c_tag_resource_prediction_visitor(class c_tag_resource_prediction_filter *, long, long, class c_tag_resource_prediction_atom_collector *);
// public: virtual void c_tag_resource_visitor::add_traversal_link(long, long);
// public: virtual bool c_tag_resource_visit_itinerary::should_visit_through_tag_reference(struct s_tag_reference const *);
// public: virtual void c_tag_resource_prediction_atom_generator_simple::c_tag_resource_prediction_visitor::visit_tag_resource_owner(long);
// public: virtual void c_tag_resource_prediction_atom_generator_simple::c_tag_resource_prediction_visitor::visit_tag_resource(long, struct s_tag_resource const *, char const *);
// public: virtual bool c_tag_resource_prediction_atom_generator_simple::c_tag_resource_prediction_visitor::should_visit_individual_resources(long);
// public: virtual bool c_tag_resource_prediction_atom_generator_simple::c_tag_resource_prediction_visitor::should_visit_tag(long);
// public: bool c_tag_resource_prediction_atom_generator_simple::c_tag_resource_prediction_visitor::is_complete_success(void) const;
// public: c_tag_resource_visitor::c_tag_resource_visitor(void);
// public: c_tag_resource_visit_itinerary::c_tag_resource_visit_itinerary(void);
// public: void c_tag_resource_prediction_atom_generator_simple::set_prediction_filter(class c_tag_resource_prediction_filter *);
// public: virtual void c_tag_resource_debug_memory_usage::report_usage(void);
// public: c_simple_file_output::c_simple_file_output(char const *);
// protected: struct s_file_reference * c_file_reference::get_file(void);
// public: c_simple_file_output::~c_simple_file_output(void);
// public: virtual void c_tag_resource_debug_memory_usage::report_brief(long, char *);
// public: virtual long c_tag_resource_debug_memory_usage::upload_report(long, class c_file_path *);
// void dump_tag_memory_usage_stats(void);
// void tag_resources_initialize(void);
// public: void c_tag_resource_runtime_listener_simple::initialize(class c_allocation_interface *);
// void tag_resources_dispose(void);
// public: void c_tag_resource_runtime_listener_simple::dispose(void);
// void tag_resources_load_required_data_only_blocking(void);
// void tag_resources_update_required_data_assuming_incremental_changes(void);
// void tag_resources_unload_everything(void);
// void tag_resources_main_loop_idle(void);
// void tag_resources_stagnate_deferred_resources(void);
// void tag_resources_refresh_deferred_resources(void);
// void tag_resources_demand_optional_resources(class c_tag_resource_demand_callback *, bool);
// void tag_resources_set_active_resource_set(class c_tag_resource_runtime_active_set *);
// public: void c_tag_resource_runtime_listener_simple::set_resource_active_set(class c_tag_resource_runtime_active_set *);
// void tag_resources_set_prediction_filter(class c_tag_resource_prediction_filter *);
// void tag_resources_prepare_for_zone_set_change(void);
// void tag_resources_commit_zone_set_change(void);
// bool tag_resources_save_tracked_state(class c_persist_stream *, class c_tag_resource_definition_dictionary *);
// bool tag_resources_restore_tracked_state(class c_persist_stream *, class c_tag_resource_definition_dictionary *);
// void tag_resources_report_tracked_state(class c_formatted_output *);
// long tag_resources_lock_game(void);
// void tag_resources_unlock_game(long &);
// void tag_resources_lock_render(void);
// struct s_resource_access_cookie * tag_resources_unlock_render_access(void);
// void tag_resources_unlock_render_gpu_usage(struct s_resource_access_cookie *);
// bool tag_resources_locked_for_current_thread_UGLY(void);
// void tag_resources_reset(void);
// void tag_resources_try_to_buyback_memory(unsigned long);
// void tag_resources_prepare_for_tag_reload(void);
// public: void c_tag_resource_runtime_listener_simple::set_reload_stage(enum e_tag_reload_stage);
// void tag_resources_prepare_for_zone_set_tag_reload(void);
// void tag_resource_runtime_set_manager(class c_tag_resource_runtime_manager *);
// class c_tag_resource_runtime_manager * tag_resource_runtime_get_manager(void);
// void tag_resource_initialize(struct s_tag_resource *, struct s_tag_resource_definition const *);
// bool tag_resource_available(struct s_tag_resource const *);
// bool tag_resource_test_access_state(struct s_tag_resource const *, enum e_tag_resource_access_state_bit);
// void * tag_resource_try_to_get(struct s_tag_resource const *);
// void * tag_resource_get(struct s_tag_resource const *);
// bool tag_resource_allocate_uninitialized(struct s_tag_resource *);
// bool tag_resource_create_new(struct s_tag_resource *);
// void tag_resource_destroy(struct s_tag_resource *);
// void tag_resource_set_owner(struct s_tag_resource *, long);
// void tag_resource_commit(long, struct s_tag_resource const *);
// bool tag_resource_copy(struct s_tag_resource *, struct s_tag_resource const *);
// class c_tag_file_backend_resource_cache_file_datum_handler * tag_resources_get_cache_file_datum_handler(void);
// bool tag_resource_is_tracked_externally_from_tag(struct s_tag_resource const *);
// bool tag_resource_untracked_available(struct s_tag_resource const *);
// void * tag_resource_get_untracked_data(struct s_tag_resource const *);
// unsigned long tag_resource_get_tracked_size(struct s_tag_resource const *);
// void register_tag_for_tracked_resources(long);
// public: void c_tag_resource_runtime_listener_simple::register_tag_resource_owner(long);
// void unregister_tag_for_tracked_resources(long);
// public: void c_tag_resource_runtime_listener_simple::revoke_tag_resource_owner(long);
// long tag_resources_get_global_prediction_owner(void);
// long tag_resources_allocate_prediction_owner(void);
// bool tag_resource_describe(struct s_tag_resource const *, class c_wrapped_array<char>);
// bool tag_resources_need_to_predict(void);
// void tag_resources_set_per_frame_publish(bool);
// void tag_resources_set_incremental_publish(bool);
// void tag_resources_enable_optional_caching(bool);
// void tag_resources_set_demand_throttle_to_io(bool);
// void tag_resources_enable_fast_prediction(bool);
// void tag_resources_validate_all_pages(bool);
// void tag_resources_flush_optional_resources(void);
// void tag_resources_pump_io(void);
// bool tag_resource_stream_async(struct s_tag_resource const *, bool, unsigned long, unsigned long, class c_basic_buffer<void>, class c_asynchronous_io_marker *);
// unsigned __int64 tag_resource_get_state_snapshot(long);
// unsigned __int64 tag_resource_get_state_snapshot(struct s_tag_resource const *);
// bool tag_resource_all_snapshots_valid(unsigned __int64const *, long);
// void tag_resources_prepare_for_new_map(void);
// class c_basic_buffer<void> tag_resources_try_to_steal_memory(unsigned long);
// void tag_resources_return_memory(class c_basic_buffer<void>);
// public: struct s_data_array * c_smart_data_array<struct c_tag_resource_runtime_listener_simple::s_tag_resource_owner_datum>::operator struct s_data_array *(void) const;
// public: class c_smart_data_array<struct c_tag_resource_runtime_listener_simple::s_tag_resource_owner_datum> & c_smart_data_array<struct c_tag_resource_runtime_listener_simple::s_tag_resource_owner_datum>::operator=(struct s_data_array *);
// public: c_wrapped_array<char>::ctor<char>(class c_wrapped_array<char> &);
// class c_wrapped_array<unsigned __int64const> make_wrapped_array<unsigned __int64const>(unsigned __int64const *, long);
// public: c_wrapped_array<unsigned __int64const>::c_wrapped_array<unsigned __int64const>(unsigned __int64const *, long);
// public: void c_wrapped_array_no_init<unsigned __int64const>::set_elements(unsigned __int64const *, long);
// public: c_tag_resource_runtime_listener_simple::c_tag_resource_runtime_listener_simple(void);
// public: virtual long c_tag_resource_runtime_listener_simple::lookup_resource_owner(struct s_tag_group const *, char const *);
// public: virtual bool c_tag_resource_runtime_listener_simple::describe_resource_owner(long, struct s_tag_group const **, class c_wrapped_array<char>);
// public: virtual bool c_tag_resource_runtime_listener_simple::register_resource(long, long, struct s_tag_resource_definition const *, void *);
// public: virtual void c_tag_resource_runtime_listener_simple::unregister_resource(long, long, struct s_tag_resource_definition const *, void *);
// public: virtual bool c_tag_resource_runtime_listener_simple::resource_owner_is_reloading(long);
// public: virtual class c_tag_resource_runtime_active_set * c_tag_resource_runtime_listener_simple::get_resource_active_set_dont_cache(void);
// public: c_tag_resource_runtime_listener::c_tag_resource_runtime_listener(void);
// public: c_tag_resource_prediction_atom_generator_simple::c_tag_resource_prediction_atom_generator_simple(void);
// public: c_tag_resource_prediction_atom_generator::c_tag_resource_prediction_atom_generator(void);
// public: c_tag_resource_debug_memory_usage::c_tag_resource_debug_memory_usage(void);

//public: virtual bool c_tag_resource_prediction_atom_generator_simple::collect_tag_resources(long, long, class c_tag_resource_prediction_atom_collector *)
//{
//    mangled_ppc("?collect_tag_resources@c_tag_resource_prediction_atom_generator_simple@@UAA_NJJPAVc_tag_resource_prediction_atom_collector@@@Z");
//};

//public: c_tag_resource_prediction_atom_generator_simple::c_tag_resource_prediction_visitor::c_tag_resource_prediction_visitor(class c_tag_resource_prediction_filter *, long, long, class c_tag_resource_prediction_atom_collector *)
//{
//    mangled_ppc("??0c_tag_resource_prediction_visitor@c_tag_resource_prediction_atom_generator_simple@@QAA@PAVc_tag_resource_prediction_filter@@JJPAVc_tag_resource_prediction_atom_collector@@@Z");
//};

//public: virtual void c_tag_resource_visitor::add_traversal_link(long, long)
//{
//    mangled_ppc("?add_traversal_link@c_tag_resource_visitor@@UAAXJJ@Z");
//};

//public: virtual bool c_tag_resource_visit_itinerary::should_visit_through_tag_reference(struct s_tag_reference const *)
//{
//    mangled_ppc("?should_visit_through_tag_reference@c_tag_resource_visit_itinerary@@UAA_NPBUs_tag_reference@@@Z");
//};

//public: virtual void c_tag_resource_prediction_atom_generator_simple::c_tag_resource_prediction_visitor::visit_tag_resource_owner(long)
//{
//    mangled_ppc("?visit_tag_resource_owner@c_tag_resource_prediction_visitor@c_tag_resource_prediction_atom_generator_simple@@UAAXJ@Z");
//};

//public: virtual void c_tag_resource_prediction_atom_generator_simple::c_tag_resource_prediction_visitor::visit_tag_resource(long, struct s_tag_resource const *, char const *)
//{
//    mangled_ppc("?visit_tag_resource@c_tag_resource_prediction_visitor@c_tag_resource_prediction_atom_generator_simple@@UAAXJPBUs_tag_resource@@PBD@Z");
//};

//public: virtual bool c_tag_resource_prediction_atom_generator_simple::c_tag_resource_prediction_visitor::should_visit_individual_resources(long)
//{
//    mangled_ppc("?should_visit_individual_resources@c_tag_resource_prediction_visitor@c_tag_resource_prediction_atom_generator_simple@@UAA_NJ@Z");
//};

//public: virtual bool c_tag_resource_prediction_atom_generator_simple::c_tag_resource_prediction_visitor::should_visit_tag(long)
//{
//    mangled_ppc("?should_visit_tag@c_tag_resource_prediction_visitor@c_tag_resource_prediction_atom_generator_simple@@UAA_NJ@Z");
//};

//public: bool c_tag_resource_prediction_atom_generator_simple::c_tag_resource_prediction_visitor::is_complete_success(void) const
//{
//    mangled_ppc("?is_complete_success@c_tag_resource_prediction_visitor@c_tag_resource_prediction_atom_generator_simple@@QBA_NXZ");
//};

//public: c_tag_resource_visitor::c_tag_resource_visitor(void)
//{
//    mangled_ppc("??0c_tag_resource_visitor@@QAA@XZ");
//};

//public: c_tag_resource_visit_itinerary::c_tag_resource_visit_itinerary(void)
//{
//    mangled_ppc("??0c_tag_resource_visit_itinerary@@QAA@XZ");
//};

//public: void c_tag_resource_prediction_atom_generator_simple::set_prediction_filter(class c_tag_resource_prediction_filter *)
//{
//    mangled_ppc("?set_prediction_filter@c_tag_resource_prediction_atom_generator_simple@@QAAXPAVc_tag_resource_prediction_filter@@@Z");
//};

//public: virtual void c_tag_resource_debug_memory_usage::report_usage(void)
//{
//    mangled_ppc("?report_usage@c_tag_resource_debug_memory_usage@@UAAXXZ");
//};

//public: c_simple_file_output::c_simple_file_output(char const *)
//{
//    mangled_ppc("??0c_simple_file_output@@QAA@PBD@Z");
//};

//protected: struct s_file_reference * c_file_reference::get_file(void)
//{
//    mangled_ppc("?get_file@c_file_reference@@IAAPAUs_file_reference@@XZ");
//};

//public: c_simple_file_output::~c_simple_file_output(void)
//{
//    mangled_ppc("??1c_simple_file_output@@QAA@XZ");
//};

//public: virtual void c_tag_resource_debug_memory_usage::report_brief(long, char *)
//{
//    mangled_ppc("?report_brief@c_tag_resource_debug_memory_usage@@UAAXJPAD@Z");
//};

//public: virtual long c_tag_resource_debug_memory_usage::upload_report(long, class c_file_path *)
//{
//    mangled_ppc("?upload_report@c_tag_resource_debug_memory_usage@@UAAJJPAVc_file_path@@@Z");
//};

//void dump_tag_memory_usage_stats(void)
//{
//    mangled_ppc("?dump_tag_memory_usage_stats@@YAXXZ");
//};

//void tag_resources_initialize(void)
//{
//    mangled_ppc("?tag_resources_initialize@@YAXXZ");
//};

//public: void c_tag_resource_runtime_listener_simple::initialize(class c_allocation_interface *)
//{
//    mangled_ppc("?initialize@c_tag_resource_runtime_listener_simple@@QAAXPAVc_allocation_interface@@@Z");
//};

//void tag_resources_dispose(void)
//{
//    mangled_ppc("?tag_resources_dispose@@YAXXZ");
//};

//public: void c_tag_resource_runtime_listener_simple::dispose(void)
//{
//    mangled_ppc("?dispose@c_tag_resource_runtime_listener_simple@@QAAXXZ");
//};

//void tag_resources_load_required_data_only_blocking(void)
//{
//    mangled_ppc("?tag_resources_load_required_data_only_blocking@@YAXXZ");
//};

//void tag_resources_update_required_data_assuming_incremental_changes(void)
//{
//    mangled_ppc("?tag_resources_update_required_data_assuming_incremental_changes@@YAXXZ");
//};

//void tag_resources_unload_everything(void)
//{
//    mangled_ppc("?tag_resources_unload_everything@@YAXXZ");
//};

//void tag_resources_main_loop_idle(void)
//{
//    mangled_ppc("?tag_resources_main_loop_idle@@YAXXZ");
//};

//void tag_resources_stagnate_deferred_resources(void)
//{
//    mangled_ppc("?tag_resources_stagnate_deferred_resources@@YAXXZ");
//};

//void tag_resources_refresh_deferred_resources(void)
//{
//    mangled_ppc("?tag_resources_refresh_deferred_resources@@YAXXZ");
//};

//void tag_resources_demand_optional_resources(class c_tag_resource_demand_callback *, bool)
//{
//    mangled_ppc("?tag_resources_demand_optional_resources@@YAXPAVc_tag_resource_demand_callback@@_N@Z");
//};

//void tag_resources_set_active_resource_set(class c_tag_resource_runtime_active_set *)
//{
//    mangled_ppc("?tag_resources_set_active_resource_set@@YAXPAVc_tag_resource_runtime_active_set@@@Z");
//};

//public: void c_tag_resource_runtime_listener_simple::set_resource_active_set(class c_tag_resource_runtime_active_set *)
//{
//    mangled_ppc("?set_resource_active_set@c_tag_resource_runtime_listener_simple@@QAAXPAVc_tag_resource_runtime_active_set@@@Z");
//};

//void tag_resources_set_prediction_filter(class c_tag_resource_prediction_filter *)
//{
//    mangled_ppc("?tag_resources_set_prediction_filter@@YAXPAVc_tag_resource_prediction_filter@@@Z");
//};

//void tag_resources_prepare_for_zone_set_change(void)
//{
//    mangled_ppc("?tag_resources_prepare_for_zone_set_change@@YAXXZ");
//};

//void tag_resources_commit_zone_set_change(void)
//{
//    mangled_ppc("?tag_resources_commit_zone_set_change@@YAXXZ");
//};

//bool tag_resources_save_tracked_state(class c_persist_stream *, class c_tag_resource_definition_dictionary *)
//{
//    mangled_ppc("?tag_resources_save_tracked_state@@YA_NPAVc_persist_stream@@PAVc_tag_resource_definition_dictionary@@@Z");
//};

//bool tag_resources_restore_tracked_state(class c_persist_stream *, class c_tag_resource_definition_dictionary *)
//{
//    mangled_ppc("?tag_resources_restore_tracked_state@@YA_NPAVc_persist_stream@@PAVc_tag_resource_definition_dictionary@@@Z");
//};

//void tag_resources_report_tracked_state(class c_formatted_output *)
//{
//    mangled_ppc("?tag_resources_report_tracked_state@@YAXPAVc_formatted_output@@@Z");
//};

//long tag_resources_lock_game(void)
//{
//    mangled_ppc("?tag_resources_lock_game@@YAJXZ");
//};

//void tag_resources_unlock_game(long &)
//{
//    mangled_ppc("?tag_resources_unlock_game@@YAXAAJ@Z");
//};

//void tag_resources_lock_render(void)
//{
//    mangled_ppc("?tag_resources_lock_render@@YAXXZ");
//};

//struct s_resource_access_cookie * tag_resources_unlock_render_access(void)
//{
//    mangled_ppc("?tag_resources_unlock_render_access@@YAPAUs_resource_access_cookie@@XZ");
//};

//void tag_resources_unlock_render_gpu_usage(struct s_resource_access_cookie *)
//{
//    mangled_ppc("?tag_resources_unlock_render_gpu_usage@@YAXPAUs_resource_access_cookie@@@Z");
//};

//bool tag_resources_locked_for_current_thread_UGLY(void)
//{
//    mangled_ppc("?tag_resources_locked_for_current_thread_UGLY@@YA_NXZ");
//};

//void tag_resources_reset(void)
//{
//    mangled_ppc("?tag_resources_reset@@YAXXZ");
//};

//void tag_resources_try_to_buyback_memory(unsigned long)
//{
//    mangled_ppc("?tag_resources_try_to_buyback_memory@@YAXK@Z");
//};

//void tag_resources_prepare_for_tag_reload(void)
//{
//    mangled_ppc("?tag_resources_prepare_for_tag_reload@@YAXXZ");
//};

//public: void c_tag_resource_runtime_listener_simple::set_reload_stage(enum e_tag_reload_stage)
//{
//    mangled_ppc("?set_reload_stage@c_tag_resource_runtime_listener_simple@@QAAXW4e_tag_reload_stage@@@Z");
//};

//void tag_resources_prepare_for_zone_set_tag_reload(void)
//{
//    mangled_ppc("?tag_resources_prepare_for_zone_set_tag_reload@@YAXXZ");
//};

//void tag_resource_runtime_set_manager(class c_tag_resource_runtime_manager *)
//{
//    mangled_ppc("?tag_resource_runtime_set_manager@@YAXPAVc_tag_resource_runtime_manager@@@Z");
//};

//class c_tag_resource_runtime_manager * tag_resource_runtime_get_manager(void)
//{
//    mangled_ppc("?tag_resource_runtime_get_manager@@YAPAVc_tag_resource_runtime_manager@@XZ");
//};

//void tag_resource_initialize(struct s_tag_resource *, struct s_tag_resource_definition const *)
//{
//    mangled_ppc("?tag_resource_initialize@@YAXPAUs_tag_resource@@PBUs_tag_resource_definition@@@Z");
//};

//bool tag_resource_available(struct s_tag_resource const *)
//{
//    mangled_ppc("?tag_resource_available@@YA_NPBUs_tag_resource@@@Z");
//};

//bool tag_resource_test_access_state(struct s_tag_resource const *, enum e_tag_resource_access_state_bit)
//{
//    mangled_ppc("?tag_resource_test_access_state@@YA_NPBUs_tag_resource@@W4e_tag_resource_access_state_bit@@@Z");
//};

//void * tag_resource_try_to_get(struct s_tag_resource const *)
//{
//    mangled_ppc("?tag_resource_try_to_get@@YAPAXPBUs_tag_resource@@@Z");
//};

//void * tag_resource_get(struct s_tag_resource const *)
//{
//    mangled_ppc("?tag_resource_get@@YAPAXPBUs_tag_resource@@@Z");
//};

//bool tag_resource_allocate_uninitialized(struct s_tag_resource *)
//{
//    mangled_ppc("?tag_resource_allocate_uninitialized@@YA_NPAUs_tag_resource@@@Z");
//};

//bool tag_resource_create_new(struct s_tag_resource *)
//{
//    mangled_ppc("?tag_resource_create_new@@YA_NPAUs_tag_resource@@@Z");
//};

//void tag_resource_destroy(struct s_tag_resource *)
//{
//    mangled_ppc("?tag_resource_destroy@@YAXPAUs_tag_resource@@@Z");
//};

//void tag_resource_set_owner(struct s_tag_resource *, long)
//{
//    mangled_ppc("?tag_resource_set_owner@@YAXPAUs_tag_resource@@J@Z");
//};

//void tag_resource_commit(long, struct s_tag_resource const *)
//{
//    mangled_ppc("?tag_resource_commit@@YAXJPBUs_tag_resource@@@Z");
//};

//bool tag_resource_copy(struct s_tag_resource *, struct s_tag_resource const *)
//{
//    mangled_ppc("?tag_resource_copy@@YA_NPAUs_tag_resource@@PBU1@@Z");
//};

//class c_tag_file_backend_resource_cache_file_datum_handler * tag_resources_get_cache_file_datum_handler(void)
//{
//    mangled_ppc("?tag_resources_get_cache_file_datum_handler@@YAPAVc_tag_file_backend_resource_cache_file_datum_handler@@XZ");
//};

//bool tag_resource_is_tracked_externally_from_tag(struct s_tag_resource const *)
//{
//    mangled_ppc("?tag_resource_is_tracked_externally_from_tag@@YA_NPBUs_tag_resource@@@Z");
//};

//bool tag_resource_untracked_available(struct s_tag_resource const *)
//{
//    mangled_ppc("?tag_resource_untracked_available@@YA_NPBUs_tag_resource@@@Z");
//};

//void * tag_resource_get_untracked_data(struct s_tag_resource const *)
//{
//    mangled_ppc("?tag_resource_get_untracked_data@@YAPAXPBUs_tag_resource@@@Z");
//};

//unsigned long tag_resource_get_tracked_size(struct s_tag_resource const *)
//{
//    mangled_ppc("?tag_resource_get_tracked_size@@YAKPBUs_tag_resource@@@Z");
//};

//void register_tag_for_tracked_resources(long)
//{
//    mangled_ppc("?register_tag_for_tracked_resources@@YAXJ@Z");
//};

//public: void c_tag_resource_runtime_listener_simple::register_tag_resource_owner(long)
//{
//    mangled_ppc("?register_tag_resource_owner@c_tag_resource_runtime_listener_simple@@QAAXJ@Z");
//};

//void unregister_tag_for_tracked_resources(long)
//{
//    mangled_ppc("?unregister_tag_for_tracked_resources@@YAXJ@Z");
//};

//public: void c_tag_resource_runtime_listener_simple::revoke_tag_resource_owner(long)
//{
//    mangled_ppc("?revoke_tag_resource_owner@c_tag_resource_runtime_listener_simple@@QAAXJ@Z");
//};

//long tag_resources_get_global_prediction_owner(void)
//{
//    mangled_ppc("?tag_resources_get_global_prediction_owner@@YAJXZ");
//};

//long tag_resources_allocate_prediction_owner(void)
//{
//    mangled_ppc("?tag_resources_allocate_prediction_owner@@YAJXZ");
//};

//bool tag_resource_describe(struct s_tag_resource const *, class c_wrapped_array<char>)
//{
//    mangled_ppc("?tag_resource_describe@@YA_NPBUs_tag_resource@@V?$c_wrapped_array@D@@@Z");
//};

//bool tag_resources_need_to_predict(void)
//{
//    mangled_ppc("?tag_resources_need_to_predict@@YA_NXZ");
//};

//void tag_resources_set_per_frame_publish(bool)
//{
//    mangled_ppc("?tag_resources_set_per_frame_publish@@YAX_N@Z");
//};

//void tag_resources_set_incremental_publish(bool)
//{
//    mangled_ppc("?tag_resources_set_incremental_publish@@YAX_N@Z");
//};

//void tag_resources_enable_optional_caching(bool)
//{
//    mangled_ppc("?tag_resources_enable_optional_caching@@YAX_N@Z");
//};

//void tag_resources_set_demand_throttle_to_io(bool)
//{
//    mangled_ppc("?tag_resources_set_demand_throttle_to_io@@YAX_N@Z");
//};

//void tag_resources_enable_fast_prediction(bool)
//{
//    mangled_ppc("?tag_resources_enable_fast_prediction@@YAX_N@Z");
//};

//void tag_resources_validate_all_pages(bool)
//{
//    mangled_ppc("?tag_resources_validate_all_pages@@YAX_N@Z");
//};

//void tag_resources_flush_optional_resources(void)
//{
//    mangled_ppc("?tag_resources_flush_optional_resources@@YAXXZ");
//};

//void tag_resources_pump_io(void)
//{
//    mangled_ppc("?tag_resources_pump_io@@YAXXZ");
//};

//bool tag_resource_stream_async(struct s_tag_resource const *, bool, unsigned long, unsigned long, class c_basic_buffer<void>, class c_asynchronous_io_marker *)
//{
//    mangled_ppc("?tag_resource_stream_async@@YA_NPBUs_tag_resource@@_NKKV?$c_basic_buffer@X@@PAVc_asynchronous_io_marker@@@Z");
//};

//unsigned __int64 tag_resource_get_state_snapshot(long)
//{
//    mangled_ppc("?tag_resource_get_state_snapshot@@YA_KJ@Z");
//};

//unsigned __int64 tag_resource_get_state_snapshot(struct s_tag_resource const *)
//{
//    mangled_ppc("?tag_resource_get_state_snapshot@@YA_KPBUs_tag_resource@@@Z");
//};

//bool tag_resource_all_snapshots_valid(unsigned __int64const *, long)
//{
//    mangled_ppc("?tag_resource_all_snapshots_valid@@YA_NPB_KJ@Z");
//};

//void tag_resources_prepare_for_new_map(void)
//{
//    mangled_ppc("?tag_resources_prepare_for_new_map@@YAXXZ");
//};

//class c_basic_buffer<void> tag_resources_try_to_steal_memory(unsigned long)
//{
//    mangled_ppc("?tag_resources_try_to_steal_memory@@YA?AV?$c_basic_buffer@X@@K@Z");
//};

//void tag_resources_return_memory(class c_basic_buffer<void>)
//{
//    mangled_ppc("?tag_resources_return_memory@@YAXV?$c_basic_buffer@X@@@Z");
//};

//public: struct s_data_array * c_smart_data_array<struct c_tag_resource_runtime_listener_simple::s_tag_resource_owner_datum>::operator struct s_data_array *(void) const
//{
//    mangled_ppc("??B?$c_smart_data_array@Us_tag_resource_owner_datum@c_tag_resource_runtime_listener_simple@@@@QBAPAUs_data_array@@XZ");
//};

//public: class c_smart_data_array<struct c_tag_resource_runtime_listener_simple::s_tag_resource_owner_datum> & c_smart_data_array<struct c_tag_resource_runtime_listener_simple::s_tag_resource_owner_datum>::operator=(struct s_data_array *)
//{
//    mangled_ppc("??4?$c_smart_data_array@Us_tag_resource_owner_datum@c_tag_resource_runtime_listener_simple@@@@QAAAAV0@PAUs_data_array@@@Z");
//};

//public: c_wrapped_array<char>::ctor<char>(class c_wrapped_array<char> &)
//{
//    mangled_ppc("??$?0D@?$c_wrapped_array@D@@QAA@AAV0@@Z");
//};

//class c_wrapped_array<unsigned __int64const> make_wrapped_array<unsigned __int64const>(unsigned __int64const *, long)
//{
//    mangled_ppc("??$make_wrapped_array@$$CB_K@@YA?AV?$c_wrapped_array@$$CB_K@@PB_KJ@Z");
//};

//public: c_wrapped_array<unsigned __int64const>::c_wrapped_array<unsigned __int64const>(unsigned __int64const *, long)
//{
//    mangled_ppc("??0?$c_wrapped_array@$$CB_K@@QAA@PB_KJ@Z");
//};

//public: void c_wrapped_array_no_init<unsigned __int64const>::set_elements(unsigned __int64const *, long)
//{
//    mangled_ppc("?set_elements@?$c_wrapped_array_no_init@$$CB_K@@QAAXPB_KJ@Z");
//};

//public: c_tag_resource_runtime_listener_simple::c_tag_resource_runtime_listener_simple(void)
//{
//    mangled_ppc("??0c_tag_resource_runtime_listener_simple@@QAA@XZ");
//};

//public: virtual long c_tag_resource_runtime_listener_simple::lookup_resource_owner(struct s_tag_group const *, char const *)
//{
//    mangled_ppc("?lookup_resource_owner@c_tag_resource_runtime_listener_simple@@UAAJPBUs_tag_group@@PBD@Z");
//};

//public: virtual bool c_tag_resource_runtime_listener_simple::describe_resource_owner(long, struct s_tag_group const **, class c_wrapped_array<char>)
//{
//    mangled_ppc("?describe_resource_owner@c_tag_resource_runtime_listener_simple@@UAA_NJPAPBUs_tag_group@@V?$c_wrapped_array@D@@@Z");
//};

//public: virtual bool c_tag_resource_runtime_listener_simple::register_resource(long, long, struct s_tag_resource_definition const *, void *)
//{
//    mangled_ppc("?register_resource@c_tag_resource_runtime_listener_simple@@UAA_NJJPBUs_tag_resource_definition@@PAX@Z");
//};

//public: virtual void c_tag_resource_runtime_listener_simple::unregister_resource(long, long, struct s_tag_resource_definition const *, void *)
//{
//    mangled_ppc("?unregister_resource@c_tag_resource_runtime_listener_simple@@UAAXJJPBUs_tag_resource_definition@@PAX@Z");
//};

//public: virtual bool c_tag_resource_runtime_listener_simple::resource_owner_is_reloading(long)
//{
//    mangled_ppc("?resource_owner_is_reloading@c_tag_resource_runtime_listener_simple@@UAA_NJ@Z");
//};

//public: virtual class c_tag_resource_runtime_active_set * c_tag_resource_runtime_listener_simple::get_resource_active_set_dont_cache(void)
//{
//    mangled_ppc("?get_resource_active_set_dont_cache@c_tag_resource_runtime_listener_simple@@UAAPAVc_tag_resource_runtime_active_set@@XZ");
//};

//public: c_tag_resource_runtime_listener::c_tag_resource_runtime_listener(void)
//{
//    mangled_ppc("??0c_tag_resource_runtime_listener@@QAA@XZ");
//};

//public: c_tag_resource_prediction_atom_generator_simple::c_tag_resource_prediction_atom_generator_simple(void)
//{
//    mangled_ppc("??0c_tag_resource_prediction_atom_generator_simple@@QAA@XZ");
//};

//public: c_tag_resource_prediction_atom_generator::c_tag_resource_prediction_atom_generator(void)
//{
//    mangled_ppc("??0c_tag_resource_prediction_atom_generator@@QAA@XZ");
//};

//public: c_tag_resource_debug_memory_usage::c_tag_resource_debug_memory_usage(void)
//{
//    mangled_ppc("??0c_tag_resource_debug_memory_usage@@QAA@XZ");
//};

