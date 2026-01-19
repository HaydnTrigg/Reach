/* ---------- headers */

#include "omaha\animations\curve_codec\curve_codec.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: s_model_animation_streams::s_model_animation_streams(void);
// public: void s_model_animation_streams::allocate(long, long, short const *);
// public: float s_model_animation_streams::compare_animation(struct s_model_animation_streams const *, struct array_template<struct s_curve_codec_jerk_record> *) const;
// float spline_fitting_preceptual_error(float, float);
// public: struct real_orientation const * s_model_animation_streams::get_node_stream(long) const;
// public: short const s_model_animation_streams::get_node_stream_flag(long) const;
// public: long s_model_animation_streams::get_payload_size(void) const;
// public: s_curve_codec_model_animation_compression_info::s_curve_codec_model_animation_compression_info(void);
// public: bool s_curve_codec_model_animation_compression_info::allocate_from_model_animation(struct s_model_animation_streams const *);
// public: bool s_curve_codec_model_animation_compression_info::clone(struct s_curve_codec_model_animation_compression_info const *);
// public: static bool c_curve_codec::compress_rotated_node(long, struct real_orientation const *, float, class s_animation_byte_pool *, struct s_curve_codec_stream_compression_info *);
// public: static bool c_curve_codec::compress_translated_node(long, struct real_orientation const *, float, class s_animation_byte_pool *, struct s_curve_codec_stream_compression_info *);
// public: static bool c_curve_codec::compress_scaled_node(long, struct real_orientation const *, float, class s_animation_byte_pool *, struct s_curve_codec_stream_compression_info *);
// public: static bool c_curve_codec::compress_rotation_array(long, struct array_template<struct t_spline_point<4> > *, float, class s_animation_byte_pool *, struct s_curve_codec_stream_compression_info *);
// public: s_packed_quaternion_range::s_packed_quaternion_range(void);
// public: t_hyper_catmull_spline_set<4>::~t_hyper_catmull_spline_set<4>(void);
// public: static bool c_curve_codec::compress_translation_array(long, struct array_template<struct t_spline_point<3> > *, float, class s_animation_byte_pool *, struct s_curve_codec_stream_compression_info *);
// public: s_packed_translation_range::s_packed_translation_range(void);
// public: t_hyper_catmull_spline_set<3>::~t_hyper_catmull_spline_set<3>(void);
// public: static bool c_curve_codec::compress_scale_array(long, struct array_template<struct t_spline_point<1> > *, float, class s_animation_byte_pool *, struct s_curve_codec_stream_compression_info *);
// public: s_packed_scale_range::s_packed_scale_range(void);
// public: t_hyper_catmull_spline_set<1>::~t_hyper_catmull_spline_set<1>(void);
// private: static long c_curve_codec::compress_animation_with_retarget_internal(long, class c_model_animation_graph const *, class c_model_animation *, struct s_model_animation_streams const *, float, class s_animation_byte_pool *, struct s_curve_codec_model_animation_compression_info *);
// void fast_quaternion_normalize(struct real32_quaternion *);
// __lvx;
// __stvx;
// public: long s_animation_byte_pool::append_allocation(long);
// public: long s_animation_byte_pool::add_byte_alignment_pad(void);
// private: unsigned char & s_animation_byte_pool::_array(long);
// float calculate_node_error_tolerance(class c_model_animation_graph const *, class c_model_animation const *, long, float);
// long recursivily_calculate_node_depth(class c_model_animation_graph const *, long);
// long recursivily_calculate_tree_depth(class c_model_animation_graph const *, long);
// public: s_curve_codec_model_animation_compression_info::~s_curve_codec_model_animation_compression_info(void);
// private: static long c_curve_codec::compress_animation_internal(long, class c_model_animation_graph const *, class c_model_animation *, struct s_model_animation_streams const *, float, class s_animation_byte_pool *, struct s_curve_codec_model_animation_compression_info *);
// float calculate_node_error_tolerance_new(class c_model_animation_graph const *, class c_model_animation const *, long, float);
// private: static bool c_curve_codec::decompress_whole_animation_internal(unsigned char const *, long, long, short const *, struct s_model_animation_streams *);
// public: struct real_orientation * s_model_animation_streams::get_node_stream(long);
// private: static bool c_curve_codec::dump_animation_internal(unsigned char const *, struct _iobuf *);
// public: static void c_curve_codec::set_compression_quality(enum e_curve_codec_compression_quality);
// public: static void c_curve_codec::dump_animation(struct s_animation_codec_header const *, char const *);
// public: static bool c_curve_codec::compress_animation(unsigned char, class c_model_animation_graph const *, class c_model_animation *, void *);
// public: short & s_model_animation_streams::get_node_stream_flag(long);
// public: s_model_animation_streams::~s_model_animation_streams(void);
// public: s_animation_byte_pool::s_animation_byte_pool(void);
// public: s_animation_byte_pool::~s_animation_byte_pool(void);
// public: static void c_curve_codec::fast_decompress_rotation(unsigned int *, struct s_animation_codec_header &volatile, long, long, long, float, float, unsigned int *, struct real_orientation &);
// bool is_debug_animation_solving_enabled(void);
// public: static void c_curve_codec::decompress_rotation(unsigned int *, struct s_animation_codec_header &volatile, long, long, long, float, float, unsigned int *, struct real_orientation &);
// void fast_short_arc_quaternion_interpolate_and_normalize_v(unsigned int *, struct real32_quaternion &volatile, unsigned int *, float, float, unsigned int *, struct real32_quaternion &);
// public: static void c_curve_codec::fast_decompress_translation(unsigned int *, struct s_animation_codec_header &volatile, long, long, long, float, float, unsigned int *, struct real_orientation &);
// public: static void c_curve_codec::decompress_translation(unsigned int *, struct s_animation_codec_header &volatile, long, long, long, float, float, unsigned int *, struct real_orientation &);
// ?fast_translation_interpolate@@YAXPIBTreal_point3d@@0MPIAT1@@Z;
// public: static void c_curve_codec::fast_decompress_scale(unsigned int *, struct s_animation_codec_header &volatile, long, long, long, float, float, unsigned int *, struct real_orientation &);
// public: static void c_curve_codec::decompress_scale(unsigned int *, struct s_animation_codec_header &volatile, long, long, long, float, float, unsigned int *, struct real_orientation &);
// void fast_scale_interpolate(float, float, float, float *);
// public: static void c_curve_codec::direct_decompress_rotation(unsigned int *, long &volatile, long, float, float, unsigned int *, struct real32_quaternion &);
// ?direct_decompress_translation@c_curve_codec@@SAXPIBEJJMMPIATreal_point3d@@@Z;
// public: static void c_curve_codec::direct_decompress_scale(unsigned int *, long &volatile, long, float, float, unsigned int *, float &);
// public: static void c_curve_codec::byteswap_animation(struct s_animation_codec_header *, long, bool);
// public: unsigned char & array_template<unsigned char>::operator[](long);
// public: unsigned int array_template<unsigned char>::size(void) const;
// public: array_template<short>::array_template<short>(void);
// public: array_template<short>::~array_template<short>(void);
// public: long array_template<short>::append(short const &);
// public: void array_template<short>::resize(long);
// public: short & array_template<short>::operator[](long);
// public: short const & array_template<short>::operator[](long) const;
// public: unsigned int array_template<short>::size(void) const;
// public: array_template<struct real_orientation>::array_template<struct real_orientation>(void);
// public: array_template<struct real_orientation>::~array_template<struct real_orientation>(void);
// public: void array_template<struct real_orientation>::resize(long);
// public: struct real_orientation & array_template<struct real_orientation>::operator[](long);
// public: struct real_orientation const & array_template<struct real_orientation>::operator[](long) const;
// public: unsigned int array_template<struct real_orientation>::size(void) const;
// public: array_template<struct s_curve_codec_stream_compression_info>::array_template<struct s_curve_codec_stream_compression_info>(void);
// public: array_template<struct s_curve_codec_stream_compression_info>::~array_template<struct s_curve_codec_stream_compression_info>(void);
// public: void array_template<struct s_curve_codec_stream_compression_info>::resize(long);
// public: struct s_curve_codec_stream_compression_info & array_template<struct s_curve_codec_stream_compression_info>::operator[](long);
// public: struct s_curve_codec_stream_compression_info const & array_template<struct s_curve_codec_stream_compression_info>::operator[](long) const;
// public: static bool t_packed_animation_stream_header<struct real32_quaternion, struct s_packed_quaternion, struct s_packed_quaternion_range, 4, 82>::dump_stream(unsigned char const *, struct _iobuf *);
// public: void s_packed_quaternion_range::print(struct _iobuf *) const;
// public: static long t_packed_animation_stream_header<struct real32_quaternion, struct s_packed_quaternion, struct s_packed_quaternion_range, 4, 82>::pack(class t_hyper_catmull_spline_set<4> const *, struct s_packed_quaternion_range const *, class s_animation_byte_pool *);
// public: void s_packed_quaternion::pack(struct real32_quaternion const *);
// long quantize_unit_real(float, long);
// public: bool s_animation_byte_pool::is_byte_aligned(void) const;
// public: long s_animation_byte_pool::append_pool(class s_animation_byte_pool const *);
// public: unsigned char const & array_template<unsigned char>::operator[](long) const;
// public: static bool t_packed_animation_stream_header<struct real32_quaternion, struct s_packed_quaternion, struct s_packed_quaternion_range, 4, 82>::interpolate_sample(unsigned char const *, long, struct real32_quaternion *);
// bool find_time_in_spline_set(long, long, unsigned char const *, long *, float *);
// public: void s_packed_quaternion_range::restore_data(struct t_spline_point<4> *) const;
// public: void s_packed_quaternion::unpack(struct real32_quaternion *) const;
// public: static long t_packed_animation_stream_header<struct real32_quaternion, struct s_packed_quaternion, struct s_packed_quaternion_range, 4, 82>::get_frame_count(unsigned char const *);
// public: static bool t_packed_animation_stream_header<struct real32_quaternion, struct s_packed_quaternion, struct s_packed_quaternion_range, 4, 82>::interpolate_all_samples(unsigned char const *, struct real32_quaternion *);
// public: static bool t_packed_animation_stream_header<struct real32_quaternion, struct s_packed_quaternion, struct s_packed_quaternion_range, 4, 82>::byte_swap(unsigned char *, bool);
// public: void s_packed_quaternion_range::byte_swap(void);
// public: void s_packed_quaternion::byte_swap(void);
// public: static bool t_packed_animation_stream_header<union real_point3d, struct s_packed_translation, struct s_packed_translation_range, 3, 84>::dump_stream(unsigned char const *, struct _iobuf *);
// public: void s_packed_translation_range::print(struct _iobuf *) const;
// public: static long t_packed_animation_stream_header<union real_point3d, struct s_packed_translation, struct s_packed_translation_range, 3, 84>::pack(class t_hyper_catmull_spline_set<3> const *, struct s_packed_translation_range const *, class s_animation_byte_pool *);
// public: void s_packed_translation::pack(union real_point3d const *);
// public: static bool t_packed_animation_stream_header<union real_point3d, struct s_packed_translation, struct s_packed_translation_range, 3, 84>::interpolate_sample(unsigned char const *, long, union real_point3d *);
// public: void s_packed_translation_range::restore_data(struct t_spline_point<3> *) const;
// public: void s_packed_translation::unpack(union real_point3d *) const;
// public: static long t_packed_animation_stream_header<union real_point3d, struct s_packed_translation, struct s_packed_translation_range, 3, 84>::get_frame_count(unsigned char const *);
// public: static bool t_packed_animation_stream_header<union real_point3d, struct s_packed_translation, struct s_packed_translation_range, 3, 84>::interpolate_all_samples(unsigned char const *, union real_point3d *);
// public: static bool t_packed_animation_stream_header<union real_point3d, struct s_packed_translation, struct s_packed_translation_range, 3, 84>::byte_swap(unsigned char *, bool);
// public: void s_packed_translation_range::byte_swap(void);
// public: void s_packed_translation::byte_swap(void);
// public: static bool t_packed_animation_stream_header<float, struct s_packed_scale, struct s_packed_scale_range, 1, 83>::dump_stream(unsigned char const *, struct _iobuf *);
// public: void s_packed_scale_range::print(struct _iobuf *) const;
// public: static long t_packed_animation_stream_header<float, struct s_packed_scale, struct s_packed_scale_range, 1, 83>::pack(class t_hyper_catmull_spline_set<1> const *, struct s_packed_scale_range const *, class s_animation_byte_pool *);
// public: void s_packed_scale::pack(float const *);
// public: static bool t_packed_animation_stream_header<float, struct s_packed_scale, struct s_packed_scale_range, 1, 83>::interpolate_sample(unsigned char const *, long, float *);
// public: void s_packed_scale_range::restore_data(struct t_spline_point<1> *) const;
// public: void s_packed_scale::unpack(float *) const;
// public: static long t_packed_animation_stream_header<float, struct s_packed_scale, struct s_packed_scale_range, 1, 83>::get_frame_count(unsigned char const *);
// public: static bool t_packed_animation_stream_header<float, struct s_packed_scale, struct s_packed_scale_range, 1, 83>::interpolate_all_samples(unsigned char const *, float *);
// public: static bool t_packed_animation_stream_header<float, struct s_packed_scale, struct s_packed_scale_range, 1, 83>::byte_swap(unsigned char *, bool);
// public: void s_packed_scale_range::byte_swap(void);
// public: void s_packed_scale::byte_swap(void);
// public: long array_template<struct s_curve_codec_jerk_record>::append(struct s_curve_codec_jerk_record const &);
// public: array_template<struct t_spline_point<4> >::array_template<struct t_spline_point<4> >(void);
// public: array_template<struct t_spline_point<4> >::~array_template<struct t_spline_point<4> >(void);
// public: void array_template<struct t_spline_point<4> >::resize(long);
// public: struct t_spline_point<4> & array_template<struct t_spline_point<4> >::operator[](long);
// public: array_template<struct t_spline_point<3> >::array_template<struct t_spline_point<3> >(void);
// public: array_template<struct t_spline_point<3> >::~array_template<struct t_spline_point<3> >(void);
// public: void array_template<struct t_spline_point<3> >::resize(long);
// public: struct t_spline_point<3> & array_template<struct t_spline_point<3> >::operator[](long);
// public: array_template<struct t_spline_point<1> >::array_template<struct t_spline_point<1> >(void);
// public: array_template<struct t_spline_point<1> >::~array_template<struct t_spline_point<1> >(void);
// public: void array_template<struct t_spline_point<1> >::resize(long);
// public: struct t_spline_point<1> & array_template<struct t_spline_point<1> >::operator[](long);
// public: t_hyper_catmull_spline_set<4>::t_hyper_catmull_spline_set<4>(void);
// public: long t_hyper_catmull_spline_set<4>::get_key_count(void) const;
// public: bool t_hyper_catmull_spline_set<4>::build_from_samples(long, struct t_spline_point<4> const *, float);
// public: float t_hyper_catmull_spline_set<4>::calculate_fitting_error(long, struct t_spline_point<4> const *) const;
// public: array_template<struct t_spline_tangents<4> >::~array_template<struct t_spline_tangents<4> >(void);
// public: t_hyper_catmull_spline_set<3>::t_hyper_catmull_spline_set<3>(void);
// public: long t_hyper_catmull_spline_set<3>::get_key_count(void) const;
// public: bool t_hyper_catmull_spline_set<3>::build_from_samples(long, struct t_spline_point<3> const *, float);
// public: float t_hyper_catmull_spline_set<3>::calculate_fitting_error(long, struct t_spline_point<3> const *) const;
// public: array_template<struct t_spline_tangents<3> >::~array_template<struct t_spline_tangents<3> >(void);
// public: t_hyper_catmull_spline_set<1>::t_hyper_catmull_spline_set<1>(void);
// public: long t_hyper_catmull_spline_set<1>::get_key_count(void) const;
// public: bool t_hyper_catmull_spline_set<1>::build_from_samples(long, struct t_spline_point<1> const *, float);
// public: float t_hyper_catmull_spline_set<1>::calculate_fitting_error(long, struct t_spline_point<1> const *) const;
// public: array_template<struct t_spline_tangents<1> >::~array_template<struct t_spline_tangents<1> >(void);
// public: array_template<struct real32_quaternion>::array_template<struct real32_quaternion>(void);
// public: array_template<struct real32_quaternion>::~array_template<struct real32_quaternion>(void);
// public: void array_template<struct real32_quaternion>::resize(long);
// public: struct real32_quaternion & array_template<struct real32_quaternion>::operator[](long);
// public: array_template<union real_point3d>::array_template<union real_point3d>(void);
// public: array_template<union real_point3d>::~array_template<union real_point3d>(void);
// public: void array_template<union real_point3d>::resize(long);
// public: union real_point3d & array_template<union real_point3d>::operator[](long);
// public: array_template<float>::array_template<float>(void);
// public: array_template<float>::~array_template<float>(void);
// public: void array_template<float>::resize(long);
// public: float & array_template<float>::operator[](long);
// public: t_packed_animation_stream_header<struct real32_quaternion, struct s_packed_quaternion, struct s_packed_quaternion_range, 4, 82>::t_packed_animation_stream_header<struct real32_quaternion, struct s_packed_quaternion, struct s_packed_quaternion_range, 4, 82>(void);
// public: t_packed_animation_stream_header<union real_point3d, struct s_packed_translation, struct s_packed_translation_range, 3, 84>::t_packed_animation_stream_header<union real_point3d, struct s_packed_translation, struct s_packed_translation_range, 3, 84>(void);
// public: t_packed_animation_stream_header<float, struct s_packed_scale, struct s_packed_scale_range, 1, 83>::t_packed_animation_stream_header<float, struct s_packed_scale, struct s_packed_scale_range, 1, 83>(void);
// public: static long t_spline_tangents<3>::get_packed_size(void);
// public: void t_spline_tangents<3>::pack_to_bytes(unsigned char *) const;
// public: void t_spline_tangents<3>::unpack_from_bytes(unsigned char const *);
// public: float t_hyper_catmull_spline<3>::fit_subset_with_optimization(long, long, struct t_spline_point<3> const *, float);
// public: void t_hyper_catmull_spline<3>::get_lean_indices(struct t_spline_tangents<3> *) const;
// public: void s_catmull_spline::get_lean_indices(char *, char *) const;
// public: void t_hyper_catmull_spline<3>::set_lean_indices(struct t_spline_tangents<3> const *);
// public: void t_hyper_catmull_spline<3>::set_ending_points(struct t_spline_point<3> const *, struct t_spline_point<3> const *);
// public: void t_hyper_catmull_spline<3>::interpolate_by_time(float, struct t_spline_point<3> *) const;
// public: float s_catmull_spline::interpolate_by_time(float) const;
// private: void s_catmull_spline::calculate_coefficients_by_time(float, struct s_catmull_coefficients *) const;
// private: float s_catmull_spline::interpolate_by_coefficients(struct s_catmull_coefficients const *) const;
// public: static long t_spline_tangents<4>::get_packed_size(void);
// public: void t_spline_tangents<4>::pack_to_bytes(unsigned char *) const;
// public: void t_spline_tangents<4>::unpack_from_bytes(unsigned char const *);
// public: float t_hyper_catmull_spline<4>::fit_subset_with_optimization(long, long, struct t_spline_point<4> const *, float);
// public: void t_hyper_catmull_spline<4>::get_lean_indices(struct t_spline_tangents<4> *) const;
// public: void t_hyper_catmull_spline<4>::set_lean_indices(struct t_spline_tangents<4> const *);
// public: void t_hyper_catmull_spline<4>::set_ending_points(struct t_spline_point<4> const *, struct t_spline_point<4> const *);
// public: void t_hyper_catmull_spline<4>::interpolate_by_time(float, struct t_spline_point<4> *) const;
// public: unsigned char const & array_template<unsigned char>::element(long) const;
// public: unsigned char & array_template<unsigned char>::element(long);
// public: long array_template<unsigned char>::append(unsigned char const &);
// public: void array_template<unsigned char>::clear(void);
// public: short const & array_template<short>::element(long) const;
// public: short & array_template<short>::element(long);
// public: long array_template<short>::new_element_index(void);
// public: void array_template<short>::resize_fill(long, long);
// public: struct real_orientation const & array_template<struct real_orientation>::element(long) const;
// public: struct real_orientation & array_template<struct real_orientation>::element(long);
// public: void array_template<struct real_orientation>::resize_fill(long, long);
// public: struct s_curve_codec_stream_compression_info const & array_template<struct s_curve_codec_stream_compression_info>::element(long) const;
// public: struct s_curve_codec_stream_compression_info & array_template<struct s_curve_codec_stream_compression_info>::element(long);
// public: void array_template<struct s_curve_codec_stream_compression_info>::resize_fill(long, long);
// public: long array_template<struct s_curve_codec_jerk_record>::new_element_index(void);
// public: struct t_spline_point<4> & array_template<struct t_spline_point<4> >::element(long);
// public: long array_template<struct t_spline_point<4> >::append(struct t_spline_point<4> const &);
// public: void array_template<struct t_spline_point<4> >::resize_fill(long, long);
// public: void array_template<struct t_spline_point<4> >::clear(void);
// public: struct t_spline_point<3> & array_template<struct t_spline_point<3> >::element(long);
// public: long array_template<struct t_spline_point<3> >::append(struct t_spline_point<3> const &);
// public: void array_template<struct t_spline_point<3> >::resize_fill(long, long);
// public: void array_template<struct t_spline_point<3> >::clear(void);
// public: struct t_spline_point<1> & array_template<struct t_spline_point<1> >::element(long);
// public: long array_template<struct t_spline_point<1> >::append(struct t_spline_point<1> const &);
// public: void array_template<struct t_spline_point<1> >::resize_fill(long, long);
// public: void array_template<struct t_spline_point<1> >::clear(void);
// public: long t_hyper_catmull_spline_set<4>::get_spline_count(void) const;
// public: unsigned char const * t_hyper_catmull_spline_set<4>::get_spline_spans(void) const;
// public: struct t_spline_point<4> const * t_hyper_catmull_spline_set<4>::get_key_points(void) const;
// public: struct t_spline_tangents<4> const * t_hyper_catmull_spline_set<4>::get_spline_tangents(void) const;
// public: bool t_hyper_catmull_spline_set<4>::interpolate_sample(long, struct t_spline_point<4> *) const;
// public: array_template<struct t_spline_tangents<4> >::array_template<struct t_spline_tangents<4> >(void);
// public: long array_template<struct t_spline_tangents<4> >::append(struct t_spline_tangents<4> const &);
// public: void array_template<struct t_spline_tangents<4> >::resize(long);
// public: void array_template<struct t_spline_tangents<4> >::clear(void);
// public: long t_hyper_catmull_spline_set<3>::get_spline_count(void) const;
// public: unsigned char const * t_hyper_catmull_spline_set<3>::get_spline_spans(void) const;
// public: struct t_spline_point<3> const * t_hyper_catmull_spline_set<3>::get_key_points(void) const;
// public: struct t_spline_tangents<3> const * t_hyper_catmull_spline_set<3>::get_spline_tangents(void) const;
// public: bool t_hyper_catmull_spline_set<3>::interpolate_sample(long, struct t_spline_point<3> *) const;
// public: array_template<struct t_spline_tangents<3> >::array_template<struct t_spline_tangents<3> >(void);
// public: long array_template<struct t_spline_tangents<3> >::append(struct t_spline_tangents<3> const &);
// public: void array_template<struct t_spline_tangents<3> >::resize(long);
// public: void array_template<struct t_spline_tangents<3> >::clear(void);
// public: long t_hyper_catmull_spline_set<1>::get_spline_count(void) const;
// public: unsigned char const * t_hyper_catmull_spline_set<1>::get_spline_spans(void) const;
// public: struct t_spline_point<1> const * t_hyper_catmull_spline_set<1>::get_key_points(void) const;
// public: struct t_spline_tangents<1> const * t_hyper_catmull_spline_set<1>::get_spline_tangents(void) const;
// public: bool t_hyper_catmull_spline_set<1>::interpolate_sample(long, struct t_spline_point<1> *) const;
// public: array_template<struct t_spline_tangents<1> >::array_template<struct t_spline_tangents<1> >(void);
// public: long array_template<struct t_spline_tangents<1> >::append(struct t_spline_tangents<1> const &);
// public: void array_template<struct t_spline_tangents<1> >::resize(long);
// public: void array_template<struct t_spline_tangents<1> >::clear(void);
// public: struct real32_quaternion & array_template<struct real32_quaternion>::element(long);
// public: void array_template<struct real32_quaternion>::resize_fill(long, long);
// public: union real_point3d & array_template<union real_point3d>::element(long);
// public: void array_template<union real_point3d>::resize_fill(long, long);
// public: float & array_template<float>::element(long);
// public: void array_template<float>::resize_fill(long, long);
// public: static long t_spline_tangents<1>::get_packed_size(void);
// public: void t_spline_tangents<1>::pack_to_bytes(unsigned char *) const;
// public: void t_spline_tangents<1>::unpack_from_bytes(unsigned char const *);
// public: float t_hyper_catmull_spline<1>::fit_subset_with_optimization(long, long, struct t_spline_point<1> const *, float);
// public: void t_hyper_catmull_spline<1>::get_lean_indices(struct t_spline_tangents<1> *) const;
// public: void t_hyper_catmull_spline<1>::set_lean_indices(struct t_spline_tangents<1> const *);
// public: void t_hyper_catmull_spline<1>::set_ending_points(struct t_spline_point<1> const *, struct t_spline_point<1> const *);
// public: void t_hyper_catmull_spline<1>::interpolate_by_time(float, struct t_spline_point<1> *) const;
// public: long array_template<unsigned char>::new_element_index(void);
// protected: void array_template<short>::signal_out_of_memory(void) const;
// protected: void array_template<struct real_orientation>::signal_out_of_memory(void) const;
// protected: void array_template<struct s_curve_codec_stream_compression_info>::signal_out_of_memory(void) const;
// protected: void array_template<struct s_curve_codec_jerk_record>::signal_out_of_memory(void) const;
// protected: void array_template<struct t_spline_point<4> >::signal_out_of_memory(void) const;
// public: long array_template<struct t_spline_point<4> >::new_element_index(void);
// public: struct t_spline_point<4> const & array_template<struct t_spline_point<4> >::operator[](long) const;
// protected: void array_template<struct t_spline_point<3> >::signal_out_of_memory(void) const;
// public: long array_template<struct t_spline_point<3> >::new_element_index(void);
// public: struct t_spline_point<3> const & array_template<struct t_spline_point<3> >::operator[](long) const;
// protected: void array_template<struct t_spline_point<1> >::signal_out_of_memory(void) const;
// public: long array_template<struct t_spline_point<1> >::new_element_index(void);
// public: struct t_spline_point<1> const & array_template<struct t_spline_point<1> >::operator[](long) const;
// public: long array_template<struct t_spline_tangents<4> >::new_element_index(void);
// public: void array_template<struct t_spline_tangents<4> >::resize_fill(long, long);
// public: struct t_spline_tangents<4> const & array_template<struct t_spline_tangents<4> >::operator[](long) const;
// public: long array_template<struct t_spline_tangents<3> >::new_element_index(void);
// public: void array_template<struct t_spline_tangents<3> >::resize_fill(long, long);
// public: struct t_spline_tangents<3> const & array_template<struct t_spline_tangents<3> >::operator[](long) const;
// public: long array_template<struct t_spline_tangents<1> >::new_element_index(void);
// public: void array_template<struct t_spline_tangents<1> >::resize_fill(long, long);
// public: struct t_spline_tangents<1> const & array_template<struct t_spline_tangents<1> >::operator[](long) const;
// protected: void array_template<struct real32_quaternion>::signal_out_of_memory(void) const;
// protected: void array_template<union real_point3d>::signal_out_of_memory(void) const;
// protected: void array_template<float>::signal_out_of_memory(void) const;
// public: struct t_spline_point<4> const & array_template<struct t_spline_point<4> >::element(long) const;
// public: struct t_spline_point<3> const & array_template<struct t_spline_point<3> >::element(long) const;
// public: struct t_spline_point<1> const & array_template<struct t_spline_point<1> >::element(long) const;
// protected: void array_template<struct t_spline_tangents<4> >::signal_out_of_memory(void) const;
// public: struct t_spline_tangents<4> const & array_template<struct t_spline_tangents<4> >::element(long) const;
// protected: void array_template<struct t_spline_tangents<3> >::signal_out_of_memory(void) const;
// public: struct t_spline_tangents<3> const & array_template<struct t_spline_tangents<3> >::element(long) const;
// protected: void array_template<struct t_spline_tangents<1> >::signal_out_of_memory(void) const;
// public: struct t_spline_tangents<1> const & array_template<struct t_spline_tangents<1> >::element(long) const;
// void byte_swap_type<short>(short *, long);
// void byte_swap_type<float>(float *, long);
// public: void s_animation_byte_pool::write<unsigned long>(long, unsigned long const *, long);
// public: void s_animation_byte_pool::write<struct s_curve_codec_header>(long, struct s_curve_codec_header const *, long);
// void byte_swap_type<struct s_animation_codec_header>(struct s_animation_codec_header *, long);
// public: long s_animation_byte_pool::append<struct s_packed_quaternion>(struct s_packed_quaternion const *, long);
// public: long s_animation_byte_pool::append<unsigned char>(unsigned char const *, long);
// public: void s_animation_byte_pool::write<struct t_packed_animation_stream_header<struct real32_quaternion, struct s_packed_quaternion, struct s_packed_quaternion_range, 4, 82> >(long, struct t_packed_animation_stream_header<struct real32_quaternion, struct s_packed_quaternion, struct s_packed_quaternion_range, 4, 82> const *, long);
// public: long s_animation_byte_pool::append<struct s_packed_translation>(struct s_packed_translation const *, long);
// public: void s_animation_byte_pool::write<struct t_packed_animation_stream_header<union real_point3d, struct s_packed_translation, struct s_packed_translation_range, 3, 84> >(long, struct t_packed_animation_stream_header<union real_point3d, struct s_packed_translation, struct s_packed_translation_range, 3, 84> const *, long);
// public: long s_animation_byte_pool::append<struct s_packed_scale>(struct s_packed_scale const *, long);
// public: void s_animation_byte_pool::write<struct t_packed_animation_stream_header<float, struct s_packed_scale, struct s_packed_scale_range, 1, 83> >(long, struct t_packed_animation_stream_header<float, struct s_packed_scale, struct s_packed_scale_range, 1, 83> const *, long);
// void hyper_catmull_set_lean_indices<3>(unsigned int *, struct t_hyper_catmull_spline<3> &, unsigned int *, struct t_spline_tangents<3> &volatile);
// public: static void s_hyper_catmull_spline_set_lean_indices<3>::func(unsigned int *, struct t_hyper_catmull_spline<3> &, unsigned int *, struct t_spline_tangents<3> &volatile);
// public: void s_catmull_spline::set_lean_indices(float, float);
// void hyper_catmull_set_lean_indices<4>(unsigned int *, struct t_hyper_catmull_spline<4> &, unsigned int *, struct t_spline_tangents<4> &volatile);
// public: static void s_hyper_catmull_spline_set_lean_indices<4>::func(unsigned int *, struct t_hyper_catmull_spline<4> &, unsigned int *, struct t_spline_tangents<4> &volatile);
// void hyper_catmull_set_lean_indices<1>(unsigned int *, struct t_hyper_catmull_spline<1> &, unsigned int *, struct t_spline_tangents<1> &volatile);
// public: static void s_hyper_catmull_spline_set_lean_indices<1>::func(unsigned int *, struct t_hyper_catmull_spline<1> &, unsigned int *, struct t_spline_tangents<1> &volatile);
// public: void s_catmull_spline::set_lean_indices(char, char);

