/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// bool g_use_temporary_directory; // "?g_use_temporary_directory@@3_NA"
// bool g_force_aligned_utility_drive; // "?g_force_aligned_utility_drive@@3_NA"

// void file_path_add_name(char (&)[256], char const *);
// bool file_location_is_valid(short);
// bool file_create(struct s_file_reference *);
// void file_location_get_full_path(short, char const *, char (&)[256]);
// bool file_set_writeable(struct s_file_reference const *, bool);
// bool file_delete(struct s_file_reference *);
// bool file_delete_and_remove_empty_directories(struct s_file_reference const *);
// bool file_delete_recursive(struct s_file_reference *);
// bool file_exists(struct s_file_reference const *);
// bool file_rename(struct s_file_reference *, char const *);
// bool file_copy_to(struct s_file_reference const *, struct s_file_reference const *, bool);
// bool file_copy_to_force(struct s_file_reference const *, struct s_file_reference const *);
// bool file_move_to(struct s_file_reference const *, struct s_file_reference const *);
// bool file_copy_to_recursive(struct s_file_reference *, struct s_file_reference *);
// bool file_is_directory(struct s_file_reference const *);
// bool file_open(struct s_file_reference *, unsigned long, unsigned long *);
// bool file_close(struct s_file_reference *);
// unsigned long file_get_position(struct s_file_reference const *);
// bool file_set_position(struct s_file_reference *, unsigned long, bool);
// unsigned long file_get_eof(struct s_file_reference const *);
// bool file_set_eof(struct s_file_reference *, unsigned long);
// bool file_read(struct s_file_reference *, unsigned long, bool, void *);
// bool file_write(struct s_file_reference *, unsigned long, void const *);
// bool file_read_from_position(struct s_file_reference *, unsigned long, unsigned long, bool, void *);
// bool file_write_to_position(struct s_file_reference *, unsigned long, unsigned long, void const *);
// bool file_get_last_modification_date(struct s_file_reference const *, struct s_file_last_modification_date *);
// int file_compare_last_modification_dates(struct s_file_last_modification_date const *, struct s_file_last_modification_date const *);
// bool file_get_creation_date(struct s_file_reference const *, struct s_file_last_modification_date *);
// void get_current_file_time(struct s_file_last_modification_date *);
// void get_this_morning_at_midnight_file_time(struct s_file_last_modification_date *);
// void file_date_format_for_output(struct s_file_last_modification_date *, char *, long);
// bool file_last_modification_date_to_time(struct s_file_last_modification_date const *, struct tm *, bool);
// unsigned __int64 file_parse_datetime(char const *);
// bool file_get_size(struct s_file_reference const *, unsigned long *);
// void find_files_start(struct s_find_file_data *, unsigned long, struct s_file_reference const *);
// void find_files_start_with_search_spec(struct s_find_file_data *, unsigned long, struct s_file_reference const *, char const *);
// void find_files_end(struct s_find_file_data *);
// bool find_files_next(struct s_find_file_data *, struct s_file_reference *, struct s_file_last_modification_date *);
// void file_path_add_name(char *, long, char const *);
// void file_path_add_extension(char *, long, char const *);
// void file_path_remove_name(char *);
// void file_path_split(char *, char **, char **, char **, char **, bool);
// void file_location_get_full_path(short, char const *, char *, long);
// bool file_read_only(struct s_file_reference const *);
// bool file_reference_create_temporary(struct s_file_reference *);
// bool file_reference_create_temporary_from_path(struct s_file_reference *, char const *);
// bool file_reference_get_file_handle(struct s_file_reference const *, struct s_file_handle *);
// bool file_handle_is_valid(struct s_file_handle);
// void invalidate_file_handle(struct s_file_handle *);
// void file_activity_debug_render(void);
// __int64 file_timer_cycles_per_second(void);
// __int64 file_timer_query(enum e_file_timer_type);
// void file_error(char const *, struct s_file_reference const *, bool);
// void file_error(char const *, struct s_file_reference const *, struct s_file_reference const *, bool);
// bool string_is_absolute_path(char const *);
// void suppress_file_errors(bool);
// struct s_file_reference * file_reference_create(struct s_file_reference *, short);
// time;

//void file_path_add_name(char (&)[256], char const *)
//{
//    mangled_ppc("?file_path_add_name@@YAXAAY0BAA@DPBD@Z");
//};

//bool file_location_is_valid(short)
//{
//    mangled_ppc("?file_location_is_valid@@YA_NF@Z");
//};

//bool file_create(struct s_file_reference *)
//{
//    mangled_ppc("?file_create@@YA_NPAUs_file_reference@@@Z");
//};

//void file_location_get_full_path(short, char const *, char (&)[256])
//{
//    mangled_ppc("?file_location_get_full_path@@YAXFPBDAAY0BAA@D@Z");
//};

//bool file_set_writeable(struct s_file_reference const *, bool)
//{
//    mangled_ppc("?file_set_writeable@@YA_NPBUs_file_reference@@_N@Z");
//};

