/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// long const k_cui_default_resolution; // "?k_cui_default_resolution@@3JB"
// long const k_cui_default_theme; // "?k_cui_default_theme@@3JB"
// struct s_tag_block_definition cui_static_data_block; // "?cui_static_data_block@@3Us_tag_block_definition@@A"
// struct s_tag_group cui_static_data_group; // "?cui_static_data_group@@3Us_tag_group@@A"
// struct s_tag_group_legacy_vtable legacy_cui_screen_vtable; // "?legacy_cui_screen_vtable@@3Us_tag_group_legacy_vtable@@A"
// struct s_tag_block_definition cui_screen_block; // "?cui_screen_block@@3Us_tag_block_definition@@A"
// struct s_tag_group cui_screen_group; // "?cui_screen_group@@3Us_tag_group@@A"
// struct s_tag_group_legacy_vtable legacy_cui_static_data_vtable; // "?legacy_cui_static_data_vtable@@3Us_tag_group_legacy_vtable@@A"
// struct s_tag_group_stream_definition legacy_cui_static_data_stream_definition; // "?legacy_cui_static_data_stream_definition@@3Us_tag_group_stream_definition@@A"
// struct s_tag_group_sync_definition legacy_cui_static_data_xsync_declaration; // "?legacy_cui_static_data_xsync_declaration@@3Us_tag_group_sync_definition@@A"
// struct s_tag_group_stream_definition legacy_cui_screen_stream_definition; // "?legacy_cui_screen_stream_definition@@3Us_tag_group_stream_definition@@A"
// struct s_tag_group_sync_definition legacy_cui_screen_xsync_declaration; // "?legacy_cui_screen_xsync_declaration@@3Us_tag_group_sync_definition@@A"
// class c_legacy_tag_group_vtable_shim legacy_cui_static_data_vtable_shim; // "?legacy_cui_static_data_vtable_shim@@3Vc_legacy_tag_group_vtable_shim@@A"
// class c_legacy_tag_group_vtable_shim legacy_cui_screen_vtable_shim; // "?legacy_cui_screen_vtable_shim@@3Vc_legacy_tag_group_vtable_shim@@A"

