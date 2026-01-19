/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// unsigned long const k_render_geometry_xsync_version; // "?k_render_geometry_xsync_version@@3KB"
// struct s_tag_struct_definition part_block_struct_definition; // "?part_block_struct_definition@@3Us_tag_struct_definition@@A"
// struct s_tag_block_definition part_block; // "?part_block@@3Us_tag_block_definition@@A"
// struct s_tag_struct_definition subpart_block_struct_definition; // "?subpart_block_struct_definition@@3Us_tag_struct_definition@@A"
// struct s_tag_block_definition subpart_block; // "?subpart_block@@3Us_tag_block_definition@@A"
// struct s_tag_struct_definition raw_vertex_block_struct_definition; // "?raw_vertex_block_struct_definition@@3Us_tag_struct_definition@@A"
// struct s_tag_block_definition raw_vertex_block; // "?raw_vertex_block@@3Us_tag_block_definition@@A"
// struct s_tag_block_definition compression_info_block; // "?compression_info_block@@3Us_tag_block_definition@@A"
// struct s_tag_struct_definition compression_info_block_struct_definition; // "?compression_info_block_struct_definition@@3Us_tag_struct_definition@@A"
// struct s_tag_struct_definition global_geometry_block_resource_block_struct_definition; // "?global_geometry_block_resource_block_struct_definition@@3Us_tag_struct_definition@@A"
// struct s_tag_block_definition global_geometry_block_resource_block; // "?global_geometry_block_resource_block@@3Us_tag_block_definition@@A"
// struct s_tag_struct_definition global_geometry_block_info_struct; // "?global_geometry_block_info_struct@@3Us_tag_struct_definition@@A"
// struct s_tag_struct_definition real_orientation_struct; // "?real_orientation_struct@@3Us_tag_struct_definition@@A"
// struct s_tag_struct_definition global_instance_bucket_block_struct_definition; // "?global_instance_bucket_block_struct_definition@@3Us_tag_struct_definition@@A"
// struct s_tag_block_definition global_instance_bucket_block; // "?global_instance_bucket_block@@3Us_tag_block_definition@@A"
// struct s_tag_block_definition global_mesh_block; // "?global_mesh_block@@3Us_tag_block_definition@@A"
// struct s_tag_struct_definition global_mesh_block_struct_definition; // "?global_mesh_block_struct_definition@@3Us_tag_struct_definition@@A"
// struct s_tag_block_definition global_geometry_section_strip_index_block; // "?global_geometry_section_strip_index_block@@3Us_tag_block_definition@@A"
// struct s_tag_struct_definition global_geometry_section_strip_index_block_struct_definition; // "?global_geometry_section_strip_index_block_struct_definition@@3Us_tag_struct_definition@@A"
// struct s_tag_struct_definition global_render_geometry_user_data_header_struct; // "?global_render_geometry_user_data_header_struct@@3Us_tag_struct_definition@@A"
// char const **render_geometry_tag_resource_category_strings; // "?render_geometry_tag_resource_category_strings@@3PAPBDA"
// struct s_string_list_definition render_geometry_tag_resource_category_definition; // "?render_geometry_tag_resource_category_definition@@3Us_string_list_definition@@A"
// struct s_tag_struct_definition render_geometry_api_resource_definition_struct; // "?render_geometry_api_resource_definition_struct@@3Us_tag_struct_definition@@A"
// struct s_tag_resource_definition render_geometry_api_resource_definition; // "?render_geometry_api_resource_definition@@3Us_tag_resource_definition@@A"
// struct s_tag_struct_definition global_render_geometry_struct; // "?global_render_geometry_struct@@3Us_tag_struct_definition@@A"
// class c_tag_struct_vtable<class c_render_geometry_tag_resource_vtable> render_geometry_api_resource_definition_struct_vtable; // "?render_geometry_api_resource_definition_struct_vtable@@3V?$c_tag_struct_vtable@Vc_render_geometry_tag_resource_vtable@@@@A"
// class c_tag_resource_vtable<class c_render_geometry_tag_resource_vtable> render_geometry_api_resource_definition_resource_vtable; // "?render_geometry_api_resource_definition_resource_vtable@@3V?$c_tag_resource_vtable@Vc_render_geometry_tag_resource_vtable@@@@A"

