/* ---------- headers */

#include "omaha\rasterizer\xenon\rasterizer_xenon_main.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// g_XGTextureFormatBitsPerPixel; // "g_XGTextureFormatBitsPerPixel"
// public: static bool const c_surface_tiling::g_tiling_force_tiling_debug; // "?g_tiling_force_tiling_debug@c_surface_tiling@@2_NB"
// public: static long const c_gpu_scratch_buffer::k_number_of_cache_vertices; // "?k_number_of_cache_vertices@c_gpu_scratch_buffer@@2JB"
// public: static long const c_gpu_scratch_buffer::k_number_of_cache_vertex_streams; // "?k_number_of_cache_vertex_streams@c_gpu_scratch_buffer@@2JB"
// private: static long const c_gpu_scratch_buffer::k_bytes_per_vertex; // "?k_bytes_per_vertex@c_gpu_scratch_buffer@@0JB"
// private: static long const c_gpu_scratch_buffer::k_physical_memory_pool_size; // "?k_physical_memory_pool_size@c_gpu_scratch_buffer@@0JB"
// public: static long const c_aligned_stored_buffered_file_writer<4096>::k_buffer_size; // "?k_buffer_size@?$c_aligned_stored_buffered_file_writer@$0BAAA@@@2JB"
// public: static long c_rasterizer::last_skinning_matrix_count_of_this_frame; // "?last_skinning_matrix_count_of_this_frame@c_rasterizer@@2JA"
// public: static struct s_model_skinning_matrix const *const c_rasterizer::last_skinning_matrix_pointer_of_this_frame; // "?last_skinning_matrix_pointer_of_this_frame@c_rasterizer@@2PBUs_model_skinning_matrix@@B"
// private: static bool c_rasterizer::swapped_at_least_once; // "?swapped_at_least_once@c_rasterizer@@0_NA"

