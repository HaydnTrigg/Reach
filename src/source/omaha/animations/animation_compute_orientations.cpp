/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const s_static_array<struct real_orientation, 255>::k_element_count; // "?k_element_count@?$s_static_array@Ureal_orientation@@$0PP@@@2JB"
// bool enable_animation_decompression_cache; // "?enable_animation_decompression_cache@@3_NA"
// bool g_enable_debug_animation_solving; // "?g_enable_debug_animation_solving@@3_NA"
// bool debug_animation_fik_correction_enable; // "?debug_animation_fik_correction_enable@@3_NA"
// bool debug_animation_fik_subframe_precision_enable; // "?debug_animation_fik_subframe_precision_enable@@3_NA"
// bool debug_animation_snap_nearest_pose_blend; // "?debug_animation_snap_nearest_pose_blend@@3_NA"
// bool debug_animation_object_space_offset_disable; // "?debug_animation_object_space_offset_disable@@3_NA"
// bool debug_animation_object_space_offset_draw; // "?debug_animation_object_space_offset_draw@@3_NA"
// bool debug_animation_force_subframe_on_loop; // "?debug_animation_force_subframe_on_loop@@3_NA"
// class c_scratchpad<struct s_base_orientation_workspace, 6> base_workspace_pad; // "?base_workspace_pad@@3V?$c_scratchpad@Us_base_orientation_workspace@@$05@@A"
// struct s_animation_solver_workspace *anim_workspace_tlsptr; // "?anim_workspace_tlsptr@@3PAUs_animation_solver_workspace@@A"
// struct s_base_orientation_workspace *base_workspace_tlsptr; // "?base_workspace_tlsptr@@3PAUs_base_orientation_workspace@@A"

