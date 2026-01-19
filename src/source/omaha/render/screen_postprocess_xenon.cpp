/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static struct c_screen_postprocess::s_settings const *const const c_screen_postprocess::x_settings; // "?x_settings@c_screen_postprocess@@2QBUs_settings@1@B"
// public: static long const c_global_screen_effect_state::k_maximum_screen_effects; // "?k_maximum_screen_effects@c_global_screen_effect_state@@2JB"
// public: static enum s_single_screen_effect_definition::e_flags const c_flags_no_init<enum s_single_screen_effect_definition::e_flags, unsigned short, 7, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_flags@s_single_screen_effect_definition@@G$06Us_default_enum_string_resolver@@@@2W4e_flags@s_single_screen_effect_definition@@B"
// public: static enum s_single_screen_effect_definition::e_hidden_flags const c_flags_no_init<enum s_single_screen_effect_definition::e_hidden_flags, unsigned short, 2, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_hidden_flags@s_single_screen_effect_definition@@G$01Us_default_enum_string_resolver@@@@2W4e_hidden_flags@s_single_screen_effect_definition@@B"
// public: static enum s_area_screen_effect_definition::e_flags const c_flags_no_init<enum s_area_screen_effect_definition::e_flags, unsigned short, 4, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_flags@s_area_screen_effect_definition@@G$03Us_default_enum_string_resolver@@@@2W4e_flags@s_area_screen_effect_definition@@B"
// public: static enum s_area_screen_effect_definition::e_hidden_flags const c_flags_no_init<enum s_area_screen_effect_definition::e_hidden_flags, unsigned short, 2, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_hidden_flags@s_area_screen_effect_definition@@G$01Us_default_enum_string_resolver@@@@2W4e_hidden_flags@s_area_screen_effect_definition@@B"
// private: static struct c_screen_postprocess::s_settings c_screen_postprocess::x_settings_internal; // "?x_settings_internal@c_screen_postprocess@@0Us_settings@1@A"
// public: static struct c_screen_postprocess::s_settings c_screen_postprocess::x_editable_settings; // "?x_editable_settings@c_screen_postprocess@@2Us_settings@1@A"

