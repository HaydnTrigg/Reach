/* ---------- headers */

#include "foundation\baselib\errors\events\event_log_interface.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// private: static long const c_event_log_cache::k_maximum_cache_entries; // "?k_maximum_cache_entries@c_event_log_cache@@0JB"
// private: static long const c_event_log_cache::k_string_buffer_size; // "?k_string_buffer_size@c_event_log_cache@@0JB"
// private: static long const c_event_log_cache::k_string_buffer_flush_threshold; // "?k_string_buffer_flush_threshold@c_event_log_cache@@0JB"
// public: static long const s_static_array<char, 32768>::k_element_count; // "?k_element_count@?$s_static_array@D$0IAAA@@@2JB"
// private: static long const c_file_output_buffer::k_buffer_size; // "?k_buffer_size@c_file_output_buffer@@0JB"
// private: static long const c_event_log_manager::k_maximum_event_log_filename_length; // "?k_maximum_event_log_filename_length@c_event_log_manager@@0JB"
// private: static long const c_event_log_manager::k_file_buffer_size; // "?k_file_buffer_size@c_event_log_manager@@0JB"
// public: static long const s_static_array<unsigned char, 65536>::k_element_count; // "?k_element_count@?$s_static_array@E$0BAAAA@@@2JB"
// private: static long const c_event_log_folder_manager::k_directory_lock_invalid; // "?k_directory_lock_invalid@c_event_log_folder_manager@@0JB"

// void event_logs_initialize(void);
// public: void c_event_log_cache::set_enabled(bool);
// public: void c_event_log_manager::set_retain_open_files(bool);
// void event_logs_dispose(void);
// void event_logs_set_thread_interface(class c_event_log_thread_interface *);
// void event_logs_set_subfolder(char const *);
// bool event_logs_get_subfolder(long, char *);
// enum e_event_log_index event_logs_create_log(char const *, class s_flags<enum e_event_log_flags, unsigned long, 5>);
// void event_logs_write(long, enum e_event_log_index const *, char const *);
// public: bool c_event_log_cache::get_enabled(void) const;
// void event_logs_flush(void);
// long event_logs_build_snapshot_files(long, class c_file_path *);
// bool event_logs_build_report_file_path(char const *, enum e_report_file_location, class c_file_path *);
// void event_logs_get_synchronization_objects(struct s_critical_section *);
// public: c_event_logs_critical_section::c_event_logs_critical_section(void);
// public: c_event_logs_critical_section::~c_event_logs_critical_section(void);
// bool event_logs_usable(void);
// void event_logs_flush_cache(void);
// void event_logs_dispose_atexit(void);
// unsigned long event_logs_worker_thread_function(void *);
// bool events_should_force_flush(unsigned long);
// public: s_event_log_globals::s_event_log_globals(void);
// public: c_event_log_manager::c_event_log_manager(void);
// public: c_event_log_cache::c_event_log_cache(void);
// public: c_static_stack<struct c_event_log_cache::s_cache_entry, 1024>::c_static_stack<struct c_event_log_cache::s_cache_entry, 1024>(void);
// public: c_static_stack<struct c_event_log_manager::s_event_log, 32>::c_static_stack<struct c_event_log_manager::s_event_log, 32>(void);
// public: c_event_log_manager::s_event_log::s_event_log(void);
// public: s_event_log_globals::~s_event_log_globals(void);
// public: c_event_log_manager::~c_event_log_manager(void);
// public: c_static_stack<struct c_event_log_manager::s_event_log, 32>::~c_static_stack<struct c_event_log_manager::s_event_log, 32>(void);
// public: c_event_log_manager::s_event_log::~s_event_log(void);
// void g_event_log_globals::`dynamic atexit destructor'(void);

//void event_logs_initialize(void)
//{
//    mangled_ppc("?event_logs_initialize@@YAXXZ");
//};

//public: void c_event_log_cache::set_enabled(bool)
//{
//    mangled_ppc("?set_enabled@c_event_log_cache@@QAAX_N@Z");
//};

//public: void c_event_log_manager::set_retain_open_files(bool)
//{
//    mangled_ppc("?set_retain_open_files@c_event_log_manager@@QAAX_N@Z");
//};

//void event_logs_dispose(void)
//{
//    mangled_ppc("?event_logs_dispose@@YAXXZ");
//};

//void event_logs_set_thread_interface(class c_event_log_thread_interface *)
//{
//    mangled_ppc("?event_logs_set_thread_interface@@YAXPAVc_event_log_thread_interface@@@Z");
//};

//void event_logs_set_subfolder(char const *)
//{
//    mangled_ppc("?event_logs_set_subfolder@@YAXPBD@Z");
//};

