/* ---------- headers */

#include "omaha\bink\bink_playback.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// bool debug_bink; // "?debug_bink@@3_NA"
// bool use_opaque_scaling; // "?use_opaque_scaling@@3_NA"
// class c_interlocked_int32g_intro_playback_start; // "?g_intro_playback_start@@3Vc_interlocked_int32@@A"
// class c_bink_optional_cache_callback g_bink_optional_cache_callback; // "?g_bink_optional_cache_callback@@3Vc_bink_optional_cache_callback@@A"
// struct _bink_globals bink_globals; // "?bink_globals@@3U_bink_globals@@A"
// class c_interlocked_int32g_intro_playback_is_over; // "?g_intro_playback_is_over@@3Vc_interlocked_int32@@A"
// class t_restricted_allocation_manager<4, 0, 0, void (__cdecl __tls_set_g_bink_globals_allocator::*)(void *)> g_bink_globals_allocator; // "?g_bink_globals_allocator@@3V?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_bink_globals_allocator@@YAXPAX@Z@@A"
// struct s_bink_shared_game_state *bink_game_state; // "?bink_game_state@@3PAUs_bink_shared_game_state@@A"

// void __tls_set_g_bink_globals_allocator(void *);
// void bink_playback_initialize(void);
// void bink_playback_dispose(void);
// void bink_playback_prepare_for_new_zone_set(unsigned long, unsigned long);
// void bink_playback_initialize_for_new_structure_bsp(unsigned long);
// void bink_playback_dispose_from_old_structure_bsp(unsigned long);
// void bink_playback_prepare_for_non_bsp_zone_set_switch(struct s_game_non_bsp_zone_set const *, struct s_game_non_bsp_zone_set const *, class c_scenario_resource_registry *);
// void bink_playback_initialize_for_new_non_bsp_zone_set(struct s_game_non_bsp_zone_set const *);
// void bink_playback_dispose_from_old_non_bsp_zone_set(struct s_game_non_bsp_zone_set const *);
// void bink_playback_memory_initialize(enum e_map_memory_configuration);
// void bink_playback_memory_dispose(void);
// public: s_bink_prediction_message::s_bink_prediction_message(void);
// void bink_playback_initialize_for_new_map(void);
// void bink_playback_dispose_from_old_map(void);
// void bink_playback_prepare_for_game_state_load(long);
// void rebase_bink_on_base_address_change(void *, void *);
// bool bink_playback_active(void);
// bool bink_playback_should_be_playing_deterministic_bink(void);
// bool bink_playback_active_fullscreen(void);
// bool bink_playback_ui_rendering_inhibited(void);
// bool bink_playback_use_large_bink_size(void);
// void bink_playback_render(void);
// void bink_notify_load_masking_complete(void);
// bool bink_playback_in_progress(void);
// bool bink_playback_using_io_during_map_load_masking(void);
// long bink_playback_time_left_hs_ticks(void);
// void bink_close_bink_only(struct s_bink_runtime *);
// void bink_close(struct s_bink_runtime *);
// public: virtual void c_bink_allocation::deallocate(void *, char const *, long);
// public: c_bink_allocation::c_bink_allocation(void);
// public: virtual void * c_bink_allocation::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// void bink_playback_terminate(void);
// bool binks_match(struct BINK *, struct BINK *);
// void bink_playback_stop(void);
// void bink_playback_stop_due_to_input_device_change(void);
// public: virtual char const * c_bink_optional_cache_callback::get_name(void);
// public: virtual void c_bink_optional_cache_callback::get_memory_configuration(enum e_map_memory_configuration, struct s_optional_cache_user_memory_configuration *);
// public: virtual void c_bink_optional_cache_callback::terminate(void const *);
// void * bink_alloc(unsigned int);
// void bink_get_memory_available(char const *, bool);
// bool is_all_bink_memory_free(void);
// void bink_free(void *);
// void Sync_Bink_textures(struct s_bink_video_frame *, long);
// void store_cache(void *, unsigned int);
// long bink_get_next_decompression_frame(struct s_bink_video_frame const *);
// void Wait_for_Bink_textures(struct s_bink_video_frame const *);
// float bink_get_fade_amount(void);
// float bink_playback_time_elapsed_seconds(void);
// void bink_setup_rasterizer(long);
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
// void bink_destroy_rasterizer(void);
// void bink_release_textures(long);
// void release_unused_textures(long);
// long bink_get_texture_index_to_render(void);
// long bink_get_last_updated_frame(void);
// void bink_display_frame(union short_rectangle2d const *);
// void bink_draw_frame(void);
// void play_credits_movie_skippable_to_main_menu(void);
// void play_credits_movie_unskippable(void);
// void play_bink_movie(char const *);
// void play_bink_movie_from_tag(long);
// void predict_bink_movie(char const *);
// bool predict_bink_movie_fullpath(char const *, long, unsigned long, struct BINK *, bool);
// void predict_bink_movie_from_tag(long);
// bool bink_prediction_in_progress_or_queued(void);
// bool bink_prediction_queued_and_not_active(void);
// bool bink_prediction_in_progress_for_movie(char const *, long);
// bool prepare_bink_movie_for_playback_async(struct s_bink_runtime *, struct s_bink_prediction_message const *);
// public: static unsigned long `bool prepare_bink_movie_for_playback_async(struct s_bink_runtime *, struct s_bink_prediction_message const *)'::`84'::s_bink_needs_unions::initialize_plane_and_get_size(struct D3DTexture *, struct BINKPLANE *, bool);
// public: static struct s_allocation_description `bool prepare_bink_movie_for_playback_async(struct s_bink_runtime *, struct s_bink_prediction_message const *)'::`84'::s_bink_needs_unions::get_plane_description(struct D3DTexture *, struct BINKPLANE *, bool);
// public: s_allocation_description::s_allocation_description(void *&, unsigned long, long);
// public: static bool `bool prepare_bink_movie_for_playback_async(struct s_bink_runtime *, struct s_bink_prediction_message const *)'::`84'::s_bink_needs_unions::initialize_plane_set(struct s_bink_frame_texture *, struct BINKFRAMEPLANESET *, bool, class c_allocation_interface *, void **, unsigned long *);
// void bink_set_fade(float);
// void bink_set_volume(float);
// enum e_async_completion bink_prediction_async_callback(void *, void *, long);
// public: struct s_bink_prediction_message * s_bink_runtime::acquire_prediction_state(void);
// public: static void s_bink_runtime::release_prediction_state(void);
// bool bink_thread_should_predict(struct s_bink_runtime const *);
// bool bink_thread_should_start(struct s_bink_runtime const *);
// bool bink_thread_should_stop_playback(struct s_bink_runtime const *);
// void bink_playback_wait_for_stop(void);
// bool bink_thread_get_prediction_message(struct s_bink_runtime *, struct s_bink_prediction_message *);
// void bink_playback_acquire_runtime_memory(unsigned long);
// void bink_playback_release_runtime_memory(void);
// void bink_playback_grab_memory(void);
// void bink_playback_return_memory(void);
// void bink_playback_start_explicit(char const *, long, unsigned long, struct BINK *);
// void bink_prediction_update(void);
// void bink_playback_start_internal(unsigned long);
// void bink_playback_start(char const *, long, unsigned long);
// void bink_playback_start_or_queue(char const *, long, unsigned long);
// void process_bink_messages(void);
// void bink_playback_update(void);
// void bink_playback_check_for_terminate_no_lock(void);
// void bink_playback_check_for_terminate(void);
// void bink_playback_update_async(void);
// public: static class c_fullscreen_view * c_fullscreen_view::get(void);
// public: struct s_bink_prediction_message * s_bink_runtime::try_to_acquire_prediction_state(void);
// void bink_try_to_decompress_frame(struct s_bink_runtime *, bool);
// bool bink_playback_intro_started(void);
// bool bink_playback_intro_is_over(void);
// void bink_playback_async_notify_released_rasterizer(void);
// void bink_playback_update_internal(bool);
// bool bink_query_analog_controller_buttons(void);
// public: void c_basic_buffer<void>::set_buffer(void *, unsigned long);
// public: void c_basic_buffer<void>::clear(void);
// public: void * c_basic_buffer<void>::begin(void) const;
// public: bool c_basic_buffer<void>::empty(void) const;
// public: unsigned long c_basic_buffer<void>::size(void) const;
// public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_bink_globals_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_bink_globals_allocator::*)(void *)>::valid(void) const;
// public: c_wrapped_array<struct s_allocation_description>::ctor<4>(struct s_allocation_description (&)[4]);
// public: void c_wrapped_array_no_init<struct s_allocation_description>::set_elements(struct s_allocation_description *, long);
// union vector4d * scale_vector4d(union vector4d const *, float, union vector4d *);
// public: _bink_globals::_bink_globals(void);
// public: s_bink_runtime::s_bink_runtime(void);
// public: c_basic_buffer<void>::c_basic_buffer<void>(void);
// public: c_bink_optional_cache_callback::c_bink_optional_cache_callback(void);
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_bink_globals_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_bink_globals_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_bink_globals_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_bink_globals_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_bink_globals_allocator::*)(void *)>::free_memory(void);
// public: _bink_globals::~_bink_globals(void);
// public: s_bink_runtime::~s_bink_runtime(void);
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_bink_globals_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_bink_globals_allocator::*)(void *)>(void);
// void g_intro_playback_start::`dynamic atexit destructor'(void);
// void g_intro_playback_is_over::`dynamic atexit destructor'(void);
// void bink_globals::`dynamic atexit destructor'(void);
// void g_bink_globals_allocator::`dynamic atexit destructor'(void);

