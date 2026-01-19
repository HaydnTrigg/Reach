/* ---------- headers */

#include "omaha\main\main_screenshot.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// long g_screenshot_anisotropic_level; // "?g_screenshot_anisotropic_level@@3JA"
// float g_screenshot_gamma; // "?g_screenshot_gamma@@3MA"
// long volatile `public: bool __cdecl c_screenshot_render_engine::capture_screenshot_if_requested(class c_view_stack *, class c_player_view *, class c_camera_fx_values *, long)'::`42'::x_event_category_index; // "?x_event_category_index@?CK@??capture_screenshot_if_requested@c_screenshot_render_engine@@QAA_NPAVc_view_stack@@PAVc_player_view@@PAVc_camera_fx_values@@J@Z@4JC"
// long volatile `public: bool __cdecl c_screenshot_render_engine::capture_screenshot_if_requested(class c_view_stack *, class c_player_view *, class c_camera_fx_values *, long)'::`29'::x_event_category_index; // "?x_event_category_index@?BN@??capture_screenshot_if_requested@c_screenshot_render_engine@@QAA_NPAVc_view_stack@@PAVc_player_view@@PAVc_camera_fx_values@@J@Z@4JC"
// long volatile `private: bool __cdecl c_screenshot_render_engine::init_tiling_settings(void)'::`14'::x_event_category_index; // "?x_event_category_index@?O@??init_tiling_settings@c_screenshot_render_engine@@AAA_NXZ@4JC"
// long volatile `public: bool __cdecl c_screenshot_render_engine::post_render_capture_screenshot_if_requested(void)'::`9'::x_event_category_index; // "?x_event_category_index@?8??post_render_capture_screenshot_if_requested@c_screenshot_render_engine@@QAA_NXZ@4JC"

// bool is_taking_screenshot(void);
// void reset_num_screenshots_taken(void);
// void dump_camera_to_file(char const *, struct render_camera const *);
// bool screenshot_render(class c_view_stack *, class c_player_view *, class c_camera_fx_values *, long);
// public: bool c_screenshot_render_engine::capture_screenshot_if_requested(class c_view_stack *, class c_player_view *, class c_camera_fx_values *, long);
// private: static void c_screenshot_render_engine::clear_screenshot_settings(void);
// private: bool c_screenshot_render_engine::init_tiling_settings(void);
// private: void c_screenshot_render_engine::setup_render_state(void);
// private: bool c_screenshot_render_engine::open_screenshot_files(void);
// private: void c_screenshot_render_engine::close_screenshot_files(void);
// private: static void c_screenshot_render_engine::init_bloom_accumulate(unsigned long);
// private: void c_screenshot_render_engine::calculate_bloom(void);
// private: bool c_screenshot_render_engine::build_camera_view(long, long);
// private: void c_screenshot_render_engine::build_rasterizer_projection(void);
// private: void c_screenshot_render_engine::render_single_tile(void);
// private: void c_screenshot_render_engine::bloom_accumulate_single_tile(long, long);
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
// public: static void c_screenshot_render_engine::crop_render_to_tile_size(enum e_surface, enum e_surface, long, long, long);
// public: static void c_screenshot_render_engine::preshrink_surface(float &, float &, float, float, enum e_surface);
// private: void c_screenshot_render_engine::render_screenshot(void);
// public: void c_ui_view::set_is_screenshot(bool);
// private: bool c_screenshot_render_engine::build_cubemap_view(long, long, union real_point3d const *, long *);
// private: void c_screenshot_render_engine::composite_single_tile(long, long);
// private: static void c_screenshot_render_engine::initialize_render_display(void);
// private: void c_screenshot_render_engine::copy_composited_tile_to_display(long, long);
// private: void c_screenshot_render_engine::save_composited_tile_to_file(long, long);
// bool screenshot_post_render(void);
// public: bool c_screenshot_render_engine::post_render_capture_screenshot_if_requested(void);
// bool init_screenshot(short, short, char const *);
// void clear_snapshot_settings(void);
// void screenshot_size(short, short, char const *);
// void screenshot_multiple(short, char const *);
// void screenshot_single(char const *);
// void screenshot_single_webmap(char const *);
// void screenshot_multiple_raw(short, char const *);
// void screenshot_simple(char const *);
// void object_snapshot(long, char const *);
// void object_thumbnail(char const *, char const *, char const *);
// void structure_instance_snapshot(long);
// void screenshot_cubemap(char const *);
// void screenshot_cubemap_callback(void (*)(long, long, long, long, long, long, long, long), bool (*)(long, union real_point3d *, float *), long);
// long get_object_snapshot_model_index(char *, long *);
// void screenshot_get_object_imposter_settings(long *, char *, char *);
// void get_snapshot_filename_prefix(char const *, char const *, long, char *);
// bool screenshot_should_render_object_thumbnails(void);
// void screenshot_get_object_thumbnail_settings(long *, char *, char *);
// long get_structure_instance_snapshot_bsp_index(void);
// bool screenshot_in_progress(void);
// bool screenshot_full_anisotropic(void);
// long screenshot_get_anisotropic_level(void);
// bool screenshot_allow_postprocess(void);
// bool screenshot_allow_antialias_blur(void);
// bool screenshot_allow_ui_render(void);
// bool screenshot_allow_screen_effects(void);
// bool screenshot_allow_motion_blur(void);
// bool screenshot_allow_instance_occlusion(void);
// float screenshot_get_frame_update_time_delta(void);
// void screenshot_override_ssao(long *);
// void screenshot_override_exposure(float *, float *);
// bool screenshot_disable_hud(void);
// float screenshot_mipmap_lod_bias(void);
// void screenshot_get_scales(float *, float *);
// void screenshot_debug(void);
// bool screenshot_to_memory(long, long, long, long, void *, long, struct s_saved_camera *, class c_synchronized_int32*);
// void screenshot_to_memory_tile_callback(long, long, long, long, long, long, long, long);

