/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// bool g_render_vision_mode; // "?g_render_vision_mode@@3_NA"
// struct s_tag_block_definition vision_mode_block; // "?vision_mode_block@@3Us_tag_block_definition@@A"
// struct s_tag_group vision_mode_group; // "?vision_mode_group@@3Us_tag_group@@A"
// struct s_tag_reference_definition global_vision_mode_reference; // "?global_vision_mode_reference@@3Us_tag_reference_definition@@A"
// struct s_tag_group_legacy_vtable legacy_vision_mode_vtable; // "?legacy_vision_mode_vtable@@3Us_tag_group_legacy_vtable@@A"
// struct s_tag_group_stream_definition legacy_vision_mode_stream_definition; // "?legacy_vision_mode_stream_definition@@3Us_tag_group_stream_definition@@A"
// struct s_tag_group_sync_definition legacy_vision_mode_xsync_declaration; // "?legacy_vision_mode_xsync_declaration@@3Us_tag_group_sync_definition@@A"
// class t_restricted_allocation_manager<3, 0, 0, void (__cdecl __tls_set_g_vision_mode_state_allocator::*)(void *)> g_vision_mode_state_allocator; // "?g_vision_mode_state_allocator@@3V?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_vision_mode_state_allocator@@YAXPAX@Z@@A"
// class c_legacy_tag_group_vtable_shim legacy_vision_mode_vtable_shim; // "?legacy_vision_mode_vtable_shim@@3Vc_legacy_tag_group_vtable_shim@@A"
// struct s_vision_mode_state *g_vision_mode_state; // "?g_vision_mode_state@@3PAUs_vision_mode_state@@A"

// void __tls_set_g_vision_mode_state_allocator(void *);
// void vision_mode_initialize(void);
// void vision_mode_initialize_for_new_map(void);
// void vision_mode_dispose_from_old_map(void);
// void vision_mode_dispose(void);
// public: static struct s_vision_mode_definition const * s_vision_mode_definition::get_active(void);
// public: static struct s_vision_mode_definition const * s_vision_mode_definition::get(long);
// void vision_mode_setup_shader(struct render_camera const *, struct render_projection const *, struct s_rasterizer_projection const *);
// void vision_mode_render(long, class c_player_view const *, float, float, float);
// void vision_mode_evaluate_state(class s_hud_camera_globals::c_player_window_data *, float, float);
// public: c_hud_camera_view::c_hud_camera_view(void);
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
// public: static bool s_vision_mode_definition::on_new(void *);
// public: static bool s_vision_mode_definition::postprocess(long, void *, bool);
// public: void * t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_vision_mode_state_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: bool t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_vision_mode_state_allocator::*)(void *)>::valid(void) const;
// public: t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_vision_mode_state_allocator::*)(void *)>::t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_vision_mode_state_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_vision_mode_state_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_vision_mode_state_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_vision_mode_state_allocator::*)(void *)>::free_memory(void);
// public: t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_vision_mode_state_allocator::*)(void *)>::~t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_vision_mode_state_allocator::*)(void *)>(void);
// void g_vision_mode_state_allocator::`dynamic atexit destructor'(void);

//void __tls_set_g_vision_mode_state_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_vision_mode_state_allocator@@YAXPAX@Z");
//};

//void vision_mode_initialize(void)
//{
//    mangled_ppc("?vision_mode_initialize@@YAXXZ");
//};

//void vision_mode_initialize_for_new_map(void)
//{
//    mangled_ppc("?vision_mode_initialize_for_new_map@@YAXXZ");
//};

//void vision_mode_dispose_from_old_map(void)
//{
//    mangled_ppc("?vision_mode_dispose_from_old_map@@YAXXZ");
//};

//void vision_mode_dispose(void)
//{
//    mangled_ppc("?vision_mode_dispose@@YAXXZ");
//};

//public: static struct s_vision_mode_definition const * s_vision_mode_definition::get_active(void)
//{
//    mangled_ppc("?get_active@s_vision_mode_definition@@SAPBU1@XZ");
//};

//public: static struct s_vision_mode_definition const * s_vision_mode_definition::get(long)
//{
//    mangled_ppc("?get@s_vision_mode_definition@@SAPBU1@J@Z");
//};

//void vision_mode_setup_shader(struct render_camera const *, struct render_projection const *, struct s_rasterizer_projection const *)
//{
//    mangled_ppc("?vision_mode_setup_shader@@YAXPBUrender_camera@@PBUrender_projection@@PBUs_rasterizer_projection@@@Z");
//};

//void vision_mode_render(long, class c_player_view const *, float, float, float)
//{
//    mangled_ppc("?vision_mode_render@@YAXJPBVc_player_view@@MMM@Z");
//};

//void vision_mode_evaluate_state(class s_hud_camera_globals::c_player_window_data *, float, float)
//{
//    mangled_ppc("?vision_mode_evaluate_state@@YAXPAVc_player_window_data@s_hud_camera_globals@@MM@Z");
//};

//public: c_hud_camera_view::c_hud_camera_view(void)
//{
//    mangled_ppc("??0c_hud_camera_view@@QAA@XZ");
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

//public: static bool s_vision_mode_definition::on_new(void *)
//{
//    mangled_ppc("?on_new@s_vision_mode_definition@@SA_NPAX@Z");
//};

//public: static bool s_vision_mode_definition::postprocess(long, void *, bool)
//{
//    mangled_ppc("?postprocess@s_vision_mode_definition@@SA_NJPAX_N@Z");
//};

//public: void * t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_vision_mode_state_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_vision_mode_state_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: bool t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_vision_mode_state_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_vision_mode_state_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_vision_mode_state_allocator::*)(void *)>::t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_vision_mode_state_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_vision_mode_state_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_vision_mode_state_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_vision_mode_state_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_vision_mode_state_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_vision_mode_state_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_vision_mode_state_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_vision_mode_state_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_vision_mode_state_allocator::*)(void *)>::~t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_vision_mode_state_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_vision_mode_state_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//void g_vision_mode_state_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_vision_mode_state_allocator@@YAXXZ");
//};

