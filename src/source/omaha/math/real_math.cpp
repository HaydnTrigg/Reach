/* ---------- headers */

#include "omaha\math\real_math.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

// short const const (*const global_projection3d_mappings)[2][3]; // "?global_projection3d_mappings@@3QAY112$$CBFA"
// short const const (*const global_projection3d_inverse_mappings)[2][3]; // "?global_projection3d_inverse_mappings@@3QAY112$$CBFA"
// bool g_enable_new_ik_method; // "?g_enable_new_ik_method@@3_NA"
// union real_point2d const *const global_origin2d; // "?global_origin2d@@3PBTreal_point2d@@B"
// union real_point2d const *const global_x_axis2d; // "?global_x_axis2d@@3PBTreal_point2d@@B"
// union real_point2d const *const global_y_axis2d; // "?global_y_axis2d@@3PBTreal_point2d@@B"
// union real_point2d const *const global_negative_x_axis2d; // "?global_negative_x_axis2d@@3PBTreal_point2d@@B"
// union real_point2d const *const global_negative_y_axis2d; // "?global_negative_y_axis2d@@3PBTreal_point2d@@B"
// union vector2d const *const global_zero_vector2d; // "?global_zero_vector2d@@3PBTvector2d@@B"
// union vector2d const *const global_forward2d; // "?global_forward2d@@3PBTvector2d@@B"
// union vector2d const *const global_left2d; // "?global_left2d@@3PBTvector2d@@B"
// union vector2d const *const global_backward2d; // "?global_backward2d@@3PBTvector2d@@B"
// union vector2d const *const global_right2d; // "?global_right2d@@3PBTvector2d@@B"
// union real_point3d const *const global_origin3d; // "?global_origin3d@@3PBTreal_point3d@@B"
// union real_point3d const *const global_x_axis3d; // "?global_x_axis3d@@3PBTreal_point3d@@B"
// union real_point3d const *const global_y_axis3d; // "?global_y_axis3d@@3PBTreal_point3d@@B"
// union real_point3d const *const global_z_axis3d; // "?global_z_axis3d@@3PBTreal_point3d@@B"
// union real_point3d const *const global_negative_x_axis3d; // "?global_negative_x_axis3d@@3PBTreal_point3d@@B"
// union real_point3d const *const global_negative_y_axis3d; // "?global_negative_y_axis3d@@3PBTreal_point3d@@B"
// union real_point3d const *const global_negative_z_axis3d; // "?global_negative_z_axis3d@@3PBTreal_point3d@@B"
// union vector3d const *const global_zero_vector3d; // "?global_zero_vector3d@@3PBTvector3d@@B"
// union vector3d const *const global_forward3d; // "?global_forward3d@@3PBTvector3d@@B"
// union vector3d const *const global_left3d; // "?global_left3d@@3PBTvector3d@@B"
// union vector3d const *const global_up3d; // "?global_up3d@@3PBTvector3d@@B"
// union vector3d const *const global_backward3d; // "?global_backward3d@@3PBTvector3d@@B"
// union vector3d const *const global_right3d; // "?global_right3d@@3PBTvector3d@@B"
// union vector3d const *const global_down3d; // "?global_down3d@@3PBTvector3d@@B"
// union vector4d const *const global_zero_vector4d; // "?global_zero_vector4d@@3PBTvector4d@@B"
// union euler_angles2d const *const global_zero_angles2d; // "?global_zero_angles2d@@3PBTeuler_angles2d@@B"
// union euler_angles3d const *const global_zero_angles3d; // "?global_zero_angles3d@@3PBTeuler_angles3d@@B"
// struct real32_quaternion const *const global_identity_quaternion; // "?global_identity_quaternion@@3PBUreal32_quaternion@@B"
// struct matrix3x3const *const global_identity3x3; // "?global_identity3x3@@3PBUmatrix3x3@@B"
// struct real_matrix4x3const *const global_identity4x3; // "?global_identity4x3@@3PBUreal_matrix4x3@@B"
// struct real_matrix4x3const *const global_negative_identity4x3; // "?global_negative_identity4x3@@3PBUreal_matrix4x3@@B"
// struct real_orientation const *const global_identity_orientation; // "?global_identity_orientation@@3PBUreal_orientation@@B"
// union real_rectangle2d const *const global_null_rectangle2d; // "?global_null_rectangle2d@@3PBTreal_rectangle2d@@B"
// union real_rectangle3d const *const global_null_rectangle3d; // "?global_null_rectangle3d@@3PBTreal_rectangle3d@@B"
// union real_rectangle2d const *const global_zero_rectangle2d; // "?global_zero_rectangle2d@@3PBTreal_rectangle2d@@B"
// union real_rectangle3d const *const global_zero_rectangle3d; // "?global_zero_rectangle3d@@3PBTreal_rectangle3d@@B"
// float max_vmx_error; // "?max_vmx_error@@3MA"

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// void real_math_initialize(void);
// void real_math_dispose(void);
// void real_math_enable_floating_point_exceptions(bool);
// void real_math_reset_precision(void);
// void real_math_test_quantize_real_from_config(struct s_quantize_real_test_config const *);
// void real_math_test_quantize_real(void);
// void real_math_test(void);
// float round_to_epsilon(float, long);
// float signed_angle_between_vectors2d(union vector2d const *, union vector2d const *);
// float angle_between_vectors2d(union vector2d const *, union vector2d const *);
// float angle_between_vectors3d(union vector3d const *, union vector3d const *);
// float angle_between_normalized_vectors3d(union vector3d const *, union vector3d const *);
// float angle_between_normals3d(union vector3d const *, union vector3d const *);
// double angle_between_normals3d(union real64_vector3d const *, union real64_vector3d const *);
// float signed_angle_between_normals3d(union vector3d const *, union vector3d const *, union vector3d const *);
// double signed_angle_between_normals3d(union real64_vector3d const *, union real64_vector3d const *, union real64_vector3d const *);
// union vector2d * perpendicular2d(union vector2d const *, union vector2d *);
// union vector3d * perpendicular3d(union vector3d const *, union vector3d *);
// union vector4d * perpendicular4d(union vector4d const *, union vector4d *);
// void yaw_vectors(union vector3d *, union vector3d const *, float, float);
// void pitch_vectors(union vector3d *, union vector3d *, float, float);
// union vector3d * vector_from_yaw_and_pitch(float, float, union vector3d *);
// union vector3d * rotate_vector_about_axis(union vector3d *, union vector3d const *, float, float);
// union vector3d * generate_up_vector3d(union vector3d const *, union vector3d *);
// void real_vector3d_build_axes_from_forward(union vector3d const *, union vector3d *, union vector3d *);
// void real_vector3d_build_axes_from_vectors(union vector3d const *, union vector3d const *, union vector3d *, union vector3d *, union vector3d *);
// void real_vector3d_build_axes_from_vectors_using_up(union vector3d const *, union vector3d const *, union vector3d *, union vector3d *, union vector3d *);
// void real_vector3d_build_axes_from_forward_and_left(union vector3d const *, union vector3d const *, union vector3d *, union vector3d *, union vector3d *);
// void approximate_normals_interpolate(union vector3d const *, union vector3d const *, float, union vector3d *);
// void fast_normals_interpolate(union vector3d const *, union vector3d const *, float, union vector3d *);
// void normals_interpolate(union vector3d const *, union vector3d const *, float, union vector3d *);
// void vectors_interpolate(union vector3d const *, union vector3d const *, float, union vector3d *);
// void points_interpolate(union real_point3d const *, union real_point3d const *, float, union real_point3d *);
// void scalars_interpolate(float, float, float, float *);
// void scalars_interpolate_and_clamp_0_to_1(float, float, float, float *);
// bool pin_normal_to_cone3d(union vector3d const *, union vector3d const *, float, float, union vector3d *);
// union vector3d * reflect_vector3d(union vector3d const *, union vector3d const *, union vector3d *);
// union vector3d * refract_vector3d(union vector3d const *, union vector3d const *, float, union vector3d *);
// void component_vectors_from_normal3d(union vector3d const *, union vector3d const *, union vector3d *, union vector3d *);
// void component_vectors_from_plane3d(union vector3d const *, struct plane3d const *, union vector3d *, union vector3d *);
// void component_vectors_from_direction3d(union vector3d const *, union vector3d const *, union vector3d *, union vector3d *);
// float quaternions_dot(struct real32_quaternion const *, struct real32_quaternion const *);
// void quaternion_inverse(struct real32_quaternion *);
// void quaternion_raise_to_power(struct real32_quaternion const *, float, struct real32_quaternion *);
// void quaternion_fix_to_use_shortest_path(struct real32_quaternion *);
// void quaternion_normalize(struct real32_quaternion *);
// void approximate_quaternion_normalize(struct real32_quaternion *);
// void quaternion_from_angle_and_vector(struct real32_quaternion *, float, union vector3d const *);
// void quaternion_from_unit_vectors(struct real32_quaternion *, union vector3d const *, union vector3d const *);
// void quaternion_to_angle_and_vector(struct real32_quaternion const *, float *, union vector3d *);
// void quaternions_multiply(struct real32_quaternion const *, struct real32_quaternion const *, struct real32_quaternion *);
// void quaternions_interpolate(struct real32_quaternion const *, struct real32_quaternion const *, float, struct real32_quaternion *);
// void quaternions_interpolate_long(struct real32_quaternion const *, struct real32_quaternion const *, float, struct real32_quaternion *);
// void quaternions_interpolate_and_normalize(struct real32_quaternion const *, struct real32_quaternion const *, float, struct real32_quaternion *);
// void quaternions_interpolate_long_and_normalize(struct real32_quaternion const *, struct real32_quaternion const *, float, struct real32_quaternion *);
// void approximate_quaternions_interpolate_and_normalize(struct real32_quaternion const *, struct real32_quaternion const *, float, struct real32_quaternion *);
// void quaternions_slerp_interpolate(struct real32_quaternion const *, struct real32_quaternion const *, float, struct real32_quaternion *);
// void quaternions_slerp_interpolate_and_normalize(struct real32_quaternion const *, struct real32_quaternion const *, float, struct real32_quaternion *);
// void quaternion_transform_point(struct real32_quaternion const *, union real_point3d const *, union real_point3d *);
// float compute_angle_between_quaternions(struct real32_quaternion const *, struct real32_quaternion const *);
// void orientations_interpolate(struct real_orientation const *, struct real_orientation const *, float, struct real_orientation *);
// void approximate_orientations_interpolate(struct real_orientation const *, struct real_orientation const *, float, struct real_orientation *);
// void orientations_multiply(struct real_orientation const *, struct real_orientation const *, struct real_orientation *);
// void orientation_identity(struct real_orientation *);
// void orientation_inverse(struct real_orientation const *, struct real_orientation *);
// union euler_angles2d * euler_angles2d_from_vector3d(union euler_angles2d *, union vector3d const *);
// union euler_angles3d * euler_angles3d_from_vectors3d(union euler_angles3d *, union vector3d const *, union vector3d const *);
// void vectors3d_from_euler_angles3d(union vector3d *, union vector3d *, union euler_angles3d const *);
// void vectors3d_from_euler_angles2d(union vector3d *, union vector3d *, union euler_angles2d const *);
// union vector3d * vector3d_from_euler_angles2d(union vector3d *, union euler_angles2d const *);
// union vector3d * vector3d_from_angle(union vector3d *, float);
// bool point_in_pill2d(union real_point2d const *, union real_point2d const *, union vector2d const *, float);
// float point_to_line_distance_squared2d(union real_point2d const *, union real_point2d const *, union vector2d const *);
// float point_to_line_distance_squared3d(union real_point3d const *, union real_point3d const *, union vector3d const *, float *);
// void closest_point_on_line2d(union real_point2d const *, union real_point2d const *, union vector2d const *, union real_point2d *, float *);
// void closest_point_on_line3d(union real_point3d const *, union real_point3d const *, union vector3d const *, union real_point3d *, float *);
// float vector_to_line_distance_squared3d(union real_point3d const *, union vector3d const *, union real_point3d const *, union vector3d const *, float *, float *);
// float point_to_triangle_distance3d(union real_point3d const *, union real_point3d const *, union real_point3d *);
// bool sphere_test_vector3d(union real_point3d const *, float, union real_point3d const *, union vector3d const *, float *, union vector3d *);
// bool pill_aligned_test_vector3d(union real_point3d const *, float, float, union real_point3d const *, union vector3d const *, float *, union vector3d *);
// bool pill_test_vector3d(union real_point3d const *, union vector3d const *, float, union real_point3d const *, union vector3d const *, float *);
// bool fast_vector_intersects_sphere(union real_point3d const *, union vector3d const *, union real_point3d const *, float);
// float fast_vector_intersection_with_sphere(union real_point3d const *, union vector3d const *, union real_point3d const *, float);
// bool point_in_triangle2d(union real_point2d const *, union real_point2d const *, union real_point2d const *, union real_point2d const *, float *, float *);
// bool point_in_triangle2d(union real_point2d const *, union real_point2d const *, union real_point2d const *, union real_point2d const *, float, float *, float *);
// bool fast_point_in_triangle2d(union real_point2d const *, union real_point2d const *, union real_point2d const *, union real_point2d const *, float *, float *);
// bool point_in_triangle3d(union real_point3d const *, union real_point3d const *, union real_point3d const *, union real_point3d const *, float *, float *);
// void point_in_triangle3d(union real_point3d const *, union real_point3d const *, union real_point3d const *, union real_point3d const *, float *, float *, float *);
// bool point_in_cone2d(union real_point2d const *, union real_point2d const *, union vector2d const *, float, float);
// bool point_in_cone3d(union real_point3d const *, union real_point3d const *, union vector3d const *, float, float);
// bool point_in_sector2d(union real_point2d const *, union real_point2d const *, union vector2d const *, float, float);
// bool point_in_sector3d(union real_point3d const *, union real_point3d const *, union vector3d const *, float, float);
// void barycentric_coordinates2d(union real_point2d const *, union real_point2d const *, union real_point2d const *, union real_point2d const *, float *, float *, float *);
// void barycentric_coordinates3d(union real_point3d const *, union real_point3d const *, union real_point3d const *, union real_point3d const *, float *, float *, float *);
// void tetrahedral_barycentric_coordinates3d(union real_point3d const *, union real_point3d const *, union real_point3d const *, union real_point3d const *, union real_point3d const *, float *, float *, float *, float *);
// bool vector_intersects_pill2d(union real_point2d const *, union vector2d const *, union real_point2d const *, union vector2d const *, float);
// bool vector_intersects_pill3d(union real_point3d const *, union vector3d const *, union real_point3d const *, union vector3d const *, float);
// bool vector_intersects_rectangle2d(union real_point2d const *, union vector2d const *, union real_rectangle2d const *);
// float vector_intersects_rectangle3d(union real_point3d const *, union vector3d const *, union real_rectangle3d const *);
// bool vector_intersects_rectangle3d(union real_point3d const *, union vector3d const *, union real_rectangle3d const *, float *);
// bool vector_intersects_triangle2d(union real_point2d const *, union vector2d const *, union real_point2d const *, union real_point2d const *, union real_point2d const *, float *, float *);
// bool vector_intersects_triangle3d(union real_point3d const *, union vector3d const *, union real_point3d const *, union real_point3d const *, union real_point3d const *, float *, float *, float *);
// bool plane_intersects_rectangle3d(struct plane3d const *, union real_rectangle3d const *);
// bool line_segment_intersection2d(union real_point2d const *, union real_point2d const *, union real_point2d const *, union real_point2d const *, float *, float *);
// bool ray_intersection2d(union real_point2d const *, union vector2d const *, union real_point2d const *, union vector2d const *, float *, float *);
// float circle_from_points2d(union real_point2d const *, union real_point2d const *, union real_point2d const *, union real_point2d *);
// bool circle_intersects_rectangle2d(union real_point2d const *, float, union real_rectangle2d const *);
// bool sphere_intersects_rectangle3d(union real_point3d const *, float, union real_rectangle3d const *);
// bool circle_intersects_triangle2d(union real_point2d const *, float, union real_point2d const *, union real_point2d const *, union real_point2d const *);
// bool sphere_intersects_triangle3d(union real_point3d const *, float, union real_point3d const *, union real_point3d const *, union real_point3d const *);
// bool circle_intersects_cone2d(union real_point2d const *, float, union real_point2d const *, union vector2d const *, float, float, float);
// bool sphere_intersects_cone3d(union real_point3d const *, float, union real_point3d const *, union vector3d const *, float, float, float);
// bool circle_intersects_sector2d(union real_point2d const *, float, union real_point2d const *, union vector2d const *, float, float, float);
// bool sphere_intersects_sector3d(union real_point3d const *, float, union real_point3d const *, union vector3d const *, float, float, float);
// bool pill_intersects_rectangle2d(union real_point2d const *, union vector2d const *, float, union real_rectangle2d const *);
// bool pill_intersects_rectangle3d(union real_point3d const *, union vector3d const *, float, union real_rectangle3d const *);
// bool pill_intersects_triangle2d(union real_point2d const *, union vector2d const *, float, union real_point2d const *, union real_point2d const *, union real_point2d const *);
// bool pill_intersects_triangle3d(union real_point3d const *, union vector3d const *, float, union real_point3d const *, union real_point3d const *, union real_point3d const *);
// bool point_from_lines2d(union real_point2d const *, union vector2d const *, union real_point2d const *, union vector2d const *, float *, float *);
// bool point_from_planes3d(struct plane3d const *, struct plane3d const *, struct plane3d const *, union real_point3d *);
// bool line_from_planes3d(struct plane3d const *, struct plane3d const *, union real_point3d *, union vector3d *);
// void accelerate_to_velocity(float *, float *, float, float, float, float, float, bool);
// bool accelerate_to_position(float *, float *, float, float, float, float, float, float, bool);
// void angular_accelerate_to_position(union vector3d *, union vector3d const *, float, union vector3d *, float, float, bool);
// bool accelerate_to_velocity3d(union vector3d *, union vector3d const *, float);
// bool accelerate_to_position3d(union real_point3d *, union vector3d *, union real_point3d const *, float, float);
// void update_spring_system(float *, float *, float, float, float, float);
// float spring_system_calculate_acceleration(float, float, float, float, float);
// float calculate_new_position(float, float, float, float);
// float calculate_new_velocity(float, float, float);
// void update_limited_spring_system(float *, float *, float, float, float, float, float, float);
// void update_spring_system3d(union vector3d *, union vector3d *, union vector3d const *, float, float, float);
// void quantize_real_logarithmic_get_best_and_worst_case_errors(float, float, long, float *, float *);
// unsigned char quantize_real_to_byte_lower_bound(float, float, float);
// unsigned char quantize_real_to_byte_upper_bound(float, float, float);
// union byte_rectangle3d * quantize_real_to_byte_rectangle3d(union real_rectangle3d const *, union real_rectangle3d const *, union byte_rectangle3d *);
// bool compare_quantized_reals(float, float, float, float, long, bool, bool, bool);
// bool compare_logarithmic_quantized_reals(float, float, float, float, long);
// float triangle2d_area_signed(union real_point2d const *, union real_point2d const *, union real_point2d const *);
// float tetrahedron3d_volume_signed(union real_point3d const *, union real_point3d const *, union real_point3d const *, union real_point3d const *);
// bool real_rectangle2d_compute_intersection(union real_rectangle2d const *, union real_rectangle2d const *, union real_rectangle2d *);
// bool real_rectangle3d_compute_intersection(union real_rectangle3d const *, union real_rectangle3d const *, union real_rectangle3d *);
// float real_rectangle2d_area(union real_rectangle2d const *);
// float real_rectangle3d_volume(union real_rectangle3d const *);
// void real_rectangle2d_clamp_bounds(union real_rectangle2d *, union real_rectangle2d const *);
// union real_rectangle2d * real_rectangle2d_enclose_points(union real_rectangle2d *, long, union real_point2d const *const);
// union real_rectangle3d * real_rectangle3d_enclose_points(union real_rectangle3d *, long, union real_point3d const *const);
// union real_rectangle2d * real_rectangle2d_enclose_rectangle(union real_rectangle2d *, union real_rectangle2d const *);
// union real_rectangle3d * real_rectangle3d_enclose_rectangle(union real_rectangle3d *, union real_rectangle3d const *);
// void rectangle2d_compute_nearest_point(union real_rectangle2d const *, union real_point2d const *, union real_point2d *);
// void rectangle3d_compute_nearest_point(union real_rectangle3d const *, union real_point3d const *, union real_point3d *);
// long rectangle3d_build_vertices(union real_rectangle3d const *, long, union real_point3d *const);
// long rectangle3d_build_edges(union real_rectangle3d const *, long, union real_point3d (*const)[2]);
// long rectangle3d_build_faces(union real_rectangle3d const *, long, union real_point3d (*const)[4]);
// bool valid_polygon2d(long, union real_point2d const *const);
// bool valid_polygon3d(long, union real_point3d const *const);
// long polygon2d_from_bounds(union real_rectangle2d const *, long, union real_point2d *const);
// float polygon2d_perimeter(long, union real_point2d const *const);
// float polygon3d_perimeter(long, union real_point3d const *const);
// float polygon2d_area(long, union real_point2d const *const);
// float polygon3d_area(long, union real_point3d const *const, union vector3d const *);
// void plane2d_distance_to_polygon(struct plane2d const *, long, union real_point2d const *const, float *, float *);
// void plane3d_distance_to_polygon(struct plane3d const *, long, union real_point3d const *const, float *, float *);
// long plane2d_clip_polygon(struct plane2d const *, bool, float, long, union real_point2d const *const, long, union real_point2d *const);
// union real_point2d * intersection_point2d(union real_point2d const *, union real_point2d const *, float, float, union real_point2d *);
// long plane3d_clip_polygon(struct plane3d const *, bool, float, long, union real_point3d const *const, long, union real_point3d *const);
// union real_point3d * intersection_point3d(union real_point3d const *, union real_point3d const *, float, float, union real_point3d *);
// void project_polygon2d(long, union real_point2d const *const, struct plane3d const *, long, bool, union real_point3d *const);
// void project_polygon3d(long, union real_point3d const *const, long, bool, union real_point2d *const);
// bool find_closest_point_on_1plane(union real_point3d const *, struct plane3d const *, float *, union real_point3d *);
// bool find_closest_point_on_2planes(union real_point3d const *, struct plane3d const *, struct plane3d const *, float *, float *, union real_point3d *);
// bool find_closest_point_on_3planes(union real_point3d const *, struct plane3d const *, struct plane3d const *, struct plane3d const *, float *, float *, float *, union real_point3d *, long *);
// float normalize3d_with_default(union vector3d *, union vector3d const *);
// void quaternion_to_euler_angles(struct real32_quaternion const *, union euler_angles3d *);
// void quaternion_to_euler_angles_internal(struct real32_quaternion const *, union euler_angles3d *, float);
// void quaternion_to_euler_angles_unsafe(struct real32_quaternion const *, union euler_angles3d *);
// void quaternion_from_euler_angles_OLD_AND_INCORRECT(struct real32_quaternion *, union euler_angles3d const *);
// void quaternion_from_euler_angles(struct real32_quaternion *, union euler_angles3d const *);
// void matrix4x3_two_bone_ik_adjust_matrices(struct real_matrix4x3*, struct real_matrix4x3*, struct real_matrix4x3*, struct real_matrix4x3*, union real_point3d const *);
// void matrix4x3_two_bone_ik_adjust_matrices_new(struct real_matrix4x3const *, struct real_matrix4x3*, struct real_matrix4x3*, struct real_matrix4x3*, union real_point3d const *);
// void matrix4x3_ik_alignment_matrix(struct real_matrix4x3const *, union vector3d const *, struct real_matrix4x3*);
// void matrix4x3_two_bone_ik_adjust_matrices_old(struct real_matrix4x3*, struct real_matrix4x3*, struct real_matrix4x3*, struct real_matrix4x3*);
// void matrix4x3_three_bone_ik_adjust_matrices(struct real_matrix4x3*, struct real_matrix4x3*, struct real_matrix4x3*, struct real_matrix4x3*, struct real_matrix4x3*, union real_point3d const *);
// float three_bone_ik_effector_distance_squared(float, float, float, float, float, float);
// float three_bone_ik_joint_angle_ratio(float, float, float);
// void real_math_disable_fpu_exceptions(void);
// void real_math_recover_fpu_exceptions(void);
// union vector2d * fast_normalize2d(union vector2d *);
// void perpendicular_bisector2d(union real_point2d const *, union real_point2d const *, union real_point2d *, union vector2d *);
// short projection_from_vector3d(union vector3d const *);
// bool projection_sign_from_vector3d(union vector3d const *, short);
// union real_point2d * project_point3d(union real_point3d const *, short, bool, union real_point2d *);
// union vector2d * project_vector3d(union vector3d const *, short, bool, union vector2d *);
// union vector3d * fast_normalize3d(union vector3d *);
// union real64_vector3d * cross_product3d(union real64_vector3d const *, union real64_vector3d const *, union real64_vector3d *);
// float plane2d_distance_to_point(struct plane2d const *, union real_point2d const *);
// struct plane3d * plane3d_from_points(struct plane3d *, union real_point3d const *, union real_point3d const *, union real_point3d const *);
// bool valid_real_point2d(union real_point2d const *);
// bool valid_real_sine_cosine(float, float);
// bool valid_real_plane2d(struct plane2d const *);
// bool valid_real_quaternion(struct real32_quaternion const *);
// float dequantize_byte_to_real(float, float, unsigned char);
// long quantize_real(float, float, float, long, bool, bool);

