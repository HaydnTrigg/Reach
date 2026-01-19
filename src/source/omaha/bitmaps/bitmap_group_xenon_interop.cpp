/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// struct s_cache_file_tag_interop_vtable const g_d3d_texture_interop_vtable; // "?g_d3d_texture_interop_vtable@@3Us_cache_file_tag_interop_vtable@@B"
// struct s_cache_file_tag_interop_vtable const g_d3d_texture_interleaved_interop_vtable; // "?g_d3d_texture_interleaved_interop_vtable@@3Us_cache_file_tag_interop_vtable@@B"
// public: static long const s_static_array<struct D3DBaseTexture, 2>::k_element_count; // "?k_element_count@?$s_static_array@UD3DBaseTexture@@$01@@2JB"
// public: static long const s_static_array<class c_rasterizer_texture_ref, 2>::k_element_count; // "?k_element_count@?$s_static_array@Vc_rasterizer_texture_ref@@$01@@2JB"
// public: static long const s_static_array<struct s_tag_d3d_pixel_region, 32>::k_element_count; // "?k_element_count@?$s_static_array@Us_tag_d3d_pixel_region@@$0CA@@@2JB"
// public: static int const c_enum_no_init<enum e_bitmap_type, char, 0, 4, struct s_default_enum_string_resolver>::k_minimum_value; // "?k_minimum_value@?$c_enum_no_init@W4e_bitmap_type@@D$0A@$03Us_default_enum_string_resolver@@@@2HB"
// public: static enum e_bitmap_type const c_enum_no_init<enum e_bitmap_type, char, 0, 4, struct s_default_enum_string_resolver>::k_maximum_value_plus_one; // "?k_maximum_value_plus_one@?$c_enum_no_init@W4e_bitmap_type@@D$0A@$03Us_default_enum_string_resolver@@@@2W4e_bitmap_type@@B"
// public: static long const s_static_array<struct s_render_texture_format, 2>::k_element_count; // "?k_element_count@?$s_static_array@Us_render_texture_format@@$01@@2JB"
// public: static long const s_static_array<struct s_xenon_texture_sections, 2>::k_element_count; // "?k_element_count@?$s_static_array@Us_xenon_texture_sections@@$01@@2JB"
// char const **boolean_enum_definition_strings; // "?boolean_enum_definition_strings@@3PAPBDA"
// struct s_string_list_definition boolean_enum_definition; // "?boolean_enum_definition@@3Us_string_list_definition@@A"
// char const **render_texture_interop_category_strings; // "?render_texture_interop_category_strings@@3PAPBDA"
// struct s_tag_struct_definition render_texture_interop_definition_struct; // "?render_texture_interop_definition_struct@@3Us_tag_struct_definition@@A"
// struct s_tag_interop_definition render_texture_interop_definition; // "?render_texture_interop_definition@@3Us_tag_interop_definition@@A"
// struct s_string_list_definition render_texture_interop_categories_definition; // "?render_texture_interop_categories_definition@@3Us_string_list_definition@@A"
// struct s_tag_struct_definition render_texture_interleaved_interop_definition_struct; // "?render_texture_interleaved_interop_definition_struct@@3Us_tag_struct_definition@@A"
// struct s_tag_interop_definition render_texture_interleaved_interop_definition; // "?render_texture_interleaved_interop_definition@@3Us_tag_interop_definition@@A"
// class c_tag_struct_vtable<class c_null_tag_vtable> render_texture_format_definition_struct_vtable; // "?render_texture_format_definition_struct_vtable@@3V?$c_tag_struct_vtable@Vc_null_tag_vtable@@@@A"