// struct s_animation_solver_workspace * get_anim_workspace(void);
// struct s_base_orientation_workspace * get_base_workspace(void);
// struct s_animation_solver_workspace * get_animation_solver_workspace_workspace_for_current_thread(void);
// void clear_base_node_orientations(void);
// void store_base_node_orientations(unsigned long, struct real_orientation *);
// void internal_compute_node_orientations_new(long, struct s_animation_inheritance const *, class c_animation_id, long, float, float, class c_big_flags_typed_no_init<long, 256> const *, struct real_orientation *, class c_flags<enum e_animation_computation_flags, unsigned long, 3, struct s_default_enum_string_resolver>, long, float *, float *);
// public: c_node_component_flags::c_node_component_flags(void);
// public: c_node_component_flags::c_node_component_flags(class c_node_component_flags const *);
// public: c_node_component_flags::~c_node_component_flags(void);
// public: void c_node_component_flags::clear(void);
// public: void c_node_component_flags::copy(class c_node_component_flags const *);
// public: void c_node_component_flags::or(class c_node_component_flags const *);
// public: void c_node_component_flags::and(class c_big_flags_typed_no_init<long, 256> const *);
// public: s_payload_node_codec_pairs_array::s_payload_node_codec_pairs_array(void);
// public: unsigned char const * c_animation_data::base_address(void) const;
// public: unsigned long const * c_animation_data::get_static_rotation_flags(void) const;
// public: unsigned long const * c_animation_data::get_static_translation_flags(void) const;
// public: unsigned long const * c_animation_data::get_static_scale_flags(void) const;
// public: c_scoped_animation_workspace::c_scoped_animation_workspace(void);
// public: c_scoped_animation_workspace::~c_scoped_animation_workspace(void);
// bool convert_node_flags_to_array(long, long, unsigned int *, class c_big_flags_typed_no_init<long, 256> &volatile, unsigned int *, unsigned int *, struct s_payload_node_codec_pairs_array &);
// void internal_compute_node_orientations_from_data(unsigned int *, struct s_animation_codec_header &volatile, long, long, long, float, float, bool, struct s_animation_codec_header &volatile, struct s_payload_node_codec_pairs_array *, bool, bool, unsigned int *, struct real_orientation &);
// void local_apply_fik_correction(class c_model_animation_graph const *, class c_animation_id, long, class c_big_flags_typed_no_init<long, 256> const *, long, long, float, float, bool, struct real_orientation *);
// void local_apply_fik_correction_for_one_chain(long, struct real_orientation const *, class c_model_animation_graph const *, class c_model_animation const *, struct real_orientation *, class c_big_flags_typed_no_init<long, 256> *);
// void decodec_fik_nodes(unsigned char const *, long, long, long, struct real_orientation *);
// bool test_node_flags_with_default(class c_big_flags_typed_no_init<long, 256> const *, long);
// bool combine_node_flag_masks(unsigned int *, class c_big_flags_typed_no_init<long, 256> &volatile, unsigned int *, unsigned int *, class c_big_flags_typed_no_init<long, 256> &);
// void compute_node_orientations(long, class c_animation_id, long, float, float, class c_big_flags_typed_no_init<long, 256> const *, struct real_orientation *, class c_flags<enum e_animation_computation_flags, unsigned long, 3, struct s_default_enum_string_resolver>);
// bool compute_weights_from_raw_triangulation(float, float, union real_point2d const *, long, struct s_blend_screen_delaunay_triangle const *, long, class c_enum<enum e_triangulation_blend_weight_type, char, 0, 2, struct s_default_enum_string_resolver>, long, float *, long *);
// void barycentric_coordinates_to_interpolation_weights(float, float, float, float *, float *, float *);
// bool compute_frame_weights_from_blend_screen_data(float, float, struct s_blend_screen_data const *, long, float *, long *, long *);
// bool compute_frame_weights_from_sample_sphere_triangulation(float, float, struct s_blend_screen_data const *, long, float *, long *, long *);
// bool compute_frame_weights_from_triangulation(float, float, struct s_blend_screen_data const *, long, float *, long *);
// bool compute_frame_weights_from_linear_segments(float, float, struct s_blend_screen_data const *, long, float *, long *);
// void convert_local_space_offsets_to_mixed_space(class c_model_animation_graph const *, class c_animation_id, long, class c_big_flags_typed_no_init<long, 256> const *, class c_node_component_flags *, class c_node_component_flags *, struct real_orientation *);
// void compute_node_orientations_from_blend_screen(long, class c_animation_id, long, float, float, struct animation_aiming_screen_bounds const *const, float, class c_big_flags_typed_no_init<long, 256> const *, struct real_orientation *);
// void compute_node_orientations_from_blend_screen_with_object_space_override(long, long, struct s_animation_inheritance const *, class c_animation_id, long, struct real_orientation const *, long, float, float, struct animation_aiming_screen_bounds const *const, float, bool, class c_big_flags_typed_no_init<long, 256> const *, struct real_orientation *);
// void convert_local_space_orientations_to_mixed_space(class c_model_animation_graph const *, class c_animation_id, class c_big_flags_typed_no_init<long, 256> const *, long, struct real_orientation const *, long, struct real_orientation *, class c_big_flags_typed_no_init<long, 256> *);
// void recover_local_space_orientations_from_mixed_space(class c_model_animation_graph const *, class c_animation_id, class c_big_flags_typed_no_init<long, 256> const *, class c_big_flags_typed_no_init<long, 256> const *, long, struct real_orientation const *, long, struct real_orientation *);
// void compute_node_orientations_at_playback_ratio(long, class c_animation_id, long, float, float, class c_big_flags_typed_no_init<long, 256> const *, struct real_orientation *);
// void compute_base_node_orientations_from_buffer(class c_model_animation const *, class c_animation_data const *, struct s_animation_codec_header const *, unsigned long, unsigned long, struct real_orientation *);
// void compute_default_node_orientations_from_buffer(class c_model_animation const *, class c_animation_data const *, struct s_animation_codec_header const *, unsigned long, unsigned long, struct real_orientation *);
// bool build_replacement_correction_data(unsigned int *, class c_model_animation_graph &volatile, unsigned int *, class c_model_animation &volatile, long, unsigned int *, class s_static_array<struct real_orientation, 255> &volatile, unsigned int *, struct real_orientation &volatile, class s_static_array<struct real_orientation, 255> &volatile, unsigned int *, class c_node_component_flags &, unsigned int *, class s_static_array<struct real_orientation, 255> &);
// __stvx;
// void orientations_difference(struct real_orientation const *, struct real_orientation const *, bool, bool, bool, struct real_orientation *);
// public: struct real_orientation * s_static_array<struct real_orientation, 255>::get_elements(void);
// public: static long s_static_array<struct real_orientation, 255>::get_count(void);
// public: struct s_base_orientation_workspace * c_scratchpad<struct s_base_orientation_workspace, 6>::get_scratchpad(void);
// public: enum e_triangulation_blend_weight_type c_enum_no_init<enum e_triangulation_blend_weight_type, char, 0, 2, struct s_default_enum_string_resolver>::operator enum e_triangulation_blend_weight_type(void) const;
// public: bool c_flags_no_init<enum e_object_space_node_flags, unsigned short, 4, struct s_default_enum_string_resolver>::test(enum e_object_space_node_flags) const;
// void prefetch<struct s_payload_node_codec_pairs_array>(struct s_payload_node_codec_pairs_array const *);
// void prefetch<class c_big_flags_typed_no_init<long, 256> >(class c_big_flags_typed_no_init<long, 256> const *);
// public: bool c_flags_no_init<enum e_animation_computation_flags, unsigned long, 3, struct s_default_enum_string_resolver>::test(enum e_animation_computation_flags) const;
// void remap_and_blend_unpacked_data_to_target<1, 0>(long, struct s_animation_inheritance const *, unsigned int *, class c_node_component_flags &volatile, unsigned int *, class s_static_array<struct real_orientation, 255> &volatile, unsigned int *, class c_node_component_flags &volatile, long, unsigned int *, struct real_orientation &, float, float);
// long count_consecutive_low_bits_set(long);
// long count_consecutive_low_bits_clear(long);
// __lvx;
// void remap_and_blend_unpacked_data_to_target<0, 0>(long, struct s_animation_inheritance const *, unsigned int *, class c_node_component_flags &volatile, unsigned int *, class s_static_array<struct real_orientation, 255> &volatile, unsigned int *, class c_node_component_flags &volatile, long, unsigned int *, struct real_orientation &, float, float);
// void remap_and_blend_unpacked_data_to_target<2, 0>(long, struct s_animation_inheritance const *, unsigned int *, class c_node_component_flags &volatile, unsigned int *, class s_static_array<struct real_orientation, 255> &volatile, unsigned int *, class c_node_component_flags &volatile, long, unsigned int *, struct real_orientation &, float, float);
// void remap_and_blend_unpacked_data_to_target<3, 0>(long, struct s_animation_inheritance const *, unsigned int *, class c_node_component_flags &volatile, unsigned int *, class s_static_array<struct real_orientation, 255> &volatile, unsigned int *, class c_node_component_flags &volatile, long, unsigned int *, struct real_orientation &, float, float);
// void remap_and_blend_unpacked_data_to_target<4, 0>(long, struct s_animation_inheritance const *, unsigned int *, class c_node_component_flags &volatile, unsigned int *, class s_static_array<struct real_orientation, 255> &volatile, unsigned int *, class c_node_component_flags &volatile, long, unsigned int *, struct real_orientation &, float, float);
// void remap_and_blend_unpacked_data_to_target<5, 0>(long, struct s_animation_inheritance const *, unsigned int *, class c_node_component_flags &volatile, unsigned int *, class s_static_array<struct real_orientation, 255> &volatile, unsigned int *, class c_node_component_flags &volatile, long, unsigned int *, struct real_orientation &, float, float);
// void remap_and_blend_unpacked_data_to_target<0, 1>(long, struct s_animation_inheritance const *, unsigned int *, class c_node_component_flags &volatile, unsigned int *, class s_static_array<struct real_orientation, 255> &volatile, unsigned int *, class c_node_component_flags &volatile, long, unsigned int *, struct real_orientation &, float, float);
// void remap_and_blend_unpacked_data_to_target<1, 1>(long, struct s_animation_inheritance const *, unsigned int *, class c_node_component_flags &volatile, unsigned int *, class s_static_array<struct real_orientation, 255> &volatile, unsigned int *, class c_node_component_flags &volatile, long, unsigned int *, struct real_orientation &, float, float);
// void remap_and_blend_unpacked_data_to_target<2, 1>(long, struct s_animation_inheritance const *, unsigned int *, class c_node_component_flags &volatile, unsigned int *, class s_static_array<struct real_orientation, 255> &volatile, unsigned int *, class c_node_component_flags &volatile, long, unsigned int *, struct real_orientation &, float, float);
// void remap_and_blend_unpacked_data_to_target<3, 1>(long, struct s_animation_inheritance const *, unsigned int *, class c_node_component_flags &volatile, unsigned int *, class s_static_array<struct real_orientation, 255> &volatile, unsigned int *, class c_node_component_flags &volatile, long, unsigned int *, struct real_orientation &, float, float);
// void remap_and_blend_unpacked_data_to_target<4, 1>(long, struct s_animation_inheritance const *, unsigned int *, class c_node_component_flags &volatile, unsigned int *, class s_static_array<struct real_orientation, 255> &volatile, unsigned int *, class c_node_component_flags &volatile, long, unsigned int *, struct real_orientation &, float, float);
// void remap_and_blend_unpacked_data_to_target<5, 1>(long, struct s_animation_inheritance const *, unsigned int *, class c_node_component_flags &volatile, unsigned int *, class s_static_array<struct real_orientation, 255> &volatile, unsigned int *, class c_node_component_flags &volatile, long, unsigned int *, struct real_orientation &, float, float);
// public: struct real_orientation const & s_static_array<struct real_orientation, 255>::element<long>(long) const;
// public: struct real_orientation & s_static_array<struct real_orientation, 255>::element<long>(long);
// public: static bool c_flags_no_init<enum e_object_space_node_flags, unsigned short, 4, struct s_default_enum_string_resolver>::valid_bit(enum e_object_space_node_flags);
// private: static unsigned short c_flags_no_init<enum e_object_space_node_flags, unsigned short, 4, struct s_default_enum_string_resolver>::flag_size_type(enum e_object_space_node_flags);
// void rotation_blender<1>(unsigned int *, struct real_orientation &volatile, long, unsigned int *, class c_big_flags_typed_no_init<long, 256> &volatile, unsigned int *, unsigned int *, struct real_orientation &, float, float);
// void fast_quaternion_interpolate_and_normalize(unsigned int *, struct real32_quaternion &volatile, unsigned int *, float, unsigned int *, struct real32_quaternion &);
// void fast_quaternion_multiply(unsigned int *, struct real32_quaternion &volatile, unsigned int *, unsigned int *, struct real32_quaternion &);
// void translation_blender<1>(unsigned int *, struct real_orientation &volatile, long, unsigned int *, class c_big_flags_typed_no_init<long, 256> &volatile, unsigned int *, unsigned int *, struct real_orientation &, float, float);
// void scale_blender<1>(unsigned int *, struct real_orientation &volatile, long, unsigned int *, class c_big_flags_typed_no_init<long, 256> &volatile, unsigned int *, unsigned int *, struct real_orientation &, float, float);
// void rotation_blender<0>(unsigned int *, struct real_orientation &volatile, long, unsigned int *, class c_big_flags_typed_no_init<long, 256> &volatile, unsigned int *, unsigned int *, struct real_orientation &, float, float);
// void translation_blender<0>(unsigned int *, struct real_orientation &volatile, long, unsigned int *, class c_big_flags_typed_no_init<long, 256> &volatile, unsigned int *, unsigned int *, struct real_orientation &, float, float);
// void scale_blender<0>(unsigned int *, struct real_orientation &volatile, long, unsigned int *, class c_big_flags_typed_no_init<long, 256> &volatile, unsigned int *, unsigned int *, struct real_orientation &, float, float);
// void rotation_blender<2>(unsigned int *, struct real_orientation &volatile, long, unsigned int *, class c_big_flags_typed_no_init<long, 256> &volatile, unsigned int *, unsigned int *, struct real_orientation &, float, float);
// void translation_blender<2>(unsigned int *, struct real_orientation &volatile, long, unsigned int *, class c_big_flags_typed_no_init<long, 256> &volatile, unsigned int *, unsigned int *, struct real_orientation &, float, float);
// void scale_blender<2>(unsigned int *, struct real_orientation &volatile, long, unsigned int *, class c_big_flags_typed_no_init<long, 256> &volatile, unsigned int *, unsigned int *, struct real_orientation &, float, float);
// void rotation_blender<3>(unsigned int *, struct real_orientation &volatile, long, unsigned int *, class c_big_flags_typed_no_init<long, 256> &volatile, unsigned int *, unsigned int *, struct real_orientation &, float, float);
// void translation_blender<3>(unsigned int *, struct real_orientation &volatile, long, unsigned int *, class c_big_flags_typed_no_init<long, 256> &volatile, unsigned int *, unsigned int *, struct real_orientation &, float, float);
// void scale_blender<3>(unsigned int *, struct real_orientation &volatile, long, unsigned int *, class c_big_flags_typed_no_init<long, 256> &volatile, unsigned int *, unsigned int *, struct real_orientation &, float, float);
// void rotation_blender<4>(unsigned int *, struct real_orientation &volatile, long, unsigned int *, class c_big_flags_typed_no_init<long, 256> &volatile, unsigned int *, unsigned int *, struct real_orientation &, float, float);
// void translation_blender<4>(unsigned int *, struct real_orientation &volatile, long, unsigned int *, class c_big_flags_typed_no_init<long, 256> &volatile, unsigned int *, unsigned int *, struct real_orientation &, float, float);
// void scale_blender<4>(unsigned int *, struct real_orientation &volatile, long, unsigned int *, class c_big_flags_typed_no_init<long, 256> &volatile, unsigned int *, unsigned int *, struct real_orientation &, float, float);
// void rotation_blender<5>(unsigned int *, struct real_orientation &volatile, long, unsigned int *, class c_big_flags_typed_no_init<long, 256> &volatile, unsigned int *, unsigned int *, struct real_orientation &, float, float);
// void translation_blender<5>(unsigned int *, struct real_orientation &volatile, long, unsigned int *, class c_big_flags_typed_no_init<long, 256> &volatile, unsigned int *, unsigned int *, struct real_orientation &, float, float);
// void scale_blender<5>(unsigned int *, struct real_orientation &volatile, long, unsigned int *, class c_big_flags_typed_no_init<long, 256> &volatile, unsigned int *, unsigned int *, struct real_orientation &, float, float);
// public: static bool s_static_array<struct real_orientation, 255>::valid<long>(long);
// bool valid_real_vector4d(union vector4d const *);
// public: c_scratchpad<struct s_base_orientation_workspace, 6>::c_scratchpad<struct s_base_orientation_workspace, 6>(void);
// public: c_scratchpad<struct s_base_orientation_workspace, 6>::~c_scratchpad<struct s_base_orientation_workspace, 6>(void);
// void base_workspace_pad::`dynamic atexit destructor'(void);

