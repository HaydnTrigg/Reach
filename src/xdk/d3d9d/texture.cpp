/* ---------- headers */

#include "xdk\d3d9d\texture.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// int D3D::g_HiZAllocated; // "?g_HiZAllocated@D3D@@3HA"

// void D3D::GetTextureDimensions(struct D3DBaseTexture *, unsigned long *, unsigned long *, unsigned long *);
// void D3D::GetGpuTextureDimensions(union GPUTEXTURE_FETCH_CONSTANT *, unsigned long *, unsigned long *, unsigned long *);
// GPU_CONVERT_CPU_TO_GPU_ADDRESS;
// D3DPtrToDWORD;
// D3DDWORDToPtr;
// D3DTagCollection_Set;
// D3DTagCollection_TestAny;
// D3DArrayTexture_GetArraySize;
// D3DSurface_GetContainer;
// D3DVolume_GetContainer;
// unsigned int D3D::NextMultipleSlow<unsigned int, int>(unsigned int, int);
// int D3D::IsPowerOf2<unsigned int>(unsigned int);
// public: unsigned long D3DResource::AddRef(void);
// public: enum _D3DRESOURCETYPE D3DResource::GetType(void);
// XGSurfaceSize;
// XGHierarchicalZSize;
// unsigned long D3D::Log2Ceiling(unsigned long);
// unsigned long D3D::Log2Floor(unsigned long);
// int D3D::IsValidD3DFORMAT(enum _D3DFORMAT);
// unsigned long D3D::BitsPerPixelOfGpuFormat(unsigned long);
// unsigned long D3D::BitsPerPixelOfD3DFORMAT(enum _D3DFORMAT);
// void D3D::BlockSizeOfGpuFormat(unsigned long, unsigned long *, unsigned long *);
// int D3D::IsTiledD3DFORMAT(enum _D3DFORMAT);
// unsigned long D3D::EDRAMFormat(unsigned long);
// enum _D3DFORMAT D3D::GetD3DFormatFromFetchConstant(union GPUTEXTURE_FETCH_CONSTANT *);
// enum _D3DFORMAT D3D::GetD3DFormat(struct D3DBaseTexture *);
// unsigned long D3D::GetMipmapLevelCount(struct D3DBaseTexture *);
// unsigned long D3D::GetMaxMipLevels(unsigned long, unsigned long, unsigned long, unsigned long);
// unsigned long D3D::GetMipTailBaseLevel(unsigned long, unsigned long, unsigned long);
// unsigned char * D3DDWORDToPtr<unsigned char>(unsigned long);
// void D3D::InitializeSURFACE_FROM_TEXTURE(struct D3DSurface *, struct D3DBaseTexture *, unsigned int, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long);
// void D3D::InitializeSurfaceFromVolume(struct D3DVolume *, struct D3DBaseTexture *, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long);
// unsigned long D3D::VideoBitsPerPixelOfD3DFORMAT(enum _D3DFORMAT);
// void D3D::GetLogDimensions(struct D3DBaseTexture *, int *, int *, int *);
// unsigned long D3D::GetMipTailLevelOffsetCoords(unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, unsigned int *, unsigned int *, unsigned int *);
// unsigned long D3D::GetMipTailLevelOffset(unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long);
// D3DBaseTexture_GetLevelCount;
// D3DBaseTexture_UnlockTail;
// D3DTexture_UnlockRect;
// D3DCubeTexture_UnlockRect;
// D3DArrayTexture_UnlockRect;
// D3DVolumeTexture_UnlockBox;
// D3DLineTexture_UnlockRect;
// D3DSurface_UnlockRect;
// D3DVolume_UnlockBox;
// D3DDevice_SetTexture;
// D3DDevice_GetTexture;
// unsigned long D3D::NextMultiple<unsigned long, unsigned int>(unsigned long, unsigned int);
// unsigned long D3D::AlignTextureDimensions(unsigned long *, unsigned long *, unsigned long *, unsigned long, unsigned long, unsigned long, int);
// unsigned long D3D::FindTextureSize(unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, int, int, unsigned long, int, unsigned long, unsigned long *, unsigned long *, unsigned long *);
// void D3D::GetLevelSize(struct D3DBaseTexture *, unsigned long, unsigned long *, unsigned long *, unsigned long *, unsigned long *, unsigned long *);
// void D3D::Get2DSurfaceDesc(struct D3DBaseTexture *, unsigned int, struct _D3DSURFACE_DESC *);
// void D3D::Get3DSurfaceDesc(struct D3DBaseTexture *, unsigned int, struct _D3DVOLUME_DESC *);
// void D3D::FindSurfaceWithinTexture(struct D3DBaseTexture *, unsigned int, unsigned int, unsigned long *, unsigned long *, unsigned long *, unsigned long *, unsigned long *, unsigned long *, unsigned long *, unsigned long *);
// void D3D::LockSurface(struct D3DBaseTexture *, unsigned __int64, unsigned int, unsigned int, unsigned long, unsigned long *, unsigned long *, unsigned long *, unsigned long *);
// void D3D::Lock2DSurface(struct D3DBaseTexture *, unsigned __int64, unsigned int, unsigned int, struct _D3DLOCKED_RECT *, struct tagRECT const *, unsigned long);
// void D3D::Lock3DSurface(struct D3DBaseTexture *, unsigned int, struct _D3DLOCKED_BOX *, struct _D3DBOX const *, unsigned long);
// void D3D::SetTextureHeader(enum _D3DRESOURCETYPE, unsigned int, unsigned int, unsigned int, unsigned int, unsigned long, enum _D3DFORMAT, enum D3D::MIPPACKINGTYPE, unsigned long, int, unsigned int, struct D3DBaseTexture *, unsigned long *, unsigned long *);
// void D3D::SetSurfaceHeader(unsigned int, unsigned int, enum _D3DFORMAT, enum _D3DMULTISAMPLE_TYPE, struct _D3DSURFACE_PARAMETERS const *, struct D3DSurface *, unsigned long *, unsigned long *);
// D3DBaseTexture_LockTail;
// D3DBaseTexture_AsyncLockTail;
// D3DBaseTexture_GetTailDesc;
// D3DTexture_GetLevelDesc;
// D3DTexture_GetSurfaceLevel;
// D3DTexture_LockRect;
// D3DTexture_AsyncLockRect;
// D3DCubeTexture_GetLevelDesc;
// D3DCubeTexture_GetCubeMapSurface;
// D3DCubeTexture_LockRect;
// D3DCubeTexture_AsyncLockRect;
// D3DArrayTexture_GetLevelDesc;
// D3DArrayTexture_GetArraySurface;
// D3DArrayTexture_LockRect;
// D3DArrayTexture_AsyncLockRect;
// D3DVolumeTexture_GetLevelDesc;
// D3DVolumeTexture_GetVolumeLevel;
// D3DVolumeTexture_LockBox;
// D3DLineTexture_GetLevelDesc;
// D3DLineTexture_GetSurfaceLevel;
// D3DLineTexture_LockRect;
// D3DLineTexture_AsyncLockRect;
// D3DDevice_CreateTexture;
// D3DDevice_CreateSurface;
// D3DSurface_GetDesc;
// D3DSurface_LockRect;
// D3DSurface_AsyncLockRect;
// D3DVolume_GetDesc;
// D3DVolume_LockBox;

