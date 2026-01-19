/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: s_cui_render_camera::s_cui_render_camera(void);
// public: c_cui_render_view::c_cui_render_view(enum c_cui_render_view::e_camera, enum c_cui_render_view::e_projection);
// public: void c_cui_render_view::initialize(struct s_cui_overlay_camera_definition const *, float, float);
// public: c_cui_render_views::c_cui_render_views(enum e_window_index, enum e_surface);
// void get_overlay_camera_definition(enum e_window_index, struct s_cui_overlay_camera_definition *);
// void build_ui_to_world_matrix(float, float, struct real_matrix4x3*);
// void build_2d_camera_matrix(struct s_cui_overlay_camera_definition const *, struct real_matrix4x3*);
// void build_3d_camera(struct s_cui_overlay_camera_definition const *, float, float, struct s_cui_render_camera *);
// void get_camera_rotation_matrices(struct s_cui_overlay_camera_definition const *, struct real_matrix4x3*, struct real_matrix4x3*);
// union real_point3d get_camera_position(struct s_cui_overlay_camera_definition const *, struct real_matrix4x3const *, float, float);
// union real_point3d get_camera_pivot_corner_point(enum e_cui_camera_pivot_corner, float, float);
// void build_3d_camera_matrix(struct s_cui_render_camera const *, struct real_matrix4x3*);
// void build_perspective_projection_matrix(struct s_cui_overlay_camera_definition const *, float, float, float *);
// void build_orthographic_projection_matrix(struct s_cui_overlay_camera_definition const *, float, float, float *);
// public: class c_enum_no_init<enum e_cui_camera_pivot_corner, char, 0, 4, struct s_default_enum_string_resolver> & c_enum_no_init<enum e_cui_camera_pivot_corner, char, 0, 4, struct s_default_enum_string_resolver>::operator=(enum e_cui_camera_pivot_corner);
// public: enum e_cui_camera_pivot_corner c_enum_no_init<enum e_cui_camera_pivot_corner, char, 0, 4, struct s_default_enum_string_resolver>::operator enum e_cui_camera_pivot_corner(void) const;
// public: struct D3DXMATRIX & D3DXMATRIX::operator=(struct D3DXMATRIX const &);
// public: struct D3DXMATRIX D3DXMATRIX::operator*(struct D3DXMATRIX const &) const;
// struct D3DXMATRIX * D3DXMatrixIdentity(struct D3DXMATRIX *);

//public: s_cui_render_camera::s_cui_render_camera(void)
//{
//    mangled_ppc("??0s_cui_render_camera@@QAA@XZ");
//};

//public: c_cui_render_view::c_cui_render_view(enum c_cui_render_view::e_camera, enum c_cui_render_view::e_projection)
//{
//    mangled_ppc("??0c_cui_render_view@@QAA@W4e_camera@0@W4e_projection@0@@Z");
//};

//public: void c_cui_render_view::initialize(struct s_cui_overlay_camera_definition const *, float, float)
//{
//    mangled_ppc("?initialize@c_cui_render_view@@QAAXPBUs_cui_overlay_camera_definition@@MM@Z");
//};

//public: c_cui_render_views::c_cui_render_views(enum e_window_index, enum e_surface)
//{
//    mangled_ppc("??0c_cui_render_views@@QAA@W4e_window_index@@W4e_surface@@@Z");
//};

//void get_overlay_camera_definition(enum e_window_index, struct s_cui_overlay_camera_definition *)
//{
//    mangled_ppc("?get_overlay_camera_definition@@YAXW4e_window_index@@PAUs_cui_overlay_camera_definition@@@Z");
//};

//void build_ui_to_world_matrix(float, float, struct real_matrix4x3*)
//{
//    mangled_ppc("?build_ui_to_world_matrix@@YAXMMPAUreal_matrix4x3@@@Z");
//};