// void validate_raw_vertex(struct s_raw_vertex *, bool, bool);
// void scrub_raw_vertices(struct s_render_geometry *);
// void render_geometry_clear(struct s_render_geometry *);
// bool render_geometry_process_for_sync(struct s_render_geometry *, enum e_runtime_platform_type, unsigned long);
// void render_geometry_commit(long, struct s_render_geometry *);
// bool render_geometry_process(struct s_render_geometry *, enum e_runtime_platform_type, unsigned long);
// void create_mesh_index_buffer(class c_tag_geometry_editor *, struct s_render_geometry *, long, bool);
// enum e_primitive_type get_primitive_type(bool, long);
// void create_mesh_index_buffer_tessellation(class c_tag_geometry_editor *, struct s_render_geometry *, long);
// void mesh_scrub_tessellation(struct s_render_geometry *, long);
// void mesh_determine_compression(struct s_render_geometry *, long, enum e_runtime_platform_type, unsigned long);
// void create_mesh_index_vertex_buffer(class c_tag_geometry_editor *, struct s_render_geometry *, long, bool);
// void create_mesh_vertex_buffers(class c_tag_geometry_editor *, struct s_render_geometry *, long, bool);
// void create_prt_vertex_buffer(class c_tag_geometry_editor *, struct s_render_geometry *, long, long);
// long add_vertex_buffer(class c_tag_geometry_editor *, enum e_vertex_buffer_declaration, struct s_render_geometry *, long);
// bool create_mesh_imposter_vertex_buffer(class c_tag_geometry_editor *, struct s_render_geometry *, long);
// float normalized_imposter_color_component(float);
// void create_water_bounding_boxes(class c_tag_geometry_editor *, struct s_render_geometry *, long);
// unsigned long render_geometry_raw_data_get_index(struct s_per_mesh_raw_data *, long);
// bool create_mesh_water_vertex_buffer(class c_tag_geometry_editor *, struct s_render_geometry *, long);
// void create_per_instance_uv_vertex_buffer(class c_tag_geometry_editor *, struct s_render_geometry *, long);
// bool render_geometry_mesh_is_imposter(struct s_render_geometry *, long);
// void render_geometry_fix_buffer_types_and_budget_vertex_counts(bool, struct s_render_geometry *);
// bool postprocess_render_geometry(long, void *, bool);
// void determine_geometry_light_policy(struct s_render_geometry *, long);
// bool determine_mesh_light_policy(struct s_mesh *);
// void output_geometry_related_tag_warning(long);
// void render_geometry_user_data_byte_swap_proc(void *, void *, long, bool);
// void render_geometry_prt_data_byte_swap_proc(void *, void *, long, bool);
// void render_geometry_delete_vertex_buffer(void *);
// void render_geometry_delete_index_buffer(void *);
// public: static bool s_part::postprocess_part(long, void *, bool);
// public: static bool s_subpart::postprocess_subpart(long, void *, bool);
// void render_geometry_accumulate_estimated_size(struct s_render_geometry const *, struct s_tag_resource_estimated_size *);
// long render_geometry_get_prt_vertex_type(struct s_render_geometry const *);
// long render_geometry_raw_data_get_part_triangle_count(struct s_per_mesh_raw_data const *, struct s_part const *);
// void render_geometry_add_used_materials(struct s_render_geometry const *, class c_wrapped_flags *);
// long render_geometry_get_vertex_buffer_count(struct s_render_geometry const *);
// class c_rasterizer_vertex_buffer * render_geometry_get_vertex_buffer(struct s_render_geometry const *, long);
// void render_geometry_get_vertex_buffer_info(struct s_render_geometry const *, long, struct s_vertex_buffer_info *);
// class c_rasterizer_vertex_buffer const * mesh_get_vertex_buffer(struct s_render_geometry const *, struct s_mesh const *, enum e_vertex_buffer_usage);
// long render_geometry_get_index_buffer_count(struct s_render_geometry const *);
// class c_rasterizer_index_buffer * render_geometry_get_index_buffer(struct s_render_geometry const *, long);
// void render_geometry_get_index_buffer_info(struct s_render_geometry const *, long, struct s_index_buffer_info *);
// public: struct s_render_geometry_api_resource const * c_render_geometry_access::setup(struct s_render_geometry const *);
// public: struct s_render_geometry const * c_render_geometry_access::get_render_geometry(void) const;
// public: long c_render_geometry_access::get_vertex_buffer_count(void) const;
// public: class c_rasterizer_vertex_buffer * c_render_geometry_access::get_vertex_buffer(long) const;
// public: void c_render_geometry_access::get_vertex_buffer_info(long, struct s_vertex_buffer_info *) const;
// public: long c_render_geometry_access::get_index_buffer_count(void) const;
// public: class c_rasterizer_index_buffer * c_render_geometry_access::get_index_buffer(long) const;
// public: void c_render_geometry_access::get_index_buffer_info(long, struct s_index_buffer_info *) const;
// public: long s_per_mesh_raw_data::index_size(void) const;
// public: long s_per_mesh_raw_data::per_index_size(void) const;
// public: bool s_per_mesh_raw_data::is_index32(void) const;
// public: long s_per_mesh_raw_data::triangle_count(void) const;
// public: long s_per_mesh_raw_data::get_vertex_index(long) const;
// public: void * s_per_mesh_raw_data::get_index_buffer(void);
// public: bool s_per_mesh_raw_data::valid_mesh(void) const;
// public: bool s_per_mesh_raw_data::upgrade_to_index32(void);
// public: bool s_raw_vertex_with_uvatals_src::operator==(struct s_raw_vertex_with_uvatals_src const &);
// public: bool s_raw_vertex::operator==(struct s_raw_vertex const &);
// long get_tessellated_vertex_type(long);
// public: c_tag_struct_vtable<class c_render_geometry_tag_resource_vtable>::c_tag_struct_vtable<class c_render_geometry_tag_resource_vtable>(void);
// public: virtual bool c_tag_struct_vtable<class c_render_geometry_tag_resource_vtable>::has_byte_swap_proc(void) const;
// public: virtual void c_tag_struct_vtable<class c_render_geometry_tag_resource_vtable>::byte_swap_block_proc(void *) const;
// public: virtual bool c_tag_struct_vtable<class c_render_geometry_tag_resource_vtable>::has_postprocess_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_render_geometry_tag_resource_vtable>::postprocess_thunk(long, void *, bool) const;
// public: virtual bool c_tag_struct_vtable<class c_render_geometry_tag_resource_vtable>::has_format_proc(void) const;
// public: virtual char * c_tag_struct_vtable<class c_render_geometry_tag_resource_vtable>::format_thunk(long, __int64, struct s_tag_block *, long, char *, long) const;
// public: virtual bool c_tag_struct_vtable<class c_render_geometry_tag_resource_vtable>::has_on_delete_proc(void) const;
// public: virtual void c_tag_struct_vtable<class c_render_geometry_tag_resource_vtable>::on_delete_thunk(void *) const;
// public: virtual bool c_tag_struct_vtable<class c_render_geometry_tag_resource_vtable>::has_on_new_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_render_geometry_tag_resource_vtable>::on_new_thunk(void *) const;
// public: virtual bool c_tag_struct_vtable<class c_render_geometry_tag_resource_vtable>::has_on_copy_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_render_geometry_tag_resource_vtable>::on_copy_thunk(void const *, void *) const;
// public: virtual bool c_tag_struct_vtable<class c_render_geometry_tag_resource_vtable>::has_write_to_cache_file_proc(void) const;
// public: virtual void c_tag_struct_vtable<class c_render_geometry_tag_resource_vtable>::write_to_cache_file_thunk(long, struct s_tag_block *, struct s_cache_file_builder_stream_context const *, void **, void **) const;
// public: virtual bool c_tag_struct_vtable<class c_render_geometry_tag_resource_vtable>::has_block_does_not_exist_in_cache_file_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_render_geometry_tag_resource_vtable>::block_does_not_exist_in_cache_file_thunk(void) const;
// public: virtual bool c_tag_struct_vtable<class c_render_geometry_tag_resource_vtable>::has_fixup_old_struct_definition(void) const;
// public: virtual struct s_tag_struct_definition * c_tag_struct_vtable<class c_render_geometry_tag_resource_vtable>::get_fixup_source_definition_thunk(void) const;
// public: virtual bool c_tag_struct_vtable<class c_render_geometry_tag_resource_vtable>::has_fixup_old_struct_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_render_geometry_tag_resource_vtable>::fixup_old_struct_thunk(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool) const;
// public: virtual bool c_tag_struct_vtable<class c_render_geometry_tag_resource_vtable>::has_fixup_old_struct_from_disk_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_render_geometry_tag_resource_vtable>::fixup_old_struct_from_disk_thunk(struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool) const;
// public: static void s_tag_vtable_has_byte_swap_proc<class c_render_geometry_tag_resource_vtable>::call(void *);
// public: static bool s_tag_vtable_has_postprocess_proc<class c_render_geometry_tag_resource_vtable>::call(long, void *, bool);
// public: static char * s_tag_vtable_has_format_proc<class c_render_geometry_tag_resource_vtable>::call(long, __int64, struct s_tag_block *, long, char *, long);
// public: static void s_tag_vtable_has_on_delete_proc<class c_render_geometry_tag_resource_vtable>::call(void *);
// public: static bool s_tag_vtable_has_on_new_proc<class c_render_geometry_tag_resource_vtable>::call(void *);
// public: static bool s_tag_vtable_has_on_copy_proc<class c_render_geometry_tag_resource_vtable>::call(void const *, void *);
// public: static void s_tag_vtable_has_write_to_cache_file_proc<class c_render_geometry_tag_resource_vtable>::call(long, struct s_tag_block *, struct s_cache_file_builder_stream_context const *, void **, void **);
// public: static bool s_tag_vtable_has_block_does_not_exist_in_cache_file<class c_render_geometry_tag_resource_vtable>::call(void);
// public: static struct s_tag_struct_definition * s_tag_vtable_has_get_fixup_source_definition_proc<class c_render_geometry_tag_resource_vtable>::call(void);
// public: static bool s_tag_vtable_has_fixup_old_struct_proc<class c_render_geometry_tag_resource_vtable>::call(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool);
// public: static bool s_tag_vtable_has_fixup_old_struct_from_disk_proc<class c_render_geometry_tag_resource_vtable>::call(struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool);
// public: c_tag_resource_vtable<class c_render_geometry_tag_resource_vtable>::c_tag_resource_vtable<class c_render_geometry_tag_resource_vtable>(void);
// public: c_tag_resource_vtable_interface::c_tag_resource_vtable_interface(void);
// public: virtual bool c_tag_resource_vtable_interface::has_on_load_resource_proc(void) const;
// public: virtual bool c_tag_resource_vtable_interface::on_load_resource_thunk(long, void *) const;
// public: virtual bool c_tag_resource_vtable_interface::has_on_dispose_resource_proc(void) const;
// public: virtual void c_tag_resource_vtable_interface::on_dispose_resource_thunk(long, void *) const;
// public: virtual bool c_tag_resource_vtable_interface::has_resource_is_locked_proc(void) const;
// public: virtual bool c_tag_resource_vtable_interface::resource_is_locked_thunk(void *) const;
// public: virtual bool c_tag_resource_vtable_interface::has_write_resource_to_cache_file_proc(void) const;
// public: virtual bool c_tag_resource_vtable_interface::write_resource_to_cache_file_thunk(long, void *, enum e_runtime_platform_type, class c_cache_file_scratch_allocator *) const;
// public: virtual bool c_tag_resource_vtable_interface::has_get_xsync_version_proc(void) const;
// public: virtual unsigned long c_tag_resource_vtable_interface::get_xsync_version_thunk(void) const;
// public: virtual bool c_tag_resource_vtable_interface::has_resource_report_categories_proc(void) const;
// public: virtual struct s_string_list_definition const * c_tag_resource_vtable_interface::get_resource_report_categories_thunk(void) const;
// public: virtual bool c_tag_resource_vtable_interface::has_resource_report_proc(void) const;
// public: virtual void c_tag_resource_vtable_interface::resource_report_thunk(long, long, void const *, class c_tag_resource_reporter *) const;
// public: virtual bool c_tag_resource_vtable_interface::has_get_resource_streaming_sublocations_proc(void) const;
// public: virtual void c_tag_resource_vtable_interface::get_resource_streaming_sublocations_thunk(long, long, class c_output_stream<struct s_tag_resource_streaming_sublocation> *, class c_output_stream<struct s_tag_resource_streaming_sublocation> *) const;
// public: static struct s_string_list_definition const * s_tag_vtable_default_entry<struct s_string_list_definition const *>::call(void);
// public: virtual bool c_tag_resource_vtable<class c_render_geometry_tag_resource_vtable>::has_on_load_resource_proc(void) const;
// public: virtual bool c_tag_resource_vtable<class c_render_geometry_tag_resource_vtable>::on_load_resource_thunk(long, void *) const;
// public: virtual bool c_tag_resource_vtable<class c_render_geometry_tag_resource_vtable>::has_on_dispose_resource_proc(void) const;
// public: virtual void c_tag_resource_vtable<class c_render_geometry_tag_resource_vtable>::on_dispose_resource_thunk(long, void *) const;
// public: virtual bool c_tag_resource_vtable<class c_render_geometry_tag_resource_vtable>::has_resource_is_locked_proc(void) const;
// public: virtual bool c_tag_resource_vtable<class c_render_geometry_tag_resource_vtable>::resource_is_locked_thunk(void *) const;
// public: virtual bool c_tag_resource_vtable<class c_render_geometry_tag_resource_vtable>::has_write_resource_to_cache_file_proc(void) const;
// public: virtual bool c_tag_resource_vtable<class c_render_geometry_tag_resource_vtable>::write_resource_to_cache_file_thunk(long, void *, enum e_runtime_platform_type, class c_cache_file_scratch_allocator *) const;
// public: virtual bool c_tag_resource_vtable<class c_render_geometry_tag_resource_vtable>::has_get_xsync_version_proc(void) const;
// public: virtual unsigned long c_tag_resource_vtable<class c_render_geometry_tag_resource_vtable>::get_xsync_version_thunk(void) const;
// public: virtual bool c_tag_resource_vtable<class c_render_geometry_tag_resource_vtable>::has_resource_report_categories_proc(void) const;
// public: virtual struct s_string_list_definition const * c_tag_resource_vtable<class c_render_geometry_tag_resource_vtable>::get_resource_report_categories_thunk(void) const;
// public: virtual bool c_tag_resource_vtable<class c_render_geometry_tag_resource_vtable>::has_resource_report_proc(void) const;
// public: virtual void c_tag_resource_vtable<class c_render_geometry_tag_resource_vtable>::resource_report_thunk(long, long, void const *, class c_tag_resource_reporter *) const;
// public: virtual bool c_tag_resource_vtable<class c_render_geometry_tag_resource_vtable>::has_get_resource_streaming_sublocations_proc(void) const;
// public: virtual void c_tag_resource_vtable<class c_render_geometry_tag_resource_vtable>::get_resource_streaming_sublocations_thunk(long, long, class c_output_stream<struct s_tag_resource_streaming_sublocation> *, class c_output_stream<struct s_tag_resource_streaming_sublocation> *) const;
// public: static bool s_tag_vtable_has_on_load_resource<class c_render_geometry_tag_resource_vtable>::call(long, void *);
// public: static bool c_tag_resource_vtable_defaults::on_load_resource(long, void *);
// public: static void s_tag_vtable_has_on_dispose_resource<class c_render_geometry_tag_resource_vtable>::call(long, void *);
// public: static void c_tag_resource_vtable_defaults::on_dispose_resource(long, void *);
// public: static bool s_tag_vtable_has_resource_is_locked<class c_render_geometry_tag_resource_vtable>::call(void *);
// public: static bool c_tag_resource_vtable_defaults::resource_is_locked(void *);
// public: static bool s_tag_vtable_has_write_resource_to_cache_file<class c_render_geometry_tag_resource_vtable>::call(long, void *, enum e_runtime_platform_type, class c_cache_file_scratch_allocator *);
// public: static bool c_tag_resource_vtable_defaults::write_resource_to_cache_file(long, void *, enum e_runtime_platform_type, class c_cache_file_scratch_allocator *);
// public: static unsigned long s_tag_vtable_has_get_xsync_version<class c_render_geometry_tag_resource_vtable>::call(void);
// public: static unsigned long c_tag_resource_vtable_defaults::get_xsync_version(void);
// public: static struct s_string_list_definition const * s_tag_vtable_has_get_resource_report_categories_proc<class c_render_geometry_tag_resource_vtable>::call(void);
// public: static struct s_string_list_definition const * c_render_geometry_tag_resource_vtable::get_resource_report_categories_proc(void);
// public: static void s_tag_vtable_has_resource_report_proc<class c_render_geometry_tag_resource_vtable>::call(long, long, void const *, class c_tag_resource_reporter *);
// public: static void c_render_geometry_tag_resource_vtable::resource_report_proc(long, long, void const *, class c_tag_resource_reporter *);
// public: static void s_tag_vtable_has_get_resource_streaming_sublocations<class c_render_geometry_tag_resource_vtable>::call(long, long, class c_output_stream<struct s_tag_resource_streaming_sublocation> *, class c_output_stream<struct s_tag_resource_streaming_sublocation> *);
// public: static void c_tag_resource_vtable_defaults::get_resource_streaming_sublocations(long, long, class c_output_stream<struct s_tag_resource_streaming_sublocation> *, class c_output_stream<struct s_tag_resource_streaming_sublocation> *);

