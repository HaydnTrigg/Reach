/* ---------- headers */

#include "omaha\rasterizer\rasterizer_shaders.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// long volatile `public: struct c_rasterizer_globals::s_explicit_shader const * __cdecl c_rasterizer_globals::get_explicit_shaders(long) const'::`17'::x_event_category_index; // "?x_event_category_index@?BB@??get_explicit_shaders@c_rasterizer_globals@@QBAPBUs_explicit_shader@2@J@Z@4JC"
// long volatile `public: struct c_rasterizer_globals::s_explicit_shader const * __cdecl c_rasterizer_globals::get_explicit_shaders(long) const'::`7'::x_event_category_index; // "?x_event_category_index@?6??get_explicit_shaders@c_rasterizer_globals@@QBAPBUs_explicit_shader@2@J@Z@4JC"
// public: static unsigned long c_rasterizer_shaders::g_max_vs_gprs; // "?g_max_vs_gprs@c_rasterizer_shaders@@2KA"
// public: static unsigned long c_rasterizer_shaders::g_max_ps_gprs; // "?g_max_ps_gprs@c_rasterizer_shaders@@2KA"
// bool `public: struct c_rasterizer_globals::s_explicit_shader const * __cdecl c_rasterizer_globals::get_explicit_shaders(long) const'::`3'::warned; // "?warned@?2??get_explicit_shaders@c_rasterizer_globals@@QBAPBUs_explicit_shader@2@J@Z@4_NA"

