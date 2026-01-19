/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// struct s_tag_file_shim_backend const g_single_file_tag_file_backend; // "?g_single_file_tag_file_backend@@3Us_tag_file_shim_backend@@B"
// struct s_tag_file_shim_backend const g_monolithic_tag_file_backend; // "?g_monolithic_tag_file_backend@@3Us_tag_file_shim_backend@@B"
// struct s_tag_file_shim_backend const g_xbox_monolithic_tag_file_backend; // "?g_xbox_monolithic_tag_file_backend@@3Us_tag_file_shim_backend@@B"
// struct s_tag_file_shim_backend const g_cache_file_builder_tag_file_backend; // "?g_cache_file_builder_tag_file_backend@@3Us_tag_file_shim_backend@@B"
// struct s_tag_file_shim_backend const g_cache_file_shared_tag_file_backend; // "?g_cache_file_shared_tag_file_backend@@3Us_tag_file_shim_backend@@B"
// struct s_tag_file_shim_backend const g_cache_file_campaign_tag_file_backend; // "?g_cache_file_campaign_tag_file_backend@@3Us_tag_file_shim_backend@@B"
// struct s_tag_file_shim_backend const g_simple_patched_tag_file_backend; // "?g_simple_patched_tag_file_backend@@3Us_tag_file_shim_backend@@B"
// struct s_tag_file_new_globals g_tag_file_new_globals; // "?g_tag_file_new_globals@@3Us_tag_file_new_globals@@A"
// class c_allocation_interface *g_tag_file_new_allocator; // "?g_tag_file_new_allocator@@3PAVc_allocation_interface@@A"
// class c_tag_group_files_allocation g_backend_tracker_allocator; // "?g_backend_tracker_allocator@@3Vc_tag_group_files_allocation@@A"
// class c_monolithic_tag_group_files_allocator g_monolithic_tag_allocator; // "?g_monolithic_tag_allocator@@3Vc_monolithic_tag_group_files_allocator@@A"

