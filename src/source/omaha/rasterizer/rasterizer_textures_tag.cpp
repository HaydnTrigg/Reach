/* ---------- headers */

#include "omaha\rasterizer\rasterizer_textures_tag.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long s_rasterizer_texture::g_initial_texture_count; // "?g_initial_texture_count@s_rasterizer_texture@@2JA"
// public: static struct s_data_array *s_rasterizer_texture::g_data_array; // "?g_data_array@s_rasterizer_texture@@2PAUs_data_array@@A"

// public: static class c_rasterizer_texture_ref c_rasterizer_texture_ref::allocate_sysmem(enum e_bitmap_type, long, long, long, long, bool);
// public: static long s_rasterizer_texture::allocate(void);
// public: static struct s_rasterizer_texture * s_rasterizer_texture::get(long);
// public: static class c_rasterizer_texture_ref c_rasterizer_texture_ref::allocate(long, long, long, long, long, bool, enum e_bitmap_type, bool, void *);
// public: static class c_rasterizer_texture_ref c_rasterizer_texture_ref::allocate(struct bitmap_data const *);
// public: void s_rasterizer_texture::initialize(struct bitmap_data const *, enum _D3DFORMAT *);
// public: void c_rasterizer_texture_ref::copy_from_bitmap(struct bitmap_data const *);
// private: static struct D3DTexture * c_rasterizer_texture_ref::allocate_2d_texture(struct bitmap_data const *, long);
// private: static struct D3DCubeTexture * c_rasterizer_texture_ref::allocate_cube_texture(struct bitmap_data const *, long);
// public: static void c_rasterizer_texture_ref::release(class c_rasterizer_texture_ref &);
// public: static void s_rasterizer_texture::release(long);
// public: static void c_rasterizer_texture_ref::force_release_unsafe(class c_rasterizer_texture_ref &);
// public: struct D3DBaseTexture * c_rasterizer_texture_ref::get_d3d_texture(void) const;
// public: struct D3DCubeTexture * c_rasterizer_texture_ref::get_d3d_cube_texture(void) const;
// public: bool c_rasterizer_texture_ref::get_width_height(long, long *, long *);
// public: unsigned long c_rasterizer_texture_ref::get_d3d_format(void);
// public: long c_rasterizer_texture_ref::get_mipmap_count(void);
// public: bool c_rasterizer_texture_ref::is_srgb(void) const;
// public: bool c_rasterizer_texture_ref::is_cubemap(void) const;
// public: bool c_rasterizer_texture_ref::is_render_target(void) const;
// public: struct D3DSurface * c_rasterizer_texture_ref::get_d3d_surface(long, long);
// public: c_rasterizer_texture_ref::c_rasterizer_texture_ref(long, unsigned long, struct D3DBaseTexture *);
// public: c_rasterizer_texture_ref::c_rasterizer_texture_ref(struct bitmap_data const *, struct D3DBaseTexture *, void *);
// public: c_rasterizer_texture_ref::c_rasterizer_texture_ref(struct bitmap_data const *, struct D3DBaseTexture *, void *, void *);
// public: static void c_rasterizer_texture_ref::initialize(void);
// public: static void c_rasterizer_texture_ref::dispose(void);
// public: static void c_rasterizer_texture_ref::initialize_for_new_map(void);
// public: static void c_rasterizer_texture_ref::dispose_from_old_map(void);
// public: long D3DDevice::CreateCubeTexture(unsigned int, unsigned int, unsigned long, enum _D3DFORMAT, unsigned long, struct D3DCubeTexture **, void **);
// public: void D3DResource::BlockUntilNotBusy(void);
// public: long D3DTexture::GetSurfaceLevel(unsigned int, struct D3DSurface **);
// public: long D3DCubeTexture::GetLevelDesc(unsigned int, struct _D3DSURFACE_DESC *);
// public: long D3DCubeTexture::GetCubeMapSurface(enum _D3DCUBEMAP_FACES, unsigned int, struct D3DSurface **);