//bool file_delete(struct s_file_reference *)
//{
//    mangled_ppc("?file_delete@@YA_NPAUs_file_reference@@@Z");
//};

//bool file_delete_and_remove_empty_directories(struct s_file_reference const *)
//{
//    mangled_ppc("?file_delete_and_remove_empty_directories@@YA_NPBUs_file_reference@@@Z");
//};

//bool file_delete_recursive(struct s_file_reference *)
//{
//    mangled_ppc("?file_delete_recursive@@YA_NPAUs_file_reference@@@Z");
//};

//bool file_exists(struct s_file_reference const *)
//{
//    mangled_ppc("?file_exists@@YA_NPBUs_file_reference@@@Z");
//};

//bool file_rename(struct s_file_reference *, char const *)
//{
//    mangled_ppc("?file_rename@@YA_NPAUs_file_reference@@PBD@Z");
//};

//bool file_copy_to(struct s_file_reference const *, struct s_file_reference const *, bool)
//{
//    mangled_ppc("?file_copy_to@@YA_NPBUs_file_reference@@0_N@Z");
//};

//bool file_copy_to_force(struct s_file_reference const *, struct s_file_reference const *)
//{
//    mangled_ppc("?file_copy_to_force@@YA_NPBUs_file_reference@@0@Z");
//};

//bool file_move_to(struct s_file_reference const *, struct s_file_reference const *)
//{
//    mangled_ppc("?file_move_to@@YA_NPBUs_file_reference@@0@Z");
//};

//bool file_copy_to_recursive(struct s_file_reference *, struct s_file_reference *)
//{
//    mangled_ppc("?file_copy_to_recursive@@YA_NPAUs_file_reference@@0@Z");
//};

//bool file_is_directory(struct s_file_reference const *)
//{
//    mangled_ppc("?file_is_directory@@YA_NPBUs_file_reference@@@Z");
//};

//bool file_open(struct s_file_reference *, unsigned long, unsigned long *)
//{
//    mangled_ppc("?file_open@@YA_NPAUs_file_reference@@KPAK@Z");
//};

//bool file_close(struct s_file_reference *)
//{
//    mangled_ppc("?file_close@@YA_NPAUs_file_reference@@@Z");
//};

//unsigned long file_get_position(struct s_file_reference const *)
//{
//    mangled_ppc("?file_get_position@@YAKPBUs_file_reference@@@Z");
//};

//bool file_set_position(struct s_file_reference *, unsigned long, bool)
//{
//    mangled_ppc("?file_set_position@@YA_NPAUs_file_reference@@K_N@Z");
//};

//unsigned long file_get_eof(struct s_file_reference const *)
//{
//    mangled_ppc("?file_get_eof@@YAKPBUs_file_reference@@@Z");
//};

//bool file_set_eof(struct s_file_reference *, unsigned long)
//{
//    mangled_ppc("?file_set_eof@@YA_NPAUs_file_reference@@K@Z");
//};

//bool file_read(struct s_file_reference *, unsigned long, bool, void *)
//{
//    mangled_ppc("?file_read@@YA_NPAUs_file_reference@@K_NPAX@Z");
//};

//bool file_write(struct s_file_reference *, unsigned long, void const *)
//{
//    mangled_ppc("?file_write@@YA_NPAUs_file_reference@@KPBX@Z");
//};

//bool file_read_from_position(struct s_file_reference *, unsigned long, unsigned long, bool, void *)
//{
//    mangled_ppc("?file_read_from_position@@YA_NPAUs_file_reference@@KK_NPAX@Z");
//};

//bool file_write_to_position(struct s_file_reference *, unsigned long, unsigned long, void const *)
//{
//    mangled_ppc("?file_write_to_position@@YA_NPAUs_file_reference@@KKPBX@Z");
//};

//bool file_get_last_modification_date(struct s_file_reference const *, struct s_file_last_modification_date *)
//{
//    mangled_ppc("?file_get_last_modification_date@@YA_NPBUs_file_reference@@PAUs_file_last_modification_date@@@Z");
//};

//int file_compare_last_modification_dates(struct s_file_last_modification_date const *, struct s_file_last_modification_date const *)
//{
//    mangled_ppc("?file_compare_last_modification_dates@@YAHPBUs_file_last_modification_date@@0@Z");
//};

//bool file_get_creation_date(struct s_file_reference const *, struct s_file_last_modification_date *)
//{
//    mangled_ppc("?file_get_creation_date@@YA_NPBUs_file_reference@@PAUs_file_last_modification_date@@@Z");
//};

//void get_current_file_time(struct s_file_last_modification_date *)
//{
//    mangled_ppc("?get_current_file_time@@YAXPAUs_file_last_modification_date@@@Z");
//};

//void get_this_morning_at_midnight_file_time(struct s_file_last_modification_date *)
//{
//    mangled_ppc("?get_this_morning_at_midnight_file_time@@YAXPAUs_file_last_modification_date@@@Z");
//};