// public: virtual void * c_tag_group_files_allocation::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void c_tag_group_files_allocation::deallocate(void *, char const *, long);
// void tag_group_files_dispose_backend(struct s_tag_file_backend *);
// struct s_tag_file_backend * tag_group_files_setup_backend(struct s_tag_file_backend *);
// void tag_files_new_single_file_open(void);
// void tag_files_new_single_file_close(void);
// void tag_files_new_monolithic_open(void);
// void tag_files_new_monolithic_xbox_open(void);
// void tag_files_new_monolithic_close(void);
// void tag_files_new_cache_file_builder_single_open(void);
// void tag_files_new_cache_file_builder_single_close(void);
// void tag_files_new_cache_file_builder_shared_open(void);
// void tag_files_new_cache_file_builder_shared_close(void);
// void tag_files_new_cache_file_builder_campaign_open(void);
// void tag_files_new_cache_file_builder_campaign_close(void);
// void tag_files_new_simple_patched_open(void);
// void tag_files_new_simple_patched_close(void);
// void tag_files_new_initialize_resource_reader(void);
// void tag_files_new_dispose_resource_reader(void);
// class c_tag_resource_persist_reader * tag_group_files_get_resource_reader(struct s_tag_group const *, char const *);
// class c_tag_resource_persist_writer * tag_group_files_get_resource_writer(void);
// bool tag_files_new_get_total_bytes_read(unsigned __int64*);
// void tag_files_new_dump_allocation_profile(void);
// bool tag_file_new_read_only(unsigned long, char const *);
// bool tag_file_new_get_last_modification_date(unsigned long, char const *, struct s_file_last_modification_date *);
// bool tag_file_new_set_writeable(unsigned long, char const *, bool);
// bool tag_file_new_checksum(unsigned long, char const *, unsigned long *);
// bool tag_file_new_exists(unsigned long, char const *);
// char const * tag_files_new_get_root_directory_path(void);
// bool tag_file_new_get_file_reference(struct s_file_reference *, unsigned long, char const *);
// bool tag_file_new_get_name_and_group_tag_from_path(char const *, unsigned long *, char (&)[256]);
// bool tag_file_new_try_to_read(unsigned long, char const *, unsigned long, unsigned long, void *);
// void tag_files_new_pin_layout_cache(void);
// void tag_files_new_unpin_layout_cache(void);
// bool tag_files_new_support_async_data_shim(void);
// bool tag_files_new_async_data_available_shim(void);
// struct s_async_task_id tag_file_new_async_read(long, unsigned long, char const *, unsigned long, unsigned long, void *, class c_synchronized_int32*, class c_synchronized_int32*, long, long);
// bool tag_file_new_has_async_data(unsigned long, char const *);
// void tag_files_new_predict_load(class c_tag_files_prediction_manager *, unsigned long, char const *);
// public: c_tag_group_files_prefetch_tag_read_context::c_tag_group_files_prefetch_tag_read_context(class c_allocation_interface *);
// public: virtual bool c_tag_group_files_prefetch_tag_read_context::acquire_tag_read_context(struct s_tag_group const *, char const *, struct s_tag_read_parameters *);
// public: virtual void c_tag_group_files_prefetch_tag_read_context::release_tag_read_context(struct s_tag_read_parameters *);
// public: c_tag_file_prefetch_tag_read_context::c_tag_file_prefetch_tag_read_context(void);
// public: c_tag_group_files_prefetch_tag_read_context::~c_tag_group_files_prefetch_tag_read_context(void);
// void tag_files_new_predict_load_from_block(class c_tag_files_prediction_manager *, struct s_tag_block const *);
// void tag_files_new_predict_load_finished(void);
// void tag_files_new_sync_initialize(void);
// void tag_files_new_sync_dispose(void);
// void tag_files_new_sync_idle(void);
// bool tag_files_new_sync_tags_changed(void);
// class c_tag_file_difference_iterator * tag_files_new_sync_get_difference_iterator(void);
// void tag_files_new_sync_dispose_difference_iterator(class c_tag_file_difference_iterator *);
// void tag_files_new_sync_reload_begin(void);
// void tag_files_new_sync_reload_end(void);
// void * tag_group_files_build_index(void *, char const *, char const *, class c_tag_group_dictionary *, class c_allocation_interface *);
// void const * tag_group_files_try_to_get_master_tag_file_index_DONT_CACHE_DONT_MODIFY(void);
// void tag_files_new_set_cache_file_output(class c_allocation_interface *, class c_cache_file_builder_tag_resource_output *);
// void tag_files_new_close_cache_file_output(void);
// bool tag_load_from_backend_new(struct s_tag_block *, struct s_tag_group const *, char const *, class c_flags<enum e_load_tag_flag, unsigned short, 10, struct s_default_enum_string_resolver>, enum e_tag_file_open_result *, bool *, unsigned long *, class c_tag_alternate_stream_consumer *);
// public: c_tag_group_files_allocator::c_tag_group_files_allocator(struct s_tag_group const *, class c_allocation_interface *);
// public: virtual long c_tag_group_files_allocator::string_id_new(char const *);
// public: virtual char const * c_tag_group_files_allocator::string_id_get_string_const(long);
// public: virtual void c_tag_group_files_allocator::string_id_release(long);
// public: virtual char const * c_tag_group_files_allocator::add_tracked_string(char const *);
// public: virtual void c_tag_group_files_allocator::remove_tracked_string(char const *);
// public: virtual void * c_tag_group_files_allocator::allocate(long, long, char const *, unsigned long);
// public: virtual void c_tag_group_files_allocator::deallocate(void *, long, unsigned long);
// public: virtual void * c_tag_group_files_allocator::allocate_temporary(long, long, char const *);
// public: virtual void c_tag_group_files_allocator::deallocate_temporary(void *, long);
// bool tag_save_to_backend_new(struct s_tag_group const *, char const *, struct s_tag_block *, unsigned long *, class c_tag_alternate_stream_iterator *);
// bool tag_files_new_backend_supports_alternate_streams(void);
// bool tag_files_new_can_load_tags(void);
// public: c_typed_opaque_data<class c_tag_group_files_allocator, 12, 4>::c_typed_opaque_data<class c_tag_group_files_allocator, 12, 4>(void);
// public: c_typed_opaque_data<class c_tag_group_files_allocator, 12, 4>::~c_typed_opaque_data<class c_tag_group_files_allocator, 12, 4>(void);
// public: void c_typed_opaque_data<class c_tag_group_files_allocator, 12, 4>::destruct(void);
// public: class c_tag_group_files_allocator * c_typed_opaque_data<class c_tag_group_files_allocator, 12, 4>::get(void);
// public: class c_tag_group_files_allocator * c_typed_opaque_data<class c_tag_group_files_allocator, 12, 4>::construct<struct s_tag_group const *, class c_allocation_interface *>(struct s_tag_group const *, class c_allocation_interface *);
// public: class c_tag_group_files_allocator * c_opaque_data<class c_tag_group_files_allocator, 12, 4>::get(void);
// public: c_tag_group_files_allocation::c_tag_group_files_allocation(void);
// public: c_monolithic_tag_group_files_allocator::c_monolithic_tag_group_files_allocator(void);
// public: virtual long c_monolithic_tag_group_files_allocator::string_id_new(char const *);
// public: virtual char const * c_monolithic_tag_group_files_allocator::string_id_get_string_const(long);
// public: virtual void c_monolithic_tag_group_files_allocator::string_id_release(long);
// public: virtual char const * c_monolithic_tag_group_files_allocator::add_tracked_string(char const *);
// public: virtual void c_monolithic_tag_group_files_allocator::remove_tracked_string(char const *);
// public: virtual void * c_monolithic_tag_group_files_allocator::allocate(long, long, char const *, unsigned long);
// public: virtual void c_monolithic_tag_group_files_allocator::deallocate(void *, long, unsigned long);
// public: virtual void * c_monolithic_tag_group_files_allocator::allocate_temporary(long, long, char const *);
// public: virtual void c_monolithic_tag_group_files_allocator::deallocate_temporary(void *, long);

