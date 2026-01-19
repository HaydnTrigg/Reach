/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static enum e_load_tag_flag const c_flags_no_init<enum e_load_tag_flag, unsigned short, 10, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_load_tag_flag@@G$09Us_default_enum_string_resolver@@@@2W4e_load_tag_flag@@B"
// struct s_tag_file_shim_backend const *const g_default_tag_file_shim; // "?g_default_tag_file_shim@@3PBUs_tag_file_shim_backend@@B"

// void tag_files_open(enum e_shell_application_type);
// void tag_files_close(void);
// void tag_files_initialize_from_main(void);
// void tag_files_dispose_backend(void);
// void tag_files_set_initialized_backend(struct s_tag_file_shim_backend const *);
// void tag_files_set_backend(struct s_tag_file_shim_backend const *);
// void tag_file_set_backend_by_name(char const *);
// long tag_files_get_sequence_identifier(void);
// bool tag_files_backend_supports_alternate_streams(void);
// bool tag_files_can_load_tags(void);
// bool tag_files_get_total_bytes_read(unsigned __int64*);
// void tag_files_dump_allocation_profile(void);
// bool tag_file_try_to_read(unsigned long, char const *, unsigned long, unsigned long, void *);
// void tag_files_pin_layout_cache(void);
// void tag_files_unpin_layout_cache(void);
// bool tag_files_support_async_data(void);
// bool tag_files_async_data_available(void);
// struct s_async_task_id tag_file_read_async(long, unsigned long, char const *, unsigned long, unsigned long, void *, class c_synchronized_int32*, class c_synchronized_int32*, long, long);
// bool tag_file_has_async_data(unsigned long, char const *);
// bool tag_file_read_only(unsigned long, char const *);
// bool tag_file_get_last_modification_date(unsigned long, char const *, struct s_file_last_modification_date *);
// bool tag_file_set_writeable(unsigned long, char const *, bool);
// bool tag_file_checksum(unsigned long, char const *, unsigned long *);
// bool tag_file_exists(unsigned long, char const *);
// bool tag_file_get_file_reference(struct s_file_reference *, unsigned long, char const *);
// bool tag_file_get_name_and_group_tag_from_path(char const *, unsigned long *, char (&)[256]);
// char const * tag_files_get_root_directory_path(void);
// void tag_files_predict_load(class c_tag_files_prediction_manager *, unsigned long, char const *);
// void tag_files_predict_load_from_block(class c_tag_files_prediction_manager *, struct s_tag_block const *);
// void tag_files_predict_load_finished(void);
// bool tag_save_to_backend(struct s_tag_group const *, char const *, struct s_tag_block *, unsigned long *, class c_tag_alternate_stream_iterator *);
// bool tag_load_from_backend(struct s_tag_block *, struct s_tag_group const *, char const *, class c_flags<enum e_load_tag_flag, unsigned short, 10, struct s_default_enum_string_resolver>, enum e_tag_file_open_result *, bool *, unsigned long *, class c_tag_alternate_stream_consumer *);
// void tag_files_sync_initialize(void);
// void tag_files_sync_dispose(void);
// void tag_files_sync_idle(void);
// bool tag_files_sync_tags_changed(void);
// class c_tag_file_difference_iterator * tag_files_sync_get_difference_iterator(void);
// void tag_files_sync_dispose_difference_iterator(class c_tag_file_difference_iterator *);
// void tag_files_sync_reload_begin(void);
// void tag_files_sync_reload_end(void);
// void tag_files_set_cache_file_output(class c_allocation_interface *, class c_cache_file_builder_tag_resource_output *);
// void tag_files_close_cache_file_output(void);
// void tag_file_get_path(unsigned long, char const *, char (&)[256]);
// bool tag_file_create_temporary_path(unsigned long, char const *, char (&)[256], char (&)[256]);
// char * file_reference_get_name<256>(struct s_file_reference const *, unsigned long, char (&)[256]);
// char * file_reference_get_fullpath<256>(struct s_file_reference const *, char (&)[256]);

//void tag_files_open(enum e_shell_application_type)
//{
//    mangled_ppc("?tag_files_open@@YAXW4e_shell_application_type@@@Z");
//};

//void tag_files_close(void)
//{
//    mangled_ppc("?tag_files_close@@YAXXZ");
//};

//void tag_files_initialize_from_main(void)
//{
//    mangled_ppc("?tag_files_initialize_from_main@@YAXXZ");
//};