//void real_math_initialize(void)
//{
//    mangled_ppc("?real_math_initialize@@YAXXZ");
//};

//void real_math_dispose(void)
//{
//    mangled_ppc("?real_math_dispose@@YAXXZ");
//};

//void real_math_enable_floating_point_exceptions(bool)
//{
//    mangled_ppc("?real_math_enable_floating_point_exceptions@@YAX_N@Z");
//};

//void real_math_reset_precision(void)
//{
//    mangled_ppc("?real_math_reset_precision@@YAXXZ");
//};

//void real_math_test_quantize_real_from_config(struct s_quantize_real_test_config const *)
//{
//    mangled_ppc("?real_math_test_quantize_real_from_config@@YAXPBUs_quantize_real_test_config@@@Z");
//};

//void real_math_test_quantize_real(void)
//{
//    mangled_ppc("?real_math_test_quantize_real@@YAXXZ");
//};

//void real_math_test(void)
//{
//    mangled_ppc("?real_math_test@@YAXXZ");
//};

//float round_to_epsilon(float, long)
//{
//    mangled_ppc("?round_to_epsilon@@YAMMJ@Z");
//};

//float signed_angle_between_vectors2d(union vector2d const *, union vector2d const *)
//{
//    mangled_ppc("?signed_angle_between_vectors2d@@YAMPBTvector2d@@0@Z");
//};

