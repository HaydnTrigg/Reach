/* ---------- headers */

#include "omaha\render\render_lens_flares.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static short const c_static_hash_table_data<struct s_lens_flare, 256>::k_hash_entry_invalid; // "?k_hash_entry_invalid@?$c_static_hash_table_data@Us_lens_flare@@$0BAA@@@2FB"
// public: static long const s_static_array<struct c_static_hash_table_data<struct s_lens_flare, 256>::s_data, 256>::k_element_count; // "?k_element_count@?$s_static_array@Us_data@?$c_static_hash_table_data@Us_lens_flare@@$0BAA@@@$0BAA@@@2JB"
// public: static long const c_static_hash_table<class c_static_hash_table_data<struct s_lens_flare, 256>, 3307, 3, 337>::k_hash_invalid; // "?k_hash_invalid@?$c_static_hash_table@V?$c_static_hash_table_data@Us_lens_flare@@$0BAA@@@$0MOL@$02$0BFB@@@2JB"
// long volatile `public: static long __cdecl c_static_hash_table<class c_static_hash_table_data<struct s_lens_flare, 256>, 3307, 3, 337>::find_entry(class c_static_hash_table_data<struct s_lens_flare, 256> const *, long, long, long)'::`32'::x_event_category_index; // "?x_event_category_index@?CA@??find_entry@?$c_static_hash_table@V?$c_static_hash_table_data@Us_lens_flare@@$0BAA@@@$0MOL@$02$0BFB@@@SAJPBV?$c_static_hash_table_data@Us_lens_flare@@$0BAA@@@JJJ@Z@4JC"
// struct <unnamed-type-g_lens_flare_globals> g_lens_flare_globals; // "?g_lens_flare_globals@@3U<unnamed-type-g_lens_flare_globals>@@A"
// bool render_debug_lens_flares; // "?render_debug_lens_flares@@3_NA"

