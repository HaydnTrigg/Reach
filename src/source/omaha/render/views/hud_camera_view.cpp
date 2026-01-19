/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// class t_restricted_allocation_manager<4, 0, 0, void (__cdecl __tls_set_g_hud_camera_globals_allocator::*)(void *)> g_hud_camera_globals_allocator; // "?g_hud_camera_globals_allocator@@3V?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_hud_camera_globals_allocator@@YAXPAX@Z@@A"
// struct s_hud_camera_globals *g_hud_camera_globals; // "?g_hud_camera_globals@@3PAUs_hud_camera_globals@@A"

// void __tls_set_g_hud_camera_globals_allocator(void *);
// public: s_hud_camera_globals::c_player_window_data::c_player_window_data(void);
// public: void s_hud_camera_globals::c_player_window_data::fill_with_defaults(void);
// void render_hud_camera_initialize(void);
// void render_hud_camera_initialize_for_new_map(void);
// void render_hud_camera_dispose_from_old_map(void);
// void render_hud_camera_dispose(void);
// void render_hud_camera_on(class s_hud_camera_globals::c_player_window_data *);
// void render_hud_camera_off(class s_hud_camera_globals::c_player_window_data *);
// void render_hud_camera_set_position(class s_hud_camera_globals::c_player_window_data *, float, float, float);
// void render_hud_camera_set_camera_position_offset(class s_hud_camera_globals::c_player_window_data *, float, float, float);
// void render_hud_camera_align_to_player_view(class s_hud_camera_globals::c_player_window_data *);
// void render_hud_camera_set_target(class s_hud_camera_globals::c_player_window_data *, float, float, float);
// void render_hud_camera_set_forward(class s_hud_camera_globals::c_player_window_data *, float, float, float);
// void render_hud_camera_set_up(class s_hud_camera_globals::c_player_window_data *, float, float, float);
// void render_hud_camera_attach_to_object(class s_hud_camera_globals::c_player_window_data *, long, long);
// void render_hud_camera_target_object(class s_hud_camera_globals::c_player_window_data *, long, long);
// void render_hud_camera_structure(class s_hud_camera_globals::c_player_window_data *, bool);
// void render_hud_camera_structure_set_color(class s_hud_camera_globals::c_player_window_data *, union argb_color const &);
// void render_hud_camera_highlight_object(class s_hud_camera_globals::c_player_window_data *, long, float, float, float, float);
// void render_hud_camera_clear_objects(class s_hud_camera_globals::c_player_window_data *);
// void render_hud_camera_spin_around(class s_hud_camera_globals::c_player_window_data *, long);
// void render_hud_camera_set_scale(class s_hud_camera_globals::c_player_window_data *, float);
// void render_hud_camera_set_field_of_view(class s_hud_camera_globals::c_player_window_data *, float);
// void render_hud_camera_set_screen_space_transform(class s_hud_camera_globals::c_player_window_data *, struct real_matrix4x3const *);
// void render_hud_camera_from_player_view(class s_hud_camera_globals::c_player_window_data *);
// void render_hud_camera_window(class s_hud_camera_globals::c_player_window_data *, float, float, float, float);
// void render_hud_camera_get_projection(long, struct render_projection *);
// void render_hud_camera_build_projection(long, struct s_frame_hud_camera *, struct render_projection *);
// void render_hud_camera_on_hs(long);
// void render_hud_camera_off_hs(long);
// void render_hud_camera_set_position_hs(long, float, float, float);
// void render_hud_camera_set_target_hs(long, float, float, float);
// void render_hud_camera_set_forward_hs(long, float, float, float);
// void render_hud_camera_set_up_hs(long, float, float, float);
// void render_hud_camera_attach_to_object_hs(long, long, long);
// void render_hud_camera_target_object_hs(long, long, long);
// void render_hud_camera_structure_hs(long, bool);
// void render_hud_camera_structure_set_color_hs(long, union argb_color const &);
// void render_hud_camera_highlight_object_hs(long, long, float, float, float, float);
// void render_hud_camera_clear_objects_hs(long);
// void render_hud_camera_spin_around_hs(long, long);
// void render_hud_camera_set_scale_hs(long, float);
// void render_hud_camera_from_player_view_hs(long);
// void render_hud_camera_window_hs(long, float, float, float, float);
// public: void c_hud_camera_view::initialize(void);
// bool hud_camera_get_current_frame_settings(long, struct s_frame_hud_camera *, class c_player_view const *, class s_hud_camera_globals::c_player_window_data *);
// void render_hud_camera_build_frame_hud_camera(float, union real_point3d *, union vector3d *, union vector3d *, struct s_frame_hud_camera *);
// void matrix4x4_times_matrix4x3(struct render_projection *, struct real_matrix4x3const *);
// void matrix4x3_times_matrix4x4(struct real_matrix4x3const *, struct render_projection *);
// void projection_apply_screen_space_transform(struct render_projection *, struct real_matrix4x3const *);
// public: void c_hud_camera_view::get_camera_projection(struct s_observer_result const *, long, struct render_camera *, struct render_projection *, class s_hud_camera_globals::c_player_window_data *);
// public: void c_hud_camera_view::setup_camera(struct s_observer_result const *, long, class c_player_view const *, class s_hud_camera_globals::c_player_window_data *);
// public: class c_view_stack * c_hud_camera_view::get_view_stack_element(void);
// public: static void c_hud_camera_view::render_setup(void);
// void render_hud_camera_build_transform(union real_point3d const *, float, float, float, struct real_matrix4x3*);
// public: void c_hud_camera_view::render_internal(long, class s_hud_camera_globals::c_player_window_data *);
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
// public: void c_hud_camera_view::render(long, class c_player_view const *, class s_hud_camera_globals::c_player_window_data *);
// public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_hud_camera_globals_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_hud_camera_globals_allocator::*)(void *)>::valid(void) const;
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_hud_camera_globals_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_hud_camera_globals_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_hud_camera_globals_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_hud_camera_globals_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_hud_camera_globals_allocator::*)(void *)>::free_memory(void);
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_hud_camera_globals_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_hud_camera_globals_allocator::*)(void *)>(void);
// void g_hud_camera_globals_allocator::`dynamic atexit destructor'(void);