//float angle_between_vectors2d(union vector2d const *, union vector2d const *)
//{
//    mangled_ppc("?angle_between_vectors2d@@YAMPBTvector2d@@0@Z");
//};

//float angle_between_vectors3d(union vector3d const *, union vector3d const *)
//{
//    mangled_ppc("?angle_between_vectors3d@@YAMPBTvector3d@@0@Z");
//};

//float angle_between_normalized_vectors3d(union vector3d const *, union vector3d const *)
//{
//    mangled_ppc("?angle_between_normalized_vectors3d@@YAMPBTvector3d@@0@Z");
//};

//float angle_between_normals3d(union vector3d const *, union vector3d const *)
//{
//    mangled_ppc("?angle_between_normals3d@@YAMPBTvector3d@@0@Z");
//};

//double angle_between_normals3d(union real64_vector3d const *, union real64_vector3d const *)
//{
//    mangled_ppc("?angle_between_normals3d@@YANPBTreal64_vector3d@@0@Z");
//};

//float signed_angle_between_normals3d(union vector3d const *, union vector3d const *, union vector3d const *)
//{
//    mangled_ppc("?signed_angle_between_normals3d@@YAMPBTvector3d@@00@Z");
//};

//double signed_angle_between_normals3d(union real64_vector3d const *, union real64_vector3d const *, union real64_vector3d const *)
//{
//    mangled_ppc("?signed_angle_between_normals3d@@YANPBTreal64_vector3d@@00@Z");
//};