// class c_rasterizer_texture_ref bitmap_group_get_xenon_texture_inline(struct c_typed_tag_interop<struct s_render_texture_descriptor, struct s_tag_d3d_texture> *);
// class c_rasterizer_texture_ref bitmap_group_get_xenon_texture_interleaved_inline(struct c_typed_tag_interop<struct s_render_texture_interleaved_descriptor, struct s_tag_d3d_texture_interleaved> *, long);
// bool bitmap_group_get_xenon_hardware_format_and_resource_snapshot(long, long, class c_rasterizer_texture_ref *, struct bitmap_data const **, unsigned __int64*);
// bool bitmap_group_try_to_get_xenon_on_demand_bitmap_hardware_format(long, long, class c_rasterizer_texture_ref *);
// unsigned long get_max_pixel_size(class c_wrapped_array<struct s_tag_d3d_pixel_region const>, unsigned long);
// void d3d_get_used_pixel_sizes(struct s_render_texture_descriptor *, unsigned long, unsigned long, unsigned long *, unsigned long *);
// public: s_tag_d3d_texture_used_space::s_tag_d3d_texture_used_space(void);
// void bitmap_get_used_xenon_size(struct bitmap_data const *, unsigned long *, unsigned long *);
// bool bitmap_group_build_xenon_texture(struct bitmap_data const *, class c_basic_buffer<void>, class c_basic_buffer<void>, struct c_typed_tag_interop<struct s_render_texture_descriptor, struct s_tag_d3d_texture> *);
// void bitmap_xenon_texture_generate_report(long, struct c_typed_tag_interop<struct s_render_texture_descriptor, struct s_tag_d3d_texture> const *, class c_tag_resource_reporter *);
// void render_texture_xenon_report_space(class c_wrapped_array<struct s_tag_d3d_pixel_region const>, struct s_tag_data const *, class c_cache_file_space_marker *);
// void d3d_texture_calculate_used_space(struct D3DBaseTexture const *, struct s_render_texture_format const *, struct s_tag_d3d_texture_used_space *);
// public: c_mipmap_range_layout_callback::c_mipmap_range_layout_callback(void);
// public: virtual void c_mipmap_range_layout_callback::process_range(long, long, unsigned long, unsigned long);
// public: struct s_tag_d3d_pixel_region c_mipmap_range_layout_callback::get_mip_range(long);
// public: c_xenon_texture_range_callback::c_xenon_texture_range_callback(void);
// public: static void c_render_texture_interop_vtable::get_unused_cache_file_space(long, struct s_tag_interop const *, class c_cache_file_space_marker *);
// bool bitmap_compressed_format_is_interleavable(struct bitmap_data *);
// bool free_of_XGSetTextureHeaderPair_changing_packed_mips_flag_issue(struct bitmap_data const *);
// bool bitmap_group_can_be_interleaved(long, struct s_tag_block *);
// bool bitmap_group_build_interleaved_xenon_texture(struct s_xenon_texture_setup const *, struct s_xenon_texture_setup const *, struct c_typed_tag_interop<struct s_render_texture_interleaved_descriptor, struct s_tag_d3d_texture_interleaved> *, struct s_xenon_texture_interleaved_layout *);
// void initialize_texture_format_from_bitmap(struct bitmap_data const *, struct s_render_texture_format *);
// public: c_texture_range_copy_callback::c_texture_range_copy_callback(struct s_xenon_texture_sections const *, struct s_xenon_texture_setup const *, struct s_render_texture_interleaved_descriptor *, bool);
// public: virtual void c_texture_range_copy_callback::process_range(long, long, unsigned long, unsigned long);
// bool bitmap_group_build_single_interleaved_xenon_texture(struct s_xenon_texture_setup const *, struct c_typed_tag_interop<struct s_render_texture_interleaved_descriptor, struct s_tag_d3d_texture_interleaved> *);
// void bitmap_group_interleave_xenon_bitmaps(struct s_tag_block *, struct s_tag_data *, struct s_tag_data *);
// void build_xenon_texture_setup(struct bitmap_data *, struct s_tag_data *, struct s_xenon_texture_setup *);
// void bitmap_group_get_interleaved_xenon_bitmap_size(struct s_tag_block *, unsigned long *);
// unsigned int d3d_texture_get_first_packed_mip_level(struct D3DBaseTexture const *, struct s_render_texture_format const *);
// void initialize_xenon_texture_header_internal(struct s_render_texture_format const *, struct D3DBaseTexture *, bool);
// bool render_texture_is_on_demand_bitmap(struct s_render_texture_descriptor const *);
// bool render_texture_on_demand_data_available(struct s_render_texture_descriptor const *);
// void bitmap_xenon_texture_build_header(struct c_typed_tag_interop<struct s_render_texture_descriptor, struct s_tag_d3d_texture> *, struct D3DBaseTexture *);
// bool tag_d3d_texture_fixup(struct s_tag_interop *, class c_tag_interop_verifier *);
// bool tag_d3d_texture_is_locked(struct s_tag_interop *);
// bool tag_d3d_texture_teardown(struct s_tag_interop *);
// void d3d_texture_interleaved_calculate_layout(struct s_render_texture_format const *, struct s_render_texture_format const *, struct s_xenon_texture_interleaved_layout *);
// void initialize_xenon_texture_interleaved_header_internal(struct s_render_texture_format const *, struct D3DBaseTexture *, bool, struct s_render_texture_format const *, struct D3DBaseTexture *, bool, struct s_xenon_texture_interleaved_layout *);
// bool tag_d3d_texture_interleaved_fixup(struct s_tag_interop *, class c_tag_interop_verifier *);
// bool tag_d3d_texture_interleaved_is_locked(struct s_tag_interop *);
// bool tag_d3d_texture_interleaved_teardown(struct s_tag_interop *);
// class c_rasterizer_texture_ref bitmap_group_get_xenon_texture(struct c_typed_tag_interop<struct s_render_texture_descriptor, struct s_tag_d3d_texture> *);
// class c_rasterizer_texture_ref bitmap_group_get_xenon_texture_interleaved(struct c_typed_tag_interop<struct s_render_texture_interleaved_descriptor, struct s_tag_d3d_texture_interleaved> *, long);
// public: c_xenon_texture_range_visitor::c_xenon_texture_range_visitor(struct bitmap_data const *);
// public: c_xenon_texture_range_visitor::c_xenon_texture_range_visitor(struct D3DBaseTexture const *, struct s_render_texture_format const *);
// public: void c_xenon_texture_range_visitor::visit_all_mip_levels(class c_xenon_texture_range_callback *);
// private: unsigned long c_xenon_texture_range_visitor::get_actual_mipmap_offset(long, long);
// private: long c_xenon_texture_range_visitor::get_face_count(void);
// private: unsigned int c_xenon_texture_range_visitor::get_x_offset(unsigned long, unsigned long, unsigned long);
// XGAddress2DTiledX;
// private: unsigned int c_xenon_texture_range_visitor::get_y_offset(unsigned long, unsigned long, unsigned long);
// XGAddress2DTiledY;
// private: void c_xenon_texture_range_visitor::visit_mip_level(long, long, class c_xenon_texture_range_callback *);
// private: void c_xenon_texture_range_visitor::visit_packed_mip_tail(long, long, class c_xenon_texture_range_callback *);
// public: struct s_tag_d3d_texture * c_typed_tag_interop<struct s_render_texture_descriptor, struct s_tag_d3d_texture>::get(void);
// public: struct s_render_texture_descriptor * c_typed_tag_interop<struct s_render_texture_descriptor, struct s_tag_d3d_texture>::get_descriptor(void);
// public: struct s_render_texture_descriptor const * c_typed_tag_interop<struct s_render_texture_descriptor, struct s_tag_d3d_texture>::get_descriptor(void) const;
// public: struct s_tag_d3d_texture_interleaved * c_typed_tag_interop<struct s_render_texture_interleaved_descriptor, struct s_tag_d3d_texture_interleaved>::get(void);
// public: struct s_render_texture_interleaved_descriptor * c_typed_tag_interop<struct s_render_texture_interleaved_descriptor, struct s_tag_d3d_texture_interleaved>::get_descriptor(void);
// public: c_static_sized_dynamic_array<struct s_tag_d3d_pixel_region, 32>::c_static_sized_dynamic_array<struct s_tag_d3d_pixel_region, 32>(void);
// public: struct s_tag_d3d_pixel_region & c_resizeable_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_d3d_pixel_region, 32>, struct s_tag_d3d_pixel_region>::add_element(void);
// public: void s_static_array<struct s_tag_d3d_pixel_region, 32>::set_all(struct s_tag_d3d_pixel_region const &);
// public: class c_enum_no_init<enum e_bitmap_type, char, 0, 4, struct s_default_enum_string_resolver> & c_enum_no_init<enum e_bitmap_type, char, 0, 4, struct s_default_enum_string_resolver>::operator=(enum e_bitmap_type);
// public: enum e_bitmap_type c_enum_no_init<enum e_bitmap_type, char, 0, 4, struct s_default_enum_string_resolver>::operator enum e_bitmap_type(void) const;
// public: bool c_enum_no_init<enum e_bitmap_type, char, 0, 4, struct s_default_enum_string_resolver>::operator==(enum e_bitmap_type) const;
// public: long c_wrapped_array_no_init<struct s_tag_d3d_pixel_region const>::count(void) const;
// public: struct s_tag_d3d_pixel_region const & c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_d3d_pixel_region const>, struct s_tag_d3d_pixel_region const>::operator[](long);
// public: struct s_tag_d3d_pixel_region const * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_d3d_pixel_region const>, struct s_tag_d3d_pixel_region const>::get_element(long);
// public: long c_resizeable_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_d3d_pixel_region, 32>, struct s_tag_d3d_pixel_region>::new_element_index(void);
// public: struct s_tag_d3d_pixel_region * c_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_d3d_pixel_region, 32>, struct s_tag_d3d_pixel_region>::get_element(long);
// public: bool c_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_d3d_pixel_region, 32>, struct s_tag_d3d_pixel_region>::valid_index(long) const;
// public: struct s_tag_d3d_pixel_region const * c_wrapped_array_no_init<struct s_tag_d3d_pixel_region const>::begin(void);
// public: struct s_tag_d3d_pixel_region const * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_d3d_pixel_region const>, struct s_tag_d3d_pixel_region const>::begin(void);
// public: bool c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_d3d_pixel_region const>, struct s_tag_d3d_pixel_region const>::valid_index(long) const;
// public: class c_wrapped_array_no_init<struct s_tag_d3d_pixel_region const> * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_d3d_pixel_region const> >::get_super_class(void);
// public: long c_static_sized_dynamic_array<struct s_tag_d3d_pixel_region, 32>::new_element_index(void);
// private: class c_static_sized_dynamic_array<struct s_tag_d3d_pixel_region, 32> * c_resizeable_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_d3d_pixel_region, 32>, struct s_tag_d3d_pixel_region>::get_super_class(void);
// public: struct s_tag_d3d_pixel_region * c_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_d3d_pixel_region, 32>, struct s_tag_d3d_pixel_region>::begin(void);
// public: long c_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_d3d_pixel_region, 32>, struct s_tag_d3d_pixel_region>::count(void) const;
// public: long c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_d3d_pixel_region const>, struct s_tag_d3d_pixel_region const>::count(void) const;
// public: struct s_tag_d3d_pixel_region * c_static_sized_dynamic_array<struct s_tag_d3d_pixel_region, 32>::begin(void);
// public: long c_static_sized_dynamic_array<struct s_tag_d3d_pixel_region, 32>::count(void) const;
// public: class c_static_sized_dynamic_array<struct s_tag_d3d_pixel_region, 32> * c_recursive_template_pattern<class c_static_sized_dynamic_array<struct s_tag_d3d_pixel_region, 32> >::get_super_class(void);
// public: class c_static_sized_dynamic_array<struct s_tag_d3d_pixel_region, 32> const * c_recursive_template_pattern<class c_static_sized_dynamic_array<struct s_tag_d3d_pixel_region, 32> >::get_super_class(void) const;
// public: class c_wrapped_array_no_init<struct s_tag_d3d_pixel_region const> const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_d3d_pixel_region const> >::get_super_class(void) const;
// public: struct s_tag_d3d_pixel_region * s_static_array<struct s_tag_d3d_pixel_region, 32>::begin(void);
// public: class c_rasterizer_texture_ref & s_static_array<class c_rasterizer_texture_ref, 2>::operator[]<long>(long);
// public: c_wrapped_array<struct s_tag_d3d_pixel_region const>::ctor<class c_static_sized_dynamic_array<struct s_tag_d3d_pixel_region, 32>, struct s_tag_d3d_pixel_region>(class c_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_d3d_pixel_region, 32>, struct s_tag_d3d_pixel_region> &);
// public: struct s_tag_d3d_pixel_region & s_static_array<struct s_tag_d3d_pixel_region, 32>::operator[]<long>(long);
// public: c_basic_buffer<void const>::ctor<void>(class c_basic_buffer<void> const &, unsigned long, unsigned long);
// public: struct s_render_texture_format & s_static_array<struct s_render_texture_format, 2>::operator[]<int>(int);
// public: struct s_xenon_texture_sections & s_static_array<struct s_xenon_texture_sections, 2>::operator[]<int>(int);
// public: struct s_render_texture_format const & s_static_array<struct s_render_texture_format, 2>::operator[]<int>(int) const;
// public: struct D3DBaseTexture & s_static_array<struct D3DBaseTexture, 2>::operator[]<int>(int);
// public: struct s_render_texture_format const & s_static_array<struct s_render_texture_format, 2>::operator[]<long>(long) const;
// public: struct D3DBaseTexture & s_static_array<struct D3DBaseTexture, 2>::operator[]<long>(long);
// public: class c_rasterizer_texture_ref & s_static_array<class c_rasterizer_texture_ref, 2>::operator[]<int>(int);
// public: static bool s_static_array<struct s_tag_d3d_pixel_region, 32>::valid<long>(long);
// public: struct s_tag_d3d_pixel_region * c_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_d3d_pixel_region, 32>, struct s_tag_d3d_pixel_region>::get_elements(void);
// public: void c_wrapped_array_no_init<struct s_tag_d3d_pixel_region const>::set_elements(struct s_tag_d3d_pixel_region const *, long);
// public: static bool s_static_array<class c_rasterizer_texture_ref, 2>::valid<long>(long);
// public: static bool s_static_array<struct s_render_texture_format, 2>::valid<int>(int);
// public: static bool s_static_array<struct s_xenon_texture_sections, 2>::valid<int>(int);
// public: static bool s_static_array<struct D3DBaseTexture, 2>::valid<int>(int);
// public: static bool s_static_array<struct s_render_texture_format, 2>::valid<long>(long);
// public: static bool s_static_array<struct D3DBaseTexture, 2>::valid<long>(long);
// public: static bool s_static_array<class c_rasterizer_texture_ref, 2>::valid<int>(int);
// public: c_tag_struct_vtable<class c_render_texture_interop_vtable>::c_tag_struct_vtable<class c_render_texture_interop_vtable>(void);
// public: virtual bool c_tag_struct_vtable<class c_render_texture_interop_vtable>::has_byte_swap_proc(void) const;
// public: virtual void c_tag_struct_vtable<class c_render_texture_interop_vtable>::byte_swap_block_proc(void *) const;
// public: virtual bool c_tag_struct_vtable<class c_render_texture_interop_vtable>::has_postprocess_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_render_texture_interop_vtable>::postprocess_thunk(long, void *, bool) const;
// public: virtual bool c_tag_struct_vtable<class c_render_texture_interop_vtable>::has_format_proc(void) const;
// public: virtual char * c_tag_struct_vtable<class c_render_texture_interop_vtable>::format_thunk(long, __int64, struct s_tag_block *, long, char *, long) const;
// public: virtual bool c_tag_struct_vtable<class c_render_texture_interop_vtable>::has_on_delete_proc(void) const;
// public: virtual void c_tag_struct_vtable<class c_render_texture_interop_vtable>::on_delete_thunk(void *) const;
// public: virtual bool c_tag_struct_vtable<class c_render_texture_interop_vtable>::has_on_new_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_render_texture_interop_vtable>::on_new_thunk(void *) const;
// public: virtual bool c_tag_struct_vtable<class c_render_texture_interop_vtable>::has_on_copy_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_render_texture_interop_vtable>::on_copy_thunk(void const *, void *) const;
// public: virtual bool c_tag_struct_vtable<class c_render_texture_interop_vtable>::has_write_to_cache_file_proc(void) const;
// public: virtual void c_tag_struct_vtable<class c_render_texture_interop_vtable>::write_to_cache_file_thunk(long, struct s_tag_block *, struct s_cache_file_builder_stream_context const *, void **, void **) const;
// public: virtual bool c_tag_struct_vtable<class c_render_texture_interop_vtable>::has_block_does_not_exist_in_cache_file_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_render_texture_interop_vtable>::block_does_not_exist_in_cache_file_thunk(void) const;
// public: virtual bool c_tag_struct_vtable<class c_render_texture_interop_vtable>::has_fixup_old_struct_definition(void) const;
// public: virtual struct s_tag_struct_definition * c_tag_struct_vtable<class c_render_texture_interop_vtable>::get_fixup_source_definition_thunk(void) const;
// public: virtual bool c_tag_struct_vtable<class c_render_texture_interop_vtable>::has_fixup_old_struct_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_render_texture_interop_vtable>::fixup_old_struct_thunk(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool) const;
// public: virtual bool c_tag_struct_vtable<class c_render_texture_interop_vtable>::has_fixup_old_struct_from_disk_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_render_texture_interop_vtable>::fixup_old_struct_from_disk_thunk(struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool) const;
// public: static void s_tag_vtable_has_byte_swap_proc<class c_render_texture_interop_vtable>::call(void *);
// public: static bool s_tag_vtable_has_postprocess_proc<class c_render_texture_interop_vtable>::call(long, void *, bool);
// public: static char * s_tag_vtable_has_format_proc<class c_render_texture_interop_vtable>::call(long, __int64, struct s_tag_block *, long, char *, long);
// public: static void s_tag_vtable_has_on_delete_proc<class c_render_texture_interop_vtable>::call(void *);
// public: static bool s_tag_vtable_has_on_new_proc<class c_render_texture_interop_vtable>::call(void *);
// public: static bool s_tag_vtable_has_on_copy_proc<class c_render_texture_interop_vtable>::call(void const *, void *);
// public: static void s_tag_vtable_has_write_to_cache_file_proc<class c_render_texture_interop_vtable>::call(long, struct s_tag_block *, struct s_cache_file_builder_stream_context const *, void **, void **);
// public: static bool s_tag_vtable_has_block_does_not_exist_in_cache_file<class c_render_texture_interop_vtable>::call(void);
// public: static struct s_tag_struct_definition * s_tag_vtable_has_get_fixup_source_definition_proc<class c_render_texture_interop_vtable>::call(void);
// public: static bool s_tag_vtable_has_fixup_old_struct_proc<class c_render_texture_interop_vtable>::call(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool);
// public: static bool s_tag_vtable_has_fixup_old_struct_from_disk_proc<class c_render_texture_interop_vtable>::call(struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool);
// public: c_tag_interop_vtable<class c_render_texture_interop_vtable>::c_tag_interop_vtable<class c_render_texture_interop_vtable>(void);
// public: virtual bool c_tag_interop_vtable<class c_render_texture_interop_vtable>::has_write_interop_to_cache_file_proc(void) const;
// public: virtual bool c_tag_interop_vtable<class c_render_texture_interop_vtable>::write_interop_to_cache_file_thunk(long, struct s_tag_interop const *, struct s_tag_interop *, struct s_cache_file_builder_stream_context const *) const;
// public: virtual bool c_tag_interop_vtable<class c_render_texture_interop_vtable>::has_get_unused_cache_file_space_proc(void) const;
// public: virtual void c_tag_interop_vtable<class c_render_texture_interop_vtable>::get_unused_cache_file_space_thunk(long, struct s_tag_interop const *, class c_cache_file_space_marker *) const;
// public: static bool s_tag_vtable_has_write_interop_to_cache_file<class c_render_texture_interop_vtable>::call(long, struct s_tag_interop const *, struct s_tag_interop *, struct s_cache_file_builder_stream_context const *);
// public: static void s_tag_vtable_has_get_unused_cache_file_space<class c_render_texture_interop_vtable>::call(long, struct s_tag_interop const *, class c_cache_file_space_marker *);