// char * cui_definitions_overlay_format_proc(long, __int64, struct s_tag_block *, long, char *, long);
// char * cui_definitions_overlay_editor_only_format_proc(long, __int64, struct s_tag_block *, long, char *, long);
// char * cui_definitions_property_binding_format_proc(long, __int64, struct s_tag_block *, long, char *, long);
// bool cui_definitions_postprocess_screen_tag(long, bool);
// bool cui_definitions_postprocess_screen(struct s_cui_component_screen_definition *, bool);
// bool cui_definitions_postprocess_overlay(struct s_cui_overlay_definition *, struct s_cui_overlay_definition const *, bool);
// bool cui_definitions_postprocess_component_properties(struct s_cui_component_properties_definition *, bool);
// bool cui_definitions_postprocess_animation(struct s_cui_animation_definition *, struct s_cui_animation_definition const *, bool);
// bool cui_definitions_postprocess_animation_component(struct s_cui_animation_component_definition *, struct s_cui_animation_component_definition const *, bool);
// bool cui_definitions_postprocess_overlay_cameras_block(struct s_tag_block *, bool);
// struct s_cui_component_definition const * cui_definitions_find_component(struct s_cui_component_screen_definition const *, long);
// bool cui_definitions_get_component_template(struct s_cui_component_screen_definition const *, struct s_cui_component_definition const *, struct s_cui_component_screen_definition const **, struct s_cui_component_definition const **);
// struct s_cui_overlay_definition const * cui_definitions_find_overlay(struct s_tag_block const *, long, long);
// struct s_cui_overlay_definition * cui_definitions_find_overlay(struct s_tag_block *, long, long);
// struct s_cui_component_properties_definition const * cui_definitions_find_component_properties(struct s_tag_block const *, long);
// struct s_cui_animation_definition const * cui_definitions_find_animation(struct s_tag_block const *, long);
// struct s_cui_animation_component_definition const * cui_definitions_find_animation_component(struct s_tag_block const *, long);
// struct s_cui_animation_component_definition const * cui_definitions_find_overlay_animation_component(struct s_tag_block const *, long, long, long, long);
// struct s_cui_animation_component_property_real_definition const * cui_definitions_find_animation_component_property_real(struct s_tag_block const *, long);
// struct s_cui_animation_component_property_argb_color_definition const * cui_definitions_find_animation_component_property_argb_color(struct s_tag_block const *, long);
// struct s_cui_property_binding_definition const * cui_definitions_find_property_binding(struct s_tag_block const *, long, long, long *);
// struct s_cui_binding_conversion_long_comparison_definition const * cui_definitions_find_binding_conversion_long_comparison(struct s_tag_block const *, long, long);
// struct s_cui_overlay_camera_definition const * cui_definitions_find_overlay_camera(struct s_tag_block const *, long);
// struct s_cui_animation_component_definition const * find_overlay_animation_component(struct s_tag_block const *, long, long, long, long);
// void cui_tag_block_sort<struct s_component_index_definition_comparator>(struct s_tag_block *, struct s_component_index_definition_comparator);
// void cui_tag_block_sort<struct s_overlay_definition_comparator>(struct s_tag_block *, struct s_overlay_definition_comparator);
// void cui_tag_block_sort<struct s_property_binding_definition_comparator>(struct s_tag_block *, struct s_property_binding_definition_comparator);
// void cui_tag_block_sort<struct s_binding_conversion_definition_comparator<struct s_cui_binding_conversion_long_comparison_definition> >(struct s_tag_block *, struct s_binding_conversion_definition_comparator<struct s_cui_binding_conversion_long_comparison_definition>);
// void cui_tag_block_sort<struct s_component_properties_definition_comparator>(struct s_tag_block *, struct s_component_properties_definition_comparator);
// void cui_tag_block_sort<struct s_animation_definition_comparator>(struct s_tag_block *, struct s_animation_definition_comparator);
// void delete_pseudo_properties<struct s_cui_property_value_long_definition>(struct s_tag_block *);
// void delete_pseudo_properties<struct s_cui_property_value_real_definition>(struct s_tag_block *);
// void delete_pseudo_properties<struct s_cui_property_value_string_id_definition>(struct s_tag_block *);
// void delete_pseudo_properties<struct s_cui_property_value_tag_reference_definition>(struct s_tag_block *);
// void delete_pseudo_properties<struct s_cui_property_value_text_definition>(struct s_tag_block *);
// void delete_pseudo_properties<struct s_cui_property_value_argb_color_definition>(struct s_tag_block *);
// void cui_tag_block_sort<struct s_animation_component_definition_comparator>(struct s_tag_block *, struct s_animation_component_definition_comparator);
// void cui_tag_block_sort<struct s_animation_component_property_definition_comparator<struct s_cui_animation_component_property_real_definition> >(struct s_tag_block *, struct s_animation_component_property_definition_comparator<struct s_cui_animation_component_property_real_definition>);
// void cui_tag_block_sort<struct s_animation_component_property_definition_comparator<struct s_cui_animation_component_property_argb_color_definition> >(struct s_tag_block *, struct s_animation_component_property_definition_comparator<struct s_cui_animation_component_property_argb_color_definition>);
// long find_animation_component_property_linear<struct s_cui_animation_component_property_real_definition>(struct s_tag_block const *, long);
// long find_animation_component_property_linear<struct s_cui_animation_component_property_argb_color_definition>(struct s_tag_block const *, long);
// long get_keyframes_block_total_milliseconds<struct s_cui_animation_property_keyframe_value_real_definition>(struct s_tag_block const *);
// long get_keyframes_block_total_milliseconds<struct s_cui_animation_property_keyframe_value_argb_color_definition>(struct s_tag_block const *);
// void cui_tag_block_sort<struct s_overlay_camera_definition_comparator>(struct s_tag_block *, struct s_overlay_camera_definition_comparator);
// struct s_cui_component_index_definition const * cui_tag_block_binary_search<long, struct s_component_index_definition_comparator>(struct s_tag_block const *, long const &, struct s_component_index_definition_comparator, long *);
// public: long s_component_index_definition_comparator::operator()(long, struct s_cui_component_index_definition const *) const;
// struct s_cui_overlay_definition const * cui_tag_block_binary_search<struct s_overlay_definition_comparator::s_key, struct s_overlay_definition_comparator>(struct s_tag_block const *, struct s_overlay_definition_comparator::s_key const &, struct s_overlay_definition_comparator, long *);
// public: long s_overlay_definition_comparator::operator()(struct s_overlay_definition_comparator::s_key const &, struct s_cui_overlay_definition const *) const;
// struct s_cui_overlay_definition * cui_tag_block_binary_search<struct s_overlay_definition_comparator::s_key, struct s_overlay_definition_comparator>(struct s_tag_block *, struct s_overlay_definition_comparator::s_key const &, struct s_overlay_definition_comparator, long *);
// struct s_cui_component_properties_definition const * cui_tag_block_binary_search<long, struct s_component_properties_definition_comparator>(struct s_tag_block const *, long const &, struct s_component_properties_definition_comparator, long *);
// public: long s_component_properties_definition_comparator::operator()(long, struct s_cui_component_properties_definition const *) const;
// struct s_cui_animation_definition const * cui_tag_block_binary_search<long, struct s_animation_definition_comparator>(struct s_tag_block const *, long const &, struct s_animation_definition_comparator, long *);
// public: long s_animation_definition_comparator::operator()(long, struct s_cui_animation_definition const *) const;
// struct s_cui_animation_component_definition const * cui_tag_block_binary_search<long, struct s_animation_component_definition_comparator>(struct s_tag_block const *, long const &, struct s_animation_component_definition_comparator, long *);
// public: long s_animation_component_definition_comparator::operator()(long, struct s_cui_animation_component_definition const *) const;
// struct s_cui_animation_component_property_real_definition const * cui_tag_block_binary_search<long, struct s_animation_component_property_definition_comparator<struct s_cui_animation_component_property_real_definition> >(struct s_tag_block const *, long const &, struct s_animation_component_property_definition_comparator<struct s_cui_animation_component_property_real_definition>, long *);
// struct s_cui_animation_component_property_argb_color_definition const * cui_tag_block_binary_search<long, struct s_animation_component_property_definition_comparator<struct s_cui_animation_component_property_argb_color_definition> >(struct s_tag_block const *, long const &, struct s_animation_component_property_definition_comparator<struct s_cui_animation_component_property_argb_color_definition>, long *);
// struct s_cui_property_binding_definition const * cui_tag_block_binary_search<struct s_property_binding_definition_comparator::s_key, struct s_property_binding_definition_comparator>(struct s_tag_block const *, struct s_property_binding_definition_comparator::s_key const &, struct s_property_binding_definition_comparator, long *);
// public: long s_property_binding_definition_comparator::operator()(struct s_property_binding_definition_comparator::s_key const &, struct s_cui_property_binding_definition const *) const;
// struct s_cui_binding_conversion_long_comparison_definition const * cui_tag_block_binary_search<struct s_binding_conversion_definition_comparator<struct s_cui_binding_conversion_long_comparison_definition>::s_key, struct s_binding_conversion_definition_comparator<struct s_cui_binding_conversion_long_comparison_definition> >(struct s_tag_block const *, struct s_binding_conversion_definition_comparator<struct s_cui_binding_conversion_long_comparison_definition>::s_key const &, struct s_binding_conversion_definition_comparator<struct s_cui_binding_conversion_long_comparison_definition>, long *);
// struct s_cui_overlay_camera_definition const * cui_tag_block_binary_search<long, struct s_overlay_camera_definition_comparator>(struct s_tag_block const *, long const &, struct s_overlay_camera_definition_comparator, long *);
// public: long s_overlay_camera_definition_comparator::operator()(long, struct s_cui_overlay_camera_definition const *) const;
// public: long s_binding_conversion_definition_comparator<struct s_cui_binding_conversion_long_comparison_definition>::operator()(struct s_binding_conversion_definition_comparator<struct s_cui_binding_conversion_long_comparison_definition>::s_key const &, struct s_cui_binding_conversion_long_comparison_definition const *) const;
// public: long s_animation_component_property_definition_comparator<struct s_cui_animation_component_property_real_definition>::operator()(long, struct s_cui_animation_component_property_real_definition const *) const;
// public: long s_animation_component_property_definition_comparator<struct s_cui_animation_component_property_argb_color_definition>::operator()(long, struct s_cui_animation_component_property_argb_color_definition const *) const;
// void cui_tag_block_qsort<struct s_component_index_definition_comparator>(struct s_tag_block *, long, long, struct s_component_index_definition_comparator);
// void cui_tag_block_qsort<struct s_overlay_definition_comparator>(struct s_tag_block *, long, long, struct s_overlay_definition_comparator);
// void cui_tag_block_qsort<struct s_property_binding_definition_comparator>(struct s_tag_block *, long, long, struct s_property_binding_definition_comparator);
// void cui_tag_block_qsort<struct s_binding_conversion_definition_comparator<struct s_cui_binding_conversion_long_comparison_definition> >(struct s_tag_block *, long, long, struct s_binding_conversion_definition_comparator<struct s_cui_binding_conversion_long_comparison_definition>);
// void cui_tag_block_qsort<struct s_component_properties_definition_comparator>(struct s_tag_block *, long, long, struct s_component_properties_definition_comparator);
// void cui_tag_block_qsort<struct s_animation_definition_comparator>(struct s_tag_block *, long, long, struct s_animation_definition_comparator);
// void cui_tag_block_qsort<struct s_animation_component_definition_comparator>(struct s_tag_block *, long, long, struct s_animation_component_definition_comparator);
// void cui_tag_block_qsort<struct s_animation_component_property_definition_comparator<struct s_cui_animation_component_property_real_definition> >(struct s_tag_block *, long, long, struct s_animation_component_property_definition_comparator<struct s_cui_animation_component_property_real_definition>);
// void cui_tag_block_qsort<struct s_animation_component_property_definition_comparator<struct s_cui_animation_component_property_argb_color_definition> >(struct s_tag_block *, long, long, struct s_animation_component_property_definition_comparator<struct s_cui_animation_component_property_argb_color_definition>);
// void cui_tag_block_qsort<struct s_overlay_camera_definition_comparator>(struct s_tag_block *, long, long, struct s_overlay_camera_definition_comparator);
// long cui_tag_block_qsort_partition<struct s_component_index_definition_comparator>(struct s_tag_block *, long, long, long, struct s_component_index_definition_comparator);
// public: bool s_component_index_definition_comparator::operator()(struct s_cui_component_index_definition const *, struct s_cui_component_index_definition const *) const;
// long cui_tag_block_qsort_partition<struct s_overlay_definition_comparator>(struct s_tag_block *, long, long, long, struct s_overlay_definition_comparator);
// public: bool s_overlay_definition_comparator::operator()(struct s_cui_overlay_definition const *, struct s_cui_overlay_definition const *) const;
// long cui_tag_block_qsort_partition<struct s_property_binding_definition_comparator>(struct s_tag_block *, long, long, long, struct s_property_binding_definition_comparator);
// public: bool s_property_binding_definition_comparator::operator()(struct s_cui_property_binding_definition const *, struct s_cui_property_binding_definition const *) const;
// long cui_tag_block_qsort_partition<struct s_binding_conversion_definition_comparator<struct s_cui_binding_conversion_long_comparison_definition> >(struct s_tag_block *, long, long, long, struct s_binding_conversion_definition_comparator<struct s_cui_binding_conversion_long_comparison_definition>);
// long cui_tag_block_qsort_partition<struct s_component_properties_definition_comparator>(struct s_tag_block *, long, long, long, struct s_component_properties_definition_comparator);
// public: bool s_component_properties_definition_comparator::operator()(struct s_cui_component_properties_definition const *, struct s_cui_component_properties_definition const *) const;
// long cui_tag_block_qsort_partition<struct s_animation_definition_comparator>(struct s_tag_block *, long, long, long, struct s_animation_definition_comparator);
// public: bool s_animation_definition_comparator::operator()(struct s_cui_animation_definition const *, struct s_cui_animation_definition const *) const;
// long cui_tag_block_qsort_partition<struct s_animation_component_definition_comparator>(struct s_tag_block *, long, long, long, struct s_animation_component_definition_comparator);
// public: bool s_animation_component_definition_comparator::operator()(struct s_cui_animation_component_definition const *, struct s_cui_animation_component_definition const *) const;
// long cui_tag_block_qsort_partition<struct s_animation_component_property_definition_comparator<struct s_cui_animation_component_property_real_definition> >(struct s_tag_block *, long, long, long, struct s_animation_component_property_definition_comparator<struct s_cui_animation_component_property_real_definition>);
// long cui_tag_block_qsort_partition<struct s_animation_component_property_definition_comparator<struct s_cui_animation_component_property_argb_color_definition> >(struct s_tag_block *, long, long, long, struct s_animation_component_property_definition_comparator<struct s_cui_animation_component_property_argb_color_definition>);
// long cui_tag_block_qsort_partition<struct s_overlay_camera_definition_comparator>(struct s_tag_block *, long, long, long, struct s_overlay_camera_definition_comparator);
// public: bool s_overlay_camera_definition_comparator::operator()(struct s_cui_overlay_camera_definition const *, struct s_cui_overlay_camera_definition const *) const;
// public: bool s_binding_conversion_definition_comparator<struct s_cui_binding_conversion_long_comparison_definition>::operator()(struct s_cui_binding_conversion_long_comparison_definition const *, struct s_cui_binding_conversion_long_comparison_definition const *) const;
// public: bool s_animation_component_property_definition_comparator<struct s_cui_animation_component_property_real_definition>::operator()(struct s_cui_animation_component_property_real_definition const *, struct s_cui_animation_component_property_real_definition const *) const;
// public: bool s_animation_component_property_definition_comparator<struct s_cui_animation_component_property_argb_color_definition>::operator()(struct s_cui_animation_component_property_argb_color_definition const *, struct s_cui_animation_component_property_argb_color_definition const *) const;

