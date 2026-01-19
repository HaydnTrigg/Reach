/* ---------- headers */

#include "omaha\render\render_lightmap_shadows.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static bool c_lightmap_shadows_view::g_debug_shadow_screenspace; // "?g_debug_shadow_screenspace@c_lightmap_shadows_view@@2_NA"
// bool render_lightmap_shadows_apply_enabled; // "?render_lightmap_shadows_apply_enabled@@3_NA"
// float shadow_fade_distance_scale; // "?shadow_fade_distance_scale@@3MA"
// float shadow_drastic_distance_scale; // "?shadow_drastic_distance_scale@@3MA"
// float shadow_reduce_distance_scale; // "?shadow_reduce_distance_scale@@3MA"
// float shadow_increase_distance_scale; // "?shadow_increase_distance_scale@@3MA"
// class c_view_stack g_lightmap_shadows_view_stack_element; // "?g_lightmap_shadows_view_stack_element@@3Vc_view_stack@@A"
// public: static bool c_lightmap_shadows_view::g_debug_shadow_bounds; // "?g_debug_shadow_bounds@c_lightmap_shadows_view@@2_NA"
// public: static bool c_lightmap_shadows_view::g_debug_shadow_bounds_solid; // "?g_debug_shadow_bounds_solid@c_lightmap_shadows_view@@2_NA"
// public: static bool c_lightmap_shadows_view::g_debug_shadow_opaque; // "?g_debug_shadow_opaque@c_lightmap_shadows_view@@2_NA"
// public: static bool c_lightmap_shadows_view::g_debug_shadow_histencil; // "?g_debug_shadow_histencil@c_lightmap_shadows_view@@2_NA"
// public: static bool c_lightmap_shadows_view::g_debug_shadow_force_hi_res; // "?g_debug_shadow_force_hi_res@c_lightmap_shadows_view@@2_NA"
// public: static bool c_lightmap_shadows_view::g_debug_objectspace_stencil_clip; // "?g_debug_objectspace_stencil_clip@c_lightmap_shadows_view@@2_NA"
// public: static bool c_lightmap_shadows_view::g_debug_force_fancy_shadows; // "?g_debug_force_fancy_shadows@c_lightmap_shadows_view@@2_NA"
// public: static bool c_lightmap_shadows_view::g_debug_force_old_shadows; // "?g_debug_force_old_shadows@c_lightmap_shadows_view@@2_NA"
// protected: static class c_lightmap_shadows_view c_lightmap_shadows_view::g_lightmap_shadows_view; // "?g_lightmap_shadows_view@c_lightmap_shadows_view@@1V1@A"