// void lens_flares_initialize(void);
// void lens_flares_dispose(void);
// void lens_flares_initialize_for_new_map(void);
// void lens_flares_dispose_from_old_map(void);
// void lens_flares_garbage_collect(void);
// long lens_flares_create(long, enum e_lens_flare_attachment_types, long, unsigned short, union real_point3d const *, union vector3d const *, union rgb_color const *, float, float, float, bool, enum e_output_user_index);
// void lens_flares_submit_occlusions(enum e_output_user_index, enum e_lens_flare_occlusion_rendering_types);
// void lens_flares_render(enum e_output_user_index);
// long lens_flares_create_internal(long, enum e_lens_flare_attachment_types, long, unsigned short, union real_point3d const *, union vector3d const *, union rgb_color const *, float, float, float, bool, enum e_output_user_index);
// void lens_flare_render_occlusion(long);
// void lens_flare_render_internal(enum e_output_user_index, long, float, long, bool);
// bool lens_flare_evaluate_parameters(long, long, long, float, struct s_lens_flare_render_parameters *);
// public: struct render_projection const * c_view_stack::get_render_projection(void) const;
// unsigned long crc_new(void);
// float lens_flares_evaluate_corona_rotation_function(long, float, union real_point3d const *, union vector3d const *);
// bool lens_flare_project_billboard(union real_point3d const *, float, union vector2d const *, union vector4d *, union vector2d *);
// void safe_generate_orthogonal_vector_up(union vector3d const *, union vector3d *, union vector3d const *);
// void lens_flares_setup_occlusion_shader(void);
// void lens_flares_setup_rendering_shader(void);
// void lens_flares_reset_rasterizer_parameters(void);
// void lens_flare_get_bitmap_aspect_ratio(long, long, union vector2d *);
// public: void c_simple_hash_table<struct s_lens_flare, 256, 3307, 3, 337>::clear_all(void);
// public: long c_simple_hash_table<struct s_lens_flare, 256, 3307, 3, 337>::add_entry(long, long, long);
// public: void c_simple_hash_table<struct s_lens_flare, 256, 3307, 3, 337>::remove_entry(long);
// public: struct s_lens_flare * c_simple_hash_table<struct s_lens_flare, 256, 3307, 3, 337>::get_element(long);
// public: long c_simple_hash_table<struct s_lens_flare, 256, 3307, 3, 337>::find_entry(long, long, long) const;
// public: long c_simple_hash_table<struct s_lens_flare, 256, 3307, 3, 337>::iterator_next(long);
// public: struct s_lens_flare * c_static_hash_table_data<struct s_lens_flare, 256>::get_element(long);
// public: void c_static_hash_table_data<struct s_lens_flare, 256>::clear_all(void);
// bool operator==<enum e_output_user_index>(enum e_output_user_index const &, enum e_none_sentinel const &);
// public: static long c_static_hash_table<class c_static_hash_table_data<struct s_lens_flare, 256>, 3307, 3, 337>::iterator_next(class c_static_hash_table_data<struct s_lens_flare, 256> const *, long);
// public: static long c_static_hash_table<class c_static_hash_table_data<struct s_lens_flare, 256>, 3307, 3, 337>::add_entry(class c_static_hash_table_data<struct s_lens_flare, 256> *, long, long, long);
// public: static void c_static_hash_table<class c_static_hash_table_data<struct s_lens_flare, 256>, 3307, 3, 337>::remove_entry(class c_static_hash_table_data<struct s_lens_flare, 256> *, long);
// public: static long c_static_hash_table<class c_static_hash_table_data<struct s_lens_flare, 256>, 3307, 3, 337>::find_entry(class c_static_hash_table_data<struct s_lens_flare, 256> const *, long, long, long);
// public: struct c_static_hash_table_data<struct s_lens_flare, 256>::s_data & s_static_array<struct c_static_hash_table_data<struct s_lens_flare, 256>::s_data, 256>::operator[]<long>(long);
// public: struct c_static_hash_table_data<struct s_lens_flare, 256>::s_data * c_static_hash_table_data<struct s_lens_flare, 256>::get_data(long);
// public: struct c_static_hash_table_data<struct s_lens_flare, 256>::s_data const * c_static_hash_table_data<struct s_lens_flare, 256>::get_data(long) const;
// public: long c_static_hash_table_data<struct s_lens_flare, 256>::get_total_count(void) const;
// public: long c_static_hash_table_data<struct s_lens_flare, 256>::get_maximum_count(void) const;
// public: void c_static_hash_table_data<struct s_lens_flare, 256>::increment_total_count(void);
// public: void c_static_hash_table_data<struct s_lens_flare, 256>::decrement_total_count(void);
// public: short * c_static_hash_table_data<struct s_lens_flare, 256>::get_hash_entry_count(void);
// public: short const * c_static_hash_table_data<struct s_lens_flare, 256>::get_hash_entry_count(void) const;
// public: short * c_static_hash_table_data<struct s_lens_flare, 256>::get_original_hash_entry(void);
// public: short const * c_static_hash_table_data<struct s_lens_flare, 256>::get_original_hash_entry(void) const;
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
// private: static long c_static_hash_table<class c_static_hash_table_data<struct s_lens_flare, 256>, 3307, 3, 337>::calculate_hash(class c_static_hash_table_data<struct s_lens_flare, 256> const *, long, long, long);
// private: static long c_static_hash_table<class c_static_hash_table_data<struct s_lens_flare, 256>, 3307, 3, 337>::find_new_hash_entry(class c_static_hash_table_data<struct s_lens_flare, 256> *, long);
// public: static bool s_static_array<struct c_static_hash_table_data<struct s_lens_flare, 256>::s_data, 256>::valid<long>(long);
// public: struct c_static_hash_table_data<struct s_lens_flare, 256>::s_data const & s_static_array<struct c_static_hash_table_data<struct s_lens_flare, 256>::s_data, 256>::operator[]<long>(long) const;
// public: long D3DDevice::BeginConditionalRendering(unsigned long);
// public: long D3DDevice::EndConditionalRendering(void);
// float acos(float);
// acosf;
// float real_min_with_1(float);
// float real_pin(float, float, float);
// float real_pin_0_1(float);
// float real_max_with_0(float);
// float arctangent(float, float);
// float atan2(float, float);
// atan2f;
// union vector2d * set_real_vector2d(union vector2d *, float, float);
// union vector3d * subtract_vectors3d(union vector3d const *, union vector3d const *, union vector3d *);