//public: static class c_rasterizer_texture_ref c_rasterizer_texture_ref::allocate_sysmem(enum e_bitmap_type, long, long, long, long, bool)
//{
//    mangled_ppc("?allocate_sysmem@c_rasterizer_texture_ref@@SA?AV1@W4e_bitmap_type@@JJJJ_N@Z");
//};

//public: static long s_rasterizer_texture::allocate(void)
//{
//    mangled_ppc("?allocate@s_rasterizer_texture@@SAJXZ");
//};

//public: static struct s_rasterizer_texture * s_rasterizer_texture::get(long)
//{
//    mangled_ppc("?get@s_rasterizer_texture@@SAPAU1@J@Z");
//};

//public: static class c_rasterizer_texture_ref c_rasterizer_texture_ref::allocate(long, long, long, long, long, bool, enum e_bitmap_type, bool, void *)
//{
//    mangled_ppc("?allocate@c_rasterizer_texture_ref@@SA?AV1@JJJJJ_NW4e_bitmap_type@@0PAX@Z");
//};

//public: static class c_rasterizer_texture_ref c_rasterizer_texture_ref::allocate(struct bitmap_data const *)
//{
//    mangled_ppc("?allocate@c_rasterizer_texture_ref@@SA?AV1@PBUbitmap_data@@@Z");
//};

//public: void s_rasterizer_texture::initialize(struct bitmap_data const *, enum _D3DFORMAT *)
//{
//    mangled_ppc("?initialize@s_rasterizer_texture@@QAAXPBUbitmap_data@@PAW4_D3DFORMAT@@@Z");
//};

//public: void c_rasterizer_texture_ref::copy_from_bitmap(struct bitmap_data const *)
//{
//    mangled_ppc("?copy_from_bitmap@c_rasterizer_texture_ref@@QAAXPBUbitmap_data@@@Z");
//};

//private: static struct D3DTexture * c_rasterizer_texture_ref::allocate_2d_texture(struct bitmap_data const *, long)
//{
//    mangled_ppc("?allocate_2d_texture@c_rasterizer_texture_ref@@CAPAUD3DTexture@@PBUbitmap_data@@J@Z");
//};

//private: static struct D3DCubeTexture * c_rasterizer_texture_ref::allocate_cube_texture(struct bitmap_data const *, long)
//{
//    mangled_ppc("?allocate_cube_texture@c_rasterizer_texture_ref@@CAPAUD3DCubeTexture@@PBUbitmap_data@@J@Z");
//};

//public: static void c_rasterizer_texture_ref::release(class c_rasterizer_texture_ref &)
//{
//    mangled_ppc("?release@c_rasterizer_texture_ref@@SAXAAV1@@Z");
//};

//public: static void s_rasterizer_texture::release(long)
//{
//    mangled_ppc("?release@s_rasterizer_texture@@SAXJ@Z");
//};

//public: static void c_rasterizer_texture_ref::force_release_unsafe(class c_rasterizer_texture_ref &)
//{
//    mangled_ppc("?force_release_unsafe@c_rasterizer_texture_ref@@SAXAAV1@@Z");
//};

//public: struct D3DBaseTexture * c_rasterizer_texture_ref::get_d3d_texture(void) const
//{
//    mangled_ppc("?get_d3d_texture@c_rasterizer_texture_ref@@QBAPAUD3DBaseTexture@@XZ");
//};

//public: struct D3DCubeTexture * c_rasterizer_texture_ref::get_d3d_cube_texture(void) const
//{
//    mangled_ppc("?get_d3d_cube_texture@c_rasterizer_texture_ref@@QBAPAUD3DCubeTexture@@XZ");
//};

//public: bool c_rasterizer_texture_ref::get_width_height(long, long *, long *)
//{
//    mangled_ppc("?get_width_height@c_rasterizer_texture_ref@@QAA_NJPAJ0@Z");
//};

//public: unsigned long c_rasterizer_texture_ref::get_d3d_format(void)
//{
//    mangled_ppc("?get_d3d_format@c_rasterizer_texture_ref@@QAAKXZ");
//};

//public: long c_rasterizer_texture_ref::get_mipmap_count(void)
//{
//    mangled_ppc("?get_mipmap_count@c_rasterizer_texture_ref@@QAAJXZ");
//};