//public: virtual void * c_tag_group_files_allocation::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@c_tag_group_files_allocation@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void c_tag_group_files_allocation::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@c_tag_group_files_allocation@@UAAXPAXPBDJ@Z");
//};

//void tag_group_files_dispose_backend(struct s_tag_file_backend *)
//{
//    mangled_ppc("?tag_group_files_dispose_backend@@YAXPAUs_tag_file_backend@@@Z");
//};

//struct s_tag_file_backend * tag_group_files_setup_backend(struct s_tag_file_backend *)
//{
//    mangled_ppc("?tag_group_files_setup_backend@@YAPAUs_tag_file_backend@@PAU1@@Z");
//};

//void tag_files_new_single_file_open(void)
//{
//    mangled_ppc("?tag_files_new_single_file_open@@YAXXZ");
//};

//void tag_files_new_single_file_close(void)
//{
//    mangled_ppc("?tag_files_new_single_file_close@@YAXXZ");
//};

//void tag_files_new_monolithic_open(void)
//{
//    mangled_ppc("?tag_files_new_monolithic_open@@YAXXZ");
//};

//void tag_files_new_monolithic_xbox_open(void)
//{
//    mangled_ppc("?tag_files_new_monolithic_xbox_open@@YAXXZ");
//};

//void tag_files_new_monolithic_close(void)
//{
//    mangled_ppc("?tag_files_new_monolithic_close@@YAXXZ");
//};

//void tag_files_new_cache_file_builder_single_open(void)
//{
//    mangled_ppc("?tag_files_new_cache_file_builder_single_open@@YAXXZ");
//};

//void tag_files_new_cache_file_builder_single_close(void)
//{
//    mangled_ppc("?tag_files_new_cache_file_builder_single_close@@YAXXZ");
//};

//void tag_files_new_cache_file_builder_shared_open(void)
//{
//    mangled_ppc("?tag_files_new_cache_file_builder_shared_open@@YAXXZ");
//};

//void tag_files_new_cache_file_builder_shared_close(void)
//{
//    mangled_ppc("?tag_files_new_cache_file_builder_shared_close@@YAXXZ");
//};

//void tag_files_new_cache_file_builder_campaign_open(void)
//{
//    mangled_ppc("?tag_files_new_cache_file_builder_campaign_open@@YAXXZ");
//};

//void tag_files_new_cache_file_builder_campaign_close(void)
//{
//    mangled_ppc("?tag_files_new_cache_file_builder_campaign_close@@YAXXZ");
//};

//void tag_files_new_simple_patched_open(void)
//{
//    mangled_ppc("?tag_files_new_simple_patched_open@@YAXXZ");
//};

//void tag_files_new_simple_patched_close(void)
//{
//    mangled_ppc("?tag_files_new_simple_patched_close@@YAXXZ");
//};