//char * cui_definitions_overlay_format_proc(long, __int64, struct s_tag_block *, long, char *, long)
//{
//    mangled_ppc("?cui_definitions_overlay_format_proc@@YAPADJ_JPAUs_tag_block@@JPADJ@Z");
//};

//char * cui_definitions_overlay_editor_only_format_proc(long, __int64, struct s_tag_block *, long, char *, long)
//{
//    mangled_ppc("?cui_definitions_overlay_editor_only_format_proc@@YAPADJ_JPAUs_tag_block@@JPADJ@Z");
//};

//char * cui_definitions_property_binding_format_proc(long, __int64, struct s_tag_block *, long, char *, long)
//{
//    mangled_ppc("?cui_definitions_property_binding_format_proc@@YAPADJ_JPAUs_tag_block@@JPADJ@Z");
//};

//bool cui_definitions_postprocess_screen_tag(long, bool)
//{
//    mangled_ppc("?cui_definitions_postprocess_screen_tag@@YA_NJ_N@Z");
//};

//bool cui_definitions_postprocess_screen(struct s_cui_component_screen_definition *, bool)
//{
//    mangled_ppc("?cui_definitions_postprocess_screen@@YA_NPAUs_cui_component_screen_definition@@_N@Z");
//};

//bool cui_definitions_postprocess_overlay(struct s_cui_overlay_definition *, struct s_cui_overlay_definition const *, bool)
//{
//    mangled_ppc("?cui_definitions_postprocess_overlay@@YA_NPAUs_cui_overlay_definition@@PBU1@_N@Z");
//};

//bool cui_definitions_postprocess_component_properties(struct s_cui_component_properties_definition *, bool)
//{
//    mangled_ppc("?cui_definitions_postprocess_component_properties@@YA_NPAUs_cui_component_properties_definition@@_N@Z");
//};

//bool cui_definitions_postprocess_animation(struct s_cui_animation_definition *, struct s_cui_animation_definition const *, bool)
//{
//    mangled_ppc("?cui_definitions_postprocess_animation@@YA_NPAUs_cui_animation_definition@@PBU1@_N@Z");
//};

//bool cui_definitions_postprocess_animation_component(struct s_cui_animation_component_definition *, struct s_cui_animation_component_definition const *, bool)
//{
//    mangled_ppc("?cui_definitions_postprocess_animation_component@@YA_NPAUs_cui_animation_component_definition@@PBU1@_N@Z");
//};

