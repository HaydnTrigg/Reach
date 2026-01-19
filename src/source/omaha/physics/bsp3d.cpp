/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// long bsp3d_test_point(class c_bsp3d_reference, union real_point3d const *);
// long bsp3d_clip_line_to_leaves(class c_bsp3d_reference, long, union real_point3d const *, union real_point3d const *, void (*)(union real_point3d const *, union real_point3d const *, long, void *), void *);
// struct plane3d * bsp3d_get_plane_from_designator(struct bsp3d const *, long, bool, struct plane3d *);
// struct plane3d * bsp3d_get_plane_from_designator(struct large_bsp3d const *, long, bool, struct plane3d *);
// long bsp3d_kd_plane_dimension_index_get(struct plane3d const *);
// long bsp3d_test_point_internal<struct s_small_bsp3d_types>(struct bsp3d const *, union real_point3d const *);
// long bsp3d_test_point_internal<struct s_large_bsp3d_types>(struct large_bsp3d const *, union real_point3d const *);
// long bsp3d_clip_line_to_leaves_internal<struct s_small_bsp3d_types>(struct bsp3d const *, long, union real_point3d const *, union real_point3d const *, void (*)(union real_point3d const *, union real_point3d const *, long, void *), void *);
// long bsp3d_clip_line_to_leaves_internal<struct s_large_bsp3d_types>(struct large_bsp3d const *, long, union real_point3d const *, union real_point3d const *, void (*)(union real_point3d const *, union real_point3d const *, long, void *), void *);
// public: static bool s_large_bsp3d_types::bsp3d_child_index_is_leaf(long);
// struct plane3d * bsp3d_get_plane_from_designator_internal<struct s_small_bsp3d_types>(struct bsp3d const *, long, bool, struct plane3d *);
// struct plane3d * bsp3d_get_plane_from_designator_internal<struct s_large_bsp3d_types>(struct large_bsp3d const *, long, bool, struct plane3d *);
// long bsp3d_nodes_test_point_internal<struct s_small_bsp3d_types>(struct bsp3d const *, long, union real_point3d const *);
// long bsp3d_super_nodes_test_point_internal<struct s_small_bsp3d_types>(struct bsp3d const *, long, union real_point3d const *);
// long bsp3d_nodes_test_point_internal<struct s_large_bsp3d_types>(struct large_bsp3d const *, long, union real_point3d const *);
// long bsp3d_super_nodes_test_point_internal<struct s_large_bsp3d_types>(struct large_bsp3d const *, long, union real_point3d const *);
// float plane3d_distance_to_point_safe(struct plane3d const *, union real_point3d const *);

//long bsp3d_test_point(class c_bsp3d_reference, union real_point3d const *)
//{
//    mangled_ppc("?bsp3d_test_point@@YAJVc_bsp3d_reference@@PBTreal_point3d@@@Z");
//};

//long bsp3d_clip_line_to_leaves(class c_bsp3d_reference, long, union real_point3d const *, union real_point3d const *, void (*)(union real_point3d const *, union real_point3d const *, long, void *), void *)
//{
//    mangled_ppc("?bsp3d_clip_line_to_leaves@@YAJVc_bsp3d_reference@@JPBTreal_point3d@@1P6AX11JPAX@Z2@Z");
//};

//struct plane3d * bsp3d_get_plane_from_designator(struct bsp3d const *, long, bool, struct plane3d *)
//{
//    mangled_ppc("?bsp3d_get_plane_from_designator@@YAPAUplane3d@@PBUbsp3d@@J_NPAU1@@Z");
//};

//struct plane3d * bsp3d_get_plane_from_designator(struct large_bsp3d const *, long, bool, struct plane3d *)
//{
//    mangled_ppc("?bsp3d_get_plane_from_designator@@YAPAUplane3d@@PBUlarge_bsp3d@@J_NPAU1@@Z");
//};

//long bsp3d_kd_plane_dimension_index_get(struct plane3d const *)
//{
//    mangled_ppc("?bsp3d_kd_plane_dimension_index_get@@YAJPBUplane3d@@@Z");
//};