//void __tls_set_g_hud_camera_globals_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_hud_camera_globals_allocator@@YAXPAX@Z");
//};

//public: s_hud_camera_globals::c_player_window_data::c_player_window_data(void)
//{
//    mangled_ppc("??0c_player_window_data@s_hud_camera_globals@@QAA@XZ");
//};

//public: void s_hud_camera_globals::c_player_window_data::fill_with_defaults(void)
//{
//    mangled_ppc("?fill_with_defaults@c_player_window_data@s_hud_camera_globals@@QAAXXZ");
//};

//void render_hud_camera_initialize(void)
//{
//    mangled_ppc("?render_hud_camera_initialize@@YAXXZ");
//};

//void render_hud_camera_initialize_for_new_map(void)
//{
//    mangled_ppc("?render_hud_camera_initialize_for_new_map@@YAXXZ");
//};

//void render_hud_camera_dispose_from_old_map(void)
//{
//    mangled_ppc("?render_hud_camera_dispose_from_old_map@@YAXXZ");
//};

//void render_hud_camera_dispose(void)
//{
//    mangled_ppc("?render_hud_camera_dispose@@YAXXZ");
//};

//void render_hud_camera_on(class s_hud_camera_globals::c_player_window_data *)
//{
//    mangled_ppc("?render_hud_camera_on@@YAXPAVc_player_window_data@s_hud_camera_globals@@@Z");
//};

//void render_hud_camera_off(class s_hud_camera_globals::c_player_window_data *)
//{
//    mangled_ppc("?render_hud_camera_off@@YAXPAVc_player_window_data@s_hud_camera_globals@@@Z");
//};

//void render_hud_camera_set_position(class s_hud_camera_globals::c_player_window_data *, float, float, float)
//{
//    mangled_ppc("?render_hud_camera_set_position@@YAXPAVc_player_window_data@s_hud_camera_globals@@MMM@Z");
//};

