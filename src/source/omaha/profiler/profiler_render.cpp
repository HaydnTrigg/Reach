/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// float profile_graph_zoom; // "?profile_graph_zoom@@3MA"
// float profile_graph_speed; // "?profile_graph_speed@@3MA"
// bool profile_list; // "?profile_list@@3_NA"
// long profile_list_default_count; // "?profile_list_default_count@@3JA"
// bool profile_global_dont_render; // "?profile_global_dont_render@@3_NA"
// bool profile_graph; // "?profile_graph@@3_NA"

// void profile_render_reset(void);
// void profile_render_submit_begin(char const *, long, long, float);
// void profile_render_submit_value(unsigned long, char const *, long, union rgb_color const *, unsigned long, float, long, float);
// void profile_render_submit_perf_counters(unsigned long, __int64, __int64, __int64);
// void profile_render_submit_legend(char const *, union rgb_color const *, float, float);
// void profile_render_submit_end(void);
// bool compare_profile_render_globals_values(long, long, void const *);
// void profile_render_dump_current_frame_info(float);
// void profile_summary_objects_fetch(struct s_profiler_summary_object_data *);
// void profile_summary_objects_fetch_counts_by_mask(unsigned long, struct s_profiler_summary_object_data::s_object_counts_per_state *);
// void profile_summary_objects_fetch_header_allocation_info(struct s_profiler_summary_object_data::s_object_header_allocation_info *);
// public: void s_profiler_summary_object_data::s_object_header_block_info::clear(void);
// public: void s_profiler_summary_object_data::s_object_header_block_info::process(long, struct object_header_block_reference const *);
// void profile_summary_objects_display(char *, long);
// void profile_summary_object_counts_display(char *, long, struct s_profiler_summary_object_data::s_object_counts_per_state const *, char const *);
// void profile_summary_cluster_partition_display(char *, long, struct s_cluster_partition_information const *, char const *);
// void profile_summary_object_header_allocation_info_display(char *, long, struct s_profiler_summary_object_data::s_object_header_allocation_info const *);
// void profile_summary_object_header_block_info_display(char *, long, struct s_profiler_summary_object_data::s_object_header_block_info const *, char const *);
// void profile_summary_effects_fetch(struct s_profiler_summary_effect_data *);
// void profile_summary_effects_display(char *, long);
// void profile_render(union short_rectangle2d const *, union short_rectangle2d const *);
// long profile_render_find_value(unsigned long);
// long profile_render_find_existing_value(unsigned long);
// void profile_render_build_cumulative_indices(long);

//void profile_render_reset(void)
//{
//    mangled_ppc("?profile_render_reset@@YAXXZ");
//};

//void profile_render_submit_begin(char const *, long, long, float)
//{
//    mangled_ppc("?profile_render_submit_begin@@YAXPBDJJM@Z");
//};

//void profile_render_submit_value(unsigned long, char const *, long, union rgb_color const *, unsigned long, float, long, float)
//{
//    mangled_ppc("?profile_render_submit_value@@YAXKPBDJPBTrgb_color@@KMJM@Z");
//};

//void profile_render_submit_perf_counters(unsigned long, __int64, __int64, __int64)
//{
//    mangled_ppc("?profile_render_submit_perf_counters@@YAXK_J00@Z");
//};

//void profile_render_submit_legend(char const *, union rgb_color const *, float, float)
//{
//    mangled_ppc("?profile_render_submit_legend@@YAXPBDPBTrgb_color@@MM@Z");
//};

//void profile_render_submit_end(void)
//{
//    mangled_ppc("?profile_render_submit_end@@YAXXZ");
//};

//bool compare_profile_render_globals_values(long, long, void const *)
//{
//    mangled_ppc("?compare_profile_render_globals_values@@YA_NJJPBX@Z");
//};

//void profile_render_dump_current_frame_info(float)
//{
//    mangled_ppc("?profile_render_dump_current_frame_info@@YAXM@Z");
//};

//void profile_summary_objects_fetch(struct s_profiler_summary_object_data *)
//{
//    mangled_ppc("?profile_summary_objects_fetch@@YAXPAUs_profiler_summary_object_data@@@Z");
//};

//void profile_summary_objects_fetch_counts_by_mask(unsigned long, struct s_profiler_summary_object_data::s_object_counts_per_state *)
//{
//    mangled_ppc("?profile_summary_objects_fetch_counts_by_mask@@YAXKPAUs_object_counts_per_state@s_profiler_summary_object_data@@@Z");
//};

//void profile_summary_objects_fetch_header_allocation_info(struct s_profiler_summary_object_data::s_object_header_allocation_info *)
//{
//    mangled_ppc("?profile_summary_objects_fetch_header_allocation_info@@YAXPAUs_object_header_allocation_info@s_profiler_summary_object_data@@@Z");
//};

//public: void s_profiler_summary_object_data::s_object_header_block_info::clear(void)
//{
//    mangled_ppc("?clear@s_object_header_block_info@s_profiler_summary_object_data@@QAAXXZ");
//};

//public: void s_profiler_summary_object_data::s_object_header_block_info::process(long, struct object_header_block_reference const *)
//{
//    mangled_ppc("?process@s_object_header_block_info@s_profiler_summary_object_data@@QAAXJPBUobject_header_block_reference@@@Z");
//};

//void profile_summary_objects_display(char *, long)
//{
//    mangled_ppc("?profile_summary_objects_display@@YAXPADJ@Z");
//};

//void profile_summary_object_counts_display(char *, long, struct s_profiler_summary_object_data::s_object_counts_per_state const *, char const *)
//{
//    mangled_ppc("?profile_summary_object_counts_display@@YAXPADJPBUs_object_counts_per_state@s_profiler_summary_object_data@@PBD@Z");
//};

//void profile_summary_cluster_partition_display(char *, long, struct s_cluster_partition_information const *, char const *)
//{
//    mangled_ppc("?profile_summary_cluster_partition_display@@YAXPADJPBUs_cluster_partition_information@@PBD@Z");
//};

//void profile_summary_object_header_allocation_info_display(char *, long, struct s_profiler_summary_object_data::s_object_header_allocation_info const *)
//{
//    mangled_ppc("?profile_summary_object_header_allocation_info_display@@YAXPADJPBUs_object_header_allocation_info@s_profiler_summary_object_data@@@Z");
//};

//void profile_summary_object_header_block_info_display(char *, long, struct s_profiler_summary_object_data::s_object_header_block_info const *, char const *)
//{
//    mangled_ppc("?profile_summary_object_header_block_info_display@@YAXPADJPBUs_object_header_block_info@s_profiler_summary_object_data@@PBD@Z");
//};

//void profile_summary_effects_fetch(struct s_profiler_summary_effect_data *)
//{
//    mangled_ppc("?profile_summary_effects_fetch@@YAXPAUs_profiler_summary_effect_data@@@Z");
//};

//void profile_summary_effects_display(char *, long)
//{
//    mangled_ppc("?profile_summary_effects_display@@YAXPADJ@Z");
//};

//void profile_render(union short_rectangle2d const *, union short_rectangle2d const *)
//{
//    mangled_ppc("?profile_render@@YAXPBTshort_rectangle2d@@0@Z");
//};

//long profile_render_find_value(unsigned long)
//{
//    mangled_ppc("?profile_render_find_value@@YAJK@Z");
//};

//long profile_render_find_existing_value(unsigned long)
//{
//    mangled_ppc("?profile_render_find_existing_value@@YAJK@Z");
//};

//void profile_render_build_cumulative_indices(long)
//{
//    mangled_ppc("?profile_render_build_cumulative_indices@@YAXJ@Z");
//};