//bool cui_definitions_postprocess_overlay_cameras_block(struct s_tag_block *, bool)
//{
//    mangled_ppc("?cui_definitions_postprocess_overlay_cameras_block@@YA_NPAUs_tag_block@@_N@Z");
//};

//struct s_cui_component_definition const * cui_definitions_find_component(struct s_cui_component_screen_definition const *, long)
//{
//    mangled_ppc("?cui_definitions_find_component@@YAPBUs_cui_component_definition@@PBUs_cui_component_screen_definition@@J@Z");
//};

//bool cui_definitions_get_component_template(struct s_cui_component_screen_definition const *, struct s_cui_component_definition const *, struct s_cui_component_screen_definition const **, struct s_cui_component_definition const **)
//{
//    mangled_ppc("?cui_definitions_get_component_template@@YA_NPBUs_cui_component_screen_definition@@PBUs_cui_component_definition@@PAPBU1@PAPBU2@@Z");
//};

//struct s_cui_overlay_definition const * cui_definitions_find_overlay(struct s_tag_block const *, long, long)
//{
//    mangled_ppc("?cui_definitions_find_overlay@@YAPBUs_cui_overlay_definition@@PBUs_tag_block@@JJ@Z");
//};

//struct s_cui_overlay_definition * cui_definitions_find_overlay(struct s_tag_block *, long, long)
//{
//    mangled_ppc("?cui_definitions_find_overlay@@YAPAUs_cui_overlay_definition@@PAUs_tag_block@@JJ@Z");
//};

//struct s_cui_component_properties_definition const * cui_definitions_find_component_properties(struct s_tag_block const *, long)
//{
//    mangled_ppc("?cui_definitions_find_component_properties@@YAPBUs_cui_component_properties_definition@@PBUs_tag_block@@J@Z");
//};

//struct s_cui_animation_definition const * cui_definitions_find_animation(struct s_tag_block const *, long)
//{
//    mangled_ppc("?cui_definitions_find_animation@@YAPBUs_cui_animation_definition@@PBUs_tag_block@@J@Z");
//};

//struct s_cui_animation_component_definition const * cui_definitions_find_animation_component(struct s_tag_block const *, long)
//{
//    mangled_ppc("?cui_definitions_find_animation_component@@YAPBUs_cui_animation_component_definition@@PBUs_tag_block@@J@Z");
//};

//struct s_cui_animation_component_definition const * cui_definitions_find_overlay_animation_component(struct s_tag_block const *, long, long, long, long)
//{
//    mangled_ppc("?cui_definitions_find_overlay_animation_component@@YAPBUs_cui_animation_component_definition@@PBUs_tag_block@@JJJJ@Z");
//};

//struct s_cui_animation_component_property_real_definition const * cui_definitions_find_animation_component_property_real(struct s_tag_block const *, long)
//{
//    mangled_ppc("?cui_definitions_find_animation_component_property_real@@YAPBUs_cui_animation_component_property_real_definition@@PBUs_tag_block@@J@Z");
//};

//struct s_cui_animation_component_property_argb_color_definition const * cui_definitions_find_animation_component_property_argb_color(struct s_tag_block const *, long)
//{
//    mangled_ppc("?cui_definitions_find_animation_component_property_argb_color@@YAPBUs_cui_animation_component_property_argb_color_definition@@PBUs_tag_block@@J@Z");
//};

//struct s_cui_property_binding_definition const * cui_definitions_find_property_binding(struct s_tag_block const *, long, long, long *)
//{
//    mangled_ppc("?cui_definitions_find_property_binding@@YAPBUs_cui_property_binding_definition@@PBUs_tag_block@@JJPAJ@Z");
//};

//struct s_cui_binding_conversion_long_comparison_definition const * cui_definitions_find_binding_conversion_long_comparison(struct s_tag_block const *, long, long)
//{
//    mangled_ppc("?cui_definitions_find_binding_conversion_long_comparison@@YAPBUs_cui_binding_conversion_long_comparison_definition@@PBUs_tag_block@@JJ@Z");
//};

//struct s_cui_overlay_camera_definition const * cui_definitions_find_overlay_camera(struct s_tag_block const *, long)
//{
//    mangled_ppc("?cui_definitions_find_overlay_camera@@YAPBUs_cui_overlay_camera_definition@@PBUs_tag_block@@J@Z");
//};

//struct s_cui_animation_component_definition const * find_overlay_animation_component(struct s_tag_block const *, long, long, long, long)
//{
//    mangled_ppc("?find_overlay_animation_component@@YAPBUs_cui_animation_component_definition@@PBUs_tag_block@@JJJJ@Z");
//};

//void cui_tag_block_sort<struct s_component_index_definition_comparator>(struct s_tag_block *, struct s_component_index_definition_comparator)
//{
//    mangled_ppc("??$cui_tag_block_sort@Us_component_index_definition_comparator@@@@YAXPAUs_tag_block@@Us_component_index_definition_comparator@@@Z");
//};

//void cui_tag_block_sort<struct s_overlay_definition_comparator>(struct s_tag_block *, struct s_overlay_definition_comparator)
//{
//    mangled_ppc("??$cui_tag_block_sort@Us_overlay_definition_comparator@@@@YAXPAUs_tag_block@@Us_overlay_definition_comparator@@@Z");
//};

//void cui_tag_block_sort<struct s_property_binding_definition_comparator>(struct s_tag_block *, struct s_property_binding_definition_comparator)
//{
//    mangled_ppc("??$cui_tag_block_sort@Us_property_binding_definition_comparator@@@@YAXPAUs_tag_block@@Us_property_binding_definition_comparator@@@Z");
//};

//void cui_tag_block_sort<struct s_binding_conversion_definition_comparator<struct s_cui_binding_conversion_long_comparison_definition> >(struct s_tag_block *, struct s_binding_conversion_definition_comparator<struct s_cui_binding_conversion_long_comparison_definition>)
//{
//    mangled_ppc("??$cui_tag_block_sort@U?$s_binding_conversion_definition_comparator@Us_cui_binding_conversion_long_comparison_definition@@@@@@YAXPAUs_tag_block@@U?$s_binding_conversion_definition_comparator@Us_cui_binding_conversion_long_comparison_definition@@@@@Z");
//};

//void cui_tag_block_sort<struct s_component_properties_definition_comparator>(struct s_tag_block *, struct s_component_properties_definition_comparator)
//{
//    mangled_ppc("??$cui_tag_block_sort@Us_component_properties_definition_comparator@@@@YAXPAUs_tag_block@@Us_component_properties_definition_comparator@@@Z");
//};

//void cui_tag_block_sort<struct s_animation_definition_comparator>(struct s_tag_block *, struct s_animation_definition_comparator)
//{
//    mangled_ppc("??$cui_tag_block_sort@Us_animation_definition_comparator@@@@YAXPAUs_tag_block@@Us_animation_definition_comparator@@@Z");
//};