//void tag_files_dispose_backend(void)
//{
//    mangled_ppc("?tag_files_dispose_backend@@YAXXZ");
//};

//void tag_files_set_initialized_backend(struct s_tag_file_shim_backend const *)
//{
//    mangled_ppc("?tag_files_set_initialized_backend@@YAXPBUs_tag_file_shim_backend@@@Z");
//};

//void tag_files_set_backend(struct s_tag_file_shim_backend const *)
//{
//    mangled_ppc("?tag_files_set_backend@@YAXPBUs_tag_file_shim_backend@@@Z");
//};

//void tag_file_set_backend_by_name(char const *)
//{
//    mangled_ppc("?tag_file_set_backend_by_name@@YAXPBD@Z");
//};

//long tag_files_get_sequence_identifier(void)
//{
//    mangled_ppc("?tag_files_get_sequence_identifier@@YAJXZ");
//};

//bool tag_files_backend_supports_alternate_streams(void)
//{
//    mangled_ppc("?tag_files_backend_supports_alternate_streams@@YA_NXZ");
//};

//bool tag_files_can_load_tags(void)
//{
//    mangled_ppc("?tag_files_can_load_tags@@YA_NXZ");
//};

//bool tag_files_get_total_bytes_read(unsigned __int64*)
//{
//    mangled_ppc("?tag_files_get_total_bytes_read@@YA_NPA_K@Z");
//};

//void tag_files_dump_allocation_profile(void)
//{
//    mangled_ppc("?tag_files_dump_allocation_profile@@YAXXZ");
//};

//bool tag_file_try_to_read(unsigned long, char const *, unsigned long, unsigned long, void *)
//{
//    mangled_ppc("?tag_file_try_to_read@@YA_NKPBDKKPAX@Z");
//};

//void tag_files_pin_layout_cache(void)
//{
//    mangled_ppc("?tag_files_pin_layout_cache@@YAXXZ");
//};

//void tag_files_unpin_layout_cache(void)
//{
//    mangled_ppc("?tag_files_unpin_layout_cache@@YAXXZ");
//};

//bool tag_files_support_async_data(void)
//{
//    mangled_ppc("?tag_files_support_async_data@@YA_NXZ");
//};

//bool tag_files_async_data_available(void)
//{
//    mangled_ppc("?tag_files_async_data_available@@YA_NXZ");
//};

//struct s_async_task_id tag_file_read_async(long, unsigned long, char const *, unsigned long, unsigned long, void *, class c_synchronized_int32*, class c_synchronized_int32*, long, long)
//{
//    mangled_ppc("?tag_file_read_async@@YA?AUs_async_task_id@@JKPBDKKPAXPAVc_synchronized_int32@@2JJ@Z");
//};

//bool tag_file_has_async_data(unsigned long, char const *)
//{
//    mangled_ppc("?tag_file_has_async_data@@YA_NKPBD@Z");
//};

//bool tag_file_read_only(unsigned long, char const *)
//{
//    mangled_ppc("?tag_file_read_only@@YA_NKPBD@Z");
//};

//bool tag_file_get_last_modification_date(unsigned long, char const *, struct s_file_last_modification_date *)
//{
//    mangled_ppc("?tag_file_get_last_modification_date@@YA_NKPBDPAUs_file_last_modification_date@@@Z");
//};

//bool tag_file_set_writeable(unsigned long, char const *, bool)
//{
//    mangled_ppc("?tag_file_set_writeable@@YA_NKPBD_N@Z");
//};

//bool tag_file_checksum(unsigned long, char const *, unsigned long *)
//{
//    mangled_ppc("?tag_file_checksum@@YA_NKPBDPAK@Z");
//};

//bool tag_file_exists(unsigned long, char const *)
//{
//    mangled_ppc("?tag_file_exists@@YA_NKPBD@Z");
//};

//bool tag_file_get_file_reference(struct s_file_reference *, unsigned long, char const *)
//{
//    mangled_ppc("?tag_file_get_file_reference@@YA_NPAUs_file_reference@@KPBD@Z");
//};

//bool tag_file_get_name_and_group_tag_from_path(char const *, unsigned long *, char (&)[256])
//{
//    mangled_ppc("?tag_file_get_name_and_group_tag_from_path@@YA_NPBDPAKAAY0BAA@D@Z");
//};

//char const * tag_files_get_root_directory_path(void)
//{
//    mangled_ppc("?tag_files_get_root_directory_path@@YAPBDXZ");
//};