//struct s_animation_solver_workspace * get_anim_workspace(void)
//{
//    mangled_ppc("?get_anim_workspace@@YAPAUs_animation_solver_workspace@@XZ");
//};

//struct s_base_orientation_workspace * get_base_workspace(void)
//{
//    mangled_ppc("?get_base_workspace@@YAPAUs_base_orientation_workspace@@XZ");
//};

//struct s_animation_solver_workspace * get_animation_solver_workspace_workspace_for_current_thread(void)
//{
//    mangled_ppc("?get_animation_solver_workspace_workspace_for_current_thread@@YAPAUs_animation_solver_workspace@@XZ");
//};

//void clear_base_node_orientations(void)
//{
//    mangled_ppc("?clear_base_node_orientations@@YAXXZ");
//};

//void store_base_node_orientations(unsigned long, struct real_orientation *)
//{
//    mangled_ppc("?store_base_node_orientations@@YAXKPAUreal_orientation@@@Z");
//};

//void internal_compute_node_orientations_new(long, struct s_animation_inheritance const *, class c_animation_id, long, float, float, class c_big_flags_typed_no_init<long, 256> const *, struct real_orientation *, class c_flags<enum e_animation_computation_flags, unsigned long, 3, struct s_default_enum_string_resolver>, long, float *, float *)
//{
//    mangled_ppc("?internal_compute_node_orientations_new@@YAXJPBUs_animation_inheritance@@Vc_animation_id@@JMMPBV?$c_big_flags_typed_no_init@J$0BAA@@@PAUreal_orientation@@V?$c_flags@W4e_animation_computation_flags@@K$02Us_default_enum_string_resolver@@@@JPAM5@Z");
//};

