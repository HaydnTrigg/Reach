/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// char const *const k_root_test_folder; // "?k_root_test_folder@@3PBDB"
// char const *const k_crash_text_prompt; // "?k_crash_text_prompt@@3PBDB"
// char const *const k_crash_text_submitting; // "?k_crash_text_submitting@@3PBDB"
// char const *const k_crash_text_done; // "?k_crash_text_done@@3PBDB"
// char const *const k_crash_minidump_file_name; // "?k_crash_minidump_file_name@@3PBDB"
// char const *const k_crash_text_out_file; // "?k_crash_text_out_file@@3PBDB"
// char const *const k_crash_file_archive; // "?k_crash_file_archive@@3PBDB"
// struct s_legacy_upload_debug_datum *g_legacy_upload_debug_table; // "?g_legacy_upload_debug_table@@3PAUs_legacy_upload_debug_datum@@A"
// struct s_new_upload_debug_datum *g_new_upload_debug_table; // "?g_new_upload_debug_table@@3PAUs_new_upload_debug_datum@@A"
// struct s_crash_text g_crash_text; // "?g_crash_text@@3Us_crash_text@@A"
// bool g_suppress_upload_debug; // "?g_suppress_upload_debug@@3_NA"
// struct s_runtime_crash_file_globals g_runtime_crash_file_globals; // "?g_runtime_crash_file_globals@@3Us_runtime_crash_file_globals@@A"
// struct _g_upload_debug_globals g_upload_debug_globals; // "?g_upload_debug_globals@@3U_g_upload_debug_globals@@A"
// struct _g_bug_creation_globals g_bug_creation_globals; // "?g_bug_creation_globals@@3U_g_bug_creation_globals@@A"

// long saved_film_manager_upload_start(long, struct s_file_reference *);
// bool upload_debug_start(void);
// bool upload_debug_complete(bool *);
// bool upload_debug_get_output(char *, long);
// bool upload_debug_create_archive(void);
// void zip_archive_file_callback(struct s_file_reference *, void *);
// bool upload_debug_create_fake_archive(void);
// void crash_text_buffer_upload_callback(bool, void *);
// bool write_crash_text_buffer_to_disk(void);
// void upload_crash_text_buffer(void);
// long upload_screenshot_start(long, struct s_file_reference *);
// public: c_minidump_stream::c_minidump_stream(char const *);
// public: c_debug_memory_minidump_writer::c_debug_memory_minidump_writer(void);
// public: c_minidump_stream::c_minidump_stream(char const *, long);
// public: c_minidump_stream::~c_minidump_stream(void);
// private: bool c_minidump_stream::open_stream_for_reading(void);
// private: bool c_minidump_stream::open_stream_for_writing(void);
// private: bool c_minidump_stream::write_stream_header(void);
// private: bool c_minidump_stream::read_stream_header(void);
// public: virtual void c_minidump_stream::write_memory_block_to_stream(void const *, unsigned int);
// public: long c_minidump_stream::get_memory_block_count(void) const;
// public: void * c_minidump_stream::read_memory_from_stream(long *, __int64*);
// long crash_user_input_get_offset(long, long *, char const *, long);
// void create_and_upload_bug_files_auto_name(bool);
// void create_and_upload_bug_files_for_out_of_sync(char const *);
// void create_and_upload_bug_files(char const *);
// void create_and_upload_bug_files_no_minidump(char const *);
// void bug_notify_core_creation(char const *, bool);
// void crash_user_input_update(char *, long, long *);
// void crash_user_input_upload_now(char const *, long);
// void upload_delayed_bug_files(void);
// void create_and_upload_bug_files_internal(char const *, enum e_bug_now_type);
// void upload_bug_zip_file(char const *, class c_static_string<128> *, enum e_bug_now_type);
// void build_bug_zip_file_name(char const *, class c_static_string<128> *, class c_static_string<128> *, enum e_bug_now_type);
// void bug_zip_file_upload_callback(bool, void *);
// bool create_zip_from_files_in_bug_folder(char const *, class c_static_string<128> *, enum e_bug_now_type);
// bool bug_add_file_to_zip(void *, struct s_file_reference *);
// void create_bug_files(enum e_bug_now_type, char const *, class c_static_string<128> *, bool, bool);
// void create_bug_minidump(char const *, class c_static_string<128> *);
// void create_bug_screenshot(class c_static_string<128> *);
// void create_bug_core_file(char const *, class c_static_string<128> *);
// void create_bug_info_file(class c_static_string<128> *);
// void create_bug_logs(class c_static_string<128> *);
// void create_bug_log_file_callback(struct s_file_reference *, void *);
// void create_bug_camera_location(class c_static_string<128> *);
// void create_bug_stream_manager_core(class c_static_string<128> *);
// bool create_bug_folder(char const *, class c_static_string<128> *);
// void build_bug_folder_path_by_bug_name(char const *, class c_static_string<128> *);
// void runtime_crash_file_register(char const *);
// void runtime_crash_file_unregister(char const *);
// long runtime_crash_file_get_file_list(long, struct s_file_reference *);
// long init_txt_get_file_list(long, struct s_file_reference *);
// void upload_minidump_and_screenshot_sequentially(void);
// void upload_debug_update_callback(long, long);
// void upload_debug_completion_callback(bool, void *);
// void upload_debug_minidump_sequential_completion_callback(bool, void *);
// void create_and_upload_zip_archive(void);
// void upload_debug_update(void);
// ?generate_upload_files@@YAJW4e_upload_type@@Q6AXPAUs_file_reference@@PAX@Z2@Z;
// public: char * c_file_path::get_path<256>(class s_static_string<256> *) const;
// public: char * c_file_path::get_path(char *, long) const;
// public: _g_upload_debug_globals::_g_upload_debug_globals(void);
// public: _g_upload_debug_globals::~_g_upload_debug_globals(void);
// void g_upload_debug_globals::`dynamic atexit destructor'(void);