//public: s_model_animation_streams::s_model_animation_streams(void)
//{
//    mangled_ppc("??0s_model_animation_streams@@QAA@XZ");
//};

//public: void s_model_animation_streams::allocate(long, long, short const *)
//{
//    mangled_ppc("?allocate@s_model_animation_streams@@QAAXJJPBF@Z");
//};

//public: float s_model_animation_streams::compare_animation(struct s_model_animation_streams const *, struct array_template<struct s_curve_codec_jerk_record> *) const
//{
//    mangled_ppc("?compare_animation@s_model_animation_streams@@QBAMPBU1@PAU?$array_template@Us_curve_codec_jerk_record@@@@@Z");
//};

//float spline_fitting_preceptual_error(float, float)
//{
//    mangled_ppc("?spline_fitting_preceptual_error@@YAMMM@Z");
//};

//public: struct real_orientation const * s_model_animation_streams::get_node_stream(long) const
//{
//    mangled_ppc("?get_node_stream@s_model_animation_streams@@QBAPBUreal_orientation@@J@Z");
//};

//public: short const s_model_animation_streams::get_node_stream_flag(long) const
//{
//    mangled_ppc("?get_node_stream_flag@s_model_animation_streams@@QBA?BFJ@Z");
//};

//public: long s_model_animation_streams::get_payload_size(void) const
//{
//    mangled_ppc("?get_payload_size@s_model_animation_streams@@QBAJXZ");
//};