//void lens_flares_initialize(void)
//{
//    mangled_ppc("?lens_flares_initialize@@YAXXZ");
//};

//void lens_flares_dispose(void)
//{
//    mangled_ppc("?lens_flares_dispose@@YAXXZ");
//};

//void lens_flares_initialize_for_new_map(void)
//{
//    mangled_ppc("?lens_flares_initialize_for_new_map@@YAXXZ");
//};

//void lens_flares_dispose_from_old_map(void)
//{
//    mangled_ppc("?lens_flares_dispose_from_old_map@@YAXXZ");
//};

//void lens_flares_garbage_collect(void)
//{
//    mangled_ppc("?lens_flares_garbage_collect@@YAXXZ");
//};

//long lens_flares_create(long, enum e_lens_flare_attachment_types, long, unsigned short, union real_point3d const *, union vector3d const *, union rgb_color const *, float, float, float, bool, enum e_output_user_index)
//{
//    mangled_ppc("?lens_flares_create@@YAJJW4e_lens_flare_attachment_types@@JGPBTreal_point3d@@PBTvector3d@@PBTrgb_color@@MMM_NW4e_output_user_index@@@Z");
//};

//void lens_flares_submit_occlusions(enum e_output_user_index, enum e_lens_flare_occlusion_rendering_types)
//{
//    mangled_ppc("?lens_flares_submit_occlusions@@YAXW4e_output_user_index@@W4e_lens_flare_occlusion_rendering_types@@@Z");
//};

//void lens_flares_render(enum e_output_user_index)
//{
//    mangled_ppc("?lens_flares_render@@YAXW4e_output_user_index@@@Z");
//};

//long lens_flares_create_internal(long, enum e_lens_flare_attachment_types, long, unsigned short, union real_point3d const *, union vector3d const *, union rgb_color const *, float, float, float, bool, enum e_output_user_index)
//{
//    mangled_ppc("?lens_flares_create_internal@@YAJJW4e_lens_flare_attachment_types@@JGPBTreal_point3d@@PBTvector3d@@PBTrgb_color@@MMM_NW4e_output_user_index@@@Z");
//};

//void lens_flare_render_occlusion(long)
//{
//    mangled_ppc("?lens_flare_render_occlusion@@YAXJ@Z");
//};

//void lens_flare_render_internal(enum e_output_user_index, long, float, long, bool)
//{
//    mangled_ppc("?lens_flare_render_internal@@YAXW4e_output_user_index@@JMJ_N@Z");
//};

//bool lens_flare_evaluate_parameters(long, long, long, float, struct s_lens_flare_render_parameters *)
//{
//    mangled_ppc("?lens_flare_evaluate_parameters@@YA_NJJJMPAUs_lens_flare_render_parameters@@@Z");
//};

//public: struct render_projection const * c_view_stack::get_render_projection(void) const
//{
//    mangled_ppc("?get_render_projection@c_view_stack@@QBAPBUrender_projection@@XZ");
//};

//unsigned long crc_new(void)
//{
//    mangled_ppc("?crc_new@@YAKXZ");
//};

//float lens_flares_evaluate_corona_rotation_function(long, float, union real_point3d const *, union vector3d const *)
//{
//    mangled_ppc("?lens_flares_evaluate_corona_rotation_function@@YAMJMPBTreal_point3d@@PBTvector3d@@@Z");
//};

//bool lens_flare_project_billboard(union real_point3d const *, float, union vector2d const *, union vector4d *, union vector2d *)
//{
//    mangled_ppc("?lens_flare_project_billboard@@YA_NPBTreal_point3d@@MPBTvector2d@@PATvector4d@@PAT2@@Z");
//};

//void safe_generate_orthogonal_vector_up(union vector3d const *, union vector3d *, union vector3d const *)
//{
//    mangled_ppc("?safe_generate_orthogonal_vector_up@@YAXPBTvector3d@@PAT1@0@Z");
//};

//void lens_flares_setup_occlusion_shader(void)
//{
//    mangled_ppc("?lens_flares_setup_occlusion_shader@@YAXXZ");
//};