//void __tls_set_g_bink_globals_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_bink_globals_allocator@@YAXPAX@Z");
//};

//void bink_playback_initialize(void)
//{
//    mangled_ppc("?bink_playback_initialize@@YAXXZ");
//};

//void bink_playback_dispose(void)
//{
//    mangled_ppc("?bink_playback_dispose@@YAXXZ");
//};

//void bink_playback_prepare_for_new_zone_set(unsigned long, unsigned long)
//{
//    mangled_ppc("?bink_playback_prepare_for_new_zone_set@@YAXKK@Z");
//};

//void bink_playback_initialize_for_new_structure_bsp(unsigned long)
//{
//    mangled_ppc("?bink_playback_initialize_for_new_structure_bsp@@YAXK@Z");
//};

//void bink_playback_dispose_from_old_structure_bsp(unsigned long)
//{
//    mangled_ppc("?bink_playback_dispose_from_old_structure_bsp@@YAXK@Z");
//};

//void bink_playback_prepare_for_non_bsp_zone_set_switch(struct s_game_non_bsp_zone_set const *, struct s_game_non_bsp_zone_set const *, class c_scenario_resource_registry *)
//{
//    mangled_ppc("?bink_playback_prepare_for_non_bsp_zone_set_switch@@YAXPBUs_game_non_bsp_zone_set@@0PAVc_scenario_resource_registry@@@Z");
//};