//void validate_raw_vertex(struct s_raw_vertex *, bool, bool)
//{
//    mangled_ppc("?validate_raw_vertex@@YAXPAUs_raw_vertex@@_N1@Z");
//};

//void scrub_raw_vertices(struct s_render_geometry *)
//{
//    mangled_ppc("?scrub_raw_vertices@@YAXPAUs_render_geometry@@@Z");
//};

//void render_geometry_clear(struct s_render_geometry *)
//{
//    mangled_ppc("?render_geometry_clear@@YAXPAUs_render_geometry@@@Z");
//};

//bool render_geometry_process_for_sync(struct s_render_geometry *, enum e_runtime_platform_type, unsigned long)
//{
//    mangled_ppc("?render_geometry_process_for_sync@@YA_NPAUs_render_geometry@@W4e_runtime_platform_type@@K@Z");
//};

//void render_geometry_commit(long, struct s_render_geometry *)
//{
//    mangled_ppc("?render_geometry_commit@@YAXJPAUs_render_geometry@@@Z");
//};

//bool render_geometry_process(struct s_render_geometry *, enum e_runtime_platform_type, unsigned long)
//{
//    mangled_ppc("?render_geometry_process@@YA_NPAUs_render_geometry@@W4e_runtime_platform_type@@K@Z");
//};

