/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// bool tag_file_read_into_block(struct s_tag_persist_parameters const *, class c_tag_file_read_interface *, bool, struct s_tag_block *);
// public: c_tag_group_files_persist_context::c_tag_group_files_persist_context(class c_persist_stream *, struct s_tag_persist_parameters const *, bool);
// public: virtual class c_persist_stream * c_tag_group_files_persist_context::get_root_data_stream(void);
// public: virtual class c_tag_field_editor_manager * c_tag_group_files_persist_context::get_editor_manager(void);
// public: virtual class c_tag_allocator * c_tag_group_files_persist_context::get_allocator(void);
// public: virtual class c_allocation_interface * c_tag_group_files_persist_context::get_scratch_allocator(void);
// public: virtual class c_tag_resource_persist_reader * c_tag_group_files_persist_context::get_resource_reader(void);
// public: virtual class c_tag_resource_persist_writer * c_tag_group_files_persist_context::get_resource_writer(void);
// public: virtual enum e_runtime_platform_type c_tag_group_files_persist_context::get_runtime_platform(void);
// public: virtual bool c_tag_group_files_persist_context::editing(void);
// public: virtual bool c_tag_group_files_persist_context::for_checkpoint(void);
// bool tag_load_new(struct s_tag_persist_parameters *, class c_tag_file_read_backend *, bool, enum e_tag_file_open_result *, bool *, unsigned long *, struct s_tag_group const *, char const *, struct s_tag_block *, class c_tag_alternate_stream_consumer *);
// bool tag_load_new_from_backend(struct s_tag_read_parameters *, class c_tag_file_read_backend *, class c_tag_file_resource_backend *, bool, enum e_tag_file_open_result *, bool *, unsigned long *, struct s_tag_group const *, char const *, struct s_tag_block *, class c_tag_alternate_stream_consumer *);
// bool tag_save_new(struct s_tag_persist_parameters *, class c_tag_file_create_backend *, struct s_tag_group const *, char const *, bool, struct s_tag_block *, unsigned long *, class c_tag_alternate_stream_iterator *);
// bool tag_file_write_from_block(class c_persist_stream *, struct s_tag_persist_parameters *, struct s_tag_block *);

//bool tag_file_read_into_block(struct s_tag_persist_parameters const *, class c_tag_file_read_interface *, bool, struct s_tag_block *)
//{
//    mangled_ppc("?tag_file_read_into_block@@YA_NPBUs_tag_persist_parameters@@PAVc_tag_file_read_interface@@_NPAUs_tag_block@@@Z");
//};

//public: c_tag_group_files_persist_context::c_tag_group_files_persist_context(class c_persist_stream *, struct s_tag_persist_parameters const *, bool)
//{
//    mangled_ppc("??0c_tag_group_files_persist_context@@QAA@PAVc_persist_stream@@PBUs_tag_persist_parameters@@_N@Z");
//};

//public: virtual class c_persist_stream * c_tag_group_files_persist_context::get_root_data_stream(void)
//{
//    mangled_ppc("?get_root_data_stream@c_tag_group_files_persist_context@@UAAPAVc_persist_stream@@XZ");
//};

//public: virtual class c_tag_field_editor_manager * c_tag_group_files_persist_context::get_editor_manager(void)
//{
//    mangled_ppc("?get_editor_manager@c_tag_group_files_persist_context@@UAAPAVc_tag_field_editor_manager@@XZ");
//};

//public: virtual class c_tag_allocator * c_tag_group_files_persist_context::get_allocator(void)
//{
//    mangled_ppc("?get_allocator@c_tag_group_files_persist_context@@UAAPAVc_tag_allocator@@XZ");
//};

//public: virtual class c_allocation_interface * c_tag_group_files_persist_context::get_scratch_allocator(void)
//{
//    mangled_ppc("?get_scratch_allocator@c_tag_group_files_persist_context@@UAAPAVc_allocation_interface@@XZ");
//};

//public: virtual class c_tag_resource_persist_reader * c_tag_group_files_persist_context::get_resource_reader(void)
//{
//    mangled_ppc("?get_resource_reader@c_tag_group_files_persist_context@@UAAPAVc_tag_resource_persist_reader@@XZ");
//};

//public: virtual class c_tag_resource_persist_writer * c_tag_group_files_persist_context::get_resource_writer(void)
//{
//    mangled_ppc("?get_resource_writer@c_tag_group_files_persist_context@@UAAPAVc_tag_resource_persist_writer@@XZ");
//};

//public: virtual enum e_runtime_platform_type c_tag_group_files_persist_context::get_runtime_platform(void)
//{
//    mangled_ppc("?get_runtime_platform@c_tag_group_files_persist_context@@UAA?AW4e_runtime_platform_type@@XZ");
//};

//public: virtual bool c_tag_group_files_persist_context::editing(void)
//{
//    mangled_ppc("?editing@c_tag_group_files_persist_context@@UAA_NXZ");
//};

//public: virtual bool c_tag_group_files_persist_context::for_checkpoint(void)
//{
//    mangled_ppc("?for_checkpoint@c_tag_group_files_persist_context@@UAA_NXZ");
//};

//bool tag_load_new(struct s_tag_persist_parameters *, class c_tag_file_read_backend *, bool, enum e_tag_file_open_result *, bool *, unsigned long *, struct s_tag_group const *, char const *, struct s_tag_block *, class c_tag_alternate_stream_consumer *)
//{
//    mangled_ppc("?tag_load_new@@YA_NPAUs_tag_persist_parameters@@PAVc_tag_file_read_backend@@_NPAW4e_tag_file_open_result@@PA_NPAKPBUs_tag_group@@PBDPAUs_tag_block@@PAVc_tag_alternate_stream_consumer@@@Z");
//};

//bool tag_load_new_from_backend(struct s_tag_read_parameters *, class c_tag_file_read_backend *, class c_tag_file_resource_backend *, bool, enum e_tag_file_open_result *, bool *, unsigned long *, struct s_tag_group const *, char const *, struct s_tag_block *, class c_tag_alternate_stream_consumer *)
//{
//    mangled_ppc("?tag_load_new_from_backend@@YA_NPAUs_tag_read_parameters@@PAVc_tag_file_read_backend@@PAVc_tag_file_resource_backend@@_NPAW4e_tag_file_open_result@@PA_NPAKPBUs_tag_group@@PBDPAUs_tag_block@@PAVc_tag_alternate_stream_consumer@@@Z");
//};

//bool tag_save_new(struct s_tag_persist_parameters *, class c_tag_file_create_backend *, struct s_tag_group const *, char const *, bool, struct s_tag_block *, unsigned long *, class c_tag_alternate_stream_iterator *)
//{
//    mangled_ppc("?tag_save_new@@YA_NPAUs_tag_persist_parameters@@PAVc_tag_file_create_backend@@PBUs_tag_group@@PBD_NPAUs_tag_block@@PAKPAVc_tag_alternate_stream_iterator@@@Z");
//};

//bool tag_file_write_from_block(class c_persist_stream *, struct s_tag_persist_parameters *, struct s_tag_block *)
//{
//    mangled_ppc("?tag_file_write_from_block@@YA_NPAVc_persist_stream@@PAUs_tag_persist_parameters@@PAUs_tag_block@@@Z");
//};