//void render_hud_camera_set_camera_position_offset(class s_hud_camera_globals::c_player_window_data *, float, float, float)
//{
//    mangled_ppc("?render_hud_camera_set_camera_position_offset@@YAXPAVc_player_window_data@s_hud_camera_globals@@MMM@Z");
//};

//void render_hud_camera_align_to_player_view(class s_hud_camera_globals::c_player_window_data *)
//{
//    mangled_ppc("?render_hud_camera_align_to_player_view@@YAXPAVc_player_window_data@s_hud_camera_globals@@@Z");
//};

//void render_hud_camera_set_target(class s_hud_camera_globals::c_player_window_data *, float, float, float)
//{
//    mangled_ppc("?render_hud_camera_set_target@@YAXPAVc_player_window_data@s_hud_camera_globals@@MMM@Z");
//};

//void render_hud_camera_set_forward(class s_hud_camera_globals::c_player_window_data *, float, float, float)
//{
//    mangled_ppc("?render_hud_camera_set_forward@@YAXPAVc_player_window_data@s_hud_camera_globals@@MMM@Z");
//};

//void render_hud_camera_set_up(class s_hud_camera_globals::c_player_window_data *, float, float, float)
//{
//    mangled_ppc("?render_hud_camera_set_up@@YAXPAVc_player_window_data@s_hud_camera_globals@@MMM@Z");
//};

//void render_hud_camera_attach_to_object(class s_hud_camera_globals::c_player_window_data *, long, long)
//{
//    mangled_ppc("?render_hud_camera_attach_to_object@@YAXPAVc_player_window_data@s_hud_camera_globals@@JJ@Z");
//};

//void render_hud_camera_target_object(class s_hud_camera_globals::c_player_window_data *, long, long)
//{
//    mangled_ppc("?render_hud_camera_target_object@@YAXPAVc_player_window_data@s_hud_camera_globals@@JJ@Z");
//};

//void render_hud_camera_structure(class s_hud_camera_globals::c_player_window_data *, bool)
//{
//    mangled_ppc("?render_hud_camera_structure@@YAXPAVc_player_window_data@s_hud_camera_globals@@_N@Z");
//};

//void render_hud_camera_structure_set_color(class s_hud_camera_globals::c_player_window_data *, union argb_color const &)
//{
//    mangled_ppc("?render_hud_camera_structure_set_color@@YAXPAVc_player_window_data@s_hud_camera_globals@@ABTargb_color@@@Z");
//};

//void render_hud_camera_highlight_object(class s_hud_camera_globals::c_player_window_data *, long, float, float, float, float)
//{
//    mangled_ppc("?render_hud_camera_highlight_object@@YAXPAVc_player_window_data@s_hud_camera_globals@@JMMMM@Z");
//};

//void render_hud_camera_clear_objects(class s_hud_camera_globals::c_player_window_data *)
//{
//    mangled_ppc("?render_hud_camera_clear_objects@@YAXPAVc_player_window_data@s_hud_camera_globals@@@Z");
//};

//void render_hud_camera_spin_around(class s_hud_camera_globals::c_player_window_data *, long)
//{
//    mangled_ppc("?render_hud_camera_spin_around@@YAXPAVc_player_window_data@s_hud_camera_globals@@J@Z");
//};

//void render_hud_camera_set_scale(class s_hud_camera_globals::c_player_window_data *, float)
//{
//    mangled_ppc("?render_hud_camera_set_scale@@YAXPAVc_player_window_data@s_hud_camera_globals@@M@Z");
//};

//void render_hud_camera_set_field_of_view(class s_hud_camera_globals::c_player_window_data *, float)
//{
//    mangled_ppc("?render_hud_camera_set_field_of_view@@YAXPAVc_player_window_data@s_hud_camera_globals@@M@Z");
//};

//void render_hud_camera_set_screen_space_transform(class s_hud_camera_globals::c_player_window_data *, struct real_matrix4x3const *)
//{
//    mangled_ppc("?render_hud_camera_set_screen_space_transform@@YAXPAVc_player_window_data@s_hud_camera_globals@@PBUreal_matrix4x3@@@Z");
//};