//public: s_curve_codec_model_animation_compression_info::s_curve_codec_model_animation_compression_info(void)
//{
//    mangled_ppc("??0s_curve_codec_model_animation_compression_info@@QAA@XZ");
//};

//public: bool s_curve_codec_model_animation_compression_info::allocate_from_model_animation(struct s_model_animation_streams const *)
//{
//    mangled_ppc("?allocate_from_model_animation@s_curve_codec_model_animation_compression_info@@QAA_NPBUs_model_animation_streams@@@Z");
//};

//public: bool s_curve_codec_model_animation_compression_info::clone(struct s_curve_codec_model_animation_compression_info const *)
//{
//    mangled_ppc("?clone@s_curve_codec_model_animation_compression_info@@QAA_NPBU1@@Z");
//};

//public: static bool c_curve_codec::compress_rotated_node(long, struct real_orientation const *, float, class s_animation_byte_pool *, struct s_curve_codec_stream_compression_info *)
//{
//    mangled_ppc("?compress_rotated_node@c_curve_codec@@SA_NJPBUreal_orientation@@MPAVs_animation_byte_pool@@PAUs_curve_codec_stream_compression_info@@@Z");
//};

//public: static bool c_curve_codec::compress_translated_node(long, struct real_orientation const *, float, class s_animation_byte_pool *, struct s_curve_codec_stream_compression_info *)
//{
//    mangled_ppc("?compress_translated_node@c_curve_codec@@SA_NJPBUreal_orientation@@MPAVs_animation_byte_pool@@PAUs_curve_codec_stream_compression_info@@@Z");
//};

//public: static bool c_curve_codec::compress_scaled_node(long, struct real_orientation const *, float, class s_animation_byte_pool *, struct s_curve_codec_stream_compression_info *)
//{
//    mangled_ppc("?compress_scaled_node@c_curve_codec@@SA_NJPBUreal_orientation@@MPAVs_animation_byte_pool@@PAUs_curve_codec_stream_compression_info@@@Z");
//};

//public: static bool c_curve_codec::compress_rotation_array(long, struct array_template<struct t_spline_point<4> > *, float, class s_animation_byte_pool *, struct s_curve_codec_stream_compression_info *)
//{
//    mangled_ppc("?compress_rotation_array@c_curve_codec@@SA_NJPAU?$array_template@U?$t_spline_point@$03@@@@MPAVs_animation_byte_pool@@PAUs_curve_codec_stream_compression_info@@@Z");
//};

//public: s_packed_quaternion_range::s_packed_quaternion_range(void)
//{
//    mangled_ppc("??0s_packed_quaternion_range@@QAA@XZ");
//};

//public: t_hyper_catmull_spline_set<4>::~t_hyper_catmull_spline_set<4>(void)
//{
//    mangled_ppc("??1?$t_hyper_catmull_spline_set@$03@@QAA@XZ");
//};

//public: static bool c_curve_codec::compress_translation_array(long, struct array_template<struct t_spline_point<3> > *, float, class s_animation_byte_pool *, struct s_curve_codec_stream_compression_info *)
//{
//    mangled_ppc("?compress_translation_array@c_curve_codec@@SA_NJPAU?$array_template@U?$t_spline_point@$02@@@@MPAVs_animation_byte_pool@@PAUs_curve_codec_stream_compression_info@@@Z");
//};

//public: s_packed_translation_range::s_packed_translation_range(void)
//{
//    mangled_ppc("??0s_packed_translation_range@@QAA@XZ");
//};

//public: t_hyper_catmull_spline_set<3>::~t_hyper_catmull_spline_set<3>(void)
//{
//    mangled_ppc("??1?$t_hyper_catmull_spline_set@$02@@QAA@XZ");
//};

//public: static bool c_curve_codec::compress_scale_array(long, struct array_template<struct t_spline_point<1> > *, float, class s_animation_byte_pool *, struct s_curve_codec_stream_compression_info *)
//{
//    mangled_ppc("?compress_scale_array@c_curve_codec@@SA_NJPAU?$array_template@U?$t_spline_point@$00@@@@MPAVs_animation_byte_pool@@PAUs_curve_codec_stream_compression_info@@@Z");
//};

//public: s_packed_scale_range::s_packed_scale_range(void)
//{
//    mangled_ppc("??0s_packed_scale_range@@QAA@XZ");
//};

//public: t_hyper_catmull_spline_set<1>::~t_hyper_catmull_spline_set<1>(void)
//{
//    mangled_ppc("??1?$t_hyper_catmull_spline_set@$00@@QAA@XZ");
//};

//private: static long c_curve_codec::compress_animation_with_retarget_internal(long, class c_model_animation_graph const *, class c_model_animation *, struct s_model_animation_streams const *, float, class s_animation_byte_pool *, struct s_curve_codec_model_animation_compression_info *)
//{
//    mangled_ppc("?compress_animation_with_retarget_internal@c_curve_codec@@CAJJPBVc_model_animation_graph@@PAVc_model_animation@@PBUs_model_animation_streams@@MPAVs_animation_byte_pool@@PAUs_curve_codec_model_animation_compression_info@@@Z");
//};

//void fast_quaternion_normalize(struct real32_quaternion *)
//{
//    mangled_ppc("?fast_quaternion_normalize@@YAXPAUreal32_quaternion@@@Z");
//};

//__lvx
//{
//    mangled_ppc("__lvx");
//};

//__stvx
//{
//    mangled_ppc("__stvx");
//};

//public: long s_animation_byte_pool::append_allocation(long)
//{
//    mangled_ppc("?append_allocation@s_animation_byte_pool@@QAAJJ@Z");
//};

//public: long s_animation_byte_pool::add_byte_alignment_pad(void)
//{
//    mangled_ppc("?add_byte_alignment_pad@s_animation_byte_pool@@QAAJXZ");
//};

//private: unsigned char & s_animation_byte_pool::_array(long)
//{
//    mangled_ppc("?_array@s_animation_byte_pool@@AAAAAEJ@Z");
//};

//float calculate_node_error_tolerance(class c_model_animation_graph const *, class c_model_animation const *, long, float)
//{
//    mangled_ppc("?calculate_node_error_tolerance@@YAMPBVc_model_animation_graph@@PBVc_model_animation@@JM@Z");
//};

//long recursivily_calculate_node_depth(class c_model_animation_graph const *, long)
//{
//    mangled_ppc("?recursivily_calculate_node_depth@@YAJPBVc_model_animation_graph@@J@Z");
//};

//long recursivily_calculate_tree_depth(class c_model_animation_graph const *, long)
//{
//    mangled_ppc("?recursivily_calculate_tree_depth@@YAJPBVc_model_animation_graph@@J@Z");
//};

//public: s_curve_codec_model_animation_compression_info::~s_curve_codec_model_animation_compression_info(void)
//{
//    mangled_ppc("??1s_curve_codec_model_animation_compression_info@@QAA@XZ");
//};

//private: static long c_curve_codec::compress_animation_internal(long, class c_model_animation_graph const *, class c_model_animation *, struct s_model_animation_streams const *, float, class s_animation_byte_pool *, struct s_curve_codec_model_animation_compression_info *)
//{
//    mangled_ppc("?compress_animation_internal@c_curve_codec@@CAJJPBVc_model_animation_graph@@PAVc_model_animation@@PBUs_model_animation_streams@@MPAVs_animation_byte_pool@@PAUs_curve_codec_model_animation_compression_info@@@Z");
//};

//float calculate_node_error_tolerance_new(class c_model_animation_graph const *, class c_model_animation const *, long, float)
//{
//    mangled_ppc("?calculate_node_error_tolerance_new@@YAMPBVc_model_animation_graph@@PBVc_model_animation@@JM@Z");
//};