//void bink_playback_initialize_for_new_non_bsp_zone_set(struct s_game_non_bsp_zone_set const *)
//{
//    mangled_ppc("?bink_playback_initialize_for_new_non_bsp_zone_set@@YAXPBUs_game_non_bsp_zone_set@@@Z");
//};

//void bink_playback_dispose_from_old_non_bsp_zone_set(struct s_game_non_bsp_zone_set const *)
//{
//    mangled_ppc("?bink_playback_dispose_from_old_non_bsp_zone_set@@YAXPBUs_game_non_bsp_zone_set@@@Z");
//};

//void bink_playback_memory_initialize(enum e_map_memory_configuration)
//{
//    mangled_ppc("?bink_playback_memory_initialize@@YAXW4e_map_memory_configuration@@@Z");
//};

//void bink_playback_memory_dispose(void)
//{
//    mangled_ppc("?bink_playback_memory_dispose@@YAXXZ");
//};

//public: s_bink_prediction_message::s_bink_prediction_message(void)
//{
//    mangled_ppc("??0s_bink_prediction_message@@QAA@XZ");
//};

//void bink_playback_initialize_for_new_map(void)
//{
//    mangled_ppc("?bink_playback_initialize_for_new_map@@YAXXZ");
//};

//void bink_playback_dispose_from_old_map(void)
//{
//    mangled_ppc("?bink_playback_dispose_from_old_map@@YAXXZ");
//};