//void D3D::GetTextureDimensions(struct D3DBaseTexture *, unsigned long *, unsigned long *, unsigned long *)
//{
//    mangled_ppc("?GetTextureDimensions@D3D@@YAXPAUD3DBaseTexture@@PAK11@Z");
//};

//void D3D::GetGpuTextureDimensions(union GPUTEXTURE_FETCH_CONSTANT *, unsigned long *, unsigned long *, unsigned long *)
//{
//    mangled_ppc("?GetGpuTextureDimensions@D3D@@YAXPATGPUTEXTURE_FETCH_CONSTANT@@PAK11@Z");
//};

//GPU_CONVERT_CPU_TO_GPU_ADDRESS
//{
//    mangled_ppc("GPU_CONVERT_CPU_TO_GPU_ADDRESS");
//};

//D3DPtrToDWORD
//{
//    mangled_ppc("D3DPtrToDWORD");
//};

//D3DDWORDToPtr
//{
//    mangled_ppc("D3DDWORDToPtr");
//};

//D3DTagCollection_Set
//{
//    mangled_ppc("D3DTagCollection_Set");
//};

//D3DTagCollection_TestAny
//{
//    mangled_ppc("D3DTagCollection_TestAny");
//};

//D3DArrayTexture_GetArraySize
//{
//    mangled_ppc("D3DArrayTexture_GetArraySize");
//};