//bool is_taking_screenshot(void)
//{
//    mangled_ppc("?is_taking_screenshot@@YA_NXZ");
//};

//void reset_num_screenshots_taken(void)
//{
//    mangled_ppc("?reset_num_screenshots_taken@@YAXXZ");
//};

//void dump_camera_to_file(char const *, struct render_camera const *)
//{
//    mangled_ppc("?dump_camera_to_file@@YAXPBDPBUrender_camera@@@Z");
//};

//bool screenshot_render(class c_view_stack *, class c_player_view *, class c_camera_fx_values *, long)
//{
//    mangled_ppc("?screenshot_render@@YA_NPAVc_view_stack@@PAVc_player_view@@PAVc_camera_fx_values@@J@Z");
//};

//public: bool c_screenshot_render_engine::capture_screenshot_if_requested(class c_view_stack *, class c_player_view *, class c_camera_fx_values *, long)
//{
//    mangled_ppc("?capture_screenshot_if_requested@c_screenshot_render_engine@@QAA_NPAVc_view_stack@@PAVc_player_view@@PAVc_camera_fx_values@@J@Z");
//};

//private: static void c_screenshot_render_engine::clear_screenshot_settings(void)
//{
//    mangled_ppc("?clear_screenshot_settings@c_screenshot_render_engine@@CAXXZ");
//};

//private: bool c_screenshot_render_engine::init_tiling_settings(void)
//{
//    mangled_ppc("?init_tiling_settings@c_screenshot_render_engine@@AAA_NXZ");
//};

//private: void c_screenshot_render_engine::setup_render_state(void)
//{
//    mangled_ppc("?setup_render_state@c_screenshot_render_engine@@AAAXXZ");
//};

//private: bool c_screenshot_render_engine::open_screenshot_files(void)
//{
//    mangled_ppc("?open_screenshot_files@c_screenshot_render_engine@@AAA_NXZ");
//};

//private: void c_screenshot_render_engine::close_screenshot_files(void)
//{
//    mangled_ppc("?close_screenshot_files@c_screenshot_render_engine@@AAAXXZ");
//};

//private: static void c_screenshot_render_engine::init_bloom_accumulate(unsigned long)
//{
//    mangled_ppc("?init_bloom_accumulate@c_screenshot_render_engine@@CAXK@Z");
//};

//private: void c_screenshot_render_engine::calculate_bloom(void)
//{
//    mangled_ppc("?calculate_bloom@c_screenshot_render_engine@@AAAXXZ");
//};

//private: bool c_screenshot_render_engine::build_camera_view(long, long)
//{
//    mangled_ppc("?build_camera_view@c_screenshot_render_engine@@AAA_NJJ@Z");
//};

//private: void c_screenshot_render_engine::build_rasterizer_projection(void)
//{
//    mangled_ppc("?build_rasterizer_projection@c_screenshot_render_engine@@AAAXXZ");
//};