//void render_hud_camera_from_player_view(class s_hud_camera_globals::c_player_window_data *)
//{
//    mangled_ppc("?render_hud_camera_from_player_view@@YAXPAVc_player_window_data@s_hud_camera_globals@@@Z");
//};

//void render_hud_camera_window(class s_hud_camera_globals::c_player_window_data *, float, float, float, float)
//{
//    mangled_ppc("?render_hud_camera_window@@YAXPAVc_player_window_data@s_hud_camera_globals@@MMMM@Z");
//};

//void render_hud_camera_get_projection(long, struct render_projection *)
//{
//    mangled_ppc("?render_hud_camera_get_projection@@YAXJPAUrender_projection@@@Z");
//};

//void render_hud_camera_build_projection(long, struct s_frame_hud_camera *, struct render_projection *)
//{
//    mangled_ppc("?render_hud_camera_build_projection@@YAXJPAUs_frame_hud_camera@@PAUrender_projection@@@Z");
//};

//void render_hud_camera_on_hs(long)
//{
//    mangled_ppc("?render_hud_camera_on_hs@@YAXJ@Z");
//};

//void render_hud_camera_off_hs(long)
//{
//    mangled_ppc("?render_hud_camera_off_hs@@YAXJ@Z");
//};

//void render_hud_camera_set_position_hs(long, float, float, float)
//{
//    mangled_ppc("?render_hud_camera_set_position_hs@@YAXJMMM@Z");
//};

//void render_hud_camera_set_target_hs(long, float, float, float)
//{
//    mangled_ppc("?render_hud_camera_set_target_hs@@YAXJMMM@Z");
//};

//void render_hud_camera_set_forward_hs(long, float, float, float)
//{
//    mangled_ppc("?render_hud_camera_set_forward_hs@@YAXJMMM@Z");
//};

//void render_hud_camera_set_up_hs(long, float, float, float)
//{
//    mangled_ppc("?render_hud_camera_set_up_hs@@YAXJMMM@Z");
//};

//void render_hud_camera_attach_to_object_hs(long, long, long)
//{
//    mangled_ppc("?render_hud_camera_attach_to_object_hs@@YAXJJJ@Z");
//};

//void render_hud_camera_target_object_hs(long, long, long)
//{
//    mangled_ppc("?render_hud_camera_target_object_hs@@YAXJJJ@Z");
//};

//void render_hud_camera_structure_hs(long, bool)
//{
//    mangled_ppc("?render_hud_camera_structure_hs@@YAXJ_N@Z");
//};

//void render_hud_camera_structure_set_color_hs(long, union argb_color const &)
//{
//    mangled_ppc("?render_hud_camera_structure_set_color_hs@@YAXJABTargb_color@@@Z");
//};

//void render_hud_camera_highlight_object_hs(long, long, float, float, float, float)
//{
//    mangled_ppc("?render_hud_camera_highlight_object_hs@@YAXJJMMMM@Z");
//};

//void render_hud_camera_clear_objects_hs(long)
//{
//    mangled_ppc("?render_hud_camera_clear_objects_hs@@YAXJ@Z");
//};

//void render_hud_camera_spin_around_hs(long, long)
//{
//    mangled_ppc("?render_hud_camera_spin_around_hs@@YAXJJ@Z");
//};

//void render_hud_camera_set_scale_hs(long, float)
//{
//    mangled_ppc("?render_hud_camera_set_scale_hs@@YAXJM@Z");
//};

//void render_hud_camera_from_player_view_hs(long)
//{
//    mangled_ppc("?render_hud_camera_from_player_view_hs@@YAXJ@Z");
//};

//void render_hud_camera_window_hs(long, float, float, float, float)
//{
//    mangled_ppc("?render_hud_camera_window_hs@@YAXJMMMM@Z");
//};

//public: void c_hud_camera_view::initialize(void)
//{
//    mangled_ppc("?initialize@c_hud_camera_view@@QAAXXZ");
//};