//union vector2d * perpendicular2d(union vector2d const *, union vector2d *)
//{
//    mangled_ppc("?perpendicular2d@@YAPATvector2d@@PBT1@PAT1@@Z");
//};

//union vector3d * perpendicular3d(union vector3d const *, union vector3d *)
//{
//    mangled_ppc("?perpendicular3d@@YAPATvector3d@@PBT1@PAT1@@Z");
//};

//union vector4d * perpendicular4d(union vector4d const *, union vector4d *)
//{
//    mangled_ppc("?perpendicular4d@@YAPATvector4d@@PBT1@PAT1@@Z");
//};

//void yaw_vectors(union vector3d *, union vector3d const *, float, float)
//{
//    mangled_ppc("?yaw_vectors@@YAXPATvector3d@@PBT1@MM@Z");
//};

//void pitch_vectors(union vector3d *, union vector3d *, float, float)
//{
//    mangled_ppc("?pitch_vectors@@YAXPATvector3d@@0MM@Z");
//};

//union vector3d * vector_from_yaw_and_pitch(float, float, union vector3d *)
//{
//    mangled_ppc("?vector_from_yaw_and_pitch@@YAPATvector3d@@MMPAT1@@Z");
//};

//union vector3d * rotate_vector_about_axis(union vector3d *, union vector3d const *, float, float)
//{
//    mangled_ppc("?rotate_vector_about_axis@@YAPATvector3d@@PAT1@PBT1@MM@Z");
//};

//union vector3d * generate_up_vector3d(union vector3d const *, union vector3d *)
//{
//    mangled_ppc("?generate_up_vector3d@@YAPATvector3d@@PBT1@PAT1@@Z");
//};

//void real_vector3d_build_axes_from_forward(union vector3d const *, union vector3d *, union vector3d *)
//{
//    mangled_ppc("?real_vector3d_build_axes_from_forward@@YAXPBTvector3d@@PAT1@1@Z");
//};

//void real_vector3d_build_axes_from_vectors(union vector3d const *, union vector3d const *, union vector3d *, union vector3d *, union vector3d *)
//{
//    mangled_ppc("?real_vector3d_build_axes_from_vectors@@YAXPBTvector3d@@0PAT1@11@Z");
//};

//void real_vector3d_build_axes_from_vectors_using_up(union vector3d const *, union vector3d const *, union vector3d *, union vector3d *, union vector3d *)
//{
//    mangled_ppc("?real_vector3d_build_axes_from_vectors_using_up@@YAXPBTvector3d@@0PAT1@11@Z");
//};

//void real_vector3d_build_axes_from_forward_and_left(union vector3d const *, union vector3d const *, union vector3d *, union vector3d *, union vector3d *)
//{
//    mangled_ppc("?real_vector3d_build_axes_from_forward_and_left@@YAXPBTvector3d@@0PAT1@11@Z");
//};

//void approximate_normals_interpolate(union vector3d const *, union vector3d const *, float, union vector3d *)
//{
//    mangled_ppc("?approximate_normals_interpolate@@YAXPBTvector3d@@0MPAT1@@Z");
//};

//void fast_normals_interpolate(union vector3d const *, union vector3d const *, float, union vector3d *)
//{
//    mangled_ppc("?fast_normals_interpolate@@YAXPBTvector3d@@0MPAT1@@Z");
//};

//void normals_interpolate(union vector3d const *, union vector3d const *, float, union vector3d *)
//{
//    mangled_ppc("?normals_interpolate@@YAXPBTvector3d@@0MPAT1@@Z");
//};

//void vectors_interpolate(union vector3d const *, union vector3d const *, float, union vector3d *)
//{
//    mangled_ppc("?vectors_interpolate@@YAXPBTvector3d@@0MPAT1@@Z");
//};

//void points_interpolate(union real_point3d const *, union real_point3d const *, float, union real_point3d *)
//{
//    mangled_ppc("?points_interpolate@@YAXPBTreal_point3d@@0MPAT1@@Z");
//};

//void scalars_interpolate(float, float, float, float *)
//{
//    mangled_ppc("?scalars_interpolate@@YAXMMMPAM@Z");
//};

//void scalars_interpolate_and_clamp_0_to_1(float, float, float, float *)
//{
//    mangled_ppc("?scalars_interpolate_and_clamp_0_to_1@@YAXMMMPAM@Z");
//};

//bool pin_normal_to_cone3d(union vector3d const *, union vector3d const *, float, float, union vector3d *)
//{
//    mangled_ppc("?pin_normal_to_cone3d@@YA_NPBTvector3d@@0MMPAT1@@Z");
//};

//union vector3d * reflect_vector3d(union vector3d const *, union vector3d const *, union vector3d *)
//{
//    mangled_ppc("?reflect_vector3d@@YAPATvector3d@@PBT1@0PAT1@@Z");
//};

//union vector3d * refract_vector3d(union vector3d const *, union vector3d const *, float, union vector3d *)
//{
//    mangled_ppc("?refract_vector3d@@YAPATvector3d@@PBT1@0MPAT1@@Z");
//};

//void component_vectors_from_normal3d(union vector3d const *, union vector3d const *, union vector3d *, union vector3d *)
//{
//    mangled_ppc("?component_vectors_from_normal3d@@YAXPBTvector3d@@0PAT1@1@Z");
//};

//void component_vectors_from_plane3d(union vector3d const *, struct plane3d const *, union vector3d *, union vector3d *)
//{
//    mangled_ppc("?component_vectors_from_plane3d@@YAXPBTvector3d@@PBUplane3d@@PAT1@2@Z");
//};

//void component_vectors_from_direction3d(union vector3d const *, union vector3d const *, union vector3d *, union vector3d *)
//{
//    mangled_ppc("?component_vectors_from_direction3d@@YAXPBTvector3d@@0PAT1@1@Z");
//};

//float quaternions_dot(struct real32_quaternion const *, struct real32_quaternion const *)
//{
//    mangled_ppc("?quaternions_dot@@YAMPBUreal32_quaternion@@0@Z");
//};

//void quaternion_inverse(struct real32_quaternion *)
//{
//    mangled_ppc("?quaternion_inverse@@YAXPAUreal32_quaternion@@@Z");
//};

//void quaternion_raise_to_power(struct real32_quaternion const *, float, struct real32_quaternion *)
//{
//    mangled_ppc("?quaternion_raise_to_power@@YAXPBUreal32_quaternion@@MPAU1@@Z");
//};

//void quaternion_fix_to_use_shortest_path(struct real32_quaternion *)
//{
//    mangled_ppc("?quaternion_fix_to_use_shortest_path@@YAXPAUreal32_quaternion@@@Z");
//};

//void quaternion_normalize(struct real32_quaternion *)
//{
//    mangled_ppc("?quaternion_normalize@@YAXPAUreal32_quaternion@@@Z");
//};

//void approximate_quaternion_normalize(struct real32_quaternion *)
//{
//    mangled_ppc("?approximate_quaternion_normalize@@YAXPAUreal32_quaternion@@@Z");
//};

//void quaternion_from_angle_and_vector(struct real32_quaternion *, float, union vector3d const *)
//{
//    mangled_ppc("?quaternion_from_angle_and_vector@@YAXPAUreal32_quaternion@@MPBTvector3d@@@Z");
//};

//void quaternion_from_unit_vectors(struct real32_quaternion *, union vector3d const *, union vector3d const *)
//{
//    mangled_ppc("?quaternion_from_unit_vectors@@YAXPAUreal32_quaternion@@PBTvector3d@@1@Z");
//};

//void quaternion_to_angle_and_vector(struct real32_quaternion const *, float *, union vector3d *)
//{
//    mangled_ppc("?quaternion_to_angle_and_vector@@YAXPBUreal32_quaternion@@PAMPATvector3d@@@Z");
//};

//void quaternions_multiply(struct real32_quaternion const *, struct real32_quaternion const *, struct real32_quaternion *)
//{
//    mangled_ppc("?quaternions_multiply@@YAXPBUreal32_quaternion@@0PAU1@@Z");
//};

//void quaternions_interpolate(struct real32_quaternion const *, struct real32_quaternion const *, float, struct real32_quaternion *)
//{
//    mangled_ppc("?quaternions_interpolate@@YAXPBUreal32_quaternion@@0MPAU1@@Z");
//};

//void quaternions_interpolate_long(struct real32_quaternion const *, struct real32_quaternion const *, float, struct real32_quaternion *)
//{
//    mangled_ppc("?quaternions_interpolate_long@@YAXPBUreal32_quaternion@@0MPAU1@@Z");
//};

//void quaternions_interpolate_and_normalize(struct real32_quaternion const *, struct real32_quaternion const *, float, struct real32_quaternion *)
//{
//    mangled_ppc("?quaternions_interpolate_and_normalize@@YAXPBUreal32_quaternion@@0MPAU1@@Z");
//};

//void quaternions_interpolate_long_and_normalize(struct real32_quaternion const *, struct real32_quaternion const *, float, struct real32_quaternion *)
//{
//    mangled_ppc("?quaternions_interpolate_long_and_normalize@@YAXPBUreal32_quaternion@@0MPAU1@@Z");
//};

