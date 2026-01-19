/* ---------- headers */

#include "omaha\math\convex_hulls.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// float global_convex_hull3d_delta; // "?global_convex_hull3d_delta@@3MA"
// float global_convex_hull3d_epsilon; // "?global_convex_hull3d_epsilon@@3MA"

// struct geosphere * geosphere_new(short);
// void geosphere_dispose(struct geosphere *);
// void subdivide_triangle(struct geosphere *, short, short, short, short *, short *, short *);
// short get_face_vertex(struct geosphere *, short, short, short, short, short, short *, short *, short *);
// short get_edge_vertex(struct geosphere *, short, short, short, short *, short *);
// void calculate_vertex(struct geosphere *, short, short, short, short, short);
// void build_torus(struct real_matrix4x3const *, short *, short *, union real_point3d *, union real_point2d *, short *, short, float, short, float);
// long convex_hull2d_create_from_points3d(long, union real_point3d const *, union real_point2d *);
// long convex_hull2d_create_from_points2d(long, union real_point2d const *, union real_point2d *);
// short convex_hull2d(short, union real_point2d const *, short *);
// short points_dimension2d(short, union real_point2d const *);
// bool convex_hull2d_verify(short, union real_point2d const *, short, short const *, float);
// bool convex_hull2d_test_circle(short, union real_point2d const *, union real_point2d const *, float);
// bool convex_hull2d_test_point(short, union real_point2d const *, union real_point2d const *, float);
// bool convex_hull2d_test_point_indexed(short, short const *, union real_point2d const *, union real_point2d const *, float);
// short convex_hull2d_intersect(short, union real_point2d const *, short, union real_point2d const *, short, union real_point2d *, float);
// short convex_hull2d_intersect_new(short, union real_point2d const *, short, union real_point2d const *, short, union real_point2d *, float);
// bool convex_hull2d_intersects_box2d(long, union real_point2d const *, union real_rectangle2d const *);
// bool convex_hull2d_test_vector(short, union real_point2d const *, union real_point2d const *, union vector2d const *, float *, float *);
// ?convex_polygon2d_clip_to_plane_vmx@@YAFJPIBTreal_point2d@@PIBUplane2d@@JPIAT1@M@Z;
// __lvx;
// __stvx;
// short convex_polygon2d_clip_to_plane_cpp(short, union real_point2d const *, struct plane2d const *, short, union real_point2d *, float);
// short convex_polygon2d_clip_to_plane_new(short, union real_point2d const *, struct plane2d const *, short, union real_point2d *, float);
// short convex_polygon2d_clip_to_plane(short, union real_point2d const *, struct plane2d const *, short, union real_point2d *, unsigned long *, bool *, float);
// bool convex_polygon2d_verify(short, union real_point2d const *);
// short convex_polygon3d_clip_to_plane(short, union real_point3d const *, struct plane3d const *, short, union real_point3d *, bool *, float, bool);
// bool convex_polygon3d_verify(short, union real_point3d const *);
// enum e_convex_hull3d_result convex_hull3d_begin(short, union real_point3d const *, short, struct vertex3d *, short, struct edge3d *, short, struct surface3d *);
// enum e_convex_hull3d_result convex_hull3d_expand(short, union real_point3d const *, short, struct vertex3d *, short, struct edge3d *, short, struct surface3d *, short);
// enum e_convex_hull3d_result convex_hull3d(short, union real_point3d const *, short, struct vertex3d *, short, struct edge3d *, short, struct surface3d *);
// bool convex_hull3d_verify(short, union real_point3d const *, short, struct vertex3d const *, short, struct edge3d const *, short, struct surface3d const *);
// bool convex_hull3d_test_point(short, union real_point3d const *, short, struct vertex3d const *, short, struct edge3d const *, short, struct surface3d const *, union real_point3d const *);
// bool convex_hull3d_test_vector(short, union real_point3d const *, short, struct vertex3d const *, short, struct edge3d const *, short, struct surface3d const *, union real_point3d const *, union vector3d const *, float *, float *);

//struct geosphere * geosphere_new(short)
//{
//    mangled_ppc("?geosphere_new@@YAPAUgeosphere@@F@Z");
//};

//void geosphere_dispose(struct geosphere *)
//{
//    mangled_ppc("?geosphere_dispose@@YAXPAUgeosphere@@@Z");
//};