//void tag_files_predict_load(class c_tag_files_prediction_manager *, unsigned long, char const *)
//{
//    mangled_ppc("?tag_files_predict_load@@YAXPAVc_tag_files_prediction_manager@@KPBD@Z");
//};

//void tag_files_predict_load_from_block(class c_tag_files_prediction_manager *, struct s_tag_block const *)
//{
//    mangled_ppc("?tag_files_predict_load_from_block@@YAXPAVc_tag_files_prediction_manager@@PBUs_tag_block@@@Z");
//};

//void tag_files_predict_load_finished(void)
//{
//    mangled_ppc("?tag_files_predict_load_finished@@YAXXZ");
//};

//bool tag_save_to_backend(struct s_tag_group const *, char const *, struct s_tag_block *, unsigned long *, class c_tag_alternate_stream_iterator *)
//{
//    mangled_ppc("?tag_save_to_backend@@YA_NPBUs_tag_group@@PBDPAUs_tag_block@@PAKPAVc_tag_alternate_stream_iterator@@@Z");
//};

//bool tag_load_from_backend(struct s_tag_block *, struct s_tag_group const *, char const *, class c_flags<enum e_load_tag_flag, unsigned short, 10, struct s_default_enum_string_resolver>, enum e_tag_file_open_result *, bool *, unsigned long *, class c_tag_alternate_stream_consumer *)
//{
//    mangled_ppc("?tag_load_from_backend@@YA_NPAUs_tag_block@@PBUs_tag_group@@PBDV?$c_flags@W4e_load_tag_flag@@G$09Us_default_enum_string_resolver@@@@PAW4e_tag_file_open_result@@PA_NPAKPAVc_tag_alternate_stream_consumer@@@Z");
//};

//void tag_files_sync_initialize(void)
//{
//    mangled_ppc("?tag_files_sync_initialize@@YAXXZ");
//};

//void tag_files_sync_dispose(void)
//{
//    mangled_ppc("?tag_files_sync_dispose@@YAXXZ");
//};

//void tag_files_sync_idle(void)
//{
//    mangled_ppc("?tag_files_sync_idle@@YAXXZ");
//};

//bool tag_files_sync_tags_changed(void)
//{
//    mangled_ppc("?tag_files_sync_tags_changed@@YA_NXZ");
//};

//class c_tag_file_difference_iterator * tag_files_sync_get_difference_iterator(void)
//{
//    mangled_ppc("?tag_files_sync_get_difference_iterator@@YAPAVc_tag_file_difference_iterator@@XZ");
//};

//void tag_files_sync_dispose_difference_iterator(class c_tag_file_difference_iterator *)
//{
//    mangled_ppc("?tag_files_sync_dispose_difference_iterator@@YAXPAVc_tag_file_difference_iterator@@@Z");
//};

//void tag_files_sync_reload_begin(void)
//{
//    mangled_ppc("?tag_files_sync_reload_begin@@YAXXZ");
//};

//void tag_files_sync_reload_end(void)
//{
//    mangled_ppc("?tag_files_sync_reload_end@@YAXXZ");
//};

//void tag_files_set_cache_file_output(class c_allocation_interface *, class c_cache_file_builder_tag_resource_output *)
//{
//    mangled_ppc("?tag_files_set_cache_file_output@@YAXPAVc_allocation_interface@@PAVc_cache_file_builder_tag_resource_output@@@Z");
//};

//void tag_files_close_cache_file_output(void)
//{
//    mangled_ppc("?tag_files_close_cache_file_output@@YAXXZ");
//};

//void tag_file_get_path(unsigned long, char const *, char (&)[256])
//{
//    mangled_ppc("?tag_file_get_path@@YAXKPBDAAY0BAA@D@Z");
//};

//bool tag_file_create_temporary_path(unsigned long, char const *, char (&)[256], char (&)[256])
//{
//    mangled_ppc("?tag_file_create_temporary_path@@YA_NKPBDAAY0BAA@D1@Z");
//};

//char * file_reference_get_name<256>(struct s_file_reference const *, unsigned long, char (&)[256])
//{
//    mangled_ppc("??$file_reference_get_name@$0BAA@@@YAPADPBUs_file_reference@@KAAY0BAA@D@Z");
//};

//char * file_reference_get_fullpath<256>(struct s_file_reference const *, char (&)[256])
//{
//    mangled_ppc("??$file_reference_get_fullpath@$0BAA@@@YAPADPBUs_file_reference@@AAY0BAA@D@Z");
//};