//class c_rasterizer_texture_ref bitmap_group_get_xenon_texture_inline(struct c_typed_tag_interop<struct s_render_texture_descriptor, struct s_tag_d3d_texture> *)
//{
//    mangled_ppc("?bitmap_group_get_xenon_texture_inline@@YA?AVc_rasterizer_texture_ref@@PAU?$c_typed_tag_interop@Us_render_texture_descriptor@@Us_tag_d3d_texture@@@@@Z");
//};

//class c_rasterizer_texture_ref bitmap_group_get_xenon_texture_interleaved_inline(struct c_typed_tag_interop<struct s_render_texture_interleaved_descriptor, struct s_tag_d3d_texture_interleaved> *, long)
//{
//    mangled_ppc("?bitmap_group_get_xenon_texture_interleaved_inline@@YA?AVc_rasterizer_texture_ref@@PAU?$c_typed_tag_interop@Us_render_texture_interleaved_descriptor@@Us_tag_d3d_texture_interleaved@@@@J@Z");
//};

//bool bitmap_group_get_xenon_hardware_format_and_resource_snapshot(long, long, class c_rasterizer_texture_ref *, struct bitmap_data const **, unsigned __int64*)
//{
//    mangled_ppc("?bitmap_group_get_xenon_hardware_format_and_resource_snapshot@@YA_NJJPAVc_rasterizer_texture_ref@@PAPBUbitmap_data@@PA_K@Z");
//};

//bool bitmap_group_try_to_get_xenon_on_demand_bitmap_hardware_format(long, long, class c_rasterizer_texture_ref *)
//{
//    mangled_ppc("?bitmap_group_try_to_get_xenon_on_demand_bitmap_hardware_format@@YA_NJJPAVc_rasterizer_texture_ref@@@Z");
//};

//unsigned long get_max_pixel_size(class c_wrapped_array<struct s_tag_d3d_pixel_region const>, unsigned long)
//{
//    mangled_ppc("?get_max_pixel_size@@YAKV?$c_wrapped_array@$$CBUs_tag_d3d_pixel_region@@@@K@Z");
//};

//void d3d_get_used_pixel_sizes(struct s_render_texture_descriptor *, unsigned long, unsigned long, unsigned long *, unsigned long *)
//{
//    mangled_ppc("?d3d_get_used_pixel_sizes@@YAXPAUs_render_texture_descriptor@@KKPAK1@Z");
//};