//void lens_flares_setup_rendering_shader(void)
//{
//    mangled_ppc("?lens_flares_setup_rendering_shader@@YAXXZ");
//};

//void lens_flares_reset_rasterizer_parameters(void)
//{
//    mangled_ppc("?lens_flares_reset_rasterizer_parameters@@YAXXZ");
//};

//void lens_flare_get_bitmap_aspect_ratio(long, long, union vector2d *)
//{
//    mangled_ppc("?lens_flare_get_bitmap_aspect_ratio@@YAXJJPATvector2d@@@Z");
//};

//public: void c_simple_hash_table<struct s_lens_flare, 256, 3307, 3, 337>::clear_all(void)
//{
//    mangled_ppc("?clear_all@?$c_simple_hash_table@Us_lens_flare@@$0BAA@$0MOL@$02$0BFB@@@QAAXXZ");
//};

//public: long c_simple_hash_table<struct s_lens_flare, 256, 3307, 3, 337>::add_entry(long, long, long)
//{
//    mangled_ppc("?add_entry@?$c_simple_hash_table@Us_lens_flare@@$0BAA@$0MOL@$02$0BFB@@@QAAJJJJ@Z");
//};

//public: void c_simple_hash_table<struct s_lens_flare, 256, 3307, 3, 337>::remove_entry(long)
//{
//    mangled_ppc("?remove_entry@?$c_simple_hash_table@Us_lens_flare@@$0BAA@$0MOL@$02$0BFB@@@QAAXJ@Z");
//};

//public: struct s_lens_flare * c_simple_hash_table<struct s_lens_flare, 256, 3307, 3, 337>::get_element(long)
//{
//    mangled_ppc("?get_element@?$c_simple_hash_table@Us_lens_flare@@$0BAA@$0MOL@$02$0BFB@@@QAAPAUs_lens_flare@@J@Z");
//};

//public: long c_simple_hash_table<struct s_lens_flare, 256, 3307, 3, 337>::find_entry(long, long, long) const
//{
//    mangled_ppc("?find_entry@?$c_simple_hash_table@Us_lens_flare@@$0BAA@$0MOL@$02$0BFB@@@QBAJJJJ@Z");
//};

//public: long c_simple_hash_table<struct s_lens_flare, 256, 3307, 3, 337>::iterator_next(long)
//{
//    mangled_ppc("?iterator_next@?$c_simple_hash_table@Us_lens_flare@@$0BAA@$0MOL@$02$0BFB@@@QAAJJ@Z");
//};

//public: struct s_lens_flare * c_static_hash_table_data<struct s_lens_flare, 256>::get_element(long)
//{
//    mangled_ppc("?get_element@?$c_static_hash_table_data@Us_lens_flare@@$0BAA@@@QAAPAUs_lens_flare@@J@Z");
//};

//public: void c_static_hash_table_data<struct s_lens_flare, 256>::clear_all(void)
//{
//    mangled_ppc("?clear_all@?$c_static_hash_table_data@Us_lens_flare@@$0BAA@@@QAAXXZ");
//};

//bool operator==<enum e_output_user_index>(enum e_output_user_index const &, enum e_none_sentinel const &)
//{
//    mangled_ppc("??$?8W4e_output_user_index@@@@YA_NABW4e_output_user_index@@ABW4e_none_sentinel@@@Z");
//};

//public: static long c_static_hash_table<class c_static_hash_table_data<struct s_lens_flare, 256>, 3307, 3, 337>::iterator_next(class c_static_hash_table_data<struct s_lens_flare, 256> const *, long)
//{
//    mangled_ppc("?iterator_next@?$c_static_hash_table@V?$c_static_hash_table_data@Us_lens_flare@@$0BAA@@@$0MOL@$02$0BFB@@@SAJPBV?$c_static_hash_table_data@Us_lens_flare@@$0BAA@@@J@Z");
//};