//D3DSurface_GetContainer
//{
//    mangled_ppc("D3DSurface_GetContainer");
//};

//D3DVolume_GetContainer
//{
//    mangled_ppc("D3DVolume_GetContainer");
//};

//unsigned int D3D::NextMultipleSlow<unsigned int, int>(unsigned int, int)
//{
//    mangled_ppc("??$NextMultipleSlow@IH@D3D@@YAIIH@Z");
//};

//int D3D::IsPowerOf2<unsigned int>(unsigned int)
//{
//    mangled_ppc("??$IsPowerOf2@I@D3D@@YAHI@Z");
//};

//public: unsigned long D3DResource::AddRef(void)
//{
//    mangled_ppc("?AddRef@D3DResource@@QAAKXZ");
//};

//public: enum _D3DRESOURCETYPE D3DResource::GetType(void)
//{
//    mangled_ppc("?GetType@D3DResource@@QAA?AW4_D3DRESOURCETYPE@@XZ");
//};

//XGSurfaceSize
//{
//    mangled_ppc("XGSurfaceSize");
//};

//XGHierarchicalZSize
//{
//    mangled_ppc("XGHierarchicalZSize");
//};

//unsigned long D3D::Log2Ceiling(unsigned long)
//{
//    mangled_ppc("?Log2Ceiling@D3D@@YAKK@Z");
//};

//unsigned long D3D::Log2Floor(unsigned long)
//{
//    mangled_ppc("?Log2Floor@D3D@@YAKK@Z");
//};

//int D3D::IsValidD3DFORMAT(enum _D3DFORMAT)
//{
//    mangled_ppc("?IsValidD3DFORMAT@D3D@@YAHW4_D3DFORMAT@@@Z");
//};

//unsigned long D3D::BitsPerPixelOfGpuFormat(unsigned long)
//{
//    mangled_ppc("?BitsPerPixelOfGpuFormat@D3D@@YAKK@Z");
//};

//unsigned long D3D::BitsPerPixelOfD3DFORMAT(enum _D3DFORMAT)
//{
//    mangled_ppc("?BitsPerPixelOfD3DFORMAT@D3D@@YAKW4_D3DFORMAT@@@Z");
//};

//void D3D::BlockSizeOfGpuFormat(unsigned long, unsigned long *, unsigned long *)
//{
//    mangled_ppc("?BlockSizeOfGpuFormat@D3D@@YAXKPAK0@Z");
//};

//int D3D::IsTiledD3DFORMAT(enum _D3DFORMAT)
//{
//    mangled_ppc("?IsTiledD3DFORMAT@D3D@@YAHW4_D3DFORMAT@@@Z");
//};

//unsigned long D3D::EDRAMFormat(unsigned long)
//{
//    mangled_ppc("?EDRAMFormat@D3D@@YAKK@Z");
//};

//enum _D3DFORMAT D3D::GetD3DFormatFromFetchConstant(union GPUTEXTURE_FETCH_CONSTANT *)
//{
//    mangled_ppc("?GetD3DFormatFromFetchConstant@D3D@@YA?AW4_D3DFORMAT@@PATGPUTEXTURE_FETCH_CONSTANT@@@Z");
//};

//enum _D3DFORMAT D3D::GetD3DFormat(struct D3DBaseTexture *)
//{
//    mangled_ppc("?GetD3DFormat@D3D@@YA?AW4_D3DFORMAT@@PAUD3DBaseTexture@@@Z");
//};