//void tag_files_new_initialize_resource_reader(void)
//{
//    mangled_ppc("?tag_files_new_initialize_resource_reader@@YAXXZ");
//};

//void tag_files_new_dispose_resource_reader(void)
//{
//    mangled_ppc("?tag_files_new_dispose_resource_reader@@YAXXZ");
//};

//class c_tag_resource_persist_reader * tag_group_files_get_resource_reader(struct s_tag_group const *, char const *)
//{
//    mangled_ppc("?tag_group_files_get_resource_reader@@YAPAVc_tag_resource_persist_reader@@PBUs_tag_group@@PBD@Z");
//};

//class c_tag_resource_persist_writer * tag_group_files_get_resource_writer(void)
//{
//    mangled_ppc("?tag_group_files_get_resource_writer@@YAPAVc_tag_resource_persist_writer@@XZ");
//};

//bool tag_files_new_get_total_bytes_read(unsigned __int64*)
//{
//    mangled_ppc("?tag_files_new_get_total_bytes_read@@YA_NPA_K@Z");
//};

//void tag_files_new_dump_allocation_profile(void)
//{
//    mangled_ppc("?tag_files_new_dump_allocation_profile@@YAXXZ");
//};

//bool tag_file_new_read_only(unsigned long, char const *)
//{
//    mangled_ppc("?tag_file_new_read_only@@YA_NKPBD@Z");
//};

//bool tag_file_new_get_last_modification_date(unsigned long, char const *, struct s_file_last_modification_date *)
//{
//    mangled_ppc("?tag_file_new_get_last_modification_date@@YA_NKPBDPAUs_file_last_modification_date@@@Z");
//};

//bool tag_file_new_set_writeable(unsigned long, char const *, bool)
//{
//    mangled_ppc("?tag_file_new_set_writeable@@YA_NKPBD_N@Z");
//};

//bool tag_file_new_checksum(unsigned long, char const *, unsigned long *)
//{
//    mangled_ppc("?tag_file_new_checksum@@YA_NKPBDPAK@Z");
//};

//bool tag_file_new_exists(unsigned long, char const *)
//{
//    mangled_ppc("?tag_file_new_exists@@YA_NKPBD@Z");
//};

//char const * tag_files_new_get_root_directory_path(void)
//{
//    mangled_ppc("?tag_files_new_get_root_directory_path@@YAPBDXZ");
//};

//bool tag_file_new_get_file_reference(struct s_file_reference *, unsigned long, char const *)
//{
//    mangled_ppc("?tag_file_new_get_file_reference@@YA_NPAUs_file_reference@@KPBD@Z");
//};

//bool tag_file_new_get_name_and_group_tag_from_path(char const *, unsigned long *, char (&)[256])
//{
//    mangled_ppc("?tag_file_new_get_name_and_group_tag_from_path@@YA_NPBDPAKAAY0BAA@D@Z");
//};

//bool tag_file_new_try_to_read(unsigned long, char const *, unsigned long, unsigned long, void *)
//{
//    mangled_ppc("?tag_file_new_try_to_read@@YA_NKPBDKKPAX@Z");
//};

//void tag_files_new_pin_layout_cache(void)
//{
//    mangled_ppc("?tag_files_new_pin_layout_cache@@YAXXZ");
//};

//void tag_files_new_unpin_layout_cache(void)
//{
//    mangled_ppc("?tag_files_new_unpin_layout_cache@@YAXXZ");
//};

//bool tag_files_new_support_async_data_shim(void)
//{
//    mangled_ppc("?tag_files_new_support_async_data_shim@@YA_NXZ");
//};

//bool tag_files_new_async_data_available_shim(void)
//{
//    mangled_ppc("?tag_files_new_async_data_available_shim@@YA_NXZ");
//};

//struct s_async_task_id tag_file_new_async_read(long, unsigned long, char const *, unsigned long, unsigned long, void *, class c_synchronized_int32*, class c_synchronized_int32*, long, long)
//{
//    mangled_ppc("?tag_file_new_async_read@@YA?AUs_async_task_id@@JKPBDKKPAXPAVc_synchronized_int32@@2JJ@Z");
//};

//bool tag_file_new_has_async_data(unsigned long, char const *)
//{
//    mangled_ppc("?tag_file_new_has_async_data@@YA_NKPBD@Z");
//};

