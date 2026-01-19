/* ---------- headers */

#include "omaha\render\render_water.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// __vmx@3f8000003f800000bf0000003f800000; // "__vmx@3f8000003f800000bf0000003f800000"
// bool render_water_tessellation_enabled; // "?render_water_tessellation_enabled@@3_NA"
// bool render_water_interaction_enabled; // "?render_water_interaction_enabled@@3_NA"
// bool render_water_enabled; // "?render_water_enabled@@3_NA"
// bool render_water_refraction_enabled; // "?render_water_refraction_enabled@@3_NA"
// long g_water_new_interaction_event_count; // "?g_water_new_interaction_event_count@@3JA"
// bool render_water_wireframe_enabled; // "?render_water_wireframe_enabled@@3_NA"
// class t_restricted_allocation_manager<4, 0, 0, void (__cdecl __tls_set_g_water_interaction_event_allocator::*)(void *)> g_water_interaction_event_allocator; // "?g_water_interaction_event_allocator@@3V?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_water_interaction_event_allocator@@YAXPAX@Z@@A"
// struct s_new_interaction_event *g_water_new_interaction_events; // "?g_water_new_interaction_events@@3PAUs_new_interaction_event@@A"

// void __tls_set_g_water_interaction_event_allocator(void *);
// public: static void c_water_renderer::initialize(void);
// public: static void c_water_renderer::dispose(void);
// void water_interaction_clear_all(long);
// public: static void c_water_renderer::initialize_for_new_map(void);
// public: static void c_water_renderer::frame_advance(float);
// public: static void c_water_renderer::set_performance_throttles(void);
// public: static void c_water_renderer::dispose_from_old_map(void);
// public: static void c_water_renderer::game_update(void);
// public: static void c_water_renderer::game_interation_event_add(long, union real_point3d const *, union vector3d const *, union vector3d const *);
// void new_render_water_part_reference(struct s_cluster_reference, long, long, struct s_render_water_part_reference *);
// private: static void c_water_renderer::update_water_structure_part_list(struct s_render_water_part_reference *, long *);
// public: static void c_water_renderer::setup_for_frame(long, struct s_rasterizer_projection *, struct s_rasterizer_projection *);
// float XMVectorGetX(struct __vector4);
// float XMVectorGetY(struct __vector4);
// public: static long c_water_renderer::render_water_occlusion_boxes(union real_point3d const *);
// public: static bool c_water_renderer::water_bounding_box_visible_last_frame(long, long, long);
// public: static bool c_water_renderer::any_water_passed_occlusion_test(void);
// public: static unsigned long c_water_renderer::ripple_check_new(float);
// public: static bool c_water_renderer::is_active_ripple_exist(void);
// public: static void c_water_renderer::ripple_add(unsigned long);
// public: _XMFLOAT2::_XMFLOAT2(float, float);
// float _real_random_range(unsigned long *, char const *, char const *, unsigned long, float, float);
// public: static void c_water_renderer::ripple_update(float);
// public: static void c_water_renderer::animate_water_ripples(void);
// public: static void c_water_renderer::ripple_apply(void);
// public: unsigned long D3DArrayTexture::GetArraySize(void);
// public: static void c_water_renderer::ripple_slope(void);
// public: static void c_water_renderer::render_water(void);
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
// public: static void c_water_renderer::render_tessellation(bool);
// public: static void c_water_renderer::render_underwater_fog(void);
// public: static void c_water_renderer::render_shading(bool);
// private: static void c_water_renderer::render_cluster_parts(enum e_pass, bool, bool);
// private: static void c_water_renderer::render_water_part(struct s_cluster_reference const *, struct s_render_geometry const *, long, long, enum e_pass, bool, bool, struct geometry_material const *);
// public: static bool c_water_renderer::get_water_visible(void);
// public: static bool c_water_renderer::get_underwater(void);
// public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_water_interaction_event_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_water_interaction_event_allocator::*)(void *)>::valid(void) const;
// struct __vector4 XMVector3Dot(struct __vector4, struct __vector4);
// struct __vector4 XMVector3Normalize(struct __vector4);
// struct __vector4 operator/(struct __vector4, float);
// public: struct _XMFLOAT2& _XMFLOAT2::operator=(struct _XMFLOAT2const &);
// bool point_in_rectangle3d(union real_point3d const *, union real_rectangle3d const *);
// union real_rectangle3d * real_rectangle3d_expand(union real_rectangle3d const *, float, union real_rectangle3d *);
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_water_interaction_event_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_water_interaction_event_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_water_interaction_event_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_water_interaction_event_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_water_interaction_event_allocator::*)(void *)>::free_memory(void);
// public: s_water_frame_data::s_water_frame_data(void);
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_water_interaction_event_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_water_interaction_event_allocator::*)(void *)>(void);
// void g_water_interaction_event_allocator::`dynamic atexit destructor'(void);