// public: static bool c_rasterizer_shaders::set_pixel_shader(class c_rasterizer_pixel_shader const *, enum e_entry_point);
// public: static bool c_rasterizer_shaders::set_vertex_shader(class c_rasterizer_vertex_shader const *, enum e_vertex_type, enum e_transfer_vector_vertex_types, enum e_entry_point);
// public: static bool c_rasterizer_shaders::set_compiled_pixel_shader(class c_rasterizer_compiled_pixel_shader const *, enum e_entry_point);
// public: struct D3DPixelShader * c_rasterizer_compiled_pixel_shader::get_d3d_shader(void) const;
// public: static bool c_rasterizer_shaders::check_compiled_pixel_shader(class c_rasterizer_compiled_pixel_shader const *);
// public: static bool c_rasterizer_shaders::set_compiled_vertex_shader(class c_rasterizer_compiled_vertex_shader const *, enum e_vertex_type, enum e_transfer_vector_vertex_types, enum e_entry_point);
// public: struct D3DVertexShader * c_rasterizer_compiled_vertex_shader::get_d3d_shader(void) const;
// public: static bool c_rasterizer_shaders::set_explicit_shaders(long, enum e_vertex_type, enum e_transfer_vector_vertex_types, enum e_entry_point);
// public: struct c_rasterizer_globals::s_explicit_shader const * c_rasterizer_globals::get_explicit_shaders(long) const;
// public: static bool c_rasterizer_shaders::set_explicit_pixel_shader(long, enum e_entry_point);
// public: static void c_rasterizer_shaders::set_vertex_shader_constant(long, long, union vector4d const *);
// public: static void c_rasterizer_shaders::set_vertex_shader_constant_int(long, long, int const *);
// public: static void c_rasterizer_shaders::set_vertex_shader_constant_bool(long, long, int const *);
// public: static void c_rasterizer_shaders::set_vertex_shader_constant_stream(long, long, class c_rasterizer_stream_constant const *);
// public: union GPU_MEMEXPORT_STREAM_CONSTANT const * c_rasterizer_stream_constant::get_d3d_stream(void) const;
// public: static void c_rasterizer_shaders::set_vertex_shader_constant_owned(long, long, union vector4d const *);
// public: static class c_rasterizer_constant_table_definition const * c_rasterizer_shaders::get_shader_constant_table(class c_rasterizer_vertex_shader const *, enum e_platform, enum e_vertex_type, enum e_entry_point, long);
// public: static class c_rasterizer_constant_table_definition const * c_rasterizer_shaders::get_shader_constant_table(class c_rasterizer_pixel_shader const *, enum e_platform, enum e_entry_point, long);
// public: static class c_rasterizer_constant_table_definition const * c_rasterizer_shaders::get_shader_constant_table(class c_rasterizer_compiled_vertex_shader const *, enum e_platform);
// public: class c_rasterizer_constant_table_definition const * c_rasterizer_compiled_shader::get_constant_table(enum e_platform) const;
// public: static class c_rasterizer_constant_table_definition const * c_rasterizer_shaders::get_shader_constant_table(class c_rasterizer_compiled_pixel_shader const *, enum e_platform);
// public: static bool c_rasterizer_shaders::begin_export(long, class c_rasterizer_vertex_buffer *);
// public: static bool c_rasterizer_shaders::begin_export(long, class c_rasterizer_texture_ref);
// public: static void c_rasterizer_shaders::set_stream(class c_rasterizer_stream_constant *, class c_rasterizer_vertex_buffer *, unsigned long, enum GPUSURFACESWAP, enum GPUSURFACENUMBER, enum GPUCOLORFORMAT, enum GPUENDIAN128);
// public: static bool c_rasterizer_shaders::end_export(long, class c_rasterizer_vertex_buffer *);
// public: static bool c_rasterizer_shaders::end_export(long, class c_rasterizer_texture_ref);
// public: static void c_rasterizer_shaders::set_stream(class c_rasterizer_stream_constant *, class c_rasterizer_texture_ref, unsigned long, enum GPUSURFACESWAP, enum GPUSURFACENUMBER, enum GPUCOLORFORMAT, enum GPUENDIAN128);
// public: static enum e_gpr_allocation c_rasterizer_shaders::get_gprs_allocation(struct s_gpr_allocation *);
// public: static enum e_gpr_allocation c_rasterizer_shaders::set_gprs_allocation(enum e_gpr_allocation);
// public: static void c_rasterizer_shaders::update_max_vs_gprs(unsigned long);
// public: static void c_rasterizer_shaders::update_max_ps_gprs(unsigned long);
// public: static void c_rasterizer_shaders::reset_max_vs_gprs(void);
// public: static void c_rasterizer_shaders::reset_max_ps_gprs(void);
// public: static bool c_rasterizer_shaders::begin_export(long, enum e_surface);
// public: static bool c_rasterizer_shaders::end_export(long, enum e_surface);
// public: static void c_rasterizer_shaders::set_stream(class c_rasterizer_stream_constant *, enum e_surface, unsigned long, enum GPUSURFACESWAP, enum GPUSURFACENUMBER, enum GPUCOLORFORMAT, enum GPUENDIAN128);
// public: long D3DDevice::SetVertexShader(struct D3DVertexShader *);
// public: long D3DDevice::SetVertexShaderConstantF(unsigned int, float const *, unsigned long);
// D3DDevice_SetVertexShaderConstantF;
// D3DTag_ShaderConstantMask;
// D3DTag_SubsetMask;
// D3DDevice_SetVertexShaderConstantF1;
// D3DVECTOR4_SetX;
// D3DVECTOR4_SetY;
// D3DVECTOR4_SetZ;
// D3DVECTOR4_SetW;
// D3DTag_Index;
// D3DTagCollection_Set;
// public: long D3DDevice::SetVertexShaderConstantI(unsigned int, int const *, unsigned long);
// public: long D3DDevice::SetPixelShader(struct D3DPixelShader *);
// public: long D3DDevice::SetShaderGPRAllocation(unsigned long, unsigned long, unsigned long);
// public: long D3DDevice::GetShaderGPRAllocation(unsigned long *, unsigned long *, unsigned long *);
// D3DDevice_GpuEndShaderConstantF4;

//public: static bool c_rasterizer_shaders::set_pixel_shader(class c_rasterizer_pixel_shader const *, enum e_entry_point)
//{
//    mangled_ppc("?set_pixel_shader@c_rasterizer_shaders@@SA_NPBVc_rasterizer_pixel_shader@@W4e_entry_point@@@Z");
//};

//public: static bool c_rasterizer_shaders::set_vertex_shader(class c_rasterizer_vertex_shader const *, enum e_vertex_type, enum e_transfer_vector_vertex_types, enum e_entry_point)
//{
//    mangled_ppc("?set_vertex_shader@c_rasterizer_shaders@@SA_NPBVc_rasterizer_vertex_shader@@W4e_vertex_type@@W4e_transfer_vector_vertex_types@@W4e_entry_point@@@Z");
//};

//public: static bool c_rasterizer_shaders::set_compiled_pixel_shader(class c_rasterizer_compiled_pixel_shader const *, enum e_entry_point)
//{
//    mangled_ppc("?set_compiled_pixel_shader@c_rasterizer_shaders@@SA_NPBVc_rasterizer_compiled_pixel_shader@@W4e_entry_point@@@Z");
//};

