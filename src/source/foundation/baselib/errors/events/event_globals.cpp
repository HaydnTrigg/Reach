/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// private: static long const c_event_buffer::k_event_buffer_max_entries; // "?k_event_buffer_max_entries@c_event_buffer@@0JB"
// private: static long const c_event_buffer::k_event_buffer_size; // "?k_event_buffer_size@c_event_buffer@@0JB"
// public: static long const s_static_array<struct s_event_buffer_entry, 128>::k_element_count; // "?k_element_count@?$s_static_array@Us_event_buffer_entry@@$0IA@@@2JB"
// public: static long const s_static_array<char, 65536>::k_element_count; // "?k_element_count@?$s_static_array@D$0BAAAA@@@2JB"
// private: static long const c_event_thread_context::k_stack_maximum_depth; // "?k_stack_maximum_depth@c_event_thread_context@@0JB"
// public: static long const s_static_array<struct c_event_thread_context::s_stack_entry, 32>::k_element_count; // "?k_element_count@?$s_static_array@Us_stack_entry@c_event_thread_context@@$0CA@@@2JB"
// public: static long const s_static_array<class c_file_path, 32>::k_element_count; // "?k_element_count@?$s_static_array@Vc_file_path@@$0CA@@@2JB"
// char const *const k_primary_event_log_filename; // "?k_primary_event_log_filename@@3PBDB"
// char const *const k_primary_full_event_log_filename; // "?k_primary_full_event_log_filename@@3PBDB"
// char const *const k_error_snapshot_directory; // "?k_error_snapshot_directory@@3PBDB"
// char const *const k_thrown_away_events_log_file_name_format_string_with_id; // "?k_thrown_away_events_log_file_name_format_string_with_id@@3PBDB"
// char const *const k_thrown_away_events_log_file_name_format_string_with_name; // "?k_thrown_away_events_log_file_name_format_string_with_name@@3PBDB"
// char const *const k_thrown_away_events_log_file_name_search_spec; // "?k_thrown_away_events_log_file_name_search_spec@@3PBDB"
// char const **k_event_level_severity_strings; // "?k_event_level_severity_strings@@3PAPBDA"