//long saved_film_manager_upload_start(long, struct s_file_reference *)
//{
//    mangled_ppc("?saved_film_manager_upload_start@@YAJJPAUs_file_reference@@@Z");
//};

//bool upload_debug_start(void)
//{
//    mangled_ppc("?upload_debug_start@@YA_NXZ");
//};

//bool upload_debug_complete(bool *)
//{
//    mangled_ppc("?upload_debug_complete@@YA_NPA_N@Z");
//};

//bool upload_debug_get_output(char *, long)
//{
//    mangled_ppc("?upload_debug_get_output@@YA_NPADJ@Z");
//};

//bool upload_debug_create_archive(void)
//{
//    mangled_ppc("?upload_debug_create_archive@@YA_NXZ");
//};

//void zip_archive_file_callback(struct s_file_reference *, void *)
//{
//    mangled_ppc("?zip_archive_file_callback@@YAXPAUs_file_reference@@PAX@Z");
//};

//bool upload_debug_create_fake_archive(void)
//{
//    mangled_ppc("?upload_debug_create_fake_archive@@YA_NXZ");
//};

//void crash_text_buffer_upload_callback(bool, void *)
//{
//    mangled_ppc("?crash_text_buffer_upload_callback@@YAX_NPAX@Z");
//};

//bool write_crash_text_buffer_to_disk(void)
//{
//    mangled_ppc("?write_crash_text_buffer_to_disk@@YA_NXZ");
//};

//void upload_crash_text_buffer(void)
//{
//    mangled_ppc("?upload_crash_text_buffer@@YAXXZ");
//};

//long upload_screenshot_start(long, struct s_file_reference *)
//{
//    mangled_ppc("?upload_screenshot_start@@YAJJPAUs_file_reference@@@Z");
//};

//public: c_minidump_stream::c_minidump_stream(char const *)
//{
//    mangled_ppc("??0c_minidump_stream@@QAA@PBD@Z");
//};

//public: c_debug_memory_minidump_writer::c_debug_memory_minidump_writer(void)
//{
//    mangled_ppc("??0c_debug_memory_minidump_writer@@QAA@XZ");
//};

//public: c_minidump_stream::c_minidump_stream(char const *, long)
//{
//    mangled_ppc("??0c_minidump_stream@@QAA@PBDJ@Z");
//};

//public: c_minidump_stream::~c_minidump_stream(void)
//{
//    mangled_ppc("??1c_minidump_stream@@QAA@XZ");
//};

//private: bool c_minidump_stream::open_stream_for_reading(void)
//{
//    mangled_ppc("?open_stream_for_reading@c_minidump_stream@@AAA_NXZ");
//};

//private: bool c_minidump_stream::open_stream_for_writing(void)
//{
//    mangled_ppc("?open_stream_for_writing@c_minidump_stream@@AAA_NXZ");
//};

//private: bool c_minidump_stream::write_stream_header(void)
//{
//    mangled_ppc("?write_stream_header@c_minidump_stream@@AAA_NXZ");
//};