//void build_2d_camera_matrix(struct s_cui_overlay_camera_definition const *, struct real_matrix4x3*)
//{
//    mangled_ppc("?build_2d_camera_matrix@@YAXPBUs_cui_overlay_camera_definition@@PAUreal_matrix4x3@@@Z");
//};

//void build_3d_camera(struct s_cui_overlay_camera_definition const *, float, float, struct s_cui_render_camera *)
//{
//    mangled_ppc("?build_3d_camera@@YAXPBUs_cui_overlay_camera_definition@@MMPAUs_cui_render_camera@@@Z");
//};

//void get_camera_rotation_matrices(struct s_cui_overlay_camera_definition const *, struct real_matrix4x3*, struct real_matrix4x3*)
//{
//    mangled_ppc("?get_camera_rotation_matrices@@YAXPBUs_cui_overlay_camera_definition@@PAUreal_matrix4x3@@1@Z");
//};

//union real_point3d get_camera_position(struct s_cui_overlay_camera_definition const *, struct real_matrix4x3const *, float, float)
//{
//    mangled_ppc("?get_camera_position@@YA?ATreal_point3d@@PBUs_cui_overlay_camera_definition@@PBUreal_matrix4x3@@MM@Z");
//};

//union real_point3d get_camera_pivot_corner_point(enum e_cui_camera_pivot_corner, float, float)
//{
//    mangled_ppc("?get_camera_pivot_corner_point@@YA?ATreal_point3d@@W4e_cui_camera_pivot_corner@@MM@Z");
//};

//void build_3d_camera_matrix(struct s_cui_render_camera const *, struct real_matrix4x3*)
//{
//    mangled_ppc("?build_3d_camera_matrix@@YAXPBUs_cui_render_camera@@PAUreal_matrix4x3@@@Z");
//};

//void build_perspective_projection_matrix(struct s_cui_overlay_camera_definition const *, float, float, float *)
//{
//    mangled_ppc("?build_perspective_projection_matrix@@YAXPBUs_cui_overlay_camera_definition@@MMPAM@Z");
//};

//void build_orthographic_projection_matrix(struct s_cui_overlay_camera_definition const *, float, float, float *)
//{
//    mangled_ppc("?build_orthographic_projection_matrix@@YAXPBUs_cui_overlay_camera_definition@@MMPAM@Z");
//};

//public: class c_enum_no_init<enum e_cui_camera_pivot_corner, char, 0, 4, struct s_default_enum_string_resolver> & c_enum_no_init<enum e_cui_camera_pivot_corner, char, 0, 4, struct s_default_enum_string_resolver>::operator=(enum e_cui_camera_pivot_corner)
//{
//    mangled_ppc("??4?$c_enum_no_init@W4e_cui_camera_pivot_corner@@D$0A@$03Us_default_enum_string_resolver@@@@QAAAAV0@W4e_cui_camera_pivot_corner@@@Z");
//};

//public: enum e_cui_camera_pivot_corner c_enum_no_init<enum e_cui_camera_pivot_corner, char, 0, 4, struct s_default_enum_string_resolver>::operator enum e_cui_camera_pivot_corner(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_cui_camera_pivot_corner@@D$0A@$03Us_default_enum_string_resolver@@@@QBA?AW4e_cui_camera_pivot_corner@@XZ");
//};

//public: struct D3DXMATRIX & D3DXMATRIX::operator=(struct D3DXMATRIX const &)
//{
//    mangled_ppc("??4D3DXMATRIX@@QAAAAU0@ABU0@@Z");
//};

//public: struct D3DXMATRIX D3DXMATRIX::operator*(struct D3DXMATRIX const &) const
//{
//    mangled_ppc("??DD3DXMATRIX@@QBA?AU0@ABU0@@Z");
//};

//struct D3DXMATRIX * D3DXMatrixIdentity(struct D3DXMATRIX *)
//{
//    mangled_ppc("?D3DXMatrixIdentity@@YAPAUD3DXMATRIX@@PAU1@@Z");
//};