//public: c_node_component_flags::c_node_component_flags(void)
//{
//    mangled_ppc("??0c_node_component_flags@@QAA@XZ");
//};

//public: c_node_component_flags::c_node_component_flags(class c_node_component_flags const *)
//{
//    mangled_ppc("??0c_node_component_flags@@QAA@PBV0@@Z");
//};

//public: c_node_component_flags::~c_node_component_flags(void)
//{
//    mangled_ppc("??1c_node_component_flags@@QAA@XZ");
//};

//public: void c_node_component_flags::clear(void)
//{
//    mangled_ppc("?clear@c_node_component_flags@@QAAXXZ");
//};

//public: void c_node_component_flags::copy(class c_node_component_flags const *)
//{
//    mangled_ppc("?copy@c_node_component_flags@@QAAXPBV1@@Z");
//};

//public: void c_node_component_flags::or(class c_node_component_flags const *)
//{
//    mangled_ppc("?or@c_node_component_flags@@QAAXPBV1@@Z");
//};

//public: void c_node_component_flags::and(class c_big_flags_typed_no_init<long, 256> const *)
//{
//    mangled_ppc("?and@c_node_component_flags@@QAAXPBV?$c_big_flags_typed_no_init@J$0BAA@@@@Z");
//};

//public: s_payload_node_codec_pairs_array::s_payload_node_codec_pairs_array(void)
//{
//    mangled_ppc("??0s_payload_node_codec_pairs_array@@QAA@XZ");
//};

//public: unsigned char const * c_animation_data::base_address(void) const
//{
//    mangled_ppc("?base_address@c_animation_data@@QBAPBEXZ");
//};

//public: unsigned long const * c_animation_data::get_static_rotation_flags(void) const
//{
//    mangled_ppc("?get_static_rotation_flags@c_animation_data@@QBAPBKXZ");
//};

//public: unsigned long const * c_animation_data::get_static_translation_flags(void) const
//{
//    mangled_ppc("?get_static_translation_flags@c_animation_data@@QBAPBKXZ");
//};

//public: unsigned long const * c_animation_data::get_static_scale_flags(void) const
//{
//    mangled_ppc("?get_static_scale_flags@c_animation_data@@QBAPBKXZ");
//};

//public: c_scoped_animation_workspace::c_scoped_animation_workspace(void)
//{
//    mangled_ppc("??0c_scoped_animation_workspace@@QAA@XZ");
//};

//public: c_scoped_animation_workspace::~c_scoped_animation_workspace(void)
//{
//    mangled_ppc("??1c_scoped_animation_workspace@@QAA@XZ");
//};

//bool convert_node_flags_to_array(long, long, unsigned int *, class c_big_flags_typed_no_init<long, 256> &volatile, unsigned int *, unsigned int *, struct s_payload_node_codec_pairs_array &)
//{
//    mangled_ppc("?convert_node_flags_to_array@@YA_NJJPIBV?$c_big_flags_typed_no_init@J$0BAA@@@0PIAUs_payload_node_codec_pairs_array@@@Z");
//};

//void internal_compute_node_orientations_from_data(unsigned int *, struct s_animation_codec_header &volatile, long, long, long, float, float, bool, struct s_animation_codec_header &volatile, struct s_payload_node_codec_pairs_array *, bool, bool, unsigned int *, struct real_orientation &)
//{
//    mangled_ppc("?internal_compute_node_orientations_from_data@@YAXPIBUs_animation_codec_header@@JJJMM_N1PAUs_payload_node_codec_pairs_array@@22PIAUreal_orientation@@@Z");
//};

//void local_apply_fik_correction(class c_model_animation_graph const *, class c_animation_id, long, class c_big_flags_typed_no_init<long, 256> const *, long, long, float, float, bool, struct real_orientation *)
//{
//    mangled_ppc("?local_apply_fik_correction@@YAXPBVc_model_animation_graph@@Vc_animation_id@@JPBV?$c_big_flags_typed_no_init@J$0BAA@@@JJMM_NPAUreal_orientation@@@Z");
//};

//void local_apply_fik_correction_for_one_chain(long, struct real_orientation const *, class c_model_animation_graph const *, class c_model_animation const *, struct real_orientation *, class c_big_flags_typed_no_init<long, 256> *)
//{
//    mangled_ppc("?local_apply_fik_correction_for_one_chain@@YAXJPBUreal_orientation@@PBVc_model_animation_graph@@PBVc_model_animation@@PAU1@PAV?$c_big_flags_typed_no_init@J$0BAA@@@@Z");
//};

//void decodec_fik_nodes(unsigned char const *, long, long, long, struct real_orientation *)
//{
//    mangled_ppc("?decodec_fik_nodes@@YAXPBEJJJPAUreal_orientation@@@Z");
//};

//bool test_node_flags_with_default(class c_big_flags_typed_no_init<long, 256> const *, long)
//{
//    mangled_ppc("?test_node_flags_with_default@@YA_NPBV?$c_big_flags_typed_no_init@J$0BAA@@@J@Z");
//};

//bool combine_node_flag_masks(unsigned int *, class c_big_flags_typed_no_init<long, 256> &volatile, unsigned int *, unsigned int *, class c_big_flags_typed_no_init<long, 256> &)
//{
//    mangled_ppc("?combine_node_flag_masks@@YA_NPIBV?$c_big_flags_typed_no_init@J$0BAA@@@0PIAV1@@Z");
//};

//void compute_node_orientations(long, class c_animation_id, long, float, float, class c_big_flags_typed_no_init<long, 256> const *, struct real_orientation *, class c_flags<enum e_animation_computation_flags, unsigned long, 3, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?compute_node_orientations@@YAXJVc_animation_id@@JMMPBV?$c_big_flags_typed_no_init@J$0BAA@@@PAUreal_orientation@@V?$c_flags@W4e_animation_computation_flags@@K$02Us_default_enum_string_resolver@@@@@Z");
//};

//bool compute_weights_from_raw_triangulation(float, float, union real_point2d const *, long, struct s_blend_screen_delaunay_triangle const *, long, class c_enum<enum e_triangulation_blend_weight_type, char, 0, 2, struct s_default_enum_string_resolver>, long, float *, long *)
//{
//    mangled_ppc("?compute_weights_from_raw_triangulation@@YA_NMMPBTreal_point2d@@JPBUs_blend_screen_delaunay_triangle@@JV?$c_enum@W4e_triangulation_blend_weight_type@@D$0A@$01Us_default_enum_string_resolver@@@@JPAMPAJ@Z");
//};

//void barycentric_coordinates_to_interpolation_weights(float, float, float, float *, float *, float *)
//{
//    mangled_ppc("?barycentric_coordinates_to_interpolation_weights@@YAXMMMPAM00@Z");
//};