//private: static bool c_curve_codec::decompress_whole_animation_internal(unsigned char const *, long, long, short const *, struct s_model_animation_streams *)
//{
//    mangled_ppc("?decompress_whole_animation_internal@c_curve_codec@@CA_NPBEJJPBFPAUs_model_animation_streams@@@Z");
//};

//public: struct real_orientation * s_model_animation_streams::get_node_stream(long)
//{
//    mangled_ppc("?get_node_stream@s_model_animation_streams@@QAAPAUreal_orientation@@J@Z");
//};

//private: static bool c_curve_codec::dump_animation_internal(unsigned char const *, struct _iobuf *)
//{
//    mangled_ppc("?dump_animation_internal@c_curve_codec@@CA_NPBEPAU_iobuf@@@Z");
//};

//public: static void c_curve_codec::set_compression_quality(enum e_curve_codec_compression_quality)
//{
//    mangled_ppc("?set_compression_quality@c_curve_codec@@SAXW4e_curve_codec_compression_quality@@@Z");
//};

//public: static void c_curve_codec::dump_animation(struct s_animation_codec_header const *, char const *)
//{
//    mangled_ppc("?dump_animation@c_curve_codec@@SAXPBUs_animation_codec_header@@PBD@Z");
//};

//public: static bool c_curve_codec::compress_animation(unsigned char, class c_model_animation_graph const *, class c_model_animation *, void *)
//{
//    mangled_ppc("?compress_animation@c_curve_codec@@SA_NEPBVc_model_animation_graph@@PAVc_model_animation@@PAX@Z");
//};

//public: short & s_model_animation_streams::get_node_stream_flag(long)
//{
//    mangled_ppc("?get_node_stream_flag@s_model_animation_streams@@QAAAAFJ@Z");
//};

//public: s_model_animation_streams::~s_model_animation_streams(void)
//{
//    mangled_ppc("??1s_model_animation_streams@@QAA@XZ");
//};

//public: s_animation_byte_pool::s_animation_byte_pool(void)
//{
//    mangled_ppc("??0s_animation_byte_pool@@QAA@XZ");
//};

//public: s_animation_byte_pool::~s_animation_byte_pool(void)
//{
//    mangled_ppc("??1s_animation_byte_pool@@QAA@XZ");
//};

//public: static void c_curve_codec::fast_decompress_rotation(unsigned int *, struct s_animation_codec_header &volatile, long, long, long, float, float, unsigned int *, struct real_orientation &)
//{
//    mangled_ppc("?fast_decompress_rotation@c_curve_codec@@SAXPIBUs_animation_codec_header@@JJJMMPIAUreal_orientation@@@Z");
//};

//bool is_debug_animation_solving_enabled(void)
//{
//    mangled_ppc("?is_debug_animation_solving_enabled@@YA_NXZ");
//};

//public: static void c_curve_codec::decompress_rotation(unsigned int *, struct s_animation_codec_header &volatile, long, long, long, float, float, unsigned int *, struct real_orientation &)
//{
//    mangled_ppc("?decompress_rotation@c_curve_codec@@SAXPIBUs_animation_codec_header@@JJJMMPIAUreal_orientation@@@Z");
//};

//void fast_short_arc_quaternion_interpolate_and_normalize_v(unsigned int *, struct real32_quaternion &volatile, unsigned int *, float, float, unsigned int *, struct real32_quaternion &)
//{
//    mangled_ppc("?fast_short_arc_quaternion_interpolate_and_normalize_v@@YAXPIBUreal32_quaternion@@0MMPIAU1@@Z");
//};

//public: static void c_curve_codec::fast_decompress_translation(unsigned int *, struct s_animation_codec_header &volatile, long, long, long, float, float, unsigned int *, struct real_orientation &)
//{
//    mangled_ppc("?fast_decompress_translation@c_curve_codec@@SAXPIBUs_animation_codec_header@@JJJMMPIAUreal_orientation@@@Z");
//};

//public: static void c_curve_codec::decompress_translation(unsigned int *, struct s_animation_codec_header &volatile, long, long, long, float, float, unsigned int *, struct real_orientation &)
//{
//    mangled_ppc("?decompress_translation@c_curve_codec@@SAXPIBUs_animation_codec_header@@JJJMMPIAUreal_orientation@@@Z");
//};

//?fast_translation_interpolate@@YAXPIBTreal_point3d@@0MPIAT1@@Z
//{
//    mangled_ppc("?fast_translation_interpolate@@YAXPIBTreal_point3d@@0MPIAT1@@Z");
//};

//public: static void c_curve_codec::fast_decompress_scale(unsigned int *, struct s_animation_codec_header &volatile, long, long, long, float, float, unsigned int *, struct real_orientation &)
//{
//    mangled_ppc("?fast_decompress_scale@c_curve_codec@@SAXPIBUs_animation_codec_header@@JJJMMPIAUreal_orientation@@@Z");
//};

//public: static void c_curve_codec::decompress_scale(unsigned int *, struct s_animation_codec_header &volatile, long, long, long, float, float, unsigned int *, struct real_orientation &)
//{
//    mangled_ppc("?decompress_scale@c_curve_codec@@SAXPIBUs_animation_codec_header@@JJJMMPIAUreal_orientation@@@Z");
//};

//void fast_scale_interpolate(float, float, float, float *)
//{
//    mangled_ppc("?fast_scale_interpolate@@YAXMMMPAM@Z");
//};

//public: static void c_curve_codec::direct_decompress_rotation(unsigned int *, long &volatile, long, float, float, unsigned int *, struct real32_quaternion &)
//{
//    mangled_ppc("?direct_decompress_rotation@c_curve_codec@@SAXPIBEJJMMPIAUreal32_quaternion@@@Z");
//};

//?direct_decompress_translation@c_curve_codec@@SAXPIBEJJMMPIATreal_point3d@@@Z
//{
//    mangled_ppc("?direct_decompress_translation@c_curve_codec@@SAXPIBEJJMMPIATreal_point3d@@@Z");
//};

//public: static void c_curve_codec::direct_decompress_scale(unsigned int *, long &volatile, long, float, float, unsigned int *, float &)
//{
//    mangled_ppc("?direct_decompress_scale@c_curve_codec@@SAXPIBEJJMMPIAM@Z");
//};

//public: static void c_curve_codec::byteswap_animation(struct s_animation_codec_header *, long, bool)
//{
//    mangled_ppc("?byteswap_animation@c_curve_codec@@SAXPAUs_animation_codec_header@@J_N@Z");
//};

//public: unsigned char & array_template<unsigned char>::operator[](long)
//{
//    mangled_ppc("??A?$array_template@E@@QAAAAEJ@Z");
//};

//public: unsigned int array_template<unsigned char>::size(void) const
//{
//    mangled_ppc("?size@?$array_template@E@@QBAIXZ");
//};

//public: array_template<short>::array_template<short>(void)
//{
//    mangled_ppc("??0?$array_template@F@@QAA@XZ");
//};

//public: array_template<short>::~array_template<short>(void)
//{
//    mangled_ppc("??1?$array_template@F@@QAA@XZ");
//};

//public: long array_template<short>::append(short const &)
//{
//    mangled_ppc("?append@?$array_template@F@@QAAJABF@Z");
//};

//public: void array_template<short>::resize(long)
//{
//    mangled_ppc("?resize@?$array_template@F@@QAAXJ@Z");
//};

//public: short & array_template<short>::operator[](long)
//{
//    mangled_ppc("??A?$array_template@F@@QAAAAFJ@Z");
//};

//public: short const & array_template<short>::operator[](long) const
//{
//    mangled_ppc("??A?$array_template@F@@QBAABFJ@Z");
//};

//public: unsigned int array_template<short>::size(void) const
//{
//    mangled_ppc("?size@?$array_template@F@@QBAIXZ");
//};

//public: array_template<struct real_orientation>::array_template<struct real_orientation>(void)
//{
//    mangled_ppc("??0?$array_template@Ureal_orientation@@@@QAA@XZ");
//};

//public: array_template<struct real_orientation>::~array_template<struct real_orientation>(void)
//{
//    mangled_ppc("??1?$array_template@Ureal_orientation@@@@QAA@XZ");
//};

//public: void array_template<struct real_orientation>::resize(long)
//{
//    mangled_ppc("?resize@?$array_template@Ureal_orientation@@@@QAAXJ@Z");
//};

//public: struct real_orientation & array_template<struct real_orientation>::operator[](long)
//{
//    mangled_ppc("??A?$array_template@Ureal_orientation@@@@QAAAAUreal_orientation@@J@Z");
//};

//public: struct real_orientation const & array_template<struct real_orientation>::operator[](long) const
//{
//    mangled_ppc("??A?$array_template@Ureal_orientation@@@@QBAABUreal_orientation@@J@Z");
//};

//public: unsigned int array_template<struct real_orientation>::size(void) const
//{
//    mangled_ppc("?size@?$array_template@Ureal_orientation@@@@QBAIXZ");
//};

//public: array_template<struct s_curve_codec_stream_compression_info>::array_template<struct s_curve_codec_stream_compression_info>(void)
//{
//    mangled_ppc("??0?$array_template@Us_curve_codec_stream_compression_info@@@@QAA@XZ");
//};

//public: array_template<struct s_curve_codec_stream_compression_info>::~array_template<struct s_curve_codec_stream_compression_info>(void)
//{
//    mangled_ppc("??1?$array_template@Us_curve_codec_stream_compression_info@@@@QAA@XZ");
//};

//public: void array_template<struct s_curve_codec_stream_compression_info>::resize(long)
//{
//    mangled_ppc("?resize@?$array_template@Us_curve_codec_stream_compression_info@@@@QAAXJ@Z");
//};

//public: struct s_curve_codec_stream_compression_info & array_template<struct s_curve_codec_stream_compression_info>::operator[](long)
//{
//    mangled_ppc("??A?$array_template@Us_curve_codec_stream_compression_info@@@@QAAAAUs_curve_codec_stream_compression_info@@J@Z");
//};

//public: struct s_curve_codec_stream_compression_info const & array_template<struct s_curve_codec_stream_compression_info>::operator[](long) const
//{
//    mangled_ppc("??A?$array_template@Us_curve_codec_stream_compression_info@@@@QBAABUs_curve_codec_stream_compression_info@@J@Z");
//};

//public: static bool t_packed_animation_stream_header<struct real32_quaternion, struct s_packed_quaternion, struct s_packed_quaternion_range, 4, 82>::dump_stream(unsigned char const *, struct _iobuf *)
//{
//    mangled_ppc("?dump_stream@?$t_packed_animation_stream_header@Ureal32_quaternion@@Us_packed_quaternion@@Us_packed_quaternion_range@@$03$0FC@@@SA_NPBEPAU_iobuf@@@Z");
//};

//public: void s_packed_quaternion_range::print(struct _iobuf *) const
//{
//    mangled_ppc("?print@s_packed_quaternion_range@@QBAXPAU_iobuf@@@Z");
//};

//public: static long t_packed_animation_stream_header<struct real32_quaternion, struct s_packed_quaternion, struct s_packed_quaternion_range, 4, 82>::pack(class t_hyper_catmull_spline_set<4> const *, struct s_packed_quaternion_range const *, class s_animation_byte_pool *)
//{
//    mangled_ppc("?pack@?$t_packed_animation_stream_header@Ureal32_quaternion@@Us_packed_quaternion@@Us_packed_quaternion_range@@$03$0FC@@@SAJPBV?$t_hyper_catmull_spline_set@$03@@PBUs_packed_quaternion_range@@PAVs_animation_byte_pool@@@Z");
//};

//public: void s_packed_quaternion::pack(struct real32_quaternion const *)
//{
//    mangled_ppc("?pack@s_packed_quaternion@@QAAXPBUreal32_quaternion@@@Z");
//};

//long quantize_unit_real(float, long)
//{
//    mangled_ppc("?quantize_unit_real@@YAJMJ@Z");
//};

//public: bool s_animation_byte_pool::is_byte_aligned(void) const
//{
//    mangled_ppc("?is_byte_aligned@s_animation_byte_pool@@QBA_NXZ");
//};

//public: long s_animation_byte_pool::append_pool(class s_animation_byte_pool const *)
//{
//    mangled_ppc("?append_pool@s_animation_byte_pool@@QAAJPBV1@@Z");
//};

//public: unsigned char const & array_template<unsigned char>::operator[](long) const
//{
//    mangled_ppc("??A?$array_template@E@@QBAABEJ@Z");
//};

//public: static bool t_packed_animation_stream_header<struct real32_quaternion, struct s_packed_quaternion, struct s_packed_quaternion_range, 4, 82>::interpolate_sample(unsigned char const *, long, struct real32_quaternion *)
//{
//    mangled_ppc("?interpolate_sample@?$t_packed_animation_stream_header@Ureal32_quaternion@@Us_packed_quaternion@@Us_packed_quaternion_range@@$03$0FC@@@SA_NPBEJPAUreal32_quaternion@@@Z");
//};

//bool find_time_in_spline_set(long, long, unsigned char const *, long *, float *)
//{
//    mangled_ppc("?find_time_in_spline_set@@YA_NJJPBEPAJPAM@Z");
//};

//public: void s_packed_quaternion_range::restore_data(struct t_spline_point<4> *) const
//{
//    mangled_ppc("?restore_data@s_packed_quaternion_range@@QBAXPAU?$t_spline_point@$03@@@Z");
//};

//public: void s_packed_quaternion::unpack(struct real32_quaternion *) const
//{
//    mangled_ppc("?unpack@s_packed_quaternion@@QBAXPAUreal32_quaternion@@@Z");
//};

//public: static long t_packed_animation_stream_header<struct real32_quaternion, struct s_packed_quaternion, struct s_packed_quaternion_range, 4, 82>::get_frame_count(unsigned char const *)
//{
//    mangled_ppc("?get_frame_count@?$t_packed_animation_stream_header@Ureal32_quaternion@@Us_packed_quaternion@@Us_packed_quaternion_range@@$03$0FC@@@SAJPBE@Z");
//};

