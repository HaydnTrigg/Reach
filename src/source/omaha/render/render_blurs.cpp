/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static bool c_blur::g_antialias_enabled; // "?g_antialias_enabled@c_blur@@2_NA"
// public: static bool c_blur::g_motion_blur_enabled; // "?g_motion_blur_enabled@c_blur@@2_NA"
// public: static float c_blur::g_motion_blur_fps_threshold; // "?g_motion_blur_fps_threshold@c_blur@@2MA"
// public: static float c_blur::g_antialias_fps_threshold; // "?g_antialias_fps_threshold@c_blur@@2MA"
// long g_object_to_use_special_alpha_on; // "?g_object_to_use_special_alpha_on@@3JA"
// long g_physics_object_to_use_special_alpha_on; // "?g_physics_object_to_use_special_alpha_on@@3JA"
// float g_motion_blur_max; // "?g_motion_blur_max@@3MA"
// float g_motion_blur_scale; // "?g_motion_blur_scale@@3MA"
// float g_motion_blur_center_falloff_x; // "?g_motion_blur_center_falloff_x@@3MA"
// float g_motion_blur_center_falloff_y; // "?g_motion_blur_center_falloff_y@@3MA"
// float g_motion_blur_expected_dt; // "?g_motion_blur_expected_dt@@3MA"
// long g_motion_blur_max_viewport_count; // "?g_motion_blur_max_viewport_count@@3JA"
// public: static bool c_blur::g_antialias_compare; // "?g_antialias_compare@c_blur@@2_NA"
// public: static class c_blur *c_blur::g_current_blur; // "?g_current_blur@c_blur@@2PAV1@A"

// public: void c_blur::clear_last_frame_state(void);
// public: static void c_blur::shift_projection_matrix_for_antialiasing(struct render_projection *);
// public: void c_blur::end_view(struct render_projection *, struct render_camera const *);
// public: void c_blur::setup_for_camera(struct render_camera const *, long, bool, bool);
// public: void c_blur::setup_general_view_constants(void);
// public: static void c_blur::setup_object_constants(union vector3d const *, long, bool, bool);
// public: static float c_screenspace_antialias_scale_hack::apply_first_person_weapon_speed_adjust(float);
// public: static float c_screenspace_antialias_scale_hack::apply_special_object_speed_adjust(float);
// public: static void c_blur::setup_decorator_constants(void);
// public: static void c_blur::setup_imposter_constants(void);
// public: unsigned char c_blur::get_default_alpha_clear_value(void);
// void update_motion_blur_globals(class c_rasterizer_globals *);
// void set_motion_blur_parameters(enum e_output_user_index, union vector4d *);
// public: void c_blur::draw_full_window_displacement_and_motion_blur(enum e_output_user_index, union short_rectangle2d const *, union vector3d const *);
// D3DDevice_SetPixelShaderConstantF;
// D3DTag_ShaderConstantMask;
// D3DTag_SubsetMask;
// D3DDevice_SetPixelShaderConstantF1;
// D3DVECTOR4_SetX;
// D3DVECTOR4_SetY;
// D3DVECTOR4_SetZ;
// D3DVECTOR4_SetW;
// D3DTag_Index;
// D3DTagCollection_Set;
// union real64_vector3d * double_vector3d_from_real_vector3d(union real64_vector3d *, union vector3d const *);
// double normalize3d(union real64_vector3d *);
// union real64_vector3d * scale_vector3d(union real64_vector3d const *, double, union real64_vector3d *);
// double magnitude3d(union real64_vector3d const *);
// double square_root(double);
// double magnitude_squared3d(union real64_vector3d const *);
// double dot_product3d(union real64_vector3d const *, union real64_vector3d const *);

//public: void c_blur::clear_last_frame_state(void)
//{
//    mangled_ppc("?clear_last_frame_state@c_blur@@QAAXXZ");
//};

//public: static void c_blur::shift_projection_matrix_for_antialiasing(struct render_projection *)
//{
//    mangled_ppc("?shift_projection_matrix_for_antialiasing@c_blur@@SAXPAUrender_projection@@@Z");
//};

//public: void c_blur::end_view(struct render_projection *, struct render_camera const *)
//{
//    mangled_ppc("?end_view@c_blur@@QAAXPAUrender_projection@@PBUrender_camera@@@Z");
//};

//public: void c_blur::setup_for_camera(struct render_camera const *, long, bool, bool)
//{
//    mangled_ppc("?setup_for_camera@c_blur@@QAAXPBUrender_camera@@J_N1@Z");
//};

//public: void c_blur::setup_general_view_constants(void)
//{
//    mangled_ppc("?setup_general_view_constants@c_blur@@QAAXXZ");
//};

