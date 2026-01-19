/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static float c_camera_fx_values::g_HDR_target_stops; // "?g_HDR_target_stops@c_camera_fx_values@@2MA"
// bool g_render_true_gamma; // "?g_render_true_gamma@@3_NA"
// struct s_tag_struct_definition camera_fx_settings_block_struct_definition; // "?camera_fx_settings_block_struct_definition@@3Us_tag_struct_definition@@A"
// struct s_tag_block_definition camera_fx_settings_block; // "?camera_fx_settings_block@@3Us_tag_block_definition@@A"
// struct s_tag_group camera_fx_settings_group; // "?camera_fx_settings_group@@3Us_tag_group@@A"
// struct s_tag_reference_definition global_camera_fx_settings_reference; // "?global_camera_fx_settings_reference@@3Us_tag_reference_definition@@A"
// public: static long c_exposure::m_next_render_target; // "?m_next_render_target@c_exposure@@2JA"
// public: static float c_camera_fx_values::g_exposure_stops; // "?g_exposure_stops@c_camera_fx_values@@2MA"
// public: static bool c_camera_fx_values::g_display_exposure; // "?g_display_exposure@c_camera_fx_values@@2_NA"
// struct s_tag_group_legacy_vtable legacy_camera_fx_settings_vtable; // "?legacy_camera_fx_settings_vtable@@3Us_tag_group_legacy_vtable@@A"
// struct s_tag_group_stream_definition legacy_camera_fx_settings_stream_definition; // "?legacy_camera_fx_settings_stream_definition@@3Us_tag_group_stream_definition@@A"
// struct s_tag_group_sync_definition legacy_camera_fx_settings_xsync_declaration; // "?legacy_camera_fx_settings_xsync_declaration@@3Us_tag_group_sync_definition@@A"
// float g_unclamped_target; // "?g_unclamped_target@@3MA"
// class t_restricted_allocation_manager<4, 0, 0, void (__cdecl __tls_set_g_scripted_exposure_game_globals_allocator::*)(void *)> g_scripted_exposure_game_globals_allocator; // "?g_scripted_exposure_game_globals_allocator@@3V?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_scripted_exposure_game_globals_allocator@@YAXPAX@Z@@A"
// class c_legacy_tag_group_vtable_shim legacy_camera_fx_settings_vtable_shim; // "?legacy_camera_fx_settings_vtable_shim@@3Vc_legacy_tag_group_vtable_shim@@A"
// struct s_scripted_exposure *scripted_exposure_game_globals; // "?scripted_exposure_game_globals@@3PAUs_scripted_exposure@@A"

