/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// void interface_get_current_display_or_window_settings(union short_rectangle2d *, union short_rectangle2d *, union short_rectangle2d *, union short_rectangle2d *);
// void interface_get_current_display_settings(union short_rectangle2d *, union short_rectangle2d *, union short_rectangle2d *, union short_rectangle2d *);
// void interface_get_current_window_settings(union short_rectangle2d *, union short_rectangle2d *, union short_rectangle2d *, union short_rectangle2d *);
// enum e_authored_ui_aspect_ratio interface_get_closest_authored_ui_aspect_ratio(void);
// union int16_point2d interface_get_closest_authoring_screen_dimensions(void);
// union int16_point2d interface_get_content_authoring_screen_dimensions(void);
// union vector2d interface_get_aspect_ratio_scaling(void);
// union vector2d interface_get_authoring_to_target_dimensions_scaling(void);
// union vector2d interface_get_authoring_aspect_conversion_scaling(enum e_authored_ui_aspect_ratio);
// void interface_scale_screenspace_vertices_for_xenon_scaler(struct rasterizer_vertex_screen *, long, union vector2d const *);
// void interface_scale_points_for_xenon_scaler(union int16_point2d *, long, union vector2d const *);
// void interface_scale_points_for_xenon_scaler(union real_point2d *, long, union vector2d const *);
// void interface_scale_rectangle2d_for_xenon_scaler(union short_rectangle2d *, union vector2d const *);
// void interface_scale_real_rectangle2d_for_xenon_scaler(union real_rectangle2d *, union vector2d const *);
// union real_point3d * interface_get_render_camera_position(union real_point3d *);
// struct render_camera const * get_render_camera(void);
// union vector3d * interface_get_render_camera_forward(union vector3d *);
// union vector3d * interface_get_render_camera_up(union vector3d *);
// bool interface_is_split_screen(void);
// bool interface_is_hi_rez_split_screen(void);
// void calculate_aspect_ratio_scaling(void);
// void calculate_authoring_to_target_dimensions_scaling(void);

//void interface_get_current_display_or_window_settings(union short_rectangle2d *, union short_rectangle2d *, union short_rectangle2d *, union short_rectangle2d *)
//{
//    mangled_ppc("?interface_get_current_display_or_window_settings@@YAXPATshort_rectangle2d@@000@Z");
//};

//void interface_get_current_display_settings(union short_rectangle2d *, union short_rectangle2d *, union short_rectangle2d *, union short_rectangle2d *)
//{
//    mangled_ppc("?interface_get_current_display_settings@@YAXPATshort_rectangle2d@@000@Z");
//};

//void interface_get_current_window_settings(union short_rectangle2d *, union short_rectangle2d *, union short_rectangle2d *, union short_rectangle2d *)
//{
//    mangled_ppc("?interface_get_current_window_settings@@YAXPATshort_rectangle2d@@000@Z");
//};

//enum e_authored_ui_aspect_ratio interface_get_closest_authored_ui_aspect_ratio(void)
//{
//    mangled_ppc("?interface_get_closest_authored_ui_aspect_ratio@@YA?AW4e_authored_ui_aspect_ratio@@XZ");
//};

//union int16_point2d interface_get_closest_authoring_screen_dimensions(void)
//{
//    mangled_ppc("?interface_get_closest_authoring_screen_dimensions@@YA?ATint16_point2d@@XZ");
//};

//union int16_point2d interface_get_content_authoring_screen_dimensions(void)
//{
//    mangled_ppc("?interface_get_content_authoring_screen_dimensions@@YA?ATint16_point2d@@XZ");
//};

//union vector2d interface_get_aspect_ratio_scaling(void)
//{
//    mangled_ppc("?interface_get_aspect_ratio_scaling@@YA?ATvector2d@@XZ");
//};

//union vector2d interface_get_authoring_to_target_dimensions_scaling(void)
//{
//    mangled_ppc("?interface_get_authoring_to_target_dimensions_scaling@@YA?ATvector2d@@XZ");
//};

//union vector2d interface_get_authoring_aspect_conversion_scaling(enum e_authored_ui_aspect_ratio)
//{
//    mangled_ppc("?interface_get_authoring_aspect_conversion_scaling@@YA?ATvector2d@@W4e_authored_ui_aspect_ratio@@@Z");
//};

//void interface_scale_screenspace_vertices_for_xenon_scaler(struct rasterizer_vertex_screen *, long, union vector2d const *)
//{
//    mangled_ppc("?interface_scale_screenspace_vertices_for_xenon_scaler@@YAXPAUrasterizer_vertex_screen@@JPBTvector2d@@@Z");
//};

//void interface_scale_points_for_xenon_scaler(union int16_point2d *, long, union vector2d const *)
//{
//    mangled_ppc("?interface_scale_points_for_xenon_scaler@@YAXPATint16_point2d@@JPBTvector2d@@@Z");
//};

//void interface_scale_points_for_xenon_scaler(union real_point2d *, long, union vector2d const *)
//{
//    mangled_ppc("?interface_scale_points_for_xenon_scaler@@YAXPATreal_point2d@@JPBTvector2d@@@Z");
//};

//void interface_scale_rectangle2d_for_xenon_scaler(union short_rectangle2d *, union vector2d const *)
//{
//    mangled_ppc("?interface_scale_rectangle2d_for_xenon_scaler@@YAXPATshort_rectangle2d@@PBTvector2d@@@Z");
//};

//void interface_scale_real_rectangle2d_for_xenon_scaler(union real_rectangle2d *, union vector2d const *)
//{
//    mangled_ppc("?interface_scale_real_rectangle2d_for_xenon_scaler@@YAXPATreal_rectangle2d@@PBTvector2d@@@Z");
//};

//union real_point3d * interface_get_render_camera_position(union real_point3d *)
//{
//    mangled_ppc("?interface_get_render_camera_position@@YAPATreal_point3d@@PAT1@@Z");
//};

//struct render_camera const * get_render_camera(void)
//{
//    mangled_ppc("?get_render_camera@@YAPBUrender_camera@@XZ");
//};

//union vector3d * interface_get_render_camera_forward(union vector3d *)
//{
//    mangled_ppc("?interface_get_render_camera_forward@@YAPATvector3d@@PAT1@@Z");
//};

//union vector3d * interface_get_render_camera_up(union vector3d *)
//{
//    mangled_ppc("?interface_get_render_camera_up@@YAPATvector3d@@PAT1@@Z");
//};

//bool interface_is_split_screen(void)
//{
//    mangled_ppc("?interface_is_split_screen@@YA_NXZ");
//};

//bool interface_is_hi_rez_split_screen(void)
//{
//    mangled_ppc("?interface_is_hi_rez_split_screen@@YA_NXZ");
//};

//void calculate_aspect_ratio_scaling(void)
//{
//    mangled_ppc("?calculate_aspect_ratio_scaling@@YAXXZ");
//};

//void calculate_authoring_to_target_dimensions_scaling(void)
//{
//    mangled_ppc("?calculate_authoring_to_target_dimensions_scaling@@YAXXZ");
//};