// public: static enum e_platform c_rasterizer::get_runtime_platform(void);
// public: static bool c_rasterizer::reinitialize_device(long);
// public: long D3DDevice::Reset(struct _D3DPRESENT_PARAMETERS_*);
// private: static bool c_rasterizer::initialize_device(bool, bool);
// long get_current_thread_index(void);
// Direct3DCreate9;
// public: static long Direct3D::CreateDevice(unsigned int, enum _D3DDEVTYPE, void *, unsigned long, struct _D3DPRESENT_PARAMETERS_*, struct D3DDevice **);
// public: long D3DDevice::GetDeviceCaps(struct _D3DCAPS9*);
// public: long D3DDevice::GetDisplayMode(unsigned int, struct _D3DDISPLAYMODE *);
// void command_buffers_initialize(struct Direct3D *);
// void get_presentation_parameters(struct _D3DPRESENT_PARAMETERS_&);
// private: static void c_rasterizer::release_device(void);
// public: static void c_rasterizer::flush_hi_z_stencil(bool);
// public: long D3DDevice::FlushHiZStencil(enum _D3DFHZS_FLUSHTYPE);
// public: static void c_rasterizer::clear(unsigned long, unsigned long, float, unsigned char, union short_rectangle2d const *);
// public: long D3DDevice::Clear(unsigned long, struct _D3DRECT const *, unsigned long, unsigned long, float, unsigned long);
// public: long D3DDevice::SetRenderState(enum _D3DRENDERSTATETYPE, unsigned long);
// D3DDevice_SetRenderState;
// public: static void c_rasterizer::clear(unsigned long, unsigned long, float, unsigned char);
// public: static void c_rasterizer::clearf(unsigned long, union vector4d const *, float, unsigned long);
// public: long D3DDevice::ClearF(unsigned long, struct _D3DRECT const *, struct __vector4const *, float, unsigned long);
// public: static bool c_rasterizer::begin_frame(void);
// public: static long c_rasterizer::get_present_immediate_threshold(void);
// public: long D3DDevice::BeginScene(void);
// D3DDevice_BeginScene;
// public: long D3DDevice::SetSamplerState(unsigned long, enum _D3DSAMPLERSTATETYPE, unsigned long);
// D3DDevice_SetSamplerState;
// D3DDevice_SetSamplerState_AddressU_Inline;
// D3DTag_Index;
// D3DTag_SamplerMask;
// D3DTag_SubsetMask;
// D3DTagCollection_Set;
// D3DDevice_SetSamplerState_AddressV_Inline;
// D3DDevice_SetSamplerState_AddressW_Inline;
// D3DDevice_SetSamplerState_MipFilter_Inline;
// D3DDevice_SetSamplerState_BorderColor_Inline;
// D3DDevice_SetSamplerState_TrilinearThreshold_Inline;
// D3DDevice_SetSamplerState_HGradientExpBias_Inline;
// D3DDevice_SetSamplerState_VGradientExpBias_Inline;
// D3DDevice_SetSamplerState_WhiteBorderColorW_Inline;
// D3DDevice_SetSamplerState_PointBorderEnable_Inline;
// public: static bool c_rasterizer::empty_frame(void);
// public: static bool c_rasterizer::end_frame_pregame(void);
// public: long D3DDevice::Present(struct tagRECT const *, struct tagRECT const *, void *, void *);
// public: long D3DDevice::EndScene(void);
// D3DDevice_EndScene;
// public: static bool c_rasterizer::end_frame(void);
// public: static void c_surface::resolve(enum e_surface, long);
// public: struct D3DTexture * c_render_surface::get_d3d_texture(void);
// public: static class c_render_surface * c_render_surfaces_interface::get_render_surface(enum e_surface);
// public: static bool c_render_surfaces_interface::ready(void);
// public: long D3DDevice::SynchronizeToPresentationInterval(void);
// public: long D3DDevice::Swap(struct D3DBaseTexture *, struct _D3DVIDEO_SCALER_PARAMETERS const *);
// public: static long c_rasterizer::get_enqueued_swap_count(void);
// public: long D3DDevice::QuerySwapStatus(struct _D3DSWAP_STATUS *);
// public: static long c_rasterizer::get_last_enqueued_swap_index(void);
// public: static void c_rasterizer::prepare_for_tag_reload(void);
// public: static void c_rasterizer::set_DAC_LUT_curve(void);
// XGGetGpuFormat;
// public: struct s_surface_description const & c_render_surface::get_surface_description(void) const;
// public: void D3DDevice::SetGammaRamp(unsigned int, unsigned long, struct _D3DGAMMARAMP const *);
// public: void D3DDevice::SetPWLGamma(unsigned long, struct _D3DPWLGAMMA const *);
// void rasterizer_set_target(short, short, bool);
// bool rasterizer_wait_complete(void);
// void rasterizer_vblank_callback(void const *);
// public: static void c_rasterizer::rasterizer_set_vblank_callback(void (*)(void const *));
// public: long D3DDevice::SetVerticalBlankCallback(void (*)(struct _D3DVBLANKDATA *));
// public: static void c_rasterizer::rasterizer_device_release_thread(void);
// public: static struct D3DDevice * c_rasterizer::get_device(void);
// public: long D3DDevice::ReleaseThreadOwnership(void);
// public: unsigned long D3DDevice::InsertFence(void);
// public: long D3DDevice::UnsetAll(void);
// public: static void c_rasterizer::rasterizer_device_acquire_thread(void);
// public: long D3DDevice::AcquireThreadOwnership(void);
// public: static void c_rasterizer::rasterizer_wait_for_idle(void);
// public: long D3DDevice::BlockUntilIdle(void);
// public: static unsigned long c_rasterizer::rasterizer_insert_fence(void);
// public: static void c_rasterizer::rasterizer_block_on_fence(unsigned long);
// public: long D3DDevice::BlockOnFence(unsigned long);
// public: static bool c_rasterizer::rasterizer_is_fence_pending(unsigned long);
// public: int D3DDevice::IsFencePending(unsigned long);
// public: static bool c_rasterizer::rasterizer_thread_owns_device(void);
// public: static unsigned long c_rasterizer::get_managed_pool_type(void);
// public: static unsigned long c_rasterizer::get_managed_mesh_type(void);
// public: static unsigned long c_rasterizer::get_managed_usage(void);
// public: static void c_rasterizer::prepare_for_fatal_guide_ui(void);
// public: long D3DDevice::Suspend(void);
// public: static void c_rasterizer::rebuild_hi_z(void);
// bool rasterizer_dump_display_to_dds(char const *, bool);
// XGAddress2DTiledOffset;
// XGLog2LE16;
// public: long D3DTexture::GetLevelDesc(unsigned int, struct _D3DSURFACE_DESC *);
// public: long D3DTexture::LockRect(unsigned int, struct _D3DLOCKED_RECT *, struct tagRECT const *, unsigned long);
// public: long D3DTexture::UnlockRect(unsigned int);
// unsigned short word_rgb_color_to_pixel16_565_pinned(union word_rgb_color *);
// union word_rgb_color pixel32_8_8_8_8_gamma2_to_word_rgb_color(unsigned long);
// public: c_aligned_stored_buffered_file_writer<4096>::c_aligned_stored_buffered_file_writer<4096>(void);
// public: void c_aligned_stored_buffered_file_writer<4096>::initialize(struct s_file_reference *);
// public: bool c_aligned_stored_buffered_file_writer<4096>::write(char const *, long);
// public: bool c_aligned_stored_buffered_file_writer<4096>::flush(void);