//long bsp3d_test_point_internal<struct s_small_bsp3d_types>(struct bsp3d const *, union real_point3d const *)
//{
//    mangled_ppc("??$bsp3d_test_point_internal@Us_small_bsp3d_types@@@@YAJPBUbsp3d@@PBTreal_point3d@@@Z");
//};

//long bsp3d_test_point_internal<struct s_large_bsp3d_types>(struct large_bsp3d const *, union real_point3d const *)
//{
//    mangled_ppc("??$bsp3d_test_point_internal@Us_large_bsp3d_types@@@@YAJPBUlarge_bsp3d@@PBTreal_point3d@@@Z");
//};

//long bsp3d_clip_line_to_leaves_internal<struct s_small_bsp3d_types>(struct bsp3d const *, long, union real_point3d const *, union real_point3d const *, void (*)(union real_point3d const *, union real_point3d const *, long, void *), void *)
//{
//    mangled_ppc("??$bsp3d_clip_line_to_leaves_internal@Us_small_bsp3d_types@@@@YAJPBUbsp3d@@JPBTreal_point3d@@1P6AX11JPAX@Z2@Z");
//};

//long bsp3d_clip_line_to_leaves_internal<struct s_large_bsp3d_types>(struct large_bsp3d const *, long, union real_point3d const *, union real_point3d const *, void (*)(union real_point3d const *, union real_point3d const *, long, void *), void *)
//{
//    mangled_ppc("??$bsp3d_clip_line_to_leaves_internal@Us_large_bsp3d_types@@@@YAJPBUlarge_bsp3d@@JPBTreal_point3d@@1P6AX11JPAX@Z2@Z");
//};

//public: static bool s_large_bsp3d_types::bsp3d_child_index_is_leaf(long)
//{
//    mangled_ppc("?bsp3d_child_index_is_leaf@s_large_bsp3d_types@@SA_NJ@Z");
//};

//struct plane3d * bsp3d_get_plane_from_designator_internal<struct s_small_bsp3d_types>(struct bsp3d const *, long, bool, struct plane3d *)
//{
//    mangled_ppc("??$bsp3d_get_plane_from_designator_internal@Us_small_bsp3d_types@@@@YAPAUplane3d@@PBUbsp3d@@J_NPAU0@@Z");
//};

//struct plane3d * bsp3d_get_plane_from_designator_internal<struct s_large_bsp3d_types>(struct large_bsp3d const *, long, bool, struct plane3d *)
//{
//    mangled_ppc("??$bsp3d_get_plane_from_designator_internal@Us_large_bsp3d_types@@@@YAPAUplane3d@@PBUlarge_bsp3d@@J_NPAU0@@Z");
//};

//long bsp3d_nodes_test_point_internal<struct s_small_bsp3d_types>(struct bsp3d const *, long, union real_point3d const *)
//{
//    mangled_ppc("??$bsp3d_nodes_test_point_internal@Us_small_bsp3d_types@@@@YAJPBUbsp3d@@JPBTreal_point3d@@@Z");
//};

//long bsp3d_super_nodes_test_point_internal<struct s_small_bsp3d_types>(struct bsp3d const *, long, union real_point3d const *)
//{
//    mangled_ppc("??$bsp3d_super_nodes_test_point_internal@Us_small_bsp3d_types@@@@YAJPBUbsp3d@@JPBTreal_point3d@@@Z");
//};

//long bsp3d_nodes_test_point_internal<struct s_large_bsp3d_types>(struct large_bsp3d const *, long, union real_point3d const *)
//{
//    mangled_ppc("??$bsp3d_nodes_test_point_internal@Us_large_bsp3d_types@@@@YAJPBUlarge_bsp3d@@JPBTreal_point3d@@@Z");
//};

//long bsp3d_super_nodes_test_point_internal<struct s_large_bsp3d_types>(struct large_bsp3d const *, long, union real_point3d const *)
//{
//    mangled_ppc("??$bsp3d_super_nodes_test_point_internal@Us_large_bsp3d_types@@@@YAJPBUlarge_bsp3d@@JPBTreal_point3d@@@Z");
//};

//float plane3d_distance_to_point_safe(struct plane3d const *, union real_point3d const *)
//{
//    mangled_ppc("?plane3d_distance_to_point_safe@@YAMPBUplane3d@@PBTreal_point3d@@@Z");
//};

