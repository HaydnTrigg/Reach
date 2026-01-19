/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// float render_debug_aspect_ratio_scale; // "?render_debug_aspect_ratio_scale@@3MA"
// bool g_increase_fullscreen_fov_during_cinematics; // "?g_increase_fullscreen_fov_during_cinematics@@3_NA"
// bool g_reduce_widescreen_fov_during_cinematics; // "?g_reduce_widescreen_fov_during_cinematics@@3_NA"
// bool debug_no_frustum_clip; // "?debug_no_frustum_clip@@3_NA"
// bool debug_camera_projection; // "?debug_camera_projection@@3_NA"

// void render_view_compute_all_bounds(long, long, struct render_camera *);
// void calculate_safe_bounds(union short_rectangle2d const *, union short_rectangle2d const *, union short_rectangle2d *);
// void render_view_compute_window_bounds(long, long, union short_rectangle2d *, union short_rectangle2d *);
// void render_view_compute_fullscreen_bounds(struct render_camera *);
// void render_camera_build_with_z_bound(struct render_camera *, struct s_observer_result const *, float, float);
// void render_camera_build(struct render_camera *, struct s_observer_result const *);
// void render_camera_mirror(struct render_camera const *, struct render_mirror const *, struct render_camera *);
// void rectangle2d_scale_around_origin(union short_rectangle2d *, union real_point2d const *);
// bool render_camera_build_viewport_frustum_bounds(struct render_camera const *, union real_rectangle2d *);
// bool render_camera_build_clipped_frustum_bounds(struct render_camera const *, union real_rectangle2d const *, union real_rectangle2d *);
// void render_camera_build_view_parameters(struct render_camera const *, union real_rectangle2d const *, struct render_view_parameters *, float);
// void render_camera_build_projection(struct render_camera const *, union real_rectangle2d const *, struct render_projection *, float);
// void render_camera_build_orthogonal_projection(struct s_oriented_bounding_box const *, union short_rectangle2d const *, struct render_projection *);
// float render_projection_sphere_diameter_in_pixels(struct render_projection const *, union real_point3d const *, float);
// float render_projection_cube_fraction(struct render_projection const *, union real_rectangle3d const *);
// void render_camera_world_sphere_to_screen_extents(struct render_camera const *, struct render_projection const *, union real_point3d const *, float, union real_rectangle2d *);
// bool render_camera_world_to_screen(struct render_camera const *, struct render_projection const *, union real_point3d const *, union real_point2d *);
// bool render_camera_world_to_window(struct render_camera const *, struct render_projection const *, union short_rectangle2d const *, union real_point3d const *, union real_point2d *);
// bool render_camera_view_to_screen(struct render_camera const *, struct render_projection const *, union short_rectangle2d const *, union real_point3d const *, union real_point2d *);
// void render_camera_screen_to_view(struct render_camera const *, struct render_projection const *, union short_rectangle2d const *, union real_point2d const *, union vector3d *);
// void render_camera_screen_to_world(struct render_camera const *, struct render_projection const *, union real_point2d const *, union real_point3d *, union vector3d *);
// bool render_camera_project_vector_to_screen(union vector3d const *, union real_point3d const *, struct real_matrix4x3const *, union vector2d const *, bool, bool, union vector2d *);
// void render_debug_camera_projection(void);
// float cross_product_magnitude3d(union vector3d const *, union vector3d const *);
// bool valid_real_plane3d(struct plane3d const *);

//void render_view_compute_all_bounds(long, long, struct render_camera *)
//{
//    mangled_ppc("?render_view_compute_all_bounds@@YAXJJPAUrender_camera@@@Z");
//};

//void calculate_safe_bounds(union short_rectangle2d const *, union short_rectangle2d const *, union short_rectangle2d *)
//{
//    mangled_ppc("?calculate_safe_bounds@@YAXPBTshort_rectangle2d@@0PAT1@@Z");
//};

//void render_view_compute_window_bounds(long, long, union short_rectangle2d *, union short_rectangle2d *)
//{
//    mangled_ppc("?render_view_compute_window_bounds@@YAXJJPATshort_rectangle2d@@0@Z");
//};

//void render_view_compute_fullscreen_bounds(struct render_camera *)
//{
//    mangled_ppc("?render_view_compute_fullscreen_bounds@@YAXPAUrender_camera@@@Z");
//};

//void render_camera_build_with_z_bound(struct render_camera *, struct s_observer_result const *, float, float)
//{
//    mangled_ppc("?render_camera_build_with_z_bound@@YAXPAUrender_camera@@PBUs_observer_result@@MM@Z");
//};

//void render_camera_build(struct render_camera *, struct s_observer_result const *)
//{
//    mangled_ppc("?render_camera_build@@YAXPAUrender_camera@@PBUs_observer_result@@@Z");
//};

//void render_camera_mirror(struct render_camera const *, struct render_mirror const *, struct render_camera *)
//{
//    mangled_ppc("?render_camera_mirror@@YAXPBUrender_camera@@PBUrender_mirror@@PAU1@@Z");
//};

//void rectangle2d_scale_around_origin(union short_rectangle2d *, union real_point2d const *)
//{
//    mangled_ppc("?rectangle2d_scale_around_origin@@YAXPATshort_rectangle2d@@PBTreal_point2d@@@Z");
//};