//public: static bool t_packed_animation_stream_header<struct real32_quaternion, struct s_packed_quaternion, struct s_packed_quaternion_range, 4, 82>::interpolate_all_samples(unsigned char const *, struct real32_quaternion *)
//{
//    mangled_ppc("?interpolate_all_samples@?$t_packed_animation_stream_header@Ureal32_quaternion@@Us_packed_quaternion@@Us_packed_quaternion_range@@$03$0FC@@@SA_NPBEPAUreal32_quaternion@@@Z");
//};

//public: static bool t_packed_animation_stream_header<struct real32_quaternion, struct s_packed_quaternion, struct s_packed_quaternion_range, 4, 82>::byte_swap(unsigned char *, bool)
//{
//    mangled_ppc("?byte_swap@?$t_packed_animation_stream_header@Ureal32_quaternion@@Us_packed_quaternion@@Us_packed_quaternion_range@@$03$0FC@@@SA_NPAE_N@Z");
//};

//public: void s_packed_quaternion_range::byte_swap(void)
//{
//    mangled_ppc("?byte_swap@s_packed_quaternion_range@@QAAXXZ");
//};

//public: void s_packed_quaternion::byte_swap(void)
//{
//    mangled_ppc("?byte_swap@s_packed_quaternion@@QAAXXZ");
//};

//public: static bool t_packed_animation_stream_header<union real_point3d, struct s_packed_translation, struct s_packed_translation_range, 3, 84>::dump_stream(unsigned char const *, struct _iobuf *)
//{
//    mangled_ppc("?dump_stream@?$t_packed_animation_stream_header@Treal_point3d@@Us_packed_translation@@Us_packed_translation_range@@$02$0FE@@@SA_NPBEPAU_iobuf@@@Z");
//};

//public: void s_packed_translation_range::print(struct _iobuf *) const
//{
//    mangled_ppc("?print@s_packed_translation_range@@QBAXPAU_iobuf@@@Z");
//};

//public: static long t_packed_animation_stream_header<union real_point3d, struct s_packed_translation, struct s_packed_translation_range, 3, 84>::pack(class t_hyper_catmull_spline_set<3> const *, struct s_packed_translation_range const *, class s_animation_byte_pool *)
//{
//    mangled_ppc("?pack@?$t_packed_animation_stream_header@Treal_point3d@@Us_packed_translation@@Us_packed_translation_range@@$02$0FE@@@SAJPBV?$t_hyper_catmull_spline_set@$02@@PBUs_packed_translation_range@@PAVs_animation_byte_pool@@@Z");
//};

//public: void s_packed_translation::pack(union real_point3d const *)
//{
//    mangled_ppc("?pack@s_packed_translation@@QAAXPBTreal_point3d@@@Z");
//};

//public: static bool t_packed_animation_stream_header<union real_point3d, struct s_packed_translation, struct s_packed_translation_range, 3, 84>::interpolate_sample(unsigned char const *, long, union real_point3d *)
//{
//    mangled_ppc("?interpolate_sample@?$t_packed_animation_stream_header@Treal_point3d@@Us_packed_translation@@Us_packed_translation_range@@$02$0FE@@@SA_NPBEJPATreal_point3d@@@Z");
//};

//public: void s_packed_translation_range::restore_data(struct t_spline_point<3> *) const
//{
//    mangled_ppc("?restore_data@s_packed_translation_range@@QBAXPAU?$t_spline_point@$02@@@Z");
//};

//public: void s_packed_translation::unpack(union real_point3d *) const
//{
//    mangled_ppc("?unpack@s_packed_translation@@QBAXPATreal_point3d@@@Z");
//};

//public: static long t_packed_animation_stream_header<union real_point3d, struct s_packed_translation, struct s_packed_translation_range, 3, 84>::get_frame_count(unsigned char const *)
//{
//    mangled_ppc("?get_frame_count@?$t_packed_animation_stream_header@Treal_point3d@@Us_packed_translation@@Us_packed_translation_range@@$02$0FE@@@SAJPBE@Z");
//};

//public: static bool t_packed_animation_stream_header<union real_point3d, struct s_packed_translation, struct s_packed_translation_range, 3, 84>::interpolate_all_samples(unsigned char const *, union real_point3d *)
//{
//    mangled_ppc("?interpolate_all_samples@?$t_packed_animation_stream_header@Treal_point3d@@Us_packed_translation@@Us_packed_translation_range@@$02$0FE@@@SA_NPBEPATreal_point3d@@@Z");
//};

//public: static bool t_packed_animation_stream_header<union real_point3d, struct s_packed_translation, struct s_packed_translation_range, 3, 84>::byte_swap(unsigned char *, bool)
//{
//    mangled_ppc("?byte_swap@?$t_packed_animation_stream_header@Treal_point3d@@Us_packed_translation@@Us_packed_translation_range@@$02$0FE@@@SA_NPAE_N@Z");
//};

//public: void s_packed_translation_range::byte_swap(void)
//{
//    mangled_ppc("?byte_swap@s_packed_translation_range@@QAAXXZ");
//};

//public: void s_packed_translation::byte_swap(void)
//{
//    mangled_ppc("?byte_swap@s_packed_translation@@QAAXXZ");
//};

//public: static bool t_packed_animation_stream_header<float, struct s_packed_scale, struct s_packed_scale_range, 1, 83>::dump_stream(unsigned char const *, struct _iobuf *)
//{
//    mangled_ppc("?dump_stream@?$t_packed_animation_stream_header@MUs_packed_scale@@Us_packed_scale_range@@$00$0FD@@@SA_NPBEPAU_iobuf@@@Z");
//};

//public: void s_packed_scale_range::print(struct _iobuf *) const
//{
//    mangled_ppc("?print@s_packed_scale_range@@QBAXPAU_iobuf@@@Z");
//};

//public: static long t_packed_animation_stream_header<float, struct s_packed_scale, struct s_packed_scale_range, 1, 83>::pack(class t_hyper_catmull_spline_set<1> const *, struct s_packed_scale_range const *, class s_animation_byte_pool *)
//{
//    mangled_ppc("?pack@?$t_packed_animation_stream_header@MUs_packed_scale@@Us_packed_scale_range@@$00$0FD@@@SAJPBV?$t_hyper_catmull_spline_set@$00@@PBUs_packed_scale_range@@PAVs_animation_byte_pool@@@Z");
//};

//public: void s_packed_scale::pack(float const *)
//{
//    mangled_ppc("?pack@s_packed_scale@@QAAXPBM@Z");
//};

//public: static bool t_packed_animation_stream_header<float, struct s_packed_scale, struct s_packed_scale_range, 1, 83>::interpolate_sample(unsigned char const *, long, float *)
//{
//    mangled_ppc("?interpolate_sample@?$t_packed_animation_stream_header@MUs_packed_scale@@Us_packed_scale_range@@$00$0FD@@@SA_NPBEJPAM@Z");
//};

//public: void s_packed_scale_range::restore_data(struct t_spline_point<1> *) const
//{
//    mangled_ppc("?restore_data@s_packed_scale_range@@QBAXPAU?$t_spline_point@$00@@@Z");
//};

//public: void s_packed_scale::unpack(float *) const
//{
//    mangled_ppc("?unpack@s_packed_scale@@QBAXPAM@Z");
//};

//public: static long t_packed_animation_stream_header<float, struct s_packed_scale, struct s_packed_scale_range, 1, 83>::get_frame_count(unsigned char const *)
//{
//    mangled_ppc("?get_frame_count@?$t_packed_animation_stream_header@MUs_packed_scale@@Us_packed_scale_range@@$00$0FD@@@SAJPBE@Z");
//};

//public: static bool t_packed_animation_stream_header<float, struct s_packed_scale, struct s_packed_scale_range, 1, 83>::interpolate_all_samples(unsigned char const *, float *)
//{
//    mangled_ppc("?interpolate_all_samples@?$t_packed_animation_stream_header@MUs_packed_scale@@Us_packed_scale_range@@$00$0FD@@@SA_NPBEPAM@Z");
//};

//public: static bool t_packed_animation_stream_header<float, struct s_packed_scale, struct s_packed_scale_range, 1, 83>::byte_swap(unsigned char *, bool)
//{
//    mangled_ppc("?byte_swap@?$t_packed_animation_stream_header@MUs_packed_scale@@Us_packed_scale_range@@$00$0FD@@@SA_NPAE_N@Z");
//};

//public: void s_packed_scale_range::byte_swap(void)
//{
//    mangled_ppc("?byte_swap@s_packed_scale_range@@QAAXXZ");
//};

//public: void s_packed_scale::byte_swap(void)
//{
//    mangled_ppc("?byte_swap@s_packed_scale@@QAAXXZ");
//};

//public: long array_template<struct s_curve_codec_jerk_record>::append(struct s_curve_codec_jerk_record const &)
//{
//    mangled_ppc("?append@?$array_template@Us_curve_codec_jerk_record@@@@QAAJABUs_curve_codec_jerk_record@@@Z");
//};

//public: array_template<struct t_spline_point<4> >::array_template<struct t_spline_point<4> >(void)
//{
//    mangled_ppc("??0?$array_template@U?$t_spline_point@$03@@@@QAA@XZ");
//};

//public: array_template<struct t_spline_point<4> >::~array_template<struct t_spline_point<4> >(void)
//{
//    mangled_ppc("??1?$array_template@U?$t_spline_point@$03@@@@QAA@XZ");
//};

//public: void array_template<struct t_spline_point<4> >::resize(long)
//{
//    mangled_ppc("?resize@?$array_template@U?$t_spline_point@$03@@@@QAAXJ@Z");
//};

//public: struct t_spline_point<4> & array_template<struct t_spline_point<4> >::operator[](long)
//{
//    mangled_ppc("??A?$array_template@U?$t_spline_point@$03@@@@QAAAAU?$t_spline_point@$03@@J@Z");
//};

//public: array_template<struct t_spline_point<3> >::array_template<struct t_spline_point<3> >(void)
//{
//    mangled_ppc("??0?$array_template@U?$t_spline_point@$02@@@@QAA@XZ");
//};

//public: array_template<struct t_spline_point<3> >::~array_template<struct t_spline_point<3> >(void)
//{
//    mangled_ppc("??1?$array_template@U?$t_spline_point@$02@@@@QAA@XZ");
//};

//public: void array_template<struct t_spline_point<3> >::resize(long)
//{
//    mangled_ppc("?resize@?$array_template@U?$t_spline_point@$02@@@@QAAXJ@Z");
//};

//public: struct t_spline_point<3> & array_template<struct t_spline_point<3> >::operator[](long)
//{
//    mangled_ppc("??A?$array_template@U?$t_spline_point@$02@@@@QAAAAU?$t_spline_point@$02@@J@Z");
//};

//public: array_template<struct t_spline_point<1> >::array_template<struct t_spline_point<1> >(void)
//{
//    mangled_ppc("??0?$array_template@U?$t_spline_point@$00@@@@QAA@XZ");
//};

//public: array_template<struct t_spline_point<1> >::~array_template<struct t_spline_point<1> >(void)
//{
//    mangled_ppc("??1?$array_template@U?$t_spline_point@$00@@@@QAA@XZ");
//};

//public: void array_template<struct t_spline_point<1> >::resize(long)
//{
//    mangled_ppc("?resize@?$array_template@U?$t_spline_point@$00@@@@QAAXJ@Z");
//};

//public: struct t_spline_point<1> & array_template<struct t_spline_point<1> >::operator[](long)
//{
//    mangled_ppc("??A?$array_template@U?$t_spline_point@$00@@@@QAAAAU?$t_spline_point@$00@@J@Z");
//};

//public: t_hyper_catmull_spline_set<4>::t_hyper_catmull_spline_set<4>(void)
//{
//    mangled_ppc("??0?$t_hyper_catmull_spline_set@$03@@QAA@XZ");
//};

//public: long t_hyper_catmull_spline_set<4>::get_key_count(void) const
//{
//    mangled_ppc("?get_key_count@?$t_hyper_catmull_spline_set@$03@@QBAJXZ");
//};

//public: bool t_hyper_catmull_spline_set<4>::build_from_samples(long, struct t_spline_point<4> const *, float)
//{
//    mangled_ppc("?build_from_samples@?$t_hyper_catmull_spline_set@$03@@QAA_NJPBU?$t_spline_point@$03@@M@Z");
//};

//public: float t_hyper_catmull_spline_set<4>::calculate_fitting_error(long, struct t_spline_point<4> const *) const
//{
//    mangled_ppc("?calculate_fitting_error@?$t_hyper_catmull_spline_set@$03@@QBAMJPBU?$t_spline_point@$03@@@Z");
//};

//public: array_template<struct t_spline_tangents<4> >::~array_template<struct t_spline_tangents<4> >(void)
//{
//    mangled_ppc("??1?$array_template@U?$t_spline_tangents@$03@@@@QAA@XZ");
//};

//public: t_hyper_catmull_spline_set<3>::t_hyper_catmull_spline_set<3>(void)
//{
//    mangled_ppc("??0?$t_hyper_catmull_spline_set@$02@@QAA@XZ");
//};

//public: long t_hyper_catmull_spline_set<3>::get_key_count(void) const
//{
//    mangled_ppc("?get_key_count@?$t_hyper_catmull_spline_set@$02@@QBAJXZ");
//};

//public: bool t_hyper_catmull_spline_set<3>::build_from_samples(long, struct t_spline_point<3> const *, float)
//{
//    mangled_ppc("?build_from_samples@?$t_hyper_catmull_spline_set@$02@@QAA_NJPBU?$t_spline_point@$02@@M@Z");
//};