//bool compute_frame_weights_from_blend_screen_data(float, float, struct s_blend_screen_data const *, long, float *, long *, long *)
//{
//    mangled_ppc("?compute_frame_weights_from_blend_screen_data@@YA_NMMPBUs_blend_screen_data@@JPAMPAJ2@Z");
//};

//bool compute_frame_weights_from_sample_sphere_triangulation(float, float, struct s_blend_screen_data const *, long, float *, long *, long *)
//{
//    mangled_ppc("?compute_frame_weights_from_sample_sphere_triangulation@@YA_NMMPBUs_blend_screen_data@@JPAMPAJ2@Z");
//};

//bool compute_frame_weights_from_triangulation(float, float, struct s_blend_screen_data const *, long, float *, long *)
//{
//    mangled_ppc("?compute_frame_weights_from_triangulation@@YA_NMMPBUs_blend_screen_data@@JPAMPAJ@Z");
//};

//bool compute_frame_weights_from_linear_segments(float, float, struct s_blend_screen_data const *, long, float *, long *)
//{
//    mangled_ppc("?compute_frame_weights_from_linear_segments@@YA_NMMPBUs_blend_screen_data@@JPAMPAJ@Z");
//};

//void convert_local_space_offsets_to_mixed_space(class c_model_animation_graph const *, class c_animation_id, long, class c_big_flags_typed_no_init<long, 256> const *, class c_node_component_flags *, class c_node_component_flags *, struct real_orientation *)
//{
//    mangled_ppc("?convert_local_space_offsets_to_mixed_space@@YAXPBVc_model_animation_graph@@Vc_animation_id@@JPBV?$c_big_flags_typed_no_init@J$0BAA@@@PAVc_node_component_flags@@3PAUreal_orientation@@@Z");
//};

//void compute_node_orientations_from_blend_screen(long, class c_animation_id, long, float, float, struct animation_aiming_screen_bounds const *const, float, class c_big_flags_typed_no_init<long, 256> const *, struct real_orientation *)
//{
//    mangled_ppc("?compute_node_orientations_from_blend_screen@@YAXJVc_animation_id@@JMMQBUanimation_aiming_screen_bounds@@MPBV?$c_big_flags_typed_no_init@J$0BAA@@@PAUreal_orientation@@@Z");
//};

//void compute_node_orientations_from_blend_screen_with_object_space_override(long, long, struct s_animation_inheritance const *, class c_animation_id, long, struct real_orientation const *, long, float, float, struct animation_aiming_screen_bounds const *const, float, bool, class c_big_flags_typed_no_init<long, 256> const *, struct real_orientation *)
//{
//    mangled_ppc("?compute_node_orientations_from_blend_screen_with_object_space_override@@YAXJJPBUs_animation_inheritance@@Vc_animation_id@@JPBUreal_orientation@@JMMQBUanimation_aiming_screen_bounds@@M_NPBV?$c_big_flags_typed_no_init@J$0BAA@@@PAU3@@Z");
//};

//void convert_local_space_orientations_to_mixed_space(class c_model_animation_graph const *, class c_animation_id, class c_big_flags_typed_no_init<long, 256> const *, long, struct real_orientation const *, long, struct real_orientation *, class c_big_flags_typed_no_init<long, 256> *)
//{
//    mangled_ppc("?convert_local_space_orientations_to_mixed_space@@YAXPBVc_model_animation_graph@@Vc_animation_id@@PBV?$c_big_flags_typed_no_init@J$0BAA@@@JPBUreal_orientation@@JPAU4@PAV3@@Z");
//};

//void recover_local_space_orientations_from_mixed_space(class c_model_animation_graph const *, class c_animation_id, class c_big_flags_typed_no_init<long, 256> const *, class c_big_flags_typed_no_init<long, 256> const *, long, struct real_orientation const *, long, struct real_orientation *)
//{
//    mangled_ppc("?recover_local_space_orientations_from_mixed_space@@YAXPBVc_model_animation_graph@@Vc_animation_id@@PBV?$c_big_flags_typed_no_init@J$0BAA@@@2JPBUreal_orientation@@JPAU4@@Z");
//};

//void compute_node_orientations_at_playback_ratio(long, class c_animation_id, long, float, float, class c_big_flags_typed_no_init<long, 256> const *, struct real_orientation *)
//{
//    mangled_ppc("?compute_node_orientations_at_playback_ratio@@YAXJVc_animation_id@@JMMPBV?$c_big_flags_typed_no_init@J$0BAA@@@PAUreal_orientation@@@Z");
//};

//void compute_base_node_orientations_from_buffer(class c_model_animation const *, class c_animation_data const *, struct s_animation_codec_header const *, unsigned long, unsigned long, struct real_orientation *)
//{
//    mangled_ppc("?compute_base_node_orientations_from_buffer@@YAXPBVc_model_animation@@PBVc_animation_data@@PBUs_animation_codec_header@@KKPAUreal_orientation@@@Z");
//};

//void compute_default_node_orientations_from_buffer(class c_model_animation const *, class c_animation_data const *, struct s_animation_codec_header const *, unsigned long, unsigned long, struct real_orientation *)
//{
//    mangled_ppc("?compute_default_node_orientations_from_buffer@@YAXPBVc_model_animation@@PBVc_animation_data@@PBUs_animation_codec_header@@KKPAUreal_orientation@@@Z");
//};

//bool build_replacement_correction_data(unsigned int *, class c_model_animation_graph &volatile, unsigned int *, class c_model_animation &volatile, long, unsigned int *, class s_static_array<struct real_orientation, 255> &volatile, unsigned int *, struct real_orientation &volatile, class s_static_array<struct real_orientation, 255> &volatile, unsigned int *, class c_node_component_flags &, unsigned int *, class s_static_array<struct real_orientation, 255> &)
//{
//    mangled_ppc("?build_replacement_correction_data@@YA_NPIBVc_model_animation_graph@@PIBVc_model_animation@@JPIBV?$s_static_array@Ureal_orientation@@$0PP@@@PIBUreal_orientation@@3PIAVc_node_component_flags@@PIAV3@@Z");
//};

//__stvx
//{
//    mangled_ppc("__stvx");
//};

//void orientations_difference(struct real_orientation const *, struct real_orientation const *, bool, bool, bool, struct real_orientation *)
//{
//    mangled_ppc("?orientations_difference@@YAXPBUreal_orientation@@0_N11PAU1@@Z");
//};

//public: struct real_orientation * s_static_array<struct real_orientation, 255>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$s_static_array@Ureal_orientation@@$0PP@@@QAAPAUreal_orientation@@XZ");
//};

//public: static long s_static_array<struct real_orientation, 255>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Ureal_orientation@@$0PP@@@SAJXZ");
//};

//public: struct s_base_orientation_workspace * c_scratchpad<struct s_base_orientation_workspace, 6>::get_scratchpad(void)
//{
//    mangled_ppc("?get_scratchpad@?$c_scratchpad@Us_base_orientation_workspace@@$05@@QAAPAUs_base_orientation_workspace@@XZ");
//};