//public: s_tag_d3d_texture_used_space::s_tag_d3d_texture_used_space(void)
//{
//    mangled_ppc("??0s_tag_d3d_texture_used_space@@QAA@XZ");
//};

//void bitmap_get_used_xenon_size(struct bitmap_data const *, unsigned long *, unsigned long *)
//{
//    mangled_ppc("?bitmap_get_used_xenon_size@@YAXPBUbitmap_data@@PAK1@Z");
//};

//bool bitmap_group_build_xenon_texture(struct bitmap_data const *, class c_basic_buffer<void>, class c_basic_buffer<void>, struct c_typed_tag_interop<struct s_render_texture_descriptor, struct s_tag_d3d_texture> *)
//{
//    mangled_ppc("?bitmap_group_build_xenon_texture@@YA_NPBUbitmap_data@@V?$c_basic_buffer@X@@1PAU?$c_typed_tag_interop@Us_render_texture_descriptor@@Us_tag_d3d_texture@@@@@Z");
//};

//void bitmap_xenon_texture_generate_report(long, struct c_typed_tag_interop<struct s_render_texture_descriptor, struct s_tag_d3d_texture> const *, class c_tag_resource_reporter *)
//{
//    mangled_ppc("?bitmap_xenon_texture_generate_report@@YAXJPBU?$c_typed_tag_interop@Us_render_texture_descriptor@@Us_tag_d3d_texture@@@@PAVc_tag_resource_reporter@@@Z");
//};

//void render_texture_xenon_report_space(class c_wrapped_array<struct s_tag_d3d_pixel_region const>, struct s_tag_data const *, class c_cache_file_space_marker *)
//{
//    mangled_ppc("?render_texture_xenon_report_space@@YAXV?$c_wrapped_array@$$CBUs_tag_d3d_pixel_region@@@@PBUs_tag_data@@PAVc_cache_file_space_marker@@@Z");
//};

//void d3d_texture_calculate_used_space(struct D3DBaseTexture const *, struct s_render_texture_format const *, struct s_tag_d3d_texture_used_space *)
//{
//    mangled_ppc("?d3d_texture_calculate_used_space@@YAXPBUD3DBaseTexture@@PBUs_render_texture_format@@PAUs_tag_d3d_texture_used_space@@@Z");
//};

//public: c_mipmap_range_layout_callback::c_mipmap_range_layout_callback(void)
//{
//    mangled_ppc("??0c_mipmap_range_layout_callback@@QAA@XZ");
//};

//public: virtual void c_mipmap_range_layout_callback::process_range(long, long, unsigned long, unsigned long)
//{
//    mangled_ppc("?process_range@c_mipmap_range_layout_callback@@UAAXJJKK@Z");
//};

//public: struct s_tag_d3d_pixel_region c_mipmap_range_layout_callback::get_mip_range(long)
//{
//    mangled_ppc("?get_mip_range@c_mipmap_range_layout_callback@@QAA?AUs_tag_d3d_pixel_region@@J@Z");
//};

//public: c_xenon_texture_range_callback::c_xenon_texture_range_callback(void)
//{
//    mangled_ppc("??0c_xenon_texture_range_callback@@QAA@XZ");
//};

//public: static void c_render_texture_interop_vtable::get_unused_cache_file_space(long, struct s_tag_interop const *, class c_cache_file_space_marker *)
//{
//    mangled_ppc("?get_unused_cache_file_space@c_render_texture_interop_vtable@@SAXJPBUs_tag_interop@@PAVc_cache_file_space_marker@@@Z");
//};

//bool bitmap_compressed_format_is_interleavable(struct bitmap_data *)
//{
//    mangled_ppc("?bitmap_compressed_format_is_interleavable@@YA_NPAUbitmap_data@@@Z");
//};

//bool free_of_XGSetTextureHeaderPair_changing_packed_mips_flag_issue(struct bitmap_data const *)
//{
//    mangled_ppc("?free_of_XGSetTextureHeaderPair_changing_packed_mips_flag_issue@@YA_NPBUbitmap_data@@@Z");
//};

//bool bitmap_group_can_be_interleaved(long, struct s_tag_block *)
//{
//    mangled_ppc("?bitmap_group_can_be_interleaved@@YA_NJPAUs_tag_block@@@Z");
//};

//bool bitmap_group_build_interleaved_xenon_texture(struct s_xenon_texture_setup const *, struct s_xenon_texture_setup const *, struct c_typed_tag_interop<struct s_render_texture_interleaved_descriptor, struct s_tag_d3d_texture_interleaved> *, struct s_xenon_texture_interleaved_layout *)
//{
//    mangled_ppc("?bitmap_group_build_interleaved_xenon_texture@@YA_NPBUs_xenon_texture_setup@@0PAU?$c_typed_tag_interop@Us_render_texture_interleaved_descriptor@@Us_tag_d3d_texture_interleaved@@@@PAUs_xenon_texture_interleaved_layout@@@Z");
//};

//void initialize_texture_format_from_bitmap(struct bitmap_data const *, struct s_render_texture_format *)
//{
//    mangled_ppc("?initialize_texture_format_from_bitmap@@YAXPBUbitmap_data@@PAUs_render_texture_format@@@Z");
//};

//public: c_texture_range_copy_callback::c_texture_range_copy_callback(struct s_xenon_texture_sections const *, struct s_xenon_texture_setup const *, struct s_render_texture_interleaved_descriptor *, bool)
//{
//    mangled_ppc("??0c_texture_range_copy_callback@@QAA@PBUs_xenon_texture_sections@@PBUs_xenon_texture_setup@@PAUs_render_texture_interleaved_descriptor@@_N@Z");
//};

//public: virtual void c_texture_range_copy_callback::process_range(long, long, unsigned long, unsigned long)
//{
//    mangled_ppc("?process_range@c_texture_range_copy_callback@@UAAXJJKK@Z");
//};

//bool bitmap_group_build_single_interleaved_xenon_texture(struct s_xenon_texture_setup const *, struct c_typed_tag_interop<struct s_render_texture_interleaved_descriptor, struct s_tag_d3d_texture_interleaved> *)
//{
//    mangled_ppc("?bitmap_group_build_single_interleaved_xenon_texture@@YA_NPBUs_xenon_texture_setup@@PAU?$c_typed_tag_interop@Us_render_texture_interleaved_descriptor@@Us_tag_d3d_texture_interleaved@@@@@Z");
//};

//void bitmap_group_interleave_xenon_bitmaps(struct s_tag_block *, struct s_tag_data *, struct s_tag_data *)
//{
//    mangled_ppc("?bitmap_group_interleave_xenon_bitmaps@@YAXPAUs_tag_block@@PAUs_tag_data@@1@Z");
//};

//void build_xenon_texture_setup(struct bitmap_data *, struct s_tag_data *, struct s_xenon_texture_setup *)
//{
//    mangled_ppc("?build_xenon_texture_setup@@YAXPAUbitmap_data@@PAUs_tag_data@@PAUs_xenon_texture_setup@@@Z");
//};

//void bitmap_group_get_interleaved_xenon_bitmap_size(struct s_tag_block *, unsigned long *)
//{
//    mangled_ppc("?bitmap_group_get_interleaved_xenon_bitmap_size@@YAXPAUs_tag_block@@PAK@Z");
//};

//unsigned int d3d_texture_get_first_packed_mip_level(struct D3DBaseTexture const *, struct s_render_texture_format const *)
//{
//    mangled_ppc("?d3d_texture_get_first_packed_mip_level@@YAIPBUD3DBaseTexture@@PBUs_render_texture_format@@@Z");
//};

//void initialize_xenon_texture_header_internal(struct s_render_texture_format const *, struct D3DBaseTexture *, bool)
//{
//    mangled_ppc("?initialize_xenon_texture_header_internal@@YAXPBUs_render_texture_format@@PAUD3DBaseTexture@@_N@Z");
//};

//bool render_texture_is_on_demand_bitmap(struct s_render_texture_descriptor const *)
//{
//    mangled_ppc("?render_texture_is_on_demand_bitmap@@YA_NPBUs_render_texture_descriptor@@@Z");
//};

//bool render_texture_on_demand_data_available(struct s_render_texture_descriptor const *)
//{
//    mangled_ppc("?render_texture_on_demand_data_available@@YA_NPBUs_render_texture_descriptor@@@Z");
//};

//void bitmap_xenon_texture_build_header(struct c_typed_tag_interop<struct s_render_texture_descriptor, struct s_tag_d3d_texture> *, struct D3DBaseTexture *)
//{
//    mangled_ppc("?bitmap_xenon_texture_build_header@@YAXPAU?$c_typed_tag_interop@Us_render_texture_descriptor@@Us_tag_d3d_texture@@@@PAUD3DBaseTexture@@@Z");
//};