//bool event_logs_get_subfolder(long, char *)
//{
//    mangled_ppc("?event_logs_get_subfolder@@YA_NJPAD@Z");
//};

//enum e_event_log_index event_logs_create_log(char const *, class s_flags<enum e_event_log_flags, unsigned long, 5>)
//{
//    mangled_ppc("?event_logs_create_log@@YA?AW4e_event_log_index@@PBDV?$s_flags@W4e_event_log_flags@@K$04@@@Z");
//};

//void event_logs_write(long, enum e_event_log_index const *, char const *)
//{
//    mangled_ppc("?event_logs_write@@YAXJPBW4e_event_log_index@@PBD@Z");
//};

//public: bool c_event_log_cache::get_enabled(void) const
//{
//    mangled_ppc("?get_enabled@c_event_log_cache@@QBA_NXZ");
//};

//void event_logs_flush(void)
//{
//    mangled_ppc("?event_logs_flush@@YAXXZ");
//};

//long event_logs_build_snapshot_files(long, class c_file_path *)
//{
//    mangled_ppc("?event_logs_build_snapshot_files@@YAJJPAVc_file_path@@@Z");
//};

//bool event_logs_build_report_file_path(char const *, enum e_report_file_location, class c_file_path *)
//{
//    mangled_ppc("?event_logs_build_report_file_path@@YA_NPBDW4e_report_file_location@@PAVc_file_path@@@Z");
//};

//void event_logs_get_synchronization_objects(struct s_critical_section *)
//{
//    mangled_ppc("?event_logs_get_synchronization_objects@@YAXPAUs_critical_section@@@Z");
//};

//public: c_event_logs_critical_section::c_event_logs_critical_section(void)
//{
//    mangled_ppc("??0c_event_logs_critical_section@@QAA@XZ");
//};

//public: c_event_logs_critical_section::~c_event_logs_critical_section(void)
//{
//    mangled_ppc("??1c_event_logs_critical_section@@QAA@XZ");
//};

//bool event_logs_usable(void)
//{
//    mangled_ppc("?event_logs_usable@@YA_NXZ");
//};

//void event_logs_flush_cache(void)
//{
//    mangled_ppc("?event_logs_flush_cache@@YAXXZ");
//};

//void event_logs_dispose_atexit(void)
//{
//    mangled_ppc("?event_logs_dispose_atexit@@YAXXZ");
//};

//unsigned long event_logs_worker_thread_function(void *)
//{
//    mangled_ppc("?event_logs_worker_thread_function@@YAKPAX@Z");
//};

//bool events_should_force_flush(unsigned long)
//{
//    mangled_ppc("?events_should_force_flush@@YA_NK@Z");
//};

//public: s_event_log_globals::s_event_log_globals(void)
//{
//    mangled_ppc("??0s_event_log_globals@@QAA@XZ");
//};

//public: c_event_log_manager::c_event_log_manager(void)
//{
//    mangled_ppc("??0c_event_log_manager@@QAA@XZ");
//};

//public: c_event_log_cache::c_event_log_cache(void)
//{
//    mangled_ppc("??0c_event_log_cache@@QAA@XZ");
//};

//public: c_static_stack<struct c_event_log_cache::s_cache_entry, 1024>::c_static_stack<struct c_event_log_cache::s_cache_entry, 1024>(void)
//{
//    mangled_ppc("??0?$c_static_stack@Us_cache_entry@c_event_log_cache@@$0EAA@@@QAA@XZ");
//};

//public: c_static_stack<struct c_event_log_manager::s_event_log, 32>::c_static_stack<struct c_event_log_manager::s_event_log, 32>(void)
//{
//    mangled_ppc("??0?$c_static_stack@Us_event_log@c_event_log_manager@@$0CA@@@QAA@XZ");
//};

//public: c_event_log_manager::s_event_log::s_event_log(void)
//{
//    mangled_ppc("??0s_event_log@c_event_log_manager@@QAA@XZ");
//};

//public: s_event_log_globals::~s_event_log_globals(void)
//{
//    mangled_ppc("??1s_event_log_globals@@QAA@XZ");
//};

//public: c_event_log_manager::~c_event_log_manager(void)
//{
//    mangled_ppc("??1c_event_log_manager@@QAA@XZ");
//};

//public: c_static_stack<struct c_event_log_manager::s_event_log, 32>::~c_static_stack<struct c_event_log_manager::s_event_log, 32>(void)
//{
//    mangled_ppc("??1?$c_static_stack@Us_event_log@c_event_log_manager@@$0CA@@@QAA@XZ");
//};

//public: c_event_log_manager::s_event_log::~s_event_log(void)
//{
//    mangled_ppc("??1s_event_log@c_event_log_manager@@QAA@XZ");
//};

//void g_event_log_globals::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_event_log_globals@@YAXXZ");
//};