//public: static void c_blur::setup_object_constants(union vector3d const *, long, bool, bool)
//{
//    mangled_ppc("?setup_object_constants@c_blur@@SAXPBTvector3d@@J_N1@Z");
//};

//public: static float c_screenspace_antialias_scale_hack::apply_first_person_weapon_speed_adjust(float)
//{
//    mangled_ppc("?apply_first_person_weapon_speed_adjust@c_screenspace_antialias_scale_hack@@SAMM@Z");
//};

//public: static float c_screenspace_antialias_scale_hack::apply_special_object_speed_adjust(float)
//{
//    mangled_ppc("?apply_special_object_speed_adjust@c_screenspace_antialias_scale_hack@@SAMM@Z");
//};

//public: static void c_blur::setup_decorator_constants(void)
//{
//    mangled_ppc("?setup_decorator_constants@c_blur@@SAXXZ");
//};

//public: static void c_blur::setup_imposter_constants(void)
//{
//    mangled_ppc("?setup_imposter_constants@c_blur@@SAXXZ");
//};

//public: unsigned char c_blur::get_default_alpha_clear_value(void)
//{
//    mangled_ppc("?get_default_alpha_clear_value@c_blur@@QAAEXZ");
//};

//void update_motion_blur_globals(class c_rasterizer_globals *)
//{
//    mangled_ppc("?update_motion_blur_globals@@YAXPAVc_rasterizer_globals@@@Z");
//};

//void set_motion_blur_parameters(enum e_output_user_index, union vector4d *)
//{
//    mangled_ppc("?set_motion_blur_parameters@@YAXW4e_output_user_index@@PATvector4d@@@Z");
//};

//public: void c_blur::draw_full_window_displacement_and_motion_blur(enum e_output_user_index, union short_rectangle2d const *, union vector3d const *)
//{
//    mangled_ppc("?draw_full_window_displacement_and_motion_blur@c_blur@@QAAXW4e_output_user_index@@PBTshort_rectangle2d@@PBTvector3d@@@Z");
//};

//D3DDevice_SetPixelShaderConstantF
//{
//    mangled_ppc("D3DDevice_SetPixelShaderConstantF");
//};

//D3DTag_ShaderConstantMask
//{
//    mangled_ppc("D3DTag_ShaderConstantMask");
//};

//D3DTag_SubsetMask
//{
//    mangled_ppc("D3DTag_SubsetMask");
//};

//D3DDevice_SetPixelShaderConstantF1
//{
//    mangled_ppc("D3DDevice_SetPixelShaderConstantF1");
//};

//D3DVECTOR4_SetX
//{
//    mangled_ppc("D3DVECTOR4_SetX");
//};

//D3DVECTOR4_SetY
//{
//    mangled_ppc("D3DVECTOR4_SetY");
//};

//D3DVECTOR4_SetZ
//{
//    mangled_ppc("D3DVECTOR4_SetZ");
//};

//D3DVECTOR4_SetW
//{
//    mangled_ppc("D3DVECTOR4_SetW");
//};

//D3DTag_Index
//{
//    mangled_ppc("D3DTag_Index");
//};

//D3DTagCollection_Set
//{
//    mangled_ppc("D3DTagCollection_Set");
//};

//union real64_vector3d * double_vector3d_from_real_vector3d(union real64_vector3d *, union vector3d const *)
//{
//    mangled_ppc("?double_vector3d_from_real_vector3d@@YAPATreal64_vector3d@@PAT1@PBTvector3d@@@Z");
//};

//double normalize3d(union real64_vector3d *)
//{
//    mangled_ppc("?normalize3d@@YANPATreal64_vector3d@@@Z");
//};

//union real64_vector3d * scale_vector3d(union real64_vector3d const *, double, union real64_vector3d *)
//{
//    mangled_ppc("?scale_vector3d@@YAPATreal64_vector3d@@PBT1@NPAT1@@Z");
//};

//double magnitude3d(union real64_vector3d const *)
//{
//    mangled_ppc("?magnitude3d@@YANPBTreal64_vector3d@@@Z");
//};

//double square_root(double)
//{
//    mangled_ppc("?square_root@@YANN@Z");
//};

//double magnitude_squared3d(union real64_vector3d const *)
//{
//    mangled_ppc("?magnitude_squared3d@@YANPBTreal64_vector3d@@@Z");
//};

//double dot_product3d(union real64_vector3d const *, union real64_vector3d const *)
//{
//    mangled_ppc("?dot_product3d@@YANPBTreal64_vector3d@@0@Z");
//};