// void events_initialize(long, struct s_event_category_default_configuration const *);
// void events_start_threads(class c_event_log_thread_interface *);
// void events_dispose(void);
// void events_dump_categories(char const *);
// public: c_category_output_dump_visitor::c_category_output_dump_visitor(void);
// public: c_event_category_visitor::c_event_category_visitor(void);
// void events_build_correct_category_name(char const *, char *, long);
// void events_set_output_level_global(enum e_event_level);
// void events_set_log_level_global(enum e_event_level);
// void events_set_debug_level_global(enum e_event_level);
// void events_set_datamine_level_global(enum e_event_level);
// void events_set_output_level_by_name(char const *, enum e_event_level);
// void events_set_log_level_by_name(char const *, enum e_event_level);
// void events_set_debug_level_by_name(char const *, enum e_event_level);
// void events_set_debugger_break_level_by_name(char const *, enum e_event_level);
// void events_set_halt_level_by_name(char const *, enum e_event_level);
// void events_set_datamine_level_by_name(char const *, enum e_event_level);
// void events_set_force_output_level_by_name(char const *, enum e_event_level);
// bool events_register_listener(class c_event_listener *);
// void events_unregister_listener(class c_event_listener *);
// ?events_attach_datamine_handler@@YAXQ6AXW4e_event_level@@PBD1PAD@Z@Z;
// ?events_detach_datamine_handler@@YAXQ6AXW4e_event_level@@PBD1PAD@Z@Z;
// ?events_attach_time_format_function@@YAXQ6AXJPAD@Z@Z;
// ?events_detach_time_format_function@@YAXQ6AXJPAD@Z@Z;
// ?events_attach_blocking_functions@@YAXQ6AXXZ0@Z;
// ?events_detach_blocking_functions@@YAXQ6AXXZ0@Z;
// ?events_attach_guard_functions@@YAXQ6AXXZ0@Z;
// ?events_detach_guard_functions@@YAXQ6AXXZ0@Z;
// void events_enable(bool);
// public: void c_event_manager::set_events_enabled(bool);
// void events_suppression_enable(bool);
// public: void c_event_manager::set_event_suppression_enabled(bool);
// void events_spam_suppression_enable(bool);
// public: void c_event_manager::set_spam_suppression_enabled(bool);
// void events_suppress_output(bool);
// public: void c_event_manager::set_output_suppression_enabled(bool);
// long events_get_recent(long, long, char *);
// void events_internal_error(char const *, ...);
// void events_disable_thread_push(void);
// void events_disable_thread_pop(void);
// bool events_disabled_thread(void);
// void events_blocking_begin(void);
// void events_blocking_end(void);
// class c_event_thread_context * events_thread_context_get(void);
// void events_clear(void);
// void events_flush(void);
// void events_snapshot(void);
// long events_build_snapshot_files(long, class c_file_path *);
// long events_get_spamming(long, char const **);
// bool events_get_output_suppressed(void);
// public: bool c_event_manager::get_output_suppression_enabled(void) const;
// bool events_get_current_desired_output(void);
// void events_get_synchronization_objects(struct s_event_synchronization_objects *);
// void events_set_subfolder(char const *);
// bool events_get_subfolder(long, char *);
// bool events_build_report_file_path(char const *, enum e_report_file_location, class c_file_path *);
// void events_force_emergency_redirection_thread_push(void);
// void events_force_emergency_redirection_thread_pop(void);
// bool events_should_use_emergency_redirection_for_thread(void);
// public: c_event_manager_read_lock::c_event_manager_read_lock(void);
// public: c_event_manager_read_lock::~c_event_manager_read_lock(void);
// public: class c_event_manager const * c_event_manager_read_lock::manager(void);
// public: c_event_manager_write_lock::c_event_manager_write_lock(void);
// public: c_event_manager_write_lock::~c_event_manager_write_lock(void);
// public: class c_event_manager * c_event_manager_write_lock::manager(void);
// public: c_event_buffer_read_lock::c_event_buffer_read_lock(void);
// public: c_event_buffer_read_lock::~c_event_buffer_read_lock(void);
// public: class c_event_buffer const * c_event_buffer_read_lock::buffer(void);
// public: c_event_buffer_write_lock::c_event_buffer_write_lock(void);
// public: c_event_buffer_write_lock::~c_event_buffer_write_lock(void);
// public: class c_event_buffer * c_event_buffer_write_lock::buffer(void);
// public: virtual void c_category_output_dump_visitor::visit_category(class c_event_manager const *, enum e_event_category, struct s_event_category const *);
// public: c_category_category_set_level_visitor::c_category_category_set_level_visitor(char const *, char const *);
// public: virtual void c_category_category_set_level_visitor::visit_category(class c_event_manager const *, enum e_event_category, struct s_event_category const *);
// public: void c_category_category_set_level_visitor::print_summary(void);
// public: c_event_handler_instance::c_event_handler_instance(void);
// public: c_event_handler::c_event_handler(void);
// public: c_event_handler_instance::~c_event_handler_instance(void);
// public: virtual bool c_event_handler_instance::event_level_query(enum e_event_level);
// public: virtual bool c_event_handler_instance::event_query(struct s_event_properties const *);
// public: virtual long c_event_handler_instance::event_process(struct s_event_properties const *, char const *, char *);
// public: virtual void c_event_handler_instance::store_category(long, long volatile *);
// public: virtual void c_event_handler_instance::context_push(char const *, unsigned long, char const *);
// public: virtual void c_event_handler_instance::context_pop(void);
// bool events_try_to_initialize(void);
// public: bool c_event_manager::get_log_trimming_enabled(void) const;
// public: void c_event_manager::set_log_trimming_enabled(bool);
// public: void c_event_manager::set_logs_enabled(bool);
// enum e_event_log_index event_manager_log_creator_function(char const *);
// void events_set_category_level_by_name_internal(char const *, enum e_event_level, enum e_event_manager_category_set_level, char const *);
// enum e_event_category event_generate_internal(enum e_event_level, enum e_event_category, class c_flags_zero_init<enum e_event_generation_flags, unsigned long, 1>, char const *, char *);
// void event_dispatch_output(enum e_event_level, class s_static_string<2048> const *, struct s_event_response const *);
// void event_dispatch_log(enum e_event_level, class s_static_string<2048> const *, struct s_event_response const *);
// void event_dispatch_debug(enum e_event_level, class s_static_string<2048> const *, struct s_event_response const *);
// void event_dispatch_datamine(enum e_event_level, char const *, char *);
// void event_dispatch_debugger_break(class s_static_string<2048> const *);
// void event_dispatch_halt(class s_static_string<2048> const *);
// void event_dispatch_listeners(enum e_event_level, class s_static_string<2048> const *, struct s_event_response const *);
// void event_generate_handle_recursion(enum e_event_level, enum e_event_category, class c_flags_zero_init<enum e_event_generation_flags, unsigned long, 1>, char const *, char *);
// void event_cache_global_settings(class c_event_manager const *);
// void event_format_for_log(enum e_event_level, class s_static_string<2048> const *, struct s_event_response const *, class s_static_string<2048> const *, class s_static_string<256> const *, class s_static_string<2048> *);
// bool events_copy_file_to_snapshot(class c_file_path const *, class c_file_path const *, class c_file_path *);
// void event_build_lost_events_file_name_for_current_thread(class s_static_string<256> *);
// public: void s_static_array<enum e_event_log_index, 5>::set_all(enum e_event_log_index const &);
// public: static long s_static_array<class c_event_listener *, 8>::get_count(void);
// public: c_flags_zero_init<enum e_event_generation_flags, unsigned long, 1>::c_flags_zero_init<enum e_event_generation_flags, unsigned long, 1>(void);
// public: bool c_static_stack<class c_file_path, 66>::full(void) const;
// public: long c_static_stack<class c_file_path, 66>::count(void) const;
// public: static unsigned int c_static_stack<class c_file_path, 66>::element_size(void);
// public: long c_static_stack<class c_file_path, 66>::push(void);
// public: class c_file_path * c_static_stack<class c_file_path, 66>::get_elements(void);
// public: class c_file_path * c_static_stack<class c_file_path, 66>::get_next(void);
// public: c_static_stack<class c_file_path, 66>::c_static_stack<class c_file_path, 66>(void);
// public: class c_file_path * s_static_array<class c_file_path, 32>::get_elements(void);
// public: static long s_static_array<class c_file_path, 32>::get_count(void);
// public: long c_static_stack<enum e_event_log_index, 6>::count(void) const;
// public: void c_static_stack<enum e_event_log_index, 6>::push_back(enum e_event_log_index const &);
// public: enum e_event_log_index * c_static_stack<enum e_event_log_index, 6>::get_elements(void);
// public: c_static_stack<enum e_event_log_index, 6>::c_static_stack<enum e_event_log_index, 6>(void);
// public: bool c_static_stack<class c_file_path, 66>::valid(void) const;
// public: long c_static_stack<class c_file_path, 66>::next(void) const;
// public: long c_static_stack<enum e_event_log_index, 6>::push(void);
// public: enum e_event_log_index * c_static_stack<enum e_event_log_index, 6>::get(long);
// public: bool c_static_stack<enum e_event_log_index, 6>::valid(long) const;
// public: bool c_static_stack<enum e_event_log_index, 6>::full(void) const;
// public: bool c_static_stack<enum e_event_log_index, 6>::valid(void) const;
// public: void s_static_string<2048>::clear(void);
// public: char const * s_static_string<2048>::append(char const *);
// public: char const * s_static_string<2048>::print(char const *, ...);
// public: void s_static_string<2048>::print_va(char const *, char *);
// public: char const * s_static_string<2048>::operator char const *(void) const;
// public: bool s_flags<enum e_event_response_flags, unsigned long, 8>::test(enum e_event_response_flags) const;
// public: bool s_flags<enum e_event_response_flags, unsigned long, 8>::is_empty(void) const;
// public: void s_flags<enum e_event_generation_flags, unsigned long, 1>::clear(void);
// public: void s_flags<enum e_event_generation_flags, unsigned long, 1>::set_unsafe(unsigned long);
// public: class c_file_path & s_static_array<class c_file_path, 32>::operator[]<long>(long);
// public: void s_flags<enum e_find_files_flags, unsigned long, 3>::clear(void);
// public: struct s_critical_section & s_static_array<struct s_critical_section, 2>::operator[]<int>(int);
// public: struct s_semaphore & s_static_array<struct s_semaphore, 2>::operator[]<int>(int);
// public: void s_flags<enum e_event_log_flags, unsigned long, 5>::clear(void);
// public: void s_flags<enum e_event_log_flags, unsigned long, 5>::set(enum e_event_log_flags, bool);
// public: enum e_event_log_index const & s_static_array<enum e_event_log_index, 5>::operator[]<enum e_event_manager_tracked_log>(enum e_event_manager_tracked_log) const;
// public: class c_event_listener *const & s_static_array<class c_event_listener *, 8>::operator[]<long>(long) const;
// public: char * c_file_path::get_filename<256>(class s_static_string<256> *) const;
// public: char * c_file_path::get_filename(char *, long) const;
// public: static bool s_flags<enum e_event_response_flags, unsigned long, 8>::valid_bit(enum e_event_response_flags);
// private: static unsigned long s_flags<enum e_event_response_flags, unsigned long, 8>::flag_size_type(enum e_event_response_flags);
// private: static unsigned long s_flags<enum e_event_response_flags, unsigned long, 8>::make_mask_with_all_valid_bits_on_size_type(void);
// public: bool s_flags<enum e_event_generation_flags, unsigned long, 1>::valid(void) const;
// public: static bool s_static_array<class c_file_path, 32>::valid<long>(long);
// public: static bool s_static_array<struct s_critical_section, 2>::valid<int>(int);
// public: static bool s_static_array<struct s_semaphore, 2>::valid<int>(int);
// public: static bool s_flags<enum e_event_log_flags, unsigned long, 5>::valid_bit(enum e_event_log_flags);
// public: bool s_flags<enum e_event_log_flags, unsigned long, 5>::valid(void) const;
// private: static unsigned long s_flags<enum e_event_log_flags, unsigned long, 5>::flag_size_type(enum e_event_log_flags);
// public: static bool s_static_array<enum e_event_log_index, 5>::valid<enum e_event_manager_tracked_log>(enum e_event_manager_tracked_log);
// public: static bool s_static_array<class c_event_listener *, 8>::valid<long>(long);
// private: static unsigned long s_flags<enum e_event_response_flags, unsigned long, 8>::make_N_bit_mask_size_type(enum e_event_response_flags);
// private: static unsigned long s_flags<enum e_event_generation_flags, unsigned long, 1>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned long s_flags<enum e_event_log_flags, unsigned long, 5>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned long s_flags<enum e_event_generation_flags, unsigned long, 1>::make_N_bit_mask_size_type(enum e_event_generation_flags);
// private: static unsigned long s_flags<enum e_event_log_flags, unsigned long, 5>::make_N_bit_mask_size_type(enum e_event_log_flags);
// public: s_event_globals::s_event_globals(void);
// public: c_event_manager::c_event_manager(void);
// public: c_static_stack<struct s_event_category, 1024>::c_static_stack<struct s_event_category, 1024>(void);
// public: s_event_globals::~s_event_globals(void);
// void g_event_handler::`dynamic atexit destructor'(void);
// void g_event_globals::`dynamic atexit destructor'(void);