//public: float t_hyper_catmull_spline_set<3>::calculate_fitting_error(long, struct t_spline_point<3> const *) const
//{
//    mangled_ppc("?calculate_fitting_error@?$t_hyper_catmull_spline_set@$02@@QBAMJPBU?$t_spline_point@$02@@@Z");
//};

//public: array_template<struct t_spline_tangents<3> >::~array_template<struct t_spline_tangents<3> >(void)
//{
//    mangled_ppc("??1?$array_template@U?$t_spline_tangents@$02@@@@QAA@XZ");
//};

//public: t_hyper_catmull_spline_set<1>::t_hyper_catmull_spline_set<1>(void)
//{
//    mangled_ppc("??0?$t_hyper_catmull_spline_set@$00@@QAA@XZ");
//};

//public: long t_hyper_catmull_spline_set<1>::get_key_count(void) const
//{
//    mangled_ppc("?get_key_count@?$t_hyper_catmull_spline_set@$00@@QBAJXZ");
//};

//public: bool t_hyper_catmull_spline_set<1>::build_from_samples(long, struct t_spline_point<1> const *, float)
//{
//    mangled_ppc("?build_from_samples@?$t_hyper_catmull_spline_set@$00@@QAA_NJPBU?$t_spline_point@$00@@M@Z");
//};

//public: float t_hyper_catmull_spline_set<1>::calculate_fitting_error(long, struct t_spline_point<1> const *) const
//{
//    mangled_ppc("?calculate_fitting_error@?$t_hyper_catmull_spline_set@$00@@QBAMJPBU?$t_spline_point@$00@@@Z");
//};

//public: array_template<struct t_spline_tangents<1> >::~array_template<struct t_spline_tangents<1> >(void)
//{
//    mangled_ppc("??1?$array_template@U?$t_spline_tangents@$00@@@@QAA@XZ");
//};

//public: array_template<struct real32_quaternion>::array_template<struct real32_quaternion>(void)
//{
//    mangled_ppc("??0?$array_template@Ureal32_quaternion@@@@QAA@XZ");
//};

//public: array_template<struct real32_quaternion>::~array_template<struct real32_quaternion>(void)
//{
//    mangled_ppc("??1?$array_template@Ureal32_quaternion@@@@QAA@XZ");
//};

//public: void array_template<struct real32_quaternion>::resize(long)
//{
//    mangled_ppc("?resize@?$array_template@Ureal32_quaternion@@@@QAAXJ@Z");
//};

//public: struct real32_quaternion & array_template<struct real32_quaternion>::operator[](long)
//{
//    mangled_ppc("??A?$array_template@Ureal32_quaternion@@@@QAAAAUreal32_quaternion@@J@Z");
//};

//public: array_template<union real_point3d>::array_template<union real_point3d>(void)
//{
//    mangled_ppc("??0?$array_template@Treal_point3d@@@@QAA@XZ");
//};

//public: array_template<union real_point3d>::~array_template<union real_point3d>(void)
//{
//    mangled_ppc("??1?$array_template@Treal_point3d@@@@QAA@XZ");
//};

//public: void array_template<union real_point3d>::resize(long)
//{
//    mangled_ppc("?resize@?$array_template@Treal_point3d@@@@QAAXJ@Z");
//};

//public: union real_point3d & array_template<union real_point3d>::operator[](long)
//{
//    mangled_ppc("??A?$array_template@Treal_point3d@@@@QAAAATreal_point3d@@J@Z");
//};

//public: array_template<float>::array_template<float>(void)
//{
//    mangled_ppc("??0?$array_template@M@@QAA@XZ");
//};

//public: array_template<float>::~array_template<float>(void)
//{
//    mangled_ppc("??1?$array_template@M@@QAA@XZ");
//};

//public: void array_template<float>::resize(long)
//{
//    mangled_ppc("?resize@?$array_template@M@@QAAXJ@Z");
//};

//public: float & array_template<float>::operator[](long)
//{
//    mangled_ppc("??A?$array_template@M@@QAAAAMJ@Z");
//};

//public: t_packed_animation_stream_header<struct real32_quaternion, struct s_packed_quaternion, struct s_packed_quaternion_range, 4, 82>::t_packed_animation_stream_header<struct real32_quaternion, struct s_packed_quaternion, struct s_packed_quaternion_range, 4, 82>(void)
//{
//    mangled_ppc("??0?$t_packed_animation_stream_header@Ureal32_quaternion@@Us_packed_quaternion@@Us_packed_quaternion_range@@$03$0FC@@@QAA@XZ");
//};

//public: t_packed_animation_stream_header<union real_point3d, struct s_packed_translation, struct s_packed_translation_range, 3, 84>::t_packed_animation_stream_header<union real_point3d, struct s_packed_translation, struct s_packed_translation_range, 3, 84>(void)
//{
//    mangled_ppc("??0?$t_packed_animation_stream_header@Treal_point3d@@Us_packed_translation@@Us_packed_translation_range@@$02$0FE@@@QAA@XZ");
//};

//public: t_packed_animation_stream_header<float, struct s_packed_scale, struct s_packed_scale_range, 1, 83>::t_packed_animation_stream_header<float, struct s_packed_scale, struct s_packed_scale_range, 1, 83>(void)
//{
//    mangled_ppc("??0?$t_packed_animation_stream_header@MUs_packed_scale@@Us_packed_scale_range@@$00$0FD@@@QAA@XZ");
//};

//public: static long t_spline_tangents<3>::get_packed_size(void)
//{
//    mangled_ppc("?get_packed_size@?$t_spline_tangents@$02@@SAJXZ");
//};

//public: void t_spline_tangents<3>::pack_to_bytes(unsigned char *) const
//{
//    mangled_ppc("?pack_to_bytes@?$t_spline_tangents@$02@@QBAXPAE@Z");
//};

//public: void t_spline_tangents<3>::unpack_from_bytes(unsigned char const *)
//{
//    mangled_ppc("?unpack_from_bytes@?$t_spline_tangents@$02@@QAAXPBE@Z");
//};

//public: float t_hyper_catmull_spline<3>::fit_subset_with_optimization(long, long, struct t_spline_point<3> const *, float)
//{
//    mangled_ppc("?fit_subset_with_optimization@?$t_hyper_catmull_spline@$02@@QAAMJJPBU?$t_spline_point@$02@@M@Z");
//};

//public: void t_hyper_catmull_spline<3>::get_lean_indices(struct t_spline_tangents<3> *) const
//{
//    mangled_ppc("?get_lean_indices@?$t_hyper_catmull_spline@$02@@QBAXPAU?$t_spline_tangents@$02@@@Z");
//};

//public: void s_catmull_spline::get_lean_indices(char *, char *) const
//{
//    mangled_ppc("?get_lean_indices@s_catmull_spline@@QBAXPAD0@Z");
//};

//public: void t_hyper_catmull_spline<3>::set_lean_indices(struct t_spline_tangents<3> const *)
//{
//    mangled_ppc("?set_lean_indices@?$t_hyper_catmull_spline@$02@@QAAXPBU?$t_spline_tangents@$02@@@Z");
//};

//public: void t_hyper_catmull_spline<3>::set_ending_points(struct t_spline_point<3> const *, struct t_spline_point<3> const *)
//{
//    mangled_ppc("?set_ending_points@?$t_hyper_catmull_spline@$02@@QAAXPBU?$t_spline_point@$02@@0@Z");
//};

//public: void t_hyper_catmull_spline<3>::interpolate_by_time(float, struct t_spline_point<3> *) const
//{
//    mangled_ppc("?interpolate_by_time@?$t_hyper_catmull_spline@$02@@QBAXMPAU?$t_spline_point@$02@@@Z");
//};

//public: float s_catmull_spline::interpolate_by_time(float) const
//{
//    mangled_ppc("?interpolate_by_time@s_catmull_spline@@QBAMM@Z");
//};

//private: void s_catmull_spline::calculate_coefficients_by_time(float, struct s_catmull_coefficients *) const
//{
//    mangled_ppc("?calculate_coefficients_by_time@s_catmull_spline@@ABAXMPAUs_catmull_coefficients@@@Z");
//};

//private: float s_catmull_spline::interpolate_by_coefficients(struct s_catmull_coefficients const *) const
//{
//    mangled_ppc("?interpolate_by_coefficients@s_catmull_spline@@ABAMPBUs_catmull_coefficients@@@Z");
//};

//public: static long t_spline_tangents<4>::get_packed_size(void)
//{
//    mangled_ppc("?get_packed_size@?$t_spline_tangents@$03@@SAJXZ");
//};

//public: void t_spline_tangents<4>::pack_to_bytes(unsigned char *) const
//{
//    mangled_ppc("?pack_to_bytes@?$t_spline_tangents@$03@@QBAXPAE@Z");
//};

//public: void t_spline_tangents<4>::unpack_from_bytes(unsigned char const *)
//{
//    mangled_ppc("?unpack_from_bytes@?$t_spline_tangents@$03@@QAAXPBE@Z");
//};

//public: float t_hyper_catmull_spline<4>::fit_subset_with_optimization(long, long, struct t_spline_point<4> const *, float)
//{
//    mangled_ppc("?fit_subset_with_optimization@?$t_hyper_catmull_spline@$03@@QAAMJJPBU?$t_spline_point@$03@@M@Z");
//};

//public: void t_hyper_catmull_spline<4>::get_lean_indices(struct t_spline_tangents<4> *) const
//{
//    mangled_ppc("?get_lean_indices@?$t_hyper_catmull_spline@$03@@QBAXPAU?$t_spline_tangents@$03@@@Z");
//};

//public: void t_hyper_catmull_spline<4>::set_lean_indices(struct t_spline_tangents<4> const *)
//{
//    mangled_ppc("?set_lean_indices@?$t_hyper_catmull_spline@$03@@QAAXPBU?$t_spline_tangents@$03@@@Z");
//};

//public: void t_hyper_catmull_spline<4>::set_ending_points(struct t_spline_point<4> const *, struct t_spline_point<4> const *)
//{
//    mangled_ppc("?set_ending_points@?$t_hyper_catmull_spline@$03@@QAAXPBU?$t_spline_point@$03@@0@Z");
//};

//public: void t_hyper_catmull_spline<4>::interpolate_by_time(float, struct t_spline_point<4> *) const
//{
//    mangled_ppc("?interpolate_by_time@?$t_hyper_catmull_spline@$03@@QBAXMPAU?$t_spline_point@$03@@@Z");
//};

//public: unsigned char const & array_template<unsigned char>::element(long) const
//{
//    mangled_ppc("?element@?$array_template@E@@QBAABEJ@Z");
//};

//public: unsigned char & array_template<unsigned char>::element(long)
//{
//    mangled_ppc("?element@?$array_template@E@@QAAAAEJ@Z");
//};

//public: long array_template<unsigned char>::append(unsigned char const &)
//{
//    mangled_ppc("?append@?$array_template@E@@QAAJABE@Z");
//};

//public: void array_template<unsigned char>::clear(void)
//{
//    mangled_ppc("?clear@?$array_template@E@@QAAXXZ");
//};

//public: short const & array_template<short>::element(long) const
//{
//    mangled_ppc("?element@?$array_template@F@@QBAABFJ@Z");
//};

//public: short & array_template<short>::element(long)
//{
//    mangled_ppc("?element@?$array_template@F@@QAAAAFJ@Z");
//};

//public: long array_template<short>::new_element_index(void)
//{
//    mangled_ppc("?new_element_index@?$array_template@F@@QAAJXZ");
//};

//public: void array_template<short>::resize_fill(long, long)
//{
//    mangled_ppc("?resize_fill@?$array_template@F@@QAAXJJ@Z");
//};

//public: struct real_orientation const & array_template<struct real_orientation>::element(long) const
//{
//    mangled_ppc("?element@?$array_template@Ureal_orientation@@@@QBAABUreal_orientation@@J@Z");
//};

//public: struct real_orientation & array_template<struct real_orientation>::element(long)
//{
//    mangled_ppc("?element@?$array_template@Ureal_orientation@@@@QAAAAUreal_orientation@@J@Z");
//};

//public: void array_template<struct real_orientation>::resize_fill(long, long)
//{
//    mangled_ppc("?resize_fill@?$array_template@Ureal_orientation@@@@QAAXJJ@Z");
//};

//public: struct s_curve_codec_stream_compression_info const & array_template<struct s_curve_codec_stream_compression_info>::element(long) const
//{
//    mangled_ppc("?element@?$array_template@Us_curve_codec_stream_compression_info@@@@QBAABUs_curve_codec_stream_compression_info@@J@Z");
//};

//public: struct s_curve_codec_stream_compression_info & array_template<struct s_curve_codec_stream_compression_info>::element(long)
//{
//    mangled_ppc("?element@?$array_template@Us_curve_codec_stream_compression_info@@@@QAAAAUs_curve_codec_stream_compression_info@@J@Z");
//};

//public: void array_template<struct s_curve_codec_stream_compression_info>::resize_fill(long, long)
//{
//    mangled_ppc("?resize_fill@?$array_template@Us_curve_codec_stream_compression_info@@@@QAAXJJ@Z");
//};

//public: long array_template<struct s_curve_codec_jerk_record>::new_element_index(void)
//{
//    mangled_ppc("?new_element_index@?$array_template@Us_curve_codec_jerk_record@@@@QAAJXZ");
//};

//public: struct t_spline_point<4> & array_template<struct t_spline_point<4> >::element(long)
//{
//    mangled_ppc("?element@?$array_template@U?$t_spline_point@$03@@@@QAAAAU?$t_spline_point@$03@@J@Z");
//};

//public: long array_template<struct t_spline_point<4> >::append(struct t_spline_point<4> const &)
//{
//    mangled_ppc("?append@?$array_template@U?$t_spline_point@$03@@@@QAAJABU?$t_spline_point@$03@@@Z");
//};