//void __tls_set_g_water_interaction_event_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_water_interaction_event_allocator@@YAXPAX@Z");
//};

//public: static void c_water_renderer::initialize(void)
//{
//    mangled_ppc("?initialize@c_water_renderer@@SAXXZ");
//};

//public: static void c_water_renderer::dispose(void)
//{
//    mangled_ppc("?dispose@c_water_renderer@@SAXXZ");
//};

//void water_interaction_clear_all(long)
//{
//    mangled_ppc("?water_interaction_clear_all@@YAXJ@Z");
//};

//public: static void c_water_renderer::initialize_for_new_map(void)
//{
//    mangled_ppc("?initialize_for_new_map@c_water_renderer@@SAXXZ");
//};

//public: static void c_water_renderer::frame_advance(float)
//{
//    mangled_ppc("?frame_advance@c_water_renderer@@SAXM@Z");
//};

//public: static void c_water_renderer::set_performance_throttles(void)
//{
//    mangled_ppc("?set_performance_throttles@c_water_renderer@@SAXXZ");
//};

//public: static void c_water_renderer::dispose_from_old_map(void)
//{
//    mangled_ppc("?dispose_from_old_map@c_water_renderer@@SAXXZ");
//};

//public: static void c_water_renderer::game_update(void)
//{
//    mangled_ppc("?game_update@c_water_renderer@@SAXXZ");
//};

//public: static void c_water_renderer::game_interation_event_add(long, union real_point3d const *, union vector3d const *, union vector3d const *)
//{
//    mangled_ppc("?game_interation_event_add@c_water_renderer@@SAXJPBTreal_point3d@@PBTvector3d@@1@Z");
//};

//void new_render_water_part_reference(struct s_cluster_reference, long, long, struct s_render_water_part_reference *)
//{
//    mangled_ppc("?new_render_water_part_reference@@YAXUs_cluster_reference@@JJPAUs_render_water_part_reference@@@Z");
//};

//private: static void c_water_renderer::update_water_structure_part_list(struct s_render_water_part_reference *, long *)
//{
//    mangled_ppc("?update_water_structure_part_list@c_water_renderer@@CAXPAUs_render_water_part_reference@@PAJ@Z");
//};

//public: static void c_water_renderer::setup_for_frame(long, struct s_rasterizer_projection *, struct s_rasterizer_projection *)
//{
//    mangled_ppc("?setup_for_frame@c_water_renderer@@SAXJPAUs_rasterizer_projection@@0@Z");
//};

//float XMVectorGetX(struct __vector4)
//{
//    mangled_ppc("?XMVectorGetX@@YAMU__vector4@@@Z");
//};

//float XMVectorGetY(struct __vector4)
//{
//    mangled_ppc("?XMVectorGetY@@YAMU__vector4@@@Z");
//};

//public: static long c_water_renderer::render_water_occlusion_boxes(union real_point3d const *)
//{
//    mangled_ppc("?render_water_occlusion_boxes@c_water_renderer@@SAJPBTreal_point3d@@@Z");
//};

//public: static bool c_water_renderer::water_bounding_box_visible_last_frame(long, long, long)
//{
//    mangled_ppc("?water_bounding_box_visible_last_frame@c_water_renderer@@SA_NJJJ@Z");
//};

//public: static bool c_water_renderer::any_water_passed_occlusion_test(void)
//{
//    mangled_ppc("?any_water_passed_occlusion_test@c_water_renderer@@SA_NXZ");
//};

//public: static unsigned long c_water_renderer::ripple_check_new(float)
//{
//    mangled_ppc("?ripple_check_new@c_water_renderer@@SAKM@Z");
//};

//public: static bool c_water_renderer::is_active_ripple_exist(void)
//{
//    mangled_ppc("?is_active_ripple_exist@c_water_renderer@@SA_NXZ");
//};

//public: static void c_water_renderer::ripple_add(unsigned long)
//{
//    mangled_ppc("?ripple_add@c_water_renderer@@SAXK@Z");
//};

//public: _XMFLOAT2::_XMFLOAT2(float, float)
//{
//    mangled_ppc("??0_XMFLOAT2@@QAA@MM@Z");
//};