//void create_mesh_index_buffer(class c_tag_geometry_editor *, struct s_render_geometry *, long, bool)
//{
//    mangled_ppc("?create_mesh_index_buffer@@YAXPAVc_tag_geometry_editor@@PAUs_render_geometry@@J_N@Z");
//};

//enum e_primitive_type get_primitive_type(bool, long)
//{
//    mangled_ppc("?get_primitive_type@@YA?AW4e_primitive_type@@_NJ@Z");
//};

//void create_mesh_index_buffer_tessellation(class c_tag_geometry_editor *, struct s_render_geometry *, long)
//{
//    mangled_ppc("?create_mesh_index_buffer_tessellation@@YAXPAVc_tag_geometry_editor@@PAUs_render_geometry@@J@Z");
//};

//void mesh_scrub_tessellation(struct s_render_geometry *, long)
//{
//    mangled_ppc("?mesh_scrub_tessellation@@YAXPAUs_render_geometry@@J@Z");
//};

//void mesh_determine_compression(struct s_render_geometry *, long, enum e_runtime_platform_type, unsigned long)
//{
//    mangled_ppc("?mesh_determine_compression@@YAXPAUs_render_geometry@@JW4e_runtime_platform_type@@K@Z");
//};

//void create_mesh_index_vertex_buffer(class c_tag_geometry_editor *, struct s_render_geometry *, long, bool)
//{
//    mangled_ppc("?create_mesh_index_vertex_buffer@@YAXPAVc_tag_geometry_editor@@PAUs_render_geometry@@J_N@Z");
//};

//void create_mesh_vertex_buffers(class c_tag_geometry_editor *, struct s_render_geometry *, long, bool)
//{
//    mangled_ppc("?create_mesh_vertex_buffers@@YAXPAVc_tag_geometry_editor@@PAUs_render_geometry@@J_N@Z");
//};

//void create_prt_vertex_buffer(class c_tag_geometry_editor *, struct s_render_geometry *, long, long)
//{
//    mangled_ppc("?create_prt_vertex_buffer@@YAXPAVc_tag_geometry_editor@@PAUs_render_geometry@@JJ@Z");
//};

//long add_vertex_buffer(class c_tag_geometry_editor *, enum e_vertex_buffer_declaration, struct s_render_geometry *, long)
//{
//    mangled_ppc("?add_vertex_buffer@@YAJPAVc_tag_geometry_editor@@W4e_vertex_buffer_declaration@@PAUs_render_geometry@@J@Z");
//};

//bool create_mesh_imposter_vertex_buffer(class c_tag_geometry_editor *, struct s_render_geometry *, long)
//{
//    mangled_ppc("?create_mesh_imposter_vertex_buffer@@YA_NPAVc_tag_geometry_editor@@PAUs_render_geometry@@J@Z");
//};

//float normalized_imposter_color_component(float)
//{
//    mangled_ppc("?normalized_imposter_color_component@@YAMM@Z");
//};

//void create_water_bounding_boxes(class c_tag_geometry_editor *, struct s_render_geometry *, long)
//{
//    mangled_ppc("?create_water_bounding_boxes@@YAXPAVc_tag_geometry_editor@@PAUs_render_geometry@@J@Z");
//};

//unsigned long render_geometry_raw_data_get_index(struct s_per_mesh_raw_data *, long)
//{
//    mangled_ppc("?render_geometry_raw_data_get_index@@YAKPAUs_per_mesh_raw_data@@J@Z");
//};

//bool create_mesh_water_vertex_buffer(class c_tag_geometry_editor *, struct s_render_geometry *, long)
//{
//    mangled_ppc("?create_mesh_water_vertex_buffer@@YA_NPAVc_tag_geometry_editor@@PAUs_render_geometry@@J@Z");
//};

//void create_per_instance_uv_vertex_buffer(class c_tag_geometry_editor *, struct s_render_geometry *, long)
//{
//    mangled_ppc("?create_per_instance_uv_vertex_buffer@@YAXPAVc_tag_geometry_editor@@PAUs_render_geometry@@J@Z");
//};

//bool render_geometry_mesh_is_imposter(struct s_render_geometry *, long)
//{
//    mangled_ppc("?render_geometry_mesh_is_imposter@@YA_NPAUs_render_geometry@@J@Z");
//};

//void render_geometry_fix_buffer_types_and_budget_vertex_counts(bool, struct s_render_geometry *)
//{
//    mangled_ppc("?render_geometry_fix_buffer_types_and_budget_vertex_counts@@YAX_NPAUs_render_geometry@@@Z");
//};

//bool postprocess_render_geometry(long, void *, bool)
//{
//    mangled_ppc("?postprocess_render_geometry@@YA_NJPAX_N@Z");
//};

//void determine_geometry_light_policy(struct s_render_geometry *, long)
//{
//    mangled_ppc("?determine_geometry_light_policy@@YAXPAUs_render_geometry@@J@Z");
//};

//bool determine_mesh_light_policy(struct s_mesh *)
//{
//    mangled_ppc("?determine_mesh_light_policy@@YA_NPAUs_mesh@@@Z");
//};

//void output_geometry_related_tag_warning(long)
//{
//    mangled_ppc("?output_geometry_related_tag_warning@@YAXJ@Z");
//};

//void render_geometry_user_data_byte_swap_proc(void *, void *, long, bool)
//{
//    mangled_ppc("?render_geometry_user_data_byte_swap_proc@@YAXPAX0J_N@Z");
//};

//void render_geometry_prt_data_byte_swap_proc(void *, void *, long, bool)
//{
//    mangled_ppc("?render_geometry_prt_data_byte_swap_proc@@YAXPAX0J_N@Z");
//};

//void render_geometry_delete_vertex_buffer(void *)
//{
//    mangled_ppc("?render_geometry_delete_vertex_buffer@@YAXPAX@Z");
//};

//void render_geometry_delete_index_buffer(void *)
//{
//    mangled_ppc("?render_geometry_delete_index_buffer@@YAXPAX@Z");
//};

//public: static bool s_part::postprocess_part(long, void *, bool)
//{
//    mangled_ppc("?postprocess_part@s_part@@SA_NJPAX_N@Z");
//};

//public: static bool s_subpart::postprocess_subpart(long, void *, bool)
//{
//    mangled_ppc("?postprocess_subpart@s_subpart@@SA_NJPAX_N@Z");
//};

//void render_geometry_accumulate_estimated_size(struct s_render_geometry const *, struct s_tag_resource_estimated_size *)
//{
//    mangled_ppc("?render_geometry_accumulate_estimated_size@@YAXPBUs_render_geometry@@PAUs_tag_resource_estimated_size@@@Z");
//};

//long render_geometry_get_prt_vertex_type(struct s_render_geometry const *)
//{
//    mangled_ppc("?render_geometry_get_prt_vertex_type@@YAJPBUs_render_geometry@@@Z");
//};

//long render_geometry_raw_data_get_part_triangle_count(struct s_per_mesh_raw_data const *, struct s_part const *)
//{
//    mangled_ppc("?render_geometry_raw_data_get_part_triangle_count@@YAJPBUs_per_mesh_raw_data@@PBUs_part@@@Z");
//};

//void render_geometry_add_used_materials(struct s_render_geometry const *, class c_wrapped_flags *)
//{
//    mangled_ppc("?render_geometry_add_used_materials@@YAXPBUs_render_geometry@@PAVc_wrapped_flags@@@Z");
//};

//long render_geometry_get_vertex_buffer_count(struct s_render_geometry const *)
//{
//    mangled_ppc("?render_geometry_get_vertex_buffer_count@@YAJPBUs_render_geometry@@@Z");
//};

//class c_rasterizer_vertex_buffer * render_geometry_get_vertex_buffer(struct s_render_geometry const *, long)
//{
//    mangled_ppc("?render_geometry_get_vertex_buffer@@YAPAVc_rasterizer_vertex_buffer@@PBUs_render_geometry@@J@Z");
//};