//public: static enum e_platform c_rasterizer::get_runtime_platform(void)
//{
//    mangled_ppc("?get_runtime_platform@c_rasterizer@@SA?AW4e_platform@@XZ");
//};

//public: static bool c_rasterizer::reinitialize_device(long)
//{
//    mangled_ppc("?reinitialize_device@c_rasterizer@@SA_NJ@Z");
//};

//public: long D3DDevice::Reset(struct _D3DPRESENT_PARAMETERS_*)
//{
//    mangled_ppc("?Reset@D3DDevice@@QAAJPAU_D3DPRESENT_PARAMETERS_@@@Z");
//};

//private: static bool c_rasterizer::initialize_device(bool, bool)
//{
//    mangled_ppc("?initialize_device@c_rasterizer@@CA_N_N0@Z");
//};

//long get_current_thread_index(void)
//{
//    mangled_ppc("?get_current_thread_index@@YAJXZ");
//};

//Direct3DCreate9
//{
//    mangled_ppc("Direct3DCreate9");
//};

//public: static long Direct3D::CreateDevice(unsigned int, enum _D3DDEVTYPE, void *, unsigned long, struct _D3DPRESENT_PARAMETERS_*, struct D3DDevice **)
//{
//    mangled_ppc("?CreateDevice@Direct3D@@SAJIW4_D3DDEVTYPE@@PAXKPAU_D3DPRESENT_PARAMETERS_@@PAPAUD3DDevice@@@Z");
//};

//public: long D3DDevice::GetDeviceCaps(struct _D3DCAPS9*)
//{
//    mangled_ppc("?GetDeviceCaps@D3DDevice@@QAAJPAU_D3DCAPS9@@@Z");
//};

//public: long D3DDevice::GetDisplayMode(unsigned int, struct _D3DDISPLAYMODE *)
//{
//    mangled_ppc("?GetDisplayMode@D3DDevice@@QAAJIPAU_D3DDISPLAYMODE@@@Z");
//};

//void command_buffers_initialize(struct Direct3D *)
//{
//    mangled_ppc("?command_buffers_initialize@@YAXPAUDirect3D@@@Z");
//};

//void get_presentation_parameters(struct _D3DPRESENT_PARAMETERS_&)
//{
//    mangled_ppc("?get_presentation_parameters@@YAXAAU_D3DPRESENT_PARAMETERS_@@@Z");
//};

//private: static void c_rasterizer::release_device(void)
//{
//    mangled_ppc("?release_device@c_rasterizer@@CAXXZ");
//};

//public: static void c_rasterizer::flush_hi_z_stencil(bool)
//{
//    mangled_ppc("?flush_hi_z_stencil@c_rasterizer@@SAX_N@Z");
//};

//public: long D3DDevice::FlushHiZStencil(enum _D3DFHZS_FLUSHTYPE)
//{
//    mangled_ppc("?FlushHiZStencil@D3DDevice@@QAAJW4_D3DFHZS_FLUSHTYPE@@@Z");
//};