// void render_debug_video_mode(void);
// public: static void c_screen_postprocess::restore_surface_to_EDRAM(enum e_surface, long);
// public: c_rasterizer_texture_ref::c_rasterizer_texture_ref(long);
// public: static void c_screen_postprocess::blit(long, enum e_surface, enum e_surface, enum e_sampler_filter_mode, enum e_sampler_address_mode, float, float, float, float, union real_rectangle2d const *, union real_rectangle2d const *);
// public: static void c_screen_postprocess::paint(long, enum e_surface, long, union real_rectangle2d const *);
// public: static void c_screen_postprocess::paint_depth_only(long, enum e_surface, union real_rectangle2d const *);
// public: static void c_screen_postprocess::copy_explicit(long, class c_rasterizer_texture_ref, struct D3DSurface *, enum e_sampler_filter_mode, enum e_sampler_address_mode, float, float, float, float, union real_rectangle2d const *);
// public: static void c_screen_postprocess::copy(long, enum e_surface, enum e_surface, enum e_sampler_filter_mode, enum e_sampler_address_mode, float, float, float, float, union real_rectangle2d const *);
// public: static void c_screen_postprocess::copy_entry_point(long, long, enum e_surface, enum e_surface, enum e_sampler_filter_mode, enum e_sampler_address_mode, float, float, float, float, union real_rectangle2d const *);
// public: static void c_screen_postprocess::apply_binary_op_ex(long, enum e_surface, enum e_surface, enum e_surface, enum e_sampler_filter_mode, enum e_sampler_address_mode, float, float, float, float, union real_rectangle2d const *);
// void set_surface_as_texture_default_black(long, enum e_surface);
// public: class c_rasterizer_texture_ref const c_rasterizer_globals::get_default_texture_rasterizer_texture_ref(long) const;
// public: static void c_screen_postprocess::apply_trinary_op(long, enum e_surface, enum e_surface, enum e_surface, long, enum e_surface, float, float, float, float);
// void set_surface_as_texture_with_default(long, enum e_surface, class c_rasterizer_texture_ref);
// void calculate_gaussian_kernel(float *, long, float, float);
// void calculate_taps_from_kernel(float *, union vector4d *, long, bool, float);
// public: static void c_screen_postprocess::gaussian_blur_explicit(class c_rasterizer_texture_ref, struct D3DSurface *, float, float);
// public: static void c_surface::resolve(class c_rasterizer_texture_ref, long);
// public: static void c_screen_postprocess::gaussian_blur(enum e_surface, enum e_surface, float, float);
// public: static void c_screen_postprocess::gaussian_blur_arbitrary(enum e_surface, enum e_surface, float, float);
// public: static void c_screen_postprocess::gaussian_blur_fixed(enum e_surface, enum e_surface, float, float, float, float);
// public: static void c_screen_postprocess::blur_surface_explicit(float, float, class c_rasterizer_texture_ref, struct D3DSurface *, class c_rasterizer_texture_ref, struct D3DSurface *, class c_rasterizer_texture_ref);
// public: static enum e_surface c_screen_postprocess::blur_display(float, float, enum e_surface);
// public: static class c_player_view * c_player_view::get_current(void);
// void spike_blur(enum e_surface, enum e_surface, float, float, float, float, float);
// public: static bool c_screen_postprocess::postprocess_final_composite(long, enum e_surface, enum e_surface, float, bool, bool, bool, float, float, float, float, union short_rectangle2d const *, union vector4d *, struct s_observer_depth_of_field const *);
// float _real_random(unsigned long *, char const *, char const *, unsigned long);
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
// public: static enum e_surface c_screen_postprocess::downsample_generate(enum e_surface, class c_camera_fx_values &, enum e_surface, enum e_surface);
// public: static void c_screen_postprocess::setup_rasterizer_for_postprocess(bool);
// public: static enum e_surface c_screen_postprocess::postprocess_bloom_buffer(enum e_surface, class c_camera_fx_values &, enum e_splitscreen_res);
// enum e_surface get_splitscreen_res_surface(enum e_surface, enum e_splitscreen_res);
// public: static void c_screen_postprocess::resolve_depth_buffer(union short_rectangle2d const *);
// public: static void c_screen_postprocess::resolve_frame_buffers(union short_rectangle2d const *);
// public: static void c_screen_postprocess::postprocess_player_view(class c_camera_fx_values &, struct render_camera const *, struct s_screen_effect_settings &, enum e_splitscreen_res, struct s_observer_depth_of_field const *, enum e_output_user_index, enum e_surface);
// float exp(float);

//void render_debug_video_mode(void)
//{
//    mangled_ppc("?render_debug_video_mode@@YAXXZ");
//};

//public: static void c_screen_postprocess::restore_surface_to_EDRAM(enum e_surface, long)
//{
//    mangled_ppc("?restore_surface_to_EDRAM@c_screen_postprocess@@SAXW4e_surface@@J@Z");
//};

//public: c_rasterizer_texture_ref::c_rasterizer_texture_ref(long)
//{
//    mangled_ppc("??0c_rasterizer_texture_ref@@QAA@J@Z");
//};

//public: static void c_screen_postprocess::blit(long, enum e_surface, enum e_surface, enum e_sampler_filter_mode, enum e_sampler_address_mode, float, float, float, float, union real_rectangle2d const *, union real_rectangle2d const *)
//{
//    mangled_ppc("?blit@c_screen_postprocess@@SAXJW4e_surface@@0W4e_sampler_filter_mode@@W4e_sampler_address_mode@@MMMMPBTreal_rectangle2d@@3@Z");
//};

//public: static void c_screen_postprocess::paint(long, enum e_surface, long, union real_rectangle2d const *)
//{
//    mangled_ppc("?paint@c_screen_postprocess@@SAXJW4e_surface@@JPBTreal_rectangle2d@@@Z");
//};

//public: static void c_screen_postprocess::paint_depth_only(long, enum e_surface, union real_rectangle2d const *)
//{
//    mangled_ppc("?paint_depth_only@c_screen_postprocess@@SAXJW4e_surface@@PBTreal_rectangle2d@@@Z");
//};

//public: static void c_screen_postprocess::copy_explicit(long, class c_rasterizer_texture_ref, struct D3DSurface *, enum e_sampler_filter_mode, enum e_sampler_address_mode, float, float, float, float, union real_rectangle2d const *)
//{
//    mangled_ppc("?copy_explicit@c_screen_postprocess@@SAXJVc_rasterizer_texture_ref@@PAUD3DSurface@@W4e_sampler_filter_mode@@W4e_sampler_address_mode@@MMMMPBTreal_rectangle2d@@@Z");
//};

