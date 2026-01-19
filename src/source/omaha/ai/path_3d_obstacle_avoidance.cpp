/* ---------- headers */

#include "omaha\ai\path_3d_obstacle_avoidance.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// except_record_839743B8; // "except_record_839743B8"
// except_record_83974E58; // "except_record_83974E58"

// float actor_estimate_path_waypoint_distance(long, float, float);
// void volume_compute_height_vector(struct s_avoidance_volume const *, union vector3d *);
// bool point_in_volume(struct s_avoidance_volume const *, union real_point3d const *, float);
// bool actor_in_volume(long, float);
// bool segment_in_volume(struct s_avoidance_volume const *, union real_point3d const *, union real_point3d const *, float);
// bool volume_test_segment(struct s_avoidance_volume const *, union real_point3d const *, union real_point3d const *, float, union real_point3d *, float *);
// bool segment_clear(union real_point3d const *, union real_point3d const *, float, long, struct s_avoidance_volume *);
// bool plane_intersects_volume(struct s_avoidance_volume const *, struct plane3d const *);
// void pill_compute_farthest_internal_ray_intersection(union real_point3d const *, union vector3d const *, float, union real_point3d const *, union vector3d const *, union real_point3d *);
// bool sphere_compute_farthest_ray_intersection(union real_point3d const *, float, union real_point3d const *, union vector3d const *, float *);
// bool infinite_cylinder_compute_farthest_ray_intersection(union real_point3d const *, union vector3d const *, float, union real_point3d const *, union vector3d const *, float *);
// bool point_between_cylinder_end_planes(union real_point3d const *, union real_point3d const *, union vector3d const *);
// void point_exit_volume(struct s_avoidance_volume const *, union real_point3d const *, union vector3d const *, float, union vector3d *, union real_point3d *);
// void sphere_tangent_cone(union real_point3d const *, union real_point3d const *, float, float *, float *);
// bool plane_intersects_sphere(struct plane3d const *, union real_point3d const *, float);
// bool plane_intersects_pill(struct plane3d const *, union real_point3d const *, union vector3d const *, float);
// bool pill_compute_avoid_points_on_plane(union real_point3d const *, union vector3d const *, float, float, union real_point3d const *, struct plane3d const *, union real_point3d *const);
// bool plane_intersects_cylinder(struct plane3d const *, union real_point3d const *, union vector3d const *, float);
// void sphere_compute_avoid_points_on_plane(union real_point3d const *, float, union real_point3d const *, struct plane3d const *, union vector3d *const, union real_point3d *const);
// short cylinder_compute_avoid_points_on_plane(union real_point3d const *, union vector3d const *, float, union real_point3d const *, struct plane3d const *, union vector3d *const, union real_point3d *const);
// union real_point3d * matrix4x3_nonuniform_scale_transform_point(struct real_matrix4x3const *, union real_point3d const *, union real_point3d *);
// union vector3d * matrix3x3_nonuniform_scale_transform_vector(struct matrix3x3const *, union vector3d const *, union vector3d *);
// bool point_avoid_volume(union real_point3d const *, union vector3d const *, union vector3d const *, struct s_avoidance_volume const *, float, union real_point3d *, union real_point3d *);
// bool point_exit_all_volumes(union real_point3d const *, struct s_avoidance_volume *, long, float, union real_point3d *);
// bool path_avoid_obstacle_volumes_internal(long, struct path_state *, union real_point3d *, union vector3d *, union vector3d *, float, float, bool *, long, struct s_avoidance_volume *, short, struct path_step const *, short *, struct path_step *);
// short path_node_calculate_heuristic_cost(long, struct path_state *, short, struct path_node const *, union vector3d const *, union real_point3d const *, float);
// long int_min(long, short);
// short path_node_find_closest_volume_intersection(union real_point3d const *, union real_point3d const *, struct s_avoidance_volume *const, long, short, float, union real_point3d *);
// short path_node_compute_neighbors(long, struct path_state *, short, union vector3d const *, union real_point3d const *, union vector3d const *, union vector3d const *, struct s_avoidance_volume *const, long, float, float);
// short path_append_node(long, struct path_state *, short, union real_point3d *, union vector3d const *, union real_point3d const *, short, short, float);
// void obstacles_get_volumes_in_sphere(long, long, union real_point3d const *, union real_point3d const *, float, struct s_avoidance_volume *, long, long *, union vector3d const *, union vector3d const *, long, long);
// void gather_dynamic_obstacle_pathfinding_volumes_from_object(long, struct s_avoidance_volume *, long, long *);
// void path_gather_volume_avoidance_hints(long, struct s_avoidance_volume *, long, long *);
// bool path_avoid_obstacle_volumes(long, struct path_state *, short, struct path_step const *, float, short *, struct path_step *, bool *);
// void gather_dynamic_obstacle_pathfinding_volumes(long, struct path_state *, union real_point3d const *, float, struct s_avoidance_volume *, long, long *);
// void render_avoidance_volume(struct s_avoidance_volume const *);