//void events_initialize(long, struct s_event_category_default_configuration const *)
//{
//    mangled_ppc("?events_initialize@@YAXJPBUs_event_category_default_configuration@@@Z");
//};

//void events_start_threads(class c_event_log_thread_interface *)
//{
//    mangled_ppc("?events_start_threads@@YAXPAVc_event_log_thread_interface@@@Z");
//};

//void events_dispose(void)
//{
//    mangled_ppc("?events_dispose@@YAXXZ");
//};

//void events_dump_categories(char const *)
//{
//    mangled_ppc("?events_dump_categories@@YAXPBD@Z");
//};

//public: c_category_output_dump_visitor::c_category_output_dump_visitor(void)
//{
//    mangled_ppc("??0c_category_output_dump_visitor@@QAA@XZ");
//};

//public: c_event_category_visitor::c_event_category_visitor(void)
//{
//    mangled_ppc("??0c_event_category_visitor@@QAA@XZ");
//};

//void events_build_correct_category_name(char const *, char *, long)
//{
//    mangled_ppc("?events_build_correct_category_name@@YAXPBDPADJ@Z");
//};

//void events_set_output_level_global(enum e_event_level)
//{
//    mangled_ppc("?events_set_output_level_global@@YAXW4e_event_level@@@Z");
//};

//void events_set_log_level_global(enum e_event_level)
//{
//    mangled_ppc("?events_set_log_level_global@@YAXW4e_event_level@@@Z");
//};

//void events_set_debug_level_global(enum e_event_level)
//{
//    mangled_ppc("?events_set_debug_level_global@@YAXW4e_event_level@@@Z");
//};

//void events_set_datamine_level_global(enum e_event_level)
//{
//    mangled_ppc("?events_set_datamine_level_global@@YAXW4e_event_level@@@Z");
//};

//void events_set_output_level_by_name(char const *, enum e_event_level)
//{
//    mangled_ppc("?events_set_output_level_by_name@@YAXPBDW4e_event_level@@@Z");
//};

//void events_set_log_level_by_name(char const *, enum e_event_level)
//{
//    mangled_ppc("?events_set_log_level_by_name@@YAXPBDW4e_event_level@@@Z");
//};

//void events_set_debug_level_by_name(char const *, enum e_event_level)
//{
//    mangled_ppc("?events_set_debug_level_by_name@@YAXPBDW4e_event_level@@@Z");
//};

//void events_set_debugger_break_level_by_name(char const *, enum e_event_level)
//{
//    mangled_ppc("?events_set_debugger_break_level_by_name@@YAXPBDW4e_event_level@@@Z");
//};

//void events_set_halt_level_by_name(char const *, enum e_event_level)
//{
//    mangled_ppc("?events_set_halt_level_by_name@@YAXPBDW4e_event_level@@@Z");
//};