//public: static void c_screen_postprocess::copy(long, enum e_surface, enum e_surface, enum e_sampler_filter_mode, enum e_sampler_address_mode, float, float, float, float, union real_rectangle2d const *)
//{
//    mangled_ppc("?copy@c_screen_postprocess@@SAXJW4e_surface@@0W4e_sampler_filter_mode@@W4e_sampler_address_mode@@MMMMPBTreal_rectangle2d@@@Z");
//};

//public: static void c_screen_postprocess::copy_entry_point(long, long, enum e_surface, enum e_surface, enum e_sampler_filter_mode, enum e_sampler_address_mode, float, float, float, float, union real_rectangle2d const *)
//{
//    mangled_ppc("?copy_entry_point@c_screen_postprocess@@SAXJJW4e_surface@@0W4e_sampler_filter_mode@@W4e_sampler_address_mode@@MMMMPBTreal_rectangle2d@@@Z");
//};

//public: static void c_screen_postprocess::apply_binary_op_ex(long, enum e_surface, enum e_surface, enum e_surface, enum e_sampler_filter_mode, enum e_sampler_address_mode, float, float, float, float, union real_rectangle2d const *)
//{
//    mangled_ppc("?apply_binary_op_ex@c_screen_postprocess@@SAXJW4e_surface@@00W4e_sampler_filter_mode@@W4e_sampler_address_mode@@MMMMPBTreal_rectangle2d@@@Z");
//};

//void set_surface_as_texture_default_black(long, enum e_surface)
//{
//    mangled_ppc("?set_surface_as_texture_default_black@@YAXJW4e_surface@@@Z");
//};

//public: class c_rasterizer_texture_ref const c_rasterizer_globals::get_default_texture_rasterizer_texture_ref(long) const
//{
//    mangled_ppc("?get_default_texture_rasterizer_texture_ref@c_rasterizer_globals@@QBA?BVc_rasterizer_texture_ref@@J@Z");
//};

//public: static void c_screen_postprocess::apply_trinary_op(long, enum e_surface, enum e_surface, enum e_surface, long, enum e_surface, float, float, float, float)
//{
//    mangled_ppc("?apply_trinary_op@c_screen_postprocess@@SAXJW4e_surface@@00J0MMMM@Z");
//};

//void set_surface_as_texture_with_default(long, enum e_surface, class c_rasterizer_texture_ref)
//{
//    mangled_ppc("?set_surface_as_texture_with_default@@YAXJW4e_surface@@Vc_rasterizer_texture_ref@@@Z");
//};

//void calculate_gaussian_kernel(float *, long, float, float)
//{
//    mangled_ppc("?calculate_gaussian_kernel@@YAXPAMJMM@Z");
//};

//void calculate_taps_from_kernel(float *, union vector4d *, long, bool, float)
//{
//    mangled_ppc("?calculate_taps_from_kernel@@YAXPAMPATvector4d@@J_NM@Z");
//};

//public: static void c_screen_postprocess::gaussian_blur_explicit(class c_rasterizer_texture_ref, struct D3DSurface *, float, float)
//{
//    mangled_ppc("?gaussian_blur_explicit@c_screen_postprocess@@SAXVc_rasterizer_texture_ref@@PAUD3DSurface@@MM@Z");
//};

//public: static void c_surface::resolve(class c_rasterizer_texture_ref, long)
//{
//    mangled_ppc("?resolve@c_surface@@SAXVc_rasterizer_texture_ref@@J@Z");
//};

//public: static void c_screen_postprocess::gaussian_blur(enum e_surface, enum e_surface, float, float)
//{
//    mangled_ppc("?gaussian_blur@c_screen_postprocess@@SAXW4e_surface@@0MM@Z");
//};

//public: static void c_screen_postprocess::gaussian_blur_arbitrary(enum e_surface, enum e_surface, float, float)
//{
//    mangled_ppc("?gaussian_blur_arbitrary@c_screen_postprocess@@SAXW4e_surface@@0MM@Z");
//};