//public: static long c_static_hash_table<class c_static_hash_table_data<struct s_lens_flare, 256>, 3307, 3, 337>::add_entry(class c_static_hash_table_data<struct s_lens_flare, 256> *, long, long, long)
//{
//    mangled_ppc("?add_entry@?$c_static_hash_table@V?$c_static_hash_table_data@Us_lens_flare@@$0BAA@@@$0MOL@$02$0BFB@@@SAJPAV?$c_static_hash_table_data@Us_lens_flare@@$0BAA@@@JJJ@Z");
//};

//public: static void c_static_hash_table<class c_static_hash_table_data<struct s_lens_flare, 256>, 3307, 3, 337>::remove_entry(class c_static_hash_table_data<struct s_lens_flare, 256> *, long)
//{
//    mangled_ppc("?remove_entry@?$c_static_hash_table@V?$c_static_hash_table_data@Us_lens_flare@@$0BAA@@@$0MOL@$02$0BFB@@@SAXPAV?$c_static_hash_table_data@Us_lens_flare@@$0BAA@@@J@Z");
//};

//public: static long c_static_hash_table<class c_static_hash_table_data<struct s_lens_flare, 256>, 3307, 3, 337>::find_entry(class c_static_hash_table_data<struct s_lens_flare, 256> const *, long, long, long)
//{
//    mangled_ppc("?find_entry@?$c_static_hash_table@V?$c_static_hash_table_data@Us_lens_flare@@$0BAA@@@$0MOL@$02$0BFB@@@SAJPBV?$c_static_hash_table_data@Us_lens_flare@@$0BAA@@@JJJ@Z");
//};

//public: struct c_static_hash_table_data<struct s_lens_flare, 256>::s_data & s_static_array<struct c_static_hash_table_data<struct s_lens_flare, 256>::s_data, 256>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_data@?$c_static_hash_table_data@Us_lens_flare@@$0BAA@@@$0BAA@@@QAAAAUs_data@?$c_static_hash_table_data@Us_lens_flare@@$0BAA@@@J@Z");
//};

//public: struct c_static_hash_table_data<struct s_lens_flare, 256>::s_data * c_static_hash_table_data<struct s_lens_flare, 256>::get_data(long)
//{
//    mangled_ppc("?get_data@?$c_static_hash_table_data@Us_lens_flare@@$0BAA@@@QAAPAUs_data@1@J@Z");
//};

//public: struct c_static_hash_table_data<struct s_lens_flare, 256>::s_data const * c_static_hash_table_data<struct s_lens_flare, 256>::get_data(long) const
//{
//    mangled_ppc("?get_data@?$c_static_hash_table_data@Us_lens_flare@@$0BAA@@@QBAPBUs_data@1@J@Z");
//};

//public: long c_static_hash_table_data<struct s_lens_flare, 256>::get_total_count(void) const
//{
//    mangled_ppc("?get_total_count@?$c_static_hash_table_data@Us_lens_flare@@$0BAA@@@QBAJXZ");
//};

//public: long c_static_hash_table_data<struct s_lens_flare, 256>::get_maximum_count(void) const
//{
//    mangled_ppc("?get_maximum_count@?$c_static_hash_table_data@Us_lens_flare@@$0BAA@@@QBAJXZ");
//};

//public: void c_static_hash_table_data<struct s_lens_flare, 256>::increment_total_count(void)
//{
//    mangled_ppc("?increment_total_count@?$c_static_hash_table_data@Us_lens_flare@@$0BAA@@@QAAXXZ");
//};

//public: void c_static_hash_table_data<struct s_lens_flare, 256>::decrement_total_count(void)
//{
//    mangled_ppc("?decrement_total_count@?$c_static_hash_table_data@Us_lens_flare@@$0BAA@@@QAAXXZ");
//};

//public: short * c_static_hash_table_data<struct s_lens_flare, 256>::get_hash_entry_count(void)
//{
//    mangled_ppc("?get_hash_entry_count@?$c_static_hash_table_data@Us_lens_flare@@$0BAA@@@QAAPAFXZ");
//};

//public: short const * c_static_hash_table_data<struct s_lens_flare, 256>::get_hash_entry_count(void) const
//{
//    mangled_ppc("?get_hash_entry_count@?$c_static_hash_table_data@Us_lens_flare@@$0BAA@@@QBAPBFXZ");
//};