//public: enum e_triangulation_blend_weight_type c_enum_no_init<enum e_triangulation_blend_weight_type, char, 0, 2, struct s_default_enum_string_resolver>::operator enum e_triangulation_blend_weight_type(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_triangulation_blend_weight_type@@D$0A@$01Us_default_enum_string_resolver@@@@QBA?AW4e_triangulation_blend_weight_type@@XZ");
//};

//public: bool c_flags_no_init<enum e_object_space_node_flags, unsigned short, 4, struct s_default_enum_string_resolver>::test(enum e_object_space_node_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_object_space_node_flags@@G$03Us_default_enum_string_resolver@@@@QBA_NW4e_object_space_node_flags@@@Z");
//};

//void prefetch<struct s_payload_node_codec_pairs_array>(struct s_payload_node_codec_pairs_array const *)
//{
//    mangled_ppc("??$prefetch@Us_payload_node_codec_pairs_array@@@@YAXPBUs_payload_node_codec_pairs_array@@@Z");
//};

//void prefetch<class c_big_flags_typed_no_init<long, 256> >(class c_big_flags_typed_no_init<long, 256> const *)
//{
//    mangled_ppc("??$prefetch@V?$c_big_flags_typed_no_init@J$0BAA@@@@@YAXPBV?$c_big_flags_typed_no_init@J$0BAA@@@@Z");
//};

//public: bool c_flags_no_init<enum e_animation_computation_flags, unsigned long, 3, struct s_default_enum_string_resolver>::test(enum e_animation_computation_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_animation_computation_flags@@K$02Us_default_enum_string_resolver@@@@QBA_NW4e_animation_computation_flags@@@Z");
//};

//void remap_and_blend_unpacked_data_to_target<1, 0>(long, struct s_animation_inheritance const *, unsigned int *, class c_node_component_flags &volatile, unsigned int *, class s_static_array<struct real_orientation, 255> &volatile, unsigned int *, class c_node_component_flags &volatile, long, unsigned int *, struct real_orientation &, float, float)
//{
//    mangled_ppc("??$remap_and_blend_unpacked_data_to_target@$00$0A@@@YAXJPBUs_animation_inheritance@@PIBVc_node_component_flags@@PIBV?$s_static_array@Ureal_orientation@@$0PP@@@12JPIAUreal_orientation@@MM@Z");
//};

//long count_consecutive_low_bits_set(long)
//{
//    mangled_ppc("?count_consecutive_low_bits_set@@YAJJ@Z");
//};

//long count_consecutive_low_bits_clear(long)
//{
//    mangled_ppc("?count_consecutive_low_bits_clear@@YAJJ@Z");
//};

//__lvx
//{
//    mangled_ppc("__lvx");
//};

//void remap_and_blend_unpacked_data_to_target<0, 0>(long, struct s_animation_inheritance const *, unsigned int *, class c_node_component_flags &volatile, unsigned int *, class s_static_array<struct real_orientation, 255> &volatile, unsigned int *, class c_node_component_flags &volatile, long, unsigned int *, struct real_orientation &, float, float)
//{
//    mangled_ppc("??$remap_and_blend_unpacked_data_to_target@$0A@$0A@@@YAXJPBUs_animation_inheritance@@PIBVc_node_component_flags@@PIBV?$s_static_array@Ureal_orientation@@$0PP@@@12JPIAUreal_orientation@@MM@Z");
//};

//void remap_and_blend_unpacked_data_to_target<2, 0>(long, struct s_animation_inheritance const *, unsigned int *, class c_node_component_flags &volatile, unsigned int *, class s_static_array<struct real_orientation, 255> &volatile, unsigned int *, class c_node_component_flags &volatile, long, unsigned int *, struct real_orientation &, float, float)
//{
//    mangled_ppc("??$remap_and_blend_unpacked_data_to_target@$01$0A@@@YAXJPBUs_animation_inheritance@@PIBVc_node_component_flags@@PIBV?$s_static_array@Ureal_orientation@@$0PP@@@12JPIAUreal_orientation@@MM@Z");
//};

//void remap_and_blend_unpacked_data_to_target<3, 0>(long, struct s_animation_inheritance const *, unsigned int *, class c_node_component_flags &volatile, unsigned int *, class s_static_array<struct real_orientation, 255> &volatile, unsigned int *, class c_node_component_flags &volatile, long, unsigned int *, struct real_orientation &, float, float)
//{
//    mangled_ppc("??$remap_and_blend_unpacked_data_to_target@$02$0A@@@YAXJPBUs_animation_inheritance@@PIBVc_node_component_flags@@PIBV?$s_static_array@Ureal_orientation@@$0PP@@@12JPIAUreal_orientation@@MM@Z");
//};

//void remap_and_blend_unpacked_data_to_target<4, 0>(long, struct s_animation_inheritance const *, unsigned int *, class c_node_component_flags &volatile, unsigned int *, class s_static_array<struct real_orientation, 255> &volatile, unsigned int *, class c_node_component_flags &volatile, long, unsigned int *, struct real_orientation &, float, float)
//{
//    mangled_ppc("??$remap_and_blend_unpacked_data_to_target@$03$0A@@@YAXJPBUs_animation_inheritance@@PIBVc_node_component_flags@@PIBV?$s_static_array@Ureal_orientation@@$0PP@@@12JPIAUreal_orientation@@MM@Z");
//};

//void remap_and_blend_unpacked_data_to_target<5, 0>(long, struct s_animation_inheritance const *, unsigned int *, class c_node_component_flags &volatile, unsigned int *, class s_static_array<struct real_orientation, 255> &volatile, unsigned int *, class c_node_component_flags &volatile, long, unsigned int *, struct real_orientation &, float, float)
//{
//    mangled_ppc("??$remap_and_blend_unpacked_data_to_target@$04$0A@@@YAXJPBUs_animation_inheritance@@PIBVc_node_component_flags@@PIBV?$s_static_array@Ureal_orientation@@$0PP@@@12JPIAUreal_orientation@@MM@Z");
//};

//void remap_and_blend_unpacked_data_to_target<0, 1>(long, struct s_animation_inheritance const *, unsigned int *, class c_node_component_flags &volatile, unsigned int *, class s_static_array<struct real_orientation, 255> &volatile, unsigned int *, class c_node_component_flags &volatile, long, unsigned int *, struct real_orientation &, float, float)
//{
//    mangled_ppc("??$remap_and_blend_unpacked_data_to_target@$0A@$00@@YAXJPBUs_animation_inheritance@@PIBVc_node_component_flags@@PIBV?$s_static_array@Ureal_orientation@@$0PP@@@12JPIAUreal_orientation@@MM@Z");
//};