//private: bool c_minidump_stream::read_stream_header(void)
//{
//    mangled_ppc("?read_stream_header@c_minidump_stream@@AAA_NXZ");
//};

//public: virtual void c_minidump_stream::write_memory_block_to_stream(void const *, unsigned int)
//{
//    mangled_ppc("?write_memory_block_to_stream@c_minidump_stream@@UAAXPBXI@Z");
//};

//public: long c_minidump_stream::get_memory_block_count(void) const
//{
//    mangled_ppc("?get_memory_block_count@c_minidump_stream@@QBAJXZ");
//};

//public: void * c_minidump_stream::read_memory_from_stream(long *, __int64*)
//{
//    mangled_ppc("?read_memory_from_stream@c_minidump_stream@@QAAPAXPAJPA_J@Z");
//};

//long crash_user_input_get_offset(long, long *, char const *, long)
//{
//    mangled_ppc("?crash_user_input_get_offset@@YAJJPAJPBDJ@Z");
//};

//void create_and_upload_bug_files_auto_name(bool)
//{
//    mangled_ppc("?create_and_upload_bug_files_auto_name@@YAX_N@Z");
//};

//void create_and_upload_bug_files_for_out_of_sync(char const *)
//{
//    mangled_ppc("?create_and_upload_bug_files_for_out_of_sync@@YAXPBD@Z");
//};

//void create_and_upload_bug_files(char const *)
//{
//    mangled_ppc("?create_and_upload_bug_files@@YAXPBD@Z");
//};

//void create_and_upload_bug_files_no_minidump(char const *)
//{
//    mangled_ppc("?create_and_upload_bug_files_no_minidump@@YAXPBD@Z");
//};

//void bug_notify_core_creation(char const *, bool)
//{
//    mangled_ppc("?bug_notify_core_creation@@YAXPBD_N@Z");
//};

//void crash_user_input_update(char *, long, long *)
//{
//    mangled_ppc("?crash_user_input_update@@YAXPADJPAJ@Z");
//};

//void crash_user_input_upload_now(char const *, long)
//{
//    mangled_ppc("?crash_user_input_upload_now@@YAXPBDJ@Z");
//};

//void upload_delayed_bug_files(void)
//{
//    mangled_ppc("?upload_delayed_bug_files@@YAXXZ");
//};

//void create_and_upload_bug_files_internal(char const *, enum e_bug_now_type)
//{
//    mangled_ppc("?create_and_upload_bug_files_internal@@YAXPBDW4e_bug_now_type@@@Z");
//};

//void upload_bug_zip_file(char const *, class c_static_string<128> *, enum e_bug_now_type)
//{
//    mangled_ppc("?upload_bug_zip_file@@YAXPBDPAV?$c_static_string@$0IA@@@W4e_bug_now_type@@@Z");
//};

//void build_bug_zip_file_name(char const *, class c_static_string<128> *, class c_static_string<128> *, enum e_bug_now_type)
//{
//    mangled_ppc("?build_bug_zip_file_name@@YAXPBDPAV?$c_static_string@$0IA@@@1W4e_bug_now_type@@@Z");
//};

//void bug_zip_file_upload_callback(bool, void *)
//{
//    mangled_ppc("?bug_zip_file_upload_callback@@YAX_NPAX@Z");
//};

//bool create_zip_from_files_in_bug_folder(char const *, class c_static_string<128> *, enum e_bug_now_type)
//{
//    mangled_ppc("?create_zip_from_files_in_bug_folder@@YA_NPBDPAV?$c_static_string@$0IA@@@W4e_bug_now_type@@@Z");
//};

//bool bug_add_file_to_zip(void *, struct s_file_reference *)
//{
//    mangled_ppc("?bug_add_file_to_zip@@YA_NPAXPAUs_file_reference@@@Z");
//};

//void create_bug_files(enum e_bug_now_type, char const *, class c_static_string<128> *, bool, bool)
//{
//    mangled_ppc("?create_bug_files@@YAXW4e_bug_now_type@@PBDPAV?$c_static_string@$0IA@@@_N3@Z");
//};

//void create_bug_minidump(char const *, class c_static_string<128> *)
//{
//    mangled_ppc("?create_bug_minidump@@YAXPBDPAV?$c_static_string@$0IA@@@@Z");
//};

//void create_bug_screenshot(class c_static_string<128> *)
//{
//    mangled_ppc("?create_bug_screenshot@@YAXPAV?$c_static_string@$0IA@@@@Z");
//};