//unsigned long D3D::GetMipmapLevelCount(struct D3DBaseTexture *)
//{
//    mangled_ppc("?GetMipmapLevelCount@D3D@@YAKPAUD3DBaseTexture@@@Z");
//};

//unsigned long D3D::GetMaxMipLevels(unsigned long, unsigned long, unsigned long, unsigned long)
//{
//    mangled_ppc("?GetMaxMipLevels@D3D@@YAKKKKK@Z");
//};

//unsigned long D3D::GetMipTailBaseLevel(unsigned long, unsigned long, unsigned long)
//{
//    mangled_ppc("?GetMipTailBaseLevel@D3D@@YAKKKK@Z");
//};

//unsigned char * D3DDWORDToPtr<unsigned char>(unsigned long)
//{
//    mangled_ppc("??$D3DDWORDToPtr@E@@YAPAEK@Z");
//};

//void D3D::InitializeSURFACE_FROM_TEXTURE(struct D3DSurface *, struct D3DBaseTexture *, unsigned int, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long)
//{
//    mangled_ppc("?InitializeSURFACE_FROM_TEXTURE@D3D@@YAXPAUD3DSurface@@PAUD3DBaseTexture@@IKKKKKK@Z");
//};

//void D3D::InitializeSurfaceFromVolume(struct D3DVolume *, struct D3DBaseTexture *, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long)
//{
//    mangled_ppc("?InitializeSurfaceFromVolume@D3D@@YAXPAUD3DVolume@@PAUD3DBaseTexture@@KKKKKKK@Z");
//};

//unsigned long D3D::VideoBitsPerPixelOfD3DFORMAT(enum _D3DFORMAT)
//{
//    mangled_ppc("?VideoBitsPerPixelOfD3DFORMAT@D3D@@YAKW4_D3DFORMAT@@@Z");
//};

//void D3D::GetLogDimensions(struct D3DBaseTexture *, int *, int *, int *)
//{
//    mangled_ppc("?GetLogDimensions@D3D@@YAXPAUD3DBaseTexture@@PAH11@Z");
//};

//unsigned long D3D::GetMipTailLevelOffsetCoords(unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, unsigned int *, unsigned int *, unsigned int *)
//{
//    mangled_ppc("?GetMipTailLevelOffsetCoords@D3D@@YAKKKKKKKKPAI00@Z");
//};

//unsigned long D3D::GetMipTailLevelOffset(unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long)
//{
//    mangled_ppc("?GetMipTailLevelOffset@D3D@@YAKKKKKKKK@Z");
//};

//D3DBaseTexture_GetLevelCount
//{
//    mangled_ppc("D3DBaseTexture_GetLevelCount");
//};

//D3DBaseTexture_UnlockTail
//{
//    mangled_ppc("D3DBaseTexture_UnlockTail");
//};

//D3DTexture_UnlockRect
//{
//    mangled_ppc("D3DTexture_UnlockRect");
//};

//D3DCubeTexture_UnlockRect
//{
//    mangled_ppc("D3DCubeTexture_UnlockRect");
//};

//D3DArrayTexture_UnlockRect
//{
//    mangled_ppc("D3DArrayTexture_UnlockRect");
//};

//D3DVolumeTexture_UnlockBox
//{
//    mangled_ppc("D3DVolumeTexture_UnlockBox");
//};

//D3DLineTexture_UnlockRect
//{
//    mangled_ppc("D3DLineTexture_UnlockRect");
//};

//D3DSurface_UnlockRect
//{
//    mangled_ppc("D3DSurface_UnlockRect");
//};

//D3DVolume_UnlockBox
//{
//    mangled_ppc("D3DVolume_UnlockBox");
//};

//D3DDevice_SetTexture
//{
//    mangled_ppc("D3DDevice_SetTexture");
//};

//D3DDevice_GetTexture
//{
//    mangled_ppc("D3DDevice_GetTexture");
//};

//unsigned long D3D::NextMultiple<unsigned long, unsigned int>(unsigned long, unsigned int)
//{
//    mangled_ppc("??$NextMultiple@KI@D3D@@YAKKI@Z");
//};