//void remap_and_blend_unpacked_data_to_target<1, 1>(long, struct s_animation_inheritance const *, unsigned int *, class c_node_component_flags &volatile, unsigned int *, class s_static_array<struct real_orientation, 255> &volatile, unsigned int *, class c_node_component_flags &volatile, long, unsigned int *, struct real_orientation &, float, float)
//{
//    mangled_ppc("??$remap_and_blend_unpacked_data_to_target@$00$00@@YAXJPBUs_animation_inheritance@@PIBVc_node_component_flags@@PIBV?$s_static_array@Ureal_orientation@@$0PP@@@12JPIAUreal_orientation@@MM@Z");
//};

//void remap_and_blend_unpacked_data_to_target<2, 1>(long, struct s_animation_inheritance const *, unsigned int *, class c_node_component_flags &volatile, unsigned int *, class s_static_array<struct real_orientation, 255> &volatile, unsigned int *, class c_node_component_flags &volatile, long, unsigned int *, struct real_orientation &, float, float)
//{
//    mangled_ppc("??$remap_and_blend_unpacked_data_to_target@$01$00@@YAXJPBUs_animation_inheritance@@PIBVc_node_component_flags@@PIBV?$s_static_array@Ureal_orientation@@$0PP@@@12JPIAUreal_orientation@@MM@Z");
//};

//void remap_and_blend_unpacked_data_to_target<3, 1>(long, struct s_animation_inheritance const *, unsigned int *, class c_node_component_flags &volatile, unsigned int *, class s_static_array<struct real_orientation, 255> &volatile, unsigned int *, class c_node_component_flags &volatile, long, unsigned int *, struct real_orientation &, float, float)
//{
//    mangled_ppc("??$remap_and_blend_unpacked_data_to_target@$02$00@@YAXJPBUs_animation_inheritance@@PIBVc_node_component_flags@@PIBV?$s_static_array@Ureal_orientation@@$0PP@@@12JPIAUreal_orientation@@MM@Z");
//};

//void remap_and_blend_unpacked_data_to_target<4, 1>(long, struct s_animation_inheritance const *, unsigned int *, class c_node_component_flags &volatile, unsigned int *, class s_static_array<struct real_orientation, 255> &volatile, unsigned int *, class c_node_component_flags &volatile, long, unsigned int *, struct real_orientation &, float, float)
//{
//    mangled_ppc("??$remap_and_blend_unpacked_data_to_target@$03$00@@YAXJPBUs_animation_inheritance@@PIBVc_node_component_flags@@PIBV?$s_static_array@Ureal_orientation@@$0PP@@@12JPIAUreal_orientation@@MM@Z");
//};

//void remap_and_blend_unpacked_data_to_target<5, 1>(long, struct s_animation_inheritance const *, unsigned int *, class c_node_component_flags &volatile, unsigned int *, class s_static_array<struct real_orientation, 255> &volatile, unsigned int *, class c_node_component_flags &volatile, long, unsigned int *, struct real_orientation &, float, float)
//{
//    mangled_ppc("??$remap_and_blend_unpacked_data_to_target@$04$00@@YAXJPBUs_animation_inheritance@@PIBVc_node_component_flags@@PIBV?$s_static_array@Ureal_orientation@@$0PP@@@12JPIAUreal_orientation@@MM@Z");
//};

//public: struct real_orientation const & s_static_array<struct real_orientation, 255>::element<long>(long) const
//{
//    mangled_ppc("??$element@J@?$s_static_array@Ureal_orientation@@$0PP@@@QBAABUreal_orientation@@J@Z");
//};

//public: struct real_orientation & s_static_array<struct real_orientation, 255>::element<long>(long)
//{
//    mangled_ppc("??$element@J@?$s_static_array@Ureal_orientation@@$0PP@@@QAAAAUreal_orientation@@J@Z");
//};

//public: static bool c_flags_no_init<enum e_object_space_node_flags, unsigned short, 4, struct s_default_enum_string_resolver>::valid_bit(enum e_object_space_node_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_object_space_node_flags@@G$03Us_default_enum_string_resolver@@@@SA_NW4e_object_space_node_flags@@@Z");
//};

//private: static unsigned short c_flags_no_init<enum e_object_space_node_flags, unsigned short, 4, struct s_default_enum_string_resolver>::flag_size_type(enum e_object_space_node_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_object_space_node_flags@@G$03Us_default_enum_string_resolver@@@@CAGW4e_object_space_node_flags@@@Z");
//};

//void rotation_blender<1>(unsigned int *, struct real_orientation &volatile, long, unsigned int *, class c_big_flags_typed_no_init<long, 256> &volatile, unsigned int *, unsigned int *, struct real_orientation &, float, float)
//{
//    mangled_ppc("??$rotation_blender@$00@@YAXPIBUreal_orientation@@JPIBV?$c_big_flags_typed_no_init@J$0BAA@@@0PIAU0@MM@Z");
//};

//void fast_quaternion_interpolate_and_normalize(unsigned int *, struct real32_quaternion &volatile, unsigned int *, float, unsigned int *, struct real32_quaternion &)
//{
//    mangled_ppc("?fast_quaternion_interpolate_and_normalize@@YAXPIBUreal32_quaternion@@0MPIAU1@@Z");
//};

//void fast_quaternion_multiply(unsigned int *, struct real32_quaternion &volatile, unsigned int *, unsigned int *, struct real32_quaternion &)
//{
//    mangled_ppc("?fast_quaternion_multiply@@YAXPIBUreal32_quaternion@@0PIAU1@@Z");
//};

//void translation_blender<1>(unsigned int *, struct real_orientation &volatile, long, unsigned int *, class c_big_flags_typed_no_init<long, 256> &volatile, unsigned int *, unsigned int *, struct real_orientation &, float, float)
//{
//    mangled_ppc("??$translation_blender@$00@@YAXPIBUreal_orientation@@JPIBV?$c_big_flags_typed_no_init@J$0BAA@@@0PIAU0@MM@Z");
//};

//void scale_blender<1>(unsigned int *, struct real_orientation &volatile, long, unsigned int *, class c_big_flags_typed_no_init<long, 256> &volatile, unsigned int *, unsigned int *, struct real_orientation &, float, float)
//{
//    mangled_ppc("??$scale_blender@$00@@YAXPIBUreal_orientation@@JPIBV?$c_big_flags_typed_no_init@J$0BAA@@@0PIAU0@MM@Z");
//};

//void rotation_blender<0>(unsigned int *, struct real_orientation &volatile, long, unsigned int *, class c_big_flags_typed_no_init<long, 256> &volatile, unsigned int *, unsigned int *, struct real_orientation &, float, float)
//{
//    mangled_ppc("??$rotation_blender@$0A@@@YAXPIBUreal_orientation@@JPIBV?$c_big_flags_typed_no_init@J$0BAA@@@0PIAU0@MM@Z");
//};

//void translation_blender<0>(unsigned int *, struct real_orientation &volatile, long, unsigned int *, class c_big_flags_typed_no_init<long, 256> &volatile, unsigned int *, unsigned int *, struct real_orientation &, float, float)
//{
//    mangled_ppc("??$translation_blender@$0A@@@YAXPIBUreal_orientation@@JPIBV?$c_big_flags_typed_no_init@J$0BAA@@@0PIAU0@MM@Z");
//};

