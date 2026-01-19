/* ---------- headers */

#include "omaha\cseries\minidump_writer.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// private: static struct s_memory_stream_descriptor *c_minidump_writer::s_captured_descriptors; // "?s_captured_descriptors@c_minidump_writer@@0PAUs_memory_stream_descriptor@@A"
// private: static long c_minidump_writer::s_next_captured_descriptor; // "?s_next_captured_descriptor@c_minidump_writer@@0JA"

// public: c_minidump_writer::c_minidump_writer(void);
// public: c_minidump_writer::~c_minidump_writer(void);
// public: void c_minidump_writer::set_minidump_configuration(struct s_minidump_configuration const &);
// public: bool c_minidump_writer::write(class c_minidump_provider_interface *, char const *, struct s_minidump_exception_information const &);
// public: c_minidump_file_output_secure::~c_minidump_file_output_secure(void);
// public: bool c_minidump_writer::add_memory_descriptor(struct s_memory_stream_descriptor const &);
// private: bool c_minidump_writer::write_internal(void);
// private: bool c_minidump_writer::write_header(void);
// private: bool c_minidump_writer::write_stream_directories(void);
// private: bool c_minidump_writer::write_system_information_stream(void);
// private: bool c_minidump_writer::write_thread_list_stream(void);
// unsigned __int64 get_current_instruction_pointer(void);
// private: bool c_minidump_writer::write_thread_list_header(long);
// private: bool c_minidump_writer::write_thread_information(struct s_thread_information *, long);
// private: bool c_minidump_writer::write_thread_context(struct s_thread_information *, long);
// private: bool c_minidump_writer::write_module_list_stream(void);
// private: bool c_minidump_writer::write_module_list_loaded(void);
// private: bool c_minidump_writer::write_module_list_names(void);
// private: bool c_minidump_writer::write_exception_stream(void);
// private: bool c_minidump_writer::write_misc_info_stream(void);
// private: bool c_minidump_writer::write_memory_stream(void);
// private: unsigned long c_minidump_writer::get_captured_memory_descriptors_size(void);
// private: void c_minidump_writer::capture_inclusive_memory_descriptors_internal(void);
// private: void c_minidump_writer::capture_module_memory_descriptors_internal(void);
// private: void c_minidump_writer::capture_virtual_memory_descriptors_internal(void);
// private: bool c_minidump_writer::write_captured_memory_and_descriptors(void);
// private: bool c_minidump_writer::write_captured_memory_descriptors(void);
// private: bool c_minidump_writer::write_captured_memory_raw(void);
// private: bool c_minidump_writer::seek_back_to_stream_directories(void);
// private: bool c_minidump_writer::write_unsigned_long(unsigned long);
// private: bool c_minidump_writer::write_unsigned_int64(unsigned __int64);
// private: bool c_minidump_writer::write_string(char const *);
// private: bool c_minidump_writer::write_memory_region(void const *, long);
// private: bool c_minidump_writer::write_memory_region_count(void);
// private: void c_minidump_writer::set_unresolved_memory_pattern(void *, long);
// private: void c_minidump_writer::get_exception_information_internal(struct MINIDUMP_EXCEPTION_STREAM *);
// private: void c_minidump_writer::update_stream_directory(long, long, enum _MINIDUMP_STREAM_TYPE);
// private: void c_minidump_writer::update_minidump_memory_stream_directory(void);
// private: bool c_minidump_writer::should_ignore_memory_region(unsigned long, unsigned long);
// private: static void c_minidump_writer::add_captured_descriptor(unsigned long, unsigned long);
// private: void c_minidump_writer::report_progress(float);
// bool in_range_inclusive(unsigned long, unsigned long, unsigned long);

//public: c_minidump_writer::c_minidump_writer(void)
//{
//    mangled_ppc("??0c_minidump_writer@@QAA@XZ");
//};

//public: c_minidump_writer::~c_minidump_writer(void)
//{
//    mangled_ppc("??1c_minidump_writer@@QAA@XZ");
//};