// void __tls_set_g_scripted_exposure_game_globals_allocator(void *);
// public: static void s_scripted_exposure::initialize(void);
// public: static void s_scripted_exposure::initialize_for_new_map(void);
// public: static void s_scripted_exposure::dispose_from_old_map(void);
// public: static void s_scripted_exposure::dispose(void);
// void render_enable_autoexposure(bool);
// void render_animate_exposure_full(float, float, float, float, float);
// void render_animate_exposure_fade_in(float, float);
// void render_animate_exposure_fade_out(float);
// void render_animate_exposure(float, float);
// void render_autoexposure_instant(long);
// void scripted_exposure_update(float);
// void render_exposure_set_environment_darken(float);
// public: void s_scripted_exposure::update_scripted_exposure(float);
// public: float s_scripted_exposure::render_apply_scripted_exposure(float);
// bool update_camera_fx_tags(unsigned long, struct s_tag_field const *, long, long, void *, struct s_tag_field const *, long, long, void *);
// public: static bool c_camera_fx_settings::initialize_on_new(void *);
// public: static bool c_camera_fx_settings::postprocess(long, void *, bool);
// public: void c_camera_fx_settings::s_real_parameter::set(float, float, float, unsigned short);
// public: void c_camera_fx_settings::s_color_parameter::set(float, float, float, unsigned short);
// public: void c_camera_fx_settings::set_defaults(bool);
// public: void c_camera_fx_settings::s_real_instant_parameter::set(float, unsigned short);
// public: void c_camera_fx_settings::s_word_parameter::set(unsigned short, unsigned short);
// public: void c_exposure::set_exposure(float);
// public: void c_camera_fx_values::display_exposure(struct c_camera_fx_settings::s_real_exposure_parameter const *);
// public: float c_camera_fx_values::get_display_exposure_stops(void) const;
// public: void c_camera_fx_settings::s_real_exposure_parameter::calculate_new_value(class c_exposure &, unsigned long, float, float, float, float) const;
// public: bool s_scripted_exposure::render_allow_autoexposure(void);
// public: bool s_scripted_exposure::render_fast_exposure_adapt(void);
// public: void c_exposure::update_exposure_buffer(float);
// public: float c_exposure::get_min_historic_exposure(float);
// public: float c_exposure::get_max_historic_exposure(float);
// struct c_camera_fx_settings::s_parameter const * choose_valid_parameter(class c_camera_fx_settings const *, class c_camera_fx_settings const *, class c_camera_fx_settings const *, class c_camera_fx_settings const *, class c_camera_fx_settings const *, long);
// public: struct c_camera_fx_settings::s_real_exposure_parameter const * c_camera_fx_values::update(class c_camera_fx_settings const *, class c_camera_fx_settings const *, struct scenario_camera_fx_palette_entry const *, class c_camera_fx_settings const *, class c_camera_fx_settings const *, float);
// public: void c_camera_fx_settings::s_real_instant_parameter::update(float &) const;
// public: void c_camera_fx_settings::s_real_parameter::update(float &) const;
// public: float c_camera_fx_settings::s_real_parameter::calculate_new_value(float, float) const;
// public: void c_camera_fx_settings::s_real_parameter::update(float &, float) const;
// public: void c_camera_fx_settings::s_real_exposure_parameter::update(class c_exposure &, unsigned long, float, float, float, float) const;
// public: void c_camera_fx_settings::s_color_parameter::update(union rgb_color &) const;
// public: static class c_camera_fx_settings const * c_camera_fx_settings::get(long);
// float modify_global_camera_exposure(float, bool);
// public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_scripted_exposure_game_globals_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_scripted_exposure_game_globals_allocator::*)(void *)>::valid(void) const;
// float log(float);
// logf;
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_scripted_exposure_game_globals_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_scripted_exposure_game_globals_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_scripted_exposure_game_globals_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_scripted_exposure_game_globals_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_scripted_exposure_game_globals_allocator::*)(void *)>::free_memory(void);
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_scripted_exposure_game_globals_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_scripted_exposure_game_globals_allocator::*)(void *)>(void);
// void g_scripted_exposure_game_globals_allocator::`dynamic atexit destructor'(void);

//void __tls_set_g_scripted_exposure_game_globals_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_scripted_exposure_game_globals_allocator@@YAXPAX@Z");
//};

//public: static void s_scripted_exposure::initialize(void)
//{
//    mangled_ppc("?initialize@s_scripted_exposure@@SAXXZ");
//};

//public: static void s_scripted_exposure::initialize_for_new_map(void)
//{
//    mangled_ppc("?initialize_for_new_map@s_scripted_exposure@@SAXXZ");
//};

//public: static void s_scripted_exposure::dispose_from_old_map(void)
//{
//    mangled_ppc("?dispose_from_old_map@s_scripted_exposure@@SAXXZ");
//};

//public: static void s_scripted_exposure::dispose(void)
//{
//    mangled_ppc("?dispose@s_scripted_exposure@@SAXXZ");
//};

//void render_enable_autoexposure(bool)
//{
//    mangled_ppc("?render_enable_autoexposure@@YAX_N@Z");
//};

//void render_animate_exposure_full(float, float, float, float, float)
//{
//    mangled_ppc("?render_animate_exposure_full@@YAXMMMMM@Z");
//};

//void render_animate_exposure_fade_in(float, float)
//{
//    mangled_ppc("?render_animate_exposure_fade_in@@YAXMM@Z");
//};

//void render_animate_exposure_fade_out(float)
//{
//    mangled_ppc("?render_animate_exposure_fade_out@@YAXM@Z");
//};