//void subdivide_triangle(struct geosphere *, short, short, short, short *, short *, short *)
//{
//    mangled_ppc("?subdivide_triangle@@YAXPAUgeosphere@@FFFPAF11@Z");
//};

//short get_face_vertex(struct geosphere *, short, short, short, short, short, short *, short *, short *)
//{
//    mangled_ppc("?get_face_vertex@@YAFPAUgeosphere@@FFFFFPAF11@Z");
//};

//short get_edge_vertex(struct geosphere *, short, short, short, short *, short *)
//{
//    mangled_ppc("?get_edge_vertex@@YAFPAUgeosphere@@FFFPAF1@Z");
//};

//void calculate_vertex(struct geosphere *, short, short, short, short, short)
//{
//    mangled_ppc("?calculate_vertex@@YAXPAUgeosphere@@FFFFF@Z");
//};

//void build_torus(struct real_matrix4x3const *, short *, short *, union real_point3d *, union real_point2d *, short *, short, float, short, float)
//{
//    mangled_ppc("?build_torus@@YAXPBUreal_matrix4x3@@PAF1PATreal_point3d@@PATreal_point2d@@1FMFM@Z");
//};

//long convex_hull2d_create_from_points3d(long, union real_point3d const *, union real_point2d *)
//{
//    mangled_ppc("?convex_hull2d_create_from_points3d@@YAJJPBTreal_point3d@@PATreal_point2d@@@Z");
//};

//long convex_hull2d_create_from_points2d(long, union real_point2d const *, union real_point2d *)
//{
//    mangled_ppc("?convex_hull2d_create_from_points2d@@YAJJPBTreal_point2d@@PAT1@@Z");
//};

//short convex_hull2d(short, union real_point2d const *, short *)
//{
//    mangled_ppc("?convex_hull2d@@YAFFPBTreal_point2d@@PAF@Z");
//};

//short points_dimension2d(short, union real_point2d const *)
//{
//    mangled_ppc("?points_dimension2d@@YAFFPBTreal_point2d@@@Z");
//};

//bool convex_hull2d_verify(short, union real_point2d const *, short, short const *, float)
//{
//    mangled_ppc("?convex_hull2d_verify@@YA_NFPBTreal_point2d@@FPBFM@Z");
//};

//bool convex_hull2d_test_circle(short, union real_point2d const *, union real_point2d const *, float)
//{
//    mangled_ppc("?convex_hull2d_test_circle@@YA_NFPBTreal_point2d@@0M@Z");
//};

//bool convex_hull2d_test_point(short, union real_point2d const *, union real_point2d const *, float)
//{
//    mangled_ppc("?convex_hull2d_test_point@@YA_NFPBTreal_point2d@@0M@Z");
//};

//bool convex_hull2d_test_point_indexed(short, short const *, union real_point2d const *, union real_point2d const *, float)
//{
//    mangled_ppc("?convex_hull2d_test_point_indexed@@YA_NFPBFPBTreal_point2d@@1M@Z");
//};

//short convex_hull2d_intersect(short, union real_point2d const *, short, union real_point2d const *, short, union real_point2d *, float)
//{
//    mangled_ppc("?convex_hull2d_intersect@@YAFFPBTreal_point2d@@F0FPAT1@M@Z");
//};

//short convex_hull2d_intersect_new(short, union real_point2d const *, short, union real_point2d const *, short, union real_point2d *, float)
//{
//    mangled_ppc("?convex_hull2d_intersect_new@@YAFFPBTreal_point2d@@F0FPAT1@M@Z");
//};

//bool convex_hull2d_intersects_box2d(long, union real_point2d const *, union real_rectangle2d const *)
//{
//    mangled_ppc("?convex_hull2d_intersects_box2d@@YA_NJPBTreal_point2d@@PBTreal_rectangle2d@@@Z");
//};

//bool convex_hull2d_test_vector(short, union real_point2d const *, union real_point2d const *, union vector2d const *, float *, float *)
//{
//    mangled_ppc("?convex_hull2d_test_vector@@YA_NFPBTreal_point2d@@0PBTvector2d@@PAM2@Z");
//};

//?convex_polygon2d_clip_to_plane_vmx@@YAFJPIBTreal_point2d@@PIBUplane2d@@JPIAT1@M@Z
//{
//    mangled_ppc("?convex_polygon2d_clip_to_plane_vmx@@YAFJPIBTreal_point2d@@PIBUplane2d@@JPIAT1@M@Z");
//};