//void delete_pseudo_properties<struct s_cui_property_value_long_definition>(struct s_tag_block *)
//{
//    mangled_ppc("??$delete_pseudo_properties@Us_cui_property_value_long_definition@@@@YAXPAUs_tag_block@@@Z");
//};

//void delete_pseudo_properties<struct s_cui_property_value_real_definition>(struct s_tag_block *)
//{
//    mangled_ppc("??$delete_pseudo_properties@Us_cui_property_value_real_definition@@@@YAXPAUs_tag_block@@@Z");
//};

//void delete_pseudo_properties<struct s_cui_property_value_string_id_definition>(struct s_tag_block *)
//{
//    mangled_ppc("??$delete_pseudo_properties@Us_cui_property_value_string_id_definition@@@@YAXPAUs_tag_block@@@Z");
//};

//void delete_pseudo_properties<struct s_cui_property_value_tag_reference_definition>(struct s_tag_block *)
//{
//    mangled_ppc("??$delete_pseudo_properties@Us_cui_property_value_tag_reference_definition@@@@YAXPAUs_tag_block@@@Z");
//};

//void delete_pseudo_properties<struct s_cui_property_value_text_definition>(struct s_tag_block *)
//{
//    mangled_ppc("??$delete_pseudo_properties@Us_cui_property_value_text_definition@@@@YAXPAUs_tag_block@@@Z");
//};

//void delete_pseudo_properties<struct s_cui_property_value_argb_color_definition>(struct s_tag_block *)
//{
//    mangled_ppc("??$delete_pseudo_properties@Us_cui_property_value_argb_color_definition@@@@YAXPAUs_tag_block@@@Z");
//};

//void cui_tag_block_sort<struct s_animation_component_definition_comparator>(struct s_tag_block *, struct s_animation_component_definition_comparator)
//{
//    mangled_ppc("??$cui_tag_block_sort@Us_animation_component_definition_comparator@@@@YAXPAUs_tag_block@@Us_animation_component_definition_comparator@@@Z");
//};

//void cui_tag_block_sort<struct s_animation_component_property_definition_comparator<struct s_cui_animation_component_property_real_definition> >(struct s_tag_block *, struct s_animation_component_property_definition_comparator<struct s_cui_animation_component_property_real_definition>)
//{
//    mangled_ppc("??$cui_tag_block_sort@U?$s_animation_component_property_definition_comparator@Us_cui_animation_component_property_real_definition@@@@@@YAXPAUs_tag_block@@U?$s_animation_component_property_definition_comparator@Us_cui_animation_component_property_real_definition@@@@@Z");
//};

//void cui_tag_block_sort<struct s_animation_component_property_definition_comparator<struct s_cui_animation_component_property_argb_color_definition> >(struct s_tag_block *, struct s_animation_component_property_definition_comparator<struct s_cui_animation_component_property_argb_color_definition>)
//{
//    mangled_ppc("??$cui_tag_block_sort@U?$s_animation_component_property_definition_comparator@Us_cui_animation_component_property_argb_color_definition@@@@@@YAXPAUs_tag_block@@U?$s_animation_component_property_definition_comparator@Us_cui_animation_component_property_argb_color_definition@@@@@Z");
//};

//long find_animation_component_property_linear<struct s_cui_animation_component_property_real_definition>(struct s_tag_block const *, long)
//{
//    mangled_ppc("??$find_animation_component_property_linear@Us_cui_animation_component_property_real_definition@@@@YAJPBUs_tag_block@@J@Z");
//};

//long find_animation_component_property_linear<struct s_cui_animation_component_property_argb_color_definition>(struct s_tag_block const *, long)
//{
//    mangled_ppc("??$find_animation_component_property_linear@Us_cui_animation_component_property_argb_color_definition@@@@YAJPBUs_tag_block@@J@Z");
//};

//long get_keyframes_block_total_milliseconds<struct s_cui_animation_property_keyframe_value_real_definition>(struct s_tag_block const *)
//{
//    mangled_ppc("??$get_keyframes_block_total_milliseconds@Us_cui_animation_property_keyframe_value_real_definition@@@@YAJPBUs_tag_block@@@Z");
//};

//long get_keyframes_block_total_milliseconds<struct s_cui_animation_property_keyframe_value_argb_color_definition>(struct s_tag_block const *)
//{
//    mangled_ppc("??$get_keyframes_block_total_milliseconds@Us_cui_animation_property_keyframe_value_argb_color_definition@@@@YAJPBUs_tag_block@@@Z");
//};

//void cui_tag_block_sort<struct s_overlay_camera_definition_comparator>(struct s_tag_block *, struct s_overlay_camera_definition_comparator)
//{
//    mangled_ppc("??$cui_tag_block_sort@Us_overlay_camera_definition_comparator@@@@YAXPAUs_tag_block@@Us_overlay_camera_definition_comparator@@@Z");
//};

//struct s_cui_component_index_definition const * cui_tag_block_binary_search<long, struct s_component_index_definition_comparator>(struct s_tag_block const *, long const &, struct s_component_index_definition_comparator, long *)
//{
//    mangled_ppc("??$cui_tag_block_binary_search@JUs_component_index_definition_comparator@@@@YAPBUs_cui_component_index_definition@@PBUs_tag_block@@ABJUs_component_index_definition_comparator@@PAJ@Z");
//};

//public: long s_component_index_definition_comparator::operator()(long, struct s_cui_component_index_definition const *) const
//{
//    mangled_ppc("??Rs_component_index_definition_comparator@@QBAJJPBUs_cui_component_index_definition@@@Z");
//};

//struct s_cui_overlay_definition const * cui_tag_block_binary_search<struct s_overlay_definition_comparator::s_key, struct s_overlay_definition_comparator>(struct s_tag_block const *, struct s_overlay_definition_comparator::s_key const &, struct s_overlay_definition_comparator, long *)
//{
//    mangled_ppc("??$cui_tag_block_binary_search@Us_key@s_overlay_definition_comparator@@U2@@@YAPBUs_cui_overlay_definition@@PBUs_tag_block@@ABUs_key@s_overlay_definition_comparator@@U3@PAJ@Z");
//};

//public: long s_overlay_definition_comparator::operator()(struct s_overlay_definition_comparator::s_key const &, struct s_cui_overlay_definition const *) const
//{
//    mangled_ppc("??Rs_overlay_definition_comparator@@QBAJABUs_key@0@PBUs_cui_overlay_definition@@@Z");
//};