//float actor_estimate_path_waypoint_distance(long, float, float)
//{
//    mangled_ppc("?actor_estimate_path_waypoint_distance@@YAMJMM@Z");
//};

//void volume_compute_height_vector(struct s_avoidance_volume const *, union vector3d *)
//{
//    mangled_ppc("?volume_compute_height_vector@@YAXPBUs_avoidance_volume@@PATvector3d@@@Z");
//};

//bool point_in_volume(struct s_avoidance_volume const *, union real_point3d const *, float)
//{
//    mangled_ppc("?point_in_volume@@YA_NPBUs_avoidance_volume@@PBTreal_point3d@@M@Z");
//};

//bool actor_in_volume(long, float)
//{
//    mangled_ppc("?actor_in_volume@@YA_NJM@Z");
//};

//bool segment_in_volume(struct s_avoidance_volume const *, union real_point3d const *, union real_point3d const *, float)
//{
//    mangled_ppc("?segment_in_volume@@YA_NPBUs_avoidance_volume@@PBTreal_point3d@@1M@Z");
//};

//bool volume_test_segment(struct s_avoidance_volume const *, union real_point3d const *, union real_point3d const *, float, union real_point3d *, float *)
//{
//    mangled_ppc("?volume_test_segment@@YA_NPBUs_avoidance_volume@@PBTreal_point3d@@1MPAT2@PAM@Z");
//};

//bool segment_clear(union real_point3d const *, union real_point3d const *, float, long, struct s_avoidance_volume *)
//{
//    mangled_ppc("?segment_clear@@YA_NPBTreal_point3d@@0MJPAUs_avoidance_volume@@@Z");
//};

//bool plane_intersects_volume(struct s_avoidance_volume const *, struct plane3d const *)
//{
//    mangled_ppc("?plane_intersects_volume@@YA_NPBUs_avoidance_volume@@PBUplane3d@@@Z");
//};

//void pill_compute_farthest_internal_ray_intersection(union real_point3d const *, union vector3d const *, float, union real_point3d const *, union vector3d const *, union real_point3d *)
//{
//    mangled_ppc("?pill_compute_farthest_internal_ray_intersection@@YAXPBTreal_point3d@@PBTvector3d@@M01PAT1@@Z");
//};

//bool sphere_compute_farthest_ray_intersection(union real_point3d const *, float, union real_point3d const *, union vector3d const *, float *)
//{
//    mangled_ppc("?sphere_compute_farthest_ray_intersection@@YA_NPBTreal_point3d@@M0PBTvector3d@@PAM@Z");
//};

//bool infinite_cylinder_compute_farthest_ray_intersection(union real_point3d const *, union vector3d const *, float, union real_point3d const *, union vector3d const *, float *)
//{
//    mangled_ppc("?infinite_cylinder_compute_farthest_ray_intersection@@YA_NPBTreal_point3d@@PBTvector3d@@M01PAM@Z");
//};