//bool hud_camera_get_current_frame_settings(long, struct s_frame_hud_camera *, class c_player_view const *, class s_hud_camera_globals::c_player_window_data *)
//{
//    mangled_ppc("?hud_camera_get_current_frame_settings@@YA_NJPAUs_frame_hud_camera@@PBVc_player_view@@PAVc_player_window_data@s_hud_camera_globals@@@Z");
//};

//void render_hud_camera_build_frame_hud_camera(float, union real_point3d *, union vector3d *, union vector3d *, struct s_frame_hud_camera *)
//{
//    mangled_ppc("?render_hud_camera_build_frame_hud_camera@@YAXMPATreal_point3d@@PATvector3d@@1PAUs_frame_hud_camera@@@Z");
//};

//void matrix4x4_times_matrix4x3(struct render_projection *, struct real_matrix4x3const *)
//{
//    mangled_ppc("?matrix4x4_times_matrix4x3@@YAXPAUrender_projection@@PBUreal_matrix4x3@@@Z");
//};

//void matrix4x3_times_matrix4x4(struct real_matrix4x3const *, struct render_projection *)
//{
//    mangled_ppc("?matrix4x3_times_matrix4x4@@YAXPBUreal_matrix4x3@@PAUrender_projection@@@Z");
//};

//void projection_apply_screen_space_transform(struct render_projection *, struct real_matrix4x3const *)
//{
//    mangled_ppc("?projection_apply_screen_space_transform@@YAXPAUrender_projection@@PBUreal_matrix4x3@@@Z");
//};

//public: void c_hud_camera_view::get_camera_projection(struct s_observer_result const *, long, struct render_camera *, struct render_projection *, class s_hud_camera_globals::c_player_window_data *)
//{
//    mangled_ppc("?get_camera_projection@c_hud_camera_view@@QAAXPBUs_observer_result@@JPAUrender_camera@@PAUrender_projection@@PAVc_player_window_data@s_hud_camera_globals@@@Z");
//};

//public: void c_hud_camera_view::setup_camera(struct s_observer_result const *, long, class c_player_view const *, class s_hud_camera_globals::c_player_window_data *)
//{
//    mangled_ppc("?setup_camera@c_hud_camera_view@@QAAXPBUs_observer_result@@JPBVc_player_view@@PAVc_player_window_data@s_hud_camera_globals@@@Z");
//};

//public: class c_view_stack * c_hud_camera_view::get_view_stack_element(void)
//{
//    mangled_ppc("?get_view_stack_element@c_hud_camera_view@@QAAPAVc_view_stack@@XZ");
//};

//public: static void c_hud_camera_view::render_setup(void)
//{
//    mangled_ppc("?render_setup@c_hud_camera_view@@SAXXZ");
//};

//void render_hud_camera_build_transform(union real_point3d const *, float, float, float, struct real_matrix4x3*)
//{
//    mangled_ppc("?render_hud_camera_build_transform@@YAXPBTreal_point3d@@MMMPAUreal_matrix4x3@@@Z");
//};

//public: void c_hud_camera_view::render_internal(long, class s_hud_camera_globals::c_player_window_data *)
//{
//    mangled_ppc("?render_internal@c_hud_camera_view@@QAAXJPAVc_player_window_data@s_hud_camera_globals@@@Z");
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

//public: void c_hud_camera_view::render(long, class c_player_view const *, class s_hud_camera_globals::c_player_window_data *)
//{
//    mangled_ppc("?render@c_hud_camera_view@@QAAXJPBVc_player_view@@PAVc_player_window_data@s_hud_camera_globals@@@Z");
//};

//public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_hud_camera_globals_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_hud_camera_globals_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_hud_camera_globals_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_hud_camera_globals_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_hud_camera_globals_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_hud_camera_globals_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_hud_camera_globals_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_hud_camera_globals_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_hud_camera_globals_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_hud_camera_globals_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_hud_camera_globals_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_hud_camera_globals_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_hud_camera_globals_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_hud_camera_globals_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_hud_camera_globals_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_hud_camera_globals_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//void g_hud_camera_globals_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_hud_camera_globals_allocator@@YAXXZ");
//};