//public: struct D3DPixelShader * c_rasterizer_compiled_pixel_shader::get_d3d_shader(void) const
//{
//    mangled_ppc("?get_d3d_shader@c_rasterizer_compiled_pixel_shader@@QBAPAUD3DPixelShader@@XZ");
//};

//public: static bool c_rasterizer_shaders::check_compiled_pixel_shader(class c_rasterizer_compiled_pixel_shader const *)
//{
//    mangled_ppc("?check_compiled_pixel_shader@c_rasterizer_shaders@@SA_NPBVc_rasterizer_compiled_pixel_shader@@@Z");
//};

//public: static bool c_rasterizer_shaders::set_compiled_vertex_shader(class c_rasterizer_compiled_vertex_shader const *, enum e_vertex_type, enum e_transfer_vector_vertex_types, enum e_entry_point)
//{
//    mangled_ppc("?set_compiled_vertex_shader@c_rasterizer_shaders@@SA_NPBVc_rasterizer_compiled_vertex_shader@@W4e_vertex_type@@W4e_transfer_vector_vertex_types@@W4e_entry_point@@@Z");
//};

//public: struct D3DVertexShader * c_rasterizer_compiled_vertex_shader::get_d3d_shader(void) const
//{
//    mangled_ppc("?get_d3d_shader@c_rasterizer_compiled_vertex_shader@@QBAPAUD3DVertexShader@@XZ");
//};

//public: static bool c_rasterizer_shaders::set_explicit_shaders(long, enum e_vertex_type, enum e_transfer_vector_vertex_types, enum e_entry_point)
//{
//    mangled_ppc("?set_explicit_shaders@c_rasterizer_shaders@@SA_NJW4e_vertex_type@@W4e_transfer_vector_vertex_types@@W4e_entry_point@@@Z");
//};

//public: struct c_rasterizer_globals::s_explicit_shader const * c_rasterizer_globals::get_explicit_shaders(long) const
//{
//    mangled_ppc("?get_explicit_shaders@c_rasterizer_globals@@QBAPBUs_explicit_shader@1@J@Z");
//};

//public: static bool c_rasterizer_shaders::set_explicit_pixel_shader(long, enum e_entry_point)
//{
//    mangled_ppc("?set_explicit_pixel_shader@c_rasterizer_shaders@@SA_NJW4e_entry_point@@@Z");
//};

//public: static void c_rasterizer_shaders::set_vertex_shader_constant(long, long, union vector4d const *)
//{
//    mangled_ppc("?set_vertex_shader_constant@c_rasterizer_shaders@@SAXJJPBTvector4d@@@Z");
//};

//public: static void c_rasterizer_shaders::set_vertex_shader_constant_int(long, long, int const *)
//{
//    mangled_ppc("?set_vertex_shader_constant_int@c_rasterizer_shaders@@SAXJJPBH@Z");
//};

//public: static void c_rasterizer_shaders::set_vertex_shader_constant_bool(long, long, int const *)
//{
//    mangled_ppc("?set_vertex_shader_constant_bool@c_rasterizer_shaders@@SAXJJPBH@Z");
//};

//public: static void c_rasterizer_shaders::set_vertex_shader_constant_stream(long, long, class c_rasterizer_stream_constant const *)
//{
//    mangled_ppc("?set_vertex_shader_constant_stream@c_rasterizer_shaders@@SAXJJPBVc_rasterizer_stream_constant@@@Z");
//};

//public: union GPU_MEMEXPORT_STREAM_CONSTANT const * c_rasterizer_stream_constant::get_d3d_stream(void) const
//{
//    mangled_ppc("?get_d3d_stream@c_rasterizer_stream_constant@@QBAPBTGPU_MEMEXPORT_STREAM_CONSTANT@@XZ");
//};

//public: static void c_rasterizer_shaders::set_vertex_shader_constant_owned(long, long, union vector4d const *)
//{
//    mangled_ppc("?set_vertex_shader_constant_owned@c_rasterizer_shaders@@SAXJJPBTvector4d@@@Z");
//};

//public: static class c_rasterizer_constant_table_definition const * c_rasterizer_shaders::get_shader_constant_table(class c_rasterizer_vertex_shader const *, enum e_platform, enum e_vertex_type, enum e_entry_point, long)
//{
//    mangled_ppc("?get_shader_constant_table@c_rasterizer_shaders@@SAPBVc_rasterizer_constant_table_definition@@PBVc_rasterizer_vertex_shader@@W4e_platform@@W4e_vertex_type@@W4e_entry_point@@J@Z");
//};