//void render_geometry_get_vertex_buffer_info(struct s_render_geometry const *, long, struct s_vertex_buffer_info *)
//{
//    mangled_ppc("?render_geometry_get_vertex_buffer_info@@YAXPBUs_render_geometry@@JPAUs_vertex_buffer_info@@@Z");
//};

//class c_rasterizer_vertex_buffer const * mesh_get_vertex_buffer(struct s_render_geometry const *, struct s_mesh const *, enum e_vertex_buffer_usage)
//{
//    mangled_ppc("?mesh_get_vertex_buffer@@YAPBVc_rasterizer_vertex_buffer@@PBUs_render_geometry@@PBUs_mesh@@W4e_vertex_buffer_usage@@@Z");
//};

//long render_geometry_get_index_buffer_count(struct s_render_geometry const *)
//{
//    mangled_ppc("?render_geometry_get_index_buffer_count@@YAJPBUs_render_geometry@@@Z");
//};

//class c_rasterizer_index_buffer * render_geometry_get_index_buffer(struct s_render_geometry const *, long)
//{
//    mangled_ppc("?render_geometry_get_index_buffer@@YAPAVc_rasterizer_index_buffer@@PBUs_render_geometry@@J@Z");
//};

//void render_geometry_get_index_buffer_info(struct s_render_geometry const *, long, struct s_index_buffer_info *)
//{
//    mangled_ppc("?render_geometry_get_index_buffer_info@@YAXPBUs_render_geometry@@JPAUs_index_buffer_info@@@Z");
//};

//public: struct s_render_geometry_api_resource const * c_render_geometry_access::setup(struct s_render_geometry const *)
//{
//    mangled_ppc("?setup@c_render_geometry_access@@QAAPBUs_render_geometry_api_resource@@PBUs_render_geometry@@@Z");
//};

//public: struct s_render_geometry const * c_render_geometry_access::get_render_geometry(void) const
//{
//    mangled_ppc("?get_render_geometry@c_render_geometry_access@@QBAPBUs_render_geometry@@XZ");
//};

//public: long c_render_geometry_access::get_vertex_buffer_count(void) const
//{
//    mangled_ppc("?get_vertex_buffer_count@c_render_geometry_access@@QBAJXZ");
//};

//public: class c_rasterizer_vertex_buffer * c_render_geometry_access::get_vertex_buffer(long) const
//{
//    mangled_ppc("?get_vertex_buffer@c_render_geometry_access@@QBAPAVc_rasterizer_vertex_buffer@@J@Z");
//};

//public: void c_render_geometry_access::get_vertex_buffer_info(long, struct s_vertex_buffer_info *) const
//{
//    mangled_ppc("?get_vertex_buffer_info@c_render_geometry_access@@QBAXJPAUs_vertex_buffer_info@@@Z");
//};

//public: long c_render_geometry_access::get_index_buffer_count(void) const
//{
//    mangled_ppc("?get_index_buffer_count@c_render_geometry_access@@QBAJXZ");
//};

//public: class c_rasterizer_index_buffer * c_render_geometry_access::get_index_buffer(long) const
//{
//    mangled_ppc("?get_index_buffer@c_render_geometry_access@@QBAPAVc_rasterizer_index_buffer@@J@Z");
//};

//public: void c_render_geometry_access::get_index_buffer_info(long, struct s_index_buffer_info *) const
//{
//    mangled_ppc("?get_index_buffer_info@c_render_geometry_access@@QBAXJPAUs_index_buffer_info@@@Z");
//};

//public: long s_per_mesh_raw_data::index_size(void) const
//{
//    mangled_ppc("?index_size@s_per_mesh_raw_data@@QBAJXZ");
//};

//public: long s_per_mesh_raw_data::per_index_size(void) const
//{
//    mangled_ppc("?per_index_size@s_per_mesh_raw_data@@QBAJXZ");
//};

//public: bool s_per_mesh_raw_data::is_index32(void) const
//{
//    mangled_ppc("?is_index32@s_per_mesh_raw_data@@QBA_NXZ");
//};

//public: long s_per_mesh_raw_data::triangle_count(void) const
//{
//    mangled_ppc("?triangle_count@s_per_mesh_raw_data@@QBAJXZ");
//};

//public: long s_per_mesh_raw_data::get_vertex_index(long) const
//{
//    mangled_ppc("?get_vertex_index@s_per_mesh_raw_data@@QBAJJ@Z");
//};

//public: void * s_per_mesh_raw_data::get_index_buffer(void)
//{
//    mangled_ppc("?get_index_buffer@s_per_mesh_raw_data@@QAAPAXXZ");
//};

//public: bool s_per_mesh_raw_data::valid_mesh(void) const
//{
//    mangled_ppc("?valid_mesh@s_per_mesh_raw_data@@QBA_NXZ");
//};

//public: bool s_per_mesh_raw_data::upgrade_to_index32(void)
//{
//    mangled_ppc("?upgrade_to_index32@s_per_mesh_raw_data@@QAA_NXZ");
//};

//public: bool s_raw_vertex_with_uvatals_src::operator==(struct s_raw_vertex_with_uvatals_src const &)
//{
//    mangled_ppc("??8s_raw_vertex_with_uvatals_src@@QAA_NABU0@@Z");
//};

//public: bool s_raw_vertex::operator==(struct s_raw_vertex const &)
//{
//    mangled_ppc("??8s_raw_vertex@@QAA_NABU0@@Z");
//};

//long get_tessellated_vertex_type(long)
//{
//    mangled_ppc("?get_tessellated_vertex_type@@YAJJ@Z");
//};

//public: c_tag_struct_vtable<class c_render_geometry_tag_resource_vtable>::c_tag_struct_vtable<class c_render_geometry_tag_resource_vtable>(void)
//{
//    mangled_ppc("??0?$c_tag_struct_vtable@Vc_render_geometry_tag_resource_vtable@@@@QAA@XZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_render_geometry_tag_resource_vtable>::has_byte_swap_proc(void) const
//{
//    mangled_ppc("?has_byte_swap_proc@?$c_tag_struct_vtable@Vc_render_geometry_tag_resource_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_struct_vtable<class c_render_geometry_tag_resource_vtable>::byte_swap_block_proc(void *) const
//{
//    mangled_ppc("?byte_swap_block_proc@?$c_tag_struct_vtable@Vc_render_geometry_tag_resource_vtable@@@@UBAXPAX@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_render_geometry_tag_resource_vtable>::has_postprocess_proc(void) const
//{
//    mangled_ppc("?has_postprocess_proc@?$c_tag_struct_vtable@Vc_render_geometry_tag_resource_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_render_geometry_tag_resource_vtable>::postprocess_thunk(long, void *, bool) const
//{
//    mangled_ppc("?postprocess_thunk@?$c_tag_struct_vtable@Vc_render_geometry_tag_resource_vtable@@@@UBA_NJPAX_N@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_render_geometry_tag_resource_vtable>::has_format_proc(void) const
//{
//    mangled_ppc("?has_format_proc@?$c_tag_struct_vtable@Vc_render_geometry_tag_resource_vtable@@@@UBA_NXZ");
//};