//struct s_cui_overlay_definition * cui_tag_block_binary_search<struct s_overlay_definition_comparator::s_key, struct s_overlay_definition_comparator>(struct s_tag_block *, struct s_overlay_definition_comparator::s_key const &, struct s_overlay_definition_comparator, long *)
//{
//    mangled_ppc("??$cui_tag_block_binary_search@Us_key@s_overlay_definition_comparator@@U2@@@YAPAUs_cui_overlay_definition@@PAUs_tag_block@@ABUs_key@s_overlay_definition_comparator@@U3@PAJ@Z");
//};

//struct s_cui_component_properties_definition const * cui_tag_block_binary_search<long, struct s_component_properties_definition_comparator>(struct s_tag_block const *, long const &, struct s_component_properties_definition_comparator, long *)
//{
//    mangled_ppc("??$cui_tag_block_binary_search@JUs_component_properties_definition_comparator@@@@YAPBUs_cui_component_properties_definition@@PBUs_tag_block@@ABJUs_component_properties_definition_comparator@@PAJ@Z");
//};

//public: long s_component_properties_definition_comparator::operator()(long, struct s_cui_component_properties_definition const *) const
//{
//    mangled_ppc("??Rs_component_properties_definition_comparator@@QBAJJPBUs_cui_component_properties_definition@@@Z");
//};

//struct s_cui_animation_definition const * cui_tag_block_binary_search<long, struct s_animation_definition_comparator>(struct s_tag_block const *, long const &, struct s_animation_definition_comparator, long *)
//{
//    mangled_ppc("??$cui_tag_block_binary_search@JUs_animation_definition_comparator@@@@YAPBUs_cui_animation_definition@@PBUs_tag_block@@ABJUs_animation_definition_comparator@@PAJ@Z");
//};

//public: long s_animation_definition_comparator::operator()(long, struct s_cui_animation_definition const *) const
//{
//    mangled_ppc("??Rs_animation_definition_comparator@@QBAJJPBUs_cui_animation_definition@@@Z");
//};

//struct s_cui_animation_component_definition const * cui_tag_block_binary_search<long, struct s_animation_component_definition_comparator>(struct s_tag_block const *, long const &, struct s_animation_component_definition_comparator, long *)
//{
//    mangled_ppc("??$cui_tag_block_binary_search@JUs_animation_component_definition_comparator@@@@YAPBUs_cui_animation_component_definition@@PBUs_tag_block@@ABJUs_animation_component_definition_comparator@@PAJ@Z");
//};

//public: long s_animation_component_definition_comparator::operator()(long, struct s_cui_animation_component_definition const *) const
//{
//    mangled_ppc("??Rs_animation_component_definition_comparator@@QBAJJPBUs_cui_animation_component_definition@@@Z");
//};

//struct s_cui_animation_component_property_real_definition const * cui_tag_block_binary_search<long, struct s_animation_component_property_definition_comparator<struct s_cui_animation_component_property_real_definition> >(struct s_tag_block const *, long const &, struct s_animation_component_property_definition_comparator<struct s_cui_animation_component_property_real_definition>, long *)
//{
//    mangled_ppc("??$cui_tag_block_binary_search@JU?$s_animation_component_property_definition_comparator@Us_cui_animation_component_property_real_definition@@@@@@YAPBUs_cui_animation_component_property_real_definition@@PBUs_tag_block@@ABJU?$s_animation_component_property_definition_comparator@Us_cui_animation_component_property_real_definition@@@@PAJ@Z");
//};

//struct s_cui_animation_component_property_argb_color_definition const * cui_tag_block_binary_search<long, struct s_animation_component_property_definition_comparator<struct s_cui_animation_component_property_argb_color_definition> >(struct s_tag_block const *, long const &, struct s_animation_component_property_definition_comparator<struct s_cui_animation_component_property_argb_color_definition>, long *)
//{
//    mangled_ppc("??$cui_tag_block_binary_search@JU?$s_animation_component_property_definition_comparator@Us_cui_animation_component_property_argb_color_definition@@@@@@YAPBUs_cui_animation_component_property_argb_color_definition@@PBUs_tag_block@@ABJU?$s_animation_component_property_definition_comparator@Us_cui_animation_component_property_argb_color_definition@@@@PAJ@Z");
//};

//struct s_cui_property_binding_definition const * cui_tag_block_binary_search<struct s_property_binding_definition_comparator::s_key, struct s_property_binding_definition_comparator>(struct s_tag_block const *, struct s_property_binding_definition_comparator::s_key const &, struct s_property_binding_definition_comparator, long *)
//{
//    mangled_ppc("??$cui_tag_block_binary_search@Us_key@s_property_binding_definition_comparator@@U2@@@YAPBUs_cui_property_binding_definition@@PBUs_tag_block@@ABUs_key@s_property_binding_definition_comparator@@U3@PAJ@Z");
//};

//public: long s_property_binding_definition_comparator::operator()(struct s_property_binding_definition_comparator::s_key const &, struct s_cui_property_binding_definition const *) const
//{
//    mangled_ppc("??Rs_property_binding_definition_comparator@@QBAJABUs_key@0@PBUs_cui_property_binding_definition@@@Z");
//};

//struct s_cui_binding_conversion_long_comparison_definition const * cui_tag_block_binary_search<struct s_binding_conversion_definition_comparator<struct s_cui_binding_conversion_long_comparison_definition>::s_key, struct s_binding_conversion_definition_comparator<struct s_cui_binding_conversion_long_comparison_definition> >(struct s_tag_block const *, struct s_binding_conversion_definition_comparator<struct s_cui_binding_conversion_long_comparison_definition>::s_key const &, struct s_binding_conversion_definition_comparator<struct s_cui_binding_conversion_long_comparison_definition>, long *)
//{
//    mangled_ppc("??$cui_tag_block_binary_search@Us_key@?$s_binding_conversion_definition_comparator@Us_cui_binding_conversion_long_comparison_definition@@@@U2@@@YAPBUs_cui_binding_conversion_long_comparison_definition@@PBUs_tag_block@@ABUs_key@?$s_binding_conversion_definition_comparator@Us_cui_binding_conversion_long_comparison_definition@@@@U3@PAJ@Z");
//};

//struct s_cui_overlay_camera_definition const * cui_tag_block_binary_search<long, struct s_overlay_camera_definition_comparator>(struct s_tag_block const *, long const &, struct s_overlay_camera_definition_comparator, long *)
//{
//    mangled_ppc("??$cui_tag_block_binary_search@JUs_overlay_camera_definition_comparator@@@@YAPBUs_cui_overlay_camera_definition@@PBUs_tag_block@@ABJUs_overlay_camera_definition_comparator@@PAJ@Z");
//};

//public: long s_overlay_camera_definition_comparator::operator()(long, struct s_cui_overlay_camera_definition const *) const
//{
//    mangled_ppc("??Rs_overlay_camera_definition_comparator@@QBAJJPBUs_cui_overlay_camera_definition@@@Z");
//};