//bool tag_d3d_texture_fixup(struct s_tag_interop *, class c_tag_interop_verifier *)
//{
//    mangled_ppc("?tag_d3d_texture_fixup@@YA_NPAUs_tag_interop@@PAVc_tag_interop_verifier@@@Z");
//};

//bool tag_d3d_texture_is_locked(struct s_tag_interop *)
//{
//    mangled_ppc("?tag_d3d_texture_is_locked@@YA_NPAUs_tag_interop@@@Z");
//};

//bool tag_d3d_texture_teardown(struct s_tag_interop *)
//{
//    mangled_ppc("?tag_d3d_texture_teardown@@YA_NPAUs_tag_interop@@@Z");
//};

//void d3d_texture_interleaved_calculate_layout(struct s_render_texture_format const *, struct s_render_texture_format const *, struct s_xenon_texture_interleaved_layout *)
//{
//    mangled_ppc("?d3d_texture_interleaved_calculate_layout@@YAXPBUs_render_texture_format@@0PAUs_xenon_texture_interleaved_layout@@@Z");
//};

//void initialize_xenon_texture_interleaved_header_internal(struct s_render_texture_format const *, struct D3DBaseTexture *, bool, struct s_render_texture_format const *, struct D3DBaseTexture *, bool, struct s_xenon_texture_interleaved_layout *)
//{
//    mangled_ppc("?initialize_xenon_texture_interleaved_header_internal@@YAXPBUs_render_texture_format@@PAUD3DBaseTexture@@_N012PAUs_xenon_texture_interleaved_layout@@@Z");
//};

//bool tag_d3d_texture_interleaved_fixup(struct s_tag_interop *, class c_tag_interop_verifier *)
//{
//    mangled_ppc("?tag_d3d_texture_interleaved_fixup@@YA_NPAUs_tag_interop@@PAVc_tag_interop_verifier@@@Z");
//};

//bool tag_d3d_texture_interleaved_is_locked(struct s_tag_interop *)
//{
//    mangled_ppc("?tag_d3d_texture_interleaved_is_locked@@YA_NPAUs_tag_interop@@@Z");
//};

//bool tag_d3d_texture_interleaved_teardown(struct s_tag_interop *)
//{
//    mangled_ppc("?tag_d3d_texture_interleaved_teardown@@YA_NPAUs_tag_interop@@@Z");
//};

//class c_rasterizer_texture_ref bitmap_group_get_xenon_texture(struct c_typed_tag_interop<struct s_render_texture_descriptor, struct s_tag_d3d_texture> *)
//{
//    mangled_ppc("?bitmap_group_get_xenon_texture@@YA?AVc_rasterizer_texture_ref@@PAU?$c_typed_tag_interop@Us_render_texture_descriptor@@Us_tag_d3d_texture@@@@@Z");
//};

//class c_rasterizer_texture_ref bitmap_group_get_xenon_texture_interleaved(struct c_typed_tag_interop<struct s_render_texture_interleaved_descriptor, struct s_tag_d3d_texture_interleaved> *, long)
//{
//    mangled_ppc("?bitmap_group_get_xenon_texture_interleaved@@YA?AVc_rasterizer_texture_ref@@PAU?$c_typed_tag_interop@Us_render_texture_interleaved_descriptor@@Us_tag_d3d_texture_interleaved@@@@J@Z");
//};

//public: c_xenon_texture_range_visitor::c_xenon_texture_range_visitor(struct bitmap_data const *)
//{
//    mangled_ppc("??0c_xenon_texture_range_visitor@@QAA@PBUbitmap_data@@@Z");
//};

//public: c_xenon_texture_range_visitor::c_xenon_texture_range_visitor(struct D3DBaseTexture const *, struct s_render_texture_format const *)
//{
//    mangled_ppc("??0c_xenon_texture_range_visitor@@QAA@PBUD3DBaseTexture@@PBUs_render_texture_format@@@Z");
//};

//public: void c_xenon_texture_range_visitor::visit_all_mip_levels(class c_xenon_texture_range_callback *)
//{
//    mangled_ppc("?visit_all_mip_levels@c_xenon_texture_range_visitor@@QAAXPAVc_xenon_texture_range_callback@@@Z");
//};

//private: unsigned long c_xenon_texture_range_visitor::get_actual_mipmap_offset(long, long)
//{
//    mangled_ppc("?get_actual_mipmap_offset@c_xenon_texture_range_visitor@@AAAKJJ@Z");
//};

//private: long c_xenon_texture_range_visitor::get_face_count(void)
//{
//    mangled_ppc("?get_face_count@c_xenon_texture_range_visitor@@AAAJXZ");
//};

//private: unsigned int c_xenon_texture_range_visitor::get_x_offset(unsigned long, unsigned long, unsigned long)
//{
//    mangled_ppc("?get_x_offset@c_xenon_texture_range_visitor@@AAAIKKK@Z");
//};

//XGAddress2DTiledX
//{
//    mangled_ppc("XGAddress2DTiledX");
//};

//private: unsigned int c_xenon_texture_range_visitor::get_y_offset(unsigned long, unsigned long, unsigned long)
//{
//    mangled_ppc("?get_y_offset@c_xenon_texture_range_visitor@@AAAIKKK@Z");
//};

//XGAddress2DTiledY
//{
//    mangled_ppc("XGAddress2DTiledY");
//};

//private: void c_xenon_texture_range_visitor::visit_mip_level(long, long, class c_xenon_texture_range_callback *)
//{
//    mangled_ppc("?visit_mip_level@c_xenon_texture_range_visitor@@AAAXJJPAVc_xenon_texture_range_callback@@@Z");
//};

//private: void c_xenon_texture_range_visitor::visit_packed_mip_tail(long, long, class c_xenon_texture_range_callback *)
//{
//    mangled_ppc("?visit_packed_mip_tail@c_xenon_texture_range_visitor@@AAAXJJPAVc_xenon_texture_range_callback@@@Z");
//};

//public: struct s_tag_d3d_texture * c_typed_tag_interop<struct s_render_texture_descriptor, struct s_tag_d3d_texture>::get(void)
//{
//    mangled_ppc("?get@?$c_typed_tag_interop@Us_render_texture_descriptor@@Us_tag_d3d_texture@@@@QAAPAUs_tag_d3d_texture@@XZ");
//};

//public: struct s_render_texture_descriptor * c_typed_tag_interop<struct s_render_texture_descriptor, struct s_tag_d3d_texture>::get_descriptor(void)
//{
//    mangled_ppc("?get_descriptor@?$c_typed_tag_interop@Us_render_texture_descriptor@@Us_tag_d3d_texture@@@@QAAPAUs_render_texture_descriptor@@XZ");
//};

//public: struct s_render_texture_descriptor const * c_typed_tag_interop<struct s_render_texture_descriptor, struct s_tag_d3d_texture>::get_descriptor(void) const
//{
//    mangled_ppc("?get_descriptor@?$c_typed_tag_interop@Us_render_texture_descriptor@@Us_tag_d3d_texture@@@@QBAPBUs_render_texture_descriptor@@XZ");
//};

//public: struct s_tag_d3d_texture_interleaved * c_typed_tag_interop<struct s_render_texture_interleaved_descriptor, struct s_tag_d3d_texture_interleaved>::get(void)
//{
//    mangled_ppc("?get@?$c_typed_tag_interop@Us_render_texture_interleaved_descriptor@@Us_tag_d3d_texture_interleaved@@@@QAAPAUs_tag_d3d_texture_interleaved@@XZ");
//};

//public: struct s_render_texture_interleaved_descriptor * c_typed_tag_interop<struct s_render_texture_interleaved_descriptor, struct s_tag_d3d_texture_interleaved>::get_descriptor(void)
//{
//    mangled_ppc("?get_descriptor@?$c_typed_tag_interop@Us_render_texture_interleaved_descriptor@@Us_tag_d3d_texture_interleaved@@@@QAAPAUs_render_texture_interleaved_descriptor@@XZ");
//};

//public: c_static_sized_dynamic_array<struct s_tag_d3d_pixel_region, 32>::c_static_sized_dynamic_array<struct s_tag_d3d_pixel_region, 32>(void)
//{
//    mangled_ppc("??0?$c_static_sized_dynamic_array@Us_tag_d3d_pixel_region@@$0CA@@@QAA@XZ");
//};

//public: struct s_tag_d3d_pixel_region & c_resizeable_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_d3d_pixel_region, 32>, struct s_tag_d3d_pixel_region>::add_element(void)
//{
//    mangled_ppc("?add_element@?$c_resizeable_array_operator_interface@V?$c_static_sized_dynamic_array@Us_tag_d3d_pixel_region@@$0CA@@@Us_tag_d3d_pixel_region@@@@QAAAAUs_tag_d3d_pixel_region@@XZ");
//};

//public: void s_static_array<struct s_tag_d3d_pixel_region, 32>::set_all(struct s_tag_d3d_pixel_region const &)
//{
//    mangled_ppc("?set_all@?$s_static_array@Us_tag_d3d_pixel_region@@$0CA@@@QAAXABUs_tag_d3d_pixel_region@@@Z");
//};