//void bink_playback_prepare_for_game_state_load(long)
//{
//    mangled_ppc("?bink_playback_prepare_for_game_state_load@@YAXJ@Z");
//};

//void rebase_bink_on_base_address_change(void *, void *)
//{
//    mangled_ppc("?rebase_bink_on_base_address_change@@YAXPAX0@Z");
//};

//bool bink_playback_active(void)
//{
//    mangled_ppc("?bink_playback_active@@YA_NXZ");
//};

//bool bink_playback_should_be_playing_deterministic_bink(void)
//{
//    mangled_ppc("?bink_playback_should_be_playing_deterministic_bink@@YA_NXZ");
//};

//bool bink_playback_active_fullscreen(void)
//{
//    mangled_ppc("?bink_playback_active_fullscreen@@YA_NXZ");
//};

//bool bink_playback_ui_rendering_inhibited(void)
//{
//    mangled_ppc("?bink_playback_ui_rendering_inhibited@@YA_NXZ");
//};

//bool bink_playback_use_large_bink_size(void)
//{
//    mangled_ppc("?bink_playback_use_large_bink_size@@YA_NXZ");
//};

//void bink_playback_render(void)
//{
//    mangled_ppc("?bink_playback_render@@YAXXZ");
//};

//void bink_notify_load_masking_complete(void)
//{
//    mangled_ppc("?bink_notify_load_masking_complete@@YAXXZ");
//};

//bool bink_playback_in_progress(void)
//{
//    mangled_ppc("?bink_playback_in_progress@@YA_NXZ");
//};

//bool bink_playback_using_io_during_map_load_masking(void)
//{
//    mangled_ppc("?bink_playback_using_io_during_map_load_masking@@YA_NXZ");
//};

//long bink_playback_time_left_hs_ticks(void)
//{
//    mangled_ppc("?bink_playback_time_left_hs_ticks@@YAJXZ");
//};

//void bink_close_bink_only(struct s_bink_runtime *)
//{
//    mangled_ppc("?bink_close_bink_only@@YAXPAUs_bink_runtime@@@Z");
//};

//void bink_close(struct s_bink_runtime *)
//{
//    mangled_ppc("?bink_close@@YAXPAUs_bink_runtime@@@Z");
//};

//public: virtual void c_bink_allocation::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@c_bink_allocation@@UAAXPAXPBDJ@Z");
//};

//public: c_bink_allocation::c_bink_allocation(void)
//{
//    mangled_ppc("??0c_bink_allocation@@QAA@XZ");
//};

//public: virtual void * c_bink_allocation::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@c_bink_allocation@@UAAPAXIPBDJ000@Z");
//};

//void bink_playback_terminate(void)
//{
//    mangled_ppc("?bink_playback_terminate@@YAXXZ");
//};

//bool binks_match(struct BINK *, struct BINK *)
//{
//    mangled_ppc("?binks_match@@YA_NPAUBINK@@0@Z");
//};

//void bink_playback_stop(void)
//{
//    mangled_ppc("?bink_playback_stop@@YAXXZ");
//};

//void bink_playback_stop_due_to_input_device_change(void)
//{
//    mangled_ppc("?bink_playback_stop_due_to_input_device_change@@YAXXZ");
//};

//public: virtual char const * c_bink_optional_cache_callback::get_name(void)
//{
//    mangled_ppc("?get_name@c_bink_optional_cache_callback@@UAAPBDXZ");
//};