//void approximate_quaternions_interpolate_and_normalize(struct real32_quaternion const *, struct real32_quaternion const *, float, struct real32_quaternion *)
//{
//    mangled_ppc("?approximate_quaternions_interpolate_and_normalize@@YAXPBUreal32_quaternion@@0MPAU1@@Z");
//};

//void quaternions_slerp_interpolate(struct real32_quaternion const *, struct real32_quaternion const *, float, struct real32_quaternion *)
//{
//    mangled_ppc("?quaternions_slerp_interpolate@@YAXPBUreal32_quaternion@@0MPAU1@@Z");
//};

//void quaternions_slerp_interpolate_and_normalize(struct real32_quaternion const *, struct real32_quaternion const *, float, struct real32_quaternion *)
//{
//    mangled_ppc("?quaternions_slerp_interpolate_and_normalize@@YAXPBUreal32_quaternion@@0MPAU1@@Z");
//};

//void quaternion_transform_point(struct real32_quaternion const *, union real_point3d const *, union real_point3d *)
//{
//    mangled_ppc("?quaternion_transform_point@@YAXPBUreal32_quaternion@@PBTreal_point3d@@PAT2@@Z");
//};

//float compute_angle_between_quaternions(struct real32_quaternion const *, struct real32_quaternion const *)
//{
//    mangled_ppc("?compute_angle_between_quaternions@@YAMPBUreal32_quaternion@@0@Z");
//};

//void orientations_interpolate(struct real_orientation const *, struct real_orientation const *, float, struct real_orientation *)
//{
//    mangled_ppc("?orientations_interpolate@@YAXPBUreal_orientation@@0MPAU1@@Z");
//};

//void approximate_orientations_interpolate(struct real_orientation const *, struct real_orientation const *, float, struct real_orientation *)
//{
//    mangled_ppc("?approximate_orientations_interpolate@@YAXPBUreal_orientation@@0MPAU1@@Z");
//};

//void orientations_multiply(struct real_orientation const *, struct real_orientation const *, struct real_orientation *)
//{
//    mangled_ppc("?orientations_multiply@@YAXPBUreal_orientation@@0PAU1@@Z");
//};

//void orientation_identity(struct real_orientation *)
//{
//    mangled_ppc("?orientation_identity@@YAXPAUreal_orientation@@@Z");
//};

//void orientation_inverse(struct real_orientation const *, struct real_orientation *)
//{
//    mangled_ppc("?orientation_inverse@@YAXPBUreal_orientation@@PAU1@@Z");
//};

//union euler_angles2d * euler_angles2d_from_vector3d(union euler_angles2d *, union vector3d const *)
//{
//    mangled_ppc("?euler_angles2d_from_vector3d@@YAPATeuler_angles2d@@PAT1@PBTvector3d@@@Z");
//};

//union euler_angles3d * euler_angles3d_from_vectors3d(union euler_angles3d *, union vector3d const *, union vector3d const *)
//{
//    mangled_ppc("?euler_angles3d_from_vectors3d@@YAPATeuler_angles3d@@PAT1@PBTvector3d@@1@Z");
//};

//void vectors3d_from_euler_angles3d(union vector3d *, union vector3d *, union euler_angles3d const *)
//{
//    mangled_ppc("?vectors3d_from_euler_angles3d@@YAXPATvector3d@@0PBTeuler_angles3d@@@Z");
//};

//void vectors3d_from_euler_angles2d(union vector3d *, union vector3d *, union euler_angles2d const *)
//{
//    mangled_ppc("?vectors3d_from_euler_angles2d@@YAXPATvector3d@@0PBTeuler_angles2d@@@Z");
//};

//union vector3d * vector3d_from_euler_angles2d(union vector3d *, union euler_angles2d const *)
//{
//    mangled_ppc("?vector3d_from_euler_angles2d@@YAPATvector3d@@PAT1@PBTeuler_angles2d@@@Z");
//};

//union vector3d * vector3d_from_angle(union vector3d *, float)
//{
//    mangled_ppc("?vector3d_from_angle@@YAPATvector3d@@PAT1@M@Z");
//};

//bool point_in_pill2d(union real_point2d const *, union real_point2d const *, union vector2d const *, float)
//{
//    mangled_ppc("?point_in_pill2d@@YA_NPBTreal_point2d@@0PBTvector2d@@M@Z");
//};

//float point_to_line_distance_squared2d(union real_point2d const *, union real_point2d const *, union vector2d const *)
//{
//    mangled_ppc("?point_to_line_distance_squared2d@@YAMPBTreal_point2d@@0PBTvector2d@@@Z");
//};

//float point_to_line_distance_squared3d(union real_point3d const *, union real_point3d const *, union vector3d const *, float *)
//{
//    mangled_ppc("?point_to_line_distance_squared3d@@YAMPBTreal_point3d@@0PBTvector3d@@PAM@Z");
//};

//void closest_point_on_line2d(union real_point2d const *, union real_point2d const *, union vector2d const *, union real_point2d *, float *)
//{
//    mangled_ppc("?closest_point_on_line2d@@YAXPBTreal_point2d@@0PBTvector2d@@PAT1@PAM@Z");
//};

//void closest_point_on_line3d(union real_point3d const *, union real_point3d const *, union vector3d const *, union real_point3d *, float *)
//{
//    mangled_ppc("?closest_point_on_line3d@@YAXPBTreal_point3d@@0PBTvector3d@@PAT1@PAM@Z");
//};

//float vector_to_line_distance_squared3d(union real_point3d const *, union vector3d const *, union real_point3d const *, union vector3d const *, float *, float *)
//{
//    mangled_ppc("?vector_to_line_distance_squared3d@@YAMPBTreal_point3d@@PBTvector3d@@01PAM2@Z");
//};

//float point_to_triangle_distance3d(union real_point3d const *, union real_point3d const *, union real_point3d *)
//{
//    mangled_ppc("?point_to_triangle_distance3d@@YAMPBTreal_point3d@@0PAT1@@Z");
//};

//bool sphere_test_vector3d(union real_point3d const *, float, union real_point3d const *, union vector3d const *, float *, union vector3d *)
//{
//    mangled_ppc("?sphere_test_vector3d@@YA_NPBTreal_point3d@@M0PBTvector3d@@PAMPAT2@@Z");
//};

//bool pill_aligned_test_vector3d(union real_point3d const *, float, float, union real_point3d const *, union vector3d const *, float *, union vector3d *)
//{
//    mangled_ppc("?pill_aligned_test_vector3d@@YA_NPBTreal_point3d@@MM0PBTvector3d@@PAMPAT2@@Z");
//};

//bool pill_test_vector3d(union real_point3d const *, union vector3d const *, float, union real_point3d const *, union vector3d const *, float *)
//{
//    mangled_ppc("?pill_test_vector3d@@YA_NPBTreal_point3d@@PBTvector3d@@M01PAM@Z");
//};

//bool fast_vector_intersects_sphere(union real_point3d const *, union vector3d const *, union real_point3d const *, float)
//{
//    mangled_ppc("?fast_vector_intersects_sphere@@YA_NPBTreal_point3d@@PBTvector3d@@0M@Z");
//};

//float fast_vector_intersection_with_sphere(union real_point3d const *, union vector3d const *, union real_point3d const *, float)
//{
//    mangled_ppc("?fast_vector_intersection_with_sphere@@YAMPBTreal_point3d@@PBTvector3d@@0M@Z");
//};

//bool point_in_triangle2d(union real_point2d const *, union real_point2d const *, union real_point2d const *, union real_point2d const *, float *, float *)
//{
//    mangled_ppc("?point_in_triangle2d@@YA_NPBTreal_point2d@@000PAM1@Z");
//};

//bool point_in_triangle2d(union real_point2d const *, union real_point2d const *, union real_point2d const *, union real_point2d const *, float, float *, float *)
//{
//    mangled_ppc("?point_in_triangle2d@@YA_NPBTreal_point2d@@000MPAM1@Z");
//};

//bool fast_point_in_triangle2d(union real_point2d const *, union real_point2d const *, union real_point2d const *, union real_point2d const *, float *, float *)
//{
//    mangled_ppc("?fast_point_in_triangle2d@@YA_NPBTreal_point2d@@000PAM1@Z");
//};

//bool point_in_triangle3d(union real_point3d const *, union real_point3d const *, union real_point3d const *, union real_point3d const *, float *, float *)
//{
//    mangled_ppc("?point_in_triangle3d@@YA_NPBTreal_point3d@@000PAM1@Z");
//};

//void point_in_triangle3d(union real_point3d const *, union real_point3d const *, union real_point3d const *, union real_point3d const *, float *, float *, float *)
//{
//    mangled_ppc("?point_in_triangle3d@@YAXPBTreal_point3d@@000PAM11@Z");
//};

//bool point_in_cone2d(union real_point2d const *, union real_point2d const *, union vector2d const *, float, float)
//{
//    mangled_ppc("?point_in_cone2d@@YA_NPBTreal_point2d@@0PBTvector2d@@MM@Z");
//};

//bool point_in_cone3d(union real_point3d const *, union real_point3d const *, union vector3d const *, float, float)
//{
//    mangled_ppc("?point_in_cone3d@@YA_NPBTreal_point3d@@0PBTvector3d@@MM@Z");
//};

//bool point_in_sector2d(union real_point2d const *, union real_point2d const *, union vector2d const *, float, float)
//{
//    mangled_ppc("?point_in_sector2d@@YA_NPBTreal_point2d@@0PBTvector2d@@MM@Z");
//};