//private: void c_screenshot_render_engine::render_single_tile(void)
//{
//    mangled_ppc("?render_single_tile@c_screenshot_render_engine@@AAAXXZ");
//};

//private: void c_screenshot_render_engine::bloom_accumulate_single_tile(long, long)
//{
//    mangled_ppc("?bloom_accumulate_single_tile@c_screenshot_render_engine@@AAAXJJ@Z");
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

//public: static void c_screenshot_render_engine::crop_render_to_tile_size(enum e_surface, enum e_surface, long, long, long)
//{
//    mangled_ppc("?crop_render_to_tile_size@c_screenshot_render_engine@@SAXW4e_surface@@0JJJ@Z");
//};

//public: static void c_screenshot_render_engine::preshrink_surface(float &, float &, float, float, enum e_surface)
//{
//    mangled_ppc("?preshrink_surface@c_screenshot_render_engine@@SAXAAM0MMW4e_surface@@@Z");
//};

//private: void c_screenshot_render_engine::render_screenshot(void)
//{
//    mangled_ppc("?render_screenshot@c_screenshot_render_engine@@AAAXXZ");
//};

//public: void c_ui_view::set_is_screenshot(bool)
//{
//    mangled_ppc("?set_is_screenshot@c_ui_view@@QAAX_N@Z");
//};

//private: bool c_screenshot_render_engine::build_cubemap_view(long, long, union real_point3d const *, long *)
//{
//    mangled_ppc("?build_cubemap_view@c_screenshot_render_engine@@AAA_NJJPBTreal_point3d@@PAJ@Z");
//};

//private: void c_screenshot_render_engine::composite_single_tile(long, long)
//{
//    mangled_ppc("?composite_single_tile@c_screenshot_render_engine@@AAAXJJ@Z");
//};

//private: static void c_screenshot_render_engine::initialize_render_display(void)
//{
//    mangled_ppc("?initialize_render_display@c_screenshot_render_engine@@CAXXZ");
//};

//private: void c_screenshot_render_engine::copy_composited_tile_to_display(long, long)
//{
//    mangled_ppc("?copy_composited_tile_to_display@c_screenshot_render_engine@@AAAXJJ@Z");
//};

//private: void c_screenshot_render_engine::save_composited_tile_to_file(long, long)
//{
//    mangled_ppc("?save_composited_tile_to_file@c_screenshot_render_engine@@AAAXJJ@Z");
//};

//bool screenshot_post_render(void)
//{
//    mangled_ppc("?screenshot_post_render@@YA_NXZ");
//};

//public: bool c_screenshot_render_engine::post_render_capture_screenshot_if_requested(void)
//{
//    mangled_ppc("?post_render_capture_screenshot_if_requested@c_screenshot_render_engine@@QAA_NXZ");
//};

//bool init_screenshot(short, short, char const *)
//{
//    mangled_ppc("?init_screenshot@@YA_NFFPBD@Z");
//};

//void clear_snapshot_settings(void)
//{
//    mangled_ppc("?clear_snapshot_settings@@YAXXZ");
//};

//void screenshot_size(short, short, char const *)
//{
//    mangled_ppc("?screenshot_size@@YAXFFPBD@Z");
//};

//void screenshot_multiple(short, char const *)
//{
//    mangled_ppc("?screenshot_multiple@@YAXFPBD@Z");
//};

//void screenshot_single(char const *)
//{
//    mangled_ppc("?screenshot_single@@YAXPBD@Z");
//};

//void screenshot_single_webmap(char const *)
//{
//    mangled_ppc("?screenshot_single_webmap@@YAXPBD@Z");
//};

//void screenshot_multiple_raw(short, char const *)
//{
//    mangled_ppc("?screenshot_multiple_raw@@YAXFPBD@Z");
//};

//void screenshot_simple(char const *)
//{
//    mangled_ppc("?screenshot_simple@@YAXPBD@Z");
//};

//void object_snapshot(long, char const *)
//{
//    mangled_ppc("?object_snapshot@@YAXJPBD@Z");
//};

//void object_thumbnail(char const *, char const *, char const *)
//{
//    mangled_ppc("?object_thumbnail@@YAXPBD00@Z");
//};

//void structure_instance_snapshot(long)
//{
//    mangled_ppc("?structure_instance_snapshot@@YAXJ@Z");
//};

//void screenshot_cubemap(char const *)
//{
//    mangled_ppc("?screenshot_cubemap@@YAXPBD@Z");
//};