//public: void array_template<struct t_spline_point<4> >::resize_fill(long, long)
//{
//    mangled_ppc("?resize_fill@?$array_template@U?$t_spline_point@$03@@@@QAAXJJ@Z");
//};

//public: void array_template<struct t_spline_point<4> >::clear(void)
//{
//    mangled_ppc("?clear@?$array_template@U?$t_spline_point@$03@@@@QAAXXZ");
//};

//public: struct t_spline_point<3> & array_template<struct t_spline_point<3> >::element(long)
//{
//    mangled_ppc("?element@?$array_template@U?$t_spline_point@$02@@@@QAAAAU?$t_spline_point@$02@@J@Z");
//};

//public: long array_template<struct t_spline_point<3> >::append(struct t_spline_point<3> const &)
//{
//    mangled_ppc("?append@?$array_template@U?$t_spline_point@$02@@@@QAAJABU?$t_spline_point@$02@@@Z");
//};

//public: void array_template<struct t_spline_point<3> >::resize_fill(long, long)
//{
//    mangled_ppc("?resize_fill@?$array_template@U?$t_spline_point@$02@@@@QAAXJJ@Z");
//};

//public: void array_template<struct t_spline_point<3> >::clear(void)
//{
//    mangled_ppc("?clear@?$array_template@U?$t_spline_point@$02@@@@QAAXXZ");
//};

//public: struct t_spline_point<1> & array_template<struct t_spline_point<1> >::element(long)
//{
//    mangled_ppc("?element@?$array_template@U?$t_spline_point@$00@@@@QAAAAU?$t_spline_point@$00@@J@Z");
//};

//public: long array_template<struct t_spline_point<1> >::append(struct t_spline_point<1> const &)
//{
//    mangled_ppc("?append@?$array_template@U?$t_spline_point@$00@@@@QAAJABU?$t_spline_point@$00@@@Z");
//};

//public: void array_template<struct t_spline_point<1> >::resize_fill(long, long)
//{
//    mangled_ppc("?resize_fill@?$array_template@U?$t_spline_point@$00@@@@QAAXJJ@Z");
//};

//public: void array_template<struct t_spline_point<1> >::clear(void)
//{
//    mangled_ppc("?clear@?$array_template@U?$t_spline_point@$00@@@@QAAXXZ");
//};

//public: long t_hyper_catmull_spline_set<4>::get_spline_count(void) const
//{
//    mangled_ppc("?get_spline_count@?$t_hyper_catmull_spline_set@$03@@QBAJXZ");
//};

//public: unsigned char const * t_hyper_catmull_spline_set<4>::get_spline_spans(void) const
//{
//    mangled_ppc("?get_spline_spans@?$t_hyper_catmull_spline_set@$03@@QBAPBEXZ");
//};

//public: struct t_spline_point<4> const * t_hyper_catmull_spline_set<4>::get_key_points(void) const
//{
//    mangled_ppc("?get_key_points@?$t_hyper_catmull_spline_set@$03@@QBAPBU?$t_spline_point@$03@@XZ");
//};

//public: struct t_spline_tangents<4> const * t_hyper_catmull_spline_set<4>::get_spline_tangents(void) const
//{
//    mangled_ppc("?get_spline_tangents@?$t_hyper_catmull_spline_set@$03@@QBAPBU?$t_spline_tangents@$03@@XZ");
//};

//public: bool t_hyper_catmull_spline_set<4>::interpolate_sample(long, struct t_spline_point<4> *) const
//{
//    mangled_ppc("?interpolate_sample@?$t_hyper_catmull_spline_set@$03@@QBA_NJPAU?$t_spline_point@$03@@@Z");
//};

//public: array_template<struct t_spline_tangents<4> >::array_template<struct t_spline_tangents<4> >(void)
//{
//    mangled_ppc("??0?$array_template@U?$t_spline_tangents@$03@@@@QAA@XZ");
//};

//public: long array_template<struct t_spline_tangents<4> >::append(struct t_spline_tangents<4> const &)
//{
//    mangled_ppc("?append@?$array_template@U?$t_spline_tangents@$03@@@@QAAJABU?$t_spline_tangents@$03@@@Z");
//};

//public: void array_template<struct t_spline_tangents<4> >::resize(long)
//{
//    mangled_ppc("?resize@?$array_template@U?$t_spline_tangents@$03@@@@QAAXJ@Z");
//};

//public: void array_template<struct t_spline_tangents<4> >::clear(void)
//{
//    mangled_ppc("?clear@?$array_template@U?$t_spline_tangents@$03@@@@QAAXXZ");
//};

//public: long t_hyper_catmull_spline_set<3>::get_spline_count(void) const
//{
//    mangled_ppc("?get_spline_count@?$t_hyper_catmull_spline_set@$02@@QBAJXZ");
//};

//public: unsigned char const * t_hyper_catmull_spline_set<3>::get_spline_spans(void) const
//{
//    mangled_ppc("?get_spline_spans@?$t_hyper_catmull_spline_set@$02@@QBAPBEXZ");
//};

//public: struct t_spline_point<3> const * t_hyper_catmull_spline_set<3>::get_key_points(void) const
//{
//    mangled_ppc("?get_key_points@?$t_hyper_catmull_spline_set@$02@@QBAPBU?$t_spline_point@$02@@XZ");
//};

//public: struct t_spline_tangents<3> const * t_hyper_catmull_spline_set<3>::get_spline_tangents(void) const
//{
//    mangled_ppc("?get_spline_tangents@?$t_hyper_catmull_spline_set@$02@@QBAPBU?$t_spline_tangents@$02@@XZ");
//};

//public: bool t_hyper_catmull_spline_set<3>::interpolate_sample(long, struct t_spline_point<3> *) const
//{
//    mangled_ppc("?interpolate_sample@?$t_hyper_catmull_spline_set@$02@@QBA_NJPAU?$t_spline_point@$02@@@Z");
//};

//public: array_template<struct t_spline_tangents<3> >::array_template<struct t_spline_tangents<3> >(void)
//{
//    mangled_ppc("??0?$array_template@U?$t_spline_tangents@$02@@@@QAA@XZ");
//};

//public: long array_template<struct t_spline_tangents<3> >::append(struct t_spline_tangents<3> const &)
//{
//    mangled_ppc("?append@?$array_template@U?$t_spline_tangents@$02@@@@QAAJABU?$t_spline_tangents@$02@@@Z");
//};

//public: void array_template<struct t_spline_tangents<3> >::resize(long)
//{
//    mangled_ppc("?resize@?$array_template@U?$t_spline_tangents@$02@@@@QAAXJ@Z");
//};

//public: void array_template<struct t_spline_tangents<3> >::clear(void)
//{
//    mangled_ppc("?clear@?$array_template@U?$t_spline_tangents@$02@@@@QAAXXZ");
//};

//public: long t_hyper_catmull_spline_set<1>::get_spline_count(void) const
//{
//    mangled_ppc("?get_spline_count@?$t_hyper_catmull_spline_set@$00@@QBAJXZ");
//};

//public: unsigned char const * t_hyper_catmull_spline_set<1>::get_spline_spans(void) const
//{
//    mangled_ppc("?get_spline_spans@?$t_hyper_catmull_spline_set@$00@@QBAPBEXZ");
//};

//public: struct t_spline_point<1> const * t_hyper_catmull_spline_set<1>::get_key_points(void) const
//{
//    mangled_ppc("?get_key_points@?$t_hyper_catmull_spline_set@$00@@QBAPBU?$t_spline_point@$00@@XZ");
//};

//public: struct t_spline_tangents<1> const * t_hyper_catmull_spline_set<1>::get_spline_tangents(void) const
//{
//    mangled_ppc("?get_spline_tangents@?$t_hyper_catmull_spline_set@$00@@QBAPBU?$t_spline_tangents@$00@@XZ");
//};

//public: bool t_hyper_catmull_spline_set<1>::interpolate_sample(long, struct t_spline_point<1> *) const
//{
//    mangled_ppc("?interpolate_sample@?$t_hyper_catmull_spline_set@$00@@QBA_NJPAU?$t_spline_point@$00@@@Z");
//};

//public: array_template<struct t_spline_tangents<1> >::array_template<struct t_spline_tangents<1> >(void)
//{
//    mangled_ppc("??0?$array_template@U?$t_spline_tangents@$00@@@@QAA@XZ");
//};

//public: long array_template<struct t_spline_tangents<1> >::append(struct t_spline_tangents<1> const &)
//{
//    mangled_ppc("?append@?$array_template@U?$t_spline_tangents@$00@@@@QAAJABU?$t_spline_tangents@$00@@@Z");
//};

//public: void array_template<struct t_spline_tangents<1> >::resize(long)
//{
//    mangled_ppc("?resize@?$array_template@U?$t_spline_tangents@$00@@@@QAAXJ@Z");
//};

//public: void array_template<struct t_spline_tangents<1> >::clear(void)
//{
//    mangled_ppc("?clear@?$array_template@U?$t_spline_tangents@$00@@@@QAAXXZ");
//};

//public: struct real32_quaternion & array_template<struct real32_quaternion>::element(long)
//{
//    mangled_ppc("?element@?$array_template@Ureal32_quaternion@@@@QAAAAUreal32_quaternion@@J@Z");
//};

//public: void array_template<struct real32_quaternion>::resize_fill(long, long)
//{
//    mangled_ppc("?resize_fill@?$array_template@Ureal32_quaternion@@@@QAAXJJ@Z");
//};

//public: union real_point3d & array_template<union real_point3d>::element(long)
//{
//    mangled_ppc("?element@?$array_template@Treal_point3d@@@@QAAAATreal_point3d@@J@Z");
//};

//public: void array_template<union real_point3d>::resize_fill(long, long)
//{
//    mangled_ppc("?resize_fill@?$array_template@Treal_point3d@@@@QAAXJJ@Z");
//};

//public: float & array_template<float>::element(long)
//{
//    mangled_ppc("?element@?$array_template@M@@QAAAAMJ@Z");
//};

//public: void array_template<float>::resize_fill(long, long)
//{
//    mangled_ppc("?resize_fill@?$array_template@M@@QAAXJJ@Z");
//};

//public: static long t_spline_tangents<1>::get_packed_size(void)
//{
//    mangled_ppc("?get_packed_size@?$t_spline_tangents@$00@@SAJXZ");
//};

//public: void t_spline_tangents<1>::pack_to_bytes(unsigned char *) const
//{
//    mangled_ppc("?pack_to_bytes@?$t_spline_tangents@$00@@QBAXPAE@Z");
//};

//public: void t_spline_tangents<1>::unpack_from_bytes(unsigned char const *)
//{
//    mangled_ppc("?unpack_from_bytes@?$t_spline_tangents@$00@@QAAXPBE@Z");
//};

//public: float t_hyper_catmull_spline<1>::fit_subset_with_optimization(long, long, struct t_spline_point<1> const *, float)
//{
//    mangled_ppc("?fit_subset_with_optimization@?$t_hyper_catmull_spline@$00@@QAAMJJPBU?$t_spline_point@$00@@M@Z");
//};

//public: void t_hyper_catmull_spline<1>::get_lean_indices(struct t_spline_tangents<1> *) const
//{
//    mangled_ppc("?get_lean_indices@?$t_hyper_catmull_spline@$00@@QBAXPAU?$t_spline_tangents@$00@@@Z");
//};

//public: void t_hyper_catmull_spline<1>::set_lean_indices(struct t_spline_tangents<1> const *)
//{
//    mangled_ppc("?set_lean_indices@?$t_hyper_catmull_spline@$00@@QAAXPBU?$t_spline_tangents@$00@@@Z");
//};

//public: void t_hyper_catmull_spline<1>::set_ending_points(struct t_spline_point<1> const *, struct t_spline_point<1> const *)
//{
//    mangled_ppc("?set_ending_points@?$t_hyper_catmull_spline@$00@@QAAXPBU?$t_spline_point@$00@@0@Z");
//};

//public: void t_hyper_catmull_spline<1>::interpolate_by_time(float, struct t_spline_point<1> *) const
//{
//    mangled_ppc("?interpolate_by_time@?$t_hyper_catmull_spline@$00@@QBAXMPAU?$t_spline_point@$00@@@Z");
//};

//public: long array_template<unsigned char>::new_element_index(void)
//{
//    mangled_ppc("?new_element_index@?$array_template@E@@QAAJXZ");
//};

//protected: void array_template<short>::signal_out_of_memory(void) const
//{
//    mangled_ppc("?signal_out_of_memory@?$array_template@F@@IBAXXZ");
//};

//protected: void array_template<struct real_orientation>::signal_out_of_memory(void) const
//{
//    mangled_ppc("?signal_out_of_memory@?$array_template@Ureal_orientation@@@@IBAXXZ");
//};

//protected: void array_template<struct s_curve_codec_stream_compression_info>::signal_out_of_memory(void) const
//{
//    mangled_ppc("?signal_out_of_memory@?$array_template@Us_curve_codec_stream_compression_info@@@@IBAXXZ");
//};

//protected: void array_template<struct s_curve_codec_jerk_record>::signal_out_of_memory(void) const
//{
//    mangled_ppc("?signal_out_of_memory@?$array_template@Us_curve_codec_jerk_record@@@@IBAXXZ");
//};

//protected: void array_template<struct t_spline_point<4> >::signal_out_of_memory(void) const
//{
//    mangled_ppc("?signal_out_of_memory@?$array_template@U?$t_spline_point@$03@@@@IBAXXZ");
//};

//public: long array_template<struct t_spline_point<4> >::new_element_index(void)
//{
//    mangled_ppc("?new_element_index@?$array_template@U?$t_spline_point@$03@@@@QAAJXZ");
//};