//public: class c_enum_no_init<enum e_bitmap_type, char, 0, 4, struct s_default_enum_string_resolver> & c_enum_no_init<enum e_bitmap_type, char, 0, 4, struct s_default_enum_string_resolver>::operator=(enum e_bitmap_type)
//{
//    mangled_ppc("??4?$c_enum_no_init@W4e_bitmap_type@@D$0A@$03Us_default_enum_string_resolver@@@@QAAAAV0@W4e_bitmap_type@@@Z");
//};

//public: enum e_bitmap_type c_enum_no_init<enum e_bitmap_type, char, 0, 4, struct s_default_enum_string_resolver>::operator enum e_bitmap_type(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_bitmap_type@@D$0A@$03Us_default_enum_string_resolver@@@@QBA?AW4e_bitmap_type@@XZ");
//};

//public: bool c_enum_no_init<enum e_bitmap_type, char, 0, 4, struct s_default_enum_string_resolver>::operator==(enum e_bitmap_type) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_bitmap_type@@D$0A@$03Us_default_enum_string_resolver@@@@QBA_NW4e_bitmap_type@@@Z");
//};

//public: long c_wrapped_array_no_init<struct s_tag_d3d_pixel_region const>::count(void) const
//{
//    mangled_ppc("?count@?$c_wrapped_array_no_init@$$CBUs_tag_d3d_pixel_region@@@@QBAJXZ");
//};

//public: struct s_tag_d3d_pixel_region const & c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_d3d_pixel_region const>, struct s_tag_d3d_pixel_region const>::operator[](long)
//{
//    mangled_ppc("??A?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CBUs_tag_d3d_pixel_region@@@@$$CBUs_tag_d3d_pixel_region@@@@QAAABUs_tag_d3d_pixel_region@@J@Z");
//};

//public: struct s_tag_d3d_pixel_region const * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_d3d_pixel_region const>, struct s_tag_d3d_pixel_region const>::get_element(long)
//{
//    mangled_ppc("?get_element@?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CBUs_tag_d3d_pixel_region@@@@$$CBUs_tag_d3d_pixel_region@@@@QAAPBUs_tag_d3d_pixel_region@@J@Z");
//};

//public: long c_resizeable_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_d3d_pixel_region, 32>, struct s_tag_d3d_pixel_region>::new_element_index(void)
//{
//    mangled_ppc("?new_element_index@?$c_resizeable_array_operator_interface@V?$c_static_sized_dynamic_array@Us_tag_d3d_pixel_region@@$0CA@@@Us_tag_d3d_pixel_region@@@@QAAJXZ");
//};

//public: struct s_tag_d3d_pixel_region * c_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_d3d_pixel_region, 32>, struct s_tag_d3d_pixel_region>::get_element(long)
//{
//    mangled_ppc("?get_element@?$c_array_operator_interface@V?$c_static_sized_dynamic_array@Us_tag_d3d_pixel_region@@$0CA@@@Us_tag_d3d_pixel_region@@@@QAAPAUs_tag_d3d_pixel_region@@J@Z");
//};

//public: bool c_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_d3d_pixel_region, 32>, struct s_tag_d3d_pixel_region>::valid_index(long) const
//{
//    mangled_ppc("?valid_index@?$c_array_operator_interface@V?$c_static_sized_dynamic_array@Us_tag_d3d_pixel_region@@$0CA@@@Us_tag_d3d_pixel_region@@@@QBA_NJ@Z");
//};

//public: struct s_tag_d3d_pixel_region const * c_wrapped_array_no_init<struct s_tag_d3d_pixel_region const>::begin(void)
//{
//    mangled_ppc("?begin@?$c_wrapped_array_no_init@$$CBUs_tag_d3d_pixel_region@@@@QAAPBUs_tag_d3d_pixel_region@@XZ");
//};

//public: struct s_tag_d3d_pixel_region const * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_d3d_pixel_region const>, struct s_tag_d3d_pixel_region const>::begin(void)
//{
//    mangled_ppc("?begin@?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CBUs_tag_d3d_pixel_region@@@@$$CBUs_tag_d3d_pixel_region@@@@QAAPBUs_tag_d3d_pixel_region@@XZ");
//};

//public: bool c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_d3d_pixel_region const>, struct s_tag_d3d_pixel_region const>::valid_index(long) const
//{
//    mangled_ppc("?valid_index@?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CBUs_tag_d3d_pixel_region@@@@$$CBUs_tag_d3d_pixel_region@@@@QBA_NJ@Z");
//};

//public: class c_wrapped_array_no_init<struct s_tag_d3d_pixel_region const> * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_d3d_pixel_region const> >::get_super_class(void)
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@$$CBUs_tag_d3d_pixel_region@@@@@@QAAPAV?$c_wrapped_array_no_init@$$CBUs_tag_d3d_pixel_region@@@@XZ");
//};

//public: long c_static_sized_dynamic_array<struct s_tag_d3d_pixel_region, 32>::new_element_index(void)
//{
//    mangled_ppc("?new_element_index@?$c_static_sized_dynamic_array@Us_tag_d3d_pixel_region@@$0CA@@@QAAJXZ");
//};

//private: class c_static_sized_dynamic_array<struct s_tag_d3d_pixel_region, 32> * c_resizeable_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_d3d_pixel_region, 32>, struct s_tag_d3d_pixel_region>::get_super_class(void)
//{
//    mangled_ppc("?get_super_class@?$c_resizeable_array_operator_interface@V?$c_static_sized_dynamic_array@Us_tag_d3d_pixel_region@@$0CA@@@Us_tag_d3d_pixel_region@@@@AAAPAV?$c_static_sized_dynamic_array@Us_tag_d3d_pixel_region@@$0CA@@@XZ");
//};

//public: struct s_tag_d3d_pixel_region * c_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_d3d_pixel_region, 32>, struct s_tag_d3d_pixel_region>::begin(void)
//{
//    mangled_ppc("?begin@?$c_array_operator_interface@V?$c_static_sized_dynamic_array@Us_tag_d3d_pixel_region@@$0CA@@@Us_tag_d3d_pixel_region@@@@QAAPAUs_tag_d3d_pixel_region@@XZ");
//};

//public: long c_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_d3d_pixel_region, 32>, struct s_tag_d3d_pixel_region>::count(void) const
//{
//    mangled_ppc("?count@?$c_array_operator_interface@V?$c_static_sized_dynamic_array@Us_tag_d3d_pixel_region@@$0CA@@@Us_tag_d3d_pixel_region@@@@QBAJXZ");
//};

//public: long c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_d3d_pixel_region const>, struct s_tag_d3d_pixel_region const>::count(void) const
//{
//    mangled_ppc("?count@?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CBUs_tag_d3d_pixel_region@@@@$$CBUs_tag_d3d_pixel_region@@@@QBAJXZ");
//};

//public: struct s_tag_d3d_pixel_region * c_static_sized_dynamic_array<struct s_tag_d3d_pixel_region, 32>::begin(void)
//{
//    mangled_ppc("?begin@?$c_static_sized_dynamic_array@Us_tag_d3d_pixel_region@@$0CA@@@QAAPAUs_tag_d3d_pixel_region@@XZ");
//};

//public: long c_static_sized_dynamic_array<struct s_tag_d3d_pixel_region, 32>::count(void) const
//{
//    mangled_ppc("?count@?$c_static_sized_dynamic_array@Us_tag_d3d_pixel_region@@$0CA@@@QBAJXZ");
//};

//public: class c_static_sized_dynamic_array<struct s_tag_d3d_pixel_region, 32> * c_recursive_template_pattern<class c_static_sized_dynamic_array<struct s_tag_d3d_pixel_region, 32> >::get_super_class(void)
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_static_sized_dynamic_array@Us_tag_d3d_pixel_region@@$0CA@@@@@QAAPAV?$c_static_sized_dynamic_array@Us_tag_d3d_pixel_region@@$0CA@@@XZ");
//};

//public: class c_static_sized_dynamic_array<struct s_tag_d3d_pixel_region, 32> const * c_recursive_template_pattern<class c_static_sized_dynamic_array<struct s_tag_d3d_pixel_region, 32> >::get_super_class(void) const
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_static_sized_dynamic_array@Us_tag_d3d_pixel_region@@$0CA@@@@@QBAPBV?$c_static_sized_dynamic_array@Us_tag_d3d_pixel_region@@$0CA@@@XZ");
//};

//public: class c_wrapped_array_no_init<struct s_tag_d3d_pixel_region const> const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_d3d_pixel_region const> >::get_super_class(void) const
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@$$CBUs_tag_d3d_pixel_region@@@@@@QBAPBV?$c_wrapped_array_no_init@$$CBUs_tag_d3d_pixel_region@@@@XZ");
//};