//public: virtual void c_bink_optional_cache_callback::get_memory_configuration(enum e_map_memory_configuration, struct s_optional_cache_user_memory_configuration *)
//{
//    mangled_ppc("?get_memory_configuration@c_bink_optional_cache_callback@@UAAXW4e_map_memory_configuration@@PAUs_optional_cache_user_memory_configuration@@@Z");
//};

//public: virtual void c_bink_optional_cache_callback::terminate(void const *)
//{
//    mangled_ppc("?terminate@c_bink_optional_cache_callback@@UAAXPBX@Z");
//};

//void * bink_alloc(unsigned int)
//{
//    mangled_ppc("?bink_alloc@@YAPAXI@Z");
//};

//void bink_get_memory_available(char const *, bool)
//{
//    mangled_ppc("?bink_get_memory_available@@YAXPBD_N@Z");
//};

//bool is_all_bink_memory_free(void)
//{
//    mangled_ppc("?is_all_bink_memory_free@@YA_NXZ");
//};

//void bink_free(void *)
//{
//    mangled_ppc("?bink_free@@YAXPAX@Z");
//};

//void Sync_Bink_textures(struct s_bink_video_frame *, long)
//{
//    mangled_ppc("?Sync_Bink_textures@@YAXPAUs_bink_video_frame@@J@Z");
//};

//void store_cache(void *, unsigned int)
//{
//    mangled_ppc("?store_cache@@YAXPAXI@Z");
//};

//long bink_get_next_decompression_frame(struct s_bink_video_frame const *)
//{
//    mangled_ppc("?bink_get_next_decompression_frame@@YAJPBUs_bink_video_frame@@@Z");
//};

//void Wait_for_Bink_textures(struct s_bink_video_frame const *)
//{
//    mangled_ppc("?Wait_for_Bink_textures@@YAXPBUs_bink_video_frame@@@Z");
//};

//float bink_get_fade_amount(void)
//{
//    mangled_ppc("?bink_get_fade_amount@@YAMXZ");
//};

//float bink_playback_time_elapsed_seconds(void)
//{
//    mangled_ppc("?bink_playback_time_elapsed_seconds@@YAMXZ");
//};

//void bink_setup_rasterizer(long)
//{
//    mangled_ppc("?bink_setup_rasterizer@@YAXJ@Z");
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

//void bink_destroy_rasterizer(void)
//{
//    mangled_ppc("?bink_destroy_rasterizer@@YAXXZ");
//};

//void bink_release_textures(long)
//{
//    mangled_ppc("?bink_release_textures@@YAXJ@Z");
//};

//void release_unused_textures(long)
//{
//    mangled_ppc("?release_unused_textures@@YAXJ@Z");
//};

//long bink_get_texture_index_to_render(void)
//{
//    mangled_ppc("?bink_get_texture_index_to_render@@YAJXZ");
//};

//long bink_get_last_updated_frame(void)
//{
//    mangled_ppc("?bink_get_last_updated_frame@@YAJXZ");
//};

//void bink_display_frame(union short_rectangle2d const *)
//{
//    mangled_ppc("?bink_display_frame@@YAXPBTshort_rectangle2d@@@Z");
//};

//void bink_draw_frame(void)
//{
//    mangled_ppc("?bink_draw_frame@@YAXXZ");
//};

//void play_credits_movie_skippable_to_main_menu(void)
//{
//    mangled_ppc("?play_credits_movie_skippable_to_main_menu@@YAXXZ");
//};

//void play_credits_movie_unskippable(void)
//{
//    mangled_ppc("?play_credits_movie_unskippable@@YAXXZ");
//};

//void play_bink_movie(char const *)
//{
//    mangled_ppc("?play_bink_movie@@YAXPBD@Z");
//};

//void play_bink_movie_from_tag(long)
//{
//    mangled_ppc("?play_bink_movie_from_tag@@YAXJ@Z");
//};

//void predict_bink_movie(char const *)
//{
//    mangled_ppc("?predict_bink_movie@@YAXPBD@Z");
//};