//bool point_in_sector3d(union real_point3d const *, union real_point3d const *, union vector3d const *, float, float)
//{
//    mangled_ppc("?point_in_sector3d@@YA_NPBTreal_point3d@@0PBTvector3d@@MM@Z");
//};

//void barycentric_coordinates2d(union real_point2d const *, union real_point2d const *, union real_point2d const *, union real_point2d const *, float *, float *, float *)
//{
//    mangled_ppc("?barycentric_coordinates2d@@YAXPBTreal_point2d@@000PAM11@Z");
//};

//void barycentric_coordinates3d(union real_point3d const *, union real_point3d const *, union real_point3d const *, union real_point3d const *, float *, float *, float *)
//{
//    mangled_ppc("?barycentric_coordinates3d@@YAXPBTreal_point3d@@000PAM11@Z");
//};

//void tetrahedral_barycentric_coordinates3d(union real_point3d const *, union real_point3d const *, union real_point3d const *, union real_point3d const *, union real_point3d const *, float *, float *, float *, float *)
//{
//    mangled_ppc("?tetrahedral_barycentric_coordinates3d@@YAXPBTreal_point3d@@0000PAM111@Z");
//};

//bool vector_intersects_pill2d(union real_point2d const *, union vector2d const *, union real_point2d const *, union vector2d const *, float)
//{
//    mangled_ppc("?vector_intersects_pill2d@@YA_NPBTreal_point2d@@PBTvector2d@@01M@Z");
//};

//bool vector_intersects_pill3d(union real_point3d const *, union vector3d const *, union real_point3d const *, union vector3d const *, float)
//{
//    mangled_ppc("?vector_intersects_pill3d@@YA_NPBTreal_point3d@@PBTvector3d@@01M@Z");
//};

//bool vector_intersects_rectangle2d(union real_point2d const *, union vector2d const *, union real_rectangle2d const *)
//{
//    mangled_ppc("?vector_intersects_rectangle2d@@YA_NPBTreal_point2d@@PBTvector2d@@PBTreal_rectangle2d@@@Z");
//};

//float vector_intersects_rectangle3d(union real_point3d const *, union vector3d const *, union real_rectangle3d const *)
//{
//    mangled_ppc("?vector_intersects_rectangle3d@@YAMPBTreal_point3d@@PBTvector3d@@PBTreal_rectangle3d@@@Z");
//};

//bool vector_intersects_rectangle3d(union real_point3d const *, union vector3d const *, union real_rectangle3d const *, float *)
//{
//    mangled_ppc("?vector_intersects_rectangle3d@@YA_NPBTreal_point3d@@PBTvector3d@@PBTreal_rectangle3d@@PAM@Z");
//};

//bool vector_intersects_triangle2d(union real_point2d const *, union vector2d const *, union real_point2d const *, union real_point2d const *, union real_point2d const *, float *, float *)
//{
//    mangled_ppc("?vector_intersects_triangle2d@@YA_NPBTreal_point2d@@PBTvector2d@@000PAM2@Z");
//};

//bool vector_intersects_triangle3d(union real_point3d const *, union vector3d const *, union real_point3d const *, union real_point3d const *, union real_point3d const *, float *, float *, float *)
//{
//    mangled_ppc("?vector_intersects_triangle3d@@YA_NPBTreal_point3d@@PBTvector3d@@000PAM22@Z");
//};

//bool plane_intersects_rectangle3d(struct plane3d const *, union real_rectangle3d const *)
//{
//    mangled_ppc("?plane_intersects_rectangle3d@@YA_NPBUplane3d@@PBTreal_rectangle3d@@@Z");
//};

//bool line_segment_intersection2d(union real_point2d const *, union real_point2d const *, union real_point2d const *, union real_point2d const *, float *, float *)
//{
//    mangled_ppc("?line_segment_intersection2d@@YA_NPBTreal_point2d@@000PAM1@Z");
//};

//bool ray_intersection2d(union real_point2d const *, union vector2d const *, union real_point2d const *, union vector2d const *, float *, float *)
//{
//    mangled_ppc("?ray_intersection2d@@YA_NPBTreal_point2d@@PBTvector2d@@01PAM2@Z");
//};

//float circle_from_points2d(union real_point2d const *, union real_point2d const *, union real_point2d const *, union real_point2d *)
//{
//    mangled_ppc("?circle_from_points2d@@YAMPBTreal_point2d@@00PAT1@@Z");
//};

//bool circle_intersects_rectangle2d(union real_point2d const *, float, union real_rectangle2d const *)
//{
//    mangled_ppc("?circle_intersects_rectangle2d@@YA_NPBTreal_point2d@@MPBTreal_rectangle2d@@@Z");
//};

//bool sphere_intersects_rectangle3d(union real_point3d const *, float, union real_rectangle3d const *)
//{
//    mangled_ppc("?sphere_intersects_rectangle3d@@YA_NPBTreal_point3d@@MPBTreal_rectangle3d@@@Z");
//};

//bool circle_intersects_triangle2d(union real_point2d const *, float, union real_point2d const *, union real_point2d const *, union real_point2d const *)
//{
//    mangled_ppc("?circle_intersects_triangle2d@@YA_NPBTreal_point2d@@M000@Z");
//};

//bool sphere_intersects_triangle3d(union real_point3d const *, float, union real_point3d const *, union real_point3d const *, union real_point3d const *)
//{
//    mangled_ppc("?sphere_intersects_triangle3d@@YA_NPBTreal_point3d@@M000@Z");
//};

//bool circle_intersects_cone2d(union real_point2d const *, float, union real_point2d const *, union vector2d const *, float, float, float)
//{
//    mangled_ppc("?circle_intersects_cone2d@@YA_NPBTreal_point2d@@M0PBTvector2d@@MMM@Z");
//};

//bool sphere_intersects_cone3d(union real_point3d const *, float, union real_point3d const *, union vector3d const *, float, float, float)
//{
//    mangled_ppc("?sphere_intersects_cone3d@@YA_NPBTreal_point3d@@M0PBTvector3d@@MMM@Z");
//};

//bool circle_intersects_sector2d(union real_point2d const *, float, union real_point2d const *, union vector2d const *, float, float, float)
//{
//    mangled_ppc("?circle_intersects_sector2d@@YA_NPBTreal_point2d@@M0PBTvector2d@@MMM@Z");
//};

//bool sphere_intersects_sector3d(union real_point3d const *, float, union real_point3d const *, union vector3d const *, float, float, float)
//{
//    mangled_ppc("?sphere_intersects_sector3d@@YA_NPBTreal_point3d@@M0PBTvector3d@@MMM@Z");
//};

//bool pill_intersects_rectangle2d(union real_point2d const *, union vector2d const *, float, union real_rectangle2d const *)
//{
//    mangled_ppc("?pill_intersects_rectangle2d@@YA_NPBTreal_point2d@@PBTvector2d@@MPBTreal_rectangle2d@@@Z");
//};

//bool pill_intersects_rectangle3d(union real_point3d const *, union vector3d const *, float, union real_rectangle3d const *)
//{
//    mangled_ppc("?pill_intersects_rectangle3d@@YA_NPBTreal_point3d@@PBTvector3d@@MPBTreal_rectangle3d@@@Z");
//};

//bool pill_intersects_triangle2d(union real_point2d const *, union vector2d const *, float, union real_point2d const *, union real_point2d const *, union real_point2d const *)
//{
//    mangled_ppc("?pill_intersects_triangle2d@@YA_NPBTreal_point2d@@PBTvector2d@@M000@Z");
//};

//bool pill_intersects_triangle3d(union real_point3d const *, union vector3d const *, float, union real_point3d const *, union real_point3d const *, union real_point3d const *)
//{
//    mangled_ppc("?pill_intersects_triangle3d@@YA_NPBTreal_point3d@@PBTvector3d@@M000@Z");
//};

//bool point_from_lines2d(union real_point2d const *, union vector2d const *, union real_point2d const *, union vector2d const *, float *, float *)
//{
//    mangled_ppc("?point_from_lines2d@@YA_NPBTreal_point2d@@PBTvector2d@@01PAM2@Z");
//};

//bool point_from_planes3d(struct plane3d const *, struct plane3d const *, struct plane3d const *, union real_point3d *)
//{
//    mangled_ppc("?point_from_planes3d@@YA_NPBUplane3d@@00PATreal_point3d@@@Z");
//};

//bool line_from_planes3d(struct plane3d const *, struct plane3d const *, union real_point3d *, union vector3d *)
//{
//    mangled_ppc("?line_from_planes3d@@YA_NPBUplane3d@@0PATreal_point3d@@PATvector3d@@@Z");
//};

//void accelerate_to_velocity(float *, float *, float, float, float, float, float, bool)
//{
//    mangled_ppc("?accelerate_to_velocity@@YAXPAM0MMMMM_N@Z");
//};

//bool accelerate_to_position(float *, float *, float, float, float, float, float, float, bool)
//{
//    mangled_ppc("?accelerate_to_position@@YA_NPAM0MMMMMM_N@Z");
//};

//void angular_accelerate_to_position(union vector3d *, union vector3d const *, float, union vector3d *, float, float, bool)
//{
//    mangled_ppc("?angular_accelerate_to_position@@YAXPATvector3d@@PBT1@M0MM_N@Z");
//};