//public: long s_binding_conversion_definition_comparator<struct s_cui_binding_conversion_long_comparison_definition>::operator()(struct s_binding_conversion_definition_comparator<struct s_cui_binding_conversion_long_comparison_definition>::s_key const &, struct s_cui_binding_conversion_long_comparison_definition const *) const
//{
//    mangled_ppc("??R?$s_binding_conversion_definition_comparator@Us_cui_binding_conversion_long_comparison_definition@@@@QBAJABUs_key@0@PBUs_cui_binding_conversion_long_comparison_definition@@@Z");
//};

//public: long s_animation_component_property_definition_comparator<struct s_cui_animation_component_property_real_definition>::operator()(long, struct s_cui_animation_component_property_real_definition const *) const
//{
//    mangled_ppc("??R?$s_animation_component_property_definition_comparator@Us_cui_animation_component_property_real_definition@@@@QBAJJPBUs_cui_animation_component_property_real_definition@@@Z");
//};

//public: long s_animation_component_property_definition_comparator<struct s_cui_animation_component_property_argb_color_definition>::operator()(long, struct s_cui_animation_component_property_argb_color_definition const *) const
//{
//    mangled_ppc("??R?$s_animation_component_property_definition_comparator@Us_cui_animation_component_property_argb_color_definition@@@@QBAJJPBUs_cui_animation_component_property_argb_color_definition@@@Z");
//};

//void cui_tag_block_qsort<struct s_component_index_definition_comparator>(struct s_tag_block *, long, long, struct s_component_index_definition_comparator)
//{
//    mangled_ppc("??$cui_tag_block_qsort@Us_component_index_definition_comparator@@@@YAXPAUs_tag_block@@JJUs_component_index_definition_comparator@@@Z");
//};

//void cui_tag_block_qsort<struct s_overlay_definition_comparator>(struct s_tag_block *, long, long, struct s_overlay_definition_comparator)
//{
//    mangled_ppc("??$cui_tag_block_qsort@Us_overlay_definition_comparator@@@@YAXPAUs_tag_block@@JJUs_overlay_definition_comparator@@@Z");
//};

//void cui_tag_block_qsort<struct s_property_binding_definition_comparator>(struct s_tag_block *, long, long, struct s_property_binding_definition_comparator)
//{
//    mangled_ppc("??$cui_tag_block_qsort@Us_property_binding_definition_comparator@@@@YAXPAUs_tag_block@@JJUs_property_binding_definition_comparator@@@Z");
//};

//void cui_tag_block_qsort<struct s_binding_conversion_definition_comparator<struct s_cui_binding_conversion_long_comparison_definition> >(struct s_tag_block *, long, long, struct s_binding_conversion_definition_comparator<struct s_cui_binding_conversion_long_comparison_definition>)
//{
//    mangled_ppc("??$cui_tag_block_qsort@U?$s_binding_conversion_definition_comparator@Us_cui_binding_conversion_long_comparison_definition@@@@@@YAXPAUs_tag_block@@JJU?$s_binding_conversion_definition_comparator@Us_cui_binding_conversion_long_comparison_definition@@@@@Z");
//};

//void cui_tag_block_qsort<struct s_component_properties_definition_comparator>(struct s_tag_block *, long, long, struct s_component_properties_definition_comparator)
//{
//    mangled_ppc("??$cui_tag_block_qsort@Us_component_properties_definition_comparator@@@@YAXPAUs_tag_block@@JJUs_component_properties_definition_comparator@@@Z");
//};

//void cui_tag_block_qsort<struct s_animation_definition_comparator>(struct s_tag_block *, long, long, struct s_animation_definition_comparator)
//{
//    mangled_ppc("??$cui_tag_block_qsort@Us_animation_definition_comparator@@@@YAXPAUs_tag_block@@JJUs_animation_definition_comparator@@@Z");
//};

//void cui_tag_block_qsort<struct s_animation_component_definition_comparator>(struct s_tag_block *, long, long, struct s_animation_component_definition_comparator)
//{
//    mangled_ppc("??$cui_tag_block_qsort@Us_animation_component_definition_comparator@@@@YAXPAUs_tag_block@@JJUs_animation_component_definition_comparator@@@Z");
//};

//void cui_tag_block_qsort<struct s_animation_component_property_definition_comparator<struct s_cui_animation_component_property_real_definition> >(struct s_tag_block *, long, long, struct s_animation_component_property_definition_comparator<struct s_cui_animation_component_property_real_definition>)
//{
//    mangled_ppc("??$cui_tag_block_qsort@U?$s_animation_component_property_definition_comparator@Us_cui_animation_component_property_real_definition@@@@@@YAXPAUs_tag_block@@JJU?$s_animation_component_property_definition_comparator@Us_cui_animation_component_property_real_definition@@@@@Z");
//};

//void cui_tag_block_qsort<struct s_animation_component_property_definition_comparator<struct s_cui_animation_component_property_argb_color_definition> >(struct s_tag_block *, long, long, struct s_animation_component_property_definition_comparator<struct s_cui_animation_component_property_argb_color_definition>)
//{
//    mangled_ppc("??$cui_tag_block_qsort@U?$s_animation_component_property_definition_comparator@Us_cui_animation_component_property_argb_color_definition@@@@@@YAXPAUs_tag_block@@JJU?$s_animation_component_property_definition_comparator@Us_cui_animation_component_property_argb_color_definition@@@@@Z");
//};

//void cui_tag_block_qsort<struct s_overlay_camera_definition_comparator>(struct s_tag_block *, long, long, struct s_overlay_camera_definition_comparator)
//{
//    mangled_ppc("??$cui_tag_block_qsort@Us_overlay_camera_definition_comparator@@@@YAXPAUs_tag_block@@JJUs_overlay_camera_definition_comparator@@@Z");
//};

//long cui_tag_block_qsort_partition<struct s_component_index_definition_comparator>(struct s_tag_block *, long, long, long, struct s_component_index_definition_comparator)
//{
//    mangled_ppc("??$cui_tag_block_qsort_partition@Us_component_index_definition_comparator@@@@YAJPAUs_tag_block@@JJJUs_component_index_definition_comparator@@@Z");
//};

//public: bool s_component_index_definition_comparator::operator()(struct s_cui_component_index_definition const *, struct s_cui_component_index_definition const *) const
//{
//    mangled_ppc("??Rs_component_index_definition_comparator@@QBA_NPBUs_cui_component_index_definition@@0@Z");
//};

//long cui_tag_block_qsort_partition<struct s_overlay_definition_comparator>(struct s_tag_block *, long, long, long, struct s_overlay_definition_comparator)
//{
//    mangled_ppc("??$cui_tag_block_qsort_partition@Us_overlay_definition_comparator@@@@YAJPAUs_tag_block@@JJJUs_overlay_definition_comparator@@@Z");
//};

//public: bool s_overlay_definition_comparator::operator()(struct s_cui_overlay_definition const *, struct s_cui_overlay_definition const *) const
//{
//    mangled_ppc("??Rs_overlay_definition_comparator@@QBA_NPBUs_cui_overlay_definition@@0@Z");
//};