//public: static class c_rasterizer_constant_table_definition const * c_rasterizer_shaders::get_shader_constant_table(class c_rasterizer_pixel_shader const *, enum e_platform, enum e_entry_point, long)
//{
//    mangled_ppc("?get_shader_constant_table@c_rasterizer_shaders@@SAPBVc_rasterizer_constant_table_definition@@PBVc_rasterizer_pixel_shader@@W4e_platform@@W4e_entry_point@@J@Z");
//};

//public: static class c_rasterizer_constant_table_definition const * c_rasterizer_shaders::get_shader_constant_table(class c_rasterizer_compiled_vertex_shader const *, enum e_platform)
//{
//    mangled_ppc("?get_shader_constant_table@c_rasterizer_shaders@@SAPBVc_rasterizer_constant_table_definition@@PBVc_rasterizer_compiled_vertex_shader@@W4e_platform@@@Z");
//};

//public: class c_rasterizer_constant_table_definition const * c_rasterizer_compiled_shader::get_constant_table(enum e_platform) const
//{
//    mangled_ppc("?get_constant_table@c_rasterizer_compiled_shader@@QBAPBVc_rasterizer_constant_table_definition@@W4e_platform@@@Z");
//};

//public: static class c_rasterizer_constant_table_definition const * c_rasterizer_shaders::get_shader_constant_table(class c_rasterizer_compiled_pixel_shader const *, enum e_platform)
//{
//    mangled_ppc("?get_shader_constant_table@c_rasterizer_shaders@@SAPBVc_rasterizer_constant_table_definition@@PBVc_rasterizer_compiled_pixel_shader@@W4e_platform@@@Z");
//};

//public: static bool c_rasterizer_shaders::begin_export(long, class c_rasterizer_vertex_buffer *)
//{
//    mangled_ppc("?begin_export@c_rasterizer_shaders@@SA_NJPAVc_rasterizer_vertex_buffer@@@Z");
//};

//public: static bool c_rasterizer_shaders::begin_export(long, class c_rasterizer_texture_ref)
//{
//    mangled_ppc("?begin_export@c_rasterizer_shaders@@SA_NJVc_rasterizer_texture_ref@@@Z");
//};

//public: static void c_rasterizer_shaders::set_stream(class c_rasterizer_stream_constant *, class c_rasterizer_vertex_buffer *, unsigned long, enum GPUSURFACESWAP, enum GPUSURFACENUMBER, enum GPUCOLORFORMAT, enum GPUENDIAN128)
//{
//    mangled_ppc("?set_stream@c_rasterizer_shaders@@SAXPAVc_rasterizer_stream_constant@@PAVc_rasterizer_vertex_buffer@@KW4GPUSURFACESWAP@@W4GPUSURFACENUMBER@@W4GPUCOLORFORMAT@@W4GPUENDIAN128@@@Z");
//};

//public: static bool c_rasterizer_shaders::end_export(long, class c_rasterizer_vertex_buffer *)
//{
//    mangled_ppc("?end_export@c_rasterizer_shaders@@SA_NJPAVc_rasterizer_vertex_buffer@@@Z");
//};

//public: static bool c_rasterizer_shaders::end_export(long, class c_rasterizer_texture_ref)
//{
//    mangled_ppc("?end_export@c_rasterizer_shaders@@SA_NJVc_rasterizer_texture_ref@@@Z");
//};

//public: static void c_rasterizer_shaders::set_stream(class c_rasterizer_stream_constant *, class c_rasterizer_texture_ref, unsigned long, enum GPUSURFACESWAP, enum GPUSURFACENUMBER, enum GPUCOLORFORMAT, enum GPUENDIAN128)
//{
//    mangled_ppc("?set_stream@c_rasterizer_shaders@@SAXPAVc_rasterizer_stream_constant@@Vc_rasterizer_texture_ref@@KW4GPUSURFACESWAP@@W4GPUSURFACENUMBER@@W4GPUCOLORFORMAT@@W4GPUENDIAN128@@@Z");
//};