//public: void c_minidump_writer::set_minidump_configuration(struct s_minidump_configuration const &)
//{
//    mangled_ppc("?set_minidump_configuration@c_minidump_writer@@QAAXABUs_minidump_configuration@@@Z");
//};

//public: bool c_minidump_writer::write(class c_minidump_provider_interface *, char const *, struct s_minidump_exception_information const &)
//{
//    mangled_ppc("?write@c_minidump_writer@@QAA_NPAVc_minidump_provider_interface@@PBDABUs_minidump_exception_information@@@Z");
//};

//public: c_minidump_file_output_secure::~c_minidump_file_output_secure(void)
//{
//    mangled_ppc("??1c_minidump_file_output_secure@@QAA@XZ");
//};

//public: bool c_minidump_writer::add_memory_descriptor(struct s_memory_stream_descriptor const &)
//{
//    mangled_ppc("?add_memory_descriptor@c_minidump_writer@@QAA_NABUs_memory_stream_descriptor@@@Z");
//};

//private: bool c_minidump_writer::write_internal(void)
//{
//    mangled_ppc("?write_internal@c_minidump_writer@@AAA_NXZ");
//};

//private: bool c_minidump_writer::write_header(void)
//{
//    mangled_ppc("?write_header@c_minidump_writer@@AAA_NXZ");
//};

//private: bool c_minidump_writer::write_stream_directories(void)
//{
//    mangled_ppc("?write_stream_directories@c_minidump_writer@@AAA_NXZ");
//};

//private: bool c_minidump_writer::write_system_information_stream(void)
//{
//    mangled_ppc("?write_system_information_stream@c_minidump_writer@@AAA_NXZ");
//};

//private: bool c_minidump_writer::write_thread_list_stream(void)
//{
//    mangled_ppc("?write_thread_list_stream@c_minidump_writer@@AAA_NXZ");
//};

//unsigned __int64 get_current_instruction_pointer(void)
//{
//    mangled_ppc("?get_current_instruction_pointer@@YA_KXZ");
//};

//private: bool c_minidump_writer::write_thread_list_header(long)
//{
//    mangled_ppc("?write_thread_list_header@c_minidump_writer@@AAA_NJ@Z");
//};

//private: bool c_minidump_writer::write_thread_information(struct s_thread_information *, long)
//{
//    mangled_ppc("?write_thread_information@c_minidump_writer@@AAA_NPAUs_thread_information@@J@Z");
//};

//private: bool c_minidump_writer::write_thread_context(struct s_thread_information *, long)
//{
//    mangled_ppc("?write_thread_context@c_minidump_writer@@AAA_NPAUs_thread_information@@J@Z");
//};

//private: bool c_minidump_writer::write_module_list_stream(void)
//{
//    mangled_ppc("?write_module_list_stream@c_minidump_writer@@AAA_NXZ");
//};

//private: bool c_minidump_writer::write_module_list_loaded(void)
//{
//    mangled_ppc("?write_module_list_loaded@c_minidump_writer@@AAA_NXZ");
//};

//private: bool c_minidump_writer::write_module_list_names(void)
//{
//    mangled_ppc("?write_module_list_names@c_minidump_writer@@AAA_NXZ");
//};

//private: bool c_minidump_writer::write_exception_stream(void)
//{
//    mangled_ppc("?write_exception_stream@c_minidump_writer@@AAA_NXZ");
//};

//private: bool c_minidump_writer::write_misc_info_stream(void)
//{
//    mangled_ppc("?write_misc_info_stream@c_minidump_writer@@AAA_NXZ");
//};

//private: bool c_minidump_writer::write_memory_stream(void)
//{
//    mangled_ppc("?write_memory_stream@c_minidump_writer@@AAA_NXZ");
//};

//private: unsigned long c_minidump_writer::get_captured_memory_descriptors_size(void)
//{
//    mangled_ppc("?get_captured_memory_descriptors_size@c_minidump_writer@@AAAKXZ");
//};

//private: void c_minidump_writer::capture_inclusive_memory_descriptors_internal(void)
//{
//    mangled_ppc("?capture_inclusive_memory_descriptors_internal@c_minidump_writer@@AAAXXZ");
//};