//public: static void c_rasterizer::clear(unsigned long, unsigned long, float, unsigned char, union short_rectangle2d const *)
//{
//    mangled_ppc("?clear@c_rasterizer@@SAXKKMEPBTshort_rectangle2d@@@Z");
//};

//public: long D3DDevice::Clear(unsigned long, struct _D3DRECT const *, unsigned long, unsigned long, float, unsigned long)
//{
//    mangled_ppc("?Clear@D3DDevice@@QAAJKPBU_D3DRECT@@KKMK@Z");
//};

//public: long D3DDevice::SetRenderState(enum _D3DRENDERSTATETYPE, unsigned long)
//{
//    mangled_ppc("?SetRenderState@D3DDevice@@QAAJW4_D3DRENDERSTATETYPE@@K@Z");
//};

//D3DDevice_SetRenderState
//{
//    mangled_ppc("D3DDevice_SetRenderState");
//};

//public: static void c_rasterizer::clear(unsigned long, unsigned long, float, unsigned char)
//{
//    mangled_ppc("?clear@c_rasterizer@@SAXKKME@Z");
//};

//public: static void c_rasterizer::clearf(unsigned long, union vector4d const *, float, unsigned long)
//{
//    mangled_ppc("?clearf@c_rasterizer@@SAXKPBTvector4d@@MK@Z");
//};

//public: long D3DDevice::ClearF(unsigned long, struct _D3DRECT const *, struct __vector4const *, float, unsigned long)
//{
//    mangled_ppc("?ClearF@D3DDevice@@QAAJKPBU_D3DRECT@@PBU__vector4@@MK@Z");
//};

//public: static bool c_rasterizer::begin_frame(void)
//{
//    mangled_ppc("?begin_frame@c_rasterizer@@SA_NXZ");
//};

//public: static long c_rasterizer::get_present_immediate_threshold(void)
//{
//    mangled_ppc("?get_present_immediate_threshold@c_rasterizer@@SAJXZ");
//};

//public: long D3DDevice::BeginScene(void)
//{
//    mangled_ppc("?BeginScene@D3DDevice@@QAAJXZ");
//};

//D3DDevice_BeginScene
//{
//    mangled_ppc("D3DDevice_BeginScene");
//};

//public: long D3DDevice::SetSamplerState(unsigned long, enum _D3DSAMPLERSTATETYPE, unsigned long)
//{
//    mangled_ppc("?SetSamplerState@D3DDevice@@QAAJKW4_D3DSAMPLERSTATETYPE@@K@Z");
//};

//D3DDevice_SetSamplerState
//{
//    mangled_ppc("D3DDevice_SetSamplerState");
//};

//D3DDevice_SetSamplerState_AddressU_Inline
//{
//    mangled_ppc("D3DDevice_SetSamplerState_AddressU_Inline");
//};

//D3DTag_Index
//{
//    mangled_ppc("D3DTag_Index");
//};

//D3DTag_SamplerMask
//{
//    mangled_ppc("D3DTag_SamplerMask");
//};

//D3DTag_SubsetMask
//{
//    mangled_ppc("D3DTag_SubsetMask");
//};

//D3DTagCollection_Set
//{
//    mangled_ppc("D3DTagCollection_Set");
//};

//D3DDevice_SetSamplerState_AddressV_Inline
//{
//    mangled_ppc("D3DDevice_SetSamplerState_AddressV_Inline");
//};

//D3DDevice_SetSamplerState_AddressW_Inline
//{
//    mangled_ppc("D3DDevice_SetSamplerState_AddressW_Inline");
//};

//D3DDevice_SetSamplerState_MipFilter_Inline
//{
//    mangled_ppc("D3DDevice_SetSamplerState_MipFilter_Inline");
//};

//D3DDevice_SetSamplerState_BorderColor_Inline
//{
//    mangled_ppc("D3DDevice_SetSamplerState_BorderColor_Inline");
//};

//D3DDevice_SetSamplerState_TrilinearThreshold_Inline
//{
//    mangled_ppc("D3DDevice_SetSamplerState_TrilinearThreshold_Inline");
//};