//void create_bug_core_file(char const *, class c_static_string<128> *)
//{
//    mangled_ppc("?create_bug_core_file@@YAXPBDPAV?$c_static_string@$0IA@@@@Z");
//};

//void create_bug_info_file(class c_static_string<128> *)
//{
//    mangled_ppc("?create_bug_info_file@@YAXPAV?$c_static_string@$0IA@@@@Z");
//};

//void create_bug_logs(class c_static_string<128> *)
//{
//    mangled_ppc("?create_bug_logs@@YAXPAV?$c_static_string@$0IA@@@@Z");
//};

//void create_bug_log_file_callback(struct s_file_reference *, void *)
//{
//    mangled_ppc("?create_bug_log_file_callback@@YAXPAUs_file_reference@@PAX@Z");
//};

//void create_bug_camera_location(class c_static_string<128> *)
//{
//    mangled_ppc("?create_bug_camera_location@@YAXPAV?$c_static_string@$0IA@@@@Z");
//};

//void create_bug_stream_manager_core(class c_static_string<128> *)
//{
//    mangled_ppc("?create_bug_stream_manager_core@@YAXPAV?$c_static_string@$0IA@@@@Z");
//};

//bool create_bug_folder(char const *, class c_static_string<128> *)
//{
//    mangled_ppc("?create_bug_folder@@YA_NPBDPAV?$c_static_string@$0IA@@@@Z");
//};

//void build_bug_folder_path_by_bug_name(char const *, class c_static_string<128> *)
//{
//    mangled_ppc("?build_bug_folder_path_by_bug_name@@YAXPBDPAV?$c_static_string@$0IA@@@@Z");
//};

//void runtime_crash_file_register(char const *)
//{
//    mangled_ppc("?runtime_crash_file_register@@YAXPBD@Z");
//};

//void runtime_crash_file_unregister(char const *)
//{
//    mangled_ppc("?runtime_crash_file_unregister@@YAXPBD@Z");
//};

//long runtime_crash_file_get_file_list(long, struct s_file_reference *)
//{
//    mangled_ppc("?runtime_crash_file_get_file_list@@YAJJPAUs_file_reference@@@Z");
//};

//long init_txt_get_file_list(long, struct s_file_reference *)
//{
//    mangled_ppc("?init_txt_get_file_list@@YAJJPAUs_file_reference@@@Z");
//};

//void upload_minidump_and_screenshot_sequentially(void)
//{
//    mangled_ppc("?upload_minidump_and_screenshot_sequentially@@YAXXZ");
//};

//void upload_debug_update_callback(long, long)
//{
//    mangled_ppc("?upload_debug_update_callback@@YAXJJ@Z");
//};

//void upload_debug_completion_callback(bool, void *)
//{
//    mangled_ppc("?upload_debug_completion_callback@@YAX_NPAX@Z");
//};

//void upload_debug_minidump_sequential_completion_callback(bool, void *)
//{
//    mangled_ppc("?upload_debug_minidump_sequential_completion_callback@@YAX_NPAX@Z");
//};

//void create_and_upload_zip_archive(void)
//{
//    mangled_ppc("?create_and_upload_zip_archive@@YAXXZ");
//};

//void upload_debug_update(void)
//{
//    mangled_ppc("?upload_debug_update@@YAXXZ");
//};

//?generate_upload_files@@YAJW4e_upload_type@@Q6AXPAUs_file_reference@@PAX@Z2@Z
//{
//    mangled_ppc("?generate_upload_files@@YAJW4e_upload_type@@Q6AXPAUs_file_reference@@PAX@Z2@Z");
//};

//public: char * c_file_path::get_path<256>(class s_static_string<256> *) const
//{
//    mangled_ppc("??$get_path@$0BAA@@c_file_path@@QBAPADPAV?$s_static_string@$0BAA@@@@Z");
//};

//public: char * c_file_path::get_path(char *, long) const
//{
//    mangled_ppc("?get_path@c_file_path@@QBAPADPADJ@Z");
//};

//public: _g_upload_debug_globals::_g_upload_debug_globals(void)
//{
//    mangled_ppc("??0_g_upload_debug_globals@@QAA@XZ");
//};

//public: _g_upload_debug_globals::~_g_upload_debug_globals(void)
//{
//    mangled_ppc("??1_g_upload_debug_globals@@QAA@XZ");
//};

//void g_upload_debug_globals::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_upload_debug_globals@@YAXXZ");
//};