//private: void c_minidump_writer::capture_module_memory_descriptors_internal(void)
//{
//    mangled_ppc("?capture_module_memory_descriptors_internal@c_minidump_writer@@AAAXXZ");
//};

//private: void c_minidump_writer::capture_virtual_memory_descriptors_internal(void)
//{
//    mangled_ppc("?capture_virtual_memory_descriptors_internal@c_minidump_writer@@AAAXXZ");
//};

//private: bool c_minidump_writer::write_captured_memory_and_descriptors(void)
//{
//    mangled_ppc("?write_captured_memory_and_descriptors@c_minidump_writer@@AAA_NXZ");
//};

//private: bool c_minidump_writer::write_captured_memory_descriptors(void)
//{
//    mangled_ppc("?write_captured_memory_descriptors@c_minidump_writer@@AAA_NXZ");
//};

//private: bool c_minidump_writer::write_captured_memory_raw(void)
//{
//    mangled_ppc("?write_captured_memory_raw@c_minidump_writer@@AAA_NXZ");
//};

//private: bool c_minidump_writer::seek_back_to_stream_directories(void)
//{
//    mangled_ppc("?seek_back_to_stream_directories@c_minidump_writer@@AAA_NXZ");
//};

//private: bool c_minidump_writer::write_unsigned_long(unsigned long)
//{
//    mangled_ppc("?write_unsigned_long@c_minidump_writer@@AAA_NK@Z");
//};

//private: bool c_minidump_writer::write_unsigned_int64(unsigned __int64)
//{
//    mangled_ppc("?write_unsigned_int64@c_minidump_writer@@AAA_N_K@Z");
//};

//private: bool c_minidump_writer::write_string(char const *)
//{
//    mangled_ppc("?write_string@c_minidump_writer@@AAA_NPBD@Z");
//};

//private: bool c_minidump_writer::write_memory_region(void const *, long)
//{
//    mangled_ppc("?write_memory_region@c_minidump_writer@@AAA_NPBXJ@Z");
//};

//private: bool c_minidump_writer::write_memory_region_count(void)
//{
//    mangled_ppc("?write_memory_region_count@c_minidump_writer@@AAA_NXZ");
//};

//private: void c_minidump_writer::set_unresolved_memory_pattern(void *, long)
//{
//    mangled_ppc("?set_unresolved_memory_pattern@c_minidump_writer@@AAAXPAXJ@Z");
//};

//private: void c_minidump_writer::get_exception_information_internal(struct MINIDUMP_EXCEPTION_STREAM *)
//{
//    mangled_ppc("?get_exception_information_internal@c_minidump_writer@@AAAXPAUMINIDUMP_EXCEPTION_STREAM@@@Z");
//};

//private: void c_minidump_writer::update_stream_directory(long, long, enum _MINIDUMP_STREAM_TYPE)
//{
//    mangled_ppc("?update_stream_directory@c_minidump_writer@@AAAXJJW4_MINIDUMP_STREAM_TYPE@@@Z");
//};

//private: void c_minidump_writer::update_minidump_memory_stream_directory(void)
//{
//    mangled_ppc("?update_minidump_memory_stream_directory@c_minidump_writer@@AAAXXZ");
//};

//private: bool c_minidump_writer::should_ignore_memory_region(unsigned long, unsigned long)
//{
//    mangled_ppc("?should_ignore_memory_region@c_minidump_writer@@AAA_NKK@Z");
//};

//private: static void c_minidump_writer::add_captured_descriptor(unsigned long, unsigned long)
//{
//    mangled_ppc("?add_captured_descriptor@c_minidump_writer@@CAXKK@Z");
//};

//private: void c_minidump_writer::report_progress(float)
//{
//    mangled_ppc("?report_progress@c_minidump_writer@@AAAXM@Z");
//};

//bool in_range_inclusive(unsigned long, unsigned long, unsigned long)
//{
//    mangled_ppc("?in_range_inclusive@@YA_NKKK@Z");
//};