//void events_set_datamine_level_by_name(char const *, enum e_event_level)
//{
//    mangled_ppc("?events_set_datamine_level_by_name@@YAXPBDW4e_event_level@@@Z");
//};

//void events_set_force_output_level_by_name(char const *, enum e_event_level)
//{
//    mangled_ppc("?events_set_force_output_level_by_name@@YAXPBDW4e_event_level@@@Z");
//};

//bool events_register_listener(class c_event_listener *)
//{
//    mangled_ppc("?events_register_listener@@YA_NPAVc_event_listener@@@Z");
//};

//void events_unregister_listener(class c_event_listener *)
//{
//    mangled_ppc("?events_unregister_listener@@YAXPAVc_event_listener@@@Z");
//};

//?events_attach_datamine_handler@@YAXQ6AXW4e_event_level@@PBD1PAD@Z@Z
//{
//    mangled_ppc("?events_attach_datamine_handler@@YAXQ6AXW4e_event_level@@PBD1PAD@Z@Z");
//};

//?events_detach_datamine_handler@@YAXQ6AXW4e_event_level@@PBD1PAD@Z@Z
//{
//    mangled_ppc("?events_detach_datamine_handler@@YAXQ6AXW4e_event_level@@PBD1PAD@Z@Z");
//};

//?events_attach_time_format_function@@YAXQ6AXJPAD@Z@Z
//{
//    mangled_ppc("?events_attach_time_format_function@@YAXQ6AXJPAD@Z@Z");
//};

//?events_detach_time_format_function@@YAXQ6AXJPAD@Z@Z
//{
//    mangled_ppc("?events_detach_time_format_function@@YAXQ6AXJPAD@Z@Z");
//};

//?events_attach_blocking_functions@@YAXQ6AXXZ0@Z
//{
//    mangled_ppc("?events_attach_blocking_functions@@YAXQ6AXXZ0@Z");
//};

//?events_detach_blocking_functions@@YAXQ6AXXZ0@Z
//{
//    mangled_ppc("?events_detach_blocking_functions@@YAXQ6AXXZ0@Z");
//};

//?events_attach_guard_functions@@YAXQ6AXXZ0@Z
//{
//    mangled_ppc("?events_attach_guard_functions@@YAXQ6AXXZ0@Z");
//};

//?events_detach_guard_functions@@YAXQ6AXXZ0@Z
//{
//    mangled_ppc("?events_detach_guard_functions@@YAXQ6AXXZ0@Z");
//};

//void events_enable(bool)
//{
//    mangled_ppc("?events_enable@@YAX_N@Z");
//};

//public: void c_event_manager::set_events_enabled(bool)
//{
//    mangled_ppc("?set_events_enabled@c_event_manager@@QAAX_N@Z");
//};

//void events_suppression_enable(bool)
//{
//    mangled_ppc("?events_suppression_enable@@YAX_N@Z");
//};

//public: void c_event_manager::set_event_suppression_enabled(bool)
//{
//    mangled_ppc("?set_event_suppression_enabled@c_event_manager@@QAAX_N@Z");
//};

//void events_spam_suppression_enable(bool)
//{
//    mangled_ppc("?events_spam_suppression_enable@@YAX_N@Z");
//};

//public: void c_event_manager::set_spam_suppression_enabled(bool)
//{
//    mangled_ppc("?set_spam_suppression_enabled@c_event_manager@@QAAX_N@Z");
//};

//void events_suppress_output(bool)
//{
//    mangled_ppc("?events_suppress_output@@YAX_N@Z");
//};

//public: void c_event_manager::set_output_suppression_enabled(bool)
//{
//    mangled_ppc("?set_output_suppression_enabled@c_event_manager@@QAAX_N@Z");
//};

//long events_get_recent(long, long, char *)
//{
//    mangled_ppc("?events_get_recent@@YAJJJPAD@Z");
//};

//void events_internal_error(char const *, ...)
//{
//    mangled_ppc("?events_internal_error@@YAXPBDZZ");
//};

//void events_disable_thread_push(void)
//{
//    mangled_ppc("?events_disable_thread_push@@YAXXZ");
//};

//void events_disable_thread_pop(void)
//{
//    mangled_ppc("?events_disable_thread_pop@@YAXXZ");
//};

//bool events_disabled_thread(void)
//{
//    mangled_ppc("?events_disabled_thread@@YA_NXZ");
//};

//void events_blocking_begin(void)
//{
//    mangled_ppc("?events_blocking_begin@@YAXXZ");
//};

//void events_blocking_end(void)
//{
//    mangled_ppc("?events_blocking_end@@YAXXZ");
//};

//class c_event_thread_context * events_thread_context_get(void)
//{
//    mangled_ppc("?events_thread_context_get@@YAPAVc_event_thread_context@@XZ");
//};

//void events_clear(void)
//{
//    mangled_ppc("?events_clear@@YAXXZ");
//};

//void events_flush(void)
//{
//    mangled_ppc("?events_flush@@YAXXZ");
//};

//void events_snapshot(void)
//{
//    mangled_ppc("?events_snapshot@@YAXXZ");
//};

//long events_build_snapshot_files(long, class c_file_path *)
//{
//    mangled_ppc("?events_build_snapshot_files@@YAJJPAVc_file_path@@@Z");
//};

//long events_get_spamming(long, char const **)
//{
//    mangled_ppc("?events_get_spamming@@YAJJPAPBD@Z");
//};

//bool events_get_output_suppressed(void)
//{
//    mangled_ppc("?events_get_output_suppressed@@YA_NXZ");
//};

//public: bool c_event_manager::get_output_suppression_enabled(void) const
//{
//    mangled_ppc("?get_output_suppression_enabled@c_event_manager@@QBA_NXZ");
//};

//bool events_get_current_desired_output(void)
//{
//    mangled_ppc("?events_get_current_desired_output@@YA_NXZ");
//};

//void events_get_synchronization_objects(struct s_event_synchronization_objects *)
//{
//    mangled_ppc("?events_get_synchronization_objects@@YAXPAUs_event_synchronization_objects@@@Z");
//};

//void events_set_subfolder(char const *)
//{
//    mangled_ppc("?events_set_subfolder@@YAXPBD@Z");
//};