//unsigned long D3D::AlignTextureDimensions(unsigned long *, unsigned long *, unsigned long *, unsigned long, unsigned long, unsigned long, int)
//{
//    mangled_ppc("?AlignTextureDimensions@D3D@@YAKPAK00KKKH@Z");
//};

//unsigned long D3D::FindTextureSize(unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, int, int, unsigned long, int, unsigned long, unsigned long *, unsigned long *, unsigned long *)
//{
//    mangled_ppc("?FindTextureSize@D3D@@YAKKKKKKKHHKHKPAK00@Z");
//};

//void D3D::GetLevelSize(struct D3DBaseTexture *, unsigned long, unsigned long *, unsigned long *, unsigned long *, unsigned long *, unsigned long *)
//{
//    mangled_ppc("?GetLevelSize@D3D@@YAXPAUD3DBaseTexture@@KPAK1111@Z");
//};

//void D3D::Get2DSurfaceDesc(struct D3DBaseTexture *, unsigned int, struct _D3DSURFACE_DESC *)
//{
//    mangled_ppc("?Get2DSurfaceDesc@D3D@@YAXPAUD3DBaseTexture@@IPAU_D3DSURFACE_DESC@@@Z");
//};

//void D3D::Get3DSurfaceDesc(struct D3DBaseTexture *, unsigned int, struct _D3DVOLUME_DESC *)
//{
//    mangled_ppc("?Get3DSurfaceDesc@D3D@@YAXPAUD3DBaseTexture@@IPAU_D3DVOLUME_DESC@@@Z");
//};

//void D3D::FindSurfaceWithinTexture(struct D3DBaseTexture *, unsigned int, unsigned int, unsigned long *, unsigned long *, unsigned long *, unsigned long *, unsigned long *, unsigned long *, unsigned long *, unsigned long *)
//{
//    mangled_ppc("?FindSurfaceWithinTexture@D3D@@YAXPAUD3DBaseTexture@@IIPAK1111111@Z");
//};

//void D3D::LockSurface(struct D3DBaseTexture *, unsigned __int64, unsigned int, unsigned int, unsigned long, unsigned long *, unsigned long *, unsigned long *, unsigned long *)
//{
//    mangled_ppc("?LockSurface@D3D@@YAXPAUD3DBaseTexture@@_KIIKPAK222@Z");
//};

//void D3D::Lock2DSurface(struct D3DBaseTexture *, unsigned __int64, unsigned int, unsigned int, struct _D3DLOCKED_RECT *, struct tagRECT const *, unsigned long)
//{
//    mangled_ppc("?Lock2DSurface@D3D@@YAXPAUD3DBaseTexture@@_KIIPAU_D3DLOCKED_RECT@@PBUtagRECT@@K@Z");
//};

//void D3D::Lock3DSurface(struct D3DBaseTexture *, unsigned int, struct _D3DLOCKED_BOX *, struct _D3DBOX const *, unsigned long)
//{
//    mangled_ppc("?Lock3DSurface@D3D@@YAXPAUD3DBaseTexture@@IPAU_D3DLOCKED_BOX@@PBU_D3DBOX@@K@Z");
//};

//void D3D::SetTextureHeader(enum _D3DRESOURCETYPE, unsigned int, unsigned int, unsigned int, unsigned int, unsigned long, enum _D3DFORMAT, enum D3D::MIPPACKINGTYPE, unsigned long, int, unsigned int, struct D3DBaseTexture *, unsigned long *, unsigned long *)
//{
//    mangled_ppc("?SetTextureHeader@D3D@@YAXW4_D3DRESOURCETYPE@@IIIIKW4_D3DFORMAT@@W4MIPPACKINGTYPE@1@KHIPAUD3DBaseTexture@@PAK4@Z");
//};