//public: short * c_static_hash_table_data<struct s_lens_flare, 256>::get_original_hash_entry(void)
//{
//    mangled_ppc("?get_original_hash_entry@?$c_static_hash_table_data@Us_lens_flare@@$0BAA@@@QAAPAFXZ");
//};

//public: short const * c_static_hash_table_data<struct s_lens_flare, 256>::get_original_hash_entry(void) const
//{
//    mangled_ppc("?get_original_hash_entry@?$c_static_hash_table_data@Us_lens_flare@@$0BAA@@@QBAPBFXZ");
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

//private: static long c_static_hash_table<class c_static_hash_table_data<struct s_lens_flare, 256>, 3307, 3, 337>::calculate_hash(class c_static_hash_table_data<struct s_lens_flare, 256> const *, long, long, long)
//{
//    mangled_ppc("?calculate_hash@?$c_static_hash_table@V?$c_static_hash_table_data@Us_lens_flare@@$0BAA@@@$0MOL@$02$0BFB@@@CAJPBV?$c_static_hash_table_data@Us_lens_flare@@$0BAA@@@JJJ@Z");
//};

//private: static long c_static_hash_table<class c_static_hash_table_data<struct s_lens_flare, 256>, 3307, 3, 337>::find_new_hash_entry(class c_static_hash_table_data<struct s_lens_flare, 256> *, long)
//{
//    mangled_ppc("?find_new_hash_entry@?$c_static_hash_table@V?$c_static_hash_table_data@Us_lens_flare@@$0BAA@@@$0MOL@$02$0BFB@@@CAJPAV?$c_static_hash_table_data@Us_lens_flare@@$0BAA@@@J@Z");
//};

//public: static bool s_static_array<struct c_static_hash_table_data<struct s_lens_flare, 256>::s_data, 256>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_data@?$c_static_hash_table_data@Us_lens_flare@@$0BAA@@@$0BAA@@@SA_NJ@Z");
//};

//public: struct c_static_hash_table_data<struct s_lens_flare, 256>::s_data const & s_static_array<struct c_static_hash_table_data<struct s_lens_flare, 256>::s_data, 256>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_data@?$c_static_hash_table_data@Us_lens_flare@@$0BAA@@@$0BAA@@@QBAABUs_data@?$c_static_hash_table_data@Us_lens_flare@@$0BAA@@@J@Z");
//};

//public: long D3DDevice::BeginConditionalRendering(unsigned long)
//{
//    mangled_ppc("?BeginConditionalRendering@D3DDevice@@QAAJK@Z");
//};

//public: long D3DDevice::EndConditionalRendering(void)
//{
//    mangled_ppc("?EndConditionalRendering@D3DDevice@@QAAJXZ");
//};

//float acos(float)
//{
//    mangled_ppc("?acos@@YAMM@Z");
//};

//acosf
//{
//    mangled_ppc("acosf");
//};

//float real_min_with_1(float)
//{
//    mangled_ppc("?real_min_with_1@@YAMM@Z");
//};

//float real_pin(float, float, float)
//{
//    mangled_ppc("?real_pin@@YAMMMM@Z");
//};

//float real_pin_0_1(float)
//{
//    mangled_ppc("?real_pin_0_1@@YAMM@Z");
//};

//float real_max_with_0(float)
//{
//    mangled_ppc("?real_max_with_0@@YAMM@Z");
//};

//float arctangent(float, float)
//{
//    mangled_ppc("?arctangent@@YAMMM@Z");
//};

//float atan2(float, float)
//{
//    mangled_ppc("?atan2@@YAMMM@Z");
//};

//atan2f
//{
//    mangled_ppc("atan2f");
//};

//union vector2d * set_real_vector2d(union vector2d *, float, float)
//{
//    mangled_ppc("?set_real_vector2d@@YAPATvector2d@@PAT1@MM@Z");
//};

//union vector3d * subtract_vectors3d(union vector3d const *, union vector3d const *, union vector3d *)
//{
//    mangled_ppc("?subtract_vectors3d@@YAPATvector3d@@PBT1@0PAT1@@Z");
//};