//void render_animate_exposure(float, float)
//{
//    mangled_ppc("?render_animate_exposure@@YAXMM@Z");
//};

//void render_autoexposure_instant(long)
//{
//    mangled_ppc("?render_autoexposure_instant@@YAXJ@Z");
//};

//void scripted_exposure_update(float)
//{
//    mangled_ppc("?scripted_exposure_update@@YAXM@Z");
//};

//void render_exposure_set_environment_darken(float)
//{
//    mangled_ppc("?render_exposure_set_environment_darken@@YAXM@Z");
//};

//public: void s_scripted_exposure::update_scripted_exposure(float)
//{
//    mangled_ppc("?update_scripted_exposure@s_scripted_exposure@@QAAXM@Z");
//};

//public: float s_scripted_exposure::render_apply_scripted_exposure(float)
//{
//    mangled_ppc("?render_apply_scripted_exposure@s_scripted_exposure@@QAAMM@Z");
//};

//bool update_camera_fx_tags(unsigned long, struct s_tag_field const *, long, long, void *, struct s_tag_field const *, long, long, void *)
//{
//    mangled_ppc("?update_camera_fx_tags@@YA_NKPBUs_tag_field@@JJPAX0JJ1@Z");
//};

//public: static bool c_camera_fx_settings::initialize_on_new(void *)
//{
//    mangled_ppc("?initialize_on_new@c_camera_fx_settings@@SA_NPAX@Z");
//};

//public: static bool c_camera_fx_settings::postprocess(long, void *, bool)
//{
//    mangled_ppc("?postprocess@c_camera_fx_settings@@SA_NJPAX_N@Z");
//};

//public: void c_camera_fx_settings::s_real_parameter::set(float, float, float, unsigned short)
//{
//    mangled_ppc("?set@s_real_parameter@c_camera_fx_settings@@QAAXMMMG@Z");
//};

//public: void c_camera_fx_settings::s_color_parameter::set(float, float, float, unsigned short)
//{
//    mangled_ppc("?set@s_color_parameter@c_camera_fx_settings@@QAAXMMMG@Z");
//};

//public: void c_camera_fx_settings::set_defaults(bool)
//{
//    mangled_ppc("?set_defaults@c_camera_fx_settings@@QAAX_N@Z");
//};

//public: void c_camera_fx_settings::s_real_instant_parameter::set(float, unsigned short)
//{
//    mangled_ppc("?set@s_real_instant_parameter@c_camera_fx_settings@@QAAXMG@Z");
//};

//public: void c_camera_fx_settings::s_word_parameter::set(unsigned short, unsigned short)
//{
//    mangled_ppc("?set@s_word_parameter@c_camera_fx_settings@@QAAXGG@Z");
//};

//public: void c_exposure::set_exposure(float)
//{
//    mangled_ppc("?set_exposure@c_exposure@@QAAXM@Z");
//};

//public: void c_camera_fx_values::display_exposure(struct c_camera_fx_settings::s_real_exposure_parameter const *)
//{
//    mangled_ppc("?display_exposure@c_camera_fx_values@@QAAXPBUs_real_exposure_parameter@c_camera_fx_settings@@@Z");
//};

//public: float c_camera_fx_values::get_display_exposure_stops(void) const
//{
//    mangled_ppc("?get_display_exposure_stops@c_camera_fx_values@@QBAMXZ");
//};

//public: void c_camera_fx_settings::s_real_exposure_parameter::calculate_new_value(class c_exposure &, unsigned long, float, float, float, float) const
//{
//    mangled_ppc("?calculate_new_value@s_real_exposure_parameter@c_camera_fx_settings@@QBAXAAVc_exposure@@KMMMM@Z");
//};

//public: bool s_scripted_exposure::render_allow_autoexposure(void)
//{
//    mangled_ppc("?render_allow_autoexposure@s_scripted_exposure@@QAA_NXZ");
//};

//public: bool s_scripted_exposure::render_fast_exposure_adapt(void)
//{
//    mangled_ppc("?render_fast_exposure_adapt@s_scripted_exposure@@QAA_NXZ");
//};