//D3DDevice_SetSamplerState_HGradientExpBias_Inline
//{
//    mangled_ppc("D3DDevice_SetSamplerState_HGradientExpBias_Inline");
//};

//D3DDevice_SetSamplerState_VGradientExpBias_Inline
//{
//    mangled_ppc("D3DDevice_SetSamplerState_VGradientExpBias_Inline");
//};

//D3DDevice_SetSamplerState_WhiteBorderColorW_Inline
//{
//    mangled_ppc("D3DDevice_SetSamplerState_WhiteBorderColorW_Inline");
//};

//D3DDevice_SetSamplerState_PointBorderEnable_Inline
//{
//    mangled_ppc("D3DDevice_SetSamplerState_PointBorderEnable_Inline");
//};

//public: static bool c_rasterizer::empty_frame(void)
//{
//    mangled_ppc("?empty_frame@c_rasterizer@@SA_NXZ");
//};

//public: static bool c_rasterizer::end_frame_pregame(void)
//{
//    mangled_ppc("?end_frame_pregame@c_rasterizer@@SA_NXZ");
//};

//public: long D3DDevice::Present(struct tagRECT const *, struct tagRECT const *, void *, void *)
//{
//    mangled_ppc("?Present@D3DDevice@@QAAJPBUtagRECT@@0PAX1@Z");
//};

//public: long D3DDevice::EndScene(void)
//{
//    mangled_ppc("?EndScene@D3DDevice@@QAAJXZ");
//};

//D3DDevice_EndScene
//{
//    mangled_ppc("D3DDevice_EndScene");
//};

//public: static bool c_rasterizer::end_frame(void)
//{
//    mangled_ppc("?end_frame@c_rasterizer@@SA_NXZ");
//};

//public: static void c_surface::resolve(enum e_surface, long)
//{
//    mangled_ppc("?resolve@c_surface@@SAXW4e_surface@@J@Z");
//};

//public: struct D3DTexture * c_render_surface::get_d3d_texture(void)
//{
//    mangled_ppc("?get_d3d_texture@c_render_surface@@QAAPAUD3DTexture@@XZ");
//};

//public: static class c_render_surface * c_render_surfaces_interface::get_render_surface(enum e_surface)
//{
//    mangled_ppc("?get_render_surface@c_render_surfaces_interface@@SAPAVc_render_surface@@W4e_surface@@@Z");
//};

//public: static bool c_render_surfaces_interface::ready(void)
//{
//    mangled_ppc("?ready@c_render_surfaces_interface@@SA_NXZ");
//};

//public: long D3DDevice::SynchronizeToPresentationInterval(void)
//{
//    mangled_ppc("?SynchronizeToPresentationInterval@D3DDevice@@QAAJXZ");
//};

//public: long D3DDevice::Swap(struct D3DBaseTexture *, struct _D3DVIDEO_SCALER_PARAMETERS const *)
//{
//    mangled_ppc("?Swap@D3DDevice@@QAAJPAUD3DBaseTexture@@PBU_D3DVIDEO_SCALER_PARAMETERS@@@Z");
//};

//public: static long c_rasterizer::get_enqueued_swap_count(void)
//{
//    mangled_ppc("?get_enqueued_swap_count@c_rasterizer@@SAJXZ");
//};

//public: long D3DDevice::QuerySwapStatus(struct _D3DSWAP_STATUS *)
//{
//    mangled_ppc("?QuerySwapStatus@D3DDevice@@QAAJPAU_D3DSWAP_STATUS@@@Z");
//};

//public: static long c_rasterizer::get_last_enqueued_swap_index(void)
//{
//    mangled_ppc("?get_last_enqueued_swap_index@c_rasterizer@@SAJXZ");
//};

//public: static void c_rasterizer::prepare_for_tag_reload(void)
//{
//    mangled_ppc("?prepare_for_tag_reload@c_rasterizer@@SAXXZ");
//};

//public: static void c_rasterizer::set_DAC_LUT_curve(void)
//{
//    mangled_ppc("?set_DAC_LUT_curve@c_rasterizer@@SAXXZ");
//};

//XGGetGpuFormat
//{
//    mangled_ppc("XGGetGpuFormat");
//};