//public: bool c_rasterizer_texture_ref::is_srgb(void) const
//{
//    mangled_ppc("?is_srgb@c_rasterizer_texture_ref@@QBA_NXZ");
//};

//public: bool c_rasterizer_texture_ref::is_cubemap(void) const
//{
//    mangled_ppc("?is_cubemap@c_rasterizer_texture_ref@@QBA_NXZ");
//};

//public: bool c_rasterizer_texture_ref::is_render_target(void) const
//{
//    mangled_ppc("?is_render_target@c_rasterizer_texture_ref@@QBA_NXZ");
//};

//public: struct D3DSurface * c_rasterizer_texture_ref::get_d3d_surface(long, long)
//{
//    mangled_ppc("?get_d3d_surface@c_rasterizer_texture_ref@@QAAPAUD3DSurface@@JJ@Z");
//};

//public: c_rasterizer_texture_ref::c_rasterizer_texture_ref(long, unsigned long, struct D3DBaseTexture *)
//{
//    mangled_ppc("??0c_rasterizer_texture_ref@@QAA@JKPAUD3DBaseTexture@@@Z");
//};

//public: c_rasterizer_texture_ref::c_rasterizer_texture_ref(struct bitmap_data const *, struct D3DBaseTexture *, void *)
//{
//    mangled_ppc("??0c_rasterizer_texture_ref@@QAA@PBUbitmap_data@@PAUD3DBaseTexture@@PAX@Z");
//};

//public: c_rasterizer_texture_ref::c_rasterizer_texture_ref(struct bitmap_data const *, struct D3DBaseTexture *, void *, void *)
//{
//    mangled_ppc("??0c_rasterizer_texture_ref@@QAA@PBUbitmap_data@@PAUD3DBaseTexture@@PAX2@Z");
//};

//public: static void c_rasterizer_texture_ref::initialize(void)
//{
//    mangled_ppc("?initialize@c_rasterizer_texture_ref@@SAXXZ");
//};

//public: static void c_rasterizer_texture_ref::dispose(void)
//{
//    mangled_ppc("?dispose@c_rasterizer_texture_ref@@SAXXZ");
//};

//public: static void c_rasterizer_texture_ref::initialize_for_new_map(void)
//{
//    mangled_ppc("?initialize_for_new_map@c_rasterizer_texture_ref@@SAXXZ");
//};

//public: static void c_rasterizer_texture_ref::dispose_from_old_map(void)
//{
//    mangled_ppc("?dispose_from_old_map@c_rasterizer_texture_ref@@SAXXZ");
//};

//public: long D3DDevice::CreateCubeTexture(unsigned int, unsigned int, unsigned long, enum _D3DFORMAT, unsigned long, struct D3DCubeTexture **, void **)
//{
//    mangled_ppc("?CreateCubeTexture@D3DDevice@@QAAJIIKW4_D3DFORMAT@@KPAPAUD3DCubeTexture@@PAPAX@Z");
//};

//public: void D3DResource::BlockUntilNotBusy(void)
//{
//    mangled_ppc("?BlockUntilNotBusy@D3DResource@@QAAXXZ");
//};

//public: long D3DTexture::GetSurfaceLevel(unsigned int, struct D3DSurface **)
//{
//    mangled_ppc("?GetSurfaceLevel@D3DTexture@@QAAJIPAPAUD3DSurface@@@Z");
//};

//public: long D3DCubeTexture::GetLevelDesc(unsigned int, struct _D3DSURFACE_DESC *)
//{
//    mangled_ppc("?GetLevelDesc@D3DCubeTexture@@QAAJIPAU_D3DSURFACE_DESC@@@Z");
//};

//public: long D3DCubeTexture::GetCubeMapSurface(enum _D3DCUBEMAP_FACES, unsigned int, struct D3DSurface **)
//{
//    mangled_ppc("?GetCubeMapSurface@D3DCubeTexture@@QAAJW4_D3DCUBEMAP_FACES@@IPAPAUD3DSurface@@@Z");
//};