//public: static void c_screen_postprocess::gaussian_blur_fixed(enum e_surface, enum e_surface, float, float, float, float)
//{
//    mangled_ppc("?gaussian_blur_fixed@c_screen_postprocess@@SAXW4e_surface@@0MMMM@Z");
//};

//public: static void c_screen_postprocess::blur_surface_explicit(float, float, class c_rasterizer_texture_ref, struct D3DSurface *, class c_rasterizer_texture_ref, struct D3DSurface *, class c_rasterizer_texture_ref)
//{
//    mangled_ppc("?blur_surface_explicit@c_screen_postprocess@@SAXMMVc_rasterizer_texture_ref@@PAUD3DSurface@@010@Z");
//};

//public: static enum e_surface c_screen_postprocess::blur_display(float, float, enum e_surface)
//{
//    mangled_ppc("?blur_display@c_screen_postprocess@@SA?AW4e_surface@@MMW42@@Z");
//};

//public: static class c_player_view * c_player_view::get_current(void)
//{
//    mangled_ppc("?get_current@c_player_view@@SAPAV1@XZ");
//};

//void spike_blur(enum e_surface, enum e_surface, float, float, float, float, float)
//{
//    mangled_ppc("?spike_blur@@YAXW4e_surface@@0MMMMM@Z");
//};

//public: static bool c_screen_postprocess::postprocess_final_composite(long, enum e_surface, enum e_surface, float, bool, bool, bool, float, float, float, float, union short_rectangle2d const *, union vector4d *, struct s_observer_depth_of_field const *)
//{
//    mangled_ppc("?postprocess_final_composite@c_screen_postprocess@@SA_NJW4e_surface@@0M_N11MMMMPBTshort_rectangle2d@@PATvector4d@@PBUs_observer_depth_of_field@@@Z");
//};

//float _real_random(unsigned long *, char const *, char const *, unsigned long)
//{
//    mangled_ppc("?_real_random@@YAMPAKPBD1K@Z");
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

//public: static enum e_surface c_screen_postprocess::downsample_generate(enum e_surface, class c_camera_fx_values &, enum e_surface, enum e_surface)
//{
//    mangled_ppc("?downsample_generate@c_screen_postprocess@@SA?AW4e_surface@@W42@AAVc_camera_fx_values@@00@Z");
//};

//public: static void c_screen_postprocess::setup_rasterizer_for_postprocess(bool)
//{
//    mangled_ppc("?setup_rasterizer_for_postprocess@c_screen_postprocess@@SAX_N@Z");
//};

//public: static enum e_surface c_screen_postprocess::postprocess_bloom_buffer(enum e_surface, class c_camera_fx_values &, enum e_splitscreen_res)
//{
//    mangled_ppc("?postprocess_bloom_buffer@c_screen_postprocess@@SA?AW4e_surface@@W42@AAVc_camera_fx_values@@W4e_splitscreen_res@@@Z");
//};

//enum e_surface get_splitscreen_res_surface(enum e_surface, enum e_splitscreen_res)
//{
//    mangled_ppc("?get_splitscreen_res_surface@@YA?AW4e_surface@@W41@W4e_splitscreen_res@@@Z");
//};

//public: static void c_screen_postprocess::resolve_depth_buffer(union short_rectangle2d const *)
//{
//    mangled_ppc("?resolve_depth_buffer@c_screen_postprocess@@SAXPBTshort_rectangle2d@@@Z");
//};

//public: static void c_screen_postprocess::resolve_frame_buffers(union short_rectangle2d const *)
//{
//    mangled_ppc("?resolve_frame_buffers@c_screen_postprocess@@SAXPBTshort_rectangle2d@@@Z");
//};

//public: static void c_screen_postprocess::postprocess_player_view(class c_camera_fx_values &, struct render_camera const *, struct s_screen_effect_settings &, enum e_splitscreen_res, struct s_observer_depth_of_field const *, enum e_output_user_index, enum e_surface)
//{
//    mangled_ppc("?postprocess_player_view@c_screen_postprocess@@SAXAAVc_camera_fx_values@@PBUrender_camera@@AAUs_screen_effect_settings@@W4e_splitscreen_res@@PBUs_observer_depth_of_field@@W4e_output_user_index@@W4e_surface@@@Z");
//};

//float exp(float)
//{
//    mangled_ppc("?exp@@YAMM@Z");
//};