//bool events_get_subfolder(long, char *)
//{
//    mangled_ppc("?events_get_subfolder@@YA_NJPAD@Z");
//};

//bool events_build_report_file_path(char const *, enum e_report_file_location, class c_file_path *)
//{
//    mangled_ppc("?events_build_report_file_path@@YA_NPBDW4e_report_file_location@@PAVc_file_path@@@Z");
//};

//void events_force_emergency_redirection_thread_push(void)
//{
//    mangled_ppc("?events_force_emergency_redirection_thread_push@@YAXXZ");
//};

//void events_force_emergency_redirection_thread_pop(void)
//{
//    mangled_ppc("?events_force_emergency_redirection_thread_pop@@YAXXZ");
//};

//bool events_should_use_emergency_redirection_for_thread(void)
//{
//    mangled_ppc("?events_should_use_emergency_redirection_for_thread@@YA_NXZ");
//};

//public: c_event_manager_read_lock::c_event_manager_read_lock(void)
//{
//    mangled_ppc("??0c_event_manager_read_lock@@QAA@XZ");
//};

//public: c_event_manager_read_lock::~c_event_manager_read_lock(void)
//{
//    mangled_ppc("??1c_event_manager_read_lock@@QAA@XZ");
//};

//public: class c_event_manager const * c_event_manager_read_lock::manager(void)
//{
//    mangled_ppc("?manager@c_event_manager_read_lock@@QAAPBVc_event_manager@@XZ");
//};

//public: c_event_manager_write_lock::c_event_manager_write_lock(void)
//{
//    mangled_ppc("??0c_event_manager_write_lock@@QAA@XZ");
//};

//public: c_event_manager_write_lock::~c_event_manager_write_lock(void)
//{
//    mangled_ppc("??1c_event_manager_write_lock@@QAA@XZ");
//};

//public: class c_event_manager * c_event_manager_write_lock::manager(void)
//{
//    mangled_ppc("?manager@c_event_manager_write_lock@@QAAPAVc_event_manager@@XZ");
//};

//public: c_event_buffer_read_lock::c_event_buffer_read_lock(void)
//{
//    mangled_ppc("??0c_event_buffer_read_lock@@QAA@XZ");
//};

//public: c_event_buffer_read_lock::~c_event_buffer_read_lock(void)
//{
//    mangled_ppc("??1c_event_buffer_read_lock@@QAA@XZ");
//};

//public: class c_event_buffer const * c_event_buffer_read_lock::buffer(void)
//{
//    mangled_ppc("?buffer@c_event_buffer_read_lock@@QAAPBVc_event_buffer@@XZ");
//};

//public: c_event_buffer_write_lock::c_event_buffer_write_lock(void)
//{
//    mangled_ppc("??0c_event_buffer_write_lock@@QAA@XZ");
//};

//public: c_event_buffer_write_lock::~c_event_buffer_write_lock(void)
//{
//    mangled_ppc("??1c_event_buffer_write_lock@@QAA@XZ");
//};

//public: class c_event_buffer * c_event_buffer_write_lock::buffer(void)
//{
//    mangled_ppc("?buffer@c_event_buffer_write_lock@@QAAPAVc_event_buffer@@XZ");
//};

//public: virtual void c_category_output_dump_visitor::visit_category(class c_event_manager const *, enum e_event_category, struct s_event_category const *)
//{
//    mangled_ppc("?visit_category@c_category_output_dump_visitor@@UAAXPBVc_event_manager@@W4e_event_category@@PBUs_event_category@@@Z");
//};

//public: c_category_category_set_level_visitor::c_category_category_set_level_visitor(char const *, char const *)
//{
//    mangled_ppc("??0c_category_category_set_level_visitor@@QAA@PBD0@Z");
//};

//public: virtual void c_category_category_set_level_visitor::visit_category(class c_event_manager const *, enum e_event_category, struct s_event_category const *)
//{
//    mangled_ppc("?visit_category@c_category_category_set_level_visitor@@UAAXPBVc_event_manager@@W4e_event_category@@PBUs_event_category@@@Z");
//};

//public: void c_category_category_set_level_visitor::print_summary(void)
//{
//    mangled_ppc("?print_summary@c_category_category_set_level_visitor@@QAAXXZ");
//};

//public: c_event_handler_instance::c_event_handler_instance(void)
//{
//    mangled_ppc("??0c_event_handler_instance@@QAA@XZ");
//};

//public: c_event_handler::c_event_handler(void)
//{
//    mangled_ppc("??0c_event_handler@@QAA@XZ");
//};

//public: c_event_handler_instance::~c_event_handler_instance(void)
//{
//    mangled_ppc("??1c_event_handler_instance@@QAA@XZ");
//};

//public: virtual bool c_event_handler_instance::event_level_query(enum e_event_level)
//{
//    mangled_ppc("?event_level_query@c_event_handler_instance@@UAA_NW4e_event_level@@@Z");
//};

//public: virtual bool c_event_handler_instance::event_query(struct s_event_properties const *)
//{
//    mangled_ppc("?event_query@c_event_handler_instance@@UAA_NPBUs_event_properties@@@Z");
//};

//public: virtual long c_event_handler_instance::event_process(struct s_event_properties const *, char const *, char *)
//{
//    mangled_ppc("?event_process@c_event_handler_instance@@UAAJPBUs_event_properties@@PBDPAD@Z");
//};

//public: virtual void c_event_handler_instance::store_category(long, long volatile *)
//{
//    mangled_ppc("?store_category@c_event_handler_instance@@UAAXJPCJ@Z");
//};

//public: virtual void c_event_handler_instance::context_push(char const *, unsigned long, char const *)
//{
//    mangled_ppc("?context_push@c_event_handler_instance@@UAAXPBDK0@Z");
//};

//public: virtual void c_event_handler_instance::context_pop(void)
//{
//    mangled_ppc("?context_pop@c_event_handler_instance@@UAAXXZ");
//};

//bool events_try_to_initialize(void)
//{
//    mangled_ppc("?events_try_to_initialize@@YA_NXZ");
//};