//public: struct s_surface_description const & c_render_surface::get_surface_description(void) const
//{
//    mangled_ppc("?get_surface_description@c_render_surface@@QBAABUs_surface_description@@XZ");
//};

//public: void D3DDevice::SetGammaRamp(unsigned int, unsigned long, struct _D3DGAMMARAMP const *)
//{
//    mangled_ppc("?SetGammaRamp@D3DDevice@@QAAXIKPBU_D3DGAMMARAMP@@@Z");
//};

//public: void D3DDevice::SetPWLGamma(unsigned long, struct _D3DPWLGAMMA const *)
//{
//    mangled_ppc("?SetPWLGamma@D3DDevice@@QAAXKPBU_D3DPWLGAMMA@@@Z");
//};

//void rasterizer_set_target(short, short, bool)
//{
//    mangled_ppc("?rasterizer_set_target@@YAXFF_N@Z");
//};

//bool rasterizer_wait_complete(void)
//{
//    mangled_ppc("?rasterizer_wait_complete@@YA_NXZ");
//};

//void rasterizer_vblank_callback(void const *)
//{
//    mangled_ppc("?rasterizer_vblank_callback@@YAXPBX@Z");
//};

//public: static void c_rasterizer::rasterizer_set_vblank_callback(void (*)(void const *))
//{
//    mangled_ppc("?rasterizer_set_vblank_callback@c_rasterizer@@SAXP6AXPBX@Z@Z");
//};

//public: long D3DDevice::SetVerticalBlankCallback(void (*)(struct _D3DVBLANKDATA *))
//{
//    mangled_ppc("?SetVerticalBlankCallback@D3DDevice@@QAAJP6AXPAU_D3DVBLANKDATA@@@Z@Z");
//};

//public: static void c_rasterizer::rasterizer_device_release_thread(void)
//{
//    mangled_ppc("?rasterizer_device_release_thread@c_rasterizer@@SAXXZ");
//};

//public: static struct D3DDevice * c_rasterizer::get_device(void)
//{
//    mangled_ppc("?get_device@c_rasterizer@@SAPAUD3DDevice@@XZ");
//};

//public: long D3DDevice::ReleaseThreadOwnership(void)
//{
//    mangled_ppc("?ReleaseThreadOwnership@D3DDevice@@QAAJXZ");
//};

//public: unsigned long D3DDevice::InsertFence(void)
//{
//    mangled_ppc("?InsertFence@D3DDevice@@QAAKXZ");
//};

//public: long D3DDevice::UnsetAll(void)
//{
//    mangled_ppc("?UnsetAll@D3DDevice@@QAAJXZ");
//};

//public: static void c_rasterizer::rasterizer_device_acquire_thread(void)
//{
//    mangled_ppc("?rasterizer_device_acquire_thread@c_rasterizer@@SAXXZ");
//};

//public: long D3DDevice::AcquireThreadOwnership(void)
//{
//    mangled_ppc("?AcquireThreadOwnership@D3DDevice@@QAAJXZ");
//};

//public: static void c_rasterizer::rasterizer_wait_for_idle(void)
//{
//    mangled_ppc("?rasterizer_wait_for_idle@c_rasterizer@@SAXXZ");
//};

//public: long D3DDevice::BlockUntilIdle(void)
//{
//    mangled_ppc("?BlockUntilIdle@D3DDevice@@QAAJXZ");
//};

//public: static unsigned long c_rasterizer::rasterizer_insert_fence(void)
//{
//    mangled_ppc("?rasterizer_insert_fence@c_rasterizer@@SAKXZ");
//};

//public: static void c_rasterizer::rasterizer_block_on_fence(unsigned long)
//{
//    mangled_ppc("?rasterizer_block_on_fence@c_rasterizer@@SAXK@Z");
//};

//public: long D3DDevice::BlockOnFence(unsigned long)
//{
//    mangled_ppc("?BlockOnFence@D3DDevice@@QAAJK@Z");
//};

//public: static bool c_rasterizer::rasterizer_is_fence_pending(unsigned long)
//{
//    mangled_ppc("?rasterizer_is_fence_pending@c_rasterizer@@SA_NK@Z");
//};