//bool predict_bink_movie_fullpath(char const *, long, unsigned long, struct BINK *, bool)
//{
//    mangled_ppc("?predict_bink_movie_fullpath@@YA_NPBDJKPAUBINK@@_N@Z");
//};

//void predict_bink_movie_from_tag(long)
//{
//    mangled_ppc("?predict_bink_movie_from_tag@@YAXJ@Z");
//};

//bool bink_prediction_in_progress_or_queued(void)
//{
//    mangled_ppc("?bink_prediction_in_progress_or_queued@@YA_NXZ");
//};

//bool bink_prediction_queued_and_not_active(void)
//{
//    mangled_ppc("?bink_prediction_queued_and_not_active@@YA_NXZ");
//};

//bool bink_prediction_in_progress_for_movie(char const *, long)
//{
//    mangled_ppc("?bink_prediction_in_progress_for_movie@@YA_NPBDJ@Z");
//};

//bool prepare_bink_movie_for_playback_async(struct s_bink_runtime *, struct s_bink_prediction_message const *)
//{
//    mangled_ppc("?prepare_bink_movie_for_playback_async@@YA_NPAUs_bink_runtime@@PBUs_bink_prediction_message@@@Z");
//};

//public: static unsigned long `bool prepare_bink_movie_for_playback_async(struct s_bink_runtime *, struct s_bink_prediction_message const *)'::`84'::s_bink_needs_unions::initialize_plane_and_get_size(struct D3DTexture *, struct BINKPLANE *, bool)
//{
//    mangled_ppc("?initialize_plane_and_get_size@s_bink_needs_unions@?FE@??prepare_bink_movie_for_playback_async@@YA_NPAUs_bink_runtime@@PBUs_bink_prediction_message@@@Z@SAKPAUD3DTexture@@PAUBINKPLANE@@_N@Z");
//};

//public: static struct s_allocation_description `bool prepare_bink_movie_for_playback_async(struct s_bink_runtime *, struct s_bink_prediction_message const *)'::`84'::s_bink_needs_unions::get_plane_description(struct D3DTexture *, struct BINKPLANE *, bool)
//{
//    mangled_ppc("?get_plane_description@s_bink_needs_unions@?FE@??prepare_bink_movie_for_playback_async@@YA_NPAUs_bink_runtime@@PBUs_bink_prediction_message@@@Z@SA?AUs_allocation_description@@PAUD3DTexture@@PAUBINKPLANE@@_N@Z");
//};

//public: s_allocation_description::s_allocation_description(void *&, unsigned long, long)
//{
//    mangled_ppc("??0s_allocation_description@@QAA@AAPAXKJ@Z");
//};

//public: static bool `bool prepare_bink_movie_for_playback_async(struct s_bink_runtime *, struct s_bink_prediction_message const *)'::`84'::s_bink_needs_unions::initialize_plane_set(struct s_bink_frame_texture *, struct BINKFRAMEPLANESET *, bool, class c_allocation_interface *, void **, unsigned long *)
//{
//    mangled_ppc("?initialize_plane_set@s_bink_needs_unions@?FE@??prepare_bink_movie_for_playback_async@@YA_NPAUs_bink_runtime@@PBUs_bink_prediction_message@@@Z@SA_NPAUs_bink_frame_texture@@PAUBINKFRAMEPLANESET@@_NPAVc_allocation_interface@@PAPAXPAK@Z");
//};

//void bink_set_fade(float)
//{
//    mangled_ppc("?bink_set_fade@@YAXM@Z");
//};

//void bink_set_volume(float)
//{
//    mangled_ppc("?bink_set_volume@@YAXM@Z");
//};

//enum e_async_completion bink_prediction_async_callback(void *, void *, long)
//{
//    mangled_ppc("?bink_prediction_async_callback@@YA?AW4e_async_completion@@PAX0J@Z");
//};

//public: struct s_bink_prediction_message * s_bink_runtime::acquire_prediction_state(void)
//{
//    mangled_ppc("?acquire_prediction_state@s_bink_runtime@@QAAPAUs_bink_prediction_message@@XZ");
//};