// public: static class c_view_stack * c_lightmap_shadows_view::get_view_stack_element(void);
// public: void c_lightmap_shadows_view::render(enum e_output_user_index, long);
// public: static void c_lightmap_shadows_view::object_shadow_get_potential_bounds(union real_point3d const *, float, union real_point3d *, float *);
// public: static bool c_lightmap_shadows_view::object_shadow_visible(long, struct s_oriented_bounding_box *, struct light_geometry *);
// void object_get_bounding_sphere(long, union real_point3d *, float *);
// public: static long c_lightmap_shadows_view::get_shadow_apply_shader(enum c_lightmap_shadows_view::e_shadow_mode);
// public: static void c_lightmap_shadows_view::set_shadow_generate_mode(enum c_lightmap_shadows_view::e_shadow_mode);
// protected: void c_lightmap_shadows_view::render_third_person_shadows(long, long *);
// protected: void c_lightmap_shadows_view::render_first_person_shadow(long, long);
// protected: void c_lightmap_shadows_view::submit_visibility_and_render(float, float, enum e_shadow_render_mode);
// protected: void c_lightmap_shadows_view::compute_visibility(long, long);
// protected: bool c_lightmap_shadows_view::try_to_render_blurry_shadow(long, float, float);
// void render_lightmap_shadow_calculate_radius(long, union real_point3d const *, union vector3d const *, float *, float *, bool, bool);
// bool obb_visible(struct s_oriented_bounding_box const *);
// protected: static void c_lightmap_shadows_view::render_setup_internal(void);
// protected: void c_lightmap_shadows_view::setup_camera(long, long);
// protected: void c_lightmap_shadows_view::render_shadow_generate(long, enum e_shadow_render_mode);
// struct _XMMATRIX really_safe_xmmatrix_multiply(struct _XMMATRIX const &, struct _XMMATRIX const &);
// struct _XMMATRIX really_safe_xmmatrix_transpose(struct _XMMATRIX const &);
// protected: void c_lightmap_shadows_view::render_shadow_apply(float, float, float, enum e_shadow_render_mode);
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
// protected: void c_lightmap_shadows_view::render_ambient_apply(float, float, long, long);
// void compute_shadow_resolution_pixels(float, long *, long *);
// public: static float c_lightmap_shadows_view::compute_object_shadow_resolution(struct s_performance_throttles const *, long);
// void hs_disable_cinematic_lightmap_shadow(void);
// void hs_enable_cinematic_lightmap_shadow(void);
// public: struct s_visible_object_hierarchy * c_simple_list<struct s_visible_object_hierarchy, 1024>::list_iterator_next(long *);
// public: struct s_visible_object_hierarchy * c_simple_list<struct s_visible_object_hierarchy, 1024>::list_iterator_new(long *);
// public: struct s_visible_object_render_visibility & c_simple_list<struct s_visible_object_render_visibility, 1024>::operator[](long);
// public: bool c_simple_list<struct s_visible_object_render_visibility, 1024>::valid(long);
// public: bool c_flags_no_init<enum e_object_data_flags, unsigned long, 32, struct s_object_data_flags_string_resolver>::test(enum e_object_data_flags) const;
// public: bool c_flags_no_init<enum e_visible_object_heirarchy_flags, unsigned short, 5, struct s_default_enum_string_resolver>::test(enum e_visible_object_heirarchy_flags) const;
// public: void c_flags_no_init<enum e_object_entry_point_flags, unsigned long, 8, struct s_default_enum_string_resolver>::set(enum e_object_entry_point_flags, bool);
// public: static bool c_flags_no_init<enum e_object_data_flags, unsigned long, 32, struct s_object_data_flags_string_resolver>::valid_bit(enum e_object_data_flags);
// private: static unsigned long c_flags_no_init<enum e_object_data_flags, unsigned long, 32, struct s_object_data_flags_string_resolver>::flag_size_type(enum e_object_data_flags);
// public: static bool c_flags_no_init<enum e_visible_object_heirarchy_flags, unsigned short, 5, struct s_default_enum_string_resolver>::valid_bit(enum e_visible_object_heirarchy_flags);
// private: static unsigned short c_flags_no_init<enum e_visible_object_heirarchy_flags, unsigned short, 5, struct s_default_enum_string_resolver>::flag_size_type(enum e_visible_object_heirarchy_flags);
// public: static bool c_flags_no_init<enum e_object_entry_point_flags, unsigned long, 8, struct s_default_enum_string_resolver>::valid_bit(enum e_object_entry_point_flags);
// private: static unsigned long c_flags_no_init<enum e_object_entry_point_flags, unsigned long, 8, struct s_default_enum_string_resolver>::flag_size_type(enum e_object_entry_point_flags);
// struct _XMMATRIX XMMatrixInverse(struct __vector4*, struct _XMMATRIX);
// struct __vector4 XMMatrixDeterminant(struct _XMMATRIX);
// bool rectangle_intersects_rectangle2d(union real_rectangle2d const *, union real_rectangle2d const *);
// bool valid_real_vector3d(union vector3d const *);
// public: c_lightmap_shadows_view::c_lightmap_shadows_view(void);

//public: static class c_view_stack * c_lightmap_shadows_view::get_view_stack_element(void)
//{
//    mangled_ppc("?get_view_stack_element@c_lightmap_shadows_view@@SAPAVc_view_stack@@XZ");
//};

//public: void c_lightmap_shadows_view::render(enum e_output_user_index, long)
//{
//    mangled_ppc("?render@c_lightmap_shadows_view@@QAAXW4e_output_user_index@@J@Z");
//};

//public: static void c_lightmap_shadows_view::object_shadow_get_potential_bounds(union real_point3d const *, float, union real_point3d *, float *)
//{
//    mangled_ppc("?object_shadow_get_potential_bounds@c_lightmap_shadows_view@@SAXPBTreal_point3d@@MPAT2@PAM@Z");
//};

//public: static bool c_lightmap_shadows_view::object_shadow_visible(long, struct s_oriented_bounding_box *, struct light_geometry *)
//{
//    mangled_ppc("?object_shadow_visible@c_lightmap_shadows_view@@SA_NJPAUs_oriented_bounding_box@@PAUlight_geometry@@@Z");
//};

//void object_get_bounding_sphere(long, union real_point3d *, float *)
//{
//    mangled_ppc("?object_get_bounding_sphere@@YAXJPATreal_point3d@@PAM@Z");
//};

//public: static long c_lightmap_shadows_view::get_shadow_apply_shader(enum c_lightmap_shadows_view::e_shadow_mode)
//{
//    mangled_ppc("?get_shadow_apply_shader@c_lightmap_shadows_view@@SAJW4e_shadow_mode@1@@Z");
//};

//public: static void c_lightmap_shadows_view::set_shadow_generate_mode(enum c_lightmap_shadows_view::e_shadow_mode)
//{
//    mangled_ppc("?set_shadow_generate_mode@c_lightmap_shadows_view@@SAXW4e_shadow_mode@1@@Z");
//};