//public: int D3DDevice::IsFencePending(unsigned long)
//{
//    mangled_ppc("?IsFencePending@D3DDevice@@QAAHK@Z");
//};

//public: static bool c_rasterizer::rasterizer_thread_owns_device(void)
//{
//    mangled_ppc("?rasterizer_thread_owns_device@c_rasterizer@@SA_NXZ");
//};

//public: static unsigned long c_rasterizer::get_managed_pool_type(void)
//{
//    mangled_ppc("?get_managed_pool_type@c_rasterizer@@SAKXZ");
//};

//public: static unsigned long c_rasterizer::get_managed_mesh_type(void)
//{
//    mangled_ppc("?get_managed_mesh_type@c_rasterizer@@SAKXZ");
//};

//public: static unsigned long c_rasterizer::get_managed_usage(void)
//{
//    mangled_ppc("?get_managed_usage@c_rasterizer@@SAKXZ");
//};

//public: static void c_rasterizer::prepare_for_fatal_guide_ui(void)
//{
//    mangled_ppc("?prepare_for_fatal_guide_ui@c_rasterizer@@SAXXZ");
//};

//public: long D3DDevice::Suspend(void)
//{
//    mangled_ppc("?Suspend@D3DDevice@@QAAJXZ");
//};

//public: static void c_rasterizer::rebuild_hi_z(void)
//{
//    mangled_ppc("?rebuild_hi_z@c_rasterizer@@SAXXZ");
//};

//bool rasterizer_dump_display_to_dds(char const *, bool)
//{
//    mangled_ppc("?rasterizer_dump_display_to_dds@@YA_NPBD_N@Z");
//};

//XGAddress2DTiledOffset
//{
//    mangled_ppc("XGAddress2DTiledOffset");
//};

//XGLog2LE16
//{
//    mangled_ppc("XGLog2LE16");
//};

//public: long D3DTexture::GetLevelDesc(unsigned int, struct _D3DSURFACE_DESC *)
//{
//    mangled_ppc("?GetLevelDesc@D3DTexture@@QAAJIPAU_D3DSURFACE_DESC@@@Z");
//};

//public: long D3DTexture::LockRect(unsigned int, struct _D3DLOCKED_RECT *, struct tagRECT const *, unsigned long)
//{
//    mangled_ppc("?LockRect@D3DTexture@@QAAJIPAU_D3DLOCKED_RECT@@PBUtagRECT@@K@Z");
//};

//public: long D3DTexture::UnlockRect(unsigned int)
//{
//    mangled_ppc("?UnlockRect@D3DTexture@@QAAJI@Z");
//};

//unsigned short word_rgb_color_to_pixel16_565_pinned(union word_rgb_color *)
//{
//    mangled_ppc("?word_rgb_color_to_pixel16_565_pinned@@YAGPATword_rgb_color@@@Z");
//};

//union word_rgb_color pixel32_8_8_8_8_gamma2_to_word_rgb_color(unsigned long)
//{
//    mangled_ppc("?pixel32_8_8_8_8_gamma2_to_word_rgb_color@@YA?ATword_rgb_color@@K@Z");
//};

//public: c_aligned_stored_buffered_file_writer<4096>::c_aligned_stored_buffered_file_writer<4096>(void)
//{
//    mangled_ppc("??0?$c_aligned_stored_buffered_file_writer@$0BAAA@@@QAA@XZ");
//};

//public: void c_aligned_stored_buffered_file_writer<4096>::initialize(struct s_file_reference *)
//{
//    mangled_ppc("?initialize@?$c_aligned_stored_buffered_file_writer@$0BAAA@@@QAAXPAUs_file_reference@@@Z");
//};

//public: bool c_aligned_stored_buffered_file_writer<4096>::write(char const *, long)
//{
//    mangled_ppc("?write@?$c_aligned_stored_buffered_file_writer@$0BAAA@@@QAA_NPBDJ@Z");
//};

//public: bool c_aligned_stored_buffered_file_writer<4096>::flush(void)
//{
//    mangled_ppc("?flush@?$c_aligned_stored_buffered_file_writer@$0BAAA@@@QAA_NXZ");
//};

