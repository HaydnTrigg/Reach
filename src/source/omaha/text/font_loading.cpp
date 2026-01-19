/* ---------- headers */

#include "omaha\text\font_loading.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// char const *const k_hard_drive_font_directory; // "?k_hard_drive_font_directory@@3PBDB"
// char const *const k_dvd_font_directory; // "?k_dvd_font_directory@@3PBDB"
// char const *const k_font_package_base_name; // "?k_font_package_base_name@@3PBDB"
// char const *const k_font_package_suffix; // "?k_font_package_suffix@@3PBDB"

// void font_initialize_emergency(void);
// void font_initialize(void);
// void font_dispose(void);
// void font_idle(void);
// void font_reload(void);
// bool font_in_emergency_mode(void);
// struct s_font_header const * font_get_header_internal(enum e_font_index);
// char const * font_get_debug_name(enum e_font_index);
// struct s_font_header const * font_get_header(enum e_font_id);
// enum e_font_index font_get_font_index(enum e_font_id);
// struct s_font_package_file_header const * font_get_package_header_internal(void);
// bool font_get_package_file_handle(struct s_file_handle *);
// long font_table_get_font_file_references(char const *, struct s_file_reference const *, struct s_file_reference *, long, long *, long);
// void fonts_copy_to_hard_drive(void);
// void get_dvd_font_directory(struct s_file_reference *);
// void get_hard_drive_font_directory(struct s_file_reference *);
// bool get_dvd_font_modification_date(struct s_file_last_modification_date *);
// void fonts_invalidate_cached_fonts(void);
// void fonts_select_language(void);
// void get_font_master_filename(enum e_language, char *, long);
// bool fonts_begin_loading(bool);
// void fonts_close(void);
// void font_loading_idle(void);
// void font_load(struct s_font_loading_state *, enum e_font_index, char const *, bool);
// void get_active_font_directory(struct s_file_reference *);
// void font_block_until_load_completes(struct s_font_loading_state *);
// void font_load_idle(struct s_font_loading_state *, bool *);
// void font_close_loaded_file(struct s_font_loading_state *);
// enum e_async_completion font_load_callback(void *);
// struct s_async_task_id async_task_add<struct s_font_loading_task>(long, struct s_font_loading_task const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *);
// struct s_async_task_id async_task_add_ex<struct s_font_loading_task>(long, struct s_font_loading_task const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full);
// public: s_font_globals::s_font_globals(void);
// public: s_font_loading_state::s_font_loading_state(void);
// public: s_font_globals::~s_font_globals(void);
// public: s_font_loading_state::~s_font_loading_state(void);
// void g_font_globals::`dynamic atexit destructor'(void);

//void font_initialize_emergency(void)
//{
//    mangled_ppc("?font_initialize_emergency@@YAXXZ");
//};

//void font_initialize(void)
//{
//    mangled_ppc("?font_initialize@@YAXXZ");
//};

//void font_dispose(void)
//{
//    mangled_ppc("?font_dispose@@YAXXZ");
//};

//void font_idle(void)
//{
//    mangled_ppc("?font_idle@@YAXXZ");
//};

//void font_reload(void)
//{
//    mangled_ppc("?font_reload@@YAXXZ");
//};

//bool font_in_emergency_mode(void)
//{
//    mangled_ppc("?font_in_emergency_mode@@YA_NXZ");
//};

//struct s_font_header const * font_get_header_internal(enum e_font_index)
//{
//    mangled_ppc("?font_get_header_internal@@YAPBUs_font_header@@W4e_font_index@@@Z");
//};

//char const * font_get_debug_name(enum e_font_index)
//{
//    mangled_ppc("?font_get_debug_name@@YAPBDW4e_font_index@@@Z");
//};

//struct s_font_header const * font_get_header(enum e_font_id)
//{
//    mangled_ppc("?font_get_header@@YAPBUs_font_header@@W4e_font_id@@@Z");
//};

//enum e_font_index font_get_font_index(enum e_font_id)
//{
//    mangled_ppc("?font_get_font_index@@YA?AW4e_font_index@@W4e_font_id@@@Z");
//};

//struct s_font_package_file_header const * font_get_package_header_internal(void)
//{
//    mangled_ppc("?font_get_package_header_internal@@YAPBUs_font_package_file_header@@XZ");
//};

//bool font_get_package_file_handle(struct s_file_handle *)
//{
//    mangled_ppc("?font_get_package_file_handle@@YA_NPAUs_file_handle@@@Z");
//};