//__lvx
//{
//    mangled_ppc("__lvx");
//};

//__stvx
//{
//    mangled_ppc("__stvx");
//};

//short convex_polygon2d_clip_to_plane_cpp(short, union real_point2d const *, struct plane2d const *, short, union real_point2d *, float)
//{
//    mangled_ppc("?convex_polygon2d_clip_to_plane_cpp@@YAFFPBTreal_point2d@@PBUplane2d@@FPAT1@M@Z");
//};

//short convex_polygon2d_clip_to_plane_new(short, union real_point2d const *, struct plane2d const *, short, union real_point2d *, float)
//{
//    mangled_ppc("?convex_polygon2d_clip_to_plane_new@@YAFFPBTreal_point2d@@PBUplane2d@@FPAT1@M@Z");
//};

//short convex_polygon2d_clip_to_plane(short, union real_point2d const *, struct plane2d const *, short, union real_point2d *, unsigned long *, bool *, float)
//{
//    mangled_ppc("?convex_polygon2d_clip_to_plane@@YAFFPBTreal_point2d@@PBUplane2d@@FPAT1@PAKPA_NM@Z");
//};

//bool convex_polygon2d_verify(short, union real_point2d const *)
//{
//    mangled_ppc("?convex_polygon2d_verify@@YA_NFPBTreal_point2d@@@Z");
//};

//short convex_polygon3d_clip_to_plane(short, union real_point3d const *, struct plane3d const *, short, union real_point3d *, bool *, float, bool)
//{
//    mangled_ppc("?convex_polygon3d_clip_to_plane@@YAFFPBTreal_point3d@@PBUplane3d@@FPAT1@PA_NM_N@Z");
//};

//bool convex_polygon3d_verify(short, union real_point3d const *)
//{
//    mangled_ppc("?convex_polygon3d_verify@@YA_NFPBTreal_point3d@@@Z");
//};

//enum e_convex_hull3d_result convex_hull3d_begin(short, union real_point3d const *, short, struct vertex3d *, short, struct edge3d *, short, struct surface3d *)
//{
//    mangled_ppc("?convex_hull3d_begin@@YA?AW4e_convex_hull3d_result@@FPBTreal_point3d@@FPAUvertex3d@@FPAUedge3d@@FPAUsurface3d@@@Z");
//};

//enum e_convex_hull3d_result convex_hull3d_expand(short, union real_point3d const *, short, struct vertex3d *, short, struct edge3d *, short, struct surface3d *, short)
//{
//    mangled_ppc("?convex_hull3d_expand@@YA?AW4e_convex_hull3d_result@@FPBTreal_point3d@@FPAUvertex3d@@FPAUedge3d@@FPAUsurface3d@@F@Z");
//};

//enum e_convex_hull3d_result convex_hull3d(short, union real_point3d const *, short, struct vertex3d *, short, struct edge3d *, short, struct surface3d *)
//{
//    mangled_ppc("?convex_hull3d@@YA?AW4e_convex_hull3d_result@@FPBTreal_point3d@@FPAUvertex3d@@FPAUedge3d@@FPAUsurface3d@@@Z");
//};

//bool convex_hull3d_verify(short, union real_point3d const *, short, struct vertex3d const *, short, struct edge3d const *, short, struct surface3d const *)
//{
//    mangled_ppc("?convex_hull3d_verify@@YA_NFPBTreal_point3d@@FPBUvertex3d@@FPBUedge3d@@FPBUsurface3d@@@Z");
//};

//bool convex_hull3d_test_point(short, union real_point3d const *, short, struct vertex3d const *, short, struct edge3d const *, short, struct surface3d const *, union real_point3d const *)
//{
//    mangled_ppc("?convex_hull3d_test_point@@YA_NFPBTreal_point3d@@FPBUvertex3d@@FPBUedge3d@@FPBUsurface3d@@0@Z");
//};

//bool convex_hull3d_test_vector(short, union real_point3d const *, short, struct vertex3d const *, short, struct edge3d const *, short, struct surface3d const *, union real_point3d const *, union vector3d const *, float *, float *)
//{
//    mangled_ppc("?convex_hull3d_test_vector@@YA_NFPBTreal_point3d@@FPBUvertex3d@@FPBUedge3d@@FPBUsurface3d@@0PBTvector3d@@PAM5@Z");
//};