//bool point_between_cylinder_end_planes(union real_point3d const *, union real_point3d const *, union vector3d const *)
//{
//    mangled_ppc("?point_between_cylinder_end_planes@@YA_NPBTreal_point3d@@0PBTvector3d@@@Z");
//};

//void point_exit_volume(struct s_avoidance_volume const *, union real_point3d const *, union vector3d const *, float, union vector3d *, union real_point3d *)
//{
//    mangled_ppc("?point_exit_volume@@YAXPBUs_avoidance_volume@@PBTreal_point3d@@PBTvector3d@@MPAT3@PAT2@@Z");
//};

//void sphere_tangent_cone(union real_point3d const *, union real_point3d const *, float, float *, float *)
//{
//    mangled_ppc("?sphere_tangent_cone@@YAXPBTreal_point3d@@0MPAM1@Z");
//};

//bool plane_intersects_sphere(struct plane3d const *, union real_point3d const *, float)
//{
//    mangled_ppc("?plane_intersects_sphere@@YA_NPBUplane3d@@PBTreal_point3d@@M@Z");
//};

//bool plane_intersects_pill(struct plane3d const *, union real_point3d const *, union vector3d const *, float)
//{
//    mangled_ppc("?plane_intersects_pill@@YA_NPBUplane3d@@PBTreal_point3d@@PBTvector3d@@M@Z");
//};

//bool pill_compute_avoid_points_on_plane(union real_point3d const *, union vector3d const *, float, float, union real_point3d const *, struct plane3d const *, union real_point3d *const)
//{
//    mangled_ppc("?pill_compute_avoid_points_on_plane@@YA_NPBTreal_point3d@@PBTvector3d@@MM0PBUplane3d@@QAT1@@Z");
//};

//bool plane_intersects_cylinder(struct plane3d const *, union real_point3d const *, union vector3d const *, float)
//{
//    mangled_ppc("?plane_intersects_cylinder@@YA_NPBUplane3d@@PBTreal_point3d@@PBTvector3d@@M@Z");
//};

//void sphere_compute_avoid_points_on_plane(union real_point3d const *, float, union real_point3d const *, struct plane3d const *, union vector3d *const, union real_point3d *const)
//{
//    mangled_ppc("?sphere_compute_avoid_points_on_plane@@YAXPBTreal_point3d@@M0PBUplane3d@@QATvector3d@@QAT1@@Z");
//};

//short cylinder_compute_avoid_points_on_plane(union real_point3d const *, union vector3d const *, float, union real_point3d const *, struct plane3d const *, union vector3d *const, union real_point3d *const)
//{
//    mangled_ppc("?cylinder_compute_avoid_points_on_plane@@YAFPBTreal_point3d@@PBTvector3d@@M0PBUplane3d@@QAT2@QAT1@@Z");
//};

//union real_point3d * matrix4x3_nonuniform_scale_transform_point(struct real_matrix4x3const *, union real_point3d const *, union real_point3d *)
//{
//    mangled_ppc("?matrix4x3_nonuniform_scale_transform_point@@YAPATreal_point3d@@PBUreal_matrix4x3@@PBT1@PAT1@@Z");
//};

//union vector3d * matrix3x3_nonuniform_scale_transform_vector(struct matrix3x3const *, union vector3d const *, union vector3d *)
//{
//    mangled_ppc("?matrix3x3_nonuniform_scale_transform_vector@@YAPATvector3d@@PBUmatrix3x3@@PBT1@PAT1@@Z");
//};

//bool point_avoid_volume(union real_point3d const *, union vector3d const *, union vector3d const *, struct s_avoidance_volume const *, float, union real_point3d *, union real_point3d *)
//{
//    mangled_ppc("?point_avoid_volume@@YA_NPBTreal_point3d@@PBTvector3d@@1PBUs_avoidance_volume@@MPAT1@3@Z");
//};

//bool point_exit_all_volumes(union real_point3d const *, struct s_avoidance_volume *, long, float, union real_point3d *)
//{
//    mangled_ppc("?point_exit_all_volumes@@YA_NPBTreal_point3d@@PAUs_avoidance_volume@@JMPAT1@@Z");
//};