//void tag_files_new_predict_load(class c_tag_files_prediction_manager *, unsigned long, char const *)
//{
//    mangled_ppc("?tag_files_new_predict_load@@YAXPAVc_tag_files_prediction_manager@@KPBD@Z");
//};

//public: c_tag_group_files_prefetch_tag_read_context::c_tag_group_files_prefetch_tag_read_context(class c_allocation_interface *)
//{
//    mangled_ppc("??0c_tag_group_files_prefetch_tag_read_context@@QAA@PAVc_allocation_interface@@@Z");
//};

//public: virtual bool c_tag_group_files_prefetch_tag_read_context::acquire_tag_read_context(struct s_tag_group const *, char const *, struct s_tag_read_parameters *)
//{
//    mangled_ppc("?acquire_tag_read_context@c_tag_group_files_prefetch_tag_read_context@@UAA_NPBUs_tag_group@@PBDPAUs_tag_read_parameters@@@Z");
//};

//public: virtual void c_tag_group_files_prefetch_tag_read_context::release_tag_read_context(struct s_tag_read_parameters *)
//{
//    mangled_ppc("?release_tag_read_context@c_tag_group_files_prefetch_tag_read_context@@UAAXPAUs_tag_read_parameters@@@Z");
//};

//public: c_tag_file_prefetch_tag_read_context::c_tag_file_prefetch_tag_read_context(void)
//{
//    mangled_ppc("??0c_tag_file_prefetch_tag_read_context@@QAA@XZ");
//};

//public: c_tag_group_files_prefetch_tag_read_context::~c_tag_group_files_prefetch_tag_read_context(void)
//{
//    mangled_ppc("??1c_tag_group_files_prefetch_tag_read_context@@QAA@XZ");
//};

//void tag_files_new_predict_load_from_block(class c_tag_files_prediction_manager *, struct s_tag_block const *)
//{
//    mangled_ppc("?tag_files_new_predict_load_from_block@@YAXPAVc_tag_files_prediction_manager@@PBUs_tag_block@@@Z");
//};

//void tag_files_new_predict_load_finished(void)
//{
//    mangled_ppc("?tag_files_new_predict_load_finished@@YAXXZ");
//};

//void tag_files_new_sync_initialize(void)
//{
//    mangled_ppc("?tag_files_new_sync_initialize@@YAXXZ");
//};

//void tag_files_new_sync_dispose(void)
//{
//    mangled_ppc("?tag_files_new_sync_dispose@@YAXXZ");
//};

//void tag_files_new_sync_idle(void)
//{
//    mangled_ppc("?tag_files_new_sync_idle@@YAXXZ");
//};

//bool tag_files_new_sync_tags_changed(void)
//{
//    mangled_ppc("?tag_files_new_sync_tags_changed@@YA_NXZ");
//};

//class c_tag_file_difference_iterator * tag_files_new_sync_get_difference_iterator(void)
//{
//    mangled_ppc("?tag_files_new_sync_get_difference_iterator@@YAPAVc_tag_file_difference_iterator@@XZ");
//};

//void tag_files_new_sync_dispose_difference_iterator(class c_tag_file_difference_iterator *)
//{
//    mangled_ppc("?tag_files_new_sync_dispose_difference_iterator@@YAXPAVc_tag_file_difference_iterator@@@Z");
//};

//void tag_files_new_sync_reload_begin(void)
//{
//    mangled_ppc("?tag_files_new_sync_reload_begin@@YAXXZ");
//};

//void tag_files_new_sync_reload_end(void)
//{
//    mangled_ppc("?tag_files_new_sync_reload_end@@YAXXZ");
//};

//void * tag_group_files_build_index(void *, char const *, char const *, class c_tag_group_dictionary *, class c_allocation_interface *)
//{
//    mangled_ppc("?tag_group_files_build_index@@YAPAXPAXPBD1PAVc_tag_group_dictionary@@PAVc_allocation_interface@@@Z");
//};

//void const * tag_group_files_try_to_get_master_tag_file_index_DONT_CACHE_DONT_MODIFY(void)
//{
//    mangled_ppc("?tag_group_files_try_to_get_master_tag_file_index_DONT_CACHE_DONT_MODIFY@@YAPBXXZ");
//};