//public: struct t_spline_point<4> const & array_template<struct t_spline_point<4> >::operator[](long) const
//{
//    mangled_ppc("??A?$array_template@U?$t_spline_point@$03@@@@QBAABU?$t_spline_point@$03@@J@Z");
//};

//protected: void array_template<struct t_spline_point<3> >::signal_out_of_memory(void) const
//{
//    mangled_ppc("?signal_out_of_memory@?$array_template@U?$t_spline_point@$02@@@@IBAXXZ");
//};

//public: long array_template<struct t_spline_point<3> >::new_element_index(void)
//{
//    mangled_ppc("?new_element_index@?$array_template@U?$t_spline_point@$02@@@@QAAJXZ");
//};

//public: struct t_spline_point<3> const & array_template<struct t_spline_point<3> >::operator[](long) const
//{
//    mangled_ppc("??A?$array_template@U?$t_spline_point@$02@@@@QBAABU?$t_spline_point@$02@@J@Z");
//};

//protected: void array_template<struct t_spline_point<1> >::signal_out_of_memory(void) const
//{
//    mangled_ppc("?signal_out_of_memory@?$array_template@U?$t_spline_point@$00@@@@IBAXXZ");
//};

//public: long array_template<struct t_spline_point<1> >::new_element_index(void)
//{
//    mangled_ppc("?new_element_index@?$array_template@U?$t_spline_point@$00@@@@QAAJXZ");
//};

//public: struct t_spline_point<1> const & array_template<struct t_spline_point<1> >::operator[](long) const
//{
//    mangled_ppc("??A?$array_template@U?$t_spline_point@$00@@@@QBAABU?$t_spline_point@$00@@J@Z");
//};

//public: long array_template<struct t_spline_tangents<4> >::new_element_index(void)
//{
//    mangled_ppc("?new_element_index@?$array_template@U?$t_spline_tangents@$03@@@@QAAJXZ");
//};

//public: void array_template<struct t_spline_tangents<4> >::resize_fill(long, long)
//{
//    mangled_ppc("?resize_fill@?$array_template@U?$t_spline_tangents@$03@@@@QAAXJJ@Z");
//};

//public: struct t_spline_tangents<4> const & array_template<struct t_spline_tangents<4> >::operator[](long) const
//{
//    mangled_ppc("??A?$array_template@U?$t_spline_tangents@$03@@@@QBAABU?$t_spline_tangents@$03@@J@Z");
//};

//public: long array_template<struct t_spline_tangents<3> >::new_element_index(void)
//{
//    mangled_ppc("?new_element_index@?$array_template@U?$t_spline_tangents@$02@@@@QAAJXZ");
//};

//public: void array_template<struct t_spline_tangents<3> >::resize_fill(long, long)
//{
//    mangled_ppc("?resize_fill@?$array_template@U?$t_spline_tangents@$02@@@@QAAXJJ@Z");
//};

//public: struct t_spline_tangents<3> const & array_template<struct t_spline_tangents<3> >::operator[](long) const
//{
//    mangled_ppc("??A?$array_template@U?$t_spline_tangents@$02@@@@QBAABU?$t_spline_tangents@$02@@J@Z");
//};

//public: long array_template<struct t_spline_tangents<1> >::new_element_index(void)
//{
//    mangled_ppc("?new_element_index@?$array_template@U?$t_spline_tangents@$00@@@@QAAJXZ");
//};

//public: void array_template<struct t_spline_tangents<1> >::resize_fill(long, long)
//{
//    mangled_ppc("?resize_fill@?$array_template@U?$t_spline_tangents@$00@@@@QAAXJJ@Z");
//};

//public: struct t_spline_tangents<1> const & array_template<struct t_spline_tangents<1> >::operator[](long) const
//{
//    mangled_ppc("??A?$array_template@U?$t_spline_tangents@$00@@@@QBAABU?$t_spline_tangents@$00@@J@Z");
//};

//protected: void array_template<struct real32_quaternion>::signal_out_of_memory(void) const
//{
//    mangled_ppc("?signal_out_of_memory@?$array_template@Ureal32_quaternion@@@@IBAXXZ");
//};

//protected: void array_template<union real_point3d>::signal_out_of_memory(void) const
//{
//    mangled_ppc("?signal_out_of_memory@?$array_template@Treal_point3d@@@@IBAXXZ");
//};

//protected: void array_template<float>::signal_out_of_memory(void) const
//{
//    mangled_ppc("?signal_out_of_memory@?$array_template@M@@IBAXXZ");
//};

//public: struct t_spline_point<4> const & array_template<struct t_spline_point<4> >::element(long) const
//{
//    mangled_ppc("?element@?$array_template@U?$t_spline_point@$03@@@@QBAABU?$t_spline_point@$03@@J@Z");
//};

//public: struct t_spline_point<3> const & array_template<struct t_spline_point<3> >::element(long) const
//{
//    mangled_ppc("?element@?$array_template@U?$t_spline_point@$02@@@@QBAABU?$t_spline_point@$02@@J@Z");
//};

//public: struct t_spline_point<1> const & array_template<struct t_spline_point<1> >::element(long) const
//{
//    mangled_ppc("?element@?$array_template@U?$t_spline_point@$00@@@@QBAABU?$t_spline_point@$00@@J@Z");
//};

//protected: void array_template<struct t_spline_tangents<4> >::signal_out_of_memory(void) const
//{
//    mangled_ppc("?signal_out_of_memory@?$array_template@U?$t_spline_tangents@$03@@@@IBAXXZ");
//};

//public: struct t_spline_tangents<4> const & array_template<struct t_spline_tangents<4> >::element(long) const
//{
//    mangled_ppc("?element@?$array_template@U?$t_spline_tangents@$03@@@@QBAABU?$t_spline_tangents@$03@@J@Z");
//};

//protected: void array_template<struct t_spline_tangents<3> >::signal_out_of_memory(void) const
//{
//    mangled_ppc("?signal_out_of_memory@?$array_template@U?$t_spline_tangents@$02@@@@IBAXXZ");
//};

//public: struct t_spline_tangents<3> const & array_template<struct t_spline_tangents<3> >::element(long) const
//{
//    mangled_ppc("?element@?$array_template@U?$t_spline_tangents@$02@@@@QBAABU?$t_spline_tangents@$02@@J@Z");
//};

//protected: void array_template<struct t_spline_tangents<1> >::signal_out_of_memory(void) const
//{
//    mangled_ppc("?signal_out_of_memory@?$array_template@U?$t_spline_tangents@$00@@@@IBAXXZ");
//};

//public: struct t_spline_tangents<1> const & array_template<struct t_spline_tangents<1> >::element(long) const
//{
//    mangled_ppc("?element@?$array_template@U?$t_spline_tangents@$00@@@@QBAABU?$t_spline_tangents@$00@@J@Z");
//};

//void byte_swap_type<short>(short *, long)
//{
//    mangled_ppc("??$byte_swap_type@F@@YAXPAFJ@Z");
//};

//void byte_swap_type<float>(float *, long)
//{
//    mangled_ppc("??$byte_swap_type@M@@YAXPAMJ@Z");
//};

//public: void s_animation_byte_pool::write<unsigned long>(long, unsigned long const *, long)
//{
//    mangled_ppc("??$write@K@s_animation_byte_pool@@QAAXJPBKJ@Z");
//};

//public: void s_animation_byte_pool::write<struct s_curve_codec_header>(long, struct s_curve_codec_header const *, long)
//{
//    mangled_ppc("??$write@Us_curve_codec_header@@@s_animation_byte_pool@@QAAXJPBUs_curve_codec_header@@J@Z");
//};

//void byte_swap_type<struct s_animation_codec_header>(struct s_animation_codec_header *, long)
//{
//    mangled_ppc("??$byte_swap_type@Us_animation_codec_header@@@@YAXPAUs_animation_codec_header@@J@Z");
//};

//public: long s_animation_byte_pool::append<struct s_packed_quaternion>(struct s_packed_quaternion const *, long)
//{
//    mangled_ppc("??$append@Us_packed_quaternion@@@s_animation_byte_pool@@QAAJPBUs_packed_quaternion@@J@Z");
//};

//public: long s_animation_byte_pool::append<unsigned char>(unsigned char const *, long)
//{
//    mangled_ppc("??$append@E@s_animation_byte_pool@@QAAJPBEJ@Z");
//};

//public: void s_animation_byte_pool::write<struct t_packed_animation_stream_header<struct real32_quaternion, struct s_packed_quaternion, struct s_packed_quaternion_range, 4, 82> >(long, struct t_packed_animation_stream_header<struct real32_quaternion, struct s_packed_quaternion, struct s_packed_quaternion_range, 4, 82> const *, long)
//{
//    mangled_ppc("??$write@U?$t_packed_animation_stream_header@Ureal32_quaternion@@Us_packed_quaternion@@Us_packed_quaternion_range@@$03$0FC@@@@s_animation_byte_pool@@QAAXJPBU?$t_packed_animation_stream_header@Ureal32_quaternion@@Us_packed_quaternion@@Us_packed_quaternion_range@@$03$0FC@@@J@Z");
//};

//public: long s_animation_byte_pool::append<struct s_packed_translation>(struct s_packed_translation const *, long)
//{
//    mangled_ppc("??$append@Us_packed_translation@@@s_animation_byte_pool@@QAAJPBUs_packed_translation@@J@Z");
//};

//public: void s_animation_byte_pool::write<struct t_packed_animation_stream_header<union real_point3d, struct s_packed_translation, struct s_packed_translation_range, 3, 84> >(long, struct t_packed_animation_stream_header<union real_point3d, struct s_packed_translation, struct s_packed_translation_range, 3, 84> const *, long)
//{
//    mangled_ppc("??$write@U?$t_packed_animation_stream_header@Treal_point3d@@Us_packed_translation@@Us_packed_translation_range@@$02$0FE@@@@s_animation_byte_pool@@QAAXJPBU?$t_packed_animation_stream_header@Treal_point3d@@Us_packed_translation@@Us_packed_translation_range@@$02$0FE@@@J@Z");
//};

//public: long s_animation_byte_pool::append<struct s_packed_scale>(struct s_packed_scale const *, long)
//{
//    mangled_ppc("??$append@Us_packed_scale@@@s_animation_byte_pool@@QAAJPBUs_packed_scale@@J@Z");
//};

//public: void s_animation_byte_pool::write<struct t_packed_animation_stream_header<float, struct s_packed_scale, struct s_packed_scale_range, 1, 83> >(long, struct t_packed_animation_stream_header<float, struct s_packed_scale, struct s_packed_scale_range, 1, 83> const *, long)
//{
//    mangled_ppc("??$write@U?$t_packed_animation_stream_header@MUs_packed_scale@@Us_packed_scale_range@@$00$0FD@@@@s_animation_byte_pool@@QAAXJPBU?$t_packed_animation_stream_header@MUs_packed_scale@@Us_packed_scale_range@@$00$0FD@@@J@Z");
//};

//void hyper_catmull_set_lean_indices<3>(unsigned int *, struct t_hyper_catmull_spline<3> &, unsigned int *, struct t_spline_tangents<3> &volatile)
//{
//    mangled_ppc("??$hyper_catmull_set_lean_indices@$02@@YAXPIAU?$t_hyper_catmull_spline@$02@@PIBU?$t_spline_tangents@$02@@@Z");
//};

//public: static void s_hyper_catmull_spline_set_lean_indices<3>::func(unsigned int *, struct t_hyper_catmull_spline<3> &, unsigned int *, struct t_spline_tangents<3> &volatile)
//{
//    mangled_ppc("?func@?$s_hyper_catmull_spline_set_lean_indices@$02@@SAXPIAU?$t_hyper_catmull_spline@$02@@PIBU?$t_spline_tangents@$02@@@Z");
//};

//public: void s_catmull_spline::set_lean_indices(float, float)
//{
//    mangled_ppc("?set_lean_indices@s_catmull_spline@@QAAXMM@Z");
//};

//void hyper_catmull_set_lean_indices<4>(unsigned int *, struct t_hyper_catmull_spline<4> &, unsigned int *, struct t_spline_tangents<4> &volatile)
//{
//    mangled_ppc("??$hyper_catmull_set_lean_indices@$03@@YAXPIAU?$t_hyper_catmull_spline@$03@@PIBU?$t_spline_tangents@$03@@@Z");
//};

//public: static void s_hyper_catmull_spline_set_lean_indices<4>::func(unsigned int *, struct t_hyper_catmull_spline<4> &, unsigned int *, struct t_spline_tangents<4> &volatile)
//{
//    mangled_ppc("?func@?$s_hyper_catmull_spline_set_lean_indices@$03@@SAXPIAU?$t_hyper_catmull_spline@$03@@PIBU?$t_spline_tangents@$03@@@Z");
//};

//void hyper_catmull_set_lean_indices<1>(unsigned int *, struct t_hyper_catmull_spline<1> &, unsigned int *, struct t_spline_tangents<1> &volatile)
//{
//    mangled_ppc("??$hyper_catmull_set_lean_indices@$00@@YAXPIAU?$t_hyper_catmull_spline@$00@@PIBU?$t_spline_tangents@$00@@@Z");
//};

//public: static void s_hyper_catmull_spline_set_lean_indices<1>::func(unsigned int *, struct t_hyper_catmull_spline<1> &, unsigned int *, struct t_spline_tangents<1> &volatile)
//{
//    mangled_ppc("?func@?$s_hyper_catmull_spline_set_lean_indices@$00@@SAXPIAU?$t_hyper_catmull_spline@$00@@PIBU?$t_spline_tangents@$00@@@Z");
//};

//public: void s_catmull_spline::set_lean_indices(char, char)
//{
//    mangled_ppc("?set_lean_indices@s_catmull_spline@@QAAXDD@Z");
//};