//public: virtual char * c_tag_struct_vtable<class c_render_geometry_tag_resource_vtable>::format_thunk(long, __int64, struct s_tag_block *, long, char *, long) const
//{
//    mangled_ppc("?format_thunk@?$c_tag_struct_vtable@Vc_render_geometry_tag_resource_vtable@@@@UBAPADJ_JPAUs_tag_block@@JPADJ@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_render_geometry_tag_resource_vtable>::has_on_delete_proc(void) const
//{
//    mangled_ppc("?has_on_delete_proc@?$c_tag_struct_vtable@Vc_render_geometry_tag_resource_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_struct_vtable<class c_render_geometry_tag_resource_vtable>::on_delete_thunk(void *) const
//{
//    mangled_ppc("?on_delete_thunk@?$c_tag_struct_vtable@Vc_render_geometry_tag_resource_vtable@@@@UBAXPAX@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_render_geometry_tag_resource_vtable>::has_on_new_proc(void) const
//{
//    mangled_ppc("?has_on_new_proc@?$c_tag_struct_vtable@Vc_render_geometry_tag_resource_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_render_geometry_tag_resource_vtable>::on_new_thunk(void *) const
//{
//    mangled_ppc("?on_new_thunk@?$c_tag_struct_vtable@Vc_render_geometry_tag_resource_vtable@@@@UBA_NPAX@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_render_geometry_tag_resource_vtable>::has_on_copy_proc(void) const
//{
//    mangled_ppc("?has_on_copy_proc@?$c_tag_struct_vtable@Vc_render_geometry_tag_resource_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_render_geometry_tag_resource_vtable>::on_copy_thunk(void const *, void *) const
//{
//    mangled_ppc("?on_copy_thunk@?$c_tag_struct_vtable@Vc_render_geometry_tag_resource_vtable@@@@UBA_NPBXPAX@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_render_geometry_tag_resource_vtable>::has_write_to_cache_file_proc(void) const
//{
//    mangled_ppc("?has_write_to_cache_file_proc@?$c_tag_struct_vtable@Vc_render_geometry_tag_resource_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_struct_vtable<class c_render_geometry_tag_resource_vtable>::write_to_cache_file_thunk(long, struct s_tag_block *, struct s_cache_file_builder_stream_context const *, void **, void **) const
//{
//    mangled_ppc("?write_to_cache_file_thunk@?$c_tag_struct_vtable@Vc_render_geometry_tag_resource_vtable@@@@UBAXJPAUs_tag_block@@PBUs_cache_file_builder_stream_context@@PAPAX2@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_render_geometry_tag_resource_vtable>::has_block_does_not_exist_in_cache_file_proc(void) const
//{
//    mangled_ppc("?has_block_does_not_exist_in_cache_file_proc@?$c_tag_struct_vtable@Vc_render_geometry_tag_resource_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_render_geometry_tag_resource_vtable>::block_does_not_exist_in_cache_file_thunk(void) const
//{
//    mangled_ppc("?block_does_not_exist_in_cache_file_thunk@?$c_tag_struct_vtable@Vc_render_geometry_tag_resource_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_render_geometry_tag_resource_vtable>::has_fixup_old_struct_definition(void) const
//{
//    mangled_ppc("?has_fixup_old_struct_definition@?$c_tag_struct_vtable@Vc_render_geometry_tag_resource_vtable@@@@UBA_NXZ");
//};

//public: virtual struct s_tag_struct_definition * c_tag_struct_vtable<class c_render_geometry_tag_resource_vtable>::get_fixup_source_definition_thunk(void) const
//{
//    mangled_ppc("?get_fixup_source_definition_thunk@?$c_tag_struct_vtable@Vc_render_geometry_tag_resource_vtable@@@@UBAPAUs_tag_struct_definition@@XZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_render_geometry_tag_resource_vtable>::has_fixup_old_struct_proc(void) const
//{
//    mangled_ppc("?has_fixup_old_struct_proc@?$c_tag_struct_vtable@Vc_render_geometry_tag_resource_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_render_geometry_tag_resource_vtable>::fixup_old_struct_thunk(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool) const
//{
//    mangled_ppc("?fixup_old_struct_thunk@?$c_tag_struct_vtable@Vc_render_geometry_tag_resource_vtable@@@@UBA_NAAV?$c_basic_buffer@X@@PBUs_tag_struct_definition@@01PAVc_tag_allocator@@_N@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_render_geometry_tag_resource_vtable>::has_fixup_old_struct_from_disk_proc(void) const
//{
//    mangled_ppc("?has_fixup_old_struct_from_disk_proc@?$c_tag_struct_vtable@Vc_render_geometry_tag_resource_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_render_geometry_tag_resource_vtable>::fixup_old_struct_from_disk_thunk(struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool) const
//{
//    mangled_ppc("?fixup_old_struct_from_disk_thunk@?$c_tag_struct_vtable@Vc_render_geometry_tag_resource_vtable@@@@UBA_NPBUs_tag_struct_definition@@AAV?$c_basic_buffer@X@@010PAVc_tag_allocator@@_N@Z");
//};

//public: static void s_tag_vtable_has_byte_swap_proc<class c_render_geometry_tag_resource_vtable>::call(void *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_byte_swap_proc@Vc_render_geometry_tag_resource_vtable@@@@SAXPAX@Z");
//};

//public: static bool s_tag_vtable_has_postprocess_proc<class c_render_geometry_tag_resource_vtable>::call(long, void *, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_postprocess_proc@Vc_render_geometry_tag_resource_vtable@@@@SA_NJPAX_N@Z");
//};

//public: static char * s_tag_vtable_has_format_proc<class c_render_geometry_tag_resource_vtable>::call(long, __int64, struct s_tag_block *, long, char *, long)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_format_proc@Vc_render_geometry_tag_resource_vtable@@@@SAPADJ_JPAUs_tag_block@@JPADJ@Z");
//};

//public: static void s_tag_vtable_has_on_delete_proc<class c_render_geometry_tag_resource_vtable>::call(void *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_on_delete_proc@Vc_render_geometry_tag_resource_vtable@@@@SAXPAX@Z");
//};

//public: static bool s_tag_vtable_has_on_new_proc<class c_render_geometry_tag_resource_vtable>::call(void *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_on_new_proc@Vc_render_geometry_tag_resource_vtable@@@@SA_NPAX@Z");
//};

//public: static bool s_tag_vtable_has_on_copy_proc<class c_render_geometry_tag_resource_vtable>::call(void const *, void *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_on_copy_proc@Vc_render_geometry_tag_resource_vtable@@@@SA_NPBXPAX@Z");
//};

//public: static void s_tag_vtable_has_write_to_cache_file_proc<class c_render_geometry_tag_resource_vtable>::call(long, struct s_tag_block *, struct s_cache_file_builder_stream_context const *, void **, void **)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_write_to_cache_file_proc@Vc_render_geometry_tag_resource_vtable@@@@SAXJPAUs_tag_block@@PBUs_cache_file_builder_stream_context@@PAPAX2@Z");
//};

//public: static bool s_tag_vtable_has_block_does_not_exist_in_cache_file<class c_render_geometry_tag_resource_vtable>::call(void)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_block_does_not_exist_in_cache_file@Vc_render_geometry_tag_resource_vtable@@@@SA_NXZ");
//};

//public: static struct s_tag_struct_definition * s_tag_vtable_has_get_fixup_source_definition_proc<class c_render_geometry_tag_resource_vtable>::call(void)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_get_fixup_source_definition_proc@Vc_render_geometry_tag_resource_vtable@@@@SAPAUs_tag_struct_definition@@XZ");
//};

//public: static bool s_tag_vtable_has_fixup_old_struct_proc<class c_render_geometry_tag_resource_vtable>::call(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_fixup_old_struct_proc@Vc_render_geometry_tag_resource_vtable@@@@SA_NAAV?$c_basic_buffer@X@@PBUs_tag_struct_definition@@01PAVc_tag_allocator@@_N@Z");
//};

//public: static bool s_tag_vtable_has_fixup_old_struct_from_disk_proc<class c_render_geometry_tag_resource_vtable>::call(struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_fixup_old_struct_from_disk_proc@Vc_render_geometry_tag_resource_vtable@@@@SA_NPBUs_tag_struct_definition@@AAV?$c_basic_buffer@X@@010PAVc_tag_allocator@@_N@Z");
//};