//void screenshot_cubemap_callback(void (*)(long, long, long, long, long, long, long, long), bool (*)(long, union real_point3d *, float *), long)
//{
//    mangled_ppc("?screenshot_cubemap_callback@@YAXP6AXJJJJJJJJ@ZP6A_NJPATreal_point3d@@PAM@ZJ@Z");
//};

//long get_object_snapshot_model_index(char *, long *)
//{
//    mangled_ppc("?get_object_snapshot_model_index@@YAJPADPAJ@Z");
//};

//void screenshot_get_object_imposter_settings(long *, char *, char *)
//{
//    mangled_ppc("?screenshot_get_object_imposter_settings@@YAXPAJPAD1@Z");
//};

//void get_snapshot_filename_prefix(char const *, char const *, long, char *)
//{
//    mangled_ppc("?get_snapshot_filename_prefix@@YAXPBD0JPAD@Z");
//};

//bool screenshot_should_render_object_thumbnails(void)
//{
//    mangled_ppc("?screenshot_should_render_object_thumbnails@@YA_NXZ");
//};

//void screenshot_get_object_thumbnail_settings(long *, char *, char *)
//{
//    mangled_ppc("?screenshot_get_object_thumbnail_settings@@YAXPAJPAD1@Z");
//};

//long get_structure_instance_snapshot_bsp_index(void)
//{
//    mangled_ppc("?get_structure_instance_snapshot_bsp_index@@YAJXZ");
//};

//bool screenshot_in_progress(void)
//{
//    mangled_ppc("?screenshot_in_progress@@YA_NXZ");
//};

//bool screenshot_full_anisotropic(void)
//{
//    mangled_ppc("?screenshot_full_anisotropic@@YA_NXZ");
//};

//long screenshot_get_anisotropic_level(void)
//{
//    mangled_ppc("?screenshot_get_anisotropic_level@@YAJXZ");
//};

//bool screenshot_allow_postprocess(void)
//{
//    mangled_ppc("?screenshot_allow_postprocess@@YA_NXZ");
//};

//bool screenshot_allow_antialias_blur(void)
//{
//    mangled_ppc("?screenshot_allow_antialias_blur@@YA_NXZ");
//};

//bool screenshot_allow_ui_render(void)
//{
//    mangled_ppc("?screenshot_allow_ui_render@@YA_NXZ");
//};

//bool screenshot_allow_screen_effects(void)
//{
//    mangled_ppc("?screenshot_allow_screen_effects@@YA_NXZ");
//};

//bool screenshot_allow_motion_blur(void)
//{
//    mangled_ppc("?screenshot_allow_motion_blur@@YA_NXZ");
//};

//bool screenshot_allow_instance_occlusion(void)
//{
//    mangled_ppc("?screenshot_allow_instance_occlusion@@YA_NXZ");
//};

//float screenshot_get_frame_update_time_delta(void)
//{
//    mangled_ppc("?screenshot_get_frame_update_time_delta@@YAMXZ");
//};

//void screenshot_override_ssao(long *)
//{
//    mangled_ppc("?screenshot_override_ssao@@YAXPAJ@Z");
//};

//void screenshot_override_exposure(float *, float *)
//{
//    mangled_ppc("?screenshot_override_exposure@@YAXPAM0@Z");
//};

//bool screenshot_disable_hud(void)
//{
//    mangled_ppc("?screenshot_disable_hud@@YA_NXZ");
//};

//float screenshot_mipmap_lod_bias(void)
//{
//    mangled_ppc("?screenshot_mipmap_lod_bias@@YAMXZ");
//};

//void screenshot_get_scales(float *, float *)
//{
//    mangled_ppc("?screenshot_get_scales@@YAXPAM0@Z");
//};

//void screenshot_debug(void)
//{
//    mangled_ppc("?screenshot_debug@@YAXXZ");
//};

//bool screenshot_to_memory(long, long, long, long, void *, long, struct s_saved_camera *, class c_synchronized_int32*)
//{
//    mangled_ppc("?screenshot_to_memory@@YA_NJJJJPAXJPAUs_saved_camera@@PAVc_synchronized_int32@@@Z");
//};

//void screenshot_to_memory_tile_callback(long, long, long, long, long, long, long, long)
//{
//    mangled_ppc("?screenshot_to_memory_tile_callback@@YAXJJJJJJJJ@Z");
//};