//long font_table_get_font_file_references(char const *, struct s_file_reference const *, struct s_file_reference *, long, long *, long)
//{
//    mangled_ppc("?font_table_get_font_file_references@@YAJPBDPBUs_file_reference@@PAU1@JPAJJ@Z");
//};

//void fonts_copy_to_hard_drive(void)
//{
//    mangled_ppc("?fonts_copy_to_hard_drive@@YAXXZ");
//};

//void get_dvd_font_directory(struct s_file_reference *)
//{
//    mangled_ppc("?get_dvd_font_directory@@YAXPAUs_file_reference@@@Z");
//};

//void get_hard_drive_font_directory(struct s_file_reference *)
//{
//    mangled_ppc("?get_hard_drive_font_directory@@YAXPAUs_file_reference@@@Z");
//};

//bool get_dvd_font_modification_date(struct s_file_last_modification_date *)
//{
//    mangled_ppc("?get_dvd_font_modification_date@@YA_NPAUs_file_last_modification_date@@@Z");
//};

//void fonts_invalidate_cached_fonts(void)
//{
//    mangled_ppc("?fonts_invalidate_cached_fonts@@YAXXZ");
//};

//void fonts_select_language(void)
//{
//    mangled_ppc("?fonts_select_language@@YAXXZ");
//};

//void get_font_master_filename(enum e_language, char *, long)
//{
//    mangled_ppc("?get_font_master_filename@@YAXW4e_language@@PADJ@Z");
//};

//bool fonts_begin_loading(bool)
//{
//    mangled_ppc("?fonts_begin_loading@@YA_N_N@Z");
//};

//void fonts_close(void)
//{
//    mangled_ppc("?fonts_close@@YAXXZ");
//};

//void font_loading_idle(void)
//{
//    mangled_ppc("?font_loading_idle@@YAXXZ");
//};

//void font_load(struct s_font_loading_state *, enum e_font_index, char const *, bool)
//{
//    mangled_ppc("?font_load@@YAXPAUs_font_loading_state@@W4e_font_index@@PBD_N@Z");
//};

//void get_active_font_directory(struct s_file_reference *)
//{
//    mangled_ppc("?get_active_font_directory@@YAXPAUs_file_reference@@@Z");
//};

//void font_block_until_load_completes(struct s_font_loading_state *)
//{
//    mangled_ppc("?font_block_until_load_completes@@YAXPAUs_font_loading_state@@@Z");
//};

//void font_load_idle(struct s_font_loading_state *, bool *)
//{
//    mangled_ppc("?font_load_idle@@YAXPAUs_font_loading_state@@PA_N@Z");
//};

//void font_close_loaded_file(struct s_font_loading_state *)
//{
//    mangled_ppc("?font_close_loaded_file@@YAXPAUs_font_loading_state@@@Z");
//};

//enum e_async_completion font_load_callback(void *)
//{
//    mangled_ppc("?font_load_callback@@YA?AW4e_async_completion@@PAX@Z");
//};

//struct s_async_task_id async_task_add<struct s_font_loading_task>(long, struct s_font_loading_task const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *)
//{
//    mangled_ppc("??$async_task_add@Us_font_loading_task@@@@YA?AUs_async_task_id@@JPBUs_font_loading_task@@JP6A?AW4e_async_completion@@PAX@ZPAVc_async_completion_flag@@@Z");
//};

//struct s_async_task_id async_task_add_ex<struct s_font_loading_task>(long, struct s_font_loading_task const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full)
//{
//    mangled_ppc("??$async_task_add_ex@Us_font_loading_task@@@@YA?AUs_async_task_id@@JPBUs_font_loading_task@@JP6A?AW4e_async_completion@@PAX@ZPAVc_async_completion_flag@@W4e_async_block_if_full@@@Z");
//};

//public: s_font_globals::s_font_globals(void)
//{
//    mangled_ppc("??0s_font_globals@@QAA@XZ");
//};

//public: s_font_loading_state::s_font_loading_state(void)
//{
//    mangled_ppc("??0s_font_loading_state@@QAA@XZ");
//};

//public: s_font_globals::~s_font_globals(void)
//{
//    mangled_ppc("??1s_font_globals@@QAA@XZ");
//};

//public: s_font_loading_state::~s_font_loading_state(void)
//{
//    mangled_ppc("??1s_font_loading_state@@QAA@XZ");
//};

//void g_font_globals::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_font_globals@@YAXXZ");
//};