//public: bool c_event_manager::get_log_trimming_enabled(void) const
//{
//    mangled_ppc("?get_log_trimming_enabled@c_event_manager@@QBA_NXZ");
//};

//public: void c_event_manager::set_log_trimming_enabled(bool)
//{
//    mangled_ppc("?set_log_trimming_enabled@c_event_manager@@QAAX_N@Z");
//};

//public: void c_event_manager::set_logs_enabled(bool)
//{
//    mangled_ppc("?set_logs_enabled@c_event_manager@@QAAX_N@Z");
//};

//enum e_event_log_index event_manager_log_creator_function(char const *)
//{
//    mangled_ppc("?event_manager_log_creator_function@@YA?AW4e_event_log_index@@PBD@Z");
//};

//void events_set_category_level_by_name_internal(char const *, enum e_event_level, enum e_event_manager_category_set_level, char const *)
//{
//    mangled_ppc("?events_set_category_level_by_name_internal@@YAXPBDW4e_event_level@@W4e_event_manager_category_set_level@@0@Z");
//};

//enum e_event_category event_generate_internal(enum e_event_level, enum e_event_category, class c_flags_zero_init<enum e_event_generation_flags, unsigned long, 1>, char const *, char *)
//{
//    mangled_ppc("?event_generate_internal@@YA?AW4e_event_category@@W4e_event_level@@W41@V?$c_flags_zero_init@W4e_event_generation_flags@@K$00@@PBDPAD@Z");
//};

//void event_dispatch_output(enum e_event_level, class s_static_string<2048> const *, struct s_event_response const *)
//{
//    mangled_ppc("?event_dispatch_output@@YAXW4e_event_level@@PBV?$s_static_string@$0IAA@@@PBUs_event_response@@@Z");
//};

//void event_dispatch_log(enum e_event_level, class s_static_string<2048> const *, struct s_event_response const *)
//{
//    mangled_ppc("?event_dispatch_log@@YAXW4e_event_level@@PBV?$s_static_string@$0IAA@@@PBUs_event_response@@@Z");
//};

//void event_dispatch_debug(enum e_event_level, class s_static_string<2048> const *, struct s_event_response const *)
//{
//    mangled_ppc("?event_dispatch_debug@@YAXW4e_event_level@@PBV?$s_static_string@$0IAA@@@PBUs_event_response@@@Z");
//};

//void event_dispatch_datamine(enum e_event_level, char const *, char *)
//{
//    mangled_ppc("?event_dispatch_datamine@@YAXW4e_event_level@@PBDPAD@Z");
//};

//void event_dispatch_debugger_break(class s_static_string<2048> const *)
//{
//    mangled_ppc("?event_dispatch_debugger_break@@YAXPBV?$s_static_string@$0IAA@@@@Z");
//};

//void event_dispatch_halt(class s_static_string<2048> const *)
//{
//    mangled_ppc("?event_dispatch_halt@@YAXPBV?$s_static_string@$0IAA@@@@Z");
//};

//void event_dispatch_listeners(enum e_event_level, class s_static_string<2048> const *, struct s_event_response const *)
//{
//    mangled_ppc("?event_dispatch_listeners@@YAXW4e_event_level@@PBV?$s_static_string@$0IAA@@@PBUs_event_response@@@Z");
//};

//void event_generate_handle_recursion(enum e_event_level, enum e_event_category, class c_flags_zero_init<enum e_event_generation_flags, unsigned long, 1>, char const *, char *)
//{
//    mangled_ppc("?event_generate_handle_recursion@@YAXW4e_event_level@@W4e_event_category@@V?$c_flags_zero_init@W4e_event_generation_flags@@K$00@@PBDPAD@Z");
//};

//void event_cache_global_settings(class c_event_manager const *)
//{
//    mangled_ppc("?event_cache_global_settings@@YAXPBVc_event_manager@@@Z");
//};

//void event_format_for_log(enum e_event_level, class s_static_string<2048> const *, struct s_event_response const *, class s_static_string<2048> const *, class s_static_string<256> const *, class s_static_string<2048> *)
//{
//    mangled_ppc("?event_format_for_log@@YAXW4e_event_level@@PBV?$s_static_string@$0IAA@@@PBUs_event_response@@1PBV?$s_static_string@$0BAA@@@PAV2@@Z");
//};

//bool events_copy_file_to_snapshot(class c_file_path const *, class c_file_path const *, class c_file_path *)
//{
//    mangled_ppc("?events_copy_file_to_snapshot@@YA_NPBVc_file_path@@0PAV1@@Z");
//};

//void event_build_lost_events_file_name_for_current_thread(class s_static_string<256> *)
//{
//    mangled_ppc("?event_build_lost_events_file_name_for_current_thread@@YAXPAV?$s_static_string@$0BAA@@@@Z");
//};

//public: void s_static_array<enum e_event_log_index, 5>::set_all(enum e_event_log_index const &)
//{
//    mangled_ppc("?set_all@?$s_static_array@W4e_event_log_index@@$04@@QAAXABW4e_event_log_index@@@Z");
//};

//public: static long s_static_array<class c_event_listener *, 8>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@PAVc_event_listener@@$07@@SAJXZ");
//};

//public: c_flags_zero_init<enum e_event_generation_flags, unsigned long, 1>::c_flags_zero_init<enum e_event_generation_flags, unsigned long, 1>(void)
//{
//    mangled_ppc("??0?$c_flags_zero_init@W4e_event_generation_flags@@K$00@@QAA@XZ");
//};

//public: bool c_static_stack<class c_file_path, 66>::full(void) const
//{
//    mangled_ppc("?full@?$c_static_stack@Vc_file_path@@$0EC@@@QBA_NXZ");
//};

//public: long c_static_stack<class c_file_path, 66>::count(void) const
//{
//    mangled_ppc("?count@?$c_static_stack@Vc_file_path@@$0EC@@@QBAJXZ");
//};

//public: static unsigned int c_static_stack<class c_file_path, 66>::element_size(void)
//{
//    mangled_ppc("?element_size@?$c_static_stack@Vc_file_path@@$0EC@@@SAIXZ");
//};

//public: long c_static_stack<class c_file_path, 66>::push(void)
//{
//    mangled_ppc("?push@?$c_static_stack@Vc_file_path@@$0EC@@@QAAJXZ");
//};