//protected: void c_lightmap_shadows_view::render_third_person_shadows(long, long *)
//{
//    mangled_ppc("?render_third_person_shadows@c_lightmap_shadows_view@@IAAXJPAJ@Z");
//};

//protected: void c_lightmap_shadows_view::render_first_person_shadow(long, long)
//{
//    mangled_ppc("?render_first_person_shadow@c_lightmap_shadows_view@@IAAXJJ@Z");
//};

//protected: void c_lightmap_shadows_view::submit_visibility_and_render(float, float, enum e_shadow_render_mode)
//{
//    mangled_ppc("?submit_visibility_and_render@c_lightmap_shadows_view@@IAAXMMW4e_shadow_render_mode@@@Z");
//};

//protected: void c_lightmap_shadows_view::compute_visibility(long, long)
//{
//    mangled_ppc("?compute_visibility@c_lightmap_shadows_view@@IAAXJJ@Z");
//};

//protected: bool c_lightmap_shadows_view::try_to_render_blurry_shadow(long, float, float)
//{
//    mangled_ppc("?try_to_render_blurry_shadow@c_lightmap_shadows_view@@IAA_NJMM@Z");
//};

//void render_lightmap_shadow_calculate_radius(long, union real_point3d const *, union vector3d const *, float *, float *, bool, bool)
//{
//    mangled_ppc("?render_lightmap_shadow_calculate_radius@@YAXJPBTreal_point3d@@PBTvector3d@@PAM2_N3@Z");
//};

//bool obb_visible(struct s_oriented_bounding_box const *)
//{
//    mangled_ppc("?obb_visible@@YA_NPBUs_oriented_bounding_box@@@Z");
//};

//protected: static void c_lightmap_shadows_view::render_setup_internal(void)
//{
//    mangled_ppc("?render_setup_internal@c_lightmap_shadows_view@@KAXXZ");
//};

//protected: void c_lightmap_shadows_view::setup_camera(long, long)
//{
//    mangled_ppc("?setup_camera@c_lightmap_shadows_view@@IAAXJJ@Z");
//};

//protected: void c_lightmap_shadows_view::render_shadow_generate(long, enum e_shadow_render_mode)
//{
//    mangled_ppc("?render_shadow_generate@c_lightmap_shadows_view@@IAAXJW4e_shadow_render_mode@@@Z");
//};

//struct _XMMATRIX really_safe_xmmatrix_multiply(struct _XMMATRIX const &, struct _XMMATRIX const &)
//{
//    mangled_ppc("?really_safe_xmmatrix_multiply@@YA?AU_XMMATRIX@@ABU1@0@Z");
//};

//struct _XMMATRIX really_safe_xmmatrix_transpose(struct _XMMATRIX const &)
//{
//    mangled_ppc("?really_safe_xmmatrix_transpose@@YA?AU_XMMATRIX@@ABU1@@Z");
//};

//protected: void c_lightmap_shadows_view::render_shadow_apply(float, float, float, enum e_shadow_render_mode)
//{
//    mangled_ppc("?render_shadow_apply@c_lightmap_shadows_view@@IAAXMMMW4e_shadow_render_mode@@@Z");
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

//protected: void c_lightmap_shadows_view::render_ambient_apply(float, float, long, long)
//{
//    mangled_ppc("?render_ambient_apply@c_lightmap_shadows_view@@IAAXMMJJ@Z");
//};

//void compute_shadow_resolution_pixels(float, long *, long *)
//{
//    mangled_ppc("?compute_shadow_resolution_pixels@@YAXMPAJ0@Z");
//};

//public: static float c_lightmap_shadows_view::compute_object_shadow_resolution(struct s_performance_throttles const *, long)
//{
//    mangled_ppc("?compute_object_shadow_resolution@c_lightmap_shadows_view@@SAMPBUs_performance_throttles@@J@Z");
//};

//void hs_disable_cinematic_lightmap_shadow(void)
//{
//    mangled_ppc("?hs_disable_cinematic_lightmap_shadow@@YAXXZ");
//};

//void hs_enable_cinematic_lightmap_shadow(void)
//{
//    mangled_ppc("?hs_enable_cinematic_lightmap_shadow@@YAXXZ");
//};

//public: struct s_visible_object_hierarchy * c_simple_list<struct s_visible_object_hierarchy, 1024>::list_iterator_next(long *)
//{
//    mangled_ppc("?list_iterator_next@?$c_simple_list@Us_visible_object_hierarchy@@$0EAA@@@QAAPAUs_visible_object_hierarchy@@PAJ@Z");
//};