//public: static void s_bink_runtime::release_prediction_state(void)
//{
//    mangled_ppc("?release_prediction_state@s_bink_runtime@@SAXXZ");
//};

//bool bink_thread_should_predict(struct s_bink_runtime const *)
//{
//    mangled_ppc("?bink_thread_should_predict@@YA_NPBUs_bink_runtime@@@Z");
//};

//bool bink_thread_should_start(struct s_bink_runtime const *)
//{
//    mangled_ppc("?bink_thread_should_start@@YA_NPBUs_bink_runtime@@@Z");
//};

//bool bink_thread_should_stop_playback(struct s_bink_runtime const *)
//{
//    mangled_ppc("?bink_thread_should_stop_playback@@YA_NPBUs_bink_runtime@@@Z");
//};

//void bink_playback_wait_for_stop(void)
//{
//    mangled_ppc("?bink_playback_wait_for_stop@@YAXXZ");
//};

//bool bink_thread_get_prediction_message(struct s_bink_runtime *, struct s_bink_prediction_message *)
//{
//    mangled_ppc("?bink_thread_get_prediction_message@@YA_NPAUs_bink_runtime@@PAUs_bink_prediction_message@@@Z");
//};

//void bink_playback_acquire_runtime_memory(unsigned long)
//{
//    mangled_ppc("?bink_playback_acquire_runtime_memory@@YAXK@Z");
//};

//void bink_playback_release_runtime_memory(void)
//{
//    mangled_ppc("?bink_playback_release_runtime_memory@@YAXXZ");
//};

//void bink_playback_grab_memory(void)
//{
//    mangled_ppc("?bink_playback_grab_memory@@YAXXZ");
//};

//void bink_playback_return_memory(void)
//{
//    mangled_ppc("?bink_playback_return_memory@@YAXXZ");
//};

//void bink_playback_start_explicit(char const *, long, unsigned long, struct BINK *)
//{
//    mangled_ppc("?bink_playback_start_explicit@@YAXPBDJKPAUBINK@@@Z");
//};

//void bink_prediction_update(void)
//{
//    mangled_ppc("?bink_prediction_update@@YAXXZ");
//};

//void bink_playback_start_internal(unsigned long)
//{
//    mangled_ppc("?bink_playback_start_internal@@YAXK@Z");
//};

//void bink_playback_start(char const *, long, unsigned long)
//{
//    mangled_ppc("?bink_playback_start@@YAXPBDJK@Z");
//};

//void bink_playback_start_or_queue(char const *, long, unsigned long)
//{
//    mangled_ppc("?bink_playback_start_or_queue@@YAXPBDJK@Z");
//};

//void process_bink_messages(void)
//{
//    mangled_ppc("?process_bink_messages@@YAXXZ");
//};

//void bink_playback_update(void)
//{
//    mangled_ppc("?bink_playback_update@@YAXXZ");
//};

//void bink_playback_check_for_terminate_no_lock(void)
//{
//    mangled_ppc("?bink_playback_check_for_terminate_no_lock@@YAXXZ");
//};

//void bink_playback_check_for_terminate(void)
//{
//    mangled_ppc("?bink_playback_check_for_terminate@@YAXXZ");
//};

//void bink_playback_update_async(void)
//{
//    mangled_ppc("?bink_playback_update_async@@YAXXZ");
//};

//public: static class c_fullscreen_view * c_fullscreen_view::get(void)
//{
//    mangled_ppc("?get@c_fullscreen_view@@SAPAV1@XZ");
//};

//public: struct s_bink_prediction_message * s_bink_runtime::try_to_acquire_prediction_state(void)
//{
//    mangled_ppc("?try_to_acquire_prediction_state@s_bink_runtime@@QAAPAUs_bink_prediction_message@@XZ");
//};

//void bink_try_to_decompress_frame(struct s_bink_runtime *, bool)
//{
//    mangled_ppc("?bink_try_to_decompress_frame@@YAXPAUs_bink_runtime@@_N@Z");
//};