//public: void c_exposure::update_exposure_buffer(float)
//{
//    mangled_ppc("?update_exposure_buffer@c_exposure@@QAAXM@Z");
//};

//public: float c_exposure::get_min_historic_exposure(float)
//{
//    mangled_ppc("?get_min_historic_exposure@c_exposure@@QAAMM@Z");
//};

//public: float c_exposure::get_max_historic_exposure(float)
//{
//    mangled_ppc("?get_max_historic_exposure@c_exposure@@QAAMM@Z");
//};

//struct c_camera_fx_settings::s_parameter const * choose_valid_parameter(class c_camera_fx_settings const *, class c_camera_fx_settings const *, class c_camera_fx_settings const *, class c_camera_fx_settings const *, class c_camera_fx_settings const *, long)
//{
//    mangled_ppc("?choose_valid_parameter@@YAPBUs_parameter@c_camera_fx_settings@@PBV2@0000J@Z");
//};

//public: struct c_camera_fx_settings::s_real_exposure_parameter const * c_camera_fx_values::update(class c_camera_fx_settings const *, class c_camera_fx_settings const *, struct scenario_camera_fx_palette_entry const *, class c_camera_fx_settings const *, class c_camera_fx_settings const *, float)
//{
//    mangled_ppc("?update@c_camera_fx_values@@QAAPBUs_real_exposure_parameter@c_camera_fx_settings@@PBV3@0PBUscenario_camera_fx_palette_entry@@00M@Z");
//};

//public: void c_camera_fx_settings::s_real_instant_parameter::update(float &) const
//{
//    mangled_ppc("?update@s_real_instant_parameter@c_camera_fx_settings@@QBAXAAM@Z");
//};

//public: void c_camera_fx_settings::s_real_parameter::update(float &) const
//{
//    mangled_ppc("?update@s_real_parameter@c_camera_fx_settings@@QBAXAAM@Z");
//};

//public: float c_camera_fx_settings::s_real_parameter::calculate_new_value(float, float) const
//{
//    mangled_ppc("?calculate_new_value@s_real_parameter@c_camera_fx_settings@@QBAMMM@Z");
//};

//public: void c_camera_fx_settings::s_real_parameter::update(float &, float) const
//{
//    mangled_ppc("?update@s_real_parameter@c_camera_fx_settings@@QBAXAAMM@Z");
//};

//public: void c_camera_fx_settings::s_real_exposure_parameter::update(class c_exposure &, unsigned long, float, float, float, float) const
//{
//    mangled_ppc("?update@s_real_exposure_parameter@c_camera_fx_settings@@QBAXAAVc_exposure@@KMMMM@Z");
//};

//public: void c_camera_fx_settings::s_color_parameter::update(union rgb_color &) const
//{
//    mangled_ppc("?update@s_color_parameter@c_camera_fx_settings@@QBAXAATrgb_color@@@Z");
//};

//public: static class c_camera_fx_settings const * c_camera_fx_settings::get(long)
//{
//    mangled_ppc("?get@c_camera_fx_settings@@SAPBV1@J@Z");
//};

//float modify_global_camera_exposure(float, bool)
//{
//    mangled_ppc("?modify_global_camera_exposure@@YAMM_N@Z");
//};

//public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_scripted_exposure_game_globals_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_scripted_exposure_game_globals_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_scripted_exposure_game_globals_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_scripted_exposure_game_globals_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//float log(float)
//{
//    mangled_ppc("?log@@YAMM@Z");
//};

//logf
//{
//    mangled_ppc("logf");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_scripted_exposure_game_globals_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_scripted_exposure_game_globals_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_scripted_exposure_game_globals_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_scripted_exposure_game_globals_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_scripted_exposure_game_globals_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_scripted_exposure_game_globals_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_scripted_exposure_game_globals_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_scripted_exposure_game_globals_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_scripted_exposure_game_globals_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_scripted_exposure_game_globals_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_scripted_exposure_game_globals_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_scripted_exposure_game_globals_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//void g_scripted_exposure_game_globals_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_scripted_exposure_game_globals_allocator@@YAXXZ");
//};