//public: struct s_visible_object_hierarchy * c_simple_list<struct s_visible_object_hierarchy, 1024>::list_iterator_new(long *)
//{
//    mangled_ppc("?list_iterator_new@?$c_simple_list@Us_visible_object_hierarchy@@$0EAA@@@QAAPAUs_visible_object_hierarchy@@PAJ@Z");
//};

//public: struct s_visible_object_render_visibility & c_simple_list<struct s_visible_object_render_visibility, 1024>::operator[](long)
//{
//    mangled_ppc("??A?$c_simple_list@Us_visible_object_render_visibility@@$0EAA@@@QAAAAUs_visible_object_render_visibility@@J@Z");
//};

//public: bool c_simple_list<struct s_visible_object_render_visibility, 1024>::valid(long)
//{
//    mangled_ppc("?valid@?$c_simple_list@Us_visible_object_render_visibility@@$0EAA@@@QAA_NJ@Z");
//};

//public: bool c_flags_no_init<enum e_object_data_flags, unsigned long, 32, struct s_object_data_flags_string_resolver>::test(enum e_object_data_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_object_data_flags@@K$0CA@Us_object_data_flags_string_resolver@@@@QBA_NW4e_object_data_flags@@@Z");
//};

//public: bool c_flags_no_init<enum e_visible_object_heirarchy_flags, unsigned short, 5, struct s_default_enum_string_resolver>::test(enum e_visible_object_heirarchy_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_visible_object_heirarchy_flags@@G$04Us_default_enum_string_resolver@@@@QBA_NW4e_visible_object_heirarchy_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_object_entry_point_flags, unsigned long, 8, struct s_default_enum_string_resolver>::set(enum e_object_entry_point_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_object_entry_point_flags@@K$07Us_default_enum_string_resolver@@@@QAAXW4e_object_entry_point_flags@@_N@Z");
//};

//public: static bool c_flags_no_init<enum e_object_data_flags, unsigned long, 32, struct s_object_data_flags_string_resolver>::valid_bit(enum e_object_data_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_object_data_flags@@K$0CA@Us_object_data_flags_string_resolver@@@@SA_NW4e_object_data_flags@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_object_data_flags, unsigned long, 32, struct s_object_data_flags_string_resolver>::flag_size_type(enum e_object_data_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_object_data_flags@@K$0CA@Us_object_data_flags_string_resolver@@@@CAKW4e_object_data_flags@@@Z");
//};

//public: static bool c_flags_no_init<enum e_visible_object_heirarchy_flags, unsigned short, 5, struct s_default_enum_string_resolver>::valid_bit(enum e_visible_object_heirarchy_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_visible_object_heirarchy_flags@@G$04Us_default_enum_string_resolver@@@@SA_NW4e_visible_object_heirarchy_flags@@@Z");
//};

//private: static unsigned short c_flags_no_init<enum e_visible_object_heirarchy_flags, unsigned short, 5, struct s_default_enum_string_resolver>::flag_size_type(enum e_visible_object_heirarchy_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_visible_object_heirarchy_flags@@G$04Us_default_enum_string_resolver@@@@CAGW4e_visible_object_heirarchy_flags@@@Z");
//};

//public: static bool c_flags_no_init<enum e_object_entry_point_flags, unsigned long, 8, struct s_default_enum_string_resolver>::valid_bit(enum e_object_entry_point_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_object_entry_point_flags@@K$07Us_default_enum_string_resolver@@@@SA_NW4e_object_entry_point_flags@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_object_entry_point_flags, unsigned long, 8, struct s_default_enum_string_resolver>::flag_size_type(enum e_object_entry_point_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_object_entry_point_flags@@K$07Us_default_enum_string_resolver@@@@CAKW4e_object_entry_point_flags@@@Z");
//};

//struct _XMMATRIX XMMatrixInverse(struct __vector4*, struct _XMMATRIX)
//{
//    mangled_ppc("?XMMatrixInverse@@YA?AU_XMMATRIX@@PAU__vector4@@U1@@Z");
//};

//struct __vector4 XMMatrixDeterminant(struct _XMMATRIX)
//{
//    mangled_ppc("?XMMatrixDeterminant@@YA?AU__vector4@@U_XMMATRIX@@@Z");
//};

//bool rectangle_intersects_rectangle2d(union real_rectangle2d const *, union real_rectangle2d const *)
//{
//    mangled_ppc("?rectangle_intersects_rectangle2d@@YA_NPBTreal_rectangle2d@@0@Z");
//};

//bool valid_real_vector3d(union vector3d const *)
//{
//    mangled_ppc("?valid_real_vector3d@@YA_NPBTvector3d@@@Z");
//};

//public: c_lightmap_shadows_view::c_lightmap_shadows_view(void)
//{
//    mangled_ppc("??0c_lightmap_shadows_view@@QAA@XZ");
//};