//public: c_tag_resource_vtable<class c_render_geometry_tag_resource_vtable>::c_tag_resource_vtable<class c_render_geometry_tag_resource_vtable>(void)
//{
//    mangled_ppc("??0?$c_tag_resource_vtable@Vc_render_geometry_tag_resource_vtable@@@@QAA@XZ");
//};

//public: c_tag_resource_vtable_interface::c_tag_resource_vtable_interface(void)
//{
//    mangled_ppc("??0c_tag_resource_vtable_interface@@QAA@XZ");
//};

//public: virtual bool c_tag_resource_vtable_interface::has_on_load_resource_proc(void) const
//{
//    mangled_ppc("?has_on_load_resource_proc@c_tag_resource_vtable_interface@@UBA_NXZ");
//};

//public: virtual bool c_tag_resource_vtable_interface::on_load_resource_thunk(long, void *) const
//{
//    mangled_ppc("?on_load_resource_thunk@c_tag_resource_vtable_interface@@UBA_NJPAX@Z");
//};

//public: virtual bool c_tag_resource_vtable_interface::has_on_dispose_resource_proc(void) const
//{
//    mangled_ppc("?has_on_dispose_resource_proc@c_tag_resource_vtable_interface@@UBA_NXZ");
//};

//public: virtual void c_tag_resource_vtable_interface::on_dispose_resource_thunk(long, void *) const
//{
//    mangled_ppc("?on_dispose_resource_thunk@c_tag_resource_vtable_interface@@UBAXJPAX@Z");
//};

//public: virtual bool c_tag_resource_vtable_interface::has_resource_is_locked_proc(void) const
//{
//    mangled_ppc("?has_resource_is_locked_proc@c_tag_resource_vtable_interface@@UBA_NXZ");
//};

//public: virtual bool c_tag_resource_vtable_interface::resource_is_locked_thunk(void *) const
//{
//    mangled_ppc("?resource_is_locked_thunk@c_tag_resource_vtable_interface@@UBA_NPAX@Z");
//};

//public: virtual bool c_tag_resource_vtable_interface::has_write_resource_to_cache_file_proc(void) const
//{
//    mangled_ppc("?has_write_resource_to_cache_file_proc@c_tag_resource_vtable_interface@@UBA_NXZ");
//};

//public: virtual bool c_tag_resource_vtable_interface::write_resource_to_cache_file_thunk(long, void *, enum e_runtime_platform_type, class c_cache_file_scratch_allocator *) const
//{
//    mangled_ppc("?write_resource_to_cache_file_thunk@c_tag_resource_vtable_interface@@UBA_NJPAXW4e_runtime_platform_type@@PAVc_cache_file_scratch_allocator@@@Z");
//};

//public: virtual bool c_tag_resource_vtable_interface::has_get_xsync_version_proc(void) const
//{
//    mangled_ppc("?has_get_xsync_version_proc@c_tag_resource_vtable_interface@@UBA_NXZ");
//};

//public: virtual unsigned long c_tag_resource_vtable_interface::get_xsync_version_thunk(void) const
//{
//    mangled_ppc("?get_xsync_version_thunk@c_tag_resource_vtable_interface@@UBAKXZ");
//};

//public: virtual bool c_tag_resource_vtable_interface::has_resource_report_categories_proc(void) const
//{
//    mangled_ppc("?has_resource_report_categories_proc@c_tag_resource_vtable_interface@@UBA_NXZ");
//};

//public: virtual struct s_string_list_definition const * c_tag_resource_vtable_interface::get_resource_report_categories_thunk(void) const
//{
//    mangled_ppc("?get_resource_report_categories_thunk@c_tag_resource_vtable_interface@@UBAPBUs_string_list_definition@@XZ");
//};

//public: virtual bool c_tag_resource_vtable_interface::has_resource_report_proc(void) const
//{
//    mangled_ppc("?has_resource_report_proc@c_tag_resource_vtable_interface@@UBA_NXZ");
//};

//public: virtual void c_tag_resource_vtable_interface::resource_report_thunk(long, long, void const *, class c_tag_resource_reporter *) const
//{
//    mangled_ppc("?resource_report_thunk@c_tag_resource_vtable_interface@@UBAXJJPBXPAVc_tag_resource_reporter@@@Z");
//};

//public: virtual bool c_tag_resource_vtable_interface::has_get_resource_streaming_sublocations_proc(void) const
//{
//    mangled_ppc("?has_get_resource_streaming_sublocations_proc@c_tag_resource_vtable_interface@@UBA_NXZ");
//};

//public: virtual void c_tag_resource_vtable_interface::get_resource_streaming_sublocations_thunk(long, long, class c_output_stream<struct s_tag_resource_streaming_sublocation> *, class c_output_stream<struct s_tag_resource_streaming_sublocation> *) const
//{
//    mangled_ppc("?get_resource_streaming_sublocations_thunk@c_tag_resource_vtable_interface@@UBAXJJPAV?$c_output_stream@Us_tag_resource_streaming_sublocation@@@@0@Z");
//};

//public: static struct s_string_list_definition const * s_tag_vtable_default_entry<struct s_string_list_definition const *>::call(void)
//{
//    mangled_ppc("?call@?$s_tag_vtable_default_entry@PBUs_string_list_definition@@@@SAPBUs_string_list_definition@@XZ");
//};

//public: virtual bool c_tag_resource_vtable<class c_render_geometry_tag_resource_vtable>::has_on_load_resource_proc(void) const
//{
//    mangled_ppc("?has_on_load_resource_proc@?$c_tag_resource_vtable@Vc_render_geometry_tag_resource_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_resource_vtable<class c_render_geometry_tag_resource_vtable>::on_load_resource_thunk(long, void *) const
//{
//    mangled_ppc("?on_load_resource_thunk@?$c_tag_resource_vtable@Vc_render_geometry_tag_resource_vtable@@@@UBA_NJPAX@Z");
//};

//public: virtual bool c_tag_resource_vtable<class c_render_geometry_tag_resource_vtable>::has_on_dispose_resource_proc(void) const
//{
//    mangled_ppc("?has_on_dispose_resource_proc@?$c_tag_resource_vtable@Vc_render_geometry_tag_resource_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_resource_vtable<class c_render_geometry_tag_resource_vtable>::on_dispose_resource_thunk(long, void *) const
//{
//    mangled_ppc("?on_dispose_resource_thunk@?$c_tag_resource_vtable@Vc_render_geometry_tag_resource_vtable@@@@UBAXJPAX@Z");
//};

//public: virtual bool c_tag_resource_vtable<class c_render_geometry_tag_resource_vtable>::has_resource_is_locked_proc(void) const
//{
//    mangled_ppc("?has_resource_is_locked_proc@?$c_tag_resource_vtable@Vc_render_geometry_tag_resource_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_resource_vtable<class c_render_geometry_tag_resource_vtable>::resource_is_locked_thunk(void *) const
//{
//    mangled_ppc("?resource_is_locked_thunk@?$c_tag_resource_vtable@Vc_render_geometry_tag_resource_vtable@@@@UBA_NPAX@Z");
//};

//public: virtual bool c_tag_resource_vtable<class c_render_geometry_tag_resource_vtable>::has_write_resource_to_cache_file_proc(void) const
//{
//    mangled_ppc("?has_write_resource_to_cache_file_proc@?$c_tag_resource_vtable@Vc_render_geometry_tag_resource_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_resource_vtable<class c_render_geometry_tag_resource_vtable>::write_resource_to_cache_file_thunk(long, void *, enum e_runtime_platform_type, class c_cache_file_scratch_allocator *) const
//{
//    mangled_ppc("?write_resource_to_cache_file_thunk@?$c_tag_resource_vtable@Vc_render_geometry_tag_resource_vtable@@@@UBA_NJPAXW4e_runtime_platform_type@@PAVc_cache_file_scratch_allocator@@@Z");
//};