//public: class c_file_path * c_static_stack<class c_file_path, 66>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$c_static_stack@Vc_file_path@@$0EC@@@QAAPAVc_file_path@@XZ");
//};

//public: class c_file_path * c_static_stack<class c_file_path, 66>::get_next(void)
//{
//    mangled_ppc("?get_next@?$c_static_stack@Vc_file_path@@$0EC@@@QAAPAVc_file_path@@XZ");
//};

//public: c_static_stack<class c_file_path, 66>::c_static_stack<class c_file_path, 66>(void)
//{
//    mangled_ppc("??0?$c_static_stack@Vc_file_path@@$0EC@@@QAA@XZ");
//};

//public: class c_file_path * s_static_array<class c_file_path, 32>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$s_static_array@Vc_file_path@@$0CA@@@QAAPAVc_file_path@@XZ");
//};

//public: static long s_static_array<class c_file_path, 32>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Vc_file_path@@$0CA@@@SAJXZ");
//};

//public: long c_static_stack<enum e_event_log_index, 6>::count(void) const
//{
//    mangled_ppc("?count@?$c_static_stack@W4e_event_log_index@@$05@@QBAJXZ");
//};

//public: void c_static_stack<enum e_event_log_index, 6>::push_back(enum e_event_log_index const &)
//{
//    mangled_ppc("?push_back@?$c_static_stack@W4e_event_log_index@@$05@@QAAXABW4e_event_log_index@@@Z");
//};

//public: enum e_event_log_index * c_static_stack<enum e_event_log_index, 6>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$c_static_stack@W4e_event_log_index@@$05@@QAAPAW4e_event_log_index@@XZ");
//};

//public: c_static_stack<enum e_event_log_index, 6>::c_static_stack<enum e_event_log_index, 6>(void)
//{
//    mangled_ppc("??0?$c_static_stack@W4e_event_log_index@@$05@@QAA@XZ");
//};

//public: bool c_static_stack<class c_file_path, 66>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Vc_file_path@@$0EC@@@QBA_NXZ");
//};

//public: long c_static_stack<class c_file_path, 66>::next(void) const
//{
//    mangled_ppc("?next@?$c_static_stack@Vc_file_path@@$0EC@@@QBAJXZ");
//};

//public: long c_static_stack<enum e_event_log_index, 6>::push(void)
//{
//    mangled_ppc("?push@?$c_static_stack@W4e_event_log_index@@$05@@QAAJXZ");
//};

//public: enum e_event_log_index * c_static_stack<enum e_event_log_index, 6>::get(long)
//{
//    mangled_ppc("?get@?$c_static_stack@W4e_event_log_index@@$05@@QAAPAW4e_event_log_index@@J@Z");
//};

//public: bool c_static_stack<enum e_event_log_index, 6>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@W4e_event_log_index@@$05@@QBA_NJ@Z");
//};

//public: bool c_static_stack<enum e_event_log_index, 6>::full(void) const
//{
//    mangled_ppc("?full@?$c_static_stack@W4e_event_log_index@@$05@@QBA_NXZ");
//};

//public: bool c_static_stack<enum e_event_log_index, 6>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@W4e_event_log_index@@$05@@QBA_NXZ");
//};

//public: void s_static_string<2048>::clear(void)
//{
//    mangled_ppc("?clear@?$s_static_string@$0IAA@@@QAAXXZ");
//};

//public: char const * s_static_string<2048>::append(char const *)
//{
//    mangled_ppc("?append@?$s_static_string@$0IAA@@@QAAPBDPBD@Z");
//};

//public: char const * s_static_string<2048>::print(char const *, ...)
//{
//    mangled_ppc("?print@?$s_static_string@$0IAA@@@QAAPBDPBDZZ");
//};

//public: void s_static_string<2048>::print_va(char const *, char *)
//{
//    mangled_ppc("?print_va@?$s_static_string@$0IAA@@@QAAXPBDPAD@Z");
//};

//public: char const * s_static_string<2048>::operator char const *(void) const
//{
//    mangled_ppc("??B?$s_static_string@$0IAA@@@QBAPBDXZ");
//};

//public: bool s_flags<enum e_event_response_flags, unsigned long, 8>::test(enum e_event_response_flags) const
//{
//    mangled_ppc("?test@?$s_flags@W4e_event_response_flags@@K$07@@QBA_NW4e_event_response_flags@@@Z");
//};

//public: bool s_flags<enum e_event_response_flags, unsigned long, 8>::is_empty(void) const
//{
//    mangled_ppc("?is_empty@?$s_flags@W4e_event_response_flags@@K$07@@QBA_NXZ");
//};

//public: void s_flags<enum e_event_generation_flags, unsigned long, 1>::clear(void)
//{
//    mangled_ppc("?clear@?$s_flags@W4e_event_generation_flags@@K$00@@QAAXXZ");
//};

//public: void s_flags<enum e_event_generation_flags, unsigned long, 1>::set_unsafe(unsigned long)
//{
//    mangled_ppc("?set_unsafe@?$s_flags@W4e_event_generation_flags@@K$00@@QAAXK@Z");
//};

//public: class c_file_path & s_static_array<class c_file_path, 32>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Vc_file_path@@$0CA@@@QAAAAVc_file_path@@J@Z");
//};

//public: void s_flags<enum e_find_files_flags, unsigned long, 3>::clear(void)
//{
//    mangled_ppc("?clear@?$s_flags@W4e_find_files_flags@@K$02@@QAAXXZ");
//};

//public: struct s_critical_section & s_static_array<struct s_critical_section, 2>::operator[]<int>(int)
//{
//    mangled_ppc("??$?AH@?$s_static_array@Us_critical_section@@$01@@QAAAAUs_critical_section@@H@Z");
//};

//public: struct s_semaphore & s_static_array<struct s_semaphore, 2>::operator[]<int>(int)
//{
//    mangled_ppc("??$?AH@?$s_static_array@Us_semaphore@@$01@@QAAAAUs_semaphore@@H@Z");
//};

//public: void s_flags<enum e_event_log_flags, unsigned long, 5>::clear(void)
//{
//    mangled_ppc("?clear@?$s_flags@W4e_event_log_flags@@K$04@@QAAXXZ");
//};