//void file_date_format_for_output(struct s_file_last_modification_date *, char *, long)
//{
//    mangled_ppc("?file_date_format_for_output@@YAXPAUs_file_last_modification_date@@PADJ@Z");
//};

//bool file_last_modification_date_to_time(struct s_file_last_modification_date const *, struct tm *, bool)
//{
//    mangled_ppc("?file_last_modification_date_to_time@@YA_NPBUs_file_last_modification_date@@PAUtm@@_N@Z");
//};

//unsigned __int64 file_parse_datetime(char const *)
//{
//    mangled_ppc("?file_parse_datetime@@YA_KPBD@Z");
//};

//bool file_get_size(struct s_file_reference const *, unsigned long *)
//{
//    mangled_ppc("?file_get_size@@YA_NPBUs_file_reference@@PAK@Z");
//};

//void find_files_start(struct s_find_file_data *, unsigned long, struct s_file_reference const *)
//{
//    mangled_ppc("?find_files_start@@YAXPAUs_find_file_data@@KPBUs_file_reference@@@Z");
//};

//void find_files_start_with_search_spec(struct s_find_file_data *, unsigned long, struct s_file_reference const *, char const *)
//{
//    mangled_ppc("?find_files_start_with_search_spec@@YAXPAUs_find_file_data@@KPBUs_file_reference@@PBD@Z");
//};

//void find_files_end(struct s_find_file_data *)
//{
//    mangled_ppc("?find_files_end@@YAXPAUs_find_file_data@@@Z");
//};

//bool find_files_next(struct s_find_file_data *, struct s_file_reference *, struct s_file_last_modification_date *)
//{
//    mangled_ppc("?find_files_next@@YA_NPAUs_find_file_data@@PAUs_file_reference@@PAUs_file_last_modification_date@@@Z");
//};

//void file_path_add_name(char *, long, char const *)
//{
//    mangled_ppc("?file_path_add_name@@YAXPADJPBD@Z");
//};

//void file_path_add_extension(char *, long, char const *)
//{
//    mangled_ppc("?file_path_add_extension@@YAXPADJPBD@Z");
//};

//void file_path_remove_name(char *)
//{
//    mangled_ppc("?file_path_remove_name@@YAXPAD@Z");
//};

//void file_path_split(char *, char **, char **, char **, char **, bool)
//{
//    mangled_ppc("?file_path_split@@YAXPADPAPAD111_N@Z");
//};

//void file_location_get_full_path(short, char const *, char *, long)
//{
//    mangled_ppc("?file_location_get_full_path@@YAXFPBDPADJ@Z");
//};

//bool file_read_only(struct s_file_reference const *)
//{
//    mangled_ppc("?file_read_only@@YA_NPBUs_file_reference@@@Z");
//};

//bool file_reference_create_temporary(struct s_file_reference *)
//{
//    mangled_ppc("?file_reference_create_temporary@@YA_NPAUs_file_reference@@@Z");
//};

//bool file_reference_create_temporary_from_path(struct s_file_reference *, char const *)
//{
//    mangled_ppc("?file_reference_create_temporary_from_path@@YA_NPAUs_file_reference@@PBD@Z");
//};

//bool file_reference_get_file_handle(struct s_file_reference const *, struct s_file_handle *)
//{
//    mangled_ppc("?file_reference_get_file_handle@@YA_NPBUs_file_reference@@PAUs_file_handle@@@Z");
//};

//bool file_handle_is_valid(struct s_file_handle)
//{
//    mangled_ppc("?file_handle_is_valid@@YA_NUs_file_handle@@@Z");
//};

//void invalidate_file_handle(struct s_file_handle *)
//{
//    mangled_ppc("?invalidate_file_handle@@YAXPAUs_file_handle@@@Z");
//};

//void file_activity_debug_render(void)
//{
//    mangled_ppc("?file_activity_debug_render@@YAXXZ");
//};

//__int64 file_timer_cycles_per_second(void)
//{
//    mangled_ppc("?file_timer_cycles_per_second@@YA_JXZ");
//};

//__int64 file_timer_query(enum e_file_timer_type)
//{
//    mangled_ppc("?file_timer_query@@YA_JW4e_file_timer_type@@@Z");
//};

//void file_error(char const *, struct s_file_reference const *, bool)
//{
//    mangled_ppc("?file_error@@YAXPBDPBUs_file_reference@@_N@Z");
//};

//void file_error(char const *, struct s_file_reference const *, struct s_file_reference const *, bool)
//{
//    mangled_ppc("?file_error@@YAXPBDPBUs_file_reference@@1_N@Z");
//};

//bool string_is_absolute_path(char const *)
//{
//    mangled_ppc("?string_is_absolute_path@@YA_NPBD@Z");
//};

//void suppress_file_errors(bool)
//{
//    mangled_ppc("?suppress_file_errors@@YAX_N@Z");
//};

//struct s_file_reference * file_reference_create(struct s_file_reference *, short)
//{
//    mangled_ppc("?file_reference_create@@YAPAUs_file_reference@@PAU1@F@Z");
//};

//time
//{
//    mangled_ppc("time");
//};