//bool render_camera_build_viewport_frustum_bounds(struct render_camera const *, union real_rectangle2d *)
//{
//    mangled_ppc("?render_camera_build_viewport_frustum_bounds@@YA_NPBUrender_camera@@PATreal_rectangle2d@@@Z");
//};

//bool render_camera_build_clipped_frustum_bounds(struct render_camera const *, union real_rectangle2d const *, union real_rectangle2d *)
//{
//    mangled_ppc("?render_camera_build_clipped_frustum_bounds@@YA_NPBUrender_camera@@PBTreal_rectangle2d@@PAT2@@Z");
//};

//void render_camera_build_view_parameters(struct render_camera const *, union real_rectangle2d const *, struct render_view_parameters *, float)
//{
//    mangled_ppc("?render_camera_build_view_parameters@@YAXPBUrender_camera@@PBTreal_rectangle2d@@PAUrender_view_parameters@@M@Z");
//};

//void render_camera_build_projection(struct render_camera const *, union real_rectangle2d const *, struct render_projection *, float)
//{
//    mangled_ppc("?render_camera_build_projection@@YAXPBUrender_camera@@PBTreal_rectangle2d@@PAUrender_projection@@M@Z");
//};

//void render_camera_build_orthogonal_projection(struct s_oriented_bounding_box const *, union short_rectangle2d const *, struct render_projection *)
//{
//    mangled_ppc("?render_camera_build_orthogonal_projection@@YAXPBUs_oriented_bounding_box@@PBTshort_rectangle2d@@PAUrender_projection@@@Z");
//};

//float render_projection_sphere_diameter_in_pixels(struct render_projection const *, union real_point3d const *, float)
//{
//    mangled_ppc("?render_projection_sphere_diameter_in_pixels@@YAMPBUrender_projection@@PBTreal_point3d@@M@Z");
//};

//float render_projection_cube_fraction(struct render_projection const *, union real_rectangle3d const *)
//{
//    mangled_ppc("?render_projection_cube_fraction@@YAMPBUrender_projection@@PBTreal_rectangle3d@@@Z");
//};

//void render_camera_world_sphere_to_screen_extents(struct render_camera const *, struct render_projection const *, union real_point3d const *, float, union real_rectangle2d *)
//{
//    mangled_ppc("?render_camera_world_sphere_to_screen_extents@@YAXPBUrender_camera@@PBUrender_projection@@PBTreal_point3d@@MPATreal_rectangle2d@@@Z");
//};

//bool render_camera_world_to_screen(struct render_camera const *, struct render_projection const *, union real_point3d const *, union real_point2d *)
//{
//    mangled_ppc("?render_camera_world_to_screen@@YA_NPBUrender_camera@@PBUrender_projection@@PBTreal_point3d@@PATreal_point2d@@@Z");
//};

//bool render_camera_world_to_window(struct render_camera const *, struct render_projection const *, union short_rectangle2d const *, union real_point3d const *, union real_point2d *)
//{
//    mangled_ppc("?render_camera_world_to_window@@YA_NPBUrender_camera@@PBUrender_projection@@PBTshort_rectangle2d@@PBTreal_point3d@@PATreal_point2d@@@Z");
//};

//bool render_camera_view_to_screen(struct render_camera const *, struct render_projection const *, union short_rectangle2d const *, union real_point3d const *, union real_point2d *)
//{
//    mangled_ppc("?render_camera_view_to_screen@@YA_NPBUrender_camera@@PBUrender_projection@@PBTshort_rectangle2d@@PBTreal_point3d@@PATreal_point2d@@@Z");
//};

//void render_camera_screen_to_view(struct render_camera const *, struct render_projection const *, union short_rectangle2d const *, union real_point2d const *, union vector3d *)
//{
//    mangled_ppc("?render_camera_screen_to_view@@YAXPBUrender_camera@@PBUrender_projection@@PBTshort_rectangle2d@@PBTreal_point2d@@PATvector3d@@@Z");
//};

//void render_camera_screen_to_world(struct render_camera const *, struct render_projection const *, union real_point2d const *, union real_point3d *, union vector3d *)
//{
//    mangled_ppc("?render_camera_screen_to_world@@YAXPBUrender_camera@@PBUrender_projection@@PBTreal_point2d@@PATreal_point3d@@PATvector3d@@@Z");
//};

//bool render_camera_project_vector_to_screen(union vector3d const *, union real_point3d const *, struct real_matrix4x3const *, union vector2d const *, bool, bool, union vector2d *)
//{
//    mangled_ppc("?render_camera_project_vector_to_screen@@YA_NPBTvector3d@@PBTreal_point3d@@PBUreal_matrix4x3@@PBTvector2d@@_N4PAT4@@Z");
//};

//void render_debug_camera_projection(void)
//{
//    mangled_ppc("?render_debug_camera_projection@@YAXXZ");
//};

//float cross_product_magnitude3d(union vector3d const *, union vector3d const *)
//{
//    mangled_ppc("?cross_product_magnitude3d@@YAMPBTvector3d@@0@Z");
//};

//bool valid_real_plane3d(struct plane3d const *)
//{
//    mangled_ppc("?valid_real_plane3d@@YA_NPBUplane3d@@@Z");
//};