//void D3D::SetSurfaceHeader(unsigned int, unsigned int, enum _D3DFORMAT, enum _D3DMULTISAMPLE_TYPE, struct _D3DSURFACE_PARAMETERS const *, struct D3DSurface *, unsigned long *, unsigned long *)
//{
//    mangled_ppc("?SetSurfaceHeader@D3D@@YAXIIW4_D3DFORMAT@@W4_D3DMULTISAMPLE_TYPE@@PBU_D3DSURFACE_PARAMETERS@@PAUD3DSurface@@PAK4@Z");
//};

//D3DBaseTexture_LockTail
//{
//    mangled_ppc("D3DBaseTexture_LockTail");
//};

//D3DBaseTexture_AsyncLockTail
//{
//    mangled_ppc("D3DBaseTexture_AsyncLockTail");
//};

//D3DBaseTexture_GetTailDesc
//{
//    mangled_ppc("D3DBaseTexture_GetTailDesc");
//};

//D3DTexture_GetLevelDesc
//{
//    mangled_ppc("D3DTexture_GetLevelDesc");
//};

//D3DTexture_GetSurfaceLevel
//{
//    mangled_ppc("D3DTexture_GetSurfaceLevel");
//};

//D3DTexture_LockRect
//{
//    mangled_ppc("D3DTexture_LockRect");
//};

//D3DTexture_AsyncLockRect
//{
//    mangled_ppc("D3DTexture_AsyncLockRect");
//};

//D3DCubeTexture_GetLevelDesc
//{
//    mangled_ppc("D3DCubeTexture_GetLevelDesc");
//};

//D3DCubeTexture_GetCubeMapSurface
//{
//    mangled_ppc("D3DCubeTexture_GetCubeMapSurface");
//};

//D3DCubeTexture_LockRect
//{
//    mangled_ppc("D3DCubeTexture_LockRect");
//};

//D3DCubeTexture_AsyncLockRect
//{
//    mangled_ppc("D3DCubeTexture_AsyncLockRect");
//};

//D3DArrayTexture_GetLevelDesc
//{
//    mangled_ppc("D3DArrayTexture_GetLevelDesc");
//};

//D3DArrayTexture_GetArraySurface
//{
//    mangled_ppc("D3DArrayTexture_GetArraySurface");
//};

//D3DArrayTexture_LockRect
//{
//    mangled_ppc("D3DArrayTexture_LockRect");
//};

//D3DArrayTexture_AsyncLockRect
//{
//    mangled_ppc("D3DArrayTexture_AsyncLockRect");
//};

//D3DVolumeTexture_GetLevelDesc
//{
//    mangled_ppc("D3DVolumeTexture_GetLevelDesc");
//};

//D3DVolumeTexture_GetVolumeLevel
//{
//    mangled_ppc("D3DVolumeTexture_GetVolumeLevel");
//};

//D3DVolumeTexture_LockBox
//{
//    mangled_ppc("D3DVolumeTexture_LockBox");
//};

//D3DLineTexture_GetLevelDesc
//{
//    mangled_ppc("D3DLineTexture_GetLevelDesc");
//};

//D3DLineTexture_GetSurfaceLevel
//{
//    mangled_ppc("D3DLineTexture_GetSurfaceLevel");
//};

//D3DLineTexture_LockRect
//{
//    mangled_ppc("D3DLineTexture_LockRect");
//};

//D3DLineTexture_AsyncLockRect
//{
//    mangled_ppc("D3DLineTexture_AsyncLockRect");
//};

//D3DDevice_CreateTexture
//{
//    mangled_ppc("D3DDevice_CreateTexture");
//};

//D3DDevice_CreateSurface
//{
//    mangled_ppc("D3DDevice_CreateSurface");
//};

//D3DSurface_GetDesc
//{
//    mangled_ppc("D3DSurface_GetDesc");
//};

//D3DSurface_LockRect
//{
//    mangled_ppc("D3DSurface_LockRect");
//};

//D3DSurface_AsyncLockRect
//{
//    mangled_ppc("D3DSurface_AsyncLockRect");
//};

//D3DVolume_GetDesc
//{
//    mangled_ppc("D3DVolume_GetDesc");
//};

//D3DVolume_LockBox
//{
//    mangled_ppc("D3DVolume_LockBox");
//};