//public: static enum e_gpr_allocation c_rasterizer_shaders::get_gprs_allocation(struct s_gpr_allocation *)
//{
//    mangled_ppc("?get_gprs_allocation@c_rasterizer_shaders@@SA?AW4e_gpr_allocation@@PAUs_gpr_allocation@@@Z");
//};

//public: static enum e_gpr_allocation c_rasterizer_shaders::set_gprs_allocation(enum e_gpr_allocation)
//{
//    mangled_ppc("?set_gprs_allocation@c_rasterizer_shaders@@SA?AW4e_gpr_allocation@@W42@@Z");
//};

//public: static void c_rasterizer_shaders::update_max_vs_gprs(unsigned long)
//{
//    mangled_ppc("?update_max_vs_gprs@c_rasterizer_shaders@@SAXK@Z");
//};

//public: static void c_rasterizer_shaders::update_max_ps_gprs(unsigned long)
//{
//    mangled_ppc("?update_max_ps_gprs@c_rasterizer_shaders@@SAXK@Z");
//};

//public: static void c_rasterizer_shaders::reset_max_vs_gprs(void)
//{
//    mangled_ppc("?reset_max_vs_gprs@c_rasterizer_shaders@@SAXXZ");
//};

//public: static void c_rasterizer_shaders::reset_max_ps_gprs(void)
//{
//    mangled_ppc("?reset_max_ps_gprs@c_rasterizer_shaders@@SAXXZ");
//};

//public: static bool c_rasterizer_shaders::begin_export(long, enum e_surface)
//{
//    mangled_ppc("?begin_export@c_rasterizer_shaders@@SA_NJW4e_surface@@@Z");
//};

//public: static bool c_rasterizer_shaders::end_export(long, enum e_surface)
//{
//    mangled_ppc("?end_export@c_rasterizer_shaders@@SA_NJW4e_surface@@@Z");
//};

//public: static void c_rasterizer_shaders::set_stream(class c_rasterizer_stream_constant *, enum e_surface, unsigned long, enum GPUSURFACESWAP, enum GPUSURFACENUMBER, enum GPUCOLORFORMAT, enum GPUENDIAN128)
//{
//    mangled_ppc("?set_stream@c_rasterizer_shaders@@SAXPAVc_rasterizer_stream_constant@@W4e_surface@@KW4GPUSURFACESWAP@@W4GPUSURFACENUMBER@@W4GPUCOLORFORMAT@@W4GPUENDIAN128@@@Z");
//};

//public: long D3DDevice::SetVertexShader(struct D3DVertexShader *)
//{
//    mangled_ppc("?SetVertexShader@D3DDevice@@QAAJPAUD3DVertexShader@@@Z");
//};

//public: long D3DDevice::SetVertexShaderConstantF(unsigned int, float const *, unsigned long)
//{
//    mangled_ppc("?SetVertexShaderConstantF@D3DDevice@@QAAJIPBMK@Z");
//};

//D3DDevice_SetVertexShaderConstantF
//{
//    mangled_ppc("D3DDevice_SetVertexShaderConstantF");
//};

//D3DTag_ShaderConstantMask
//{
//    mangled_ppc("D3DTag_ShaderConstantMask");
//};

//D3DTag_SubsetMask
//{
//    mangled_ppc("D3DTag_SubsetMask");
//};

//D3DDevice_SetVertexShaderConstantF1
//{
//    mangled_ppc("D3DDevice_SetVertexShaderConstantF1");
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

//public: long D3DDevice::SetVertexShaderConstantI(unsigned int, int const *, unsigned long)
//{
//    mangled_ppc("?SetVertexShaderConstantI@D3DDevice@@QAAJIPBHK@Z");
//};

//public: long D3DDevice::SetPixelShader(struct D3DPixelShader *)
//{
//    mangled_ppc("?SetPixelShader@D3DDevice@@QAAJPAUD3DPixelShader@@@Z");
//};

//public: long D3DDevice::SetShaderGPRAllocation(unsigned long, unsigned long, unsigned long)
//{
//    mangled_ppc("?SetShaderGPRAllocation@D3DDevice@@QAAJKKK@Z");
//};

//public: long D3DDevice::GetShaderGPRAllocation(unsigned long *, unsigned long *, unsigned long *)
//{
//    mangled_ppc("?GetShaderGPRAllocation@D3DDevice@@QAAJPAK00@Z");
//};

//D3DDevice_GpuEndShaderConstantF4
//{
//    mangled_ppc("D3DDevice_GpuEndShaderConstantF4");
//};