//public: struct s_tag_d3d_pixel_region * s_static_array<struct s_tag_d3d_pixel_region, 32>::begin(void)
//{
//    mangled_ppc("?begin@?$s_static_array@Us_tag_d3d_pixel_region@@$0CA@@@QAAPAUs_tag_d3d_pixel_region@@XZ");
//};

//public: class c_rasterizer_texture_ref & s_static_array<class c_rasterizer_texture_ref, 2>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Vc_rasterizer_texture_ref@@$01@@QAAAAVc_rasterizer_texture_ref@@J@Z");
//};

//public: c_wrapped_array<struct s_tag_d3d_pixel_region const>::ctor<class c_static_sized_dynamic_array<struct s_tag_d3d_pixel_region, 32>, struct s_tag_d3d_pixel_region>(class c_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_d3d_pixel_region, 32>, struct s_tag_d3d_pixel_region> &)
//{
//    mangled_ppc("??$?0V?$c_static_sized_dynamic_array@Us_tag_d3d_pixel_region@@$0CA@@@Us_tag_d3d_pixel_region@@@?$c_wrapped_array@$$CBUs_tag_d3d_pixel_region@@@@QAA@AAV?$c_array_operator_interface@V?$c_static_sized_dynamic_array@Us_tag_d3d_pixel_region@@$0CA@@@Us_tag_d3d_pixel_region@@@@@Z");
//};

//public: struct s_tag_d3d_pixel_region & s_static_array<struct s_tag_d3d_pixel_region, 32>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_tag_d3d_pixel_region@@$0CA@@@QAAAAUs_tag_d3d_pixel_region@@J@Z");
//};

//public: c_basic_buffer<void const>::ctor<void>(class c_basic_buffer<void> const &, unsigned long, unsigned long)
//{
//    mangled_ppc("??$?0X@?$c_basic_buffer@$$CBX@@QAA@ABV?$c_basic_buffer@X@@KK@Z");
//};

//public: struct s_render_texture_format & s_static_array<struct s_render_texture_format, 2>::operator[]<int>(int)
//{
//    mangled_ppc("??$?AH@?$s_static_array@Us_render_texture_format@@$01@@QAAAAUs_render_texture_format@@H@Z");
//};

//public: struct s_xenon_texture_sections & s_static_array<struct s_xenon_texture_sections, 2>::operator[]<int>(int)
//{
//    mangled_ppc("??$?AH@?$s_static_array@Us_xenon_texture_sections@@$01@@QAAAAUs_xenon_texture_sections@@H@Z");
//};

//public: struct s_render_texture_format const & s_static_array<struct s_render_texture_format, 2>::operator[]<int>(int) const
//{
//    mangled_ppc("??$?AH@?$s_static_array@Us_render_texture_format@@$01@@QBAABUs_render_texture_format@@H@Z");
//};

//public: struct D3DBaseTexture & s_static_array<struct D3DBaseTexture, 2>::operator[]<int>(int)
//{
//    mangled_ppc("??$?AH@?$s_static_array@UD3DBaseTexture@@$01@@QAAAAUD3DBaseTexture@@H@Z");
//};

//public: struct s_render_texture_format const & s_static_array<struct s_render_texture_format, 2>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_render_texture_format@@$01@@QBAABUs_render_texture_format@@J@Z");
//};

//public: struct D3DBaseTexture & s_static_array<struct D3DBaseTexture, 2>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@UD3DBaseTexture@@$01@@QAAAAUD3DBaseTexture@@J@Z");
//};

//public: class c_rasterizer_texture_ref & s_static_array<class c_rasterizer_texture_ref, 2>::operator[]<int>(int)
//{
//    mangled_ppc("??$?AH@?$s_static_array@Vc_rasterizer_texture_ref@@$01@@QAAAAVc_rasterizer_texture_ref@@H@Z");
//};

//public: static bool s_static_array<struct s_tag_d3d_pixel_region, 32>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_tag_d3d_pixel_region@@$0CA@@@SA_NJ@Z");
//};

//public: struct s_tag_d3d_pixel_region * c_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_d3d_pixel_region, 32>, struct s_tag_d3d_pixel_region>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$c_array_operator_interface@V?$c_static_sized_dynamic_array@Us_tag_d3d_pixel_region@@$0CA@@@Us_tag_d3d_pixel_region@@@@QAAPAUs_tag_d3d_pixel_region@@XZ");
//};

//public: void c_wrapped_array_no_init<struct s_tag_d3d_pixel_region const>::set_elements(struct s_tag_d3d_pixel_region const *, long)
//{
//    mangled_ppc("?set_elements@?$c_wrapped_array_no_init@$$CBUs_tag_d3d_pixel_region@@@@QAAXPBUs_tag_d3d_pixel_region@@J@Z");
//};

//public: static bool s_static_array<class c_rasterizer_texture_ref, 2>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Vc_rasterizer_texture_ref@@$01@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_render_texture_format, 2>::valid<int>(int)
//{
//    mangled_ppc("??$valid@H@?$s_static_array@Us_render_texture_format@@$01@@SA_NH@Z");
//};

//public: static bool s_static_array<struct s_xenon_texture_sections, 2>::valid<int>(int)
//{
//    mangled_ppc("??$valid@H@?$s_static_array@Us_xenon_texture_sections@@$01@@SA_NH@Z");
//};

//public: static bool s_static_array<struct D3DBaseTexture, 2>::valid<int>(int)
//{
//    mangled_ppc("??$valid@H@?$s_static_array@UD3DBaseTexture@@$01@@SA_NH@Z");
//};

//public: static bool s_static_array<struct s_render_texture_format, 2>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_render_texture_format@@$01@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct D3DBaseTexture, 2>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@UD3DBaseTexture@@$01@@SA_NJ@Z");
//};

//public: static bool s_static_array<class c_rasterizer_texture_ref, 2>::valid<int>(int)
//{
//    mangled_ppc("??$valid@H@?$s_static_array@Vc_rasterizer_texture_ref@@$01@@SA_NH@Z");
//};

//public: c_tag_struct_vtable<class c_render_texture_interop_vtable>::c_tag_struct_vtable<class c_render_texture_interop_vtable>(void)
//{
//    mangled_ppc("??0?$c_tag_struct_vtable@Vc_render_texture_interop_vtable@@@@QAA@XZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_render_texture_interop_vtable>::has_byte_swap_proc(void) const
//{
//    mangled_ppc("?has_byte_swap_proc@?$c_tag_struct_vtable@Vc_render_texture_interop_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_struct_vtable<class c_render_texture_interop_vtable>::byte_swap_block_proc(void *) const
//{
//    mangled_ppc("?byte_swap_block_proc@?$c_tag_struct_vtable@Vc_render_texture_interop_vtable@@@@UBAXPAX@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_render_texture_interop_vtable>::has_postprocess_proc(void) const
//{
//    mangled_ppc("?has_postprocess_proc@?$c_tag_struct_vtable@Vc_render_texture_interop_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_render_texture_interop_vtable>::postprocess_thunk(long, void *, bool) const
//{
//    mangled_ppc("?postprocess_thunk@?$c_tag_struct_vtable@Vc_render_texture_interop_vtable@@@@UBA_NJPAX_N@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_render_texture_interop_vtable>::has_format_proc(void) const
//{
//    mangled_ppc("?has_format_proc@?$c_tag_struct_vtable@Vc_render_texture_interop_vtable@@@@UBA_NXZ");
//};