//bool accelerate_to_velocity3d(union vector3d *, union vector3d const *, float)
//{
//    mangled_ppc("?accelerate_to_velocity3d@@YA_NPATvector3d@@PBT1@M@Z");
//};

//bool accelerate_to_position3d(union real_point3d *, union vector3d *, union real_point3d const *, float, float)
//{
//    mangled_ppc("?accelerate_to_position3d@@YA_NPATreal_point3d@@PATvector3d@@PBT1@MM@Z");
//};

//void update_spring_system(float *, float *, float, float, float, float)
//{
//    mangled_ppc("?update_spring_system@@YAXPAM0MMMM@Z");
//};

//float spring_system_calculate_acceleration(float, float, float, float, float)
//{
//    mangled_ppc("?spring_system_calculate_acceleration@@YAMMMMMM@Z");
//};

//float calculate_new_position(float, float, float, float)
//{
//    mangled_ppc("?calculate_new_position@@YAMMMMM@Z");
//};

//float calculate_new_velocity(float, float, float)
//{
//    mangled_ppc("?calculate_new_velocity@@YAMMMM@Z");
//};

//void update_limited_spring_system(float *, float *, float, float, float, float, float, float)
//{
//    mangled_ppc("?update_limited_spring_system@@YAXPAM0MMMMMM@Z");
//};

//void update_spring_system3d(union vector3d *, union vector3d *, union vector3d const *, float, float, float)
//{
//    mangled_ppc("?update_spring_system3d@@YAXPATvector3d@@0PBT1@MMM@Z");
//};

//void quantize_real_logarithmic_get_best_and_worst_case_errors(float, float, long, float *, float *)
//{
//    mangled_ppc("?quantize_real_logarithmic_get_best_and_worst_case_errors@@YAXMMJPAM0@Z");
//};

//unsigned char quantize_real_to_byte_lower_bound(float, float, float)
//{
//    mangled_ppc("?quantize_real_to_byte_lower_bound@@YAEMMM@Z");
//};

//unsigned char quantize_real_to_byte_upper_bound(float, float, float)
//{
//    mangled_ppc("?quantize_real_to_byte_upper_bound@@YAEMMM@Z");
//};

//union byte_rectangle3d * quantize_real_to_byte_rectangle3d(union real_rectangle3d const *, union real_rectangle3d const *, union byte_rectangle3d *)
//{
//    mangled_ppc("?quantize_real_to_byte_rectangle3d@@YAPATbyte_rectangle3d@@PBTreal_rectangle3d@@0PAT1@@Z");
//};

//bool compare_quantized_reals(float, float, float, float, long, bool, bool, bool)
//{
//    mangled_ppc("?compare_quantized_reals@@YA_NMMMMJ_N00@Z");
//};

//bool compare_logarithmic_quantized_reals(float, float, float, float, long)
//{
//    mangled_ppc("?compare_logarithmic_quantized_reals@@YA_NMMMMJ@Z");
//};

//float triangle2d_area_signed(union real_point2d const *, union real_point2d const *, union real_point2d const *)
//{
//    mangled_ppc("?triangle2d_area_signed@@YAMPBTreal_point2d@@00@Z");
//};

//float tetrahedron3d_volume_signed(union real_point3d const *, union real_point3d const *, union real_point3d const *, union real_point3d const *)
//{
//    mangled_ppc("?tetrahedron3d_volume_signed@@YAMPBTreal_point3d@@000@Z");
//};

//bool real_rectangle2d_compute_intersection(union real_rectangle2d const *, union real_rectangle2d const *, union real_rectangle2d *)
//{
//    mangled_ppc("?real_rectangle2d_compute_intersection@@YA_NPBTreal_rectangle2d@@0PAT1@@Z");
//};

//bool real_rectangle3d_compute_intersection(union real_rectangle3d const *, union real_rectangle3d const *, union real_rectangle3d *)
//{
//    mangled_ppc("?real_rectangle3d_compute_intersection@@YA_NPBTreal_rectangle3d@@0PAT1@@Z");
//};

//float real_rectangle2d_area(union real_rectangle2d const *)
//{
//    mangled_ppc("?real_rectangle2d_area@@YAMPBTreal_rectangle2d@@@Z");
//};

//float real_rectangle3d_volume(union real_rectangle3d const *)
//{
//    mangled_ppc("?real_rectangle3d_volume@@YAMPBTreal_rectangle3d@@@Z");
//};

//void real_rectangle2d_clamp_bounds(union real_rectangle2d *, union real_rectangle2d const *)
//{
//    mangled_ppc("?real_rectangle2d_clamp_bounds@@YAXPATreal_rectangle2d@@PBT1@@Z");
//};

//union real_rectangle2d * real_rectangle2d_enclose_points(union real_rectangle2d *, long, union real_point2d const *const)
//{
//    mangled_ppc("?real_rectangle2d_enclose_points@@YAPATreal_rectangle2d@@PAT1@JQBTreal_point2d@@@Z");
//};

//union real_rectangle3d * real_rectangle3d_enclose_points(union real_rectangle3d *, long, union real_point3d const *const)
//{
//    mangled_ppc("?real_rectangle3d_enclose_points@@YAPATreal_rectangle3d@@PAT1@JQBTreal_point3d@@@Z");
//};

//union real_rectangle2d * real_rectangle2d_enclose_rectangle(union real_rectangle2d *, union real_rectangle2d const *)
//{
//    mangled_ppc("?real_rectangle2d_enclose_rectangle@@YAPATreal_rectangle2d@@PAT1@PBT1@@Z");
//};

//union real_rectangle3d * real_rectangle3d_enclose_rectangle(union real_rectangle3d *, union real_rectangle3d const *)
//{
//    mangled_ppc("?real_rectangle3d_enclose_rectangle@@YAPATreal_rectangle3d@@PAT1@PBT1@@Z");
//};

//void rectangle2d_compute_nearest_point(union real_rectangle2d const *, union real_point2d const *, union real_point2d *)
//{
//    mangled_ppc("?rectangle2d_compute_nearest_point@@YAXPBTreal_rectangle2d@@PBTreal_point2d@@PAT2@@Z");
//};

//void rectangle3d_compute_nearest_point(union real_rectangle3d const *, union real_point3d const *, union real_point3d *)
//{
//    mangled_ppc("?rectangle3d_compute_nearest_point@@YAXPBTreal_rectangle3d@@PBTreal_point3d@@PAT2@@Z");
//};

//long rectangle3d_build_vertices(union real_rectangle3d const *, long, union real_point3d *const)
//{
//    mangled_ppc("?rectangle3d_build_vertices@@YAJPBTreal_rectangle3d@@JQATreal_point3d@@@Z");
//};

//long rectangle3d_build_edges(union real_rectangle3d const *, long, union real_point3d (*const)[2])
//{
//    mangled_ppc("?rectangle3d_build_edges@@YAJPBTreal_rectangle3d@@JQAY01Treal_point3d@@@Z");
//};

//long rectangle3d_build_faces(union real_rectangle3d const *, long, union real_point3d (*const)[4])
//{
//    mangled_ppc("?rectangle3d_build_faces@@YAJPBTreal_rectangle3d@@JQAY03Treal_point3d@@@Z");
//};

//bool valid_polygon2d(long, union real_point2d const *const)
//{
//    mangled_ppc("?valid_polygon2d@@YA_NJQBTreal_point2d@@@Z");
//};

//bool valid_polygon3d(long, union real_point3d const *const)
//{
//    mangled_ppc("?valid_polygon3d@@YA_NJQBTreal_point3d@@@Z");
//};

//long polygon2d_from_bounds(union real_rectangle2d const *, long, union real_point2d *const)
//{
//    mangled_ppc("?polygon2d_from_bounds@@YAJPBTreal_rectangle2d@@JQATreal_point2d@@@Z");
//};

//float polygon2d_perimeter(long, union real_point2d const *const)
//{
//    mangled_ppc("?polygon2d_perimeter@@YAMJQBTreal_point2d@@@Z");
//};

//float polygon3d_perimeter(long, union real_point3d const *const)
//{
//    mangled_ppc("?polygon3d_perimeter@@YAMJQBTreal_point3d@@@Z");
//};

//float polygon2d_area(long, union real_point2d const *const)
//{
//    mangled_ppc("?polygon2d_area@@YAMJQBTreal_point2d@@@Z");
//};

//float polygon3d_area(long, union real_point3d const *const, union vector3d const *)
//{
//    mangled_ppc("?polygon3d_area@@YAMJQBTreal_point3d@@PBTvector3d@@@Z");
//};

//void plane2d_distance_to_polygon(struct plane2d const *, long, union real_point2d const *const, float *, float *)
//{
//    mangled_ppc("?plane2d_distance_to_polygon@@YAXPBUplane2d@@JQBTreal_point2d@@PAM2@Z");
//};

//void plane3d_distance_to_polygon(struct plane3d const *, long, union real_point3d const *const, float *, float *)
//{
//    mangled_ppc("?plane3d_distance_to_polygon@@YAXPBUplane3d@@JQBTreal_point3d@@PAM2@Z");
//};

//long plane2d_clip_polygon(struct plane2d const *, bool, float, long, union real_point2d const *const, long, union real_point2d *const)
//{
//    mangled_ppc("?plane2d_clip_polygon@@YAJPBUplane2d@@_NMJQBTreal_point2d@@JQAT2@@Z");
//};

//union real_point2d * intersection_point2d(union real_point2d const *, union real_point2d const *, float, float, union real_point2d *)
//{
//    mangled_ppc("?intersection_point2d@@YAPATreal_point2d@@PBT1@0MMPAT1@@Z");
//};