//bool path_avoid_obstacle_volumes_internal(long, struct path_state *, union real_point3d *, union vector3d *, union vector3d *, float, float, bool *, long, struct s_avoidance_volume *, short, struct path_step const *, short *, struct path_step *)
//{
//    mangled_ppc("?path_avoid_obstacle_volumes_internal@@YA_NJPAUpath_state@@PATreal_point3d@@PATvector3d@@2MMPA_NJPAUs_avoidance_volume@@FPBUpath_step@@PAFPAU5@@Z");
//};

//short path_node_calculate_heuristic_cost(long, struct path_state *, short, struct path_node const *, union vector3d const *, union real_point3d const *, float)
//{
//    mangled_ppc("?path_node_calculate_heuristic_cost@@YAFJPAUpath_state@@FPBUpath_node@@PBTvector3d@@PBTreal_point3d@@M@Z");
//};

//long int_min(long, short)
//{
//    mangled_ppc("?int_min@@YAJJF@Z");
//};

//short path_node_find_closest_volume_intersection(union real_point3d const *, union real_point3d const *, struct s_avoidance_volume *const, long, short, float, union real_point3d *)
//{
//    mangled_ppc("?path_node_find_closest_volume_intersection@@YAFPBTreal_point3d@@0QAUs_avoidance_volume@@JFMPAT1@@Z");
//};

//short path_node_compute_neighbors(long, struct path_state *, short, union vector3d const *, union real_point3d const *, union vector3d const *, union vector3d const *, struct s_avoidance_volume *const, long, float, float)
//{
//    mangled_ppc("?path_node_compute_neighbors@@YAFJPAUpath_state@@FPBTvector3d@@PBTreal_point3d@@11QAUs_avoidance_volume@@JMM@Z");
//};

//short path_append_node(long, struct path_state *, short, union real_point3d *, union vector3d const *, union real_point3d const *, short, short, float)
//{
//    mangled_ppc("?path_append_node@@YAFJPAUpath_state@@FPATreal_point3d@@PBTvector3d@@PBT2@FFM@Z");
//};

//void obstacles_get_volumes_in_sphere(long, long, union real_point3d const *, union real_point3d const *, float, struct s_avoidance_volume *, long, long *, union vector3d const *, union vector3d const *, long, long)
//{
//    mangled_ppc("?obstacles_get_volumes_in_sphere@@YAXJJPBTreal_point3d@@0MPAUs_avoidance_volume@@JPAJPBTvector3d@@3JJ@Z");
//};

//void gather_dynamic_obstacle_pathfinding_volumes_from_object(long, struct s_avoidance_volume *, long, long *)
//{
//    mangled_ppc("?gather_dynamic_obstacle_pathfinding_volumes_from_object@@YAXJPAUs_avoidance_volume@@JPAJ@Z");
//};

//void path_gather_volume_avoidance_hints(long, struct s_avoidance_volume *, long, long *)
//{
//    mangled_ppc("?path_gather_volume_avoidance_hints@@YAXJPAUs_avoidance_volume@@JPAJ@Z");
//};

//bool path_avoid_obstacle_volumes(long, struct path_state *, short, struct path_step const *, float, short *, struct path_step *, bool *)
//{
//    mangled_ppc("?path_avoid_obstacle_volumes@@YA_NJPAUpath_state@@FPBUpath_step@@MPAFPAU2@PA_N@Z");
//};

//void gather_dynamic_obstacle_pathfinding_volumes(long, struct path_state *, union real_point3d const *, float, struct s_avoidance_volume *, long, long *)
//{
//    mangled_ppc("?gather_dynamic_obstacle_pathfinding_volumes@@YAXJPAUpath_state@@PBTreal_point3d@@MPAUs_avoidance_volume@@JPAJ@Z");
//};

//void render_avoidance_volume(struct s_avoidance_volume const *)
//{
//    mangled_ppc("?render_avoidance_volume@@YAXPBUs_avoidance_volume@@@Z");
//};