//long cui_tag_block_qsort_partition<struct s_property_binding_definition_comparator>(struct s_tag_block *, long, long, long, struct s_property_binding_definition_comparator)
//{
//    mangled_ppc("??$cui_tag_block_qsort_partition@Us_property_binding_definition_comparator@@@@YAJPAUs_tag_block@@JJJUs_property_binding_definition_comparator@@@Z");
//};

//public: bool s_property_binding_definition_comparator::operator()(struct s_cui_property_binding_definition const *, struct s_cui_property_binding_definition const *) const
//{
//    mangled_ppc("??Rs_property_binding_definition_comparator@@QBA_NPBUs_cui_property_binding_definition@@0@Z");
//};

//long cui_tag_block_qsort_partition<struct s_binding_conversion_definition_comparator<struct s_cui_binding_conversion_long_comparison_definition> >(struct s_tag_block *, long, long, long, struct s_binding_conversion_definition_comparator<struct s_cui_binding_conversion_long_comparison_definition>)
//{
//    mangled_ppc("??$cui_tag_block_qsort_partition@U?$s_binding_conversion_definition_comparator@Us_cui_binding_conversion_long_comparison_definition@@@@@@YAJPAUs_tag_block@@JJJU?$s_binding_conversion_definition_comparator@Us_cui_binding_conversion_long_comparison_definition@@@@@Z");
//};

//long cui_tag_block_qsort_partition<struct s_component_properties_definition_comparator>(struct s_tag_block *, long, long, long, struct s_component_properties_definition_comparator)
//{
//    mangled_ppc("??$cui_tag_block_qsort_partition@Us_component_properties_definition_comparator@@@@YAJPAUs_tag_block@@JJJUs_component_properties_definition_comparator@@@Z");
//};

//public: bool s_component_properties_definition_comparator::operator()(struct s_cui_component_properties_definition const *, struct s_cui_component_properties_definition const *) const
//{
//    mangled_ppc("??Rs_component_properties_definition_comparator@@QBA_NPBUs_cui_component_properties_definition@@0@Z");
//};

//long cui_tag_block_qsort_partition<struct s_animation_definition_comparator>(struct s_tag_block *, long, long, long, struct s_animation_definition_comparator)
//{
//    mangled_ppc("??$cui_tag_block_qsort_partition@Us_animation_definition_comparator@@@@YAJPAUs_tag_block@@JJJUs_animation_definition_comparator@@@Z");
//};

//public: bool s_animation_definition_comparator::operator()(struct s_cui_animation_definition const *, struct s_cui_animation_definition const *) const
//{
//    mangled_ppc("??Rs_animation_definition_comparator@@QBA_NPBUs_cui_animation_definition@@0@Z");
//};

//long cui_tag_block_qsort_partition<struct s_animation_component_definition_comparator>(struct s_tag_block *, long, long, long, struct s_animation_component_definition_comparator)
//{
//    mangled_ppc("??$cui_tag_block_qsort_partition@Us_animation_component_definition_comparator@@@@YAJPAUs_tag_block@@JJJUs_animation_component_definition_comparator@@@Z");
//};

//public: bool s_animation_component_definition_comparator::operator()(struct s_cui_animation_component_definition const *, struct s_cui_animation_component_definition const *) const
//{
//    mangled_ppc("??Rs_animation_component_definition_comparator@@QBA_NPBUs_cui_animation_component_definition@@0@Z");
//};

//long cui_tag_block_qsort_partition<struct s_animation_component_property_definition_comparator<struct s_cui_animation_component_property_real_definition> >(struct s_tag_block *, long, long, long, struct s_animation_component_property_definition_comparator<struct s_cui_animation_component_property_real_definition>)
//{
//    mangled_ppc("??$cui_tag_block_qsort_partition@U?$s_animation_component_property_definition_comparator@Us_cui_animation_component_property_real_definition@@@@@@YAJPAUs_tag_block@@JJJU?$s_animation_component_property_definition_comparator@Us_cui_animation_component_property_real_definition@@@@@Z");
//};

//long cui_tag_block_qsort_partition<struct s_animation_component_property_definition_comparator<struct s_cui_animation_component_property_argb_color_definition> >(struct s_tag_block *, long, long, long, struct s_animation_component_property_definition_comparator<struct s_cui_animation_component_property_argb_color_definition>)
//{
//    mangled_ppc("??$cui_tag_block_qsort_partition@U?$s_animation_component_property_definition_comparator@Us_cui_animation_component_property_argb_color_definition@@@@@@YAJPAUs_tag_block@@JJJU?$s_animation_component_property_definition_comparator@Us_cui_animation_component_property_argb_color_definition@@@@@Z");
//};

//long cui_tag_block_qsort_partition<struct s_overlay_camera_definition_comparator>(struct s_tag_block *, long, long, long, struct s_overlay_camera_definition_comparator)
//{
//    mangled_ppc("??$cui_tag_block_qsort_partition@Us_overlay_camera_definition_comparator@@@@YAJPAUs_tag_block@@JJJUs_overlay_camera_definition_comparator@@@Z");
//};

//public: bool s_overlay_camera_definition_comparator::operator()(struct s_cui_overlay_camera_definition const *, struct s_cui_overlay_camera_definition const *) const
//{
//    mangled_ppc("??Rs_overlay_camera_definition_comparator@@QBA_NPBUs_cui_overlay_camera_definition@@0@Z");
//};

//public: bool s_binding_conversion_definition_comparator<struct s_cui_binding_conversion_long_comparison_definition>::operator()(struct s_cui_binding_conversion_long_comparison_definition const *, struct s_cui_binding_conversion_long_comparison_definition const *) const
//{
//    mangled_ppc("??R?$s_binding_conversion_definition_comparator@Us_cui_binding_conversion_long_comparison_definition@@@@QBA_NPBUs_cui_binding_conversion_long_comparison_definition@@0@Z");
//};

//public: bool s_animation_component_property_definition_comparator<struct s_cui_animation_component_property_real_definition>::operator()(struct s_cui_animation_component_property_real_definition const *, struct s_cui_animation_component_property_real_definition const *) const
//{
//    mangled_ppc("??R?$s_animation_component_property_definition_comparator@Us_cui_animation_component_property_real_definition@@@@QBA_NPBUs_cui_animation_component_property_real_definition@@0@Z");
//};

//public: bool s_animation_component_property_definition_comparator<struct s_cui_animation_component_property_argb_color_definition>::operator()(struct s_cui_animation_component_property_argb_color_definition const *, struct s_cui_animation_component_property_argb_color_definition const *) const
//{
//    mangled_ppc("??R?$s_animation_component_property_definition_comparator@Us_cui_animation_component_property_argb_color_definition@@@@QBA_NPBUs_cui_animation_component_property_argb_color_definition@@0@Z");
//};