//float _real_random_range(unsigned long *, char const *, char const *, unsigned long, float, float)
//{
//    mangled_ppc("?_real_random_range@@YAMPAKPBD1KMM@Z");
//};

//public: static void c_water_renderer::ripple_update(float)
//{
//    mangled_ppc("?ripple_update@c_water_renderer@@SAXM@Z");
//};

//public: static void c_water_renderer::animate_water_ripples(void)
//{
//    mangled_ppc("?animate_water_ripples@c_water_renderer@@SAXXZ");
//};

//public: static void c_water_renderer::ripple_apply(void)
//{
//    mangled_ppc("?ripple_apply@c_water_renderer@@SAXXZ");
//};

//public: unsigned long D3DArrayTexture::GetArraySize(void)
//{
//    mangled_ppc("?GetArraySize@D3DArrayTexture@@QAAKXZ");
//};

//public: static void c_water_renderer::ripple_slope(void)
//{
//    mangled_ppc("?ripple_slope@c_water_renderer@@SAXXZ");
//};

//public: static void c_water_renderer::render_water(void)
//{
//    mangled_ppc("?render_water@c_water_renderer@@SAXXZ");
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

//public: static void c_water_renderer::render_tessellation(bool)
//{
//    mangled_ppc("?render_tessellation@c_water_renderer@@SAX_N@Z");
//};

//public: static void c_water_renderer::render_underwater_fog(void)
//{
//    mangled_ppc("?render_underwater_fog@c_water_renderer@@SAXXZ");
//};

//public: static void c_water_renderer::render_shading(bool)
//{
//    mangled_ppc("?render_shading@c_water_renderer@@SAX_N@Z");
//};

//private: static void c_water_renderer::render_cluster_parts(enum e_pass, bool, bool)
//{
//    mangled_ppc("?render_cluster_parts@c_water_renderer@@CAXW4e_pass@@_N1@Z");
//};

//private: static void c_water_renderer::render_water_part(struct s_cluster_reference const *, struct s_render_geometry const *, long, long, enum e_pass, bool, bool, struct geometry_material const *)
//{
//    mangled_ppc("?render_water_part@c_water_renderer@@CAXPBUs_cluster_reference@@PBUs_render_geometry@@JJW4e_pass@@_N3PBUgeometry_material@@@Z");
//};

//public: static bool c_water_renderer::get_water_visible(void)
//{
//    mangled_ppc("?get_water_visible@c_water_renderer@@SA_NXZ");
//};

//public: static bool c_water_renderer::get_underwater(void)
//{
//    mangled_ppc("?get_underwater@c_water_renderer@@SA_NXZ");
//};

//public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_water_interaction_event_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_water_interaction_event_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_water_interaction_event_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_water_interaction_event_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//struct __vector4 XMVector3Dot(struct __vector4, struct __vector4)
//{
//    mangled_ppc("?XMVector3Dot@@YA?AU__vector4@@U1@0@Z");
//};

//struct __vector4 XMVector3Normalize(struct __vector4)
//{
//    mangled_ppc("?XMVector3Normalize@@YA?AU__vector4@@U1@@Z");
//};

//struct __vector4 operator/(struct __vector4, float)
//{
//    mangled_ppc("??K@YA?AU__vector4@@U0@M@Z");
//};

//public: struct _XMFLOAT2& _XMFLOAT2::operator=(struct _XMFLOAT2const &)
//{
//    mangled_ppc("??4_XMFLOAT2@@QAAAAU0@ABU0@@Z");
//};

//bool point_in_rectangle3d(union real_point3d const *, union real_rectangle3d const *)
//{
//    mangled_ppc("?point_in_rectangle3d@@YA_NPBTreal_point3d@@PBTreal_rectangle3d@@@Z");
//};

//union real_rectangle3d * real_rectangle3d_expand(union real_rectangle3d const *, float, union real_rectangle3d *)
//{
//    mangled_ppc("?real_rectangle3d_expand@@YAPATreal_rectangle3d@@PBT1@MPAT1@@Z");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_water_interaction_event_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_water_interaction_event_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_water_interaction_event_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_water_interaction_event_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_water_interaction_event_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_water_interaction_event_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_water_interaction_event_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_water_interaction_event_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_water_interaction_event_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: s_water_frame_data::s_water_frame_data(void)
//{
//    mangled_ppc("??0s_water_frame_data@@QAA@XZ");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_water_interaction_event_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_water_interaction_event_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_water_interaction_event_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//void g_water_interaction_event_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_water_interaction_event_allocator@@YAXXZ");
//};