//public: virtual bool c_tag_resource_vtable<class c_render_geometry_tag_resource_vtable>::has_get_xsync_version_proc(void) const
//{
//    mangled_ppc("?has_get_xsync_version_proc@?$c_tag_resource_vtable@Vc_render_geometry_tag_resource_vtable@@@@UBA_NXZ");
//};

//public: virtual unsigned long c_tag_resource_vtable<class c_render_geometry_tag_resource_vtable>::get_xsync_version_thunk(void) const
//{
//    mangled_ppc("?get_xsync_version_thunk@?$c_tag_resource_vtable@Vc_render_geometry_tag_resource_vtable@@@@UBAKXZ");
//};

//public: virtual bool c_tag_resource_vtable<class c_render_geometry_tag_resource_vtable>::has_resource_report_categories_proc(void) const
//{
//    mangled_ppc("?has_resource_report_categories_proc@?$c_tag_resource_vtable@Vc_render_geometry_tag_resource_vtable@@@@UBA_NXZ");
//};

//public: virtual struct s_string_list_definition const * c_tag_resource_vtable<class c_render_geometry_tag_resource_vtable>::get_resource_report_categories_thunk(void) const
//{
//    mangled_ppc("?get_resource_report_categories_thunk@?$c_tag_resource_vtable@Vc_render_geometry_tag_resource_vtable@@@@UBAPBUs_string_list_definition@@XZ");
//};

//public: virtual bool c_tag_resource_vtable<class c_render_geometry_tag_resource_vtable>::has_resource_report_proc(void) const
//{
//    mangled_ppc("?has_resource_report_proc@?$c_tag_resource_vtable@Vc_render_geometry_tag_resource_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_resource_vtable<class c_render_geometry_tag_resource_vtable>::resource_report_thunk(long, long, void const *, class c_tag_resource_reporter *) const
//{
//    mangled_ppc("?resource_report_thunk@?$c_tag_resource_vtable@Vc_render_geometry_tag_resource_vtable@@@@UBAXJJPBXPAVc_tag_resource_reporter@@@Z");
//};

//public: virtual bool c_tag_resource_vtable<class c_render_geometry_tag_resource_vtable>::has_get_resource_streaming_sublocations_proc(void) const
//{
//    mangled_ppc("?has_get_resource_streaming_sublocations_proc@?$c_tag_resource_vtable@Vc_render_geometry_tag_resource_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_resource_vtable<class c_render_geometry_tag_resource_vtable>::get_resource_streaming_sublocations_thunk(long, long, class c_output_stream<struct s_tag_resource_streaming_sublocation> *, class c_output_stream<struct s_tag_resource_streaming_sublocation> *) const
//{
//    mangled_ppc("?get_resource_streaming_sublocations_thunk@?$c_tag_resource_vtable@Vc_render_geometry_tag_resource_vtable@@@@UBAXJJPAV?$c_output_stream@Us_tag_resource_streaming_sublocation@@@@0@Z");
//};

//public: static bool s_tag_vtable_has_on_load_resource<class c_render_geometry_tag_resource_vtable>::call(long, void *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_on_load_resource@Vc_render_geometry_tag_resource_vtable@@@@SA_NJPAX@Z");
//};

//public: static bool c_tag_resource_vtable_defaults::on_load_resource(long, void *)
//{
//    mangled_ppc("?on_load_resource@c_tag_resource_vtable_defaults@@SA_NJPAX@Z");
//};

//public: static void s_tag_vtable_has_on_dispose_resource<class c_render_geometry_tag_resource_vtable>::call(long, void *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_on_dispose_resource@Vc_render_geometry_tag_resource_vtable@@@@SAXJPAX@Z");
//};

//public: static void c_tag_resource_vtable_defaults::on_dispose_resource(long, void *)
//{
//    mangled_ppc("?on_dispose_resource@c_tag_resource_vtable_defaults@@SAXJPAX@Z");
//};

//public: static bool s_tag_vtable_has_resource_is_locked<class c_render_geometry_tag_resource_vtable>::call(void *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_resource_is_locked@Vc_render_geometry_tag_resource_vtable@@@@SA_NPAX@Z");
//};

//public: static bool c_tag_resource_vtable_defaults::resource_is_locked(void *)
//{
//    mangled_ppc("?resource_is_locked@c_tag_resource_vtable_defaults@@SA_NPAX@Z");
//};

//public: static bool s_tag_vtable_has_write_resource_to_cache_file<class c_render_geometry_tag_resource_vtable>::call(long, void *, enum e_runtime_platform_type, class c_cache_file_scratch_allocator *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_write_resource_to_cache_file@Vc_render_geometry_tag_resource_vtable@@@@SA_NJPAXW4e_runtime_platform_type@@PAVc_cache_file_scratch_allocator@@@Z");
//};

//public: static bool c_tag_resource_vtable_defaults::write_resource_to_cache_file(long, void *, enum e_runtime_platform_type, class c_cache_file_scratch_allocator *)
//{
//    mangled_ppc("?write_resource_to_cache_file@c_tag_resource_vtable_defaults@@SA_NJPAXW4e_runtime_platform_type@@PAVc_cache_file_scratch_allocator@@@Z");
//};

//public: static unsigned long s_tag_vtable_has_get_xsync_version<class c_render_geometry_tag_resource_vtable>::call(void)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_get_xsync_version@Vc_render_geometry_tag_resource_vtable@@@@SAKXZ");
//};

//public: static unsigned long c_tag_resource_vtable_defaults::get_xsync_version(void)
//{
//    mangled_ppc("?get_xsync_version@c_tag_resource_vtable_defaults@@SAKXZ");
//};

//public: static struct s_string_list_definition const * s_tag_vtable_has_get_resource_report_categories_proc<class c_render_geometry_tag_resource_vtable>::call(void)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_get_resource_report_categories_proc@Vc_render_geometry_tag_resource_vtable@@@@SAPBUs_string_list_definition@@XZ");
//};

//public: static struct s_string_list_definition const * c_render_geometry_tag_resource_vtable::get_resource_report_categories_proc(void)
//{
//    mangled_ppc("?get_resource_report_categories_proc@c_render_geometry_tag_resource_vtable@@SAPBUs_string_list_definition@@XZ");
//};

//public: static void s_tag_vtable_has_resource_report_proc<class c_render_geometry_tag_resource_vtable>::call(long, long, void const *, class c_tag_resource_reporter *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_resource_report_proc@Vc_render_geometry_tag_resource_vtable@@@@SAXJJPBXPAVc_tag_resource_reporter@@@Z");
//};

//public: static void c_render_geometry_tag_resource_vtable::resource_report_proc(long, long, void const *, class c_tag_resource_reporter *)
//{
//    mangled_ppc("?resource_report_proc@c_render_geometry_tag_resource_vtable@@SAXJJPBXPAVc_tag_resource_reporter@@@Z");
//};

//public: static void s_tag_vtable_has_get_resource_streaming_sublocations<class c_render_geometry_tag_resource_vtable>::call(long, long, class c_output_stream<struct s_tag_resource_streaming_sublocation> *, class c_output_stream<struct s_tag_resource_streaming_sublocation> *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_get_resource_streaming_sublocations@Vc_render_geometry_tag_resource_vtable@@@@SAXJJPAV?$c_output_stream@Us_tag_resource_streaming_sublocation@@@@0@Z");
//};

//public: static void c_tag_resource_vtable_defaults::get_resource_streaming_sublocations(long, long, class c_output_stream<struct s_tag_resource_streaming_sublocation> *, class c_output_stream<struct s_tag_resource_streaming_sublocation> *)
//{
//    mangled_ppc("?get_resource_streaming_sublocations@c_tag_resource_vtable_defaults@@SAXJJPAV?$c_output_stream@Us_tag_resource_streaming_sublocation@@@@0@Z");
//};