//public: void s_flags<enum e_event_log_flags, unsigned long, 5>::set(enum e_event_log_flags, bool)
//{
//    mangled_ppc("?set@?$s_flags@W4e_event_log_flags@@K$04@@QAAXW4e_event_log_flags@@_N@Z");
//};

//public: enum e_event_log_index const & s_static_array<enum e_event_log_index, 5>::operator[]<enum e_event_manager_tracked_log>(enum e_event_manager_tracked_log) const
//{
//    mangled_ppc("??$?AW4e_event_manager_tracked_log@@@?$s_static_array@W4e_event_log_index@@$04@@QBAABW4e_event_log_index@@W4e_event_manager_tracked_log@@@Z");
//};

//public: class c_event_listener *const & s_static_array<class c_event_listener *, 8>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@PAVc_event_listener@@$07@@QBAABQAVc_event_listener@@J@Z");
//};

//public: char * c_file_path::get_filename<256>(class s_static_string<256> *) const
//{
//    mangled_ppc("??$get_filename@$0BAA@@c_file_path@@QBAPADPAV?$s_static_string@$0BAA@@@@Z");
//};

//public: char * c_file_path::get_filename(char *, long) const
//{
//    mangled_ppc("?get_filename@c_file_path@@QBAPADPADJ@Z");
//};

//public: static bool s_flags<enum e_event_response_flags, unsigned long, 8>::valid_bit(enum e_event_response_flags)
//{
//    mangled_ppc("?valid_bit@?$s_flags@W4e_event_response_flags@@K$07@@SA_NW4e_event_response_flags@@@Z");
//};

//private: static unsigned long s_flags<enum e_event_response_flags, unsigned long, 8>::flag_size_type(enum e_event_response_flags)
//{
//    mangled_ppc("?flag_size_type@?$s_flags@W4e_event_response_flags@@K$07@@CAKW4e_event_response_flags@@@Z");
//};

//private: static unsigned long s_flags<enum e_event_response_flags, unsigned long, 8>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$s_flags@W4e_event_response_flags@@K$07@@CAKXZ");
//};

//public: bool s_flags<enum e_event_generation_flags, unsigned long, 1>::valid(void) const
//{
//    mangled_ppc("?valid@?$s_flags@W4e_event_generation_flags@@K$00@@QBA_NXZ");
//};

//public: static bool s_static_array<class c_file_path, 32>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Vc_file_path@@$0CA@@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_critical_section, 2>::valid<int>(int)
//{
//    mangled_ppc("??$valid@H@?$s_static_array@Us_critical_section@@$01@@SA_NH@Z");
//};

//public: static bool s_static_array<struct s_semaphore, 2>::valid<int>(int)
//{
//    mangled_ppc("??$valid@H@?$s_static_array@Us_semaphore@@$01@@SA_NH@Z");
//};

//public: static bool s_flags<enum e_event_log_flags, unsigned long, 5>::valid_bit(enum e_event_log_flags)
//{
//    mangled_ppc("?valid_bit@?$s_flags@W4e_event_log_flags@@K$04@@SA_NW4e_event_log_flags@@@Z");
//};

//public: bool s_flags<enum e_event_log_flags, unsigned long, 5>::valid(void) const
//{
//    mangled_ppc("?valid@?$s_flags@W4e_event_log_flags@@K$04@@QBA_NXZ");
//};

//private: static unsigned long s_flags<enum e_event_log_flags, unsigned long, 5>::flag_size_type(enum e_event_log_flags)
//{
//    mangled_ppc("?flag_size_type@?$s_flags@W4e_event_log_flags@@K$04@@CAKW4e_event_log_flags@@@Z");
//};

//public: static bool s_static_array<enum e_event_log_index, 5>::valid<enum e_event_manager_tracked_log>(enum e_event_manager_tracked_log)
//{
//    mangled_ppc("??$valid@W4e_event_manager_tracked_log@@@?$s_static_array@W4e_event_log_index@@$04@@SA_NW4e_event_manager_tracked_log@@@Z");
//};

//public: static bool s_static_array<class c_event_listener *, 8>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@PAVc_event_listener@@$07@@SA_NJ@Z");
//};

//private: static unsigned long s_flags<enum e_event_response_flags, unsigned long, 8>::make_N_bit_mask_size_type(enum e_event_response_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$s_flags@W4e_event_response_flags@@K$07@@CAKW4e_event_response_flags@@@Z");
//};

//private: static unsigned long s_flags<enum e_event_generation_flags, unsigned long, 1>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$s_flags@W4e_event_generation_flags@@K$00@@CAKXZ");
//};

//private: static unsigned long s_flags<enum e_event_log_flags, unsigned long, 5>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$s_flags@W4e_event_log_flags@@K$04@@CAKXZ");
//};

//private: static unsigned long s_flags<enum e_event_generation_flags, unsigned long, 1>::make_N_bit_mask_size_type(enum e_event_generation_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$s_flags@W4e_event_generation_flags@@K$00@@CAKW4e_event_generation_flags@@@Z");
//};

//private: static unsigned long s_flags<enum e_event_log_flags, unsigned long, 5>::make_N_bit_mask_size_type(enum e_event_log_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$s_flags@W4e_event_log_flags@@K$04@@CAKW4e_event_log_flags@@@Z");
//};

//public: s_event_globals::s_event_globals(void)
//{
//    mangled_ppc("??0s_event_globals@@QAA@XZ");
//};

//public: c_event_manager::c_event_manager(void)
//{
//    mangled_ppc("??0c_event_manager@@QAA@XZ");
//};

//public: c_static_stack<struct s_event_category, 1024>::c_static_stack<struct s_event_category, 1024>(void)
//{
//    mangled_ppc("??0?$c_static_stack@Us_event_category@@$0EAA@@@QAA@XZ");
//};

//public: s_event_globals::~s_event_globals(void)
//{
//    mangled_ppc("??1s_event_globals@@QAA@XZ");
//};

//void g_event_handler::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_event_handler@@YAXXZ");
//};

//void g_event_globals::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_event_globals@@YAXXZ");
//};