//long plane3d_clip_polygon(struct plane3d const *, bool, float, long, union real_point3d const *const, long, union real_point3d *const)
//{
//    mangled_ppc("?plane3d_clip_polygon@@YAJPBUplane3d@@_NMJQBTreal_point3d@@JQAT2@@Z");
//};

//union real_point3d * intersection_point3d(union real_point3d const *, union real_point3d const *, float, float, union real_point3d *)
//{
//    mangled_ppc("?intersection_point3d@@YAPATreal_point3d@@PBT1@0MMPAT1@@Z");
//};

//void project_polygon2d(long, union real_point2d const *const, struct plane3d const *, long, bool, union real_point3d *const)
//{
//    mangled_ppc("?project_polygon2d@@YAXJQBTreal_point2d@@PBUplane3d@@J_NQATreal_point3d@@@Z");
//};

//void project_polygon3d(long, union real_point3d const *const, long, bool, union real_point2d *const)
//{
//    mangled_ppc("?project_polygon3d@@YAXJQBTreal_point3d@@J_NQATreal_point2d@@@Z");
//};

//bool find_closest_point_on_1plane(union real_point3d const *, struct plane3d const *, float *, union real_point3d *)
//{
//    mangled_ppc("?find_closest_point_on_1plane@@YA_NPBTreal_point3d@@PBUplane3d@@PAMPAT1@@Z");
//};

//bool find_closest_point_on_2planes(union real_point3d const *, struct plane3d const *, struct plane3d const *, float *, float *, union real_point3d *)
//{
//    mangled_ppc("?find_closest_point_on_2planes@@YA_NPBTreal_point3d@@PBUplane3d@@1PAM2PAT1@@Z");
//};

//bool find_closest_point_on_3planes(union real_point3d const *, struct plane3d const *, struct plane3d const *, struct plane3d const *, float *, float *, float *, union real_point3d *, long *)
//{
//    mangled_ppc("?find_closest_point_on_3planes@@YA_NPBTreal_point3d@@PBUplane3d@@11PAM22PAT1@PAJ@Z");
//};

//float normalize3d_with_default(union vector3d *, union vector3d const *)
//{
//    mangled_ppc("?normalize3d_with_default@@YAMPATvector3d@@PBT1@@Z");
//};

//void quaternion_to_euler_angles(struct real32_quaternion const *, union euler_angles3d *)
//{
//    mangled_ppc("?quaternion_to_euler_angles@@YAXPBUreal32_quaternion@@PATeuler_angles3d@@@Z");
//};

//void quaternion_to_euler_angles_internal(struct real32_quaternion const *, union euler_angles3d *, float)
//{
//    mangled_ppc("?quaternion_to_euler_angles_internal@@YAXPBUreal32_quaternion@@PATeuler_angles3d@@M@Z");
//};

//void quaternion_to_euler_angles_unsafe(struct real32_quaternion const *, union euler_angles3d *)
//{
//    mangled_ppc("?quaternion_to_euler_angles_unsafe@@YAXPBUreal32_quaternion@@PATeuler_angles3d@@@Z");
//};

//void quaternion_from_euler_angles_OLD_AND_INCORRECT(struct real32_quaternion *, union euler_angles3d const *)
//{
//    mangled_ppc("?quaternion_from_euler_angles_OLD_AND_INCORRECT@@YAXPAUreal32_quaternion@@PBTeuler_angles3d@@@Z");
//};

//void quaternion_from_euler_angles(struct real32_quaternion *, union euler_angles3d const *)
//{
//    mangled_ppc("?quaternion_from_euler_angles@@YAXPAUreal32_quaternion@@PBTeuler_angles3d@@@Z");
//};

//void matrix4x3_two_bone_ik_adjust_matrices(struct real_matrix4x3*, struct real_matrix4x3*, struct real_matrix4x3*, struct real_matrix4x3*, union real_point3d const *)
//{
//    mangled_ppc("?matrix4x3_two_bone_ik_adjust_matrices@@YAXPAUreal_matrix4x3@@000PBTreal_point3d@@@Z");
//};

//void matrix4x3_two_bone_ik_adjust_matrices_new(struct real_matrix4x3const *, struct real_matrix4x3*, struct real_matrix4x3*, struct real_matrix4x3*, union real_point3d const *)
//{
//    mangled_ppc("?matrix4x3_two_bone_ik_adjust_matrices_new@@YAXPBUreal_matrix4x3@@PAU1@11PBTreal_point3d@@@Z");
//};

//void matrix4x3_ik_alignment_matrix(struct real_matrix4x3const *, union vector3d const *, struct real_matrix4x3*)
//{
//    mangled_ppc("?matrix4x3_ik_alignment_matrix@@YAXPBUreal_matrix4x3@@PBTvector3d@@PAU1@@Z");
//};

//void matrix4x3_two_bone_ik_adjust_matrices_old(struct real_matrix4x3*, struct real_matrix4x3*, struct real_matrix4x3*, struct real_matrix4x3*)
//{
//    mangled_ppc("?matrix4x3_two_bone_ik_adjust_matrices_old@@YAXPAUreal_matrix4x3@@000@Z");
//};

//void matrix4x3_three_bone_ik_adjust_matrices(struct real_matrix4x3*, struct real_matrix4x3*, struct real_matrix4x3*, struct real_matrix4x3*, struct real_matrix4x3*, union real_point3d const *)
//{
//    mangled_ppc("?matrix4x3_three_bone_ik_adjust_matrices@@YAXPAUreal_matrix4x3@@0000PBTreal_point3d@@@Z");
//};

//float three_bone_ik_effector_distance_squared(float, float, float, float, float, float)
//{
//    mangled_ppc("?three_bone_ik_effector_distance_squared@@YAMMMMMMM@Z");
//};

//float three_bone_ik_joint_angle_ratio(float, float, float)
//{
//    mangled_ppc("?three_bone_ik_joint_angle_ratio@@YAMMMM@Z");
//};

//void real_math_disable_fpu_exceptions(void)
//{
//    mangled_ppc("?real_math_disable_fpu_exceptions@@YAXXZ");
//};

//void real_math_recover_fpu_exceptions(void)
//{
//    mangled_ppc("?real_math_recover_fpu_exceptions@@YAXXZ");
//};

//union vector2d * fast_normalize2d(union vector2d *)
//{
//    mangled_ppc("?fast_normalize2d@@YAPATvector2d@@PAT1@@Z");
//};

//void perpendicular_bisector2d(union real_point2d const *, union real_point2d const *, union real_point2d *, union vector2d *)
//{
//    mangled_ppc("?perpendicular_bisector2d@@YAXPBTreal_point2d@@0PAT1@PATvector2d@@@Z");
//};

//short projection_from_vector3d(union vector3d const *)
//{
//    mangled_ppc("?projection_from_vector3d@@YAFPBTvector3d@@@Z");
//};

//bool projection_sign_from_vector3d(union vector3d const *, short)
//{
//    mangled_ppc("?projection_sign_from_vector3d@@YA_NPBTvector3d@@F@Z");
//};

//union real_point2d * project_point3d(union real_point3d const *, short, bool, union real_point2d *)
//{
//    mangled_ppc("?project_point3d@@YAPATreal_point2d@@PBTreal_point3d@@F_NPAT1@@Z");
//};

//union vector2d * project_vector3d(union vector3d const *, short, bool, union vector2d *)
//{
//    mangled_ppc("?project_vector3d@@YAPATvector2d@@PBTvector3d@@F_NPAT1@@Z");
//};

//union vector3d * fast_normalize3d(union vector3d *)
//{
//    mangled_ppc("?fast_normalize3d@@YAPATvector3d@@PAT1@@Z");
//};

//union real64_vector3d * cross_product3d(union real64_vector3d const *, union real64_vector3d const *, union real64_vector3d *)
//{
//    mangled_ppc("?cross_product3d@@YAPATreal64_vector3d@@PBT1@0PAT1@@Z");
//};

//float plane2d_distance_to_point(struct plane2d const *, union real_point2d const *)
//{
//    mangled_ppc("?plane2d_distance_to_point@@YAMPBUplane2d@@PBTreal_point2d@@@Z");
//};

//struct plane3d * plane3d_from_points(struct plane3d *, union real_point3d const *, union real_point3d const *, union real_point3d const *)
//{
//    mangled_ppc("?plane3d_from_points@@YAPAUplane3d@@PAU1@PBTreal_point3d@@11@Z");
//};

//bool valid_real_point2d(union real_point2d const *)
//{
//    mangled_ppc("?valid_real_point2d@@YA_NPBTreal_point2d@@@Z");
//};

//bool valid_real_sine_cosine(float, float)
//{
//    mangled_ppc("?valid_real_sine_cosine@@YA_NMM@Z");
//};

//bool valid_real_plane2d(struct plane2d const *)
//{
//    mangled_ppc("?valid_real_plane2d@@YA_NPBUplane2d@@@Z");
//};

//bool valid_real_quaternion(struct real32_quaternion const *)
//{
//    mangled_ppc("?valid_real_quaternion@@YA_NPBUreal32_quaternion@@@Z");
//};

//float dequantize_byte_to_real(float, float, unsigned char)
//{
//    mangled_ppc("?dequantize_byte_to_real@@YAMMME@Z");
//};

//long quantize_real(float, float, float, long, bool, bool)
//{
//    mangled_ppc("?quantize_real@@YAJMMMJ_N0@Z");
//};