//bool bink_playback_intro_started(void)
//{
//    mangled_ppc("?bink_playback_intro_started@@YA_NXZ");
//};

//bool bink_playback_intro_is_over(void)
//{
//    mangled_ppc("?bink_playback_intro_is_over@@YA_NXZ");
//};

//void bink_playback_async_notify_released_rasterizer(void)
//{
//    mangled_ppc("?bink_playback_async_notify_released_rasterizer@@YAXXZ");
//};

//void bink_playback_update_internal(bool)
//{
//    mangled_ppc("?bink_playback_update_internal@@YAX_N@Z");
//};

//bool bink_query_analog_controller_buttons(void)
//{
//    mangled_ppc("?bink_query_analog_controller_buttons@@YA_NXZ");
//};

//public: void c_basic_buffer<void>::set_buffer(void *, unsigned long)
//{
//    mangled_ppc("?set_buffer@?$c_basic_buffer@X@@QAAXPAXK@Z");
//};

//public: void c_basic_buffer<void>::clear(void)
//{
//    mangled_ppc("?clear@?$c_basic_buffer@X@@QAAXXZ");
//};

//public: void * c_basic_buffer<void>::begin(void) const
//{
//    mangled_ppc("?begin@?$c_basic_buffer@X@@QBAPAXXZ");
//};

//public: bool c_basic_buffer<void>::empty(void) const
//{
//    mangled_ppc("?empty@?$c_basic_buffer@X@@QBA_NXZ");
//};

//public: unsigned long c_basic_buffer<void>::size(void) const
//{
//    mangled_ppc("?size@?$c_basic_buffer@X@@QBAKXZ");
//};

//public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_bink_globals_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_bink_globals_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_bink_globals_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_bink_globals_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: c_wrapped_array<struct s_allocation_description>::ctor<4>(struct s_allocation_description (&)[4])
//{
//    mangled_ppc("??$?0$03@?$c_wrapped_array@Us_allocation_description@@@@QAA@AAY03Us_allocation_description@@@Z");
//};

//public: void c_wrapped_array_no_init<struct s_allocation_description>::set_elements(struct s_allocation_description *, long)
//{
//    mangled_ppc("?set_elements@?$c_wrapped_array_no_init@Us_allocation_description@@@@QAAXPAUs_allocation_description@@J@Z");
//};

//union vector4d * scale_vector4d(union vector4d const *, float, union vector4d *)
//{
//    mangled_ppc("?scale_vector4d@@YAPATvector4d@@PBT1@MPAT1@@Z");
//};

//public: _bink_globals::_bink_globals(void)
//{
//    mangled_ppc("??0_bink_globals@@QAA@XZ");
//};

//public: s_bink_runtime::s_bink_runtime(void)
//{
//    mangled_ppc("??0s_bink_runtime@@QAA@XZ");
//};

//public: c_basic_buffer<void>::c_basic_buffer<void>(void)
//{
//    mangled_ppc("??0?$c_basic_buffer@X@@QAA@XZ");
//};

//public: c_bink_optional_cache_callback::c_bink_optional_cache_callback(void)
//{
//    mangled_ppc("??0c_bink_optional_cache_callback@@QAA@XZ");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_bink_globals_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_bink_globals_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_bink_globals_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_bink_globals_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_bink_globals_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_bink_globals_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_bink_globals_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_bink_globals_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_bink_globals_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: _bink_globals::~_bink_globals(void)
//{
//    mangled_ppc("??1_bink_globals@@QAA@XZ");
//};

//public: s_bink_runtime::~s_bink_runtime(void)
//{
//    mangled_ppc("??1s_bink_runtime@@QAA@XZ");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_bink_globals_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_bink_globals_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_bink_globals_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//void g_intro_playback_start::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_intro_playback_start@@YAXXZ");
//};

//void g_intro_playback_is_over::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_intro_playback_is_over@@YAXXZ");
//};

//void bink_globals::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fbink_globals@@YAXXZ");
//};

//void g_bink_globals_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_bink_globals_allocator@@YAXXZ");
//};