//void tag_files_new_set_cache_file_output(class c_allocation_interface *, class c_cache_file_builder_tag_resource_output *)
//{
//    mangled_ppc("?tag_files_new_set_cache_file_output@@YAXPAVc_allocation_interface@@PAVc_cache_file_builder_tag_resource_output@@@Z");
//};

//void tag_files_new_close_cache_file_output(void)
//{
//    mangled_ppc("?tag_files_new_close_cache_file_output@@YAXXZ");
//};

//bool tag_load_from_backend_new(struct s_tag_block *, struct s_tag_group const *, char const *, class c_flags<enum e_load_tag_flag, unsigned short, 10, struct s_default_enum_string_resolver>, enum e_tag_file_open_result *, bool *, unsigned long *, class c_tag_alternate_stream_consumer *)
//{
//    mangled_ppc("?tag_load_from_backend_new@@YA_NPAUs_tag_block@@PBUs_tag_group@@PBDV?$c_flags@W4e_load_tag_flag@@G$09Us_default_enum_string_resolver@@@@PAW4e_tag_file_open_result@@PA_NPAKPAVc_tag_alternate_stream_consumer@@@Z");
//};

//public: c_tag_group_files_allocator::c_tag_group_files_allocator(struct s_tag_group const *, class c_allocation_interface *)
//{
//    mangled_ppc("??0c_tag_group_files_allocator@@QAA@PBUs_tag_group@@PAVc_allocation_interface@@@Z");
//};

//public: virtual long c_tag_group_files_allocator::string_id_new(char const *)
//{
//    mangled_ppc("?string_id_new@c_tag_group_files_allocator@@UAAJPBD@Z");
//};

//public: virtual char const * c_tag_group_files_allocator::string_id_get_string_const(long)
//{
//    mangled_ppc("?string_id_get_string_const@c_tag_group_files_allocator@@UAAPBDJ@Z");
//};

//public: virtual void c_tag_group_files_allocator::string_id_release(long)
//{
//    mangled_ppc("?string_id_release@c_tag_group_files_allocator@@UAAXJ@Z");
//};

//public: virtual char const * c_tag_group_files_allocator::add_tracked_string(char const *)
//{
//    mangled_ppc("?add_tracked_string@c_tag_group_files_allocator@@UAAPBDPBD@Z");
//};

//public: virtual void c_tag_group_files_allocator::remove_tracked_string(char const *)
//{
//    mangled_ppc("?remove_tracked_string@c_tag_group_files_allocator@@UAAXPBD@Z");
//};

//public: virtual void * c_tag_group_files_allocator::allocate(long, long, char const *, unsigned long)
//{
//    mangled_ppc("?allocate@c_tag_group_files_allocator@@UAAPAXJJPBDK@Z");
//};

//public: virtual void c_tag_group_files_allocator::deallocate(void *, long, unsigned long)
//{
//    mangled_ppc("?deallocate@c_tag_group_files_allocator@@UAAXPAXJK@Z");
//};

//public: virtual void * c_tag_group_files_allocator::allocate_temporary(long, long, char const *)
//{
//    mangled_ppc("?allocate_temporary@c_tag_group_files_allocator@@UAAPAXJJPBD@Z");
//};

//public: virtual void c_tag_group_files_allocator::deallocate_temporary(void *, long)
//{
//    mangled_ppc("?deallocate_temporary@c_tag_group_files_allocator@@UAAXPAXJ@Z");
//};

//bool tag_save_to_backend_new(struct s_tag_group const *, char const *, struct s_tag_block *, unsigned long *, class c_tag_alternate_stream_iterator *)
//{
//    mangled_ppc("?tag_save_to_backend_new@@YA_NPBUs_tag_group@@PBDPAUs_tag_block@@PAKPAVc_tag_alternate_stream_iterator@@@Z");
//};

//bool tag_files_new_backend_supports_alternate_streams(void)
//{
//    mangled_ppc("?tag_files_new_backend_supports_alternate_streams@@YA_NXZ");
//};

//bool tag_files_new_can_load_tags(void)
//{
//    mangled_ppc("?tag_files_new_can_load_tags@@YA_NXZ");
//};

//public: c_typed_opaque_data<class c_tag_group_files_allocator, 12, 4>::c_typed_opaque_data<class c_tag_group_files_allocator, 12, 4>(void)
//{
//    mangled_ppc("??0?$c_typed_opaque_data@Vc_tag_group_files_allocator@@$0M@$03@@QAA@XZ");
//};

