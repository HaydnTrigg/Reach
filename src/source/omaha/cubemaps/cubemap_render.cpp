/* ---------- headers */

#include "omaha\cubemaps\cubemap_render.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

float *g_cubemap_exposures; // "?g_cubemap_exposures@@3PAMA"
c_cubemap_render_manager g_cubemap_render_manager; // "?g_cubemap_render_manager@@3Vc_cubemap_render_manager@@A"

/* ---------- globals */

/* ---------- public code */

//public: void c_cubemap_render_manager::activate(void)
//{
//    mangled_ppc("?activate@c_cubemap_render_manager@@QAAXXZ");
//};

//public: bool c_cubemap_render_manager::is_processing_bsp(long)
//{
//    mangled_ppc("?is_processing_bsp@c_cubemap_render_manager@@QAA_NJ@Z");
//};

//public: bool c_cubemap_render_manager::setup_process_bsp(long, long, unsigned long)
//{
//    mangled_ppc("?setup_process_bsp@c_cubemap_render_manager@@QAA_NJJK@Z");
//};

//void cubemap_dynamic_tile_callback(long, long, long, long, long, long, long, long)
//{
//    mangled_ppc("?cubemap_dynamic_tile_callback@@YAXJJJJJJJJ@Z");
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

//long get_bsp_index_from_cubemap_position(union real_point3d const *)
//{
//    mangled_ppc("?get_bsp_index_from_cubemap_position@@YAJPBTreal_point3d@@@Z");
//};

//public: unsigned long c_cubemap_render_manager::get_currently_processing_bsps(void)
//{
//    mangled_ppc("?get_currently_processing_bsps@c_cubemap_render_manager@@QAAKXZ");
//};

//void local_swap_bytes(unsigned char &, unsigned char &)
//{
//    mangled_ppc("?local_swap_bytes@@YAXAAE0@Z");
//};

//void local_get_surface_pixel_16f(struct _D3DLOCKED_RECT const &, long, long, float *)
//{
//    mangled_ppc("?local_get_surface_pixel_16f@@YAXABU_D3DLOCKED_RECT@@JJPAM@Z");
//};

//bool cubemap_dynamic_position_callback(long, union real_point3d *, float *)
//{
//    mangled_ppc("?cubemap_dynamic_position_callback@@YA_NJPATreal_point3d@@PAM@Z");
//};

//public: void c_cubemap_render_manager::tick(void)
//{
//    mangled_ppc("?tick@c_cubemap_render_manager@@QAAXXZ");
//};

void cubemap_dynamic_generate(void)
{
    mangled_ppc("?cubemap_dynamic_generate@@YAXXZ");

    g_cubemap_render_manager.activate();
};

//public: c_cubemap_render_manager::c_cubemap_render_manager(void)
//{
//    mangled_ppc("??0c_cubemap_render_manager@@QAA@XZ");
//};

/* ---------- private code */

/* ---------- reverse engineering */

// public: void c_cubemap_render_manager::activate(void);
// public: bool c_cubemap_render_manager::is_processing_bsp(long);
// public: bool c_cubemap_render_manager::setup_process_bsp(long, long, unsigned long);
// void cubemap_dynamic_tile_callback(long, long, long, long, long, long, long, long);
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
// long get_bsp_index_from_cubemap_position(union real_point3d const *);
// public: unsigned long c_cubemap_render_manager::get_currently_processing_bsps(void);
// void local_swap_bytes(unsigned char &, unsigned char &);
// void local_get_surface_pixel_16f(struct _D3DLOCKED_RECT const &, long, long, float *);
// bool cubemap_dynamic_position_callback(long, union real_point3d *, float *);
// public: void c_cubemap_render_manager::tick(void);
// void cubemap_dynamic_generate(void);
// public: c_cubemap_render_manager::c_cubemap_render_manager(void);