//public: virtual char * c_tag_struct_vtable<class c_render_texture_interop_vtable>::format_thunk(long, __int64, struct s_tag_block *, long, char *, long) const
//{
//    mangled_ppc("?format_thunk@?$c_tag_struct_vtable@Vc_render_texture_interop_vtable@@@@UBAPADJ_JPAUs_tag_block@@JPADJ@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_render_texture_interop_vtable>::has_on_delete_proc(void) const
//{
//    mangled_ppc("?has_on_delete_proc@?$c_tag_struct_vtable@Vc_render_texture_interop_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_struct_vtable<class c_render_texture_interop_vtable>::on_delete_thunk(void *) const
//{
//    mangled_ppc("?on_delete_thunk@?$c_tag_struct_vtable@Vc_render_texture_interop_vtable@@@@UBAXPAX@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_render_texture_interop_vtable>::has_on_new_proc(void) const
//{
//    mangled_ppc("?has_on_new_proc@?$c_tag_struct_vtable@Vc_render_texture_interop_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_render_texture_interop_vtable>::on_new_thunk(void *) const
//{
//    mangled_ppc("?on_new_thunk@?$c_tag_struct_vtable@Vc_render_texture_interop_vtable@@@@UBA_NPAX@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_render_texture_interop_vtable>::has_on_copy_proc(void) const
//{
//    mangled_ppc("?has_on_copy_proc@?$c_tag_struct_vtable@Vc_render_texture_interop_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_render_texture_interop_vtable>::on_copy_thunk(void const *, void *) const
//{
//    mangled_ppc("?on_copy_thunk@?$c_tag_struct_vtable@Vc_render_texture_interop_vtable@@@@UBA_NPBXPAX@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_render_texture_interop_vtable>::has_write_to_cache_file_proc(void) const
//{
//    mangled_ppc("?has_write_to_cache_file_proc@?$c_tag_struct_vtable@Vc_render_texture_interop_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_struct_vtable<class c_render_texture_interop_vtable>::write_to_cache_file_thunk(long, struct s_tag_block *, struct s_cache_file_builder_stream_context const *, void **, void **) const
//{
//    mangled_ppc("?write_to_cache_file_thunk@?$c_tag_struct_vtable@Vc_render_texture_interop_vtable@@@@UBAXJPAUs_tag_block@@PBUs_cache_file_builder_stream_context@@PAPAX2@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_render_texture_interop_vtable>::has_block_does_not_exist_in_cache_file_proc(void) const
//{
//    mangled_ppc("?has_block_does_not_exist_in_cache_file_proc@?$c_tag_struct_vtable@Vc_render_texture_interop_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_render_texture_interop_vtable>::block_does_not_exist_in_cache_file_thunk(void) const
//{
//    mangled_ppc("?block_does_not_exist_in_cache_file_thunk@?$c_tag_struct_vtable@Vc_render_texture_interop_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_render_texture_interop_vtable>::has_fixup_old_struct_definition(void) const
//{
//    mangled_ppc("?has_fixup_old_struct_definition@?$c_tag_struct_vtable@Vc_render_texture_interop_vtable@@@@UBA_NXZ");
//};

//public: virtual struct s_tag_struct_definition * c_tag_struct_vtable<class c_render_texture_interop_vtable>::get_fixup_source_definition_thunk(void) const
//{
//    mangled_ppc("?get_fixup_source_definition_thunk@?$c_tag_struct_vtable@Vc_render_texture_interop_vtable@@@@UBAPAUs_tag_struct_definition@@XZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_render_texture_interop_vtable>::has_fixup_old_struct_proc(void) const
//{
//    mangled_ppc("?has_fixup_old_struct_proc@?$c_tag_struct_vtable@Vc_render_texture_interop_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_render_texture_interop_vtable>::fixup_old_struct_thunk(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool) const
//{
//    mangled_ppc("?fixup_old_struct_thunk@?$c_tag_struct_vtable@Vc_render_texture_interop_vtable@@@@UBA_NAAV?$c_basic_buffer@X@@PBUs_tag_struct_definition@@01PAVc_tag_allocator@@_N@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_render_texture_interop_vtable>::has_fixup_old_struct_from_disk_proc(void) const
//{
//    mangled_ppc("?has_fixup_old_struct_from_disk_proc@?$c_tag_struct_vtable@Vc_render_texture_interop_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_render_texture_interop_vtable>::fixup_old_struct_from_disk_thunk(struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool) const
//{
//    mangled_ppc("?fixup_old_struct_from_disk_thunk@?$c_tag_struct_vtable@Vc_render_texture_interop_vtable@@@@UBA_NPBUs_tag_struct_definition@@AAV?$c_basic_buffer@X@@010PAVc_tag_allocator@@_N@Z");
//};

//public: static void s_tag_vtable_has_byte_swap_proc<class c_render_texture_interop_vtable>::call(void *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_byte_swap_proc@Vc_render_texture_interop_vtable@@@@SAXPAX@Z");
//};

//public: static bool s_tag_vtable_has_postprocess_proc<class c_render_texture_interop_vtable>::call(long, void *, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_postprocess_proc@Vc_render_texture_interop_vtable@@@@SA_NJPAX_N@Z");
//};

//public: static char * s_tag_vtable_has_format_proc<class c_render_texture_interop_vtable>::call(long, __int64, struct s_tag_block *, long, char *, long)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_format_proc@Vc_render_texture_interop_vtable@@@@SAPADJ_JPAUs_tag_block@@JPADJ@Z");
//};

//public: static void s_tag_vtable_has_on_delete_proc<class c_render_texture_interop_vtable>::call(void *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_on_delete_proc@Vc_render_texture_interop_vtable@@@@SAXPAX@Z");
//};

//public: static bool s_tag_vtable_has_on_new_proc<class c_render_texture_interop_vtable>::call(void *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_on_new_proc@Vc_render_texture_interop_vtable@@@@SA_NPAX@Z");
//};

//public: static bool s_tag_vtable_has_on_copy_proc<class c_render_texture_interop_vtable>::call(void const *, void *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_on_copy_proc@Vc_render_texture_interop_vtable@@@@SA_NPBXPAX@Z");
//};

//public: static void s_tag_vtable_has_write_to_cache_file_proc<class c_render_texture_interop_vtable>::call(long, struct s_tag_block *, struct s_cache_file_builder_stream_context const *, void **, void **)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_write_to_cache_file_proc@Vc_render_texture_interop_vtable@@@@SAXJPAUs_tag_block@@PBUs_cache_file_builder_stream_context@@PAPAX2@Z");
//};

//public: static bool s_tag_vtable_has_block_does_not_exist_in_cache_file<class c_render_texture_interop_vtable>::call(void)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_block_does_not_exist_in_cache_file@Vc_render_texture_interop_vtable@@@@SA_NXZ");
//};

//public: static struct s_tag_struct_definition * s_tag_vtable_has_get_fixup_source_definition_proc<class c_render_texture_interop_vtable>::call(void)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_get_fixup_source_definition_proc@Vc_render_texture_interop_vtable@@@@SAPAUs_tag_struct_definition@@XZ");
//};

//public: static bool s_tag_vtable_has_fixup_old_struct_proc<class c_render_texture_interop_vtable>::call(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_fixup_old_struct_proc@Vc_render_texture_interop_vtable@@@@SA_NAAV?$c_basic_buffer@X@@PBUs_tag_struct_definition@@01PAVc_tag_allocator@@_N@Z");
//};

//public: static bool s_tag_vtable_has_fixup_old_struct_from_disk_proc<class c_render_texture_interop_vtable>::call(struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_fixup_old_struct_from_disk_proc@Vc_render_texture_interop_vtable@@@@SA_NPBUs_tag_struct_definition@@AAV?$c_basic_buffer@X@@010PAVc_tag_allocator@@_N@Z");
//};

//public: c_tag_interop_vtable<class c_render_texture_interop_vtable>::c_tag_interop_vtable<class c_render_texture_interop_vtable>(void)
//{
//    mangled_ppc("??0?$c_tag_interop_vtable@Vc_render_texture_interop_vtable@@@@QAA@XZ");
//};

//public: virtual bool c_tag_interop_vtable<class c_render_texture_interop_vtable>::has_write_interop_to_cache_file_proc(void) const
//{
//    mangled_ppc("?has_write_interop_to_cache_file_proc@?$c_tag_interop_vtable@Vc_render_texture_interop_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_interop_vtable<class c_render_texture_interop_vtable>::write_interop_to_cache_file_thunk(long, struct s_tag_interop const *, struct s_tag_interop *, struct s_cache_file_builder_stream_context const *) const
//{
//    mangled_ppc("?write_interop_to_cache_file_thunk@?$c_tag_interop_vtable@Vc_render_texture_interop_vtable@@@@UBA_NJPBUs_tag_interop@@PAU2@PBUs_cache_file_builder_stream_context@@@Z");
//};

//public: virtual bool c_tag_interop_vtable<class c_render_texture_interop_vtable>::has_get_unused_cache_file_space_proc(void) const
//{
//    mangled_ppc("?has_get_unused_cache_file_space_proc@?$c_tag_interop_vtable@Vc_render_texture_interop_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_interop_vtable<class c_render_texture_interop_vtable>::get_unused_cache_file_space_thunk(long, struct s_tag_interop const *, class c_cache_file_space_marker *) const
//{
//    mangled_ppc("?get_unused_cache_file_space_thunk@?$c_tag_interop_vtable@Vc_render_texture_interop_vtable@@@@UBAXJPBUs_tag_interop@@PAVc_cache_file_space_marker@@@Z");
//};

//public: static bool s_tag_vtable_has_write_interop_to_cache_file<class c_render_texture_interop_vtable>::call(long, struct s_tag_interop const *, struct s_tag_interop *, struct s_cache_file_builder_stream_context const *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_write_interop_to_cache_file@Vc_render_texture_interop_vtable@@@@SA_NJPBUs_tag_interop@@PAU2@PBUs_cache_file_builder_stream_context@@@Z");
//};

//public: static void s_tag_vtable_has_get_unused_cache_file_space<class c_render_texture_interop_vtable>::call(long, struct s_tag_interop const *, class c_cache_file_space_marker *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_get_unused_cache_file_space@Vc_render_texture_interop_vtable@@@@SAXJPBUs_tag_interop@@PAVc_cache_file_space_marker@@@Z");
//};