//public: c_typed_opaque_data<class c_tag_group_files_allocator, 12, 4>::~c_typed_opaque_data<class c_tag_group_files_allocator, 12, 4>(void)
//{
//    mangled_ppc("??1?$c_typed_opaque_data@Vc_tag_group_files_allocator@@$0M@$03@@QAA@XZ");
//};

//public: void c_typed_opaque_data<class c_tag_group_files_allocator, 12, 4>::destruct(void)
//{
//    mangled_ppc("?destruct@?$c_typed_opaque_data@Vc_tag_group_files_allocator@@$0M@$03@@QAAXXZ");
//};

//public: class c_tag_group_files_allocator * c_typed_opaque_data<class c_tag_group_files_allocator, 12, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_typed_opaque_data@Vc_tag_group_files_allocator@@$0M@$03@@QAAPAVc_tag_group_files_allocator@@XZ");
//};

//public: class c_tag_group_files_allocator * c_typed_opaque_data<class c_tag_group_files_allocator, 12, 4>::construct<struct s_tag_group const *, class c_allocation_interface *>(struct s_tag_group const *, class c_allocation_interface *)
//{
//    mangled_ppc("??$construct@PBUs_tag_group@@PAVc_allocation_interface@@@?$c_typed_opaque_data@Vc_tag_group_files_allocator@@$0M@$03@@QAAPAVc_tag_group_files_allocator@@PBUs_tag_group@@PAVc_allocation_interface@@@Z");
//};

//public: class c_tag_group_files_allocator * c_opaque_data<class c_tag_group_files_allocator, 12, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_opaque_data@Vc_tag_group_files_allocator@@$0M@$03@@QAAPAVc_tag_group_files_allocator@@XZ");
//};

//public: c_tag_group_files_allocation::c_tag_group_files_allocation(void)
//{
//    mangled_ppc("??0c_tag_group_files_allocation@@QAA@XZ");
//};

//public: c_monolithic_tag_group_files_allocator::c_monolithic_tag_group_files_allocator(void)
//{
//    mangled_ppc("??0c_monolithic_tag_group_files_allocator@@QAA@XZ");
//};

//public: virtual long c_monolithic_tag_group_files_allocator::string_id_new(char const *)
//{
//    mangled_ppc("?string_id_new@c_monolithic_tag_group_files_allocator@@UAAJPBD@Z");
//};

//public: virtual char const * c_monolithic_tag_group_files_allocator::string_id_get_string_const(long)
//{
//    mangled_ppc("?string_id_get_string_const@c_monolithic_tag_group_files_allocator@@UAAPBDJ@Z");
//};

//public: virtual void c_monolithic_tag_group_files_allocator::string_id_release(long)
//{
//    mangled_ppc("?string_id_release@c_monolithic_tag_group_files_allocator@@UAAXJ@Z");
//};

//public: virtual char const * c_monolithic_tag_group_files_allocator::add_tracked_string(char const *)
//{
//    mangled_ppc("?add_tracked_string@c_monolithic_tag_group_files_allocator@@UAAPBDPBD@Z");
//};

//public: virtual void c_monolithic_tag_group_files_allocator::remove_tracked_string(char const *)
//{
//    mangled_ppc("?remove_tracked_string@c_monolithic_tag_group_files_allocator@@UAAXPBD@Z");
//};

//public: virtual void * c_monolithic_tag_group_files_allocator::allocate(long, long, char const *, unsigned long)
//{
//    mangled_ppc("?allocate@c_monolithic_tag_group_files_allocator@@UAAPAXJJPBDK@Z");
//};

//public: virtual void c_monolithic_tag_group_files_allocator::deallocate(void *, long, unsigned long)
//{
//    mangled_ppc("?deallocate@c_monolithic_tag_group_files_allocator@@UAAXPAXJK@Z");
//};

//public: virtual void * c_monolithic_tag_group_files_allocator::allocate_temporary(long, long, char const *)
//{
//    mangled_ppc("?allocate_temporary@c_monolithic_tag_group_files_allocator@@UAAPAXJJPBD@Z");
//};

//public: virtual void c_monolithic_tag_group_files_allocator::deallocate_temporary(void *, long)
//{
//    mangled_ppc("?deallocate_temporary@c_monolithic_tag_group_files_allocator@@UAAXPAXJ@Z");
//};