//void scale_blender<0>(unsigned int *, struct real_orientation &volatile, long, unsigned int *, class c_big_flags_typed_no_init<long, 256> &volatile, unsigned int *, unsigned int *, struct real_orientation &, float, float)
//{
//    mangled_ppc("??$scale_blender@$0A@@@YAXPIBUreal_orientation@@JPIBV?$c_big_flags_typed_no_init@J$0BAA@@@0PIAU0@MM@Z");
//};

//void rotation_blender<2>(unsigned int *, struct real_orientation &volatile, long, unsigned int *, class c_big_flags_typed_no_init<long, 256> &volatile, unsigned int *, unsigned int *, struct real_orientation &, float, float)
//{
//    mangled_ppc("??$rotation_blender@$01@@YAXPIBUreal_orientation@@JPIBV?$c_big_flags_typed_no_init@J$0BAA@@@0PIAU0@MM@Z");
//};

//void translation_blender<2>(unsigned int *, struct real_orientation &volatile, long, unsigned int *, class c_big_flags_typed_no_init<long, 256> &volatile, unsigned int *, unsigned int *, struct real_orientation &, float, float)
//{
//    mangled_ppc("??$translation_blender@$01@@YAXPIBUreal_orientation@@JPIBV?$c_big_flags_typed_no_init@J$0BAA@@@0PIAU0@MM@Z");
//};

//void scale_blender<2>(unsigned int *, struct real_orientation &volatile, long, unsigned int *, class c_big_flags_typed_no_init<long, 256> &volatile, unsigned int *, unsigned int *, struct real_orientation &, float, float)
//{
//    mangled_ppc("??$scale_blender@$01@@YAXPIBUreal_orientation@@JPIBV?$c_big_flags_typed_no_init@J$0BAA@@@0PIAU0@MM@Z");
//};

//void rotation_blender<3>(unsigned int *, struct real_orientation &volatile, long, unsigned int *, class c_big_flags_typed_no_init<long, 256> &volatile, unsigned int *, unsigned int *, struct real_orientation &, float, float)
//{
//    mangled_ppc("??$rotation_blender@$02@@YAXPIBUreal_orientation@@JPIBV?$c_big_flags_typed_no_init@J$0BAA@@@0PIAU0@MM@Z");
//};

//void translation_blender<3>(unsigned int *, struct real_orientation &volatile, long, unsigned int *, class c_big_flags_typed_no_init<long, 256> &volatile, unsigned int *, unsigned int *, struct real_orientation &, float, float)
//{
//    mangled_ppc("??$translation_blender@$02@@YAXPIBUreal_orientation@@JPIBV?$c_big_flags_typed_no_init@J$0BAA@@@0PIAU0@MM@Z");
//};

//void scale_blender<3>(unsigned int *, struct real_orientation &volatile, long, unsigned int *, class c_big_flags_typed_no_init<long, 256> &volatile, unsigned int *, unsigned int *, struct real_orientation &, float, float)
//{
//    mangled_ppc("??$scale_blender@$02@@YAXPIBUreal_orientation@@JPIBV?$c_big_flags_typed_no_init@J$0BAA@@@0PIAU0@MM@Z");
//};

//void rotation_blender<4>(unsigned int *, struct real_orientation &volatile, long, unsigned int *, class c_big_flags_typed_no_init<long, 256> &volatile, unsigned int *, unsigned int *, struct real_orientation &, float, float)
//{
//    mangled_ppc("??$rotation_blender@$03@@YAXPIBUreal_orientation@@JPIBV?$c_big_flags_typed_no_init@J$0BAA@@@0PIAU0@MM@Z");
//};

//void translation_blender<4>(unsigned int *, struct real_orientation &volatile, long, unsigned int *, class c_big_flags_typed_no_init<long, 256> &volatile, unsigned int *, unsigned int *, struct real_orientation &, float, float)
//{
//    mangled_ppc("??$translation_blender@$03@@YAXPIBUreal_orientation@@JPIBV?$c_big_flags_typed_no_init@J$0BAA@@@0PIAU0@MM@Z");
//};

//void scale_blender<4>(unsigned int *, struct real_orientation &volatile, long, unsigned int *, class c_big_flags_typed_no_init<long, 256> &volatile, unsigned int *, unsigned int *, struct real_orientation &, float, float)
//{
//    mangled_ppc("??$scale_blender@$03@@YAXPIBUreal_orientation@@JPIBV?$c_big_flags_typed_no_init@J$0BAA@@@0PIAU0@MM@Z");
//};

//void rotation_blender<5>(unsigned int *, struct real_orientation &volatile, long, unsigned int *, class c_big_flags_typed_no_init<long, 256> &volatile, unsigned int *, unsigned int *, struct real_orientation &, float, float)
//{
//    mangled_ppc("??$rotation_blender@$04@@YAXPIBUreal_orientation@@JPIBV?$c_big_flags_typed_no_init@J$0BAA@@@0PIAU0@MM@Z");
//};

//void translation_blender<5>(unsigned int *, struct real_orientation &volatile, long, unsigned int *, class c_big_flags_typed_no_init<long, 256> &volatile, unsigned int *, unsigned int *, struct real_orientation &, float, float)
//{
//    mangled_ppc("??$translation_blender@$04@@YAXPIBUreal_orientation@@JPIBV?$c_big_flags_typed_no_init@J$0BAA@@@0PIAU0@MM@Z");
//};

//void scale_blender<5>(unsigned int *, struct real_orientation &volatile, long, unsigned int *, class c_big_flags_typed_no_init<long, 256> &volatile, unsigned int *, unsigned int *, struct real_orientation &, float, float)
//{
//    mangled_ppc("??$scale_blender@$04@@YAXPIBUreal_orientation@@JPIBV?$c_big_flags_typed_no_init@J$0BAA@@@0PIAU0@MM@Z");
//};

//public: static bool s_static_array<struct real_orientation, 255>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Ureal_orientation@@$0PP@@@SA_NJ@Z");
//};

//bool valid_real_vector4d(union vector4d const *)
//{
//    mangled_ppc("?valid_real_vector4d@@YA_NPBTvector4d@@@Z");
//};

//public: c_scratchpad<struct s_base_orientation_workspace, 6>::c_scratchpad<struct s_base_orientation_workspace, 6>(void)
//{
//    mangled_ppc("??0?$c_scratchpad@Us_base_orientation_workspace@@$05@@QAA@XZ");
//};

//public: c_scratchpad<struct s_base_orientation_workspace, 6>::~c_scratchpad<struct s_base_orientation_workspace, 6>(void)
//{
//    mangled_ppc("??1?$c_scratchpad@Us_base_orientation_workspace@@$05@@QAA@XZ");
//};

//void base_workspace_pad::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fbase_workspace_pad@@YAXXZ");
//};

